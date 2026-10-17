#include "BLImmortalsRefineInfoPresenter.h"
#include "BLImmortalsRefineAttrItemPresenter.h"
#include "BLImmortalsRefineLockPresenter.h"
#include "BLLeakUtils.h"
#include "ImmortalsRoleItemData.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <new>   // ghost_fix.js 自动补齐
using namespace cocos2d;
// 兜底声明
template <class T, class... A> std::string ConvertToString(A...);
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e30c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e784(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0056cc58;
extern "C" unsigned long UNK_0056cc72;
extern "C" unsigned long UNK_0056ccb8;
extern "C" unsigned long UNK_0056cd78;
extern "C" unsigned long UNK_0056cfd6;
extern "C" unsigned long UNK_0056cfee;
extern "C" unsigned long UNK_0056dee4;
extern "C" unsigned long UNK_0056def2;
extern "C" unsigned long UNK_0056df04;
extern "C" unsigned long UNK_0056df16;
extern "C" unsigned long UNK_0056df28;
extern "C" unsigned long UNK_0056dfe0;
extern "C" unsigned long UNK_0056dff6;
extern "C" unsigned long _UNK_0056cca4;
extern "C" unsigned long _UNK_0056cca8;
extern "C" unsigned long _UNK_0056ccbc;
extern "C" unsigned long _UNK_0056cd7c;
extern "C" unsigned long _UNK_0056d018;
extern "C" unsigned long _UNK_0056d01c;
extern "C" unsigned long _UNK_0056e054;
extern "C" unsigned long _UNK_0056e058;
extern "C" unsigned long _UNK_0056e05c;
extern "C" unsigned long _UNK_0056e060;
extern "C" unsigned long _UNK_0056e064;
extern "C" unsigned long _UNK_0056e068;
extern "C" unsigned long _UNK_0056e06c;
extern "C" unsigned long g_0056cc58;
extern "C" unsigned long g_0056cc72;
extern "C" unsigned long g_0056cca4;
extern "C" unsigned long g_0056cca8;
extern "C" unsigned long g_0056ccb8;
extern "C" unsigned long g_0056ccbc;
extern "C" unsigned long g_0056cd78;
extern "C" unsigned long g_0056cd7c;
extern "C" unsigned long g_0056cfd6;
extern "C" unsigned long g_0056cfee;
extern "C" unsigned long g_0056d018;
extern "C" unsigned long g_0056d01c;
extern "C" unsigned long g_0056dee4;
extern "C" unsigned long g_0056def2;
extern "C" unsigned long g_0056df04;
extern "C" unsigned long g_0056df16;
extern "C" unsigned long g_0056df28;
extern "C" unsigned long g_0056dfe0;
extern "C" unsigned long g_0056dff6;
extern "C" unsigned long g_0056e054;
extern "C" unsigned long g_0056e058;
extern "C" unsigned long g_0056e05c;
extern "C" unsigned long g_0056e060;
extern "C" unsigned long g_0056e064;
extern "C" unsigned long g_0056e068;
extern "C" unsigned long g_0056e06c;
bool BLImmortalsRefineInfoPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

BLImmortalsRefineInfoPresenter::~BLImmortalsRefineInfoPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0056cc58 + g_0056cca4);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x2c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0056cc72 + g_0056cca8,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLImmortalsRefineInfoPresenter::BLImmortalsRefineInfoPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_0056cfd6 + g_0056d018);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x2c;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0056cfee + g_0056d01c,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

undefined4 BLImmortalsRefineInfoPresenter::create()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x20))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLImmortalsRefineInfoPresenter::onEnter()
{
  return;
}

void BLImmortalsRefineInfoPresenter::onExit()
{
  return;
}

void BLImmortalsRefineInfoPresenter::resetLockStatus()
{
  int *piVar1;
  
  for (piVar1 = *(int **)(*(int *)(((int)this) + 0x18) + 300);
      piVar1 != *(int **)(*(int *)(((int)this) + 0x18) + 0x130); piVar1 = piVar1 + 1) {
    ((BLImmortalsRefineLockPresenter *)*(undefined4 *)(*piVar1 + 0x108))->reset();
  }
  return;
}

// ===== 修复: 补回被误删的函数占位 (2) =====

