#include "BLBuyCishuPresenter.h"
#include "BLBuyCishuView.h"
#include "BLLeakUtils.h"
#include "CircusData.h"
#include "CircusPlayerinfo.h"
#include "DataManager.h"
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
extern "C" unsigned long UNK_006224cc;
extern "C" unsigned long UNK_006224e4;
extern "C" unsigned long UNK_006224fc;
extern "C" unsigned long UNK_00622514;
extern "C" unsigned long UNK_0062256c;
extern "C" unsigned long UNK_00622586;
extern "C" unsigned long UNK_006225cc;
extern "C" unsigned long UNK_006225f4;
extern "C" unsigned long UNK_00622696;
extern "C" unsigned long UNK_006226c4;
extern "C" unsigned long UNK_00622752;
extern "C" unsigned long UNK_00622772;
extern "C" unsigned long _UNK_006224d0;
extern "C" unsigned long _UNK_006224e8;
extern "C" unsigned long _UNK_00622500;
extern "C" unsigned long _UNK_00622518;
extern "C" unsigned long _UNK_006225b8;
extern "C" unsigned long _UNK_006225bc;
extern "C" unsigned long _UNK_006225d0;
extern "C" unsigned long _UNK_006225f8;
extern "C" unsigned long _UNK_0062260c;
extern "C" unsigned long _UNK_006226f0;
extern "C" unsigned long _UNK_006226f4;
extern "C" unsigned long _UNK_00622780;
extern "C" unsigned long _UNK_00622784;
extern "C" unsigned long g_006224cc;
extern "C" unsigned long g_006224d0;
extern "C" unsigned long g_006224e4;
extern "C" unsigned long g_006224e8;
extern "C" unsigned long g_006224fc;
extern "C" unsigned long g_00622500;
extern "C" unsigned long g_00622514;
extern "C" unsigned long g_00622518;
extern "C" unsigned long g_0062256c;
extern "C" unsigned long g_00622586;
extern "C" unsigned long g_006225b8;
extern "C" unsigned long g_006225bc;
extern "C" unsigned long g_006225cc;
extern "C" unsigned long g_006225d0;
extern "C" unsigned long g_006225f4;
extern "C" unsigned long g_006225f8;
extern "C" unsigned long g_0062260c;
extern "C" unsigned long g_00622696;
extern "C" unsigned long g_006226c4;
extern "C" unsigned long g_006226f0;
extern "C" unsigned long g_006226f4;
extern "C" unsigned long g_00622752;
extern "C" unsigned long g_00622772;
extern "C" unsigned long g_00622780;
extern "C" unsigned long g_00622784;
void BLBuyCishuPresenter::tick(float p1)
{
  return;
}

bool BLBuyCishuPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLBuyCishuPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLBuyCishuPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLBuyCishuPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

BLBuyCishuPresenter::~BLBuyCishuPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0062256c + g_006225b8);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x3c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00622586 + g_006225bc,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLBuyCishuPresenter::onClose(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(g_0062260c);
  return;
}


BLBuyCishuPresenter::BLBuyCishuPresenter()
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
  iVar3 = *(int *)(&g_00622696 + g_006226f0);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x3c;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 1);
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_006226c4 + g_006226f4,&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

void BLBuyCishuPresenter::onEnter()
{
  return;
}

void BLBuyCishuPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  return;
}

undefined4 BLBuyCishuPresenter::create(BLBuyCishuView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x20))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

undefined4 BLBuyCishuPresenter::initWithView(BLBuyCishuView* p1)
{
  int *piVar1;
  
  *(undefined4 *)(((int)this) + 0x1c) = (undefined4)(intptr_t)p1;
  piVar1 = (int *)((BLBuyCishuView *)p1)->getBtnClose();
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)(&g_00622752 + g_00622780),0,0x20);
  piVar1 = (int *)((BLBuyCishuView *)*(undefined4 *)(((int)this) + 0x1c))->getBtnOK();
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)(&g_00622772 + g_00622784),0,0x20);
  return 1;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
void BLBuyCishuPresenter::onBtnOK(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
