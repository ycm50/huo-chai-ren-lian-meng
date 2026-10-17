#include "BLFailedPresenter.h"
#include "ADManager.h"
#include "BLFailedView.h"
#include "BLGameScene.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLMission.h"
#include "BLMissionChaptersData.h"
#include "BLPoPSalePresenter.h"
#include "BLPoPSaleView.h"
#include "BLResultManager.h"
#include "BLRoleAttribute.h"
#include "BluetoothHelper.h"
#include "DataManager.h"
#include "DebugLocalSys.h"
#include "PlatformHelp.h"
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
extern "C" long long func_0042f3fc(...);
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e43c(...);
extern "C" long long func_0079e44c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e46c(...);
extern "C" long long func_0079e47c(...);
extern "C" long long func_0079e4bc(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e60c(...);
extern "C" long long func_0079e784(...);
extern "C" long long ghidra_CONCAT13(...);
extern "C" long long ghidra_CONCAT22(...);
extern "C" long long ghidra_CONCAT31(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" long long ghidra_SUB21(...);
extern "C" unsigned long UNK_00657b60;
extern "C" unsigned long UNK_00657b78;
extern "C" unsigned long UNK_00657b90;
extern "C" unsigned long UNK_00657ba8;
extern "C" unsigned long UNK_00657c04;
extern "C" unsigned long UNK_00657c1e;
extern "C" unsigned long UNK_00657c64;
extern "C" unsigned long UNK_00657c8c;
extern "C" unsigned long UNK_00657d1a;
extern "C" unsigned long UNK_00657d1c;
extern "C" unsigned long UNK_00657d2e;
extern "C" unsigned long UNK_00657d40;
extern "C" unsigned long UNK_00657da6;
extern "C" unsigned long UNK_00657dd4;
extern "C" unsigned long UNK_00657e74;
extern "C" unsigned long UNK_00657e76;
extern "C" unsigned long UNK_00657ebe;
extern "C" unsigned long UNK_00657fc2;
extern "C" unsigned long UNK_00657ff6;
extern "C" unsigned long UNK_0065805a;
extern "C" unsigned long UNK_006580b4;
extern "C" unsigned long UNK_00658134;
extern "C" unsigned long UNK_00658136;
extern "C" unsigned long UNK_00658186;
extern "C" unsigned long UNK_006581cc;
extern "C" unsigned long UNK_00658218;
extern "C" unsigned long UNK_0065824e;
extern "C" unsigned long UNK_00658294;
extern "C" unsigned long UNK_006583c8;
extern "C" unsigned long UNK_006583d8;
extern "C" unsigned long UNK_00658400;
extern "C" unsigned long UNK_00658424;
extern "C" unsigned long UNK_00658426;
extern "C" unsigned long UNK_00658440;
extern "C" unsigned long UNK_00658442;
extern "C" unsigned long UNK_0065845a;
extern "C" unsigned long UNK_006584d2;
extern "C" unsigned long UNK_006584d6;
extern "C" unsigned long UNK_006584f6;
extern "C" unsigned long UNK_006585c2;
extern "C" unsigned long UNK_006585c6;
extern "C" unsigned long UNK_006585e6;
extern "C" unsigned long UNK_006586b2;
extern "C" unsigned long UNK_006586b6;
extern "C" unsigned long UNK_006586d6;
extern "C" unsigned long _UNK_00657b64;
extern "C" unsigned long _UNK_00657b7c;
extern "C" unsigned long _UNK_00657b94;
extern "C" unsigned long _UNK_00657bac;
extern "C" unsigned long _UNK_00657c50;
extern "C" unsigned long _UNK_00657c54;
extern "C" unsigned long _UNK_00657c68;
extern "C" unsigned long _UNK_00657c90;
extern "C" unsigned long _UNK_00657d80;
extern "C" unsigned long _UNK_00657d84;
extern "C" unsigned long _UNK_00657d88;
extern "C" unsigned long _UNK_00657d8c;
extern "C" unsigned long _UNK_00657d90;
extern "C" unsigned long _UNK_00657d94;
extern "C" unsigned long _UNK_00657e00;
extern "C" unsigned long _UNK_00657e04;
extern "C" unsigned long _UNK_00657e94;
extern "C" unsigned long _UNK_00657e98;
extern "C" unsigned long _UNK_00658078;
extern "C" unsigned long _UNK_0065807c;
extern "C" unsigned long _UNK_00658080;
extern "C" unsigned long _UNK_00658084;
extern "C" unsigned long _UNK_00658088;
extern "C" unsigned long _UNK_0065808c;
extern "C" unsigned long _UNK_00658090;
extern "C" unsigned long _UNK_00658094;
extern "C" unsigned long _UNK_00658098;
extern "C" unsigned long _UNK_0065809c;
extern "C" unsigned long _UNK_0065838c;
extern "C" unsigned long _UNK_00658390;
extern "C" unsigned long _UNK_00658394;
extern "C" unsigned long _UNK_00658398;
extern "C" unsigned long _UNK_0065839c;
extern "C" unsigned long _UNK_006583a0;
extern "C" unsigned long _UNK_006583a4;
extern "C" unsigned long _UNK_006583a8;
extern "C" unsigned long _UNK_00658488;
extern "C" unsigned long _UNK_0065848c;
extern "C" unsigned long _UNK_00658490;
extern "C" unsigned long _UNK_00658494;
extern "C" unsigned long _UNK_00658498;
extern "C" unsigned long _UNK_0065849c;
extern "C" unsigned long _UNK_006584a0;
extern "C" unsigned long _UNK_006584a4;
extern "C" unsigned long _UNK_006584a8;
extern "C" unsigned long _UNK_00658590;
extern "C" unsigned long _UNK_00658594;
extern "C" unsigned long _UNK_00658598;
extern "C" unsigned long _UNK_00658680;
extern "C" unsigned long _UNK_00658684;
extern "C" unsigned long _UNK_00658688;
extern "C" unsigned long _UNK_00658770;
extern "C" unsigned long _UNK_00658774;
extern "C" unsigned long _UNK_00658778;
extern "C" unsigned long extraout_r3;
extern "C" unsigned long g_00657b60;
extern "C" unsigned long g_00657b64;
extern "C" unsigned long g_00657b78;
extern "C" unsigned long g_00657b7c;
extern "C" unsigned long g_00657b90;
extern "C" unsigned long g_00657b94;
extern "C" unsigned long g_00657ba8;
extern "C" unsigned long g_00657bac;
extern "C" unsigned long g_00657c04;
extern "C" unsigned long g_00657c1e;
extern "C" unsigned long g_00657c50;
extern "C" unsigned long g_00657c54;
extern "C" unsigned long g_00657c64;
extern "C" unsigned long g_00657c68;
extern "C" unsigned long g_00657c8c;
extern "C" unsigned long g_00657c90;
extern "C" unsigned long g_00657d1a;
extern "C" unsigned long g_00657d1c;
extern "C" unsigned long g_00657d2e;
extern "C" unsigned long g_00657d40;
extern "C" unsigned long g_00657d80;
extern "C" unsigned long g_00657d84;
extern "C" unsigned long g_00657d88;
extern "C" unsigned long g_00657d8c;
extern "C" unsigned long g_00657d90;
extern "C" unsigned long g_00657d94;
extern "C" unsigned long g_00657da6;
extern "C" unsigned long g_00657dd4;
extern "C" unsigned long g_00657e00;
extern "C" unsigned long g_00657e04;
extern "C" unsigned long g_00657e74;
extern "C" unsigned long g_00657e76;
extern "C" unsigned long g_00657e94;
extern "C" unsigned long g_00657e98;
extern "C" unsigned long g_00657ebe;
extern "C" unsigned long g_00657fc2;
extern "C" unsigned long g_00657ff6;
extern "C" unsigned long g_0065805a;
extern "C" unsigned long g_00658078;
extern "C" unsigned long g_0065807c;
extern "C" unsigned long g_00658080;
extern "C" unsigned long g_00658084;
extern "C" unsigned long g_00658088;
extern "C" unsigned long g_0065808c;
extern "C" unsigned long g_00658090;
extern "C" unsigned long g_00658094;
extern "C" unsigned long g_00658098;
extern "C" unsigned long g_0065809c;
extern "C" unsigned long g_006580b4;
extern "C" unsigned long g_00658134;
extern "C" unsigned long g_00658136;
extern "C" unsigned long g_00658186;
extern "C" unsigned long g_006581cc;
extern "C" unsigned long g_00658218;
extern "C" unsigned long g_0065824e;
extern "C" unsigned long g_00658294;
extern "C" unsigned long g_0065838c;
extern "C" unsigned long g_00658390;
extern "C" unsigned long g_00658394;
extern "C" unsigned long g_00658398;
extern "C" unsigned long g_0065839c;
extern "C" unsigned long g_006583a0;
extern "C" unsigned long g_006583a4;
extern "C" unsigned long g_006583a8;
extern "C" unsigned long g_006583c8;
extern "C" unsigned long g_006583d8;
extern "C" unsigned long g_00658400;
extern "C" unsigned long g_00658424;
extern "C" unsigned long g_00658426;
extern "C" unsigned long g_00658440;
extern "C" unsigned long g_00658442;
extern "C" unsigned long g_0065845a;
extern "C" unsigned long g_00658488;
extern "C" unsigned long g_0065848c;
extern "C" unsigned long g_00658490;
extern "C" unsigned long g_00658494;
extern "C" unsigned long g_00658498;
extern "C" unsigned long g_0065849c;
extern "C" unsigned long g_006584a0;
extern "C" unsigned long g_006584a4;
extern "C" unsigned long g_006584a8;
extern "C" unsigned long g_006584d2;
extern "C" unsigned long g_006584d6;
extern "C" unsigned long g_006584f6;
extern "C" unsigned long g_00658590;
extern "C" unsigned long g_00658594;
extern "C" unsigned long g_00658598;
extern "C" unsigned long g_006585c2;
extern "C" unsigned long g_006585c6;
extern "C" unsigned long g_006585e6;
extern "C" unsigned long g_00658680;
extern "C" unsigned long g_00658684;
extern "C" unsigned long g_00658688;
extern "C" unsigned long g_006586b2;
extern "C" unsigned long g_006586b6;
extern "C" unsigned long g_006586d6;
extern "C" unsigned long g_00658770;
extern "C" unsigned long g_00658774;
extern "C" unsigned long g_00658778;
bool BLFailedPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLFailedPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLFailedPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLFailedPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLFailedPresenter::tick(float p1)
{
  return;
}

BLFailedPresenter::~BLFailedPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_00657c04 + g_00657c50);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x3c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00657c1e + g_00657c54,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLFailedPresenter::onQuit(cocos2d::CCObject* p1, unsigned int p2)
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

void BLFailedPresenter::onGetHero(cocos2d::CCObject* p1, unsigned int p2)
{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  iVar2 = (**(code **)(*piVar1 + 0x118))();
  if (iVar2 != 9) {
    ((BLGameScene *)this)->shareGameScene();
    ((BLGameScene *)this)->showBlackLayer();
    uVar3 = (undefined4)(((UIManager *)this)->shareManager());
    ((UIManager *)uVar3)->showUIById(0xc);
  }
  return;
}


BLFailedPresenter::BLFailedPresenter()
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
  iVar3 = *(int *)(&g_00657da6 + g_00657e00);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x3c;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 1);
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00657dd4 + g_00657e04,&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

undefined4 BLFailedPresenter::create(BLFailedView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x1c))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLFailedPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  ((UIManager *)this)->shareManager();
  ((UIManager *)this)->popUnEnableScrollView();
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar2)->removeAllObservers((cocos2d::CCObject*)((int)this));
  uVar2 = (undefined4)(((ADManager *)this)->getInstance());
  ((ADManager *)uVar2)->closeLenovoAD(2);
  return;
}



void BLFailedPresenter::onAttack(cocos2d::CCObject* p1, unsigned int p2)
{
  return;
}

void BLFailedPresenter::onDefense(cocos2d::CCObject* p1, unsigned int p2)
{
  return;
}

void BLFailedPresenter::onLife(cocos2d::CCObject* p1, unsigned int p2)
{
  return;
}

// ===== 修复: 补回被误删的函数占位 (8) =====
void BLFailedPresenter::onRelifeComplete(cocos2d::CCObject* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLFailedPresenter::onEnter()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

undefined4 BLFailedPresenter::initWithView(BLFailedView* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

undefined4 BLFailedPresenter::getUnlock(std::string p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void BLFailedPresenter::onRelife(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLFailedPresenter::onEquip(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLFailedPresenter::onStrengthen(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLFailedPresenter::onSkill(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
