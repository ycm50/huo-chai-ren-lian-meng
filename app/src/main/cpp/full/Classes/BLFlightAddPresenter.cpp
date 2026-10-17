#include "BLFlightAddPresenter.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "CCObject.h"
#include "CCTouch.h"
#include "CCDirector.h"
#include "BLFlightAddView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLMission.h"
#include "BLRole.h"
#include "BLRoleAttribute.h"
#include "DataManager.h"
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
#include "umeng_builtin.h"

using namespace cocos2d;
// 兜底声明
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2ec(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e5fc(...);
extern "C" long long func_0079e62c(...);
extern "C" long long func_0079e744(...);
extern "C" long long func_0079e7e4(...);
extern "C" long long func_0079e824(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_005eb9e4;
extern "C" unsigned long UNK_005eb9fc;
extern "C" unsigned long UNK_005eba14;
extern "C" unsigned long UNK_005eba88;
extern "C" unsigned long UNK_005ebaa2;
extern "C" unsigned long UNK_005ebae8;
extern "C" unsigned long UNK_005ebb10;
extern "C" unsigned long UNK_005ebb46;
extern "C" unsigned long UNK_005ebb74;
extern "C" unsigned long UNK_005ebc02;
extern "C" unsigned long UNK_005ebc22;
extern "C" unsigned long UNK_005ebc68;
extern "C" unsigned long UNK_005ebcb8;
extern "C" unsigned long UNK_005ebd08;
extern "C" unsigned long UNK_005ebd48;
extern "C" unsigned long UNK_005ebdd0;
extern "C" unsigned long UNK_005ebe4c;
extern "C" unsigned long UNK_005ebf46;
extern "C" unsigned long UNK_005ec040;
extern "C" unsigned long UNK_005ec166;
extern "C" unsigned long UNK_005ec1da;
extern "C" unsigned long _UNK_005eb9e8;
extern "C" unsigned long _UNK_005eba00;
extern "C" unsigned long _UNK_005eba18;
extern "C" unsigned long _UNK_005ebad4;
extern "C" unsigned long _UNK_005ebad8;
extern "C" unsigned long _UNK_005ebaec;
extern "C" unsigned long _UNK_005ebb14;
extern "C" unsigned long _UNK_005ebba0;
extern "C" unsigned long _UNK_005ebba4;
extern "C" unsigned long _UNK_005ebda0;
extern "C" unsigned long _UNK_005ebda4;
extern "C" unsigned long _UNK_005ebda8;
extern "C" unsigned long _UNK_005ebdac;
extern "C" unsigned long _UNK_005ebdb0;
extern "C" unsigned long _UNK_005ebdb4;
extern "C" unsigned long _UNK_005ec120;
extern "C" unsigned long _UNK_005ec124;
extern "C" unsigned long _UNK_005ec128;
extern "C" unsigned long _UNK_005ec12c;
extern "C" unsigned long _UNK_005ec130;
extern "C" unsigned long _UNK_005ec134;
extern "C" unsigned long _UNK_005ec138;
extern "C" unsigned long _UNK_005ec13c;
extern "C" unsigned long _UNK_005ec140;
extern "C" unsigned long _UNK_005ec1b4;
extern "C" unsigned long _UNK_005ec200;
extern "C" unsigned long _UNK_005ec204;
extern "C" unsigned long _UNK_005ec208;
extern "C" unsigned long g_005eb9e4;
extern "C" unsigned long g_005eb9e8;
extern "C" unsigned long g_005eb9fc;
extern "C" unsigned long g_005eba00;
extern "C" unsigned long g_005eba14;
extern "C" unsigned long g_005eba18;
extern "C" unsigned long g_005eba88;
extern "C" unsigned long g_005ebaa2;
extern "C" unsigned long g_005ebad4;
extern "C" unsigned long g_005ebad8;
extern "C" unsigned long g_005ebae8;
extern "C" unsigned long g_005ebaec;
extern "C" unsigned long g_005ebb10;
extern "C" unsigned long g_005ebb14;
extern "C" unsigned long g_005ebb46;
extern "C" unsigned long g_005ebb74;
extern "C" unsigned long g_005ebba0;
extern "C" unsigned long g_005ebba4;
extern "C" unsigned long g_005ebc02;
extern "C" unsigned long g_005ebc22;
extern "C" unsigned long g_005ebc68;
extern "C" unsigned long g_005ebcb8;
extern "C" unsigned long g_005ebd08;
extern "C" unsigned long g_005ebd48;
extern "C" unsigned long g_005ebda0;
extern "C" unsigned long g_005ebda4;
extern "C" unsigned long g_005ebda8;
extern "C" unsigned long g_005ebdac;
extern "C" unsigned long g_005ebdb0;
extern "C" unsigned long g_005ebdb4;
extern "C" unsigned long g_005ebdd0;
extern "C" unsigned long g_005ebe4c;
extern "C" unsigned long g_005ebf46;
extern "C" unsigned long g_005ec040;
extern "C" unsigned long g_005ec120;
extern "C" unsigned long g_005ec124;
extern "C" unsigned long g_005ec128;
extern "C" unsigned long g_005ec12c;
extern "C" unsigned long g_005ec130;
extern "C" unsigned long g_005ec134;
extern "C" unsigned long g_005ec138;
extern "C" unsigned long g_005ec13c;
extern "C" unsigned long g_005ec140;
extern "C" unsigned long g_005ec166;
extern "C" unsigned long g_005ec1b4;
extern "C" unsigned long g_005ec1da;
extern "C" unsigned long g_005ec200;
extern "C" unsigned long g_005ec204;
extern "C" unsigned long g_005ec208;
bool BLFlightAddPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLFlightAddPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLFlightAddPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLFlightAddPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLFlightAddPresenter::tick(float p1)
{
  return;
}

BLFlightAddPresenter::~BLFlightAddPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_005eba88 + g_005ebad4);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x3c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005ebaa2 + g_005ebad8,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLFlightAddPresenter::onQuit(cocos2d::CCObject* p1, unsigned int p2)
{
  int *piVar1;
  undefined4 uVar2;
  undefined4 in_r3;
  code *pcVar3;
  
  piVar1 = (int *)((BLMission *)this)->currentMission();
  pcVar3 = *(code **)(*piVar1 + 0x1fc);
  (*pcVar3)(piVar1,0,*piVar1,pcVar3,in_r3);
  uVar2 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar2)->removeUIByID(0x97);
  return;
}

