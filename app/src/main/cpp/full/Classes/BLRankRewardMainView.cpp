#include "BLRankRewardMainView.h"
#include "CCLayer.h"
#include "CCObject.h"
#include "CCControlButton.h"
#include "CCLabelTTF.h"
#include "CCDirector.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLRankRewardMainPresenter.h"
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
extern "C" unsigned long UNK_006430f8;
extern "C" unsigned long UNK_0064313c;
extern "C" unsigned long UNK_00643180;
extern "C" unsigned long UNK_006431a8;
extern "C" unsigned long UNK_0064330a;
extern "C" unsigned long UNK_00643350;
extern "C" unsigned long UNK_00643436;
extern "C" unsigned long UNK_00643524;
extern "C" unsigned long UNK_00643550;
extern "C" unsigned long UNK_00643602;
extern "C" unsigned long _DAT_00643248;
extern "C" unsigned long _DAT_0064324c;
extern "C" unsigned long _UNK_0064316c;
extern "C" unsigned long _UNK_00643170;
extern "C" unsigned long _UNK_00643184;
extern "C" unsigned long _UNK_006431ac;
extern "C" unsigned long _UNK_006436ec;
extern "C" unsigned long _UNK_006436f0;
extern "C" unsigned long _UNK_006436f4;
extern "C" unsigned long _UNK_006436f8;
extern "C" unsigned long _UNK_006436fc;
extern "C" unsigned long _UNK_00643700;
extern "C" unsigned long _UNK_00643704;
extern "C" unsigned long _UNK_00643708;
extern "C" unsigned long _UNK_0064370c;
extern "C" unsigned long _UNK_00643710;
extern "C" unsigned long _UNK_00643714;
extern "C" unsigned long _UNK_00643718;
extern "C" unsigned long _UNK_0064371c;
extern "C" unsigned long _UNK_00643720;
extern "C" unsigned long _UNK_00643724;
extern "C" unsigned long _UNK_00643728;
extern "C" unsigned long _UNK_0064372c;
extern "C" unsigned long _UNK_006438d4;
extern "C" unsigned long _UNK_006438d8;
extern "C" unsigned long _UNK_006438dc;
extern "C" unsigned long _UNK_006438e0;
extern "C" unsigned long _UNK_006438e4;
extern "C" unsigned long _UNK_006438e8;
extern "C" unsigned long g_006430f8;
extern "C" unsigned long g_0064313c;
extern "C" unsigned long g_0064316c;
extern "C" unsigned long g_00643170;
extern "C" unsigned long g_00643180;
extern "C" unsigned long g_00643184;
extern "C" unsigned long g_006431a8;
extern "C" unsigned long g_006431ac;
extern "C" unsigned long g_00643248;
extern "C" unsigned long g_0064324c;
extern "C" unsigned long g_0064330a;
extern "C" unsigned long g_00643350;
extern "C" unsigned long g_00643436;
extern "C" unsigned long g_00643524;
extern "C" unsigned long g_00643550;
extern "C" unsigned long g_00643602;
extern "C" unsigned long g_006436ec;
extern "C" unsigned long g_006436f0;
extern "C" unsigned long g_006436f4;
extern "C" unsigned long g_006436f8;
extern "C" unsigned long g_006436fc;
extern "C" unsigned long g_00643700;
extern "C" unsigned long g_00643704;
extern "C" unsigned long g_00643708;
extern "C" unsigned long g_0064370c;
extern "C" unsigned long g_00643710;
extern "C" unsigned long g_00643714;
extern "C" unsigned long g_00643718;
extern "C" unsigned long g_0064371c;
extern "C" unsigned long g_00643720;
extern "C" unsigned long g_00643724;
extern "C" unsigned long g_00643728;
extern "C" unsigned long g_0064372c;
extern "C" unsigned long g_006438d4;
extern "C" unsigned long g_006438d8;
extern "C" unsigned long g_006438dc;
extern "C" unsigned long g_006438e0;
extern "C" unsigned long g_006438e4;
extern "C" unsigned long g_006438e8;
BLRankRewardMainView::~BLRankRewardMainView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_006430f8 + g_0064316c);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  if (*(int *)((int)this + 4*(0x42)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x42)) = 0;
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0064313c + g_00643170,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLRankRewardMainView::BLRankRewardMainView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(g_00643248 + 0x6431f0);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLRankRewardMainView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * BLRankRewardMainView::create()
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

undefined4 BLRankRewardMainView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x108);
}

undefined4 BLRankRewardMainView::getTableView()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 BLRankRewardMainView::getBtnClose()
{
  return *(undefined4 *)(((int)this) + 0x11c);
}


void BLRankRewardMainView::onEnter()
{
  ((BLRankRewardMainPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLRankRewardMainView::onExit()
{
  ((BLRankRewardMainPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
bool BLRankRewardMainView::init()
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
    iVar1 = (undefined4)(intptr_t)(((BLRankRewardMainPresenter *)this)->create((BLRankRewardMainView*)((int)this)));
    *(int *)((int)this + 4*(0x42)) = iVar1;
    if (iVar1 != 0) {
      ((cocos2d::CCObject *)this)->retain();
    }
    func_0079e45c(auStack_20,(unsigned char *)((char *)&g_0064330a + (intptr_t)(g_006436ec)),auStack_28);
    piVar2 = (int *)0 /* ctorZero */;
    func_0079e2bc(auStack_20);
    pcVar6 = *(code **)(*piVar2 + 0x4c);
    0 /* ctorZero */;
    (*pcVar6)(piVar2,auStack_20);
    (**(code **)(*(int *)(piVar2) + (0x48)))(piVar2,g_006436f4,g_006436f0);
    (**(code **)(*(int *)this + 200))(((int)this),piVar2);
    func_0079e45c(auStack_20,(unsigned char *)((char *)&g_00643350 + (intptr_t)(g_006436f8)),auStack_28);
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
    func_0079e45c(auStack_20,(unsigned char *)((char *)&g_00643436 + (intptr_t)(g_00643704)),auStack_28);
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
    func_0079e45c(auStack_28,(unsigned char *)((char *)&g_00643524 + (intptr_t)(g_00643710)),auStack_30);
    (((BLLanguage *)this))->getString(*(std::string *)auStack_20);
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(g_00643714,uVar5));
    iVar1 = (undefined4)(intptr_t)(cocos2d::CCLabelTTF::create((char const*)auStack_20[0], (char const*)(unsigned char *)((char *)&g_00643550 + (intptr_t)(g_00643718)), uVar5));
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
    func_0079e45c(auStack_20,(unsigned char *)((char *)&g_00643602 + (intptr_t)(g_00643720)),auStack_28);
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
      pcVar6 = (code *)software_udf(0xff,0x6438cc);
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
    ((BLRankRewardMainPresenter *)(*(int *)((int)this + 4*(0x42))))->initWithView((BLRankRewardMainView*)((int)this));
  }
  return iStack_48;
}
