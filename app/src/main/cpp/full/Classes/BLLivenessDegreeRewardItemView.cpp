#include "BLLivenessDegreeRewardItemView.h"
#include "CCGeometry.h"
#include "CCLayer.h"
#include "CCObject.h"
#include "CCLabelTTF.h"
#include "CCControlButton.h"
#include "CCDirector.h"
#include "BLLeakUtils.h"
#include "BLLivenessDegreeRewardItemPresenter.h"
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
extern "C" long long func_0079e59c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0057fd3c;
extern "C" unsigned long UNK_0057fd6e;
extern "C" unsigned long UNK_0057fdc8;
extern "C" unsigned long UNK_0057fdf0;
extern "C" unsigned long UNK_0057fee4;
extern "C" unsigned long UNK_0057ff12;
extern "C" unsigned long UNK_0057ff9c;
extern "C" unsigned long UNK_0057ffde;
extern "C" unsigned long UNK_0057fffc;
extern "C" unsigned long UNK_00580060;
extern "C" unsigned long UNK_005800c2;
extern "C" unsigned long UNK_005800c4;
extern "C" unsigned long _UNK_0057fdb4;
extern "C" unsigned long _UNK_0057fdb8;
extern "C" unsigned long _UNK_0057fdcc;
extern "C" unsigned long _UNK_0057fdf4;
extern "C" unsigned long _UNK_0057ff3c;
extern "C" unsigned long _UNK_0057ff40;
extern "C" unsigned long _UNK_0058017c;
extern "C" unsigned long _UNK_00580180;
extern "C" unsigned long _UNK_00580184;
extern "C" unsigned long _UNK_00580188;
extern "C" unsigned long _UNK_0058018c;
extern "C" unsigned long _UNK_00580190;
extern "C" unsigned long _UNK_00580194;
extern "C" unsigned long _UNK_00580198;
extern "C" unsigned long g_0057fd3c;
extern "C" unsigned long g_0057fd6e;
extern "C" unsigned long g_0057fdb4;
extern "C" unsigned long g_0057fdb8;
extern "C" unsigned long g_0057fdc8;
extern "C" unsigned long g_0057fdcc;
extern "C" unsigned long g_0057fdf0;
extern "C" unsigned long g_0057fdf4;
extern "C" unsigned long g_0057fee4;
extern "C" unsigned long g_0057ff12;
extern "C" unsigned long g_0057ff3c;
extern "C" unsigned long g_0057ff40;
extern "C" unsigned long g_0057ff9c;
extern "C" unsigned long g_0057ffde;
extern "C" unsigned long g_0057fffc;
extern "C" unsigned long g_00580060;
extern "C" unsigned long g_005800c2;
extern "C" unsigned long g_005800c4;
extern "C" unsigned long g_0058017c;
extern "C" unsigned long g_00580180;
extern "C" unsigned long g_00580184;
extern "C" unsigned long g_00580188;
extern "C" unsigned long g_0058018c;
extern "C" unsigned long g_00580190;
extern "C" unsigned long g_00580194;
extern "C" unsigned long g_00580198;
BLLivenessDegreeRewardItemView::~BLLivenessDegreeRewardItemView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0057fd3c + g_0057fdb4);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0057fd6e + g_0057fdb8,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  if (*(int *)((int)this + 4*(0x42)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x42)) = 0;
  }
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLLivenessDegreeRewardItemView::BLLivenessDegreeRewardItemView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_0057fee4 + g_0057ff3c);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0057ff12 + g_0057ff40,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}


bool BLLivenessDegreeRewardItemView::init()
{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = ((cocos2d::CCLayer *)this)->init();
  if (iVar1 != 0) {
    uVar2 = (undefined4)(((BLLivenessDegreeRewardItemPresenter *)this)->create());
    *(undefined4 *)(((int)this) + 0x108) = uVar2;
    ((cocos2d::CCObject *)this)->retain();
    BLLivenessDegreeRewardItemView::initView();
    ((BLLivenessDegreeRewardItemPresenter *)*(undefined4 *)(((int)this) + 0x108))->initWithView((BLLivenessDegreeRewardItemView*)((int)this));
  }
  return iVar1;
}

