#include "BLEquipListItemPresenter.h"
#include "CCArray.h"
#include "CCLabelTTF.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "BackPackItemData.h"
#include "CCObject.h"
#include "CCTouch.h"
#include "CCDirector.h"
#include "BLDebug.h"
#include "BLEquipListItemView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLPageControl.h"
#include "BackPackData.h"
#include "DataCacheManager.h"
#include "DataManager.h"
#include "EquipBaseData.h"
#include "Toast.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <new>   // ghost_fix.js 自动补齐
using namespace CocosDenshion;

using namespace cocos2d;
// 兜底声明
extern "C" long long func_00442068(...);
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4bc(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long func_0079e5dc(...);
extern "C" long long func_0079e63c(...);
extern "C" long long func_0079e69c(...);
extern "C" long long func_0079e724(...);
extern "C" long long func_0079e734(...);
extern "C" long long func_0079e784(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0066e5b4;
extern "C" unsigned long UNK_0066e5ce;
extern "C" unsigned long UNK_0066e614;
extern "C" unsigned long UNK_0066e63c;
extern "C" unsigned long UNK_0066e652;
extern "C" unsigned long UNK_0066e680;
extern "C" unsigned long UNK_0066e718;
extern "C" unsigned long UNK_0066e770;
extern "C" unsigned long UNK_0066e81c;
extern "C" unsigned long UNK_0066e8ae;
extern "C" unsigned long UNK_0066e8b2;
extern "C" unsigned long UNK_0066e8f4;
extern "C" unsigned long UNK_0066e922;
extern "C" unsigned long UNK_0066e94a;
extern "C" unsigned long UNK_0066e9bc;
extern "C" unsigned long UNK_0066ea20;
extern "C" unsigned long UNK_0066ea56;
extern "C" unsigned long UNK_0066ea58;
extern "C" unsigned long UNK_0066eaa0;
extern "C" unsigned long UNK_0066eafc;
extern "C" unsigned long UNK_0066ec06;
extern "C" unsigned long UNK_0066ec4c;
extern "C" unsigned long UNK_0066ecf0;
extern "C" unsigned long UNK_0066edec;
extern "C" unsigned long UNK_0066ee70;
extern "C" unsigned long UNK_0066eeac;
extern "C" unsigned long UNK_0066eeec;
extern "C" unsigned long UNK_0066ef9a;
extern "C" unsigned long UNK_0066efcc;
extern "C" unsigned long UNK_0066effc;
extern "C" unsigned long _UNK_0066e600;
extern "C" unsigned long _UNK_0066e604;
extern "C" unsigned long _UNK_0066e618;
extern "C" unsigned long _UNK_0066e640;
extern "C" unsigned long _UNK_0066e6b0;
extern "C" unsigned long _UNK_0066e6b4;
extern "C" unsigned long _UNK_0066e840;
extern "C" unsigned long _UNK_0066e844;
extern "C" unsigned long _UNK_0066e848;
extern "C" unsigned long _UNK_0066e84c;
extern "C" unsigned long _UNK_0066e9f8;
extern "C" unsigned long _UNK_0066e9fc;
extern "C" unsigned long _UNK_0066ea00;
extern "C" unsigned long _UNK_0066ea04;
extern "C" unsigned long _UNK_0066ea08;
extern "C" unsigned long _UNK_0066ea0c;
extern "C" unsigned long _UNK_0066ea7c;
extern "C" unsigned long _UNK_0066ea80;
extern "C" unsigned long _UNK_0066ea84;
extern "C" unsigned long _UNK_0066eac8;
extern "C" unsigned long _UNK_0066edf0;
extern "C" unsigned long _UNK_0066edf4;
extern "C" unsigned long _UNK_0066edf8;
extern "C" unsigned long _UNK_0066edfc;
extern "C" unsigned long _UNK_0066ee00;
extern "C" unsigned long _UNK_0066ee04;
extern "C" unsigned long _UNK_0066ee08;
extern "C" unsigned long _UNK_0066ee0c;
extern "C" unsigned long _UNK_0066ee10;
extern "C" unsigned long _UNK_0066f0c0;
extern "C" unsigned long _UNK_0066f0c4;
extern "C" unsigned long _UNK_0066f0c8;
extern "C" unsigned long _UNK_0066f0cc;
extern "C" unsigned long _UNK_0066f0d0;
extern "C" unsigned long _UNK_0066f0d4;
extern "C" unsigned long _UNK_0066f0d8;
extern "C" unsigned long _UNK_0066f0dc;
extern "C" unsigned long _UNK_0066f0e0;
extern "C" unsigned long _UNK_0066f0e4;
extern "C" unsigned long _UNK_0066f0e8;
extern "C" unsigned long extraout_r2;
extern "C" unsigned long unaff_d15;
extern "C" unsigned long g_0066e5b4;
extern "C" unsigned long g_0066e5ce;
extern "C" unsigned long g_0066e600;
extern "C" unsigned long g_0066e604;
extern "C" unsigned long g_0066e614;
extern "C" unsigned long g_0066e618;
extern "C" unsigned long g_0066e63c;
extern "C" unsigned long g_0066e640;
extern "C" unsigned long g_0066e652;
extern "C" unsigned long g_0066e680;
extern "C" unsigned long g_0066e6b0;
extern "C" unsigned long g_0066e6b4;
extern "C" unsigned long g_0066e718;
extern "C" unsigned long g_0066e770;
extern "C" unsigned long g_0066e81c;
extern "C" unsigned long g_0066e840;
extern "C" unsigned long g_0066e844;
extern "C" unsigned long g_0066e848;
extern "C" unsigned long g_0066e84c;
extern "C" unsigned long g_0066e8ae;
extern "C" unsigned long g_0066e8b2;
extern "C" unsigned long g_0066e8f4;
extern "C" unsigned long g_0066e922;
extern "C" unsigned long g_0066e94a;
extern "C" unsigned long g_0066e9bc;
extern "C" unsigned long g_0066e9f8;
extern "C" unsigned long g_0066e9fc;
extern "C" unsigned long g_0066ea00;
extern "C" unsigned long g_0066ea04;
extern "C" unsigned long g_0066ea08;
extern "C" unsigned long g_0066ea0c;
extern "C" unsigned long g_0066ea20;
extern "C" unsigned long g_0066ea56;
extern "C" unsigned long g_0066ea58;
extern "C" unsigned long g_0066ea7c;
extern "C" unsigned long g_0066ea80;
extern "C" unsigned long g_0066ea84;
extern "C" unsigned long g_0066eaa0;
extern "C" unsigned long g_0066eac8;
extern "C" unsigned long g_0066eafc;
extern "C" unsigned long g_0066ec06;
extern "C" unsigned long g_0066ec4c;
extern "C" unsigned long g_0066ecf0;
extern "C" unsigned long g_0066edec;
extern "C" unsigned long g_0066edf0;
extern "C" unsigned long g_0066edf4;
extern "C" unsigned long g_0066edf8;
extern "C" unsigned long g_0066edfc;
extern "C" unsigned long g_0066ee00;
extern "C" unsigned long g_0066ee04;
extern "C" unsigned long g_0066ee08;
extern "C" unsigned long g_0066ee0c;
extern "C" unsigned long g_0066ee10;
extern "C" unsigned long g_0066ee70;
extern "C" unsigned long g_0066eeac;
extern "C" unsigned long g_0066eeec;
extern "C" unsigned long g_0066ef9a;
extern "C" unsigned long g_0066efcc;
extern "C" unsigned long g_0066effc;
extern "C" unsigned long g_0066f0c0;
extern "C" unsigned long g_0066f0c4;
extern "C" unsigned long g_0066f0c8;
extern "C" unsigned long g_0066f0cc;
extern "C" unsigned long g_0066f0d0;
extern "C" unsigned long g_0066f0d4;
extern "C" unsigned long g_0066f0d8;
extern "C" unsigned long g_0066f0dc;
extern "C" unsigned long g_0066f0e0;
extern "C" unsigned long g_0066f0e4;
extern "C" unsigned long g_0066f0e8;
bool BLEquipListItemPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLEquipListItemPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLEquipListItemPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLEquipListItemPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLEquipListItemPresenter::tick(float p1)
{
  return;
}

BLEquipListItemPresenter::~BLEquipListItemPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0066e5b4 + g_0066e600);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x3c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0066e5ce + g_0066e604,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLEquipListItemPresenter::BLEquipListItemPresenter()
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
  iVar3 = *(int *)(&g_0066e652 + g_0066e6b0);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x3c;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 0);
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0066e680 + g_0066e6b4,&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  *(int *)((int)this + 4*(7)) = 0;
  return;
}

