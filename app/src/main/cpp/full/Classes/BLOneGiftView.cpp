#include "BLOneGiftView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLOneGiftPresenter.h"
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
extern "C" long long func_0079e59c(...);
extern "C" long long ghidra_CONCAT13(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_00554a18;
extern "C" unsigned long UNK_00554a4a;
extern "C" unsigned long UNK_00554a90;
extern "C" unsigned long UNK_00554ab8;
extern "C" unsigned long UNK_00554c6a;
extern "C" unsigned long UNK_00554d6a;
extern "C" unsigned long UNK_00554da0;
extern "C" unsigned long UNK_00554e4e;
extern "C" unsigned long UNK_00554e82;
extern "C" unsigned long UNK_00554f50;
extern "C" unsigned long UNK_00554f80;
extern "C" unsigned long UNK_005550f4;
extern "C" unsigned long UNK_0055511e;
extern "C" unsigned long UNK_00555222;
extern "C" unsigned long UNK_005552fe;
extern "C" unsigned long UNK_00555396;
extern "C" unsigned long UNK_00555472;
extern "C" unsigned long UNK_00555590;
extern "C" unsigned long UNK_00555674;
extern "C" unsigned long UNK_0055569e;
extern "C" unsigned long UNK_00555722;
extern "C" unsigned long UNK_00555742;
extern "C" unsigned long UNK_0055581e;
extern "C" unsigned long UNK_005558b6;
extern "C" unsigned long UNK_005559e0;
extern "C" unsigned long UNK_00555aba;
extern "C" unsigned long UNK_00555b9e;
extern "C" unsigned long UNK_00555bc8;
extern "C" unsigned long UNK_00555c4a;
extern "C" unsigned long UNK_00555c6a;
extern "C" unsigned long UNK_00555d94;
extern "C" unsigned long UNK_00555e2e;
extern "C" unsigned long UNK_00555f06;
extern "C" unsigned long UNK_00555fe4;
extern "C" unsigned long UNK_005560c8;
extern "C" unsigned long UNK_005560f2;
extern "C" unsigned long UNK_005561c0;
extern "C" unsigned long UNK_005561e8;
extern "C" unsigned long UNK_00556214;
extern "C" unsigned long UNK_005562c8;
extern "C" unsigned long UNK_00556310;
extern "C" unsigned long UNK_0055633c;
extern "C" unsigned long _DAT_00554b58;
extern "C" unsigned long _DAT_00554b5c;
extern "C" unsigned long _UNK_00554a7c;
extern "C" unsigned long _UNK_00554a80;
extern "C" unsigned long _UNK_00554a94;
extern "C" unsigned long _UNK_00554abc;
extern "C" unsigned long _UNK_0055504c;
extern "C" unsigned long _UNK_00555050;
extern "C" unsigned long _UNK_00555054;
extern "C" unsigned long _UNK_00555058;
extern "C" unsigned long _UNK_0055505c;
extern "C" unsigned long _UNK_00555060;
extern "C" unsigned long _UNK_00555064;
extern "C" unsigned long _UNK_00555068;
extern "C" unsigned long _UNK_0055506c;
extern "C" unsigned long _UNK_00555070;
extern "C" unsigned long _UNK_00555074;
extern "C" unsigned long _UNK_00555078;
extern "C" unsigned long _UNK_0055507c;
extern "C" unsigned long _UNK_00555080;
extern "C" unsigned long _UNK_00555084;
extern "C" unsigned long _UNK_00555088;
extern "C" unsigned long _UNK_0055508c;
extern "C" unsigned long _UNK_00555090;
extern "C" unsigned long _UNK_00555094;
extern "C" unsigned long _UNK_00555098;
extern "C" unsigned long _UNK_0055548c;
extern "C" unsigned long _UNK_00555490;
extern "C" unsigned long _UNK_00555494;
extern "C" unsigned long _UNK_00555498;
extern "C" unsigned long _UNK_0055549c;
extern "C" unsigned long _UNK_005554a0;
extern "C" unsigned long _UNK_005554a4;
extern "C" unsigned long _UNK_005554a8;
extern "C" unsigned long _UNK_005554ac;
extern "C" unsigned long _UNK_005554b0;
extern "C" unsigned long _UNK_005554b4;
extern "C" unsigned long _UNK_005554b8;
extern "C" unsigned long _UNK_005554bc;
extern "C" unsigned long _UNK_005554c0;
extern "C" unsigned long _UNK_005554c4;
extern "C" unsigned long _UNK_005554c8;
extern "C" unsigned long _UNK_005558b8;
extern "C" unsigned long _UNK_005558bc;
extern "C" unsigned long _UNK_005558c0;
extern "C" unsigned long _UNK_005558c4;
extern "C" unsigned long _UNK_005558c8;
extern "C" unsigned long _UNK_005558cc;
extern "C" unsigned long _UNK_005558d0;
extern "C" unsigned long _UNK_005558d4;
extern "C" unsigned long _UNK_005558d8;
extern "C" unsigned long _UNK_005558dc;
extern "C" unsigned long _UNK_005558e0;
extern "C" unsigned long _UNK_005558e4;
extern "C" unsigned long _UNK_005558e8;
extern "C" unsigned long _UNK_005558ec;
extern "C" unsigned long _UNK_005558f0;
extern "C" unsigned long _UNK_005558f4;
extern "C" unsigned long _UNK_005558f8;
extern "C" unsigned long _UNK_005558fc;
extern "C" unsigned long _UNK_00555900;
extern "C" unsigned long _UNK_00555d0c;
extern "C" unsigned long _UNK_00555d10;
extern "C" unsigned long _UNK_00555d14;
extern "C" unsigned long _UNK_00555d18;
extern "C" unsigned long _UNK_00555d1c;
extern "C" unsigned long _UNK_00555d20;
extern "C" unsigned long _UNK_00555d24;
extern "C" unsigned long _UNK_00555d28;
extern "C" unsigned long _UNK_00555d2c;
extern "C" unsigned long _UNK_00555d30;
extern "C" unsigned long _UNK_00555d34;
extern "C" unsigned long _UNK_00555d38;
extern "C" unsigned long _UNK_00555d3c;
extern "C" unsigned long _UNK_00555d40;
extern "C" unsigned long _UNK_00555d44;
extern "C" unsigned long _UNK_00555d48;
extern "C" unsigned long _UNK_00555d4c;
extern "C" unsigned long _UNK_00555d50;
extern "C" unsigned long _UNK_00556174;
extern "C" unsigned long _UNK_00556178;
extern "C" unsigned long _UNK_0055617c;
extern "C" unsigned long _UNK_00556180;
extern "C" unsigned long _UNK_00556184;
extern "C" unsigned long _UNK_00556188;
extern "C" unsigned long _UNK_0055618c;
extern "C" unsigned long _UNK_00556190;
extern "C" unsigned long _UNK_00556194;
extern "C" unsigned long _UNK_00556198;
extern "C" unsigned long _UNK_0055619c;
extern "C" unsigned long _UNK_005561a0;
extern "C" unsigned long _UNK_005561a4;
extern "C" unsigned long _UNK_005561a8;
extern "C" unsigned long _UNK_005561ac;
extern "C" unsigned long _UNK_005561b0;
extern "C" unsigned long _UNK_005561b4;
extern "C" unsigned long _UNK_005564b0;
extern "C" unsigned long _UNK_005564b4;
extern "C" unsigned long _UNK_005564b8;
extern "C" unsigned long _UNK_005564bc;
extern "C" unsigned long _UNK_005564c0;
extern "C" unsigned long _UNK_005564c4;
extern "C" unsigned long _UNK_005564c8;
extern "C" unsigned long _UNK_005564cc;
extern "C" unsigned long _UNK_005564d0;
extern "C" unsigned long _UNK_005564d4;
extern "C" unsigned long _UNK_005564d8;
extern "C" unsigned long _UNK_005564dc;
extern "C" unsigned long _UNK_005564e0;
extern "C" unsigned long _UNK_005564e4;
extern "C" unsigned long g_00554a18;
extern "C" unsigned long g_00554a4a;
extern "C" unsigned long g_00554a7c;
extern "C" unsigned long g_00554a80;
extern "C" unsigned long g_00554a90;
extern "C" unsigned long g_00554a94;
extern "C" unsigned long g_00554ab8;
extern "C" unsigned long g_00554abc;
extern "C" unsigned long g_00554b58;
extern "C" unsigned long g_00554b5c;
extern "C" unsigned long g_00554c6a;
extern "C" unsigned long g_00554d6a;
extern "C" unsigned long g_00554da0;
extern "C" unsigned long g_00554e4e;
extern "C" unsigned long g_00554e82;
extern "C" unsigned long g_00554f50;
extern "C" unsigned long g_00554f80;
extern "C" unsigned long g_0055504c;
extern "C" unsigned long g_00555050;
extern "C" unsigned long g_00555054;
extern "C" unsigned long g_00555058;
extern "C" unsigned long g_0055505c;
extern "C" unsigned long g_00555060;
extern "C" unsigned long g_00555064;
extern "C" unsigned long g_00555068;
extern "C" unsigned long g_0055506c;
extern "C" unsigned long g_00555070;
extern "C" unsigned long g_00555074;
extern "C" unsigned long g_00555078;
extern "C" unsigned long g_0055507c;
extern "C" unsigned long g_00555080;
extern "C" unsigned long g_00555084;
extern "C" unsigned long g_00555088;
extern "C" unsigned long g_0055508c;
extern "C" unsigned long g_00555090;
extern "C" unsigned long g_00555094;
extern "C" unsigned long g_00555098;
extern "C" unsigned long g_005550f4;
extern "C" unsigned long g_0055511e;
extern "C" unsigned long g_00555222;
extern "C" unsigned long g_005552fe;
extern "C" unsigned long g_00555396;
extern "C" unsigned long g_00555472;
extern "C" unsigned long g_0055548c;
extern "C" unsigned long g_00555490;
extern "C" unsigned long g_00555494;
extern "C" unsigned long g_00555498;
extern "C" unsigned long g_0055549c;
extern "C" unsigned long g_005554a0;
extern "C" unsigned long g_005554a4;
extern "C" unsigned long g_005554a8;
extern "C" unsigned long g_005554ac;
extern "C" unsigned long g_005554b0;
extern "C" unsigned long g_005554b4;
extern "C" unsigned long g_005554b8;
extern "C" unsigned long g_005554bc;
extern "C" unsigned long g_005554c0;
extern "C" unsigned long g_005554c4;
extern "C" unsigned long g_005554c8;
extern "C" unsigned long g_00555590;
extern "C" unsigned long g_00555674;
extern "C" unsigned long g_0055569e;
extern "C" unsigned long g_00555722;
extern "C" unsigned long g_00555742;
extern "C" unsigned long g_0055581e;
extern "C" unsigned long g_005558b6;
extern "C" unsigned long g_005558b8;
extern "C" unsigned long g_005558bc;
extern "C" unsigned long g_005558c0;
extern "C" unsigned long g_005558c4;
extern "C" unsigned long g_005558c8;
extern "C" unsigned long g_005558cc;
extern "C" unsigned long g_005558d0;
extern "C" unsigned long g_005558d4;
extern "C" unsigned long g_005558d8;
extern "C" unsigned long g_005558dc;
extern "C" unsigned long g_005558e0;
extern "C" unsigned long g_005558e4;
extern "C" unsigned long g_005558e8;
extern "C" unsigned long g_005558ec;
extern "C" unsigned long g_005558f0;
extern "C" unsigned long g_005558f4;
extern "C" unsigned long g_005558f8;
extern "C" unsigned long g_005558fc;
extern "C" unsigned long g_00555900;
extern "C" unsigned long g_005559e0;
extern "C" unsigned long g_00555aba;
extern "C" unsigned long g_00555b9e;
extern "C" unsigned long g_00555bc8;
extern "C" unsigned long g_00555c4a;
extern "C" unsigned long g_00555c6a;
extern "C" unsigned long g_00555d0c;
extern "C" unsigned long g_00555d10;
extern "C" unsigned long g_00555d14;
extern "C" unsigned long g_00555d18;
extern "C" unsigned long g_00555d1c;
extern "C" unsigned long g_00555d20;
extern "C" unsigned long g_00555d24;
extern "C" unsigned long g_00555d28;
extern "C" unsigned long g_00555d2c;
extern "C" unsigned long g_00555d30;
extern "C" unsigned long g_00555d34;
extern "C" unsigned long g_00555d38;
extern "C" unsigned long g_00555d3c;
extern "C" unsigned long g_00555d40;
extern "C" unsigned long g_00555d44;
extern "C" unsigned long g_00555d48;
extern "C" unsigned long g_00555d4c;
extern "C" unsigned long g_00555d50;
extern "C" unsigned long g_00555d94;
extern "C" unsigned long g_00555e2e;
extern "C" unsigned long g_00555f06;
extern "C" unsigned long g_00555fe4;
extern "C" unsigned long g_005560c8;
extern "C" unsigned long g_005560f2;
extern "C" unsigned long g_00556174;
extern "C" unsigned long g_00556178;
extern "C" unsigned long g_0055617c;
extern "C" unsigned long g_00556180;
extern "C" unsigned long g_00556184;
extern "C" unsigned long g_00556188;
extern "C" unsigned long g_0055618c;
extern "C" unsigned long g_00556190;
extern "C" unsigned long g_00556194;
extern "C" unsigned long g_00556198;
extern "C" unsigned long g_0055619c;
extern "C" unsigned long g_005561a0;
extern "C" unsigned long g_005561a4;
extern "C" unsigned long g_005561a8;
extern "C" unsigned long g_005561ac;
extern "C" unsigned long g_005561b0;
extern "C" unsigned long g_005561b4;
extern "C" unsigned long g_005561c0;
extern "C" unsigned long g_005561e8;
extern "C" unsigned long g_00556214;
extern "C" unsigned long g_005562c8;
extern "C" unsigned long g_00556310;
extern "C" unsigned long g_0055633c;
extern "C" unsigned long g_005564b0;
extern "C" unsigned long g_005564b4;
extern "C" unsigned long g_005564b8;
extern "C" unsigned long g_005564bc;
extern "C" unsigned long g_005564c0;
extern "C" unsigned long g_005564c4;
extern "C" unsigned long g_005564c8;
extern "C" unsigned long g_005564cc;
extern "C" unsigned long g_005564d0;
extern "C" unsigned long g_005564d4;
extern "C" unsigned long g_005564d8;
extern "C" unsigned long g_005564dc;
extern "C" unsigned long g_005564e0;
extern "C" unsigned long g_005564e4;
BLOneGiftView::~BLOneGiftView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_00554a18 + g_00554a7c);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00554a4a + g_00554a80,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLOneGiftView::BLOneGiftView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(g_00554b58 + 0x554b00);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLOneGiftView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * BLOneGiftView::create()
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

undefined4 BLOneGiftView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x108);
}

undefined4 BLOneGiftView::getBackGround()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 BLOneGiftView::getTabBg()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

undefined4 BLOneGiftView::getBtnClose()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

undefined4 BLOneGiftView::getLabTitle()
{
  return *(undefined4 *)(((int)this) + 0x118);
}

undefined4 BLOneGiftView::getBtnGet()
{
  return *(undefined4 *)(((int)this) + 0x11c);
}

undefined4 BLOneGiftView::getLabName()
{
  return *(undefined4 *)(((int)this) + 0x120);
}

undefined4 BLOneGiftView::getLabPrice()
{
  return *(undefined4 *)(((int)this) + 0x124);
}

undefined4 BLOneGiftView::getLabPriceNow()
{
  return *(undefined4 *)(((int)this) + 0x128);
}

void BLOneGiftView::onEnter()
{
  ((BLOneGiftPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLOneGiftView::onExit()
{
  ((BLOneGiftPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
bool BLOneGiftView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
