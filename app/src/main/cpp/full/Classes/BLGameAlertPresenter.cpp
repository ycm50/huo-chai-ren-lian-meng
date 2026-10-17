#include "BLGameAlertPresenter.h"
#include "CCLabelTTF.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "CCNotificationCenter.h"
#include "CCArray.h"
#include "CCObject.h"
#include "CCTouch.h"
#include "CCDirector.h"
#include "CCInteger.h"
#include "BLGameAlertView.h"
#include "BLLeakUtils.h"
#include "BLRichText.h"
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
extern "C" unsigned long UNK_005ec220;
extern "C" unsigned long UNK_005ec238;
extern "C" unsigned long UNK_005ec250;
extern "C" unsigned long UNK_005ec2c4;
extern "C" unsigned long UNK_005ec2de;
extern "C" unsigned long UNK_005ec324;
extern "C" unsigned long UNK_005ec34c;
extern "C" unsigned long UNK_005ec374;
extern "C" unsigned long UNK_005ec3a0;
extern "C" unsigned long UNK_005ec3ba;
extern "C" unsigned long UNK_005ec3da;
extern "C" unsigned long UNK_005ec48a;
extern "C" unsigned long UNK_005ec4aa;
extern "C" unsigned long _UNK_005ec224;
extern "C" unsigned long _UNK_005ec23c;
extern "C" unsigned long _UNK_005ec254;
extern "C" unsigned long _UNK_005ec310;
extern "C" unsigned long _UNK_005ec314;
extern "C" unsigned long _UNK_005ec328;
extern "C" unsigned long _UNK_005ec350;
extern "C" unsigned long _UNK_005ec37c;
extern "C" unsigned long _UNK_005ec3a8;
extern "C" unsigned long _UNK_005ec404;
extern "C" unsigned long _UNK_005ec408;
extern "C" unsigned long _UNK_005ec4ec;
extern "C" unsigned long _UNK_005ec4f0;
extern "C" unsigned long _UNK_005ec4f4;
extern "C" unsigned long _UNK_005ec554;
extern "C" unsigned long g_005ec220;
extern "C" unsigned long g_005ec224;
extern "C" unsigned long g_005ec238;
extern "C" unsigned long g_005ec23c;
extern "C" unsigned long g_005ec250;
extern "C" unsigned long g_005ec254;
extern "C" unsigned long g_005ec2c4;
extern "C" unsigned long g_005ec2de;
extern "C" unsigned long g_005ec310;
extern "C" unsigned long g_005ec314;
extern "C" unsigned long g_005ec324;
extern "C" unsigned long g_005ec328;
extern "C" unsigned long g_005ec34c;
extern "C" unsigned long g_005ec350;
extern "C" unsigned long g_005ec374;
extern "C" unsigned long g_005ec37c;
extern "C" unsigned long g_005ec3a0;
extern "C" unsigned long g_005ec3a8;
extern "C" unsigned long g_005ec3ba;
extern "C" unsigned long g_005ec3da;
extern "C" unsigned long g_005ec404;
extern "C" unsigned long g_005ec408;
extern "C" unsigned long g_005ec48a;
extern "C" unsigned long g_005ec4aa;
extern "C" unsigned long g_005ec4ec;
extern "C" unsigned long g_005ec4f0;
extern "C" unsigned long g_005ec4f4;
extern "C" unsigned long g_005ec554;
bool BLGameAlertPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLGameAlertPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLGameAlertPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLGameAlertPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLGameAlertPresenter::tick(float p1)
{
  return;
}

BLGameAlertPresenter::~BLGameAlertPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_005ec2c4 + g_005ec310);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x3c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005ec2de + g_005ec314,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLGameAlertPresenter::onSure(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(0x51);
  uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  uVar2 = (undefined4)(cocos2d::CCInteger::create(1));
  ((cocos2d::CCNotificationCenter *)uVar1)->postNotification((char const*)&g_005ec374 + g_005ec37c, (cocos2d::CCObject*)uVar2);
  return;
}

void BLGameAlertPresenter::onCancle(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(0x51);
  uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  uVar2 = (undefined4)(cocos2d::CCInteger::create(0));
  ((cocos2d::CCNotificationCenter *)uVar1)->postNotification((char const*)&g_005ec3a0 + g_005ec3a8, (cocos2d::CCObject*)uVar2);
  return;
}

BLGameAlertPresenter::BLGameAlertPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_005ec3ba + g_005ec404);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x3c;
  ((UIManager *)this)->shareManager();
  ((UIManager *)this)->pushCurScrollViewUnEnable();
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005ec3da + g_005ec408,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

undefined4 BLGameAlertPresenter::create(BLGameAlertView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x1c))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLGameAlertPresenter::onExit()
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

void BLGameAlertPresenter::onEnter()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14, 1, 1);
  return;
}

// ===== 修复: 补回被误删的函数占位 (2) =====
void BLGameAlertPresenter::initWithView(BLGameAlertView* p1)
{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined1 auStack_30 [8];
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  *(undefined4 *)(((int)this) + 0x18) = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  piVar1 = (int *)((BLGameAlertView *)(p1))->getBtnSure();
  uStack_28 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_005ec48a + (intptr_t)(g_005ec4ec))));
  uStack_24 = (undefined4)(0);
  (**(code **)(*(int *)(piVar1) + (0x254)))(piVar1,((int)this),uStack_28,0,0x20);
  piVar1 = (int *)((BLGameAlertView *)(*(undefined4 *)(((int)this) + 0x18)))->getBtnCancle();
  uStack_20 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_005ec4aa + (intptr_t)(g_005ec4f0))));
  uStack_1c = (undefined4)(0);
  (**(code **)(*(int *)(piVar1) + (0x254)))(piVar1,((int)this),uStack_20,0,0x20);
  uVar2 = (undefined4)(((BLGameAlertView *)(*(undefined4 *)(((int)this) + 0x18)))->getLabTitle());
  puVar3 = (undefined4 *)(**(code **)(**(int **)(((int)this) + 0x18) + 0x8c))();
  uVar4 = (undefined4)(func_0079e57c(*puVar3,g_005ec4f4));
  0 /* ctorZero */;
  ((cocos2d::CCLabelTTF *)(uVar2))->setDimensions(*(const CCSize *)(void *)auStack_30);
  return;
}

void BLGameAlertPresenter::initWithRichData(cocos2d::CCArray* p1)
{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  code *pcVar4;
  
  piVar1 = ((void)((BLRichText *)this)->create((cocos2d::CCArray*)p1, 0x118, 0x14),(int *)0);
  (**(code **)(**(int **)(((int)this) + 0x18) + 0xcc))(*(int **)(((int)this) + 0x18),piVar1,g_005ec554);
  pcVar4 = *(code **)(*piVar1 + 0x5c);
  piVar2 = (int *)(**(code **)(*(int *)(piVar1) + (0x8c)))(piVar1);
  uVar3 = (undefined4)(func_0079e4fc(*piVar2 + -0x80000000,0x3f000000));
  (*pcVar4)(piVar1,uVar3);
  pcVar4 = *(code **)(*piVar1 + 100);
  piVar2 = (int *)((BLGameAlertView *)(*(undefined4 *)(((int)this) + 0x18)))->getLabTitle();
  uVar3 = (undefined4)((**(code **)(*(int *)(piVar2) + (0x68)))());
  (*pcVar4)(piVar1,uVar3);
  return;
}
