#include "BLPlayerTuPoPresenter.h"
#include "CCNotificationCenter.h"
#include "CCArray.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "CCObject.h"
#include "CCTouch.h"
#include "CCDirector.h"
#include "CCString.h"
#include "ItemData.h"
#include "BLPlayerTuPoView.h"
#include "BLLeakUtils.h"
#include "BackPackData.h"
#include "BackPackItemData.h"
#include "DataCacheManager.h"
#include "DataManager.h"
#include "RoleData.h"
#include "RoleInfoData.h"
#include "Toast.h"
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
extern "C" long long func_0079e2dc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e60c(...);
extern "C" long long func_0079e6c0(...);
extern "C" long long func_0079e8a4(...);
extern "C" long long func_0079e8b4(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_006b297c;
extern "C" unsigned long UNK_006b2994;
extern "C" unsigned long UNK_006b29ac;
extern "C" unsigned long UNK_006b2a1c;
extern "C" unsigned long UNK_006b2a3a;
extern "C" unsigned long UNK_006b2a8c;
extern "C" unsigned long UNK_006b2ab4;
extern "C" unsigned long UNK_006b2ae0;
extern "C" unsigned long UNK_006b2b18;
extern "C" unsigned long UNK_006b2b46;
extern "C" unsigned long UNK_006b2b86;
extern "C" unsigned long UNK_006b2bba;
extern "C" unsigned long UNK_006b2bd4;
extern "C" unsigned long UNK_006b2ca8;
extern "C" unsigned long UNK_006b2caa;
extern "C" unsigned long UNK_006b2d16;
extern "C" unsigned long UNK_006b2d30;
extern "C" unsigned long UNK_006b2d5e;
extern "C" unsigned long UNK_006b2d60;
extern "C" unsigned long UNK_006b2dc8;
extern "C" unsigned long UNK_006b2dd4;
extern "C" unsigned long UNK_006b2de2;
extern "C" unsigned long UNK_006b2dfc;
extern "C" unsigned long UNK_006b2e2a;
extern "C" unsigned long UNK_006b2e2c;
extern "C" unsigned long UNK_006b2e94;
extern "C" unsigned long UNK_006b2ea0;
extern "C" unsigned long UNK_006b2ef2;
extern "C" unsigned long UNK_006b2f0e;
extern "C" unsigned long UNK_006b2f3c;
extern "C" unsigned long UNK_006b2f3e;
extern "C" unsigned long UNK_006b2faa;
extern "C" unsigned long UNK_006b2fb6;
extern "C" unsigned long UNK_006b2fee;
extern "C" unsigned long UNK_006b3070;
extern "C" unsigned long UNK_006b3084;
extern "C" unsigned long UNK_006b308e;
extern "C" unsigned long UNK_006b30a4;
extern "C" unsigned long UNK_006b3120;
extern "C" unsigned long UNK_006b338a;
extern "C" unsigned long _UNK_006b2980;
extern "C" unsigned long _UNK_006b2998;
extern "C" unsigned long _UNK_006b29b0;
extern "C" unsigned long _UNK_006b2a78;
extern "C" unsigned long _UNK_006b2a7c;
extern "C" unsigned long _UNK_006b2a90;
extern "C" unsigned long _UNK_006b2ab8;
extern "C" unsigned long _UNK_006b2af0;
extern "C" unsigned long _UNK_006b2b28;
extern "C" unsigned long _UNK_006b2b58;
extern "C" unsigned long _UNK_006b2b6c;
extern "C" unsigned long _UNK_006b2ea0;
extern "C" unsigned long _UNK_006b2ea4;
extern "C" unsigned long _UNK_006b2ea8;
extern "C" unsigned long _UNK_006b2eac;
extern "C" unsigned long _UNK_006b2eb0;
extern "C" unsigned long _UNK_006b2eb4;
extern "C" unsigned long _UNK_006b2eb8;
extern "C" unsigned long _UNK_006b2ebc;
extern "C" unsigned long _UNK_006b2ec0;
extern "C" unsigned long _UNK_006b2ec4;
extern "C" unsigned long _UNK_006b2ec8;
extern "C" unsigned long _UNK_006b2ecc;
extern "C" unsigned long _UNK_006b2ed0;
extern "C" unsigned long _UNK_006b2ed4;
extern "C" unsigned long _UNK_006b2ed8;
extern "C" unsigned long _UNK_006b2edc;
extern "C" unsigned long _UNK_006b2ee0;
extern "C" unsigned long _UNK_006b3044;
extern "C" unsigned long _UNK_006b3048;
extern "C" unsigned long _UNK_006b304c;
extern "C" unsigned long _UNK_006b3050;
extern "C" unsigned long _UNK_006b3054;
extern "C" unsigned long _UNK_006b3058;
extern "C" unsigned long _UNK_006b305c;
extern "C" unsigned long _UNK_006b30d4;
extern "C" unsigned long _UNK_006b30d8;
extern "C" unsigned long _UNK_006b30dc;
extern "C" unsigned long _UNK_006b30e0;
extern "C" unsigned long _UNK_006b31c0;
extern "C" unsigned long _UNK_006b31c4;
extern "C" unsigned long _UNK_006b31c8;
extern "C" unsigned long _UNK_006b31cc;
extern "C" unsigned long _UNK_006b31d0;
extern "C" unsigned long _UNK_006b31d4;
extern "C" unsigned long _UNK_006b33b8;
extern "C" unsigned long _UNK_006b33bc;
extern "C" unsigned long _UNK_006b33c0;
extern "C" unsigned long extraout_r1;
extern "C" unsigned long g_006b297c;
extern "C" unsigned long g_006b2980;
extern "C" unsigned long g_006b2994;
extern "C" unsigned long g_006b2998;
extern "C" unsigned long g_006b29ac;
extern "C" unsigned long g_006b29b0;
extern "C" unsigned long g_006b2a1c;
extern "C" unsigned long g_006b2a3a;
extern "C" unsigned long g_006b2a78;
extern "C" unsigned long g_006b2a7c;
extern "C" unsigned long g_006b2a8c;
extern "C" unsigned long g_006b2a90;
extern "C" unsigned long g_006b2ab4;
extern "C" unsigned long g_006b2ab8;
extern "C" unsigned long g_006b2ae0;
extern "C" unsigned long g_006b2af0;
extern "C" unsigned long g_006b2b18;
extern "C" unsigned long g_006b2b28;
extern "C" unsigned long g_006b2b46;
extern "C" unsigned long g_006b2b58;
extern "C" unsigned long g_006b2b6c;
extern "C" unsigned long g_006b2b86;
extern "C" unsigned long g_006b2bba;
extern "C" unsigned long g_006b2bd4;
extern "C" unsigned long g_006b2ca8;
extern "C" unsigned long g_006b2caa;
extern "C" unsigned long g_006b2d16;
extern "C" unsigned long g_006b2d30;
extern "C" unsigned long g_006b2d5e;
extern "C" unsigned long g_006b2d60;
extern "C" unsigned long g_006b2dc8;
extern "C" unsigned long g_006b2dd4;
extern "C" unsigned long g_006b2de2;
extern "C" unsigned long g_006b2dfc;
extern "C" unsigned long g_006b2e2a;
extern "C" unsigned long g_006b2e2c;
extern "C" unsigned long g_006b2e94;
extern "C" unsigned long g_006b2ea0;
extern "C" unsigned long g_006b2ea4;
extern "C" unsigned long g_006b2ea8;
extern "C" unsigned long g_006b2eac;
extern "C" unsigned long g_006b2eb0;
extern "C" unsigned long g_006b2eb4;
extern "C" unsigned long g_006b2eb8;
extern "C" unsigned long g_006b2ebc;
extern "C" unsigned long g_006b2ec0;
extern "C" unsigned long g_006b2ec4;
extern "C" unsigned long g_006b2ec8;
extern "C" unsigned long g_006b2ecc;
extern "C" unsigned long g_006b2ed0;
extern "C" unsigned long g_006b2ed4;
extern "C" unsigned long g_006b2ed8;
extern "C" unsigned long g_006b2edc;
extern "C" unsigned long g_006b2ee0;
extern "C" unsigned long g_006b2ef2;
extern "C" unsigned long g_006b2f0e;
extern "C" unsigned long g_006b2f3c;
extern "C" unsigned long g_006b2f3e;
extern "C" unsigned long g_006b2faa;
extern "C" unsigned long g_006b2fb6;
extern "C" unsigned long g_006b2fee;
extern "C" unsigned long g_006b3044;
extern "C" unsigned long g_006b3048;
extern "C" unsigned long g_006b304c;
extern "C" unsigned long g_006b3050;
extern "C" unsigned long g_006b3054;
extern "C" unsigned long g_006b3058;
extern "C" unsigned long g_006b305c;
extern "C" unsigned long g_006b3070;
extern "C" unsigned long g_006b3084;
extern "C" unsigned long g_006b308e;
extern "C" unsigned long g_006b30a4;
extern "C" unsigned long g_006b30d4;
extern "C" unsigned long g_006b30d8;
extern "C" unsigned long g_006b30dc;
extern "C" unsigned long g_006b30e0;
extern "C" unsigned long g_006b3120;
extern "C" unsigned long g_006b31c0;
extern "C" unsigned long g_006b31c4;
extern "C" unsigned long g_006b31c8;
extern "C" unsigned long g_006b31cc;
extern "C" unsigned long g_006b31d0;
extern "C" unsigned long g_006b31d4;
extern "C" unsigned long g_006b338a;
extern "C" unsigned long g_006b33b8;
extern "C" unsigned long g_006b33bc;
extern "C" unsigned long g_006b33c0;
bool BLPlayerTuPoPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLPlayerTuPoPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLPlayerTuPoPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLPlayerTuPoPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

BLPlayerTuPoPresenter::~BLPlayerTuPoPresenter()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  iVar2 = *(int *)(&g_006b2a1c + g_006b2a78);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x38;
  piStack_20 = (int *)((int)this);
  uStack_1c = (undefined4)(p2);
  uStack_18 = (undefined4)(p3);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_1c,&g_006b2a3a + g_006b2a7c,&piStack_20);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_1c);
  func_0079e2bc(&uStack_1c);
  func_0079e2bc(((int)this) + 8);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLPlayerTuPoPresenter::onAddClick(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 p4 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  
  if (*(int *)(((int)this) + 0x18) < *(int *)(((int)this) + 0x1c)) {
    *(int *)(((int)this) + 0x18) = *(int *)(((int)this) + 0x18) + 1;
  }
  piVar3 = *(int **)(*(int *)(((int)this) + 0x2c) + 0x124);
  iVar2 = (int)*(int *)&(*piVar3);
  pcVar4 = *(code **)(iVar2 + 0x234);
  cocos2d::CCString::createWithFormat((char const*)&g_006b2ae0 + g_006b2af0, *(undefined4 *)(((int)this) + 0x18), *(int *)(((int)this) + 0x1c), iVar2, p4);
  uVar1 = (undefined4)(((cocos2d::CCString *)this)->getCString());
  (*pcVar4)(piVar3,uVar1);
  return;
}

