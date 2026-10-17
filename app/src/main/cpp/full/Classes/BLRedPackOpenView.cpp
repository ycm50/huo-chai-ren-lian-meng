#include "BLRedPackOpenView.h"
#include "CCAction.h"
#include "CCNode.h"
#include "CCObject.h"
#include "CCLabelTTF.h"
#include "CCControlButton.h"
#include "CCSprite.h"
#include "CCLayer.h"
#include "CCDirector.h"
#include "CCGeometry.h"
#include "BLLeakUtils.h"
#include "BLRedPackOpenPresenter.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <new>   // ghost_fix.js 自动补齐
using namespace cocos2d;
static inline undefined4 hw_fbits(float f) { undefined4 r; __builtin_memcpy(&r, &f, 4); return r; }
// 兜底声明
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e59c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_00648acc;
extern "C" unsigned long UNK_00648b10;
extern "C" unsigned long UNK_00648b54;
extern "C" unsigned long UNK_00648b7c;
extern "C" unsigned long UNK_00648d88;
extern "C" unsigned long UNK_00648dfe;
extern "C" unsigned long UNK_00648e0e;
extern "C" unsigned long UNK_00648e40;
extern "C" unsigned long UNK_00648e9e;
extern "C" unsigned long UNK_00648fba;
extern "C" unsigned long UNK_00649032;
extern "C" unsigned long UNK_00649036;
extern "C" unsigned long UNK_00649112;
extern "C" unsigned long UNK_00649124;
extern "C" unsigned long _DAT_00648c1c;
extern "C" unsigned long _DAT_00648c20;
extern "C" unsigned long _UNK_00648b40;
extern "C" unsigned long _UNK_00648b44;
extern "C" unsigned long _UNK_00648b58;
extern "C" unsigned long _UNK_00648b80;
extern "C" unsigned long _UNK_00649168;
extern "C" unsigned long _UNK_0064916c;
extern "C" unsigned long _UNK_00649170;
extern "C" unsigned long _UNK_00649174;
extern "C" unsigned long _UNK_00649178;
extern "C" unsigned long _UNK_0064917c;
extern "C" unsigned long _UNK_00649180;
extern "C" unsigned long _UNK_00649184;
extern "C" unsigned long _UNK_00649188;
extern "C" unsigned long _UNK_0064918c;
extern "C" unsigned long _UNK_00649190;
extern "C" unsigned long _UNK_00649194;
extern "C" unsigned long _UNK_00649198;
extern "C" unsigned long _UNK_0064919c;
extern "C" unsigned long _UNK_006491a0;
extern "C" unsigned long _UNK_006491a4;
extern "C" unsigned long _UNK_00649258;
extern "C" unsigned long g_00648acc;
extern "C" unsigned long g_00648b10;
extern "C" unsigned long g_00648b40;
extern "C" unsigned long g_00648b44;
extern "C" unsigned long g_00648b54;
extern "C" unsigned long g_00648b58;
extern "C" unsigned long g_00648b7c;
extern "C" unsigned long g_00648b80;
extern "C" unsigned long g_00648c1c;
extern "C" unsigned long g_00648c20;
extern "C" unsigned long g_00648d88;
extern "C" unsigned long g_00648dfe;
extern "C" unsigned long g_00648e0e;
extern "C" unsigned long g_00648e40;
extern "C" unsigned long g_00648e9e;
extern "C" unsigned long g_00648fba;
extern "C" unsigned long g_00649032;
extern "C" unsigned long g_00649036;
extern "C" unsigned long g_00649112;
extern "C" unsigned long g_00649124;
extern "C" unsigned long g_00649168;
extern "C" unsigned long g_0064916c;
extern "C" unsigned long g_00649170;
extern "C" unsigned long g_00649174;
extern "C" unsigned long g_00649178;
extern "C" unsigned long g_0064917c;
extern "C" unsigned long g_00649180;
extern "C" unsigned long g_00649184;
extern "C" unsigned long g_00649188;
extern "C" unsigned long g_0064918c;
extern "C" unsigned long g_00649190;
extern "C" unsigned long g_00649194;
extern "C" unsigned long g_00649198;
extern "C" unsigned long g_0064919c;
extern "C" unsigned long g_006491a0;
extern "C" unsigned long g_006491a4;
extern "C" unsigned long g_00649258;
BLRedPackOpenView::~BLRedPackOpenView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_00648acc + g_00648b40);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  if (*(int *)((int)this + 4*(0x45)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x45)) = 0;
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00648b10 + g_00648b44,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLRedPackOpenView::BLRedPackOpenView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(g_00648c1c + 0x648bc4);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLRedPackOpenView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * BLRedPackOpenView::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x118)));
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

