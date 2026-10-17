#include "BLImmortalsEquipHorItemView.h"
#include "BLImmortalsEquipHorItemPresenter.h"
#include "BLLeakUtils.h"
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
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0056ff1c;
extern "C" unsigned long UNK_0056ff4e;
extern "C" unsigned long UNK_0056ffa8;
extern "C" unsigned long UNK_0057006c;
extern "C" unsigned long UNK_005700ac;
extern "C" unsigned long UNK_005700da;
extern "C" unsigned long UNK_00570166;
extern "C" unsigned long UNK_005701a8;
extern "C" unsigned long UNK_005701aa;
extern "C" unsigned long UNK_005701c6;
extern "C" unsigned long UNK_005701f4;
extern "C" unsigned long _UNK_0056ff94;
extern "C" unsigned long _UNK_0056ff98;
extern "C" unsigned long _UNK_0056ffac;
extern "C" unsigned long _UNK_00570070;
extern "C" unsigned long _UNK_00570104;
extern "C" unsigned long _UNK_00570108;
extern "C" unsigned long _UNK_00570270;
extern "C" unsigned long _UNK_00570274;
extern "C" unsigned long _UNK_00570278;
extern "C" unsigned long _UNK_0057027c;
extern "C" unsigned long _UNK_00570280;
extern "C" unsigned long _UNK_00570284;
extern "C" unsigned long _UNK_00570288;
extern "C" unsigned long g_0056ff1c;
extern "C" unsigned long g_0056ff4e;
extern "C" unsigned long g_0056ff94;
extern "C" unsigned long g_0056ff98;
extern "C" unsigned long g_0056ffa8;
extern "C" unsigned long g_0056ffac;
extern "C" unsigned long g_0057006c;
extern "C" unsigned long g_00570070;
extern "C" unsigned long g_005700ac;
extern "C" unsigned long g_005700da;
extern "C" unsigned long g_00570104;
extern "C" unsigned long g_00570108;
extern "C" unsigned long g_00570166;
extern "C" unsigned long g_005701a8;
extern "C" unsigned long g_005701aa;
extern "C" unsigned long g_005701c6;
extern "C" unsigned long g_005701f4;
extern "C" unsigned long g_00570270;
extern "C" unsigned long g_00570274;
extern "C" unsigned long g_00570278;
extern "C" unsigned long g_0057027c;
extern "C" unsigned long g_00570280;
extern "C" unsigned long g_00570284;
extern "C" unsigned long g_00570288;
BLImmortalsEquipHorItemView::~BLImmortalsEquipHorItemView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0056ff1c + g_0056ff94);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0056ff4e + g_0056ff98,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  if (*(int *)((int)this + 4*(0x42)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x42)) = 0;
  }
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLImmortalsEquipHorItemView::BLImmortalsEquipHorItemView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_005700ac + g_00570104);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005700da + g_00570108,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}


bool BLImmortalsEquipHorItemView::init()
{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = ((cocos2d::CCLayer *)this)->init();
  if (iVar1 != 0) {
    uVar2 = (undefined4)(((BLImmortalsEquipHorItemPresenter *)this)->create());
    *(undefined4 *)(((int)this) + 0x108) = uVar2;
    ((cocos2d::CCObject *)this)->retain();
    BLImmortalsEquipHorItemView::initView();
    ((BLImmortalsEquipHorItemPresenter *)*(undefined4 *)(((int)this) + 0x108))->initWithView((BLImmortalsEquipHorItemView*)((int)this));
  }
  return iVar1;
}

void BLImmortalsEquipHorItemView::onEnter()
{
  ((BLImmortalsEquipHorItemPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLImmortalsEquipHorItemView::onExit()
{
  ((BLImmortalsEquipHorItemPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
void BLImmortalsEquipHorItemView::initView()
{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  undefined1 auStack_30 [8];
  undefined4 auStack_28 [2];
  undefined1 auStack_20 [4];
  undefined4 uStack_1c;
  
  0 /* ctorZero */;
  cocos2d::CCDirector::sharedDirector();
  uVar1 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar1 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(auStack_28[0]),(int)(uVar1)))));
  0 /* ctorZero */;
  cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uStack_1c),(int)(uVar2)))));
  0 /* ctorZero */;
  func_0079e45c(auStack_20,(unsigned char *)((char *)&g_00570166 + (intptr_t)(g_00570274)),auStack_28);
  piVar3 = (int *)0 /* ctorZero */;
  func_0079e2bc(auStack_20);
  pcVar6 = *(code **)(*piVar3 + 0x1d4);
  0 /* ctorZero */;
  (*pcVar6)(piVar3,auStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),piVar3);
  iVar4 = (undefined4)(intptr_t)(cocos2d::CCLabelTTF::create((char const*)(unsigned char *)((char *)&g_005701a8 + (intptr_t)(g_00570278)), (char const*)(unsigned char *)((char *)&g_005701aa + (intptr_t)(g_0057027c)), g_00570280));
  *(int *)((int)this + 4*(0x44)) = iVar4;
  (**(code **)(*(int *)this + 200))(((int)this),iVar4);
  func_0079e45c(auStack_20,(unsigned char *)((char *)&g_005701c6 + (intptr_t)(g_00570284)),auStack_28);
  iVar4 = (undefined4)(intptr_t)(0 /* ctorZero */);
  *(int *)((int)this + 4*(0x45)) = iVar4;
  func_0079e2bc(auStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x45)));
  iVar5 = (undefined4)(intptr_t)(cocos2d::extension::CCControlButton::create());
  iVar4 = (undefined4)(intptr_t)(g_00570288);
  *(int *)((int)this + 4*(0x43)) = iVar5;
  func_0079e45c(auStack_20,&g_005701f4 + iVar4,auStack_28);
  uVar1 = (undefined4)(0 /* ctorZero */);
  func_0079e2bc(auStack_20);
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x43)) + 0x30c))((int *)*(int *)((int)this + 4*(0x43)),uVar1,1);
  piVar3 = (int *)*(int *)((int)this + 4*(0x43));
  pcVar6 = *(code **)(*piVar3 + 0x28c);
  0 /* ctorZero */;
  (*pcVar6)(piVar3,auStack_20);
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x43)) + 0x294))((int *)*(int *)((int)this + 4*(0x43)),1);
  (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x43)),2);
  (**(code **)(*(int *)this + 0x88))(((int)this),auStack_30);
  return;
}
