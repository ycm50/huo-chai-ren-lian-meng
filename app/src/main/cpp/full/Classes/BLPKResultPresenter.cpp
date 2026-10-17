#include "BLPKResultPresenter.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "CCObject.h"
#include "CCTouch.h"
#include "CCDirector.h"
#include "BLLeakUtils.h"
#include "BLMission.h"
#include "BLPKResultView.h"
#include "BLResultManager.h"
#include "BLRoleAttribute.h"
#include "BluetoothHelper.h"
#include "DataManager.h"
#include "UIManager.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <new>   // ghost_fix.js 自动补齐
using namespace CocosDenshion;
#include "umeng_builtin.h"

using namespace cocos2d;
// 兜底声明
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0065c05c;
extern "C" unsigned long UNK_0065c074;
extern "C" unsigned long UNK_0065c08c;
extern "C" unsigned long UNK_0065c0a4;
extern "C" unsigned long UNK_0065c100;
extern "C" unsigned long UNK_0065c11a;
extern "C" unsigned long UNK_0065c160;
extern "C" unsigned long UNK_0065c188;
extern "C" unsigned long UNK_0065c1ea;
extern "C" unsigned long UNK_0065c218;
extern "C" unsigned long UNK_0065c37c;
extern "C" unsigned long UNK_0065c3ca;
extern "C" unsigned long _DAT_0065c5b4;
extern "C" unsigned long _DAT_0065c5b8;
extern "C" unsigned long _DAT_0065c5bc;
extern "C" unsigned long _DAT_0065c5c0;
extern "C" unsigned long _UNK_0065c060;
extern "C" unsigned long _UNK_0065c078;
extern "C" unsigned long _UNK_0065c090;
extern "C" unsigned long _UNK_0065c0a8;
extern "C" unsigned long _UNK_0065c14c;
extern "C" unsigned long _UNK_0065c150;
extern "C" unsigned long _UNK_0065c164;
extern "C" unsigned long _UNK_0065c18c;
extern "C" unsigned long _UNK_0065c244;
extern "C" unsigned long _UNK_0065c248;
extern "C" unsigned long _UNK_0065c464;
extern "C" unsigned long _UNK_0065c468;
extern "C" unsigned long _UNK_0065c46c;
extern "C" unsigned long g_0065c05c;
extern "C" unsigned long g_0065c060;
extern "C" unsigned long g_0065c074;
extern "C" unsigned long g_0065c078;
extern "C" unsigned long g_0065c08c;
extern "C" unsigned long g_0065c090;
extern "C" unsigned long g_0065c0a4;
extern "C" unsigned long g_0065c0a8;
extern "C" unsigned long g_0065c100;
extern "C" unsigned long g_0065c11a;
extern "C" unsigned long g_0065c14c;
extern "C" unsigned long g_0065c150;
extern "C" unsigned long g_0065c160;
extern "C" unsigned long g_0065c164;
extern "C" unsigned long g_0065c188;
extern "C" unsigned long g_0065c18c;
extern "C" unsigned long g_0065c1ea;
extern "C" unsigned long g_0065c218;
extern "C" unsigned long g_0065c244;
extern "C" unsigned long g_0065c248;
extern "C" unsigned long g_0065c37c;
extern "C" unsigned long g_0065c3ca;
extern "C" unsigned long g_0065c464;
extern "C" unsigned long g_0065c468;
extern "C" unsigned long g_0065c46c;
extern "C" unsigned long g_0065c5b4;
extern "C" unsigned long g_0065c5b8;
extern "C" unsigned long g_0065c5bc;
extern "C" unsigned long g_0065c5c0;
bool BLPKResultPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLPKResultPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLPKResultPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLPKResultPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLPKResultPresenter::tick(float p1)
{
  return;
}

BLPKResultPresenter::~BLPKResultPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0065c100 + g_0065c14c);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x3c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0065c11a + g_0065c150,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLPKResultPresenter::onQuit(cocos2d::CCObject* p1, unsigned int p2)
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((BLMission *)this)->currentMission();
  piVar1 = (int *)(**(code **)(*piVar1 + 0x208))();
  iVar2 = (**(code **)(*piVar1 + 0x98))();
  ((BLRoleAttribute *)iVar2 + 0x1c4)->ResetHeroProperty();
  ((BLResultManager *)this)->shareManager();
  ((BLResultManager *)this)->returnMainCity();
  ((BluetoothHelper *)this)->share();
  iVar2 = ((BluetoothHelper *)this)->isBlueFight();
  if (iVar2 != 0) {
    ((BluetoothHelper *)this)->share();
    iVar2 = ((BluetoothHelper *)this)->isHost();
    if (iVar2 != 0) {
      ((BluetoothHelper *)this)->share();
      ((BluetoothHelper *)this)->enterMainCity();
    }
  }
  return;
}

