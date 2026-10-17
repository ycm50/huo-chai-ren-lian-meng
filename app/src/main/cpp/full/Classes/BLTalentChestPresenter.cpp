#include "BLTalentChestPresenter.h"
#include "CCObject.h"
#include "CCTouch.h"
#include "CCArray.h"
#include "CCDirector.h"
#include "BLChestRewardItemPresenter.h"
#include "BLChestRewardItemView.h"
#include "BLLeakUtils.h"
#include "BLTalentChestView.h"
#include "BackPackData.h"
#include "DataCacheManager.h"
#include "DataManager.h"
#include "EquipData.h"
#include "ItemData.h"
#include "TalentDrawData.h"
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
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long func_0079e734(...);
extern "C" long long func_0079e744(...);
extern "C" long long func_0079e8a4(...);
extern "C" long long func_0079e8b4(...);
extern "C" long long func_0079e8c4(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0069e114;
extern "C" unsigned long UNK_0069e12c;
extern "C" unsigned long UNK_0069e144;
extern "C" unsigned long UNK_0069e1b8;
extern "C" unsigned long UNK_0069e1d2;
extern "C" unsigned long UNK_0069e218;
extern "C" unsigned long UNK_0069e240;
extern "C" unsigned long UNK_0069e266;
extern "C" unsigned long UNK_0069e294;
extern "C" unsigned long UNK_0069e336;
extern "C" unsigned long UNK_0069e356;
extern "C" unsigned long UNK_0069e37a;
extern "C" unsigned long UNK_0069e3ee;
extern "C" unsigned long UNK_0069e446;
extern "C" unsigned long UNK_0069e448;
extern "C" unsigned long UNK_0069e65e;
extern "C" unsigned long UNK_0069e7c4;
extern "C" unsigned long _UNK_0069e118;
extern "C" unsigned long _UNK_0069e130;
extern "C" unsigned long _UNK_0069e148;
extern "C" unsigned long _UNK_0069e204;
extern "C" unsigned long _UNK_0069e208;
extern "C" unsigned long _UNK_0069e21c;
extern "C" unsigned long _UNK_0069e244;
extern "C" unsigned long _UNK_0069e2c0;
extern "C" unsigned long _UNK_0069e2c4;
extern "C" unsigned long _UNK_0069e39c;
extern "C" unsigned long _UNK_0069e3a0;
extern "C" unsigned long _UNK_0069e3a4;
extern "C" unsigned long _UNK_0069e3f4;
extern "C" unsigned long _UNK_0069e490;
extern "C" unsigned long _UNK_0069e494;
extern "C" unsigned long _UNK_0069e82c;
extern "C" unsigned long _UNK_0069e830;
extern "C" unsigned long extraout_r1;
extern "C" unsigned long g_0069e114;
extern "C" unsigned long g_0069e118;
extern "C" unsigned long g_0069e12c;
extern "C" unsigned long g_0069e130;
extern "C" unsigned long g_0069e144;
extern "C" unsigned long g_0069e148;
extern "C" unsigned long g_0069e1b8;
extern "C" unsigned long g_0069e1d2;
extern "C" unsigned long g_0069e204;
extern "C" unsigned long g_0069e208;
extern "C" unsigned long g_0069e218;
extern "C" unsigned long g_0069e21c;
extern "C" unsigned long g_0069e240;
extern "C" unsigned long g_0069e244;
extern "C" unsigned long g_0069e266;
extern "C" unsigned long g_0069e294;
extern "C" unsigned long g_0069e2c0;
extern "C" unsigned long g_0069e2c4;
extern "C" unsigned long g_0069e336;
extern "C" unsigned long g_0069e356;
extern "C" unsigned long g_0069e37a;
extern "C" unsigned long g_0069e39c;
extern "C" unsigned long g_0069e3a0;
extern "C" unsigned long g_0069e3a4;
extern "C" unsigned long g_0069e3ee;
extern "C" unsigned long g_0069e3f4;
extern "C" unsigned long g_0069e446;
extern "C" unsigned long g_0069e448;
extern "C" unsigned long g_0069e490;
extern "C" unsigned long g_0069e494;
extern "C" unsigned long g_0069e65e;
extern "C" unsigned long g_0069e7c4;
extern "C" unsigned long g_0069e82c;
extern "C" unsigned long g_0069e830;
bool BLTalentChestPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLTalentChestPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLTalentChestPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLTalentChestPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLTalentChestPresenter::tick(float p1)
{
  return;
}

BLTalentChestPresenter::~BLTalentChestPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0069e1b8 + g_0069e204);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x3c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0069e1d2 + g_0069e208,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLTalentChestPresenter::onClose(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(0x3f);
  return;
}

