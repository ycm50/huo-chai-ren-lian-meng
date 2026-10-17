#include "BLFunctionIntroductionItemPresenter.h"
#include "CCDirector.h"
#include "CCObject.h"
#include "CCArray.h"
#include "BLFunctionIntroductionItemView.h"
#include "BLLeakUtils.h"
#include "BLRichText.h"
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
extern "C" long long func_0079e5fc(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0064b114;
extern "C" unsigned long UNK_0064b128;
extern "C" unsigned long UNK_0064b272;
extern "C" unsigned long UNK_0064b284;
extern "C" unsigned long _UNK_0064b158;
extern "C" unsigned long _UNK_0064b15c;
extern "C" unsigned long _UNK_0064b2b0;
extern "C" unsigned long _UNK_0064b2b4;
extern "C" unsigned long _UNK_0064b34c;
extern "C" unsigned long _UNK_0064b350;
extern "C" unsigned long g_0064b114;
extern "C" unsigned long g_0064b128;
extern "C" unsigned long g_0064b158;
extern "C" unsigned long g_0064b15c;
extern "C" unsigned long g_0064b272;
extern "C" unsigned long g_0064b284;
extern "C" unsigned long g_0064b2b0;
extern "C" unsigned long g_0064b2b4;
extern "C" unsigned long g_0064b34c;
extern "C" unsigned long g_0064b350;
BLFunctionIntroductionItemPresenter::~BLFunctionIntroductionItemPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int *piStack_18;
  undefined4 uStack_14;
  
  /* VPTR_FIX(R87): vptr=(&g_A+g_B)+8 ?? g_ ?? 0 ?? -> ???? SEGV?????? vptr???? */;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0064b128 + g_0064b15c,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLFunctionIntroductionItemPresenter::BLFunctionIntroductionItemPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  /* VPTR_FIX(R87): vptr=(&g_A+g_B)+8 ?? g_ ?? 0 ?? -> ???? SEGV?????? vptr???? */;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0064b284 + g_0064b2b4,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

undefined4 BLFunctionIntroductionItemPresenter::create()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x18))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

// ===== 修复: 补回被误删的函数占位 (2) =====
void BLFunctionIntroductionItemPresenter::initWithView(BLFunctionIntroductionItemView* p1)
{
  *(undefined4 *)(((int)this) + 0x14) = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  return;
}

void BLFunctionIntroductionItemPresenter::updateWithData(cocos2d::CCArray* p1)
{
  undefined4 p3 = 0;

  undefined4 uVar1;
  int *piVar2;
  int *piVar3;
  code *pcVar4;
  int iStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  iStack_20 = (undefined4)(intptr_t)((int *)((int)this));
  uStack_1c = (undefined4)(p1);
  uStack_18 = (undefined4)(p3);
  (**(code **)(**(int **)(((int)this) + 0x14) + 0x104))(*(int **)(((int)this) + 0x14),1);
  cocos2d::CCDirector::sharedDirector();
  uVar1 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  func_0079e4dc(g_0064b34c,uVar1);
  uVar1 = (undefined4)(func_0079e5fc());
  piVar2 = ((void)((BLRichText *)this)->create((cocos2d::CCArray*)p1, uVar1, 0x18),(int *)0);
  piVar3 = *(int **)(((int)this) + 0x14);
  pcVar4 = *(code **)(*piVar3 + 0x88);
  uVar1 = (undefined4)((**(code **)(*(int *)(piVar2) + (0x8c)))());
  (*pcVar4)(piVar3,uVar1);
  pcVar4 = *(code **)(*piVar2 + 0x4c);
  0 /* ctorZero */;
  (*pcVar4)(piVar2,&iStack_20);
  (**(code **)(**(int **)(((int)this) + 0x14) + 200))(*(int **)(((int)this) + 0x14),piVar2);
  return;
}
