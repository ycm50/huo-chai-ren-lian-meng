#include "BLLivenessDegreeRewardInfoPresenter.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "BLLivenessDegreeRewardInfoView.h"
#include "CCObject.h"
#include "CCTouch.h"
#include "CCDirector.h"
#include "BLLeakUtils.h"
#include "BLLivenessMissionItemRewardPresenter.h"
#include "UIManager.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <new>   // ghost_fix.js 自动补齐
using namespace cocos2d;
// 兜底声明
extern "C" unsigned long g_0057e2b6;
extern "C" unsigned long g_0057e2c0;
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e59c(...);
extern "C" long long func_0079e794(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0057e154;
extern "C" unsigned long UNK_0057e16e;
extern "C" unsigned long UNK_0057e1b4;
extern "C" unsigned long UNK_0057e1dc;
extern "C" unsigned long UNK_0057e206;
extern "C" unsigned long UNK_0057e21e;
extern "C" unsigned long _UNK_0057e1a0;
extern "C" unsigned long _UNK_0057e1a4;
extern "C" unsigned long _UNK_0057e1b8;
extern "C" unsigned long _UNK_0057e1e0;
extern "C" unsigned long _UNK_0057e1f4;
extern "C" unsigned long _UNK_0057e268;
extern "C" unsigned long _UNK_0057e26c;
extern "C" unsigned long _UNK_0057e440;
extern "C" unsigned long _UNK_0057e444;
extern "C" unsigned long g_0057e154;
extern "C" unsigned long g_0057e16e;
extern "C" unsigned long g_0057e1a0;
extern "C" unsigned long g_0057e1a4;
extern "C" unsigned long g_0057e1b4;
extern "C" unsigned long g_0057e1b8;
extern "C" unsigned long g_0057e1dc;
extern "C" unsigned long g_0057e1e0;
extern "C" unsigned long g_0057e1f4;
extern "C" unsigned long g_0057e206;
extern "C" unsigned long g_0057e21e;
extern "C" unsigned long g_0057e268;
extern "C" unsigned long g_0057e26c;
extern "C" unsigned long g_0057e440;
extern "C" unsigned long g_0057e444;
bool BLLivenessDegreeRewardInfoPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

BLLivenessDegreeRewardInfoPresenter::~BLLivenessDegreeRewardInfoPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0057e154 + g_0057e1a0);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x2c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0057e16e + g_0057e1a4,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLLivenessDegreeRewardInfoPresenter::onClose(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(g_0057e1f4);
  return;
}

BLLivenessDegreeRewardInfoPresenter::BLLivenessDegreeRewardInfoPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar3 = *(int *)(&g_0057e206 + g_0057e268);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x2c;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0057e21e + g_0057e26c,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  piVar2 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar1 = (undefined4)((**(code **)(*piVar2 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar1)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 0);
  ((UIManager *)this)->shareManager();
  ((UIManager *)this)->pushCurScrollViewUnEnable();
  return;
}

undefined4 BLLivenessDegreeRewardInfoPresenter::create()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x1c))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}


void BLLivenessDegreeRewardInfoPresenter::onEnter()
{
  return;
}

void BLLivenessDegreeRewardInfoPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  ((UIManager *)this)->shareManager();
  ((UIManager *)this)->popUnEnableScrollView();
  return;
}

// ===== 修复: 补回被误删的函数占位 (2) =====
void BLLivenessDegreeRewardInfoPresenter::initWithView(BLLivenessDegreeRewardInfoView* p1)
{
  *(int *)(((int)this) + 0x18) = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  (**(code **)(**(int **)(p1 + 0x10c) + 0x254))
            (*(int **)(p1 + 0x10c),((int)this),*(undefined4 *)((unsigned char *)((char *)&g_0057e2b6 + (intptr_t)(g_0057e2c0))),0,
             0x20);
  return;
}

void BLLivenessDegreeRewardInfoPresenter::initWithData(std::vector<RewardItemData*, std::allocator<RewardItemData*>> * p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
