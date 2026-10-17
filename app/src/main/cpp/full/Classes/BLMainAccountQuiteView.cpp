#include "BLMainAccountQuiteView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLMainAccountQuitePresenter.h"
#include "BLPageControl.h"
#include "BLPageLayer.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <new>   // ghost_fix.js 自动补齐
using namespace cocos2d;
// 兜底声明
extern "C" long long func_00591faa(...);
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long ghidra_CONCAT13(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_00590d78;
extern "C" unsigned long UNK_00590dca;
extern "C" unsigned long UNK_00590e10;
extern "C" unsigned long UNK_00590e38;
extern "C" unsigned long UNK_00590ffe;
extern "C" unsigned long UNK_005910e4;
extern "C" unsigned long UNK_005911d2;
extern "C" unsigned long UNK_005911fe;
extern "C" unsigned long UNK_005912c6;
extern "C" unsigned long UNK_005912fe;
extern "C" unsigned long UNK_005913de;
extern "C" unsigned long UNK_0059144c;
extern "C" unsigned long UNK_00591534;
extern "C" unsigned long UNK_00591562;
extern "C" unsigned long UNK_00591658;
extern "C" unsigned long UNK_0059189a;
extern "C" unsigned long UNK_005918d4;
extern "C" unsigned long UNK_0059191e;
extern "C" unsigned long UNK_00591932;
extern "C" unsigned long UNK_0059195c;
extern "C" unsigned long UNK_00591a18;
extern "C" unsigned long UNK_00591a42;
extern "C" unsigned long UNK_00591aec;
extern "C" unsigned long UNK_00591b18;
extern "C" unsigned long UNK_00591bfc;
extern "C" unsigned long UNK_00591c26;
extern "C" unsigned long UNK_00591d18;
extern "C" unsigned long UNK_00591d44;
extern "C" unsigned long UNK_00591e22;
extern "C" unsigned long UNK_00591e50;
extern "C" unsigned long _DAT_00590ef0;
extern "C" unsigned long _DAT_00590ef4;
extern "C" unsigned long _UNK_00590dfc;
extern "C" unsigned long _UNK_00590e00;
extern "C" unsigned long _UNK_00590e14;
extern "C" unsigned long _UNK_00590e3c;
extern "C" unsigned long _UNK_005913e0;
extern "C" unsigned long _UNK_005913e4;
extern "C" unsigned long _UNK_005913e8;
extern "C" unsigned long _UNK_005913ec;
extern "C" unsigned long _UNK_005913f0;
extern "C" unsigned long _UNK_005913f4;
extern "C" unsigned long _UNK_005913f8;
extern "C" unsigned long _UNK_005913fc;
extern "C" unsigned long _UNK_00591400;
extern "C" unsigned long _UNK_00591404;
extern "C" unsigned long _UNK_00591408;
extern "C" unsigned long _UNK_0059140c;
extern "C" unsigned long _UNK_00591410;
extern "C" unsigned long _UNK_00591414;
extern "C" unsigned long _UNK_00591418;
extern "C" unsigned long _UNK_00591834;
extern "C" unsigned long _UNK_00591838;
extern "C" unsigned long _UNK_0059183c;
extern "C" unsigned long _UNK_00591840;
extern "C" unsigned long _UNK_00591844;
extern "C" unsigned long _UNK_00591848;
extern "C" unsigned long _UNK_0059184c;
extern "C" unsigned long _UNK_00591850;
extern "C" unsigned long _UNK_00591854;
extern "C" unsigned long _UNK_00591858;
extern "C" unsigned long _UNK_0059185c;
extern "C" unsigned long _UNK_00591860;
extern "C" unsigned long _UNK_00591864;
extern "C" unsigned long _UNK_00591868;
extern "C" unsigned long _UNK_0059186c;
extern "C" unsigned long _UNK_00591870;
extern "C" unsigned long _UNK_00591874;
extern "C" unsigned long _UNK_00591878;
extern "C" unsigned long _UNK_005918b4;
extern "C" unsigned long _UNK_00591cb0;
extern "C" unsigned long _UNK_00591cb4;
extern "C" unsigned long _UNK_00591cb8;
extern "C" unsigned long _UNK_00591cbc;
extern "C" unsigned long _UNK_00591cc0;
extern "C" unsigned long _UNK_00591cc4;
extern "C" unsigned long _UNK_00591cc8;
extern "C" unsigned long _UNK_00591ccc;
extern "C" unsigned long _UNK_00591cd0;
extern "C" unsigned long _UNK_00591cd4;
extern "C" unsigned long _UNK_00591cd8;
extern "C" unsigned long _UNK_00591cdc;
extern "C" unsigned long _UNK_00591ce0;
extern "C" unsigned long _UNK_00591ce4;
extern "C" unsigned long _UNK_00591ce8;
extern "C" unsigned long _UNK_00591cec;
extern "C" unsigned long _UNK_00591cf0;
extern "C" unsigned long _UNK_00591fbc;
extern "C" unsigned long _UNK_00591fc0;
extern "C" unsigned long _UNK_00591fc4;
extern "C" unsigned long _UNK_00591fc8;
extern "C" unsigned long _UNK_00591fcc;
extern "C" unsigned long _UNK_00591fd0;
extern "C" unsigned long _UNK_00591fd4;
extern "C" unsigned long _UNK_00591fd8;
extern "C" unsigned long _UNK_00591fdc;
extern "C" unsigned long _UNK_00591fe0;
extern "C" unsigned long _UNK_00591fe4;
extern "C" unsigned long g_00590d78;
extern "C" unsigned long g_00590dca;
extern "C" unsigned long g_00590dfc;
extern "C" unsigned long g_00590e00;
extern "C" unsigned long g_00590e10;
extern "C" unsigned long g_00590e14;
extern "C" unsigned long g_00590e38;
extern "C" unsigned long g_00590e3c;
extern "C" unsigned long g_00590ef0;
extern "C" unsigned long g_00590ef4;
extern "C" unsigned long g_00590ffe;
extern "C" unsigned long g_005910e4;
extern "C" unsigned long g_005911d2;
extern "C" unsigned long g_005911fe;
extern "C" unsigned long g_005912c6;
extern "C" unsigned long g_005912fe;
extern "C" unsigned long g_005913de;
extern "C" unsigned long g_005913e0;
extern "C" unsigned long g_005913e4;
extern "C" unsigned long g_005913e8;
extern "C" unsigned long g_005913ec;
extern "C" unsigned long g_005913f0;
extern "C" unsigned long g_005913f4;
extern "C" unsigned long g_005913f8;
extern "C" unsigned long g_005913fc;
extern "C" unsigned long g_00591400;
extern "C" unsigned long g_00591404;
extern "C" unsigned long g_00591408;
extern "C" unsigned long g_0059140c;
extern "C" unsigned long g_00591410;
extern "C" unsigned long g_00591414;
extern "C" unsigned long g_00591418;
extern "C" unsigned long g_0059144c;
extern "C" unsigned long g_00591534;
extern "C" unsigned long g_00591562;
extern "C" unsigned long g_00591658;
extern "C" unsigned long g_00591834;
extern "C" unsigned long g_00591838;
extern "C" unsigned long g_0059183c;
extern "C" unsigned long g_00591840;
extern "C" unsigned long g_00591844;
extern "C" unsigned long g_00591848;
extern "C" unsigned long g_0059184c;
extern "C" unsigned long g_00591850;
extern "C" unsigned long g_00591854;
extern "C" unsigned long g_00591858;
extern "C" unsigned long g_0059185c;
extern "C" unsigned long g_00591860;
extern "C" unsigned long g_00591864;
extern "C" unsigned long g_00591868;
extern "C" unsigned long g_0059186c;
extern "C" unsigned long g_00591870;
extern "C" unsigned long g_00591874;
extern "C" unsigned long g_00591878;
extern "C" unsigned long g_0059189a;
extern "C" unsigned long g_005918b4;
extern "C" unsigned long g_005918d4;
extern "C" unsigned long g_0059191e;
extern "C" unsigned long g_00591932;
extern "C" unsigned long g_0059195c;
extern "C" unsigned long g_00591a18;
extern "C" unsigned long g_00591a42;
extern "C" unsigned long g_00591aec;
extern "C" unsigned long g_00591b18;
extern "C" unsigned long g_00591bfc;
extern "C" unsigned long g_00591c26;
extern "C" unsigned long g_00591cb0;
extern "C" unsigned long g_00591cb4;
extern "C" unsigned long g_00591cb8;
extern "C" unsigned long g_00591cbc;
extern "C" unsigned long g_00591cc0;
extern "C" unsigned long g_00591cc4;
extern "C" unsigned long g_00591cc8;
extern "C" unsigned long g_00591ccc;
extern "C" unsigned long g_00591cd0;
extern "C" unsigned long g_00591cd4;
extern "C" unsigned long g_00591cd8;
extern "C" unsigned long g_00591cdc;
extern "C" unsigned long g_00591ce0;
extern "C" unsigned long g_00591ce4;
extern "C" unsigned long g_00591ce8;
extern "C" unsigned long g_00591cec;
extern "C" unsigned long g_00591cf0;
extern "C" unsigned long g_00591d18;
extern "C" unsigned long g_00591d44;
extern "C" unsigned long g_00591e22;
extern "C" unsigned long g_00591e50;
extern "C" unsigned long g_00591fbc;
extern "C" unsigned long g_00591fc0;
extern "C" unsigned long g_00591fc4;
extern "C" unsigned long g_00591fc8;
extern "C" unsigned long g_00591fcc;
extern "C" unsigned long g_00591fd0;
extern "C" unsigned long g_00591fd4;
extern "C" unsigned long g_00591fd8;
extern "C" unsigned long g_00591fdc;
extern "C" unsigned long g_00591fe0;
extern "C" unsigned long g_00591fe4;
BLMainAccountQuiteView::~BLMainAccountQuiteView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_00590d78 + g_00590dfc);
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
  func_0079e45c(&uStack_14,&g_00590dca + g_00590e00,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}


