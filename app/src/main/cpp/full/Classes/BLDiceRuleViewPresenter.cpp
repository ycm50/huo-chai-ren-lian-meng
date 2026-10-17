#include "BLDiceRuleViewPresenter.h"
#include "BLDiceRuleView.h"
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
extern "C" unsigned long UNK_006235ac;
extern "C" unsigned long UNK_006235c4;
extern "C" unsigned long UNK_006235dc;
extern "C" unsigned long UNK_0062364c;
extern "C" unsigned long UNK_00623666;
extern "C" unsigned long UNK_006236ac;
extern "C" unsigned long UNK_006236d4;
extern "C" unsigned long UNK_0062371a;
extern "C" unsigned long UNK_00623750;
extern "C" unsigned long UNK_006237e4;
extern "C" unsigned long _UNK_006235b0;
extern "C" unsigned long _UNK_006235c8;
extern "C" unsigned long _UNK_006235e0;
extern "C" unsigned long _UNK_00623698;
extern "C" unsigned long _UNK_0062369c;
extern "C" unsigned long _UNK_006236b0;
extern "C" unsigned long _UNK_006236d8;
extern "C" unsigned long _UNK_00623708;
extern "C" unsigned long _UNK_0062377c;
extern "C" unsigned long _UNK_00623780;
extern "C" unsigned long _UNK_006237ec;
extern "C" unsigned long g_006235ac;
extern "C" unsigned long g_006235b0;
extern "C" unsigned long g_006235c4;
extern "C" unsigned long g_006235c8;
extern "C" unsigned long g_006235dc;
extern "C" unsigned long g_006235e0;
extern "C" unsigned long g_0062364c;
extern "C" unsigned long g_00623666;
extern "C" unsigned long g_00623698;
extern "C" unsigned long g_0062369c;
extern "C" unsigned long g_006236ac;
extern "C" unsigned long g_006236b0;
extern "C" unsigned long g_006236d4;
extern "C" unsigned long g_006236d8;
extern "C" unsigned long g_00623708;
extern "C" unsigned long g_0062371a;
extern "C" unsigned long g_00623750;
extern "C" unsigned long g_0062377c;
extern "C" unsigned long g_00623780;
extern "C" unsigned long g_006237e4;
extern "C" unsigned long g_006237ec;
void BLDiceRuleViewPresenter::tick(float p1)
{
  return;
}

bool BLDiceRuleViewPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLDiceRuleViewPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLDiceRuleViewPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLDiceRuleViewPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

BLDiceRuleViewPresenter::~BLDiceRuleViewPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0062364c + g_00623698);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x3c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00623666 + g_0062369c,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLDiceRuleViewPresenter::onClose(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  int *piVar2;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(g_00623708);
  ((UIManager *)this)->shareManager();
  ((UIManager *)this)->popUnEnableScrollView();
  piVar2 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar1 = (undefined4)((**(code **)(*piVar2 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar1)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  return;
}

BLDiceRuleViewPresenter::BLDiceRuleViewPresenter()
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
  iVar3 = *(int *)(&g_0062371a + g_0062377c);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x3c;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 1);
  ((UIManager *)this)->shareManager();
  ((UIManager *)this)->pushCurScrollViewUnEnable();
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00623750 + g_00623780,&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

void BLDiceRuleViewPresenter::onEnter()
{
  return;
}

void BLDiceRuleViewPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  return;
}

undefined4 BLDiceRuleViewPresenter::create(BLDiceRuleView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x1c))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}


void BLDiceRuleViewPresenter::setGuize(char const* p1)
{
  int *piVar1;
  
  piVar1 = (int *)((BLDiceRuleView *)*(undefined4 *)(((int)this) + 0x18))->getLabGuize();
  (**(code **)(*piVar1 + 0x234))(piVar1,p1);
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
void BLDiceRuleViewPresenter::initWithView(BLDiceRuleView* p1)
{
  int *piVar1;
  
  *(undefined4 *)(((int)this) + 0x18) = (undefined4)(intptr_t)p1;
  piVar1 = (int *)((BLDiceRuleView *)p1)->getBtnClose();
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)(&g_006237e4 + g_006237ec),0,0x20);
  return;
}
