#include "BLTreasureDicePresenter.h"
#include "rapidjson.h"
#include "document.h"
#include "CCNotificationCenter.h"
#include "HttpResponse.h"
#include "HttpClient.h"
#include "CCObject.h"
#include "CCString.h"
#include "BLGameScene.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLTreasureDiceView.h"
#include "DataManager.h"
#include "LivenessUserData.h"
#include "PlatformHelp.h"
#include "Toast.h"
#include "TreasureDataManager.h"
#include "TreasureHeroData.h"
#include "TreasureInfoDynamicData.h"
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
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e43c(...);
extern "C" long long func_0079e44c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e46c(...);
extern "C" long long func_0079e47c(...);
extern "C" long long func_0079e54c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e734(...);
extern "C" long long func_0079e784(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_006a5754;
extern "C" unsigned long UNK_006a5768;
extern "C" unsigned long UNK_006a57f2;
extern "C" unsigned long UNK_006a5808;
extern "C" unsigned long UNK_006a580a;
extern "C" unsigned long UNK_006a5892;
extern "C" unsigned long UNK_006a58a8;
extern "C" unsigned long UNK_006a58cc;
extern "C" unsigned long UNK_006a58e8;
extern "C" unsigned long UNK_006a5904;
extern "C" unsigned long UNK_006a5920;
extern "C" unsigned long UNK_006a593c;
extern "C" unsigned long UNK_006a5958;
extern "C" unsigned long UNK_006a5974;
extern "C" unsigned long UNK_006a599a;
extern "C" unsigned long UNK_006a5a6e;
extern "C" unsigned long UNK_006a5a8e;
extern "C" unsigned long UNK_006a5aac;
extern "C" unsigned long UNK_006a5adc;
extern "C" unsigned long UNK_006a5b1c;
extern "C" unsigned long UNK_006a5b4c;
extern "C" unsigned long UNK_006a5b78;
extern "C" unsigned long UNK_006a5bca;
extern "C" unsigned long UNK_006a5d1a;
extern "C" unsigned long UNK_006a5d72;
extern "C" unsigned long UNK_006a5d82;
extern "C" unsigned long UNK_006a5d90;
extern "C" unsigned long UNK_006a5dfc;
extern "C" unsigned long UNK_006a5e0e;
extern "C" unsigned long UNK_006a5e1e;
extern "C" unsigned long UNK_006a5e7a;
extern "C" unsigned long UNK_006a5eb6;
extern "C" unsigned long UNK_006a5f3e;
extern "C" unsigned long UNK_006a5f92;
extern "C" unsigned long UNK_006a5fa2;
extern "C" unsigned long UNK_006a5fb0;
extern "C" unsigned long UNK_006a60d0;
extern "C" unsigned long UNK_006a60e6;
extern "C" unsigned long UNK_006a60e8;
extern "C" unsigned long UNK_006a6122;
extern "C" unsigned long UNK_006a61ca;
extern "C" unsigned long UNK_006a61fa;
extern "C" unsigned long UNK_006a6248;
extern "C" unsigned long UNK_006a62e6;
extern "C" unsigned long UNK_006a6306;
extern "C" unsigned long UNK_006a6408;
extern "C" unsigned long UNK_006a6438;
extern "C" unsigned long UNK_006a6486;
extern "C" unsigned long UNK_006a654c;
extern "C" unsigned long UNK_006a656c;
extern "C" unsigned long UNK_006a6738;
extern "C" unsigned long UNK_006a6774;
extern "C" unsigned long UNK_006a6786;
extern "C" unsigned long UNK_006a6796;
extern "C" unsigned long UNK_006a67a8;
extern "C" unsigned long UNK_006a67c2;
extern "C" unsigned long UNK_006a67d4;
extern "C" unsigned long UNK_006a67f2;
extern "C" unsigned long UNK_006a680c;
extern "C" unsigned long UNK_006a686a;
extern "C" unsigned long UNK_006a68e8;
extern "C" unsigned long UNK_006a6922;
extern "C" unsigned long UNK_006a6994;
extern "C" unsigned long UNK_006a69c4;
extern "C" unsigned long UNK_006a69e8;
extern "C" unsigned long _UNK_006a5798;
extern "C" unsigned long _UNK_006a579c;
extern "C" unsigned long _UNK_006a5874;
extern "C" unsigned long _UNK_006a5878;
extern "C" unsigned long _UNK_006a587c;
extern "C" unsigned long _UNK_006a59dc;
extern "C" unsigned long _UNK_006a59e0;
extern "C" unsigned long _UNK_006a59e4;
extern "C" unsigned long _UNK_006a59e8;
extern "C" unsigned long _UNK_006a59ec;
extern "C" unsigned long _UNK_006a59f0;
extern "C" unsigned long _UNK_006a59f4;
extern "C" unsigned long _UNK_006a59f8;
extern "C" unsigned long _UNK_006a59fc;
extern "C" unsigned long _UNK_006a5a00;
extern "C" unsigned long _UNK_006a5a04;
extern "C" unsigned long _UNK_006a5a08;
extern "C" unsigned long _UNK_006a5a0c;
extern "C" unsigned long _UNK_006a5a10;
extern "C" unsigned long _UNK_006a5a14;
extern "C" unsigned long _UNK_006a5a18;
extern "C" unsigned long _UNK_006a5a1c;
extern "C" unsigned long _UNK_006a5a20;
extern "C" unsigned long _UNK_006a5a24;
extern "C" unsigned long _UNK_006a5a28;
extern "C" unsigned long _UNK_006a5aec;
extern "C" unsigned long _UNK_006a5af0;
extern "C" unsigned long _UNK_006a5af4;
extern "C" unsigned long _UNK_006a5af8;
extern "C" unsigned long _UNK_006a5c54;
extern "C" unsigned long _UNK_006a5c58;
extern "C" unsigned long _UNK_006a5c5c;
extern "C" unsigned long _UNK_006a5c60;
extern "C" unsigned long _UNK_006a5d60;
extern "C" unsigned long _UNK_006a5de4;
extern "C" unsigned long _UNK_006a5de8;
extern "C" unsigned long _UNK_006a5dec;
extern "C" unsigned long _UNK_006a5e4c;
extern "C" unsigned long _UNK_006a5e50;
extern "C" unsigned long _UNK_006a5e54;
extern "C" unsigned long _UNK_006a5ef8;
extern "C" unsigned long _UNK_006a5efc;
extern "C" unsigned long _UNK_006a5f7c;
extern "C" unsigned long _UNK_006a5f80;
extern "C" unsigned long _UNK_006a6004;
extern "C" unsigned long _UNK_006a6008;
extern "C" unsigned long _UNK_006a600c;
extern "C" unsigned long _UNK_006a6138;
extern "C" unsigned long _UNK_006a613c;
extern "C" unsigned long _UNK_006a6140;
extern "C" unsigned long _UNK_006a6144;
extern "C" unsigned long _UNK_006a637c;
extern "C" unsigned long _UNK_006a6380;
extern "C" unsigned long _UNK_006a6384;
extern "C" unsigned long _UNK_006a6388;
extern "C" unsigned long _UNK_006a638c;
extern "C" unsigned long _UNK_006a6390;
extern "C" unsigned long _UNK_006a65e4;
extern "C" unsigned long _UNK_006a65e8;
extern "C" unsigned long _UNK_006a65ec;
extern "C" unsigned long _UNK_006a65f0;
extern "C" unsigned long _UNK_006a65f4;
extern "C" unsigned long _UNK_006a65f8;
extern "C" unsigned long _UNK_006a65fc;
extern "C" unsigned long _UNK_006a6874;
extern "C" unsigned long _UNK_006a6878;
extern "C" unsigned long _UNK_006a687c;
extern "C" unsigned long _UNK_006a6880;
extern "C" unsigned long _UNK_006a6884;
extern "C" unsigned long _UNK_006a6888;
extern "C" unsigned long _UNK_006a688c;
extern "C" unsigned long _UNK_006a6890;
extern "C" unsigned long _UNK_006a6894;
extern "C" unsigned long _UNK_006a6898;
extern "C" unsigned long _UNK_006a6940;
extern "C" unsigned long _UNK_006a6944;
extern "C" unsigned long _UNK_006a6a04;
extern "C" unsigned long _UNK_006a6a08;
extern "C" unsigned long _UNK_006a6a0c;
extern "C" unsigned long extraout_r3;
extern "C" unsigned long g_006a5754;
extern "C" unsigned long g_006a5768;
extern "C" unsigned long g_006a5798;
extern "C" unsigned long g_006a579c;
extern "C" unsigned long g_006a57f2;
extern "C" unsigned long g_006a5808;
extern "C" unsigned long g_006a580a;
extern "C" unsigned long g_006a5874;
extern "C" unsigned long g_006a5878;
extern "C" unsigned long g_006a587c;
extern "C" unsigned long g_006a5892;
extern "C" unsigned long g_006a58a8;
extern "C" unsigned long g_006a58cc;
extern "C" unsigned long g_006a58e8;
extern "C" unsigned long g_006a5904;
extern "C" unsigned long g_006a5920;
extern "C" unsigned long g_006a593c;
extern "C" unsigned long g_006a5958;
extern "C" unsigned long g_006a5974;
extern "C" unsigned long g_006a599a;
extern "C" unsigned long g_006a59dc;
extern "C" unsigned long g_006a59e0;
extern "C" unsigned long g_006a59e4;
extern "C" unsigned long g_006a59e8;
extern "C" unsigned long g_006a59ec;
extern "C" unsigned long g_006a59f0;
extern "C" unsigned long g_006a59f4;
extern "C" unsigned long g_006a59f8;
extern "C" unsigned long g_006a59fc;
extern "C" unsigned long g_006a5a00;
extern "C" unsigned long g_006a5a04;
extern "C" unsigned long g_006a5a08;
extern "C" unsigned long g_006a5a0c;
extern "C" unsigned long g_006a5a10;
extern "C" unsigned long g_006a5a14;
extern "C" unsigned long g_006a5a18;
extern "C" unsigned long g_006a5a1c;
extern "C" unsigned long g_006a5a20;
extern "C" unsigned long g_006a5a24;
extern "C" unsigned long g_006a5a28;
extern "C" unsigned long g_006a5a6e;
extern "C" unsigned long g_006a5a8e;
extern "C" unsigned long g_006a5aac;
extern "C" unsigned long g_006a5adc;
extern "C" unsigned long g_006a5aec;
extern "C" unsigned long g_006a5af0;
extern "C" unsigned long g_006a5af4;
extern "C" unsigned long g_006a5af8;
extern "C" unsigned long g_006a5b1c;
extern "C" unsigned long g_006a5b4c;
extern "C" unsigned long g_006a5b78;
extern "C" unsigned long g_006a5bca;
extern "C" unsigned long g_006a5c54;
extern "C" unsigned long g_006a5c58;
extern "C" unsigned long g_006a5c5c;
extern "C" unsigned long g_006a5c60;
extern "C" unsigned long g_006a5d1a;
extern "C" unsigned long g_006a5d60;
extern "C" unsigned long g_006a5d72;
extern "C" unsigned long g_006a5d82;
extern "C" unsigned long g_006a5d90;
extern "C" unsigned long g_006a5de4;
extern "C" unsigned long g_006a5de8;
extern "C" unsigned long g_006a5dec;
extern "C" unsigned long g_006a5dfc;
extern "C" unsigned long g_006a5e0e;
extern "C" unsigned long g_006a5e1e;
extern "C" unsigned long g_006a5e4c;
extern "C" unsigned long g_006a5e50;
extern "C" unsigned long g_006a5e54;
extern "C" unsigned long g_006a5e7a;
extern "C" unsigned long g_006a5eb6;
extern "C" unsigned long g_006a5ef8;
extern "C" unsigned long g_006a5efc;
extern "C" unsigned long g_006a5f3e;
extern "C" unsigned long g_006a5f7c;
extern "C" unsigned long g_006a5f80;
extern "C" unsigned long g_006a5f92;
extern "C" unsigned long g_006a5fa2;
extern "C" unsigned long g_006a5fb0;
extern "C" unsigned long g_006a6004;
extern "C" unsigned long g_006a6008;
extern "C" unsigned long g_006a600c;
extern "C" unsigned long g_006a60d0;
extern "C" unsigned long g_006a60e6;
extern "C" unsigned long g_006a60e8;
extern "C" unsigned long g_006a6122;
extern "C" unsigned long g_006a6138;
extern "C" unsigned long g_006a613c;
extern "C" unsigned long g_006a6140;
extern "C" unsigned long g_006a6144;
extern "C" unsigned long g_006a61ca;
extern "C" unsigned long g_006a61fa;
extern "C" unsigned long g_006a6248;
extern "C" unsigned long g_006a62e6;
extern "C" unsigned long g_006a6306;
extern "C" unsigned long g_006a637c;
extern "C" unsigned long g_006a6380;
extern "C" unsigned long g_006a6384;
extern "C" unsigned long g_006a6388;
extern "C" unsigned long g_006a638c;
extern "C" unsigned long g_006a6390;
extern "C" unsigned long g_006a6408;
extern "C" unsigned long g_006a6438;
extern "C" unsigned long g_006a6486;
extern "C" unsigned long g_006a654c;
extern "C" unsigned long g_006a656c;
extern "C" unsigned long g_006a65e4;
extern "C" unsigned long g_006a65e8;
extern "C" unsigned long g_006a65ec;
extern "C" unsigned long g_006a65f0;
extern "C" unsigned long g_006a65f4;
extern "C" unsigned long g_006a65f8;
extern "C" unsigned long g_006a65fc;
extern "C" unsigned long g_006a6738;
extern "C" unsigned long g_006a6774;
extern "C" unsigned long g_006a6786;
extern "C" unsigned long g_006a6796;
extern "C" unsigned long g_006a67a8;
extern "C" unsigned long g_006a67c2;
extern "C" unsigned long g_006a67d4;
extern "C" unsigned long g_006a67f2;
extern "C" unsigned long g_006a680c;
extern "C" unsigned long g_006a686a;
extern "C" unsigned long g_006a6874;
extern "C" unsigned long g_006a6878;
extern "C" unsigned long g_006a687c;
extern "C" unsigned long g_006a6880;
extern "C" unsigned long g_006a6884;
extern "C" unsigned long g_006a6888;
extern "C" unsigned long g_006a688c;
extern "C" unsigned long g_006a6890;
extern "C" unsigned long g_006a6894;
extern "C" unsigned long g_006a6898;
extern "C" unsigned long g_006a68e8;
extern "C" unsigned long g_006a6922;
extern "C" unsigned long g_006a6940;
extern "C" unsigned long g_006a6944;
extern "C" unsigned long g_006a6994;
extern "C" unsigned long g_006a69c4;
extern "C" unsigned long g_006a69e8;
extern "C" unsigned long g_006a6a04;
extern "C" unsigned long g_006a6a08;
extern "C" unsigned long g_006a6a0c;
void BLTreasureDicePresenter::onTriggerEnd()
{
  *(undefined1 *)(((int)this) + 0x18) = 0;
  return;
}

void BLTreasureDicePresenter::onRestartEnd()
{
  *(undefined1 *)(((int)this) + 0x24) = 0;
  return;
}

BLTreasureDicePresenter::~BLTreasureDicePresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int *piStack_18;
  undefined4 uStack_14;
  
  /* VPTR_FIX(R87): vptr=(&g_A+g_B)+8 ?? g_ ?? 0 ?? -> ???? SEGV?????? vptr???? */;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_006a5768 + g_006a579c,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLTreasureDicePresenter::onGetReward(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->showUIById(0x1f9);
  return;
}

void BLTreasureDicePresenter::updateBtnRestart()
{
  undefined4 p4 = 0;

  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int extraout_r3;
  int iVar5;
  byte bVar6;
  
  iVar1 = ((TreasureDataManager *)this)->getInstance();
  iVar5 = **(int **)(iVar1 + 0x6c);
  iVar2 = ((TreasureDataManager *)this)->getInstance();
  iVar1 = *(int *)(*(int *)(iVar2 + 0x68) + 4);
  uVar4 = (undefined4)(*(int *)(*(int *)(iVar2 + 0x68) + 8) - iVar1 >> 2);
  if (uVar4 < 100) {
    func_0079e784(&g_006a57f2 + g_006a5874,99,uVar4,iVar1,p4);
    iVar1 = extraout_r3;
  }
  iVar2 = 0;
  if (*(int *)(iVar1 + 0x18c) != 0) {
    iVar2 = func_0079e55c(*(int *)(iVar1 + 0x18c),*(undefined4 *)(&g_006a5808 + g_006a5878),
                            *(undefined4 *)(&g_006a580a + g_006a587c),0);
  }
  iVar1 = ((TreasureDataManager *)this)->getInstance();
  bVar6 = *(byte *)(*(int *)(iVar1 + 0x6c) + 0x3c);
  if ((iVar5 == 0) || ((iVar2 != 0 && (*(char *)(iVar2 + 0x18) != '\0')))) {
    bVar6 = 1;
  }
  piVar3 = (int *)((BLTreasureDiceView *)*(undefined4 *)(((int)this) + 0x14))->getBtnGetReward();
  (**(code **)(*piVar3 + 0x90))(piVar3,bVar6 ^ 1);
  piVar3 = (int *)((BLTreasureDiceView *)*(undefined4 *)(((int)this) + 0x14))->getLabGetReward();
  (**(code **)(*piVar3 + 0x90))(piVar3,bVar6 ^ 1);
  piVar3 = (int *)((BLTreasureDiceView *)*(undefined4 *)(((int)this) + 0x14))->getBtnRestart();
  (**(code **)(*piVar3 + 0x90))(piVar3,bVar6);
  piVar3 = (int *)((BLTreasureDiceView *)*(undefined4 *)(((int)this) + 0x14))->getLabRestart();
  (**(code **)(*piVar3 + 0x90))(piVar3,bVar6);
  return;
}

BLTreasureDicePresenter::BLTreasureDicePresenter()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

undefined4 BLTreasureDicePresenter::create()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x3c))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLTreasureDicePresenter::initWithView(BLTreasureDiceView* p1)
{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  *(undefined4 *)(((int)this) + 0x14) = (undefined4)(intptr_t)p1;
  piVar1 = (int *)((BLTreasureDiceView *)p1)->getBtnNormalDice();
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)(&g_006a5a6e + g_006a5aec),0,0x20);
  piVar1 = (int *)((BLTreasureDiceView *)*(undefined4 *)(((int)this) + 0x14))->getBtnRestart();
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)(&g_006a5a8e + g_006a5af0),0,0x20);
  piVar1 = (int *)((BLTreasureDiceView *)*(undefined4 *)(((int)this) + 0x14))->getBtnGetReward();
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)(&g_006a5aac + g_006a5af4),0,0x20);
  iVar2 = 1;
  do {
    iVar3 = iVar2 + 1;
    piVar1 = (int *)(**(code **)(**(int **)(((int)this) + 0x14) + 0xd4))
                              (*(int **)(((int)this) + 0x14),iVar2);
    (**(code **)(*piVar1 + 0x254))
              (piVar1,((int)this),*(undefined4 *)(&g_006a5adc + g_006a5af8),0,0x20);
    iVar2 = iVar3;
  } while (iVar3 != 7);
  return;
}

