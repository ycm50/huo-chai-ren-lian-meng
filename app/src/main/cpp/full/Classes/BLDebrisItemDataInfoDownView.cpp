#include "BLDebrisItemDataInfoDownView.h"
#include "BLDebrisItemDataInfoDownPresenter.h"
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
extern "C" long long ghidra_CONCAT13(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_005f732c;
extern "C" unsigned long UNK_005f7370;
extern "C" unsigned long UNK_005f73b4;
extern "C" unsigned long UNK_005f73dc;
extern "C" unsigned long UNK_005f7424;
extern "C" unsigned long UNK_005f7452;
extern "C" unsigned long UNK_005f7540;
extern "C" unsigned long UNK_005f7634;
extern "C" unsigned long UNK_005f7666;
extern "C" unsigned long UNK_005f7738;
extern "C" unsigned long UNK_005f776c;
extern "C" unsigned long UNK_005f7838;
extern "C" unsigned long UNK_005f786a;
extern "C" unsigned long UNK_005f797e;
extern "C" unsigned long UNK_005f79a8;
extern "C" unsigned long UNK_005f7a70;
extern "C" unsigned long UNK_005f7a9e;
extern "C" unsigned long UNK_005f7b76;
extern "C" unsigned long UNK_005f7b9e;
extern "C" unsigned long UNK_005f7c76;
extern "C" unsigned long UNK_005f7c9e;
extern "C" unsigned long UNK_005f7db8;
extern "C" unsigned long UNK_005f7de2;
extern "C" unsigned long UNK_005f7e9e;
extern "C" unsigned long UNK_005f7ec8;
extern "C" unsigned long UNK_005f7f8c;
extern "C" unsigned long UNK_005f7fb6;
extern "C" unsigned long UNK_005f8076;
extern "C" unsigned long UNK_005f80a0;
extern "C" unsigned long UNK_005f815c;
extern "C" unsigned long _UNK_005f73a0;
extern "C" unsigned long _UNK_005f73a4;
extern "C" unsigned long _UNK_005f73b8;
extern "C" unsigned long _UNK_005f73e0;
extern "C" unsigned long _UNK_005f747c;
extern "C" unsigned long _UNK_005f7480;
extern "C" unsigned long _UNK_005f7924;
extern "C" unsigned long _UNK_005f7928;
extern "C" unsigned long _UNK_005f792c;
extern "C" unsigned long _UNK_005f7930;
extern "C" unsigned long _UNK_005f7934;
extern "C" unsigned long _UNK_005f7938;
extern "C" unsigned long _UNK_005f793c;
extern "C" unsigned long _UNK_005f7940;
extern "C" unsigned long _UNK_005f7944;
extern "C" unsigned long _UNK_005f7948;
extern "C" unsigned long _UNK_005f794c;
extern "C" unsigned long _UNK_005f7950;
extern "C" unsigned long _UNK_005f7954;
extern "C" unsigned long _UNK_005f7958;
extern "C" unsigned long _UNK_005f795c;
extern "C" unsigned long _UNK_005f7960;
extern "C" unsigned long _UNK_005f7d60;
extern "C" unsigned long _UNK_005f7d64;
extern "C" unsigned long _UNK_005f7d68;
extern "C" unsigned long _UNK_005f7d6c;
extern "C" unsigned long _UNK_005f7d70;
extern "C" unsigned long _UNK_005f7d74;
extern "C" unsigned long _UNK_005f7d78;
extern "C" unsigned long _UNK_005f7d7c;
extern "C" unsigned long _UNK_005f7d80;
extern "C" unsigned long _UNK_005f7d84;
extern "C" unsigned long _UNK_005f7d88;
extern "C" unsigned long _UNK_005f7d8c;
extern "C" unsigned long _UNK_005f7d90;
extern "C" unsigned long _UNK_005f7d94;
extern "C" unsigned long _UNK_005f7d98;
extern "C" unsigned long _UNK_005f7d9c;
extern "C" unsigned long _UNK_005f7da0;
extern "C" unsigned long _UNK_005f8198;
extern "C" unsigned long _UNK_005f819c;
extern "C" unsigned long _UNK_005f81a0;
extern "C" unsigned long _UNK_005f81a4;
extern "C" unsigned long _UNK_005f81a8;
extern "C" unsigned long _UNK_005f81ac;
extern "C" unsigned long _UNK_005f81b0;
extern "C" unsigned long _UNK_005f81b4;
extern "C" unsigned long _UNK_005f81b8;
extern "C" unsigned long _UNK_005f81bc;
extern "C" unsigned long _UNK_005f81c0;
extern "C" unsigned long _UNK_005f81c4;
extern "C" unsigned long _UNK_005f81c8;
extern "C" unsigned long _UNK_005f81cc;
extern "C" unsigned long _UNK_005f81d0;
extern "C" unsigned long _UNK_005f81d4;
extern "C" unsigned long _UNK_005f81d8;
extern "C" unsigned long _UNK_005f81dc;
extern "C" unsigned long _UNK_005f81e0;
extern "C" unsigned long _UNK_005f81e4;
extern "C" unsigned long _UNK_005f8344;
extern "C" unsigned long _UNK_005f8348;
extern "C" unsigned long _UNK_005f834c;
extern "C" unsigned long _UNK_005f8350;
extern "C" unsigned long g_005f732c;
extern "C" unsigned long g_005f7370;
extern "C" unsigned long g_005f73a0;
extern "C" unsigned long g_005f73a4;
extern "C" unsigned long g_005f73b4;
extern "C" unsigned long g_005f73b8;
extern "C" unsigned long g_005f73dc;
extern "C" unsigned long g_005f73e0;
extern "C" unsigned long g_005f7424;
extern "C" unsigned long g_005f7452;
extern "C" unsigned long g_005f747c;
extern "C" unsigned long g_005f7480;
extern "C" unsigned long g_005f7540;
extern "C" unsigned long g_005f7634;
extern "C" unsigned long g_005f7666;
extern "C" unsigned long g_005f7738;
extern "C" unsigned long g_005f776c;
extern "C" unsigned long g_005f7838;
extern "C" unsigned long g_005f786a;
extern "C" unsigned long g_005f7924;
extern "C" unsigned long g_005f7928;
extern "C" unsigned long g_005f792c;
extern "C" unsigned long g_005f7930;
extern "C" unsigned long g_005f7934;
extern "C" unsigned long g_005f7938;
extern "C" unsigned long g_005f793c;
extern "C" unsigned long g_005f7940;
extern "C" unsigned long g_005f7944;
extern "C" unsigned long g_005f7948;
extern "C" unsigned long g_005f794c;
extern "C" unsigned long g_005f7950;
extern "C" unsigned long g_005f7954;
extern "C" unsigned long g_005f7958;
extern "C" unsigned long g_005f795c;
extern "C" unsigned long g_005f7960;
extern "C" unsigned long g_005f797e;
extern "C" unsigned long g_005f79a8;
extern "C" unsigned long g_005f7a70;
extern "C" unsigned long g_005f7a9e;
extern "C" unsigned long g_005f7b76;
extern "C" unsigned long g_005f7b9e;
extern "C" unsigned long g_005f7c76;
extern "C" unsigned long g_005f7c9e;
extern "C" unsigned long g_005f7d60;
extern "C" unsigned long g_005f7d64;
extern "C" unsigned long g_005f7d68;
extern "C" unsigned long g_005f7d6c;
extern "C" unsigned long g_005f7d70;
extern "C" unsigned long g_005f7d74;
extern "C" unsigned long g_005f7d78;
extern "C" unsigned long g_005f7d7c;
extern "C" unsigned long g_005f7d80;
extern "C" unsigned long g_005f7d84;
extern "C" unsigned long g_005f7d88;
extern "C" unsigned long g_005f7d8c;
extern "C" unsigned long g_005f7d90;
extern "C" unsigned long g_005f7d94;
extern "C" unsigned long g_005f7d98;
extern "C" unsigned long g_005f7d9c;
extern "C" unsigned long g_005f7da0;
extern "C" unsigned long g_005f7db8;
extern "C" unsigned long g_005f7de2;
extern "C" unsigned long g_005f7e9e;
extern "C" unsigned long g_005f7ec8;
extern "C" unsigned long g_005f7f8c;
extern "C" unsigned long g_005f7fb6;
extern "C" unsigned long g_005f8076;
extern "C" unsigned long g_005f80a0;
extern "C" unsigned long g_005f815c;
extern "C" unsigned long g_005f8198;
extern "C" unsigned long g_005f819c;
extern "C" unsigned long g_005f81a0;
extern "C" unsigned long g_005f81a4;
extern "C" unsigned long g_005f81a8;
extern "C" unsigned long g_005f81ac;
extern "C" unsigned long g_005f81b0;
extern "C" unsigned long g_005f81b4;
extern "C" unsigned long g_005f81b8;
extern "C" unsigned long g_005f81bc;
extern "C" unsigned long g_005f81c0;
extern "C" unsigned long g_005f81c4;
extern "C" unsigned long g_005f81c8;
extern "C" unsigned long g_005f81cc;
extern "C" unsigned long g_005f81d0;
extern "C" unsigned long g_005f81d4;
extern "C" unsigned long g_005f81d8;
extern "C" unsigned long g_005f81dc;
extern "C" unsigned long g_005f81e0;
extern "C" unsigned long g_005f81e4;
extern "C" unsigned long g_005f8344;
extern "C" unsigned long g_005f8348;
extern "C" unsigned long g_005f834c;
extern "C" unsigned long g_005f8350;
BLDebrisItemDataInfoDownView::~BLDebrisItemDataInfoDownView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_005f732c + g_005f73a0);
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
  func_0079e45c(&uStack_14,&g_005f7370 + g_005f73a4,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLDebrisItemDataInfoDownView::BLDebrisItemDataInfoDownView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_005f7424 + g_005f747c);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005f7452 + g_005f7480,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

