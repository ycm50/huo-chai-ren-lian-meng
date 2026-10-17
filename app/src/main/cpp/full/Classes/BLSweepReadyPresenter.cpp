#include "BLSweepReadyPresenter.h"
#include "CCDictionary.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "CCNotificationCenter.h"
#include "CCObject.h"
#include "CCTouch.h"
#include "CCString.h"
#include "CCDirector.h"
#include "BLForwards.h"
#include "BLSweepReadyView.h"
#include "BLLeakUtils.h"
#include "BackPackData.h"
#include "BackPackItemData.h"
#include "DataManager.h"
#include "ItemData.h"
#include "MissionSweepData.h"
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
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e6c0(...);
extern "C" long long func_0079e964(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_005d6ef8;
extern "C" unsigned long UNK_005d6f10;
extern "C" unsigned long UNK_005d6f28;
extern "C" unsigned long UNK_005d6f9c;
extern "C" unsigned long UNK_005d6fb6;
extern "C" unsigned long UNK_005d6ffc;
extern "C" unsigned long UNK_005d7024;
extern "C" unsigned long UNK_005d7038;
extern "C" unsigned long UNK_005d705a;
extern "C" unsigned long UNK_005d7090;
extern "C" unsigned long UNK_005d712a;
extern "C" unsigned long UNK_005d712c;
extern "C" unsigned long UNK_005d7144;
extern "C" unsigned long UNK_005d7146;
extern "C" unsigned long UNK_005d71e4;
extern "C" unsigned long UNK_005d7202;
extern "C" unsigned long UNK_005d7284;
extern "C" unsigned long UNK_005d7286;
extern "C" unsigned long UNK_005d72ba;
extern "C" unsigned long UNK_005d72be;
extern "C" unsigned long UNK_005d72c2;
extern "C" unsigned long UNK_005d72c6;
extern "C" unsigned long UNK_005d72ca;
extern "C" unsigned long UNK_005d72f6;
extern "C" unsigned long UNK_005d7444;
extern "C" unsigned long UNK_005d7462;
extern "C" unsigned long UNK_005d7480;
extern "C" unsigned long UNK_005d74b2;
extern "C" unsigned long UNK_005d7634;
extern "C" unsigned long UNK_005d7636;
extern "C" unsigned long UNK_005d766e;
extern "C" unsigned long UNK_005d7672;
extern "C" unsigned long UNK_005d7676;
extern "C" unsigned long UNK_005d767a;
extern "C" unsigned long UNK_005d767e;
extern "C" unsigned long UNK_005d768a;
extern "C" unsigned long UNK_005d768e;
extern "C" unsigned long UNK_005d7692;
extern "C" unsigned long UNK_005d7696;
extern "C" unsigned long UNK_005d769a;
extern "C" unsigned long UNK_005d7706;
extern "C" unsigned long UNK_005d78c4;
extern "C" unsigned long UNK_005d7944;
extern "C" unsigned long UNK_005d7946;
extern "C" unsigned long UNK_005d7974;
extern "C" unsigned long UNK_005d7ab4;
extern "C" unsigned long UNK_005d7ab6;
extern "C" unsigned long UNK_005d7aea;
extern "C" unsigned long _UNK_005d6efc;
extern "C" unsigned long _UNK_005d6f14;
extern "C" unsigned long _UNK_005d6f2c;
extern "C" unsigned long _UNK_005d6fe8;
extern "C" unsigned long _UNK_005d6fec;
extern "C" unsigned long _UNK_005d7000;
extern "C" unsigned long _UNK_005d7028;
extern "C" unsigned long _UNK_005d7048;
extern "C" unsigned long _UNK_005d70c0;
extern "C" unsigned long _UNK_005d70c4;
extern "C" unsigned long _UNK_005d7154;
extern "C" unsigned long _UNK_005d7158;
extern "C" unsigned long _UNK_005d715c;
extern "C" unsigned long _UNK_005d7160;
extern "C" unsigned long _UNK_005d73e4;
extern "C" unsigned long _UNK_005d73e8;
extern "C" unsigned long _UNK_005d73ec;
extern "C" unsigned long _UNK_005d73f0;
extern "C" unsigned long _UNK_005d73f4;
extern "C" unsigned long _UNK_005d73f8;
extern "C" unsigned long _UNK_005d73fc;
extern "C" unsigned long _UNK_005d7400;
extern "C" unsigned long _UNK_005d7498;
extern "C" unsigned long _UNK_005d749c;
extern "C" unsigned long _UNK_005d74a0;
extern "C" unsigned long _UNK_005d7554;
extern "C" unsigned long _UNK_005d7558;
extern "C" unsigned long _UNK_005d78c0;
extern "C" unsigned long _UNK_005d78c4;
extern "C" unsigned long _UNK_005d78c8;
extern "C" unsigned long _UNK_005d78cc;
extern "C" unsigned long _UNK_005d78d0;
extern "C" unsigned long _UNK_005d78d4;
extern "C" unsigned long _UNK_005d78d8;
extern "C" unsigned long _UNK_005d7a48;
extern "C" unsigned long _UNK_005d7a4c;
extern "C" unsigned long _UNK_005d7a50;
extern "C" unsigned long _UNK_005d7b68;
extern "C" unsigned long _UNK_005d7b6c;
extern "C" unsigned long _UNK_005d7b70;
extern "C" unsigned long extraout_r1;
extern "C" unsigned long extraout_r1_00;
extern "C" unsigned long extraout_r3;
extern "C" unsigned long g_005d6ef8;
extern "C" unsigned long g_005d6efc;
extern "C" unsigned long g_005d6f10;
extern "C" unsigned long g_005d6f14;
extern "C" unsigned long g_005d6f28;
extern "C" unsigned long g_005d6f2c;
extern "C" unsigned long g_005d6f9c;
extern "C" unsigned long g_005d6fb6;
extern "C" unsigned long g_005d6fe8;
extern "C" unsigned long g_005d6fec;
extern "C" unsigned long g_005d6ffc;
extern "C" unsigned long g_005d7000;
extern "C" unsigned long g_005d7024;
extern "C" unsigned long g_005d7028;
extern "C" unsigned long g_005d7038;
extern "C" unsigned long g_005d7048;
extern "C" unsigned long g_005d705a;
extern "C" unsigned long g_005d7090;
extern "C" unsigned long g_005d70c0;
extern "C" unsigned long g_005d70c4;
extern "C" unsigned long g_005d712a;
extern "C" unsigned long g_005d712c;
extern "C" unsigned long g_005d7144;
extern "C" unsigned long g_005d7146;
extern "C" unsigned long g_005d7154;
extern "C" unsigned long g_005d7158;
extern "C" unsigned long g_005d715c;
extern "C" unsigned long g_005d7160;
extern "C" unsigned long g_005d71e4;
extern "C" unsigned long g_005d7202;
extern "C" unsigned long g_005d7284;
extern "C" unsigned long g_005d7286;
extern "C" unsigned long g_005d72ba;
extern "C" unsigned long g_005d72be;
extern "C" unsigned long g_005d72c2;
extern "C" unsigned long g_005d72c6;
extern "C" unsigned long g_005d72ca;
extern "C" unsigned long g_005d72f6;
extern "C" unsigned long g_005d73e4;
extern "C" unsigned long g_005d73e8;
extern "C" unsigned long g_005d73ec;
extern "C" unsigned long g_005d73f0;
extern "C" unsigned long g_005d73f4;
extern "C" unsigned long g_005d73f8;
extern "C" unsigned long g_005d73fc;
extern "C" unsigned long g_005d7400;
extern "C" unsigned long g_005d7444;
extern "C" unsigned long g_005d7462;
extern "C" unsigned long g_005d7480;
extern "C" unsigned long g_005d7498;
extern "C" unsigned long g_005d749c;
extern "C" unsigned long g_005d74a0;
extern "C" unsigned long g_005d74b2;
extern "C" unsigned long g_005d7554;
extern "C" unsigned long g_005d7558;
extern "C" unsigned long g_005d7634;
extern "C" unsigned long g_005d7636;
extern "C" unsigned long g_005d766e;
extern "C" unsigned long g_005d7672;
extern "C" unsigned long g_005d7676;
extern "C" unsigned long g_005d767a;
extern "C" unsigned long g_005d767e;
extern "C" unsigned long g_005d768a;
extern "C" unsigned long g_005d768e;
extern "C" unsigned long g_005d7692;
extern "C" unsigned long g_005d7696;
extern "C" unsigned long g_005d769a;
extern "C" unsigned long g_005d7706;
extern "C" unsigned long g_005d78c0;
extern "C" unsigned long g_005d78c4;
extern "C" unsigned long g_005d78c8;
extern "C" unsigned long g_005d78cc;
extern "C" unsigned long g_005d78d0;
extern "C" unsigned long g_005d78d4;
extern "C" unsigned long g_005d78d8;
extern "C" unsigned long g_005d7944;
extern "C" unsigned long g_005d7946;
extern "C" unsigned long g_005d7974;
extern "C" unsigned long g_005d7a48;
extern "C" unsigned long g_005d7a4c;
extern "C" unsigned long g_005d7a50;
extern "C" unsigned long g_005d7ab4;
extern "C" unsigned long g_005d7ab6;
extern "C" unsigned long g_005d7aea;
extern "C" unsigned long g_005d7b68;
extern "C" unsigned long g_005d7b6c;
extern "C" unsigned long g_005d7b70;
bool BLSweepReadyPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLSweepReadyPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLSweepReadyPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLSweepReadyPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLSweepReadyPresenter::tick(float p1)
{
  return;
}

BLSweepReadyPresenter::~BLSweepReadyPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_005d6f9c + g_005d6fe8);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x3c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005d6fb6 + g_005d6fec,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLSweepReadyPresenter::onQuit(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar1)->postNotification((char const*)&g_005d7038 + g_005d7048);
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(0x17);
  return;
}