undefined4 BLRedPackOpenView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

void BLRedPackOpenView::onEnter()
{
  ((BLRedPackOpenPresenter *)*(undefined4 *)(((int)this) + 0x114))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLRedPackOpenView::onExit()
{
  ((BLRedPackOpenPresenter *)*(undefined4 *)(((int)this) + 0x114))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
bool BLRedPackOpenView::init()
{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  code *pcVar11;
  int iStack_38;
  int iStack_34;
  undefined4 auStack_30 [2];
  undefined1 auStack_28 [4];
  undefined4 uStack_24;
  undefined1 uStack_20;
  undefined1 uStack_1f;
  undefined1 uStack_1e;
  undefined1 uStack_1d;
  
  iVar1 = (undefined4)(intptr_t)(((cocos2d::CCLayer *)this)->init());
  if (iVar1 != 0) {
    iVar2 = (undefined4)(intptr_t)(((BLRedPackOpenPresenter *)this)->create((BLRedPackOpenView*)((int)this)));
    *(int *)((int)this + 4*(0x45)) = iVar2;
    ((cocos2d::CCObject *)this)->retain();
    uVar3 = (undefined4)(cocos2d::CCDirector::sharedDirector());
    { cocos2d::CCSize _ws = ((cocos2d::CCDirector *)(uVar3))->getWinSize(); iStack_38 = hw_fbits(_ws.width); iStack_34 = hw_fbits(_ws.height); }
    uStack_20 = 0;
    uStack_1f = 0;
    uStack_1e = 0;
    uStack_1d = 0x99;
    piVar4 = (int *)cocos2d::CCLayerColor::create(*(cocos2d::_ccColor4B const*)&uStack_20, iStack_38, iStack_34);
    (**(code **)(*(int *)(piVar4) + (0xc0)))(piVar4,1);
    pcVar11 = *(code **)(*piVar4 + 0x7c);
    0 /* ctorZero */;
    (*pcVar11)(piVar4,&uStack_20);
    pcVar11 = *(code **)(*piVar4 + 0x4c);
    uVar3 = (undefined4)(func_0079e4fc(iStack_38 + -0x80000000,0x3f000000));
    uVar5 = (undefined4)(func_0079e4fc(iStack_34 + -0x80000000,0x3f000000));
    0 /* ctorZero */;
    (*pcVar11)(piVar4,&uStack_20);
    (**(code **)(*(int *)this + 200))(((int)this),piVar4);
    piVar4 = (int *)cocos2d::CCSprite::create((char const*)(unsigned char *)((char *)&g_00648d88 + (intptr_t)(g_00649168)));
    pcVar11 = *(code **)(*piVar4 + 0x4c);
    0 /* ctorZero */;
    uVar3 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4fc(uVar3,uVar5));
    0 /* ctorZero */;
    uVar3 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar6 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(func_0079e4fc(uVar3,uVar6));
    0 /* ctorZero */;
    (*pcVar11)(piVar4,&uStack_20);
    (**(code **)(*(int *)this + 0xcc))(((int)this),piVar4,2);
    uVar3 = (undefined4)(0 /* ctorZero */);
    ((cocos2d::CCNode *)(piVar4))->runAction((cocos2d::CCAction*)uVar3);
    piVar4 = (int *)cocos2d::CCSprite::create((char const*)(unsigned char *)((char *)&g_00648e0e + (intptr_t)(g_00649174)));
    pcVar11 = *(code **)(*piVar4 + 0x7c);
    0 /* ctorZero */;
    (*pcVar11)(piVar4,&uStack_20);
    (**(code **)(*(int *)this + 0xcc))(((int)this),piVar4,3);
    piVar7 = (int *)cocos2d::CCSprite::create((char const*)(unsigned char *)((char *)&g_00648e40 + (intptr_t)(g_00649178)));
    (**(code **)(*(int *)(piVar7) + (100)))(piVar7,g_0064917c);
    pcVar11 = *(code **)(*piVar7 + 0x7c);
    0 /* ctorZero */;
    (*pcVar11)(piVar7,&uStack_20);
    (**(code **)(*(int *)this + 0xcc))(((int)this),piVar7,4);
    piVar7 = (int *)cocos2d::extension::CCControlButton::create();
    *(int *)((int)this + 4*(0x44)) = (int)piVar7;
    (**(code **)(*(int *)(piVar7) + (0x294)))(piVar7,0);
    piVar7 = (int *)*(int *)((int)this + 4*(0x44));
    pcVar11 = *(code **)(*piVar7 + 0x30c);
    func_0079e45c(&uStack_20,(unsigned char *)((char *)&g_00648e9e + (intptr_t)(g_00649180)),auStack_28);
    uVar3 = (undefined4)(0 /* ctorZero */);
    (*pcVar11)(piVar7,uVar3,1);
    func_0079e2bc(&uStack_20);
    piVar7 = (int *)*(int *)((int)this + 4*(0x44));
    pcVar11 = *(code **)(*piVar7 + 0x28c);
    0 /* ctorZero */;
    uVar3 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(uVar3,uVar5));
    0 /* ctorZero */;
    uVar3 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar6 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(func_0079e4dc(uVar3,uVar6));
    0 /* ctorZero */;
    (*pcVar11)(piVar7,&uStack_20);
    piVar7 = (int *)*(int *)((int)this + 4*(0x44));
    pcVar11 = *(code **)(*piVar7 + 0x4c);
    puVar8 = (undefined4 *)(**(code **)(*(int *)(piVar4) + (0x8c)))(piVar4);
    uVar3 = (undefined4)(func_0079e4fc(*puVar8,0x3f000000));
    0 /* ctorZero */;
    uVar3 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(uVar3,uVar5));
    puVar8 = (undefined4 *)(**(code **)(*(int *)(piVar4) + (0x8c)))(piVar4);
    uVar3 = (undefined4)(func_0079e4fc(*puVar8,0x3f000000));
    0 /* ctorZero */;
    uVar3 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar6 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(func_0079e4dc(uVar3,uVar6));
    0 /* ctorZero */;
    (*pcVar11)(piVar7,&uStack_20);
    (**(code **)(*(int *)(piVar4) + (0xcc)))(piVar4,*(int *)((int)this + 4*(0x44)),6);
    func_0079e45c(&uStack_20,(unsigned char *)((char *)&g_00648fba + (intptr_t)(g_0064918c)),auStack_28);
    piVar7 = (int *)0 /* ctorZero */;
    func_0079e2bc(&uStack_20);
    pcVar11 = *(code **)(*piVar7 + 0x4c);
    puVar8 = (undefined4 *)(**(code **)(*(int *)*(int *)((int)this + 4*(0x44)) + 0x8c))();
    uVar3 = (undefined4)(func_0079e4fc(*puVar8,0x3f000000));
    iVar2 = (undefined4)(intptr_t)((**(code **)(*(int *)*(int *)((int)this + 4*(0x44)) + 0x8c))());
    uVar5 = (undefined4)(func_0079e4fc(*(undefined4 *)(iVar2 + 4),0x3f000000));
    uVar5 = (undefined4)(func_0079e59c(uVar5,0x40800000));
    0 /* ctorZero */;
    (*pcVar11)(piVar7,&uStack_20);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x44)) + 0xcc))((int *)*(int *)((int)this + 4*(0x44)),piVar7,7);
    puVar9 = (unsigned char *)((char *)&g_00649032 + (intptr_t)(g_00649190));
    iVar2 = (undefined4)(intptr_t)(cocos2d::CCLabelTTF::create((char const*)(unsigned char *)((char *)&g_00649036 + (intptr_t)(g_00649194)), (char const*)puVar9, g_00649198));
    *(int *)((int)this + 4*(0x42)) = iVar2;
    (**(code **)(*(int *)(piVar4) + (0xcc)))(piVar4,iVar2,8);
    piVar7 = (int *)*(int *)((int)this + 4*(0x42));
    pcVar11 = *(code **)(*piVar7 + 0x7c);
    0 /* ctorZero */;
    (*pcVar11)(piVar7,&uStack_20);
    piVar7 = (int *)*(int *)((int)this + 4*(0x42));
    pcVar11 = *(code **)(*piVar7 + 0x4c);
    puVar8 = (undefined4 *)(**(code **)(*(int *)(piVar4) + (0x8c)))(piVar4);
    uVar3 = (undefined4)(func_0079e4fc(*puVar8,0x3f000000));
    0 /* ctorZero */;
    uVar3 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(uVar3,uVar5));
    puVar8 = (undefined4 *)(**(code **)(*(int *)(piVar4) + (0x8c)))(piVar4);
    uVar3 = (undefined4)(func_0079e4fc(*puVar8,0x3f000000));
    0 /* ctorZero */;
    uVar3 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar6 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(func_0079e4dc(uVar3,uVar6));
    0 /* ctorZero */;
    (*pcVar11)(piVar7,&uStack_20);
    uStack_20 = 0xff;
    uStack_1f = 0xff;
    uStack_1e = 0xff;
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x42)) + 0x1b4))((int *)*(int *)((int)this + 4*(0x42)),&uStack_20);
    puVar10 = (unsigned char *)((char *)&g_00649112 + (intptr_t)(g_006491a0));
    ((cocos2d::CCLabelTTF *)(*(int *)((int)this + 4*(0x42))))->enableStroke(*(const ccColor3B *)(void *)puVar10, 0x3f800000, 1);
    iVar2 = (undefined4)(intptr_t)(cocos2d::CCLabelTTF::create((char const*)(unsigned char *)((char *)&g_00649124 + (intptr_t)(g_006491a4)), (char const*)puVar9, g_00649198));
    *(int *)((int)this + 4*(0x43)) = iVar2;
    (**(code **)(*(int *)(piVar4) + (0xcc)))(piVar4,iVar2,8);
    piVar7 = (int *)*(int *)((int)this + 4*(0x43));
    pcVar11 = *(code **)(*piVar7 + 0x7c);
    0 /* ctorZero */;
    (*pcVar11)(piVar7,&uStack_20);
    piVar7 = (int *)*(int *)((int)this + 4*(0x43));
    pcVar11 = *(code **)(*piVar7 + 0x4c);
    puVar8 = (undefined4 *)(**(code **)(*(int *)(piVar4) + (0x8c)))(piVar4);
    uVar3 = (undefined4)(func_0079e4fc(*puVar8,0x3f000000));
    0 /* ctorZero */;
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(func_0079e4dc(auStack_30[0],uVar3));
    puVar8 = (undefined4 *)(**(code **)(*(int *)(piVar4) + (0x8c)))(piVar4);
    uVar5 = (undefined4)(func_0079e4fc(*puVar8,0x3f000000));
    0 /* ctorZero */;
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(uStack_24,uVar5));
    0 /* ctorZero */;
    (*pcVar11)(piVar7,&uStack_20);
    uStack_20 = 0xff;
    uStack_1f = 0xff;
    uStack_1e = 0xff;
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x43)) + 0x1b4))((int *)*(int *)((int)this + 4*(0x43)),&uStack_20);
    ((cocos2d::CCLabelTTF *)(*(int *)((int)this + 4*(0x43))))->enableStroke(*(const ccColor3B *)(void *)puVar10, 0x3f800000, 1);
    ((BLRedPackOpenPresenter *)(*(int *)((int)this + 4*(0x45))))->initWithView((BLRedPackOpenView*)((int)this));
  }
  return iVar1;
}
