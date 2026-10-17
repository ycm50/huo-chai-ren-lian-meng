#include "BLTreasureRecordView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLTreasureRecordPresenter.h"
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
extern "C" long long func_0079e4fc(...);
extern "C" long long ghidra_CONCAT13(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_006b00b0;
extern "C" unsigned long UNK_006b00f4;
extern "C" unsigned long UNK_006b0138;
extern "C" unsigned long UNK_006b0188;
extern "C" unsigned long UNK_006b0308;
extern "C" unsigned long UNK_006b0336;
extern "C" unsigned long UNK_006b0388;
extern "C" unsigned long UNK_006b03ca;
extern "C" unsigned long UNK_006b0442;
extern "C" unsigned long UNK_006b045a;
extern "C" unsigned long _UNK_006b0124;
extern "C" unsigned long _UNK_006b0128;
extern "C" unsigned long _UNK_006b013c;
extern "C" unsigned long _UNK_006b018c;
extern "C" unsigned long _UNK_006b0360;
extern "C" unsigned long _UNK_006b0364;
extern "C" unsigned long _UNK_006b058c;
extern "C" unsigned long _UNK_006b0590;
extern "C" unsigned long _UNK_006b0594;
extern "C" unsigned long _UNK_006b0598;
extern "C" unsigned long _UNK_006b059c;
extern "C" unsigned long _UNK_006b05a0;
extern "C" unsigned long _UNK_006b05a4;
extern "C" unsigned long _UNK_006b05a8;
extern "C" unsigned long _UNK_006b05ac;
extern "C" unsigned long _UNK_006b05b0;
extern "C" unsigned long g_006b00b0;
extern "C" unsigned long g_006b00f4;
extern "C" unsigned long g_006b0124;
extern "C" unsigned long g_006b0128;
extern "C" unsigned long g_006b0138;
extern "C" unsigned long g_006b013c;
extern "C" unsigned long g_006b0188;
extern "C" unsigned long g_006b018c;
extern "C" unsigned long g_006b0308;
extern "C" unsigned long g_006b0336;
extern "C" unsigned long g_006b0360;
extern "C" unsigned long g_006b0364;
extern "C" unsigned long g_006b0388;
extern "C" unsigned long g_006b03ca;
extern "C" unsigned long g_006b0442;
extern "C" unsigned long g_006b045a;
extern "C" unsigned long g_006b058c;
extern "C" unsigned long g_006b0590;
extern "C" unsigned long g_006b0594;
extern "C" unsigned long g_006b0598;
extern "C" unsigned long g_006b059c;
extern "C" unsigned long g_006b05a0;
extern "C" unsigned long g_006b05a4;
extern "C" unsigned long g_006b05a8;
extern "C" unsigned long g_006b05ac;
extern "C" unsigned long g_006b05b0;
BLTreasureRecordView::~BLTreasureRecordView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_006b00b0 + g_006b0124);
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
  func_0079e45c(&uStack_14,&g_006b00f4 + g_006b0128,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLTreasureRecordView::BLTreasureRecordView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_006b0308 + g_006b0360);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_006b0336 + g_006b0364,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}


undefined4 BLTreasureRecordView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x108);
}

undefined4 BLTreasureRecordView::getScrollView()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

bool BLTreasureRecordView::init()
{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = ((cocos2d::CCLayer *)this)->init();
  if (iVar1 != 0) {
    uVar2 = (undefined4)(((BLTreasureRecordPresenter *)this)->create());
    *(undefined4 *)(((int)this) + 0x108) = uVar2;
    ((cocos2d::CCObject *)this)->retain();
    BLTreasureRecordView::initView();
    ((BLTreasureRecordPresenter *)*(undefined4 *)(((int)this) + 0x108))->initWithView((BLTreasureRecordView*)((int)this));
  }
  return iVar1;
}

void BLTreasureRecordView::onEnter()
{
  ((BLTreasureRecordPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLTreasureRecordView::onExit()
{
  ((BLTreasureRecordPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
void BLTreasureRecordView::initView()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
