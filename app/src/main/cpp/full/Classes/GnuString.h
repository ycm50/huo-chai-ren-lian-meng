// =============================================================================
//  GnuString.h  —  gnustl (GNU libstdc++, _GLIBCXX_USE_CXX11_ABI=0) ABI-compatible
//                  4-byte copy-on-write replacement for std::string
// =============================================================================
//
//  WHY THIS FILE EXISTS
//  --------------------
//  The original libcocos2dcpp.so of DiabloLOL (火柴人联盟) was compiled with
//  Android gnustl (GNU libstdc++, GCC 4.4.3/4.6/4.7/4.9).  gnustl's std::string is
//  the pre-C++11 libstdc++ *copy-on-write* string:
//
//      sizeof(std::string)  == sizeof(void*) == 4      (armv7 / any 32-bit target)
//      alignof(std::string) == 4
//
//  The reconstruction is built with NDK r26 libc++, whose std::string is the SSO
//  design:
//
//      sizeof(std::string)  == 12
//          +0  __is_long_ (bit 0) / __cap_ (bits 1..31)
//          +4  __size_
//          +8  __data_  (long form)  |  SSO: +0 size byte, +1..+11 chars
//
//  Every ghidra-recovered body that touches an object through a hard-coded offset
//  was derived from the *gnustl* layout.  Classes/ contains 162 "(std::string *)"
//  occurrences, 149 of them raw-offset getters such as
//  "return *(std::string *)(((int)this) + 0x24);" — offsets that are only correct
//  for a 4-byte string.  Dropping a 12-byte libc++ object into those slots
//  overflows the operator-new block and makes string slots that sit at 4-byte
//  stride clobber each other.
//
//  MEASURED EVIDENCE (taken from this checkout; not inferred)
//  ---------------------------------------------------------
//  [1] jniLibs/armeabi/libcocos2dcpp.so.orig
//        DT_NEEDED  => libstdc++.so            (gnustl was *shared* here)
//        .comment   => "GCC: (GNU) 4.4.3", "... 4.6 20120106 (prerelease)",
//                      "... 4.7", "... 4.9 20140827 (prerelease)"
//        43917 dynsyms: 0 contain "__cxx11", 168 contain "__gnu_cxx",
//        and the COW-only internal symbol
//        _ZNSs12_S_constructIN9__gnu_cxx17__normal_iteratorIPcSt6vectorIcSaIcEEEEEES2_T_S7_RKS4_St20forward_iterator_tag
//        is present.  basic_string::_S_construct exists ONLY in the COW
//        (pre-C++11) implementation — the SSO string has no such member.
//  [2] _ZNSt6vectorISsSaISsEE5clearEv @0x41a720: the element step is
//        "adds r4, #0x4"  =>  sizeof(std::string) == 4.
//      ("Ss" is the C++98 mangling of std::string, itself proof of the old ABI.)
//  [3] _Z13keyValueToMapRKSs @0x6c3c94..0x6c3c9c
//          ldr  r3, [r7]      ; r7 = &std::string -> r3 = _M_p (the ONLY member)
//          subs r3, #0xc      ; _M_rep() == _M_p - sizeof(_Rep) == _M_p - 12
//          ldr  r3, [r3]      ; _M_length sits at _Rep + 0
//      => a string object is one pointer, and the _Rep header is 12 bytes
//         *before* the character data.
//  [4] _ZNSt6vectorIiSaIiEE9push_backERKi @0x41b460 touches [r0],[r0,#4],[r0,#8],
//      and _ZN22AnimationStatusManager13getSwitchHeroEv zeroes the same three
//      => sizeof(std::vector<T>) == 12 in gnustl (identical to libc++, so no risk).
//  [5] _ZNSt8_Rb_treeIiSt4pairIKiiESt10_Select1stIS2_ESt4lessIiESaIS2_EE13_Rb_tree_implIS6_Lb0EEC2Ev
//      @0x49cc62:  memset(&this[4], 0, 0x10);
//                  this[0x0c] = &this[4]   (_M_header._M_left)
//                  this[0x10] = &this[4]   (_M_header._M_right)
//                  this[0x14] = 0          (_M_node_count)
//      => gnustl std::map/_Rb_tree == 24 bytes (libc++ is 12).  That direction is
//         a *shrink*, so it cannot overflow, but a map must never be poked at with
//         gnustl-internal offsets (count at +0x14, header at +0x04).
//         Measured in Classes/: raw-offset map casts == 0, so this is a latent,
//         not an active, hazard.
//
//  LAYOUT REPRODUCED BY GnuString
//  -----------------------------
//      struct _Rep {                // POD, 12 bytes
//          uint32_t _M_length;      // +0
//          uint32_t _M_capacity;    // +4
//          int32_t  _M_refcount;    // +8
//      };
//      class GnuString { char* _M_p; };    // sizeof == 4, alignof == 4
//
//      _M_rep()        == reinterpret_cast<_Rep*>(_M_p) - 1
//      c_str()/data()  == _M_p
//      empty string    -> _M_p = _S_empty_rep()->_M_refdata(), refcount == -1,
//                         never freed (same sentinel as libstdc++).
//
//  ROBUSTNESS FOR DECOMPILED CODE  (important)
//  -------------------------------------------
//  Recovered constructors often do not construct the string slots (ghidra emits
//  "0 /* ctorZero */" and then writes only the integer fields), so a slot can be
//  observed as all-zero.  GnuString therefore treats "_M_p == nullptr" as "empty"
//  and self-heals to the shared empty rep, which makes a zeroed 4-byte slot safe.
//  With a 12-byte libc++ string the very same zeroed slot is unsafe: libc++
//  reads __is_long_ out of the neighbouring 4-byte word, and when bit 0 is set it
//  dereferences 8 bytes of unrelated neighbours as a heap pointer.
//
//  Optional hardening, GNUSTRING_VALIDATE=1 (default 1 in debug builds): before
//  adopting an in-place rep the header is checked for self-consistency
//  (capacity >= length, 1 <= refcount < 2^20, length < 64 MiB, NUL terminated); if
//  it is not consistent the string degrades to empty instead of crashing.  This
//  contains the "decompiled code casts uninitialised memory to std::string" bug
//  class.
//
//  Deliberate deviation from gnustl internals: libstdc++ marks a freshly created
//  rep "leaked" (refcount == -1) and only materialises a real count on the first
//  copy.  GnuString always tracks a real count starting at 1, and reserves -1 for
//  the shared empty rep.  Observable behaviour (COW sharing, refcount growth,
//  destruction at zero) is identical; only a caller poking _M_refcount directly
//  would notice, and none of the recovered code does.
//
//  USAGE
//  -----
//      #include "GnuString.h"
//      std::string   ->  GnuString                              (textual sweep)
//      *(std::string *)(((int)this) + 0x24)  ->  GNUS_AT(this, 0x24)
//      new ((int)this + 0x24) std::string()  ->  GNUS_INIT(this, 0x24)
//      ((std::string *)((int)this + 0x120))->~basic_string() -> GNUS_DTOR(this, 0x120)
//
//  Prefer the textual sweep over a "#define string GnuString" macro: the macro
//  would rewrite the "typedef basic_string<...> string;" line inside <string>
//  itself and break the STL headers.
//
//  Requires C++11.  Header-only.  No engine dependency.
// =============================================================================

