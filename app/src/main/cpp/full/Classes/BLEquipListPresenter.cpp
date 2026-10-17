#include "BLEquipListPresenter.h"
#include "BackPackItemData.h"
#include "BLAttackHurtData.h"
#include "CCDictionary.h"
#include "CCNotificationCenter.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "CCNode.h"
#include "CCObject.h"
#include "CCTouch.h"
#include "CCArray.h"
#include "CCDirector.h"
#include "BLDebug.h"
#include "BLEquipListItemPresenter.h"
#include "BLEquipListItemView.h"
#include "BLEquipListView.h"
#include "BLEquipRuneItemPresenter.h"
#include "BLEquipRuneItemView.h"
#include "BLEquipUpgraceItemPresenter.h"
#include "BLEquipUpgraceItemView.h"
#include "BLGameScene.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLSkillItemPresenter.h"
#include "BLSkillItemView.h"
#include "BLTableView.h"
#include "BackPackData.h"
#include "BluetoothHelper.h"
#include "CampaignData.h"
#include "DataCacheManager.h"
#include "DataManager.h"
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
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2dc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e5dc(...);
extern "C" long long func_0079e784(...);
extern "C" long long func_0079e854(...);
extern "C" long long func_0079e874(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0066f11c;
extern "C" unsigned long UNK_0066f134;
extern "C" unsigned long UNK_0066f14c;
extern "C" unsigned long UNK_0066f1c0;
extern "C" unsigned long UNK_0066f1e6;
extern "C" unsigned long UNK_0066f23c;
extern "C" unsigned long UNK_0066f264;
extern "C" unsigned long UNK_0066f284;
extern "C" unsigned long UNK_0066f2cc;
extern "C" unsigned long UNK_0066f2ec;
extern "C" unsigned long UNK_0066f4e6;
extern "C" unsigned long UNK_0066f520;
extern "C" unsigned long UNK_0066f5b2;
extern "C" unsigned long UNK_0066f5c0;
extern "C" unsigned long UNK_0066f5de;
extern "C" unsigned long UNK_0066f5e6;
extern "C" unsigned long UNK_0066f5fe;
extern "C" unsigned long UNK_0066f676;
extern "C" unsigned long UNK_0066f6ca;
extern "C" unsigned long UNK_0066f734;
extern "C" unsigned long UNK_0066f758;
extern "C" unsigned long UNK_0066f776;
extern "C" unsigned long UNK_0066f7c4;
extern "C" unsigned long UNK_0066f82e;
extern "C" unsigned long UNK_0066f858;
extern "C" unsigned long UNK_0066f956;
extern "C" unsigned long UNK_0066f95a;
extern "C" unsigned long UNK_0066f99e;
extern "C" unsigned long UNK_0066f9f0;
extern "C" unsigned long UNK_0066fa62;
extern "C" unsigned long UNK_0066fa66;
extern "C" unsigned long UNK_0066faaa;
extern "C" unsigned long UNK_0066fafc;
extern "C" unsigned long UNK_0066fb6e;
extern "C" unsigned long UNK_0066fb72;
extern "C" unsigned long UNK_0066fb94;
extern "C" unsigned long UNK_0066fbba;
extern "C" unsigned long UNK_0066fc1e;
extern "C" unsigned long UNK_0066fc22;
extern "C" unsigned long UNK_0066fc42;
extern "C" unsigned long UNK_0066fc62;
extern "C" unsigned long UNK_0066fc80;
extern "C" unsigned long UNK_0066fc9c;
extern "C" unsigned long UNK_0066fcda;
extern "C" unsigned long UNK_0066fcf0;
extern "C" unsigned long UNK_0066fd1a;
extern "C" unsigned long UNK_0066fe14;
extern "C" unsigned long _UNK_0066f120;
extern "C" unsigned long _UNK_0066f138;
extern "C" unsigned long _UNK_0066f150;
extern "C" unsigned long _UNK_0066f228;
extern "C" unsigned long _UNK_0066f22c;
extern "C" unsigned long _UNK_0066f240;
extern "C" unsigned long _UNK_0066f268;
extern "C" unsigned long _UNK_0066f288;
extern "C" unsigned long _UNK_0066f2b4;
extern "C" unsigned long _UNK_0066f2b8;
extern "C" unsigned long _UNK_0066f2bc;
extern "C" unsigned long _UNK_0066f2d0;
extern "C" unsigned long _UNK_0066f4a0;
extern "C" unsigned long _UNK_0066f4a4;
extern "C" unsigned long _UNK_0066f4ac;
extern "C" unsigned long _UNK_0066f4b0;
extern "C" unsigned long _UNK_0066f4b4;
extern "C" unsigned long _UNK_0066f4b8;
extern "C" unsigned long _UNK_0066f4bc;
extern "C" unsigned long _UNK_0066f4c0;
extern "C" unsigned long _UNK_0066f564;
extern "C" unsigned long _UNK_0066f568;
extern "C" unsigned long _UNK_0066f5c4;
extern "C" unsigned long _UNK_0066f5c8;
extern "C" unsigned long _UNK_0066f60c;
extern "C" unsigned long _UNK_0066f610;
extern "C" unsigned long _UNK_0066f614;
extern "C" unsigned long _UNK_0066f6ec;
extern "C" unsigned long _UNK_0066f6f0;
extern "C" unsigned long _UNK_0066f8f0;
extern "C" unsigned long _UNK_0066f8f4;
extern "C" unsigned long _UNK_0066f8f8;
extern "C" unsigned long _UNK_0066f90c;
extern "C" unsigned long _UNK_0066f910;
extern "C" unsigned long _UNK_0066f914;
extern "C" unsigned long _UNK_0066fa14;
extern "C" unsigned long _UNK_0066fa18;
extern "C" unsigned long _UNK_0066fa1c;
extern "C" unsigned long _UNK_0066fa20;
extern "C" unsigned long _UNK_0066fb20;
extern "C" unsigned long _UNK_0066fb24;
extern "C" unsigned long _UNK_0066fb28;
extern "C" unsigned long _UNK_0066fb2c;
extern "C" unsigned long _UNK_0066fbd4;
extern "C" unsigned long _UNK_0066fbd8;
extern "C" unsigned long _UNK_0066fbdc;
extern "C" unsigned long _UNK_0066fbe0;
extern "C" unsigned long _UNK_0066fd70;
extern "C" unsigned long _UNK_0066fd74;
extern "C" unsigned long _UNK_0066fd78;
extern "C" unsigned long _UNK_0066fd7c;
extern "C" unsigned long _UNK_0066fd80;
extern "C" unsigned long _UNK_0066fd84;
extern "C" unsigned long _UNK_0066fd88;
extern "C" unsigned long _UNK_0066fd8c;
extern "C" unsigned long _UNK_0066fd90;
extern "C" unsigned long _UNK_0066fe40;
extern "C" unsigned long extraout_r1;
extern "C" unsigned long g_0066f11c;
extern "C" unsigned long g_0066f120;
extern "C" unsigned long g_0066f134;
extern "C" unsigned long g_0066f138;
extern "C" unsigned long g_0066f14c;
extern "C" unsigned long g_0066f150;
extern "C" unsigned long g_0066f1c0;
extern "C" unsigned long g_0066f1e6;
extern "C" unsigned long g_0066f228;
extern "C" unsigned long g_0066f22c;
extern "C" unsigned long g_0066f23c;
extern "C" unsigned long g_0066f240;
extern "C" unsigned long g_0066f264;
extern "C" unsigned long g_0066f268;
extern "C" unsigned long g_0066f284;
extern "C" unsigned long g_0066f288;
extern "C" unsigned long g_0066f2b4;
extern "C" unsigned long g_0066f2b8;
extern "C" unsigned long g_0066f2bc;
extern "C" unsigned long g_0066f2cc;
extern "C" unsigned long g_0066f2d0;
extern "C" unsigned long g_0066f2ec;
extern "C" unsigned long g_0066f4a0;
extern "C" unsigned long g_0066f4a4;
extern "C" unsigned long g_0066f4ac;
extern "C" unsigned long g_0066f4b0;
extern "C" unsigned long g_0066f4b4;
extern "C" unsigned long g_0066f4b8;
extern "C" unsigned long g_0066f4bc;
extern "C" unsigned long g_0066f4c0;
extern "C" unsigned long g_0066f4e6;
extern "C" unsigned long g_0066f520;
extern "C" unsigned long g_0066f564;
extern "C" unsigned long g_0066f568;
extern "C" unsigned long g_0066f5b2;
extern "C" unsigned long g_0066f5c0;
extern "C" unsigned long g_0066f5c4;
extern "C" unsigned long g_0066f5c8;
extern "C" unsigned long g_0066f5de;
extern "C" unsigned long g_0066f5e6;
extern "C" unsigned long g_0066f5fe;
extern "C" unsigned long g_0066f60c;
extern "C" unsigned long g_0066f610;
extern "C" unsigned long g_0066f614;
extern "C" unsigned long g_0066f676;
extern "C" unsigned long g_0066f6ca;
extern "C" unsigned long g_0066f6ec;
extern "C" unsigned long g_0066f6f0;
extern "C" unsigned long g_0066f734;
extern "C" unsigned long g_0066f758;
extern "C" unsigned long g_0066f776;
extern "C" unsigned long g_0066f7c4;
extern "C" unsigned long g_0066f82e;
extern "C" unsigned long g_0066f858;
extern "C" unsigned long g_0066f8f0;
extern "C" unsigned long g_0066f8f4;
extern "C" unsigned long g_0066f8f8;
extern "C" unsigned long g_0066f90c;
extern "C" unsigned long g_0066f910;
extern "C" unsigned long g_0066f914;
extern "C" unsigned long g_0066f956;
extern "C" unsigned long g_0066f95a;
extern "C" unsigned long g_0066f99e;
extern "C" unsigned long g_0066f9f0;
extern "C" unsigned long g_0066fa14;
extern "C" unsigned long g_0066fa18;
extern "C" unsigned long g_0066fa1c;
extern "C" unsigned long g_0066fa20;
extern "C" unsigned long g_0066fa62;
extern "C" unsigned long g_0066fa66;
extern "C" unsigned long g_0066faaa;
extern "C" unsigned long g_0066fafc;
extern "C" unsigned long g_0066fb20;
extern "C" unsigned long g_0066fb24;
extern "C" unsigned long g_0066fb28;
extern "C" unsigned long g_0066fb2c;
extern "C" unsigned long g_0066fb6e;
extern "C" unsigned long g_0066fb72;
extern "C" unsigned long g_0066fb94;
extern "C" unsigned long g_0066fbba;
extern "C" unsigned long g_0066fbd4;
extern "C" unsigned long g_0066fbd8;
extern "C" unsigned long g_0066fbdc;
extern "C" unsigned long g_0066fbe0;
extern "C" unsigned long g_0066fc1e;
extern "C" unsigned long g_0066fc22;
extern "C" unsigned long g_0066fc42;
extern "C" unsigned long g_0066fc62;
extern "C" unsigned long g_0066fc80;
extern "C" unsigned long g_0066fc9c;
extern "C" unsigned long g_0066fcda;
extern "C" unsigned long g_0066fcf0;
extern "C" unsigned long g_0066fd1a;
extern "C" unsigned long g_0066fd70;
extern "C" unsigned long g_0066fd74;
extern "C" unsigned long g_0066fd78;
extern "C" unsigned long g_0066fd7c;
extern "C" unsigned long g_0066fd80;
extern "C" unsigned long g_0066fd84;
extern "C" unsigned long g_0066fd88;
extern "C" unsigned long g_0066fd8c;
extern "C" unsigned long g_0066fd90;
extern "C" unsigned long g_0066fe14;
extern "C" unsigned long g_0066fe40;
int BLEquipListPresenter::getIndex() const
{
  return *(undefined4 *)(((int)this) + 0x24);
}

void BLEquipListPresenter::setIndex(int p1)
{
  *(undefined4 *)(((int)this) + 0x24) = p1;
  return;
}

cocos2d::CCArray* BLEquipListPresenter::getArrayBackItems() const
{
  return (cocos2d::CCArray*)(*(undefined4 *)(((int)this) + 0x28));
}

bool BLEquipListPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLEquipListPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLEquipListPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLEquipListPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLEquipListPresenter::touchItemAtIndex(BLTableView* p1, int p2)
{
  return;
}

void BLEquipListPresenter::tick(float p1)
{
  return;
}

BLEquipListPresenter::~BLEquipListPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0066f1c0 + g_0066f228);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x5c;
  *(int *)((int)this + 4*(6)) = iVar2 + 0x8c;
  *(int *)((int)this + 4*(7)) = iVar2 + 0x9c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0066f1e6 + g_0066f22c,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  if (*(int *)((int)this + 4*(10)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(10)) = 0;
  }
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLEquipListPresenter::numOfCellItem(BLTableView* p1)
{
  ((cocos2d::CCArray *)*(undefined4 *)(((int)this) + 0x28))->count();
  return;
}

