#include "BLMissionRewardPresenter.h"
#include "CCNotificationCenter.h"
#include "CCObject.h"
#include "BLMissionRewardView.h"
#include "BLLeakUtils.h"
#include "BLMissionRewardGiftItemPresenter.h"
#include "DataManager.h"
#include "UserData.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <new>   // ghost_fix.js 自动补齐
using namespace cocos2d;
// 兜底声明
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2ec(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_005b7dec;
extern "C" unsigned long UNK_005b7e00;
extern "C" unsigned long UNK_005b8204;
extern "C" unsigned long UNK_005b8218;
extern "C" unsigned long UNK_005b8240;
extern "C" unsigned long UNK_005b8244;
extern "C" unsigned long UNK_005b8336;
extern "C" unsigned long _UNK_005b7e30;
extern "C" unsigned long _UNK_005b7e34;
extern "C" unsigned long _UNK_005b8268;
extern "C" unsigned long _UNK_005b826c;
extern "C" unsigned long _UNK_005b8270;
extern "C" unsigned long _UNK_005b8274;
extern "C" unsigned long _UNK_005b8380;
extern "C" unsigned long _UNK_005b8384;
extern "C" unsigned long _UNK_005b8388;
extern "C" unsigned long _UNK_005b838c;
extern "C" unsigned long _UNK_005b8390;
extern "C" unsigned long _UNK_005b841c;
extern "C" unsigned long _UNK_005b8420;
extern "C" unsigned long g_005b7dec;
extern "C" unsigned long g_005b7e00;
extern "C" unsigned long g_005b7e30;
extern "C" unsigned long g_005b7e34;
extern "C" unsigned long g_005b8204;
extern "C" unsigned long g_005b8218;
extern "C" unsigned long g_005b8240;
extern "C" unsigned long g_005b8244;
extern "C" unsigned long g_005b8268;
extern "C" unsigned long g_005b826c;
extern "C" unsigned long g_005b8270;
extern "C" unsigned long g_005b8274;
extern "C" unsigned long g_005b8336;
extern "C" unsigned long g_005b8380;
extern "C" unsigned long g_005b8384;
extern "C" unsigned long g_005b8388;
extern "C" unsigned long g_005b838c;
extern "C" unsigned long g_005b8390;
extern "C" unsigned long g_005b841c;
extern "C" unsigned long g_005b8420;
BLMissionRewardPresenter::~BLMissionRewardPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int *piStack_18;
  undefined4 uStack_14;
  
  /* VPTR_FIX(R87): vptr=(&g_A+g_B)+8 ?? g_ ?? 0 ?? -> ???? SEGV?????? vptr???? */;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005b7e00 + g_005b7e34,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}


undefined4 BLMissionRewardPresenter::create()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x1c))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLMissionRewardPresenter::onEnter()
{
  return;
}

void BLMissionRewardPresenter::onExit()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar1)->removeAllObservers((cocos2d::CCObject*)((int)this));
  return;
}

// ===== 修复: 补回被误删的函数占位 (4) =====
BLMissionRewardPresenter::BLMissionRewardPresenter()
{
  undefined4 uVar1;
  undefined1 auStack_24 [4];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  0 /* ctorZero */;
  *(int *)this = *(int *)((unsigned char *)((char *)&g_005b8204 + (intptr_t)(g_005b8268))) + 8;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(auStack_24,(unsigned char *)((char *)&g_005b8218 + (intptr_t)(g_005b826c)),&uStack_20);
  ((BLLeakUtils *)(uVar1))->addClass((std::string)(char*)auStack_24);
  func_0079e2bc(auStack_24);
  *(int *)((int)this + 4*(6)) = 1;
  uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  uStack_1c = (undefined4)(0);
  uStack_20 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_005b8240 + (intptr_t)(g_005b8270))));
  ((cocos2d::CCNotificationCenter *)(((int)this)))->addObserver((cocos2d::CCObject*)uStack_20, 0, (char const*)(unsigned char *)((char *)&g_005b8244 + (intptr_t)(g_005b8274)), 0);
  return;
}

void BLMissionRewardPresenter::initWithView(BLMissionRewardView* p1)
{
  *(undefined4 *)(((int)this) + 0x14) = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  return;
}

void BLMissionRewardPresenter::updateWithData(int p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMissionRewardPresenter::onUpdateInfo()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
