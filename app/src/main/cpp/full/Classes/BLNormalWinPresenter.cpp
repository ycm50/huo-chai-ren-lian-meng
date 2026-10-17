#include "BLNormalWinPresenter.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "BLNormalWinView.h"
#include "CCNode.h"
#include "CCObject.h"
#include "CCTouch.h"
#include "CCArray.h"
#include "CCDirector.h"
#include "ADManager.h"
#include "BLGameScene.h"
#include "BLGridView.h"
#include "BLItemDataView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLMission.h"
#include "BLMissionChaptersData.h"
#include "BLMissionData.h"
#include "BLMissionRewardData.h"
#include "BLResultManager.h"
#include "BLRoleAttribute.h"
#include "BackPackItemData.h"
#include "BluetoothHelper.h"
#include "CampaignData.h"
#include "DataCacheManager.h"
#include "DataManager.h"
#include "DebugLocalSys.h"
#include "GuideManager.h"
#include "PlatformHelp.h"
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
extern "C" long long func_00442068(...);
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2ec(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e30c(...);
extern "C" long long func_0079e34c(...);
extern "C" long long func_0079e41c(...);
extern "C" long long func_0079e42c(...);
extern "C" long long func_0079e43c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e46c(...);
extern "C" long long func_0079e47c(...);
extern "C" long long func_0079e4ac(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e50c(...);
extern "C" long long func_0079e51c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e56c(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long func_0079e5bc(...);
extern "C" long long func_0079e5fc(...);
extern "C" long long func_0079e62c(...);
extern "C" long long func_0079e63c(...);
extern "C" long long func_0079e68c(...);
extern "C" long long func_0079e6c0(...);
extern "C" long long func_0079e734(...);
extern "C" long long func_0079e754(...);
extern "C" long long func_0079e794(...);
extern "C" long long func_0079e7b4(...);
extern "C" long long func_0079e7e4(...);
extern "C" long long func_0079e854(...);
extern "C" long long func_0079e8a4(...);
extern "C" long long func_0079e8b4(...);
extern "C" long long func_0079e904(...);
extern "C" long long func_0079e914(...);
extern "C" long long func_0079e964(...);
extern "C" long long func_0079e9d4(...);
extern "C" long long func_0079ea14(...);
extern "C" long long func_0079ea24(...);
extern "C" long long func_0079ea34(...);
extern "C" long long func_0079eb44(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0065a6c8;
extern "C" unsigned long UNK_0065a6e0;
extern "C" unsigned long UNK_0065a6f8;
extern "C" unsigned long UNK_0065a72c;
extern "C" unsigned long UNK_0065a784;
extern "C" unsigned long UNK_0065a7b8;
extern "C" unsigned long UNK_0065a7fc;
extern "C" unsigned long UNK_0065a824;
extern "C" unsigned long UNK_0065a84c;
extern "C" unsigned long UNK_0065a964;
extern "C" unsigned long UNK_0065a98c;
extern "C" unsigned long UNK_0065a9a2;
extern "C" unsigned long UNK_0065a9ea;
extern "C" unsigned long UNK_0065aa94;
extern "C" unsigned long UNK_0065b384;
extern "C" unsigned long UNK_0065b434;
extern "C" unsigned long UNK_0065b498;
extern "C" unsigned long UNK_0065bd82;
extern "C" unsigned long UNK_0065bda2;
extern "C" unsigned long UNK_0065bdc0;
extern "C" unsigned long UNK_0065bddc;
extern "C" unsigned long UNK_0065be72;
extern "C" unsigned long UNK_0065be8c;
extern "C" unsigned long UNK_0065bea2;
extern "C" unsigned long UNK_0065bef4;
extern "C" unsigned long UNK_0065bf56;
extern "C" unsigned long UNK_0065bfa0;
extern "C" unsigned long _DAT_0065adb4;
extern "C" unsigned long _DAT_0065adb8;
extern "C" unsigned long _DAT_0065adbc;
extern "C" unsigned long _DAT_0065adc0;
extern "C" unsigned long _DAT_0065adc4;
extern "C" unsigned long _DAT_0065adc8;
extern "C" unsigned long _DAT_0065adcc;
extern "C" unsigned long _DAT_0065add0;
extern "C" unsigned long _DAT_0065add4;
extern "C" unsigned long _DAT_0065b118;
extern "C" unsigned long _DAT_0065b11c;
extern "C" unsigned long _DAT_0065b120;
extern "C" unsigned long _DAT_0065b124;
extern "C" unsigned long _DAT_0065b128;
extern "C" unsigned long _DAT_0065b12c;
extern "C" unsigned long _DAT_0065b130;
extern "C" unsigned long _DAT_0065b134;
extern "C" unsigned long _DAT_0065b970;
extern "C" unsigned long _DAT_0065b974;
extern "C" unsigned long _DAT_0065b978;
extern "C" unsigned long _DAT_0065b97c;
extern "C" unsigned long _DAT_0065b980;
extern "C" unsigned long _DAT_0065b984;
extern "C" unsigned long _DAT_0065bcf0;
extern "C" unsigned long _DAT_0065bcf4;
extern "C" unsigned long _DAT_0065bcf8;
extern "C" unsigned long _DAT_0065bcfc;
extern "C" unsigned long _DAT_0065bd00;
extern "C" unsigned long _DAT_0065bd04;
extern "C" unsigned long _UNK_0065a6cc;
extern "C" unsigned long _UNK_0065a6e4;
extern "C" unsigned long _UNK_0065a6fc;
extern "C" unsigned long _UNK_0065a730;
extern "C" unsigned long _UNK_0065a7e8;
extern "C" unsigned long _UNK_0065a7ec;
extern "C" unsigned long _UNK_0065a800;
extern "C" unsigned long _UNK_0065a828;
extern "C" unsigned long _UNK_0065a83c;
extern "C" unsigned long _UNK_0065a850;
extern "C" unsigned long _UNK_0065a950;
extern "C" unsigned long _UNK_0065a954;
extern "C" unsigned long _UNK_0065a968;
extern "C" unsigned long _UNK_0065a990;
extern "C" unsigned long _UNK_0065aa1c;
extern "C" unsigned long _UNK_0065aa20;
extern "C" unsigned long _UNK_0065aa84;
extern "C" unsigned long _UNK_0065ab4c;
extern "C" unsigned long _UNK_0065ab50;
extern "C" unsigned long _UNK_0065ab54;
extern "C" unsigned long _UNK_0065b244;
extern "C" unsigned long _UNK_0065b570;
extern "C" unsigned long _UNK_0065b574;
extern "C" unsigned long _UNK_0065b578;
extern "C" unsigned long _UNK_0065b57c;
extern "C" unsigned long _UNK_0065b580;
extern "C" unsigned long _UNK_0065b584;
extern "C" unsigned long _UNK_0065b588;
extern "C" unsigned long _UNK_0065b58c;
extern "C" unsigned long _UNK_0065b590;
extern "C" unsigned long _UNK_0065b594;
extern "C" unsigned long _UNK_0065bd64;
extern "C" unsigned long _UNK_0065c024;
extern "C" unsigned long _UNK_0065c028;
extern "C" unsigned long _UNK_0065c02c;
extern "C" unsigned long _UNK_0065c030;
extern "C" unsigned long _UNK_0065c034;
extern "C" unsigned long _UNK_0065c038;
extern "C" unsigned long _UNK_0065c03c;
extern "C" unsigned long _UNK_0065c040;
extern "C" unsigned long _UNK_0065c044;
extern "C" unsigned long _UNK_0065c048;
extern "C" unsigned long extraout_r1;
extern "C" unsigned long extraout_r1_00;
extern "C" unsigned long extraout_r1_01;
extern "C" unsigned long extraout_r1_02;
extern "C" unsigned long g_0065a6c8;
extern "C" unsigned long g_0065a6cc;
extern "C" unsigned long g_0065a6e0;
extern "C" unsigned long g_0065a6e4;
extern "C" unsigned long g_0065a6f8;
extern "C" unsigned long g_0065a6fc;
extern "C" unsigned long g_0065a72c;
extern "C" unsigned long g_0065a730;
extern "C" unsigned long g_0065a784;
extern "C" unsigned long g_0065a7b8;
extern "C" unsigned long g_0065a7e8;
extern "C" unsigned long g_0065a7ec;
extern "C" unsigned long g_0065a7fc;
extern "C" unsigned long g_0065a800;
extern "C" unsigned long g_0065a824;
extern "C" unsigned long g_0065a828;
extern "C" unsigned long g_0065a83c;
extern "C" unsigned long g_0065a84c;
extern "C" unsigned long g_0065a850;
extern "C" unsigned long g_0065a950;
extern "C" unsigned long g_0065a954;
extern "C" unsigned long g_0065a964;
extern "C" unsigned long g_0065a968;
extern "C" unsigned long g_0065a98c;
extern "C" unsigned long g_0065a990;
extern "C" unsigned long g_0065a9a2;
extern "C" unsigned long g_0065a9ea;
extern "C" unsigned long g_0065aa1c;
extern "C" unsigned long g_0065aa20;
extern "C" unsigned long g_0065aa84;
extern "C" unsigned long g_0065aa94;
extern "C" unsigned long g_0065ab4c;
extern "C" unsigned long g_0065ab50;
extern "C" unsigned long g_0065ab54;
extern "C" unsigned long g_0065adb4;
extern "C" unsigned long g_0065adb8;
extern "C" unsigned long g_0065adbc;
extern "C" unsigned long g_0065adc0;
extern "C" unsigned long g_0065adc4;
extern "C" unsigned long g_0065adc8;
extern "C" unsigned long g_0065adcc;
extern "C" unsigned long g_0065add0;
extern "C" unsigned long g_0065add4;
extern "C" unsigned long g_0065b118;
extern "C" unsigned long g_0065b11c;
extern "C" unsigned long g_0065b120;
extern "C" unsigned long g_0065b124;
extern "C" unsigned long g_0065b128;
extern "C" unsigned long g_0065b12c;
extern "C" unsigned long g_0065b130;
extern "C" unsigned long g_0065b134;
extern "C" unsigned long g_0065b244;
extern "C" unsigned long g_0065b384;
extern "C" unsigned long g_0065b434;
extern "C" unsigned long g_0065b498;
extern "C" unsigned long g_0065b570;
extern "C" unsigned long g_0065b574;
extern "C" unsigned long g_0065b578;
extern "C" unsigned long g_0065b57c;
extern "C" unsigned long g_0065b580;
extern "C" unsigned long g_0065b584;
extern "C" unsigned long g_0065b588;
extern "C" unsigned long g_0065b58c;
extern "C" unsigned long g_0065b590;
extern "C" unsigned long g_0065b594;
extern "C" unsigned long g_0065b970;
extern "C" unsigned long g_0065b974;
extern "C" unsigned long g_0065b978;
extern "C" unsigned long g_0065b97c;
extern "C" unsigned long g_0065b980;
extern "C" unsigned long g_0065b984;
extern "C" unsigned long g_0065bcf0;
extern "C" unsigned long g_0065bcf4;
extern "C" unsigned long g_0065bcf8;
extern "C" unsigned long g_0065bcfc;
extern "C" unsigned long g_0065bd00;
extern "C" unsigned long g_0065bd04;
extern "C" unsigned long g_0065bd64;
extern "C" unsigned long g_0065bd82;
extern "C" unsigned long g_0065bda2;
extern "C" unsigned long g_0065bdc0;
extern "C" unsigned long g_0065bddc;
extern "C" unsigned long g_0065be72;
extern "C" unsigned long g_0065be8c;
extern "C" unsigned long g_0065bea2;
extern "C" unsigned long g_0065bef4;
extern "C" unsigned long g_0065bf56;
extern "C" unsigned long g_0065bfa0;
extern "C" unsigned long g_0065c024;
extern "C" unsigned long g_0065c028;
extern "C" unsigned long g_0065c02c;
extern "C" unsigned long g_0065c030;
extern "C" unsigned long g_0065c034;
extern "C" unsigned long g_0065c038;
extern "C" unsigned long g_0065c03c;
extern "C" unsigned long g_0065c040;
extern "C" unsigned long g_0065c044;
extern "C" unsigned long g_0065c048;
int BLNormalWinPresenter::getFirstPass() const
{
  return *(undefined4 *)(((int)this) + 0x20);
}

void BLNormalWinPresenter::setFirstPass(int p1)
{
  *(undefined4 *)(((int)this) + 0x20) = p1;
  return;
}

float BLNormalWinPresenter::getRewardPer() const
{
  return *(undefined4 *)(((int)this) + 0x24);
}

void BLNormalWinPresenter::setRewardPer(float p1)
{
  *(undefined4 *)(((int)this) + 0x24) = p1;
  return;
}

bool BLNormalWinPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLNormalWinPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLNormalWinPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLNormalWinPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLNormalWinPresenter::tick(float p1)
{
  return;
}

undefined4 BLNormalWinPresenter::numOfColumn(BLGridView* p1)
{
  return 6;
}

BLNormalWinPresenter::~BLNormalWinPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0065a784 + g_0065a7e8);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x60;
  *(int *)((int)this + 4*(6)) = iVar2 + 0x90;
  *(int *)((int)this + 4*(7)) = iVar2 + 0xa8;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  if (*(int *)((int)this + 4*(0xc)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0xc)) = 0;
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0065a7b8 + g_0065a7ec,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

undefined4 BLNormalWinPresenter::sizeOfGridItem(BLGridView* p1)
{
  0 /* ctorZero */;
  return ((int)this);
}

void BLNormalWinPresenter::onQuit(cocos2d::CCObject* p1, unsigned int p2)
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


void BLNormalWinPresenter::numOfRow(BLGridView* p1)
{
  undefined4 p4 = 0;

  undefined8 uVar1;
  
  ((cocos2d::CCArray *)*(undefined4 *)(((int)this) + 0x30))->count();
  uVar1 = func_0079e734();
  func_0079e63c((int)uVar1,(int)((ulonglong)uVar1 >> 0x20),g_0065a950,g_0065a954,p4);
  func_0079e7e4();
  func_0079eb44();
  func_0079e5fc();
  return;
}

void BLNormalWinPresenter::touchItemAtIndex(BLGridView* p1, int p2)
{
  uint uVar1;
  
  uVar1 = (undefined4)(((cocos2d::CCArray *)*(undefined4 *)(((int)this) + 0x30))->count());
  if ((p2 < uVar1) && (*(int *)(((int)this) + 0x2c) == (int)(intptr_t)p1)) {
    cocos2d::CCLog((char const*)&g_0065a98c + g_0065a990, p2);
  }
  return;
}


undefined4 BLNormalWinPresenter::create()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x34))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}



