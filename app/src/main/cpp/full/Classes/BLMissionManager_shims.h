#pragma once
// =====================================================================
//  BLMissionManager 专用兼容垫片（只被 BLMissionManager.cpp 包含）
//  目的：吸收 Hex-Rays 反编译残留的 libstdc++ 内部类型名 / sir 单例模板 /
//        umeng SDK 前置声明不完整等，避免改动任何既有头文件。
// =====================================================================
#include <cstddef>
#include <cstdint>
#include <string>
#include <vector>
#include <map>
#include <utility>
#include <functional>
#include <memory>

// R14: sir:: 定义已提升到 BLForwards.h, 此处不再重复

namespace std {
template <class T, class A = std::allocator<T> >
class _Vector_base { public: ~_Vector_base() {} void _vb_dtor(...) {} };
template <class K, class V, class KOfV, class Cmp, class A>
class _Rb_tree {
public:
  _Rb_tree() {}
  ~_Rb_tree() {}
  void *find(const K &);
  void *operator[](const K &);
  void *_M_copy(...);
  void _M_erase(...);
  void _rbt_ctor(...) {}
  void _rbt_dtor(...) {}
  void _rbt_erase(...) {}
  void _rbt_copy(...) {}

};
template <class P> struct _Select1st { };
template <class P> struct _Rb_tree_node { };
template <bool B> struct _Destroy_aux { template <class P> static void __destroy(P, P); };
}

namespace __gnu_cxx { template <class It, class C> class __normal_iterator { }; }

namespace umeng { class MobClickCpp { public: void buy(char const *, int, int); }; }

// 虚表槽取值（保留反编译原始语义）
inline code *_vfn(void *p) { return *(code **)p; }
struct treasmissitem { };
struct treasmissitem2 { };

// std::map::operator[] 的替代（反编译里用指针语义调用）
template <class M, class K> inline void *_map_addr(M *m, const K &k) { (void)m; (void)k; return (void *)0; }
// C++ 成员函数"无对象"调用形式的兜底（返回 0，语法层可编译）
inline long long _sf(...) { return 0; }
// operator=(指针, 任意) 兜底
template <class T, class U> inline void _set_assign(T *p, const U &v) { (void)p; (void)v; }