undefined4 BLDebrisItemDataInfoDownView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x108);
}

undefined4 BLDebrisItemDataInfoDownView::getNumBG()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 BLDebrisItemDataInfoDownView::getBtnSell()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

undefined4 BLDebrisItemDataInfoDownView::getLabSell()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

undefined4 BLDebrisItemDataInfoDownView::getBtnCompose()
{
  return *(undefined4 *)(((int)this) + 0x118);
}

undefined4 BLDebrisItemDataInfoDownView::getLabCompose()
{
  return *(undefined4 *)(((int)this) + 0x11c);
}

undefined4 BLDebrisItemDataInfoDownView::getBtnReduce()
{
  return *(undefined4 *)(((int)this) + 0x120);
}

undefined4 BLDebrisItemDataInfoDownView::getBtnAdd()
{
  return *(undefined4 *)(((int)this) + 0x124);
}

undefined4 BLDebrisItemDataInfoDownView::getBtnMax()
{
  return *(undefined4 *)(((int)this) + 0x128);
}

undefined4 BLDebrisItemDataInfoDownView::getLabNum()
{
  return *(undefined4 *)(((int)this) + 300);
}

undefined4 BLDebrisItemDataInfoDownView::getLabReduce()
{
  return *(undefined4 *)(((int)this) + 0x130);
}

undefined4 BLDebrisItemDataInfoDownView::getLabAdd()
{
  return *(undefined4 *)(((int)this) + 0x134);
}

undefined4 BLDebrisItemDataInfoDownView::getLabMax()
{
  return *(undefined4 *)(((int)this) + 0x138);
}

undefined4 BLDebrisItemDataInfoDownView::getLine()
{
  return *(undefined4 *)(((int)this) + 0x13c);
}


void BLDebrisItemDataInfoDownView::onEnter()
{
  ((BLDebrisItemDataInfoDownPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLDebrisItemDataInfoDownView::onExit()
{
  ((BLDebrisItemDataInfoDownPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
bool BLDebrisItemDataInfoDownView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
