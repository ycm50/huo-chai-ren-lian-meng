#pragma once
// umeng_builtin.h —— umeng::MobClickCpp 的**可见完整定义**。
//
// 背景(与 sir_builtin.h 同类): BLForwards.h 只有 `namespace umeng { class MobClickCpp; }` 前向声明,
// 而 BLMissionManager_shims.h 里的定义只含 buy() 一个方法且不被多数 TU include。
// 还原体调用 MobClickCpp::* 时会报 "member access into incomplete type"。
//
// 方法签名全部由 dump 里的 mangled 名反解(_ZN5umeng11MobClickCpp<N><name><types>), 共 24 个。
// 全部为 static (调用点均为类作用域 MobClickCpp::xxx)。
#include <string>
#include <map>

namespace umeng {
class MobClickCpp {
public:
  static void buy(char const *, int, double);
  static void event(char const *, char const *);
  static void event(char const *, std::map<std::string, std::string> *, int);
  static void event(char const *, std::map<std::string, std::string> *);
  static void failLevel(char const *);
  static void startLevel(char const *);
  static void finishLevel(char const *);
  static void doNotCallItFromYourCode(char const *, char const *);
  static void bonus(double, int);
  static void bonus(char const *, int, double, int);
  static void setLogEnabled(bool);
  static void setCheckDevice(bool);
  static void setEncryptEnabled(bool);
  static void setSessionIdleLimit(int);
  static void setAppVersion(char const *);
  static void setUserLevel(int);
  static void setLatency(unsigned int);
  static void pay(double, int, char const *, int, double);
  static void pay(double, int, double);
  static void use(char const *, int, double);
  static void beginLogPageView(char const *);
  static void endLogPageView(char const *);
  static void profileSignIn(char const *, char const *);
  static void profileSignOff();
};
}  // namespace umeng
