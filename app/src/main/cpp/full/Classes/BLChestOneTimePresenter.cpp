#include "BLChestOneTimePresenter.h"
#include "CCLabelTTF.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "CCObject.h"
#include "CCTouch.h"
#include "CCArray.h"
#include "CCDirector.h"
#include "BLChestOneTimeView.h"
#include "BLChestRewardItemPresenter.h"
#include "BLChestRewardItemView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BackPackData.h"
#include "CampaignData.h"
#include "ChestData.h"
#include "DataCacheManager.h"
#include "DataManager.h"
#include "EquipData.h"
#include "ItemData.h"
#include "UIManager.h"
#include "UserData.h"
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
extern "C" long long func_0079e43c(...);
extern "C" long long func_0079e44c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e46c(...);
extern "C" long long func_0079e47c(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long func_0079e734(...);
extern "C" long long func_0079e8a4(...);
extern "C" long long func_0079e8b4(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_00516480;
extern "C" unsigned long UNK_00516498;
extern "C" unsigned long UNK_005164b0;
extern "C" unsigned long UNK_00516524;
extern "C" unsigned long UNK_0051653e;
extern "C" unsigned long UNK_00516594;
extern "C" unsigned long UNK_005165bc;
extern "C" unsigned long UNK_00516606;
extern "C" unsigned long UNK_00516634;
extern "C" unsigned long UNK_005166da;
extern "C" unsigned long UNK_005166fa;
extern "C" unsigned long UNK_0051671e;
extern "C" unsigned long UNK_0051682c;
extern "C" unsigned long UNK_00516870;
extern "C" unsigned long UNK_005168e4;
extern "C" unsigned long UNK_0051692c;
extern "C" unsigned long UNK_00516940;
extern "C" unsigned long UNK_00516afe;
extern "C" unsigned long UNK_00516b00;
extern "C" unsigned long UNK_00516b98;
extern "C" unsigned long UNK_00516c08;
extern "C" unsigned long _UNK_00516484;
extern "C" unsigned long _UNK_0051649c;
extern "C" unsigned long _UNK_005164b4;
extern "C" unsigned long _UNK_00516580;
extern "C" unsigned long _UNK_00516584;
extern "C" unsigned long _UNK_00516598;
extern "C" unsigned long _UNK_005165c0;
extern "C" unsigned long _UNK_00516664;
extern "C" unsigned long _UNK_00516668;
extern "C" unsigned long _UNK_00516740;
extern "C" unsigned long _UNK_00516744;
extern "C" unsigned long _UNK_00516748;
extern "C" unsigned long _UNK_00516a9c;
extern "C" unsigned long _UNK_00516aa0;
extern "C" unsigned long _UNK_00516aa4;
extern "C" unsigned long _UNK_00516aa8;
extern "C" unsigned long _UNK_00516aac;
extern "C" unsigned long _UNK_00516b48;
extern "C" unsigned long _UNK_00516b4c;
extern "C" unsigned long _UNK_00516c1c;
extern "C" unsigned long _UNK_00516c20;
extern "C" unsigned long g_00516480;
extern "C" unsigned long g_00516484;
extern "C" unsigned long g_00516498;
extern "C" unsigned long g_0051649c;
extern "C" unsigned long g_005164b0;
extern "C" unsigned long g_005164b4;
extern "C" unsigned long g_00516524;
extern "C" unsigned long g_0051653e;
extern "C" unsigned long g_00516580;
extern "C" unsigned long g_00516584;
extern "C" unsigned long g_00516594;
extern "C" unsigned long g_00516598;
extern "C" unsigned long g_005165bc;
extern "C" unsigned long g_005165c0;
extern "C" unsigned long g_00516606;
extern "C" unsigned long g_00516634;
extern "C" unsigned long g_00516664;
extern "C" unsigned long g_00516668;
extern "C" unsigned long g_005166da;
extern "C" unsigned long g_005166fa;
extern "C" unsigned long g_0051671e;
extern "C" unsigned long g_00516740;
extern "C" unsigned long g_00516744;
extern "C" unsigned long g_00516748;
extern "C" unsigned long g_0051682c;
extern "C" unsigned long g_00516870;
extern "C" unsigned long g_005168e4;
extern "C" unsigned long g_0051692c;
extern "C" unsigned long g_00516940;
extern "C" unsigned long g_00516a9c;
extern "C" unsigned long g_00516aa0;
extern "C" unsigned long g_00516aa4;
extern "C" unsigned long g_00516aa8;
extern "C" unsigned long g_00516aac;
extern "C" unsigned long g_00516afe;
extern "C" unsigned long g_00516b00;
extern "C" unsigned long g_00516b48;
extern "C" unsigned long g_00516b4c;
extern "C" unsigned long g_00516b98;
extern "C" unsigned long g_00516c08;
extern "C" unsigned long g_00516c1c;
extern "C" unsigned long g_00516c20;
ChestData* BLChestOneTimePresenter::getChestData() const
{
  return (ChestData*)(*(undefined4 *)(((int)this) + 0x1c));
}

bool BLChestOneTimePresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLChestOneTimePresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLChestOneTimePresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLChestOneTimePresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLChestOneTimePresenter::tick(float p1)
{
  return;
}

BLChestOneTimePresenter::~BLChestOneTimePresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_00516524 + g_00516580);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x44;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0051653e + g_00516584,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  if (*(int *)((int)this + 4*(7)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(7)) = 0;
  }
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLChestOneTimePresenter::onClose(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(0x3d);
  return;
}

void BLChestOneTimePresenter::setChestData(ChestData* p1)
{
  if (*(int *)(((int)this) + 0x1c) != (int)(intptr_t)p1) {
    if ((int)(intptr_t)p1 != 0) {
      ((cocos2d::CCObject *)p1)->retain();
    }
    if (*(int *)(((int)this) + 0x1c) != 0) {
      ((cocos2d::CCObject *)this)->release();
    }
    *(int *)(((int)this) + 0x1c) = (undefined4)(intptr_t)p1;
  }
  return;
}

BLChestOneTimePresenter::BLChestOneTimePresenter()
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
  iVar3 = *(int *)(&g_00516606 + g_00516664);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x44;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 1);
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00516634 + g_00516668,&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  *(int *)((int)this + 4*(7)) = 0;
  return;
}

