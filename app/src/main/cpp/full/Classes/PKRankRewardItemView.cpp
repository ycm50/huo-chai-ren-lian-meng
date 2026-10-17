#include "PKRankRewardItemView.h"
#include "CCGeometry.h"
#include "CCObject.h"
#include "CCLayer.h"
#include "CCControlButton.h"
#include "CCLabelTTF.h"
#include "CCSprite.h"
#include "CCDirector.h"
#include "BLLeakUtils.h"
#include "PKRankRewardItemPresenter.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include "PKRankRewardItemNumItem.h"   /* ALLOC+CTOR_FIX(R120): ???????? placement new */
using namespace cocos2d;
// 兜底声明
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_00621334;
extern "C" unsigned long UNK_00621366;
extern "C" unsigned long UNK_006213ac;
extern "C" unsigned long UNK_006213d4;
extern "C" unsigned long UNK_00621484;
extern "C" unsigned long UNK_006214b2;
extern "C" unsigned long UNK_00621784;
extern "C" unsigned long UNK_0062179a;
extern "C" unsigned long UNK_006218fa;
extern "C" unsigned long UNK_006218fc;
extern "C" unsigned long UNK_00621926;
extern "C" unsigned long UNK_00621996;
extern "C" unsigned long UNK_00621abc;
extern "C" unsigned long UNK_00621bbe;
extern "C" unsigned long UNK_00621bc0;
extern "C" unsigned long UNK_00621be4;
extern "C" unsigned long _UNK_00621398;
extern "C" unsigned long _UNK_0062139c;
extern "C" unsigned long _UNK_006213b0;
extern "C" unsigned long _UNK_006213d8;
extern "C" unsigned long _UNK_006214dc;
extern "C" unsigned long _UNK_006214e0;
extern "C" unsigned long _UNK_00621790;
extern "C" unsigned long _UNK_00621b78;
extern "C" unsigned long _UNK_00621b7c;
extern "C" unsigned long _UNK_00621b80;
extern "C" unsigned long _UNK_00621b84;
extern "C" unsigned long _UNK_00621b88;
extern "C" unsigned long _UNK_00621b8c;
extern "C" unsigned long _UNK_00621b90;
extern "C" unsigned long _UNK_00621b94;
extern "C" unsigned long _UNK_00621b98;
extern "C" unsigned long _UNK_00621b9c;
extern "C" unsigned long _UNK_00621ba0;
extern "C" unsigned long _UNK_00621ba4;
extern "C" unsigned long _UNK_00621ba8;
extern "C" unsigned long _UNK_00621bac;
extern "C" unsigned long _UNK_00621bb0;
extern "C" unsigned long _UNK_00621bb4;
extern "C" unsigned long _UNK_00621c80;
extern "C" unsigned long _UNK_00621c84;
extern "C" unsigned long _UNK_00621c88;
extern "C" unsigned long _UNK_00621c8c;
extern "C" unsigned long g_00621334;
extern "C" unsigned long g_00621366;
extern "C" unsigned long g_00621398;
extern "C" unsigned long g_0062139c;
extern "C" unsigned long g_006213ac;
extern "C" unsigned long g_006213b0;
extern "C" unsigned long g_006213d4;
extern "C" unsigned long g_006213d8;
extern "C" unsigned long g_00621484;
extern "C" unsigned long g_006214b2;
extern "C" unsigned long g_006214dc;
extern "C" unsigned long g_006214e0;
extern "C" unsigned long g_00621784;
extern "C" unsigned long g_00621790;
extern "C" unsigned long g_0062179a;
extern "C" unsigned long g_006218fa;
extern "C" unsigned long g_006218fc;
extern "C" unsigned long g_00621926;
extern "C" unsigned long g_00621996;
extern "C" unsigned long g_00621abc;
extern "C" unsigned long g_00621b78;
extern "C" unsigned long g_00621b7c;
extern "C" unsigned long g_00621b80;
extern "C" unsigned long g_00621b84;
extern "C" unsigned long g_00621b88;
extern "C" unsigned long g_00621b8c;
extern "C" unsigned long g_00621b90;
extern "C" unsigned long g_00621b94;
extern "C" unsigned long g_00621b98;
extern "C" unsigned long g_00621b9c;
extern "C" unsigned long g_00621ba0;
extern "C" unsigned long g_00621ba4;
extern "C" unsigned long g_00621ba8;
extern "C" unsigned long g_00621bac;
extern "C" unsigned long g_00621bb0;
extern "C" unsigned long g_00621bb4;
extern "C" unsigned long g_00621bbe;
extern "C" unsigned long g_00621bc0;
extern "C" unsigned long g_00621be4;
extern "C" unsigned long g_00621c80;
extern "C" unsigned long g_00621c84;
extern "C" unsigned long g_00621c88;
extern "C" unsigned long g_00621c8c;
PKRankRewardItemView::~PKRankRewardItemView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_00621334 + g_00621398);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00621366 + g_0062139c,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

