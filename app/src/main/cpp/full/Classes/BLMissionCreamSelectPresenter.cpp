#include "BLMissionCreamSelectPresenter.h"
#include "CCUserDefault.h"
#include "CCNotificationCenter.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "CCObject.h"
#include "CCTouch.h"
#include "CCDirector.h"
#include "CCString.h"
#include "BLForwards.h"
#include "MissionCreamSelectData.h"
#include "BLMissionCreamSelectView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLMissionCreamBuyPresenter.h"
#include "BLMissionCreamBuyView.h"
#include "DataManager.h"
#include "DebugLocalSys.h"
#include "MirrorDataManager.h"
#include "MissionValleryData.h"
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
extern "C" long long func_0079e4ac(...);
extern "C" long long func_0079e4bc(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e6c0(...);
extern "C" long long func_0079e734(...);
extern "C" long long func_0079e974(...);
extern "C" long long func_0079ea04(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_005c2a54;
extern "C" unsigned long UNK_005c2a74;
extern "C" unsigned long UNK_005c2ab8;
extern "C" unsigned long UNK_005c2ae0;
extern "C" unsigned long UNK_005c2b2e;
extern "C" unsigned long UNK_005c2b48;
extern "C" unsigned long UNK_005c2bdc;
extern "C" unsigned long UNK_005c2c5c;
extern "C" unsigned long UNK_005c2c9a;
extern "C" unsigned long UNK_005c2c9c;
extern "C" unsigned long UNK_005c2cb2;
extern "C" unsigned long UNK_005c2cb4;
extern "C" unsigned long UNK_005c2d24;
extern "C" unsigned long UNK_005c2d3c;
extern "C" unsigned long UNK_005c2d74;
extern "C" unsigned long UNK_005c2db4;
extern "C" unsigned long UNK_005c2ea4;
extern "C" unsigned long UNK_005c2ed4;
extern "C" unsigned long UNK_005c2f04;
extern "C" unsigned long UNK_005c2fba;
extern "C" unsigned long UNK_005c2fe6;
extern "C" unsigned long UNK_005c3002;
extern "C" unsigned long UNK_005c3026;
extern "C" unsigned long UNK_005c3042;
extern "C" unsigned long UNK_005c3080;
extern "C" unsigned long UNK_005c3082;
extern "C" unsigned long UNK_005c3098;
extern "C" unsigned long UNK_005c309a;
extern "C" unsigned long UNK_005c3126;
extern "C" unsigned long UNK_005c314c;
extern "C" unsigned long UNK_005c3156;
extern "C" unsigned long UNK_005c3168;
extern "C" unsigned long UNK_005c3176;
extern "C" unsigned long UNK_005c3180;
extern "C" unsigned long UNK_005c31e0;
extern "C" unsigned long UNK_005c31fc;
extern "C" unsigned long UNK_005c322a;
extern "C" unsigned long UNK_005c3252;
extern "C" unsigned long UNK_005c327a;
extern "C" unsigned long UNK_005c328c;
extern "C" unsigned long UNK_005c329a;
extern "C" unsigned long UNK_005c32a4;
extern "C" unsigned long UNK_005c3302;
extern "C" unsigned long UNK_005c331c;
extern "C" unsigned long UNK_005c3374;
extern "C" unsigned long UNK_005c3382;
extern "C" unsigned long UNK_005c3390;
extern "C" unsigned long UNK_005c339e;
extern "C" unsigned long UNK_005c33b6;
extern "C" unsigned long UNK_005c3482;
extern "C" unsigned long UNK_005c34be;
extern "C" unsigned long UNK_005c3528;
extern "C" unsigned long UNK_005c3536;
extern "C" unsigned long UNK_005c355e;
extern "C" unsigned long UNK_005c3570;
extern "C" unsigned long UNK_005c3590;
extern "C" unsigned long UNK_005c35ac;
extern "C" unsigned long UNK_005c35c8;
extern "C" unsigned long UNK_005c35e4;
extern "C" unsigned long UNK_005c365a;
extern "C" unsigned long UNK_005c3698;
extern "C" unsigned long UNK_005c36d6;
extern "C" unsigned long UNK_005c3702;
extern "C" unsigned long UNK_005c373a;
extern "C" unsigned long UNK_005c3748;
extern "C" unsigned long UNK_005c3820;
extern "C" unsigned long UNK_005c3870;
extern "C" unsigned long UNK_005c3872;
extern "C" unsigned long UNK_005c3888;
extern "C" unsigned long UNK_005c388a;
extern "C" unsigned long UNK_005c3908;
extern "C" unsigned long UNK_005c393c;
extern "C" unsigned long UNK_005c395c;
extern "C" unsigned long UNK_005c3b1c;
extern "C" unsigned long UNK_005c3b64;
extern "C" unsigned long UNK_005c3bde;
extern "C" unsigned long UNK_005c3c16;
extern "C" unsigned long UNK_005c3c56;
extern "C" unsigned long UNK_005c3ca6;
extern "C" unsigned long _UNK_005c2aa4;
extern "C" unsigned long _UNK_005c2aa8;
extern "C" unsigned long _UNK_005c2abc;
extern "C" unsigned long _UNK_005c2ae4;
extern "C" unsigned long _UNK_005c2ba0;
extern "C" unsigned long _UNK_005c2ba4;
extern "C" unsigned long _UNK_005c2ba8;
extern "C" unsigned long _UNK_005c2c34;
extern "C" unsigned long _UNK_005c2cf4;
extern "C" unsigned long _UNK_005c2cf8;
extern "C" unsigned long _UNK_005c2cfc;
extern "C" unsigned long _UNK_005c2d00;
extern "C" unsigned long _UNK_005c2d04;
extern "C" unsigned long _UNK_005c2e50;
extern "C" unsigned long _UNK_005c2e54;
extern "C" unsigned long _UNK_005c2e58;
extern "C" unsigned long _UNK_005c2e5c;
extern "C" unsigned long _UNK_005c2e60;
extern "C" unsigned long _UNK_005c2e64;
extern "C" unsigned long _UNK_005c2e68;
extern "C" unsigned long _UNK_005c2e6c;
extern "C" unsigned long _UNK_005c2e70;
extern "C" unsigned long _UNK_005c2eb4;
extern "C" unsigned long _UNK_005c2ee4;
extern "C" unsigned long _UNK_005c2f20;
extern "C" unsigned long _UNK_005c2fc8;
extern "C" unsigned long _UNK_005c2fcc;
extern "C" unsigned long _UNK_005c2fd0;
extern "C" unsigned long _UNK_005c30dc;
extern "C" unsigned long _UNK_005c30e0;
extern "C" unsigned long _UNK_005c30e4;
extern "C" unsigned long _UNK_005c30e8;
extern "C" unsigned long _UNK_005c30ec;
extern "C" unsigned long _UNK_005c30f0;
extern "C" unsigned long _UNK_005c30f4;
extern "C" unsigned long _UNK_005c30f8;
extern "C" unsigned long _UNK_005c341c;
extern "C" unsigned long _UNK_005c3420;
extern "C" unsigned long _UNK_005c3424;
extern "C" unsigned long _UNK_005c3428;
extern "C" unsigned long _UNK_005c342c;
extern "C" unsigned long _UNK_005c3430;
extern "C" unsigned long _UNK_005c3434;
extern "C" unsigned long _UNK_005c3438;
extern "C" unsigned long _UNK_005c343c;
extern "C" unsigned long _UNK_005c3440;
extern "C" unsigned long _UNK_005c3444;
extern "C" unsigned long _UNK_005c3448;
extern "C" unsigned long _UNK_005c344c;
extern "C" unsigned long _UNK_005c3450;
extern "C" unsigned long _UNK_005c3454;
extern "C" unsigned long _UNK_005c3458;
extern "C" unsigned long _UNK_005c345c;
extern "C" unsigned long _UNK_005c3460;
extern "C" unsigned long _UNK_005c3464;
extern "C" unsigned long _UNK_005c3468;
extern "C" unsigned long _UNK_005c346c;
extern "C" unsigned long _UNK_005c3470;
extern "C" unsigned long _UNK_005c34e8;
extern "C" unsigned long _UNK_005c34ec;
extern "C" unsigned long _UNK_005c35f8;
extern "C" unsigned long _UNK_005c35fc;
extern "C" unsigned long _UNK_005c3600;
extern "C" unsigned long _UNK_005c3604;
extern "C" unsigned long _UNK_005c3608;
extern "C" unsigned long _UNK_005c360c;
extern "C" unsigned long _UNK_005c3610;
extern "C" unsigned long _UNK_005c3614;
extern "C" unsigned long _UNK_005c3618;
extern "C" unsigned long _UNK_005c361c;
extern "C" unsigned long _UNK_005c3620;
extern "C" unsigned long _UNK_005c3624;
extern "C" unsigned long _UNK_005c3628;
extern "C" unsigned long _UNK_005c362c;
extern "C" unsigned long _UNK_005c3668;
extern "C" unsigned long _UNK_005c3768;
extern "C" unsigned long _UNK_005c376c;
extern "C" unsigned long _UNK_005c3770;
extern "C" unsigned long _UNK_005c3774;
extern "C" unsigned long _UNK_005c3778;
extern "C" unsigned long _UNK_005c377c;
extern "C" unsigned long _UNK_005c38d0;
extern "C" unsigned long _UNK_005c38d4;
extern "C" unsigned long _UNK_005c38d8;
extern "C" unsigned long _UNK_005c38dc;
extern "C" unsigned long _UNK_005c38e0;
extern "C" unsigned long _UNK_005c391c;
extern "C" unsigned long _UNK_005c3940;
extern "C" unsigned long _UNK_005c3abc;
extern "C" unsigned long _UNK_005c3ac0;
extern "C" unsigned long _UNK_005c3ac4;
extern "C" unsigned long _UNK_005c3ac8;
extern "C" unsigned long _UNK_005c3acc;
extern "C" unsigned long _UNK_005c3ad0;
extern "C" unsigned long _UNK_005c3ad4;
extern "C" unsigned long _UNK_005c3ad8;
extern "C" unsigned long _UNK_005c3adc;
extern "C" unsigned long _UNK_005c3ae0;
extern "C" unsigned long _UNK_005c3ae4;
extern "C" unsigned long _UNK_005c3ba0;
extern "C" unsigned long _UNK_005c3ba4;
extern "C" unsigned long _UNK_005c3d08;
extern "C" unsigned long _UNK_005c3d0c;
extern "C" unsigned long _UNK_005c3d10;
extern "C" unsigned long _UNK_005c3d14;
extern "C" unsigned long g_005c2a54;
extern "C" unsigned long g_005c2a74;
extern "C" unsigned long g_005c2aa4;
extern "C" unsigned long g_005c2aa8;
extern "C" unsigned long g_005c2ab8;
extern "C" unsigned long g_005c2abc;
extern "C" unsigned long g_005c2ae0;
extern "C" unsigned long g_005c2ae4;
extern "C" unsigned long g_005c2b2e;
extern "C" unsigned long g_005c2b48;
extern "C" unsigned long g_005c2ba0;
extern "C" unsigned long g_005c2ba4;
extern "C" unsigned long g_005c2ba8;
extern "C" unsigned long g_005c2bdc;
extern "C" unsigned long g_005c2c34;
extern "C" unsigned long g_005c2c5c;
extern "C" unsigned long g_005c2c9a;
extern "C" unsigned long g_005c2c9c;
extern "C" unsigned long g_005c2cb2;
extern "C" unsigned long g_005c2cb4;
extern "C" unsigned long g_005c2cf4;
extern "C" unsigned long g_005c2cf8;
extern "C" unsigned long g_005c2cfc;
extern "C" unsigned long g_005c2d00;
extern "C" unsigned long g_005c2d04;
extern "C" unsigned long g_005c2d24;
extern "C" unsigned long g_005c2d3c;
extern "C" unsigned long g_005c2d74;
extern "C" unsigned long g_005c2db4;
extern "C" unsigned long g_005c2e50;
extern "C" unsigned long g_005c2e54;
extern "C" unsigned long g_005c2e58;
extern "C" unsigned long g_005c2e5c;
extern "C" unsigned long g_005c2e60;
extern "C" unsigned long g_005c2e64;
extern "C" unsigned long g_005c2e68;
extern "C" unsigned long g_005c2e6c;
extern "C" unsigned long g_005c2e70;
extern "C" unsigned long g_005c2ea4;
extern "C" unsigned long g_005c2eb4;
extern "C" unsigned long g_005c2ed4;
extern "C" unsigned long g_005c2ee4;
extern "C" unsigned long g_005c2f04;
extern "C" unsigned long g_005c2f20;
extern "C" unsigned long g_005c2fba;
extern "C" unsigned long g_005c2fc8;
extern "C" unsigned long g_005c2fcc;
extern "C" unsigned long g_005c2fd0;
extern "C" unsigned long g_005c2fe6;
extern "C" unsigned long g_005c3002;
extern "C" unsigned long g_005c3026;
extern "C" unsigned long g_005c3042;
extern "C" unsigned long g_005c3080;
extern "C" unsigned long g_005c3082;
extern "C" unsigned long g_005c3098;
extern "C" unsigned long g_005c309a;
extern "C" unsigned long g_005c30dc;
extern "C" unsigned long g_005c30e0;
extern "C" unsigned long g_005c30e4;
extern "C" unsigned long g_005c30e8;
extern "C" unsigned long g_005c30ec;
extern "C" unsigned long g_005c30f0;
extern "C" unsigned long g_005c30f4;
extern "C" unsigned long g_005c30f8;
extern "C" unsigned long g_005c3126;
extern "C" unsigned long g_005c314c;
extern "C" unsigned long g_005c3156;
extern "C" unsigned long g_005c3168;
extern "C" unsigned long g_005c3176;
extern "C" unsigned long g_005c3180;
extern "C" unsigned long g_005c31e0;
extern "C" unsigned long g_005c31fc;
extern "C" unsigned long g_005c322a;
extern "C" unsigned long g_005c3252;
extern "C" unsigned long g_005c327a;
extern "C" unsigned long g_005c328c;
extern "C" unsigned long g_005c329a;
extern "C" unsigned long g_005c32a4;
extern "C" unsigned long g_005c3302;
extern "C" unsigned long g_005c331c;
extern "C" unsigned long g_005c3374;
extern "C" unsigned long g_005c3382;
extern "C" unsigned long g_005c3390;
extern "C" unsigned long g_005c339e;
extern "C" unsigned long g_005c33b6;
extern "C" unsigned long g_005c341c;
extern "C" unsigned long g_005c3420;
extern "C" unsigned long g_005c3424;
extern "C" unsigned long g_005c3428;
extern "C" unsigned long g_005c342c;
extern "C" unsigned long g_005c3430;
extern "C" unsigned long g_005c3434;
extern "C" unsigned long g_005c3438;
extern "C" unsigned long g_005c343c;
extern "C" unsigned long g_005c3440;
extern "C" unsigned long g_005c3444;
extern "C" unsigned long g_005c3448;
extern "C" unsigned long g_005c344c;
extern "C" unsigned long g_005c3450;
extern "C" unsigned long g_005c3454;
extern "C" unsigned long g_005c3458;
extern "C" unsigned long g_005c345c;
extern "C" unsigned long g_005c3460;
extern "C" unsigned long g_005c3464;
extern "C" unsigned long g_005c3468;
extern "C" unsigned long g_005c346c;
extern "C" unsigned long g_005c3470;
extern "C" unsigned long g_005c3482;
extern "C" unsigned long g_005c34be;
extern "C" unsigned long g_005c34e8;
extern "C" unsigned long g_005c34ec;
extern "C" unsigned long g_005c3528;
extern "C" unsigned long g_005c3536;
extern "C" unsigned long g_005c355e;
extern "C" unsigned long g_005c3570;
extern "C" unsigned long g_005c3590;
extern "C" unsigned long g_005c35ac;
extern "C" unsigned long g_005c35c8;
extern "C" unsigned long g_005c35e4;
extern "C" unsigned long g_005c35f8;
extern "C" unsigned long g_005c35fc;
extern "C" unsigned long g_005c3600;
extern "C" unsigned long g_005c3604;
extern "C" unsigned long g_005c3608;
extern "C" unsigned long g_005c360c;
extern "C" unsigned long g_005c3610;
extern "C" unsigned long g_005c3614;
extern "C" unsigned long g_005c3618;
extern "C" unsigned long g_005c361c;
extern "C" unsigned long g_005c3620;
extern "C" unsigned long g_005c3624;
extern "C" unsigned long g_005c3628;
extern "C" unsigned long g_005c362c;
extern "C" unsigned long g_005c365a;
extern "C" unsigned long g_005c3668;
extern "C" unsigned long g_005c3698;
extern "C" unsigned long g_005c36d6;
extern "C" unsigned long g_005c3702;
extern "C" unsigned long g_005c373a;
extern "C" unsigned long g_005c3748;
extern "C" unsigned long g_005c3768;
extern "C" unsigned long g_005c376c;
extern "C" unsigned long g_005c3770;
extern "C" unsigned long g_005c3774;
extern "C" unsigned long g_005c3778;
extern "C" unsigned long g_005c377c;
extern "C" unsigned long g_005c3820;
extern "C" unsigned long g_005c3870;
extern "C" unsigned long g_005c3872;
extern "C" unsigned long g_005c3888;
extern "C" unsigned long g_005c388a;
extern "C" unsigned long g_005c38d0;
extern "C" unsigned long g_005c38d4;
extern "C" unsigned long g_005c38d8;
extern "C" unsigned long g_005c38dc;
extern "C" unsigned long g_005c38e0;
extern "C" unsigned long g_005c3908;
extern "C" unsigned long g_005c391c;
extern "C" unsigned long g_005c393c;
extern "C" unsigned long g_005c3940;
extern "C" unsigned long g_005c395c;
extern "C" unsigned long g_005c3abc;
extern "C" unsigned long g_005c3ac0;
extern "C" unsigned long g_005c3ac4;
extern "C" unsigned long g_005c3ac8;
extern "C" unsigned long g_005c3acc;
extern "C" unsigned long g_005c3ad0;
extern "C" unsigned long g_005c3ad4;
extern "C" unsigned long g_005c3ad8;
extern "C" unsigned long g_005c3adc;
extern "C" unsigned long g_005c3ae0;
extern "C" unsigned long g_005c3ae4;
extern "C" unsigned long g_005c3b1c;
extern "C" unsigned long g_005c3b64;
extern "C" unsigned long g_005c3ba0;
extern "C" unsigned long g_005c3ba4;
extern "C" unsigned long g_005c3bde;
extern "C" unsigned long g_005c3c16;
extern "C" unsigned long g_005c3c56;
extern "C" unsigned long g_005c3ca6;
extern "C" unsigned long g_005c3d08;
extern "C" unsigned long g_005c3d0c;
extern "C" unsigned long g_005c3d10;
extern "C" unsigned long g_005c3d14;
bool BLMissionCreamSelectPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLMissionCreamSelectPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLMissionCreamSelectPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLMissionCreamSelectPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLMissionCreamSelectPresenter::tick(float p1)
{
  return;
}

BLMissionCreamSelectPresenter::~BLMissionCreamSelectPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_005c2a54 + g_005c2aa4);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x40;
  *(int *)((int)this + 4*(6)) = iVar2 + 0x70;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005c2a74 + g_005c2aa8,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLMissionCreamSelectPresenter::onClose(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(0xf);
  return;
}

void BLMissionCreamSelectPresenter::onPage5(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->showUIById(0x2a0);
  return;
}





void BLMissionCreamSelectPresenter::onUpdateMirrorData()
{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  code *pcVar6;
  
  iVar1 = ((MirrorDataManager *)this)->getInstance();
  iVar4 = *(int *)(iVar1 + 0x1c);
  ((MirrorDataManager *)this)->getInstance();
  iVar2 = ((MirrorDataManager *)this)->getTotalNum();
  piVar5 = *(int **)(*(int *)(((int)this) + 0x1c) + 0x134);
  pcVar6 = *(code **)(*piVar5 + 0x234);
  iVar1 = iVar4;
  if (iVar4 < iVar2) {
    iVar1 = iVar2;
  }
  cocos2d::CCString::createWithFormat((char const*)&g_005c2ea4 + g_005c2eb4, iVar4, iVar1);
  uVar3 = (undefined4)(((cocos2d::CCString *)this)->getCString());
  (*pcVar6)(piVar5,uVar3);
  return;
}

void BLMissionCreamSelectPresenter::onUpdateValleryData()
{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  code *pcVar4;
  
  piVar3 = *(int **)(*(int *)(((int)this) + 0x1c) + 0x13c);
  pcVar4 = *(code **)(*piVar3 + 0x234);
  iVar1 = ((MissionValleryData *)this)->getInstance();
  cocos2d::CCString::createWithFormat((char const*)&g_005c2ed4 + g_005c2ee4, *(undefined4 *)(iVar1 + 0x24));
  uVar2 = (undefined4)(((cocos2d::CCString *)this)->getCString());
  (*pcVar4)(piVar3,uVar2);
  return;
}

void BLMissionCreamSelectPresenter::onIntoVallery()
{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  code *pcVar4;
  
  piVar3 = *(int **)(*(int *)(((int)this) + 0x1c) + 0x13c);
  pcVar4 = *(code **)(*piVar3 + 0x234);
  iVar1 = ((MissionValleryData *)this)->getInstance();
  cocos2d::CCString::createWithFormat((char const*)&g_005c2f04 + g_005c2f20, *(undefined4 *)(iVar1 + 0x24));
  uVar2 = (undefined4)(((cocos2d::CCString *)this)->getCString());
  (*pcVar4)(piVar3,uVar2);
  uVar2 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar2)->showUIById(0x284);
  return;
}





