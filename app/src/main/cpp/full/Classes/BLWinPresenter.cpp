#include "BLWinPresenter.h"
#include "CCGeometry.h"
#include "CCScrollView.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
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
#include "BLWinView.h"
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
extern "C" unsigned long UNK_0065ec24;
extern "C" unsigned long UNK_0065ec3c;
extern "C" unsigned long UNK_0065ec54;
extern "C" unsigned long UNK_0065ec6c;
extern "C" unsigned long UNK_0065ec88;
extern "C" unsigned long UNK_0065ece0;
extern "C" unsigned long UNK_0065ed14;
extern "C" unsigned long UNK_0065ed58;
extern "C" unsigned long UNK_0065ed80;
extern "C" unsigned long UNK_0065eda8;
extern "C" unsigned long UNK_0065edce;
extern "C" unsigned long UNK_0065eef4;
extern "C" unsigned long UNK_0065ef1c;
extern "C" unsigned long UNK_0065ef32;
extern "C" unsigned long UNK_0065ef7a;
extern "C" unsigned long UNK_0065f154;
extern "C" unsigned long UNK_0065f160;
extern "C" unsigned long UNK_0065f1d6;
extern "C" unsigned long UNK_0065f1d8;
extern "C" unsigned long UNK_0065f1f0;
extern "C" unsigned long UNK_0065f206;
extern "C" unsigned long UNK_0065f224;
extern "C" unsigned long UNK_0065f22e;
extern "C" unsigned long UNK_0065f2c2;
extern "C" unsigned long UNK_0065f984;
extern "C" unsigned long UNK_0065fa34;
extern "C" unsigned long UNK_0065fa98;
extern "C" unsigned long UNK_0065fba4;
extern "C" unsigned long UNK_0065ff86;
extern "C" unsigned long UNK_0065ffda;
extern "C" unsigned long UNK_00660034;
extern "C" unsigned long UNK_00660058;
extern "C" unsigned long UNK_006603b2;
extern "C" unsigned long UNK_006603c0;
extern "C" unsigned long UNK_006603d0;
extern "C" unsigned long UNK_00660484;
extern "C" unsigned long UNK_00660492;
extern "C" unsigned long UNK_00660696;
extern "C" unsigned long UNK_006606b6;
extern "C" unsigned long UNK_006606d4;
extern "C" unsigned long UNK_006606f2;
extern "C" unsigned long UNK_00660786;
extern "C" unsigned long UNK_006607a0;
extern "C" unsigned long UNK_006607b6;
extern "C" unsigned long UNK_00660808;
extern "C" unsigned long UNK_0066086a;
extern "C" unsigned long UNK_006608b4;
extern "C" unsigned long _DAT_0065f144;
extern "C" unsigned long _DAT_0065f718;
extern "C" unsigned long _DAT_0065f71c;
extern "C" unsigned long _DAT_0065f720;
extern "C" unsigned long _DAT_0065f724;
extern "C" unsigned long _DAT_0065f728;
extern "C" unsigned long _DAT_0065f72c;
extern "C" unsigned long _DAT_0065f730;
extern "C" unsigned long _DAT_0065f734;
extern "C" unsigned long _DAT_0065ff04;
extern "C" unsigned long _DAT_0065ff08;
extern "C" unsigned long _DAT_0065ff0c;
extern "C" unsigned long _DAT_0065ff10;
extern "C" unsigned long _DAT_0065ff14;
extern "C" unsigned long _UNK_0065ec28;
extern "C" unsigned long _UNK_0065ec40;
extern "C" unsigned long _UNK_0065ec58;
extern "C" unsigned long _UNK_0065ec70;
extern "C" unsigned long _UNK_0065ec8c;
extern "C" unsigned long _UNK_0065ed44;
extern "C" unsigned long _UNK_0065ed48;
extern "C" unsigned long _UNK_0065ed5c;
extern "C" unsigned long _UNK_0065ed84;
extern "C" unsigned long _UNK_0065ed98;
extern "C" unsigned long _UNK_0065edac;
extern "C" unsigned long _UNK_0065ee2c;
extern "C" unsigned long _UNK_0065eee0;
extern "C" unsigned long _UNK_0065eee4;
extern "C" unsigned long _UNK_0065eef8;
extern "C" unsigned long _UNK_0065ef20;
extern "C" unsigned long _UNK_0065efac;
extern "C" unsigned long _UNK_0065efb0;
extern "C" unsigned long _UNK_0065f014;
extern "C" unsigned long _UNK_0065f3d8;
extern "C" unsigned long _UNK_0065f3dc;
extern "C" unsigned long _UNK_0065f3e0;
extern "C" unsigned long _UNK_0065f3e4;
extern "C" unsigned long _UNK_0065f3e8;
extern "C" unsigned long _UNK_0065f3ec;
extern "C" unsigned long _UNK_0065f3f0;
extern "C" unsigned long _UNK_0065f3f4;
extern "C" unsigned long _UNK_0065f3f8;
extern "C" unsigned long _UNK_0065f844;
extern "C" unsigned long _UNK_0065fb70;
extern "C" unsigned long _UNK_0065fb74;
extern "C" unsigned long _UNK_0065fb78;
extern "C" unsigned long _UNK_0065fb7c;
extern "C" unsigned long _UNK_0065fb80;
extern "C" unsigned long _UNK_0065fb84;
extern "C" unsigned long _UNK_0065fb88;
extern "C" unsigned long _UNK_0065fb8c;
extern "C" unsigned long _UNK_0065fb90;
extern "C" unsigned long _UNK_0065fb94;
extern "C" unsigned long _UNK_0065fba8;
extern "C" unsigned long _UNK_006602c0;
extern "C" unsigned long _UNK_006602c4;
extern "C" unsigned long _UNK_006602c8;
extern "C" unsigned long _UNK_006602cc;
extern "C" unsigned long _UNK_006602d0;
extern "C" unsigned long _UNK_006602d4;
extern "C" unsigned long _UNK_00660600;
extern "C" unsigned long _UNK_00660604;
extern "C" unsigned long _UNK_00660608;
extern "C" unsigned long _UNK_0066060c;
extern "C" unsigned long _UNK_00660610;
extern "C" unsigned long _UNK_00660614;
extern "C" unsigned long _UNK_00660674;
extern "C" unsigned long _UNK_0066093c;
extern "C" unsigned long _UNK_00660940;
extern "C" unsigned long _UNK_00660944;
extern "C" unsigned long _UNK_00660948;
extern "C" unsigned long _UNK_0066094c;
extern "C" unsigned long _UNK_00660950;
extern "C" unsigned long _UNK_00660954;
extern "C" unsigned long _UNK_00660958;
extern "C" unsigned long _UNK_0066095c;
extern "C" unsigned long _UNK_00660960;
extern "C" unsigned long extraout_r1;
extern "C" unsigned long extraout_r1_00;
extern "C" unsigned long extraout_r1_01;
extern "C" unsigned long extraout_r1_02;
extern "C" unsigned long g_0065ec24;
extern "C" unsigned long g_0065ec28;
extern "C" unsigned long g_0065ec3c;
extern "C" unsigned long g_0065ec40;
extern "C" unsigned long g_0065ec54;
extern "C" unsigned long g_0065ec58;
extern "C" unsigned long g_0065ec6c;
extern "C" unsigned long g_0065ec70;
extern "C" unsigned long g_0065ec88;
extern "C" unsigned long g_0065ec8c;
extern "C" unsigned long g_0065ece0;
extern "C" unsigned long g_0065ed14;
extern "C" unsigned long g_0065ed44;
extern "C" unsigned long g_0065ed48;
extern "C" unsigned long g_0065ed58;
extern "C" unsigned long g_0065ed5c;
extern "C" unsigned long g_0065ed80;
extern "C" unsigned long g_0065ed84;
extern "C" unsigned long g_0065ed98;
extern "C" unsigned long g_0065eda8;
extern "C" unsigned long g_0065edac;
extern "C" unsigned long g_0065edce;
extern "C" unsigned long g_0065ee2c;
extern "C" unsigned long g_0065eee0;
extern "C" unsigned long g_0065eee4;
extern "C" unsigned long g_0065eef4;
extern "C" unsigned long g_0065eef8;
extern "C" unsigned long g_0065ef1c;
extern "C" unsigned long g_0065ef20;
extern "C" unsigned long g_0065ef32;
extern "C" unsigned long g_0065ef7a;
extern "C" unsigned long g_0065efac;
extern "C" unsigned long g_0065efb0;
extern "C" unsigned long g_0065f014;
extern "C" unsigned long g_0065f144;
extern "C" unsigned long g_0065f154;
extern "C" unsigned long g_0065f160;
extern "C" unsigned long g_0065f1d6;
extern "C" unsigned long g_0065f1d8;
extern "C" unsigned long g_0065f1f0;
extern "C" unsigned long g_0065f206;
extern "C" unsigned long g_0065f224;
extern "C" unsigned long g_0065f22e;
extern "C" unsigned long g_0065f2c2;
extern "C" unsigned long g_0065f3d8;
extern "C" unsigned long g_0065f3dc;
extern "C" unsigned long g_0065f3e0;
extern "C" unsigned long g_0065f3e4;
extern "C" unsigned long g_0065f3e8;
extern "C" unsigned long g_0065f3ec;
extern "C" unsigned long g_0065f3f0;
extern "C" unsigned long g_0065f3f4;
extern "C" unsigned long g_0065f3f8;
extern "C" unsigned long g_0065f718;
extern "C" unsigned long g_0065f71c;
extern "C" unsigned long g_0065f720;
extern "C" unsigned long g_0065f724;
extern "C" unsigned long g_0065f728;
extern "C" unsigned long g_0065f72c;
extern "C" unsigned long g_0065f730;
extern "C" unsigned long g_0065f734;
extern "C" unsigned long g_0065f844;
extern "C" unsigned long g_0065f984;
extern "C" unsigned long g_0065fa34;
extern "C" unsigned long g_0065fa98;
extern "C" unsigned long g_0065fb70;
extern "C" unsigned long g_0065fb74;
extern "C" unsigned long g_0065fb78;
extern "C" unsigned long g_0065fb7c;
extern "C" unsigned long g_0065fb80;
extern "C" unsigned long g_0065fb84;
extern "C" unsigned long g_0065fb88;
extern "C" unsigned long g_0065fb8c;
extern "C" unsigned long g_0065fb90;
extern "C" unsigned long g_0065fb94;
extern "C" unsigned long g_0065fba4;
extern "C" unsigned long g_0065fba8;
extern "C" unsigned long g_0065ff04;
extern "C" unsigned long g_0065ff08;
extern "C" unsigned long g_0065ff0c;
extern "C" unsigned long g_0065ff10;
extern "C" unsigned long g_0065ff14;
extern "C" unsigned long g_0065ff86;
extern "C" unsigned long g_0065ffda;
extern "C" unsigned long g_00660034;
extern "C" unsigned long g_00660058;
extern "C" unsigned long g_006602c0;
extern "C" unsigned long g_006602c4;
extern "C" unsigned long g_006602c8;
extern "C" unsigned long g_006602cc;
extern "C" unsigned long g_006602d0;
extern "C" unsigned long g_006602d4;
extern "C" unsigned long g_006603b2;
extern "C" unsigned long g_006603c0;
extern "C" unsigned long g_006603d0;
extern "C" unsigned long g_00660484;
extern "C" unsigned long g_00660492;
extern "C" unsigned long g_00660600;
extern "C" unsigned long g_00660604;
extern "C" unsigned long g_00660608;
extern "C" unsigned long g_0066060c;
extern "C" unsigned long g_00660610;
extern "C" unsigned long g_00660614;
extern "C" unsigned long g_00660674;
extern "C" unsigned long g_00660696;
extern "C" unsigned long g_006606b6;
extern "C" unsigned long g_006606d4;
extern "C" unsigned long g_006606f2;
extern "C" unsigned long g_00660786;
extern "C" unsigned long g_006607a0;
extern "C" unsigned long g_006607b6;
extern "C" unsigned long g_00660808;
extern "C" unsigned long g_0066086a;
extern "C" unsigned long g_006608b4;
extern "C" unsigned long g_0066093c;
extern "C" unsigned long g_00660940;
extern "C" unsigned long g_00660944;
extern "C" unsigned long g_00660948;
extern "C" unsigned long g_0066094c;
extern "C" unsigned long g_00660950;
extern "C" unsigned long g_00660954;
extern "C" unsigned long g_00660958;
extern "C" unsigned long g_0066095c;
extern "C" unsigned long g_00660960;
int BLWinPresenter::getFirstPass() const
{
  return *(undefined4 *)(((int)this) + 0x24);
}

