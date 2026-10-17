#include "BLGameCrackAlertPresenter.h"
#include "BLGameCrackAlertView.h"
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
extern "C" unsigned long UNK_005ec60c;
extern "C" unsigned long UNK_005ec626;
extern "C" unsigned long UNK_005ec66c;
extern "C" unsigned long UNK_005ec694;
extern "C" unsigned long UNK_005ec6ba;
extern "C" unsigned long UNK_005ec6e8;
extern "C" unsigned long UNK_005ec77c;
extern "C" unsigned long _UNK_005ec658;
extern "C" unsigned long _UNK_005ec65c;
extern "C" unsigned long _UNK_005ec670;
extern "C" unsigned long _UNK_005ec698;
extern "C" unsigned long _UNK_005ec714;
extern "C" unsigned long _UNK_005ec718;
extern "C" unsigned long _UNK_005ec79c;
extern "C" unsigned long g_005ec60c;
extern "C" unsigned long g_005ec626;
extern "C" unsigned long g_005ec658;
extern "C" unsigned long g_005ec65c;
extern "C" unsigned long g_005ec66c;
extern "C" unsigned long g_005ec670;
extern "C" unsigned long g_005ec694;
extern "C" unsigned long g_005ec698;
extern "C" unsigned long g_005ec6ba;
extern "C" unsigned long g_005ec6e8;
extern "C" unsigned long g_005ec714;
extern "C" unsigned long g_005ec718;
extern "C" unsigned long g_005ec77c;
extern "C" unsigned long g_005ec79c;
bool BLGameCrackAlertPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLGameCrackAlertPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLGameCrackAlertPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLGameCrackAlertPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLGameCrackAlertPresenter::tick(float p1)
{
  return;
}

BLGameCrackAlertPresenter::~BLGameCrackAlertPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_005ec60c + g_005ec658);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x3c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005ec626 + g_005ec65c,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLGameCrackAlertPresenter::onSure(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(0x53);
  return;
}

BLGameCrackAlertPresenter::BLGameCrackAlertPresenter()
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
  iVar3 = *(int *)(&g_005ec6ba + g_005ec714);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x3c;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 1);
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005ec6e8 + g_005ec718,&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

undefined4 BLGameCrackAlertPresenter::create(BLGameCrackAlertView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x1c))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLGameCrackAlertPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  return;
}

void BLGameCrackAlertPresenter::onEnter()
{
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
void BLGameCrackAlertPresenter::initWithView(BLGameCrackAlertView* p1)
{
  int *piVar1;
  
  *(undefined4 *)(((int)this) + 0x18) = (undefined4)(intptr_t)p1;
  piVar1 = (int *)((BLGameCrackAlertView *)p1)->getBtnSure();
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)(&g_005ec77c + g_005ec79c),0,0x20);
  piVar1 = (int *)((BLGameCrackAlertView *)*(undefined4 *)(((int)this) + 0x18))->getBtnSure();
  (**(code **)(*piVar1 + 0x1d4))(piVar1,0xffffff7e);
  return;
}