BLFlightAddPresenter::BLFlightAddPresenter()
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
  iVar3 = *(int *)(&g_005ebb46 + g_005ebba0);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x3c;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 1);
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005ebb74 + g_005ebba4,&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

undefined4 BLFlightAddPresenter::create(BLFlightAddView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x1c))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLFlightAddPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  return;
}

void BLFlightAddPresenter::onEnter()
{
  return;
}

// ===== 修复: 补回被误删的函数占位 (3) =====
void BLFlightAddPresenter::initWithView(BLFlightAddView* p1)
{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  code *pcVar4;
  undefined1 auStack_34 [4];
  undefined1 auStack_30 [4];
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  *(undefined4 *)(((int)this) + 0x18) = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  piVar1 = (int *)((BLFlightAddView *)(p1))->getBtbQuit();
  uStack_28 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_005ebc02 + (intptr_t)(g_005ebda0))));
  uStack_24 = (undefined4)(0);
  (**(code **)(*(int *)(piVar1) + (0x254)))(piVar1,((int)this),uStack_28,0,0x20);
  piVar1 = (int *)((BLFlightAddView *)(*(undefined4 *)(((int)this) + 0x18)))->getBtnRelife();
  uStack_20 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_005ebc22 + (intptr_t)(g_005ebda4))));
  uStack_1c = (undefined4)(0);
  (**(code **)(*(int *)(piVar1) + (0x254)))(piVar1,((int)this),uStack_20,0,0x20);
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  piVar1 = (int *)(**(code **)(*(int *)(piVar1) + (0x28)))();
  iVar2 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar1) + (0x158)))());
  if (iVar2 == 1) {
    piVar1 = (int *)((BLFlightAddView *)(*(undefined4 *)(((int)this) + 0x18)))->getLabeTip();
    pcVar4 = *(code **)(*piVar1 + 0x234);
    uVar3 = (undefined4)(((BLLanguage *)this)->share());
    func_0079e45c(auStack_30,(unsigned char *)((char *)&g_005ebc68 + (intptr_t)(g_005ebda8)),auStack_34);
    ((BLLanguage *)this)->getString(*(std::string *)(void *)&uStack_2c);
    (*pcVar4)(piVar1,uStack_2c);
  }
  else {
    piVar1 = (int *)((DataManager *)this)->shareDataManager();
    piVar1 = (int *)(**(code **)(*(int *)(piVar1) + (0x28)))();
    iVar2 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar1) + (0x158)))());
    if (iVar2 == 2) {
      piVar1 = (int *)((BLFlightAddView *)(*(undefined4 *)(((int)this) + 0x18)))->getLabeTip();
      pcVar4 = *(code **)(*piVar1 + 0x234);
      uVar3 = (undefined4)(((BLLanguage *)this)->share());
      func_0079e45c(auStack_30,(unsigned char *)((char *)&g_005ebcb8 + (intptr_t)(g_005ebdac)),auStack_34);
      ((BLLanguage *)this)->getString(*(std::string *)(void *)&uStack_2c);
      (*pcVar4)(piVar1,uStack_2c);
    }
    else {
      piVar1 = (int *)((DataManager *)this)->shareDataManager();
      piVar1 = (int *)(**(code **)(*(int *)(piVar1) + (0x28)))();
      iVar2 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar1) + (0x158)))());
      if (iVar2 != 3) goto code_r0x005ebd2a;
      piVar1 = (int *)((BLFlightAddView *)(*(undefined4 *)(((int)this) + 0x18)))->getLabeTip();
      pcVar4 = *(code **)(*piVar1 + 0x234);
      uVar3 = (undefined4)(((BLLanguage *)this)->share());
      func_0079e45c(auStack_30,(unsigned char *)((char *)&g_005ebd08 + (intptr_t)(g_005ebdb0)),auStack_34);
      ((BLLanguage *)this)->getString(*(std::string *)(void *)&uStack_2c);
      (*pcVar4)(piVar1,uStack_2c);
    }
  }
  func_0079e2bc(&uStack_2c);
  func_0079e2bc(auStack_30);
