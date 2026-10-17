#include "BLSuitComposeInfoItemPresenter.h"
#include "CCAction.h"
#include "CCNode.h"
#include "CCGeometry.h"
#include "CCActionInterval.h"
#include "ItemData.h"
#include "CCObject.h"
#include "BLItemDataInfoPresenter.h"
#include "BLItemDataInfoView.h"
#include "BLLeakUtils.h"
#include "BLSuitItemDataInfoPresenter.h"
#include "BLSuitItemDataInfoView.h"
#include "BackPackData.h"
#include "BackPackItemData.h"
#include "DataCacheManager.h"
#include "DataManager.h"
#include "SuitEquipEquipData.h"
#include "SuitEquipEquipItemData.h"
#include "UIManager.h"
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

extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e57c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0068a5e0;
extern "C" unsigned long UNK_0068a5f4;
extern "C" unsigned long UNK_0068a7e4;
extern "C" unsigned long UNK_0068aaa6;
extern "C" unsigned long UNK_0068aab8;
extern "C" unsigned long _UNK_0068a624;
extern "C" unsigned long _UNK_0068a628;
extern "C" unsigned long _UNK_0068aa74;
extern "C" unsigned long _UNK_0068aa78;
extern "C" unsigned long _UNK_0068aa7c;
extern "C" unsigned long _UNK_0068aa80;
extern "C" unsigned long _UNK_0068aa84;
extern "C" unsigned long _UNK_0068aa88;
extern "C" unsigned long _UNK_0068aa8c;
extern "C" unsigned long _UNK_0068aa90;
extern "C" unsigned long _UNK_0068aa94;
extern "C" unsigned long _UNK_0068aae4;
extern "C" unsigned long _UNK_0068aae8;
extern "C" unsigned long g_0068a5e0;
extern "C" unsigned long g_0068a5f4;
extern "C" unsigned long g_0068a624;
extern "C" unsigned long g_0068a628;
extern "C" unsigned long g_0068a7e4;
extern "C" unsigned long g_0068aa74;
extern "C" unsigned long g_0068aa78;
extern "C" unsigned long g_0068aa7c;
extern "C" unsigned long g_0068aa80;
extern "C" unsigned long g_0068aa84;
extern "C" unsigned long g_0068aa88;
extern "C" unsigned long g_0068aa8c;
extern "C" unsigned long g_0068aa90;
extern "C" unsigned long g_0068aa94;
extern "C" unsigned long g_0068aaa6;
extern "C" unsigned long g_0068aab8;
extern "C" unsigned long g_0068aae4;
extern "C" unsigned long g_0068aae8;
BLSuitComposeInfoItemPresenter::~BLSuitComposeInfoItemPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int *piStack_18;
  undefined4 uStack_14;
  
  /* VPTR_FIX(R87): vptr=(&g_A+g_B)+8 ?? g_ ?? 0 ?? -> ???? SEGV?????? vptr???? */;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0068a5f4 + g_0068a628,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

