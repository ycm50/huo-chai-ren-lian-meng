#include "BLImmortalsEquipHorItemPresenter.h"
#include "CCNotificationCenter.h"
#include "ImmortalsRoleItemData.h"
#include "BLImmortalsEquipHorItemView.h"
#include "CCObject.h"
#include "BLLeakUtils.h"
#include "DataCacheManager.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <new>   // ghost_fix.js 自动补齐
using namespace cocos2d;
// 兜底声明
extern "C" unsigned long g_0056a5fe;
extern "C" unsigned long g_0056a608;
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e854(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0056a2a4;
extern "C" unsigned long UNK_0056a2b8;
extern "C" unsigned long UNK_0056a396;
extern "C" unsigned long UNK_0056a3a6;
extern "C" unsigned long UNK_0056a56e;
extern "C" unsigned long UNK_0056a580;
extern "C" unsigned long UNK_0056a624;
extern "C" unsigned long UNK_0056a634;
extern "C" unsigned long UNK_0056a646;
extern "C" unsigned long UNK_0056a658;
extern "C" unsigned long UNK_0056a66a;
extern "C" unsigned long UNK_0056a68e;
extern "C" unsigned long _UNK_0056a2e8;
extern "C" unsigned long _UNK_0056a2ec;
extern "C" unsigned long _UNK_0056a3b8;
extern "C" unsigned long _UNK_0056a3bc;
extern "C" unsigned long _UNK_0056a5b0;
extern "C" unsigned long _UNK_0056a5b4;
extern "C" unsigned long _UNK_0056a6f4;
extern "C" unsigned long _UNK_0056a6f8;
extern "C" unsigned long _UNK_0056a6fc;
extern "C" unsigned long _UNK_0056a700;
extern "C" unsigned long _UNK_0056a704;
extern "C" unsigned long _UNK_0056a708;
extern "C" unsigned long g_0056a2a4;
extern "C" unsigned long g_0056a2b8;
extern "C" unsigned long g_0056a2e8;
extern "C" unsigned long g_0056a2ec;
extern "C" unsigned long g_0056a396;
extern "C" unsigned long g_0056a3a6;
extern "C" unsigned long g_0056a3b8;
extern "C" unsigned long g_0056a3bc;
extern "C" unsigned long g_0056a56e;
extern "C" unsigned long g_0056a580;
extern "C" unsigned long g_0056a5b0;
extern "C" unsigned long g_0056a5b4;
extern "C" unsigned long g_0056a624;
extern "C" unsigned long g_0056a634;
extern "C" unsigned long g_0056a646;
extern "C" unsigned long g_0056a658;
extern "C" unsigned long g_0056a66a;
extern "C" unsigned long g_0056a68e;
extern "C" unsigned long g_0056a6f4;
extern "C" unsigned long g_0056a6f8;
extern "C" unsigned long g_0056a6fc;
extern "C" unsigned long g_0056a700;
extern "C" unsigned long g_0056a704;
extern "C" unsigned long g_0056a708;
BLImmortalsEquipHorItemPresenter::~BLImmortalsEquipHorItemPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int *piStack_18;
  undefined4 uStack_14;
  
  /* VPTR_FIX(R87): vptr=(&g_A+g_B)+8 ?? g_ ?? 0 ?? -> ???? SEGV?????? vptr???? */;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0056a2b8 + g_0056a2ec,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLImmortalsEquipHorItemPresenter::onClick(cocos2d::CCObject* p1, unsigned int p2)
{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  iVar4 = *(int *)(((int)this) + 0x18);
  piVar3 = (int *)((long long)::operator new((size_t)(0x18)));
  0 /* ctorZero */;
  iVar1 = g_0056a3b8;
  piVar3[5] = iVar4;
  *piVar3 = *(int *)(&g_0056a396 + iVar1) + 8;
  ((cocos2d::CCObject *)piVar3)->autorelease();
  ((cocos2d::CCNotificationCenter *)uVar2)->postNotification((char const*)&g_0056a3a6 + g_0056a3bc, (cocos2d::CCObject*)piVar3);
  return;
}

BLImmortalsEquipHorItemPresenter::BLImmortalsEquipHorItemPresenter()
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
  func_0079e45c(&uStack_14,&g_0056a580 + g_0056a5b4,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  *(int *)((int)this + 4*(6)) = 0;
  *(int *)((int)this + 4*(7)) = 0;
  return;
}

undefined4 BLImmortalsEquipHorItemPresenter::create()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x20))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLImmortalsEquipHorItemPresenter::onEnter()
{
  return;
}