undefined4 BLChestOneTimePresenter::create(BLChestOneTimeView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x20))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLChestOneTimePresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  ((UIManager *)this)->shareManager();
  ((UIManager *)this)->popUnEnableScrollView();
  return;
}

void BLChestOneTimePresenter::onEnter()
{
  ((UIManager *)this)->shareManager();
  ((UIManager *)this)->pushCurScrollViewUnEnable();
  return;
}



undefined4 BLChestOneTimePresenter::randomReward()
{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = (undefined4)(((ChestData *)*(undefined4 *)(((int)this) + 0x1c))->getTotalProbabilityOne());
  uVar2 = (undefined4)(((long long)::arc4random()));
  uVar3 = (undefined4)(*(undefined4 *)(((int)this) + 0x1c));
  (void)(((long long)((unsigned)(uVar2) / (unsigned)(uVar1))));
  uVar1 = (undefined4)(((ChestData *)this)->getOneIDbyRandom(uVar3));
  uVar2 = (undefined4)(((EquipData *)this)->create());
  ((ItemData *)uVar2)->initWith(uVar1);
  return uVar2;
}

// ===== 修复: 补回被误删的函数占位 (5) =====
void BLChestOneTimePresenter::initWithView(BLChestOneTimeView* p1)
{
  int *piVar1;
  code *pcVar2;
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [4];
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  *(undefined4 *)(((int)this) + 0x18) = (undefined4)(intptr_t)p1;
  piVar1 = (int *)((BLChestOneTimeView *)p1)->getBtnBuyAgain();
  uStack_28 = (undefined4)(*(undefined4 *)(&g_005166da + g_00516740));
  uStack_24 = (undefined4)(0);
  (**(code **)(*piVar1 + 0x254))(piVar1,((int)this),uStack_28,0,0x20);
  piVar1 = (int *)((BLChestOneTimeView *)*(undefined4 *)(((int)this) + 0x18))->getBtnClose();
  uStack_20 = (undefined4)(*(undefined4 *)(&g_005166fa + g_00516744));
  uStack_1c = (undefined4)(0);
  (**(code **)(*piVar1 + 0x254))(piVar1,((int)this),uStack_20,0,0x20);
  piVar1 = (int *)((BLChestOneTimeView *)*(undefined4 *)(((int)this) + 0x18))->getBtnClose();
  pcVar2 = *(code **)(*piVar1 + 0x26c);
  func_0079e45c(auStack_2c,&g_0051671e + g_00516748,auStack_30);
  (*pcVar2)(piVar1,auStack_2c);
  func_0079e2bc(auStack_2c);
  return;
}