void BLTreasureDicePresenter::onExit()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar1)->removeAllObservers((cocos2d::CCObject*)((int)this));
  return;
}

void BLTreasureDicePresenter::updateView()
{
  bool bVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  code *pcVar5;
  undefined4 uStack_dc;
  undefined1 auStack_d8 [4];
  undefined1 auStack_d4 [8];
  undefined1 auStack_cc [4];
  undefined1 auStack_c8 [180];
  
  uVar2 = (undefined4)(cocos2d::CCString::createWithFormat((char const*)&g_006a5b1c + g_006a5c54, *(undefined4 *)(((int)this) + 0x20), *(undefined4 *)(((int)this) + 0x1c)));
  piVar3 = (int *)((BLTreasureDiceView *)*(undefined4 *)(((int)this) + 0x14))->getLabRestartTimes();
  pcVar5 = *(code **)(*piVar3 + 0x234);
  uVar2 = (undefined4)(((cocos2d::CCString *)uVar2)->getCString());
  (*pcVar5)(piVar3,uVar2);
  iVar4 = *(int *)(((int)this) + 0x28);
  if (iVar4 < 1) {
    uVar2 = (undefined4)(cocos2d::CCString::createWithFormat((char const*)&g_006a5b78 + g_006a5c5c, *(undefined4 *)(((int)this) + 0x2c)));
    piVar3 = (int *)((BLTreasureDiceView *)*(undefined4 *)(((int)this) + 0x14))->getLabSpecialDicePrice();
    pcVar5 = *(code **)(*piVar3 + 0x234);
    uVar2 = (undefined4)(((cocos2d::CCString *)uVar2)->getCString());
    (*pcVar5)(piVar3,uVar2);
  }
  else {
    uVar2 = (undefined4)(cocos2d::CCString::createWithFormat((char const*)&g_006a5b4c + g_006a5c58));
    piVar3 = (int *)((BLTreasureDiceView *)*(undefined4 *)(((int)this) + 0x14))->getLabFreeDiceTimes();
    pcVar5 = *(code **)(*piVar3 + 0x234);
    uVar2 = (undefined4)(((cocos2d::CCString *)uVar2)->getCString());
    (*pcVar5)(piVar3,uVar2);
  }
  bVar1 = 0 < iVar4;
  piVar3 = (int *)((BLTreasureDiceView *)*(undefined4 *)(((int)this) + 0x14))->getLabNormalDicePrice();
  pcVar5 = *(code **)(*piVar3 + 0x234);
  uVar2 = (undefined4)(*(undefined4 *)(((int)this) + 0x30));
  func_0079e43c(auStack_d4,0x18);
  func_0079e44c(auStack_cc,uVar2);
  func_0079e45c(auStack_d8,&g_006a5bca + g_006a5c60,&uStack_dc);
  func_0079e46c(&uStack_dc,auStack_c8);
  func_0079e2bc(auStack_d8);
  func_0079e47c(auStack_d4);
  (*pcVar5)(piVar3,uStack_dc);
  func_0079e2bc(&uStack_dc);
  piVar3 = (int *)((BLTreasureDiceView *)*(undefined4 *)(((int)this) + 0x14))->getLabFreeIntro();
  (**(code **)(*piVar3 + 0x90))(piVar3,bVar1);
  piVar3 = (int *)((BLTreasureDiceView *)*(undefined4 *)(((int)this) + 0x14))->getLabFreeDiceTimes();
  (**(code **)(*piVar3 + 0x90))(piVar3,bVar1);
  piVar3 = (int *)((BLTreasureDiceView *)*(undefined4 *)(((int)this) + 0x14))->getLabSpecialDicePrice()
  ;
  (**(code **)(*piVar3 + 0x90))(piVar3,!bVar1);
  piVar3 = (int *)((BLTreasureDiceView *)*(undefined4 *)(((int)this) + 0x14))->getSpDiamondIcon();
  (**(code **)(*piVar3 + 0x90))(piVar3,!bVar1);
  return;
}

