#include "BLSuitComposePresenter.h"
#include "CCObject.h"
#include "BLSuitComposeView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLSuitComposeInfoPresenter.h"
#include "BLSuitComposeListPresenter.h"
#include "Toast.h"
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
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0068ce72;
extern "C" unsigned long UNK_0068ce84;
extern "C" unsigned long UNK_0068cede;
extern "C" unsigned long UNK_0068cef0;
extern "C" unsigned long UNK_0068cf94;
extern "C" unsigned long _UNK_0068ceb4;
extern "C" unsigned long _UNK_0068ceb8;
extern "C" unsigned long _UNK_0068cf1c;
extern "C" unsigned long _UNK_0068cf20;
extern "C" unsigned long _UNK_0068cfd0;
extern "C" unsigned long g_0068ce72;
extern "C" unsigned long g_0068ce84;
extern "C" unsigned long g_0068ceb4;
extern "C" unsigned long g_0068ceb8;
extern "C" unsigned long g_0068cede;
extern "C" unsigned long g_0068cef0;
extern "C" unsigned long g_0068cf1c;
extern "C" unsigned long g_0068cf20;
extern "C" unsigned long g_0068cf94;
extern "C" unsigned long g_0068cfd0;
BLSuitComposePresenter::~BLSuitComposePresenter()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;

  undefined4 uVar1;
  int *piStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  /* VPTR_FIX(R87): vptr=(&g_A+g_B)+8 ?? g_ ?? 0 ?? -> ???? SEGV?????? vptr???? */;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uStack_10 = (undefined4)(p3);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0068ce84 + g_0068ceb8,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLSuitComposePresenter::BLSuitComposePresenter()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;

  undefined4 uVar1;
  int *piStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uStack_10 = (undefined4)(p3);
  0 /* ctorZero */;
  /* VPTR_FIX(R87): vptr=(&g_A+g_B)+8 ?? g_ ?? 0 ?? -> ???? SEGV?????? vptr???? */;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0068cef0 + g_0068cf20,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

undefined4 BLSuitComposePresenter::create()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x18))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLSuitComposePresenter::initWithView(BLSuitComposeView* p1)
{
  *(undefined4 *)(((int)this) + 0x14) = (undefined4)(intptr_t)p1;
  return;
}

void BLSuitComposePresenter::onExit()
{
  return;
}

void BLSuitComposePresenter::initWithData(int p1)
{
  ((BLSuitComposeInfoPresenter *)this)->initWithId(*(undefined4 *)(*(int *)(*(int *)(((int)this) + 0x14) + 0x110) + 0x108));
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
void BLSuitComposePresenter::onEnter()
{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_1c [4];
  undefined1 auStack_18 [4];
  undefined4 auStack_14 [2];
  
  iVar1 = (undefined4)(intptr_t)(((BLSuitComposeListPresenter *)(*(undefined4 *)(*(int *)(*(int *)(((int)this) + 0x14) + 0x10c) + 0x108)))->getDefaultId());
  if (iVar1 < 1) {
    uVar2 = (undefined4)(((Toast *)this)->sharedToast());
    uVar3 = (undefined4)(((BLLanguage *)this)->share());
    func_0079e45c(auStack_18,(unsigned char *)((char *)&g_0068cf94 + (intptr_t)(g_0068cfd0)),auStack_1c);
    (((BLLanguage *)this))->getString(*(std::string *)auStack_14);
    ((Toast *)(uVar2))->showToast((char const*)auStack_14[0]);
    func_0079e2bc(auStack_14);
    func_0079e2bc(auStack_18);
  }
  else {
    BLSuitComposePresenter::initWithData(((int)this));
  }
  return;
}
