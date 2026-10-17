#include "BLEquipUpgraceItemPresenter.h"
#include "CCLabelTTF.h"
#include "CCNotificationCenter.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "BackPackItemData.h"
#include "CCObject.h"
#include "CCTouch.h"
#include "CCDirector.h"
#include "BLEquipUpgraceItemView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLPageControl.h"
#include "BLUpgraceButtonPresenter.h"
#include "BLUpgraceButtonView.h"
#include "BLUpgraceMAXButtonPresenter.h"
#include "BLUpgraceMAXButtonView.h"
#include "BLUpgraceTitlePresenter.h"
#include "BLUpgraceTitleView.h"
#include "DataCacheManager.h"
#include "EquipBaseData.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <new>   // ghost_fix.js 自动补齐
using namespace cocos2d;
// 兜底声明
extern "C" long long func_00442068(...);
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e43c(...);
extern "C" long long func_0079e44c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e46c(...);
extern "C" long long func_0079e47c(...);
extern "C" long long func_0079e4bc(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_00671798;
extern "C" unsigned long UNK_006717b2;
extern "C" unsigned long UNK_006717f8;
extern "C" unsigned long UNK_00671820;
extern "C" unsigned long UNK_00671836;
extern "C" unsigned long UNK_00671864;
extern "C" unsigned long UNK_006718e2;
extern "C" unsigned long UNK_00671900;
extern "C" unsigned long UNK_00671902;
extern "C" unsigned long UNK_00671940;
extern "C" unsigned long UNK_00671a82;
extern "C" unsigned long UNK_00671be2;
extern "C" unsigned long UNK_00671c06;
extern "C" unsigned long UNK_00671c64;
extern "C" unsigned long UNK_00671c88;
extern "C" unsigned long UNK_00671e62;
extern "C" unsigned long _UNK_006717e4;
extern "C" unsigned long _UNK_006717e8;
extern "C" unsigned long _UNK_006717fc;
extern "C" unsigned long _UNK_00671824;
extern "C" unsigned long _UNK_00671894;
extern "C" unsigned long _UNK_00671898;
extern "C" unsigned long _UNK_006718e8;
extern "C" unsigned long _UNK_0067190c;
extern "C" unsigned long _UNK_00671910;
extern "C" unsigned long _UNK_00671a14;
extern "C" unsigned long _UNK_00671a18;
extern "C" unsigned long _UNK_00671ca0;
extern "C" unsigned long _UNK_00671ca4;
extern "C" unsigned long _UNK_00671ca8;
extern "C" unsigned long _UNK_00671cac;
extern "C" unsigned long _UNK_00671cb0;
extern "C" unsigned long _UNK_00671cb4;
extern "C" unsigned long _UNK_00671cb8;
extern "C" unsigned long _UNK_00671cbc;
extern "C" unsigned long _UNK_00671ec4;
extern "C" unsigned long _UNK_00671ec8;
extern "C" unsigned long g_00671798;
extern "C" unsigned long g_006717b2;
extern "C" unsigned long g_006717e4;
extern "C" unsigned long g_006717e8;
extern "C" unsigned long g_006717f8;
extern "C" unsigned long g_006717fc;
extern "C" unsigned long g_00671820;
extern "C" unsigned long g_00671824;
extern "C" unsigned long g_00671836;
extern "C" unsigned long g_00671864;
extern "C" unsigned long g_00671894;
extern "C" unsigned long g_00671898;
extern "C" unsigned long g_006718e2;
extern "C" unsigned long g_006718e8;
extern "C" unsigned long g_00671900;
extern "C" unsigned long g_00671902;
extern "C" unsigned long g_0067190c;
extern "C" unsigned long g_00671910;
extern "C" unsigned long g_00671940;
extern "C" unsigned long g_00671a14;
extern "C" unsigned long g_00671a18;
extern "C" unsigned long g_00671a82;
extern "C" unsigned long g_00671be2;
extern "C" unsigned long g_00671c06;
extern "C" unsigned long g_00671c64;
extern "C" unsigned long g_00671c88;
extern "C" unsigned long g_00671ca0;
extern "C" unsigned long g_00671ca4;
extern "C" unsigned long g_00671ca8;
extern "C" unsigned long g_00671cac;
extern "C" unsigned long g_00671cb0;
extern "C" unsigned long g_00671cb4;
extern "C" unsigned long g_00671cb8;
extern "C" unsigned long g_00671cbc;
extern "C" unsigned long g_00671e62;
extern "C" unsigned long g_00671ec4;
extern "C" unsigned long g_00671ec8;
bool BLEquipUpgraceItemPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLEquipUpgraceItemPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLEquipUpgraceItemPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLEquipUpgraceItemPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLEquipUpgraceItemPresenter::tick(float p1)
{
  return;
}

BLEquipUpgraceItemPresenter::~BLEquipUpgraceItemPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_00671798 + g_006717e4);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x3c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_006717b2 + g_006717e8,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLEquipUpgraceItemPresenter::BLEquipUpgraceItemPresenter()
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
  iVar3 = *(int *)(&g_00671836 + g_00671894);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x3c;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 0);
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00671864 + g_00671898,&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  *(int *)((int)this + 4*(7)) = 0;
  return;
}

