#include "BLSuitRoleInfoPresenter.h"
#include "CCDictionary.h"
#include "CCArray.h"
#include "CCNotificationCenter.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "CCObject.h"
#include "CCTouch.h"
#include "CCDirector.h"
#include "BackPackItemData.h"
#include "BLSuitRoleInfoView.h"
#include "BLGameScene.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLRichText.h"
#include "BLRoleAttribute.h"
#include "BLSuitItemDataInfoPresenter.h"
#include "BLSuitItemDataInfoView.h"
#include "BackPackData.h"
#include "DataCacheManager.h"
#include "DataManager.h"
#include "EquipData.h"
#include "RichTextData.h"
#include "SuitEquipData.h"
#include "SuitEquipEquipData.h"
#include "SuitEquipEquipItemData.h"
#include "SuitEquipItemData.h"
#include "SuitEquipUserData.h"
#include "Toast.h"
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
extern "C" long long software_udf(...);

extern "C" long long func_00442068(...);
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long func_0079e5fc(...);
extern "C" long long func_0079e63c(...);
extern "C" long long func_0079e69c(...);
extern "C" long long func_0079e724(...);
extern "C" long long func_0079e734(...);
extern "C" long long func_0079e874(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0068e764;
extern "C" unsigned long UNK_0068e77c;
extern "C" unsigned long UNK_0068e794;
extern "C" unsigned long UNK_0068e818;
extern "C" unsigned long UNK_0068e836;
extern "C" unsigned long UNK_0068e888;
extern "C" unsigned long UNK_0068e8b0;
extern "C" unsigned long UNK_0068e90e;
extern "C" unsigned long UNK_0068e912;
extern "C" unsigned long UNK_0068e934;
extern "C" unsigned long UNK_0068e968;
extern "C" unsigned long UNK_0068e992;
extern "C" unsigned long UNK_0068e9f8;
extern "C" unsigned long UNK_0068ea06;
extern "C" unsigned long UNK_0068ea0a;
extern "C" unsigned long UNK_0068ea2c;
extern "C" unsigned long UNK_0068ea64;
extern "C" unsigned long UNK_0068eabe;
extern "C" unsigned long UNK_0068eace;
extern "C" unsigned long UNK_0068eaf6;
extern "C" unsigned long UNK_0068eb92;
extern "C" unsigned long UNK_0068eb94;
extern "C" unsigned long UNK_0068ebac;
extern "C" unsigned long UNK_0068ebae;
extern "C" unsigned long UNK_0068ebe4;
extern "C" unsigned long UNK_0068ed3a;
extern "C" unsigned long UNK_0068edaa;
extern "C" unsigned long UNK_0068edfc;
extern "C" unsigned long UNK_0068f074;
extern "C" unsigned long UNK_0068f374;
extern "C" unsigned long UNK_0068f498;
extern "C" unsigned long UNK_0068f4fc;
extern "C" unsigned long UNK_0068f676;
extern "C" unsigned long UNK_0068f6bc;
extern "C" unsigned long UNK_0068f70c;
extern "C" unsigned long UNK_0068f794;
extern "C" unsigned long UNK_0068f7ea;
extern "C" unsigned long UNK_0068fbe8;
extern "C" unsigned long UNK_0068fbee;
extern "C" unsigned long UNK_0068fe0c;
extern "C" unsigned long UNK_0069002e;
extern "C" unsigned long UNK_00690126;
extern "C" unsigned long UNK_00690142;
extern "C" unsigned long _UNK_0068e768;
extern "C" unsigned long _UNK_0068e780;
extern "C" unsigned long _UNK_0068e798;
extern "C" unsigned long _UNK_0068e874;
extern "C" unsigned long _UNK_0068e878;
extern "C" unsigned long _UNK_0068e88c;
extern "C" unsigned long _UNK_0068e8b4;
extern "C" unsigned long _UNK_0068e998;
extern "C" unsigned long _UNK_0068e99c;
extern "C" unsigned long _UNK_0068e9a0;
extern "C" unsigned long _UNK_0068e9a4;
extern "C" unsigned long _UNK_0068e9a8;
extern "C" unsigned long _UNK_0068ea8c;
extern "C" unsigned long _UNK_0068ea90;
extern "C" unsigned long _UNK_0068ea94;
extern "C" unsigned long _UNK_0068ea98;
extern "C" unsigned long _UNK_0068ea9c;
extern "C" unsigned long _UNK_0068eb2c;
extern "C" unsigned long _UNK_0068eb30;
extern "C" unsigned long _UNK_0068eb34;
extern "C" unsigned long _UNK_0068ebbc;
extern "C" unsigned long _UNK_0068ebc0;
extern "C" unsigned long _UNK_0068ebc4;
extern "C" unsigned long _UNK_0068ebc8;
extern "C" unsigned long _UNK_0068eccc;
extern "C" unsigned long _UNK_0068ecd0;
extern "C" unsigned long _UNK_0068ecd4;
extern "C" unsigned long _UNK_0068ecd8;
extern "C" unsigned long _UNK_0068ecdc;
extern "C" unsigned long _UNK_0068ece0;
extern "C" unsigned long _UNK_0068ece4;
extern "C" unsigned long _UNK_0068ece8;
extern "C" unsigned long _UNK_0068ed74;
extern "C" unsigned long _UNK_0068ede4;
extern "C" unsigned long _UNK_0068ef94;
extern "C" unsigned long _UNK_0068ef98;
extern "C" unsigned long _UNK_0068ef9c;
extern "C" unsigned long _UNK_0068efa0;
extern "C" unsigned long _UNK_0068efa4;
extern "C" unsigned long _UNK_0068efa8;
extern "C" unsigned long _UNK_0068efac;
extern "C" unsigned long _UNK_0068efb0;
extern "C" unsigned long _UNK_0068efb4;
extern "C" unsigned long _UNK_0068f350;
extern "C" unsigned long _UNK_0068f730;
extern "C" unsigned long _UNK_0068f734;
extern "C" unsigned long _UNK_0068f738;
extern "C" unsigned long _UNK_0068f73c;
extern "C" unsigned long _UNK_0068f740;
extern "C" unsigned long _UNK_0068f744;
extern "C" unsigned long _UNK_0068f748;
extern "C" unsigned long _UNK_0068f74c;
extern "C" unsigned long _UNK_0068f750;
extern "C" unsigned long _UNK_0068f754;
extern "C" unsigned long _UNK_0068f758;
extern "C" unsigned long _UNK_0068f75c;
extern "C" unsigned long _UNK_0068f760;
extern "C" unsigned long _UNK_0068fa78;
extern "C" unsigned long _UNK_0068fa7c;
extern "C" unsigned long _UNK_0068fa80;
extern "C" unsigned long _UNK_0068fa84;
extern "C" unsigned long _UNK_0068fa88;
extern "C" unsigned long _UNK_0068fa8c;
extern "C" unsigned long _UNK_0068fa90;
extern "C" unsigned long _UNK_0068fe54;
extern "C" unsigned long _UNK_0068fe58;
extern "C" unsigned long _UNK_0068fe5c;
extern "C" unsigned long _UNK_0068fe60;
extern "C" unsigned long _UNK_0068fe64;
extern "C" unsigned long _UNK_0068fe68;
extern "C" unsigned long _UNK_0068fe6c;
extern "C" unsigned long _UNK_00690240;
extern "C" unsigned long _UNK_00690244;
extern "C" unsigned long _UNK_00690248;
extern "C" unsigned long _UNK_0069024c;
extern "C" unsigned long _UNK_00690250;
extern "C" unsigned long _UNK_00690254;
extern "C" unsigned long _UNK_00690258;
extern "C" unsigned long _UNK_0069025c;
extern "C" unsigned long _UNK_00690260;
extern "C" unsigned long _UNK_00690264;
extern "C" unsigned long _UNK_00690268;
extern "C" unsigned long extraout_r1;
extern "C" unsigned long extraout_r3;
extern "C" unsigned long g_0068e764;
extern "C" unsigned long g_0068e768;
extern "C" unsigned long g_0068e77c;
extern "C" unsigned long g_0068e780;
extern "C" unsigned long g_0068e794;
extern "C" unsigned long g_0068e798;
extern "C" unsigned long g_0068e818;
extern "C" unsigned long g_0068e836;
extern "C" unsigned long g_0068e874;
extern "C" unsigned long g_0068e878;
extern "C" unsigned long g_0068e888;
extern "C" unsigned long g_0068e88c;
extern "C" unsigned long g_0068e8b0;
extern "C" unsigned long g_0068e8b4;
extern "C" unsigned long g_0068e90e;
extern "C" unsigned long g_0068e912;
extern "C" unsigned long g_0068e934;
extern "C" unsigned long g_0068e968;
extern "C" unsigned long g_0068e992;
extern "C" unsigned long g_0068e998;
extern "C" unsigned long g_0068e99c;
extern "C" unsigned long g_0068e9a0;
extern "C" unsigned long g_0068e9a4;
extern "C" unsigned long g_0068e9a8;
extern "C" unsigned long g_0068e9f8;
extern "C" unsigned long g_0068ea06;
extern "C" unsigned long g_0068ea0a;
extern "C" unsigned long g_0068ea2c;
extern "C" unsigned long g_0068ea64;
extern "C" unsigned long g_0068ea8c;
extern "C" unsigned long g_0068ea90;
extern "C" unsigned long g_0068ea94;
extern "C" unsigned long g_0068ea98;
extern "C" unsigned long g_0068ea9c;
extern "C" unsigned long g_0068eabe;
extern "C" unsigned long g_0068eace;
extern "C" unsigned long g_0068eaf6;
extern "C" unsigned long g_0068eb2c;
extern "C" unsigned long g_0068eb30;
extern "C" unsigned long g_0068eb34;
extern "C" unsigned long g_0068eb92;
extern "C" unsigned long g_0068eb94;
extern "C" unsigned long g_0068ebac;
extern "C" unsigned long g_0068ebae;
extern "C" unsigned long g_0068ebbc;
extern "C" unsigned long g_0068ebc0;
extern "C" unsigned long g_0068ebc4;
extern "C" unsigned long g_0068ebc8;
extern "C" unsigned long g_0068ebe4;
extern "C" unsigned long g_0068eccc;
extern "C" unsigned long g_0068ecd0;
extern "C" unsigned long g_0068ecd4;
extern "C" unsigned long g_0068ecd8;
extern "C" unsigned long g_0068ecdc;
extern "C" unsigned long g_0068ece0;
extern "C" unsigned long g_0068ece4;
extern "C" unsigned long g_0068ece8;
extern "C" unsigned long g_0068ed3a;
extern "C" unsigned long g_0068ed74;
extern "C" unsigned long g_0068edaa;
extern "C" unsigned long g_0068ede4;
extern "C" unsigned long g_0068edfc;
extern "C" unsigned long g_0068ef94;
extern "C" unsigned long g_0068ef98;
extern "C" unsigned long g_0068ef9c;
extern "C" unsigned long g_0068efa0;
extern "C" unsigned long g_0068efa4;
extern "C" unsigned long g_0068efa8;
extern "C" unsigned long g_0068efac;
extern "C" unsigned long g_0068efb0;
extern "C" unsigned long g_0068efb4;
extern "C" unsigned long g_0068f074;
extern "C" unsigned long g_0068f350;
extern "C" unsigned long g_0068f374;
extern "C" unsigned long g_0068f498;
extern "C" unsigned long g_0068f4fc;
extern "C" unsigned long g_0068f676;
extern "C" unsigned long g_0068f6bc;
extern "C" unsigned long g_0068f70c;
extern "C" unsigned long g_0068f730;
extern "C" unsigned long g_0068f734;
extern "C" unsigned long g_0068f738;
extern "C" unsigned long g_0068f73c;
extern "C" unsigned long g_0068f740;
extern "C" unsigned long g_0068f744;
extern "C" unsigned long g_0068f748;
extern "C" unsigned long g_0068f74c;
extern "C" unsigned long g_0068f750;
extern "C" unsigned long g_0068f754;
extern "C" unsigned long g_0068f758;
extern "C" unsigned long g_0068f75c;
extern "C" unsigned long g_0068f760;
extern "C" unsigned long g_0068f794;
extern "C" unsigned long g_0068f7ea;
extern "C" unsigned long g_0068fa78;
extern "C" unsigned long g_0068fa7c;
extern "C" unsigned long g_0068fa80;
extern "C" unsigned long g_0068fa84;
extern "C" unsigned long g_0068fa88;
extern "C" unsigned long g_0068fa8c;
extern "C" unsigned long g_0068fa90;
extern "C" unsigned long g_0068fbe8;
extern "C" unsigned long g_0068fbee;
extern "C" unsigned long g_0068fe0c;
extern "C" unsigned long g_0068fe54;
extern "C" unsigned long g_0068fe58;
extern "C" unsigned long g_0068fe5c;
extern "C" unsigned long g_0068fe60;
extern "C" unsigned long g_0068fe64;
extern "C" unsigned long g_0068fe68;
extern "C" unsigned long g_0068fe6c;
extern "C" unsigned long g_0069002e;
extern "C" unsigned long g_00690126;
extern "C" unsigned long g_00690142;
extern "C" unsigned long g_00690240;
extern "C" unsigned long g_00690244;
extern "C" unsigned long g_00690248;
extern "C" unsigned long g_0069024c;
extern "C" unsigned long g_00690250;
extern "C" unsigned long g_00690254;
extern "C" unsigned long g_00690258;
extern "C" unsigned long g_0069025c;
extern "C" unsigned long g_00690260;
extern "C" unsigned long g_00690264;
extern "C" unsigned long g_00690268;
bool BLSuitRoleInfoPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLSuitRoleInfoPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLSuitRoleInfoPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLSuitRoleInfoPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

int BLSuitRoleInfoPresenter::getCurrentIndex() const
{
  return *(undefined4 *)(((int)this) + 0x1c);
}

void BLSuitRoleInfoPresenter::setCurrentIndex(int p1)
{
  *(undefined4 *)(((int)this) + 0x1c) = p1;
  return;
}

void BLSuitRoleInfoPresenter::tick(float p1)
{
  return;
}

void BLSuitRoleInfoPresenter::setCharge(std::string p1)
{
  func_0079e52c(((int)this) + 0x20);
  return;
}

BLSuitRoleInfoPresenter::~BLSuitRoleInfoPresenter()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  iVar2 = *(int *)(&g_0068e818 + g_0068e874);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x4c;
  piStack_20 = (int *)((int)this);
  uStack_1c = (undefined4)(p2);
  uStack_18 = (undefined4)(p3);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_1c,&g_0068e836 + g_0068e878,&piStack_20);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_1c);
  func_0079e2bc(&uStack_1c);
  func_0079e2bc(((int)this) + 8);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}