int * BLMainAccountQuiteView::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x148)));
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

undefined4 BLMainAccountQuiteView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 BLMainAccountQuiteView::getBtnClose()
{
  return *(undefined4 *)(((int)this) + 0x11c);
}

undefined4 BLMainAccountQuiteView::getBtnOK()
{
  return *(undefined4 *)(((int)this) + 0x120);
}

undefined4 BLMainAccountQuiteView::getBtnCancel()
{
  return *(undefined4 *)(((int)this) + 0x124);
}

undefined4 BLMainAccountQuiteView::getBtnLeft()
{
  return *(undefined4 *)(((int)this) + 0x144);
}

undefined4 BLMainAccountQuiteView::getbtnRight()
{
  return *(undefined4 *)(((int)this) + 0x140);
}

undefined4 BLMainAccountQuiteView::Mission()
{
  return *(undefined4 *)(((int)this) + 0x138);
}

undefined4 BLMainAccountQuiteView::getPageControlMissions()
{
  return *(undefined4 *)(((int)this) + 0x13c);
}

void BLMainAccountQuiteView::onEnter()
{
  ((BLMainAccountQuitePresenter *)*(undefined4 *)(((int)this) + 0x10c))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLMainAccountQuiteView::onExit()
{
  ((BLMainAccountQuitePresenter *)*(undefined4 *)(((int)this) + 0x10c))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (2) =====
BLMainAccountQuiteView::BLMainAccountQuiteView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = (undefined4)(intptr_t)(*(int *)(g_00590ef0 + 0x590e80));
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
  func_0079e45c(&uStack_14,((intptr_t)"BLMainAccountQuiteView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

bool BLMainAccountQuiteView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
