#include "BLMainAccountShuoMingPresenter.h"
#include "BLLeakUtils.h"
#include "BLMainAccountShuoMingView.h"
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
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0058b52c;
extern "C" unsigned long UNK_0058b546;
extern "C" unsigned long UNK_0058b58c;
extern "C" unsigned long UNK_0058b5b4;
extern "C" unsigned long UNK_0058b5e6;
extern "C" unsigned long UNK_0058b614;
extern "C" unsigned long UNK_0058b6a2;
extern "C" unsigned long UNK_0058b6c2;
extern "C" unsigned long _UNK_0058b578;
extern "C" unsigned long _UNK_0058b57c;
extern "C" unsigned long _UNK_0058b590;
extern "C" unsigned long _UNK_0058b5b8;
extern "C" unsigned long _UNK_0058b640;
extern "C" unsigned long _UNK_0058b644;
extern "C" unsigned long _UNK_0058b6d0;
extern "C" unsigned long _UNK_0058b6d4;
extern "C" unsigned long g_0058b52c;
extern "C" unsigned long g_0058b546;
extern "C" unsigned long g_0058b578;
extern "C" unsigned long g_0058b57c;
extern "C" unsigned long g_0058b58c;
extern "C" unsigned long g_0058b590;
extern "C" unsigned long g_0058b5b4;
extern "C" unsigned long g_0058b5b8;
extern "C" unsigned long g_0058b5e6;
extern "C" unsigned long g_0058b614;
extern "C" unsigned long g_0058b640;
extern "C" unsigned long g_0058b644;
extern "C" unsigned long g_0058b6a2;
extern "C" unsigned long g_0058b6c2;
extern "C" unsigned long g_0058b6d0;
extern "C" unsigned long g_0058b6d4;
bool BLMainAccountShuoMingPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLMainAccountShuoMingPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLMainAccountShuoMingPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLMainAccountShuoMingPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLMainAccountShuoMingPresenter::tick(float p1)
{
  return;
}

BLMainAccountShuoMingPresenter::~BLMainAccountShuoMingPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0058b52c + g_0058b578);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x3c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0058b546 + g_0058b57c,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLMainAccountShuoMingPresenter::onBtnOK(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(0x57);
  return;
}

void BLMainAccountShuoMingPresenter::onClose(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(0x57);
  return;
}

BLMainAccountShuoMingPresenter::BLMainAccountShuoMingPresenter()
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
  iVar3 = *(int *)(&g_0058b5e6 + g_0058b640);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x3c;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 1);
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0058b614 + g_0058b644,&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

undefined4 BLMainAccountShuoMingPresenter::create(BLMainAccountShuoMingView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x1c))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLMainAccountShuoMingPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  return;
}

void BLMainAccountShuoMingPresenter::onEnter()
{
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
void BLMainAccountShuoMingPresenter::initWithView(BLMainAccountShuoMingView* p1)
{
  int *piVar1;
  
  *(undefined4 *)(((int)this) + 0x18) = (undefined4)(intptr_t)p1;
  piVar1 = (int *)((BLMainAccountShuoMingView *)p1)->getBtnOK();
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)(&g_0058b6a2 + g_0058b6d0),0,0x20);
  piVar1 = (int *)((BLMainAccountShuoMingView *)*(undefined4 *)(((int)this) + 0x18))->getBtnClose();
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)(&g_0058b6c2 + g_0058b6d4),0,0x20);
  return;
}