void BLChestOneTimePresenter::updateEquip(EquipData* p1)
{
  undefined4 p3 = 0;
  undefined4 p4 = 0;

  int *piVar1;
  undefined4 uVar2;
  
  (**(code **)(*(int *)(p1) + (0x9c)))(p1,1,p3,*(code **)(*(int *)p1 + 0x9c),p4);
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  piVar1 = (int *)(**(code **)(*(int *)(piVar1) + (0x28)))();
  uVar2 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x50)))());
  ((BackPackData *)uVar2)->addItemData((ItemData*)p1, 1);
  ((BLChestOneTimeView *)*(undefined4 *)(((int)this) + 0x18))->RewardItem();
  uVar2 = (undefined4)(((BLChestRewardItemView *)this)->getPresenter());
  ((BLChestRewardItemPresenter *)uVar2)->initWith((EquipData*)p1, 0);
  return;
}

void BLChestOneTimePresenter::initWith(ChestData* p1)
{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  code *pcVar7;
  undefined1 uStack_e8;
  undefined1 uStack_e7;
  undefined1 uStack_e6;
  undefined1 auStack_e4 [4];
  undefined1 auStack_e0 [4];
  undefined4 uStack_dc;
  undefined1 auStack_d8 [4];
  undefined4 auStack_d4 [2];
  undefined1 auStack_cc [4];
  undefined1 auStack_c8 [180];
  
  (**(code **)(*(int *)this + 0x30))();
  piVar1 = (int *)((BLChestOneTimeView *)(*(int *)((int)this + 4*(6))))->getLabTitle();
  pcVar7 = *(code **)(*piVar1 + 0x234);
  uVar2 = (undefined4)(((BLLanguage *)this)->share());
  (**(code **)(*(int *)(p1) + (0x20)))(auStack_d8,p1);
  (((BLLanguage *)this))->getString(*(std::string *)auStack_d4);
  (*pcVar7)(piVar1,auStack_d4[0]);
  func_0079e2bc(auStack_d4);
  func_0079e2bc(auStack_d8);
  uStack_e8 = 0xff;
  uStack_e7 = 0xb4;
  uStack_e6 = 0;
  func_0079e45c(auStack_e4,(unsigned char *)((char *)&g_0051682c + (intptr_t)(g_00516a9c)),auStack_d4);
  iVar3 = (undefined4)(intptr_t)((**(code **)(*(int *)*(int *)((int)this + 4*(7)) + 0x38))());
  if (iVar3 == 2) {
    uStack_e8 = 0x2d;
    uStack_e7 = 0xff;
    uStack_e6 = 200;
    func_0079e2dc(auStack_e4,(unsigned char *)((char *)&g_00516870 + (intptr_t)(g_00516aa0)));
  }
  piVar1 = (int *)((BLChestOneTimeView *)(*(int *)((int)this + 4*(6))))->getSprCopperIcon();
  pcVar7 = *(code **)(*piVar1 + 0x20c);
  func_0079e53c(auStack_e0,auStack_e4);
  piVar4 = (int *)0 /* ctorZero */;
  uVar2 = (undefined4)((**(code **)(*(int *)(piVar4) + (0x214)))());
  (*pcVar7)(piVar1,uVar2);
  func_0079e2bc(auStack_e0);
  piVar1 = (int *)((BLChestOneTimeView *)(*(int *)((int)this + 4*(6))))->getLabCopper();
  (**(code **)(*(int *)(piVar1) + (0x1b4)))(piVar1,&uStack_e8);
  piVar1 = (int *)((BLChestOneTimeView *)(*(int *)((int)this + 4*(6))))->getLabAgainTitle();
  (**(code **)(*(int *)(piVar1) + (0x1b4)))(piVar1,&uStack_e8);
  piVar1 = (int *)((BLChestOneTimeView *)(*(int *)((int)this + 4*(6))))->getLabCopper();
  pcVar7 = *(code **)(*piVar1 + 0x234);
  uVar2 = (undefined4)((**(code **)(*(int *)*(int *)((int)this + 4*(7)) + 0x40))());
  func_0079e43c(auStack_d4,0x18);
  func_0079e44c(auStack_cc,uVar2);
  func_0079e45c(auStack_d8,(unsigned char *)((char *)&g_005168e4 + (intptr_t)(g_00516aa4)),&uStack_dc);
  func_0079e46c(&uStack_dc,auStack_c8);
  func_0079e2bc(auStack_d8);
  func_0079e47c(auStack_d4);
  (*pcVar7)(piVar1,uStack_dc);
  func_0079e2bc(&uStack_dc);
  uVar2 = (undefined4)(((BLChestOneTimeView *)(*(int *)((int)this + 4*(6))))->getLabCopper());
  ((cocos2d::CCLabelTTF *)(uVar2))->enableStroke(*(cocos2d::_ccColor3B const*)(unsigned char *)((char *)&g_0051692c + (intptr_t)(g_00516aa8)), 0x3f800000, 1);
  uVar2 = (undefined4)(((BLChestOneTimeView *)(*(int *)((int)this + 4*(6))))->getLabAgainTitle());
  ((cocos2d::CCLabelTTF *)(uVar2))->enableStroke(*(cocos2d::_ccColor3B const*)(unsigned char *)((char *)&g_00516940 + (intptr_t)(g_00516aac)), 0x3f800000, 1);
  piVar1 = (int *)((BLChestOneTimeView *)(*(int *)((int)this + 4*(6))))->getSprCopperIcon();
  puVar5 = (undefined4 *)(**(code **)(*(int *)(piVar1) + (0x8c)))();
  uVar2 = (undefined4)(*puVar5);
  piVar1 = (int *)((BLChestOneTimeView *)(*(int *)((int)this + 4*(6))))->getLabCopper();
  puVar5 = (undefined4 *)(**(code **)(*(int *)(piVar1) + (0x8c)))();
  uVar2 = (undefined4)(func_0079e59c(uVar2,*puVar5));
  uVar2 = (undefined4)(func_0079e59c(uVar2,0x40000000));
  piVar1 = (int *)((BLChestOneTimeView *)(*(int *)((int)this + 4*(6))))->getSprCopperIcon();
  pcVar7 = *(code **)(*piVar1 + 0x7c);
  0 /* ctorZero */;
  (*pcVar7)(piVar1,auStack_d4);
  piVar1 = (int *)((BLChestOneTimeView *)(*(int *)((int)this + 4*(6))))->getLabCopper();
  pcVar7 = *(code **)(*piVar1 + 0x7c);
  0 /* ctorZero */;
  (*pcVar7)(piVar1,auStack_d4);
  piVar1 = (int *)((BLChestOneTimeView *)(*(int *)((int)this + 4*(6))))->getSprCopperIcon();
  pcVar7 = *(code **)(*piVar1 + 0x4c);
  piVar4 = (int *)((BLChestOneTimeView *)(*(int *)((int)this + 4*(6))))->getBtnBuyAgain();
  uVar6 = (undefined4)((**(code **)(*(int *)(piVar4) + (0x60)))());
  uVar2 = (undefined4)(func_0079e4fc(uVar2,0x3f000000));
  uVar2 = (undefined4)(func_0079e57c(uVar6,uVar2));
  piVar4 = (int *)((BLChestOneTimeView *)(*(int *)((int)this + 4*(6))))->getSprCopperIcon();
  uVar6 = (undefined4)((**(code **)(*(int *)(piVar4) + (0x68)))());
  0 /* ctorZero */;
  (*pcVar7)(piVar1,auStack_d4);
  piVar1 = (int *)((BLChestOneTimeView *)(*(int *)((int)this + 4*(6))))->getLabCopper();
  pcVar7 = *(code **)(*piVar1 + 0x4c);
  piVar4 = (int *)((BLChestOneTimeView *)(*(int *)((int)this + 4*(6))))->getSprCopperIcon();
  uVar2 = (undefined4)((**(code **)(*(int *)(piVar4) + (0x60)))());
  piVar4 = (int *)((BLChestOneTimeView *)(*(int *)((int)this + 4*(6))))->getSprCopperIcon();
  puVar5 = (undefined4 *)(**(code **)(*(int *)(piVar4) + (0x8c)))();
  uVar2 = (undefined4)(func_0079e59c(uVar2,*puVar5));
  piVar4 = (int *)((BLChestOneTimeView *)(*(int *)((int)this + 4*(6))))->getLabCopper();
  uVar6 = (undefined4)((**(code **)(*(int *)(piVar4) + (0x68)))());
  0 /* ctorZero */;
  (*pcVar7)(piVar1,auStack_d4);
  iVar3 = (undefined4)(intptr_t)(((BLChestOneTimePresenter *)(((int)this)))->randomReward());
  if (iVar3 != 0) {
    BLChestOneTimePresenter::updateEquip((EquipData*)((int)this));
  }
  func_0079e2bc(auStack_e4);
  return;
}