std::string BLSuitRoleInfoPresenter::getCharge() const
{ return *(std::string *)(((int)this) + 0x20); }

BLSuitRoleInfoPresenter::BLSuitRoleInfoPresenter()
{
  undefined4 p2 = 0;

  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar4 = *(int *)(&g_0068eabe + g_0068eb2c);
  *(int *)((int)this + 4*(5)) = iVar4 + 0x4c;
  iVar1 = g_0068eb30;
  *(int *)this = iVar4 + 8;
  *(int *)((int)this + 4*(8)) = *(int *)(&g_0068eace + iVar1) + 0xc;
  piVar2 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar3 = (undefined4)((**(code **)(*piVar2 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar3)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 0);
  uVar3 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0068eaf6 + g_0068eb34,&piStack_18);
  ((BLLeakUtils *)uVar3)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  *(int *)((int)this + 4*(9)) = 0;
  return;
}

undefined4 BLSuitRoleInfoPresenter::create(BLSuitRoleInfoView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x28))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLSuitRoleInfoPresenter::onExit()
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

// ===== 修复: 补回被误删的函数占位 (17) =====
void BLSuitRoleInfoPresenter::upequipsuit(cocos2d::CCObject* p1)
{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  
  ((BLGameScene *)this)->shareGameScene();
  ((BLGameScene *)this)->showShieldLayer();
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  iVar2 = (undefined4)((void)(((UIManager *)(uVar1))->getUIObject(0x20)),(intptr_t)0);
  if (iVar2 != 0) {
    uVar1 = (undefined4)(((UIManager *)this)->shareManager());
    ((UIManager *)(uVar1))->removeUIByID(0x20);
  }
  piVar3 = (int *)((DataManager *)this)->shareDataManager();
  piVar3 = (int *)(**(code **)(*(int *)(piVar3) + (0x28)))();
  uVar1 = (undefined4)((**(code **)(*(int *)(piVar3) + (0x68)))());
  piVar3 = (int *)((DataManager *)this)->shareDataManager();
  uVar4 = (undefined4)((**(code **)(*(int *)(piVar3) + (0x68)))());
  iVar2 = (undefined4)(intptr_t)(((cocos2d::CCArray *)(uVar1))->objectAtIndex((unsigned int)uVar4));
  if (iVar2 != 0) {
    uVar1 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_0068e90e + (intptr_t)(g_0068e998))));
    piVar3 = (int *)func_0079e55c(iVar2,uVar1,*(undefined4 *)((unsigned char *)((char *)&g_0068e912 + (intptr_t)(g_0068e99c))),0);
    if (piVar3 != (int *)0x0) {
      uVar4 = (undefined4)((**(code **)(*(int *)(piVar3) + (0x38)))());
      iVar2 = (undefined4)(intptr_t)(((cocos2d::CCArray *)(uVar4))->objectAtIndex(0));
      if ((iVar2 != 0) &&
         (piVar3 = (int *)func_0079e55c(iVar2,uVar1,*(undefined4 *)((unsigned char *)((char *)&g_0068e934 + (intptr_t)(g_0068e9a0)))
                                          ,0), piVar3 != (int *)0x0)) {
        uVar4 = (undefined4)((**(code **)(*(int *)(piVar3) + (0x18)))());
        iVar2 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)(uVar4))->objectForKey(*(undefined4 *)(((int)this) + 0x24)));
        if (iVar2 != 0) {
          uVar4 = (undefined4)((**(code **)(*(int *)(piVar3) + (0x18)))(piVar3));
          iVar2 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)(uVar4))->objectForKey(*(undefined4 *)(((int)this) + 0x24)));
          if ((iVar2 != 0) &&
             (iVar2 = func_0079e55c(iVar2,uVar1,*(undefined4 *)((unsigned char *)((char *)&g_0068e968 + (intptr_t)(g_0068e9a4))),0),
             iVar2 != 0)) {
            piVar3 = (int *)((DataManager *)this)->shareDataManager();
            piVar3 = (int *)(**(code **)(*(int *)(piVar3) + (0x28)))();
            uVar1 = (undefined4)((**(code **)(*(int *)(piVar3) + (0x50)))());
            ((BackPackData *)(uVar1))->unEquipWithoutNotice((BackPackItemData*)iVar2);
          }
        }
      }
    }
  }
  uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)(uVar1))->postNotification((char const*)(unsigned char *)((char *)&g_0068e992 + (intptr_t)(g_0068e9a8)));
  return;
}