undefined4 BLEquipListPresenter::sizeOfCellItem(BLTableView* p1)
{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  iVar2 = (**(code **)(*piVar1 + 0x78))();
  uVar3 = (undefined4)(g_0066f2bc);
  if (iVar2 == 2) {
    uVar3 = (undefined4)(g_0066f2b8);
  }
  0 /* ctorZero */;
  return ((int)this);
}



undefined4 BLEquipListPresenter::create(BLEquipListView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x30))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLEquipListPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar2)->removeObserver((cocos2d::CCObject*)((int)this), (char const*)&g_0066f5b2 + g_0066f5c4);
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar2)->removeObserver((cocos2d::CCObject*)((int)this), (char const*)&g_0066f5c0 + g_0066f5c8);
  return;
}









void BLEquipListPresenter::onPageChange(cocos2d::CCObject* p1)
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x70))());
  BLEquipListPresenter::initPageIndex(uVar2);
  return;
}

// ===== 修复: 补回被误删的函数占位 (12) =====
void BLEquipListPresenter::setArrayBackItems(cocos2d::CCArray* p1)
{
  *(undefined4 *)(((int)this) + 0x28) = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  return;
}

void BLEquipListPresenter::nodeOfCellItemAtIndex(BLTableView* p1, cocos2d::CCNode* p2, int p3)
{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  
  iVar5 = (undefined4)(intptr_t)((int *)((int)this));
  iVar3 = (undefined4)(intptr_t)(p2);
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  iVar4 = (undefined4)(intptr_t)(g_0066f4a0);
  iVar2 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar1) + (0x78)))());
  if (iVar2 != 0) {
    piVar1 = (int *)((DataManager *)this)->shareDataManager();
    iVar2 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar1) + (0x78)))());
    if (iVar2 != 3) {
      piVar1 = (int *)((DataManager *)this)->shareDataManager();
      iVar3 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar1) + (0x78)))());
      if (iVar3 != 1) {
        piVar1 = (int *)((DataManager *)this)->shareDataManager();
        iVar3 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar1) + (0x78)))());
        if (iVar3 != 2) {
          iVar3 = (undefined4)(intptr_t)(cocos2d::CCNode::create());
          goto code_r0x0066f49c;
        }
        if ((int)(intptr_t)(int)(intptr_t)p2 == 0) {
code_r0x0066f458:
          iVar3 = (undefined4)(intptr_t)(((BLSkillItemView *)this)->create());
        }
        else {
          iVar5 = (undefined4)(intptr_t)(*(int *)((unsigned char *)((char *)&g_0066f2ec + (intptr_t)(g_0066f4a4)) + iVar4));
          uVar6 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_0066f2ec + (intptr_t)(g_0066f4bc)) + iVar4));
          iVar3 = (undefined4)(intptr_t)(func_0079e55c(p2,iVar5,uVar6,0,iVar5,uVar6));
          if (iVar3 == 0) goto code_r0x0066f458;
        }
        iVar2 = (undefined4)(intptr_t)(((cocos2d::CCArray *)(*(undefined4 *)(((int)this) + 0x28)))->objectAtIndex((unsigned int)p3));
        if (iVar2 != 0) {
          iVar5 = (undefined4)(intptr_t)(*(int *)((unsigned char *)((char *)&g_0066f2ec + (intptr_t)(g_0066f4ac)) + iVar4));
          uVar6 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_0066f2ec + (intptr_t)(g_0066f4c0)) + iVar4));
          iVar4 = (undefined4)(intptr_t)(func_0079e55c(iVar2,iVar5,uVar6,0,iVar5,uVar6));
          if (iVar4 != 0) {
            uVar6 = (undefined4)(((BLSkillItemView *)(iVar3))->getPresenter());
            ((BLSkillItemPresenter *)(uVar6))->initWithData((BLAttackHurtData*)iVar4);
          }
        }
        goto code_r0x0066f49c;
      }
      if ((int)(intptr_t)(int)(intptr_t)p2 == 0) {
code_r0x0066f3ec:
        iVar3 = (undefined4)(intptr_t)(((BLEquipUpgraceItemView *)this)->create());
      }
      else {
        iVar5 = (undefined4)(intptr_t)(*(int *)((unsigned char *)((char *)&g_0066f2ec + (intptr_t)(g_0066f4a4)) + iVar4));
        uVar6 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_0066f2ec + (intptr_t)(g_0066f4b8)) + iVar4));
        iVar3 = (undefined4)(intptr_t)(func_0079e55c(p2,iVar5,uVar6,0,iVar5,uVar6));
        if (iVar3 == 0) goto code_r0x0066f3ec;
      }
      iVar2 = (undefined4)(intptr_t)(((cocos2d::CCArray *)(*(undefined4 *)(((int)this) + 0x28)))->objectAtIndex((unsigned int)p3));
      if (iVar2 != 0) {
        iVar5 = (undefined4)(intptr_t)(*(int *)((unsigned char *)((char *)&g_0066f2ec + (intptr_t)(g_0066f4ac)) + iVar4));
        uVar6 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_0066f2ec + (intptr_t)(g_0066f4b0)) + iVar4));
        iVar4 = (undefined4)(intptr_t)(func_0079e55c(iVar2,iVar5,uVar6,0,iVar5,uVar6));
        if (iVar4 != 0) {
          uVar6 = (undefined4)(((BLEquipUpgraceItemView *)(iVar3))->getPresenter());
          ((BLEquipUpgraceItemPresenter *)(uVar6))->initWithData((BackPackItemData*)iVar4);
        }
      }
      goto code_r0x0066f49c;
    }
    if ((int)(intptr_t)(int)(intptr_t)p2 == 0) {
code_r0x0066f37a:
      iVar3 = (undefined4)(intptr_t)(((BLEquipRuneItemView *)this)->create());
    }
    else {
      iVar5 = (undefined4)(intptr_t)(*(int *)((unsigned char *)((char *)&g_0066f2ec + (intptr_t)(g_0066f4a4)) + iVar4));
      uVar6 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_0066f2ec + (intptr_t)(g_0066f4b4)) + iVar4));
      iVar3 = (undefined4)(intptr_t)(func_0079e55c(p2,iVar5,uVar6,0,iVar5,uVar6,iVar3));
      if (iVar3 == 0) goto code_r0x0066f37a;
    }
    iVar2 = (undefined4)(intptr_t)(((cocos2d::CCArray *)(*(undefined4 *)(((int)this) + 0x28)))->objectAtIndex((unsigned int)p3));
    if (iVar2 != 0) {
      iVar5 = (undefined4)(intptr_t)(*(int *)((unsigned char *)((char *)&g_0066f2ec + (intptr_t)(g_0066f4ac)) + iVar4));
      uVar6 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_0066f2ec + (intptr_t)(g_0066f4b0)) + iVar4));
      iVar4 = (undefined4)(intptr_t)(func_0079e55c(iVar2,iVar5,uVar6,0,iVar5,uVar6));
      if (iVar4 != 0) {
        uVar6 = (undefined4)(((BLEquipRuneItemView *)(iVar3))->getPresenter());
        ((BLEquipRuneItemPresenter *)(uVar6))->initWithData((BackPackItemData*)iVar4);
      }
    }
    goto code_r0x0066f49c;
  }
  if ((int)(intptr_t)(int)(intptr_t)p2 == 0) {
code_r0x0066f30a:
    iVar3 = (undefined4)(intptr_t)(((BLEquipListItemView *)this)->create());
  }
  else {
    iVar5 = (undefined4)(intptr_t)(*(int *)((unsigned char *)((char *)&g_0066f2ec + (intptr_t)(g_0066f4a4)) + iVar4));
    iVar3 = (undefined4)(intptr_t)(func_0079e55c(p2,iVar5));
    if (iVar3 == 0) goto code_r0x0066f30a;
  }
  iVar2 = (undefined4)(intptr_t)(((cocos2d::CCArray *)(*(undefined4 *)(((int)this) + 0x28)))->objectAtIndex((unsigned int)p3));
  if (iVar2 != 0) {
    iVar5 = (undefined4)(intptr_t)(*(int *)((unsigned char *)((char *)&g_0066f2ec + (intptr_t)(g_0066f4ac)) + iVar4));
    uVar6 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_0066f2ec + (intptr_t)(g_0066f4b0)) + iVar4));
    iVar4 = (undefined4)(intptr_t)(func_0079e55c(iVar2,iVar5,uVar6,0,iVar5,uVar6));
    if (iVar4 != 0) {
      uVar6 = (undefined4)(((BLEquipListItemView *)(iVar3))->getPresenter());
      ((BLEquipListItemPresenter *)(uVar6))->initWithData((BackPackItemData*)iVar4);
    }
  }
