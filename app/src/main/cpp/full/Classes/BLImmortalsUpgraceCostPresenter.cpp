#include "BLImmortalsUpgraceCostPresenter.h"
#include "ImmortalsRoleItemData.h"
#include "CCObject.h"
#include "BLImmortalsUpgraceCostView.h"
#include "BLImmortalsItemPresenter.h"
#include "BLLeakUtils.h"
#include "BackPackData.h"
#include "BackPackItemData.h"
#include "DataCacheManager.h"
#include "DataManager.h"
#include "ImmortalsInfoData.h"
#include "ImmortalsInfoItemData.h"
#include "ImmortalsRoleData.h"
#include "ItemData.h"
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
extern "C" long long software_udf(...);

extern "C" unsigned long g_0056e6f6;
extern "C" unsigned long g_0056e700;
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e5bc(...);
extern "C" long long func_0079e68c(...);
extern "C" long long func_0079e784(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0056e414;
extern "C" unsigned long UNK_0056e428;
extern "C" unsigned long UNK_0056e666;
extern "C" unsigned long UNK_0056e678;
extern "C" unsigned long UNK_0056e8fc;
extern "C" unsigned long UNK_0056e968;
extern "C" unsigned long UNK_0056e980;
extern "C" unsigned long UNK_0056eb40;
extern "C" unsigned long _UNK_0056e458;
extern "C" unsigned long _UNK_0056e45c;
extern "C" unsigned long _UNK_0056e6a8;
extern "C" unsigned long _UNK_0056e6ac;
extern "C" unsigned long _UNK_0056e998;
extern "C" unsigned long _UNK_0056e99c;
extern "C" unsigned long _UNK_0056e9a0;
extern "C" unsigned long _UNK_0056eb9c;
extern "C" unsigned long _UNK_0056eba0;
extern "C" unsigned long extraout_r3;
extern "C" unsigned long g_0056e414;
extern "C" unsigned long g_0056e428;
extern "C" unsigned long g_0056e458;
extern "C" unsigned long g_0056e45c;
extern "C" unsigned long g_0056e666;
extern "C" unsigned long g_0056e678;
extern "C" unsigned long g_0056e6a8;
extern "C" unsigned long g_0056e6ac;
extern "C" unsigned long g_0056e8fc;
extern "C" unsigned long g_0056e968;
extern "C" unsigned long g_0056e980;
extern "C" unsigned long g_0056e998;
extern "C" unsigned long g_0056e99c;
extern "C" unsigned long g_0056e9a0;
extern "C" unsigned long g_0056eb40;
extern "C" unsigned long g_0056eb9c;
extern "C" unsigned long g_0056eba0;
BLImmortalsUpgraceCostPresenter::~BLImmortalsUpgraceCostPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int *piStack_18;
  undefined4 uStack_14;
  
  /* VPTR_FIX(R87): vptr=(&g_A+g_B)+8 ?? g_ ?? 0 ?? -> ???? SEGV?????? vptr???? */;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0056e428 + g_0056e45c,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLImmortalsUpgraceCostPresenter::BLImmortalsUpgraceCostPresenter()
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
  func_0079e45c(&uStack_14,&g_0056e678 + g_0056e6ac,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  *(int *)((int)this + 4*(6)) = 0;
  *(undefined1 *)(((int)this) + 7) = 0;
  return;
}

undefined4 BLImmortalsUpgraceCostPresenter::create()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x20))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLImmortalsUpgraceCostPresenter::onEnter()
{
  return;
}

void BLImmortalsUpgraceCostPresenter::onExit()
{
  return;
}

// ===== 修复: 补回被误删的函数占位 (4) =====
void BLImmortalsUpgraceCostPresenter::initWithView(BLImmortalsUpgraceCostView* p1)
{
  *(int *)(((int)this) + 0x14) = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  (**(code **)(**(int **)(p1 + 0x11c) + 0x254))
            (*(int **)(p1 + 0x11c),((int)this),*(undefined4 *)((unsigned char *)((char *)&g_0056e6f6 + (intptr_t)(g_0056e700))),0,
             0x20);
  return;
}

void BLImmortalsUpgraceCostPresenter::removeItem(int p1, int p2)
{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  code *pcVar5;
  
  uVar1 = (undefined4)(((DataCacheManager *)this)->shareManager());
  uVar1 = ((void)(((DataCacheManager *)(uVar1))->getItemDataByID(p1)),(undefined4)0);
  piVar2 = (int *)::operator new(0x7c);
  ::new ((void *)piVar2) ItemData();   /* ALLOC+CTOR_FIX(R116): ??->? ? dump ????? ItemData */
  iVar3 = (undefined4)(intptr_t)(((ItemData *)(piVar2))->init());
  if (iVar3 == 0) {
    (**(code **)(*(int *)(piVar2) + (8)))(piVar2);
    piVar2 = (int *)0x0;
  }
  else {
    ((cocos2d::CCObject *)(piVar2))->autorelease();
  }
  ((ItemData *)(piVar2))->initWith((ItemData*)uVar1);
  (**(code **)(*(int *)(piVar2) + (0x9c)))(piVar2,p2);
  piVar4 = (int *)((DataManager *)this)->shareDataManager();
  piVar4 = (int *)(**(code **)(*(int *)(piVar4) + (0x28)))();
  uVar1 = (undefined4)((**(code **)(*(int *)(piVar4) + (0x50)))());
  piVar2 = (int *)((BackPackData *)(uVar1))->getItemDataForCost((ItemData*)piVar2);
  piVar4 = (int *)func_0079e2fc(0x30);
  0 /* ctorZero */;
  iVar3 = (undefined4)(intptr_t)(((BackPackItemData *)(piVar4))->init());
  if (iVar3 != 0) {
    ((cocos2d::CCObject *)(piVar4))->autorelease();
    pcVar5 = *(code **)(*piVar4 + 0x1c);
    uVar1 = (undefined4)((**(code **)(*(int *)(piVar2) + (0x18)))(piVar2));
    (*pcVar5)(piVar4,uVar1);
    (**(code **)(*(int *)(piVar4) + (0x24)))(piVar4,p1);
    (**(code **)(*(int *)(piVar4) + (0x2c)))(piVar4,p2);
    piVar2 = (int *)((DataManager *)this)->shareDataManager();
    piVar2 = (int *)(**(code **)(*(int *)(piVar2) + (0x28)))();
    uVar1 = (undefined4)((**(code **)(*(int *)(piVar2) + (0x50)))());
    ((BackPackData *)(uVar1))->removeItem((BackPackItemData*)piVar4);
    return;
  }
  (**(code **)(*(int *)(piVar4) + (8)))(piVar4);
                    /* WARNING: Does not return */
  pcVar5 = (code *)software_udf(0xff,0x56e7e0);
  (*pcVar5)();
}

void BLImmortalsUpgraceCostPresenter::onUpgrace(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLImmortalsUpgraceCostPresenter::updateWithData(ImmortalsRoleItemData* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
