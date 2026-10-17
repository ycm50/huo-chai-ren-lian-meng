#include "BLItemDataInfoUpView.h"
#include "BLItemDataInfoUpPresenter.h"
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
extern "C" long long ghidra_CONCAT13(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_005fefd8;
extern "C" unsigned long UNK_005ff02a;
extern "C" unsigned long UNK_005ff070;
extern "C" unsigned long UNK_005ff098;
extern "C" unsigned long UNK_005ff0e0;
extern "C" unsigned long UNK_005ff11c;
extern "C" unsigned long UNK_005ff28e;
extern "C" unsigned long UNK_005ff370;
extern "C" unsigned long UNK_005ff40c;
extern "C" unsigned long UNK_005ff4ae;
extern "C" unsigned long UNK_005ff54a;
extern "C" unsigned long UNK_005ff574;
extern "C" unsigned long UNK_005ff632;
extern "C" unsigned long UNK_005ff668;
extern "C" unsigned long UNK_005ff76c;
extern "C" unsigned long UNK_005ff798;
extern "C" unsigned long UNK_005ff858;
extern "C" unsigned long UNK_005ff884;
extern "C" unsigned long UNK_005ff940;
extern "C" unsigned long UNK_005ff96c;
extern "C" unsigned long UNK_005ffa2c;
extern "C" unsigned long UNK_005ffa58;
extern "C" unsigned long UNK_005ffb54;
extern "C" unsigned long UNK_005ffb80;
extern "C" unsigned long UNK_005ffc40;
extern "C" unsigned long UNK_005ffc6a;
extern "C" unsigned long UNK_005ffd1a;
extern "C" unsigned long UNK_005ffe06;
extern "C" unsigned long UNK_005ffea4;
extern "C" unsigned long UNK_005fff9e;
extern "C" unsigned long UNK_005fffc8;
extern "C" unsigned long _UNK_005ff05c;
extern "C" unsigned long _UNK_005ff060;
extern "C" unsigned long _UNK_005ff074;
extern "C" unsigned long _UNK_005ff09c;
extern "C" unsigned long _UNK_005ff150;
extern "C" unsigned long _UNK_005ff154;
extern "C" unsigned long _UNK_005ff670;
extern "C" unsigned long _UNK_005ff674;
extern "C" unsigned long _UNK_005ff678;
extern "C" unsigned long _UNK_005ff67c;
extern "C" unsigned long _UNK_005ff680;
extern "C" unsigned long _UNK_005ff684;
extern "C" unsigned long _UNK_005ff688;
extern "C" unsigned long _UNK_005ff68c;
extern "C" unsigned long _UNK_005ff690;
extern "C" unsigned long _UNK_005ff694;
extern "C" unsigned long _UNK_005ff698;
extern "C" unsigned long _UNK_005ff69c;
extern "C" unsigned long _UNK_005ff6a0;
extern "C" unsigned long _UNK_005ff6a4;
extern "C" unsigned long _UNK_005ff6a8;
extern "C" unsigned long _UNK_005ff6ac;
extern "C" unsigned long _UNK_005ff6b0;
extern "C" unsigned long _UNK_005ffadc;
extern "C" unsigned long _UNK_005ffae0;
extern "C" unsigned long _UNK_005ffae4;
extern "C" unsigned long _UNK_005ffae8;
extern "C" unsigned long _UNK_005ffaec;
extern "C" unsigned long _UNK_005ffaf0;
extern "C" unsigned long _UNK_005ffaf4;
extern "C" unsigned long _UNK_005ffaf8;
extern "C" unsigned long _UNK_005ffafc;
extern "C" unsigned long _UNK_005ffb00;
extern "C" unsigned long _UNK_005ffb04;
extern "C" unsigned long _UNK_005ffb08;
extern "C" unsigned long _UNK_005ffb0c;
extern "C" unsigned long _UNK_005fff38;
extern "C" unsigned long _UNK_005fff3c;
extern "C" unsigned long _UNK_005fff40;
extern "C" unsigned long _UNK_005fff44;
extern "C" unsigned long _UNK_005fff48;
extern "C" unsigned long _UNK_005fff4c;
extern "C" unsigned long _UNK_005fff50;
extern "C" unsigned long _UNK_005fff54;
extern "C" unsigned long _UNK_005fff58;
extern "C" unsigned long _UNK_005fff5c;
extern "C" unsigned long _UNK_005fff60;
extern "C" unsigned long _UNK_005fff64;
extern "C" unsigned long _UNK_005fff68;
extern "C" unsigned long _UNK_005fff6c;
extern "C" unsigned long _UNK_005fff70;
extern "C" unsigned long _UNK_005fff74;
extern "C" unsigned long _UNK_00600140;
extern "C" unsigned long _UNK_00600144;
extern "C" unsigned long _UNK_00600148;
extern "C" unsigned long _UNK_0060014c;
extern "C" unsigned long _UNK_00600150;
extern "C" unsigned long _UNK_00600154;
extern "C" unsigned long _UNK_00600158;
extern "C" unsigned long g_005fefd8;
extern "C" unsigned long g_005ff02a;
extern "C" unsigned long g_005ff05c;
extern "C" unsigned long g_005ff060;
extern "C" unsigned long g_005ff070;
extern "C" unsigned long g_005ff074;
extern "C" unsigned long g_005ff098;
extern "C" unsigned long g_005ff09c;
extern "C" unsigned long g_005ff0e0;
extern "C" unsigned long g_005ff11c;
extern "C" unsigned long g_005ff150;
extern "C" unsigned long g_005ff154;
extern "C" unsigned long g_005ff28e;
extern "C" unsigned long g_005ff370;
extern "C" unsigned long g_005ff40c;
extern "C" unsigned long g_005ff4ae;
extern "C" unsigned long g_005ff54a;
extern "C" unsigned long g_005ff574;
extern "C" unsigned long g_005ff632;
extern "C" unsigned long g_005ff668;
extern "C" unsigned long g_005ff670;
extern "C" unsigned long g_005ff674;
extern "C" unsigned long g_005ff678;
extern "C" unsigned long g_005ff67c;
extern "C" unsigned long g_005ff680;
extern "C" unsigned long g_005ff684;
extern "C" unsigned long g_005ff688;
extern "C" unsigned long g_005ff68c;
extern "C" unsigned long g_005ff690;
extern "C" unsigned long g_005ff694;
extern "C" unsigned long g_005ff698;
extern "C" unsigned long g_005ff69c;
extern "C" unsigned long g_005ff6a0;
extern "C" unsigned long g_005ff6a4;
extern "C" unsigned long g_005ff6a8;
extern "C" unsigned long g_005ff6ac;
extern "C" unsigned long g_005ff6b0;
extern "C" unsigned long g_005ff76c;
extern "C" unsigned long g_005ff798;
extern "C" unsigned long g_005ff858;
extern "C" unsigned long g_005ff884;
extern "C" unsigned long g_005ff940;
extern "C" unsigned long g_005ff96c;
extern "C" unsigned long g_005ffa2c;
extern "C" unsigned long g_005ffa58;
extern "C" unsigned long g_005ffadc;
extern "C" unsigned long g_005ffae0;
extern "C" unsigned long g_005ffae4;
extern "C" unsigned long g_005ffae8;
extern "C" unsigned long g_005ffaec;
extern "C" unsigned long g_005ffaf0;
extern "C" unsigned long g_005ffaf4;
extern "C" unsigned long g_005ffaf8;
extern "C" unsigned long g_005ffafc;
extern "C" unsigned long g_005ffb00;
extern "C" unsigned long g_005ffb04;
extern "C" unsigned long g_005ffb08;
extern "C" unsigned long g_005ffb0c;
extern "C" unsigned long g_005ffb54;
extern "C" unsigned long g_005ffb80;
extern "C" unsigned long g_005ffc40;
extern "C" unsigned long g_005ffc6a;
extern "C" unsigned long g_005ffd1a;
extern "C" unsigned long g_005ffe06;
extern "C" unsigned long g_005ffea4;
extern "C" unsigned long g_005fff38;
extern "C" unsigned long g_005fff3c;
extern "C" unsigned long g_005fff40;
extern "C" unsigned long g_005fff44;
extern "C" unsigned long g_005fff48;
extern "C" unsigned long g_005fff4c;
extern "C" unsigned long g_005fff50;
extern "C" unsigned long g_005fff54;
extern "C" unsigned long g_005fff58;
extern "C" unsigned long g_005fff5c;
extern "C" unsigned long g_005fff60;
extern "C" unsigned long g_005fff64;
extern "C" unsigned long g_005fff68;
extern "C" unsigned long g_005fff6c;
extern "C" unsigned long g_005fff70;
extern "C" unsigned long g_005fff74;
extern "C" unsigned long g_005fff9e;
extern "C" unsigned long g_005fffc8;
extern "C" unsigned long g_00600140;
extern "C" unsigned long g_00600144;
extern "C" unsigned long g_00600148;
extern "C" unsigned long g_0060014c;
extern "C" unsigned long g_00600150;
extern "C" unsigned long g_00600154;
extern "C" unsigned long g_00600158;
BLItemDataInfoUpView::~BLItemDataInfoUpView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_005fefd8 + g_005ff05c);
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
  func_0079e45c(&uStack_14,&g_005ff02a + g_005ff060,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLItemDataInfoUpView::BLItemDataInfoUpView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = (undefined4)(intptr_t)(*(int *)((unsigned char *)((char *)&g_005ff0e0 + (intptr_t)(g_005ff150))));
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
  func_0079e45c(&uStack_14,(unsigned char *)((char *)&g_005ff11c + (intptr_t)(g_005ff154)),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * BLItemDataInfoUpView::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x14c)));
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

