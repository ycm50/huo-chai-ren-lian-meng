#include "BLMainAccountPresenter.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "CCNotificationCenter.h"
#include "CCObject.h"
#include "CCTouch.h"
#include "CCDirector.h"
#include "CCUserDefault.h"
#include "BLLeakUtils.h"
#include "BLMainAccoutView.h"
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
extern "C" unsigned long UNK_0058aca4;
extern "C" unsigned long UNK_0058acbc;
extern "C" unsigned long UNK_0058acd4;
extern "C" unsigned long UNK_0058ad48;
extern "C" unsigned long UNK_0058ad62;
extern "C" unsigned long UNK_0058ada8;
extern "C" unsigned long UNK_0058add0;
extern "C" unsigned long UNK_0058ade8;
extern "C" unsigned long UNK_0058ae0e;
extern "C" unsigned long UNK_0058ae42;
extern "C" unsigned long UNK_0058ae8a;
extern "C" unsigned long UNK_0058aebe;
extern "C" unsigned long UNK_0058af44;
extern "C" unsigned long UNK_0058af68;
extern "C" unsigned long UNK_0058af98;
extern "C" unsigned long UNK_0058afc8;
extern "C" unsigned long UNK_0058afca;
extern "C" unsigned long UNK_0058afe0;
extern "C" unsigned long UNK_0058b050;
extern "C" unsigned long UNK_0058b08e;
extern "C" unsigned long UNK_0058b0ae;
extern "C" unsigned long UNK_0058b0cc;
extern "C" unsigned long UNK_0058b0ea;
extern "C" unsigned long _UNK_0058aca8;
extern "C" unsigned long _UNK_0058acc0;
extern "C" unsigned long _UNK_0058acd8;
extern "C" unsigned long _UNK_0058ad94;
extern "C" unsigned long _UNK_0058ad98;
extern "C" unsigned long _UNK_0058adac;
extern "C" unsigned long _UNK_0058add4;
extern "C" unsigned long _UNK_0058af08;
extern "C" unsigned long _UNK_0058af0c;
extern "C" unsigned long _UNK_0058af10;
extern "C" unsigned long _UNK_0058af14;
extern "C" unsigned long _UNK_0058af18;
extern "C" unsigned long _UNK_0058af58;
extern "C" unsigned long _UNK_0058af84;
extern "C" unsigned long _UNK_0058b00c;
extern "C" unsigned long _UNK_0058b010;
extern "C" unsigned long _UNK_0058b014;
extern "C" unsigned long _UNK_0058b018;
extern "C" unsigned long _UNK_0058b068;
extern "C" unsigned long _UNK_0058b100;
extern "C" unsigned long _UNK_0058b104;
extern "C" unsigned long _UNK_0058b108;
extern "C" unsigned long _UNK_0058b10c;
extern "C" unsigned long g_0058aca4;
extern "C" unsigned long g_0058aca8;
extern "C" unsigned long g_0058acbc;
extern "C" unsigned long g_0058acc0;
extern "C" unsigned long g_0058acd4;
extern "C" unsigned long g_0058acd8;
extern "C" unsigned long g_0058ad48;
extern "C" unsigned long g_0058ad62;
extern "C" unsigned long g_0058ad94;
extern "C" unsigned long g_0058ad98;
extern "C" unsigned long g_0058ada8;
extern "C" unsigned long g_0058adac;
extern "C" unsigned long g_0058add0;
extern "C" unsigned long g_0058add4;
extern "C" unsigned long g_0058ade8;
extern "C" unsigned long g_0058ae0e;
extern "C" unsigned long g_0058ae42;
extern "C" unsigned long g_0058ae8a;
extern "C" unsigned long g_0058aebe;
extern "C" unsigned long g_0058af08;
extern "C" unsigned long g_0058af0c;
extern "C" unsigned long g_0058af10;
extern "C" unsigned long g_0058af14;
extern "C" unsigned long g_0058af18;
extern "C" unsigned long g_0058af44;
extern "C" unsigned long g_0058af58;
extern "C" unsigned long g_0058af68;
extern "C" unsigned long g_0058af84;
extern "C" unsigned long g_0058af98;
extern "C" unsigned long g_0058afc8;
extern "C" unsigned long g_0058afca;
extern "C" unsigned long g_0058afe0;
extern "C" unsigned long g_0058b00c;
extern "C" unsigned long g_0058b010;
extern "C" unsigned long g_0058b014;
extern "C" unsigned long g_0058b018;
extern "C" unsigned long g_0058b050;
extern "C" unsigned long g_0058b068;
extern "C" unsigned long g_0058b08e;
extern "C" unsigned long g_0058b0ae;
extern "C" unsigned long g_0058b0cc;
extern "C" unsigned long g_0058b0ea;
extern "C" unsigned long g_0058b100;
extern "C" unsigned long g_0058b104;
extern "C" unsigned long g_0058b108;
extern "C" unsigned long g_0058b10c;
bool BLMainAccountPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLMainAccountPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLMainAccountPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLMainAccountPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLMainAccountPresenter::tick(float p1)
{
  return;
}