#ifndef GNUABI_GNUSTD_STRING_H
#define GNUABI_GNUSTD_STRING_H

#include <cstddef>
#include <cstring>
#include <cstdint>
#include <string>
#include <functional>

#ifndef GNUSTRING_VALIDATE
#  if defined(NDEBUG)
#    define GNUSTRING_VALIDATE 0
#  else
#    define GNUSTRING_VALIDATE 1
#  endif
#endif

#ifndef GNUSTRING_NO_EXCEPTIONS
#  if defined(__cpp_exceptions) || defined(__EXCEPTIONS) || defined(_CPPUNWIND)
#    define GNUSTRING_HAS_EXCEPTIONS 1
#  else
#    define GNUSTRING_HAS_EXCEPTIONS 0
#  endif
#else
#  define GNUSTRING_HAS_EXCEPTIONS 0
#endif

#if GNUSTRING_HAS_EXCEPTIONS
#  include <new>
#  include <stdexcept>
#  define GNUSTRING_THROW_BADALLOC()    throw ::std::bad_alloc()
#  define GNUSTRING_THROW_LENGTH()      throw ::std::length_error("basic_string::_M_create")
#  define GNUSTRING_THROW_OUTOFRANGE()  throw ::std::out_of_range("basic_string")
#else
#  include <new>
#  include <cstdlib>
#  define GNUSTRING_THROW_BADALLOC()    ::std::abort()
#  define GNUSTRING_THROW_LENGTH()      ::std::abort()
#  define GNUSTRING_THROW_OUTOFRANGE()  ::std::abort()
#endif

// --- atomic refcount primitives ---------------------------------------------
// gnustl used __gnu_cxx::__exchange_and_add_dispatch(), i.e. a 4-byte atomic RMW
// with acquire/release semantics.  On armv7 clang lowers these to ldrex/strex
// inline, so no libatomic is needed.
#if defined(__ATOMIC_ACQ_REL)
#  define GNUSTRING_ATOMIC_INC(p) __atomic_add_fetch((p), 1, __ATOMIC_ACQ_REL)
#  define GNUSTRING_ATOMIC_DEC(p) __atomic_sub_fetch((p), 1, __ATOMIC_ACQ_REL)
#else
#  define GNUSTRING_ATOMIC_INC(p) __sync_add_and_fetch((p), 1)
#  define GNUSTRING_ATOMIC_DEC(p) __sync_sub_and_fetch((p), 1)
#endif