void BLWinPresenter::setFirstPass(int p1)
{
  *(undefined4 *)(((int)this) + 0x24) = p1;
  return;
}

float BLWinPresenter::getRewardPer() const
{
  return *(undefined4 *)(((int)this) + 0x28);
}

void BLWinPresenter::setRewardPer(float p1)
{
  *(undefined4 *)(((int)this) + 0x28) = p1;
  return;
}

bool BLWinPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLWinPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLWinPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLWinPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLWinPresenter::tick(float p1)
{
  return;
}

undefined4 BLWinPresenter::numOfColumn(BLGridView* p1)
{
  return 6;
}

BLWinPresenter::~BLWinPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0065ece0 + g_0065ed44);
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
  func_0079e45c(&uStack_14,&g_0065ed14 + g_0065ed48,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

undefined4 BLWinPresenter::sizeOfGridItem(BLGridView* p1)
{
  0 /* ctorZero */;
  return ((int)this);
}



void BLWinPresenter::numOfRow(BLGridView* p1)
{
  undefined4 p4 = 0;

  undefined8 uVar1;
  
  ((cocos2d::CCArray *)*(undefined4 *)(((int)this) + 0x30))->count();
  uVar1 = func_0079e734();
  func_0079e63c((int)uVar1,(int)((ulonglong)uVar1 >> 0x20),g_0065eee0,g_0065eee4,p4);
  func_0079e7e4();
  func_0079eb44();
  func_0079e5fc();
  return;
}

void BLWinPresenter::touchItemAtIndex(BLGridView* p1, int p2)
{
  uint uVar1;
  
  uVar1 = (undefined4)(((cocos2d::CCArray *)*(undefined4 *)(((int)this) + 0x30))->count());
  if ((p2 < uVar1) && (*(int *)(((int)this) + 0x2c) == (int)(intptr_t)p1)) {
    cocos2d::CCLog((char const*)&g_0065ef1c + g_0065ef20, p2);
  }
  return;
}

BLWinPresenter::BLWinPresenter()
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
  iVar3 = (undefined4)(intptr_t)(*(int *)((unsigned char *)((char *)&g_0065ef32 + (intptr_t)(g_0065efac))));
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x60;
  *(int *)((int)this + 4*(6)) = iVar3 + 0x90;
  *(int *)((int)this + 4*(7)) = iVar3 + 0xa8;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 0);
  *(int *)((int)this + 4*(9)) = 0;
  iVar3 = (undefined4)(intptr_t)(cocos2d::CCArray::create());
  *(int *)((int)this + 4*(0xc)) = iVar3;
  if (iVar3 != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,(unsigned char *)((char *)&g_0065ef7a + (intptr_t)(g_0065efb0)),&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

undefined4 BLWinPresenter::create(BLWinView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x34))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