BLMissionCreamSelectPresenter::BLMissionCreamSelectPresenter()
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
  iVar3 = *(int *)(&g_005c3482 + g_005c34e8);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x40;
  *(int *)((int)this + 4*(6)) = iVar3 + 0x70;
  ((UIManager *)this)->shareManager();
  ((UIManager *)this)->pushCurScrollViewUnEnable();
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 1);
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005c34be + g_005c34ec,&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

undefined4 BLMissionCreamSelectPresenter::create(BLMissionCreamSelectView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x20))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}


void BLMissionCreamSelectPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  ((UIManager *)this)->shareManager();
  ((UIManager *)this)->popUnEnableScrollView();
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar2)->removeObserver((cocos2d::CCObject*)((int)this), (char const*)&g_005c365a + g_005c3668);
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar2)->removeAllObservers((cocos2d::CCObject*)((int)this));
  return;
}




void BLMissionCreamSelectPresenter::onCreamUpdate()
{
  BLMissionCreamSelectPresenter::initview();
  return;
}

void BLMissionCreamSelectPresenter::onUpdateNum(MissionCreamSelectData* p1)
{
  BLMissionCreamSelectPresenter::initview();
  return;
}

// ===== 修复: 补回被误删的函数占位 (15) =====
void BLMissionCreamSelectPresenter::onPage3(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMissionCreamSelectPresenter::onPage4(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMissionCreamSelectPresenter::onAddValleryNum(cocos2d::CCObject* p1, unsigned int p2)
{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [4];
  undefined4 auStack_1c [2];
  
  iVar2 = (undefined4)(intptr_t)(((MissionValleryData *)this)->getInstance());
  if (*(int *)(iVar2 + 0x24) < 3) {
    uVar3 = (undefined4)(((UIManager *)this)->shareManager());
    iVar2 = (undefined4)(intptr_t)(((UIManager *)(uVar3))->showUIById(0x10));
    if (iVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x5c2cec);
      (*pcVar1)();
    }
    iVar2 = func_0079e55c(iVar2,*(undefined4 *)((unsigned char *)((char *)&g_005c2c9a + (intptr_t)(g_005c2cf8))),
                            *(undefined4 *)((unsigned char *)((char *)&g_005c2c9c + (intptr_t)(g_005c2cfc))),0);
    uVar3 = (undefined4)(0);
    if (*(int *)(iVar2 + 0x24) != 0) {
      uVar3 = func_0079e55c(*(int *)(iVar2 + 0x24),*(undefined4 *)((unsigned char *)((char *)&g_005c2cb2 + (intptr_t)(g_005c2d00))),
                              *(undefined4 *)((unsigned char *)((char *)&g_005c2cb4 + (intptr_t)(g_005c2d04))),0);
    }
    piVar5 = (int *)((BLMissionCreamBuyView *)(uVar3))->getPresenter();
    (**(code **)(*(int *)(piVar5) + (0x30)))(piVar5,2);
    uVar3 = (undefined4)(((BLMissionCreamBuyView *)(uVar3))->getPresenter());
    ((BLMissionCreamBuyPresenter *)(uVar3))->updateWithData(100);
  }
  else {
    uVar3 = (undefined4)(((Toast *)this)->sharedToast());
    uVar4 = (undefined4)(((BLLanguage *)this)->share());
    func_0079e45c(auStack_20,(unsigned char *)((char *)&g_005c2c5c + (intptr_t)(g_005c2cf4)),auStack_24);
    (((BLLanguage *)this))->getString(*(std::string *)auStack_1c);
    ((Toast *)(uVar3))->showToast((char const*)auStack_1c[0]);
    func_0079e2bc(auStack_1c);
    func_0079e2bc(auStack_20);
  }
  return;
}

void BLMissionCreamSelectPresenter::onAddMirrorNum(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMissionCreamSelectPresenter::onMirrorBuySuccess()
{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  uVar1 = (undefined4)(((MirrorDataManager *)this)->getInstance());
  iVar2 = (undefined4)(intptr_t)(((MirrorDataManager *)this)->getInstance());
  uVar1 = (undefined4)(((MirrorDataManager *)uVar1)->getPurchasePrice(*(int *)(iVar2 + 0x24) + 1));
  piVar3 = (int *)((DataManager *)this)->shareDataManager();
  uVar4 = (undefined4)((**(code **)(*piVar3 + 0x28))());
  uVar5 = (undefined4)(intptr_t)(((long long)([](int _a){double _d=(double)(int)_a;long long _o;__builtin_memcpy(&_o,&_d,8);return _o;}((int)(uVar1)))));
  ((UserData *)uVar4)->subVirNumber(2, (int)uVar5, (int)((ulonglong)uVar5 >> 0x20));
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(0x10);
  BLMissionCreamSelectPresenter::onUpdateMirrorData();
  return;
}

void BLMissionCreamSelectPresenter::onValleryTimeBuySuccess()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;

  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  code *pcVar4;
  undefined4 uVar5;
  
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  uVar2 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x28)))());
  uVar5 = (undefined4)(1);
  ((UserData *)this)->subVirNumber(uVar2, 2, g_005c2fc8);
  uVar2 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar2)->removeUIByID(0x10);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x1c) + 0x13c);
  pcVar4 = *(code **)(*piVar1 + 0x234);
  iVar3 = (undefined4)(intptr_t)(((MissionValleryData *)this)->getInstance());
  cocos2d::CCString::createWithFormat((char const*)(unsigned char *)((char *)&g_005c2fba + (intptr_t)(g_005c2fd0)), *(undefined4 *)(iVar3 + 0x24), 3);
  uVar2 = (undefined4)(((cocos2d::CCString *)this)->getCString());
  (*pcVar4)(piVar1,uVar2);
  return;
}

