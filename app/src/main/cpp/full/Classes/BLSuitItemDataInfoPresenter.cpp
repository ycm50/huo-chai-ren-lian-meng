#include "BLSuitItemDataInfoPresenter.h"
#include "CCAction.h"
#include "CCNode.h"
#include "CCGeometry.h"
#include "CCActionInterval.h"
#include "CCLabelTTF.h"
#include "CCNotificationCenter.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "SuitEquipEquipItemData.h"
#include "CCObject.h"
#include "CCTouch.h"
#include "CCLayer.h"
#include "CCDirector.h"
#include "BackPackItemData.h"
#include "BLLeakUtils.h"
#include "BLOtherItemDataInfoDownPresenter.h"
#include "BLOtherItemDataInfoDownView.h"
#include "BLSuitItemDataInfoView.h"
#include "BackPackData.h"
#include "DataCacheManager.h"
#include "DataManager.h"
#include "SuitEquipData.h"
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
extern "C" long long func_0042f3fc(...);
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2ec(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4bc(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long func_0079e5ec(...);
extern "C" long long func_0079e5fc(...);
extern "C" long long func_0079e69c(...);
extern "C" long long func_0079e874(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_00628838;
extern "C" unsigned long UNK_00628852;
extern "C" unsigned long UNK_00628898;
extern "C" unsigned long UNK_006288c0;
extern "C" unsigned long UNK_006288f4;
extern "C" unsigned long UNK_00628938;
extern "C" unsigned long UNK_00628952;
extern "C" unsigned long UNK_00628986;
extern "C" unsigned long UNK_00628a02;
extern "C" unsigned long UNK_00628ae8;
extern "C" unsigned long UNK_00628b14;
extern "C" unsigned long UNK_00628cbc;
extern "C" unsigned long UNK_00628cd8;
extern "C" unsigned long UNK_00628cf4;
extern "C" unsigned long UNK_00628d10;
extern "C" unsigned long UNK_00628d2c;
extern "C" unsigned long UNK_00628d48;
extern "C" unsigned long UNK_00628d64;
extern "C" unsigned long UNK_00628d7e;
extern "C" unsigned long UNK_00628dba;
extern "C" unsigned long UNK_00628e06;
extern "C" unsigned long UNK_00628e3a;
extern "C" unsigned long UNK_00628ec2;
extern "C" unsigned long UNK_0062916e;
extern "C" unsigned long UNK_006291f4;
extern "C" unsigned long UNK_00629264;
extern "C" unsigned long UNK_00629280;
extern "C" unsigned long UNK_0062929c;
extern "C" unsigned long UNK_006292b8;
extern "C" unsigned long UNK_006292d4;
extern "C" unsigned long UNK_006292f0;
extern "C" unsigned long UNK_0062930c;
extern "C" unsigned long UNK_00629320;
extern "C" unsigned long UNK_00629362;
extern "C" unsigned long UNK_006293ae;
extern "C" unsigned long UNK_006293c4;
extern "C" unsigned long UNK_0062945a;
extern "C" unsigned long _UNK_00628884;
extern "C" unsigned long _UNK_00628888;
extern "C" unsigned long _UNK_0062889c;
extern "C" unsigned long _UNK_006288c4;
extern "C" unsigned long _UNK_0062893c;
extern "C" unsigned long _UNK_00628940;
extern "C" unsigned long _UNK_006289b0;
extern "C" unsigned long _UNK_006289b4;
extern "C" unsigned long _UNK_00628aa8;
extern "C" unsigned long _UNK_00628aac;
extern "C" unsigned long _UNK_00628ab0;
extern "C" unsigned long _UNK_00628ab4;
extern "C" unsigned long _UNK_00628ab8;
extern "C" unsigned long _UNK_00628abc;
extern "C" unsigned long _UNK_00628b1c;
extern "C" unsigned long _UNK_00628b20;
extern "C" unsigned long _UNK_0062906c;
extern "C" unsigned long _UNK_00629070;
extern "C" unsigned long _UNK_00629074;
extern "C" unsigned long _UNK_00629078;
extern "C" unsigned long _UNK_0062907c;
extern "C" unsigned long _UNK_00629080;
extern "C" unsigned long _UNK_00629084;
extern "C" unsigned long _UNK_00629088;
extern "C" unsigned long _UNK_0062908c;
extern "C" unsigned long _UNK_00629090;
extern "C" unsigned long _UNK_00629094;
extern "C" unsigned long _UNK_00629098;
extern "C" unsigned long _UNK_0062909c;
extern "C" unsigned long _UNK_006290a0;
extern "C" unsigned long _UNK_006290a4;
extern "C" unsigned long _UNK_006290a8;
extern "C" unsigned long _UNK_006290ac;
extern "C" unsigned long _UNK_00629504;
extern "C" unsigned long _UNK_00629508;
extern "C" unsigned long _UNK_0062950c;
extern "C" unsigned long _UNK_00629510;
extern "C" unsigned long _UNK_00629514;
extern "C" unsigned long _UNK_00629518;
extern "C" unsigned long _UNK_0062951c;
extern "C" unsigned long _UNK_00629520;
extern "C" unsigned long _UNK_00629524;
extern "C" unsigned long _UNK_00629528;
extern "C" unsigned long _UNK_0062952c;
extern "C" unsigned long _UNK_00629530;
extern "C" unsigned long _UNK_00629534;
extern "C" unsigned long _UNK_00629538;
extern "C" unsigned long g_00628838;
extern "C" unsigned long g_00628852;
extern "C" unsigned long g_00628884;
extern "C" unsigned long g_00628888;
extern "C" unsigned long g_00628898;
extern "C" unsigned long g_0062889c;
extern "C" unsigned long g_006288c0;
extern "C" unsigned long g_006288c4;
extern "C" unsigned long g_006288f4;
extern "C" unsigned long g_00628938;
extern "C" unsigned long g_0062893c;
extern "C" unsigned long g_00628940;
extern "C" unsigned long g_00628952;
extern "C" unsigned long g_00628986;
extern "C" unsigned long g_006289b0;
extern "C" unsigned long g_006289b4;
extern "C" unsigned long g_00628a02;
extern "C" unsigned long g_00628aa8;
extern "C" unsigned long g_00628aac;
extern "C" unsigned long g_00628ab0;
extern "C" unsigned long g_00628ab4;
extern "C" unsigned long g_00628ab8;
extern "C" unsigned long g_00628abc;
extern "C" unsigned long g_00628ae8;
extern "C" unsigned long g_00628b14;
extern "C" unsigned long g_00628b1c;
extern "C" unsigned long g_00628b20;
extern "C" unsigned long g_00628cbc;
extern "C" unsigned long g_00628cd8;
extern "C" unsigned long g_00628cf4;
extern "C" unsigned long g_00628d10;
extern "C" unsigned long g_00628d2c;
extern "C" unsigned long g_00628d48;
extern "C" unsigned long g_00628d64;
extern "C" unsigned long g_00628d7e;
extern "C" unsigned long g_00628dba;
extern "C" unsigned long g_00628e06;
extern "C" unsigned long g_00628e3a;
extern "C" unsigned long g_00628ec2;
extern "C" unsigned long g_0062906c;
extern "C" unsigned long g_00629070;
extern "C" unsigned long g_00629074;
extern "C" unsigned long g_00629078;
extern "C" unsigned long g_0062907c;
extern "C" unsigned long g_00629080;
extern "C" unsigned long g_00629084;
extern "C" unsigned long g_00629088;
extern "C" unsigned long g_0062908c;
extern "C" unsigned long g_00629090;
extern "C" unsigned long g_00629094;
extern "C" unsigned long g_00629098;
extern "C" unsigned long g_0062909c;
extern "C" unsigned long g_006290a0;
extern "C" unsigned long g_006290a4;
extern "C" unsigned long g_006290a8;
extern "C" unsigned long g_006290ac;
extern "C" unsigned long g_0062916e;
extern "C" unsigned long g_006291f4;
extern "C" unsigned long g_00629264;
extern "C" unsigned long g_00629280;
extern "C" unsigned long g_0062929c;
extern "C" unsigned long g_006292b8;
extern "C" unsigned long g_006292d4;
extern "C" unsigned long g_006292f0;
extern "C" unsigned long g_0062930c;
extern "C" unsigned long g_00629320;
extern "C" unsigned long g_00629362;
extern "C" unsigned long g_006293ae;
extern "C" unsigned long g_006293c4;
extern "C" unsigned long g_0062945a;
extern "C" unsigned long g_00629504;
extern "C" unsigned long g_00629508;
extern "C" unsigned long g_0062950c;
extern "C" unsigned long g_00629510;
extern "C" unsigned long g_00629514;
extern "C" unsigned long g_00629518;
extern "C" unsigned long g_0062951c;
extern "C" unsigned long g_00629520;
extern "C" unsigned long g_00629524;
extern "C" unsigned long g_00629528;
extern "C" unsigned long g_0062952c;
extern "C" unsigned long g_00629530;
extern "C" unsigned long g_00629534;
extern "C" unsigned long g_00629538;
bool BLSuitItemDataInfoPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLSuitItemDataInfoPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLSuitItemDataInfoPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLSuitItemDataInfoPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLSuitItemDataInfoPresenter::tick(float p1)
{
  return;
}

BLSuitItemDataInfoPresenter::~BLSuitItemDataInfoPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_00628838 + g_00628884);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x3c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00628852 + g_00628888,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLSuitItemDataInfoPresenter::onClose(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(0x20);
  return;
}


BLSuitItemDataInfoPresenter::BLSuitItemDataInfoPresenter()
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
  iVar3 = *(int *)(&g_00628952 + g_006289b0);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x3c;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 0);
  *(int *)((int)this + 4*(7)) = 0;
  *(int *)((int)this + 4*(8)) = 0;
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00628986 + g_006289b4,&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

undefined4 BLSuitItemDataInfoPresenter::create(BLSuitItemDataInfoView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x24))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}


