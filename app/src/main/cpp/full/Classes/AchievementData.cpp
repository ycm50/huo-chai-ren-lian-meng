#include "AchievementData.h"
#include "AchievementItemData.h"
#include "BLLeakUtils.h"
#include "DataManager.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
using namespace cocos2d;
// 兜底声明
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long _DAT_00467954;
extern "C" unsigned long _DAT_00467958;
extern "C" unsigned long _DAT_00467a64;
extern "C" unsigned long _DAT_00467a68;
extern "C" unsigned long _DAT_00467d60;
extern "C" unsigned long _DAT_00467d64;
extern "C" unsigned long g_00467954;
extern "C" unsigned long g_00467958;
extern "C" unsigned long g_00467a64;
extern "C" unsigned long g_00467a68;
extern "C" unsigned long g_00467d60;
extern "C" unsigned long g_00467d64;
cocos2d::CCArray* AchievementData::getArrayAchievements() const
{
  return (cocos2d::CCArray*)(*(undefined4 *)(((int)this) + 0x14));
}

void AchievementData::setArrayAchievements(cocos2d::CCArray* p1)
{
  *(undefined4 *)(((int)this) + 0x14) = (undefined4)(intptr_t)p1;
  return;
}

AchievementData::~AchievementData()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int *piStack_18;
  undefined4 uStack_14;
  
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  if (*(int *)((int)this + 4*(5)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(5)) = 0;
  }
  /* STUB_STR_FIX (R73)：gnustl string ctor 桩不填槽 -> `(std::string)(char*)uStack_14` 用 NULL 构造
     -> strlen(NULL)（真机 tombstone: AchievementData::~AchievementData()+102）。改为真字符串。 */
  BLLeakUtils *pLeakUtils = (BLLeakUtils *)(intptr_t)((BLLeakUtils *)this)->share();
  pLeakUtils->removeClass(std::string("AchievementData"));
  /* 原为显式调用基类析构 `((cocos2d::CCObject*)((int)this))->~CCObject();`
     —— C++ 在派生类析构返回后会自动调用基类析构，显式再调 = 双重析构，故略过（编译器负责）。 */
  return;
}

// ===== 修复: 补回被误删的函数占位 (2) =====
AchievementData::AchievementData()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  /* STUB_STR_FIX (R73)：原为
       uVar1 = BLLeakUtils::share();
       func_0079e45c(&uStack_14, "AchievementData", &piStack_18);       // gnustl string ctor —— 本工程为**空桩**
       ((BLLeakUtils*)uVar1)->addClass((std::string)(char*)uStack_14);  // uStack_14 仍为 0 -> std::string(NULL)
       func_0079e2bc(&uStack_14);
     gnustl 桩不会填 uStack_14，随后用 NULL 构造 libc++ string -> strlen(NULL)
     （真机 tombstone: AchievementData::AchievementData()+84 -> char_traits::length -> strlen_a15, fault 0x0）。
     原版语义就是"把字面量包成字符串传给 addClass"，故直接用具名 libc++ string。 */
  BLLeakUtils *pLeakUtils = (BLLeakUtils *)(intptr_t)((BLLeakUtils *)this)->share();
  pLeakUtils->addClass(std::string("AchievementData"));
  iVar2 = (undefined4)(intptr_t)(cocos2d::CCArray::create());
  *(int *)((int)this + 4*(5)) = iVar2;
  if (iVar2 != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  return;
}

bool AchievementData::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
