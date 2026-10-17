#pragma once
// sir_builtin.h —— sir 框架内建类的**可见定义**。
//
// 背景: BLForwards.h 里只有前向声明 (`class singleton_container;`),
// 而还原体里会出现 `((sir::singleton_container *)this)->instance()` 这类成员访问,
// 只看到前向声明会报 "member access into incomplete type 'sir::singleton_container'"。
// 这些类的完整定义原先只在 _missing_impls.cpp 里, 对其他 TU 不可见 —— 故提到本头。
//
// 注意: 类体外定义 (instance/add_singleton/find/~autolocker) 仍留在 _missing_impls.cpp,
//       以保证产出外部符号 (类内定义是隐式 inline, 链不出去)。

namespace sir {

class singleton_base {
public:
  singleton_base() {}
  virtual ~singleton_base() {}
};

class singleton_container {
public:
  static singleton_container *instance();
  void add_singleton(singleton_base *p, int slot);
  singleton_base *find(const void *key);
};

class autolocker {
public:
  ~autolocker();
};

// 注: singleton<T,N> 模板已由 BLForwards.h 定义, 此处不重复声明。

}  // namespace sir
