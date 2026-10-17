#include "BLMainGLSBView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLMainGLSBPresenter.h"
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
extern "C" long long ghidra_CONCAT13(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_00598770;
extern "C" unsigned long UNK_005987c2;
extern "C" unsigned long UNK_00598808;
extern "C" unsigned long UNK_00598830;
extern "C" unsigned long UNK_00598a02;
extern "C" unsigned long UNK_00598ae4;
extern "C" unsigned long UNK_00598bd0;
extern "C" unsigned long UNK_00598bfa;
extern "C" unsigned long UNK_00598cb2;
extern "C" unsigned long UNK_00598cd6;
extern "C" unsigned long UNK_00598d42;
extern "C" unsigned long UNK_00598dd2;
extern "C" unsigned long UNK_00598e48;
extern "C" unsigned long UNK_00598f20;
extern "C" unsigned long UNK_00598f4a;
extern "C" unsigned long UNK_00599018;
extern "C" unsigned long UNK_0059901a;
extern "C" unsigned long UNK_0059907e;
extern "C" unsigned long UNK_005990aa;
extern "C" unsigned long UNK_00599172;
extern "C" unsigned long UNK_00599174;
extern "C" unsigned long _DAT_005988e8;
extern "C" unsigned long _DAT_005988ec;
extern "C" unsigned long _UNK_005987f4;
extern "C" unsigned long _UNK_005987f8;
extern "C" unsigned long _UNK_0059880c;
extern "C" unsigned long _UNK_00598834;
extern "C" unsigned long _UNK_00598de4;
extern "C" unsigned long _UNK_00598de8;
extern "C" unsigned long _UNK_00598dec;
extern "C" unsigned long _UNK_00598df0;
extern "C" unsigned long _UNK_00598df4;
extern "C" unsigned long _UNK_00598df8;
extern "C" unsigned long _UNK_00598dfc;
extern "C" unsigned long _UNK_00598e00;
extern "C" unsigned long _UNK_00598e04;
extern "C" unsigned long _UNK_00598e08;
extern "C" unsigned long _UNK_00598e0c;
extern "C" unsigned long _UNK_00598e10;
extern "C" unsigned long _UNK_00598e14;
extern "C" unsigned long _UNK_00598e18;
extern "C" unsigned long _UNK_00598e1c;
extern "C" unsigned long _UNK_00598e20;
extern "C" unsigned long _UNK_00598e24;
extern "C" unsigned long _UNK_00599220;
extern "C" unsigned long _UNK_00599224;
extern "C" unsigned long _UNK_00599228;
extern "C" unsigned long _UNK_0059922c;
extern "C" unsigned long _UNK_00599230;
extern "C" unsigned long _UNK_00599234;
extern "C" unsigned long _UNK_00599238;
extern "C" unsigned long _UNK_0059923c;
extern "C" unsigned long _UNK_00599240;
extern "C" unsigned long _UNK_00599244;
extern "C" unsigned long _UNK_00599248;
extern "C" unsigned long _UNK_0059924c;
extern "C" unsigned long _UNK_00599250;
extern "C" unsigned long _UNK_00599254;
extern "C" unsigned long _UNK_00599258;
extern "C" unsigned long _UNK_0059925c;
extern "C" unsigned long _UNK_00599260;
extern "C" unsigned long _UNK_00599264;
extern "C" unsigned long _UNK_00599268;
extern "C" unsigned long g_00598770;
extern "C" unsigned long g_005987c2;
extern "C" unsigned long g_005987f4;
extern "C" unsigned long g_005987f8;
extern "C" unsigned long g_00598808;
extern "C" unsigned long g_0059880c;
extern "C" unsigned long g_00598830;
extern "C" unsigned long g_00598834;
extern "C" unsigned long g_005988e8;
extern "C" unsigned long g_005988ec;
extern "C" unsigned long g_00598a02;
extern "C" unsigned long g_00598ae4;
extern "C" unsigned long g_00598bd0;
extern "C" unsigned long g_00598bfa;
extern "C" unsigned long g_00598cb2;
extern "C" unsigned long g_00598cd6;
extern "C" unsigned long g_00598d42;
extern "C" unsigned long g_00598dd2;
extern "C" unsigned long g_00598de4;
extern "C" unsigned long g_00598de8;
extern "C" unsigned long g_00598dec;
extern "C" unsigned long g_00598df0;
extern "C" unsigned long g_00598df4;
extern "C" unsigned long g_00598df8;
extern "C" unsigned long g_00598dfc;
extern "C" unsigned long g_00598e00;
extern "C" unsigned long g_00598e04;
extern "C" unsigned long g_00598e08;
extern "C" unsigned long g_00598e0c;
extern "C" unsigned long g_00598e10;
extern "C" unsigned long g_00598e14;
extern "C" unsigned long g_00598e18;
extern "C" unsigned long g_00598e1c;
extern "C" unsigned long g_00598e20;
extern "C" unsigned long g_00598e24;
extern "C" unsigned long g_00598e48;
extern "C" unsigned long g_00598f20;
extern "C" unsigned long g_00598f4a;
extern "C" unsigned long g_00599018;
extern "C" unsigned long g_0059901a;
extern "C" unsigned long g_0059907e;
extern "C" unsigned long g_005990aa;
extern "C" unsigned long g_00599172;
extern "C" unsigned long g_00599174;
extern "C" unsigned long g_00599220;
extern "C" unsigned long g_00599224;
extern "C" unsigned long g_00599228;
extern "C" unsigned long g_0059922c;
extern "C" unsigned long g_00599230;
extern "C" unsigned long g_00599234;
extern "C" unsigned long g_00599238;
extern "C" unsigned long g_0059923c;
extern "C" unsigned long g_00599240;
extern "C" unsigned long g_00599244;
extern "C" unsigned long g_00599248;
extern "C" unsigned long g_0059924c;
extern "C" unsigned long g_00599250;
extern "C" unsigned long g_00599254;
extern "C" unsigned long g_00599258;
extern "C" unsigned long g_0059925c;
extern "C" unsigned long g_00599260;
extern "C" unsigned long g_00599264;
extern "C" unsigned long g_00599268;
BLMainGLSBView::~BLMainGLSBView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_00598770 + g_005987f4);
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
  func_0079e45c(&uStack_14,&g_005987c2 + g_005987f8,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}