undefined4 BLEquipListItemPresenter::create(BLEquipListItemView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x20))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLEquipListItemPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  return;
}

void BLEquipListItemPresenter::onEnter()
{
  return;
}

// ===== 修复: 补回被误删的函数占位 (6) =====
void BLEquipListItemPresenter::initWithView(BLEquipListItemView* p1)
{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [8];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  *(undefined4 *)(((int)this) + 0x18) = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  piVar1 = (int *)((BLEquipListItemView *)(p1))->getBtnEquip();
  uStack_1c = (undefined4)(0);
  uStack_20 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_0066e718 + (intptr_t)(g_0066e840))));
  (**(code **)(*(int *)(piVar1) + (0x254)))(piVar1,((int)this),uStack_20,0,0x20);
  piVar1 = (int *)((BLEquipListItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getssp_UpgraceTitleBG()
  ;
  pcVar5 = *(code **)(*piVar1 + 0x7c);
  0 /* ctorZero */;
  (*pcVar5)(piVar1,auStack_28);
  piVar1 = (int *)((BLEquipListItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getssp_UpgraceTitleBG()
  ;
  pcVar5 = *(code **)(*piVar1 + 0x5c);
  piVar2 = (int *)((BLEquipListItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getLabUpgrace();
  uVar3 = (undefined4)((**(code **)(*(int *)(piVar2) + (0x60)))());
  (*pcVar5)(piVar1,uVar3);
  uVar3 = (undefined4)(((BLEquipListItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getLabEquiped());
  puVar4 = (unsigned char *)((char *)&g_0066e770 + (intptr_t)(g_0066e844));
  ((cocos2d::CCLabelTTF *)(uVar3))->enableStroke(*(const ccColor3B *)(void *)puVar4, 0x3f800000, 1);
  piVar1 = (int *)((BLEquipListItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getPageControlStars();
  (**(code **)(*(int *)(piVar1) + (0x21c)))(piVar1,1);
  piVar1 = (int *)((BLEquipListItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getPageControlStars();
  (**(code **)(*(int *)(piVar1) + (0x20c)))(piVar1,1);
  ((BLEquipListItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getPageControlStars();
  ((BLPageControl *)this)->reload();
  piVar1 = (int *)((BLEquipListItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getLabStar();
  pcVar5 = *(code **)(*piVar1 + 0x5c);
  piVar2 = (int *)((BLEquipListItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getPageControlStars();
  uVar3 = (undefined4)((**(code **)(*(int *)(piVar2) + (0x60)))());
  uVar3 = (undefined4)(func_0079e59c(uVar3,g_0066e848));
  (*pcVar5)(piVar1,uVar3);
  piVar1 = (int *)((BLEquipListItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getLabStar();
  pcVar5 = *(code **)(*piVar1 + 100);
  piVar2 = (int *)((BLEquipListItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getLabStar();
  uVar3 = (undefined4)((**(code **)(*(int *)(piVar2) + (0x68)))());
  uVar3 = (undefined4)(func_0079e59c(uVar3,0x3f800000));
  (*pcVar5)(piVar1,uVar3);
  uVar3 = (undefined4)(((BLEquipListItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getLabStar());
  ((cocos2d::CCLabelTTF *)(uVar3))->enableStroke(*(const ccColor3B *)(void *)puVar4, 0x3f800000, 1);
  piVar1 = (int *)((BLEquipListItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getBtnEquip();
  pcVar5 = *(code **)(*piVar1 + 0x26c);
  func_0079e45c(auStack_28,(unsigned char *)((char *)&g_0066e81c + (intptr_t)(g_0066e84c)),auStack_2c);
  (*pcVar5)(piVar1,auStack_28);
  func_0079e2bc(auStack_28);
  return;
}

void BLEquipListItemPresenter::equip()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLEquipListItemPresenter::unEquip()
{
  undefined4 uVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar1 = (undefined4)(((CocosDenshion::SimpleAudioEngine *)this)->sharedEngine());
  ((CocosDenshion::SimpleAudioEngine *)(uVar1))->playEffect((char const*)(unsigned char *)((char *)&g_0066ea20 + (intptr_t)(g_0066ea7c)), 0);
  ((DataManager *)this)->shareDataManager();
  piVar2 = ((void)((DataManager *)this)->getCurrentPlayer(),(int *)0);
  if (piVar2 != (int *)0x0) {
    uVar1 = (undefined4)((**(code **)(*(int *)(piVar2) + (0x28)))());
    piVar2 = (int *)((DataManager *)this)->shareDataManager();
    uVar3 = (undefined4)((**(code **)(*(int *)(piVar2) + (0x70)))());
    iVar4 = (undefined4)(intptr_t)(((cocos2d::CCArray *)(uVar1))->objectAtIndex((unsigned int)uVar3));
    if ((iVar4 != 0) &&
       (iVar4 = func_0079e55c(iVar4,*(undefined4 *)((unsigned char *)((char *)&g_0066ea56 + (intptr_t)(g_0066ea80))),
                                *(undefined4 *)((unsigned char *)((char *)&g_0066ea58 + (intptr_t)(g_0066ea84))),0), iVar4 != 0)) {
      piVar2 = (int *)((DataManager *)this)->shareDataManager();
      piVar2 = (int *)(**(code **)(*(int *)(piVar2) + (0x28)))();
      uVar1 = (undefined4)((**(code **)(*(int *)(piVar2) + (0x50)))());
      ((BackPackData *)(uVar1))->unEquip((BackPackItemData*)*(undefined4 *)(((int)this) + 0x1c));
    }
  }
  return;
}

void BLEquipListItemPresenter::onEquip(cocos2d::CCObject* p1, unsigned int p2)
{
  int iVar1;
  undefined4 uStack_14;
  
  uStack_14 = (undefined4)(p1);
  (**(code **)(**(int **)(((int)this) + 0x1c) + 0x38))(&uStack_14);
  iVar1 = func_0079e4bc(&uStack_14,&g_0066eaa0 + g_0066eac8);
  func_0079e2bc(&uStack_14);
  if (iVar1 == 0) {
    BLEquipListItemPresenter::equip();
  }
  else {
    BLEquipListItemPresenter::unEquip();
  }
  return;
}

void BLEquipListItemPresenter::onEquipChange(cocos2d::CCObject* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLEquipListItemPresenter::initWithData(BackPackItemData* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
