#include "BLArrangeItemView.h"
#include "CCLayer.h"
#include "CCObject.h"
#include "CCLabelTTF.h"
#include "CCDirector.h"
#include "BLArrangeButton.h"
#include "BLArrangeItemPresenter.h"
#include "BLLanguage.h"
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
extern "C" unsigned long UNK_004f9238;
extern "C" unsigned long UNK_004f926a;
extern "C" unsigned long UNK_004f92c4;
extern "C" unsigned long UNK_004f93b0;
extern "C" unsigned long UNK_004f9660;
extern "C" unsigned long UNK_004f968e;
extern "C" unsigned long UNK_004f974c;
extern "C" unsigned long UNK_004f9774;
extern "C" unsigned long UNK_004f9794;
extern "C" unsigned long _UNK_004f92b0;
extern "C" unsigned long _UNK_004f92b4;
extern "C" unsigned long _UNK_004f92c8;
extern "C" unsigned long _UNK_004f93b4;
extern "C" unsigned long _UNK_004f96b8;
extern "C" unsigned long _UNK_004f96bc;
extern "C" unsigned long _UNK_004f9880;
extern "C" unsigned long _UNK_004f9884;
extern "C" unsigned long _UNK_004f9888;
extern "C" unsigned long _UNK_004f988c;
extern "C" unsigned long _UNK_004f9890;
extern "C" unsigned long _UNK_004f9894;
extern "C" unsigned long _UNK_004f9898;
extern "C" unsigned long _UNK_004f989c;
extern "C" unsigned long g_004f9238;
extern "C" unsigned long g_004f926a;
extern "C" unsigned long g_004f92b0;
extern "C" unsigned long g_004f92b4;
extern "C" unsigned long g_004f92c4;
extern "C" unsigned long g_004f92c8;
extern "C" unsigned long g_004f93b0;
extern "C" unsigned long g_004f93b4;
extern "C" unsigned long g_004f9660;
extern "C" unsigned long g_004f968e;
extern "C" unsigned long g_004f96b8;
extern "C" unsigned long g_004f96bc;
extern "C" unsigned long g_004f974c;
extern "C" unsigned long g_004f9774;
extern "C" unsigned long g_004f9794;
extern "C" unsigned long g_004f9880;
extern "C" unsigned long g_004f9884;
extern "C" unsigned long g_004f9888;
extern "C" unsigned long g_004f988c;
extern "C" unsigned long g_004f9890;
extern "C" unsigned long g_004f9894;
extern "C" unsigned long g_004f9898;
extern "C" unsigned long g_004f989c;
void BLArrangeItemView::onEnter()
{
  return;
}

void BLArrangeItemView::onExit()
{
  return;
}

BLArrangeItemView::~BLArrangeItemView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_004f9238 + g_004f92b0);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_004f926a + g_004f92b4,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  if (*(int *)((int)this + 4*(0x42)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x42)) = 0;
  }
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLArrangeItemView::BLArrangeItemView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_004f9660 + g_004f96b8);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_004f968e + g_004f96bc,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}


undefined4 BLArrangeItemView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x108);
}

undefined4 BLArrangeItemView::getBtn()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 BLArrangeItemView::getLab()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

bool BLArrangeItemView::init()
{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = ((cocos2d::CCLayer *)this)->init();
  if (iVar1 != 0) {
    uVar2 = (undefined4)(((BLArrangeItemPresenter *)this)->create());
    *(undefined4 *)(((int)this) + 0x108) = uVar2;
    ((cocos2d::CCObject *)this)->retain();
    BLArrangeItemView::initView();
    ((BLArrangeItemPresenter *)*(undefined4 *)(((int)this) + 0x108))->initWithView((BLArrangeItemView*)((int)this));
  }
  return iVar1;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
void BLArrangeItemView::initView()
{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  code *pcVar5;
  int *piVar6;
  undefined4 auStack_30 [2];
  undefined1 auStack_28 [4];
  undefined4 uStack_24;
  undefined4 auStack_20 [3];
  
  iVar1 = (undefined4)(intptr_t)(((BLArrangeButton *)this)->create());
  *(int *)((int)this + 4*(0x43)) = iVar1;
  (**(code **)(*(int *)this + 200))(((int)this),iVar1);
  piVar6 = (int *)*(int *)((int)this + 4*(0x43));
  pcVar5 = *(code **)(*piVar6 + 0x4c);
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
  (*pcVar5)(piVar6,auStack_20);
  uVar4 = (undefined4)(((BLLanguage *)this)->share());
  func_0079e45c(auStack_28,(unsigned char *)((char *)&g_004f974c + (intptr_t)(g_004f9884)),auStack_30);
  (((BLLanguage *)this))->getString(*(std::string *)auStack_20);
  cocos2d::CCDirector::sharedDirector();
  uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar4 = (undefined4)(func_0079e4dc(g_004f9888,uVar4));
  iVar1 = (undefined4)(intptr_t)(cocos2d::CCLabelTTF::create((char const*)auStack_20[0], (char const*)(unsigned char *)((char *)&g_004f9774 + (intptr_t)(g_004f988c)), uVar4));
  *(int *)((int)this + 4*(0x44)) = iVar1;
  func_0079e2bc(auStack_20);
  func_0079e2bc(auStack_28);
  ((cocos2d::CCLabelTTF *)(*(int *)((int)this + 4*(0x44))))->enableStroke(*(cocos2d::_ccColor3B const*)(unsigned char *)((char *)&g_004f9794 + (intptr_t)(g_004f9890)), 0x3f800000, 1);
  piVar6 = (int *)*(int *)((int)this + 4*(0x44));
  pcVar5 = *(code **)(*piVar6 + 0x7c);
  0 /* ctorZero */;
  (*pcVar5)(piVar6,auStack_20);
  piVar6 = (int *)*(int *)((int)this + 4*(0x44));
  pcVar5 = *(code **)(*piVar6 + 0x4c);
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
  (*pcVar5)(piVar6,auStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x44)));
  pcVar5 = *(code **)(*(int *)this + 0x88);
  0 /* ctorZero */;
  cocos2d::CCDirector::sharedDirector();
  uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar4 = (undefined4)(func_0079e4dc(auStack_30[0],uVar4));
  0 /* ctorZero */;
  cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar2 = (undefined4)(func_0079e4dc(uStack_24,uVar2));
  0 /* ctorZero */;
  (*pcVar5)(((int)this),auStack_20);
  return;
}
