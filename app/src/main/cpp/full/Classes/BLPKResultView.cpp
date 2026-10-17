#include "BLPKResultView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLPKResultPresenter.h"
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
extern "C" unsigned long UNK_00668f68;
extern "C" unsigned long UNK_00668fba;
extern "C" unsigned long UNK_00669000;
extern "C" unsigned long UNK_00669028;
extern "C" unsigned long UNK_006691e0;
extern "C" unsigned long UNK_006692c2;
extern "C" unsigned long UNK_00669398;
extern "C" unsigned long UNK_00669490;
extern "C" unsigned long UNK_006694c0;
extern "C" unsigned long UNK_00669592;
extern "C" unsigned long UNK_006695bc;
extern "C" unsigned long _DAT_006690e0;
extern "C" unsigned long _DAT_006690e4;
extern "C" unsigned long _UNK_00668fec;
extern "C" unsigned long _UNK_00668ff0;
extern "C" unsigned long _UNK_00669004;
extern "C" unsigned long _UNK_0066902c;
extern "C" unsigned long _UNK_006695c4;
extern "C" unsigned long _UNK_006695c8;
extern "C" unsigned long _UNK_006695cc;
extern "C" unsigned long _UNK_006695d0;
extern "C" unsigned long _UNK_006695d4;
extern "C" unsigned long _UNK_006695d8;
extern "C" unsigned long _UNK_006695dc;
extern "C" unsigned long _UNK_006695e0;
extern "C" unsigned long _UNK_006695e4;
extern "C" unsigned long _UNK_006695e8;
extern "C" unsigned long _UNK_006695ec;
extern "C" unsigned long _UNK_006695f0;
extern "C" unsigned long _UNK_006695f4;
extern "C" unsigned long _UNK_006695f8;
extern "C" unsigned long _UNK_006695fc;
extern "C" unsigned long _UNK_00669600;
extern "C" unsigned long _UNK_00669604;
extern "C" unsigned long _UNK_00669608;
extern "C" unsigned long _UNK_00669744;
extern "C" unsigned long _UNK_00669748;
extern "C" unsigned long _UNK_0066974c;
extern "C" unsigned long g_00668f68;
extern "C" unsigned long g_00668fba;
extern "C" unsigned long g_00668fec;
extern "C" unsigned long g_00668ff0;
extern "C" unsigned long g_00669000;
extern "C" unsigned long g_00669004;
extern "C" unsigned long g_00669028;
extern "C" unsigned long g_0066902c;
extern "C" unsigned long g_006690e0;
extern "C" unsigned long g_006690e4;
extern "C" unsigned long g_006691e0;
extern "C" unsigned long g_006692c2;
extern "C" unsigned long g_00669398;
extern "C" unsigned long g_00669490;
extern "C" unsigned long g_006694c0;
extern "C" unsigned long g_00669592;
extern "C" unsigned long g_006695bc;
extern "C" unsigned long g_006695c4;
extern "C" unsigned long g_006695c8;
extern "C" unsigned long g_006695cc;
extern "C" unsigned long g_006695d0;
extern "C" unsigned long g_006695d4;
extern "C" unsigned long g_006695d8;
extern "C" unsigned long g_006695dc;
extern "C" unsigned long g_006695e0;
extern "C" unsigned long g_006695e4;
extern "C" unsigned long g_006695e8;
extern "C" unsigned long g_006695ec;
extern "C" unsigned long g_006695f0;
extern "C" unsigned long g_006695f4;
extern "C" unsigned long g_006695f8;
extern "C" unsigned long g_006695fc;
extern "C" unsigned long g_00669600;
extern "C" unsigned long g_00669604;
extern "C" unsigned long g_00669608;
extern "C" unsigned long g_00669744;
extern "C" unsigned long g_00669748;
extern "C" unsigned long g_0066974c;
BLPKResultView::~BLPKResultView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_00668f68 + g_00668fec);
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
  func_0079e45c(&uStack_14,&g_00668fba + g_00668ff0,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLPKResultView::BLPKResultView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = (undefined4)(intptr_t)(*(int *)(g_006690e0 + 0x669070));
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
  func_0079e45c(&uStack_14,((intptr_t)"BLPKResultView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * BLPKResultView::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x124)));
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

undefined4 BLPKResultView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 BLPKResultView::getBackGround()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

undefined4 BLPKResultView::getSprBlackBG()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

undefined4 BLPKResultView::getBtnQuit()
{
  return *(undefined4 *)(((int)this) + 0x118);
}

undefined4 BLPKResultView::getLabQuit()
{
  return *(undefined4 *)(((int)this) + 0x11c);
}

undefined4 BLPKResultView::getSpLabel()
{
  return *(undefined4 *)(((int)this) + 0x120);
}

void BLPKResultView::onEnter()
{
  ((BLPKResultPresenter *)*(undefined4 *)(((int)this) + 0x10c))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLPKResultView::onExit()
{
  ((BLPKResultPresenter *)*(undefined4 *)(((int)this) + 0x10c))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

bool BLPKResultView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