BLSweepReadyPresenter::BLSweepReadyPresenter()
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
  iVar3 = *(int *)(&g_005d705a + g_005d70c0);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x3c;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 1);
  ((UIManager *)this)->shareManager();
  ((UIManager *)this)->pushCurScrollViewUnEnable();
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005d7090 + g_005d70c4,&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  *(int *)((int)this + 4*(6)) = 0;
  return;
}

undefined4 BLSweepReadyPresenter::create(BLSweepReadyView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x20))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLSweepReadyPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  ((UIManager *)this)->shareManager();
  ((UIManager *)this)->popUnEnableScrollView();
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar2)->removeAllObservers((cocos2d::CCObject*)((int)this));
  return;
}

// ===== 修复: 补回被误删的函数占位 (7) =====
void BLSweepReadyPresenter::onEnter()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)(((int)this)))->addObserver((cocos2d::CCObject*)*(undefined4 *)((unsigned char *)((char *)&g_005d712c + (intptr_t)(g_005d7154))), 0, (char const*)(unsigned char *)((char *)&g_005d712a + (intptr_t)(g_005d7158)), 0);
  uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)(((int)this)))->addObserver((cocos2d::CCObject*)*(undefined4 *)((unsigned char *)((char *)&g_005d7144 + (intptr_t)(g_005d715c))), 0, (char const*)(unsigned char *)((char *)&g_005d7146 + (intptr_t)(g_005d7160)), 0);
  return;
}

