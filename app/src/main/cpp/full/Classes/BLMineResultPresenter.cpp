#include "BLMineResultPresenter.h"
#include "MineDealData.h"
#include "CCLabelTTF.h"
#include "CCNotificationCenter.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "CCObject.h"
#include "CCTouch.h"
#include "CCDirector.h"
#include "BLForwards.h"
#include "BLLeakUtils.h"
#include "BLMineResultView.h"
#include "BLResultManager.h"
#include "BackPackData.h"
#include "DataCacheManager.h"
#include "DataManager.h"
#include "ItemData.h"
#include "MineData.h"
#include "MineitemData.h"
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
extern "C" long long func_0079e4dc(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0065878c;
extern "C" unsigned long UNK_006587a4;
extern "C" unsigned long UNK_006587bc;
extern "C" unsigned long UNK_00658830;
extern "C" unsigned long UNK_0065884a;
extern "C" unsigned long UNK_00658890;
extern "C" unsigned long UNK_006588b8;
extern "C" unsigned long UNK_00658918;
extern "C" unsigned long UNK_00658936;
extern "C" unsigned long UNK_0065893a;
extern "C" unsigned long UNK_00658954;
extern "C" unsigned long UNK_00658958;
extern "C" unsigned long UNK_00658972;
extern "C" unsigned long UNK_00658976;
extern "C" unsigned long UNK_006589a4;
extern "C" unsigned long UNK_00658a58;
extern "C" unsigned long UNK_00658a74;
extern "C" unsigned long UNK_00658bd2;
extern "C" unsigned long UNK_00658caa;
extern "C" unsigned long _UNK_00658790;
extern "C" unsigned long _UNK_006587a8;
extern "C" unsigned long _UNK_006587c0;
extern "C" unsigned long _UNK_0065887c;
extern "C" unsigned long _UNK_00658880;
extern "C" unsigned long _UNK_00658894;
extern "C" unsigned long _UNK_006588bc;
extern "C" unsigned long _UNK_006589d0;
extern "C" unsigned long _UNK_006589d4;
extern "C" unsigned long _UNK_006589d8;
extern "C" unsigned long _UNK_006589dc;
extern "C" unsigned long _UNK_006589e0;
extern "C" unsigned long _UNK_006589e4;
extern "C" unsigned long _UNK_006589e8;
extern "C" unsigned long _UNK_006589ec;
extern "C" unsigned long _UNK_00658b18;
extern "C" unsigned long _UNK_00658b1c;
extern "C" unsigned long _UNK_00658db8;
extern "C" unsigned long _UNK_00658dbc;
extern "C" unsigned long _UNK_00658dc0;
extern "C" unsigned long _UNK_00658dc4;
extern "C" unsigned long g_0065878c;
extern "C" unsigned long g_00658790;
extern "C" unsigned long g_006587a4;
extern "C" unsigned long g_006587a8;
extern "C" unsigned long g_006587bc;
extern "C" unsigned long g_006587c0;
extern "C" unsigned long g_00658830;
extern "C" unsigned long g_0065884a;
extern "C" unsigned long g_0065887c;
extern "C" unsigned long g_00658880;
extern "C" unsigned long g_00658890;
extern "C" unsigned long g_00658894;
extern "C" unsigned long g_006588b8;
extern "C" unsigned long g_006588bc;
extern "C" unsigned long g_00658918;
extern "C" unsigned long g_00658936;
extern "C" unsigned long g_0065893a;
extern "C" unsigned long g_00658954;
extern "C" unsigned long g_00658958;
extern "C" unsigned long g_00658972;
extern "C" unsigned long g_00658976;
extern "C" unsigned long g_006589a4;
extern "C" unsigned long g_006589d0;
extern "C" unsigned long g_006589d4;
extern "C" unsigned long g_006589d8;
extern "C" unsigned long g_006589dc;
extern "C" unsigned long g_006589e0;
extern "C" unsigned long g_006589e4;
extern "C" unsigned long g_006589e8;
extern "C" unsigned long g_006589ec;
extern "C" unsigned long g_00658a58;
extern "C" unsigned long g_00658a74;
extern "C" unsigned long g_00658b18;
extern "C" unsigned long g_00658b1c;
extern "C" unsigned long g_00658bd2;
extern "C" unsigned long g_00658caa;
extern "C" unsigned long g_00658db8;
extern "C" unsigned long g_00658dbc;
extern "C" unsigned long g_00658dc0;
extern "C" unsigned long g_00658dc4;
bool BLMineResultPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLMineResultPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLMineResultPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLMineResultPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLMineResultPresenter::tick(float p1)
{
  return;
}

BLMineResultPresenter::~BLMineResultPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_00658830 + g_0065887c);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x3c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0065884a + g_00658880,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLMineResultPresenter::onBack()
{
  int iVar1;
  int *piVar2;
  
  iVar1 = ((BLMineResultView *)*(undefined4 *)(((int)this) + 0x18))->getBtnSure();
  if (iVar1 != 0) {
    piVar2 = (int *)((BLMineResultView *)*(undefined4 *)(((int)this) + 0x18))->getBtnSure();
    (**(code **)(*piVar2 + 0x90))(piVar2,1);
  }
  iVar1 = ((BLMineResultView *)*(undefined4 *)(((int)this) + 0x18))->getLabSure();
  if (iVar1 != 0) {
    piVar2 = (int *)((BLMineResultView *)*(undefined4 *)(((int)this) + 0x18))->getLabSure();
    (**(code **)(*piVar2 + 0x90))(piVar2,1);
  }
  return;
}