namespace gnuabi {

// =============================================================================
//  _Rep — the COW control block: 12 bytes, sitting immediately before the chars.
//  (The original allocated "sizeof(_Rep) + capacity + 1" bytes and returned a
//  pointer to _Rep + 1 — verified at 0x6c3c98 by "subs r3, #0xc".)
// =============================================================================
struct _Rep
{
    typedef unsigned int size_type;

    size_type _M_length;    // +0   strlen; also what size() returns
    size_type _M_capacity;  // +4   usable chars, excluding the NUL
    int       _M_refcount;  // +8   -1 == empty-rep / leaked sentinel, never freed

    char* _M_refdata() const
    { return const_cast<char*>(reinterpret_cast<const char*>(this) + sizeof(_Rep)); }

    bool _M_is_leaked() const { return _M_refcount < 0; }
    void _M_set_leaked()      { _M_refcount = -1; }
    void _M_set_sharable()    { _M_refcount = 0; }
    void _M_set_length(size_type n) { _M_length = n; _M_refdata()[n] = '\0'; }

    static _Rep* _S_empty_rep();
    static _Rep* _S_create(size_type capacity, size_type old_capacity);
    void _M_destroy() { ::operator delete(static_cast<void*>(this)); }
};

// libstdc++ keeps a static "char _S_empty_rep_storage[sizeof(_Rep)+1]" whose _Rep
// starts at offset 0, so _M_refdata() lands on the trailing '\0'.  Reproduced
// exactly: the storage is a POD with a constant initialiser => .rodata, no dynamic
// initialisation, no static-init-order hazard.
struct _S_EmptyRepStorage
{
    _Rep  _rep;                 // 12 bytes
    char  _terminator;          // the '\0' of the empty string = _M_refdata()[0]
    char  _reserved[19];        // slack: libstdc++'s static storage also over-reserves.
                                // It also stops GCC's -Wstringop-overflow from
                                // flagging a stray _M_set_length() on the sentinel.
};

inline _Rep* _Rep::_S_empty_rep()
{
    static const _S_EmptyRepStorage _S_storage = { { 0u, 0u, -1 }, '\0', { 0 } };
    return const_cast<_Rep*>(&_S_storage._rep);
}

inline _Rep* _Rep::_S_create(size_type capacity, size_type old_capacity)
{
    (void)old_capacity;
    if (capacity > ((~(size_type)0) / 2) - sizeof(_Rep) - 1)
        GNUSTRING_THROW_LENGTH();

    const size_type __size = (size_type)(sizeof(_Rep) + (capacity + 1) * sizeof(char));
#if GNUSTRING_HAS_EXCEPTIONS
    void* __place = ::operator new(__size);
#else
    void* __place = ::operator new(__size, ::std::nothrow);
    if (!__place) GNUSTRING_THROW_BADALLOC();
#endif
    _Rep* __p = static_cast<_Rep*>(__place);
    __p->_M_length   = 0;
    __p->_M_capacity = capacity;
    __p->_M_refcount = 1;                 // fresh == single owner
    __p->_M_refdata()[0] = '\0';
    return __p;
}

// =============================================================================
//  GnuString
// =============================================================================
class GnuString
{
public:
    typedef char          value_type;
    typedef char*         pointer;
    typedef const char*   const_pointer;
    typedef char&         reference;
    typedef const char&   const_reference;
    typedef char*         iterator;
    typedef const char*   const_iterator;
    typedef unsigned int  size_type;
    typedef int           difference_type;
    typedef std::size_t      std_size_type;

    static const size_type npos = (size_type)(~(size_type)0);

private:
    char* _M_p;                                   // <-- the entire object

    _Rep* _M_rep() const
    {
        return _M_p ? reinterpret_cast<_Rep*>(const_cast<char*>(_M_p) - sizeof(_Rep))
                    : _Rep::_S_empty_rep();
    }

    static char* _S_empty_refdata() { return _Rep::_S_empty_rep()->_M_refdata(); }

