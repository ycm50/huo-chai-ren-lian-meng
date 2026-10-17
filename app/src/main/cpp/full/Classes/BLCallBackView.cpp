#include "BLCallBackView.h"
#include "CCGeometry.h"
#include "CCLayer.h"
#include "CCObject.h"
#include "CCLabelTTF.h"
#include "CCDirector.h"
#include "CCControlButton.h"
#include "CCSprite.h"
#include "BLCallBackPresenter.h"
#include "BLLeakUtils.h"
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
extern "C" long long func_0079e4dc(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_004fd2b8;
extern "C" unsigned long UNK_004fd2fc;
extern "C" unsigned long UNK_004fd340;
extern "C" unsigned long UNK_004fd368;
extern "C" unsigned long UNK_004fd4ce;
extern "C" unsigned long UNK_004fd502;
extern "C" unsigned long UNK_004fd54a;
extern "C" unsigned long UNK_004fd70a;
extern "C" unsigned long UNK_004fd8ea;
extern "C" unsigned long UNK_004fd8ee;
extern "C" unsigned long UNK_004fda34;
extern "C" unsigned long UNK_004fdb80;
extern "C" unsigned long _DAT_004fd408;
extern "C" unsigned long _DAT_004fd40c;
extern "C" unsigned long _UNK_004fd32c;
extern "C" unsigned long _UNK_004fd330;
extern "C" unsigned long _UNK_004fd344;
extern "C" unsigned long _UNK_004fd36c;
extern "C" unsigned long _UNK_004fd8b4;
extern "C" unsigned long _UNK_004fd8b8;
extern "C" unsigned long _UNK_004fd8bc;
extern "C" unsigned long _UNK_004fd8c0;
extern "C" unsigned long _UNK_004fd8c4;
extern "C" unsigned long _UNK_004fd8c8;
extern "C" unsigned long _UNK_004fd8cc;
extern "C" unsigned long _UNK_004fd8d0;
extern "C" unsigned long _UNK_004fd8d4;
extern "C" unsigned long _UNK_004fd8d8;
extern "C" unsigned long _UNK_004fd8dc;
extern "C" unsigned long _UNK_004fdc20;
extern "C" unsigned long _UNK_004fdc24;
extern "C" unsigned long _UNK_004fdc28;
extern "C" unsigned long _UNK_004fdc2c;
extern "C" unsigned long _UNK_004fdc30;
extern "C" unsigned long _UNK_004fdc34;
extern "C" unsigned long _UNK_004fdc38;
extern "C" unsigned long _UNK_004fdc3c;
extern "C" unsigned long _UNK_004fdc40;
extern "C" unsigned long g_004fd2b8;
extern "C" unsigned long g_004fd2fc;
extern "C" unsigned long g_004fd32c;
extern "C" unsigned long g_004fd330;
extern "C" unsigned long g_004fd340;
extern "C" unsigned long g_004fd344;
extern "C" unsigned long g_004fd368;
extern "C" unsigned long g_004fd36c;
extern "C" unsigned long g_004fd408;
extern "C" unsigned long g_004fd40c;
extern "C" unsigned long g_004fd4ce;
extern "C" unsigned long g_004fd502;
extern "C" unsigned long g_004fd54a;
extern "C" unsigned long g_004fd70a;
extern "C" unsigned long g_004fd8b4;
extern "C" unsigned long g_004fd8b8;
extern "C" unsigned long g_004fd8bc;
extern "C" unsigned long g_004fd8c0;
extern "C" unsigned long g_004fd8c4;
extern "C" unsigned long g_004fd8c8;
extern "C" unsigned long g_004fd8cc;
extern "C" unsigned long g_004fd8d0;
extern "C" unsigned long g_004fd8d4;
extern "C" unsigned long g_004fd8d8;
extern "C" unsigned long g_004fd8dc;
extern "C" unsigned long g_004fd8ea;
extern "C" unsigned long g_004fd8ee;
extern "C" unsigned long g_004fda34;
extern "C" unsigned long g_004fdb80;
extern "C" unsigned long g_004fdc20;
extern "C" unsigned long g_004fdc24;
extern "C" unsigned long g_004fdc28;
extern "C" unsigned long g_004fdc2c;
extern "C" unsigned long g_004fdc30;
extern "C" unsigned long g_004fdc34;
extern "C" unsigned long g_004fdc38;
extern "C" unsigned long g_004fdc3c;
extern "C" unsigned long g_004fdc40;
BLCallBackView::~BLCallBackView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_004fd2b8 + g_004fd32c);
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
  func_0079e45c(&uStack_14,&g_004fd2fc + g_004fd330,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLCallBackView::BLCallBackView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(g_004fd408 + 0x4fd3b0);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLCallBackView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * BLCallBackView::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x130)));
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