void BLSweepReadyPresenter::onSweepUpdate()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

undefined4 BLSweepReadyPresenter::initWithView(BLSweepReadyView* p1)
{
  int *piVar1;
  
  *(int *)(((int)this) + 0x1c) = (undefined4)(intptr_t)p1;
  (**(code **)(**(int **)(p1 + 0x120) + 0x90))(*(int **)(p1 + 0x120),0);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x1c) + 0x10c);
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)((unsigned char *)((char *)&g_005d7444 + (intptr_t)(g_005d7498))),0,0x20);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x1c) + 0x110);
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)((unsigned char *)((char *)&g_005d7462 + (intptr_t)(g_005d749c))),0,0x20);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x1c) + 0x114);
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)((unsigned char *)((char *)&g_005d7480 + (intptr_t)(g_005d74a0))),0,0x20);
  BLSweepReadyPresenter::onSweepUpdate();
  return 1;
}

void BLSweepReadyPresenter::onSweepTouch()
{
  undefined4 uVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  code *pcVar7;
  
  uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  uVar5 = (undefined4)(g_005d7558);
  ((cocos2d::CCNotificationCenter *)uVar1)->postNotification((char const*)(unsigned char *)((char *)&g_005d74b2 + (intptr_t)(g_005d7554)));
  uVar1 = (undefined4)(((ItemData *)this)->create());
  ((ItemData *)uVar1)->initWith(uVar5);
  piVar2 = (int *)((DataManager *)this)->shareDataManager();
  piVar2 = (int *)(**(code **)(*piVar2 + 0x28))();
  uVar3 = (undefined4)((**(code **)(*piVar2 + 0x50))());
  piVar2 = (int *)((BackPackData *)uVar3)->getItemData((ItemData*)uVar1);
  piVar4 = (int *)((BackPackItemData *)this)->create();
  (**(code **)(*piVar4 + 0x24))(piVar4,uVar5);
  (**(code **)(*piVar4 + 0x2c))(piVar4,1);
  pcVar7 = *(code **)(*piVar4 + 0x1c);
  uVar5 = (undefined4)((**(code **)(*piVar2 + 0x18))(piVar2));
  (*pcVar7)(piVar4,uVar5);
  piVar2 = (int *)((DataManager *)this)->shareDataManager();
  piVar2 = (int *)(**(code **)(*piVar2 + 0x28))();
  uVar5 = (undefined4)((**(code **)(*piVar2 + 0x50))());
  ((BackPackData *)uVar5)->removeItem((BackPackItemData*)piVar4);
  uVar5 = (undefined4)(((sir::singleton<MissionSweepData, 0> *)this)->instance());
  ((MissionSweepData *)uVar5)->getCopper(1);
  uVar5 = (undefined4)(((sir::singleton<MissionSweepData, 0> *)this)->instance());
  ((MissionSweepData *)uVar5)->getItems(1);
  uVar5 = (undefined4)(((sir::singleton<MissionSweepData, 0> *)this)->instance());
  ((MissionSweepData *)uVar5)->minusleftdata(1);
  iVar6 = (undefined4)(intptr_t)(((sir::singleton<MissionSweepData, 0> *)this)->instance());
  *(undefined4 *)(iVar6 + 8) = 1;
  uVar5 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar5)->removeUIByID(0x17);
  uVar5 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar5)->showUIById(0x18);
  return;
}