// ===== 修复: 补回被误删的函数占位 (13) =====
undefined8 BLWinPresenter::onQuit(cocos2d::CCObject* p1, unsigned int p2)
{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uStack_c;
  
  uStack_c = (undefined4)(p1);
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  uVar2 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x28)))());
  ((UserData *)this)->getMission();
  cocos2d::CCLog((char const*)(unsigned char *)((char *)&g_0065edce + (intptr_t)(g_0065ee2c)), uStack_c);
  func_0079e2bc(&uStack_c);
  piVar1 = (int *)((BLMission *)this)->currentMission();
  piVar1 = (int *)(**(code **)(*(int *)(piVar1) + (0x208)))();
  iVar3 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar1) + (0x98)))());
  ((BLRoleAttribute *)iVar3 + 0x1c4)->ResetHeroProperty();
  ((BLResultManager *)this)->shareManager();
  ((BLResultManager *)this)->returnMainCity();
  ((BluetoothHelper *)this)->share();
  iVar3 = (undefined4)(intptr_t)(((BluetoothHelper *)this)->isBlueFight());
  if (iVar3 != 0) {
    ((BluetoothHelper *)this)->share();
    iVar3 = (undefined4)(intptr_t)(((BluetoothHelper *)this)->isHost());
    if (iVar3 != 0) {
      ((BluetoothHelper *)this)->share();
      ((BluetoothHelper *)this)->enterMainCity();
    }
  }
  return ghidra_CONCAT44(uStack_c,((int)this));
}