void BLPlayerTuPoPresenter::onDeleteClick(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 p4 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  
  if (1 < *(int *)(((int)this) + 0x18)) {
    *(int *)(((int)this) + 0x18) = *(int *)(((int)this) + 0x18) + -1;
  }
  piVar3 = *(int **)(*(int *)(((int)this) + 0x2c) + 0x124);
  iVar2 = (int)*(int *)&(*piVar3);
  pcVar4 = *(code **)(iVar2 + 0x234);
  cocos2d::CCString::createWithFormat((char const*)&g_006b2b18 + g_006b2b28, *(undefined4 *)(((int)this) + 0x18), *(undefined4 *)(((int)this) + 0x1c), iVar2, p4);
  uVar1 = (undefined4)(((cocos2d::CCString *)this)->getCString());
  (*pcVar4)(piVar3,uVar1);
  return;
}

void BLPlayerTuPoPresenter::onMaxClick(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 p4 = 0;

  undefined4 uVar1;
  int *piVar2;
  code *pcVar3;
  
  uVar1 = (undefined4)(*(undefined4 *)(((int)this) + 0x1c));
  *(undefined4 *)(((int)this) + 0x18) = uVar1;
  piVar2 = *(int **)(*(int *)(((int)this) + 0x2c) + 0x124);
  pcVar3 = *(code **)(*piVar2 + 0x234);
  cocos2d::CCString::createWithFormat((char const*)&g_006b2b46 + g_006b2b58, uVar1, uVar1, 0x234, p4);
  uVar1 = (undefined4)(((cocos2d::CCString *)this)->getCString());
  (*pcVar3)(piVar2,uVar1);
  return;
}