void BLTreasureDicePresenter::initWithData()
{
  int iVar1;
  
  iVar1 = ((TreasureDataManager *)this)->getInstance();
  *(undefined4 *)(((int)this) + 0x1c) = *(undefined4 *)(*(int *)(iVar1 + 0x6c) + 0x28);
  iVar1 = ((TreasureDataManager *)this)->getInstance();
  *(undefined4 *)(((int)this) + 0x20) = *(undefined4 *)(*(int *)(iVar1 + 0x6c) + 4);
  iVar1 = ((TreasureDataManager *)this)->getInstance();
  *(undefined4 *)(((int)this) + 0x28) = *(undefined4 *)(*(int *)(iVar1 + 0x6c) + 0x24);
  iVar1 = ((TreasureDataManager *)this)->getInstance();
  *(undefined4 *)(((int)this) + 0x2c) = *(undefined4 *)(*(int *)(iVar1 + 0x6c) + 0x2c);
  iVar1 = ((TreasureDataManager *)this)->getInstance();
  *(undefined4 *)(((int)this) + 0x30) = *(undefined4 *)(*(int *)(iVar1 + 0x6c) + 0x30);
  iVar1 = ((TreasureDataManager *)this)->getInstance();
  *(undefined4 *)(((int)this) + 0x34) = *(undefined4 *)(*(int *)(iVar1 + 0x6c) + 0x34);
  iVar1 = ((TreasureDataManager *)this)->getInstance();
  *(undefined4 *)(((int)this) + 0x38) = *(undefined4 *)(*(int *)(iVar1 + 0x6c) + 0x38);
  BLTreasureDicePresenter::updateView();
  return;
}

