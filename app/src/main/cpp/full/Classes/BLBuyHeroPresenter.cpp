#include "BLBuyHeroPresenter.h"
#include "BLBuyHeroView.h"
#include "BLGameScene.h"
#include "BLLeakUtils.h"
#include "BLPoPSalePresenter.h"
#include "BLPoPSaleView.h"
#include "BLResultManager.h"
#include "DebugLocalSys.h"
#include "PlatformHelp.h"
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
extern "C" long long func_0079e55c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_00540d54;
extern "C" unsigned long UNK_00540d6c;
extern "C" unsigned long UNK_00540d84;
extern "C" unsigned long UNK_00540d9c;
extern "C" unsigned long UNK_00540df8;
extern "C" unsigned long UNK_00540e12;
extern "C" unsigned long UNK_00540e58;
extern "C" unsigned long UNK_00540e80;
extern "C" unsigned long UNK_00540ec2;
extern "C" unsigned long UNK_00540ef0;
extern "C" unsigned long UNK_00540f7e;
extern "C" unsigned long UNK_00540f9e;
extern "C" unsigned long UNK_00541000;
extern "C" unsigned long UNK_00541010;
extern "C" unsigned long UNK_00541038;
extern "C" unsigned long UNK_00541066;
extern "C" unsigned long UNK_00541068;
extern "C" unsigned long UNK_00541082;
extern "C" unsigned long UNK_00541084;
extern "C" unsigned long UNK_0054109c;
extern "C" unsigned long _UNK_00540d58;
extern "C" unsigned long _UNK_00540d70;
extern "C" unsigned long _UNK_00540d88;
extern "C" unsigned long _UNK_00540da0;
extern "C" unsigned long _UNK_00540e44;
extern "C" unsigned long _UNK_00540e48;
extern "C" unsigned long _UNK_00540e5c;
extern "C" unsigned long _UNK_00540e84;
extern "C" unsigned long _UNK_00540f1c;
extern "C" unsigned long _UNK_00540f20;
extern "C" unsigned long _UNK_00540fe8;
extern "C" unsigned long _UNK_00540fec;
extern "C" unsigned long _UNK_005410cc;
extern "C" unsigned long _UNK_005410d0;
extern "C" unsigned long _UNK_005410d4;
extern "C" unsigned long _UNK_005410d8;
extern "C" unsigned long _UNK_005410dc;
extern "C" unsigned long _UNK_005410e0;
extern "C" unsigned long _UNK_005410e4;
extern "C" unsigned long _UNK_005410e8;
extern "C" unsigned long _UNK_005410ec;
extern "C" unsigned long g_00540d54;
extern "C" unsigned long g_00540d58;
extern "C" unsigned long g_00540d6c;
extern "C" unsigned long g_00540d70;
extern "C" unsigned long g_00540d84;
extern "C" unsigned long g_00540d88;
extern "C" unsigned long g_00540d9c;
extern "C" unsigned long g_00540da0;
extern "C" unsigned long g_00540df8;
extern "C" unsigned long g_00540e12;
extern "C" unsigned long g_00540e44;
extern "C" unsigned long g_00540e48;
extern "C" unsigned long g_00540e58;
extern "C" unsigned long g_00540e5c;
extern "C" unsigned long g_00540e80;
extern "C" unsigned long g_00540e84;
extern "C" unsigned long g_00540ec2;
extern "C" unsigned long g_00540ef0;
extern "C" unsigned long g_00540f1c;
extern "C" unsigned long g_00540f20;
extern "C" unsigned long g_00540f7e;
extern "C" unsigned long g_00540f9e;
extern "C" unsigned long g_00540fe8;
extern "C" unsigned long g_00540fec;
extern "C" unsigned long g_00541000;
extern "C" unsigned long g_00541010;
extern "C" unsigned long g_00541038;
extern "C" unsigned long g_00541066;
extern "C" unsigned long g_00541068;
extern "C" unsigned long g_00541082;
extern "C" unsigned long g_00541084;
extern "C" unsigned long g_0054109c;
extern "C" unsigned long g_005410cc;
extern "C" unsigned long g_005410d0;
extern "C" unsigned long g_005410d4;
extern "C" unsigned long g_005410d8;
extern "C" unsigned long g_005410dc;
extern "C" unsigned long g_005410e0;
extern "C" unsigned long g_005410e4;
extern "C" unsigned long g_005410e8;
extern "C" unsigned long g_005410ec;
bool BLBuyHeroPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLBuyHeroPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLBuyHeroPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLBuyHeroPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLBuyHeroPresenter::tick(float p1)
{
  return;
}

BLBuyHeroPresenter::~BLBuyHeroPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_00540df8 + g_00540e44);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x3c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00540e12 + g_00540e48,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLBuyHeroPresenter::onClose(cocos2d::CCObject* p1, unsigned int p2)
{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  piVar1 = (int *)((BLGameScene *)this)->shareGameScene();
  iVar2 = (**(code **)(*piVar1 + 0x208))();
  if (iVar2 == 1) {
    uVar3 = (undefined4)(((UIManager *)this)->shareManager());
    ((UIManager *)uVar3)->removeUIByID(0x65);
  }
  else {
    ((BLResultManager *)this)->shareManager();
    ((BLResultManager *)this)->returnMainCity();
  }
  return;
}

BLBuyHeroPresenter::BLBuyHeroPresenter()
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
  iVar3 = *(int *)(&g_00540ec2 + g_00540f1c);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x3c;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 0);
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00540ef0 + g_00540f20,&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

undefined4 BLBuyHeroPresenter::create(BLBuyHeroView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x1c))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLBuyHeroPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  return;
}

void BLBuyHeroPresenter::onEnter()
{
  return;
}

undefined4 BLBuyHeroPresenter::initWithView(BLBuyHeroView* p1)
{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  undefined1 auStack_30 [8];
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  *(undefined4 *)(((int)this) + 0x18) = (undefined4)(intptr_t)p1;
  piVar1 = (int *)((BLBuyHeroView *)p1)->getBtnClose();
  uStack_28 = (undefined4)(*(undefined4 *)(&g_00540f7e + g_00540fe8));
  uStack_24 = (undefined4)(0);
  (**(code **)(*piVar1 + 0x254))(piVar1,((int)this),uStack_28,0,0x20);
  piVar1 = (int *)((BLBuyHeroView *)*(undefined4 *)(((int)this) + 0x18))->getBtnGet();
  uStack_20 = (undefined4)(*(undefined4 *)(&g_00540f9e + g_00540fec));
  uStack_1c = (undefined4)(0);
  (**(code **)(*piVar1 + 0x254))(piVar1,((int)this),uStack_20,0,0x20);
  piVar1 = (int *)((BLBuyHeroView *)*(undefined4 *)(((int)this) + 0x18))->getBtnClose();
  pcVar3 = *(code **)(*piVar1 + 0x28c);
  piVar2 = (int *)((BLBuyHeroView *)*(undefined4 *)(((int)this) + 0x18))->getBtnClose();
  piVar2 = (int *)(**(code **)(*piVar2 + 0x308))(piVar2,1);
  (**(code **)(*piVar2 + 0x1cc))(auStack_30,piVar2);
  (*pcVar3)(piVar1,auStack_30);
  return 1;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
void BLBuyHeroPresenter::onGet(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