void BLImmortalsEquipHorItemPresenter::onExit()
{
  return;
}

void BLImmortalsEquipHorItemPresenter::updateWithIndex(int p1)
{
  int *piVar1;
  int iVar2;
  bool bVar3;
  undefined4 uStack_30;
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [8];
  
  *(int *)(((int)this) + 0x18) = p1;
  func_0079e45c(auStack_2c,&g_0056a624 + g_0056a6f4,&uStack_30);
  func_0079e45c(auStack_28,&g_0056a634 + g_0056a6f8,&uStack_30);
  func_0079e45c(auStack_24,&g_0056a646 + g_0056a6fc,&uStack_30);
  func_0079e45c(auStack_20,&g_0056a658 + g_0056a700,&uStack_30);
  func_0079e45c(auStack_1c,&g_0056a66a + g_0056a704,&uStack_30);
  if (p1 < 5) {
    func_0079e53c(&uStack_30,auStack_2c + *(int *)(((int)this) + 0x18) * 4);
    func_0079e854(&uStack_30,&g_0056a68e + g_0056a708);
    piVar1 = *(int **)(*(int *)(((int)this) + 0x14) + 0x110);
    (**(code **)(*piVar1 + 0x234))(piVar1,uStack_30);
    func_0079e2bc(&uStack_30);
  }
  iVar2 = 4;
  do {
    func_0079e2bc(auStack_2c + iVar2 * 4);
    bVar3 = iVar2 != 0;
    iVar2 = iVar2 + -1;
  } while (bVar3);
  return;
}

// ===== 修复: 补回被误删的函数占位 (2) =====
void BLImmortalsEquipHorItemPresenter::initWithView(BLImmortalsEquipHorItemView* p1)
{
  *(int *)(((int)this) + 0x14) = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  (**(code **)(**(int **)(p1 + 0x10c) + 0x254))
            (*(int **)(p1 + 0x10c),((int)this),*(undefined4 *)((unsigned char *)((char *)&g_0056a5fe + (intptr_t)(g_0056a608))),0,
             0x20);
  return;
}

void BLImmortalsEquipHorItemPresenter::updateWithData(ImmortalsRoleItemData* p1)
{
  undefined4 uVar1;
  int *piVar2;
  code *pcVar3;
  int *piVar4;
  undefined1 auStack_24 [4];
  undefined4 uStack_20;
  undefined1 auStack_1c [8];
  
  *(int *)(((int)this) + 0x1c) = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  if ((int)(intptr_t)(int)(intptr_t)p1 != 0) {
    uVar1 = (undefined4)(((DataCacheManager *)this)->shareManager());
    piVar2 = ((void)((DataCacheManager *)(uVar1))->getItemDataByID(*(undefined4 *)(p1 + 4)),(int *)0);
    if (piVar2 != (int *)0x0) {
      piVar4 = *(int **)(*(int *)(((int)this) + 0x14) + 0x114);
      pcVar3 = *(code **)(*piVar4 + 0x20c);
      (**(code **)(*(int *)(piVar2) + (0x58)))(&uStack_20);
      func_0079e45c(auStack_1c,uStack_20,auStack_24);
      piVar2 = (int *)0 /* ctorZero */;
      uVar1 = (undefined4)((**(code **)(*(int *)(piVar2) + (0x214)))());
      (*pcVar3)(piVar4,uVar1);
      func_0079e2bc(auStack_1c);
      func_0079e2bc(&uStack_20);
    }
  }
  piVar2 = *(int **)(*(int *)(((int)this) + 0x14) + 0x114);
  (**(code **)(*(int *)(piVar2) + (0x90)))(piVar2,*(int *)(((int)this) + 0x1c) != 0);
  return;
}
