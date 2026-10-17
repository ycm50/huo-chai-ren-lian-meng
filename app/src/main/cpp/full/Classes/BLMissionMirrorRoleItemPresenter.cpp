#include "BLMissionMirrorRoleItemPresenter.h"
#include "BLBuyRoleAlertPresenter.h"
#include "BLBuyRoleAlertView.h"
#include "BLEquipGiftPresenter.h"
#include "BLEquipGiftView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "DataCacheManager.h"
#include "DataManager.h"
#include "GiftData.h"
#include "RichTextData.h"
#include "RoleInfoData.h"
#include "Toast.h"
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
extern "C" long long func_0079e49c(...);
extern "C" long long func_0079e4bc(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long func_0079e60c(...);
extern "C" long long func_0079e734(...);
extern "C" long long func_0079e854(...);
extern "C" long long func_0079e874(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_005ccdc0;
extern "C" unsigned long UNK_005ccdda;
extern "C" unsigned long UNK_005cce24;
extern "C" unsigned long UNK_005cce4c;
extern "C" unsigned long UNK_005cce94;
extern "C" unsigned long UNK_005ccea4;
extern "C" unsigned long UNK_005ccebe;
extern "C" unsigned long UNK_005ccf1a;
extern "C" unsigned long UNK_005ccf1c;
extern "C" unsigned long UNK_005ccf76;
extern "C" unsigned long UNK_005ccf7a;
extern "C" unsigned long UNK_005ccfa8;
extern "C" unsigned long UNK_005ccfc8;
extern "C" unsigned long UNK_005cd01e;
extern "C" unsigned long UNK_005cd09a;
extern "C" unsigned long UNK_005cd0ae;
extern "C" unsigned long UNK_005cd0c8;
extern "C" unsigned long UNK_005cd0d6;
extern "C" unsigned long UNK_005cd0e2;
extern "C" unsigned long UNK_005cd124;
extern "C" unsigned long UNK_005cd1a0;
extern "C" unsigned long UNK_005cd1be;
extern "C" unsigned long UNK_005cd1dc;
extern "C" unsigned long UNK_005cd1f2;
extern "C" unsigned long UNK_005cd22c;
extern "C" unsigned long UNK_005cd2bc;
extern "C" unsigned long UNK_005cd2ee;
extern "C" unsigned long UNK_005cd324;
extern "C" unsigned long UNK_005cd326;
extern "C" unsigned long UNK_005cd340;
extern "C" unsigned long UNK_005cd342;
extern "C" unsigned long UNK_005cd36a;
extern "C" unsigned long UNK_005cd382;
extern "C" unsigned long UNK_005cd3d2;
extern "C" unsigned long UNK_005cd3ea;
extern "C" unsigned long UNK_005cd4a6;
extern "C" unsigned long UNK_005cd4a8;
extern "C" unsigned long UNK_005cd4c0;
extern "C" unsigned long UNK_005cd4c2;
extern "C" unsigned long UNK_005cd51e;
extern "C" unsigned long UNK_005cd63c;
extern "C" unsigned long UNK_005cd6a4;
extern "C" unsigned long UNK_005cd796;
extern "C" unsigned long UNK_005cd798;
extern "C" unsigned long UNK_005cd7fc;
extern "C" unsigned long UNK_005cd81c;
extern "C" unsigned long UNK_005cd8c6;
extern "C" unsigned long UNK_005cd934;
extern "C" unsigned long UNK_005cd96a;
extern "C" unsigned long UNK_005cda14;
extern "C" unsigned long UNK_005cdb04;
extern "C" unsigned long UNK_005cdb4c;
extern "C" unsigned long UNK_005cdba4;
extern "C" unsigned long UNK_005cdbd4;
extern "C" unsigned long UNK_005cdc2e;
extern "C" unsigned long UNK_005cdc90;
extern "C" unsigned long UNK_005cdce6;
extern "C" unsigned long UNK_005cdd3a;
extern "C" unsigned long UNK_005cdd74;
extern "C" unsigned long UNK_005cdda0;
extern "C" unsigned long UNK_005cddce;
extern "C" unsigned long UNK_005cddf8;
extern "C" unsigned long UNK_005cde24;
extern "C" unsigned long UNK_005cde3e;
extern "C" unsigned long UNK_005cdeac;
extern "C" unsigned long UNK_005cded8;
extern "C" unsigned long UNK_005cdf04;
extern "C" unsigned long UNK_005cdf30;
extern "C" unsigned long UNK_005cdf50;
extern "C" unsigned long UNK_005cdf6e;
extern "C" unsigned long UNK_005ce0d4;
extern "C" unsigned long UNK_005ce274;
extern "C" unsigned long UNK_005ce2a8;
extern "C" unsigned long _UNK_005cce10;
extern "C" unsigned long _UNK_005cce14;
extern "C" unsigned long _UNK_005cce28;
extern "C" unsigned long _UNK_005cce50;
extern "C" unsigned long _UNK_005ccefc;
extern "C" unsigned long _UNK_005ccf00;
extern "C" unsigned long _UNK_005ccf04;
extern "C" unsigned long _UNK_005ccf58;
extern "C" unsigned long _UNK_005ccf5c;
extern "C" unsigned long _UNK_005cd260;
extern "C" unsigned long _UNK_005cd264;
extern "C" unsigned long _UNK_005cd268;
extern "C" unsigned long _UNK_005cd26c;
extern "C" unsigned long _UNK_005cd270;
extern "C" unsigned long _UNK_005cd274;
extern "C" unsigned long _UNK_005cd278;
extern "C" unsigned long _UNK_005cd27c;
extern "C" unsigned long _UNK_005cd280;
extern "C" unsigned long _UNK_005cd284;
extern "C" unsigned long _UNK_005cd288;
extern "C" unsigned long _UNK_005cd28c;
extern "C" unsigned long _UNK_005cd290;
extern "C" unsigned long _UNK_005cd294;
extern "C" unsigned long _UNK_005cd298;
extern "C" unsigned long _UNK_005cd29c;
extern "C" unsigned long _UNK_005cd2a0;
extern "C" unsigned long _UNK_005cd3a4;
extern "C" unsigned long _UNK_005cd3a8;
extern "C" unsigned long _UNK_005cd3ac;
extern "C" unsigned long _UNK_005cd3b0;
extern "C" unsigned long _UNK_005cd3b4;
extern "C" unsigned long _UNK_005cd3b8;
extern "C" unsigned long _UNK_005cd3bc;
extern "C" unsigned long _UNK_005cd3c0;
extern "C" unsigned long _UNK_005cd434;
extern "C" unsigned long _UNK_005cd438;
extern "C" unsigned long _UNK_005cd4d0;
extern "C" unsigned long _UNK_005cd4d4;
extern "C" unsigned long _UNK_005cd4d8;
extern "C" unsigned long _UNK_005cd4dc;
extern "C" unsigned long _UNK_005cd768;
extern "C" unsigned long _UNK_005cd76c;
extern "C" unsigned long _UNK_005cd770;
extern "C" unsigned long _UNK_005cd774;
extern "C" unsigned long _UNK_005cd7e8;
extern "C" unsigned long _UNK_005cd7ec;
extern "C" unsigned long _UNK_005cda68;
extern "C" unsigned long _UNK_005cda6c;
extern "C" unsigned long _UNK_005cda70;
extern "C" unsigned long _UNK_005cda74;
extern "C" unsigned long _UNK_005cda78;
extern "C" unsigned long _UNK_005cda7c;
extern "C" unsigned long _UNK_005cda80;
extern "C" unsigned long _UNK_005cda84;
extern "C" unsigned long _UNK_005cde64;
extern "C" unsigned long _UNK_005cde68;
extern "C" unsigned long _UNK_005cde6c;
extern "C" unsigned long _UNK_005cde70;
extern "C" unsigned long _UNK_005cde74;
extern "C" unsigned long _UNK_005cde78;
extern "C" unsigned long _UNK_005cde7c;
extern "C" unsigned long _UNK_005cde80;
extern "C" unsigned long _UNK_005cde84;
extern "C" unsigned long _UNK_005cde88;
extern "C" unsigned long _UNK_005cde8c;
extern "C" unsigned long _UNK_005cde90;
extern "C" unsigned long _UNK_005cde94;
extern "C" unsigned long _UNK_005cde98;
extern "C" unsigned long _UNK_005cde9c;
extern "C" unsigned long _UNK_005cdea0;
extern "C" unsigned long _UNK_005ce1cc;
extern "C" unsigned long _UNK_005ce1d0;
extern "C" unsigned long _UNK_005ce1d4;
extern "C" unsigned long _UNK_005ce1d8;
extern "C" unsigned long _UNK_005ce1dc;
extern "C" unsigned long _UNK_005ce1e0;
extern "C" unsigned long _UNK_005ce1e4;
extern "C" unsigned long _UNK_005ce1e8;
extern "C" unsigned long _UNK_005ce1ec;
extern "C" unsigned long _UNK_005ce32c;
extern "C" unsigned long _UNK_005ce330;
extern "C" unsigned long g_005ccdc0;
extern "C" unsigned long g_005ccdda;
extern "C" unsigned long g_005cce10;
extern "C" unsigned long g_005cce14;
extern "C" unsigned long g_005cce24;
extern "C" unsigned long g_005cce28;
extern "C" unsigned long g_005cce4c;
extern "C" unsigned long g_005cce50;
extern "C" unsigned long g_005cce94;
extern "C" unsigned long g_005ccea4;
extern "C" unsigned long g_005ccebe;
extern "C" unsigned long g_005ccefc;
extern "C" unsigned long g_005ccf00;
extern "C" unsigned long g_005ccf04;
extern "C" unsigned long g_005ccf1a;
extern "C" unsigned long g_005ccf1c;
extern "C" unsigned long g_005ccf58;
extern "C" unsigned long g_005ccf5c;
extern "C" unsigned long g_005ccf76;
extern "C" unsigned long g_005ccf7a;
extern "C" unsigned long g_005ccfa8;
extern "C" unsigned long g_005ccfc8;
extern "C" unsigned long g_005cd01e;
extern "C" unsigned long g_005cd09a;
extern "C" unsigned long g_005cd0ae;
extern "C" unsigned long g_005cd0c8;
extern "C" unsigned long g_005cd0d6;
extern "C" unsigned long g_005cd0e2;
extern "C" unsigned long g_005cd124;
extern "C" unsigned long g_005cd1a0;
extern "C" unsigned long g_005cd1be;
extern "C" unsigned long g_005cd1dc;
extern "C" unsigned long g_005cd1f2;
extern "C" unsigned long g_005cd22c;
extern "C" unsigned long g_005cd260;
extern "C" unsigned long g_005cd264;
extern "C" unsigned long g_005cd268;
extern "C" unsigned long g_005cd26c;
extern "C" unsigned long g_005cd270;
extern "C" unsigned long g_005cd274;
extern "C" unsigned long g_005cd278;
extern "C" unsigned long g_005cd27c;
extern "C" unsigned long g_005cd280;
extern "C" unsigned long g_005cd284;
extern "C" unsigned long g_005cd288;
extern "C" unsigned long g_005cd28c;
extern "C" unsigned long g_005cd290;
extern "C" unsigned long g_005cd294;
extern "C" unsigned long g_005cd298;
extern "C" unsigned long g_005cd29c;
extern "C" unsigned long g_005cd2a0;
extern "C" unsigned long g_005cd2bc;
extern "C" unsigned long g_005cd2ee;
extern "C" unsigned long g_005cd324;
extern "C" unsigned long g_005cd326;
extern "C" unsigned long g_005cd340;
extern "C" unsigned long g_005cd342;
extern "C" unsigned long g_005cd36a;
extern "C" unsigned long g_005cd382;
extern "C" unsigned long g_005cd3a4;
extern "C" unsigned long g_005cd3a8;
extern "C" unsigned long g_005cd3ac;
extern "C" unsigned long g_005cd3b0;
extern "C" unsigned long g_005cd3b4;
extern "C" unsigned long g_005cd3b8;
extern "C" unsigned long g_005cd3bc;
extern "C" unsigned long g_005cd3c0;
extern "C" unsigned long g_005cd3d2;
extern "C" unsigned long g_005cd3ea;
extern "C" unsigned long g_005cd434;
extern "C" unsigned long g_005cd438;
extern "C" unsigned long g_005cd4a6;
extern "C" unsigned long g_005cd4a8;
extern "C" unsigned long g_005cd4c0;
extern "C" unsigned long g_005cd4c2;
extern "C" unsigned long g_005cd4d0;
extern "C" unsigned long g_005cd4d4;
extern "C" unsigned long g_005cd4d8;
extern "C" unsigned long g_005cd4dc;
extern "C" unsigned long g_005cd51e;
extern "C" unsigned long g_005cd63c;
extern "C" unsigned long g_005cd6a4;
extern "C" unsigned long g_005cd768;
extern "C" unsigned long g_005cd76c;
extern "C" unsigned long g_005cd770;
extern "C" unsigned long g_005cd774;
extern "C" unsigned long g_005cd796;
extern "C" unsigned long g_005cd798;
extern "C" unsigned long g_005cd7e8;
extern "C" unsigned long g_005cd7ec;
extern "C" unsigned long g_005cd7fc;
extern "C" unsigned long g_005cd81c;
extern "C" unsigned long g_005cd8c6;
extern "C" unsigned long g_005cd934;
extern "C" unsigned long g_005cd96a;
extern "C" unsigned long g_005cda14;
extern "C" unsigned long g_005cda68;
extern "C" unsigned long g_005cda6c;
extern "C" unsigned long g_005cda70;
extern "C" unsigned long g_005cda74;
extern "C" unsigned long g_005cda78;
extern "C" unsigned long g_005cda7c;
extern "C" unsigned long g_005cda80;
extern "C" unsigned long g_005cda84;
extern "C" unsigned long g_005cdb04;
extern "C" unsigned long g_005cdb4c;
extern "C" unsigned long g_005cdba4;
extern "C" unsigned long g_005cdbd4;
extern "C" unsigned long g_005cdc2e;
extern "C" unsigned long g_005cdc90;
extern "C" unsigned long g_005cdce6;
extern "C" unsigned long g_005cdd3a;
extern "C" unsigned long g_005cdd74;
extern "C" unsigned long g_005cdda0;
extern "C" unsigned long g_005cddce;
extern "C" unsigned long g_005cddf8;
extern "C" unsigned long g_005cde24;
extern "C" unsigned long g_005cde3e;
extern "C" unsigned long g_005cde64;
extern "C" unsigned long g_005cde68;
extern "C" unsigned long g_005cde6c;
extern "C" unsigned long g_005cde70;
extern "C" unsigned long g_005cde74;
extern "C" unsigned long g_005cde78;
extern "C" unsigned long g_005cde7c;
extern "C" unsigned long g_005cde80;
extern "C" unsigned long g_005cde84;
extern "C" unsigned long g_005cde88;
extern "C" unsigned long g_005cde8c;
extern "C" unsigned long g_005cde90;
extern "C" unsigned long g_005cde94;
extern "C" unsigned long g_005cde98;
extern "C" unsigned long g_005cde9c;
extern "C" unsigned long g_005cdea0;
extern "C" unsigned long g_005cdeac;
extern "C" unsigned long g_005cded8;
extern "C" unsigned long g_005cdf04;
extern "C" unsigned long g_005cdf30;
extern "C" unsigned long g_005cdf50;
extern "C" unsigned long g_005cdf6e;
extern "C" unsigned long g_005ce0d4;
extern "C" unsigned long g_005ce1cc;
extern "C" unsigned long g_005ce1d0;
extern "C" unsigned long g_005ce1d4;
extern "C" unsigned long g_005ce1d8;
extern "C" unsigned long g_005ce1dc;
extern "C" unsigned long g_005ce1e0;
extern "C" unsigned long g_005ce1e4;
extern "C" unsigned long g_005ce1e8;
extern "C" unsigned long g_005ce1ec;
extern "C" unsigned long g_005ce274;
extern "C" unsigned long g_005ce2a8;
extern "C" unsigned long g_005ce32c;
extern "C" unsigned long g_005ce330;
bool BLMissionMirrorRoleItemPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

BLMissionMirrorRoleItemPresenter::~BLMissionMirrorRoleItemPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_005ccdc0 + g_005cce10);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x2c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005ccdda + g_005cce14,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  *(int *)((int)this + 4*(8)) = 0;
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}