void BLMineResultPresenter::onSure(cocos2d::CCObject* p1, unsigned int p2)
{
  ((BLResultManager *)this)->shareManager();
  ((BLResultManager *)this)->returnMainCity();
  return;
}

BLMineResultPresenter::BLMineResultPresenter()
{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [4];
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  0 /* ctorZero */;
  iVar3 = (undefined4)(intptr_t)(*(int *)((unsigned char *)((char *)&g_00658918 + (intptr_t)(g_006589d0))));
  *(int *)((int)this + 4*(5)) = iVar3 + 0x3c;
  *(int *)this = iVar3 + 8;
  *(undefined1 *)(((int)this) + 7) = 0;
  uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  uStack_28 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_00658936 + (intptr_t)(g_006589d4))));
  uStack_24 = (undefined4)(0);
  ((cocos2d::CCNotificationCenter *)(((int)this)))->addObserver((cocos2d::CCObject*)uStack_28, 0, (char const*)(unsigned char *)((char *)&g_0065893a + (intptr_t)(g_006589d8)), 0);
  uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  uStack_20 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_00658954 + (intptr_t)(g_006589dc))));
  uStack_1c = (undefined4)(0);
  ((cocos2d::CCNotificationCenter *)(((int)this)))->addObserver((cocos2d::CCObject*)uStack_20, 0, (char const*)(unsigned char *)((char *)&g_00658958 + (intptr_t)(g_006589e0)), 0);
  uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  uStack_18 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_00658972 + (intptr_t)(g_006589e4))));
  uStack_14 = (undefined4)(0);
  ((cocos2d::CCNotificationCenter *)(((int)this)))->addObserver((cocos2d::CCObject*)uStack_18, 0, (char const*)(unsigned char *)((char *)&g_00658976 + (intptr_t)(g_006589e8)), 0);
  piVar2 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar1 = (undefined4)((**(code **)(*(int *)(piVar2) + (0x40)))());
  ((cocos2d::CCTouchDispatcher *)(uVar1))->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 0);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(auStack_2c,(unsigned char *)((char *)&g_006589a4 + (intptr_t)(g_006589ec)),auStack_30);
  ((BLLeakUtils *)(uVar1))->addClass((std::string)(char*)auStack_2c);
  func_0079e2bc(auStack_2c);
  return;
}

void BLMineResultPresenter::onEnter()
{
  return;
}

void BLMineResultPresenter::onExit()
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