void BLLivenessDegreeRewardItemView::onEnter()
{
  ((BLLivenessDegreeRewardItemPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLLivenessDegreeRewardItemView::onExit()
{
  ((BLLivenessDegreeRewardItemPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
void BLLivenessDegreeRewardItemView::initView()
{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  int *piVar6;
  undefined1 auStack_30 [8];
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
  func_0079e45c(&uStack_20,(unsigned char *)((char *)&g_0057ff9c + (intptr_t)(g_00580180)),auStack_28);
  iVar3 = (undefined4)(intptr_t)(0 /* ctorZero */);
  *(int *)((int)this + 4*(0x44)) = iVar3;
  func_0079e2bc(&uStack_20);
  piVar6 = (int *)*(int *)((int)this + 4*(0x44));
  pcVar5 = *(code **)(*piVar6 + 0x1d4);
  (**(code **)(*(int *)(piVar6) + (0x1cc)))(&uStack_20,piVar6);
  (*pcVar5)(piVar6,&uStack_20);
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x44)) + 0x4c))((int *)*(int *)((int)this + 4*(0x44)),(unsigned char *)((char *)&g_0057ffde + (intptr_t)(g_00580184)));
  (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x44)));
  iVar4 = (undefined4)(intptr_t)(cocos2d::extension::CCControlButton::create());
  iVar3 = (undefined4)(intptr_t)(g_00580188);
  *(int *)((int)this + 4*(0x43)) = iVar4;
  func_0079e45c(&uStack_20,&g_0057fffc + iVar3,auStack_28);
  uVar1 = (undefined4)(0 /* ctorZero */);
  func_0079e2bc(&uStack_20);
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x43)) + 0x30c))((int *)*(int *)((int)this + 4*(0x43)),uVar1,1);
  piVar6 = (int *)*(int *)((int)this + 4*(0x43));
  pcVar5 = *(code **)(*piVar6 + 0x28c);
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x44)) + 0x1cc))(&uStack_20);
  (*pcVar5)(piVar6,&uStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x43)));
  func_0079e45c(&uStack_20,(unsigned char *)((char *)&g_00580060 + (intptr_t)(g_0058018c)),auStack_28);
  iVar3 = (undefined4)(intptr_t)(0 /* ctorZero */);
  *(int *)((int)this + 4*(0x46)) = iVar3;
  func_0079e2bc(&uStack_20);
  piVar6 = (int *)*(int *)((int)this + 4*(0x46));
  pcVar5 = *(code **)(*piVar6 + 0x1d4);
  (**(code **)(*(int *)(piVar6) + (0x1cc)))(auStack_28,piVar6);
  ((cocos2d::CCSize *)(auStack_28))->operator*(0x3fc00000);
  (*pcVar5)(piVar6,&uStack_20);
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x46)) + 0x90))((int *)*(int *)((int)this + 4*(0x46)),0);
  (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x46)));
  piVar6 = (int *)cocos2d::CCLabelTTF::create((char const*)(unsigned char *)((char *)&g_005800c2 + (intptr_t)(g_00580190)), (char const*)(unsigned char *)((char *)&g_005800c4 + (intptr_t)(g_00580194)), g_00580198);
  *(int *)((int)this + 4*(0x45)) = (int)piVar6;
  uStack_20 = 0xff;
  uStack_1f = 0xdd;
  uStack_1e = 0;
  (**(code **)(*(int *)(piVar6) + (0x1b4)))(piVar6,&uStack_20);
  piVar6 = (int *)*(int *)((int)this + 4*(0x45));
  pcVar5 = *(code **)(*piVar6 + 0x7c);
  0 /* ctorZero */;
  (*pcVar5)(piVar6,&uStack_20);
  piVar6 = (int *)*(int *)((int)this + 4*(0x45));
  pcVar5 = *(code **)(*piVar6 + 0x4c);
  iVar3 = (undefined4)(intptr_t)((**(code **)(*(int *)*(int *)((int)this + 4*(0x44)) + 0x8c))());
  uVar1 = (undefined4)(func_0079e4fc(*(int *)(iVar3 + 4) + -0x80000000,0x3f000000));
  cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar2 = (undefined4)(func_0079e4dc(0x40800000,uVar2));
  uVar1 = (undefined4)(func_0079e59c(uVar1,uVar2));
  0 /* ctorZero */;
  (*pcVar5)(piVar6,&uStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x45)));
  (**(code **)(*(int *)this + 0x88))(((int)this),auStack_30);
  return;
}
