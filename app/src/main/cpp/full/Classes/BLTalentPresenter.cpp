#include "BLTalentPresenter.h"
#include "CCDictionary.h"
#include "ItemData.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "CCNotificationCenter.h"
#include "CCObject.h"
#include "CCTouch.h"
#include "CCDirector.h"
#include "BLForwards.h"
#include "BLGameScene.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLListButton.h"
#include "BLTalentDownInfoPresenter.h"
#include "BLTalentDownInfoView.h"
#include "BLTalentLimitView.h"
#include "BLTalentUpInfoPresenter.h"
#include "BLTalentUpInfoView.h"
#include "BLTalentView.h"
#include "BackPackData.h"
#include "BackPackItemData.h"
#include "DataCacheManager.h"
#include "DataManager.h"
#include "TalentData.h"
#include "TalentDrawData.h"
#include "TalentUserData.h"
#include "TalentUserItemData.h"
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
extern "C" long long software_udf(...);

extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0069f844;
extern "C" unsigned long UNK_0069f85c;
extern "C" unsigned long UNK_0069f874;
extern "C" unsigned long UNK_0069f8cc;
extern "C" unsigned long UNK_0069f8ec;
extern "C" unsigned long UNK_0069f930;
extern "C" unsigned long UNK_0069f958;
extern "C" unsigned long UNK_0069f96c;
extern "C" unsigned long UNK_0069fa78;
extern "C" unsigned long UNK_0069fa8c;
extern "C" unsigned long UNK_0069fae0;
extern "C" unsigned long UNK_0069faf0;
extern "C" unsigned long UNK_0069fafe;
extern "C" unsigned long UNK_0069fb30;
extern "C" unsigned long UNK_0069fb64;
extern "C" unsigned long UNK_0069fbe8;
extern "C" unsigned long UNK_0069fc02;
extern "C" unsigned long UNK_0069fc1c;
extern "C" unsigned long UNK_0069fc7c;
extern "C" unsigned long UNK_0069fcb2;
extern "C" unsigned long UNK_0069fcb4;
extern "C" unsigned long UNK_0069fcce;
extern "C" unsigned long UNK_0069fcee;
extern "C" unsigned long UNK_0069fd22;
extern "C" unsigned long UNK_0069fd98;
extern "C" unsigned long UNK_0069fdb8;
extern "C" unsigned long UNK_0069fdd6;
extern "C" unsigned long UNK_0069fe30;
extern "C" unsigned long UNK_0069fe3e;
extern "C" unsigned long UNK_0069fe5a;
extern "C" unsigned long UNK_0069fe76;
extern "C" unsigned long UNK_0069fe88;
extern "C" unsigned long UNK_0069fea8;
extern "C" unsigned long UNK_0069fec4;
extern "C" unsigned long UNK_0069ffec;
extern "C" unsigned long UNK_006a002e;
extern "C" unsigned long UNK_006a0030;
extern "C" unsigned long UNK_006a00b0;
extern "C" unsigned long UNK_006a00ec;
extern "C" unsigned long UNK_006a010e;
extern "C" unsigned long UNK_006a0170;
extern "C" unsigned long UNK_006a0172;
extern "C" unsigned long UNK_006a0196;
extern "C" unsigned long UNK_006a01d8;
extern "C" unsigned long UNK_006a0244;
extern "C" unsigned long _UNK_0069f848;
extern "C" unsigned long _UNK_0069f860;
extern "C" unsigned long _UNK_0069f878;
extern "C" unsigned long _UNK_0069f91c;
extern "C" unsigned long _UNK_0069f920;
extern "C" unsigned long _UNK_0069f934;
extern "C" unsigned long _UNK_0069f95c;
extern "C" unsigned long _UNK_0069fa58;
extern "C" unsigned long _UNK_0069fa7c;
extern "C" unsigned long _UNK_0069fb90;
extern "C" unsigned long _UNK_0069fb94;
extern "C" unsigned long _UNK_0069fb98;
extern "C" unsigned long _UNK_0069fb9c;
extern "C" unsigned long _UNK_0069fba0;
extern "C" unsigned long _UNK_0069fba4;
extern "C" unsigned long _UNK_0069fba8;
extern "C" unsigned long _UNK_0069fbac;
extern "C" unsigned long _UNK_0069fc50;
extern "C" unsigned long _UNK_0069fc54;
extern "C" unsigned long _UNK_0069fc58;
extern "C" unsigned long _UNK_0069fc9c;
extern "C" unsigned long _UNK_0069fcd4;
extern "C" unsigned long _UNK_0069fcd8;
extern "C" unsigned long _UNK_0069fcdc;
extern "C" unsigned long _UNK_0069fd4c;
extern "C" unsigned long _UNK_0069fd50;
extern "C" unsigned long _UNK_0069fe10;
extern "C" unsigned long _UNK_0069fe14;
extern "C" unsigned long _UNK_0069fe18;
extern "C" unsigned long _UNK_0069fed8;
extern "C" unsigned long _UNK_0069fedc;
extern "C" unsigned long _UNK_0069fee0;
extern "C" unsigned long _UNK_0069fee4;
extern "C" unsigned long _UNK_0069fee8;
extern "C" unsigned long _UNK_0069feec;
extern "C" unsigned long _UNK_0069fef0;
extern "C" unsigned long _UNK_0069fef4;
extern "C" unsigned long _UNK_0069fef8;
extern "C" unsigned long _UNK_0069fefc;
extern "C" unsigned long _UNK_0069ff00;
extern "C" unsigned long _UNK_0069ff04;
extern "C" unsigned long _UNK_006a0084;
extern "C" unsigned long _UNK_006a0088;
extern "C" unsigned long _UNK_006a008c;
extern "C" unsigned long _UNK_006a00c4;
extern "C" unsigned long _UNK_006a01fc;
extern "C" unsigned long _UNK_006a0200;
extern "C" unsigned long _UNK_006a0204;
extern "C" unsigned long _UNK_006a0208;
extern "C" unsigned long _UNK_006a020c;
extern "C" unsigned long _UNK_006a0210;
extern "C" unsigned long _UNK_006a0248;
extern "C" unsigned long extraout_r1;
extern "C" unsigned long extraout_r1_00;
extern "C" unsigned long g_0069f844;
extern "C" unsigned long g_0069f848;
extern "C" unsigned long g_0069f85c;
extern "C" unsigned long g_0069f860;
extern "C" unsigned long g_0069f874;
extern "C" unsigned long g_0069f878;
extern "C" unsigned long g_0069f8cc;
extern "C" unsigned long g_0069f8ec;
extern "C" unsigned long g_0069f91c;
extern "C" unsigned long g_0069f920;
extern "C" unsigned long g_0069f930;
extern "C" unsigned long g_0069f934;
extern "C" unsigned long g_0069f958;
extern "C" unsigned long g_0069f95c;
extern "C" unsigned long g_0069f96c;
extern "C" unsigned long g_0069fa58;
extern "C" unsigned long g_0069fa78;
extern "C" unsigned long g_0069fa7c;
extern "C" unsigned long g_0069fa8c;
extern "C" unsigned long g_0069fae0;
extern "C" unsigned long g_0069faf0;
extern "C" unsigned long g_0069fafe;
extern "C" unsigned long g_0069fb30;
extern "C" unsigned long g_0069fb64;
extern "C" unsigned long g_0069fb90;
extern "C" unsigned long g_0069fb94;
extern "C" unsigned long g_0069fb98;
extern "C" unsigned long g_0069fb9c;
extern "C" unsigned long g_0069fba0;
extern "C" unsigned long g_0069fba4;
extern "C" unsigned long g_0069fba8;
extern "C" unsigned long g_0069fbac;
extern "C" unsigned long g_0069fbe8;
extern "C" unsigned long g_0069fc02;
extern "C" unsigned long g_0069fc1c;
extern "C" unsigned long g_0069fc50;
extern "C" unsigned long g_0069fc54;
extern "C" unsigned long g_0069fc58;
extern "C" unsigned long g_0069fc7c;
extern "C" unsigned long g_0069fc9c;
extern "C" unsigned long g_0069fcb2;
extern "C" unsigned long g_0069fcb4;
extern "C" unsigned long g_0069fcce;
extern "C" unsigned long g_0069fcd4;
extern "C" unsigned long g_0069fcd8;
extern "C" unsigned long g_0069fcdc;
extern "C" unsigned long g_0069fcee;
extern "C" unsigned long g_0069fd22;
extern "C" unsigned long g_0069fd4c;
extern "C" unsigned long g_0069fd50;
extern "C" unsigned long g_0069fd98;
extern "C" unsigned long g_0069fdb8;
extern "C" unsigned long g_0069fdd6;
extern "C" unsigned long g_0069fe10;
extern "C" unsigned long g_0069fe14;
extern "C" unsigned long g_0069fe18;
extern "C" unsigned long g_0069fe30;
extern "C" unsigned long g_0069fe3e;
extern "C" unsigned long g_0069fe5a;
extern "C" unsigned long g_0069fe76;
extern "C" unsigned long g_0069fe88;
extern "C" unsigned long g_0069fea8;
extern "C" unsigned long g_0069fec4;
extern "C" unsigned long g_0069fed8;
extern "C" unsigned long g_0069fedc;
extern "C" unsigned long g_0069fee0;
extern "C" unsigned long g_0069fee4;
extern "C" unsigned long g_0069fee8;
extern "C" unsigned long g_0069feec;
extern "C" unsigned long g_0069fef0;
extern "C" unsigned long g_0069fef4;
extern "C" unsigned long g_0069fef8;
extern "C" unsigned long g_0069fefc;
extern "C" unsigned long g_0069ff00;
extern "C" unsigned long g_0069ff04;
extern "C" unsigned long g_0069ffec;
extern "C" unsigned long g_006a002e;
extern "C" unsigned long g_006a0030;
extern "C" unsigned long g_006a0084;
extern "C" unsigned long g_006a0088;
extern "C" unsigned long g_006a008c;
extern "C" unsigned long g_006a00b0;
extern "C" unsigned long g_006a00c4;
extern "C" unsigned long g_006a00ec;
extern "C" unsigned long g_006a010e;
extern "C" unsigned long g_006a0170;
extern "C" unsigned long g_006a0172;
extern "C" unsigned long g_006a0196;
extern "C" unsigned long g_006a01d8;
extern "C" unsigned long g_006a01fc;
extern "C" unsigned long g_006a0200;
extern "C" unsigned long g_006a0204;
extern "C" unsigned long g_006a0208;
extern "C" unsigned long g_006a020c;
extern "C" unsigned long g_006a0210;
extern "C" unsigned long g_006a0244;
extern "C" unsigned long g_006a0248;
bool BLTalentPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLTalentPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLTalentPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

