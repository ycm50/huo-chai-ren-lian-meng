#include "BLBackPackArrangeView.h"
#include "BLArrangeButton.h"
#include "BLBackPackArrangePresenter.h"
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
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e57c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_004f92d4;
extern "C" unsigned long UNK_004f9306;
extern "C" unsigned long UNK_004f9360;
extern "C" unsigned long UNK_004f93d8;
extern "C" unsigned long UNK_004f9932;
extern "C" unsigned long UNK_004f99cc;
extern "C" unsigned long UNK_004f9ab2;
extern "C" unsigned long UNK_004f9adc;
extern "C" unsigned long UNK_004f9b7a;
extern "C" unsigned long UNK_004f9b88;
extern "C" unsigned long UNK_004f9b9a;
extern "C" unsigned long UNK_004f9bac;
extern "C" unsigned long UNK_004f9c80;
extern "C" unsigned long UNK_004f9cbe;
extern "C" unsigned long UNK_004f9d46;
extern "C" unsigned long UNK_004f9dec;
extern "C" unsigned long UNK_004f9e0a;
extern "C" unsigned long UNK_004f9e7d;
extern "C" unsigned long UNK_004f9e9e;
extern "C" unsigned long _DAT_004f991c;
extern "C" unsigned long _DAT_004f9920;
extern "C" unsigned long _UNK_004f934c;
extern "C" unsigned long _UNK_004f9350;
extern "C" unsigned long _UNK_004f9364;
extern "C" unsigned long _UNK_004f93dc;
extern "C" unsigned long _UNK_004f9bdc;
extern "C" unsigned long _UNK_004f9be0;
extern "C" unsigned long _UNK_004f9be4;
extern "C" unsigned long _UNK_004f9be8;
extern "C" unsigned long _UNK_004f9bec;
extern "C" unsigned long _UNK_004f9bf0;
extern "C" unsigned long _UNK_004f9bf4;
extern "C" unsigned long _UNK_004f9bf8;
extern "C" unsigned long _UNK_004f9bfc;
extern "C" unsigned long _UNK_004f9c00;
extern "C" unsigned long _UNK_004f9c04;
extern "C" unsigned long _UNK_004f9c08;
extern "C" unsigned long _UNK_004f9c0c;
extern "C" unsigned long _UNK_004f9c10;
extern "C" unsigned long _UNK_004f9c14;
extern "C" unsigned long _UNK_004f9c18;
extern "C" unsigned long _UNK_004f9fd4;
extern "C" unsigned long _UNK_004f9fd8;
extern "C" unsigned long _UNK_004f9fdc;
extern "C" unsigned long _UNK_004f9fe0;
extern "C" unsigned long _UNK_004f9fe4;
extern "C" unsigned long _UNK_004f9fe8;
extern "C" unsigned long _UNK_004f9fec;
extern "C" unsigned long _UNK_004f9ff0;
extern "C" unsigned long _UNK_004f9ff4;
extern "C" unsigned long _UNK_004f9ff8;
extern "C" unsigned long _UNK_004f9ffc;
extern "C" unsigned long _UNK_004fa000;
extern "C" unsigned long _UNK_004fa004;
extern "C" unsigned long _UNK_004fa008;
extern "C" unsigned long _UNK_004fa00c;
extern "C" unsigned long _UNK_004fa010;
extern "C" unsigned long _UNK_004fa014;
extern "C" unsigned long _UNK_004fa018;
extern "C" unsigned long g_004f92d4;
extern "C" unsigned long g_004f9306;
extern "C" unsigned long g_004f934c;
extern "C" unsigned long g_004f9350;
extern "C" unsigned long g_004f9360;
extern "C" unsigned long g_004f9364;
extern "C" unsigned long g_004f93d8;
extern "C" unsigned long g_004f93dc;
extern "C" unsigned long g_004f991c;
extern "C" unsigned long g_004f9920;
extern "C" unsigned long g_004f9932;
extern "C" unsigned long g_004f99cc;
extern "C" unsigned long g_004f9ab2;
extern "C" unsigned long g_004f9adc;
extern "C" unsigned long g_004f9b7a;
extern "C" unsigned long g_004f9b88;
extern "C" unsigned long g_004f9b9a;
extern "C" unsigned long g_004f9bac;
extern "C" unsigned long g_004f9bdc;
extern "C" unsigned long g_004f9be0;
extern "C" unsigned long g_004f9be4;
extern "C" unsigned long g_004f9be8;
extern "C" unsigned long g_004f9bec;
extern "C" unsigned long g_004f9bf0;
extern "C" unsigned long g_004f9bf4;
extern "C" unsigned long g_004f9bf8;
extern "C" unsigned long g_004f9bfc;
extern "C" unsigned long g_004f9c00;
extern "C" unsigned long g_004f9c04;
extern "C" unsigned long g_004f9c08;
extern "C" unsigned long g_004f9c0c;
extern "C" unsigned long g_004f9c10;
extern "C" unsigned long g_004f9c14;
extern "C" unsigned long g_004f9c18;
extern "C" unsigned long g_004f9c80;
extern "C" unsigned long g_004f9cbe;
extern "C" unsigned long g_004f9d46;
extern "C" unsigned long g_004f9dec;
extern "C" unsigned long g_004f9e0a;
extern "C" unsigned long g_004f9e7d;
extern "C" unsigned long g_004f9e9e;
extern "C" unsigned long g_004f9fd4;
extern "C" unsigned long g_004f9fd8;
extern "C" unsigned long g_004f9fdc;
extern "C" unsigned long g_004f9fe0;
extern "C" unsigned long g_004f9fe4;
extern "C" unsigned long g_004f9fe8;
extern "C" unsigned long g_004f9fec;
extern "C" unsigned long g_004f9ff0;
extern "C" unsigned long g_004f9ff4;
extern "C" unsigned long g_004f9ff8;
extern "C" unsigned long g_004f9ffc;
extern "C" unsigned long g_004fa000;
extern "C" unsigned long g_004fa004;
extern "C" unsigned long g_004fa008;
extern "C" unsigned long g_004fa00c;
extern "C" unsigned long g_004fa010;
extern "C" unsigned long g_004fa014;
extern "C" unsigned long g_004fa018;
BLBackPackArrangeView::~BLBackPackArrangeView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_004f92d4 + g_004f934c);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_004f9306 + g_004f9350,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  if (*(int *)((int)this + 4*(0x42)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x42)) = 0;
  }
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLBackPackArrangeView::BLBackPackArrangeView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(g_004f991c + 0x4f98c4);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLBackPackArrangeView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}