undefined4 BLCallBackView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x108);
}

undefined4 BLCallBackView::getSpritebg()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 BLCallBackView::getSpriteframe()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

undefined4 BLCallBackView::getBtnclose()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

undefined4 BLCallBackView::getBtngreenbtn()
{
  return *(undefined4 *)(((int)this) + 0x118);
}


void BLCallBackView::onEnter()
{
  ((BLCallBackPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLCallBackView::onExit()
{
  ((BLCallBackPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
bool BLCallBackView::init()
{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined *puVar9;
  int *piVar10;
  code *pcVar11;
  undefined4 auStack_38 [2];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 auStack_28 [4];
  undefined4 uStack_24;
  undefined1 uStack_20;
  undefined1 uStack_1f;
  undefined1 uStack_1e;
  
  iVar1 = (undefined4)(intptr_t)(((cocos2d::CCLayer *)this)->init());
  if (iVar1 != 0) {
    iVar2 = (undefined4)(intptr_t)(((BLCallBackPresenter *)this)->create((BLCallBackView*)((int)this)));
    *(int *)((int)this + 4*(0x42)) = iVar2;
    ((cocos2d::CCObject *)this)->retain();
    piVar3 = (int *)cocos2d::CCSprite::create((char const*)(unsigned char *)((char *)&g_004fd4ce + (intptr_t)(g_004fd8b4)));
    *(int *)((int)this + 4*(0x43)) = (int)piVar3;
    pcVar11 = *(code **)(*piVar3 + 0x7c);
    0 /* ctorZero */;
    (*pcVar11)(piVar3,&uStack_20);
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x43)),1);
    piVar3 = (int *)cocos2d::CCSprite::create((char const*)(unsigned char *)((char *)&g_004fd502 + (intptr_t)(g_004fd8b8)));
    *(int *)((int)this + 4*(0x44)) = (int)piVar3;
    pcVar11 = *(code **)(*piVar3 + 0x7c);
    0 /* ctorZero */;
    (*pcVar11)(piVar3,&uStack_20);
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x44)),2);
    piVar3 = (int *)cocos2d::extension::CCControlButton::create();
    *(int *)((int)this + 4*(0x45)) = (int)piVar3;
    (**(code **)(*(int *)(piVar3) + (0x294)))(piVar3,0);
    func_0079e45c(&uStack_20,(unsigned char *)((char *)&g_004fd54a + (intptr_t)(g_004fd8bc)),auStack_28);
    uVar4 = (undefined4)(0 /* ctorZero */);
    func_0079e2bc(&uStack_20);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x45)) + 0x30c))((int *)*(int *)((int)this + 4*(0x45)),uVar4,1);
    piVar3 = (int *)*(int *)((int)this + 4*(0x45));
    pcVar11 = *(code **)(*piVar3 + 0x28c);
    0 /* ctorZero */;
    uVar4 = (undefined4)(uStack_30);
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(uVar4,uVar5));
    0 /* ctorZero */;
    uVar4 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar6 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar4 = (undefined4)(func_0079e4dc(uVar4,uVar6));
    0 /* ctorZero */;
    (*pcVar11)(piVar3,&uStack_20);
    piVar3 = (int *)*(int *)((int)this + 4*(0x45));
    pcVar11 = *(code **)(*piVar3 + 0x4c);
    uVar4 = (undefined4)((**(code **)(*(int *)*(int *)((int)this + 4*(0x43)) + 0x60))());
    puVar7 = (undefined4 *)(**(code **)(*(int *)*(int *)((int)this + 4*(0x43)) + 0x8c))();
    uVar5 = (undefined4)(func_0079e4fc(*puVar7,0x3f000000));
    uVar4 = (undefined4)(func_0079e59c(uVar4,uVar5));
    uVar4 = (undefined4)(func_0079e57c(uVar4,g_004fd8c4));
    uVar5 = (undefined4)((**(code **)(*(int *)*(int *)((int)this + 4*(0x43)) + 0x68))());
    iVar2 = (undefined4)(intptr_t)((**(code **)(*(int *)*(int *)((int)this + 4*(0x43)) + 0x8c))());
    uVar6 = (undefined4)(func_0079e4fc(*(undefined4 *)(iVar2 + 4),0x3f000000));
    uVar5 = (undefined4)(func_0079e59c(uVar5,uVar6));
    uVar5 = (undefined4)(func_0079e57c(uVar5,g_004fd8c4));
    0 /* ctorZero */;
    uVar4 = (undefined4)(uStack_30);
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(uVar4,uVar5));
    uVar4 = (undefined4)((**(code **)(*(int *)*(int *)((int)this + 4*(0x43)) + 0x60))());
    puVar7 = (undefined4 *)(**(code **)(*(int *)*(int *)((int)this + 4*(0x43)) + 0x8c))();
    uVar6 = (undefined4)(func_0079e4fc(*puVar7,0x3f000000));
    uVar4 = (undefined4)(func_0079e59c(uVar4,uVar6));
    uVar4 = (undefined4)(func_0079e57c(uVar4,g_004fd8c4));
    uVar6 = (undefined4)((**(code **)(*(int *)*(int *)((int)this + 4*(0x43)) + 0x68))());
    iVar2 = (undefined4)(intptr_t)((**(code **)(*(int *)*(int *)((int)this + 4*(0x43)) + 0x8c))());
    uVar8 = (undefined4)(func_0079e4fc(*(undefined4 *)(iVar2 + 4),0x3f000000));
    uVar6 = (undefined4)(func_0079e59c(uVar6,uVar8));
    uVar6 = (undefined4)(func_0079e57c(uVar6,g_004fd8c4));
    0 /* ctorZero */;
    uVar4 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar6 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar4 = (undefined4)(func_0079e4dc(uVar4,uVar6));
    0 /* ctorZero */;
    (*pcVar11)(piVar3,&uStack_20);
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x45)),3);
    piVar3 = (int *)cocos2d::extension::CCControlButton::create();
    *(int *)((int)this + 4*(0x46)) = (int)piVar3;
    (**(code **)(*(int *)(piVar3) + (0x294)))(piVar3,0);
    func_0079e45c(&uStack_20,(unsigned char *)((char *)&g_004fd70a + (intptr_t)(g_004fd8c8)),auStack_28);
    uVar4 = (undefined4)(0 /* ctorZero */);
    func_0079e2bc(&uStack_20);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x46)) + 0x30c))((int *)*(int *)((int)this + 4*(0x46)),uVar4,1);
    piVar3 = (int *)*(int *)((int)this + 4*(0x46));
    pcVar11 = *(code **)(*piVar3 + 0x28c);
    0 /* ctorZero */;
    uVar4 = (undefined4)(uStack_30);
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(uVar4,uVar5));
    0 /* ctorZero */;
    uVar4 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar6 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar4 = (undefined4)(func_0079e4dc(uVar4,uVar6));
    0 /* ctorZero */;
    (*pcVar11)(piVar3,&uStack_20);
    piVar3 = (int *)*(int *)((int)this + 4*(0x46));
    pcVar11 = *(code **)(*piVar3 + 0x4c);
    uVar4 = (undefined4)((**(code **)(*(int *)*(int *)((int)this + 4*(0x43)) + 0x60))());
    puVar7 = (undefined4 *)(**(code **)(*(int *)*(int *)((int)this + 4*(0x43)) + 0x8c))();
    uVar5 = (undefined4)(func_0079e4fc(*puVar7,0x3f000000));
    uVar4 = (undefined4)(func_0079e59c(uVar4,uVar5));
    uVar4 = (undefined4)(func_0079e57c(uVar4,g_004fd8d4));
    uVar5 = (undefined4)((**(code **)(*(int *)*(int *)((int)this + 4*(0x43)) + 0x68))());
    iVar2 = (undefined4)(intptr_t)((**(code **)(*(int *)*(int *)((int)this + 4*(0x43)) + 0x8c))());
    uVar6 = (undefined4)(func_0079e4fc(*(undefined4 *)(iVar2 + 4),0x3f000000));
    uVar5 = (undefined4)(func_0079e57c(uVar5,uVar6));
    uVar5 = (undefined4)(func_0079e59c(uVar5,g_004fd8d8));
    0 /* ctorZero */;
    cocos2d::CCDirector::sharedDirector();
    uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar4 = (undefined4)(func_0079e4dc(uStack_30,uVar4));
    uVar5 = (undefined4)((**(code **)(*(int *)*(int *)((int)this + 4*(0x43)) + 0x60))());
    puVar7 = (undefined4 *)(**(code **)(*(int *)*(int *)((int)this + 4*(0x43)) + 0x8c))();
    uVar6 = (undefined4)(func_0079e4fc(*puVar7,0x3f000000));
    uVar5 = (undefined4)(func_0079e59c(uVar5,uVar6));
    uVar5 = (undefined4)(func_0079e57c(uVar5,g_004fd8d4));
    uVar6 = (undefined4)((**(code **)(*(int *)*(int *)((int)this + 4*(0x43)) + 0x68))());
    iVar2 = (undefined4)(intptr_t)((**(code **)(*(int *)*(int *)((int)this + 4*(0x43)) + 0x8c))());
    uVar8 = (undefined4)(func_0079e4fc(*(undefined4 *)(iVar2 + 4),0x3f000000));
    uVar6 = (undefined4)(func_0079e57c(uVar6,uVar8));
    uVar6 = (undefined4)(func_0079e59c(uVar6,g_004fd8d8));
    0 /* ctorZero */;
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(uStack_24,uVar5));
    0 /* ctorZero */;
    (*pcVar11)(piVar3,&uStack_20);
    cocos2d::CCDirector::sharedDirector();
    uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar4 = (undefined4)(func_0079e4dc(g_004fd8dc,uVar4));
    puVar9 = (unsigned char *)((char *)&g_004fd8ea + (intptr_t)(g_004fdc20));
    piVar3 = (int *)cocos2d::CCLabelTTF::create((char const*)(unsigned char *)((char *)&g_004fd8ee + (intptr_t)(g_004fdc24)), (char const*)puVar9, uVar4);
    *(int *)((int)this + 4*(0x47)) = (int)piVar3;
    pcVar11 = *(code **)(*piVar3 + 0x7c);
    0 /* ctorZero */;
    (*pcVar11)(piVar3,&uStack_20);
    piVar10 = (int *)*(int *)((int)this + 4*(0x47));
    pcVar11 = *(code **)(*piVar10 + 0x4c);
    uVar5 = (undefined4)((**(code **)(*(int *)*(int *)((int)this + 4*(0x43)) + 0x50))());
    piVar3 = (int *)(**(code **)(*(int *)*(int *)((int)this + 4*(0x43)) + 0x8c))();
    uVar4 = (undefined4)(func_0079e4fc(*piVar3 + -0x80000000,0x3f000000));
    uVar4 = (undefined4)(func_0079e59c(uVar4,g_004fdc28));
    iVar2 = (undefined4)(intptr_t)((**(code **)(*(int *)*(int *)((int)this + 4*(0x43)) + 0x8c))());
    uVar6 = (undefined4)(func_0079e4fc(*(undefined4 *)(iVar2 + 4),0x3f000000));
    uVar6 = (undefined4)(func_0079e57c(uVar6,g_004fdc2c));
    0 /* ctorZero */;
    uVar4 = (undefined4)(auStack_38[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar6 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar6 = (undefined4)(func_0079e4dc(uVar4,uVar6));
    piVar3 = (int *)(**(code **)(*(int *)*(int *)((int)this + 4*(0x43)) + 0x8c))();
    uVar4 = (undefined4)(func_0079e4fc(*piVar3 + -0x80000000,0x3f000000));
    uVar4 = (undefined4)(func_0079e59c(uVar4,g_004fdc28));
    iVar2 = (undefined4)(intptr_t)((**(code **)(*(int *)*(int *)((int)this + 4*(0x43)) + 0x8c))());
    uVar8 = (undefined4)(func_0079e4fc(*(undefined4 *)(iVar2 + 4),0x3f000000));
    uVar8 = (undefined4)(func_0079e57c(uVar8,g_004fdc2c));
    0 /* ctorZero */;
    uVar4 = (undefined4)(uStack_2c);
    cocos2d::CCDirector::sharedDirector();
    uVar8 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar4 = (undefined4)(func_0079e4dc(uVar4,uVar8));
    0 /* ctorZero */;
    ((cocos2d::CCPoint *)(uVar5))->operator+(*(const CCPoint *)(void *)auStack_28);
    (*pcVar11)(piVar10,&uStack_20);
    uStack_20 = 0xff;
    uStack_1f = 0xff;
    uStack_1e = 0xff;
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x47)) + 0x1b4))((int *)*(int *)((int)this + 4*(0x47)),&uStack_20);
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x47)),5);
    cocos2d::CCDirector::sharedDirector();
    uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar4 = (undefined4)(func_0079e4dc(g_004fdc30,uVar4));
    piVar3 = (int *)cocos2d::CCLabelTTF::create((char const*)(unsigned char *)((char *)&g_004fda34 + (intptr_t)(g_004fdc34)), (char const*)puVar9, uVar4);
    *(int *)((int)this + 4*(0x4a)) = (int)piVar3;
    pcVar11 = *(code **)(*piVar3 + 0x7c);
    0 /* ctorZero */;
    (*pcVar11)(piVar3,&uStack_20);
    piVar10 = (int *)*(int *)((int)this + 4*(0x4a));
    pcVar11 = *(code **)(*piVar10 + 0x4c);
    uVar4 = (undefined4)((**(code **)(*(int *)*(int *)((int)this + 4*(0x43)) + 0x50))());
    piVar3 = (int *)(**(code **)(*(int *)*(int *)((int)this + 4*(0x43)) + 0x8c))();
    uVar5 = (undefined4)(func_0079e4fc(*piVar3 + -0x80000000,0x3f000000));
    uVar5 = (undefined4)(func_0079e59c(uVar5,g_004fdc28));
    iVar2 = (undefined4)(intptr_t)((**(code **)(*(int *)*(int *)((int)this + 4*(0x43)) + 0x8c))());
    uVar6 = (undefined4)(func_0079e4fc(*(int *)(iVar2 + 4) + -0x80000000,0x3f000000));
    uVar6 = (undefined4)(func_0079e59c(uVar6,g_004fdc38));
    0 /* ctorZero */;
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(auStack_38[0],uVar5));
    piVar3 = (int *)(**(code **)(*(int *)*(int *)((int)this + 4*(0x43)) + 0x8c))();
    uVar6 = (undefined4)(func_0079e4fc(*piVar3 + -0x80000000,0x3f000000));
    uVar6 = (undefined4)(func_0079e59c(uVar6,g_004fdc28));
    iVar2 = (undefined4)(intptr_t)((**(code **)(*(int *)*(int *)((int)this + 4*(0x43)) + 0x8c))());
    uVar8 = (undefined4)(func_0079e4fc(*(int *)(iVar2 + 4) + -0x80000000,0x3f000000));
    uVar8 = (undefined4)(func_0079e59c(uVar8,g_004fdc38));
    0 /* ctorZero */;
    cocos2d::CCDirector::sharedDirector();
    uVar6 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar6 = (undefined4)(func_0079e4dc(uStack_2c,uVar6));
    0 /* ctorZero */;
    ((cocos2d::CCPoint *)(uVar4))->operator+(*(const CCPoint *)(void *)auStack_28);
    (*pcVar11)(piVar10,&uStack_20);
    uStack_20 = 0xff;
    uStack_1f = 0xff;
    uStack_1e = 0xff;
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x4a)) + 0x1b4))((int *)*(int *)((int)this + 4*(0x4a)),&uStack_20);
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x4a)),7);
    cocos2d::CCDirector::sharedDirector();
    uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar4 = (undefined4)(func_0079e4dc(g_004fdc3c,uVar4));
    piVar3 = (int *)cocos2d::CCLabelTTF::create((char const*)(unsigned char *)((char *)&g_004fdb80 + (intptr_t)(g_004fdc40)), (char const*)puVar9, uVar4);
    *(int *)((int)this + 4*(0x4b)) = (int)piVar3;
    pcVar11 = *(code **)(*piVar3 + 0x7c);
    0 /* ctorZero */;
    (*pcVar11)(piVar3,&uStack_20);
    piVar3 = (int *)*(int *)((int)this + 4*(0x4b));
    pcVar11 = *(code **)(*piVar3 + 0x4c);
    puVar7 = (undefined4 *)(**(code **)(*(int *)*(int *)((int)this + 4*(0x46)) + 0x8c))();
    uVar4 = (undefined4)(func_0079e4fc(*puVar7,0x3f000000));
    iVar2 = (undefined4)(intptr_t)((**(code **)(*(int *)*(int *)((int)this + 4*(0x46)) + 0x8c))());
    uVar5 = (undefined4)(func_0079e4fc(*(undefined4 *)(iVar2 + 4),0x3f000000));
    0 /* ctorZero */;
    (*pcVar11)(piVar3,&uStack_20);
    uStack_20 = 0xff;
    uStack_1f = 0xff;
    uStack_1e = 0;
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x4b)) + 0x1b4))((int *)*(int *)((int)this + 4*(0x4b)),&uStack_20);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x46)) + 0xcc))((int *)*(int *)((int)this + 4*(0x46)),*(int *)((int)this + 4*(0x4b)),8);
    ((BLCallBackPresenter *)(*(int *)((int)this + 4*(0x42))))->initWithView((BLCallBackView*)((int)this));
  }
  return iVar1;
}
