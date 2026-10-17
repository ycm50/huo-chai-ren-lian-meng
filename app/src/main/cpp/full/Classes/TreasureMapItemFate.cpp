#include "TreasureMapItemFate.h"
#include "DataManager.h"
#include "TreasureMapItemBase.h"
#include "UserData.h"
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
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e58c(...);
extern "C" long long func_0079e64c(...);
extern "C" long long func_0079e6c0(...);
extern "C" long long func_0079e734(...);
extern "C" long long func_0079e8c4(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long _DAT_004b8180;
extern "C" unsigned long _DAT_004b8184;
extern "C" unsigned long _DAT_004b8188;
extern "C" unsigned long _DAT_004b8368;
extern "C" unsigned long _DAT_004b836c;
extern "C" unsigned long _DAT_004b8370;
extern "C" unsigned long _DAT_004b8374;
extern "C" unsigned long _DAT_004b8608;
extern "C" unsigned long _DAT_004b8c1c;
extern "C" unsigned long _DAT_004b9228;
extern "C" unsigned long g_004b8180;
extern "C" unsigned long g_004b8184;
extern "C" unsigned long g_004b8188;
extern "C" unsigned long g_004b8368;
extern "C" unsigned long g_004b836c;
extern "C" unsigned long g_004b8370;
extern "C" unsigned long g_004b8374;
extern "C" unsigned long g_004b8608;
extern "C" unsigned long g_004b8c1c;
extern "C" unsigned long g_004b9228;
void TreasureMapItemFate::onTrigger()
{
  return;
}

void TreasureMapItemFate::reset()
{
  *(undefined1 *)(((int)this) + 0x18) = 0;
  return;
}



void TreasureMapItemFate::triggerEnd()
{
  *(undefined1 *)(((int)this) + 0x18) = 1;
  TreasureMapItemBase::triggerEnd();
  return;
}

TreasureMapItemFate::~TreasureMapItemFate()
{
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  TreasureMapItemBase::~TreasureMapItemBase();
  return;
}

TreasureMapItemFate::TreasureMapItemFate()
{
  0 /* ctorZero */;
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  *(int *)((int)this + 4*(1)) = 0xb;
  *(int *)((int)this + 4*(9)) = 0;
  return;
}

// ===== 修复: 补回被误删的函数占位 (3) =====
void TreasureMapItemFate::toString()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;
  undefined4 p4 = 0;

  undefined4 uVar1;
  undefined4 uStack_c;
  
  uStack_c = (undefined4)(p4);
  cocos2d::CCString::createWithFormat((char const*)((intptr_t)"%d%s%d%s%d"), *(undefined4 *)(p2 + 4), g_004b8188 + 0x4b816a, *(undefined1 *)(p2 + 0x18), g_004b8180 + 0x4b815c, *(undefined4 *)(p2 + 0x1c), p3);
  uVar1 = (undefined4)(((cocos2d::CCString *)this)->getCString());
  func_0079e45c(((int)this),uVar1,&uStack_c);
  return;
}

void TreasureMapItemFate::beforeTrigger()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;

  uint uVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  
  iVar4 = (undefined4)(intptr_t)((int *)((int)this));
  uVar1 = (undefined4)(((long long)::lrand48()));
  uVar1 = (undefined4)(g_004b8370 & uVar1);
  if ((int)uVar1 < 0) {
    uVar1 = (undefined4)((uVar1 - 1 | 0xfffffffe) + 1);
  }
  uVar1 = (undefined4)(-(((uVar1 - 1) - (uVar1 - 2)) - (uint)(uVar1 - 1 == 0)) | 1);
  *(uint *)(((int)this) + 0x24) = uVar1 * g_004b8374;
  if (uVar1 == 0xffffffff) {
    piVar2 = (int *)((DataManager *)this)->shareDataManager();
    uVar3 = (undefined4)((**(code **)(*piVar2 + 0x28))());
    uVar5 = (undefined4)(intptr_t)(((UserData *)uVar3)->getVirNumber(1));
    iVar4 = func_0079e64c((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),g_004b8368,g_004b836c,
                            iVar4,p2,p3);
    if (iVar4 != 0) {
      piVar2 = (int *)((DataManager *)this)->shareDataManager();
      uVar3 = (undefined4)((**(code **)(*piVar2 + 0x28))());
      uVar5 = (undefined4)(intptr_t)(((UserData *)uVar3)->getVirNumber(1));
      uVar3 = (undefined4)(((long long)([](long long _a){double _x;__builtin_memcpy(&_x,&_a,8);return (long long)(int)_x;}((((long long)(unsigned)((int)uVar5))|(((long long)(unsigned)((int)((ulonglong)uVar5 >> 0x20) + -0x80000000))<<32))))));
      *(undefined4 *)(((int)this) + 0x24) = uVar3;
    }
  }
  piVar2 = (int *)((DataManager *)this)->shareDataManager();
  uVar3 = (undefined4)((**(code **)(*piVar2 + 0x28))());
  uVar5 = (undefined4)(intptr_t)(((long long)([](int _a){double _d=(double)(int)_a;long long _o;__builtin_memcpy(&_o,&_d,8);return _o;}((int)(*(undefined4 *)(((int)this) + 0x24))))));
  uVar6 = (undefined4)(1);
  ((UserData *)uVar3)->addVirNumber(1, (int)uVar5, (int)((ulonglong)uVar5 >> 0x20));
  return;
}

void TreasureMapItemFate::initWithData(std::string p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