BLTalentPresenter::~BLTalentPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0069f8cc + g_0069f91c);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x38;
  *(int *)((int)this + 4*(6)) = iVar2 + 0x68;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0069f8ec + g_0069f920,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

undefined8 BLTalentPresenter::updateActiveStatus()
{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  
  uVar6 = (undefined4)(*(undefined4 *)(*(int *)(((int)this) + 0x20) * 4 + *(int *)(&g_0069f96c + g_0069fa58)));
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x100))());
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  piVar1 = (int *)(**(code **)(*piVar1 + 0x28))();
  uVar3 = (undefined4)((**(code **)(*piVar1 + 0x168))());
  uVar4 = (undefined4)(((long long)::operator new((size_t)(0x10))));
  0 /* ctorZero */;
  ((TalentUserItemData *)uVar4)->initWith(uVar6);
  uVar5 = (undefined4)(((TalentUserData *)uVar3)->isTalentOpen((TalentUserItemData*)uVar4));
  ((BLTalentView *)*(undefined4 *)(((int)this) + 0x1c))->getUpInfoView();
  uVar4 = (undefined4)(((BLTalentUpInfoView *)this)->getPresenter());
  ((BLTalentUpInfoPresenter *)uVar4)->initWithID(uVar6);
  ((BLTalentView *)*(undefined4 *)(((int)this) + 0x1c))->getDownInfoView();
  uVar4 = (undefined4)(((BLTalentDownInfoView *)this)->getPresenter());
  ((BLTalentDownInfoPresenter *)uVar4)->initWithId(uVar6);
  piVar1 = (int *)((BLTalentView *)*(undefined4 *)(((int)this) + 0x1c))->getLabVipTips();
  uVar7 = (undefined4)((uVar2 ^ 1) & 0xff);
  (**(code **)(*piVar1 + 0x90))(piVar1,uVar7);
  piVar1 = (int *)((BLTalentView *)*(undefined4 *)(((int)this) + 0x1c))->getBtnVip();
  (**(code **)(*piVar1 + 0x90))(piVar1,uVar7);
  piVar1 = (int *)((BLTalentView *)*(undefined4 *)(((int)this) + 0x1c))->getLabActiveFree();
  uVar7 = (undefined4)(0);
  if (uVar2 != 0) {
    uVar7 = (undefined4)((uVar5 ^ 1) & 0xff);
  }
  (**(code **)(*piVar1 + 0x90))(piVar1,uVar7);
  piVar1 = (int *)((BLTalentView *)*(undefined4 *)(((int)this) + 0x1c))->getTextActive();
  uVar7 = (undefined4)(0);
  if (uVar5 == 0) {
    uVar7 = (undefined4)((uVar2 ^ 1) & 0xff);
  }
  (**(code **)(*piVar1 + 0x90))(piVar1,uVar7);
  piVar1 = (int *)((BLTalentView *)*(undefined4 *)(((int)this) + 0x1c))->getLabActiveAlready();
  (**(code **)(*piVar1 + 0x90))(piVar1,uVar5);
  ((BLTalentView *)*(undefined4 *)(((int)this) + 0x1c))->getLimitView();
  ((BLTalentLimitView *)this)->refresh();
  return ghidra_CONCAT44(uVar3,((int)this));
}