// ===== 修复: 补回被误删的函数占位 (5) =====
void BLSuitComposeInfoItemPresenter::onClick(cocos2d::CCObject* p1, unsigned int p2)
{
  code *pcVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int *piVar9;
  undefined *puVar10;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [12];
  
  puVar10 = (unsigned char *)((char *)&g_0068a7e4 + (intptr_t)(g_0068aa74));
  uVar2 = (undefined4)(((DataCacheManager *)this)->shareManager());
  piVar3 = ((void)((DataCacheManager *)(uVar2))->getItemDataByID(*(undefined4 *)(((int)this) + 0x18)),(int *)0);
  piVar4 = (int *)((DataManager *)this)->shareDataManager();
  piVar4 = (int *)(**(code **)(*(int *)(piVar4) + (0x28)))();
  uVar2 = (undefined4)((**(code **)(*(int *)(piVar4) + (0x50)))());
  piVar4 = (int *)((BackPackData *)(uVar2))->getItemData((ItemData*)piVar3);
  if (piVar4 == 0) {
    piVar4 = (int *)((BackPackItemData *)this)->create();
    (**(code **)(*(int *)(piVar4) + (0x24)))(piVar4,*(undefined4 *)(((int)this) + 0x18));
    (**(code **)(*(int *)(piVar4) + (0x2c)))(piVar4,1);
  }
  iVar5 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar3) + (0x30)))(piVar3));
  uVar2 = (undefined4)(*(undefined4 *)(puVar10 + g_0068aa78));
  if (iVar5 == 8) {
    uVar7 = (undefined4)(((UIManager *)this)->shareManager());
    iVar5 = (undefined4)((void)(((UIManager *)(uVar7))->getUIObject(0x1f)),(intptr_t)0);
    if (iVar5 != 0) {
      uVar7 = (undefined4)(((UIManager *)this)->shareManager());
      ((UIManager *)(uVar7))->removeUIByID(0x1f);
    }
    piVar3 = (int *)((DataCacheManager *)this)->shareManager();
    uVar7 = (undefined4)((**(code **)(*(int *)(piVar3) + (0xb0)))());
    uVar7 = (undefined4)(((SuitEquipEquipData *)(uVar7))->getItemById(*(undefined4 *)(((int)this) + 0x18)));
    ((SuitEquipEquipItemData *)(uVar7))->updateAttr(0);
    uVar8 = (undefined4)(((UIManager *)this)->shareManager());
    iVar5 = (undefined4)((void)(((UIManager *)(uVar8))->getUIObject(0x20)),(intptr_t)0);
    uVar8 = (undefined4)(*(undefined4 *)(puVar10 + g_0068aa7c));
    if ((iVar5 == 0) || (piVar3 = (int *)func_0079e55c(iVar5,uVar2,uVar8,0), piVar3 == 0)
       ) {
      uVar6 = (undefined4)(((UIManager *)this)->shareManager());
      iVar5 = (undefined4)(intptr_t)(((UIManager *)(uVar6))->showUIById(0x20));
      if (iVar5 == 0) goto code_r0x0068aa6a;
      piVar3 = (int *)func_0079e55c(iVar5,uVar2,uVar8,0);
      uVar2 = (undefined4)((**(code **)(*(int *)(piVar3) + (0x20)))());
      piVar9 = (int *)(**(code **)(*(int *)(piVar3) + (0x20)))(piVar3);
      iVar5 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar9) + (0x50)))());
      0 /* ctorZero */;
      piVar9 = (int *)(**(code **)(*(int *)piVar3[9] + 0x8c))();
      uVar8 = (undefined4)(func_0079e4fc(*piVar9 + -0x80000000,0x3f000000));
      uVar8 = (undefined4)(func_0079e57c(uVar8,g_0068aa80));
      0 /* ctorZero */;
      ((cocos2d::CCPoint *)(auStack_30))->operator+(*(const CCPoint *)(void *)auStack_28);
      uVar8 = (undefined4)(cocos2d::CCMoveTo::create(g_0068aa84, *(const CCPoint *)(void *)auStack_20));
      ((cocos2d::CCNode *)(uVar2))->runAction((cocos2d::CCAction*)uVar8);
    }
    if (piVar3[9] == 0) {
      return;
    }
    iVar5 = func_0079e55c(piVar3[9],*(undefined4 *)(puVar10 + g_0068aa88),
                            *(undefined4 *)(puVar10 + g_0068aa8c),0,
                            *(undefined4 *)(puVar10 + g_0068aa8c));
    if (iVar5 == 0) {
      return;
    }
    uVar2 = (undefined4)(((BLSuitItemDataInfoView *)this)->getPresenter());
    ((BLSuitItemDataInfoPresenter *)(uVar2))->initPackItemData((SuitEquipEquipItemData*)uVar7, (BackPackItemData*)piVar4);
    piVar3 = (int *)((BLSuitItemDataInfoView *)(iVar5))->OtherItemInfoDown();
  }
  else {
    uVar7 = (undefined4)(((UIManager *)this)->shareManager());
    iVar5 = (undefined4)((void)(((UIManager *)(uVar7))->getUIObject(0x20)),(intptr_t)0);
    if (iVar5 != 0) {
      uVar7 = (undefined4)(((UIManager *)this)->shareManager());
      ((UIManager *)(uVar7))->removeUIByID(0x20);
    }
    uVar7 = (undefined4)(((UIManager *)this)->shareManager());
    iVar5 = (undefined4)((void)(((UIManager *)(uVar7))->getUIObject(0x1f)),(intptr_t)0);
    uVar7 = (undefined4)(*(undefined4 *)(puVar10 + g_0068aa90));
    if ((iVar5 == 0) || (piVar3 = (int *)func_0079e55c(iVar5,uVar2,uVar7,0), piVar3 == 0)
       ) {
      uVar8 = (undefined4)(((UIManager *)this)->shareManager());
      iVar5 = (undefined4)(intptr_t)(((UIManager *)(uVar8))->showUIById(0x1f));
      if (iVar5 == 0) {
code_r0x0068aa6a:
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x68aa6c);
        (*pcVar1)();
      }
      piVar3 = (int *)func_0079e55c(iVar5,uVar2,uVar7,0);
      uVar2 = (undefined4)((**(code **)(*(int *)(piVar3) + (0x20)))());
      piVar9 = (int *)(**(code **)(*(int *)(piVar3) + (0x20)))(piVar3);
      iVar5 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar9) + (0x50)))());
      0 /* ctorZero */;
      piVar9 = (int *)(**(code **)(*(int *)piVar3[9] + 0x8c))();
      uVar7 = (undefined4)(func_0079e4fc(*piVar9 + -0x80000000,0x3f000000));
      uVar7 = (undefined4)(func_0079e57c(uVar7,g_0068aa80));
      0 /* ctorZero */;
      ((cocos2d::CCPoint *)(auStack_30))->operator+(*(const CCPoint *)(void *)auStack_28);
      uVar7 = (undefined4)(cocos2d::CCMoveTo::create(g_0068aa84, *(const CCPoint *)(void *)auStack_20));
      ((cocos2d::CCNode *)(uVar2))->runAction((cocos2d::CCAction*)uVar7);
    }
    if (piVar3[9] == 0) {
      return;
    }
    iVar5 = func_0079e55c(piVar3[9],*(undefined4 *)(puVar10 + g_0068aa88),
                            *(undefined4 *)(puVar10 + g_0068aa94),0,
                            *(undefined4 *)(puVar10 + g_0068aa94));
    if (iVar5 == 0) {
      return;
    }
    uVar2 = (undefined4)(((BLItemDataInfoView *)this)->getPresenter());
    ((BLItemDataInfoPresenter *)(uVar2))->initPackItemData((BackPackItemData*)piVar4);
    piVar3 = (int *)((BLItemDataInfoView *)(iVar5))->OtherItemInfoDown();
    (**(code **)(*(int *)(piVar3) + (0x90)))(piVar3,0);
    piVar3 = (int *)((BLItemDataInfoView *)(iVar5))->DebrisItemInfoDown();
    (**(code **)(*(int *)(piVar3) + (0x90)))(piVar3,0);
    piVar3 = (int *)((BLItemDataInfoView *)(iVar5))->ItemInfoDown();
  }
  (**(code **)(*(int *)(piVar3) + (0x90)))(piVar3,0);
  return;
}

