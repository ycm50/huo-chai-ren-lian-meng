#include "BLArenaMainPresenter.h"
#include "CCUserDefault.h"
#include "CCArray.h"
#include "CCNotificationCenter.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "CCObject.h"
#include "CCTouch.h"
#include "CCDirector.h"
#include "BLArenaMainView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLMissionData.h"
#include "CircusData.h"
#include "CircusShopData.h"
#include "DataManager.h"
#include "DebugLocalSys.h"
#include "PKOnlineManager.h"
#include "Toast.h"
#include "UIManager.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <new>   // ghost_fix.js 自动补齐
#include "BLForwards.h"

using namespace cocos2d;
// 兜底声明
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e34c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long func_0079e6c0(...);
extern "C" long long func_0079e774(...);
extern "C" long long func_0079e904(...);
extern "C" long long func_0079e914(...);
extern "C" long long ghidra_CARRY4(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_004bedb8;
extern "C" unsigned long UNK_004bedd0;
extern "C" unsigned long UNK_004bede8;
extern "C" unsigned long UNK_004bee5c;
extern "C" unsigned long UNK_004bee76;
extern "C" unsigned long UNK_004beebc;
extern "C" unsigned long UNK_004beee4;
extern "C" unsigned long UNK_004bef4a;
extern "C" unsigned long UNK_004bef78;
extern "C" unsigned long UNK_004bef90;
extern "C" unsigned long UNK_004bef94;
extern "C" unsigned long UNK_004befe0;
extern "C" unsigned long UNK_004befea;
extern "C" unsigned long UNK_004bf008;
extern "C" unsigned long UNK_004bf058;
extern "C" unsigned long UNK_004bf07a;
extern "C" unsigned long UNK_004bf07c;
extern "C" unsigned long UNK_004bf094;
extern "C" unsigned long UNK_004bf096;
extern "C" unsigned long UNK_004bf0ae;
extern "C" unsigned long UNK_004bf0b0;
extern "C" unsigned long UNK_004bf0c6;
extern "C" unsigned long UNK_004bf18c;
extern "C" unsigned long UNK_004bf1b0;
extern "C" unsigned long UNK_004bf1d2;
extern "C" unsigned long UNK_004bf218;
extern "C" unsigned long UNK_004bf222;
extern "C" unsigned long UNK_004bf316;
extern "C" unsigned long UNK_004bf3a8;
extern "C" unsigned long UNK_004bf3aa;
extern "C" unsigned long UNK_004bf43e;
extern "C" unsigned long UNK_004bf47e;
extern "C" unsigned long UNK_004bf4b2;
extern "C" unsigned long UNK_004bf502;
extern "C" unsigned long UNK_004bf560;
extern "C" unsigned long UNK_004bf5c8;
extern "C" unsigned long UNK_004bf606;
extern "C" unsigned long _UNK_004bedbc;
extern "C" unsigned long _UNK_004bedd4;
extern "C" unsigned long _UNK_004bedec;
extern "C" unsigned long _UNK_004beea8;
extern "C" unsigned long _UNK_004beeac;
extern "C" unsigned long _UNK_004beec0;
extern "C" unsigned long _UNK_004beee8;
extern "C" unsigned long _UNK_004bef60;
extern "C" unsigned long _UNK_004bef64;
extern "C" unsigned long _UNK_004bef68;
extern "C" unsigned long _UNK_004bf020;
extern "C" unsigned long _UNK_004bf024;
extern "C" unsigned long _UNK_004bf028;
extern "C" unsigned long _UNK_004bf02c;
extern "C" unsigned long _UNK_004bf030;
extern "C" unsigned long _UNK_004bf034;
extern "C" unsigned long _UNK_004bf038;
extern "C" unsigned long _UNK_004bf03c;
extern "C" unsigned long _UNK_004bf040;
extern "C" unsigned long _UNK_004bf0f4;
extern "C" unsigned long _UNK_004bf0f8;
extern "C" unsigned long _UNK_004bf0fc;
extern "C" unsigned long _UNK_004bf100;
extern "C" unsigned long _UNK_004bf104;
extern "C" unsigned long _UNK_004bf108;
extern "C" unsigned long _UNK_004bf10c;
extern "C" unsigned long _UNK_004bf110;
extern "C" unsigned long _UNK_004bf328;
extern "C" unsigned long _UNK_004bf32c;
extern "C" unsigned long _UNK_004bf330;
extern "C" unsigned long _UNK_004bf334;
extern "C" unsigned long _UNK_004bf338;
extern "C" unsigned long _UNK_004bf33c;
extern "C" unsigned long _UNK_004bf340;
extern "C" unsigned long _UNK_004bf344;
extern "C" unsigned long _UNK_004bf348;
extern "C" unsigned long _UNK_004bf34c;
extern "C" unsigned long _UNK_004bf350;
extern "C" unsigned long _UNK_004bf354;
extern "C" unsigned long _UNK_004bf358;
extern "C" unsigned long _UNK_004bf35c;
extern "C" unsigned long _UNK_004bf3c8;
extern "C" unsigned long _UNK_004bf3cc;
extern "C" unsigned long _UNK_004bf6a8;
extern "C" unsigned long _UNK_004bf6ac;
extern "C" unsigned long _UNK_004bf6b0;
extern "C" unsigned long _UNK_004bf6b4;
extern "C" unsigned long _UNK_004bf6b8;
extern "C" unsigned long _UNK_004bf6bc;
extern "C" unsigned long _UNK_004bf6c0;
extern "C" unsigned long _UNK_004bf6c4;
extern "C" unsigned long _UNK_004bf6c8;
extern "C" unsigned long _UNK_004bf6cc;
extern "C" unsigned long g_004bedb8;
extern "C" unsigned long g_004bedbc;
extern "C" unsigned long g_004bedd0;
extern "C" unsigned long g_004bedd4;
extern "C" unsigned long g_004bede8;
extern "C" unsigned long g_004bedec;
extern "C" unsigned long g_004bee5c;
extern "C" unsigned long g_004bee76;
extern "C" unsigned long g_004beea8;
extern "C" unsigned long g_004beeac;
extern "C" unsigned long g_004beebc;
extern "C" unsigned long g_004beec0;
extern "C" unsigned long g_004beee4;
extern "C" unsigned long g_004beee8;
extern "C" unsigned long g_004bef4a;
extern "C" unsigned long g_004bef60;
extern "C" unsigned long g_004bef64;
extern "C" unsigned long g_004bef68;
extern "C" unsigned long g_004bef78;
extern "C" unsigned long g_004bef90;
extern "C" unsigned long g_004bef94;
extern "C" unsigned long g_004befe0;
extern "C" unsigned long g_004befea;
extern "C" unsigned long g_004bf008;
extern "C" unsigned long g_004bf020;
extern "C" unsigned long g_004bf024;
extern "C" unsigned long g_004bf028;
extern "C" unsigned long g_004bf02c;
extern "C" unsigned long g_004bf030;
extern "C" unsigned long g_004bf034;
extern "C" unsigned long g_004bf038;
extern "C" unsigned long g_004bf03c;
extern "C" unsigned long g_004bf040;
extern "C" unsigned long g_004bf058;
extern "C" unsigned long g_004bf07a;
extern "C" unsigned long g_004bf07c;
extern "C" unsigned long g_004bf094;
extern "C" unsigned long g_004bf096;
extern "C" unsigned long g_004bf0ae;
extern "C" unsigned long g_004bf0b0;
extern "C" unsigned long g_004bf0c6;
extern "C" unsigned long g_004bf0f4;
extern "C" unsigned long g_004bf0f8;
extern "C" unsigned long g_004bf0fc;
extern "C" unsigned long g_004bf100;
extern "C" unsigned long g_004bf104;
extern "C" unsigned long g_004bf108;
extern "C" unsigned long g_004bf10c;
extern "C" unsigned long g_004bf110;
extern "C" unsigned long g_004bf18c;
extern "C" unsigned long g_004bf1b0;
extern "C" unsigned long g_004bf1d2;
extern "C" unsigned long g_004bf218;
extern "C" unsigned long g_004bf222;
extern "C" unsigned long g_004bf316;
extern "C" unsigned long g_004bf328;
extern "C" unsigned long g_004bf32c;
extern "C" unsigned long g_004bf330;
extern "C" unsigned long g_004bf334;
extern "C" unsigned long g_004bf338;
extern "C" unsigned long g_004bf33c;
extern "C" unsigned long g_004bf340;
extern "C" unsigned long g_004bf344;
extern "C" unsigned long g_004bf348;
extern "C" unsigned long g_004bf34c;
extern "C" unsigned long g_004bf350;
extern "C" unsigned long g_004bf354;
extern "C" unsigned long g_004bf358;
extern "C" unsigned long g_004bf35c;
extern "C" unsigned long g_004bf3a8;
extern "C" unsigned long g_004bf3aa;
extern "C" unsigned long g_004bf3c8;
extern "C" unsigned long g_004bf3cc;
extern "C" unsigned long g_004bf43e;
extern "C" unsigned long g_004bf47e;
extern "C" unsigned long g_004bf4b2;
extern "C" unsigned long g_004bf502;
extern "C" unsigned long g_004bf560;
extern "C" unsigned long g_004bf5c8;
extern "C" unsigned long g_004bf606;
extern "C" unsigned long g_004bf6a8;
extern "C" unsigned long g_004bf6ac;
extern "C" unsigned long g_004bf6b0;
extern "C" unsigned long g_004bf6b4;
extern "C" unsigned long g_004bf6b8;
extern "C" unsigned long g_004bf6bc;
extern "C" unsigned long g_004bf6c0;
extern "C" unsigned long g_004bf6c4;
extern "C" unsigned long g_004bf6c8;
extern "C" unsigned long g_004bf6cc;
bool BLArenaMainPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLArenaMainPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLArenaMainPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLArenaMainPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLArenaMainPresenter::tick(float p1)
{
  return;
}

BLArenaMainPresenter::~BLArenaMainPresenter()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLArenaMainPresenter::onClose(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(0x7a);
  return;
}





undefined4 BLArenaMainPresenter::create(BLArenaMainView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x1c))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLArenaMainPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  ((UIManager *)this)->shareManager();
  ((UIManager *)this)->popUnEnableScrollView();
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar2)->removeAllObservers((cocos2d::CCObject*)((int)this));
  return;
}