BLPKResultPresenter::BLPKResultPresenter()
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
  iVar3 = *(int *)(&g_0065c1ea + g_0065c244);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x3c;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 1);
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0065c218 + g_0065c248,&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

undefined4 BLPKResultPresenter::create(BLPKResultView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x1c))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLPKResultPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  ((UIManager *)this)->shareManager();
  ((UIManager *)this)->popUnEnableScrollView();
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  return;
}

void BLPKResultPresenter::onEnter()
{
  ((UIManager *)this)->shareManager();
  ((UIManager *)this)->pushCurScrollViewUnEnable();
  return;
}

undefined4 BLPKResultPresenter::initWithView(BLPKResultView* p1)
{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  code *pcVar6;
  undefined4 auStack_38 [2];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  *(undefined4 *)(((int)this) + 0x18) = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  ((BluetoothHelper *)this)->share();
  iVar1 = (undefined4)(intptr_t)(((BluetoothHelper *)this)->isBlueFight());
  puVar5 = &uStack_28;
  if (iVar1 != 0) {
    ((BluetoothHelper *)this)->share();
    iVar1 = (undefined4)(intptr_t)(((BluetoothHelper *)this)->isHost());
    if (iVar1 != 0) {
      piVar2 = (int *)((BLPKResultView *)(*(undefined4 *)(((int)this) + 0x18)))->getBtnQuit();
      (**(code **)(*(int *)(piVar2) + (0x90)))(piVar2,1);
      piVar2 = (int *)((BLPKResultView *)(*(undefined4 *)(((int)this) + 0x18)))->getLabQuit();
      (**(code **)(*(int *)(piVar2) + (0x90)))(piVar2,1);
      piVar2 = (int *)((BLPKResultView *)(*(undefined4 *)(((int)this) + 0x18)))->getBtnQuit();
      uStack_1c = (undefined4)(0);
      uStack_20 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_0065c3ca + (intptr_t)(g_0065c468))));
      (**(code **)(*(int *)(piVar2) + (0x254)))(piVar2,((int)this),uStack_20,0,0x20);
      piVar2 = (int *)((BLPKResultView *)(*(undefined4 *)(((int)this) + 0x18)))->getSpLabel();
      pcVar6 = *(code **)(*piVar2 + 0x4c);
      0 /* ctorZero */;
      cocos2d::CCDirector::sharedDirector();
      uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
      uVar3 = (undefined4)(func_0079e4dc(auStack_38[0],uVar3));
      0 /* ctorZero */;
      cocos2d::CCDirector::sharedDirector();
      uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
      uVar4 = (undefined4)(func_0079e4dc(uStack_2c,uVar4));
      0 /* ctorZero */;
      (*pcVar6)(piVar2,puVar5);
      piVar2 = (int *)((DataManager *)this)->shareDataManager();
      (**(code **)(*(int *)(piVar2) + (0xcc)))(piVar2,1);
      piVar2 = (int *)((BLMission *)this)->currentMission();
      (**(code **)(*(int *)(piVar2) + (0x1fc)))(piVar2,1);
      uVar3 = (undefined4)(((DataManager *)this)->shareDataManager());
      ((DataManager *)(uVar3))->getCurrentMission();
      ((umeng::MobClickCpp *)this)->failLevel((char const*)uStack_28);
      goto code_r0x0065c36c;
    }
  }
  piVar2 = (int *)((BLPKResultView *)(*(undefined4 *)(((int)this) + 0x18)))->getBtnQuit();
  (**(code **)(*(int *)(piVar2) + (0x90)))(piVar2,0);
  piVar2 = (int *)((BLPKResultView *)(*(undefined4 *)(((int)this) + 0x18)))->getLabQuit();
  (**(code **)(*(int *)(piVar2) + (0x90)))(piVar2,0);
  piVar2 = (int *)((BLPKResultView *)(*(undefined4 *)(((int)this) + 0x18)))->getSpLabel();
  pcVar6 = *(code **)(*piVar2 + 0x4c);
  0 /* ctorZero */;
  cocos2d::CCDirector::sharedDirector();
  uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar3 = (undefined4)(func_0079e4dc(uStack_30,uVar3));
  0 /* ctorZero */;
  cocos2d::CCDirector::sharedDirector();
  uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar4 = (undefined4)(func_0079e4dc(uStack_24,uVar4));
  0 /* ctorZero */;
  (*pcVar6)(piVar2,&uStack_20);
  piVar2 = (int *)((DataManager *)this)->shareDataManager();
  (**(code **)(*(int *)(piVar2) + (0xcc)))(piVar2,1);
  piVar2 = (int *)((BLMission *)this)->currentMission();
  (**(code **)(*(int *)(piVar2) + (0x1fc)))(piVar2,1);
  uVar3 = (undefined4)(((DataManager *)this)->shareDataManager());
  ((DataManager *)(uVar3))->getCurrentMission();
  ((umeng::MobClickCpp *)this)->failLevel((char const*)uStack_20);
  puVar5 = &uStack_20;