undefined4 BLSweepReadyPresenter::checkSweep(int p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void BLSweepReadyPresenter::onSweepOne(cocos2d::CCObject* p1, unsigned int p2)
{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  uStack_20 = (undefined4)((int *)((int)this));
  uStack_1c = (undefined4)(p1);
  uStack_18 = (undefined4)(p2);
  iVar1 = (undefined4)(intptr_t)(((BLSweepReadyPresenter *)(((int)this)))->checkSweep(1));
  if (iVar1 != 0) {
    iVar1 = (undefined4)(intptr_t)(((sir::singleton<MissionSweepData, 0> *)this)->instance());
    if (*(int *)(iVar1 + 0x10) == 2) {
      iVar1 = (undefined4)(intptr_t)(((sir::singleton<MissionSweepData, 0> *)this)->instance());
      func_0079e53c(&uStack_20,iVar1 + 4);
      piVar2 = (int *)((DataManager *)this)->shareDataManager();
      piVar2 = (int *)(**(code **)(*(int *)(piVar2) + (0x28)))();
      uVar3 = (undefined4)((**(code **)(*(int *)(piVar2) + (0x138)))());
      iVar1 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)(uVar3))->objectForKey(*(std::string const*)&uStack_20));
      uVar3 = (undefined4)(0);
      if (iVar1 != 0) {
        uVar3 = func_0079e55c(iVar1,*(undefined4 *)((unsigned char *)((char *)&g_005d7944 + (intptr_t)(g_005d7a48))),
                                *(undefined4 *)((unsigned char *)((char *)&g_005d7946 + (intptr_t)(g_005d7a4c))),0);
      }
      piVar2 = (int *)((DataManager *)this)->shareDataManager();
      piVar2 = (int *)(**(code **)(*(int *)(piVar2) + (0x28)))();
      uVar4 = (undefined4)((**(code **)(*(int *)(piVar2) + (0x138)))());
      ((cocos2d::CCString *)(uVar3))->getCString();
      iVar1 = (undefined4)(intptr_t)(func_0079e6c0());
      uVar3 = (undefined4)(cocos2d::CCString::createWithFormat((char const*)(unsigned char *)((char *)&g_005d7974 + (intptr_t)(g_005d7a50)), iVar1 + 1));
      iVar1 = (undefined4)(intptr_t)(((sir::singleton<MissionSweepData, 0> *)this)->instance());
      func_0079e53c(&uStack_1c,iVar1 + 4);
      ((cocos2d::CCDictionary *)(uVar4))->setObject((cocos2d::CCObject*)uVar3, *(std::string const*)&uStack_1c);
      func_0079e2bc(&uStack_1c);
      uVar3 = (undefined4)(((sir::singleton<MissionSweepData, 0> *)this)->instance());
      ((MissionSweepData *)(uVar3))->getCopper(1);
      uVar3 = (undefined4)(((sir::singleton<MissionSweepData, 0> *)this)->instance());
      ((MissionSweepData *)(uVar3))->getItems(1);
      uVar3 = (undefined4)(((sir::singleton<MissionSweepData, 0> *)this)->instance());
      ((MissionSweepData *)(uVar3))->minusleftdata(1);
      iVar1 = (undefined4)(intptr_t)(((sir::singleton<MissionSweepData, 0> *)this)->instance());
      *(undefined4 *)(iVar1 + 8) = 1;
      uVar3 = (undefined4)(((UIManager *)this)->shareManager());
      ((UIManager *)(uVar3))->removeUIByID(0x17);
      uVar3 = (undefined4)(((UIManager *)this)->shareManager());
      ((UIManager *)(uVar3))->showUIById(0x18);
      func_0079e2bc(&uStack_20);
    }
    else {
      iVar1 = (undefined4)(intptr_t)(((sir::singleton<MissionSweepData, 0> *)this)->instance());
      if (*(int *)(iVar1 + 0x10) == 4) {
        uVar3 = (undefined4)(((sir::singleton<MissionSweepData, 0> *)this)->instance());
        ((MissionSweepData *)(uVar3))->getCopper(1);
      }
      else {
        iVar1 = (undefined4)(intptr_t)(((sir::singleton<MissionSweepData, 0> *)this)->instance());
        if (*(int *)(iVar1 + 0x10) != 3) {
          uVar3 = (undefined4)(((sir::singleton<MissionSweepData, 0> *)this)->instance());
          ((MissionSweepData *)(uVar3))->getCopper(1);
          uVar3 = (undefined4)(((sir::singleton<MissionSweepData, 0> *)this)->instance());
          ((MissionSweepData *)(uVar3))->getItems(1);
        }
      }
      uVar3 = (undefined4)(((sir::singleton<MissionSweepData, 0> *)this)->instance());
      ((MissionSweepData *)(uVar3))->minusleftdata(1);
      iVar1 = (undefined4)(intptr_t)(((sir::singleton<MissionSweepData, 0> *)this)->instance());
      *(undefined4 *)(iVar1 + 8) = 1;
      uVar3 = (undefined4)(((UIManager *)this)->shareManager());
      ((UIManager *)(uVar3))->removeUIByID(0x17);
      uVar3 = (undefined4)(((UIManager *)this)->shareManager());
      ((UIManager *)(uVar3))->showUIById(0x18);
    }
  }
  return;
}

