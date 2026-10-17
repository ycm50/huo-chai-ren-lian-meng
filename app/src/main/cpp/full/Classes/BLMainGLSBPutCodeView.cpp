#include "BLMainGLSBPutCodeView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLMainGLSBPutCodePresenter.h"
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
extern "C" unsigned long UNK_00597ba0;
extern "C" unsigned long UNK_00597bf8;
extern "C" unsigned long UNK_00597c52;
extern "C" unsigned long UNK_00597c98;
extern "C" unsigned long UNK_00597cac;
extern "C" unsigned long UNK_00597cd4;
extern "C" unsigned long UNK_00597ce8;
extern "C" unsigned long UNK_00597eba;
extern "C" unsigned long UNK_00597f9c;
extern "C" unsigned long UNK_00598088;
extern "C" unsigned long UNK_005980b2;
extern "C" unsigned long UNK_0059816a;
extern "C" unsigned long UNK_0059818e;
extern "C" unsigned long UNK_00598214;
extern "C" unsigned long UNK_00598246;
extern "C" unsigned long UNK_00598272;
extern "C" unsigned long UNK_00598380;
extern "C" unsigned long UNK_005984a0;
extern "C" unsigned long UNK_005984ac;
extern "C" unsigned long UNK_005984f4;
extern "C" unsigned long UNK_00598520;
extern "C" unsigned long UNK_005985e4;
extern "C" unsigned long UNK_005985e6;
extern "C" unsigned long _DAT_00597da8;
extern "C" unsigned long _DAT_00597dac;
extern "C" unsigned long _UNK_00597ba4;
extern "C" unsigned long _UNK_00597c84;
extern "C" unsigned long _UNK_00597c88;
extern "C" unsigned long _UNK_00597c9c;
extern "C" unsigned long _UNK_00597cb0;
extern "C" unsigned long _UNK_00597cd8;
extern "C" unsigned long _UNK_00597cec;
extern "C" unsigned long _UNK_00598298;
extern "C" unsigned long _UNK_0059829c;
extern "C" unsigned long _UNK_005982a0;
extern "C" unsigned long _UNK_005982a4;
extern "C" unsigned long _UNK_005982a8;
extern "C" unsigned long _UNK_005982ac;
extern "C" unsigned long _UNK_005982b0;
extern "C" unsigned long _UNK_005982b4;
extern "C" unsigned long _UNK_005982b8;
extern "C" unsigned long _UNK_005982bc;
extern "C" unsigned long _UNK_005982c0;
extern "C" unsigned long _UNK_005982c4;
extern "C" unsigned long _UNK_005982c8;
extern "C" unsigned long _UNK_005982cc;
extern "C" unsigned long _UNK_005982d0;
extern "C" unsigned long _UNK_005982d4;
extern "C" unsigned long _UNK_005982d8;
extern "C" unsigned long _UNK_005986b4;
extern "C" unsigned long _UNK_005986b8;
extern "C" unsigned long _UNK_005986bc;
extern "C" unsigned long _UNK_005986c0;
extern "C" unsigned long _UNK_005986c4;
extern "C" unsigned long _UNK_005986c8;
extern "C" unsigned long _UNK_005986cc;
extern "C" unsigned long _UNK_005986d0;
extern "C" unsigned long _UNK_005986d4;
extern "C" unsigned long _UNK_005986d8;
extern "C" unsigned long _UNK_005986dc;
extern "C" unsigned long _UNK_005986e0;
extern "C" unsigned long _UNK_005986e4;
extern "C" unsigned long _UNK_005986e8;
extern "C" unsigned long _UNK_005986ec;
extern "C" unsigned long _UNK_005986f0;
extern "C" unsigned long _UNK_005986f4;
extern "C" unsigned long _UNK_005986f8;
extern "C" unsigned long _UNK_005986fc;
extern "C" unsigned long _UNK_00598700;
extern "C" unsigned long _UNK_00598704;
extern "C" unsigned long g_00597ba0;
extern "C" unsigned long g_00597ba4;
extern "C" unsigned long g_00597bf8;
extern "C" unsigned long g_00597c52;
extern "C" unsigned long g_00597c84;
extern "C" unsigned long g_00597c88;
extern "C" unsigned long g_00597c98;
extern "C" unsigned long g_00597c9c;
extern "C" unsigned long g_00597cac;
extern "C" unsigned long g_00597cb0;
extern "C" unsigned long g_00597cd4;
extern "C" unsigned long g_00597cd8;
extern "C" unsigned long g_00597ce8;
extern "C" unsigned long g_00597cec;
extern "C" unsigned long g_00597da8;
extern "C" unsigned long g_00597dac;
extern "C" unsigned long g_00597eba;
extern "C" unsigned long g_00597f9c;
extern "C" unsigned long g_00598088;
extern "C" unsigned long g_005980b2;
extern "C" unsigned long g_0059816a;
extern "C" unsigned long g_0059818e;
extern "C" unsigned long g_00598214;
extern "C" unsigned long g_00598246;
extern "C" unsigned long g_00598272;
extern "C" unsigned long g_00598298;
extern "C" unsigned long g_0059829c;
extern "C" unsigned long g_005982a0;
extern "C" unsigned long g_005982a4;
extern "C" unsigned long g_005982a8;
extern "C" unsigned long g_005982ac;
extern "C" unsigned long g_005982b0;
extern "C" unsigned long g_005982b4;
extern "C" unsigned long g_005982b8;
extern "C" unsigned long g_005982bc;
extern "C" unsigned long g_005982c0;
extern "C" unsigned long g_005982c4;
extern "C" unsigned long g_005982c8;
extern "C" unsigned long g_005982cc;
extern "C" unsigned long g_005982d0;
extern "C" unsigned long g_005982d4;
extern "C" unsigned long g_005982d8;
extern "C" unsigned long g_00598380;
extern "C" unsigned long g_005984a0;
extern "C" unsigned long g_005984ac;
extern "C" unsigned long g_005984f4;
extern "C" unsigned long g_00598520;
extern "C" unsigned long g_005985e4;
extern "C" unsigned long g_005985e6;
extern "C" unsigned long g_005986b4;
extern "C" unsigned long g_005986b8;
extern "C" unsigned long g_005986bc;
extern "C" unsigned long g_005986c0;
extern "C" unsigned long g_005986c4;
extern "C" unsigned long g_005986c8;
extern "C" unsigned long g_005986cc;
extern "C" unsigned long g_005986d0;
extern "C" unsigned long g_005986d4;
extern "C" unsigned long g_005986d8;
extern "C" unsigned long g_005986dc;
extern "C" unsigned long g_005986e0;
extern "C" unsigned long g_005986e4;
extern "C" unsigned long g_005986e8;
extern "C" unsigned long g_005986ec;
extern "C" unsigned long g_005986f0;
extern "C" unsigned long g_005986f4;
extern "C" unsigned long g_005986f8;
extern "C" unsigned long g_005986fc;
extern "C" unsigned long g_00598700;
extern "C" unsigned long g_00598704;
void BLMainGLSBPutCodeView::editBoxEditingDidBegin(cocos2d::extension::CCEditBox* p1)
{
  return;
}