int * BLMainGLSBView::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x134)));
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

undefined4 BLMainGLSBView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 BLMainGLSBView::getBackGround()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

undefined4 BLMainGLSBView::getTabBg()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

undefined4 BLMainGLSBView::getLabTitle()
{
  return *(undefined4 *)(((int)this) + 0x118);
}

undefined4 BLMainGLSBView::getLabTip()
{
  return *(undefined4 *)(((int)this) + 0x11c);
}

undefined4 BLMainGLSBView::getLabOldEquip()
{
  return *(undefined4 *)(((int)this) + 0x120);
}

undefined4 BLMainGLSBView::getLabNewEquip()
{
  return *(undefined4 *)(((int)this) + 0x124);
}

undefined4 BLMainGLSBView::getBtnClose()
{
  return *(undefined4 *)(((int)this) + 0x130);
}

undefined4 BLMainGLSBView::getBtnOldEquip()
{
  return *(undefined4 *)(((int)this) + 0x128);
}

undefined4 BLMainGLSBView::getBtnNewEquip()
{
  return *(undefined4 *)(((int)this) + 300);
}

void BLMainGLSBView::onEnter()
{
  ((BLMainGLSBPresenter *)*(undefined4 *)(((int)this) + 0x10c))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLMainGLSBView::onExit()
{
  ((BLMainGLSBPresenter *)*(undefined4 *)(((int)this) + 0x10c))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (2) =====
BLMainGLSBView::BLMainGLSBView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = (undefined4)(intptr_t)(*(int *)(g_005988e8 + 0x598878));
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
  func_0079e45c(&uStack_14,((intptr_t)"BLMainGLSBView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

bool BLMainGLSBView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