void BLTreasureDicePresenter::onGetRefreshSuccess()
{
  int iVar1;
  
  iVar1 = ((TreasureDataManager *)this)->getInstance();
  *(undefined4 *)(*(int *)(iVar1 + 0x6c) + 4) = *(undefined4 *)(((int)this) + 0x20);
  BLTreasureDicePresenter::updateView();
  return;
}

void BLTreasureDicePresenter::onUpdateFreeDice()
{
  int iVar1;
  
  iVar1 = ((TreasureDataManager *)this)->getInstance();
  *(undefined4 *)(((int)this) + 0x28) = *(undefined4 *)(*(int *)(iVar1 + 0x6c) + 0x24);
  BLTreasureDicePresenter::updateView();
  return;
}

void BLTreasureDicePresenter::updateNormalDicePrice(int p1)
{
  int *piVar1;
  code *pcVar2;
  undefined4 uStack_dc;
  undefined1 auStack_d8 [4];
  undefined1 auStack_d4 [8];
  undefined1 auStack_cc [4];
  undefined1 auStack_c8 [180];
  
  piVar1 = (int *)((BLTreasureDiceView *)*(undefined4 *)(((int)this) + 0x14))->getLabNormalDicePrice();
  pcVar2 = *(code **)(*piVar1 + 0x234);
  func_0079e43c(auStack_d4,0x18);
  func_0079e44c(auStack_cc,p1);
  func_0079e45c(auStack_d8,&g_006a5d1a + g_006a5d60,&uStack_dc);
  func_0079e46c(&uStack_dc,auStack_c8);
  func_0079e2bc(auStack_d8);
  func_0079e47c(auStack_d4);
  (*pcVar2)(piVar1,uStack_dc);
  func_0079e2bc(&uStack_dc);
  return;
}