void BLSuitRoleInfoPresenter::onUnuse(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  iVar2 = (undefined4)((void)(((UIManager *)(uVar1))->getUIObject(0x20)),(intptr_t)0);
  if (iVar2 != 0) {
    uVar1 = (undefined4)(((UIManager *)this)->shareManager());
    ((UIManager *)(uVar1))->removeUIByID(0x20);
  }
  piVar3 = (int *)((DataManager *)this)->shareDataManager();
  piVar3 = (int *)(**(code **)(*(int *)(piVar3) + (0x28)))();
  uVar1 = (undefined4)((**(code **)(*(int *)(piVar3) + (0x68)))());
  piVar3 = (int *)((DataManager *)this)->shareDataManager();
  uVar4 = (undefined4)((**(code **)(*(int *)(piVar3) + (0x68)))());
  iVar2 = (undefined4)(intptr_t)(((cocos2d::CCArray *)(uVar1))->objectAtIndex((unsigned int)uVar4));
  if (iVar2 != 0) {
    uVar1 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_0068ea06 + (intptr_t)(g_0068ea90))));
    piVar3 = (int *)func_0079e55c(iVar2,uVar1,*(undefined4 *)((unsigned char *)((char *)&g_0068ea0a + (intptr_t)(g_0068ea94))),0);
    if (piVar3 != (int *)0x0) {
      uVar4 = (undefined4)((**(code **)(*(int *)(piVar3) + (0x38)))());
      iVar2 = (undefined4)(intptr_t)(((cocos2d::CCArray *)(uVar4))->objectAtIndex(0));
      if ((iVar2 != 0) &&
         (piVar3 = (int *)func_0079e55c(iVar2,uVar1,*(undefined4 *)((unsigned char *)((char *)&g_0068ea2c + (intptr_t)(g_0068ea98)))
                                          ,0), piVar3 != (int *)0x0)) {
        iVar2 = 0;
        do {
          uVar4 = (undefined4)((**(code **)(*(int *)(piVar3) + (0x18)))(piVar3));
          iVar5 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)(uVar4))->objectForKey(iVar2));
          if (iVar5 != 0) {
            uVar4 = (undefined4)((**(code **)(*(int *)(piVar3) + (0x18)))(piVar3));
            iVar5 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)(uVar4))->objectForKey(iVar2));
            if ((iVar5 != 0) &&
               (iVar5 = func_0079e55c(iVar5,uVar1,*(undefined4 *)((unsigned char *)((char *)&g_0068ea64 + (intptr_t)(g_0068ea9c))),0
                                       ), iVar5 != 0)) {
              piVar6 = (int *)((DataManager *)this)->shareDataManager();
              piVar6 = (int *)(**(code **)(*(int *)(piVar6) + (0x28)))();
              uVar4 = (undefined4)((**(code **)(*(int *)(piVar6) + (0x50)))());
              ((BackPackData *)(uVar4))->unEquipWithoutNotice((BackPackItemData*)iVar5);
            }
          }
          iVar2 = (undefined4)(intptr_t)(iVar2 + 1);
        } while (iVar2 != 6);
      }
    }
  }
  uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)(uVar1))->postNotification((char const*)(unsigned char *)((char *)&g_0068e9f8 + (intptr_t)(g_0068ea8c)));
  return;
}