void BLMissionMirrorRoleItemPresenter::onUpdateSelect(cocos2d::CCObject* p1)
{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (((p1 != 0) &&
      (iVar1 = func_0079e55c(p1,*(undefined4 *)(&g_005ccf1a + g_005ccf5c),
                               *(undefined4 *)(&g_005ccf1c + g_005ccf58),0), iVar1 != 0)) &&
     (*(char *)(((int)this) + 0x24) != '\0')) {
    uVar3 = (undefined4)(*(undefined4 *)(((int)this) + 0x1c));
    uVar2 = (undefined4)(((cocos2d::CCString *)this)->getCString());
    iVar1 = func_0079e4bc(uVar3,uVar2);
    if (iVar1 != 0) {
      *(undefined1 *)(((int)this) + 0x24) = 0;
      (**(code **)(**(int **)(*(int *)(((int)this) + 0x18) + 0x128) + 0x90))();
    }
  }
  return;
}



BLMissionMirrorRoleItemPresenter::BLMissionMirrorRoleItemPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar3 = *(int *)(&g_005cd3d2 + g_005cd434);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x2c;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005cd3ea + g_005cd438,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  piVar2 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar1 = (undefined4)((**(code **)(*piVar2 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar1)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 0);
  *(int *)((int)this + 4*(8)) = 0;
  *(undefined1 *)(((int)this) + 9) = 0;
  return;
}

