#include "BLPopOtherPayPresenter.h"
#include "CCLabelTTF.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "CCNotificationCenter.h"
#include "CCArray.h"
#include "CCObject.h"
#include "CCTouch.h"
#include "CCDirector.h"
#include "CCInteger.h"
#include "BLLeakUtils.h"
#include "BLPopOtherPayView.h"
#include "BLRichText.h"
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
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e57c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_005f55ec;
extern "C" unsigned long UNK_005f5604;
extern "C" unsigned long UNK_005f561c;
extern "C" unsigned long UNK_005f5690;
extern "C" unsigned long UNK_005f56aa;
extern "C" unsigned long UNK_005f56f0;
extern "C" unsigned long UNK_005f5718;
extern "C" unsigned long UNK_005f5740;
extern "C" unsigned long UNK_005f577c;
extern "C" unsigned long UNK_005f57b8;
extern "C" unsigned long UNK_005f57d2;
extern "C" unsigned long UNK_005f5800;
extern "C" unsigned long UNK_005f588e;
extern "C" unsigned long UNK_005f58ae;
extern "C" unsigned long UNK_005f58cc;
extern "C" unsigned long _UNK_005f55f0;
extern "C" unsigned long _UNK_005f5608;
extern "C" unsigned long _UNK_005f5620;
extern "C" unsigned long _UNK_005f56dc;
extern "C" unsigned long _UNK_005f56e0;
extern "C" unsigned long _UNK_005f56f4;
extern "C" unsigned long _UNK_005f571c;
extern "C" unsigned long _UNK_005f5748;
extern "C" unsigned long _UNK_005f5784;
extern "C" unsigned long _UNK_005f57c0;
extern "C" unsigned long _UNK_005f582c;
extern "C" unsigned long _UNK_005f5830;
extern "C" unsigned long _UNK_005f590c;
extern "C" unsigned long _UNK_005f5910;
extern "C" unsigned long _UNK_005f5914;
extern "C" unsigned long _UNK_005f5918;
extern "C" unsigned long _UNK_005f5978;
extern "C" unsigned long g_005f55ec;
extern "C" unsigned long g_005f55f0;
extern "C" unsigned long g_005f5604;
extern "C" unsigned long g_005f5608;
extern "C" unsigned long g_005f561c;
extern "C" unsigned long g_005f5620;
extern "C" unsigned long g_005f5690;
extern "C" unsigned long g_005f56aa;
extern "C" unsigned long g_005f56dc;
extern "C" unsigned long g_005f56e0;
extern "C" unsigned long g_005f56f0;
extern "C" unsigned long g_005f56f4;
extern "C" unsigned long g_005f5718;
extern "C" unsigned long g_005f571c;
extern "C" unsigned long g_005f5740;
extern "C" unsigned long g_005f5748;
extern "C" unsigned long g_005f577c;
extern "C" unsigned long g_005f5784;
extern "C" unsigned long g_005f57b8;
extern "C" unsigned long g_005f57c0;
extern "C" unsigned long g_005f57d2;
extern "C" unsigned long g_005f5800;
extern "C" unsigned long g_005f582c;
extern "C" unsigned long g_005f5830;
extern "C" unsigned long g_005f588e;
extern "C" unsigned long g_005f58ae;
extern "C" unsigned long g_005f58cc;
extern "C" unsigned long g_005f590c;
extern "C" unsigned long g_005f5910;
extern "C" unsigned long g_005f5914;
extern "C" unsigned long g_005f5918;
extern "C" unsigned long g_005f5978;
bool BLPopOtherPayPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLPopOtherPayPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLPopOtherPayPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLPopOtherPayPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLPopOtherPayPresenter::tick(float p1)
{
  return;
}

BLPopOtherPayPresenter::~BLPopOtherPayPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_005f5690 + g_005f56dc);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x3c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005f56aa + g_005f56e0,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLPopOtherPayPresenter::onClose(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(0x9c);
  uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  uVar2 = (undefined4)(cocos2d::CCInteger::create(0));
  ((cocos2d::CCNotificationCenter *)uVar1)->postNotification((char const*)&g_005f5740 + g_005f5748, (cocos2d::CCObject*)uVar2);
  return;
}

