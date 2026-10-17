#include "BLBluethWaitSelectHeroView.h"
#include "BLBluethWaitSelectHeroPresenter.h"
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
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_004fbfc0;
extern "C" unsigned long UNK_004fc012;
extern "C" unsigned long UNK_004fc058;
extern "C" unsigned long UNK_004fc080;
extern "C" unsigned long UNK_004fc22c;
extern "C" unsigned long UNK_004fc30e;
extern "C" unsigned long UNK_004fc40a;
extern "C" unsigned long UNK_004fc434;
extern "C" unsigned long UNK_004fc506;
extern "C" unsigned long UNK_004fc530;
extern "C" unsigned long _DAT_004fc138;
extern "C" unsigned long _DAT_004fc13c;
extern "C" unsigned long _UNK_004fc044;
extern "C" unsigned long _UNK_004fc048;
extern "C" unsigned long _UNK_004fc05c;
extern "C" unsigned long _UNK_004fc084;
extern "C" unsigned long _UNK_004fc610;
extern "C" unsigned long _UNK_004fc614;
extern "C" unsigned long _UNK_004fc618;
extern "C" unsigned long _UNK_004fc61c;
extern "C" unsigned long _UNK_004fc620;
extern "C" unsigned long _UNK_004fc624;
extern "C" unsigned long _UNK_004fc628;
extern "C" unsigned long _UNK_004fc62c;
extern "C" unsigned long _UNK_004fc630;
extern "C" unsigned long _UNK_004fc634;
extern "C" unsigned long _UNK_004fc638;
extern "C" unsigned long _UNK_004fc63c;
extern "C" unsigned long _UNK_004fc640;
extern "C" unsigned long _UNK_004fc644;
extern "C" unsigned long g_004fbfc0;
extern "C" unsigned long g_004fc012;
extern "C" unsigned long g_004fc044;
extern "C" unsigned long g_004fc048;
extern "C" unsigned long g_004fc058;
extern "C" unsigned long g_004fc05c;
extern "C" unsigned long g_004fc080;
extern "C" unsigned long g_004fc084;
extern "C" unsigned long g_004fc138;
extern "C" unsigned long g_004fc13c;
extern "C" unsigned long g_004fc22c;
extern "C" unsigned long g_004fc30e;
extern "C" unsigned long g_004fc40a;
extern "C" unsigned long g_004fc434;
extern "C" unsigned long g_004fc506;
extern "C" unsigned long g_004fc530;
extern "C" unsigned long g_004fc610;
extern "C" unsigned long g_004fc614;
extern "C" unsigned long g_004fc618;
extern "C" unsigned long g_004fc61c;
extern "C" unsigned long g_004fc620;
extern "C" unsigned long g_004fc624;
extern "C" unsigned long g_004fc628;
extern "C" unsigned long g_004fc62c;
extern "C" unsigned long g_004fc630;
extern "C" unsigned long g_004fc634;
extern "C" unsigned long g_004fc638;
extern "C" unsigned long g_004fc63c;
extern "C" unsigned long g_004fc640;
extern "C" unsigned long g_004fc644;
BLBluethWaitSelectHeroView::~BLBluethWaitSelectHeroView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_004fbfc0 + g_004fc044);
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
  func_0079e45c(&uStack_14,&g_004fc012 + g_004fc048,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}


int * BLBluethWaitSelectHeroView::create()
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

undefined4 BLBluethWaitSelectHeroView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 BLBluethWaitSelectHeroView::getBackGround()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

undefined4 BLBluethWaitSelectHeroView::getTabBg()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

undefined4 BLBluethWaitSelectHeroView::getBtnClose()
{
  return *(undefined4 *)(((int)this) + 0x118);
}

void BLBluethWaitSelectHeroView::onEnter()
{
  ((BLBluethWaitSelectHeroPresenter *)*(undefined4 *)(((int)this) + 0x10c))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLBluethWaitSelectHeroView::onExit()
{
  ((BLBluethWaitSelectHeroPresenter *)*(undefined4 *)(((int)this) + 0x10c))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (2) =====
BLBluethWaitSelectHeroView::BLBluethWaitSelectHeroView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = (undefined4)(intptr_t)(*(int *)(g_004fc138 + 0x4fc0c8));
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
  func_0079e45c(&uStack_14,((intptr_t)"BLBluethWaitSelectHeroView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

bool BLBluethWaitSelectHeroView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