    void _M_ensure() { if (!_M_p) _M_p = _S_empty_refdata(); }

#if GNUSTRING_VALIDATE
    static bool _M_rep_is_sane(const _Rep* __r)
    {
        if (!__r) return false;
        if (__r->_M_refcount < 1 || __r->_M_refcount > (1 << 20)) return false;
        if (__r->_M_length > (64u << 20)) return false;
        if (__r->_M_capacity > (128u << 20)) return false;
        if (__r->_M_length > __r->_M_capacity) return false;
        if (__r->_M_refdata()[__r->_M_length] != '\0') return false;
        return true;
    }
    // Adopt a caller-supplied in-place rep, or fall back to the empty rep.
    void _M_adopt(const char* __p)
    {
        if (!__p || __p == _S_empty_refdata())
        { _M_p = _S_empty_refdata(); return; }
        _Rep* __r = reinterpret_cast<_Rep*>(const_cast<char*>(__p) - sizeof(_Rep));
        if (!_M_rep_is_sane(__r)) { _M_p = _S_empty_refdata(); return; }
        _M_grab_rep(__r);
    }
#else
    void _M_adopt(const char* __p)
    {
        if (!__p) { _M_p = _S_empty_refdata(); return; }
        _Rep* __r = reinterpret_cast<_Rep*>(const_cast<char*>(__p) - sizeof(_Rep));
        if (__r == _Rep::_S_empty_rep()) { _M_p = _S_empty_refdata(); return; }
        _M_grab_rep(__r);
    }
#endif

    void _M_grab_rep(_Rep* __r)
    {
        if (!__r) { _M_p = _S_empty_refdata(); return; }
        if (__r->_M_is_leaked())                       // empty-rep sentinel: no atomic
            _M_p = __r->_M_refdata();
        else
        {
            GNUSTRING_ATOMIC_INC(&__r->_M_refcount);
            _M_p = __r->_M_refdata();
        }
    }

    void _M_release(char* __old)
    {
        if (!__old) return;
        _Rep* __r = reinterpret_cast<_Rep*>(__old - sizeof(_Rep));
        if (__r->_M_refcount < 0) return;              // -1 sentinel: never freed
        if (GNUSTRING_ATOMIC_DEC(&__r->_M_refcount) <= 0)
            __r->_M_destroy();
    }

    void _M_dispose() { _M_release(_M_p); _M_p = _S_empty_refdata(); }

    bool _M_is_private() const
    {
        _Rep* __r = _M_rep();
        return __r != _Rep::_S_empty_rep() && __r->_M_refcount <= 1;
    }

    // Give ourselves a private buffer of exactly the current length.
    void _M_leak_hard()
    {
        _M_ensure();
        _Rep* __r = _M_rep();
        if (__r == _Rep::_S_empty_rep() || __r->_M_refcount <= 1) return;
        const size_type __len = __r->_M_length;
        _Rep* __new = _Rep::_S_create(__len, 0);
        if (__len) ::memcpy(__new->_M_refdata(), __r->_M_refdata(), __len);
        __new->_M_set_length(__len);
        _M_release(_M_p);
        _M_p = __new->_M_refdata();
    }

    // Guarantee: we exclusively own a buffer with capacity >= __need,
    // preserving the current contents.
    void _M_prepare(size_type __need)
    {
        _M_ensure();
        _Rep* __r = _M_rep();
        if (__r->_M_refcount <= 1 && __r != _Rep::_S_empty_rep()
            && __r->_M_capacity >= __need)
            return;
        const bool  __empty = (__r == _Rep::_S_empty_rep());
        const size_type __len = __empty ? 0u : __r->_M_length;
        const size_type __cap = (__need > __len) ? __need : __len;
        _Rep* __new = _Rep::_S_create(__cap, __empty ? 0u : __r->_M_capacity);
        if (__len) ::memcpy(__new->_M_refdata(), __r->_M_refdata(), __len);
        __new->_M_set_length(__len);
        _M_release(_M_p);
        _M_p = __new->_M_refdata();
    }

    void _M_copy_from(const char* __s, size_type __n)
    {
        if (!__n) { _M_p = _S_empty_refdata(); return; }
        _Rep* __r = _Rep::_S_create(__n, 0);
        ::memcpy(__r->_M_refdata(), __s, __n);
        __r->_M_set_length(__n);
        _M_p = __r->_M_refdata();
    }

    // Like libstdc++'s _M_create: ask for at least 1.5x when growing in place.
    static size_type _M_grow(size_type __need)
    { return __need + (__need >> 1) + 1; }

public:
    // ---- construction --------------------------------------------------------
    GnuString() : _M_p(_S_empty_refdata()) { }

    GnuString(const char* __s) : _M_p(_S_empty_refdata())       // implicit, like gnustl
    { if (__s && *__s) _M_copy_from(__s, (size_type)::strlen(__s)); }

    GnuString(const char* __s, size_type __n) : _M_p(_S_empty_refdata())
    { if (__s && __n) _M_copy_from(__s, __n); }

    GnuString(const char* __s, size_type __pos, size_type __n) : _M_p(_S_empty_refdata())
    {
        if (!__s) return;
        const size_type __l = (size_type)::strlen(__s);
        if (__pos > __l) GNUSTRING_THROW_OUTOFRANGE();
        const size_type __cnt = (__n < __l - __pos) ? __n : __l - __pos;
        if (__cnt) _M_copy_from(__s + __pos, __cnt);
    }

