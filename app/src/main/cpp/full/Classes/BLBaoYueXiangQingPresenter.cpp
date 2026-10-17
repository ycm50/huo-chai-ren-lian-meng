#include "BLBaoYueXiangQingPresenter.h"
#include "CCObject.h"
#include "CCTouch.h"
#include "CCDirector.h"
#include "BLBaoYueXiangQingView.h"
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
extern "C" unsigned long UNK_00540bb0;
extern "C" unsigned long UNK_00540bca;
extern "C" unsigned long UNK_00540c10;
extern "C" unsigned long UNK_00540c38;
extern "C" unsigned long UNK_00540c5e;
extern "C" unsigned long UNK_00540c8c;
extern "C" unsigned long UNK_00540d20;
extern "C" unsigned long _UNK_00540bfc;
extern "C" unsigned long _UNK_00540c00;
extern "C" unsigned long _UNK_00540c14;
extern "C" unsigned long _UNK_00540c3c;
extern "C" unsigned long _UNK_00540cb8;
extern "C" unsigned long _UNK_00540cbc;
extern "C" unsigned long _UNK_00540d28;
extern "C" unsigned long g_00540bb0;
extern "C" unsigned long g_00540bca;
extern "C" unsigned long g_00540bfc;
extern "C" unsigned long g_00540c00;
extern "C" unsigned long g_00540c10;
extern "C" unsigned long g_00540c14;
extern "C" unsigned long g_00540c38;
extern "C" unsigned long g_00540c3c;
extern "C" unsigned long g_00540c5e;
extern "C" unsigned long g_00540c8c;
extern "C" unsigned long g_00540cb8;
extern "C" unsigned long g_00540cbc;
extern "C" unsigned long g_00540d20;
extern "C" unsigned long g_00540d28;
bool BLBaoYueXiangQingPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLBaoYueXiangQingPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLBaoYueXiangQingPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLBaoYueXiangQingPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLBaoYueXiangQingPresenter::tick(float p1)
{
  return;
}

BLBaoYueXiangQingPresenter::~BLBaoYueXiangQingPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_00540bb0 + g_00540bfc);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x3c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00540bca + g_00540c00,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLBaoYueXiangQingPresenter::onClose(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(0x2ac);
  return;
}

BLBaoYueXiangQingPresenter::BLBaoYueXiangQingPresenter()
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
  iVar3 = *(int *)(&g_00540c5e + g_00540cb8);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x3c;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 1);
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00540c8c + g_00540cbc,&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

undefined4 BLBaoYueXiangQingPresenter::create(BLBaoYueXiangQingView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x1c))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLBaoYueXiangQingPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  return;
}

void BLBaoYueXiangQingPresenter::onEnter()
{
  return;
}

void BLBaoYueXiangQingPresenter::initWithView(BLBaoYueXiangQingView* p1)
{
  int *piVar1;
  
  *(undefined4 *)(((int)this) + 0x18) = (undefined4)(intptr_t)p1;
  piVar1 = (int *)((BLBaoYueXiangQingView *)p1)->getBtnClose();
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)(&g_00540d20 + g_00540d28),0,0x20);
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
void BLBaoYueXiangQingPresenter::initWithData(std::string * p1)
{
  int *piVar1;
  
  piVar1 = (int *)((BLBaoYueXiangQingView *)*(undefined4 *)(((int)this) + 0x18))->getLabelContentTitle();
  (**(code **)(*(int *)(piVar1) + (0x234)))(piVar1,*(int *)p1);
  return;
}
