#include "BLTreasureRecordItemPresenter.h"
#include "CCObject.h"
#include "CCArray.h"
#include "BLLeakUtils.h"
#include "BLRichText.h"
#include "BLTreasureRecordItemView.h"
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
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e5fc(...);
extern "C" long long func_0079e7b4(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_006aacd8;
extern "C" unsigned long UNK_006aacec;
extern "C" unsigned long UNK_006aae9e;
extern "C" unsigned long UNK_006aaeb0;
extern "C" unsigned long _UNK_006aad1c;
extern "C" unsigned long _UNK_006aad20;
extern "C" unsigned long _UNK_006aaedc;
extern "C" unsigned long _UNK_006aaee0;
extern "C" unsigned long _UNK_006ab028;
extern "C" unsigned long _UNK_006ab02c;
extern "C" unsigned long _UNK_006ab030;
extern "C" unsigned long g_006aacd8;
extern "C" unsigned long g_006aacec;
extern "C" unsigned long g_006aad1c;
extern "C" unsigned long g_006aad20;
extern "C" unsigned long g_006aae9e;
extern "C" unsigned long g_006aaeb0;
extern "C" unsigned long g_006aaedc;
extern "C" unsigned long g_006aaee0;
extern "C" unsigned long g_006ab028;
extern "C" unsigned long g_006ab02c;
extern "C" unsigned long g_006ab030;
BLTreasureRecordItemPresenter::~BLTreasureRecordItemPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int *piStack_18;
  undefined4 uStack_14;
  
  /* VPTR_FIX(R87): vptr=(&g_A+g_B)+8 ?? g_ ?? 0 ?? -> ???? SEGV?????? vptr???? */;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_006aacec + g_006aad20,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLTreasureRecordItemPresenter::BLTreasureRecordItemPresenter()
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
  func_0079e45c(&uStack_14,&g_006aaeb0 + g_006aaee0,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

undefined4 BLTreasureRecordItemPresenter::create()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x18))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLTreasureRecordItemPresenter::onEnter()
{
  return;
}

void BLTreasureRecordItemPresenter::onExit()
{
  return;
}

// ===== 修复: 补回被误删的函数占位 (2) =====
void BLTreasureRecordItemPresenter::initWithView(BLTreasureRecordItemView* p1)
{
  *(undefined4 *)(((int)this) + 0x14) = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  return;
}

void BLTreasureRecordItemPresenter::initWithData(cocos2d::CCArray* p1)
{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 uVar6;
  code *pcVar7;
  int *piVar8;
  undefined4 auStack_20 [3];
  
  0 /* ctorZero */;
  func_0079e57c(auStack_20[0],g_006ab030);
  uVar1 = (undefined4)(func_0079e5fc());
  piVar2 = ((void)((BLRichText *)this)->create((cocos2d::CCArray*)p1, uVar1, 0x14),(int *)0);
  iVar3 = (undefined4)(intptr_t)((**(code **)(**(int **)(((int)this) + 0x14) + 0x8c))());
  uVar1 = (undefined4)(*(undefined4 *)(iVar3 + 4));
  iVar3 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar2) + (0x8c)))(piVar2));
  iVar3 = (undefined4)(intptr_t)(func_0079e7b4(uVar1,*(undefined4 *)(iVar3 + 4)));
  if (iVar3 == 0) {
    piVar8 = *(int **)(((int)this) + 0x14);
    pcVar7 = *(code **)(*piVar8 + 0x8c);
  }
  else {
    pcVar7 = *(code **)(*piVar2 + 0x8c);
    piVar8 = piVar2;
  }
  iVar3 = (undefined4)(intptr_t)((*pcVar7)(piVar8));
  piVar8 = *(int **)(((int)this) + 0x14);
  uVar1 = (undefined4)(*(undefined4 *)(iVar3 + 4));
  pcVar7 = *(code **)(*piVar8 + 0x88);
  puVar4 = (undefined4 *)(**(code **)(*(int *)(piVar8) + (0x8c)))(piVar8);
  0 /* ctorZero */;
  (*pcVar7)(piVar8,auStack_20);
  piVar8 = (int *)((BLTreasureRecordItemView *)(*(undefined4 *)(((int)this) + 0x14)))->getSpBg();
  pcVar7 = *(code **)(*piVar8 + 0x1d4);
  piVar5 = (int *)((BLTreasureRecordItemView *)(*(undefined4 *)(((int)this) + 0x14)))->getSpBg();
  puVar4 = (undefined4 *)(**(code **)(*(int *)(piVar5) + (0x8c)))();
  0 /* ctorZero */;
  (*pcVar7)(piVar8,auStack_20);
  (**(code **)(**(int **)(((int)this) + 0x14) + 200))(*(int **)(((int)this) + 0x14),piVar2);
  pcVar7 = *(code **)(*piVar2 + 0x4c);
  piVar8 = (int *)(**(code **)(*(int *)(piVar2) + (0x8c)))(piVar2);
  uVar1 = (undefined4)(func_0079e4fc(*piVar8 + -0x80000000,0x3f000000));
  iVar3 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar2) + (0x8c)))(piVar2));
  uVar6 = (undefined4)(func_0079e4fc(*(int *)(iVar3 + 4) + -0x80000000,0x3f000000));
  0 /* ctorZero */;
  (*pcVar7)(piVar2,auStack_20);
  return;
}
