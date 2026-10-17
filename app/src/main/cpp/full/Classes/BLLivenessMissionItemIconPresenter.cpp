#include "BLLivenessMissionItemIconPresenter.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "CCObject.h"
#include "BLLivenessMissionItemIconView.h"
#include "CCTouch.h"
#include "CCDirector.h"
#include "BLLeakUtils.h"
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
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0057e520;
extern "C" unsigned long UNK_0057e53a;
extern "C" unsigned long UNK_0057e580;
extern "C" unsigned long UNK_0057e5a8;
extern "C" unsigned long UNK_0057e786;
extern "C" unsigned long UNK_0057e79e;
extern "C" unsigned long _UNK_0057e56c;
extern "C" unsigned long _UNK_0057e570;
extern "C" unsigned long _UNK_0057e584;
extern "C" unsigned long _UNK_0057e5ac;
extern "C" unsigned long _UNK_0057e7e0;
extern "C" unsigned long _UNK_0057e7e4;
extern "C" unsigned long g_0057e520;
extern "C" unsigned long g_0057e53a;
extern "C" unsigned long g_0057e56c;
extern "C" unsigned long g_0057e570;
extern "C" unsigned long g_0057e580;
extern "C" unsigned long g_0057e584;
extern "C" unsigned long g_0057e5a8;
extern "C" unsigned long g_0057e5ac;
extern "C" unsigned long g_0057e786;
extern "C" unsigned long g_0057e79e;
extern "C" unsigned long g_0057e7e0;
extern "C" unsigned long g_0057e7e4;
bool BLLivenessMissionItemIconPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

BLLivenessMissionItemIconPresenter::~BLLivenessMissionItemIconPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0057e520 + g_0057e56c);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x2c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0057e53a + g_0057e570,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLLivenessMissionItemIconPresenter::BLLivenessMissionItemIconPresenter()
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
  iVar3 = *(int *)(&g_0057e786 + g_0057e7e0);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x2c;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0057e79e + g_0057e7e4,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  piVar2 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar1 = (undefined4)((**(code **)(*piVar2 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar1)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 0);
  return;
}

undefined4 BLLivenessMissionItemIconPresenter::create()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x1c))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}


void BLLivenessMissionItemIconPresenter::onEnter()
{
  return;
}

void BLLivenessMissionItemIconPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  return;
}

// ===== 修复: 补回被误删的函数占位 (2) =====
void BLLivenessMissionItemIconPresenter::initWithView(BLLivenessMissionItemIconView* p1)
{
  *(undefined4 *)(((int)this) + 0x18) = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  return;
}

undefined8 BLLivenessMissionItemIconPresenter::initWithData(std::string p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