BLMainAccountPresenter::~BLMainAccountPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0058ad48 + g_0058ad94);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x3c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0058ad62 + g_0058ad98,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLMainAccountPresenter::updateInfo()
{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  undefined1 auStack_20 [4];
  undefined1 uStack_1c;
  undefined1 uStack_1b;
  undefined1 uStack_1a;
  
  uVar1 = (undefined4)(cocos2d::CCUserDefault::sharedUserDefault());
  iVar2 = ((cocos2d::CCUserDefault *)uVar1)->getBoolForKey((char const*)&g_0058ade8 + g_0058af08);
  if (iVar2 != 0) {
    piVar3 = (int *)((BLMainAccoutView *)*(undefined4 *)(((int)this) + 0x18))->getBtnZhuCeAccout();
    pcVar4 = *(code **)(*piVar3 + 0x30c);
    func_0079e45c(&uStack_1c,&g_0058ae0e + g_0058af0c,auStack_20);
    uVar1 = (undefined4)(0 /* ctorZero */);
    (*pcVar4)(piVar3,uVar1,1);
    func_0079e2bc(&uStack_1c);
    piVar3 = (int *)((BLMainAccoutView *)*(undefined4 *)(((int)this) + 0x18))->getBtnZhuCeAccout();
    pcVar4 = *(code **)(*piVar3 + 0x30c);
    func_0079e45c(&uStack_1c,&g_0058ae42 + g_0058af10,auStack_20);
    uVar1 = (undefined4)(0 /* ctorZero */);
    (*pcVar4)(piVar3,uVar1,2);
    func_0079e2bc(&uStack_1c);
    piVar3 = (int *)((BLMainAccoutView *)*(undefined4 *)(((int)this) + 0x18))->getLabZhuCeAccount();
    uStack_1c = 0xff;
    uStack_1b = 0xff;
    uStack_1a = 0xff;
    (**(code **)(*piVar3 + 0x1b4))(piVar3,&uStack_1c);
    piVar3 = (int *)((BLMainAccoutView *)*(undefined4 *)(((int)this) + 0x18))->getBtnLogin();
    pcVar4 = *(code **)(*piVar3 + 0x30c);
    func_0079e45c(&uStack_1c,&g_0058ae8a + g_0058af14,auStack_20);
    uVar1 = (undefined4)(0 /* ctorZero */);
    (*pcVar4)(piVar3,uVar1,1);
    func_0079e2bc(&uStack_1c);
    piVar3 = (int *)((BLMainAccoutView *)*(undefined4 *)(((int)this) + 0x18))->getBtnLogin();
    pcVar4 = *(code **)(*piVar3 + 0x30c);
    func_0079e45c(&uStack_1c,&g_0058aebe + g_0058af18,auStack_20);
    uVar1 = (undefined4)(0 /* ctorZero */);
    (*pcVar4)(piVar3,uVar1,2);
    func_0079e2bc(&uStack_1c);
    piVar3 = (int *)((BLMainAccoutView *)*(undefined4 *)(((int)this) + 0x18))->getLabLogin();
    uStack_1c = 0xff;
    uStack_1b = 0xff;
    uStack_1a = 0;
    (**(code **)(*piVar3 + 0x1b4))(piVar3,&uStack_1c);
  }
  return;
}

