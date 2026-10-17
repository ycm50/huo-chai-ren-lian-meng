#include "BLRenascenceTargetItemView.h"
#include "CCGeometry.h"
#include "CCLayer.h"
#include "CCObject.h"
#include "CCControlButton.h"
#include "CCLabelTTF.h"
#include "CCDirector.h"
#include "BLLeakUtils.h"
#include "BLRenascenceTargetItemPresenter.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
using namespace cocos2d;
// 兜底声明
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_00651bd8;
extern "C" unsigned long UNK_00651c0a;
extern "C" unsigned long UNK_00651c64;
extern "C" unsigned long UNK_00651d28;
extern "C" unsigned long UNK_00651d68;
extern "C" unsigned long UNK_00651d96;
extern "C" unsigned long UNK_00651e1e;
extern "C" unsigned long UNK_00651e60;
extern "C" unsigned long UNK_00651e64;
extern "C" unsigned long UNK_00651e7c;
extern "C" unsigned long UNK_00651f18;
extern "C" unsigned long UNK_00651fa4;
extern "C" unsigned long UNK_00652056;
extern "C" unsigned long UNK_006520f4;
extern "C" unsigned long UNK_006520f8;
extern "C" unsigned long UNK_00652108;
extern "C" unsigned long UNK_00652170;
extern "C" unsigned long UNK_0065223a;
extern "C" unsigned long _UNK_00651c50;
extern "C" unsigned long _UNK_00651c54;
extern "C" unsigned long _UNK_00651c68;
extern "C" unsigned long _UNK_00651d2c;
extern "C" unsigned long _UNK_00651dc0;
extern "C" unsigned long _UNK_00651dc4;
extern "C" unsigned long _UNK_006521b0;
extern "C" unsigned long _UNK_006521b4;
extern "C" unsigned long _UNK_006521b8;
extern "C" unsigned long _UNK_006521bc;
extern "C" unsigned long _UNK_006521c0;
extern "C" unsigned long _UNK_006521c4;
extern "C" unsigned long _UNK_006521c8;
extern "C" unsigned long _UNK_006521cc;
extern "C" unsigned long _UNK_006521d0;
extern "C" unsigned long _UNK_006521d4;
extern "C" unsigned long _UNK_006521d8;
extern "C" unsigned long _UNK_006521dc;
extern "C" unsigned long _UNK_006521e0;
extern "C" unsigned long _UNK_006521e4;
extern "C" unsigned long _UNK_006521e8;
extern "C" unsigned long _UNK_006521ec;
extern "C" unsigned long _UNK_00652288;
extern "C" unsigned long _UNK_0065228c;
extern "C" unsigned long _UNK_00652290;
extern "C" unsigned long g_00651bd8;
extern "C" unsigned long g_00651c0a;
extern "C" unsigned long g_00651c50;
extern "C" unsigned long g_00651c54;
extern "C" unsigned long g_00651c64;
extern "C" unsigned long g_00651c68;
extern "C" unsigned long g_00651d28;
extern "C" unsigned long g_00651d2c;
extern "C" unsigned long g_00651d68;
extern "C" unsigned long g_00651d96;
extern "C" unsigned long g_00651dc0;
extern "C" unsigned long g_00651dc4;
extern "C" unsigned long g_00651e1e;
extern "C" unsigned long g_00651e60;
extern "C" unsigned long g_00651e64;
extern "C" unsigned long g_00651e7c;
extern "C" unsigned long g_00651f18;
extern "C" unsigned long g_00651fa4;
extern "C" unsigned long g_00652056;
extern "C" unsigned long g_006520f4;
extern "C" unsigned long g_006520f8;
extern "C" unsigned long g_00652108;
extern "C" unsigned long g_00652170;
extern "C" unsigned long g_006521b0;
extern "C" unsigned long g_006521b4;
extern "C" unsigned long g_006521b8;
extern "C" unsigned long g_006521bc;
extern "C" unsigned long g_006521c0;
extern "C" unsigned long g_006521c4;
extern "C" unsigned long g_006521c8;
extern "C" unsigned long g_006521cc;
extern "C" unsigned long g_006521d0;
extern "C" unsigned long g_006521d4;
extern "C" unsigned long g_006521d8;
extern "C" unsigned long g_006521dc;
extern "C" unsigned long g_006521e0;
extern "C" unsigned long g_006521e4;
extern "C" unsigned long g_006521e8;
extern "C" unsigned long g_006521ec;
extern "C" unsigned long g_0065223a;
extern "C" unsigned long g_00652288;
extern "C" unsigned long g_0065228c;
extern "C" unsigned long g_00652290;
BLRenascenceTargetItemView::~BLRenascenceTargetItemView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_00651bd8 + g_00651c50);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00651c0a + g_00651c54,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  if (*(int *)((int)this + 4*(0x42)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x42)) = 0;
  }
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLRenascenceTargetItemView::BLRenascenceTargetItemView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_00651d68 + g_00651dc0);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00651d96 + g_00651dc4,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}


