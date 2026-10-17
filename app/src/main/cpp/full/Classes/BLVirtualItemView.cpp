#include "BLVirtualItemView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLVirtualItemPresenter.h"
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
extern "C" unsigned long UNK_00607564;
extern "C" unsigned long UNK_006075a8;
extern "C" unsigned long UNK_006075ec;
extern "C" unsigned long UNK_00607614;
extern "C" unsigned long UNK_0060765c;
extern "C" unsigned long UNK_0060768a;
extern "C" unsigned long UNK_006077be;
extern "C" unsigned long UNK_006077e8;
extern "C" unsigned long UNK_006078ba;
extern "C" unsigned long UNK_006078e4;
extern "C" unsigned long UNK_00607996;
extern "C" unsigned long UNK_00607a38;
extern "C" unsigned long _UNK_006075d8;
extern "C" unsigned long _UNK_006075dc;
extern "C" unsigned long _UNK_006075f0;
extern "C" unsigned long _UNK_00607618;
extern "C" unsigned long _UNK_006076b4;
extern "C" unsigned long _UNK_006076b8;
extern "C" unsigned long _UNK_00607b58;
extern "C" unsigned long _UNK_00607b5c;
extern "C" unsigned long _UNK_00607b60;
extern "C" unsigned long _UNK_00607b64;
extern "C" unsigned long _UNK_00607b68;
extern "C" unsigned long _UNK_00607b6c;
extern "C" unsigned long _UNK_00607b70;
extern "C" unsigned long _UNK_00607b74;
extern "C" unsigned long _UNK_00607b78;
extern "C" unsigned long _UNK_00607b7c;
extern "C" unsigned long _UNK_00607b80;
extern "C" unsigned long _UNK_00607b84;
extern "C" unsigned long _UNK_00607b88;
extern "C" unsigned long g_00607564;
extern "C" unsigned long g_006075a8;
extern "C" unsigned long g_006075d8;
extern "C" unsigned long g_006075dc;
extern "C" unsigned long g_006075ec;
extern "C" unsigned long g_006075f0;
extern "C" unsigned long g_00607614;
extern "C" unsigned long g_00607618;
extern "C" unsigned long g_0060765c;
extern "C" unsigned long g_0060768a;
extern "C" unsigned long g_006076b4;
extern "C" unsigned long g_006076b8;
extern "C" unsigned long g_006077be;
extern "C" unsigned long g_006077e8;
extern "C" unsigned long g_006078ba;
extern "C" unsigned long g_006078e4;
extern "C" unsigned long g_00607996;
extern "C" unsigned long g_00607a38;
extern "C" unsigned long g_00607b58;
extern "C" unsigned long g_00607b5c;
extern "C" unsigned long g_00607b60;
extern "C" unsigned long g_00607b64;
extern "C" unsigned long g_00607b68;
extern "C" unsigned long g_00607b6c;
extern "C" unsigned long g_00607b70;
extern "C" unsigned long g_00607b74;
extern "C" unsigned long g_00607b78;
extern "C" unsigned long g_00607b7c;
extern "C" unsigned long g_00607b80;
extern "C" unsigned long g_00607b84;
extern "C" unsigned long g_00607b88;
BLVirtualItemView::~BLVirtualItemView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_00607564 + g_006075d8);
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
  func_0079e45c(&uStack_14,&g_006075a8 + g_006075dc,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLVirtualItemView::BLVirtualItemView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_0060765c + g_006076b4);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0060768a + g_006076b8,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * BLVirtualItemView::create()
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

undefined4 BLVirtualItemView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x108);
}

undefined4 BLVirtualItemView::getBtnAdd()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 BLVirtualItemView::getLabNum()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

undefined4 BLVirtualItemView::getSprAdd()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

undefined4 BLVirtualItemView::getSprIcon()
{
  return *(undefined4 *)(((int)this) + 0x118);
}

void BLVirtualItemView::onEnter()
{
  ((BLVirtualItemPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLVirtualItemView::onExit()
{
  ((BLVirtualItemPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
bool BLVirtualItemView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
