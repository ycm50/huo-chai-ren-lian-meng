#include "BLEquipRuneItemPresenter.h"
#include "CCDictionary.h"
#include "CCArray.h"
#include "CCLabelTTF.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "BackPackItemData.h"
#include "CCObject.h"
#include "CCTouch.h"
#include "CCDirector.h"
#include "BLDebug.h"
#include "BLEquipRuneItemView.h"
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
extern "C" long long software_udf(...);

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
extern "C" long long ghidra_CONCAT13(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_006708cc;
extern "C" unsigned long UNK_006708e6;
extern "C" unsigned long UNK_0067092c;
extern "C" unsigned long UNK_00670954;
extern "C" unsigned long UNK_0067096a;
extern "C" unsigned long UNK_00670998;
extern "C" unsigned long UNK_00670a2a;
extern "C" unsigned long UNK_00670a4a;
extern "C" unsigned long UNK_00670aa8;
extern "C" unsigned long UNK_00670b54;
extern "C" unsigned long UNK_00670be8;
extern "C" unsigned long UNK_00670bec;
extern "C" unsigned long UNK_00670c1e;
extern "C" unsigned long UNK_00670c48;
extern "C" unsigned long UNK_00670cba;
extern "C" unsigned long UNK_00670d14;
extern "C" unsigned long UNK_00670d4a;
extern "C" unsigned long UNK_00670d4c;
extern "C" unsigned long UNK_00670d94;
extern "C" unsigned long UNK_00670df6;
extern "C" unsigned long UNK_00670df8;
extern "C" unsigned long UNK_00670eaa;
extern "C" unsigned long UNK_00670ef0;
extern "C" unsigned long UNK_00670f64;
extern "C" unsigned long UNK_00671070;
extern "C" unsigned long UNK_006710b4;
extern "C" unsigned long UNK_00671154;
extern "C" unsigned long UNK_00671262;
extern "C" unsigned long UNK_006712e4;
extern "C" unsigned long UNK_00671320;
extern "C" unsigned long UNK_00671360;
extern "C" unsigned long UNK_0067140e;
extern "C" unsigned long UNK_00671440;
extern "C" unsigned long UNK_00671470;
extern "C" unsigned long UNK_00671504;
extern "C" unsigned long UNK_00671589;
extern "C" unsigned long UNK_006715a0;
extern "C" unsigned long UNK_006715bc;
extern "C" unsigned long _UNK_00670918;
extern "C" unsigned long _UNK_0067091c;
extern "C" unsigned long _UNK_00670930;
extern "C" unsigned long _UNK_00670958;
extern "C" unsigned long _UNK_006709c8;
extern "C" unsigned long _UNK_006709cc;
extern "C" unsigned long _UNK_00670b78;
extern "C" unsigned long _UNK_00670b7c;
extern "C" unsigned long _UNK_00670b80;
extern "C" unsigned long _UNK_00670b84;
extern "C" unsigned long _UNK_00670b88;
extern "C" unsigned long _UNK_00670cf0;
extern "C" unsigned long _UNK_00670cf4;
extern "C" unsigned long _UNK_00670cf8;
extern "C" unsigned long _UNK_00670cfc;
extern "C" unsigned long _UNK_00670d00;
extern "C" unsigned long _UNK_00670d70;
extern "C" unsigned long _UNK_00670d74;
extern "C" unsigned long _UNK_00670d78;
extern "C" unsigned long _UNK_00670dbc;
extern "C" unsigned long _UNK_00670f48;
extern "C" unsigned long _UNK_00670f4c;
extern "C" unsigned long _UNK_00670f50;
extern "C" unsigned long _UNK_00670f54;
extern "C" unsigned long _UNK_00671264;
extern "C" unsigned long _UNK_00671268;
extern "C" unsigned long _UNK_0067126c;
extern "C" unsigned long _UNK_00671270;
extern "C" unsigned long _UNK_00671274;
extern "C" unsigned long _UNK_00671278;
extern "C" unsigned long _UNK_0067127c;
extern "C" unsigned long _UNK_00671280;
extern "C" unsigned long _UNK_00671284;
extern "C" unsigned long _UNK_00671620;
extern "C" unsigned long _UNK_00671624;
extern "C" unsigned long _UNK_00671628;
extern "C" unsigned long _UNK_0067162c;
extern "C" unsigned long _UNK_00671630;
extern "C" unsigned long _UNK_00671634;
extern "C" unsigned long _UNK_00671638;
extern "C" unsigned long _UNK_0067163c;
extern "C" unsigned long _UNK_00671640;
extern "C" unsigned long _UNK_00671644;
extern "C" unsigned long _UNK_00671648;
extern "C" unsigned long _UNK_0067164c;
extern "C" unsigned long _UNK_00671650;
extern "C" unsigned long _UNK_00671654;
extern "C" unsigned long _UNK_00671658;
extern "C" unsigned long extraout_r2;
extern "C" unsigned long g_006708cc;
extern "C" unsigned long g_006708e6;
extern "C" unsigned long g_00670918;
extern "C" unsigned long g_0067091c;
extern "C" unsigned long g_0067092c;
extern "C" unsigned long g_00670930;
extern "C" unsigned long g_00670954;
extern "C" unsigned long g_00670958;
extern "C" unsigned long g_0067096a;
extern "C" unsigned long g_00670998;
extern "C" unsigned long g_006709c8;
extern "C" unsigned long g_006709cc;
extern "C" unsigned long g_00670a2a;
extern "C" unsigned long g_00670a4a;
extern "C" unsigned long g_00670aa8;
extern "C" unsigned long g_00670b54;
extern "C" unsigned long g_00670b78;
extern "C" unsigned long g_00670b7c;
extern "C" unsigned long g_00670b80;
extern "C" unsigned long g_00670b84;
extern "C" unsigned long g_00670b88;
extern "C" unsigned long g_00670be8;
extern "C" unsigned long g_00670bec;
extern "C" unsigned long g_00670c1e;
extern "C" unsigned long g_00670c48;
extern "C" unsigned long g_00670cba;
extern "C" unsigned long g_00670cf0;
extern "C" unsigned long g_00670cf4;
extern "C" unsigned long g_00670cf8;
extern "C" unsigned long g_00670cfc;
extern "C" unsigned long g_00670d00;
extern "C" unsigned long g_00670d14;
extern "C" unsigned long g_00670d4a;
extern "C" unsigned long g_00670d4c;
extern "C" unsigned long g_00670d70;
extern "C" unsigned long g_00670d74;
extern "C" unsigned long g_00670d78;
extern "C" unsigned long g_00670d94;
extern "C" unsigned long g_00670dbc;
extern "C" unsigned long g_00670df6;
extern "C" unsigned long g_00670df8;
extern "C" unsigned long g_00670eaa;
extern "C" unsigned long g_00670ef0;
extern "C" unsigned long g_00670f48;
extern "C" unsigned long g_00670f4c;
extern "C" unsigned long g_00670f50;
extern "C" unsigned long g_00670f54;
extern "C" unsigned long g_00670f64;
extern "C" unsigned long g_00671070;
extern "C" unsigned long g_006710b4;
extern "C" unsigned long g_00671154;
extern "C" unsigned long g_00671262;
extern "C" unsigned long g_00671264;
extern "C" unsigned long g_00671268;
extern "C" unsigned long g_0067126c;
extern "C" unsigned long g_00671270;
extern "C" unsigned long g_00671274;
extern "C" unsigned long g_00671278;
extern "C" unsigned long g_0067127c;
extern "C" unsigned long g_00671280;
extern "C" unsigned long g_00671284;
extern "C" unsigned long g_006712e4;
extern "C" unsigned long g_00671320;
extern "C" unsigned long g_00671360;
extern "C" unsigned long g_0067140e;
extern "C" unsigned long g_00671440;
extern "C" unsigned long g_00671470;
extern "C" unsigned long g_00671504;
extern "C" unsigned long g_00671589;
extern "C" unsigned long g_006715a0;
extern "C" unsigned long g_006715bc;
extern "C" unsigned long g_00671620;
extern "C" unsigned long g_00671624;
extern "C" unsigned long g_00671628;
extern "C" unsigned long g_0067162c;
extern "C" unsigned long g_00671630;
extern "C" unsigned long g_00671634;
extern "C" unsigned long g_00671638;
extern "C" unsigned long g_0067163c;
extern "C" unsigned long g_00671640;
extern "C" unsigned long g_00671644;
extern "C" unsigned long g_00671648;
extern "C" unsigned long g_0067164c;
extern "C" unsigned long g_00671650;
extern "C" unsigned long g_00671654;
extern "C" unsigned long g_00671658;
bool BLEquipRuneItemPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLEquipRuneItemPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLEquipRuneItemPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLEquipRuneItemPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

BLEquipRuneItemPresenter::~BLEquipRuneItemPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_006708cc + g_00670918);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x38;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_006708e6 + g_0067091c,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLEquipRuneItemPresenter::BLEquipRuneItemPresenter()
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
  iVar3 = *(int *)(&g_0067096a + g_006709c8);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x38;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 0);
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00670998 + g_006709cc,&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  *(int *)((int)this + 4*(7)) = 0;
  return;
}