void BLArenaMainPresenter::onEnter()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14, 1, 1);
  return;
}


void BLArenaMainPresenter::onGetShopInfoSuccess()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->showUIById(0x90);
  return;
}

// ===== 修复: 补回被误删的函数占位 (8) =====
void BLArenaMainPresenter::onLeiTaiSaiWithoutRefresh()
{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  iVar2 = (undefined4)((void)(((UIManager *)(uVar1))->getUIObject(0x7b)),(intptr_t)0);
  if (iVar2 == 0) {
    uVar1 = (undefined4)(((UIManager *)this)->shareManager());
    ((UIManager *)(uVar1))->showUIById(0x7b);
  }
  return;
}

void BLArenaMainPresenter::onLeiTaiSai()
{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  iVar2 = (undefined4)((void)(((UIManager *)(uVar1))->getUIObject(0x7b)),(intptr_t)0);
  if (iVar2 == 0) {
    uVar4 = (undefined4)(intptr_t)(0 /* ctorZero */);
    uVar1 = (undefined4)(cocos2d::CCUserDefault::sharedUserDefault());
    uVar3 = (undefined4)(func_0079e774((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),g_004bef60,g_004bef64));
    ((cocos2d::CCUserDefault *)(uVar1))->setIntegerForKey((char const*)(unsigned char *)((char *)&g_004bef4a + (intptr_t)(g_004bef68)), uVar3);
    uVar1 = (undefined4)(((UIManager *)this)->shareManager());
    ((UIManager *)(uVar1))->showUIById(0x7b);
  }
  return;
}

