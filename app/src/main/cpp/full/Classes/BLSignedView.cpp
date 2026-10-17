#include "BLSignedView.h"
#include "CCGeometry.h"
#include "CCLayer.h"
#include "CCObject.h"
#include "CCLabelTTF.h"
#include "CCControlButton.h"
#include "CCDirector.h"
#include "BLLeakUtils.h"
#include "BLSignedPresenter.h"
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
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e59c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_00689a94;
extern "C" unsigned long UNK_00689ad8;
extern "C" unsigned long UNK_00689b1c;
extern "C" unsigned long UNK_00689b44;
extern "C" unsigned long UNK_00689ce8;
extern "C" unsigned long UNK_00689dce;
extern "C" unsigned long UNK_00689ec8;
extern "C" unsigned long UNK_00689ef8;
extern "C" unsigned long UNK_00689fc4;
extern "C" unsigned long UNK_00689fc6;
extern "C" unsigned long UNK_0068a078;
extern "C" unsigned long UNK_0068a0ae;
extern "C" unsigned long _DAT_00689be4;
extern "C" unsigned long _DAT_00689be8;
extern "C" unsigned long _UNK_00689b08;
extern "C" unsigned long _UNK_00689b0c;
extern "C" unsigned long _UNK_00689b20;
extern "C" unsigned long _UNK_00689b48;
extern "C" unsigned long _UNK_0068a0c8;
extern "C" unsigned long _UNK_0068a0cc;
extern "C" unsigned long _UNK_0068a0d0;
extern "C" unsigned long _UNK_0068a0d4;
extern "C" unsigned long _UNK_0068a0d8;
extern "C" unsigned long _UNK_0068a0dc;
extern "C" unsigned long _UNK_0068a0e0;
extern "C" unsigned long _UNK_0068a0e4;
extern "C" unsigned long _UNK_0068a0e8;
extern "C" unsigned long _UNK_0068a0ec;
extern "C" unsigned long _UNK_0068a0f0;
extern "C" unsigned long _UNK_0068a0f4;
extern "C" unsigned long _UNK_0068a0f8;
extern "C" unsigned long _UNK_0068a0fc;
extern "C" unsigned long _UNK_0068a100;
extern "C" unsigned long _UNK_0068a104;
extern "C" unsigned long _UNK_0068a108;
extern "C" unsigned long _UNK_0068a334;
extern "C" unsigned long _UNK_0068a338;
extern "C" unsigned long _UNK_0068a33c;
extern "C" unsigned long _UNK_0068a340;
extern "C" unsigned long _UNK_0068a344;
extern "C" unsigned long _UNK_0068a348;
extern "C" unsigned long _UNK_0068a34c;
extern "C" unsigned long _UNK_0068a350;
extern "C" unsigned long _UNK_0068a354;
extern "C" unsigned long g_00689a94;
extern "C" unsigned long g_00689ad8;
extern "C" unsigned long g_00689b08;
extern "C" unsigned long g_00689b0c;
extern "C" unsigned long g_00689b1c;
extern "C" unsigned long g_00689b20;
extern "C" unsigned long g_00689b44;
extern "C" unsigned long g_00689b48;
extern "C" unsigned long g_00689be4;
extern "C" unsigned long g_00689be8;
extern "C" unsigned long g_00689ce8;
extern "C" unsigned long g_00689dce;
extern "C" unsigned long g_00689ec8;
extern "C" unsigned long g_00689ef8;
extern "C" unsigned long g_00689fc4;
extern "C" unsigned long g_00689fc6;
extern "C" unsigned long g_0068a078;
extern "C" unsigned long g_0068a0ae;
extern "C" unsigned long g_0068a0c8;
extern "C" unsigned long g_0068a0cc;
extern "C" unsigned long g_0068a0d0;
extern "C" unsigned long g_0068a0d4;
extern "C" unsigned long g_0068a0d8;
extern "C" unsigned long g_0068a0dc;
extern "C" unsigned long g_0068a0e0;
extern "C" unsigned long g_0068a0e4;
extern "C" unsigned long g_0068a0e8;
extern "C" unsigned long g_0068a0ec;
extern "C" unsigned long g_0068a0f0;
extern "C" unsigned long g_0068a0f4;
extern "C" unsigned long g_0068a0f8;
extern "C" unsigned long g_0068a0fc;
extern "C" unsigned long g_0068a100;
extern "C" unsigned long g_0068a104;
extern "C" unsigned long g_0068a108;
extern "C" unsigned long g_0068a334;
extern "C" unsigned long g_0068a338;
extern "C" unsigned long g_0068a33c;
extern "C" unsigned long g_0068a340;
extern "C" unsigned long g_0068a344;
extern "C" unsigned long g_0068a348;
extern "C" unsigned long g_0068a34c;
extern "C" unsigned long g_0068a350;
extern "C" unsigned long g_0068a354;
BLSignedView::~BLSignedView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_00689a94 + g_00689b08);
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
  func_0079e45c(&uStack_14,&g_00689ad8 + g_00689b0c,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLSignedView::BLSignedView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(g_00689be4 + 0x689b8c);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLSignedView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * BLSignedView::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x128)));
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