undefined4 BLEquipUpgraceItemPresenter::create(BLEquipUpgraceItemView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x20))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLEquipUpgraceItemPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar2)->removeObserver((cocos2d::CCObject*)((int)this), (char const*)&g_006718e2 + g_006718e8);
  return;
}

// ===== 修复: 补回被误删的函数占位 (4) =====
void BLEquipUpgraceItemPresenter::onEnter()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLEquipUpgraceItemPresenter::initWithView(BLEquipUpgraceItemView* p1)
{
  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined1 auStack_20 [12];
  
  *(undefined4 *)(((int)this) + 0x18) = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  piVar1 = (int *)((BLEquipUpgraceItemView *)(p1))->getPageControlStars();
  (**(code **)(*(int *)(piVar1) + (0x21c)))(piVar1,1);
  uVar2 = (undefined4)(((BLEquipUpgraceItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getLabEquiped());
  puVar4 = (unsigned char *)((char *)&g_00671940 + (intptr_t)(g_00671a14));
  ((cocos2d::CCLabelTTF *)(uVar2))->enableStroke(*(const ccColor3B *)(void *)puVar4, 0x3f800000, 1);
  piVar1 = (int *)((BLEquipUpgraceItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getPageControlStars();
  (**(code **)(*(int *)(piVar1) + (0x21c)))(piVar1,1);
  piVar1 = (int *)((BLEquipUpgraceItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getssp_UpgraceTitleBG();
  pcVar5 = *(code **)(*piVar1 + 0x7c);
  0 /* ctorZero */;
  (*pcVar5)(piVar1,auStack_20);
  piVar1 = (int *)((BLEquipUpgraceItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getssp_UpgraceTitleBG();
  pcVar5 = *(code **)(*piVar1 + 0x5c);
  piVar3 = (int *)((BLEquipUpgraceItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getLabUpgrace();
  uVar2 = (undefined4)((**(code **)(*(int *)(piVar3) + (0x60)))());
  (*pcVar5)(piVar1,uVar2);
  piVar1 = (int *)((BLEquipUpgraceItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getPageControlStars();
  (**(code **)(*(int *)(piVar1) + (0x20c)))(piVar1,1);
  ((BLEquipUpgraceItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getPageControlStars();
  ((BLPageControl *)this)->reload();
  piVar1 = (int *)((BLEquipUpgraceItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getLabStar();
  pcVar5 = *(code **)(*piVar1 + 0x5c);
  piVar3 = (int *)((BLEquipUpgraceItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getPageControlStars();
  uVar2 = (undefined4)((**(code **)(*(int *)(piVar3) + (0x60)))());
  uVar2 = (undefined4)(func_0079e59c(uVar2,g_00671a18));
  (*pcVar5)(piVar1,uVar2);
  piVar1 = (int *)((BLEquipUpgraceItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getLabStar();
  pcVar5 = *(code **)(*piVar1 + 100);
  piVar3 = (int *)((BLEquipUpgraceItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getLabStar();
  uVar2 = (undefined4)((**(code **)(*(int *)(piVar3) + (0x68)))());
  uVar2 = (undefined4)(func_0079e59c(uVar2,0x3f800000));
  (*pcVar5)(piVar1,uVar2);
  uVar2 = (undefined4)(((BLEquipUpgraceItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getLabStar());
  ((cocos2d::CCLabelTTF *)(uVar2))->enableStroke(*(const ccColor3B *)(void *)puVar4, 0x3f800000, 1);
  return;
}

void BLEquipUpgraceItemPresenter::updateData(cocos2d::CCObject* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLEquipUpgraceItemPresenter::initWithData(BackPackItemData* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