code_r0x0065c36c:
  func_0079e2bc(puVar5);
  uVar3 = (undefined4)(((CocosDenshion::SimpleAudioEngine *)this)->sharedEngine());
  ((CocosDenshion::SimpleAudioEngine *)(uVar3))->playEffect((char const*)(unsigned char *)((char *)&g_0065c37c + (intptr_t)(g_0065c464)), 0);
  return 1;
}

void BLPKResultPresenter::initWith(bool p1)
{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  code *pcVar4;
  code *pcStack_38;
  undefined4 uStack_34;
  undefined4 auStack_30 [2];
  undefined1 auStack_28 [4];
  undefined4 uStack_24;
  undefined1 auStack_20 [12];
  
  if (p1 == 0) {
    func_0079e45c(auStack_20,((intptr_t)"battleEnd_lose.png"),auStack_28);
    piVar1 = (int *)0 /* ctorZero */;
    func_0079e2bc(auStack_20);
    piVar2 = (int *)((BLPKResultView *)*(undefined4 *)(((int)this) + 0x18))->getSpLabel();
    pcVar4 = *(code **)(*piVar2 + 0x22c);
    uVar3 = (undefined4)((**(code **)(*piVar1 + 0x214))(piVar1));
    (*pcVar4)(piVar2,uVar3);
    piVar1 = (int *)((BLPKResultView *)*(undefined4 *)(((int)this) + 0x18))->getSpLabel();
    pcStack_38 = *(code **)(*piVar1 + 0x1d4);
    0 /* ctorZero */;
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uStack_34 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(auStack_30[0]),(int)(uVar3)))));
    uVar3 = (undefined4)(g_0065c5c0);
  }
  else {
    func_0079e45c(auStack_20,((intptr_t)"battleEnd_win.png"),auStack_28);
    piVar1 = (int *)0 /* ctorZero */;
    func_0079e2bc(auStack_20);
    piVar2 = (int *)((BLPKResultView *)*(undefined4 *)(((int)this) + 0x18))->getSpLabel();
    pcVar4 = *(code **)(*piVar2 + 0x22c);
    uVar3 = (undefined4)((**(code **)(*piVar1 + 0x214))(piVar1));
    (*pcVar4)(piVar2,uVar3);
    piVar1 = (int *)((BLPKResultView *)*(undefined4 *)(((int)this) + 0x18))->getSpLabel();
    pcStack_38 = *(code **)(*piVar1 + 0x1d4);
    0 /* ctorZero */;
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uStack_34 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(auStack_30[0]),(int)(uVar3)))));
    uVar3 = (undefined4)(0x43800000);
  }
  0 /* ctorZero */;
  cocos2d::CCDirector::sharedDirector();
  uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uStack_24),(int)(uVar3)))));
  0 /* ctorZero */;
  (*pcStack_38)(piVar1,auStack_20);
  piVar1 = (int *)((BLPKResultView *)*(undefined4 *)(((int)this) + 0x18))->getSpLabel();
  (**(code **)(*piVar1 + 0x40))(piVar1,0x3f800000);
  return;
}