void BLTalentPresenter::onClose(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(0xbe);
  return;
}

void BLTalentPresenter::onVIP(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar1)->postNotification((char const*)&g_0069fa78 + g_0069fa7c);
  return;
}




void BLTalentPresenter::onDeActiveSure(cocos2d::CCObject* p1)
{
  undefined4 p4 = 0;

  int iVar1;
  undefined4 uVar2;
  
  if (((p1 != 0) &&
      (iVar1 = func_0079e55c(p1,*(undefined4 *)(&g_0069fcb2 + g_0069fcd8),
                               *(undefined4 *)(&g_0069fcb4 + g_0069fcd4),0,p4), iVar1 != 0
      )) && (*(int *)(iVar1 + 0x14) != 0)) {
    uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
    ((cocos2d::CCNotificationCenter *)uVar2)->postNotification((char const*)&g_0069fcce + g_0069fcdc);
  }
  return;
}

BLTalentPresenter::BLTalentPresenter()
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
  iVar3 = *(int *)(&g_0069fcee + g_0069fd4c);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x38;
  *(int *)((int)this + 4*(6)) = iVar3 + 0x68;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 1);
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0069fd22 + g_0069fd50,&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

undefined4 BLTalentPresenter::create()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x24))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

undefined4 BLTalentPresenter::initWithView(BLTalentView* p1)
{
  int *piVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(((int)this) + 0x1c) = (undefined4)(intptr_t)p1;
  *(undefined4 *)(((int)this) + 0x20) = 0;
  piVar1 = (int *)((BLTalentView *)p1)->getBtnClose();
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)(&g_0069fd98 + g_0069fe10),0,0x20);
  piVar1 = (int *)((BLTalentView *)*(undefined4 *)(((int)this) + 0x1c))->getBtnVip();
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)(&g_0069fdb8 + g_0069fe14),0,0x20);
  piVar1 = (int *)((BLTalentView *)*(undefined4 *)(((int)this) + 0x1c))->getBtnActive();
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)(&g_0069fdd6 + g_0069fe18),0,0x20);
  piVar1 = (int *)((BLTalentView *)*(undefined4 *)(((int)this) + 0x1c))->getListBtn();
  (**(code **)(*piVar1 + 0x24c))(piVar1,((int)this) + 0x18);
  uVar2 = (undefined4)(((BLTalentView *)*(undefined4 *)(((int)this) + 0x1c))->getListBtn());
  ((BLListButton *)uVar2)->setSelectIndex(*(undefined4 *)(((int)this) + 0x20));
  BLTalentPresenter::updateActiveStatus();
  return 1;
}


void BLTalentPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar2)->removeAllObservers((cocos2d::CCObject*)((int)this));
  ((UIManager *)this)->shareManager();
  ((UIManager *)this)->popUnEnableScrollView();
  return;
}

void BLTalentPresenter::tick(float p1)
{
  return;
}

void BLTalentPresenter::checkDebrisEnough()
{
  ((BLTalentView *)*(undefined4 *)(((int)this) + 0x1c))->getUpInfoView();
  ((BLTalentUpInfoView *)this)->getPresenter();
  ((BLTalentUpInfoPresenter *)this)->checkIsEnough();
  return;
}

// ===== 修复: 补回被误删的函数占位 (9) =====
void BLTalentPresenter::onActive(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLTalentPresenter::onTalentActive()
{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  piVar1 = (int *)(**(code **)(*piVar1 + 0x28))();
  piVar1 = (int *)(**(code **)(*piVar1 + 0x168))();
  iVar2 = (undefined4)(intptr_t)((**(code **)(*piVar1 + 0x18))());
  if (iVar2 == 1) {
    iVar2 = (undefined4)(intptr_t)(((TalentUserData *)piVar1)->getActiveTalentId(0x69));
    if (iVar2 == 0) {
code_r0x0069fc06:
      uVar3 = (undefined4)(((long long)::operator new((size_t)(0x10))));
      0 /* ctorZero */;
      ((TalentUserItemData *)uVar3)->initWith(*(undefined4 *)
                        (*(int *)(((int)this) + 0x20) * 4 + *(int *)((unsigned char *)((char *)&g_0069fc1c + (intptr_t)(g_0069fc58)))));
      iVar2 = (undefined4)(intptr_t)(((TalentUserData *)piVar1)->isTalentOpen((TalentUserItemData*)uVar3));
      if (iVar2 == 0) {
        ((TalentUserData *)piVar1)->updateOpen((TalentUserItemData*)uVar3, 1);
      }
      BLTalentPresenter::updateActiveStatus();
      return;
    }
    uVar3 = (undefined4)(((Toast *)this)->sharedToast());
    puVar4 = (unsigned char *)((char *)&g_0069fbe8 + (intptr_t)(g_0069fc50));
  }
  else {
    if ((iVar2 != 2) || (iVar2 = ((TalentUserData *)piVar1)->getActiveTalentId(0x6a), iVar2 == 0))
    goto code_r0x0069fc06;
    uVar3 = (undefined4)(((Toast *)this)->sharedToast());
    puVar4 = (unsigned char *)((char *)&g_0069fc02 + (intptr_t)(g_0069fc54));
  }
  ((Toast *)uVar3)->showToast((char const*)puVar4);
  return;
}

void BLTalentPresenter::onTalentDeActive()
{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  piVar1 = (int *)(**(code **)(*(int *)(piVar1) + (0x28)))();
  uVar2 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x168)))());
  if (*(int *)(*(int *)(((int)this) + 0x20) * 4 + *(int *)((unsigned char *)((char *)&g_0069fc7c + (intptr_t)(g_0069fc9c)))) != 0) {
    uVar3 = (undefined4)(((TalentUserData *)this)->getItemDataById((int)0));
    ((TalentUserData *)(uVar2))->updateOpen((TalentUserItemData*)uVar3, 0);
  }
  ((BLTalentPresenter *)(((int)this)))->updateActiveStatus();
  return;
}

