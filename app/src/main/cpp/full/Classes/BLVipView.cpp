#include "BLVipView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLVipPresenter.h"
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
extern "C" unsigned long UNK_0055932c;
extern "C" unsigned long UNK_0055937e;
extern "C" unsigned long UNK_005593c4;
extern "C" unsigned long UNK_005593ec;
extern "C" unsigned long UNK_005595c2;
extern "C" unsigned long UNK_00559670;
extern "C" unsigned long UNK_005596a0;
extern "C" unsigned long UNK_00559776;
extern "C" unsigned long UNK_005597aa;
extern "C" unsigned long UNK_0055987a;
extern "C" unsigned long UNK_005598ac;
extern "C" unsigned long UNK_0055997e;
extern "C" unsigned long UNK_005599f4;
extern "C" unsigned long UNK_00559ab8;
extern "C" unsigned long UNK_00559ae2;
extern "C" unsigned long UNK_00559b9c;
extern "C" unsigned long UNK_00559bc6;
extern "C" unsigned long UNK_00559c72;
extern "C" unsigned long UNK_00559d0c;
extern "C" unsigned long UNK_00559db0;
extern "C" unsigned long UNK_00559ea6;
extern "C" unsigned long UNK_00559f9c;
extern "C" unsigned long UNK_00559fc6;
extern "C" unsigned long UNK_0055a068;
extern "C" unsigned long UNK_0055a084;
extern "C" unsigned long UNK_0055a11c;
extern "C" unsigned long UNK_0055a1b6;
extern "C" unsigned long UNK_0055a290;
extern "C" unsigned long UNK_0055a328;
extern "C" unsigned long UNK_0055a3be;
extern "C" unsigned long UNK_0055a460;
extern "C" unsigned long UNK_0055a48c;
extern "C" unsigned long UNK_0055a550;
extern "C" unsigned long UNK_0055a584;
extern "C" unsigned long UNK_0055a646;
extern "C" unsigned long UNK_0055a6ac;
extern "C" unsigned long UNK_0055a766;
extern "C" unsigned long _DAT_005594a4;
extern "C" unsigned long _DAT_005594a8;
extern "C" unsigned long _UNK_005593b0;
extern "C" unsigned long _UNK_005593b4;
extern "C" unsigned long _UNK_005593c8;
extern "C" unsigned long _UNK_005593f0;
extern "C" unsigned long _UNK_005599a0;
extern "C" unsigned long _UNK_005599a4;
extern "C" unsigned long _UNK_005599a8;
extern "C" unsigned long _UNK_005599ac;
extern "C" unsigned long _UNK_005599b0;
extern "C" unsigned long _UNK_005599b4;
extern "C" unsigned long _UNK_005599b8;
extern "C" unsigned long _UNK_005599bc;
extern "C" unsigned long _UNK_005599c0;
extern "C" unsigned long _UNK_005599c4;
extern "C" unsigned long _UNK_005599c8;
extern "C" unsigned long _UNK_005599cc;
extern "C" unsigned long _UNK_005599d0;
extern "C" unsigned long _UNK_005599d4;
extern "C" unsigned long _UNK_005599d8;
extern "C" unsigned long _UNK_005599dc;
extern "C" unsigned long _UNK_005599e0;
extern "C" unsigned long _UNK_00559dd0;
extern "C" unsigned long _UNK_00559dd4;
extern "C" unsigned long _UNK_00559dd8;
extern "C" unsigned long _UNK_00559ddc;
extern "C" unsigned long _UNK_00559de0;
extern "C" unsigned long _UNK_00559de4;
extern "C" unsigned long _UNK_00559de8;
extern "C" unsigned long _UNK_00559dec;
extern "C" unsigned long _UNK_00559df0;
extern "C" unsigned long _UNK_00559df4;
extern "C" unsigned long _UNK_00559df8;
extern "C" unsigned long _UNK_00559dfc;
extern "C" unsigned long _UNK_00559e00;
extern "C" unsigned long _UNK_00559e04;
extern "C" unsigned long _UNK_00559e08;
extern "C" unsigned long _UNK_00559e0c;
extern "C" unsigned long _UNK_00559e10;
extern "C" unsigned long _UNK_0055a214;
extern "C" unsigned long _UNK_0055a218;
extern "C" unsigned long _UNK_0055a21c;
extern "C" unsigned long _UNK_0055a220;
extern "C" unsigned long _UNK_0055a224;
extern "C" unsigned long _UNK_0055a228;
extern "C" unsigned long _UNK_0055a22c;
extern "C" unsigned long _UNK_0055a230;
extern "C" unsigned long _UNK_0055a234;
extern "C" unsigned long _UNK_0055a238;
extern "C" unsigned long _UNK_0055a23c;
extern "C" unsigned long _UNK_0055a240;
extern "C" unsigned long _UNK_0055a244;
extern "C" unsigned long _UNK_0055a248;
extern "C" unsigned long _UNK_0055a24c;
extern "C" unsigned long _UNK_0055a250;
extern "C" unsigned long _UNK_0055a670;
extern "C" unsigned long _UNK_0055a674;
extern "C" unsigned long _UNK_0055a678;
extern "C" unsigned long _UNK_0055a67c;
extern "C" unsigned long _UNK_0055a680;
extern "C" unsigned long _UNK_0055a684;
extern "C" unsigned long _UNK_0055a688;
extern "C" unsigned long _UNK_0055a68c;
extern "C" unsigned long _UNK_0055a690;
extern "C" unsigned long _UNK_0055a694;
extern "C" unsigned long _UNK_0055a698;
extern "C" unsigned long _UNK_0055a69c;
extern "C" unsigned long _UNK_0055a6a0;
extern "C" unsigned long _UNK_0055a6a4;
extern "C" unsigned long _UNK_0055a8c8;
extern "C" unsigned long _UNK_0055a8cc;
extern "C" unsigned long _UNK_0055a8d0;
extern "C" unsigned long _UNK_0055a8d4;
extern "C" unsigned long _UNK_0055a8d8;
extern "C" unsigned long _UNK_0055a8dc;
extern "C" unsigned long _UNK_0055a8e0;
extern "C" unsigned long g_0055932c;
extern "C" unsigned long g_0055937e;
extern "C" unsigned long g_005593b0;
extern "C" unsigned long g_005593b4;
extern "C" unsigned long g_005593c4;
extern "C" unsigned long g_005593c8;
extern "C" unsigned long g_005593ec;
extern "C" unsigned long g_005593f0;
extern "C" unsigned long g_005594a4;
extern "C" unsigned long g_005594a8;
extern "C" unsigned long g_005595c2;
extern "C" unsigned long g_00559670;
extern "C" unsigned long g_005596a0;
extern "C" unsigned long g_00559776;
extern "C" unsigned long g_005597aa;
extern "C" unsigned long g_0055987a;
extern "C" unsigned long g_005598ac;
extern "C" unsigned long g_0055997e;
extern "C" unsigned long g_005599a0;
extern "C" unsigned long g_005599a4;
extern "C" unsigned long g_005599a8;
extern "C" unsigned long g_005599ac;
extern "C" unsigned long g_005599b0;
extern "C" unsigned long g_005599b4;
extern "C" unsigned long g_005599b8;
extern "C" unsigned long g_005599bc;
extern "C" unsigned long g_005599c0;
extern "C" unsigned long g_005599c4;
extern "C" unsigned long g_005599c8;
extern "C" unsigned long g_005599cc;
extern "C" unsigned long g_005599d0;
extern "C" unsigned long g_005599d4;
extern "C" unsigned long g_005599d8;
extern "C" unsigned long g_005599dc;
extern "C" unsigned long g_005599e0;
extern "C" unsigned long g_005599f4;
extern "C" unsigned long g_00559ab8;
extern "C" unsigned long g_00559ae2;
extern "C" unsigned long g_00559b9c;
extern "C" unsigned long g_00559bc6;
extern "C" unsigned long g_00559c72;
extern "C" unsigned long g_00559d0c;
extern "C" unsigned long g_00559db0;
extern "C" unsigned long g_00559dd0;
extern "C" unsigned long g_00559dd4;
extern "C" unsigned long g_00559dd8;
extern "C" unsigned long g_00559ddc;
extern "C" unsigned long g_00559de0;
extern "C" unsigned long g_00559de4;
extern "C" unsigned long g_00559de8;
extern "C" unsigned long g_00559dec;
extern "C" unsigned long g_00559df0;
extern "C" unsigned long g_00559df4;
extern "C" unsigned long g_00559df8;
extern "C" unsigned long g_00559dfc;
extern "C" unsigned long g_00559e00;
extern "C" unsigned long g_00559e04;
extern "C" unsigned long g_00559e08;
extern "C" unsigned long g_00559e0c;
extern "C" unsigned long g_00559e10;
extern "C" unsigned long g_00559ea6;
extern "C" unsigned long g_00559f9c;
extern "C" unsigned long g_00559fc6;
extern "C" unsigned long g_0055a068;
extern "C" unsigned long g_0055a084;
extern "C" unsigned long g_0055a11c;
extern "C" unsigned long g_0055a1b6;
extern "C" unsigned long g_0055a214;
extern "C" unsigned long g_0055a218;
extern "C" unsigned long g_0055a21c;
extern "C" unsigned long g_0055a220;
extern "C" unsigned long g_0055a224;
extern "C" unsigned long g_0055a228;
extern "C" unsigned long g_0055a22c;
extern "C" unsigned long g_0055a230;
extern "C" unsigned long g_0055a234;
extern "C" unsigned long g_0055a238;
extern "C" unsigned long g_0055a23c;
extern "C" unsigned long g_0055a240;
extern "C" unsigned long g_0055a244;
extern "C" unsigned long g_0055a248;
extern "C" unsigned long g_0055a24c;
extern "C" unsigned long g_0055a250;
extern "C" unsigned long g_0055a290;
extern "C" unsigned long g_0055a328;
extern "C" unsigned long g_0055a3be;
extern "C" unsigned long g_0055a460;
extern "C" unsigned long g_0055a48c;
extern "C" unsigned long g_0055a550;
extern "C" unsigned long g_0055a584;
extern "C" unsigned long g_0055a646;
extern "C" unsigned long g_0055a670;
extern "C" unsigned long g_0055a674;
extern "C" unsigned long g_0055a678;
extern "C" unsigned long g_0055a67c;
extern "C" unsigned long g_0055a680;
extern "C" unsigned long g_0055a684;
extern "C" unsigned long g_0055a688;
extern "C" unsigned long g_0055a68c;
extern "C" unsigned long g_0055a690;
extern "C" unsigned long g_0055a694;
extern "C" unsigned long g_0055a698;
extern "C" unsigned long g_0055a69c;
extern "C" unsigned long g_0055a6a0;
extern "C" unsigned long g_0055a6a4;
extern "C" unsigned long g_0055a6ac;
extern "C" unsigned long g_0055a766;
extern "C" unsigned long g_0055a8c8;
extern "C" unsigned long g_0055a8cc;
extern "C" unsigned long g_0055a8d0;
extern "C" unsigned long g_0055a8d4;
extern "C" unsigned long g_0055a8d8;
extern "C" unsigned long g_0055a8dc;
extern "C" unsigned long g_0055a8e0;
BLVipView::~BLVipView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0055932c + g_005593b0);
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
  func_0079e45c(&uStack_14,&g_0055937e + g_005593b4,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLVipView::BLVipView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = (undefined4)(intptr_t)(*(int *)(g_005594a4 + 0x559434));
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
  func_0079e45c(&uStack_14,((intptr_t)"BLVipView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * BLVipView::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x138)));
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

undefined4 BLVipView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 BLVipView::getBtnClose()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

undefined4 BLVipView::getLabTitle()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

undefined4 BLVipView::getBtnGet()
{
  return *(undefined4 *)(((int)this) + 0x118);
}

undefined4 BLVipView::getLabGet()
{
  return *(undefined4 *)(((int)this) + 0x11c);
}

undefined4 BLVipView::getSprSprTop()
{
  return *(undefined4 *)(((int)this) + 0x120);
}

undefined4 BLVipView::getssp_bg_mid()
{
  return *(undefined4 *)(((int)this) + 0x124);
}

undefined4 BLVipView::getLabDiamond()
{
  return *(undefined4 *)(((int)this) + 0x128);
}

undefined4 BLVipView::getLabCopper()
{
  return *(undefined4 *)(((int)this) + 300);
}

undefined4 BLVipView::getSprSprGet()
{
  return *(undefined4 *)(((int)this) + 0x130);
}

undefined4 BLVipView::getLabSDJ()
{
  return *(undefined4 *)(((int)this) + 0x134);
}

void BLVipView::onEnter()
{
  ((BLVipPresenter *)*(undefined4 *)(((int)this) + 0x10c))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLVipView::onExit()
{
  ((BLVipPresenter *)*(undefined4 *)(((int)this) + 0x10c))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
bool BLVipView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
