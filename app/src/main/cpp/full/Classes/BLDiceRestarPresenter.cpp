#include "BLDiceRestarPresenter.h"
#include "BLDiceRestarView.h"
#include "BLLeakUtils.h"
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
extern "C" unsigned long UNK_00622d54;
extern "C" unsigned long UNK_00622d6c;
extern "C" unsigned long UNK_00622d84;
extern "C" unsigned long UNK_00622df8;
extern "C" unsigned long UNK_00622e12;
extern "C" unsigned long UNK_00622e58;
extern "C" unsigned long UNK_00622e80;
extern "C" unsigned long UNK_00622ec6;
extern "C" unsigned long UNK_00622efc;
extern "C" unsigned long UNK_00622f8a;
extern "C" unsigned long UNK_00622faa;
extern "C" unsigned long UNK_00622fc8;
extern "C" unsigned long _UNK_00622d58;
extern "C" unsigned long _UNK_00622d70;
extern "C" unsigned long _UNK_00622d88;
extern "C" unsigned long _UNK_00622e44;
extern "C" unsigned long _UNK_00622e48;
extern "C" unsigned long _UNK_00622e5c;
extern "C" unsigned long _UNK_00622e84;
extern "C" unsigned long _UNK_00622eb4;
extern "C" unsigned long _UNK_00622f28;
extern "C" unsigned long _UNK_00622f2c;
extern "C" unsigned long _UNK_00622fd8;
extern "C" unsigned long _UNK_00622fdc;
extern "C" unsigned long _UNK_00622fe0;
extern "C" unsigned long g_00622d54;
extern "C" unsigned long g_00622d58;
extern "C" unsigned long g_00622d6c;
extern "C" unsigned long g_00622d70;
extern "C" unsigned long g_00622d84;
extern "C" unsigned long g_00622d88;
extern "C" unsigned long g_00622df8;
extern "C" unsigned long g_00622e12;
extern "C" unsigned long g_00622e44;
extern "C" unsigned long g_00622e48;
extern "C" unsigned long g_00622e58;
extern "C" unsigned long g_00622e5c;
extern "C" unsigned long g_00622e80;
extern "C" unsigned long g_00622e84;
extern "C" unsigned long g_00622eb4;
extern "C" unsigned long g_00622ec6;
extern "C" unsigned long g_00622efc;
extern "C" unsigned long g_00622f28;
extern "C" unsigned long g_00622f2c;
extern "C" unsigned long g_00622f8a;
extern "C" unsigned long g_00622faa;
extern "C" unsigned long g_00622fc8;
extern "C" unsigned long g_00622fd8;
extern "C" unsigned long g_00622fdc;
extern "C" unsigned long g_00622fe0;
void BLDiceRestarPresenter::tick(float p1)
{
  return;
}

bool BLDiceRestarPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLDiceRestarPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLDiceRestarPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLDiceRestarPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLDiceRestarPresenter::onBtnOK(cocos2d::CCObject* p1, unsigned int p2)
{
  return;
}

void BLDiceRestarPresenter::onBtnNO(cocos2d::CCObject* p1, unsigned int p2)
{
  return;
}

BLDiceRestarPresenter::~BLDiceRestarPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_00622df8 + g_00622e44);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x3c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00622e12 + g_00622e48,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLDiceRestarPresenter::onClose(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  int *piVar2;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(g_00622eb4);
  piVar2 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar1 = (undefined4)((**(code **)(*piVar2 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar1)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  ((UIManager *)this)->shareManager();
  ((UIManager *)this)->popUnEnableScrollView();
  return;
}

BLDiceRestarPresenter::BLDiceRestarPresenter()
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
  iVar3 = *(int *)(&g_00622ec6 + g_00622f28);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x3c;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 1);
  ((UIManager *)this)->shareManager();
  ((UIManager *)this)->pushCurScrollViewUnEnable();
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00622efc + g_00622f2c,&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

void BLDiceRestarPresenter::onEnter()
{
  return;
}

void BLDiceRestarPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  return;
}

undefined4 BLDiceRestarPresenter::create(BLDiceRestarView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x1c))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
void BLDiceRestarPresenter::initWithView(BLDiceRestarView* p1)
{
  int *piVar1;
  
  *(undefined4 *)(((int)this) + 0x18) = (undefined4)(intptr_t)p1;
  piVar1 = (int *)((BLDiceRestarView *)p1)->getBtnClose();
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)(&g_00622f8a + g_00622fd8),0,0x20);
  piVar1 = (int *)((BLDiceRestarView *)*(undefined4 *)(((int)this) + 0x18))->getBtnOK();
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)(&g_00622faa + g_00622fdc),0,0x20);
  piVar1 = (int *)((BLDiceRestarView *)*(undefined4 *)(((int)this) + 0x18))->getBtnNO();
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)(&g_00622fc8 + g_00622fe0),0,0x20);
  return;
}