void BLPlayerTuPoPresenter::onCloseClick(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(g_006b2b6c);
  return;
}


BLPlayerTuPoPresenter::BLPlayerTuPoPresenter()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;

  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  piStack_20 = (int *)((int)this);
  uStack_1c = (undefined4)(p2);
  uStack_18 = (undefined4)(p3);
  0 /* ctorZero */;
  iVar1 = g_006b30d8;
  iVar4 = *(int *)(&g_006b3070 + g_006b30d4);
  *(int *)((int)this + 4*(5)) = iVar4 + 0x38;
  iVar2 = g_006b30dc;
  *(int *)this = iVar4 + 8;
  *(int *)((int)this + 4*(8)) = *(int *)(&g_006b3084 + iVar2) + 0xc;
  func_0079e2dc(((int)this) + 8,&g_006b308e + iVar1);
  *(int *)((int)this + 4*(9)) = 0;
  *(int *)((int)this + 4*(10)) = 0;
  uVar3 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_1c,&g_006b30a4 + g_006b30e0,&piStack_20);
  ((BLLeakUtils *)uVar3)->addClass((std::string)(char*)uStack_1c);
  func_0079e2bc(&uStack_1c);
  return;
}

undefined4 BLPlayerTuPoPresenter::create()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x30))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}


void BLPlayerTuPoPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  return;
}

void BLPlayerTuPoPresenter::onEnter()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14, 1, 0);
  return;
}

// ===== 修复: 补回被误删的函数占位 (3) =====
void BLPlayerTuPoPresenter::onUseClick(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined *puVar6;
  int extraout_r1;
  int iVar7;
  int *piVar8;
  code *pcVar9;
  bool bVar10;
  undefined1 auStack_34 [4];
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [4];
  undefined4 uStack_28;
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [4];
  int aiStack_1c [2];
  
  if (*(int *)(((int)this) + 0x18) == 0) {
    uVar1 = (undefined4)(((Toast *)this)->sharedToast());
    puVar6 = (unsigned char *)((char *)&g_006b2b86 + (intptr_t)(g_006b2ea0));
  }
  else {
    uVar1 = (undefined4)(((DataManager *)this)->shareDataManager());
    uVar2 = (undefined4)((**(code **)(**(int **)(((int)this) + 0x24) + 0x18))());
    iVar3 = (undefined4)((void)(((DataManager *)(uVar1))->getBackPackItemNum(uVar2)),(intptr_t)0);
    *(int *)(((int)this) + 0x1c) = iVar3;
    if (*(int *)(((int)this) + 0x18) <= iVar3) {
      piVar8 = (int *)((DataManager *)this)->shareDataManager();
      piVar8 = (int *)(**(code **)(*(int *)(piVar8) + (0x28)))();
      uVar1 = (undefined4)((**(code **)(*(int *)(piVar8) + (0x50)))());
      piVar8 = (int *)((BackPackData *)(uVar1))->getItemData((ItemData*)*(undefined4 *)(((int)this) + 0x24));
      piVar4 = (int *)::operator new(0x30);
      ::new ((void *)piVar4) BackPackItemData();   /* ALLOC+CTOR_FIX(R123): 类名由 llvm-cxxfilt 反修饰 + (函数,尺寸) 对齐 取得 */
      iVar3 = (undefined4)(intptr_t)(((BackPackItemData *)(piVar4))->init());
      if (iVar3 != 0) {
        ((cocos2d::CCObject *)(piVar4))->autorelease();
        pcVar9 = *(code **)(*piVar4 + 0x24);
        uVar1 = (undefined4)((**(code **)(*(int *)(piVar8) + (0x20)))(piVar8));
        (*pcVar9)(piVar4,uVar1);
        pcVar9 = *(code **)(*piVar4 + 0x1c);
        uVar1 = (undefined4)((**(code **)(*(int *)(piVar8) + (0x18)))(piVar8));
        (*pcVar9)(piVar4,uVar1);
        (**(code **)(*(int *)(piVar4) + (0x2c)))(piVar4,*(undefined4 *)(((int)this) + 0x18));
        piVar8 = (int *)((DataManager *)this)->shareDataManager();
        piVar8 = (int *)(**(code **)(*(int *)(piVar8) + (0x28)))();
        uVar1 = (undefined4)((**(code **)(*(int *)(piVar8) + (0x50)))());
        ((BackPackData *)(uVar1))->removeItem((BackPackItemData*)piVar4);
        piVar8 = (int *)((DataManager *)this)->shareDataManager();
        piVar8 = (int *)(**(code **)(*(int *)(piVar8) + (0x28)))();
        (**(code **)(*(int *)(piVar8) + (0x68)))();
        iVar3 = (undefined4)(intptr_t)(((cocos2d::CCArray *)this)->count());
        for (iVar7 = 0; iVar7 < iVar3; iVar7 = iVar7 + 1) {
          piVar8 = (int *)((DataManager *)this)->shareDataManager();
          piVar8 = (int *)(**(code **)(*(int *)(piVar8) + (0x28)))();
          uVar1 = (undefined4)((**(code **)(*(int *)(piVar8) + (0x68)))());
          iVar5 = (undefined4)(intptr_t)(((cocos2d::CCArray *)(uVar1))->objectAtIndex((unsigned int)iVar7));
          if ((iVar5 != 0) &&
             (piVar8 = (int *)func_0079e55c(iVar5,*(undefined4 *)((unsigned char *)((char *)&g_006b2ca8 + (intptr_t)(g_006b2eac))),
                                              *(undefined4 *)((unsigned char *)((char *)&g_006b2caa + (intptr_t)(g_006b2eb0))),0),
             piVar8 != (int *)0x0)) {
            bVar10 = (undefined4)(intptr_t)(false);
            piVar4 = (int *)(**(code **)(*(int *)(piVar8) + (0x18)))();
            (**(code **)(*(int *)(piVar4) + (0x18)))(aiStack_1c,piVar4);
            if (*(int *)(aiStack_1c[0] + -0xc) == *(int *)(*(int *)(((int)this) + 0x20) + -0xc)) {
              iVar5 = (undefined4)(intptr_t)(func_0079e60c());
              bVar10 = (undefined4)(intptr_t)(iVar5 == 0);
            }
            func_0079e2bc(aiStack_1c);
            if (bVar10) {
              uVar1 = (undefined4)(func_0079e8a4());
              func_0079e8b4(uVar1,3);
              pcVar9 = *(code **)(*piVar8 + 0x18);
              if (extraout_r1 == 1) {
                uVar1 = (undefined4)((*pcVar9)(piVar8));
                func_0079e45c(auStack_24,(unsigned char *)((char *)&g_006b2de2 + (intptr_t)(g_006b2ecc)),auStack_34);
                piVar4 = (int *)(**(code **)(*(int *)(piVar8) + (0x18)))(piVar8);
                iVar5 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar4) + (0x78)))());
                cocos2d::CCString::createWithFormat((char const*)(unsigned char *)((char *)&g_006b2dfc + (intptr_t)(g_006b2ed0)), iVar5 + *(int *)(((int)this) + 0x18));
                uVar2 = (undefined4)(((cocos2d::CCString *)this)->getCString());
                func_0079e45c(auStack_20,uVar2,auStack_30);
                piVar4 = (int *)(**(code **)(*(int *)(piVar8) + (0x20)))(piVar8);
                (**(code **)(*(int *)(piVar4) + (0x18)))(&uStack_28,piVar4);
                cocos2d::CCString::createWithFormat((char const*)(unsigned char *)((char *)&g_006b2e2a + (intptr_t)(g_006b2ed4)), (unsigned char *)((char *)&g_006b2e2c + (intptr_t)(g_006b2ed8)), uStack_28);
                uVar2 = (undefined4)(((cocos2d::CCString *)this)->getCString());
                func_0079e45c(aiStack_1c,uVar2,auStack_2c);
                ((RoleData *)(uVar1))->updateData((std::string)(char*)auStack_24, (std::string)(char*)auStack_20, (std::string)(char*)aiStack_1c);
                func_0079e2bc(aiStack_1c);
                func_0079e2bc(&uStack_28);
                func_0079e2bc(auStack_20);
                func_0079e2bc(auStack_24);
                piVar4 = (int *)(**(code **)(*(int *)(piVar8) + (0x18)))(piVar8);
                pcVar9 = *(code **)(*piVar4 + 0x7c);
                piVar8 = (int *)(**(code **)(*(int *)(piVar8) + (0x18)))(piVar8);
                iVar5 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar8) + (0x78)))());
                (*pcVar9)(piVar4,iVar5 + *(int *)(((int)this) + 0x18));
                uVar1 = (undefined4)(((Toast *)this)->sharedToast());
                ((Toast *)(uVar1))->showToast((char const*)(unsigned char *)((char *)&g_006b2e94 + (intptr_t)(g_006b2edc)));
                uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
                puVar6 = (unsigned char *)((char *)&g_006b2ea0 + (intptr_t)(g_006b2ee0));
              }
              else if (extraout_r1 == 2) {
                uVar1 = (undefined4)((*pcVar9)());
                func_0079e45c(auStack_24,(unsigned char *)((char *)&g_006b2ef2 + (intptr_t)(g_006b3044)),auStack_34);
                piVar4 = (int *)(**(code **)(*(int *)(piVar8) + (0x18)))(piVar8);
                iVar5 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar4) + (0x80)))());
                cocos2d::CCString::createWithFormat((char const*)(unsigned char *)((char *)&g_006b2f0e + (intptr_t)(g_006b3048)), iVar5 + *(int *)(((int)this) + 0x18));
                uVar2 = (undefined4)(((cocos2d::CCString *)this)->getCString());
                func_0079e45c(auStack_20,uVar2,auStack_30);
                piVar4 = (int *)(**(code **)(*(int *)(piVar8) + (0x20)))(piVar8);
                (**(code **)(*(int *)(piVar4) + (0x18)))(&uStack_28,piVar4);
                cocos2d::CCString::createWithFormat((char const*)(unsigned char *)((char *)&g_006b2f3c + (intptr_t)(g_006b304c)), (unsigned char *)((char *)&g_006b2f3e + (intptr_t)(g_006b3050)), uStack_28);
                uVar2 = (undefined4)(((cocos2d::CCString *)this)->getCString());
                func_0079e45c(aiStack_1c,uVar2,auStack_2c);
                ((RoleData *)(uVar1))->updateData((std::string)(char*)auStack_24, (std::string)(char*)auStack_20, (std::string)(char*)aiStack_1c);
                func_0079e2bc(aiStack_1c);
                func_0079e2bc(&uStack_28);
                func_0079e2bc(auStack_20);
                func_0079e2bc(auStack_24);
                piVar4 = (int *)(**(code **)(*(int *)(piVar8) + (0x18)))(piVar8);
                pcVar9 = *(code **)(*piVar4 + 0x84);
                piVar8 = (int *)(**(code **)(*(int *)(piVar8) + (0x18)))(piVar8);
                iVar5 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar8) + (0x80)))());
                (*pcVar9)(piVar4,iVar5 + *(int *)(((int)this) + 0x18));
                uVar1 = (undefined4)(((Toast *)this)->sharedToast());
                ((Toast *)(uVar1))->showToast((char const*)(unsigned char *)((char *)&g_006b2faa + (intptr_t)(g_006b3054)));
                uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
                puVar6 = (unsigned char *)((char *)&g_006b2fb6 + (intptr_t)(g_006b3058));
              }
              else {
                uVar1 = (undefined4)((*pcVar9)());
                func_0079e45c(auStack_24,(unsigned char *)((char *)&g_006b2d16 + (intptr_t)(g_006b2eb4)),auStack_34);
                piVar4 = (int *)(**(code **)(*(int *)(piVar8) + (0x18)))(piVar8);
                iVar5 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar4) + (0x70)))());
                cocos2d::CCString::createWithFormat((char const*)(unsigned char *)((char *)&g_006b2d30 + (intptr_t)(g_006b2eb8)), iVar5 + *(int *)(((int)this) + 0x18));
                uVar2 = (undefined4)(((cocos2d::CCString *)this)->getCString());
                func_0079e45c(auStack_20,uVar2,auStack_30);
                piVar4 = (int *)(**(code **)(*(int *)(piVar8) + (0x20)))(piVar8);
                (**(code **)(*(int *)(piVar4) + (0x18)))(&uStack_28,piVar4);
                cocos2d::CCString::createWithFormat((char const*)(unsigned char *)((char *)&g_006b2d5e + (intptr_t)(g_006b2ebc)), (unsigned char *)((char *)&g_006b2d60 + (intptr_t)(g_006b2ec0)), uStack_28);
                uVar2 = (undefined4)(((cocos2d::CCString *)this)->getCString());
                func_0079e45c(aiStack_1c,uVar2,auStack_2c);
                ((RoleData *)(uVar1))->updateData((std::string)(char*)auStack_24, (std::string)(char*)auStack_20, (std::string)(char*)aiStack_1c);
                func_0079e2bc(aiStack_1c);
                func_0079e2bc(&uStack_28);
                func_0079e2bc(auStack_20);
                func_0079e2bc(auStack_24);
                piVar4 = (int *)(**(code **)(*(int *)(piVar8) + (0x18)))(piVar8);
                pcVar9 = *(code **)(*piVar4 + 0x74);
                piVar8 = (int *)(**(code **)(*(int *)(piVar8) + (0x18)))(piVar8);
                iVar5 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar8) + (0x70)))());
                (*pcVar9)(piVar4,iVar5 + *(int *)(((int)this) + 0x18));
                uVar1 = (undefined4)(((Toast *)this)->sharedToast());
                ((Toast *)(uVar1))->showToast((char const*)(unsigned char *)((char *)&g_006b2dc8 + (intptr_t)(g_006b2ec4)));
                uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
                puVar6 = (unsigned char *)((char *)&g_006b2dd4 + (intptr_t)(g_006b2ec8));
              }
              ((cocos2d::CCNotificationCenter *)(uVar1))->postNotification((char const*)puVar6);
            }
          }
        }
        uVar1 = (undefined4)(((DataManager *)this)->shareDataManager());
        uVar2 = (undefined4)((**(code **)(**(int **)(((int)this) + 0x24) + 0x18))());
        iVar3 = (undefined4)((void)(((DataManager *)(uVar1))->getBackPackItemNum(uVar2)),(intptr_t)0);
        *(int *)(((int)this) + 0x1c) = iVar3;
        if (iVar3 < *(int *)(((int)this) + 0x18)) {
          *(int *)(((int)this) + 0x18) = iVar3;
        }
        piVar8 = *(int **)(*(int *)(((int)this) + 0x2c) + 0x124);
        pcVar9 = *(code **)(*piVar8 + 0x234);
        cocos2d::CCString::createWithFormat((char const*)(unsigned char *)((char *)&g_006b2fee + (intptr_t)(g_006b305c)), *(undefined4 *)(((int)this) + 0x18), iVar3);
        uVar1 = (undefined4)(((cocos2d::CCString *)this)->getCString());
        (*pcVar9)(piVar8,uVar1);
        return;
      }
      (**(code **)(*(int *)(piVar4) + (8)))(piVar4);
                    /* WARNING: Does not return */
      pcVar9 = (code *)software_udf(0xff,0x6b303c);
      (*pcVar9)();
    }
    *(int *)(((int)this) + 0x18) = iVar3;
    piVar8 = *(int **)(*(int *)(((int)this) + 0x2c) + 0x124);
    pcVar9 = *(code **)(*piVar8 + 0x234);
    cocos2d::CCString::createWithFormat((char const*)(unsigned char *)((char *)&g_006b2bba + (intptr_t)(g_006b2ea4)), iVar3);
    uVar1 = (undefined4)(((cocos2d::CCString *)this)->getCString());
    (*pcVar9)(piVar8,uVar1);
    uVar1 = (undefined4)(((Toast *)this)->sharedToast());
    puVar6 = (unsigned char *)((char *)&g_006b2bd4 + (intptr_t)(g_006b2ea8));
  }
  ((Toast *)(uVar1))->showToast((char const*)puVar6);
  return;
}

