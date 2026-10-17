#include "BLTreasureRecordItemView.h"
#include "BLLeakUtils.h"
#include "BLTreasureRecordItemPresenter.h"
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
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_006b0018;
extern "C" unsigned long UNK_006b005c;
extern "C" unsigned long UNK_006b00a0;
extern "C" unsigned long UNK_006b0160;
extern "C" unsigned long UNK_006b01a2;
extern "C" unsigned long UNK_006b01d6;
extern "C" unsigned long UNK_006b026e;
extern "C" unsigned long _UNK_006b008c;
extern "C" unsigned long _UNK_006b0090;
extern "C" unsigned long _UNK_006b00a4;
extern "C" unsigned long _UNK_006b0164;
extern "C" unsigned long _UNK_006b0200;
extern "C" unsigned long _UNK_006b0204;
extern "C" unsigned long _UNK_006b02dc;
extern "C" unsigned long _UNK_006b02e0;
extern "C" unsigned long _UNK_006b02e4;
extern "C" unsigned long _UNK_006b02e8;
extern "C" unsigned long g_006b0018;
extern "C" unsigned long g_006b005c;
extern "C" unsigned long g_006b008c;
extern "C" unsigned long g_006b0090;
extern "C" unsigned long g_006b00a0;
extern "C" unsigned long g_006b00a4;
extern "C" unsigned long g_006b0160;
extern "C" unsigned long g_006b0164;
extern "C" unsigned long g_006b01a2;
extern "C" unsigned long g_006b01d6;
extern "C" unsigned long g_006b0200;
extern "C" unsigned long g_006b0204;
extern "C" unsigned long g_006b026e;
extern "C" unsigned long g_006b02dc;
extern "C" unsigned long g_006b02e0;
extern "C" unsigned long g_006b02e4;
extern "C" unsigned long g_006b02e8;
BLTreasureRecordItemView::~BLTreasureRecordItemView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_006b0018 + g_006b008c);
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
  func_0079e45c(&uStack_14,&g_006b005c + g_006b0090,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLTreasureRecordItemView::BLTreasureRecordItemView()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

int * BLTreasureRecordItemView::create(int p1)
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x114)));
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

void BLTreasureRecordItemView::initView()
{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  int *piVar5;
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [12];
  
  iVar2 = g_006b02e0;
  uVar3 = (undefined4)(g_006b02dc & *(int *)((int)this + 4*(0x44)));
  if ((int)uVar3 < 0) {
    uVar3 = (undefined4)((uVar3 - 1 | 0xfffffffe) + 1);
  }
  *(int *)((int)this + 4*(0x44)) = uVar3;
  cocos2d::CCString::createWithFormat((char const*)&g_006b026e + iVar2);
  uVar1 = (undefined4)(((cocos2d::CCString *)this)->getCString());
  func_0079e45c(auStack_20,uVar1,auStack_24);
  iVar2 = 0 /* ctorZero */;
  *(int *)((int)this + 4*(0x43)) = iVar2;
  func_0079e2bc(auStack_20);
  piVar5 = (int *)*(int *)((int)this + 4*(0x43));
  pcVar4 = *(code **)(*piVar5 + 0x1d4);
  0 /* ctorZero */;
  (*pcVar4)(piVar5,auStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x43)));
  pcVar4 = *(code **)(*(int *)this + 0x88);
  0 /* ctorZero */;
  (*pcVar4)(((int)this),auStack_20);
  return;
}

undefined4 BLTreasureRecordItemView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x108);
}

undefined4 BLTreasureRecordItemView::getSpBg()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

bool BLTreasureRecordItemView::init()
{
  int iVar1;
  int iVar2;
  
  iVar1 = ((cocos2d::CCLayer *)this)->init();
  if (iVar1 != 0) {
    iVar2 = ((BLTreasureRecordItemPresenter *)this)->create();
    *(int *)(((int)this) + 0x108) = iVar2;
    if (iVar2 != 0) {
      ((cocos2d::CCObject *)this)->retain();
    }
    BLTreasureRecordItemView::initView();
    ((BLTreasureRecordItemPresenter *)*(undefined4 *)(((int)this) + 0x108))->initWithView((BLTreasureRecordItemView*)((int)this));
  }
  return iVar1;
}

void BLTreasureRecordItemView::onEnter()
{
  ((BLTreasureRecordItemPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLTreasureRecordItemView::onExit()
{
  ((BLTreasureRecordItemPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}