void BLImmortalsRefineInfoPresenter::updateWithData(ImmortalsRoleItemData* p1)
{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  bool bVar9;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [8];
  
  *(int *)(((int)this) + 0x1c) = (undefined4)(intptr_t)p1;
  if ((int)(intptr_t)p1 != 0) {
    ((ImmortalsRoleItemData *)p1)->updateRefineAttrLimit();
  }
  bVar9 = (undefined4)(intptr_t)(*(int *)(((int)this) + 0x1c) != 0);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x18) + 0x10c);
  (**(code **)(*piVar1 + 0x90))(piVar1,bVar9);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x18) + 0x110);
  (**(code **)(*piVar1 + 0x90))(piVar1,bVar9);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x18) + 0x114);
  (**(code **)(*piVar1 + 0x90))(piVar1,bVar9);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x18) + 0x118);
  (**(code **)(*piVar1 + 0x90))(piVar1,bVar9);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x18) + 0x11c);
  (**(code **)(*piVar1 + 0x90))(piVar1,bVar9);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x18) + 0x138);
  (**(code **)(*piVar1 + 0x90))(piVar1,bVar9);
  for (puVar7 = *(undefined4 **)(*(int *)(((int)this) + 0x18) + 0x120);
      puVar7 != *(undefined4 **)(*(int *)(((int)this) + 0x18) + 0x124); puVar7 = puVar7 + 1) {
    (**(code **)(*(int *)*puVar7 + 0x90))((int *)*puVar7,bVar9);
  }
  for (puVar7 = *(undefined4 **)(*(int *)(((int)this) + 0x18) + 300);
      puVar7 != *(undefined4 **)(*(int *)(((int)this) + 0x18) + 0x130); puVar7 = puVar7 + 1) {
    (**(code **)(*(int *)*puVar7 + 0x90))((int *)*puVar7,bVar9);
  }
  func_0079e45c(&uStack_2c,(unsigned char *)((char *)&g_0056dee4 + (intptr_t)(g_0056e054)),&uStack_30);
  func_0079e45c(auStack_28,(unsigned char *)((char *)&g_0056def2 + (intptr_t)(g_0056e058)),&uStack_30);
  func_0079e45c(auStack_24,(unsigned char *)((char *)&g_0056df04 + (intptr_t)(g_0056e05c)),&uStack_30);
  func_0079e45c(auStack_20,(unsigned char *)((char *)&g_0056df16 + (intptr_t)(g_0056e060)),&uStack_30);
  func_0079e45c(auStack_1c,(unsigned char *)((char *)&g_0056df28 + (intptr_t)(g_0056e064)),&uStack_30);
  if ((int)(intptr_t)p1 != 0) {
    piVar1 = *(int **)(*(int *)(((int)this) + 0x18) + 0x11c);
    pcVar3 = *(code **)(*piVar1 + 0x234);
    ConvertToString<int>(&uStack_30, *(undefined4 *)(*(int *)(((int)this) + 0x1c) + 0x14), 0);
    (*pcVar3)(piVar1,uStack_30);
    func_0079e2bc(&uStack_30);
    iVar5 = (undefined4)(intptr_t)(0 /* ctorZero */);
    piVar1 = *(int **)(*(int *)(((int)this) + 0x18) + 0x110);
    (**(code **)(*piVar1 + 0x234))(piVar1,(&uStack_2c)[iVar5 + -1]);
    piVar1 = *(int **)(*(int *)(((int)this) + 0x18) + 0x110);
    (**(code **)(*piVar1 + 0x1b4))(piVar1,&g_0056dfe0 + (iVar5 + -1) * 3 + g_0056e068);
    uVar8 = (undefined4)(0);
    piVar1 = *(int **)(*(int *)(((int)this) + 0x1c) + 0x24);
    iVar4 = (undefined4)(intptr_t)(piVar1[1]);
    iVar5 = (int)*(int *)&(*piVar1);
    for (iVar6 = 0; iVar6 < iVar4 - iVar5 >> 2; iVar6 = iVar6 + 1) {
      piVar1 = (int *)((std::vector<int, std::allocator<int>> *)*(undefined4 *)(*(int *)(((int)this) + 0x1c) + 0x24))->at((unsigned int)iVar6);
      if (*piVar1 != 0) {
        iVar2 = (undefined4)(intptr_t)(*(int *)(*(int *)(((int)this) + 0x18) + 0x120));
        if ((uint)(*(int *)(*(int *)(((int)this) + 0x18) + 0x124) - iVar2 >> 2) <= uVar8) {
          func_0079e784((unsigned char *)((char *)&g_0056dff6 + (intptr_t)(g_0056e06c)),uVar8);
          iVar5 = 4;
          do {
            func_0079e2bc(&uStack_2c + iVar5);
            bVar9 = (undefined4)(intptr_t)(iVar5 != 0);
            iVar5 = (undefined4)(intptr_t)(iVar5 + -1);
          } while (bVar9);
          func_0079e30c();
          return;
        }
        ((BLImmortalsRefineAttrItemPresenter *)*(undefined4 *)(*(int *)(uVar8 * 4 + iVar2) + 0x108))->updateWithData((ImmortalsRoleItemData*)*(undefined4 *)(((int)this) + 0x1c), iVar6);
        uVar8 = (undefined4)(uVar8 + 1);
      }
    }
  }
  iVar5 = 4;
  do {
    func_0079e2bc(&uStack_2c + iVar5);
    bVar9 = (undefined4)(intptr_t)(iVar5 != 0);
    iVar5 = (undefined4)(intptr_t)(iVar5 + -1);
  } while (bVar9);
  return;
}
