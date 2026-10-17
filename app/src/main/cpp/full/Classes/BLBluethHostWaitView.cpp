#include "BLBluethHostWaitView.h"
#include "BLBluethHostWaitPresenter.h"
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
extern "C" unsigned long UNK_004faadc;
extern "C" unsigned long UNK_004fab2e;
extern "C" unsigned long UNK_004fab74;
extern "C" unsigned long UNK_004fab9c;
extern "C" unsigned long UNK_004fad48;
extern "C" unsigned long UNK_004fae2a;
extern "C" unsigned long UNK_004faf26;
extern "C" unsigned long UNK_004faf50;
extern "C" unsigned long UNK_004fb022;
extern "C" unsigned long UNK_004fb04c;
extern "C" unsigned long _DAT_004fac54;
extern "C" unsigned long _DAT_004fac58;
extern "C" unsigned long _UNK_004fab60;
extern "C" unsigned long _UNK_004fab64;
extern "C" unsigned long _UNK_004fab78;
extern "C" unsigned long _UNK_004faba0;
extern "C" unsigned long _UNK_004fb12c;
extern "C" unsigned long _UNK_004fb130;
extern "C" unsigned long _UNK_004fb134;
extern "C" unsigned long _UNK_004fb138;
extern "C" unsigned long _UNK_004fb13c;
extern "C" unsigned long _UNK_004fb140;
extern "C" unsigned long _UNK_004fb144;
extern "C" unsigned long _UNK_004fb148;
extern "C" unsigned long _UNK_004fb14c;
extern "C" unsigned long _UNK_004fb150;
extern "C" unsigned long _UNK_004fb154;
extern "C" unsigned long _UNK_004fb158;
extern "C" unsigned long _UNK_004fb15c;
extern "C" unsigned long _UNK_004fb160;
extern "C" unsigned long g_004faadc;
extern "C" unsigned long g_004fab2e;
extern "C" unsigned long g_004fab60;
extern "C" unsigned long g_004fab64;
extern "C" unsigned long g_004fab74;
extern "C" unsigned long g_004fab78;
extern "C" unsigned long g_004fab9c;
extern "C" unsigned long g_004faba0;
extern "C" unsigned long g_004fac54;
extern "C" unsigned long g_004fac58;
extern "C" unsigned long g_004fad48;
extern "C" unsigned long g_004fae2a;
extern "C" unsigned long g_004faf26;
extern "C" unsigned long g_004faf50;
extern "C" unsigned long g_004fb022;
extern "C" unsigned long g_004fb04c;
extern "C" unsigned long g_004fb12c;
extern "C" unsigned long g_004fb130;
extern "C" unsigned long g_004fb134;
extern "C" unsigned long g_004fb138;
extern "C" unsigned long g_004fb13c;
extern "C" unsigned long g_004fb140;
extern "C" unsigned long g_004fb144;
extern "C" unsigned long g_004fb148;
extern "C" unsigned long g_004fb14c;
extern "C" unsigned long g_004fb150;
extern "C" unsigned long g_004fb154;
extern "C" unsigned long g_004fb158;
extern "C" unsigned long g_004fb15c;
extern "C" unsigned long g_004fb160;
BLBluethHostWaitView::~BLBluethHostWaitView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_004faadc + g_004fab60);
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
  func_0079e45c(&uStack_14,&g_004fab2e + g_004fab64,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}


int * BLBluethHostWaitView::create()
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

undefined4 BLBluethHostWaitView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 BLBluethHostWaitView::getBackGround()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

undefined4 BLBluethHostWaitView::getTabBg()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

undefined4 BLBluethHostWaitView::getBtnClose()
{
  return *(undefined4 *)(((int)this) + 0x118);
}

void BLBluethHostWaitView::onEnter()
{
  ((BLBluethHostWaitPresenter *)*(undefined4 *)(((int)this) + 0x10c))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLBluethHostWaitView::onExit()
{
  ((BLBluethHostWaitPresenter *)*(undefined4 *)(((int)this) + 0x10c))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (2) =====
BLBluethHostWaitView::BLBluethHostWaitView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = (undefined4)(intptr_t)(*(int *)(g_004fac54 + 0x4fabe4));
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
  func_0079e45c(&uStack_14,((intptr_t)"BLBluethHostWaitView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

bool BLBluethHostWaitView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