void BLArenaMainPresenter::onUpdateJiFen(cocos2d::CCObject* p1)
{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined *puVar6;
  uint uVar7;
  int *piVar8;
  undefined8 uVar9;
  undefined1 auStack_30 [20];
  int iStack_1c;
  
  piVar8 = *(int **)((unsigned char *)((char *)&g_004bef78 + (intptr_t)(g_004bf028)));
  iStack_1c = (int)*(int *)&(*piVar8);
  if (((int)(intptr_t)p1 != 0) &&
     (iVar1 = func_0079e55c(p1,*(undefined4 *)((unsigned char *)((char *)&g_004bef90 + (intptr_t)(g_004bf02c))),
                              *(undefined4 *)((unsigned char *)((char *)&g_004bef94 + (intptr_t)(g_004bf030))),0), iVar1 != 0)) {
    (void)(((long long)::memset((void *)(auStack_30),(int)(0),(size_t)(0x14))));
    iVar2 = (undefined4)(intptr_t)(((CircusData *)this)->getMe());
    uVar5 = (undefined4)(*(uint *)(iVar1 + 0x14));
    uVar7 = (undefined4)(uVar5 + *(uint *)(iVar2 + 0x78));
    iVar1 = ((int)uVar5 >> 0x1f) + *(int *)(iVar2 + 0x7c) +
            (uint)ghidra_CARRY4(uVar5,*(uint *)(iVar2 + 0x78));
    uVar9 = (undefined4)(intptr_t)(ghidra_CONCAT44(iVar1,uVar7));
    if ((iVar1 < 1) && ((iVar1 != 0 || (uVar7 <= g_004bf034)))) {
      puVar6 = (unsigned char *)((char *)&g_004befea + (intptr_t)(g_004bf03c));
    }
    else {
      uVar9 = (undefined4)(intptr_t)(func_0079e774(uVar7,iVar1,g_004bf020,g_004bf024));
      puVar6 = (unsigned char *)((char *)&g_004befe0 + (intptr_t)(g_004bf038));
    }
    (void)(((long long)::sprintf((char *)(auStack_30),(char const *)(puVar6),(int)uVar9,(int)((ulonglong)uVar9 >> 0x20))));
    piVar3 = (int *)((BLArenaMainView *)*(undefined4 *)(((int)this) + 0x18))->getLabVs();
    (**(code **)(*piVar3 + 0x234))(piVar3,auStack_30);
    uVar4 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
    ((cocos2d::CCNotificationCenter *)uVar4)->postNotification((char const*)(unsigned char *)((char *)&g_004bf008 + (intptr_t)(g_004bf040)));
  }
  if (iStack_1c != *piVar8) {
    func_0079e914();
  }
  return;
}