undefined4 BLMineResultPresenter::create(BLMineResultView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x20))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLMineResultPresenter::initWithView(BLMineResultView* p1)
{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  *(undefined4 *)(((int)this) + 0x18) = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  piVar1 = (int *)((BLMineResultView *)(p1))->getBtnSure();
  (**(code **)(*(int *)(piVar1) + (0x254)))
            (piVar1,((int)this),*(undefined4 *)((unsigned char *)((char *)&g_00658a58 + (intptr_t)(g_00658b18))),0,0x20,p1,
             *(undefined4 *)((unsigned char *)((char *)&g_00658a58 + (intptr_t)(g_00658b18))),0);
  uVar2 = (undefined4)(((BLMineResultView *)(*(undefined4 *)(((int)this) + 0x18)))->getLabReward());
  ((cocos2d::CCLabelTTF *)(uVar2))->enableStroke(*(cocos2d::_ccColor3B const*)(unsigned char *)((char *)&g_00658a74 + (intptr_t)(g_00658b1c)), 0x3f800000, 1);
  iVar3 = (undefined4)(intptr_t)(((BLMineResultView *)(*(undefined4 *)(((int)this) + 0x18)))->getLabReward());
  if (iVar3 != 0) {
    piVar1 = (int *)((BLMineResultView *)(*(undefined4 *)(((int)this) + 0x18)))->getLabReward();
    (**(code **)(*(int *)(piVar1) + (0x90)))(piVar1,0);
  }
  iVar3 = (undefined4)(intptr_t)(((BLMineResultView *)(*(undefined4 *)(((int)this) + 0x18)))->getLabRewardTitle());
  if (iVar3 != 0) {
    piVar1 = (int *)((BLMineResultView *)(*(undefined4 *)(((int)this) + 0x18)))->getLabRewardTitle();
    (**(code **)(*(int *)(piVar1) + (0x90)))(piVar1,0);
  }
  iVar3 = (undefined4)(intptr_t)(((BLMineResultView *)(*(undefined4 *)(((int)this) + 0x18)))->getSprSprWin());
  if (iVar3 != 0) {
    piVar1 = (int *)((BLMineResultView *)(*(undefined4 *)(((int)this) + 0x18)))->getSprSprWin();
    (**(code **)(*(int *)(piVar1) + (0x90)))(piVar1,0);
  }
  iVar3 = (undefined4)(intptr_t)(((BLMineResultView *)(*(undefined4 *)(((int)this) + 0x18)))->getSprSprFaild());
  if (iVar3 != 0) {
    piVar1 = (int *)((BLMineResultView *)(*(undefined4 *)(((int)this) + 0x18)))->getSprSprFaild();
    (**(code **)(*(int *)(piVar1) + (0x90)))(piVar1,0);
  }
  iVar3 = (undefined4)(intptr_t)(((BLMineResultView *)(*(undefined4 *)(((int)this) + 0x18)))->getBtnSure());
  if (iVar3 != 0) {
    piVar1 = (int *)((BLMineResultView *)(*(undefined4 *)(((int)this) + 0x18)))->getBtnSure();
    (**(code **)(*(int *)(piVar1) + (0x90)))(piVar1,0);
  }
  iVar3 = (undefined4)(intptr_t)(((BLMineResultView *)(*(undefined4 *)(((int)this) + 0x18)))->getLabSure());
  if (iVar3 != 0) {
    piVar1 = (int *)((BLMineResultView *)(*(undefined4 *)(((int)this) + 0x18)))->getLabSure();
    (**(code **)(*(int *)(piVar1) + (0x90)))(piVar1,0);
  }
  return;
}

void BLMineResultPresenter::onSuccess()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMineResultPresenter::onFail()
{
  int iVar1;
  int *piVar2;
  
  iVar1 = (undefined4)(intptr_t)(((BLMineResultView *)*(undefined4 *)(((int)this) + 0x18))->getLabReward());
  if (iVar1 != 0) {
    piVar2 = (int *)((BLMineResultView *)*(undefined4 *)(((int)this) + 0x18))->getLabReward();
    (**(code **)(*piVar2 + 0x90))(piVar2,0);
  }
  iVar1 = (undefined4)(intptr_t)(((BLMineResultView *)*(undefined4 *)(((int)this) + 0x18))->getLabRewardTitle());
  if (iVar1 != 0) {
    piVar2 = (int *)((BLMineResultView *)*(undefined4 *)(((int)this) + 0x18))->getLabRewardTitle();
    (**(code **)(*piVar2 + 0x90))(piVar2,0);
  }
  ((sir::singleton<MineData, 0> *)this)->instance();
  ((MineData *)this)->ClearSnatchData();
  return;
}

