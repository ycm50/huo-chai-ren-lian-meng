#include "BLTreasureRoleItemView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLPageControl.h"
#include "BLTreasureRoleItemPresenter.h"
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
extern "C" unsigned long UNK_006b0b38;
extern "C" unsigned long UNK_006b0b8a;
extern "C" unsigned long UNK_006b0bd0;
extern "C" unsigned long UNK_006b0bf8;
extern "C" unsigned long UNK_006b0c10;
extern "C" unsigned long UNK_006b0c4c;
extern "C" unsigned long UNK_006b0d4e;
extern "C" unsigned long UNK_006b0d7c;
extern "C" unsigned long UNK_006b0ed4;
extern "C" unsigned long UNK_006b0f18;
extern "C" unsigned long UNK_006b0f68;
extern "C" unsigned long UNK_006b0f92;
extern "C" unsigned long UNK_006b106a;
extern "C" unsigned long UNK_006b1094;
extern "C" unsigned long UNK_006b1148;
extern "C" unsigned long UNK_006b11ee;
extern "C" unsigned long UNK_006b1290;
extern "C" unsigned long _UNK_006b0bbc;
extern "C" unsigned long _UNK_006b0bc0;
extern "C" unsigned long _UNK_006b0bd4;
extern "C" unsigned long _UNK_006b0bfc;
extern "C" unsigned long _UNK_006b0c80;
extern "C" unsigned long _UNK_006b0c84;
extern "C" unsigned long _UNK_006b0eec;
extern "C" unsigned long _UNK_006b0ef0;
extern "C" unsigned long _UNK_006b0ef4;
extern "C" unsigned long _UNK_006b0ef8;
extern "C" unsigned long _UNK_006b0efc;
extern "C" unsigned long _UNK_006b0f00;
extern "C" unsigned long _UNK_006b12f4;
extern "C" unsigned long _UNK_006b12f8;
extern "C" unsigned long _UNK_006b12fc;
extern "C" unsigned long _UNK_006b1300;
extern "C" unsigned long _UNK_006b1304;
extern "C" unsigned long _UNK_006b1308;
extern "C" unsigned long _UNK_006b130c;
extern "C" unsigned long _UNK_006b1310;
extern "C" unsigned long _UNK_006b1314;
extern "C" unsigned long _UNK_006b1318;
extern "C" unsigned long _UNK_006b131c;
extern "C" unsigned long _UNK_006b1320;
extern "C" unsigned long _UNK_006b1324;
extern "C" unsigned long _UNK_006b1328;
extern "C" unsigned long _UNK_006b132c;
extern "C" unsigned long _UNK_006b1330;
extern "C" unsigned long _UNK_006b1334;
extern "C" unsigned long _UNK_006b1418;
extern "C" unsigned long _UNK_006b141c;
extern "C" unsigned long _UNK_006b1420;
extern "C" unsigned long g_006b0b38;
extern "C" unsigned long g_006b0b8a;
extern "C" unsigned long g_006b0bbc;
extern "C" unsigned long g_006b0bc0;
extern "C" unsigned long g_006b0bd0;
extern "C" unsigned long g_006b0bd4;
extern "C" unsigned long g_006b0bf8;
extern "C" unsigned long g_006b0bfc;
extern "C" unsigned long g_006b0c10;
extern "C" unsigned long g_006b0c4c;
extern "C" unsigned long g_006b0c80;
extern "C" unsigned long g_006b0c84;
extern "C" unsigned long g_006b0d4e;
extern "C" unsigned long g_006b0d7c;
extern "C" unsigned long g_006b0ed4;
extern "C" unsigned long g_006b0eec;
extern "C" unsigned long g_006b0ef0;
extern "C" unsigned long g_006b0ef4;
extern "C" unsigned long g_006b0ef8;
extern "C" unsigned long g_006b0efc;
extern "C" unsigned long g_006b0f00;
extern "C" unsigned long g_006b0f18;
extern "C" unsigned long g_006b0f68;
extern "C" unsigned long g_006b0f92;
extern "C" unsigned long g_006b106a;
extern "C" unsigned long g_006b1094;
extern "C" unsigned long g_006b1148;
extern "C" unsigned long g_006b11ee;
extern "C" unsigned long g_006b1290;
extern "C" unsigned long g_006b12f4;
extern "C" unsigned long g_006b12f8;
extern "C" unsigned long g_006b12fc;
extern "C" unsigned long g_006b1300;
extern "C" unsigned long g_006b1304;
extern "C" unsigned long g_006b1308;
extern "C" unsigned long g_006b130c;
extern "C" unsigned long g_006b1310;
extern "C" unsigned long g_006b1314;
extern "C" unsigned long g_006b1318;
extern "C" unsigned long g_006b131c;
extern "C" unsigned long g_006b1320;
extern "C" unsigned long g_006b1324;
extern "C" unsigned long g_006b1328;
extern "C" unsigned long g_006b132c;
extern "C" unsigned long g_006b1330;
extern "C" unsigned long g_006b1334;
extern "C" unsigned long g_006b1418;
extern "C" unsigned long g_006b141c;
extern "C" unsigned long g_006b1420;
BLTreasureRoleItemView::~BLTreasureRoleItemView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_006b0b38 + g_006b0bbc);
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
  func_0079e45c(&uStack_14,&g_006b0b8a + g_006b0bc0,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLTreasureRoleItemView::BLTreasureRoleItemView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = (undefined4)(intptr_t)(*(int *)((unsigned char *)((char *)&g_006b0c10 + (intptr_t)(g_006b0c80))));
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
  func_0079e45c(&uStack_14,(unsigned char *)((char *)&g_006b0c4c + (intptr_t)(g_006b0c84)),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * BLTreasureRoleItemView::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(300)));
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

undefined4 BLTreasureRoleItemView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 BLTreasureRoleItemView::getLabName()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

undefined4 BLTreasureRoleItemView::getPageControlStars()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

undefined4 BLTreasureRoleItemView::getBtnRole()
{
  return *(undefined4 *)(((int)this) + 0x118);
}

undefined4 BLTreasureRoleItemView::getLabCombat()
{
  return *(undefined4 *)(((int)this) + 0x11c);
}

undefined4 BLTreasureRoleItemView::getSprSprCombat()
{
  return *(undefined4 *)(((int)this) + 0x120);
}

void BLTreasureRoleItemView::onEnter()
{
  ((BLTreasureRoleItemPresenter *)*(undefined4 *)(((int)this) + 0x10c))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLTreasureRoleItemView::onExit()
{
  ((BLTreasureRoleItemPresenter *)*(undefined4 *)(((int)this) + 0x10c))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
bool BLTreasureRoleItemView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