void BLChestOneTimePresenter::getEquipByStarAndQuity(int p1, int p2)
{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = p2;
  uVar1 = (undefined4)(cocos2d::CCArray::create());
  piVar2 = (int *)((DataCacheManager *)this)->shareManager();
  iVar3 = (**(code **)(*piVar2 + 0x68))();
  if (iVar3 != 0) {
    iVar3 = *(int *)(iVar3 + 0x14);
    iVar6 = iVar3;
    if (iVar3 != 0) {
      iVar6 = *(int *)(iVar3 + 0x110);
    }
    while (iVar3 != 0) {
      if (((*(int *)(iVar3 + 0x104) != 0) &&
          (piVar2 = (int *)func_0079e55c(*(int *)(iVar3 + 0x104),
                                           *(undefined4 *)(&g_00516afe + g_00516b48),
                                           *(undefined4 *)(&g_00516b00 + g_00516b4c),0,p1,
                                           p2,iVar7), piVar2 != (int *)0x0)) &&
         (iVar3 = (**(code **)(*piVar2 + 0x30))(), iVar3 == p1)) {
        piVar4 = (int *)((EquipData *)this)->create();
        uVar5 = (undefined4)((**(code **)(*piVar2 + 0x20))(piVar2));
        ((EquipData *)piVar4)->initWithID(uVar5);
        iVar3 = (**(code **)(*piVar4 + 0x50))(piVar4);
        if (iVar3 == p2) {
          ((cocos2d::CCArray *)uVar1)->addObject((cocos2d::CCObject*)piVar4);
        }
      }
      iVar3 = iVar6;
      if (iVar6 != 0) {
        iVar6 = *(int *)(iVar6 + 0x110);
      }
    }
  }
  return;
}

void BLChestOneTimePresenter::onBuyAgain(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