void BLMainGLSBPutCodeView::editBoxEditingDidEnd(cocos2d::extension::CCEditBox* p1)
{
  return;
}

void BLMainGLSBPutCodeView::editBoxTextChanged(cocos2d::extension::CCEditBox* p1, std::string const& p2)
{
  return;
}

void BLMainGLSBPutCodeView::editBoxReturn(cocos2d::extension::CCEditBox* p1)
{
  return;
}

BLMainGLSBPutCodeView::~BLMainGLSBPutCodeView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_00597bf8 + g_00597c84);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x218;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x248;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x254;
  *(int *)((int)this + 4*(0x42)) = iVar2 + 0x264;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  if (*(int *)((int)this + 4*(0x43)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x43)) = 0;
  }
  if (*(int *)((int)this + 4*(0x44)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x44)) = 0;
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00597c52 + g_00597c88,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}


int * BLMainGLSBPutCodeView::create()
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

undefined4 BLMainGLSBPutCodeView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

undefined4 BLMainGLSBPutCodeView::getBackGround()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

undefined4 BLMainGLSBPutCodeView::getTabBg()
{
  return *(undefined4 *)(((int)this) + 0x118);
}

undefined4 BLMainGLSBPutCodeView::getLabTitle()
{
  return *(undefined4 *)(((int)this) + 0x11c);
}

undefined4 BLMainGLSBPutCodeView::getLabTip()
{
  return *(undefined4 *)(((int)this) + 0x120);
}

undefined4 BLMainGLSBPutCodeView::getLabOK()
{
  return *(undefined4 *)(((int)this) + 0x130);
}

undefined4 BLMainGLSBPutCodeView::getBtnClose()
{
  return *(undefined4 *)(((int)this) + 300);
}

undefined4 BLMainGLSBPutCodeView::getBtnOK()
{
  return *(undefined4 *)(((int)this) + 0x128);
}

undefined4 BLMainGLSBPutCodeView::getEditContent()
{
  return *(undefined4 *)(((int)this) + 0x124);
}

void BLMainGLSBPutCodeView::onExit()
{
  ((BLMainGLSBPutCodePresenter *)*(undefined4 *)(((int)this) + 0x110))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

void BLMainGLSBPutCodeView::onEnter()
{
  ((BLMainGLSBPutCodePresenter *)*(undefined4 *)(((int)this) + 0x110))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

// ===== 修复: 补回被误删的函数占位 (2) =====
BLMainGLSBPutCodeView::BLMainGLSBPutCodeView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = (undefined4)(intptr_t)(*(int *)(g_00597da8 + 0x597d30));
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x218;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x248;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x254;
  *(int *)((int)this + 4*(0x42)) = iVar2 + 0x264;
  iVar2 = (undefined4)(intptr_t)(cocos2d::CCArray::create());
  *(int *)((int)this + 4*(0x43)) = iVar2;
  if (iVar2 != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLMainGLSBPutCodeView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

bool BLMainGLSBPutCodeView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