void BLSuitRoleInfoPresenter::onEnter()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

undefined4 BLSuitRoleInfoPresenter::initWithView(BLSuitRoleInfoView* p1)
{
  int iVar1;
  int *piVar2;
  
  *(int *)(((int)this) + 0x18) = (undefined4)(intptr_t)p1;
  iVar1 = (undefined4)(intptr_t)(g_0068eccc);
  (**(code **)(**(int **)(p1 + 0x134) + 0x254))
            (*(int **)(p1 + 0x134),((int)this),
             *(undefined4 *)((unsigned char *)((char *)&g_0068ebe4 + (intptr_t)(g_0068ecd0)) + g_0068eccc),0,0x20);
  piVar2 = *(int **)(*(int *)(((int)this) + 0x18) + 0x138);
  (**(code **)(*piVar2 + 0x254))
            (piVar2,((int)this),*(undefined4 *)((unsigned char *)((char *)&g_0068ebe4 + (intptr_t)(g_0068ecd4)) + iVar1),0,0x20);
  piVar2 = *(int **)(*(int *)(((int)this) + 0x18) + 0x13c);
  (**(code **)(*piVar2 + 0x254))
            (piVar2,((int)this),*(undefined4 *)((unsigned char *)((char *)&g_0068ebe4 + (intptr_t)(g_0068ecd8)) + iVar1),0,0x20);
  piVar2 = *(int **)(*(int *)(((int)this) + 0x18) + 0x140);
  (**(code **)(*piVar2 + 0x254))
            (piVar2,((int)this),*(undefined4 *)((unsigned char *)((char *)&g_0068ebe4 + (intptr_t)(g_0068ecdc)) + iVar1),0,0x20);
  piVar2 = *(int **)(*(int *)(((int)this) + 0x18) + 0x144);
  (**(code **)(*piVar2 + 0x254))
            (piVar2,((int)this),*(undefined4 *)((unsigned char *)((char *)&g_0068ebe4 + (intptr_t)(g_0068ece0)) + iVar1),0,0x20);
  piVar2 = *(int **)(*(int *)(((int)this) + 0x18) + 0x148);
  (**(code **)(*piVar2 + 0x254))
            (piVar2,((int)this),*(undefined4 *)((unsigned char *)((char *)&g_0068ebe4 + (intptr_t)(g_0068ece4)) + iVar1),0,0x20);
  piVar2 = *(int **)(*(int *)(((int)this) + 0x18) + 0x14c);
  (**(code **)(*piVar2 + 0x254))
            (piVar2,((int)this),*(undefined4 *)((unsigned char *)((char *)&g_0068ebe4 + (intptr_t)(g_0068ece8)) + iVar1),0,0x20);
  return 1;
}