    GnuString(size_type __n, char __c) : _M_p(_S_empty_refdata())
    {
        if (!__n) return;
        _Rep* __r = _Rep::_S_create(__n, 0);
        ::memset(__r->_M_refdata(), __c, __n);
        __r->_M_set_length(__n);
        _M_p = __r->_M_refdata();
    }

    GnuString(const GnuString& __s) : _M_p(nullptr) { _M_adopt(__s._M_p); }

    // gnustl (C++11 ABI 0) has no move constructor; ours is an extension that
    // behaves exactly like the copy when the compiler does not use it.
    GnuString(GnuString&& __s) noexcept : _M_p(__s._M_p)
    { __s._M_p = _S_empty_refdata(); }

    ~GnuString() { if (_M_p) _M_release(_M_p); }

    // ---- assignment ----------------------------------------------------------
    GnuString& operator=(const GnuString& __s)
    {
        if (this == &__s) return *this;
        char* __old = _M_p;
        _M_p = nullptr;
        _M_adopt(__s._M_p);
        _M_release(__old);
        return *this;
    }

    GnuString& operator=(GnuString&& __s) noexcept
    {
        if (this != &__s) { _M_dispose(); _M_p = __s._M_p; __s._M_p = _S_empty_refdata(); }
        return *this;
    }

    GnuString& operator=(const char* __s)
    {
        if (!__s) { clear(); return *this; }
        return assign(__s, (size_type)::strlen(__s));
    }

    GnuString& operator=(char __c) { return assign(1, __c); }

    GnuString& assign(const GnuString& __s)
    {
        if (this == &__s) return *this;
        char* __old = _M_p;
        _M_p = nullptr;
        _M_adopt(__s._M_p);
        _M_release(__old);
        return *this;
    }

    GnuString& assign(const char* __s) { return __s ? assign(__s, (size_type)::strlen(__s)) : (clear(), *this); }

    GnuString& assign(const char* __s, size_type __n)
    {
        if (!__s || !__n) { clear(); return *this; }
        if (_M_aliases(__s))                       // e.g. s.assign(s.c_str() + 1)
            return assign(GnuString(__s, __n));
        _M_prepare(__n);
        ::memcpy(_M_p, __s, __n);
        _M_rep()->_M_set_length(__n);
        return *this;
    }

    GnuString& assign(const GnuString& __s, size_type __pos, size_type __n)
    {
        const size_type __l = __s.size();
        if (__pos > __l) GNUSTRING_THROW_OUTOFRANGE();
        return assign(__s.c_str() + __pos, (__n < __l - __pos) ? __n : __l - __pos);
    }

    GnuString& assign(size_type __n, char __c)
    {
        if (!__n) { clear(); return *this; }
        _M_prepare(__n);
        ::memset(_M_p, __c, __n);
        _M_rep()->_M_set_length(__n);
        return *this;
    }

    // ---- observers -----------------------------------------------------------
    const char* c_str() const { return _M_p ? _M_p : ""; }
    const char* data()  const { return c_str(); }
    size_type   size()     const { return _M_rep()->_M_length; }
    size_type   length()   const { return _M_rep()->_M_length; }
    size_type   capacity() const { return _M_rep()->_M_capacity; }
    bool        empty()    const { return _M_rep()->_M_length == 0; }

    // gnustl-internal surfaces the decompiled code likes to expose
    int   _M_use_count() const { return _M_rep()->_M_refcount; }
    _Rep* _M_rep_public() const { return _M_rep(); }
    char* _M_refdata() const { return const_cast<char*>(c_str()); }
    bool  _M_is_leaked_public() const { return _M_rep()->_M_is_leaked(); }
    bool  _M_is_shared() const { _Rep* r = _M_rep(); return r != _Rep::_S_empty_rep() && r->_M_refcount > 1; }
    bool  _M_valid() const { return _M_p != nullptr; }

    // NOTE: the implicit "operator const char*" below also makes the built-in
    // "operator[](const char*, int)" viable, which would make "s[0]" ambiguous.
    // The int overloads are exact matches and therefore always win.
    char& operator[](size_type __i) { _M_prepare(size()); return _M_p[__i]; }
    const char& operator[](size_type __i) const { return c_str()[__i]; }
    char& operator[](int __i) { _M_prepare(size()); return _M_p[(size_type)__i]; }
    const char& operator[](int __i) const { return c_str()[(size_type)__i]; }
    char& operator[](unsigned long __i) { _M_prepare(size()); return _M_p[(size_type)__i]; }
    const char& operator[](unsigned long __i) const { return c_str()[(size_type)__i]; }

