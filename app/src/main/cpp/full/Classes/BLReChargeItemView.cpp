#include "BLReChargeItemView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLReChargeItemPresenter.h"
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
extern "C" unsigned long UNK_00645d08;
extern "C" unsigned long UNK_00645d4c;
extern "C" unsigned long UNK_00645d90;
extern "C" unsigned long UNK_00645db8;
extern "C" unsigned long UNK_00645e00;
extern "C" unsigned long UNK_00645e2e;
extern "C" unsigned long UNK_00645f76;
extern "C" unsigned long UNK_0064600e;
extern "C" unsigned long UNK_006460c4;
extern "C" unsigned long UNK_006460ee;
extern "C" unsigned long UNK_006461c0;
extern "C" unsigned long UNK_006461ea;
extern "C" unsigned long UNK_006462a8;
extern "C" unsigned long UNK_006462dc;
extern "C" unsigned long UNK_006463e0;
extern "C" unsigned long UNK_0064640c;
extern "C" unsigned long UNK_006464ca;
extern "C" unsigned long UNK_006464f4;
extern "C" unsigned long UNK_006465a8;
extern "C" unsigned long UNK_00646694;
extern "C" unsigned long UNK_00646784;
extern "C" unsigned long UNK_006468ac;
extern "C" unsigned long _UNK_00645d7c;
extern "C" unsigned long _UNK_00645d80;
extern "C" unsigned long _UNK_00645d94;
extern "C" unsigned long _UNK_00645dbc;
extern "C" unsigned long _UNK_00645e58;
extern "C" unsigned long _UNK_00645e5c;
extern "C" unsigned long _UNK_00646358;
extern "C" unsigned long _UNK_0064635c;
extern "C" unsigned long _UNK_00646360;
extern "C" unsigned long _UNK_00646364;
extern "C" unsigned long _UNK_00646368;
extern "C" unsigned long _UNK_0064636c;
extern "C" unsigned long _UNK_00646370;
extern "C" unsigned long _UNK_00646374;
extern "C" unsigned long _UNK_00646378;
extern "C" unsigned long _UNK_0064637c;
extern "C" unsigned long _UNK_00646380;
extern "C" unsigned long _UNK_00646384;
extern "C" unsigned long _UNK_00646388;
extern "C" unsigned long _UNK_0064638c;
extern "C" unsigned long _UNK_00646390;
extern "C" unsigned long _UNK_00646394;
extern "C" unsigned long _UNK_006467c4;
extern "C" unsigned long _UNK_006467c8;
extern "C" unsigned long _UNK_006467cc;
extern "C" unsigned long _UNK_006467d0;
extern "C" unsigned long _UNK_006467d4;
extern "C" unsigned long _UNK_006467d8;
extern "C" unsigned long _UNK_006467dc;
extern "C" unsigned long _UNK_006467e0;
extern "C" unsigned long _UNK_006467e4;
extern "C" unsigned long _UNK_006467e8;
extern "C" unsigned long _UNK_006467ec;
extern "C" unsigned long _UNK_006467f0;
extern "C" unsigned long _UNK_006467f4;
extern "C" unsigned long _UNK_006467f8;
extern "C" unsigned long _UNK_006467fc;
extern "C" unsigned long _UNK_00646a2c;
extern "C" unsigned long _UNK_00646a30;
extern "C" unsigned long _UNK_00646a34;
extern "C" unsigned long _UNK_00646a38;
extern "C" unsigned long _UNK_00646a3c;
extern "C" unsigned long g_00645d08;
extern "C" unsigned long g_00645d4c;
extern "C" unsigned long g_00645d7c;
extern "C" unsigned long g_00645d80;
extern "C" unsigned long g_00645d90;
extern "C" unsigned long g_00645d94;
extern "C" unsigned long g_00645db8;
extern "C" unsigned long g_00645dbc;
extern "C" unsigned long g_00645e00;
extern "C" unsigned long g_00645e2e;
extern "C" unsigned long g_00645e58;
extern "C" unsigned long g_00645e5c;
extern "C" unsigned long g_00645f76;
extern "C" unsigned long g_0064600e;
extern "C" unsigned long g_006460c4;
extern "C" unsigned long g_006460ee;
extern "C" unsigned long g_006461c0;
extern "C" unsigned long g_006461ea;
extern "C" unsigned long g_006462a8;
extern "C" unsigned long g_006462dc;
extern "C" unsigned long g_00646358;
extern "C" unsigned long g_0064635c;
extern "C" unsigned long g_00646360;
extern "C" unsigned long g_00646364;
extern "C" unsigned long g_00646368;
extern "C" unsigned long g_0064636c;
extern "C" unsigned long g_00646370;
extern "C" unsigned long g_00646374;
extern "C" unsigned long g_00646378;
extern "C" unsigned long g_0064637c;
extern "C" unsigned long g_00646380;
extern "C" unsigned long g_00646384;
extern "C" unsigned long g_00646388;
extern "C" unsigned long g_0064638c;
extern "C" unsigned long g_00646390;
extern "C" unsigned long g_00646394;
extern "C" unsigned long g_006463e0;
extern "C" unsigned long g_0064640c;
extern "C" unsigned long g_006464ca;
extern "C" unsigned long g_006464f4;
extern "C" unsigned long g_006465a8;
extern "C" unsigned long g_00646694;
extern "C" unsigned long g_00646784;
extern "C" unsigned long g_006467c4;
extern "C" unsigned long g_006467c8;
extern "C" unsigned long g_006467cc;
extern "C" unsigned long g_006467d0;
extern "C" unsigned long g_006467d4;
extern "C" unsigned long g_006467d8;
extern "C" unsigned long g_006467dc;
extern "C" unsigned long g_006467e0;
extern "C" unsigned long g_006467e4;
extern "C" unsigned long g_006467e8;
extern "C" unsigned long g_006467ec;
extern "C" unsigned long g_006467f0;
extern "C" unsigned long g_006467f4;
extern "C" unsigned long g_006467f8;
extern "C" unsigned long g_006467fc;
extern "C" unsigned long g_006468ac;
extern "C" unsigned long g_00646a2c;
extern "C" unsigned long g_00646a30;
extern "C" unsigned long g_00646a34;
extern "C" unsigned long g_00646a38;
extern "C" unsigned long g_00646a3c;
BLReChargeItemView::~BLReChargeItemView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_00645d08 + g_00645d7c);
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
  func_0079e45c(&uStack_14,&g_00645d4c + g_00645d80,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLReChargeItemView::BLReChargeItemView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_00645e00 + g_00645e58);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00645e2e + g_00645e5c,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * BLReChargeItemView::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x134)));
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