undefined4 BLBackPackArrangeView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x108);
}

undefined4 BLBackPackArrangeView::getBtnSell()
{
  return *(undefined4 *)(((int)this) + 300);
}

int BLBackPackArrangeView::getItemView()
{
  return ((int)this) + 0x10c;
}

undefined4 BLBackPackArrangeView::getBtnClose()
{
  return *(undefined4 *)(((int)this) + 0x130);
}

undefined4 BLBackPackArrangeView::getItemCounts()
{
  return *(undefined4 *)(((int)this) + 0x134);
}


bool BLBackPackArrangeView::init()
{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = ((cocos2d::CCLayer *)this)->init();
  if (iVar1 != 0) {
    uVar2 = (undefined4)(((BLBackPackArrangePresenter *)this)->create());
    *(undefined4 *)(((int)this) + 0x108) = uVar2;
    ((cocos2d::CCObject *)this)->retain();
    BLBackPackArrangeView::initView();
    ((BLBackPackArrangePresenter *)*(undefined4 *)(((int)this) + 0x108))->initWithView((BLBackPackArrangeView*)((int)this));
  }
  return iVar1;
}

void BLBackPackArrangeView::onEnter()
{
  ((BLBackPackArrangePresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLBackPackArrangeView::onExit()
{
  ((BLBackPackArrangePresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (2) =====
void BLBackPackArrangeView::initView()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLBackPackArrangeView::getSelects(bool* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