void BLPlayerTuPoPresenter::initWithView(BLPlayerTuPoView* p1)
{
  int iVar1;
  int *piVar2;
  
  *(int *)(((int)this) + 0x2c) = (undefined4)(intptr_t)p1;
  iVar1 = (undefined4)(intptr_t)(g_006b31c0);
  (**(code **)(**(int **)(p1 + 0x10c) + 0x254))
            (*(int **)(p1 + 0x10c),((int)this),
             *(undefined4 *)((unsigned char *)((char *)&g_006b3120 + (intptr_t)(g_006b31c4)) + g_006b31c0),0,0x20);
  piVar2 = *(int **)(*(int *)(((int)this) + 0x2c) + 0x114);
  (**(code **)(*piVar2 + 0x254))
            (piVar2,((int)this),*(undefined4 *)((unsigned char *)((char *)&g_006b3120 + (intptr_t)(g_006b31c8)) + iVar1),0,0x20);
  piVar2 = *(int **)(*(int *)(((int)this) + 0x2c) + 0x118);
  (**(code **)(*piVar2 + 0x254))
            (piVar2,((int)this),*(undefined4 *)((unsigned char *)((char *)&g_006b3120 + (intptr_t)(g_006b31cc)) + iVar1),0,0x20);
  piVar2 = *(int **)(*(int *)(((int)this) + 0x2c) + 0x11c);
  (**(code **)(*piVar2 + 0x254))
            (piVar2,((int)this),*(undefined4 *)((unsigned char *)((char *)&g_006b3120 + (intptr_t)(g_006b31d0)) + iVar1),0,0x20);
  piVar2 = *(int **)(*(int *)(((int)this) + 0x2c) + 0x120);
  (**(code **)(*piVar2 + 0x254))
            (piVar2,((int)this),*(undefined4 *)((unsigned char *)((char *)&g_006b3120 + (intptr_t)(g_006b31d4)) + iVar1),0,0x20);
  return;
}

void BLPlayerTuPoPresenter::initWithRoleID(std::string p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
