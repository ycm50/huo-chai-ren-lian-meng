#include "BLPracticeBuyLocView.h"
#include "BLLeakUtils.h"
#include "BLPracticeBuyLocPresenter.h"
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
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0063c088;
extern "C" unsigned long UNK_0063c0cc;
extern "C" unsigned long UNK_0063c110;
extern "C" unsigned long UNK_0063c138;
extern "C" unsigned long UNK_0063c2a0;
extern "C" unsigned long UNK_0063c394;
extern "C" unsigned long UNK_0063c396;
extern "C" unsigned long UNK_0063c466;
extern "C" unsigned long UNK_0063c502;
extern "C" unsigned long UNK_0063c602;
extern "C" unsigned long UNK_0063c606;
extern "C" unsigned long UNK_0063c71c;
extern "C" unsigned long UNK_0063c80e;
extern "C" unsigned long UNK_0063c942;
extern "C" unsigned long UNK_0063c944;
extern "C" unsigned long UNK_0063caaa;
extern "C" unsigned long UNK_0063cafc;
extern "C" unsigned long UNK_0063cc36;
extern "C" unsigned long UNK_0063cc38;
extern "C" unsigned long _DAT_0063c1d8;
extern "C" unsigned long _DAT_0063c1dc;
extern "C" unsigned long _UNK_0063c0fc;
extern "C" unsigned long _UNK_0063c100;
extern "C" unsigned long _UNK_0063c114;
extern "C" unsigned long _UNK_0063c13c;
extern "C" unsigned long _UNK_0063c680;
extern "C" unsigned long _UNK_0063c684;
extern "C" unsigned long _UNK_0063c688;
extern "C" unsigned long _UNK_0063c68c;
extern "C" unsigned long _UNK_0063c690;
extern "C" unsigned long _UNK_0063c694;
extern "C" unsigned long _UNK_0063c698;
extern "C" unsigned long _UNK_0063c69c;
extern "C" unsigned long _UNK_0063c6a0;
extern "C" unsigned long _UNK_0063c6a4;
extern "C" unsigned long _UNK_0063c6a8;
extern "C" unsigned long _UNK_0063c6ac;
extern "C" unsigned long _UNK_0063c6b0;
extern "C" unsigned long _UNK_0063c6b4;
extern "C" unsigned long _UNK_0063c6b8;
extern "C" unsigned long _UNK_0063c6bc;
extern "C" unsigned long _UNK_0063cab4;
extern "C" unsigned long _UNK_0063cab8;
extern "C" unsigned long _UNK_0063cabc;
extern "C" unsigned long _UNK_0063cac0;
extern "C" unsigned long _UNK_0063cac4;
extern "C" unsigned long _UNK_0063cac8;
extern "C" unsigned long _UNK_0063cacc;
extern "C" unsigned long _UNK_0063cad0;
extern "C" unsigned long _UNK_0063cad4;
extern "C" unsigned long _UNK_0063cd48;
extern "C" unsigned long _UNK_0063cd4c;
extern "C" unsigned long _UNK_0063cd50;
extern "C" unsigned long _UNK_0063cd54;
extern "C" unsigned long _UNK_0063cd58;
extern "C" unsigned long _UNK_0063cd5c;
extern "C" unsigned long g_0063c088;
extern "C" unsigned long g_0063c0cc;
extern "C" unsigned long g_0063c0fc;
extern "C" unsigned long g_0063c100;
extern "C" unsigned long g_0063c110;
extern "C" unsigned long g_0063c114;
extern "C" unsigned long g_0063c138;
extern "C" unsigned long g_0063c13c;
extern "C" unsigned long g_0063c1d8;
extern "C" unsigned long g_0063c1dc;
extern "C" unsigned long g_0063c2a0;
extern "C" unsigned long g_0063c394;
extern "C" unsigned long g_0063c396;
extern "C" unsigned long g_0063c466;
extern "C" unsigned long g_0063c502;
extern "C" unsigned long g_0063c602;
extern "C" unsigned long g_0063c606;
extern "C" unsigned long g_0063c680;
extern "C" unsigned long g_0063c684;
extern "C" unsigned long g_0063c688;
extern "C" unsigned long g_0063c68c;
extern "C" unsigned long g_0063c690;
extern "C" unsigned long g_0063c694;
extern "C" unsigned long g_0063c698;
extern "C" unsigned long g_0063c69c;
extern "C" unsigned long g_0063c6a0;
extern "C" unsigned long g_0063c6a4;
extern "C" unsigned long g_0063c6a8;
extern "C" unsigned long g_0063c6ac;
extern "C" unsigned long g_0063c6b0;
extern "C" unsigned long g_0063c6b4;
extern "C" unsigned long g_0063c6b8;
extern "C" unsigned long g_0063c6bc;
extern "C" unsigned long g_0063c71c;
extern "C" unsigned long g_0063c80e;
extern "C" unsigned long g_0063c942;
extern "C" unsigned long g_0063c944;
extern "C" unsigned long g_0063caaa;
extern "C" unsigned long g_0063cab4;
extern "C" unsigned long g_0063cab8;
extern "C" unsigned long g_0063cabc;
extern "C" unsigned long g_0063cac0;
extern "C" unsigned long g_0063cac4;
extern "C" unsigned long g_0063cac8;
extern "C" unsigned long g_0063cacc;
extern "C" unsigned long g_0063cad0;
extern "C" unsigned long g_0063cad4;
extern "C" unsigned long g_0063cafc;
extern "C" unsigned long g_0063cc36;
extern "C" unsigned long g_0063cc38;
extern "C" unsigned long g_0063cd48;
extern "C" unsigned long g_0063cd4c;
extern "C" unsigned long g_0063cd50;
extern "C" unsigned long g_0063cd54;
extern "C" unsigned long g_0063cd58;
extern "C" unsigned long g_0063cd5c;
BLPracticeBuyLocView::~BLPracticeBuyLocView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0063c088 + g_0063c0fc);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  if (*(int *)((int)this + 4*(0x4a)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x4a)) = 0;
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0063c0cc + g_0063c100,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLPracticeBuyLocView::BLPracticeBuyLocView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(g_0063c1d8 + 0x63c180);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLPracticeBuyLocView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * BLPracticeBuyLocView::create()
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

undefined4 BLPracticeBuyLocView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x128);
}

bool BLPracticeBuyLocView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void BLPracticeBuyLocView::onEnter()
{
  ((BLPracticeBuyLocPresenter *)*(undefined4 *)(((int)this) + 0x128))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLPracticeBuyLocView::onExit()
{
  ((BLPracticeBuyLocPresenter *)*(undefined4 *)(((int)this) + 0x128))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}
