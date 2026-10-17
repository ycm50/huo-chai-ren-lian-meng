#include "BLAnimateData.h"
#include "BLAnimateFrameData.h"
#include "BLAttackHurtData.h"
#include "BLLeakUtils.h"
#include "DataCacheManager.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <new>   // ghost_fix.js 自动补齐
using namespace cocos2d;
// 兜底声明
extern "C" long long func_0042f3fc(...);
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2dc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4bc(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long _DAT_00453e70;
extern "C" unsigned long _DAT_00453e74;
extern "C" unsigned long _DAT_00454584;
extern "C" unsigned long _DAT_00454588;
extern "C" unsigned long _DAT_0045458c;
extern "C" unsigned long _DAT_0045507c;
extern "C" unsigned long _DAT_00455080;
extern "C" unsigned long _DAT_00455084;
extern "C" unsigned long _DAT_00455088;
extern "C" unsigned long _DAT_0045508c;
extern "C" unsigned long _DAT_00455090;
extern "C" unsigned long _DAT_00455094;
extern "C" unsigned long _DAT_00455098;
extern "C" unsigned long _DAT_0045509c;
extern "C" unsigned long _DAT_004550a0;
extern "C" unsigned long _DAT_004550a4;
extern "C" unsigned long _DAT_004550a8;
extern "C" unsigned long _DAT_004550ac;
extern "C" unsigned long _DAT_004550b0;
extern "C" unsigned long _DAT_004550b4;
extern "C" unsigned long _DAT_004550b8;
extern "C" unsigned long _DAT_004550bc;
extern "C" unsigned long _DAT_004550c0;
extern "C" unsigned long _DAT_004550c4;
extern "C" unsigned long _DAT_004550c8;
extern "C" unsigned long _DAT_004553f0;
extern "C" unsigned long _DAT_004553f4;
extern "C" unsigned long _DAT_004553f8;
extern "C" unsigned long _DAT_004553fc;
extern "C" unsigned long _DAT_00455400;
extern "C" unsigned long _DAT_00455404;
extern "C" unsigned long _DAT_00455408;
extern "C" unsigned long _DAT_0045540c;
extern "C" unsigned long _DAT_00455410;
extern "C" unsigned long _DAT_00455414;
extern "C" unsigned long _DAT_00455418;
extern "C" unsigned long _DAT_0045541c;
extern "C" unsigned long _DAT_00455420;
extern "C" unsigned long _DAT_00455424;
extern "C" unsigned long _DAT_00455428;
extern "C" unsigned long _DAT_0045542c;
extern "C" unsigned long g_00453e70;
extern "C" unsigned long g_00453e74;
extern "C" unsigned long g_00454584;
extern "C" unsigned long g_00454588;
extern "C" unsigned long g_0045458c;
extern "C" unsigned long g_0045507c;
extern "C" unsigned long g_00455080;
extern "C" unsigned long g_00455084;
extern "C" unsigned long g_00455088;
extern "C" unsigned long g_0045508c;
extern "C" unsigned long g_00455090;
extern "C" unsigned long g_00455094;
extern "C" unsigned long g_00455098;
extern "C" unsigned long g_0045509c;
extern "C" unsigned long g_004550a0;
extern "C" unsigned long g_004550a4;
extern "C" unsigned long g_004550a8;
extern "C" unsigned long g_004550ac;
extern "C" unsigned long g_004550b0;
extern "C" unsigned long g_004550b4;
extern "C" unsigned long g_004550b8;
extern "C" unsigned long g_004550bc;
extern "C" unsigned long g_004550c0;
extern "C" unsigned long g_004550c4;
extern "C" unsigned long g_004550c8;
extern "C" unsigned long g_004553f0;
extern "C" unsigned long g_004553f4;
extern "C" unsigned long g_004553f8;
extern "C" unsigned long g_004553fc;
extern "C" unsigned long g_00455400;
extern "C" unsigned long g_00455404;
extern "C" unsigned long g_00455408;
extern "C" unsigned long g_0045540c;
extern "C" unsigned long g_00455410;
extern "C" unsigned long g_00455414;
extern "C" unsigned long g_00455418;
extern "C" unsigned long g_0045541c;
extern "C" unsigned long g_00455420;
extern "C" unsigned long g_00455424;
extern "C" unsigned long g_00455428;
extern "C" unsigned long g_0045542c;
BLAttackHurtData* BLAnimateData::getAttackData() const
{
  return (BLAttackHurtData*)(*(undefined4 *)(((int)this) + 0x20));
}

void BLAnimateData::setAttackData(BLAttackHurtData* p1)
{
  *(undefined4 *)(((int)this) + 0x20) = (undefined4)(intptr_t)p1;
  return;
}

BLAnimateData::~BLAnimateData()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;

  undefined4 uVar1;
  int *piStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  piStack_20 = (int *)((int)this);
  uStack_1c = (undefined4)(p2);
  uStack_18 = (undefined4)(p3);
  if (*(int *)((int)this + 4*(5)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(5)) = 0;
  }
  if (*(int *)((int)this + 4*(7)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(7)) = 0;
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_1c,((intptr_t)"BLAnimateData"),&piStack_20);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_1c);
  func_0079e2bc(&uStack_1c);
  func_0079e2bc(((int)this) + 6);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLAnimateData::BLAnimateData()
{
  undefined4 p2 = 0;

  int iVar1;
  undefined4 uVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  *(int *)((int)this + 4*(6)) = *(int *)(g_00454588 + 0x454516) + 0xc;
  iVar1 = ((long long)::operator new((size_t)(0x18)));
  0 /* ctorZero */;
  *(int *)((int)this + 4*(7)) = 0;
  *(int *)((int)this + 4*(8)) = 0;
  *(int *)((int)this + 4*(5)) = iVar1;
  *(undefined1 *)(((int)this) + 9) = 1;
  *(undefined1 *)((int)((int)this) + 0x25) = 1;
  *(undefined1 *)((int)((int)this) + 0x26) = 1;
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLAnimateData"),&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

bool BLAnimateData::init()
{
  return 1;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
void BLAnimateData::initWith(cocos2d::CCDictionary* p1, std::string p2, std::string p3)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
