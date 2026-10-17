#include "PKRankRewardMainView.h"
#include "CCObject.h"
#include "CCLayer.h"
#include "CCControlButton.h"
#include "CCLabelTTF.h"
#include "CCDirector.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "PKRankRewardMainPresenter.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <new>   // ghost_fix.js 自动补齐
#include "BLTableView.h"   /* ALLOC+CTOR_FIX(R120): ???????? placement new */
using namespace cocos2d;
// 兜底声明
extern "C" long long software_udf(...);

extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_00621ca8;
extern "C" unsigned long UNK_00621cda;
extern "C" unsigned long UNK_00621d20;
extern "C" unsigned long UNK_00621d48;
extern "C" unsigned long UNK_00621eaa;
extern "C" unsigned long UNK_00621ef0;
extern "C" unsigned long UNK_00621fd6;
extern "C" unsigned long UNK_006220c4;
extern "C" unsigned long UNK_006220f0;
extern "C" unsigned long UNK_006221a2;
extern "C" unsigned long _DAT_00621de8;
extern "C" unsigned long _DAT_00621dec;
extern "C" unsigned long _UNK_00621d0c;
extern "C" unsigned long _UNK_00621d10;
extern "C" unsigned long _UNK_00621d24;
extern "C" unsigned long _UNK_00621d4c;
extern "C" unsigned long _UNK_0062228c;
extern "C" unsigned long _UNK_00622290;
extern "C" unsigned long _UNK_00622294;
extern "C" unsigned long _UNK_00622298;
extern "C" unsigned long _UNK_0062229c;
extern "C" unsigned long _UNK_006222a0;
extern "C" unsigned long _UNK_006222a4;
extern "C" unsigned long _UNK_006222a8;
extern "C" unsigned long _UNK_006222ac;
extern "C" unsigned long _UNK_006222b0;
extern "C" unsigned long _UNK_006222b4;
extern "C" unsigned long _UNK_006222b8;
extern "C" unsigned long _UNK_006222bc;
extern "C" unsigned long _UNK_006222c0;
extern "C" unsigned long _UNK_006222c4;
extern "C" unsigned long _UNK_006222c8;
extern "C" unsigned long _UNK_006222cc;
extern "C" unsigned long _UNK_00622474;
extern "C" unsigned long _UNK_00622478;
extern "C" unsigned long _UNK_0062247c;
extern "C" unsigned long _UNK_00622480;
extern "C" unsigned long _UNK_00622484;
extern "C" unsigned long _UNK_00622488;
extern "C" unsigned long g_00621ca8;
extern "C" unsigned long g_00621cda;
extern "C" unsigned long g_00621d0c;
extern "C" unsigned long g_00621d10;
extern "C" unsigned long g_00621d20;
extern "C" unsigned long g_00621d24;
extern "C" unsigned long g_00621d48;
extern "C" unsigned long g_00621d4c;
extern "C" unsigned long g_00621de8;
extern "C" unsigned long g_00621dec;
extern "C" unsigned long g_00621eaa;
extern "C" unsigned long g_00621ef0;
extern "C" unsigned long g_00621fd6;
extern "C" unsigned long g_006220c4;
extern "C" unsigned long g_006220f0;
extern "C" unsigned long g_006221a2;
extern "C" unsigned long g_0062228c;
extern "C" unsigned long g_00622290;
extern "C" unsigned long g_00622294;
extern "C" unsigned long g_00622298;
extern "C" unsigned long g_0062229c;
extern "C" unsigned long g_006222a0;
extern "C" unsigned long g_006222a4;
extern "C" unsigned long g_006222a8;
extern "C" unsigned long g_006222ac;
extern "C" unsigned long g_006222b0;
extern "C" unsigned long g_006222b4;
extern "C" unsigned long g_006222b8;
extern "C" unsigned long g_006222bc;
extern "C" unsigned long g_006222c0;
extern "C" unsigned long g_006222c4;
extern "C" unsigned long g_006222c8;
extern "C" unsigned long g_006222cc;
extern "C" unsigned long g_00622474;
extern "C" unsigned long g_00622478;
extern "C" unsigned long g_0062247c;
extern "C" unsigned long g_00622480;
extern "C" unsigned long g_00622484;
extern "C" unsigned long g_00622488;
PKRankRewardMainView::~PKRankRewardMainView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_00621ca8 + g_00621d0c);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00621cda + g_00621d10,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

PKRankRewardMainView::PKRankRewardMainView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(g_00621de8 + 0x621d90);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"PKRankRewardMainView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * PKRankRewardMainView::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x120)));
  0 /* ctorZero */;
  iVar2 = (**(code **)(*piVar1 + 0x18))(piVar1);
  if (iVar2 == 0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    piVar1 = (int *)0x0;
  }
  else {
    ((cocos2d::CCObject *)piVar1)->autorelease();
  }
  return (int *)(piVar1);
}