void BLMissionCreamSelectPresenter::onAddMoneyTreeNum(cocos2d::CCObject* p1, unsigned int p2)
{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [4];
  undefined4 auStack_1c [2];
  
  uVar2 = (undefined4)(cocos2d::CCUserDefault::sharedUserDefault());
  iVar3 = (undefined4)(intptr_t)(((cocos2d::CCUserDefault *)(uVar2))->getIntegerForKey((char const*)(unsigned char *)((char *)&g_005c2fe6 + (intptr_t)(g_005c30dc))));
  if (iVar3 < 3) {
    uVar2 = (undefined4)(cocos2d::CCUserDefault::sharedUserDefault());
    iVar3 = (undefined4)(intptr_t)(((cocos2d::CCUserDefault *)(uVar2))->getIntegerForKey((char const*)(unsigned char *)((char *)&g_005c3026 + (intptr_t)(g_005c30e4))));
    if (iVar3 < 2) {
      uVar2 = (undefined4)(((UIManager *)this)->shareManager());
      iVar3 = (undefined4)(intptr_t)(((UIManager *)(uVar2))->showUIById(0x10));
      if (iVar3 != 0) {
        iVar3 = func_0079e55c(iVar3,*(undefined4 *)((unsigned char *)((char *)&g_005c3080 + (intptr_t)(g_005c30ec))),
                                *(undefined4 *)((unsigned char *)((char *)&g_005c3082 + (intptr_t)(g_005c30f0))),0);
        uVar2 = (undefined4)(0);
        if (*(int *)(iVar3 + 0x24) != 0) {
          uVar2 = func_0079e55c(*(int *)(iVar3 + 0x24),
                                  *(undefined4 *)((unsigned char *)((char *)&g_005c3098 + (intptr_t)(g_005c30f4))),
                                  *(undefined4 *)((unsigned char *)((char *)&g_005c309a + (intptr_t)(g_005c30f8))),0);
        }
        piVar5 = (int *)((BLMissionCreamBuyView *)(uVar2))->getPresenter();
        (**(code **)(*(int *)(piVar5) + (0x30)))(piVar5,3);
        uVar2 = (undefined4)(((BLMissionCreamBuyView *)(uVar2))->getPresenter());
        ((BLMissionCreamBuyPresenter *)(uVar2))->updateWithData(0x32);
        return;
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x5c30d6);
      (*pcVar1)();
    }
    uVar2 = (undefined4)(((Toast *)this)->sharedToast());
    uVar4 = (undefined4)(((BLLanguage *)this)->share());
    func_0079e45c(auStack_20,(unsigned char *)((char *)&g_005c3042 + (intptr_t)(g_005c30e8)),auStack_24);
    (((BLLanguage *)this))->getString(*(std::string *)auStack_1c);
    ((Toast *)(uVar2))->showToast((char const*)auStack_1c[0]);
  }
  else {
    uVar2 = (undefined4)(((Toast *)this)->sharedToast());
    uVar4 = (undefined4)(((BLLanguage *)this)->share());
    func_0079e45c(auStack_20,(unsigned char *)((char *)&g_005c3002 + (intptr_t)(g_005c30e0)),auStack_24);
    (((BLLanguage *)this))->getString(*(std::string *)auStack_1c);
    ((Toast *)(uVar2))->showToast((char const*)auStack_1c[0]);
  }
  func_0079e2bc(auStack_1c);
  func_0079e2bc(auStack_20);
  return;
}

