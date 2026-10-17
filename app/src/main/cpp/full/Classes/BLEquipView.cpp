#include "BLEquipView.h"
#include "CCDirector.h"
#include "CCArray.h"
#include "BLEquipListView.h"
#include "BLEquipPresenter.h"
#include "BLLeakUtils.h"
#include "BLRoleInfoView.h"
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
extern "C" unsigned long UNK_0067d810;
extern "C" unsigned long UNK_0067d862;
extern "C" unsigned long UNK_0067d8a8;
extern "C" unsigned long UNK_0067d8d0;
extern "C" unsigned long _DAT_0067d988;
extern "C" unsigned long _DAT_0067d98c;
extern "C" unsigned long _UNK_0067d894;
extern "C" unsigned long _UNK_0067d898;
extern "C" unsigned long _UNK_0067d8ac;
extern "C" unsigned long _UNK_0067d8d4;
extern "C" unsigned long _UNK_0067dcb8;
extern "C" unsigned long _UNK_0067dcbc;
extern "C" unsigned long _UNK_0067dcc0;
extern "C" unsigned long _UNK_0067dcc4;
extern "C" unsigned long _UNK_0067dcc8;
extern "C" unsigned long _UNK_0067dccc;
extern "C" unsigned long _UNK_0067dcd0;
extern "C" unsigned long _UNK_0067dcd4;
extern "C" unsigned long _UNK_0067dcd8;
extern "C" unsigned long g_0067d810;
extern "C" unsigned long g_0067d862;
extern "C" unsigned long g_0067d894;
extern "C" unsigned long g_0067d898;
extern "C" unsigned long g_0067d8a8;
extern "C" unsigned long g_0067d8ac;
extern "C" unsigned long g_0067d8d0;
extern "C" unsigned long g_0067d8d4;
extern "C" unsigned long g_0067d988;
extern "C" unsigned long g_0067d98c;
extern "C" unsigned long g_0067dcb8;
extern "C" unsigned long g_0067dcbc;
extern "C" unsigned long g_0067dcc0;
extern "C" unsigned long g_0067dcc4;
extern "C" unsigned long g_0067dcc8;
extern "C" unsigned long g_0067dccc;
extern "C" unsigned long g_0067dcd0;
extern "C" unsigned long g_0067dcd4;
extern "C" unsigned long g_0067dcd8;
BLEquipView::~BLEquipView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0067d810 + g_0067d894);
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
  if (*(int *)((int)this + 4*(0x43)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x43)) = 0;
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0067d862 + g_0067d898,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}


int * BLEquipView::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x11c)));
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

undefined4 BLEquipView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 BLEquipView::EquipList()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

undefined4 BLEquipView::getTableViewRoleList()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

undefined4 BLEquipView::RoleInfo()
{
  return *(undefined4 *)(((int)this) + 0x118);
}

void BLEquipView::onEnter()
{
  ((BLEquipPresenter *)*(undefined4 *)(((int)this) + 0x10c))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLEquipView::onExit()
{
  ((BLEquipPresenter *)*(undefined4 *)(((int)this) + 0x10c))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (2) =====
BLEquipView::BLEquipView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = (undefined4)(intptr_t)(*(int *)(g_0067d988 + 0x67d918));
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  iVar2 = (undefined4)(intptr_t)(cocos2d::CCArray::create());
  *(int *)((int)this + 4*(0x42)) = iVar2;
  if (iVar2 != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLEquipView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

bool BLEquipView::init()
{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  int iStack_40;
  undefined1 auStack_30 [8];
  undefined4 auStack_28 [2];
  undefined1 auStack_20 [4];
  undefined4 uStack_1c;
  
  iVar1 = (undefined4)(intptr_t)(((cocos2d::CCLayer *)this)->init());
  if (iVar1 == 0) {
    iStack_40 = 0;
  }
  else {
    iVar1 = (undefined4)(intptr_t)(((BLEquipPresenter *)this)->create((BLEquipView*)((int)this)));
    *(int *)((int)this + 4*(0x43)) = iVar1;
    if (iVar1 != 0) {
      ((cocos2d::CCObject *)this)->retain();
    }
    piVar2 = (int *)((BLEquipListView *)this)->create();
    *(int *)((int)this + 4*(0x44)) = (int)piVar2;
    pcVar6 = *(code **)(*piVar2 + 0x4c);
    0 /* ctorZero */;
    uVar5 = (undefined4)(auStack_28[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(func_0079e4dc(uVar5,uVar3));
    0 /* ctorZero */;
    uVar5 = (undefined4)(uStack_1c);
    cocos2d::CCDirector::sharedDirector();
    uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(uVar5,uVar4));
    0 /* ctorZero */;
    (*pcVar6)(piVar2,auStack_30);
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x44)),1);
    piVar2 = (int *)::operator new(0x134);
    ::new ((void *)piVar2) BLTableView();   /* ALLOC+CTOR_FIX(R120): 类名取自原版 dump（函数+尺寸对齐）*/
    iStack_40 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar2) + (0x18)))(piVar2));
    if (iStack_40 == 0) {
      (**(code **)(*(int *)(piVar2) + (8)))(piVar2);
      *(int *)((int)this + 4*(0x45)) = 0;
                    /* WARNING: Does not return */
      pcVar6 = (code *)software_udf(0xff,0x67dcb0);
      (*pcVar6)();
    }
    ((cocos2d::CCObject *)piVar2)->autorelease();
    *(int *)((int)this + 4*(0x45)) = (int)piVar2;
    pcVar6 = *(code **)(*piVar2 + 0x234);
    0 /* ctorZero */;
    uVar5 = (undefined4)(auStack_28[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(func_0079e4dc(uVar5,uVar3));
    0 /* ctorZero */;
    uVar5 = (undefined4)(uStack_1c);
    cocos2d::CCDirector::sharedDirector();
    uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(uVar5,uVar4));
    0 /* ctorZero */;
    (*pcVar6)(piVar2,auStack_30);
    piVar2 = (int *)*(int *)((int)this + 4*(0x45));
    pcVar6 = *(code **)(*piVar2 + 0x4c);
    0 /* ctorZero */;
    uVar5 = (undefined4)(auStack_28[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(func_0079e4dc(uVar5,uVar3));
    0 /* ctorZero */;
    uVar5 = (undefined4)(uStack_1c);
    cocos2d::CCDirector::sharedDirector();
    uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(uVar5,uVar4));
    0 /* ctorZero */;
    (*pcVar6)(piVar2,auStack_30);
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x45)),2);
    piVar2 = (int *)((BLRoleInfoView *)this)->create();
    *(int *)((int)this + 4*(0x46)) = (int)piVar2;
    pcVar6 = *(code **)(*piVar2 + 0x4c);
    0 /* ctorZero */;
    uVar5 = (undefined4)(auStack_28[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(func_0079e4dc(uVar5,uVar3));
    0 /* ctorZero */;
    uVar5 = (undefined4)(uStack_1c);
    cocos2d::CCDirector::sharedDirector();
    uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(uVar5,uVar4));
    0 /* ctorZero */;
    (*pcVar6)(piVar2,auStack_30);
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x46)),3);
    pcVar6 = *(code **)(*(int *)this + 0x88);
    0 /* ctorZero */;
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(auStack_28[0],uVar5));
    0 /* ctorZero */;
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(func_0079e4dc(uStack_1c,uVar3));
    0 /* ctorZero */;
    (*pcVar6)(((int)this),auStack_30);
    ((BLEquipPresenter *)*(int *)((int)this + 4*(0x43)))->initWithView((BLEquipView*)((int)this));
  }
  return iStack_40;
}