void BLTreasureDicePresenter::getNetDataFirst()
{
  undefined1 auStack_34 [4];
  undefined1 auStack_30 [4];
  undefined4 uStack_2c;
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  func_0079e45c(auStack_28,&g_006a5d72 + g_006a5de4,auStack_34);
  func_0079e45c(auStack_24,&g_006a5d82 + g_006a5de8,auStack_30);
  uStack_20 = (undefined4)(*(undefined4 *)(&g_006a5d90 + g_006a5dec));
  uStack_1c = (undefined4)(0);
  ((PlatformHelp *)&uStack_2c)->getDeviceID();
  0 /* ctorZero */;
  func_0079e2bc(&uStack_2c);
  func_0079e2bc(auStack_24);
  func_0079e2bc(auStack_28);
  return;
}

void BLTreasureDicePresenter::restartCallNet()
{
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [12];
  
  func_0079e45c(auStack_20,&g_006a5dfc + g_006a5e4c,auStack_28);
  func_0079e45c(auStack_1c,&g_006a5e0e + g_006a5e50,auStack_24);
  0 /* ctorZero */;
  func_0079e2bc(auStack_1c);
  func_0079e2bc(auStack_20);
  return;
}



void BLTreasureDicePresenter::getRefreshTimeFromNet()
{
  undefined1 auStack_34 [4];
  undefined1 auStack_30 [4];
  undefined4 uStack_2c;
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  func_0079e45c(auStack_28,&g_006a5f92 + g_006a6004,auStack_34);
  func_0079e45c(auStack_24,&g_006a5fa2 + g_006a6008,auStack_30);
  uStack_20 = (undefined4)(*(undefined4 *)(&g_006a5fb0 + g_006a600c));
  uStack_1c = (undefined4)(0);
  ((PlatformHelp *)&uStack_2c)->getDeviceID();
  0 /* ctorZero */;
  func_0079e2bc(&uStack_2c);
  func_0079e2bc(auStack_24);
  func_0079e2bc(auStack_28);
  return;
}

