#include "BLEquipGiftItemView.h"
#include "BLEquipGiftItemPresenter.h"
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
extern "C" unsigned long UNK_0054ef58;
extern "C" unsigned long UNK_0054efaa;
extern "C" unsigned long UNK_0054eff0;
extern "C" unsigned long UNK_0054f018;
extern "C" unsigned long UNK_0054f060;
extern "C" unsigned long UNK_0054f09c;
extern "C" unsigned long UNK_0054f1c8;
extern "C" unsigned long UNK_0054f2aa;
extern "C" unsigned long UNK_0054f34e;
extern "C" unsigned long UNK_0054f42a;
extern "C" unsigned long UNK_0054f504;
extern "C" unsigned long UNK_0054f630;
extern "C" unsigned long UNK_0054f65a;
extern "C" unsigned long _UNK_0054efdc;
extern "C" unsigned long _UNK_0054efe0;
extern "C" unsigned long _UNK_0054eff4;
extern "C" unsigned long _UNK_0054f01c;
extern "C" unsigned long _UNK_0054f0d0;
extern "C" unsigned long _UNK_0054f0d4;
extern "C" unsigned long _UNK_0054f5b0;
extern "C" unsigned long _UNK_0054f5b4;
extern "C" unsigned long _UNK_0054f5b8;
extern "C" unsigned long _UNK_0054f5bc;
extern "C" unsigned long _UNK_0054f5c0;
extern "C" unsigned long _UNK_0054f5c4;
extern "C" unsigned long _UNK_0054f5c8;
extern "C" unsigned long _UNK_0054f5cc;
extern "C" unsigned long _UNK_0054f5d0;
extern "C" unsigned long _UNK_0054f5d4;
extern "C" unsigned long _UNK_0054f5d8;
extern "C" unsigned long _UNK_0054f5dc;
extern "C" unsigned long _UNK_0054f5e0;
extern "C" unsigned long _UNK_0054f5e4;
extern "C" unsigned long _UNK_0054f5e8;
extern "C" unsigned long _UNK_0054f798;
extern "C" unsigned long _UNK_0054f79c;
extern "C" unsigned long _UNK_0054f7a0;
extern "C" unsigned long _UNK_0054f7a4;
extern "C" unsigned long _UNK_0054f7a8;
extern "C" unsigned long _UNK_0054f7ac;
extern "C" unsigned long g_0054ef58;
extern "C" unsigned long g_0054efaa;
extern "C" unsigned long g_0054efdc;
extern "C" unsigned long g_0054efe0;
extern "C" unsigned long g_0054eff0;
extern "C" unsigned long g_0054eff4;
extern "C" unsigned long g_0054f018;
extern "C" unsigned long g_0054f01c;
extern "C" unsigned long g_0054f060;
extern "C" unsigned long g_0054f09c;
extern "C" unsigned long g_0054f0d0;
extern "C" unsigned long g_0054f0d4;
extern "C" unsigned long g_0054f1c8;
extern "C" unsigned long g_0054f2aa;
extern "C" unsigned long g_0054f34e;
extern "C" unsigned long g_0054f42a;
extern "C" unsigned long g_0054f504;
extern "C" unsigned long g_0054f5b0;
extern "C" unsigned long g_0054f5b4;
extern "C" unsigned long g_0054f5b8;
extern "C" unsigned long g_0054f5bc;
extern "C" unsigned long g_0054f5c0;
extern "C" unsigned long g_0054f5c4;
extern "C" unsigned long g_0054f5c8;
extern "C" unsigned long g_0054f5cc;
extern "C" unsigned long g_0054f5d0;
extern "C" unsigned long g_0054f5d4;
extern "C" unsigned long g_0054f5d8;
extern "C" unsigned long g_0054f5dc;
extern "C" unsigned long g_0054f5e0;
extern "C" unsigned long g_0054f5e4;
extern "C" unsigned long g_0054f5e8;
extern "C" unsigned long g_0054f630;
extern "C" unsigned long g_0054f65a;
extern "C" unsigned long g_0054f798;
extern "C" unsigned long g_0054f79c;
extern "C" unsigned long g_0054f7a0;
extern "C" unsigned long g_0054f7a4;
extern "C" unsigned long g_0054f7a8;
extern "C" unsigned long g_0054f7ac;
BLEquipGiftItemView::~BLEquipGiftItemView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0054ef58 + g_0054efdc);
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
  func_0079e45c(&uStack_14,&g_0054efaa + g_0054efe0,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}


int * BLEquipGiftItemView::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x120)));
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

undefined4 BLEquipGiftItemView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 BLEquipGiftItemView::getItemBg()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

undefined4 BLEquipGiftItemView::getSpItemLight()
{
  return *(undefined4 *)(((int)this) + 0x11c);
}

undefined4 BLEquipGiftItemView::getSprIcon()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

undefined4 BLEquipGiftItemView::getlabName()
{
  return *(undefined4 *)(((int)this) + 0x118);
}

void BLEquipGiftItemView::onEnter()
{
  ((BLEquipGiftItemPresenter *)*(undefined4 *)(((int)this) + 0x10c))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLEquipGiftItemView::onExit()
{
  ((BLEquipGiftItemPresenter *)*(undefined4 *)(((int)this) + 0x10c))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (2) =====
BLEquipGiftItemView::BLEquipGiftItemView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = (undefined4)(intptr_t)(*(int *)((unsigned char *)((char *)&g_0054f060 + (intptr_t)(g_0054f0d0))));
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
  func_0079e45c(&uStack_14,(unsigned char *)((char *)&g_0054f09c + (intptr_t)(g_0054f0d4)),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

bool BLEquipGiftItemView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