void BLSuitItemDataInfoPresenter::onEnter()
{
  return;
}

// ===== 修复: 补回被误删的函数占位 (5) =====
void BLSuitItemDataInfoPresenter::onUnEquip(cocos2d::CCObject* p1, unsigned int p2)
{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uStack_14;
  
  uStack_14 = (undefined4)(p1);
  if (*(int **)(((int)this) + 0x20) != (int *)0x0) {
    (**(code **)(**(int **)(((int)this) + 0x20) + 0x38))(&uStack_14);
    iVar1 = func_0079e4bc(&uStack_14,&g_006288f4 + g_0062893c);
    func_0079e2bc(&uStack_14);
    if (iVar1 != 0) {
      piVar2 = (int *)((DataManager *)this)->shareDataManager();
      piVar2 = (int *)(**(code **)(*piVar2 + 0x28))();
      uVar3 = (undefined4)((**(code **)(*piVar2 + 0x50))());
      ((BackPackData *)uVar3)->unEquip((BackPackItemData*)*(undefined4 *)(((int)this) + 0x20));
    }
  }
  uVar3 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar3)->removeUIByID(0x20);
  uVar3 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar3)->postNotification((char const*)&g_00628938 + g_00628940);
  return;
}

void BLSuitItemDataInfoPresenter::onExit()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;
  undefined4 p4 = 0;

  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_18 = (undefined4)(p3);
  uStack_14 = (undefined4)(p4);
  piVar2 = (int *)cocos2d::CCDirector::sharedDirector();
  iVar1 = (undefined4)(intptr_t)(g_00628aa8);
  uVar3 = (undefined4)((**(code **)(*(int *)(piVar2) + (0x40)))());
  ((cocos2d::CCTouchDispatcher *)(uVar3))->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  uVar3 = (undefined4)(((UIManager *)this)->shareManager());
  iVar4 = (undefined4)((void)(((UIManager *)(uVar3))->getUIObject(0x1f)),(intptr_t)0);
  iVar5 = 0;
  iStack_20 = (undefined4)(intptr_t)((int *)((int)this));
  uStack_1c = (undefined4)(p2);
  if (iVar4 != 0) {
    iStack_20 = (undefined4)(intptr_t)(*(int *)((unsigned char *)((char *)&g_00628a02 + (intptr_t)(g_00628aac)) + iVar1));
    uStack_1c = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_00628a02 + (intptr_t)(g_00628ab0)) + iVar1));
    iVar5 = (undefined4)(intptr_t)(func_0079e55c(iVar4,iStack_20,uStack_1c,0));
  }
  uVar3 = (undefined4)(((UIManager *)this)->shareManager());
  iVar4 = (undefined4)((void)(((UIManager *)(uVar3))->getUIObject(0x1e)),(intptr_t)0);
  piVar2 = (int *)0x0;
  if (iVar4 != 0) {
    iStack_20 = (undefined4)(intptr_t)(*(int *)((unsigned char *)((char *)&g_00628a02 + (intptr_t)(g_00628aac)) + iVar1));
    uStack_1c = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_00628a02 + (intptr_t)(g_00628ab4)) + iVar1));
    piVar2 = (int *)func_0079e55c(iVar4,iStack_20,uStack_1c,0);
  }
  uVar3 = (undefined4)(((UIManager *)this)->shareManager());
  iVar6 = (undefined4)((void)(((UIManager *)(uVar3))->getUIObject(0xb5)),(intptr_t)0);
  iVar4 = 0;
  if (iVar6 != 0) {
    iStack_20 = (undefined4)(intptr_t)(*(int *)((unsigned char *)((char *)&g_00628a02 + (intptr_t)(g_00628aac)) + iVar1));
    uStack_1c = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_00628a02 + (intptr_t)(g_00628ab8)) + iVar1));
    iVar4 = (undefined4)(intptr_t)(func_0079e55c(iVar6,iStack_20,uStack_1c,0));
  }
  if (((iVar5 == 0) && (piVar2 != (int *)0x0)) && (iVar4 == 0)) {
    uVar3 = (undefined4)((**(code **)(*(int *)(piVar2) + (0x20)))(piVar2));
    piVar2 = (int *)(**(code **)(*(int *)(piVar2) + (0x20)))(piVar2);
    iVar5 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar2) + (0x50)))());
    0 /* ctorZero */;
    uVar7 = (undefined4)(cocos2d::CCMoveTo::create(g_00628abc, *(cocos2d::CCPoint const*)&uStack_18));
    ((cocos2d::CCNode *)(uVar3))->runAction((cocos2d::CCAction*)uVar7);
  }
  return;
}