BLArenaMainPresenter::BLArenaMainPresenter()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLArenaMainPresenter::initWithView(BLArenaMainView* p1)
{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  code *pcVar10;
  code *pcVar11;
  undefined8 uVar12;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 auStack_30 [20];
  int iStack_1c;
  
  piVar9 = *(int **)((unsigned char *)((char *)&g_004bf18c + (intptr_t)(g_004bf330)));
  *(undefined4 *)(((int)this) + 0x18) = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  iStack_1c = (int)*(int *)&(*piVar9);
  piVar1 = (int *)((BLArenaMainView *)(p1))->getBtnClose();
  (**(code **)(*(int *)(piVar1) + (0x254)))
            (piVar1,((int)this),*(undefined4 *)((unsigned char *)((char *)&g_004bf1b0 + (intptr_t)(g_004bf334))),0,0x20);
  piVar1 = (int *)((BLArenaMainView *)(*(undefined4 *)(((int)this) + 0x18)))->getBtnShop();
  (**(code **)(*(int *)(piVar1) + (0x254)))
            (piVar1,((int)this),*(undefined4 *)((unsigned char *)((char *)&g_004bf1d2 + (intptr_t)(g_004bf338))),0,0x20);
  func_0079e34c(auStack_30,0,0x14);
  iVar2 = (undefined4)(intptr_t)(((CircusData *)this)->getMe());
  iVar8 = (undefined4)(intptr_t)(*(int *)(iVar2 + 0x7c));
  uVar7 = (undefined4)(*(uint *)(iVar2 + 0x78));
  uVar12 = (undefined4)(intptr_t)(*(undefined8 *)(iVar2 + 0x78));
  if ((iVar8 < 1) && ((iVar8 != 0 || (uVar7 <= g_004bf33c)))) {
    puVar6 = (unsigned char *)((char *)&g_004bf222 + (intptr_t)(g_004bf344));
  }
  else {
    uVar12 = (undefined4)(intptr_t)(func_0079e774(uVar7,iVar8,g_004bf328,g_004bf32c));
    puVar6 = (unsigned char *)((char *)&g_004bf218 + (intptr_t)(g_004bf340));
  }
  func_0079e904(auStack_30,puVar6,(int)uVar12,(int)((ulonglong)uVar12 >> 0x20));
  piVar1 = (int *)((BLArenaMainView *)(*(undefined4 *)(((int)this) + 0x18)))->getLabVs();
  (**(code **)(*(int *)(piVar1) + (0x234)))(piVar1,auStack_30);
  piVar1 = (int *)((BLArenaMainView *)(*(undefined4 *)(((int)this) + 0x18)))->getbgJiFen();
  pcVar11 = *(code **)(*piVar1 + 0x1d4);
  piVar3 = (int *)((BLArenaMainView *)(*(undefined4 *)(((int)this) + 0x18)))->getLabVs();
  puVar4 = (undefined4 *)(**(code **)(*(int *)(piVar3) + (0x8c)))();
  uVar5 = (undefined4)(func_0079e59c(*puVar4,g_004bf348));
  0 /* ctorZero */;
  (*pcVar11)(piVar1,&uStack_38);
  piVar1 = (int *)((BLArenaMainView *)(*(undefined4 *)(((int)this) + 0x18)))->getjifen();
  pcVar10 = *(code **)(*piVar1 + 0x5c);
  piVar3 = (int *)((BLArenaMainView *)(*(undefined4 *)(((int)this) + 0x18)))->getLabVs();
  puVar4 = (undefined4 *)(**(code **)(*(int *)(piVar3) + (0x8c)))();
  uVar5 = (undefined4)(func_0079e59c(*puVar4,g_004bf350));
  uVar5 = (undefined4)(func_0079e59c(uVar5,g_004bf354));
  (*pcVar10)(piVar1,uVar5);
  iVar2 = (undefined4)(intptr_t)((**(code **)(**(int **)(((int)this) + 0x18) + 0x1f8))());
  if (iVar2 == 0) goto code_r0x004bf2ec;
  iVar2 = (undefined4)(intptr_t)((**(code **)(**(int **)(((int)this) + 0x18) + 0x1f8))());
  if (**(int **)(iVar2 + 0x14) == 0) goto code_r0x004bf2ec;
  iVar2 = (undefined4)(intptr_t)((**(code **)(**(int **)(((int)this) + 0x18) + 0x1f8))());
  pcVar10 = *(code **)(*(int *)(iVar2 + 0x14) + 8);
  iVar2 = (undefined4)(intptr_t)((**(code **)(**(int **)(((int)this) + 0x18) + 0x1f8))());
  iVar8 = (undefined4)(intptr_t)(*(int *)(*(int *)(iVar2 + 0x14) + 8));
  iVar2 = (undefined4)(intptr_t)((**(code **)(**(int **)(((int)this) + 0x18) + 0x1f8))());
  pcVar11 = (code *)(iVar8 + (**(int **)(iVar2 + 0x14) + g_004bf358) * 4);
  do {
    if (pcVar10 <= pcVar11) goto code_r0x004bf2fc;
code_r0x004bf2ec:
    do {
      if (iStack_1c == *piVar9) {
        return;
      }
      func_0079e914(1);
code_r0x004bf2fc:
      piVar1 = *(int **)pcVar10;
    } while (piVar1 == (int *)0x0);
    uStack_34 = (undefined4)(0);
    uStack_38 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_004bf316 + (intptr_t)(g_004bf35c))));
    (**(code **)(*(int *)(piVar1) + (0x254)))(piVar1,((int)this),uStack_38,0,0x20);
    pcVar10 = pcVar10 + 4;
  } while( true );
}

