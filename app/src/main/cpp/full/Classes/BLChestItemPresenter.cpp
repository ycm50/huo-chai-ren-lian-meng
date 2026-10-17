#include "BLChestItemPresenter.h"
#include "CCLabelTTF.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "CCObject.h"
#include "ChestData.h"
#include "CCTouch.h"
#include "CCDirector.h"
#include "BLChestItemView.h"
#include "BLChestOneTimePresenter.h"
#include "BLChestOneTimeView.h"
#include "BLChestTenTimePresenter.h"
#include "BLChestTenTimeView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "CampaignData.h"
#include "DataManager.h"
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
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long func_0079e734(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_00515af0;
extern "C" unsigned long UNK_00515b08;
extern "C" unsigned long UNK_00515b20;
extern "C" unsigned long UNK_00515b94;
extern "C" unsigned long UNK_00515bae;
extern "C" unsigned long UNK_00515bf4;
extern "C" unsigned long UNK_00515c1c;
extern "C" unsigned long UNK_00515c32;
extern "C" unsigned long UNK_00515c60;
extern "C" unsigned long UNK_00515cf2;
extern "C" unsigned long UNK_00515d12;
extern "C" unsigned long UNK_00515dd0;
extern "C" unsigned long UNK_00515e16;
extern "C" unsigned long UNK_00515f78;
extern "C" unsigned long UNK_00515f8c;
extern "C" unsigned long UNK_00515fa0;
extern "C" unsigned long UNK_00515fb4;
extern "C" unsigned long UNK_0051628e;
extern "C" unsigned long UNK_0051630c;
extern "C" unsigned long UNK_0051630e;
extern "C" unsigned long UNK_00516328;
extern "C" unsigned long UNK_0051632a;
extern "C" unsigned long UNK_005163aa;
extern "C" unsigned long UNK_00516424;
extern "C" unsigned long UNK_00516426;
extern "C" unsigned long UNK_00516440;
extern "C" unsigned long UNK_00516442;
extern "C" unsigned long _UNK_00515af4;
extern "C" unsigned long _UNK_00515b0c;
extern "C" unsigned long _UNK_00515b24;
extern "C" unsigned long _UNK_00515be0;
extern "C" unsigned long _UNK_00515be4;
extern "C" unsigned long _UNK_00515bf8;
extern "C" unsigned long _UNK_00515c20;
extern "C" unsigned long _UNK_00515c90;
extern "C" unsigned long _UNK_00515c94;
extern "C" unsigned long _UNK_00515d20;
extern "C" unsigned long _UNK_00515d24;
extern "C" unsigned long _UNK_00515e1c;
extern "C" unsigned long _UNK_00515e20;
extern "C" unsigned long _UNK_00516228;
extern "C" unsigned long _UNK_0051622c;
extern "C" unsigned long _UNK_00516230;
extern "C" unsigned long _UNK_00516234;
extern "C" unsigned long _UNK_00516340;
extern "C" unsigned long _UNK_00516344;
extern "C" unsigned long _UNK_00516348;
extern "C" unsigned long _UNK_0051634c;
extern "C" unsigned long _UNK_00516350;
extern "C" unsigned long _UNK_00516458;
extern "C" unsigned long _UNK_0051645c;
extern "C" unsigned long _UNK_00516460;
extern "C" unsigned long _UNK_00516464;
extern "C" unsigned long _UNK_00516468;
extern "C" unsigned long g_00515af0;
extern "C" unsigned long g_00515af4;
extern "C" unsigned long g_00515b08;
extern "C" unsigned long g_00515b0c;
extern "C" unsigned long g_00515b20;
extern "C" unsigned long g_00515b24;
extern "C" unsigned long g_00515b94;
extern "C" unsigned long g_00515bae;
extern "C" unsigned long g_00515be0;
extern "C" unsigned long g_00515be4;
extern "C" unsigned long g_00515bf4;
extern "C" unsigned long g_00515bf8;
extern "C" unsigned long g_00515c1c;
extern "C" unsigned long g_00515c20;
extern "C" unsigned long g_00515c32;
extern "C" unsigned long g_00515c60;
extern "C" unsigned long g_00515c90;
extern "C" unsigned long g_00515c94;
extern "C" unsigned long g_00515cf2;
extern "C" unsigned long g_00515d12;
extern "C" unsigned long g_00515d20;
extern "C" unsigned long g_00515d24;
extern "C" unsigned long g_00515dd0;
extern "C" unsigned long g_00515e16;
extern "C" unsigned long g_00515e1c;
extern "C" unsigned long g_00515e20;
extern "C" unsigned long g_00515f78;
extern "C" unsigned long g_00515f8c;
extern "C" unsigned long g_00515fa0;
extern "C" unsigned long g_00515fb4;
extern "C" unsigned long g_00516228;
extern "C" unsigned long g_0051622c;
extern "C" unsigned long g_00516230;
extern "C" unsigned long g_00516234;
extern "C" unsigned long g_0051628e;
extern "C" unsigned long g_0051630c;
extern "C" unsigned long g_0051630e;
extern "C" unsigned long g_00516328;
extern "C" unsigned long g_0051632a;
extern "C" unsigned long g_00516340;
extern "C" unsigned long g_00516344;
extern "C" unsigned long g_00516348;
extern "C" unsigned long g_0051634c;
extern "C" unsigned long g_00516350;
extern "C" unsigned long g_005163aa;
extern "C" unsigned long g_00516424;
extern "C" unsigned long g_00516426;
extern "C" unsigned long g_00516440;
extern "C" unsigned long g_00516442;
extern "C" unsigned long g_00516458;
extern "C" unsigned long g_0051645c;
extern "C" unsigned long g_00516460;
extern "C" unsigned long g_00516464;
extern "C" unsigned long g_00516468;
bool BLChestItemPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLChestItemPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLChestItemPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLChestItemPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLChestItemPresenter::tick(float p1)
{
  return;
}

BLChestItemPresenter::~BLChestItemPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_00515b94 + g_00515be0);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x3c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00515bae + g_00515be4,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLChestItemPresenter::BLChestItemPresenter()
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
  iVar3 = *(int *)(&g_00515c32 + g_00515c90);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x3c;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 0);
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00515c60 + g_00515c94,&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  *(int *)((int)this + 4*(7)) = 0;
  return;
}