code_r0x005ebd2a:
  piVar1 = (int *)((BLFlightAddView *)(*(undefined4 *)(((int)this) + 0x18)))->getLabRelife();
  pcVar4 = *(code **)(*piVar1 + 0x234);
  uVar3 = (undefined4)(((BLLanguage *)this)->share());
  func_0079e45c(auStack_30,(unsigned char *)((char *)&g_005ebd48 + (intptr_t)(g_005ebdb4)),auStack_34);
  ((BLLanguage *)this)->getString(*(std::string *)(void *)&uStack_2c);
  (*pcVar4)(piVar1,uStack_2c);
  func_0079e2bc(&uStack_2c);
  func_0079e2bc(auStack_30);
  piVar1 = (int *)((BLMission *)this)->currentMission();
  (**(code **)(*(int *)(piVar1) + (0x1fc)))(piVar1,1);
  return;
}

void BLFlightAddPresenter::onRelifeComplete(cocos2d::CCObject* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLFlightAddPresenter::onReLife(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 uStack_10;
  
  uVar1 = (undefined4)(((DataManager *)this)->shareDataManager());
  iVar2 = (undefined4)(intptr_t)(((DataManager *)(uVar1))->isEnoughVirNumber(2, 0x14, 1));
  uStack_10 = (undefined4)((int *)((int)this));
  if (iVar2 != 0) {
    ((umeng::MobClickCpp *)((unsigned char *)((char *)&g_005ec1da + (intptr_t)(g_005ec208))))->buy((char const*)1, g_005ec200, g_005ec204);
    piVar3 = (int *)((DataManager *)this)->shareDataManager();
    uVar1 = (undefined4)((**(code **)(*(int *)(piVar3) + (0x28)))());
    uStack_10 = (undefined4)(1);
    ((UserData *)(uVar1))->subVirNumber(2, g_005ec200, g_005ec204);
    ((BLFlightAddPresenter *)(((int)this)))->onRelifeComplete(0);
  }
  return;
}