int BLArenaMainPresenter::getHeroCount()
{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  piVar1 = (int *)(**(code **)(*piVar1 + 0x28))();
  iVar6 = 0;
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x60))());
  for (uVar5 = 0; uVar3 = (undefined4)(intptr_t)(((cocos2d::CCArray *)uVar2)->count(), uVar5 < uVar3); uVar5 = uVar5 + 1) {
    iVar4 = (undefined4)(intptr_t)(((cocos2d::CCArray *)uVar2)->objectAtIndex((unsigned int)uVar5));
    if ((iVar4 != 0) &&
       (piVar1 = (int *)func_0079e55c(iVar4,*(undefined4 *)((unsigned char *)((char *)&g_004bf3a8 + (intptr_t)(g_004bf3c8))),
                                        *(undefined4 *)((unsigned char *)((char *)&g_004bf3aa + (intptr_t)(g_004bf3cc))),0),
       piVar1 != (int *)0x0)) {
      iVar4 = (undefined4)(intptr_t)((**(code **)(*piVar1 + 0x38))());
      iVar6 = (undefined4)(intptr_t)(iVar6 + (uint)(iVar4 != 0));
    }
  }
  return iVar6;
}

void BLArenaMainPresenter::onShop(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLArenaMainPresenter::onClick(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
