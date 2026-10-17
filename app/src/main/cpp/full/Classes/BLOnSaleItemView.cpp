#include "BLOnSaleItemView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLOnSaleItemPresenter.h"
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
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e59c(...);
extern "C" long long ghidra_CONCAT13(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_005e8074;
extern "C" unsigned long UNK_005e80a6;
extern "C" unsigned long UNK_005e8100;
extern "C" unsigned long UNK_005e8128;
extern "C" unsigned long UNK_005e8140;
extern "C" unsigned long UNK_005e816e;
extern "C" unsigned long UNK_005e81ae;
extern "C" unsigned long UNK_005e8248;
extern "C" unsigned long UNK_005e82ea;
extern "C" unsigned long UNK_005e8396;
extern "C" unsigned long UNK_005e8428;
extern "C" unsigned long UNK_005e842a;
extern "C" unsigned long UNK_005e84e4;
extern "C" unsigned long UNK_005e85d0;
extern "C" unsigned long UNK_005e85fa;
extern "C" unsigned long UNK_005e86ca;
extern "C" unsigned long UNK_005e86f4;
extern "C" unsigned long UNK_005e87b2;
extern "C" unsigned long UNK_005e87e6;
extern "C" unsigned long UNK_005e88a6;
extern "C" unsigned long UNK_005e88d0;
extern "C" unsigned long UNK_005e8908;
extern "C" unsigned long UNK_005e8986;
extern "C" unsigned long UNK_005e89fa;
extern "C" unsigned long UNK_005e8a36;
extern "C" unsigned long UNK_005e8ab8;
extern "C" unsigned long UNK_005e8ae2;
extern "C" unsigned long UNK_005e8b98;
extern "C" unsigned long UNK_005e8c86;
extern "C" unsigned long UNK_005e8d72;
extern "C" unsigned long UNK_005e8e96;
extern "C" unsigned long _UNK_005e80ec;
extern "C" unsigned long _UNK_005e80f0;
extern "C" unsigned long _UNK_005e8104;
extern "C" unsigned long _UNK_005e812c;
extern "C" unsigned long _UNK_005e8198;
extern "C" unsigned long _UNK_005e819c;
extern "C" unsigned long _UNK_005e8590;
extern "C" unsigned long _UNK_005e8594;
extern "C" unsigned long _UNK_005e8598;
extern "C" unsigned long _UNK_005e859c;
extern "C" unsigned long _UNK_005e85a0;
extern "C" unsigned long _UNK_005e85a4;
extern "C" unsigned long _UNK_005e85a8;
extern "C" unsigned long _UNK_005e85ac;
extern "C" unsigned long _UNK_005e85b0;
extern "C" unsigned long _UNK_005e85b4;
extern "C" unsigned long _UNK_005e85b8;
extern "C" unsigned long _UNK_005e85bc;
extern "C" unsigned long _UNK_005e85c0;
extern "C" unsigned long _UNK_005e85c4;
extern "C" unsigned long _UNK_005e89a8;
extern "C" unsigned long _UNK_005e89ac;
extern "C" unsigned long _UNK_005e89b0;
extern "C" unsigned long _UNK_005e89b4;
extern "C" unsigned long _UNK_005e89b8;
extern "C" unsigned long _UNK_005e89bc;
extern "C" unsigned long _UNK_005e89c0;
extern "C" unsigned long _UNK_005e89c4;
extern "C" unsigned long _UNK_005e89c8;
extern "C" unsigned long _UNK_005e89cc;
extern "C" unsigned long _UNK_005e89d0;
extern "C" unsigned long _UNK_005e89d4;
extern "C" unsigned long _UNK_005e89d8;
extern "C" unsigned long _UNK_005e89dc;
extern "C" unsigned long _UNK_005e89e0;
extern "C" unsigned long _UNK_005e89e4;
extern "C" unsigned long _UNK_005e89e8;
extern "C" unsigned long _UNK_005e89ec;
extern "C" unsigned long _UNK_005e8ddc;
extern "C" unsigned long _UNK_005e8de0;
extern "C" unsigned long _UNK_005e8de4;
extern "C" unsigned long _UNK_005e8de8;
extern "C" unsigned long _UNK_005e8dec;
extern "C" unsigned long _UNK_005e8df0;
extern "C" unsigned long _UNK_005e8df4;
extern "C" unsigned long _UNK_005e8df8;
extern "C" unsigned long _UNK_005e8dfc;
extern "C" unsigned long _UNK_005e8e00;
extern "C" unsigned long _UNK_005e8e04;
extern "C" unsigned long _UNK_005e8e08;
extern "C" unsigned long _UNK_005e8e0c;
extern "C" unsigned long _UNK_005e8e10;
extern "C" unsigned long _UNK_005e9014;
extern "C" unsigned long _UNK_005e9018;
extern "C" unsigned long _UNK_005e901c;
extern "C" unsigned long _UNK_005e9020;
extern "C" unsigned long _UNK_005e9024;
extern "C" unsigned long g_005e8074;
extern "C" unsigned long g_005e80a6;
extern "C" unsigned long g_005e80ec;
extern "C" unsigned long g_005e80f0;
extern "C" unsigned long g_005e8100;
extern "C" unsigned long g_005e8104;
extern "C" unsigned long g_005e8128;
extern "C" unsigned long g_005e812c;
extern "C" unsigned long g_005e8140;
extern "C" unsigned long g_005e816e;
extern "C" unsigned long g_005e8198;
extern "C" unsigned long g_005e819c;
extern "C" unsigned long g_005e81ae;
extern "C" unsigned long g_005e8248;
extern "C" unsigned long g_005e82ea;
extern "C" unsigned long g_005e8396;
extern "C" unsigned long g_005e8428;
extern "C" unsigned long g_005e842a;
extern "C" unsigned long g_005e84e4;
extern "C" unsigned long g_005e8590;
extern "C" unsigned long g_005e8594;
extern "C" unsigned long g_005e8598;
extern "C" unsigned long g_005e859c;
extern "C" unsigned long g_005e85a0;
extern "C" unsigned long g_005e85a4;
extern "C" unsigned long g_005e85a8;
extern "C" unsigned long g_005e85ac;
extern "C" unsigned long g_005e85b0;
extern "C" unsigned long g_005e85b4;
extern "C" unsigned long g_005e85b8;
extern "C" unsigned long g_005e85bc;
extern "C" unsigned long g_005e85c0;
extern "C" unsigned long g_005e85c4;
extern "C" unsigned long g_005e85d0;
extern "C" unsigned long g_005e85fa;
extern "C" unsigned long g_005e86ca;
extern "C" unsigned long g_005e86f4;
extern "C" unsigned long g_005e87b2;
extern "C" unsigned long g_005e87e6;
extern "C" unsigned long g_005e88a6;
extern "C" unsigned long g_005e88d0;
extern "C" unsigned long g_005e8908;
extern "C" unsigned long g_005e8986;
extern "C" unsigned long g_005e89a8;
extern "C" unsigned long g_005e89ac;
extern "C" unsigned long g_005e89b0;
extern "C" unsigned long g_005e89b4;
extern "C" unsigned long g_005e89b8;
extern "C" unsigned long g_005e89bc;
extern "C" unsigned long g_005e89c0;
extern "C" unsigned long g_005e89c4;
extern "C" unsigned long g_005e89c8;
extern "C" unsigned long g_005e89cc;
extern "C" unsigned long g_005e89d0;
extern "C" unsigned long g_005e89d4;
extern "C" unsigned long g_005e89d8;
extern "C" unsigned long g_005e89dc;
extern "C" unsigned long g_005e89e0;
extern "C" unsigned long g_005e89e4;
extern "C" unsigned long g_005e89e8;
extern "C" unsigned long g_005e89ec;
extern "C" unsigned long g_005e89fa;
extern "C" unsigned long g_005e8a36;
extern "C" unsigned long g_005e8ab8;
extern "C" unsigned long g_005e8ae2;
extern "C" unsigned long g_005e8b98;
extern "C" unsigned long g_005e8c86;
extern "C" unsigned long g_005e8d72;
extern "C" unsigned long g_005e8ddc;
extern "C" unsigned long g_005e8de0;
extern "C" unsigned long g_005e8de4;
extern "C" unsigned long g_005e8de8;
extern "C" unsigned long g_005e8dec;
extern "C" unsigned long g_005e8df0;
extern "C" unsigned long g_005e8df4;
extern "C" unsigned long g_005e8df8;
extern "C" unsigned long g_005e8dfc;
extern "C" unsigned long g_005e8e00;
extern "C" unsigned long g_005e8e04;
extern "C" unsigned long g_005e8e08;
extern "C" unsigned long g_005e8e0c;
extern "C" unsigned long g_005e8e10;
extern "C" unsigned long g_005e8e96;
extern "C" unsigned long g_005e9014;
extern "C" unsigned long g_005e9018;
extern "C" unsigned long g_005e901c;
extern "C" unsigned long g_005e9020;
extern "C" unsigned long g_005e9024;
int * BLOnSaleItemView::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x144)));
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