code_r0x0066f49c:
  return;
}

BLEquipListPresenter::BLEquipListPresenter()
{
  undefined4 p2 = 0;

  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar3 = (undefined4)(intptr_t)(*(int *)((unsigned char *)((char *)&g_0066f4e6 + (intptr_t)(g_0066f564))));
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x5c;
  *(int *)((int)this + 4*(6)) = iVar3 + 0x8c;
  *(int *)((int)this + 4*(7)) = iVar3 + 0x9c;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 0);
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,(unsigned char *)((char *)&g_0066f520 + (intptr_t)(g_0066f568)),&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  iVar3 = (undefined4)(intptr_t)(cocos2d::CCArray::create());
  *(int *)((int)this + 4*(10)) = iVar3;
  if (iVar3 != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  *(undefined1 *)(((int)this) + 0xb) = 1;
  return;
}

void BLEquipListPresenter::onEnter()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLEquipListPresenter::initWithView(BLEquipListView* p1)
{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [8];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  *(undefined4 *)(((int)this) + 0x20) = (undefined4)(intptr_t)p1;
  piVar1 = (int *)((BLEquipListView *)p1)->getTableViewtbvEquip();
  (**(code **)(*piVar1 + 0x21c))(piVar1,((int)this) + 0x18);
  piVar1 = (int *)((BLEquipListView *)*(undefined4 *)(((int)this) + 0x20))->getTableViewtbvEquip();
  (**(code **)(*piVar1 + 0x214))(piVar1,((int)this) + 0x1c);
  piVar1 = (int *)((BLEquipListView *)*(undefined4 *)(((int)this) + 0x20))->getTableViewtbvEquip();
  (**(code **)(*piVar1 + 0x22c))(piVar1,1);
  piVar1 = (int *)((BLEquipListView *)*(undefined4 *)(((int)this) + 0x20))->getBtnClose();
  uStack_1c = (undefined4)(0);
  uStack_20 = (undefined4)(*(undefined4 *)(&g_0066f676 + g_0066f6ec));
  (**(code **)(*piVar1 + 0x254))(piVar1,((int)this),uStack_20,0,0x20);
  piVar1 = (int *)((BLEquipListView *)*(undefined4 *)(((int)this) + 0x20))->getBtnClose();
  pcVar3 = *(code **)(*piVar1 + 0x28c);
  piVar2 = (int *)((BLEquipListView *)*(undefined4 *)(((int)this) + 0x20))->getBtnClose();
  piVar2 = (int *)(**(code **)(*piVar2 + 0x308))(piVar2,1);
  (**(code **)(*piVar2 + 0x1cc))(auStack_28,piVar2);
  (*pcVar3)(piVar1,auStack_28);
  piVar1 = (int *)((BLEquipListView *)*(undefined4 *)(((int)this) + 0x20))->getBtnClose();
  pcVar3 = *(code **)(*piVar1 + 0x26c);
  func_0079e45c(auStack_28,&g_0066f6ca + g_0066f6f0,auStack_2c);
  (*pcVar3)(piVar1,auStack_28);
  func_0079e2bc(auStack_28);
  return;
}