void BLNormalWinPresenter::onOpenReward(cocos2d::CCObject* p1, unsigned int p2)
{
  return;
}

// ===== 修复: 补回被误删的函数占位 (12) =====
void BLNormalWinPresenter::onAgain(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

BLNormalWinPresenter::BLNormalWinPresenter()
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
  iVar3 = (undefined4)(intptr_t)(*(int *)((unsigned char *)((char *)&g_0065a9a2 + (intptr_t)(g_0065aa1c))));
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x60;
  *(int *)((int)this + 4*(6)) = iVar3 + 0x90;
  *(int *)((int)this + 4*(7)) = iVar3 + 0xa8;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 0);
  *(int *)((int)this + 4*(8)) = 0;
  iVar3 = (undefined4)(intptr_t)(cocos2d::CCArray::create());
  *(int *)((int)this + 4*(0xc)) = iVar3;
  if (iVar3 != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,(unsigned char *)((char *)&g_0065a9ea + (intptr_t)(g_0065aa20)),&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

void BLNormalWinPresenter::onEnter()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;

  undefined4 uVar1;
  int iVar2;
  int extraout_r1;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  uStack_14 = (undefined4)(p2);
  uStack_10 = (undefined4)(p3);
  uVar1 = (undefined4)(((DataManager *)this)->shareDataManager());
  ((DataManager *)this)->getCurrentMission();
  iVar2 = (undefined4)(intptr_t)(func_0079e6c0(uStack_14));
  func_0079e2bc(&uStack_14);
  if ((g_0065aa84 < iVar2) && (func_0079e964(iVar2,5), extraout_r1 == 0)) {
    uVar1 = (undefined4)(((ADManager *)this)->getInstance());
    ((ADManager *)uVar1)->checkLenovoAD(1);
  }
  return;
}

void BLNormalWinPresenter::onGetMessage(cocos2d::CCObject* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLNormalWinPresenter::sortBackPackData()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLNormalWinPresenter::judageStar()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLNormalWinPresenter::nextMission()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLNormalWinPresenter::onNextMission(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLNormalWinPresenter::nodeOfGridViewAtIndex(BLGridView* p1, cocos2d::CCNode* p2, int p3)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLNormalWinPresenter::initData()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLNormalWinPresenter::onExit()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLNormalWinPresenter::initWithView(BLNormalWinView* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