void BLPopOtherPayPresenter::onPay_duan(cocos2d::CCObject* p1, unsigned int p2)
{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  (**(code **)(*piVar1 + 0x17c))(piVar1,0);
  uVar2 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar2)->removeUIByID(0x9c);
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  uVar3 = (undefined4)(cocos2d::CCInteger::create(1));
  ((cocos2d::CCNotificationCenter *)uVar2)->postNotification((char const*)&g_005f577c + g_005f5784, (cocos2d::CCObject*)uVar3);
  return;
}

void BLPopOtherPayPresenter::onPay_other(cocos2d::CCObject* p1, unsigned int p2)
{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  (**(code **)(*piVar1 + 0x17c))(piVar1,1);
  uVar2 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar2)->removeUIByID(0x9c);
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  uVar3 = (undefined4)(cocos2d::CCInteger::create(1));
  ((cocos2d::CCNotificationCenter *)uVar2)->postNotification((char const*)&g_005f57b8 + g_005f57c0, (cocos2d::CCObject*)uVar3);
  return;
}

BLPopOtherPayPresenter::BLPopOtherPayPresenter()
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
  iVar3 = *(int *)(&g_005f57d2 + g_005f582c);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x3c;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 1);
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005f5800 + g_005f5830,&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

undefined4 BLPopOtherPayPresenter::create(BLPopOtherPayView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x1c))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLPopOtherPayPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  return;
}

void BLPopOtherPayPresenter::onEnter()
{
  return;
}

// ===== 修复: 补回被误删的函数占位 (2) =====
void BLPopOtherPayPresenter::initWithView(BLPopOtherPayView* p1)
{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined1 auStack_38 [8];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  *(undefined4 *)(((int)this) + 0x18) = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  piVar1 = (int *)((BLPopOtherPayView *)(p1))->getBtnClose();
  uStack_30 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_005f588e + (intptr_t)(g_005f590c))));
  uStack_2c = (undefined4)(0);
  (**(code **)(*(int *)(piVar1) + (0x254)))(piVar1,((int)this),uStack_30,0,0x20);
  piVar1 = (int *)((BLPopOtherPayView *)(*(undefined4 *)(((int)this) + 0x18)))->getBtnPay_duan();
  uStack_28 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_005f58ae + (intptr_t)(g_005f5910))));
  uStack_24 = (undefined4)(0);
  (**(code **)(*(int *)(piVar1) + (0x254)))(piVar1,((int)this),uStack_28,0,0x20);
  piVar1 = (int *)((BLPopOtherPayView *)(*(undefined4 *)(((int)this) + 0x18)))->getBtnPay_other();
  uStack_20 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_005f58cc + (intptr_t)(g_005f5914))));
  uStack_1c = (undefined4)(0);
  (**(code **)(*(int *)(piVar1) + (0x254)))(piVar1,((int)this),uStack_20,0,0x20);
  uVar2 = (undefined4)(((BLPopOtherPayView *)(*(undefined4 *)(((int)this) + 0x18)))->getLabelContent());
  puVar3 = (undefined4 *)(**(code **)(**(int **)(((int)this) + 0x18) + 0x8c))();
  uVar4 = (undefined4)(func_0079e57c(*puVar3,g_005f5918));
  0 /* ctorZero */;
  ((cocos2d::CCLabelTTF *)(uVar2))->setDimensions(*(const CCSize *)(void *)auStack_38);
  return;
}

void BLPopOtherPayPresenter::initWithRichData(cocos2d::CCArray* p1)
{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  code *pcVar4;
  
  piVar1 = ((void)((BLRichText *)this)->create((cocos2d::CCArray*)p1, 0x118, 0x14),(int *)0);
  (**(code **)(**(int **)(((int)this) + 0x18) + 0xcc))(*(int **)(((int)this) + 0x18),piVar1,g_005f5978);
  pcVar4 = *(code **)(*piVar1 + 0x5c);
  piVar2 = (int *)(**(code **)(*(int *)(piVar1) + (0x8c)))(piVar1);
  uVar3 = (undefined4)(func_0079e4fc(*piVar2 + -0x80000000,0x3f000000));
  (*pcVar4)(piVar1,uVar3);
  pcVar4 = *(code **)(*piVar1 + 100);
  piVar2 = (int *)((BLPopOtherPayView *)(*(undefined4 *)(((int)this) + 0x18)))->getLabelContent();
  uVar3 = (undefined4)((**(code **)(*(int *)(piVar2) + (0x68)))());
  (*pcVar4)(piVar1,uVar3);
  return;
}