void BLEquipListPresenter::updateTitle()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

undefined8 BLEquipListPresenter::initEuiqpList()
{
  undefined4 p2 = 0;

  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  int iStack_20;
  undefined4 uStack_1c;
  
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  piVar1 = (int *)(**(code **)(*(int *)(piVar1) + (0x28)))();
  uVar2 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x68)))());
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  uVar3 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x60)))());
  iVar4 = (undefined4)(intptr_t)(((cocos2d::CCArray *)(uVar2))->objectAtIndex((unsigned int)uVar3));
  iStack_20 = (undefined4)(intptr_t)((int *)((int)this));
  uStack_1c = (undefined4)(p2);
  if (iVar4 != 0) {
    iStack_20 = (undefined4)(intptr_t)(*(int *)((unsigned char *)((char *)&g_0066f956 + (intptr_t)(g_0066fa14))));
    iVar4 = (undefined4)(intptr_t)(func_0079e55c(iVar4,iStack_20,*(undefined4 *)((unsigned char *)((char *)&g_0066f95a + (intptr_t)(g_0066fa18))),0));
    if (iVar4 != 0) {
      piVar1 = (int *)((DataManager *)this)->shareDataManager();
      piVar1 = (int *)(**(code **)(*(int *)(piVar1) + (0x28)))();
      (**(code **)(*(int *)(piVar1) + (0x50)))();
      uVar2 = (undefined4)(((BackPackData *)this)->sortItems());
      for (uVar7 = 0; uVar5 = (undefined4)(intptr_t)(((cocos2d::CCArray *)(uVar2))->count(), uVar7 < uVar5); uVar7 = uVar7 + 1)
      {
        iVar4 = (undefined4)(intptr_t)(((cocos2d::CCArray *)(uVar2))->objectAtIndex((unsigned int)uVar7));
        if ((iVar4 != 0) &&
           (piVar1 = (int *)func_0079e55c(iVar4,iStack_20,
                                            *(undefined4 *)((unsigned char *)((char *)&g_0066f99e + (intptr_t)(g_0066fa1c))),0),
           piVar1 != (int *)0x0)) {
          uStack_1c = (undefined4)(((DataCacheManager *)this)->shareManager());
          uVar3 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x20)))(piVar1));
          piVar6 = ((void)((DataCacheManager *)(uStack_1c))->getItemDataByID(uVar3),(int *)0);
          iVar4 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar6) + (0x30)))());
          if (iVar4 == 1) {
            piVar6 = (int *)((DataCacheManager *)this)->shareManager();
            uStack_1c = (undefined4)((**(code **)(*(int *)(piVar6) + (0x68)))());
            uVar3 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x20)))(piVar1));
            iVar4 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)(uStack_1c))->objectForKey(uVar3));
            if ((iVar4 != 0) &&
               (piVar6 = (int *)func_0079e55c(iVar4,iStack_20,
                                                *(undefined4 *)((unsigned char *)((char *)&g_0066f9f0 + (intptr_t)(g_0066fa20))),0),
               piVar6 != (int *)0x0)) {
              iVar4 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar6) + (0x30)))());
              if (iVar4 == *(int *)(((int)this) + 0x24) + 1) {
                ((cocos2d::CCArray *)(*(undefined4 *)(((int)this) + 0x28)))->addObject((cocos2d::CCObject*)piVar1)
                ;
              }
            }
          }
        }
      }
    }
  }
  ((BLEquipListPresenter *)(((int)this)))->updateTitle();
  return ghidra_CONCAT44(uStack_1c,iStack_20);
}