void BLTreasureDicePresenter::onEnter()
{
  int iVar1;
  
  iVar1 = ((TreasureDataManager *)this)->getInstance();
  if (*(char *)(*(int *)(iVar1 + 0x6c) + 0x3d) == '\0') {
    BLTreasureDicePresenter::getRefreshTimeFromNet();
  }
  else {
    BLTreasureDicePresenter::getNetDataFirst();
  }
  BLTreasureDicePresenter::updateBtnRestart();
  return;
}

void BLTreasureDicePresenter::updateData()
{
  int iVar1;
  
  iVar1 = ((TreasureDataManager *)this)->getInstance();
  *(undefined4 *)(*(int *)(iVar1 + 0x6c) + 0x28) = *(undefined4 *)(((int)this) + 0x1c);
  iVar1 = ((TreasureDataManager *)this)->getInstance();
  *(undefined4 *)(*(int *)(iVar1 + 0x6c) + 4) = *(undefined4 *)(((int)this) + 0x20);
  iVar1 = ((TreasureDataManager *)this)->getInstance();
  *(undefined4 *)(*(int *)(iVar1 + 0x6c) + 0x24) = *(undefined4 *)(((int)this) + 0x28);
  iVar1 = ((TreasureDataManager *)this)->getInstance();
  *(undefined4 *)(*(int *)(iVar1 + 0x6c) + 0x2c) = *(undefined4 *)(((int)this) + 0x2c);
  iVar1 = ((TreasureDataManager *)this)->getInstance();
  *(undefined4 *)(*(int *)(iVar1 + 0x6c) + 0x30) = *(undefined4 *)(((int)this) + 0x30);
  iVar1 = ((TreasureDataManager *)this)->getInstance();
  *(undefined4 *)(*(int *)(iVar1 + 0x6c) + 0x34) = *(undefined4 *)(((int)this) + 0x34);
  iVar1 = ((TreasureDataManager *)this)->getInstance();
  *(undefined4 *)(*(int *)(iVar1 + 0x6c) + 0x38) = *(undefined4 *)(((int)this) + 0x38);
  iVar1 = ((TreasureDataManager *)this)->getInstance();
  ((TreasureInfoDynamicData *)*(undefined4 *)(iVar1 + 0x6c))->updateData();
  return;
}