BLOnSaleItemView::~BLOnSaleItemView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_005e8074 + g_005e80ec);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005e80a6 + g_005e80f0,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  if (*(int *)((int)this + 4*(0x42)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x42)) = 0;
  }
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLOnSaleItemView::BLOnSaleItemView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_005e8140 + g_005e8198);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005e816e + g_005e819c,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}


undefined4 BLOnSaleItemView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x108);
}

undefined4 BLOnSaleItemView::getBtnInfo()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 BLOnSaleItemView::getBtnBuy()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

undefined4 BLOnSaleItemView::getSprIcon()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

undefined4 BLOnSaleItemView::getSpDebris()
{
  return *(undefined4 *)(((int)this) + 0x118);
}

undefined4 BLOnSaleItemView::getLabItemName()
{
  return *(undefined4 *)(((int)this) + 0x120);
}

undefined4 BLOnSaleItemView::getLabLimit()
{
  return *(undefined4 *)(((int)this) + 0x124);
}

undefined4 BLOnSaleItemView::getLabMonthLv()
{
  return *(undefined4 *)(((int)this) + 0x128);
}

undefined4 BLOnSaleItemView::getLabPrice()
{
  return *(undefined4 *)(((int)this) + 300);
}

undefined4 BLOnSaleItemView::getLabStar()
{
  return *(undefined4 *)(((int)this) + 0x130);
}

bool BLOnSaleItemView::init()
{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = ((cocos2d::CCLayer *)this)->init();
  if (iVar1 != 0) {
    BLOnSaleItemView::initUI();
    uVar2 = (undefined4)(((BLOnSaleItemPresenter *)this)->create());
    *(undefined4 *)(((int)this) + 0x108) = uVar2;
    ((cocos2d::CCObject *)this)->retain();
    ((BLOnSaleItemPresenter *)*(undefined4 *)(((int)this) + 0x108))->initWithView((BLOnSaleItemView*)((int)this));
  }
  return iVar1;
}

void BLOnSaleItemView::onEnter()
{
  ((BLOnSaleItemPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLOnSaleItemView::onExit()
{
  ((BLOnSaleItemPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
void BLOnSaleItemView::initUI()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