undefined4 BLItemDataInfoUpView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 BLItemDataInfoUpView::getTabBg()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

undefined4 BLItemDataInfoUpView::getSprItem()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

undefined4 BLItemDataInfoUpView::getSprDebris()
{
  return *(undefined4 *)(((int)this) + 0x118);
}

undefined4 BLItemDataInfoUpView::getLabItemName()
{
  return *(undefined4 *)(((int)this) + 0x11c);
}

undefined4 BLItemDataInfoUpView::getLabNumTitle()
{
  return *(undefined4 *)(((int)this) + 0x120);
}

undefined4 BLItemDataInfoUpView::getLabPriceTitle()
{
  return *(undefined4 *)(((int)this) + 0x124);
}

undefined4 BLItemDataInfoUpView::getLabNum()
{
  return *(undefined4 *)(((int)this) + 0x128);
}

undefined4 BLItemDataInfoUpView::getLabPrice()
{
  return *(undefined4 *)(((int)this) + 300);
}

undefined4 BLItemDataInfoUpView::getLabTitle()
{
  return *(undefined4 *)(((int)this) + 0x130);
}

undefined4 BLItemDataInfoUpView::getLine()
{
  return *(undefined4 *)(((int)this) + 0x134);
}

undefined4 BLItemDataInfoUpView::getSprCoin()
{
  return *(undefined4 *)(((int)this) + 0x138);
}

undefined4 BLItemDataInfoUpView::getBtnClose()
{
  return *(undefined4 *)(((int)this) + 0x13c);
}

undefined4 BLItemDataInfoUpView::getLabelStarName()
{
  return *(undefined4 *)(((int)this) + 0x140);
}

undefined4 BLItemDataInfoUpView::getLabelStarNum()
{
  return *(undefined4 *)(((int)this) + 0x144);
}

undefined4 BLItemDataInfoUpView::getSprStar()
{
  return *(undefined4 *)(((int)this) + 0x148);
}

void BLItemDataInfoUpView::onEnter()
{
  ((BLItemDataInfoUpPresenter *)*(undefined4 *)(((int)this) + 0x10c))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLItemDataInfoUpView::onExit()
{
  ((BLItemDataInfoUpPresenter *)*(undefined4 *)(((int)this) + 0x10c))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
bool BLItemDataInfoUpView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