    char& at(size_type __i)
    {
        if (__i >= size()) GNUSTRING_THROW_OUTOFRANGE();
        _M_prepare(size());
        return _M_p[__i];
    }
    const char& at(size_type __i) const
    {
        if (__i >= size()) GNUSTRING_THROW_OUTOFRANGE();
        return c_str()[__i];
    }
    char&       front()       { return (*this)[0]; }
    const char& front() const { return c_str()[0]; }
    char&       back()        { return (*this)[size() - 1]; }
    const char& back() const  { return c_str()[size() - 1]; }

    iterator       begin()        { _M_prepare(size()); return _M_p; }
    const_iterator begin()  const { return c_str(); }
    const_iterator cbegin() const { return c_str(); }
    iterator       end()          { _M_prepare(size()); return _M_p + size(); }
    const_iterator end()    const { return c_str() + size(); }
    const_iterator cend()   const { return c_str() + size(); }

    // ---- libstdc++-style internal helpers ------------------------------------
    // GNUSTL_STR_FIX(R73): 供 func_0079e2bc 跳板使用 —— 只对"看起来真是构造过的 rep"才析构。
    // 还原代码里大量出现 `func_0079e2bc(&slot)`，而该 slot 从未被构造（栈垃圾），
    // 直接 _M_release 会 operator delete(垃圾) -> SEGV。
    static bool _M_rep_is_sane_pub(const void* __p)
    {
        if (!__p) return false;
        const _Rep* __r = reinterpret_cast<const _Rep*>(__p) - 1;
        if (__r->_M_refcount < 1 || __r->_M_refcount > (1 << 20)) return false;
        if (__r->_M_length   > (64u << 20)) return false;
        if (__r->_M_capacity > (128u << 20)) return false;
        if (__r->_M_length > __r->_M_capacity) return false;
        return true;
    }
    _Rep* _M_rep_internal() const { return _M_rep(); }
    void  _M_leak() { _M_prepare(size()); }
    void  _M_set_length(size_type __n) { _M_prepare(__n); _M_rep()->_M_set_length(__n); }
    void  _M_set_capacity(size_type __n) { _M_rep()->_M_capacity = __n; }
    static _Rep* _S_empty_rep() { return _Rep::_S_empty_rep(); }

    // ---- modifiers -----------------------------------------------------------
    void clear()
    {
        _M_ensure();
        _Rep* __r = _M_rep();
        if (__r == _Rep::_S_empty_rep()) return;
        if (__r->_M_refcount <= 1) { __r->_M_set_length(0); return; }
        _M_release(_M_p);
        _M_p = _S_empty_refdata();
    }

    void reserve(size_type __n = 0)
    {
        _M_ensure();
        if (__n <= _M_rep()->_M_capacity && _M_is_private()) return;
        _M_prepare(__n < size() ? size() : __n);
    }

    void resize(size_type __n, char __c = '\0')
    {
        const size_type __len = size();
        if (__n == __len) return;
        if (__n < __len) { _M_leak_hard(); _M_rep()->_M_set_length(__n); return; }
        _M_prepare(__n);
        ::memset(_M_p + __len, __c, __n - __len);
        _M_rep()->_M_set_length(__n);
    }

    GnuString& append(const GnuString& __s) { return append(__s.c_str(), __s.size()); }
    GnuString& append(const char* __s)
    { return __s ? append(__s, (size_type)::strlen(__s)) : *this; }

    GnuString& append(const char* __s, size_type __n)
    {
        if (!__s || !__n) return *this;
        GnuString __tmp;
        const char* __src = __s;
        if (_M_aliases(__s)) { __tmp.assign(__s, __n); __src = __tmp.c_str(); }
        const size_type __len = size();
        const size_type __new = __len + __n;
        _M_prepare(__new > capacity() ? _M_grow(__new) : __new);
        ::memcpy(_M_p + __len, __src, __n);
        _M_rep()->_M_set_length(__new);
        return *this;
    }

    GnuString& append(size_type __n, char __c)
    {
        if (!__n) return *this;
        const size_type __len = size();
        const size_type __new = __len + __n;
        _M_prepare(__new > capacity() ? _M_grow(__new) : __new);
        ::memset(_M_p + __len, __c, __n);
        _M_rep()->_M_set_length(__new);
        return *this;
    }

    GnuString& operator+=(const GnuString& __s) { return append(__s); }
    GnuString& operator+=(const char* __s)      { return append(__s); }
    GnuString& operator+=(char __c)             { return append(1, __c); }

    GnuString& push_back(char __c) { return append(1, __c); }
    void pop_back() { if (size()) resize(size() - 1); }

    void swap(GnuString& __s) noexcept { char* __t = _M_p; _M_p = __s._M_p; __s._M_p = __t; }

    GnuString& insert(size_type __pos, const char* __s)
    { return __s ? insert(__pos, __s, (size_type)::strlen(__s)) : *this; }