void BLEquipRuneItemPresenter::onEnter()
{
  return;
}

void BLEquipRuneItemPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  return;
}

undefined4 BLEquipRuneItemPresenter::create()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x20))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}





void BLEquipRuneItemPresenter::tick(float p1)
{
  return;
}

// ===== 修复: 补回被误删的函数占位 (7) =====
void BLEquipRuneItemPresenter::initWithView(BLEquipRuneItemView* p1)
{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined1 auStack_34 [4];
  undefined1 auStack_30 [8];
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  *(undefined4 *)(((int)this) + 0x18) = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  piVar1 = (int *)((BLEquipRuneItemView *)(p1))->getBtnEquip();
  uStack_28 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_00670a2a + (intptr_t)(g_00670b78))));
  uStack_24 = (undefined4)(0);
  (**(code **)(*(int *)(piVar1) + (0x254)))(piVar1,((int)this),uStack_28,0,0x20);
  piVar1 = (int *)((BLEquipRuneItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getBtnCompose();
  uStack_20 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_00670a4a + (intptr_t)(g_00670b7c))));
  uStack_1c = (undefined4)(0);
  (**(code **)(*(int *)(piVar1) + (0x254)))(piVar1,((int)this),uStack_20,0,0x20);
  piVar1 = (int *)((BLEquipRuneItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getssp_UpgraceTitleBG()
  ;
  pcVar5 = *(code **)(*piVar1 + 0x7c);
  0 /* ctorZero */;
  (*pcVar5)(piVar1,auStack_30);
  piVar1 = (int *)((BLEquipRuneItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getssp_UpgraceTitleBG()
  ;
  pcVar5 = *(code **)(*piVar1 + 0x5c);
  piVar2 = (int *)((BLEquipRuneItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getLabUpgrace();
  uVar3 = (undefined4)((**(code **)(*(int *)(piVar2) + (0x60)))());
  (*pcVar5)(piVar1,uVar3);
  uVar3 = (undefined4)(((BLEquipRuneItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getLabEquiped());
  puVar4 = (unsigned char *)((char *)&g_00670aa8 + (intptr_t)(g_00670b80));
  ((cocos2d::CCLabelTTF *)(uVar3))->enableStroke(*(const ccColor3B *)(void *)puVar4, 0x3f800000, 1);
  piVar1 = (int *)((BLEquipRuneItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getPageControlStars();
  (**(code **)(*(int *)(piVar1) + (0x21c)))(piVar1,1);
  piVar1 = (int *)((BLEquipRuneItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getPageControlStars();
  (**(code **)(*(int *)(piVar1) + (0x20c)))(piVar1,1);
  ((BLEquipRuneItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getPageControlStars();
  ((BLPageControl *)this)->reload();
  piVar1 = (int *)((BLEquipRuneItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getLabStar();
  pcVar5 = *(code **)(*piVar1 + 0x5c);
  piVar2 = (int *)((BLEquipRuneItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getPageControlStars();
  uVar3 = (undefined4)((**(code **)(*(int *)(piVar2) + (0x60)))());
  uVar3 = (undefined4)(func_0079e59c(uVar3,g_00670b84));
  (*pcVar5)(piVar1,uVar3);
  piVar1 = (int *)((BLEquipRuneItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getLabStar();
  pcVar5 = *(code **)(*piVar1 + 100);
  piVar2 = (int *)((BLEquipRuneItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getLabStar();
  uVar3 = (undefined4)((**(code **)(*(int *)(piVar2) + (0x68)))());
  uVar3 = (undefined4)(func_0079e59c(uVar3,0x3f800000));
  (*pcVar5)(piVar1,uVar3);
  uVar3 = (undefined4)(((BLEquipRuneItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getLabStar());
  ((cocos2d::CCLabelTTF *)(uVar3))->enableStroke(*(const ccColor3B *)(void *)puVar4, 0x3f800000, 1);
  piVar1 = (int *)((BLEquipRuneItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getBtnEquip();
  pcVar5 = *(code **)(*piVar1 + 0x26c);
  func_0079e45c(auStack_30,(unsigned char *)((char *)&g_00670b54 + (intptr_t)(g_00670b88)),auStack_34);
  (*pcVar5)(piVar1,auStack_30);
  func_0079e2bc(auStack_30);
  return;
}

void BLEquipRuneItemPresenter::equip()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLEquipRuneItemPresenter::unEquip()
{
  undefined4 uVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar1 = (undefined4)(((CocosDenshion::SimpleAudioEngine *)this)->sharedEngine());
  ((CocosDenshion::SimpleAudioEngine *)(uVar1))->playEffect((char const*)(unsigned char *)((char *)&g_00670d14 + (intptr_t)(g_00670d70)), 0);
  ((DataManager *)this)->shareDataManager();
  piVar2 = ((void)((DataManager *)this)->getCurrentPlayer(),(int *)0);
  if (piVar2 != (int *)0x0) {
    uVar1 = (undefined4)((**(code **)(*(int *)(piVar2) + (0x28)))());
    piVar2 = (int *)((DataManager *)this)->shareDataManager();
    uVar3 = (undefined4)((**(code **)(*(int *)(piVar2) + (0x70)))());
    iVar4 = (undefined4)(intptr_t)(((cocos2d::CCArray *)(uVar1))->objectAtIndex((unsigned int)uVar3));
    if ((iVar4 != 0) &&
       (iVar4 = func_0079e55c(iVar4,*(undefined4 *)((unsigned char *)((char *)&g_00670d4a + (intptr_t)(g_00670d74))),
                                *(undefined4 *)((unsigned char *)((char *)&g_00670d4c + (intptr_t)(g_00670d78))),0), iVar4 != 0)) {
      piVar2 = (int *)((DataManager *)this)->shareDataManager();
      piVar2 = (int *)(**(code **)(*(int *)(piVar2) + (0x28)))();
      uVar1 = (undefined4)((**(code **)(*(int *)(piVar2) + (0x50)))());
      ((BackPackData *)(uVar1))->unEquip((BackPackItemData*)*(undefined4 *)(((int)this) + 0x1c));
    }
  }
  return;
}

void BLEquipRuneItemPresenter::onEquip(cocos2d::CCObject* p1, unsigned int p2)
{
  int iVar1;
  undefined4 uStack_14;
  
  uStack_14 = (undefined4)(p1);
  (**(code **)(**(int **)(((int)this) + 0x1c) + 0x38))(&uStack_14);
  iVar1 = func_0079e4bc(&uStack_14,&g_00670d94 + g_00670dbc);
  func_0079e2bc(&uStack_14);
  if (iVar1 == 0) {
    BLEquipRuneItemPresenter::equip();
  }
  else {
    BLEquipRuneItemPresenter::unEquip();
  }
  return;
}

void BLEquipRuneItemPresenter::onCompose()
{
  code *pcVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [4];
  undefined4 uStack_28;
  int aiStack_24 [4];
  
  piVar2 = (int *)((DataCacheManager *)this)->shareManager();
  uVar3 = (undefined4)((**(code **)(*(int *)(piVar2) + (0x68)))());
  uVar4 = (undefined4)((**(code **)(**(int **)(((int)this) + 0x1c) + 0x20))());
  iVar5 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)(uVar3))->objectForKey(uVar4));
  if (iVar5 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x670f42);
    (*pcVar1)();
  }
  piVar2 = (int *)func_0079e55c(iVar5,*(undefined4 *)((unsigned char *)((char *)&g_00670df6 + (intptr_t)(g_00670f48))),
                                  *(undefined4 *)((unsigned char *)((char *)&g_00670df8 + (intptr_t)(g_00670f4c))),0);
  iVar5 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar2) + (0x30)))());
  if (iVar5 == 5) {
    uVar3 = (undefined4)(((Toast *)this)->sharedToast());
    uVar4 = (undefined4)(((BLLanguage *)this)->share());
    func_0079e45c(&uStack_28,(unsigned char *)((char *)&g_00670ef0 + (intptr_t)(g_00670f54)),auStack_2c);
    ((BLLanguage *)(uVar4))->getString((std::string)(char*)uStack_28);
    ((Toast *)(uVar3))->showToast((char const*)aiStack_24[0]);
    func_0079e2bc(aiStack_24);
    func_0079e2bc(&uStack_28);
  }
  else {
    aiStack_24[0] = 0;
    aiStack_24[1] = 0;
    aiStack_24[2] = 0;
    uStack_28 = (undefined4)(0);
    ((std::vector<int, std::allocator<int>> *)(aiStack_24))->push_back(*(int const*)&uStack_28);
    uStack_28 = (undefined4)(2);
    ((std::vector<int, std::allocator<int>> *)(aiStack_24))->push_back(*(int const*)&uStack_28);
    uStack_28 = (undefined4)(4);
    ((std::vector<int, std::allocator<int>> *)(aiStack_24))->push_back(*(int const*)&uStack_28);
    uStack_28 = (undefined4)(6);
    ((std::vector<int, std::allocator<int>> *)(aiStack_24))->push_back(*(int const*)&uStack_28);
    uStack_28 = (undefined4)(10);
    ((std::vector<int, std::allocator<int>> *)(aiStack_24))->push_back(*(int const*)&uStack_28);
    iVar5 = (undefined4)(intptr_t)((**(code **)(**(int **)(((int)this) + 0x1c) + 0x28))());
    iVar6 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar2) + (0x30)))(piVar2));
    if (iVar5 < *(int *)(iVar6 * 4 + aiStack_24[0])) {
      uVar3 = (undefined4)(((Toast *)this)->sharedToast());
      uVar4 = (undefined4)(((BLLanguage *)this)->share());
      func_0079e45c(auStack_2c,(unsigned char *)((char *)&g_00670eaa + (intptr_t)(g_00670f50)),auStack_30);
      ((BLLanguage *)(uVar4))->getString((std::string)(char*)auStack_2c);
      ((Toast *)(uVar3))->showToast((char const*)uStack_28);
      func_0079e2bc(&uStack_28);
      func_0079e2bc(auStack_2c);
    }
    else {
      piVar7 = (int *)((DataManager *)this)->shareDataManager();
      piVar7 = (int *)(**(code **)(*(int *)(piVar7) + (0x28)))();
      uVar3 = (undefined4)((**(code **)(*(int *)(piVar7) + (0x50)))());
      iVar5 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar2) + (0x30)))(piVar2));
      ((BackPackData *)(uVar3))->compose(*(undefined4 *)(iVar5 * 4 + aiStack_24[0]), (BackPackItemData*)*(undefined4 *)(((int)this) + 0x1c));
    }
    if (aiStack_24[0] != 0) {
      func_0079e2cc();
    }
  }
  return;
}

void BLEquipRuneItemPresenter::onEquipChange(cocos2d::CCObject* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLEquipRuneItemPresenter::initWithData(BackPackItemData* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