void BLMissionCreamSelectPresenter::onUpdateMoneyTreeDate()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMissionCreamSelectPresenter::onEnter()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMissionCreamSelectPresenter::onGetMirrorDataSuccess()
{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [4];
  undefined4 auStack_1c [2];
  
  piVar3 = *(int **)(*(int *)(((int)this) + 0x1c) + 0x134);
  pcVar4 = *(code **)(*piVar3 + 0x234);
  iVar1 = (undefined4)(intptr_t)(((MirrorDataManager *)this)->getInstance());
  uVar5 = (undefined4)(*(undefined4 *)(iVar1 + 0x1c));
  ((MirrorDataManager *)this)->getInstance();
  uVar2 = (undefined4)(((MirrorDataManager *)this)->getTotalNum());
  cocos2d::CCString::createWithFormat((char const*)(unsigned char *)((char *)&g_005c3698 + (intptr_t)(g_005c3768)), uVar5, uVar2);
  uVar2 = (undefined4)(((cocos2d::CCString *)this)->getCString());
  (*pcVar4)(piVar3,uVar2);
  iVar1 = (undefined4)(intptr_t)(((MirrorDataManager *)this)->getInstance());
  if (*(int *)(iVar1 + 0x1c) < 1) {
    iVar1 = (undefined4)(intptr_t)(((MirrorDataManager *)this)->getInstance());
    if (*(int *)(iVar1 + 0x24) < 1) {
      uVar2 = (undefined4)(((Toast *)this)->sharedToast());
      uVar5 = (undefined4)(((BLLanguage *)this)->share());
      func_0079e45c(auStack_20,(unsigned char *)((char *)&g_005c36d6 + (intptr_t)(g_005c376c)),auStack_24);
      (((BLLanguage *)this))->getString(*(std::string *)auStack_1c);
      ((Toast *)(uVar2))->showToast((char const*)auStack_1c[0]);
    }
    else {
      uVar2 = (undefined4)(((Toast *)this)->sharedToast());
      uVar5 = (undefined4)(((BLLanguage *)this)->share());
      func_0079e45c(auStack_20,(unsigned char *)((char *)&g_005c3702 + (intptr_t)(g_005c3770)),auStack_24);
      (((BLLanguage *)this))->getString(*(std::string *)auStack_1c);
      ((Toast *)(uVar2))->showToast((char const*)auStack_1c[0]);
    }
    func_0079e2bc(auStack_1c);
    func_0079e2bc(auStack_20);
  }
  else {
    uVar2 = (undefined4)(((UIManager *)this)->shareManager());
    ((UIManager *)(uVar2))->showUIById(g_005c3774);
    uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
    ((cocos2d::CCNotificationCenter *)(uVar2))->removeObserver((cocos2d::CCObject*)((int)this), (char const*)(unsigned char *)((char *)&g_005c373a + (intptr_t)(g_005c3778)));
    uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
    ((cocos2d::CCNotificationCenter *)(uVar2))->removeObserver((cocos2d::CCObject*)((int)this), (char const*)(unsigned char *)((char *)&g_005c3748 + (intptr_t)(g_005c377c)));
  }
  return;
}