undefined8 BLEquipListPresenter::initRuneList()
{
  undefined4 p2 = 0;

  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  int iStack_20;
  undefined4 uStack_1c;
  
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  piVar1 = (int *)(**(code **)(*(int *)(piVar1) + (0x28)))();
  uVar2 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x68)))());
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  uVar3 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x60)))());
  iVar4 = (undefined4)(intptr_t)(((cocos2d::CCArray *)(uVar2))->objectAtIndex((unsigned int)uVar3));
  iStack_20 = (undefined4)(intptr_t)((int *)((int)this));
  uStack_1c = (undefined4)(p2);
  if (iVar4 != 0) {
    iStack_20 = (undefined4)(intptr_t)(*(int *)((unsigned char *)((char *)&g_0066fa62 + (intptr_t)(g_0066fb20))));
    iVar4 = (undefined4)(intptr_t)(func_0079e55c(iVar4,iStack_20,*(undefined4 *)((unsigned char *)((char *)&g_0066fa66 + (intptr_t)(g_0066fb24))),0));
    if (iVar4 != 0) {
      piVar1 = (int *)((DataManager *)this)->shareDataManager();
      piVar1 = (int *)(**(code **)(*(int *)(piVar1) + (0x28)))();
      (**(code **)(*(int *)(piVar1) + (0x50)))();
      uVar2 = (undefined4)(((BackPackData *)this)->sortItems());
      for (uVar7 = 0; uVar5 = (undefined4)(intptr_t)(((cocos2d::CCArray *)(uVar2))->count(), uVar7 < uVar5); uVar7 = uVar7 + 1)
      {
        iVar4 = (undefined4)(intptr_t)(((cocos2d::CCArray *)(uVar2))->objectAtIndex((unsigned int)uVar7));
        if ((iVar4 != 0) &&
           (piVar1 = (int *)func_0079e55c(iVar4,iStack_20,
                                            *(undefined4 *)((unsigned char *)((char *)&g_0066faaa + (intptr_t)(g_0066fb28))),0),
           piVar1 != (int *)0x0)) {
          uStack_1c = (undefined4)(((DataCacheManager *)this)->shareManager());
          uVar3 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x20)))(piVar1));
          piVar6 = ((void)((DataCacheManager *)(uStack_1c))->getItemDataByID(uVar3),(int *)0);
          iVar4 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar6) + (0x30)))());
          if (iVar4 == 4) {
            piVar6 = (int *)((DataCacheManager *)this)->shareManager();
            uStack_1c = (undefined4)((**(code **)(*(int *)(piVar6) + (0x68)))());
            uVar3 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x20)))(piVar1));
            iVar4 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)(uStack_1c))->objectForKey(uVar3));
            if ((iVar4 != 0) &&
               (piVar6 = (int *)func_0079e55c(iVar4,iStack_20,
                                                *(undefined4 *)((unsigned char *)((char *)&g_0066fafc + (intptr_t)(g_0066fb2c))),0),
               piVar6 != (int *)0x0)) {
              iVar4 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar6) + (0x30)))());
              if (iVar4 == *(int *)(((int)this) + 0x24) + 1) {
                ((cocos2d::CCArray *)(*(undefined4 *)(((int)this) + 0x28)))->addObject((cocos2d::CCObject*)piVar1)
                ;
              }
            }
          }
        }
      }
    }
  }
  ((BLEquipListPresenter *)(((int)this)))->updateTitle();
  return ghidra_CONCAT44(uStack_1c,iStack_20);
}