void BLSweepReadyPresenter::onSweepFive(cocos2d::CCObject* p1, unsigned int p2)
{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [8];
  
  iVar1 = (undefined4)(intptr_t)(BLSweepReadyPresenter::checkSweep(5));
  if (iVar1 != 0) {
    iVar1 = (undefined4)(intptr_t)(((sir::singleton<MissionSweepData, 0> *)this)->instance());
    if (*(int *)(iVar1 + 0x10) == 2) {
      iVar1 = (undefined4)(intptr_t)(((sir::singleton<MissionSweepData, 0> *)this)->instance());
      func_0079e53c(auStack_24,iVar1 + 4);
      piVar2 = (int *)((DataManager *)this)->shareDataManager();
      piVar2 = (int *)(**(code **)(*(int *)(piVar2) + (0x28)))();
      uVar3 = (undefined4)((**(code **)(*(int *)(piVar2) + (0x138)))());
      iVar1 = (undefined4)(intptr_t)(((sir::singleton<MissionSweepData, 0> *)this)->instance());
      func_0079e53c(auStack_20,iVar1 + 4);
      iVar1 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)uVar3)->objectForKey((char const *)auStack_20));
      uVar3 = (undefined4)(0);
      if (iVar1 != 0) {
        uVar3 = func_0079e55c(iVar1,*(undefined4 *)((unsigned char *)((char *)&g_005d7ab4 + (intptr_t)(g_005d7b68))),
                                *(undefined4 *)((unsigned char *)((char *)&g_005d7ab6 + (intptr_t)(g_005d7b6c))),0);
      }
      func_0079e2bc(auStack_20);
      piVar2 = (int *)((DataManager *)this)->shareDataManager();
      piVar2 = (int *)(**(code **)(*(int *)(piVar2) + (0x28)))();
      uVar4 = (undefined4)((**(code **)(*(int *)(piVar2) + (0x138)))());
      ((cocos2d::CCString *)uVar3)->getCString();
      iVar1 = (undefined4)(intptr_t)(func_0079e6c0());
      uVar3 = (undefined4)(cocos2d::CCString::createWithFormat((char const*)(unsigned char *)((char *)&g_005d7aea + (intptr_t)(g_005d7b70)), iVar1 + 5));
      iVar1 = (undefined4)(intptr_t)(((sir::singleton<MissionSweepData, 0> *)this)->instance());
      func_0079e53c(auStack_1c,iVar1 + 4);
      ((cocos2d::CCDictionary *)uVar4)->setObject((cocos2d::CCObject*)uVar3, (char const *)auStack_1c);
      func_0079e2bc(auStack_1c);
      func_0079e2bc(auStack_24);
    }
    uVar3 = (undefined4)(((sir::singleton<MissionSweepData, 0> *)this)->instance());
    ((MissionSweepData *)uVar3)->getCopper(5);
    uVar3 = (undefined4)(((sir::singleton<MissionSweepData, 0> *)this)->instance());
    ((MissionSweepData *)uVar3)->getItems(5);
    uVar3 = (undefined4)(((sir::singleton<MissionSweepData, 0> *)this)->instance());
    ((MissionSweepData *)uVar3)->minusleftdata(5);
    iVar1 = (undefined4)(intptr_t)(((sir::singleton<MissionSweepData, 0> *)this)->instance());
    *(undefined4 *)(iVar1 + 8) = 5;
    uVar3 = (undefined4)(((UIManager *)this)->shareManager());
    ((UIManager *)uVar3)->removeUIByID(0x17);
    uVar3 = (undefined4)(((UIManager *)this)->shareManager());
    ((UIManager *)uVar3)->showUIById(0x18);
  }
  return;
}