void BLTreasureDicePresenter::onFirstSuccess()
{
  int iVar1;
  
  BLTreasureDicePresenter::updateData();
  BLTreasureDicePresenter::updateView();
  iVar1 = ((TreasureDataManager *)this)->getInstance();
  *(undefined1 *)(*(int *)(iVar1 + 0x6c) + 0x3d) = 0;
  return;
}

void BLTreasureDicePresenter::onCheckRestartSuccess()
{
  undefined4 p4 = 0;

  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int extraout_r3;
  
  iVar2 = ((TreasureDataManager *)this)->getInstance();
  cVar1 = *(char *)(*(int *)(iVar2 + 0x6c) + 0x3c);
  iVar3 = ((TreasureDataManager *)this)->getInstance();
  iVar2 = *(int *)(*(int *)(iVar3 + 0x68) + 4);
  uVar5 = (undefined4)(*(int *)(*(int *)(iVar3 + 0x68) + 8) - iVar2 >> 2);
  if (uVar5 < 100) {
    func_0079e784(&g_006a60d0 + g_006a6138,99,uVar5,iVar2,p4);
    iVar2 = extraout_r3;
  }
  if (*(int *)(iVar2 + 0x18c) == 0) {
joined_r0x006a6128:
    if (cVar1 != '\0') goto code_r0x006a60fc;
  }
  else {
    iVar2 = func_0079e55c(*(int *)(iVar2 + 0x18c),*(undefined4 *)(&g_006a60e6 + g_006a613c),
                            *(undefined4 *)(&g_006a60e8 + g_006a6140),0);
    if (cVar1 != '\0') goto code_r0x006a60fc;
    if (iVar2 != 0) {
      cVar1 = *(char *)(iVar2 + 0x18);
      goto joined_r0x006a6128;
    }
  }
  uVar4 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar4)->showUIById(0x1f6);
