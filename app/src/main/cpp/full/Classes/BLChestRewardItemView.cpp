#include "BLChestRewardItemView.h"
#include "BLChestRewardItemPresenter.h"
#include "BLLanguage.h"
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
extern "C" long long ghidra_CONCAT13(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0051bd0c;
extern "C" unsigned long UNK_0051bd5e;
extern "C" unsigned long UNK_0051bda4;
extern "C" unsigned long UNK_0051bdcc;
extern "C" unsigned long UNK_0051be14;
extern "C" unsigned long UNK_0051be50;
extern "C" unsigned long UNK_0051bf7c;
extern "C" unsigned long UNK_0051c062;
extern "C" unsigned long UNK_0051c106;
extern "C" unsigned long UNK_0051c196;
extern "C" unsigned long UNK_0051c1c0;
extern "C" unsigned long UNK_0051c28a;
extern "C" unsigned long UNK_0051c2ba;
extern "C" unsigned long UNK_0051c2f4;
extern "C" unsigned long _UNK_0051bd90;
extern "C" unsigned long _UNK_0051bd94;
extern "C" unsigned long _UNK_0051bda8;
extern "C" unsigned long _UNK_0051bdd0;
extern "C" unsigned long _UNK_0051be84;
extern "C" unsigned long _UNK_0051be88;
extern "C" unsigned long _UNK_0051c35c;
extern "C" unsigned long _UNK_0051c360;
extern "C" unsigned long _UNK_0051c364;
extern "C" unsigned long _UNK_0051c368;
extern "C" unsigned long _UNK_0051c36c;
extern "C" unsigned long _UNK_0051c370;
extern "C" unsigned long _UNK_0051c374;
extern "C" unsigned long _UNK_0051c378;
extern "C" unsigned long _UNK_0051c37c;
extern "C" unsigned long _UNK_0051c380;
extern "C" unsigned long _UNK_0051c384;
extern "C" unsigned long _UNK_0051c388;
extern "C" unsigned long _UNK_0051c38c;
extern "C" unsigned long _UNK_0051c390;
extern "C" unsigned long _UNK_0051c394;
extern "C" unsigned long _UNK_0051c428;
extern "C" unsigned long _UNK_0051c42c;
extern "C" unsigned long g_0051bd0c;
extern "C" unsigned long g_0051bd5e;
extern "C" unsigned long g_0051bd90;
extern "C" unsigned long g_0051bd94;
extern "C" unsigned long g_0051bda4;
extern "C" unsigned long g_0051bda8;
extern "C" unsigned long g_0051bdcc;
extern "C" unsigned long g_0051bdd0;
extern "C" unsigned long g_0051be14;
extern "C" unsigned long g_0051be50;
extern "C" unsigned long g_0051be84;
extern "C" unsigned long g_0051be88;
extern "C" unsigned long g_0051bf7c;
extern "C" unsigned long g_0051c062;
extern "C" unsigned long g_0051c106;
extern "C" unsigned long g_0051c196;
extern "C" unsigned long g_0051c1c0;
extern "C" unsigned long g_0051c28a;
extern "C" unsigned long g_0051c2ba;
extern "C" unsigned long g_0051c2f4;
extern "C" unsigned long g_0051c35c;
extern "C" unsigned long g_0051c360;
extern "C" unsigned long g_0051c364;
extern "C" unsigned long g_0051c368;
extern "C" unsigned long g_0051c36c;
extern "C" unsigned long g_0051c370;
extern "C" unsigned long g_0051c374;
extern "C" unsigned long g_0051c378;
extern "C" unsigned long g_0051c37c;
extern "C" unsigned long g_0051c380;
extern "C" unsigned long g_0051c384;
extern "C" unsigned long g_0051c388;
extern "C" unsigned long g_0051c38c;
extern "C" unsigned long g_0051c390;
extern "C" unsigned long g_0051c394;
extern "C" unsigned long g_0051c428;
extern "C" unsigned long g_0051c42c;
BLChestRewardItemView::~BLChestRewardItemView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0051bd0c + g_0051bd90);
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
  func_0079e45c(&uStack_14,&g_0051bd5e + g_0051bd94,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}


int * BLChestRewardItemView::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x124)));
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

undefined4 BLChestRewardItemView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 BLChestRewardItemView::getBG()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

undefined4 BLChestRewardItemView::getSprItemIcon()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

undefined4 BLChestRewardItemView::getLabTitle()
{
  return *(undefined4 *)(((int)this) + 0x118);
}

undefined4 BLChestRewardItemView::getLabNum()
{
  return *(undefined4 *)(((int)this) + 0x11c);
}

void BLChestRewardItemView::onEnter()
{
  ((BLChestRewardItemPresenter *)*(undefined4 *)(((int)this) + 0x10c))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLChestRewardItemView::onExit()
{
  ((BLChestRewardItemPresenter *)*(undefined4 *)(((int)this) + 0x10c))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (2) =====
BLChestRewardItemView::BLChestRewardItemView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = (undefined4)(intptr_t)(*(int *)((unsigned char *)((char *)&g_0051be14 + (intptr_t)(g_0051be84))));
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
  func_0079e45c(&uStack_14,(unsigned char *)((char *)&g_0051be50 + (intptr_t)(g_0051be88)),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

bool BLChestRewardItemView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