void BLEquipListPresenter::initUpgraceList()
{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  piVar1 = (int *)(**(code **)(*piVar1 + 0x28))();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x68))());
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  uVar3 = (undefined4)((**(code **)(*piVar1 + 0x60))());
  iVar4 = (undefined4)(intptr_t)(((cocos2d::CCArray *)uVar2)->objectAtIndex((unsigned int)uVar3));
  if (iVar4 != 0) {
    uVar2 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_0066fb6e + (intptr_t)(g_0066fbd4))));
    piVar1 = (int *)func_0079e55c(iVar4,uVar2,*(undefined4 *)((unsigned char *)((char *)&g_0066fb72 + (intptr_t)(g_0066fbd8))),0);
    if (piVar1 != (int *)0x0) {
      uVar3 = (undefined4)((**(code **)(*piVar1 + 0x28))());
      iVar4 = (undefined4)(intptr_t)(((cocos2d::CCArray *)uVar3)->objectAtIndex((unsigned int)*(undefined4 *)(((int)this) + 0x24)));
      if ((iVar4 != 0) &&
         (piVar1 = (int *)func_0079e55c(iVar4,uVar2,*(undefined4 *)((unsigned char *)((char *)&g_0066fb94 + (intptr_t)(g_0066fbdc)))
                                          ,0), piVar1 != (int *)0x0)) {
        iVar4 = 0;
        do {
          uVar3 = (undefined4)((**(code **)(*piVar1 + 0x18))(piVar1));
          iVar5 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)uVar3)->objectForKey(iVar4));
          if ((iVar5 != 0) &&
             (iVar5 = func_0079e55c(iVar5,uVar2,*(undefined4 *)((unsigned char *)((char *)&g_0066fbba + (intptr_t)(g_0066fbe0))),0),
             iVar5 != 0)) {
            ((cocos2d::CCArray *)this)->addObject((cocos2d::CCObject*)*(undefined4 *)(((int)this) + 0x28));
          }
          iVar4 = (undefined4)(intptr_t)(iVar4 + 1);
        } while (iVar4 != 6);
      }
    }
  }
  BLEquipListPresenter::updateTitle();
  return;
}