void BLTalentPresenter::onEnter()
{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = (undefined4)(intptr_t)(g_0069fed8);
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)(((int)this)))->addObserver((cocos2d::CCObject*)*(undefined4 *)((unsigned char *)((char *)&g_0069fe30 + (intptr_t)(g_0069fedc)) + iVar1), 0, (char const*)(unsigned char *)((char *)&g_0069fe3e + (intptr_t)(g_0069fee0)), 0);
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)(((int)this)))->addObserver((cocos2d::CCObject*)*(undefined4 *)((unsigned char *)((char *)&g_0069fe30 + (intptr_t)(g_0069fee4)) + iVar1), 0, (char const*)(unsigned char *)((char *)&g_0069fe5a + (intptr_t)(g_0069fee8)), 0);
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  uVar3 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_0069fe30 + (intptr_t)(g_0069feec)) + iVar1));
  ((cocos2d::CCNotificationCenter *)(((int)this)))->addObserver((cocos2d::CCObject*)uVar3, 0, (char const*)(unsigned char *)((char *)&g_0069fe76 + (intptr_t)(g_0069fef0)), 0);
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)(((int)this)))->addObserver((cocos2d::CCObject*)uVar3, 0, (char const*)(unsigned char *)((char *)&g_0069fe88 + (intptr_t)(g_0069fef4)), 0);
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)(((int)this)))->addObserver((cocos2d::CCObject*)*(undefined4 *)((unsigned char *)((char *)&g_0069fe30 + (intptr_t)(g_0069fef8)) + iVar1), 0, (char const*)(unsigned char *)((char *)&g_0069fea8 + (intptr_t)(g_0069fefc)), 0);
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)(((int)this)))->addObserver((cocos2d::CCObject*)*(undefined4 *)((unsigned char *)((char *)&g_0069fe30 + (intptr_t)(g_0069ff00)) + iVar1), 0, (char const*)(unsigned char *)((char *)&g_0069fec4 + (intptr_t)(g_0069ff04)), 0);
  ((UIManager *)this)->shareManager();
  ((UIManager *)this)->pushCurScrollViewUnEnable();
  return;
}