void BLSuitItemDataInfoPresenter::initWithView(BLSuitItemDataInfoView* p1)
{
  int *piVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(((int)this) + 0x18) = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  piVar1 = (int *)((BLSuitItemDataInfoView *)(p1))->getBtnClose();
  (**(code **)(*(int *)(piVar1) + (0x254)))
            (piVar1,((int)this),*(undefined4 *)((unsigned char *)((char *)&g_00628ae8 + (intptr_t)(g_00628b1c))),0,0x20);
  uVar2 = (undefined4)(cocos2d::CCLayer::create());
  *(undefined4 *)(((int)this) + 0x1c) = uVar2;
  (**(code **)(**(int **)(((int)this) + 0x18) + 0xcc))(*(int **)(((int)this) + 0x18),uVar2,99);
  uVar2 = (undefined4)(((BLSuitItemDataInfoView *)(*(undefined4 *)(((int)this) + 0x18)))->getLabUnequip());
  ((cocos2d::CCLabelTTF *)(uVar2))->enableStroke(*(cocos2d::_ccColor3B const*)(unsigned char *)((char *)&g_00628b14 + (intptr_t)(g_00628b20)), 0x3f800000, 1);
  return;
}

void BLSuitItemDataInfoPresenter::initPackItemData(SuitEquipEquipItemData* p1, BackPackItemData* p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLSuitItemDataInfoPresenter::initWithItemData(SuitEquipEquipItemData* p1, int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