BLTalentChestPresenter::BLTalentChestPresenter()
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
  iVar3 = *(int *)(&g_0069e266 + g_0069e2c0);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x3c;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 1);
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0069e294 + g_0069e2c4,&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

undefined4 BLTalentChestPresenter::create(BLTalentChestView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x20))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLTalentChestPresenter::onExit()
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

void BLTalentChestPresenter::onEnter()
{
  ((UIManager *)this)->shareManager();
  ((UIManager *)this)->pushCurScrollViewUnEnable();
  return;
}

// ===== 修复: 补回被误删的函数占位 (6) =====
void BLTalentChestPresenter::initWithView(BLTalentChestView* p1)
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
  piVar1 = (int *)((BLTalentChestView *)p1)->getBtnBuyAgain();
  uStack_28 = (undefined4)(*(undefined4 *)(&g_0069e336 + g_0069e39c));
  uStack_24 = (undefined4)(0);
  (**(code **)(*piVar1 + 0x254))(piVar1,((int)this),uStack_28,0,0x20);
  piVar1 = (int *)((BLTalentChestView *)*(undefined4 *)(((int)this) + 0x18))->getBtnClose();
  uStack_20 = (undefined4)(*(undefined4 *)(&g_0069e356 + g_0069e3a0));
  uStack_1c = (undefined4)(0);
  (**(code **)(*piVar1 + 0x254))(piVar1,((int)this),uStack_20,0,0x20);
  piVar1 = (int *)((BLTalentChestView *)*(undefined4 *)(((int)this) + 0x18))->getBtnClose();
  pcVar2 = *(code **)(*piVar1 + 0x26c);
  func_0079e45c(auStack_2c,&g_0069e37a + g_0069e3a4,auStack_30);
  (*pcVar2)(piVar1,auStack_2c);
  func_0079e2bc(auStack_2c);
  return;
}

void BLTalentChestPresenter::updateEquip(EquipData* p1)
{
  undefined4 p3 = 0;
  undefined4 p4 = 0;

  int *piVar1;
  undefined4 uVar2;
  
  (**(code **)(*(int *)(p1) + (0x9c)))
            (p1,*(undefined4 *)(((int)this) + 0x1c),p3,*(code **)(*(int *)p1 + 0x9c),p4);
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  piVar1 = (int *)(**(code **)(*(int *)(piVar1) + (0x28)))();
  uVar2 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x50)))());
  ((BackPackData *)uVar2)->addItemData((ItemData*)p1, 1);
  ((BLTalentChestView *)*(undefined4 *)(((int)this) + 0x18))->RewardItem();
  uVar2 = (undefined4)(((BLChestRewardItemView *)this)->getPresenter());
  ((BLChestRewardItemPresenter *)uVar2)->initWith((EquipData*)p1, 0);
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar2)->postNotification((char const*)(unsigned char *)((char *)&g_0069e3ee + (intptr_t)(g_0069e3f4)));
  return;
}

void BLTalentChestPresenter::getEquipByStarAndQuity(int p1, int p2)
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
                                           *(undefined4 *)(&g_0069e446 + g_0069e490),
                                           *(undefined4 *)(&g_0069e448 + g_0069e494),0,p1,
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

undefined4 BLTalentChestPresenter::randomReward()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void BLTalentChestPresenter::onBuyAgain(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLTalentChestPresenter::initWith()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