void BLWinPresenter::onAgain(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLWinPresenter::onEnter()
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
  if ((g_0065f014 < iVar2) && (func_0079e964(iVar2,5), extraout_r1 == 0)) {
    uVar1 = (undefined4)(((ADManager *)this)->getInstance());
    ((ADManager *)uVar1)->checkLenovoAD(1);
  }
  return;
}

void BLWinPresenter::sortBluetoothPackData(cocos2d::CCArray* p1)
{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  code *pcVar7;
  undefined1 auStack_28 [4];
  undefined4 uStack_24;
  undefined1 auStack_20 [4];
  undefined4 uStack_1c;
  
  ((cocos2d::CCArray *)(*(undefined4 *)(((int)this) + 0x30)))->removeAllObjects();
  ((cocos2d::CCArray *)(*(undefined4 *)(((int)this) + 0x30)))->addObjectsFromArray((cocos2d::CCArray*)p1);
  ((BLGridView *)(*(undefined4 *)(((int)this) + 0x2c)))->reloadData(0, 1);
  (**(code **)(**(int **)(((int)this) + 0x2c) + 0x4c))
            (*(int **)(((int)this) + 0x2c),g_0065f144 + 0x65f070);
  iVar1 = (undefined4)(intptr_t)((**(code **)(**(int **)(((int)this) + 0x2c) + 0x8c))());
  uVar2 = (undefined4)(func_0079e5fc(*(undefined4 *)(iVar1 + 4)));
  piVar3 = (int *)((BLWinView *)(*(undefined4 *)(((int)this) + 0x20)))->ScrollviewItems();
  (**(code **)(*(int *)(piVar3) + (0x1f8)))(auStack_20,piVar3);
  uVar5 = (undefined4)(uStack_1c);
  uVar4 = (undefined4)(func_0079e2ec(uVar2));
  iVar1 = (undefined4)(intptr_t)(func_0079e7b4(uVar4,uVar5));
  if (iVar1 == 0) {
    uVar5 = (undefined4)(0);
    piVar3 = *(int **)(((int)this) + 0x2c);
    pcVar7 = *(code **)(*piVar3 + 100);
  }
  else {
    piVar3 = (int *)((BLWinView *)(*(undefined4 *)(((int)this) + 0x20)))->ScrollviewItems();
    (**(code **)(*(int *)(piVar3) + (0x1f8)))(auStack_20,piVar3);
    uVar2 = (undefined4)(func_0079e5fc(uStack_1c));
    piVar3 = *(int **)(((int)this) + 0x2c);
    pcVar7 = *(code **)(*piVar3 + 100);
    iVar1 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar3) + (0x8c)))(piVar3));
    uVar5 = (undefined4)(func_0079e2ec(uVar2));
    uVar5 = (undefined4)(func_0079e57c(uVar5,*(undefined4 *)(iVar1 + 4)));
  }
  (*pcVar7)(piVar3,uVar5);
  piVar3 = (int *)((BLWinView *)(*(undefined4 *)(((int)this) + 0x20)))->ScrollviewItems();
  pcVar7 = *(code **)(*piVar3 + 0x88);
  puVar6 = (undefined4 *)(**(code **)(**(int **)(((int)this) + 0x2c) + 0x8c))();
  uVar5 = (undefined4)(func_0079e2ec(uVar2));
  0 /* ctorZero */;
  (*pcVar7)(piVar3,auStack_20);
  uVar4 = (undefined4)(((BLWinView *)(*(undefined4 *)(((int)this) + 0x20)))->ScrollviewItems());
  piVar3 = (int *)((BLWinView *)(*(undefined4 *)(((int)this) + 0x20)))->ScrollviewItems();
  (**(code **)(*(int *)(piVar3) + (0x1f8)))(auStack_28,piVar3);
  uVar5 = (undefined4)(func_0079e57c(uStack_24,uVar5));
  0 /* ctorZero */;
  ((cocos2d::extension::CCScrollView *)(uVar4))->setContentOffset(*(cocos2d::CCPoint *)(void *)&auStack_20, 0);
  return;
}

void BLWinPresenter::sortBackPackData()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLWinPresenter::judageStar()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLWinPresenter::nextMission()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLWinPresenter::onNextMission(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLWinPresenter::nodeOfGridViewAtIndex(BLGridView* p1, cocos2d::CCNode* p2, int p3)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLWinPresenter::initBluetoothData(cocos2d::CCArray* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLWinPresenter::initData()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLWinPresenter::onExit()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

undefined4 BLWinPresenter::initWithView(BLWinView* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