void BLMissionCreamSelectPresenter::onAddnum(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMissionCreamSelectPresenter::initview()
{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  code *pcVar4;
  
  piVar3 = *(int **)(*(int *)(((int)this) + 0x1c) + 0x130);
  if (piVar3 != (int *)0x0) {
    pcVar4 = *(code **)(*piVar3 + 0x234);
    iVar1 = (undefined4)(intptr_t)(((sir::singleton<MissionCreamSelectData, 0> *)this)->instance());
    cocos2d::CCString::createWithFormat((char const*)(unsigned char *)((char *)&g_005c3908 + (intptr_t)(g_005c391c)), *(undefined4 *)(iVar1 + 8), 3);
    uVar2 = (undefined4)(((cocos2d::CCString *)this)->getCString());
    (*pcVar4)(piVar3,uVar2);
  }
  BLMissionCreamSelectPresenter::onUpdateMirrorData();
  return;
}

void BLMissionCreamSelectPresenter::initWithView(BLMissionCreamSelectView* p1)
{
  int *piVar1;
  int iVar2;
  
  *(int *)(((int)this) + 0x1c) = (undefined4)(intptr_t)p1;
  iVar2 = (undefined4)(intptr_t)(g_005c3abc);
  (**(code **)(**(int **)(p1 + 0x10c) + 0x254))
            (*(int **)(p1 + 0x10c),((int)this),
             *(undefined4 *)((unsigned char *)((char *)&g_005c395c + (intptr_t)(g_005c3ac0)) + g_005c3abc),0,0x20);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x1c) + 0x110);
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)((unsigned char *)((char *)&g_005c395c + (intptr_t)(g_005c3ac4)) + iVar2),0,0x20);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x1c) + 0x114);
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)((unsigned char *)((char *)&g_005c395c + (intptr_t)(g_005c3ac8)) + iVar2),0,0x20);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x1c) + 0x118);
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)((unsigned char *)((char *)&g_005c395c + (intptr_t)(g_005c3acc)) + iVar2),0,0x20);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x1c) + 0x11c);
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)((unsigned char *)((char *)&g_005c395c + (intptr_t)(g_005c3ad0)) + iVar2),0,0x20);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x1c) + 0x120);
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)((unsigned char *)((char *)&g_005c395c + (intptr_t)(g_005c3ad4)) + iVar2),0,0x20);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x1c) + 300);
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)((unsigned char *)((char *)&g_005c395c + (intptr_t)(g_005c3ad8)) + iVar2),0,0x20);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x1c) + 0x138);
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)((unsigned char *)((char *)&g_005c395c + (intptr_t)(g_005c3adc)) + iVar2),0,0x20);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x1c) + 0x140);
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)((unsigned char *)((char *)&g_005c395c + (intptr_t)(g_005c3ae0)) + iVar2),0,0x20);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x1c) + 0x148);
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)((unsigned char *)((char *)&g_005c395c + (intptr_t)(g_005c3ae4)) + iVar2),0,0x20);
  BLMissionCreamSelectPresenter::initview();
  BLMissionCreamSelectPresenter::onUpdateMoneyTreeDate();
  iVar2 = (undefined4)(intptr_t)(((sir::singleton<MissionCreamSelectData, 0> *)this)->instance());
  *(int *)(iVar2 + 4) = ((int)this) + 0x18;
  return;
}

void BLMissionCreamSelectPresenter::onPage1(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMissionCreamSelectPresenter::onPage2(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