void BLSuitRoleInfoPresenter::onBtn1(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  iVar2 = (undefined4)((void)(((UIManager *)(uVar1))->getUIObject(0x20)),(intptr_t)0);
  if (iVar2 != 0) {
    uVar1 = (undefined4)(((UIManager *)this)->shareManager());
    ((UIManager *)(uVar1))->removeUIByID(0x20);
  }
  return;
}

void BLSuitRoleInfoPresenter::onBtn2(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLSuitRoleInfoPresenter::onBtn3(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLSuitRoleInfoPresenter::unequipsuit(int p1)
{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 auStack_1c [8];
  
  iVar2 = (undefined4)(intptr_t)(g_0068ef94);
  uVar3 = (undefined4)(((UIManager *)this)->shareManager());
  iVar4 = (undefined4)((void)(((UIManager *)(uVar3))->getUIObject(0x20)),(intptr_t)0);
  if (iVar4 != 0) {
    uVar3 = (undefined4)(((UIManager *)this)->shareManager());
    ((UIManager *)(uVar3))->removeUIByID(0x20);
  }
  *(undefined4 *)(((int)this) + 0x24) = p1;
  piVar5 = (int *)((DataManager *)this)->shareDataManager();
  piVar5 = (int *)(**(code **)(*(int *)(piVar5) + (0x28)))();
  uVar3 = (undefined4)((**(code **)(*(int *)(piVar5) + (0x68)))());
  piVar5 = (int *)((DataManager *)this)->shareDataManager();
  uVar6 = (undefined4)((**(code **)(*(int *)(piVar5) + (0x68)))());
  iVar4 = (undefined4)(intptr_t)(((cocos2d::CCArray *)(uVar3))->objectAtIndex((unsigned int)uVar6));
  if (iVar4 != 0) {
    uVar3 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_0068edfc + (intptr_t)(g_0068ef98)) + iVar2));
    piVar5 = (int *)func_0079e55c(iVar4,uVar3,
                                    *(undefined4 *)((unsigned char *)((char *)&g_0068edfc + (intptr_t)(g_0068ef9c)) + iVar2),0);
    if (piVar5 != (int *)0x0) {
      piVar7 = (int *)((DataManager *)this)->shareDataManager();
      uVar6 = (undefined4)((**(code **)(*(int *)(piVar7) + (0x198)))());
      piVar7 = (int *)(**(code **)(*(int *)(piVar5) + (0x18)))(piVar5);
      (**(code **)(*(int *)(piVar7) + (0x18)))(auStack_1c,piVar7);
      iVar4 = (undefined4)(intptr_t)(((SuitEquipUserData *)(uVar6))->getEquipable((std::string)(char*)auStack_1c, p1));
      func_0079e2bc(auStack_1c);
      if (iVar4 == 0) {
        uVar6 = (undefined4)((**(code **)(*(int *)(piVar5) + (0x38)))(piVar5));
        iVar4 = (undefined4)(intptr_t)(((cocos2d::CCArray *)(uVar6))->objectAtIndex(0));
        if ((iVar4 != 0) &&
           (piVar5 = (int *)func_0079e55c(iVar4,uVar3,
                                            *(undefined4 *)((unsigned char *)((char *)&g_0068edfc + (intptr_t)(g_0068efa0)) + iVar2),0
                                           ), piVar5 != (int *)0x0)) {
          uVar6 = (undefined4)((**(code **)(*(int *)(piVar5) + (0x18)))());
          iVar4 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)(uVar6))->objectForKey(p1));
          if ((iVar4 != 0) &&
             (piVar5 = (int *)func_0079e55c(iVar4,uVar3,
                                              *(undefined4 *)((unsigned char *)((char *)&g_0068edfc + (intptr_t)(g_0068efa4)) + iVar2)
                                              ,0), piVar5 != (int *)0x0)) {
            uVar3 = (undefined4)(func_0079e2fc(0x30));
            0 /* ctorZero */;
            uVar6 = (undefined4)((**(code **)(*(int *)(piVar5) + (0x20)))(piVar5));
            uVar3 = (undefined4)(((SuitEquipEquipData *)(uVar3))->getItemById(uVar6));
            uVar6 = (undefined4)((**(code **)(*(int *)(piVar5) + (0x30)))(piVar5));
            ((SuitEquipEquipItemData *)(uVar3))->updateAttr(uVar6);
            uVar6 = (undefined4)(((UIManager *)this)->shareManager());
            iVar4 = (undefined4)((void)(((UIManager *)(uVar6))->getUIObject(0x20)),(intptr_t)0);
            uVar9 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_0068edfc + (intptr_t)(g_0068efa8)) + iVar2));
            uVar6 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_0068edfc + (intptr_t)(g_0068efac)) + iVar2));
            if ((iVar4 == 0) || (iVar4 = func_0079e55c(iVar4,uVar9,uVar6,0), iVar4 == 0)) {
              uVar8 = (undefined4)(((UIManager *)this)->shareManager());
              iVar4 = (undefined4)(intptr_t)(((UIManager *)(uVar8))->showUIById(0x20));
              if (iVar4 == 0) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)software_udf(0xff,0x68ef8e);
                (*pcVar1)();
              }
              iVar4 = (undefined4)(intptr_t)(func_0079e55c(iVar4,uVar9,uVar6,0));
            }
            if (*(int *)(iVar4 + 0x24) != 0) {
              func_0079e55c(*(int *)(iVar4 + 0x24),
                              *(undefined4 *)((unsigned char *)((char *)&g_0068edfc + (intptr_t)(g_0068efb0)) + iVar2),
                              *(undefined4 *)((unsigned char *)((char *)&g_0068edfc + (intptr_t)(g_0068efb4)) + iVar2),0);
            }
            uVar6 = (undefined4)(((BLSuitItemDataInfoView *)this)->getPresenter());
            uVar9 = (undefined4)((**(code **)(*(int *)(piVar5) + (0x30)))(piVar5));
            ((BLSuitItemDataInfoPresenter *)(uVar6))->initWithItemData((SuitEquipEquipItemData*)uVar3, uVar9);
          }
        }
      }
    }
  }
  return;
}

void BLSuitRoleInfoPresenter::onSuit1(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLSuitRoleInfoPresenter::onSuit2(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLSuitRoleInfoPresenter::onSuit3(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLSuitRoleInfoPresenter::onSuit4(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLSuitRoleInfoPresenter::onSuit5(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLSuitRoleInfoPresenter::onSuit6(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLSuitRoleInfoPresenter::updateItem(int p1, std::string * p2, int p3)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLSuitRoleInfoPresenter::updateData(cocos2d::CCObject* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLSuitRoleInfoPresenter::initWithIndex(int p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