undefined4 PKRankRewardMainView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x108);
}

undefined4 PKRankRewardMainView::getTableView()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 PKRankRewardMainView::getBtnClose()
{
  return *(undefined4 *)(((int)this) + 0x11c);
}


void PKRankRewardMainView::onEnter()
{
  ((PKRankRewardMainPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void PKRankRewardMainView::onExit()
{
  ((PKRankRewardMainPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
bool PKRankRewardMainView::init()
{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  int iStack_48;
  undefined4 auStack_30 [2];
  undefined1 auStack_28 [4];
  undefined4 uStack_24;
  undefined4 auStack_20 [3];
  
  iVar1 = (undefined4)(intptr_t)(((cocos2d::CCLayer *)this)->init());
  if (iVar1 == 0) {
    iStack_48 = 0;
  }
  else {
    iVar1 = (undefined4)(intptr_t)(((PKRankRewardMainPresenter *)this)->create((PKRankRewardMainView*)((int)this)));
    *(int *)((int)this + 4*(0x42)) = iVar1;
    if (iVar1 != 0) {
      ((cocos2d::CCObject *)this)->retain();
    }
    func_0079e45c(auStack_20,(unsigned char *)((char *)&g_00621eaa + (intptr_t)(g_0062228c)),auStack_28);
    piVar2 = (int *)0 /* ctorZero */;
    func_0079e2bc(auStack_20);
    pcVar6 = *(code **)(*piVar2 + 0x4c);
    0 /* ctorZero */;
    (*pcVar6)(piVar2,auStack_20);
    (**(code **)(*(int *)(piVar2) + (0x48)))(piVar2,g_00622294,g_00622290);
    (**(code **)(*(int *)this + 200))(((int)this),piVar2);
    func_0079e45c(auStack_20,(unsigned char *)((char *)&g_00621ef0 + (intptr_t)(g_00622298)),auStack_28);
    iVar1 = (undefined4)(intptr_t)(0 /* ctorZero */);
    *(int *)((int)this + 4*(0x44)) = iVar1;
    func_0079e2bc(auStack_20);
    piVar2 = (int *)*(int *)((int)this + 4*(0x44));
    pcVar6 = *(code **)(*piVar2 + 0x88);
    0 /* ctorZero */;
    uVar5 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(func_0079e4dc(uVar5,uVar3));
    0 /* ctorZero */;
    uVar5 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(uVar5,uVar4));
    0 /* ctorZero */;
    (*pcVar6)(piVar2,auStack_20);
    piVar2 = (int *)*(int *)((int)this + 4*(0x44));
    pcVar6 = *(code **)(*piVar2 + 0x4c);
    0 /* ctorZero */;
    uVar5 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(func_0079e4dc(uVar5,uVar3));
    0 /* ctorZero */;
    uVar5 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(uVar5,uVar4));
    0 /* ctorZero */;
    (*pcVar6)(piVar2,auStack_20);
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x44)),1);
    func_0079e45c(auStack_20,(unsigned char *)((char *)&g_00621fd6 + (intptr_t)(g_006222a4)),auStack_28);
    iVar1 = (undefined4)(intptr_t)(0 /* ctorZero */);
    *(int *)((int)this + 4*(0x45)) = iVar1;
    func_0079e2bc(auStack_20);
    piVar2 = (int *)*(int *)((int)this + 4*(0x45));
    pcVar6 = *(code **)(*piVar2 + 0x88);
    0 /* ctorZero */;
    uVar5 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(func_0079e4dc(uVar5,uVar3));
    0 /* ctorZero */;
    uVar5 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(uVar5,uVar4));
    0 /* ctorZero */;
    (*pcVar6)(piVar2,auStack_20);
    piVar2 = (int *)*(int *)((int)this + 4*(0x45));
    pcVar6 = *(code **)(*piVar2 + 0x4c);
    0 /* ctorZero */;
    uVar5 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(func_0079e4dc(uVar5,uVar3));
    0 /* ctorZero */;
    uVar5 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(uVar5,uVar4));
    0 /* ctorZero */;
    (*pcVar6)(piVar2,auStack_20);
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x45)),2);
    uVar5 = (undefined4)(((BLLanguage *)this)->share());
    func_0079e45c(auStack_28,(unsigned char *)((char *)&g_006220c4 + (intptr_t)(g_006222b0)),auStack_30);
    (((BLLanguage *)this))->getString(*(std::string *)auStack_20);
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(g_006222b4,uVar5));
    iVar1 = (undefined4)(intptr_t)(cocos2d::CCLabelTTF::create((char const*)auStack_20[0], (char const*)(unsigned char *)((char *)&g_006220f0 + (intptr_t)(g_006222b8)), uVar5));
    *(int *)((int)this + 4*(0x46)) = iVar1;
    func_0079e2bc(auStack_20);
    func_0079e2bc(auStack_28);
    piVar2 = (int *)*(int *)((int)this + 4*(0x46));
    pcVar6 = *(code **)(*piVar2 + 0x7c);
    0 /* ctorZero */;
    (*pcVar6)(piVar2,auStack_20);
    piVar2 = (int *)*(int *)((int)this + 4*(0x46));
    pcVar6 = *(code **)(*piVar2 + 0x4c);
    0 /* ctorZero */;
    uVar5 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(func_0079e4dc(uVar5,uVar3));
    0 /* ctorZero */;
    uVar5 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(uVar5,uVar4));
    0 /* ctorZero */;
    (*pcVar6)(piVar2,auStack_20);
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x46)),3);
    piVar2 = (int *)cocos2d::extension::CCControlButton::create();
    *(int *)((int)this + 4*(0x47)) = (int)piVar2;
    (**(code **)(*(int *)(piVar2) + (0x294)))(piVar2,0);
    func_0079e45c(auStack_20,(unsigned char *)((char *)&g_006221a2 + (intptr_t)(g_006222c0)),auStack_28);
    uVar5 = (undefined4)(0 /* ctorZero */);
    func_0079e2bc(auStack_20);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x47)) + 0x30c))((int *)*(int *)((int)this + 4*(0x47)),uVar5,1);
    piVar2 = (int *)*(int *)((int)this + 4*(0x47));
    pcVar6 = *(code **)(*piVar2 + 0x28c);
    0 /* ctorZero */;
    uVar5 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(func_0079e4dc(uVar5,uVar3));
    0 /* ctorZero */;
    uVar5 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(uVar5,uVar4));
    0 /* ctorZero */;
    (*pcVar6)(piVar2,auStack_20);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x47)) + 0x40))((int *)*(int *)((int)this + 4*(0x47)),0x3f800000);
    piVar2 = (int *)*(int *)((int)this + 4*(0x47));
    pcVar6 = *(code **)(*piVar2 + 0x4c);
    0 /* ctorZero */;
    uVar5 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(func_0079e4dc(uVar5,uVar3));
    0 /* ctorZero */;
    uVar5 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(uVar5,uVar4));
    0 /* ctorZero */;
    (*pcVar6)(piVar2,auStack_20);
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x47)),4);
    piVar2 = (int *)::operator new(0x134);
    ::new ((void *)piVar2) BLTableView();   /* ALLOC+CTOR_FIX(R120): 类名取自原版 dump（函数+尺寸对齐）*/
    iStack_48 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar2) + (0x18)))(piVar2));
    if (iStack_48 == 0) {
      (**(code **)(*(int *)(piVar2) + (8)))(piVar2);
      *(int *)((int)this + 4*(0x43)) = 0;
                    /* WARNING: Does not return */
      pcVar6 = (code *)software_udf(0xff,0x62246c);
      (*pcVar6)();
    }
    ((cocos2d::CCObject *)(piVar2))->autorelease();
    *(int *)((int)this + 4*(0x43)) = (int)piVar2;
    pcVar6 = *(code **)(*piVar2 + 0x234);
    0 /* ctorZero */;
    uVar5 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(func_0079e4dc(uVar5,uVar3));
    0 /* ctorZero */;
    uVar5 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(uVar5,uVar4));
    0 /* ctorZero */;
    (*pcVar6)(piVar2,auStack_20);
    piVar2 = (int *)*(int *)((int)this + 4*(0x43));
    pcVar6 = *(code **)(*piVar2 + 0x4c);
    0 /* ctorZero */;
    uVar5 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(func_0079e4dc(uVar5,uVar3));
    0 /* ctorZero */;
    uVar5 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(uVar5,uVar4));
    0 /* ctorZero */;
    (*pcVar6)(piVar2,auStack_20);
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x43)),5);
    pcVar6 = *(code **)(*(int *)this + 0x88);
    0 /* ctorZero */;
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(auStack_30[0],uVar5));
    0 /* ctorZero */;
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(func_0079e4dc(uStack_24,uVar3));
    0 /* ctorZero */;
    (*pcVar6)(((int)this),auStack_20);
    ((PKRankRewardMainPresenter *)(*(int *)((int)this + 4*(0x42))))->initWithView((PKRankRewardMainView*)((int)this));
  }
  return iStack_48;
}