void BLMineResultPresenter::initWith(bool p1)
{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 auStack_9c [4];
  undefined1 auStack_98 [132];
  
  *(char *)(((int)this) + 0x1d) = (char)p1;
  if (p1 == 0) {
    iVar1 = (undefined4)(intptr_t)(((BLMineResultView *)*(undefined4 *)(((int)this) + 0x18))->getSprSprWin());
    if (iVar1 != 0) {
      piVar2 = (int *)((BLMineResultView *)*(undefined4 *)(((int)this) + 0x18))->getSprSprWin();
      (**(code **)(*piVar2 + 0x90))(piVar2,0);
    }
    iVar1 = (undefined4)(intptr_t)(((BLMineResultView *)*(undefined4 *)(((int)this) + 0x18))->getSprSprFaild());
    if (iVar1 != 0) {
      piVar2 = (int *)((BLMineResultView *)*(undefined4 *)(((int)this) + 0x18))->getSprSprFaild();
      (**(code **)(*piVar2 + 0x90))(piVar2,1);
    }
    iVar1 = (undefined4)(intptr_t)(((sir::singleton<MineData, 0> *)this)->instance());
    iVar3 = (undefined4)(intptr_t)(((sir::singleton<MineDealData, 0> *)this)->instance());
    0 /* ctorZero */;
    func_0079e53c(auStack_9c,auStack_98);
    func_0079e52c(iVar1 + 0x3c,auStack_9c);
    func_0079e2bc(auStack_9c);
    ((MineitemData *)auStack_98)->~MineitemData();
    iVar1 = (undefined4)(intptr_t)(((sir::singleton<MineData, 0> *)this)->instance());
    *(undefined4 *)(iVar1 + 0x6c) = 0;
    uVar4 = (undefined4)(((sir::singleton<MineData, 0> *)this)->instance());
  }
  else {
    iVar1 = (undefined4)(intptr_t)(((BLMineResultView *)*(undefined4 *)(((int)this) + 0x18))->getSprSprWin());
    if (iVar1 != 0) {
      piVar2 = (int *)((BLMineResultView *)*(undefined4 *)(((int)this) + 0x18))->getSprSprWin();
      (**(code **)(*piVar2 + 0x90))(piVar2,1);
    }
    iVar1 = (undefined4)(intptr_t)(((BLMineResultView *)*(undefined4 *)(((int)this) + 0x18))->getSprSprFaild());
    if (iVar1 != 0) {
      piVar2 = (int *)((BLMineResultView *)*(undefined4 *)(((int)this) + 0x18))->getSprSprFaild();
      (**(code **)(*piVar2 + 0x90))(piVar2,0);
    }
    iVar1 = (undefined4)(intptr_t)(((sir::singleton<MineData, 0> *)this)->instance());
    iVar3 = (undefined4)(intptr_t)(((sir::singleton<MineDealData, 0> *)this)->instance());
    0 /* ctorZero */;
    func_0079e53c(auStack_9c,auStack_98);
    func_0079e52c(iVar1 + 0x3c,auStack_9c);
    func_0079e2bc(auStack_9c);
    ((MineitemData *)auStack_98)->~MineitemData();
    iVar1 = (undefined4)(intptr_t)(((sir::singleton<MineData, 0> *)this)->instance());
    *(undefined4 *)(iVar1 + 0x6c) = 1;
    uVar4 = (undefined4)(((sir::singleton<MineData, 0> *)this)->instance());
  }
  ((MineData *)uVar4)->GetDataFromNet(9, 1, 0);
  return;
}