code_r0x006a60fc:
  BLTreasureDicePresenter::updateData();
  BLTreasureDicePresenter::updateView();
  *(undefined1 *)(((int)this) + 0x24) = 1;
  iVar2 = ((TreasureDataManager *)this)->getInstance();
  ((TreasureInfoDynamicData *)*(undefined4 *)(iVar2 + 0x6c))->useRestart();
  uVar4 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar4)->postNotification((char const*)&g_006a6122 + g_006a6144);
  return;
}

// ===== 修复: 补回被误删的函数占位 (8) =====
void BLTreasureDicePresenter::onRestart(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [4];
  undefined4 auStack_1c [2];
  
  if (*(char *)(((int)this) + 0x24) == '\0') {
    if (0 < *(int *)(((int)this) + 0x20)) {
      BLTreasureDicePresenter::restartCallNet();
      return;
    }
    uVar1 = (undefined4)(((Toast *)this)->sharedToast());
    uVar2 = (undefined4)(((BLLanguage *)this)->share());
    func_0079e45c(auStack_20,(unsigned char *)((char *)&g_006a5eb6 + (intptr_t)(g_006a5efc)),auStack_24);
    (((BLLanguage *)this))->getString(*(std::string *)auStack_1c);
    ((Toast *)(uVar1))->showToast((char const*)auStack_1c[0]);
  }
  else {
    uVar1 = (undefined4)(((Toast *)this)->sharedToast());
    uVar2 = (undefined4)(((BLLanguage *)this)->share());
    func_0079e45c(auStack_20,(unsigned char *)((char *)&g_006a5e7a + (intptr_t)(g_006a5ef8)),auStack_24);
    (((BLLanguage *)this))->getString(*(std::string *)auStack_1c);
    ((Toast *)(uVar1))->showToast((char const*)auStack_1c[0]);
  }
  func_0079e2bc(auStack_1c);
  func_0079e2bc(auStack_20);
  return;
}

void BLTreasureDicePresenter::onReStart()
{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [4];
  undefined4 auStack_1c [2];
  
  if (*(int *)(((int)this) + 0x20) < 1) {
    uVar1 = (undefined4)(((Toast *)this)->sharedToast());
    uVar3 = (undefined4)(((BLLanguage *)this)->share());
    func_0079e45c(auStack_20,(unsigned char *)((char *)&g_006a5f3e + (intptr_t)(g_006a5f80)),auStack_24);
    (((BLLanguage *)this))->getString(*(std::string *)auStack_1c);
    ((Toast *)(uVar1))->showToast((char const*)auStack_1c[0]);
    func_0079e2bc(auStack_1c);
    func_0079e2bc(auStack_20);
  }
  else {
    BLTreasureDicePresenter::restartCallNet();
    uVar1 = (undefined4)(((UIManager *)this)->shareManager());
    iVar2 = (undefined4)((void)(((UIManager *)(uVar1))->getUIObject(g_006a5f7c)),(intptr_t)0);
    if (iVar2 != 0) {
      uVar1 = (undefined4)(((UIManager *)this)->shareManager());
      ((UIManager *)(uVar1))->removeUIByID(g_006a5f7c);
    }
  }
  return;
}

void BLTreasureDicePresenter::onSpecialDice(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLTreasureDicePresenter::onNormalDice(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLTreasureDicePresenter::updateDataByNet(rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> const& p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLTreasureDicePresenter::onRestartCallback(cocos2d::extension::CCHttpClient* p1, cocos2d::extension::CCHttpResponse* p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLTreasureDicePresenter::onFirstCallback(cocos2d::extension::CCHttpClient* p1, cocos2d::extension::CCHttpResponse* p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLTreasureDicePresenter::onGetRefreshCallback(cocos2d::extension::CCHttpClient* p1, cocos2d::extension::CCHttpResponse* p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