bool BLRenascenceTargetItemView::init()
{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = ((cocos2d::CCLayer *)this)->init();
  if (iVar1 != 0) {
    uVar2 = (undefined4)(((BLRenascenceTargetItemPresenter *)this)->create());
    *(undefined4 *)(((int)this) + 0x108) = uVar2;
    ((cocos2d::CCObject *)this)->retain();
    BLRenascenceTargetItemView::initView();
    ((BLRenascenceTargetItemPresenter *)*(undefined4 *)(((int)this) + 0x108))->initWithView((BLRenascenceTargetItemView*)((int)this));
  }
  return iVar1;
}

void BLRenascenceTargetItemView::onEnter()
{
  ((BLRenascenceTargetItemPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLRenascenceTargetItemView::onExit()
{
  ((BLRenascenceTargetItemPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
void BLRenascenceTargetItemView::initView()
{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined *puVar8;
  int iVar9;
  code *pcVar10;
  int iStack_30;
  int iStack_2c;
  undefined4 auStack_28 [2];
  undefined1 uStack_20;
  undefined1 uStack_1f;
  undefined1 uStack_1e;
  undefined4 uStack_1c;
  
  0 /* ctorZero */;
  cocos2d::CCDirector::sharedDirector();
  uVar1 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar1 = (undefined4)(func_0079e4dc(auStack_28[0],uVar1));
  0 /* ctorZero */;
  cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar2 = (undefined4)(func_0079e4dc(uStack_1c,uVar2));
  0 /* ctorZero */;
  func_0079e45c(&uStack_20,(unsigned char *)((char *)&g_00651e1e + (intptr_t)(g_006521b8)),auStack_28);
  piVar3 = (int *)0 /* ctorZero */;
  func_0079e2bc(&uStack_20);
  pcVar10 = *(code **)(*piVar3 + 0x1d4);
  0 /* ctorZero */;
  (*pcVar10)(piVar3,&uStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),piVar3);
  puVar8 = (unsigned char *)((char *)&g_00651e60 + (intptr_t)(g_006521bc));
  piVar3 = (int *)cocos2d::CCLabelTTF::create((char const*)(unsigned char *)((char *)&g_00651e64 + (intptr_t)(g_006521c0)), (char const*)puVar8, g_006521c4);
  *(int *)((int)this + 4*(0x43)) = (int)piVar3;
  (**(code **)(*(int *)(piVar3) + (0x1b4)))(piVar3,(unsigned char *)((char *)&g_00651e7c + (intptr_t)(g_006521c8)));
  iVar9 = (undefined4)(intptr_t)(iStack_2c);
  iVar4 = (undefined4)(intptr_t)((**(code **)(*(int *)*(int *)((int)this + 4*(0x43)) + 0x8c))());
  uVar1 = (undefined4)(func_0079e59c(*(undefined4 *)(iVar4 + 4)));
  uVar1 = (undefined4)(func_0079e57c(iVar9,uVar1));
  uVar1 = (undefined4)(func_0079e4dc(uVar1,g_006521cc));
  piVar3 = (int *)*(int *)((int)this + 4*(0x43));
  pcVar10 = *(code **)(*piVar3 + 0x7c);
  0 /* ctorZero */;
  (*pcVar10)(piVar3,&uStack_20);
  piVar3 = (int *)*(int *)((int)this + 4*(0x43));
  pcVar10 = *(code **)(*piVar3 + 0x4c);
  uVar2 = (undefined4)(func_0079e4fc(iStack_30 + -0x80000000,0x3f000000));
  uVar2 = (undefined4)(func_0079e59c(uVar2,g_006521d0));
  uVar5 = (undefined4)(func_0079e4fc(iStack_2c,0x3f000000));
  uVar5 = (undefined4)(func_0079e57c(uVar5,uVar1));
  0 /* ctorZero */;
  (*pcVar10)(piVar3,&uStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x43)));
  piVar3 = (int *)cocos2d::CCLabelTTF::create((char const*)(unsigned char *)((char *)&g_00651f18 + (intptr_t)(g_006521d4)), (char const*)puVar8, g_006521c4);
  *(int *)((int)this + 4*(0x44)) = (int)piVar3;
  uStack_20 = 0;
  uStack_1f = 0xe9;
  uStack_1e = 0x17;
  (**(code **)(*(int *)(piVar3) + (0x1b4)))(piVar3,&uStack_20);
  piVar3 = (int *)*(int *)((int)this + 4*(0x44));
  pcVar10 = *(code **)(*piVar3 + 0x7c);
  0 /* ctorZero */;
  (*pcVar10)(piVar3,&uStack_20);
  piVar3 = (int *)*(int *)((int)this + 4*(0x44));
  pcVar10 = *(code **)(*piVar3 + 0x4c);
  uVar2 = (undefined4)(func_0079e4fc(iStack_30,0x3f000000));
  uVar2 = (undefined4)(func_0079e57c(uVar2,g_006521d0));
  uVar5 = (undefined4)(func_0079e4fc(iStack_2c,0x3f000000));
  uVar5 = (undefined4)(func_0079e57c(uVar5,uVar1));
  0 /* ctorZero */;
  (*pcVar10)(piVar3,&uStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x44)));
  piVar3 = (int *)cocos2d::CCLabelTTF::create((char const*)(unsigned char *)((char *)&g_00651fa4 + (intptr_t)(g_006521d8)), (char const*)puVar8, g_006521c4);
  *(int *)((int)this + 4*(0x46)) = (int)piVar3;
  uStack_20 = 0;
  uStack_1f = 0xe9;
  uStack_1e = 0x17;
  (**(code **)(*(int *)(piVar3) + (0x1b4)))(piVar3,&uStack_20);
  piVar3 = (int *)*(int *)((int)this + 4*(0x46));
  iVar9 = (int)*(int *)&(*piVar3);
  pcVar10 = *(code **)(iVar9 + 0x4c);
  uVar2 = (undefined4)(func_0079e4fc(iStack_30 + -0x80000000,0x3f000000));
  uVar2 = (undefined4)(func_0079e59c(uVar2,g_006521d0));
  puVar6 = (undefined4 *)(**(code **)(iVar9 + 0x8c))(piVar3);
  uVar5 = (undefined4)(func_0079e4fc(*puVar6,0x3f000000));
  uVar2 = (undefined4)(func_0079e59c(uVar2,uVar5));
  uVar5 = (undefined4)(func_0079e4fc(iStack_2c + -0x80000000,0x3f000000));
  uVar5 = (undefined4)(func_0079e59c(uVar5,uVar1));
  iVar9 = (undefined4)(intptr_t)((**(code **)(*(int *)*(int *)((int)this + 4*(0x46)) + 0x8c))());
  uVar7 = (undefined4)(func_0079e4fc(*(undefined4 *)(iVar9 + 4),0x3f000000));
  uVar5 = (undefined4)(func_0079e59c(uVar5,uVar7));
  0 /* ctorZero */;
  (*pcVar10)(piVar3,&uStack_20);
  iVar4 = (undefined4)(intptr_t)(cocos2d::extension::CCControlButton::create());
  iVar9 = (undefined4)(intptr_t)(g_006521dc);
  *(int *)((int)this + 4*(0x45)) = iVar4;
  func_0079e45c(&uStack_20,&g_00652056 + iVar9,auStack_28);
  uVar2 = (undefined4)(0 /* ctorZero */);
  func_0079e2bc(&uStack_20);
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x45)) + 0x30c))((int *)*(int *)((int)this + 4*(0x45)),uVar2,1);
  piVar3 = (int *)*(int *)((int)this + 4*(0x45));
  pcVar10 = *(code **)(*piVar3 + 0x28c);
  uVar2 = (undefined4)((**(code **)(*(int *)*(int *)((int)this + 4*(0x46)) + 0x8c))());
  0 /* ctorZero */;
  (*pcVar10)(piVar3,&uStack_20);
  piVar3 = (int *)*(int *)((int)this + 4*(0x45));
  pcVar10 = *(code **)(*piVar3 + 0x4c);
  uVar2 = (undefined4)((**(code **)(*(int *)*(int *)((int)this + 4*(0x46)) + 0x50))());
  (*pcVar10)(piVar3,uVar2);
  (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x45)));
  (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x46)));
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x45)) + 0x90))((int *)*(int *)((int)this + 4*(0x45)),0);
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x46)) + 0x90))((int *)*(int *)((int)this + 4*(0x46)),0);
  puVar8 = (unsigned char *)((char *)&g_006520f4 + (intptr_t)(g_006521e0));
  piVar3 = (int *)cocos2d::CCLabelTTF::create((char const*)(unsigned char *)((char *)&g_006520f8 + (intptr_t)(g_006521e4)), (char const*)puVar8, g_006521c4);
  iVar9 = (undefined4)(intptr_t)(g_006521e8);
  *(int *)((int)this + 4*(0x47)) = (int)piVar3;
  (**(code **)(*(int *)(piVar3) + (0x1b4)))(piVar3,&g_00652108 + iVar9);
  piVar3 = (int *)*(int *)((int)this + 4*(0x47));
  pcVar10 = *(code **)(*piVar3 + 0x7c);
  0 /* ctorZero */;
  (*pcVar10)(piVar3,&uStack_20);
  piVar3 = (int *)*(int *)((int)this + 4*(0x47));
  pcVar10 = *(code **)(*piVar3 + 0x4c);
  uVar2 = (undefined4)(func_0079e4fc(iStack_2c + -0x80000000,0x3f000000));
  uVar1 = (undefined4)(func_0079e59c(uVar2,uVar1));
  0 /* ctorZero */;
  (*pcVar10)(piVar3,&uStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x47)));
  piVar3 = (int *)cocos2d::CCLabelTTF::create((char const*)(unsigned char *)((char *)&g_00652170 + (intptr_t)(g_006521ec)), (char const*)puVar8, g_006521c4);
  *(int *)((int)this + 4*(0x48)) = (int)piVar3;
  uStack_20 = 0;
  uStack_1f = 0xe9;
  uStack_1e = 0x17;
  (**(code **)(*(int *)(piVar3) + (0x1b4)))();
  piVar3 = (int *)*(int *)((int)this + 4*(0x48));
  pcVar10 = *(code **)(*piVar3 + 0x7c);
  0 /* ctorZero */;
  (*pcVar10)(piVar3,&uStack_20);
  piVar3 = (int *)*(int *)((int)this + 4*(0x48));
  pcVar10 = *(code **)(*piVar3 + 0x4c);
  uVar1 = (undefined4)((**(code **)(*(int *)*(int *)((int)this + 4*(0x47)) + 0x50))());
  puVar6 = (undefined4 *)(**(code **)(*(int *)*(int *)((int)this + 4*(0x47)) + 0x8c))();
  uVar2 = (undefined4)(func_0079e59c(*puVar6,g_00652288));
  0 /* ctorZero */;
  ((cocos2d::CCPoint *)(uVar1))->operator+(*(const CCPoint *)(void *)auStack_28);
  (*pcVar10)(piVar3,&uStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x48)));
  piVar3 = (int *)cocos2d::CCLabelTTF::create((char const*)(unsigned char *)((char *)&g_0065223a + (intptr_t)(g_0065228c)), (char const*)puVar8, g_00652290);
  *(int *)((int)this + 4*(0x49)) = (int)piVar3;
  (**(code **)(*(int *)(piVar3) + (0x1b4)))(piVar3,&g_00652108 + iVar9);
  piVar3 = (int *)*(int *)((int)this + 4*(0x49));
  pcVar10 = *(code **)(*piVar3 + 0x4c);
  0 /* ctorZero */;
  (*pcVar10)(piVar3,&uStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x49)));
  (**(code **)(*(int *)this + 0x88))(((int)this),&iStack_30);
  return;
}
