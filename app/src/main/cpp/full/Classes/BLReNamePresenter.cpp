#include "BLReNamePresenter.h"
#include "BLLeakUtils.h"
#include "BLReNameView.h"
#include "ChallengeHttpUtil.h"
#include "CircusData.h"
#include "CircusPlayerinfo.h"
#include "DataManager.h"
#include "Toast.h"
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
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2dc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e954(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_00628408;
extern "C" unsigned long UNK_00628420;
extern "C" unsigned long UNK_00628438;
extern "C" unsigned long UNK_00628450;
extern "C" unsigned long UNK_006284a8;
extern "C" unsigned long UNK_006284c2;
extern "C" unsigned long UNK_00628508;
extern "C" unsigned long UNK_00628530;
extern "C" unsigned long UNK_0062856c;
extern "C" unsigned long UNK_00628588;
extern "C" unsigned long UNK_0062868e;
extern "C" unsigned long UNK_006286bc;
extern "C" unsigned long UNK_0062874e;
extern "C" unsigned long UNK_0062876e;
extern "C" unsigned long _UNK_0062840c;
extern "C" unsigned long _UNK_00628424;
extern "C" unsigned long _UNK_0062843c;
extern "C" unsigned long _UNK_00628454;
extern "C" unsigned long _UNK_006284f4;
extern "C" unsigned long _UNK_006284f8;
extern "C" unsigned long _UNK_0062850c;
extern "C" unsigned long _UNK_00628534;
extern "C" unsigned long _UNK_00628548;
extern "C" unsigned long _UNK_00628678;
extern "C" unsigned long _UNK_0062867c;
extern "C" unsigned long _UNK_006286ec;
extern "C" unsigned long _UNK_006286f0;
extern "C" unsigned long _UNK_0062877c;
extern "C" unsigned long _UNK_00628780;
extern "C" unsigned long g_00628408;
extern "C" unsigned long g_0062840c;
extern "C" unsigned long g_00628420;
extern "C" unsigned long g_00628424;
extern "C" unsigned long g_00628438;
extern "C" unsigned long g_0062843c;
extern "C" unsigned long g_00628450;
extern "C" unsigned long g_00628454;
extern "C" unsigned long g_006284a8;
extern "C" unsigned long g_006284c2;
extern "C" unsigned long g_006284f4;
extern "C" unsigned long g_006284f8;
extern "C" unsigned long g_00628508;
extern "C" unsigned long g_0062850c;
extern "C" unsigned long g_00628530;
extern "C" unsigned long g_00628534;
extern "C" unsigned long g_00628548;
extern "C" unsigned long g_0062856c;
extern "C" unsigned long g_00628588;
extern "C" unsigned long g_00628678;
extern "C" unsigned long g_0062867c;
extern "C" unsigned long g_0062868e;
extern "C" unsigned long g_006286bc;
extern "C" unsigned long g_006286ec;
extern "C" unsigned long g_006286f0;
extern "C" unsigned long g_0062874e;
extern "C" unsigned long g_0062876e;
extern "C" unsigned long g_0062877c;
extern "C" unsigned long g_00628780;
void BLReNamePresenter::tick(float p1)
{
  return;
}

bool BLReNamePresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLReNamePresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLReNamePresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLReNamePresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

BLReNamePresenter::~BLReNamePresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_006284a8 + g_006284f4);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x3c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_006284c2 + g_006284f8,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLReNamePresenter::onClose(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(g_00628548);
  return;
}


BLReNamePresenter::BLReNamePresenter()
{
  undefined4 p2 = 0;

  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar3 = *(int *)(&g_0062868e + g_006286ec);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x3c;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 1);
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_006286bc + g_006286f0,&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  *(int *)((int)this + 4*(8)) = 0;
  return;
}

void BLReNamePresenter::onEnter()
{
  return;
}

void BLReNamePresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  return;
}

undefined4 BLReNamePresenter::create(BLReNameView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x24))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

undefined4 BLReNamePresenter::initWithView(BLReNameView* p1)
{
  int *piVar1;
  
  *(undefined4 *)(((int)this) + 0x1c) = (undefined4)(intptr_t)p1;
  piVar1 = (int *)((BLReNameView *)p1)->getBtnClose();
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)(&g_0062874e + g_0062877c),0,0x20);
  piVar1 = (int *)((BLReNameView *)*(undefined4 *)(((int)this) + 0x1c))->getBtnOK();
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)(&g_0062876e + g_00628780),0,0x20);
  return 1;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
void BLReNamePresenter::onBtnOK(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