undefined4 BLMissionMirrorRoleItemPresenter::create()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x28))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}


void BLMissionMirrorRoleItemPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar2)->removeAllObservers((cocos2d::CCObject*)((int)this));
  return;
}


void BLMissionMirrorRoleItemPresenter::updateWithData(MirrorRoleItemData* p1)
{
  *(undefined4 *)(((int)this) + 0x1c) = (undefined4)(intptr_t)p1;
  BLMissionMirrorRoleItemPresenter::updateView();
  return;
}

// ===== 修复: 补回被误删的函数占位 (9) =====
void BLMissionMirrorRoleItemPresenter::onClick(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMissionMirrorRoleItemPresenter::onBuyRoleClick(cocos2d::CCObject* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

undefined8 BLMissionMirrorRoleItemPresenter::onShowBuyYi()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}


void BLMissionMirrorRoleItemPresenter::onEnter()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMissionMirrorRoleItemPresenter::updateView()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMissionMirrorRoleItemPresenter::onBuyYiComplete(cocos2d::CCObject* p1)
{
  int iVar1;
  bool bVar2;
  int iStack_14;
  
  iStack_14 = (undefined4)(intptr_t)p1;
  if (((int)(intptr_t)p1 != 0) &&
     (iVar1 = func_0079e55c(p1,*(undefined4 *)(&g_005cd796 + g_005cd7ec),
                              *(undefined4 *)(&g_005cd798 + g_005cd7e8),0), iVar1 != 0)) {
    (**(code **)(**(int **)(((int)this) + 0x20) + 0x18))(&iStack_14);
    bVar2 = false;
    if (*(int *)(*(int *)(iVar1 + 0x14) + -0xc) == *(int *)(iStack_14 + -0xc)) {
      iVar1 = func_0079e60c();
      bVar2 = iVar1 == 0;
    }
    func_0079e2bc(&iStack_14);
    if (bVar2) {
      *(undefined1 *)(*(int *)(((int)this) + 0x1c) + 4) = 1;
      BLMissionMirrorRoleItemPresenter::updateView();
    }
  }
  return;
}

void BLMissionMirrorRoleItemPresenter::buyRole()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMissionMirrorRoleItemPresenter::onBuyDiamondComplete(cocos2d::CCObject* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