undefined4 BLChestItemPresenter::create(BLChestItemView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x20))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLChestItemPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  return;
}

void BLChestItemPresenter::onEnter()
{
  return;
}

// ===== 修复: 补回被误删的函数占位 (4) =====
void BLChestItemPresenter::initWithView(BLChestItemView* p1)
{
  int *piVar1;
  
  *(undefined4 *)(((int)this) + 0x18) = (undefined4)(intptr_t)p1;
  piVar1 = (int *)((BLChestItemView *)p1)->getBtnOne();
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)(&g_00515cf2 + g_00515d20),0,0x20);
  piVar1 = (int *)((BLChestItemView *)*(undefined4 *)(((int)this) + 0x18))->getBtnTen();
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)(&g_00515d12 + g_00515d24),0,0x20);
  return;
}

void BLChestItemPresenter::initWithChestData(ChestData* p1)
{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined1 uStack_3c;
  undefined1 uStack_3b;
  undefined1 uStack_3a;
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [4];
  undefined1 auStack_30 [4];
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 auStack_20 [3];
  
  *(undefined4 *)(((int)this) + 0x1c) = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  piVar1 = (int *)((BLChestItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getLabName();
  pcVar7 = *(code **)(*piVar1 + 0x234);
  uVar2 = (undefined4)(((BLLanguage *)this)->share());
  (**(code **)(**(int **)(((int)this) + 0x1c) + 0x20))(&uStack_24);
  (((BLLanguage *)this))->getString(*(std::string *)auStack_20);
  (*pcVar7)(piVar1,auStack_20[0]);
  func_0079e2bc(auStack_20);
  func_0079e2bc(&uStack_24);
  piVar1 = (int *)((BLChestItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getLabDesc();
  pcVar7 = *(code **)(*piVar1 + 0x234);
  uVar2 = (undefined4)(((BLLanguage *)this)->share());
  (**(code **)(**(int **)(((int)this) + 0x1c) + 0x30))(&uStack_24);
  (((BLLanguage *)this))->getString(*(std::string *)auStack_20);
  (*pcVar7)(piVar1,auStack_20[0]);
  func_0079e2bc(auStack_20);
  func_0079e2bc(&uStack_24);
  uStack_3c = 0xff;
  uStack_3b = 0xb4;
  uStack_3a = 0;
  func_0079e45c(auStack_38,(unsigned char *)((char *)&g_00515dd0 + (intptr_t)(g_00515e1c)),auStack_20);
  iVar3 = (undefined4)(intptr_t)((**(code **)(**(int **)(((int)this) + 0x1c) + 0x38))());
  if (iVar3 == 2) {
    uStack_3c = 0x2d;
    uStack_3b = 0xff;
    uStack_3a = 200;
    func_0079e2dc(auStack_38,(unsigned char *)((char *)&g_00515e16 + (intptr_t)(g_00515e20)));
  }
  piVar1 = (int *)((BLChestItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getSprOneIcon();
  pcVar7 = *(code **)(*piVar1 + 0x20c);
  func_0079e53c(auStack_34,auStack_38);
  piVar4 = (int *)0 /* ctorZero */;
  uVar2 = (undefined4)((**(code **)(*(int *)(piVar4) + (0x214)))());
  (*pcVar7)(piVar1,uVar2);
  func_0079e2bc(auStack_34);
  piVar1 = (int *)((BLChestItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getSprTenIcon();
  pcVar7 = *(code **)(*piVar1 + 0x20c);
  func_0079e53c(auStack_30,auStack_38);
  piVar4 = (int *)0 /* ctorZero */;
  uVar2 = (undefined4)((**(code **)(*(int *)(piVar4) + (0x214)))());
  (*pcVar7)(piVar1,uVar2);
  func_0079e2bc(auStack_30);
  piVar1 = (int *)((BLChestItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getLabOne();
  (**(code **)(*(int *)(piVar1) + (0x1b4)))(piVar1,&uStack_3c);
  piVar1 = (int *)((BLChestItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getLabOneTitle();
  (**(code **)(*(int *)(piVar1) + (0x1b4)))(piVar1,&uStack_3c);
  piVar1 = (int *)((BLChestItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getLabTen();
  (**(code **)(*(int *)(piVar1) + (0x1b4)))(piVar1,&uStack_3c);
  piVar1 = (int *)((BLChestItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getLabTenTitle();
  (**(code **)(*(int *)(piVar1) + (0x1b4)))(piVar1,&uStack_3c);
  piVar1 = (int *)((BLChestItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getLabOne();
  pcVar7 = *(code **)(*piVar1 + 0x234);
  (**(code **)(**(int **)(((int)this) + 0x1c) + 0x40))();
  uVar8 = (undefined4)(intptr_t)(func_0079e734());
  uVar2 = (undefined4)((undefined4)((ulonglong)uVar8 >> 0x20));
  0 /* ctorZero */;
  (*pcVar7)(piVar1,uStack_2c);
  func_0079e2bc(&uStack_2c);
  piVar1 = (int *)((BLChestItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getLabTen();
  pcVar7 = *(code **)(*piVar1 + 0x234);
  (**(code **)(**(int **)(((int)this) + 0x1c) + 0x48))();
  uVar8 = (undefined4)(intptr_t)(func_0079e734());
  uVar2 = (undefined4)((undefined4)((ulonglong)uVar8 >> 0x20));
  0 /* ctorZero */;
  (*pcVar7)(piVar1,uStack_28);
  func_0079e2bc(&uStack_28);
  piVar1 = (int *)((BLChestItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getSprIcon();
  pcVar7 = *(code **)(*piVar1 + 0x20c);
  (**(code **)(**(int **)(((int)this) + 0x1c) + 0x28))(&uStack_24);
  func_0079e45c(auStack_20,uStack_24,&uStack_28);
  piVar4 = (int *)0 /* ctorZero */;
  uVar2 = (undefined4)((**(code **)(*(int *)(piVar4) + (0x214)))());
  (*pcVar7)(piVar1,uVar2);
  func_0079e2bc(auStack_20);
  func_0079e2bc(&uStack_24);
  uVar2 = (undefined4)(((BLChestItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getLabOne());
  ((cocos2d::CCLabelTTF *)(uVar2))->enableStroke(*(cocos2d::_ccColor3B const*)(unsigned char *)((char *)&g_00515f78 + (intptr_t)(g_00516228)), 0x3f800000, 1);
  uVar2 = (undefined4)(((BLChestItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getLabOneTitle());
  ((cocos2d::CCLabelTTF *)(uVar2))->enableStroke(*(cocos2d::_ccColor3B const*)(unsigned char *)((char *)&g_00515f8c + (intptr_t)(g_0051622c)), 0x3f800000, 1);
  uVar2 = (undefined4)(((BLChestItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getLabTen());
  ((cocos2d::CCLabelTTF *)(uVar2))->enableStroke(*(cocos2d::_ccColor3B const*)(unsigned char *)((char *)&g_00515fa0 + (intptr_t)(g_00516230)), 0x3f800000, 1);
  uVar2 = (undefined4)(((BLChestItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getLabTenTitle());
  ((cocos2d::CCLabelTTF *)(uVar2))->enableStroke(*(cocos2d::_ccColor3B const*)(unsigned char *)((char *)&g_00515fb4 + (intptr_t)(g_00516234)), 0x3f800000, 1);
  piVar1 = (int *)((BLChestItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getSprOneIcon();
  puVar5 = (undefined4 *)(**(code **)(*(int *)(piVar1) + (0x8c)))();
  uVar2 = (undefined4)(*puVar5);
  piVar1 = (int *)((BLChestItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getLabOne();
  puVar5 = (undefined4 *)(**(code **)(*(int *)(piVar1) + (0x8c)))();
  uVar2 = (undefined4)(func_0079e59c(uVar2,*puVar5));
  uVar2 = (undefined4)(func_0079e59c(uVar2,0x40000000));
  piVar1 = (int *)((BLChestItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getSprOneIcon();
  pcVar7 = *(code **)(*piVar1 + 0x7c);
  0 /* ctorZero */;
  (*pcVar7)(piVar1,auStack_20);
  piVar1 = (int *)((BLChestItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getLabOne();
  pcVar7 = *(code **)(*piVar1 + 0x7c);
  0 /* ctorZero */;
  (*pcVar7)(piVar1,auStack_20);
  piVar1 = (int *)((BLChestItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getSprOneIcon();
  pcVar7 = *(code **)(*piVar1 + 0x4c);
  piVar4 = (int *)((BLChestItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getBtnOne();
  puVar5 = (undefined4 *)(**(code **)(*(int *)(piVar4) + (0x50)))();
  uVar2 = (undefined4)(func_0079e4fc(uVar2,0x3f000000));
  uVar2 = (undefined4)(func_0079e57c(*puVar5,uVar2));
  piVar4 = (int *)((BLChestItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getSprOneIcon();
  iVar3 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar4) + (0x50)))());
  0 /* ctorZero */;
  (*pcVar7)(piVar1,auStack_20);
  piVar1 = (int *)((BLChestItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getLabOne();
  pcVar7 = *(code **)(*piVar1 + 0x4c);
  piVar4 = (int *)((BLChestItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getSprOneIcon();
  uVar2 = (undefined4)((**(code **)(*(int *)(piVar4) + (0x60)))());
  piVar4 = (int *)((BLChestItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getSprOneIcon();
  puVar5 = (undefined4 *)(**(code **)(*(int *)(piVar4) + (0x8c)))();
  uVar2 = (undefined4)(func_0079e59c(uVar2,*puVar5));
  piVar4 = (int *)((BLChestItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getLabOne();
  uVar6 = (undefined4)((**(code **)(*(int *)(piVar4) + (0x68)))());
  0 /* ctorZero */;
  (*pcVar7)(piVar1,auStack_20);
  piVar1 = (int *)((BLChestItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getSprTenIcon();
  puVar5 = (undefined4 *)(**(code **)(*(int *)(piVar1) + (0x8c)))();
  uVar2 = (undefined4)(*puVar5);
  piVar1 = (int *)((BLChestItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getLabTen();
  puVar5 = (undefined4 *)(**(code **)(*(int *)(piVar1) + (0x8c)))();
  uVar2 = (undefined4)(func_0079e59c(uVar2,*puVar5));
  uVar2 = (undefined4)(func_0079e59c(uVar2,0x40000000));
  piVar1 = (int *)((BLChestItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getSprTenIcon();
  pcVar7 = *(code **)(*piVar1 + 0x7c);
  0 /* ctorZero */;
  (*pcVar7)(piVar1,auStack_20);
  piVar1 = (int *)((BLChestItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getLabTen();
  pcVar7 = *(code **)(*piVar1 + 0x7c);
  0 /* ctorZero */;
  (*pcVar7)(piVar1,auStack_20);
  piVar1 = (int *)((BLChestItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getSprTenIcon();
  pcVar7 = *(code **)(*piVar1 + 0x4c);
  piVar4 = (int *)((BLChestItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getBtnTen();
  uVar6 = (undefined4)((**(code **)(*(int *)(piVar4) + (0x60)))());
  uVar2 = (undefined4)(func_0079e4fc(uVar2,0x3f000000));
  uVar2 = (undefined4)(func_0079e57c(uVar6,uVar2));
  piVar4 = (int *)((BLChestItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getLabTen();
  uVar6 = (undefined4)((**(code **)(*(int *)(piVar4) + (0x68)))());
  0 /* ctorZero */;
  (*pcVar7)(piVar1,auStack_20);
  piVar1 = (int *)((BLChestItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getLabTen();
  pcVar7 = *(code **)(*piVar1 + 0x4c);
  piVar4 = (int *)((BLChestItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getSprTenIcon();
  uVar2 = (undefined4)((**(code **)(*(int *)(piVar4) + (0x60)))());
  piVar4 = (int *)((BLChestItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getSprTenIcon();
  puVar5 = (undefined4 *)(**(code **)(*(int *)(piVar4) + (0x8c)))();
  uVar2 = (undefined4)(func_0079e59c(uVar2,*puVar5));
  piVar4 = (int *)((BLChestItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getLabTen();
  uVar6 = (undefined4)((**(code **)(*(int *)(piVar4) + (0x68)))());
  0 /* ctorZero */;
  (*pcVar7)(piVar1,auStack_20);
  func_0079e2bc(auStack_38);
  return;
}

undefined8 BLChestItemPresenter::onOne(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

undefined8 BLChestItemPresenter::onTen(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
