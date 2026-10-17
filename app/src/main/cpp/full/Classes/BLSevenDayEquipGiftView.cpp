#include "BLSevenDayEquipGiftView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLSevenDayEquipGiftPresenter.h"
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
extern "C" unsigned long UNK_00557658;
extern "C" unsigned long UNK_005576aa;
extern "C" unsigned long UNK_005576f0;
extern "C" unsigned long UNK_00557718;
extern "C" unsigned long UNK_00557760;
extern "C" unsigned long UNK_0055779c;
extern "C" unsigned long UNK_005578c6;
extern "C" unsigned long UNK_005579ac;
extern "C" unsigned long UNK_00557aa6;
extern "C" unsigned long UNK_00557ad0;
extern "C" unsigned long UNK_00557ba4;
extern "C" unsigned long UNK_00557bce;
extern "C" unsigned long UNK_00557d18;
extern "C" unsigned long _UNK_005576dc;
extern "C" unsigned long _UNK_005576e0;
extern "C" unsigned long _UNK_005576f4;
extern "C" unsigned long _UNK_0055771c;
extern "C" unsigned long _UNK_005577d0;
extern "C" unsigned long _UNK_005577d4;
extern "C" unsigned long _UNK_00557ca8;
extern "C" unsigned long _UNK_00557cac;
extern "C" unsigned long _UNK_00557cb0;
extern "C" unsigned long _UNK_00557cb4;
extern "C" unsigned long _UNK_00557cb8;
extern "C" unsigned long _UNK_00557cbc;
extern "C" unsigned long _UNK_00557cc0;
extern "C" unsigned long _UNK_00557cc4;
extern "C" unsigned long _UNK_00557cc8;
extern "C" unsigned long _UNK_00557ccc;
extern "C" unsigned long _UNK_00557cd0;
extern "C" unsigned long _UNK_00557cd4;
extern "C" unsigned long _UNK_00557cd8;
extern "C" unsigned long _UNK_00557cdc;
extern "C" unsigned long _UNK_00557ce0;
extern "C" unsigned long _UNK_00557ce4;
extern "C" unsigned long _UNK_00557e00;
extern "C" unsigned long _UNK_00557e04;
extern "C" unsigned long _UNK_00557e08;
extern "C" unsigned long _UNK_00557e0c;
extern "C" unsigned long g_00557658;
extern "C" unsigned long g_005576aa;
extern "C" unsigned long g_005576dc;
extern "C" unsigned long g_005576e0;
extern "C" unsigned long g_005576f0;
extern "C" unsigned long g_005576f4;
extern "C" unsigned long g_00557718;
extern "C" unsigned long g_0055771c;
extern "C" unsigned long g_00557760;
extern "C" unsigned long g_0055779c;
extern "C" unsigned long g_005577d0;
extern "C" unsigned long g_005577d4;
extern "C" unsigned long g_005578c6;
extern "C" unsigned long g_005579ac;
extern "C" unsigned long g_00557aa6;
extern "C" unsigned long g_00557ad0;
extern "C" unsigned long g_00557ba4;
extern "C" unsigned long g_00557bce;
extern "C" unsigned long g_00557ca8;
extern "C" unsigned long g_00557cac;
extern "C" unsigned long g_00557cb0;
extern "C" unsigned long g_00557cb4;
extern "C" unsigned long g_00557cb8;
extern "C" unsigned long g_00557cbc;
extern "C" unsigned long g_00557cc0;
extern "C" unsigned long g_00557cc4;
extern "C" unsigned long g_00557cc8;
extern "C" unsigned long g_00557ccc;
extern "C" unsigned long g_00557cd0;
extern "C" unsigned long g_00557cd4;
extern "C" unsigned long g_00557cd8;
extern "C" unsigned long g_00557cdc;
extern "C" unsigned long g_00557ce0;
extern "C" unsigned long g_00557ce4;
extern "C" unsigned long g_00557d18;
extern "C" unsigned long g_00557e00;
extern "C" unsigned long g_00557e04;
extern "C" unsigned long g_00557e08;
extern "C" unsigned long g_00557e0c;
BLSevenDayEquipGiftView::~BLSevenDayEquipGiftView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_00557658 + g_005576dc);
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
  func_0079e45c(&uStack_14,&g_005576aa + g_005576e0,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}


int * BLSevenDayEquipGiftView::create()
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

undefined4 BLSevenDayEquipGiftView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 BLSevenDayEquipGiftView::getBackGround()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

undefined4 BLSevenDayEquipGiftView::getTabBg()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

undefined4 BLSevenDayEquipGiftView::getBtnClose()
{
  return *(undefined4 *)(((int)this) + 0x118);
}

undefined4 BLSevenDayEquipGiftView::getGridViewItemList()
{
  return *(undefined4 *)(((int)this) + 0x11c);
}

void BLSevenDayEquipGiftView::onEnter()
{
  ((BLSevenDayEquipGiftPresenter *)*(undefined4 *)(((int)this) + 0x10c))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLSevenDayEquipGiftView::onExit()
{
  ((BLSevenDayEquipGiftPresenter *)*(undefined4 *)(((int)this) + 0x10c))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (2) =====
BLSevenDayEquipGiftView::BLSevenDayEquipGiftView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = (undefined4)(intptr_t)(*(int *)((unsigned char *)((char *)&g_00557760 + (intptr_t)(g_005577d0))));
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
  func_0079e45c(&uStack_14,(unsigned char *)((char *)&g_0055779c + (intptr_t)(g_005577d4)),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

bool BLSevenDayEquipGiftView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