    GnuString& insert(size_type __pos, const char* __s, size_type __n)
    {
        if (__pos > size()) GNUSTRING_THROW_OUTOFRANGE();
        if (!__s || !__n) return *this;
        GnuString __tmp;
        const char* __src = __s;
        if (_M_aliases(__s)) { __tmp.assign(__s, __n); __src = __tmp.c_str(); }
        const size_type __len = size(), __new = __len + __n;
        _M_prepare(__new > capacity() ? _M_grow(__new) : __new);
        ::memmove(_M_p + __pos + __n, _M_p + __pos, __len - __pos);
        ::memcpy(_M_p + __pos, __src, __n);
        _M_rep()->_M_set_length(__new);
        return *this;
    }
    GnuString& insert(size_type __pos, const GnuString& __s)
    { return insert(__pos, __s.c_str(), __s.size()); }

    GnuString& erase(size_type __pos = 0, size_type __n = npos)
    {
        const size_type __len = size();
        if (__pos > __len) GNUSTRING_THROW_OUTOFRANGE();
        if (__pos == __len) return *this;
        const size_type __cnt = (__n < __len - __pos) ? __n : __len - __pos;
        if (!__cnt) return *this;
        _M_leak_hard();
        ::memmove(_M_p + __pos, _M_p + __pos + __cnt, __len - __pos - __cnt);
        _M_rep()->_M_set_length(__len - __cnt);
        return *this;
    }

    GnuString substr(size_type __pos = 0, size_type __n = npos) const
    {
        const size_type __len = size();
        if (__pos > __len) GNUSTRING_THROW_OUTOFRANGE();
        const size_type __cnt = (__n < __len - __pos) ? __n : __len - __pos;
        return GnuString(c_str() + __pos, __cnt);
    }

    void replace_all(const char* __from, const char* __to);      // declared, see below

    // ---- search / compare ----------------------------------------------------
    int compare(const GnuString& __s) const { return ::strcmp(c_str(), __s.c_str()); }
    int compare(const char* __s) const
    { return __s ? ::strcmp(c_str(), __s) : (empty() ? 0 : 1); }

    size_type find(const char* __s, size_type __pos = 0) const
    {
        if (!__s || __pos > size()) return npos;
        const char* __f = ::strstr(c_str() + __pos, __s);
        return __f ? (size_type)(__f - c_str()) : npos;
    }
    size_type find(const GnuString& __s, size_type __pos = 0) const { return find(__s.c_str(), __pos); }
    size_type find(char __c, size_type __pos = 0) const
    {
        if (__pos > size()) return npos;
        const char* __f = ::strchr(c_str() + __pos, __c);
        return __f ? (size_type)(__f - c_str()) : npos;
    }
    size_type rfind(const char* __s, size_type __pos = npos) const
    {
        const size_type __len = size();
        if (!__s || !*__s || __len < ::strlen(__s)) return npos;
        size_type __i = (__pos < __len) ? __pos : (__len - 1);
        for (;;) { if (::strncmp(c_str() + __i, __s, ::strlen(__s)) == 0) return __i; if (__i-- == 0) break; }
        return npos;
    }
    size_type rfind(char __c, size_type __pos = npos) const
    {
        const size_type __len = size();
        if (!__len) return npos;
        size_type __i = (__pos < __len) ? __pos : (__len - 1);
        for (;;) { if (c_str()[__i] == __c) return __i; if (__i-- == 0) break; }
        return npos;
    }
    size_type find_first_of(const char* __s, size_type __pos = 0) const
    {
        if (!__s) return npos;
        for (size_type __i = __pos; __i < size(); ++__i)
            if (::strchr(__s, c_str()[__i])) return __i;
        return npos;
    }

    // ---- conversions ---------------------------------------------------------
    // gnustl code passes std::string where a const char* is expected all the time.
    operator const char*() const { return c_str(); }        // NOLINT: deliberate

    // Bridge to the libc++/engine std::string the rest of the project still uses.
    GnuString(const std::string& __s) : _M_p(_S_empty_refdata())
    { if (!__s.empty()) _M_copy_from(__s.data(), (size_type)__s.size()); }

    // no "operator=(std::string)" overload is needed: the converting constructor
    // above plus operator=(GnuString&&) already handles "g = someStdString;".