undefined4 BLReChargeItemView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x108);
}

undefined4 BLReChargeItemView::getSprIcon()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 BLReChargeItemView::getBtnBuy()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

undefined4 BLReChargeItemView::getLabBuy()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

undefined4 BLReChargeItemView::getLabItemName()
{
  return *(undefined4 *)(((int)this) + 0x118);
}

undefined4 BLReChargeItemView::getLabPrice()
{
  return *(undefined4 *)(((int)this) + 0x11c);
}

undefined4 BLReChargeItemView::getLineUp()
{
  return *(undefined4 *)(((int)this) + 0x120);
}

undefined4 BLReChargeItemView::getLineDown()
{
  return *(undefined4 *)(((int)this) + 0x124);
}

undefined4 BLReChargeItemView::getLineRight()
{
  return *(undefined4 *)(((int)this) + 0x128);
}

undefined4 BLReChargeItemView::getLineLeft()
{
  return *(undefined4 *)(((int)this) + 300);
}

undefined4 BLReChargeItemView::getLabGive()
{
  return *(undefined4 *)(((int)this) + 0x130);
}

void BLReChargeItemView::onEnter()
{
  ((BLReChargeItemPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLReChargeItemView::onExit()
{
  ((BLReChargeItemPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
bool BLReChargeItemView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