PKRankRewardItemView::PKRankRewardItemView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_00621484 + g_006214dc);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_006214b2 + g_006214e0,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}


undefined4 PKRankRewardItemView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x108);
}

undefined4 PKRankRewardItemView::getBtnGet()
{
  return *(undefined4 *)(((int)this) + 300);
}

undefined4 PKRankRewardItemView::getLabGet()
{
  return *(undefined4 *)(((int)this) + 0x130);
}

undefined4 PKRankRewardItemView::getLabReward()
{
  return *(undefined4 *)(((int)this) + 0x11c);
}

undefined4 PKRankRewardItemView::getLabNext()
{
  return *(undefined4 *)(((int)this) + 0x124);
}

undefined4 PKRankRewardItemView::getLabTime()
{
  return *(undefined4 *)(((int)this) + 0x128);
}

undefined4 PKRankRewardItemView::getSprRank()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

undefined4 PKRankRewardItemView::getRankItem()
{
  return *(undefined4 *)(((int)this) + 0x118);
}

undefined4 PKRankRewardItemView::getSprIcon()
{
  return *(undefined4 *)(((int)this) + 0x120);
}

void PKRankRewardItemView::onEnter()
{
  (**(code **)(**(int **)(((int)this) + 0x108) + 0x148))();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void PKRankRewardItemView::onExit()
{
  (**(code **)(**(int **)(((int)this) + 0x108) + 0x150))();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (2) =====
int * PKRankRewardItemView::create(bool p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return nullptr;
}

bool PKRankRewardItemView::init()
{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  int *piVar7;
  undefined4 auStack_30 [2];
  undefined1 auStack_28 [4];
  undefined4 uStack_24;
  undefined1 auStack_20 [12];
  
  iVar1 = (undefined4)(intptr_t)(((cocos2d::CCLayer *)this)->init());
  if (iVar1 != 0) {
    iVar2 = (undefined4)(intptr_t)(((PKRankRewardItemPresenter *)this)->create((PKRankRewardItemView*)((int)this)));
    *(int *)((int)this + 4*(0x42)) = iVar2;
    if (iVar2 != 0) {
      ((cocos2d::CCObject *)this)->retain();
    }
    if ((char)*(int *)((int)this + 4*(0x43)) == '\0') {
      func_0079e45c(auStack_20,(unsigned char *)((char *)&g_0062179a + (intptr_t)(g_00621b78)),auStack_28);
      iVar2 = (undefined4)(intptr_t)(0 /* ctorZero */);
    }
    else {
      func_0079e45c(auStack_20,(unsigned char *)((char *)&g_00621784 + (intptr_t)(g_00621790)),auStack_28);
      iVar2 = (undefined4)(intptr_t)(0 /* ctorZero */);
    }
    *(int *)((int)this + 4*(0x44)) = iVar2;
    func_0079e2bc(auStack_20);
    piVar7 = (int *)*(int *)((int)this + 4*(0x44));
    pcVar6 = *(code **)(*piVar7 + 0x88);
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
    (*pcVar6)(piVar7,auStack_20);
    piVar7 = (int *)*(int *)((int)this + 4*(0x44));
    pcVar6 = *(code **)(*piVar7 + 0x4c);
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
    (*pcVar6)(piVar7,auStack_20);
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x44)),1);
    piVar7 = (int *)cocos2d::CCSprite::create();
    *(int *)((int)this + 4*(0x45)) = (int)piVar7;
    pcVar6 = *(code **)(*piVar7 + 0x4c);
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
    (*pcVar6)(piVar7,auStack_20);
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x45)),2);
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(g_00621b88,uVar5));
    piVar7 = (int *)cocos2d::CCLabelTTF::create((char const*)(unsigned char *)((char *)&g_006218fc + (intptr_t)(g_00621b90)), (char const*)(unsigned char *)((char *)&g_006218fa + (intptr_t)(g_00621b8c)), uVar5);
    *(int *)((int)this + 4*(0x47)) = (int)piVar7;
    pcVar6 = *(code **)(*piVar7 + 0x7c);
    0 /* ctorZero */;
    (*pcVar6)(piVar7,auStack_20);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x47)) + 0x1b4))((int *)*(int *)((int)this + 4*(0x47)),(unsigned char *)((char *)&g_00621926 + (intptr_t)(g_00621b94)))
    ;
    piVar7 = (int *)*(int *)((int)this + 4*(0x47));
    pcVar6 = *(code **)(*piVar7 + 0x4c);
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
    (*pcVar6)(piVar7,auStack_20);
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x47)),2);
    func_0079e45c(auStack_20,(unsigned char *)((char *)&g_00621996 + (intptr_t)(g_00621b9c)),auStack_28);
    iVar2 = (undefined4)(intptr_t)(0 /* ctorZero */);
    *(int *)((int)this + 4*(0x48)) = iVar2;
    func_0079e2bc(auStack_20);
    piVar7 = (int *)*(int *)((int)this + 4*(0x48));
    pcVar6 = *(code **)(*piVar7 + 0x7c);
    0 /* ctorZero */;
    (*pcVar6)(piVar7,auStack_20);
    piVar7 = (int *)*(int *)((int)this + 4*(0x48));
    pcVar6 = *(code **)(*piVar7 + 0x4c);
    uVar5 = (undefined4)((**(code **)(*(int *)*(int *)((int)this + 4*(0x47)) + 0x50))());
    0 /* ctorZero */;
    ((cocos2d::CCPoint *)(uVar5))->operator+(*(const CCPoint *)(void *)auStack_28);
    (*pcVar6)(piVar7,auStack_20);
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x48)),3);
    piVar7 = (int *)::operator new(0xe8);
    ::new ((void *)piVar7) PKRankRewardItemNumItem();   /* ALLOC+CTOR_FIX(R120): 类名取自原版 dump（函数+尺寸对齐）*/
    iVar2 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar7) + (0x18)))(piVar7));
    if (iVar2 == 0) {
      (**(code **)(*(int *)(piVar7) + (8)))(piVar7);
      piVar7 = (int *)0x0;
    }
    else {
      ((cocos2d::CCObject *)(piVar7))->autorelease();
    }
    *(int *)((int)this + 4*(0x46)) = (int)piVar7;
    (**(code **)(*(int *)(piVar7) + (0x198)))(piVar7,g_00621ba4);
    piVar7 = (int *)*(int *)((int)this + 4*(0x46));
    pcVar6 = *(code **)(*piVar7 + 0x4c);
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
    (*pcVar6)(piVar7,auStack_20);
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x46)),5);
    piVar7 = (int *)cocos2d::extension::CCControlButton::create();
    *(int *)((int)this + 4*(0x4b)) = (int)piVar7;
    (**(code **)(*(int *)(piVar7) + (0x294)))(piVar7,0);
    func_0079e45c(auStack_20,(unsigned char *)((char *)&g_00621abc + (intptr_t)(g_00621ba8)),auStack_28);
    uVar5 = (undefined4)(0 /* ctorZero */);
    func_0079e2bc(auStack_20);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x4b)) + 0x30c))((int *)*(int *)((int)this + 4*(0x4b)),uVar5,1);
    piVar7 = (int *)*(int *)((int)this + 4*(0x4b));
    pcVar6 = *(code **)(*piVar7 + 0x28c);
    0 /* ctorZero */;
    (*pcVar6)(piVar7,auStack_20);
    piVar7 = (int *)*(int *)((int)this + 4*(0x4b));
    pcVar6 = *(code **)(*piVar7 + 0x4c);
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
    (*pcVar6)(piVar7,auStack_20);
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x4b)),6);
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(g_00621b88,uVar5));
    piVar7 = (int *)cocos2d::CCLabelTTF::create((char const*)(unsigned char *)((char *)&g_00621bc0 + (intptr_t)(g_00621c80)), (char const*)(unsigned char *)((char *)&g_00621bbe + (intptr_t)(g_00621bb4)), uVar5);
    *(int *)((int)this + 4*(0x4c)) = (int)piVar7;
    pcVar6 = *(code **)(*piVar7 + 0x4c);
    uVar5 = (undefined4)((**(code **)(*(int *)*(int *)((int)this + 4*(0x4b)) + 0x50))());
    (*pcVar6)(piVar7,uVar5);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x4c)) + 0x1b4))((int *)*(int *)((int)this + 4*(0x4c)),(unsigned char *)((char *)&g_00621be4 + (intptr_t)(g_00621c84)))
    ;
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x4c)),7);
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
    ((PKRankRewardItemPresenter *)(*(int *)((int)this + 4*(0x42))))->initWithView((PKRankRewardItemView*)((int)this));
  }
  return iVar1;
}