undefined4 BLSignedView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x108);
}

undefined4 BLSignedView::getBackGround()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 BLSignedView::getTableView()
{
  return *(undefined4 *)(((int)this) + 0x118);
}

undefined4 BLSignedView::getTabBg()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

undefined4 BLSignedView::getLabTitle()
{
  return *(undefined4 *)(((int)this) + 0x11c);
}

undefined4 BLSignedView::getBtnClose()
{
  return *(undefined4 *)(((int)this) + 0x120);
}

undefined4 BLSignedView::getBtnAbout()
{
  return *(undefined4 *)(((int)this) + 0x124);
}

void BLSignedView::onEnter()
{
  ((BLSignedPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLSignedView::onExit()
{
  ((BLSignedPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
bool BLSignedView::init()
{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  code *pcVar6;
  int *piVar7;
  int iStack_4c;
  undefined4 auStack_30 [2];
  undefined1 auStack_28 [4];
  undefined4 uStack_24;
  undefined1 uStack_20;
  undefined1 uStack_1f;
  undefined1 uStack_1e;
  
  iVar1 = (undefined4)(intptr_t)(((cocos2d::CCLayer *)this)->init());
  if (iVar1 == 0) {
    iStack_4c = 0;
  }
  else {
    iVar1 = (undefined4)(intptr_t)(((BLSignedPresenter *)this)->create((BLSignedView*)((int)this)));
    *(int *)((int)this + 4*(0x42)) = iVar1;
    if (iVar1 != 0) {
      ((cocos2d::CCObject *)this)->retain();
    }
    func_0079e45c(&uStack_20,(unsigned char *)((char *)&g_00689ce8 + (intptr_t)(g_0068a0c8)),auStack_28);
    iVar1 = (undefined4)(intptr_t)(0 /* ctorZero */);
    *(int *)((int)this + 4*(0x43)) = iVar1;
    func_0079e2bc(&uStack_20);
    piVar7 = (int *)*(int *)((int)this + 4*(0x43));
    pcVar6 = *(code **)(*piVar7 + 0x88);
    0 /* ctorZero */;
    uVar4 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar2 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar2 = (undefined4)(func_0079e4dc(uVar4,uVar2));
    0 /* ctorZero */;
    uVar4 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar4 = (undefined4)(func_0079e4dc(uVar4,uVar3));
    0 /* ctorZero */;
    (*pcVar6)(piVar7,&uStack_20);
    piVar7 = (int *)*(int *)((int)this + 4*(0x43));
    pcVar6 = *(code **)(*piVar7 + 0x4c);
    0 /* ctorZero */;
    uVar4 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar2 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar2 = (undefined4)(func_0079e4dc(uVar4,uVar2));
    0 /* ctorZero */;
    uVar4 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar4 = (undefined4)(func_0079e4dc(uVar4,uVar3));
    0 /* ctorZero */;
    (*pcVar6)(piVar7,&uStack_20);
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x43)),1);
    func_0079e45c(&uStack_20,(unsigned char *)((char *)&g_00689dce + (intptr_t)(g_0068a0d4)),auStack_28);
    iVar1 = (undefined4)(intptr_t)(0 /* ctorZero */);
    *(int *)((int)this + 4*(0x44)) = iVar1;
    func_0079e2bc(&uStack_20);
    piVar7 = (int *)*(int *)((int)this + 4*(0x44));
    pcVar6 = *(code **)(*piVar7 + 0x88);
    0 /* ctorZero */;
    uVar4 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar2 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar2 = (undefined4)(func_0079e4dc(uVar4,uVar2));
    0 /* ctorZero */;
    uVar4 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar4 = (undefined4)(func_0079e4dc(uVar4,uVar3));
    0 /* ctorZero */;
    (*pcVar6)(piVar7,&uStack_20);
    piVar7 = (int *)*(int *)((int)this + 4*(0x44));
    pcVar6 = *(code **)(*piVar7 + 0x4c);
    0 /* ctorZero */;
    uVar4 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar2 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar2 = (undefined4)(func_0079e4dc(uVar4,uVar2));
    0 /* ctorZero */;
    uVar4 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar4 = (undefined4)(func_0079e4dc(uVar4,uVar3));
    0 /* ctorZero */;
    (*pcVar6)(piVar7,&uStack_20);
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x44)),2);
    piVar7 = (int *)cocos2d::extension::CCControlButton::create();
    *(int *)((int)this + 4*(0x48)) = (int)piVar7;
    (**(code **)(*(int *)(piVar7) + (0x294)))(piVar7,0);
    func_0079e45c(&uStack_20,(unsigned char *)((char *)&g_00689ec8 + (intptr_t)(g_0068a0e0)),auStack_28);
    uVar4 = (undefined4)(0 /* ctorZero */);
    func_0079e2bc(&uStack_20);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x48)) + 0x30c))((int *)*(int *)((int)this + 4*(0x48)),uVar4,1);
    func_0079e45c(&uStack_20,(unsigned char *)((char *)&g_00689ef8 + (intptr_t)(g_0068a0e4)),auStack_28);
    uVar4 = (undefined4)(0 /* ctorZero */);
    func_0079e2bc(&uStack_20);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x48)) + 0x30c))((int *)*(int *)((int)this + 4*(0x48)),uVar4,2);
    piVar7 = (int *)*(int *)((int)this + 4*(0x48));
    pcVar6 = *(code **)(*piVar7 + 0x28c);
    0 /* ctorZero */;
    (*pcVar6)(piVar7,&uStack_20);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x48)) + 0x30))((int *)*(int *)((int)this + 4*(0x48)),0x3f800000);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x48)) + 0x38))((int *)*(int *)((int)this + 4*(0x48)),0x3f800000);
    piVar7 = (int *)*(int *)((int)this + 4*(0x48));
    pcVar6 = *(code **)(*piVar7 + 0x4c);
    0 /* ctorZero */;
    uVar4 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar2 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar2 = (undefined4)(func_0079e4dc(uVar4,uVar2));
    0 /* ctorZero */;
    uVar4 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar4 = (undefined4)(func_0079e4dc(uVar4,uVar3));
    0 /* ctorZero */;
    (*pcVar6)(piVar7,&uStack_20);
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x48)),3);
    piVar7 = (int *)cocos2d::CCLabelTTF::create((char const*)(unsigned char *)((char *)&g_00689fc4 + (intptr_t)(g_0068a0f4)), (char const*)(unsigned char *)((char *)&g_00689fc6 + (intptr_t)(g_0068a0f8)), g_0068a0fc);
    *(int *)((int)this + 4*(0x47)) = (int)piVar7;
    uStack_20 = 0x7d;
    uStack_1f = 0x7d;
    uStack_1e = 0x7d;
    (**(code **)(*(int *)(piVar7) + (0x1b4)))();
    piVar7 = (int *)*(int *)((int)this + 4*(0x47));
    pcVar6 = *(code **)(*piVar7 + 0x7c);
    0 /* ctorZero */;
    (*pcVar6)(piVar7,&uStack_20);
    piVar7 = (int *)*(int *)((int)this + 4*(0x47));
    pcVar6 = *(code **)(*piVar7 + 0x4c);
    0 /* ctorZero */;
    uVar4 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar2 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar2 = (undefined4)(func_0079e4dc(uVar4,uVar2));
    0 /* ctorZero */;
    uVar4 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar4 = (undefined4)(func_0079e4dc(uVar4,uVar3));
    0 /* ctorZero */;
    (*pcVar6)(piVar7,&uStack_20);
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x47)),3);
    piVar7 = (int *)cocos2d::extension::CCControlButton::create();
    *(int *)((int)this + 4*(0x49)) = (int)piVar7;
    (**(code **)(*(int *)(piVar7) + (0x294)))(piVar7,0);
    piVar7 = (int *)*(int *)((int)this + 4*(0x49));
    pcVar6 = *(code **)(*piVar7 + 0x30c);
    func_0079e45c(&uStack_20,(unsigned char *)((char *)&g_0068a078 + (intptr_t)(g_0068a104)),auStack_28);
    uVar4 = (undefined4)(0 /* ctorZero */);
    (*pcVar6)(piVar7,uVar4,1);
    func_0079e2bc(&uStack_20);
    piVar7 = (int *)*(int *)((int)this + 4*(0x49));
    pcVar6 = *(code **)(*piVar7 + 0x30c);
    func_0079e45c(&uStack_20,(unsigned char *)((char *)&g_0068a0ae + (intptr_t)(g_0068a108)),auStack_28);
    uVar4 = (undefined4)(0 /* ctorZero */);
    (*pcVar6)(piVar7,uVar4,2);
    func_0079e2bc(&uStack_20);
    piVar7 = (int *)*(int *)((int)this + 4*(0x49));
    pcVar6 = *(code **)(*piVar7 + 0x28c);
    0 /* ctorZero */;
    (*pcVar6)(piVar7,&uStack_20);
    pcVar6 = *(code **)(*(int *)*(int *)((int)this + 4*(0x49)) + 0x4c);
    uVar4 = (undefined4)((**(code **)(*(int *)*(int *)((int)this + 4*(0x47)) + 0x50))());
    puVar5 = (undefined4 *)(**(code **)(*(int *)*(int *)((int)this + 4*(0x47)) + 0x8c))();
    piVar7 = (int *)*(int *)((int)this + 4*(0x49));
    uVar3 = (undefined4)(*puVar5);
    puVar5 = (undefined4 *)(**(code **)(*(int *)(piVar7) + (0x8c)))(piVar7);
    uVar2 = (undefined4)(func_0079e4fc(*puVar5,0x3f000000));
    uVar2 = (undefined4)(func_0079e59c(uVar3,uVar2));
    uVar2 = (undefined4)(func_0079e59c(uVar2,g_0068a33c));
    0 /* ctorZero */;
    ((cocos2d::CCPoint *)(uVar4))->operator+(*(const CCPoint *)(void *)auStack_28);
    (*pcVar6)(piVar7,&uStack_20);
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x49)),3);
    piVar7 = (int *)::operator new(0x134);
    ::new ((void *)piVar7) BLTableView();   /* ALLOC+CTOR_FIX(R120): 类名取自原版 dump（函数+尺寸对齐）*/
    iStack_4c = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar7) + (0x18)))(piVar7));
    if (iStack_4c == 0) {
      (**(code **)(*(int *)(piVar7) + (8)))(piVar7);
      *(int *)((int)this + 4*(0x46)) = 0;
                    /* WARNING: Does not return */
      pcVar6 = (code *)software_udf(0xff,0x68a32a);
      (*pcVar6)();
    }
    ((cocos2d::CCObject *)(piVar7))->autorelease();
    *(int *)((int)this + 4*(0x46)) = (int)piVar7;
    pcVar6 = *(code **)(*piVar7 + 0x234);
    0 /* ctorZero */;
    uVar4 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar2 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar2 = (undefined4)(func_0079e4dc(uVar4,uVar2));
    0 /* ctorZero */;
    uVar4 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar4 = (undefined4)(func_0079e4dc(uVar4,uVar3));
    0 /* ctorZero */;
    (*pcVar6)(piVar7,&uStack_20);
    piVar7 = (int *)*(int *)((int)this + 4*(0x46));
    pcVar6 = *(code **)(*piVar7 + 0x4c);
    0 /* ctorZero */;
    uVar4 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar2 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar2 = (undefined4)(func_0079e4dc(uVar4,uVar2));
    0 /* ctorZero */;
    uVar4 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar4 = (undefined4)(func_0079e4dc(uVar4,uVar3));
    0 /* ctorZero */;
    (*pcVar6)(piVar7,&uStack_20);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x46)) + 0x22c))((int *)*(int *)((int)this + 4*(0x46)),1);
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x46)),5);
    pcVar6 = *(code **)(*(int *)this + 0x88);
    0 /* ctorZero */;
    cocos2d::CCDirector::sharedDirector();
    uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar4 = (undefined4)(func_0079e4dc(auStack_30[0],uVar4));
    0 /* ctorZero */;
    cocos2d::CCDirector::sharedDirector();
    uVar2 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar2 = (undefined4)(func_0079e4dc(uStack_24,uVar2));
    0 /* ctorZero */;
    (*pcVar6)(((int)this),&uStack_20);
    ((BLSignedPresenter *)(*(int *)((int)this + 4*(0x42))))->initWithView((BLSignedView*)((int)this));
  }
  return iStack_4c;
}