void BLTalentPresenter::removeItem(int p1, int p2)
{
  undefined4 uVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  code *pcVar6;
  
  uVar1 = (undefined4)(((DataCacheManager *)this)->shareManager());
  uVar1 = ((void)(((DataCacheManager *)(uVar1))->getItemDataByID(p1)),(undefined4)0);
  piVar2 = (int *)((DataManager *)this)->shareDataManager();
  piVar2 = (int *)(**(code **)(*(int *)(piVar2) + (0x28)))();
  uVar3 = (undefined4)((**(code **)(*(int *)(piVar2) + (0x50)))());
  piVar2 = (int *)((BackPackData *)(uVar3))->getItemData((ItemData*)uVar1);
  piVar4 = (int *)func_0079e2fc(0x30);
  0 /* ctorZero */;
  iVar5 = (undefined4)(intptr_t)(((BackPackItemData *)(piVar4))->init());
  if (iVar5 != 0) {
    ((cocos2d::CCObject *)(piVar4))->autorelease();
    pcVar6 = *(code **)(*piVar4 + 0x1c);
    uVar1 = (undefined4)((**(code **)(*(int *)(piVar2) + (0x18)))(piVar2));
    (*pcVar6)(piVar4,uVar1);
    (**(code **)(*(int *)(piVar4) + (0x24)))(piVar4,p1);
    (**(code **)(*(int *)(piVar4) + (0x2c)))(piVar4,p2);
    piVar2 = (int *)((DataManager *)this)->shareDataManager();
    piVar2 = (int *)(**(code **)(*(int *)(piVar2) + (0x28)))();
    uVar1 = (undefined4)((**(code **)(*(int *)(piVar2) + (0x50)))());
    ((BackPackData *)(uVar1))->removeItem((BackPackItemData*)piVar4);
    return;
  }
  (**(code **)(*(int *)(piVar4) + (8)))(piVar4);
                    /* WARNING: Does not return */
  pcVar6 = (code *)software_udf(0xff,0x69ffde);
  (*pcVar6)();
}

void BLTalentPresenter::castDebris()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLTalentPresenter::upgraceTalentSuccess()
{
  undefined4 p4 = 0;

  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  piVar1 = (int *)(**(code **)(*(int *)(piVar1) + (0x28)))();
  uVar2 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x168)))());
  iVar4 = (undefined4)(intptr_t)(*(int *)(((int)this) + 0x20) * 4);
  uVar3 = ((TalentUserData *)this)->getItemDataById(uVar2);
  ((TalentUserData *)uVar2)->upgraceLv((TalentUserItemData*)uVar3);
  return;
}