void BLEquipListPresenter::initSkillList()
{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int extraout_r1;
  uint uVar6;
  undefined1 auStack_3c [4];
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [4];
  undefined1 auStack_30 [4];
  undefined4 uStack_2c;
  undefined1 auStack_28 [4];
  int iStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  piVar1 = (int *)(**(code **)(*(int *)(piVar1) + (0x28)))();
  uVar2 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x68)))());
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  uVar3 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x60)))());
  iVar4 = (undefined4)(intptr_t)(((cocos2d::CCArray *)uVar2)->objectAtIndex((unsigned int)uVar3));
  if (iVar4 != 0) {
    uVar2 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_0066fc1e + (intptr_t)(g_0066fd70))));
    piVar1 = (int *)func_0079e55c(iVar4,uVar2,*(undefined4 *)((unsigned char *)((char *)&g_0066fc22 + (intptr_t)(g_0066fd74))),0);
    if (piVar1 != (int *)0x0) {
      iStack_20 = 0;
      uStack_1c = (undefined4)(0);
      iStack_24 = 0;
      func_0079e45c(auStack_3c,(unsigned char *)((char *)&g_0066fc42 + (intptr_t)(g_0066fd78)),auStack_28);
      ((std::vector<std::string, std::allocator<std::string>> *)&iStack_24)->push_back(*(std::string *)(void *)&auStack_3c);
      func_0079e2bc(auStack_3c);
      func_0079e45c(auStack_38,(unsigned char *)((char *)&g_0066fc62 + (intptr_t)(g_0066fd7c)),auStack_28);
      ((std::vector<std::string, std::allocator<std::string>> *)&iStack_24)->push_back(*(std::string *)(void *)&auStack_38);
      func_0079e2bc(auStack_38);
      func_0079e45c(auStack_34,(unsigned char *)((char *)&g_0066fc80 + (intptr_t)(g_0066fd80)),auStack_28);
      ((std::vector<std::string, std::allocator<std::string>> *)&iStack_24)->push_back(*(std::string *)(void *)&auStack_34);
      func_0079e2bc(auStack_34);
      func_0079e45c(auStack_30,(unsigned char *)((char *)&g_0066fc9c + (intptr_t)(g_0066fd84)),auStack_28);
      ((std::vector<std::string, std::allocator<std::string>> *)&iStack_24)->push_back(*(std::string *)(void *)&auStack_30);
      func_0079e2bc(auStack_30);
      for (uVar6 = 0; uVar6 < (uint)(iStack_20 - iStack_24 >> 2); uVar6 = uVar6 + 1) {
        uVar3 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x48)))(piVar1));
        iVar4 = (undefined4)(intptr_t)(iStack_24);
        if ((uint)(iStack_20 - iStack_24 >> 2) <= uVar6) {
          func_0079e784((unsigned char *)((char *)&g_0066fcda + (intptr_t)(g_0066fd88)),uVar6);
          iVar4 = (undefined4)(intptr_t)(extraout_r1);
        }
        func_0079e53c(&uStack_2c,iVar4 + uVar6 * 4);
        func_0079e854(&uStack_2c,(unsigned char *)((char *)&g_0066fcf0 + (intptr_t)(g_0066fd8c)));
        func_0079e45c(auStack_28,uStack_2c,auStack_30);
        iVar5 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)uVar3)->objectForKey((char const *)auStack_28));
        iVar4 = 0;
        if (iVar5 != 0) {
          iVar4 = (undefined4)(intptr_t)(func_0079e55c(iVar5,uVar2,*(undefined4 *)((unsigned char *)((char *)&g_0066fd1a + (intptr_t)(g_0066fd90))),0));
        }
        func_0079e2bc(auStack_28);
        func_0079e2bc(&uStack_2c);
        if (iVar4 != 0) {
          ((cocos2d::CCArray *)*(undefined4 *)(((int)this) + 0x28))->addObject((cocos2d::CCObject*)iVar4);
        }
      }
      ((std::vector<std::string, std::allocator<std::string>> *)&iStack_24)->~vector();
    }
  }
  BLEquipListPresenter::updateTitle();
  return;
}

void BLEquipListPresenter::initPageIndex(int p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLEquipListPresenter::onClose(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
