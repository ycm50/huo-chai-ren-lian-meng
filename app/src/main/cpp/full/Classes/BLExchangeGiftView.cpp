#include "BLExchangeGiftView.h"
#include "BLExchangeGiftPresenter.h"
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
extern "C" long long func_0079e5fc(...);
extern "C" long long ghidra_CONCAT13(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_00550454;
extern "C" unsigned long UNK_005504a6;
extern "C" unsigned long UNK_005504ec;
extern "C" unsigned long UNK_00550514;
extern "C" unsigned long UNK_005506ce;
extern "C" unsigned long UNK_005507b0;
extern "C" unsigned long UNK_005508ac;
extern "C" unsigned long UNK_005508d8;
extern "C" unsigned long UNK_005509aa;
extern "C" unsigned long UNK_005509de;
extern "C" unsigned long UNK_00550a90;
extern "C" unsigned long UNK_00550b02;
extern "C" unsigned long UNK_00550bc0;
extern "C" unsigned long UNK_00550bea;
extern "C" unsigned long UNK_00550cbc;
extern "C" unsigned long UNK_00550ce6;
extern "C" unsigned long UNK_00550d90;
extern "C" unsigned long UNK_00550de8;
extern "C" unsigned long _DAT_005505cc;
extern "C" unsigned long _DAT_005505d0;
extern "C" unsigned long _UNK_005504d8;
extern "C" unsigned long _UNK_005504dc;
extern "C" unsigned long _UNK_005504f0;
extern "C" unsigned long _UNK_00550518;
extern "C" unsigned long _UNK_00550ab0;
extern "C" unsigned long _UNK_00550ab4;
extern "C" unsigned long _UNK_00550ab8;
extern "C" unsigned long _UNK_00550abc;
extern "C" unsigned long _UNK_00550ac0;
extern "C" unsigned long _UNK_00550ac4;
extern "C" unsigned long _UNK_00550ac8;
extern "C" unsigned long _UNK_00550acc;
extern "C" unsigned long _UNK_00550ad0;
extern "C" unsigned long _UNK_00550ad4;
extern "C" unsigned long _UNK_00550ad8;
extern "C" unsigned long _UNK_00550adc;
extern "C" unsigned long _UNK_00550ae0;
extern "C" unsigned long _UNK_00550ae4;
extern "C" unsigned long _UNK_00550ae8;
extern "C" unsigned long _UNK_00550ed4;
extern "C" unsigned long _UNK_00550ed8;
extern "C" unsigned long _UNK_00550edc;
extern "C" unsigned long _UNK_00550ee0;
extern "C" unsigned long _UNK_00550ee4;
extern "C" unsigned long _UNK_00550ee8;
extern "C" unsigned long _UNK_00550eec;
extern "C" unsigned long _UNK_00550ef0;
extern "C" unsigned long _UNK_00550ef4;
extern "C" unsigned long _UNK_00550ef8;
extern "C" unsigned long _UNK_00550efc;
extern "C" unsigned long _UNK_00550f00;
extern "C" unsigned long _UNK_00550f04;
extern "C" unsigned long _UNK_00550f08;
extern "C" unsigned long _UNK_00550f0c;
extern "C" unsigned long _UNK_00550f10;
extern "C" unsigned long _UNK_00550f14;
extern "C" unsigned long _UNK_00550f18;
extern "C" unsigned long _UNK_00550f1c;
extern "C" unsigned long g_00550454;
extern "C" unsigned long g_005504a6;
extern "C" unsigned long g_005504d8;
extern "C" unsigned long g_005504dc;
extern "C" unsigned long g_005504ec;
extern "C" unsigned long g_005504f0;
extern "C" unsigned long g_00550514;
extern "C" unsigned long g_00550518;
extern "C" unsigned long g_005505cc;
extern "C" unsigned long g_005505d0;
extern "C" unsigned long g_005506ce;
extern "C" unsigned long g_005507b0;
extern "C" unsigned long g_005508ac;
extern "C" unsigned long g_005508d8;
extern "C" unsigned long g_005509aa;
extern "C" unsigned long g_005509de;
extern "C" unsigned long g_00550a90;
extern "C" unsigned long g_00550ab0;
extern "C" unsigned long g_00550ab4;
extern "C" unsigned long g_00550ab8;
extern "C" unsigned long g_00550abc;
extern "C" unsigned long g_00550ac0;
extern "C" unsigned long g_00550ac4;
extern "C" unsigned long g_00550ac8;
extern "C" unsigned long g_00550acc;
extern "C" unsigned long g_00550ad0;
extern "C" unsigned long g_00550ad4;
extern "C" unsigned long g_00550ad8;
extern "C" unsigned long g_00550adc;
extern "C" unsigned long g_00550ae0;
extern "C" unsigned long g_00550ae4;
extern "C" unsigned long g_00550ae8;
extern "C" unsigned long g_00550b02;
extern "C" unsigned long g_00550bc0;
extern "C" unsigned long g_00550bea;
extern "C" unsigned long g_00550cbc;
extern "C" unsigned long g_00550ce6;
extern "C" unsigned long g_00550d90;
extern "C" unsigned long g_00550de8;
extern "C" unsigned long g_00550ed4;
extern "C" unsigned long g_00550ed8;
extern "C" unsigned long g_00550edc;
extern "C" unsigned long g_00550ee0;
extern "C" unsigned long g_00550ee4;
extern "C" unsigned long g_00550ee8;
extern "C" unsigned long g_00550eec;
extern "C" unsigned long g_00550ef0;
extern "C" unsigned long g_00550ef4;
extern "C" unsigned long g_00550ef8;
extern "C" unsigned long g_00550efc;
extern "C" unsigned long g_00550f00;
extern "C" unsigned long g_00550f04;
extern "C" unsigned long g_00550f08;
extern "C" unsigned long g_00550f0c;
extern "C" unsigned long g_00550f10;
extern "C" unsigned long g_00550f14;
extern "C" unsigned long g_00550f18;
extern "C" unsigned long g_00550f1c;
BLExchangeGiftView::~BLExchangeGiftView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_00550454 + g_005504d8);
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
  func_0079e45c(&uStack_14,&g_005504a6 + g_005504dc,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}


int * BLExchangeGiftView::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x124)));
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

undefined4 BLExchangeGiftView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 BLExchangeGiftView::getBackGround()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

undefined4 BLExchangeGiftView::getTabBg()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

undefined4 BLExchangeGiftView::getBtnClose()
{
  return *(undefined4 *)(((int)this) + 0x118);
}

undefined4 BLExchangeGiftView::getBtnSure()
{
  return *(undefined4 *)(((int)this) + 0x11c);
}

undefined4 BLExchangeGiftView::textField_Exchange()
{
  return *(undefined4 *)(((int)this) + 0x120);
}

void BLExchangeGiftView::onEnter()
{
  ((BLExchangeGiftPresenter *)*(undefined4 *)(((int)this) + 0x10c))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLExchangeGiftView::onExit()
{
  ((BLExchangeGiftPresenter *)*(undefined4 *)(((int)this) + 0x10c))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (2) =====
BLExchangeGiftView::BLExchangeGiftView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = (undefined4)(intptr_t)(*(int *)(g_005505cc + 0x55055c));
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
  func_0079e45c(&uStack_14,((intptr_t)"BLExchangeGiftView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

bool BLExchangeGiftView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
