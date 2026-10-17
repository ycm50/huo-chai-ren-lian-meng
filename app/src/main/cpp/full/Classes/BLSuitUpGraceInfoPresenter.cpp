#include "BLSuitUpGraceInfoPresenter.h"
#include "CCObject.h"
#include "BackPackItemData.h"
#include "BLSuitUpGraceInfoView.h"
#include "BLLeakUtils.h"
#include "BLSuitUpGraceInfoPropertyPresenter.h"
#include "BLSuitUpGraceItemPresenter.h"
#include "DataCacheManager.h"
#include "SuitEquipEquipData.h"
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
extern "C" unsigned long UNK_00690804;
extern "C" unsigned long UNK_00690818;
extern "C" unsigned long UNK_00691116;
extern "C" unsigned long UNK_00691128;
extern "C" unsigned long _UNK_00690848;
extern "C" unsigned long _UNK_0069084c;
extern "C" unsigned long _UNK_00691154;
extern "C" unsigned long _UNK_00691158;
extern "C" unsigned long g_00690804;
extern "C" unsigned long g_00690818;
extern "C" unsigned long g_00690848;
extern "C" unsigned long g_0069084c;
extern "C" unsigned long g_00691116;
extern "C" unsigned long g_00691128;
extern "C" unsigned long g_00691154;
extern "C" unsigned long g_00691158;
BLSuitUpGraceInfoPresenter::~BLSuitUpGraceInfoPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int *piStack_18;
  undefined4 uStack_14;
  
  /* VPTR_FIX(R87): vptr=(&g_A+g_B)+8 ?? g_ ?? 0 ?? -> ???? SEGV?????? vptr???? */;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00690818 + g_0069084c,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLSuitUpGraceInfoPresenter::BLSuitUpGraceInfoPresenter()
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
  func_0079e45c(&uStack_14,&g_00691128 + g_00691158,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

undefined4 BLSuitUpGraceInfoPresenter::create()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x18))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLSuitUpGraceInfoPresenter::onEnter()
{
  return;
}

void BLSuitUpGraceInfoPresenter::onExit()
{
  return;
}

// ===== 修复: 补回被误删的函数占位 (2) =====
void BLSuitUpGraceInfoPresenter::initWithView(BLSuitUpGraceInfoView* p1)
{
  *(undefined4 *)(((int)this) + 0x14) = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  return;
}

void BLSuitUpGraceInfoPresenter::initWithData(BackPackItemData* p1)
{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  
  if ((int)(intptr_t)(int)(intptr_t)p1 != 0) {
    piVar4 = (int *)((DataCacheManager *)this)->shareManager();
    uVar5 = (undefined4)((**(code **)(*(int *)(piVar4) + (0xb0)))());
    uVar1 = (undefined4)((**(code **)(*(int *)(p1) + (0x20)))(p1));
    iVar2 = (undefined4)(intptr_t)(((SuitEquipEquipData *)(uVar5))->getItemById(uVar1));
    if (iVar2 != 0) {
      uVar5 = (undefined4)((**(code **)(*(int *)(p1) + (0x20)))(p1));
      iVar3 = (undefined4)(intptr_t)((**(code **)(*(int *)(p1) + (0x30)))(p1));
      piVar4 = *(int **)(*(int *)(*(int *)(((int)this) + 0x14) + 0x110) + 0x108);
      (**(code **)(*(int *)(piVar4) + (0x34)))(piVar4,iVar3);
      ((BLSuitUpGraceItemPresenter *)(*(undefined4 *)(*(int *)(*(int *)(((int)this) + 0x14) + 0x110) + 0x108)))->initWithId(uVar5);
      ((BLSuitUpGraceInfoPropertyPresenter *)(*(undefined4 *)(*(int *)(*(int *)(((int)this) + 0x14) + 0x114) + 0x108)))->initWithData(uVar5, iVar3, 0);
      if (iVar3 < *(int *)(iVar2 + 0x10)) {
        ((BLSuitUpGraceInfoPropertyPresenter *)(*(undefined4 *)(*(int *)(*(int *)(((int)this) + 0x14) + 0x11c) + 0x108)))->initWithData(uVar5, iVar3 + 1, 1);
      }
      else {
        ((BLSuitUpGraceInfoPropertyPresenter *)this)->initMaxLv();
      }
      uVar5 = (undefined4)(1);
      goto code_r0x00692132;
    }
  }
  uVar5 = (undefined4)(0);
code_r0x00692132:
  piVar4 = *(int **)(*(int *)(((int)this) + 0x14) + 0x10c);
  (**(code **)(*(int *)(piVar4) + (0x90)))(piVar4,uVar5);
  return;
}
