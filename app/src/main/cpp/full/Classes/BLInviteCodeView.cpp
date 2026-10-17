#include "BLInviteCodeView.h"
#include "BLInviteCodePresenter.h"
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
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e57c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0062dc68;
extern "C" unsigned long UNK_0062dcac;
extern "C" unsigned long UNK_0062dcf0;
extern "C" unsigned long UNK_0062dd18;
extern "C" unsigned long UNK_0062dd60;
extern "C" unsigned long UNK_0062dd8e;
extern "C" unsigned long UNK_0062deca;
extern "C" unsigned long UNK_0062dfac;
extern "C" unsigned long UNK_0062e094;
extern "C" unsigned long UNK_0062e13c;
extern "C" unsigned long UNK_0062e140;
extern "C" unsigned long UNK_0062e220;
extern "C" unsigned long UNK_0062e33a;
extern "C" unsigned long UNK_0062e43c;
extern "C" unsigned long UNK_0062e544;
extern "C" unsigned long UNK_0062e546;
extern "C" unsigned long UNK_0062e62c;
extern "C" unsigned long UNK_0062e764;
extern "C" unsigned long UNK_0062e86c;
extern "C" unsigned long UNK_0062e870;
extern "C" unsigned long UNK_0062e97c;
extern "C" unsigned long UNK_0062ea86;
extern "C" unsigned long UNK_0062eb96;
extern "C" unsigned long UNK_0062ecae;
extern "C" unsigned long UNK_0062ecb0;
extern "C" unsigned long UNK_0062ed52;
extern "C" unsigned long UNK_0062edfc;
extern "C" unsigned long UNK_0062edfe;
extern "C" unsigned long _UNK_0062dcdc;
extern "C" unsigned long _UNK_0062dce0;
extern "C" unsigned long _UNK_0062dcf4;
extern "C" unsigned long _UNK_0062dd1c;
extern "C" unsigned long _UNK_0062ddb8;
extern "C" unsigned long _UNK_0062ddbc;
extern "C" unsigned long _UNK_0062e2ac;
extern "C" unsigned long _UNK_0062e2b0;
extern "C" unsigned long _UNK_0062e2b4;
extern "C" unsigned long _UNK_0062e2b8;
extern "C" unsigned long _UNK_0062e2bc;
extern "C" unsigned long _UNK_0062e2c0;
extern "C" unsigned long _UNK_0062e2c4;
extern "C" unsigned long _UNK_0062e2c8;
extern "C" unsigned long _UNK_0062e2cc;
extern "C" unsigned long _UNK_0062e2d0;
extern "C" unsigned long _UNK_0062e2d4;
extern "C" unsigned long _UNK_0062e2d8;
extern "C" unsigned long _UNK_0062e2dc;
extern "C" unsigned long _UNK_0062e2e0;
extern "C" unsigned long _UNK_0062e2e4;
extern "C" unsigned long _UNK_0062e2e8;
extern "C" unsigned long _UNK_0062e6dc;
extern "C" unsigned long _UNK_0062e6e0;
extern "C" unsigned long _UNK_0062e6e4;
extern "C" unsigned long _UNK_0062e6e8;
extern "C" unsigned long _UNK_0062e6ec;
extern "C" unsigned long _UNK_0062e6f0;
extern "C" unsigned long _UNK_0062e6f4;
extern "C" unsigned long _UNK_0062e6f8;
extern "C" unsigned long _UNK_0062e6fc;
extern "C" unsigned long _UNK_0062e700;
extern "C" unsigned long _UNK_0062e704;
extern "C" unsigned long _UNK_0062e708;
extern "C" unsigned long _UNK_0062e70c;
extern "C" unsigned long _UNK_0062e710;
extern "C" unsigned long _UNK_0062e714;
extern "C" unsigned long _UNK_0062eb08;
extern "C" unsigned long _UNK_0062eb0c;
extern "C" unsigned long _UNK_0062eb10;
extern "C" unsigned long _UNK_0062eb14;
extern "C" unsigned long _UNK_0062eb18;
extern "C" unsigned long _UNK_0062eb1c;
extern "C" unsigned long _UNK_0062eb20;
extern "C" unsigned long _UNK_0062eb24;
extern "C" unsigned long _UNK_0062eb28;
extern "C" unsigned long _UNK_0062eb2c;
extern "C" unsigned long _UNK_0062eb30;
extern "C" unsigned long _UNK_0062eef8;
extern "C" unsigned long _UNK_0062eefc;
extern "C" unsigned long _UNK_0062ef00;
extern "C" unsigned long _UNK_0062ef04;
extern "C" unsigned long _UNK_0062ef08;
extern "C" unsigned long _UNK_0062ef0c;
extern "C" unsigned long _UNK_0062ef10;
extern "C" unsigned long _UNK_0062ef14;
extern "C" unsigned long _UNK_0062ef18;
extern "C" unsigned long _UNK_0062ef1c;
extern "C" unsigned long g_0062dc68;
extern "C" unsigned long g_0062dcac;
extern "C" unsigned long g_0062dcdc;
extern "C" unsigned long g_0062dce0;
extern "C" unsigned long g_0062dcf0;
extern "C" unsigned long g_0062dcf4;
extern "C" unsigned long g_0062dd18;
extern "C" unsigned long g_0062dd1c;
extern "C" unsigned long g_0062dd60;
extern "C" unsigned long g_0062dd8e;
extern "C" unsigned long g_0062ddb8;
extern "C" unsigned long g_0062ddbc;
extern "C" unsigned long g_0062deca;
extern "C" unsigned long g_0062dfac;
extern "C" unsigned long g_0062e094;
extern "C" unsigned long g_0062e13c;
extern "C" unsigned long g_0062e140;
extern "C" unsigned long g_0062e220;
extern "C" unsigned long g_0062e2ac;
extern "C" unsigned long g_0062e2b0;
extern "C" unsigned long g_0062e2b4;
extern "C" unsigned long g_0062e2b8;
extern "C" unsigned long g_0062e2bc;
extern "C" unsigned long g_0062e2c0;
extern "C" unsigned long g_0062e2c4;
extern "C" unsigned long g_0062e2c8;
extern "C" unsigned long g_0062e2cc;
extern "C" unsigned long g_0062e2d0;
extern "C" unsigned long g_0062e2d4;
extern "C" unsigned long g_0062e2d8;
extern "C" unsigned long g_0062e2dc;
extern "C" unsigned long g_0062e2e0;
extern "C" unsigned long g_0062e2e4;
extern "C" unsigned long g_0062e2e8;
extern "C" unsigned long g_0062e33a;
extern "C" unsigned long g_0062e43c;
extern "C" unsigned long g_0062e544;
extern "C" unsigned long g_0062e546;
extern "C" unsigned long g_0062e62c;
extern "C" unsigned long g_0062e6dc;
extern "C" unsigned long g_0062e6e0;
extern "C" unsigned long g_0062e6e4;
extern "C" unsigned long g_0062e6e8;
extern "C" unsigned long g_0062e6ec;
extern "C" unsigned long g_0062e6f0;
extern "C" unsigned long g_0062e6f4;
extern "C" unsigned long g_0062e6f8;
extern "C" unsigned long g_0062e6fc;
extern "C" unsigned long g_0062e700;
extern "C" unsigned long g_0062e704;
extern "C" unsigned long g_0062e708;
extern "C" unsigned long g_0062e70c;
extern "C" unsigned long g_0062e710;
extern "C" unsigned long g_0062e714;
extern "C" unsigned long g_0062e764;
extern "C" unsigned long g_0062e86c;
extern "C" unsigned long g_0062e870;
extern "C" unsigned long g_0062e97c;
extern "C" unsigned long g_0062ea86;
extern "C" unsigned long g_0062eb08;
extern "C" unsigned long g_0062eb0c;
extern "C" unsigned long g_0062eb10;
extern "C" unsigned long g_0062eb14;
extern "C" unsigned long g_0062eb18;
extern "C" unsigned long g_0062eb1c;
extern "C" unsigned long g_0062eb20;
extern "C" unsigned long g_0062eb24;
extern "C" unsigned long g_0062eb28;
extern "C" unsigned long g_0062eb2c;
extern "C" unsigned long g_0062eb30;
extern "C" unsigned long g_0062eb96;
extern "C" unsigned long g_0062ecae;
extern "C" unsigned long g_0062ecb0;
extern "C" unsigned long g_0062ed52;
extern "C" unsigned long g_0062edfc;
extern "C" unsigned long g_0062edfe;
extern "C" unsigned long g_0062eef8;
extern "C" unsigned long g_0062eefc;
extern "C" unsigned long g_0062ef00;
extern "C" unsigned long g_0062ef04;
extern "C" unsigned long g_0062ef08;
extern "C" unsigned long g_0062ef0c;
extern "C" unsigned long g_0062ef10;
extern "C" unsigned long g_0062ef14;
extern "C" unsigned long g_0062ef18;
extern "C" unsigned long g_0062ef1c;
BLInviteCodeView::~BLInviteCodeView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0062dc68 + g_0062dcdc);
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
  func_0079e45c(&uStack_14,&g_0062dcac + g_0062dce0,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLInviteCodeView::BLInviteCodeView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_0062dd60 + g_0062ddb8);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0062dd8e + g_0062ddbc,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * BLInviteCodeView::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(300)));
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

undefined4 BLInviteCodeView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x108);
}

undefined4 BLInviteCodeView::getBackGround()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

undefined4 BLInviteCodeView::getTabBg()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 BLInviteCodeView::getLabTitle()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

undefined4 BLInviteCodeView::getLabGuize()
{
  return *(undefined4 *)(((int)this) + 0x118);
}

undefined4 BLInviteCodeView::getBtnClose()
{
  return *(undefined4 *)(((int)this) + 0x11c);
}

undefined4 BLInviteCodeView::getBtnCopy()
{
  return *(undefined4 *)(((int)this) + 0x120);
}

undefined4 BLInviteCodeView::getBtnFillInCode()
{
  return *(undefined4 *)(((int)this) + 0x124);
}

undefined4 BLInviteCodeView::getScrollview()
{
  return *(undefined4 *)(((int)this) + 0x128);
}

void BLInviteCodeView::onEnter()
{
  ((BLInviteCodePresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLInviteCodeView::onExit()
{
  ((BLInviteCodePresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
bool BLInviteCodeView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
