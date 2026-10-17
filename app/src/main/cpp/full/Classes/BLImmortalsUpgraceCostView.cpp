#include "BLImmortalsUpgraceCostView.h"
#include "BLImmortalsItemPresenter.h"
#include "BLImmortalsItemView.h"
#include "BLImmortalsUpgraceCostPresenter.h"
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
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0057494c;
extern "C" unsigned long UNK_00574980;
extern "C" unsigned long UNK_00574a04;
extern "C" unsigned long UNK_00574a2c;
extern "C" unsigned long UNK_00574fd4;
extern "C" unsigned long UNK_00575010;
extern "C" unsigned long UNK_005757e4;
extern "C" unsigned long UNK_0057582c;
extern "C" unsigned long UNK_00575842;
extern "C" unsigned long UNK_00575864;
extern "C" unsigned long UNK_00575a2c;
extern "C" unsigned long UNK_00575b4c;
extern "C" unsigned long UNK_00575b62;
extern "C" unsigned long UNK_00575b83;
extern "C" unsigned long _UNK_005749f0;
extern "C" unsigned long _UNK_005749f4;
extern "C" unsigned long _UNK_00574a08;
extern "C" unsigned long _UNK_00574a30;
extern "C" unsigned long _UNK_0057504c;
extern "C" unsigned long _UNK_00575050;
extern "C" unsigned long _UNK_005759f4;
extern "C" unsigned long _UNK_005759f8;
extern "C" unsigned long _UNK_005759fc;
extern "C" unsigned long _UNK_00575a00;
extern "C" unsigned long _UNK_00575a04;
extern "C" unsigned long _UNK_00575a08;
extern "C" unsigned long _UNK_00575a0c;
extern "C" unsigned long _UNK_00575a10;
extern "C" unsigned long _UNK_00575a14;
extern "C" unsigned long _UNK_00575a18;
extern "C" unsigned long _UNK_00575bdc;
extern "C" unsigned long _UNK_00575be0;
extern "C" unsigned long _UNK_00575be4;
extern "C" unsigned long _UNK_00575be8;
extern "C" unsigned long _UNK_00575bec;
extern "C" unsigned long _UNK_00575bf0;
extern "C" unsigned long _UNK_00575bf4;
extern "C" unsigned long _UNK_00575bf8;
extern "C" unsigned long g_0057494c;
extern "C" unsigned long g_00574980;
extern "C" unsigned long g_005749f0;
extern "C" unsigned long g_005749f4;
extern "C" unsigned long g_00574a04;
extern "C" unsigned long g_00574a08;
extern "C" unsigned long g_00574a2c;
extern "C" unsigned long g_00574a30;
extern "C" unsigned long g_00574fd4;
extern "C" unsigned long g_00575010;
extern "C" unsigned long g_0057504c;
extern "C" unsigned long g_00575050;
extern "C" unsigned long g_005757e4;
extern "C" unsigned long g_0057582c;
extern "C" unsigned long g_00575842;
extern "C" unsigned long g_00575864;
extern "C" unsigned long g_005759f4;
extern "C" unsigned long g_005759f8;
extern "C" unsigned long g_005759fc;
extern "C" unsigned long g_00575a00;
extern "C" unsigned long g_00575a04;
extern "C" unsigned long g_00575a08;
extern "C" unsigned long g_00575a0c;
extern "C" unsigned long g_00575a10;
extern "C" unsigned long g_00575a14;
extern "C" unsigned long g_00575a18;
extern "C" unsigned long g_00575a2c;
extern "C" unsigned long g_00575b4c;
extern "C" unsigned long g_00575b62;
extern "C" unsigned long g_00575b83;
extern "C" unsigned long g_00575bdc;
extern "C" unsigned long g_00575be0;
extern "C" unsigned long g_00575be4;
extern "C" unsigned long g_00575be8;
extern "C" unsigned long g_00575bec;
extern "C" unsigned long g_00575bf0;
extern "C" unsigned long g_00575bf4;
extern "C" unsigned long g_00575bf8;
BLImmortalsUpgraceCostView::~BLImmortalsUpgraceCostView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0057494c + g_005749f0);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00574980 + g_005749f4,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  if (*(int *)((int)this + 4*(0x42)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x42)) = 0;
  }
  for (puVar3 = (undefined4 *)*(int *)((int)this + 4*(0x44)); puVar3 != (undefined4 *)*(int *)((int)this + 4*(0x45));
      puVar3 = puVar3 + 1) {
    *puVar3 = 0;
  }
  *(int *)((int)this + 4*(0x45)) = *(int *)((int)this + 4*(0x44));
  if (*(int *)((int)this + 4*(0x44)) != 0) {
    (void)(::operator delete((void *)(*(int *)((int)this + 4*(0x44)))));
  }
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLImmortalsUpgraceCostView::BLImmortalsUpgraceCostView()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  piStack_20 = (int *)((int)this);
  uStack_1c = (undefined4)(p2);
  uStack_18 = (undefined4)(p3);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_00574fd4 + g_0057504c);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  *(int *)((int)this + 4*(0x44)) = 0;
  *(int *)((int)this + 4*(0x45)) = 0;
  *(int *)((int)this + 4*(0x46)) = 0;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_1c,&g_00575010 + g_00575050,&piStack_20);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_1c);
  func_0079e2bc(&uStack_1c);
  *(int *)((int)this + 4*(0x45)) = *(int *)((int)this + 4*(0x44));
  return;
}


bool BLImmortalsUpgraceCostView::init()
{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = ((cocos2d::CCLayer *)this)->init();
  if (iVar1 != 0) {
    uVar2 = (undefined4)(((BLImmortalsUpgraceCostPresenter *)this)->create());
    *(undefined4 *)(((int)this) + 0x108) = uVar2;
    ((cocos2d::CCObject *)this)->retain();
    BLImmortalsUpgraceCostView::initView();
    ((BLImmortalsUpgraceCostPresenter *)*(undefined4 *)(((int)this) + 0x108))->initWithView((BLImmortalsUpgraceCostView*)((int)this));
  }
  return iVar1;
}

void BLImmortalsUpgraceCostView::onEnter()
{
  ((BLImmortalsUpgraceCostPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLImmortalsUpgraceCostView::onExit()
{
  ((BLImmortalsUpgraceCostPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
void BLImmortalsUpgraceCostView::initView()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