void BLTalentPresenter::onTalentUpgrace()
{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [4];
  undefined4 auStack_1c [2];
  
  iVar1 = (undefined4)((void)(BLTalentPresenter::checkDebrisEnough()),(intptr_t)0);
  if (iVar1 == 0) {
    uVar2 = (undefined4)(((Toast *)this)->sharedToast());
    uVar3 = (undefined4)(((BLLanguage *)this)->share());
    func_0079e45c(auStack_20,(unsigned char *)((char *)&g_006a00ec + (intptr_t)(g_006a01fc)),auStack_24);
    ((BLLanguage *)(uVar3))->getString((std::string)(char*)auStack_20);
    ((Toast *)(uVar2))->showToast((char const*)auStack_1c[0]);
  }
  else {
    uVar3 = (undefined4)(*(undefined4 *)(*(int *)(((int)this) + 0x20) * 4 + *(int *)((unsigned char *)((char *)&g_006a010e + (intptr_t)(g_006a0200)))));
    piVar4 = (int *)((DataManager *)this)->shareDataManager();
    piVar4 = (int *)(**(code **)(*(int *)(piVar4) + (0x28)))();
    uVar2 = (undefined4)((**(code **)(*(int *)(piVar4) + (0x168)))());
    piVar4 = (int *)((TalentUserData *)(uVar2))->getItemDataById(uVar3);
    if (piVar4 == (int *)0x0) {
      piVar4 = (int *)((DataManager *)this)->shareDataManager();
      iVar1 = 1;
      piVar4 = (int *)(**(code **)(*(int *)(piVar4) + (0x28)))();
      uVar2 = (undefined4)((**(code **)(*(int *)(piVar4) + (0x168)))());
      ((TalentUserData *)(uVar2))->addTalent(uVar3);
    }
    else {
      iVar1 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar4) + (8)))());
    }
    piVar4 = (int *)((DataCacheManager *)this)->shareManager();
    uVar2 = (undefined4)((**(code **)(*(int *)(piVar4) + (0x78)))());
    iVar5 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)(uVar2))->objectForKey(uVar3));
    if (iVar5 != 0) {
      func_0079e55c(iVar5,*(undefined4 *)((unsigned char *)((char *)&g_006a0170 + (intptr_t)(g_006a0204))),
                      *(undefined4 *)((unsigned char *)((char *)&g_006a0172 + (intptr_t)(g_006a0208))),0);
    }
    iVar5 = (undefined4)(intptr_t)(((TalentData *)this)->getMaxLv());
    if (iVar1 < iVar5) {
      ((BLTalentPresenter *)(((int)this)))->castDebris();
      ((BLTalentPresenter *)(((int)this)))->upgraceTalentSuccess();
      ((BLTalentPresenter *)(((int)this)))->updateActiveStatus();
      uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
      ((cocos2d::CCNotificationCenter *)(uVar2))->postNotification((char const*)(unsigned char *)((char *)&g_006a01d8 + (intptr_t)(g_006a0210)));
      goto code_r0x006a01da;
    }
    uVar2 = (undefined4)(((Toast *)this)->sharedToast());
    uVar3 = (undefined4)(((BLLanguage *)this)->share());
    func_0079e45c(auStack_20,(unsigned char *)((char *)&g_006a0196 + (intptr_t)(g_006a020c)),auStack_24);
    ((BLLanguage *)(uVar3))->getString((std::string)(char*)auStack_20);
    ((Toast *)(uVar2))->showToast((char const*)auStack_1c[0]);
  }
  func_0079e2bc(auStack_1c);
  func_0079e2bc(auStack_20);
code_r0x006a01da:
  ((BLGameScene *)this)->shareGameScene();
  ((BLGameScene *)this)->closeShieldLayer();
  return;
}

void BLTalentPresenter::listButtonClickAtIndex(BLListButton* p1, int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((sir::singleton<TalentDrawData, 0> *)this)->instance());
  ((TalentDrawData *)uVar1)->GetDataFromNet(p2, 0);
  if (*(int *)(((int)this) + 0x20) != p2) {
    *(int *)(((int)this) + 0x20) = p2;
    BLTalentPresenter::updateActiveStatus();
  }
  return;
}