    std::string str() const { return std::string(c_str(), (std::size_t)size()); }
    // 非 explicit: 大量还原体把 GnuString 直接传给 std::string 形参, explicit 会报 no viable conversion。
  operator std::string() const { return str(); }

private:
    bool _M_aliases(const char* __p) const
    {
        if (!_M_p || !__p) return false;
        return __p >= _M_p && __p < _M_p + _M_rep()->_M_length;
    }
};

inline void GnuString::replace_all(const char* __from, const char* __to)
{
    if (!__from || !*__from) return;
    const size_type __fl = (size_type)::strlen(__from);
    const size_type __tl = __to ? (size_type)::strlen(__to) : 0u;
    GnuString __out;
    size_type __i = 0;
    for (;;)
    {
        size_type __p = find(__from, __i);
        if (__p == npos) { __out.append(c_str() + __i, size() - __i); break; }
        __out.append(c_str() + __i, __p - __i);
        if (__tl) __out.append(__to, __tl);
        __i = __p + __fl;
    }
    swap(__out);
}

// =============================================================================
//  non-member operators
// =============================================================================
inline bool operator==(const GnuString& a, const GnuString& b) { return ::strcmp(a.c_str(), b.c_str()) == 0; }
inline bool operator==(const GnuString& a, const char* b)      { return b && ::strcmp(a.c_str(), b) == 0; }
inline bool operator==(const char* a, const GnuString& b)      { return a && ::strcmp(a, b.c_str()) == 0; }
inline bool operator!=(const GnuString& a, const GnuString& b) { return !(a == b); }
inline bool operator!=(const GnuString& a, const char* b)      { return !(a == b); }
inline bool operator!=(const char* a, const GnuString& b)      { return !(a == b); }
inline bool operator<(const GnuString& a, const GnuString& b)  { return ::strcmp(a.c_str(), b.c_str()) < 0; }
inline bool operator<(const GnuString& a, const char* b)       { return ::strcmp(a.c_str(), b ? b : "") < 0; }
inline bool operator>(const GnuString& a, const GnuString& b)  { return b < a; }
inline bool operator<=(const GnuString& a, const GnuString& b) { return !(b < a); }
inline bool operator>=(const GnuString& a, const GnuString& b) { return !(a < b); }

inline GnuString operator+(const GnuString& a, const GnuString& b) { GnuString r(a); r += b; return r; }
inline GnuString operator+(const GnuString& a, const char* b)      { GnuString r(a); r += b; return r; }
inline GnuString operator+(const char* a, const GnuString& b)      { GnuString r(a); r += b; return r; }
inline GnuString operator+(const GnuString& a, char b)             { GnuString r(a); r += b; return r; }

inline void swap(GnuString& a, GnuString& b) noexcept { a.swap(b); }

// =============================================================================
//  raw-offset helpers — the exact shapes ghidra produced
//      *(std::string *)((int)this + 0x24)              -> GNUS_AT(this, 0x24)
//      new((int)this + 0x24) std::string()             -> GNUS_INIT(this, 0x24)
//      ((std::string *)((int)this + 0x120))->~basic_string() -> GNUS_DTOR(this, 0x120)
// =============================================================================
inline GnuString& raw_at(void* __base, unsigned __off)
{ return *reinterpret_cast<GnuString*>(reinterpret_cast<char*>(__base) + __off); }

inline GnuString& raw_at(const void* __base, unsigned __off)
{ return *reinterpret_cast<GnuString*>(const_cast<char*>(reinterpret_cast<const char*>(__base)) + __off); }

inline void raw_init(void* __base, unsigned __off)
{ ::new (reinterpret_cast<char*>(__base) + __off) GnuString(); }

inline void raw_dtor(void* __base, unsigned __off)
{ reinterpret_cast<GnuString*>(reinterpret_cast<char*>(__base) + __off)->~GnuString(); }

} // namespace gnuabi

// global alias so the mechanical "std::string" -> "GnuString" sweep compiles
typedef ::gnuabi::GnuString GnuString;

#define GNUS_AT(p, off)     (::gnuabi::raw_at((void *)(p), (unsigned)(off)))
#define GNUS_INIT(p, off)   (::gnuabi::raw_init((void *)(p), (unsigned)(off)))
#define GNUS_DTOR(p, off)   (::gnuabi::raw_dtor((void *)(p), (unsigned)(off)))

// =============================================================================
//  ABI self-checks: if any of these fire, hard-coded offsets are being compiled
//  against the wrong string layout.
// =============================================================================
#if defined(__SIZEOF_POINTER__) && __SIZEOF_POINTER__ == 4
static_assert(sizeof(::gnuabi::_Rep) == 12, "gnustl _Rep must be 12 bytes");
static_assert(sizeof(::gnuabi::GnuString) == 4, "GnuString must be 4 bytes (armv7/gnustl)");
static_assert(alignof(::gnuabi::GnuString) == 4, "GnuString alignment must be 4");
#endif

namespace std {
template<> struct hash< ::gnuabi::GnuString >
{
    std::size_t operator()(const ::gnuabi::GnuString& __s) const
    {
        // FNV-1a, 32-bit basis (portable to the armv7 32-bit size_t)
        std::size_t __h = (std::size_t)2166136261u;
        for (const char* __p = __s.c_str(); *__p; ++__p)
        {
            __h ^= (std::size_t)(unsigned char)*__p;
            __h *= (std::size_t)16777619u;
        }
        return __h;
    }
};
} // namespace std

#endif // GNUABI_GNUSTD_STRING_H