BLSuitComposeInfoItemPresenter::BLSuitComposeInfoItemPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  *(int *)this = *(int *)((unsigned char *)((char *)&g_0068aaa6 + (intptr_t)(g_0068aae4))) + 8;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,(unsigned char *)((char *)&g_0068aab8 + (intptr_t)(g_0068aae8)),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

undefined4 BLSuitComposeInfoItemPresenter::create()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x1c))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}


void BLSuitComposeInfoItemPresenter::initWithData(int p1)
{
  undefined4 uVar1;
  int *piVar2;
  code *pcVar3;
  int *piVar4;
  undefined1 auStack_2c [4];
  undefined4 uStack_28;
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [12];
  
  *(undefined4 *)(((int)this) + 0x18) = p1;
  uVar1 = (undefined4)(((DataCacheManager *)this)->shareManager());
  piVar2 = ((void)((DataCacheManager *)(uVar1))->getItemDataByID(p1),(int *)0);
  if (piVar2 != 0) {
    (**(code **)(*(int *)(piVar2) + (0x58)))(&uStack_28);
    piVar4 = *(int **)(*(int *)(((int)this) + 0x14) + 0x10c);
    pcVar3 = *(code **)(*piVar4 + 0x22c);
    func_0079e45c(auStack_20,uStack_28,auStack_24);
    piVar2 = (int *)0 /* ctorZero */;
    uVar1 = (undefined4)((**(code **)(*(int *)(piVar2) + (0x214)))());
    (*pcVar3)(piVar4,uVar1);
    func_0079e2bc(auStack_20);
    piVar4 = *(int **)(*(int *)(((int)this) + 0x14) + 0x10c);
    pcVar3 = *(code **)(*piVar4 + 0x1d4);
    func_0079e45c(auStack_24,uStack_28,auStack_2c);
    piVar2 = (int *)0 /* ctorZero */;
    uVar1 = (undefined4)((**(code **)(*(int *)(piVar2) + (0x8c)))());
    0 /* ctorZero */;
    (*pcVar3)(piVar4,auStack_20);
    func_0079e2bc(auStack_24);
    func_0079e2bc(&uStack_28);
  }
  return;
}