void BLMainAccountPresenter::onJieShao(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->showUIById(0x57);
  return;
}

void BLMainAccountPresenter::onClose(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(0x56);
  return;
}

void BLMainAccountPresenter::onZhuCeAccount(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = (undefined4)(cocos2d::CCUserDefault::sharedUserDefault());
  iVar2 = ((cocos2d::CCUserDefault *)uVar1)->getBoolForKey((char const*)&g_0058af44 + g_0058af58);
  if (iVar2 == 0) {
    uVar1 = (undefined4)(((UIManager *)this)->shareManager());
    ((UIManager *)uVar1)->showUIById(0x58);
  }
  return;
}

void BLMainAccountPresenter::onLogin(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = (undefined4)(cocos2d::CCUserDefault::sharedUserDefault());
  iVar2 = ((cocos2d::CCUserDefault *)uVar1)->getBoolForKey((char const*)&g_0058af68 + g_0058af84);
  if (iVar2 == 0) {
    uVar1 = (undefined4)(((UIManager *)this)->shareManager());
    uVar3 = (undefined4)(0x59);
  }
  else {
    uVar1 = (undefined4)(((UIManager *)this)->shareManager());
    uVar3 = (undefined4)(0x8c);
  }
  ((UIManager *)uVar1)->showUIById(uVar3);
  return;
}


undefined4 BLMainAccountPresenter::create(BLMainAccoutView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x1c))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLMainAccountPresenter::onExit()
{
  undefined4 uVar1;
  int *piVar2;
  
  uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar1)->removeObserver((cocos2d::CCObject*)((int)this), (char const*)&g_0058b050 + g_0058b068);
  piVar2 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar1 = (undefined4)((**(code **)(*piVar2 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar1)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  return;
}

void BLMainAccountPresenter::onEnter()
{
  return;
}

// ===== 修复: 补回被误删的函数占位 (2) =====
BLMainAccountPresenter::BLMainAccountPresenter()
{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [12];
  
  0 /* ctorZero */;
  iVar3 = (undefined4)(intptr_t)(*(int *)((unsigned char *)((char *)&g_0058af98 + (intptr_t)(g_0058b00c))));
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x3c;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x40)))());
  ((cocos2d::CCTouchDispatcher *)(uVar2))->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 1);
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)(((int)this)))->addObserver((cocos2d::CCObject*)*(undefined4 *)((unsigned char *)((char *)&g_0058afc8 + (intptr_t)(g_0058b010))), 0, (char const*)(unsigned char *)((char *)&g_0058afca + (intptr_t)(g_0058b014)), 0);
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(auStack_1c,(unsigned char *)((char *)&g_0058afe0 + (intptr_t)(g_0058b018)),auStack_20);
  ((BLLeakUtils *)(uVar2))->addClass((std::string)(char*)auStack_1c);
  func_0079e2bc(auStack_1c);
  return;
}

void BLMainAccountPresenter::initWithView(BLMainAccoutView* p1)
{
  int *piVar1;
  
  *(undefined4 *)(((int)this) + 0x18) = (undefined4)(intptr_t)p1;
  piVar1 = (int *)((BLMainAccoutView *)p1)->getBtnZhuCeAccout();
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)(&g_0058b08e + g_0058b100),0,0x20);
  piVar1 = (int *)((BLMainAccoutView *)*(undefined4 *)(((int)this) + 0x18))->getBtnLogin();
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)(&g_0058b0ae + g_0058b104),0,0x20);
  piVar1 = (int *)((BLMainAccoutView *)*(undefined4 *)(((int)this) + 0x18))->getBtnJieShao();
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)(&g_0058b0cc + g_0058b108),0,0x20);
  piVar1 = (int *)((BLMainAccoutView *)*(undefined4 *)(((int)this) + 0x18))->getBtnClose();
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)(&g_0058b0ea + g_0058b10c),0,0x20);
  BLMainAccountPresenter::updateInfo();
  return;
}
