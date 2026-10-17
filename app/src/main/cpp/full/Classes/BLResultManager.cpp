#include "BLResultManager.h"
#include "CCNotificationCenter.h"
#include "UIObject.h"
#include "CCObject.h"
#include "BLArenaResultPresenter.h"
#include "BLArenaResultView.h"
#include "BLEquipGiftPresenter.h"
#include "BLEquipGiftView.h"
#include "BLGameScene.h"
#include "BLLeakUtils.h"
#include "BLMinePresenter.h"
#include "BLMineResultPresenter.h"
#include "BLMineResultView.h"
#include "BLMineView.h"
#include "BLMission.h"
#include "BLNormalWinPresenter.h"
#include "BLPKResultPresenter.h"
#include "BLPKResultView.h"
#include "BLWinPresenter.h"
#include "BLWinView.h"
#include "BackPackData.h"
#include "BluetoothHelper.h"
#include "CircusData.h"
#include "DataCacheManager.h"
#include "DataManager.h"
#include "DebugLocalSys.h"
#include "GiftData.h"
#include "ItemData.h"
#include "LivenessUserData.h"
#include "PlatformHelp.h"
#include "UIManager.h"
#include "UserData.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <new>   // ghost_fix.js 自动补齐
static BLResultManager *s_singleton_1 = 0;   /* SINGLETON_BATCH(R73): 原为裸地址单例 */

using namespace cocos2d;
// 兜底声明
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e41c(...);
extern "C" long long func_0079e43c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e46c(...);
extern "C" long long func_0079e47c(...);
extern "C" long long func_0079e4ac(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e60c(...);
extern "C" long long func_0079e6c0(...);
extern "C" long long func_0079e784(...);
extern "C" long long func_0079e974(...);
extern "C" long long func_0079ea14(...);
extern "C" long long ghidra_CARRY4(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_00653544;
extern "C" unsigned long UNK_00653558;
extern "C" unsigned long UNK_006535b4;
extern "C" unsigned long UNK_006535e6;
extern "C" unsigned long UNK_006535e8;
extern "C" unsigned long UNK_00653602;
extern "C" unsigned long UNK_00653604;
extern "C" unsigned long UNK_006538bc;
extern "C" unsigned long UNK_006538be;
extern "C" unsigned long UNK_006538d8;
extern "C" unsigned long UNK_006538da;
extern "C" unsigned long UNK_00653a1e;
extern "C" unsigned long UNK_00653a20;
extern "C" unsigned long UNK_00653a8e;
extern "C" unsigned long UNK_00653a90;
extern "C" unsigned long UNK_00653aec;
extern "C" unsigned long UNK_00653aee;
extern "C" unsigned long UNK_00653b2c;
extern "C" unsigned long UNK_00653b2e;
extern "C" unsigned long UNK_00653b6a;
extern "C" unsigned long UNK_00653b6c;
extern "C" unsigned long UNK_00653ba6;
extern "C" unsigned long UNK_00653ba8;
extern "C" unsigned long _DAT_00653688;
extern "C" unsigned long _DAT_0065368c;
extern "C" unsigned long _DAT_006536cc;
extern "C" unsigned long _DAT_006536d0;
extern "C" unsigned long _DAT_006536d4;
extern "C" unsigned long _DAT_006537fc;
extern "C" unsigned long _DAT_00653800;
extern "C" unsigned long _DAT_00653804;
extern "C" unsigned long _DAT_00653808;
extern "C" unsigned long _DAT_0065380c;
extern "C" unsigned long _DAT_006539f4;
extern "C" unsigned long _DAT_006539f8;
extern "C" unsigned long _DAT_006539fc;
extern "C" unsigned long _DAT_00653a00;
extern "C" unsigned long _DAT_00653ce8;
extern "C" unsigned long _DAT_00653cec;
extern "C" unsigned long _DAT_00653fa8;
extern "C" unsigned long _DAT_00653fac;
extern "C" unsigned long _DAT_00653fb0;
extern "C" unsigned long _DAT_00653fb4;
extern "C" unsigned long _DAT_00653fb8;
extern "C" unsigned long _DAT_00653fbc;
extern "C" unsigned long _DAT_00653fc0;
extern "C" unsigned long _DAT_00653fc4;
extern "C" unsigned long _DAT_00653fc8;
extern "C" unsigned long _DAT_00653fcc;
extern "C" unsigned long _DAT_00653fd0;
extern "C" unsigned long _DAT_00653fd4;
extern "C" unsigned long _DAT_00653fd8;
extern "C" unsigned long _DAT_00653fdc;
extern "C" unsigned long _DAT_00653fe0;
extern "C" unsigned long _DAT_00653fe4;
extern "C" unsigned long _DAT_00654340;
extern "C" unsigned long _DAT_00654344;
extern "C" unsigned long _DAT_00654348;
extern "C" unsigned long _DAT_0065434c;
extern "C" unsigned long _DAT_00654350;
extern "C" unsigned long _DAT_00654354;
extern "C" unsigned long _DAT_0065447c;
extern "C" unsigned long _DAT_006547a4;
extern "C" unsigned long _DAT_006547a8;
extern "C" unsigned long _DAT_006547ac;
extern "C" unsigned long _DAT_00654910;
extern "C" unsigned long _DAT_00654914;
extern "C" unsigned long _DAT_00654918;
extern "C" unsigned long _DAT_00654e60;
extern "C" unsigned long _UNK_00653588;
extern "C" unsigned long _UNK_0065358c;
extern "C" unsigned long _UNK_00653624;
extern "C" unsigned long _UNK_00653628;
extern "C" unsigned long _UNK_0065362c;
extern "C" unsigned long _UNK_00653630;
extern "C" unsigned long _UNK_00653634;
extern "C" unsigned long _UNK_0065393c;
extern "C" unsigned long _UNK_00653940;
extern "C" unsigned long _UNK_00653944;
extern "C" unsigned long _UNK_00653948;
extern "C" unsigned long _UNK_00653a68;
extern "C" unsigned long _UNK_00653a6c;
extern "C" unsigned long _UNK_00653a70;
extern "C" unsigned long _UNK_00653ac4;
extern "C" unsigned long _UNK_00653ac8;
extern "C" unsigned long _UNK_00653acc;
extern "C" unsigned long _UNK_00653b08;
extern "C" unsigned long _UNK_00653b0c;
extern "C" unsigned long _UNK_00653b48;
extern "C" unsigned long _UNK_00653b4c;
extern "C" unsigned long _UNK_00653b84;
extern "C" unsigned long _UNK_00653b88;
extern "C" unsigned long _UNK_00653bc0;
extern "C" unsigned long _UNK_00653bc4;
extern "C" unsigned long _UNK_00653d10;
extern "C" unsigned long _UNK_00653d24;
extern "C" unsigned long extraout_r1;
extern "C" unsigned long extraout_r1_00;
extern "C" unsigned long extraout_r1_01;
extern "C" unsigned long extraout_r3;
extern "C" unsigned long g_00653544;
extern "C" unsigned long g_00653558;
extern "C" unsigned long g_00653588;
extern "C" unsigned long g_0065358c;
extern "C" unsigned long g_006535b4;
extern "C" unsigned long g_006535e6;
extern "C" unsigned long g_006535e8;
extern "C" unsigned long g_00653602;
extern "C" unsigned long g_00653604;
extern "C" unsigned long g_00653624;
extern "C" unsigned long g_00653628;
extern "C" unsigned long g_0065362c;
extern "C" unsigned long g_00653630;
extern "C" unsigned long g_00653634;
extern "C" unsigned long g_00653688;
extern "C" unsigned long g_0065368c;
extern "C" unsigned long g_006536cc;
extern "C" unsigned long g_006536d0;
extern "C" unsigned long g_006536d4;
extern "C" unsigned long g_006537fc;
extern "C" unsigned long g_00653800;
extern "C" unsigned long g_00653804;
extern "C" unsigned long g_00653808;
extern "C" unsigned long g_0065380c;
extern "C" unsigned long g_006538bc;
extern "C" unsigned long g_006538be;
extern "C" unsigned long g_006538d8;
extern "C" unsigned long g_006538da;
extern "C" unsigned long g_0065393c;
extern "C" unsigned long g_00653940;
extern "C" unsigned long g_00653944;
extern "C" unsigned long g_00653948;
extern "C" unsigned long g_006539f4;
extern "C" unsigned long g_006539f8;
extern "C" unsigned long g_006539fc;
extern "C" unsigned long g_00653a00;
extern "C" unsigned long g_00653a1e;
extern "C" unsigned long g_00653a20;
extern "C" unsigned long g_00653a68;
extern "C" unsigned long g_00653a6c;
extern "C" unsigned long g_00653a70;
extern "C" unsigned long g_00653a8e;
extern "C" unsigned long g_00653a90;
extern "C" unsigned long g_00653ac4;
extern "C" unsigned long g_00653ac8;
extern "C" unsigned long g_00653acc;
extern "C" unsigned long g_00653aec;
extern "C" unsigned long g_00653aee;
extern "C" unsigned long g_00653b08;
extern "C" unsigned long g_00653b0c;
extern "C" unsigned long g_00653b2c;
extern "C" unsigned long g_00653b2e;
extern "C" unsigned long g_00653b48;
extern "C" unsigned long g_00653b4c;
extern "C" unsigned long g_00653b6a;
extern "C" unsigned long g_00653b6c;
extern "C" unsigned long g_00653b84;
extern "C" unsigned long g_00653b88;
extern "C" unsigned long g_00653ba6;
extern "C" unsigned long g_00653ba8;
extern "C" unsigned long g_00653bc0;
extern "C" unsigned long g_00653bc4;
extern "C" unsigned long g_00653ce8;
extern "C" unsigned long g_00653cec;
extern "C" unsigned long g_00653d10;
extern "C" unsigned long g_00653d24;
extern "C" unsigned long g_00653fa8;
extern "C" unsigned long g_00653fac;
extern "C" unsigned long g_00653fb0;
extern "C" unsigned long g_00653fb4;
extern "C" unsigned long g_00653fb8;
extern "C" unsigned long g_00653fbc;
extern "C" unsigned long g_00653fc0;
extern "C" unsigned long g_00653fc4;
extern "C" unsigned long g_00653fc8;
extern "C" unsigned long g_00653fcc;
extern "C" unsigned long g_00653fd0;
extern "C" unsigned long g_00653fd4;
extern "C" unsigned long g_00653fd8;
extern "C" unsigned long g_00653fdc;
extern "C" unsigned long g_00653fe0;
extern "C" unsigned long g_00653fe4;
extern "C" unsigned long g_00654340;
extern "C" unsigned long g_00654344;
extern "C" unsigned long g_00654348;
extern "C" unsigned long g_0065434c;
extern "C" unsigned long g_00654350;
extern "C" unsigned long g_00654354;
extern "C" unsigned long g_0065447c;
extern "C" unsigned long g_006547a4;
extern "C" unsigned long g_006547a8;
extern "C" unsigned long g_006547ac;
extern "C" unsigned long g_00654910;
extern "C" unsigned long g_00654914;
extern "C" unsigned long g_00654918;
extern "C" unsigned long g_00654e60;
BLResultManager::~BLResultManager()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int *piStack_18;
  undefined4 uStack_14;
  
  /* VPTR_FIX(R87): vptr=(&g_A+g_B)+8 ?? g_ ?? 0 ?? -> ???? SEGV?????? vptr???? */;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00653558 + g_0065358c,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}


BLResultManager::BLResultManager()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  *(undefined1 *)(((int)this) + 5) = 0;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLResultManager"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

bool BLResultManager::init()
{
  return 1;
}

undefined4 BLResultManager::shareManager()
{
  undefined4 uVar1;
  
  if (s_singleton_1 == 0) {
    s_singleton_1 = new BLResultManager();
    s_singleton_1->init();
  }
  return (undefined4)(intptr_t)s_singleton_1;
}




void BLResultManager::showArenaWin()
{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  iVar2 = ((UIManager *)uVar1)->showUIById(200);
  if ((iVar2 != 0) &&
     (iVar2 = func_0079e55c(iVar2,*(undefined4 *)(&g_00653a1e + g_00653a68),
                              *(undefined4 *)(&g_00653a20 + g_00653a6c),0), iVar2 != 0)) {
    uVar1 = (undefined4)(*(undefined4 *)(iVar2 + 0x24));
    iVar2 = ((CircusData *)this)->getMe();
    iVar4 = *(int *)(iVar2 + 0x84);
    piVar3 = (int *)((DataManager *)this)->shareDataManager();
    iVar2 = (**(code **)(*piVar3 + 0x160))();
    if (iVar4 < iVar2) {
      iVar2 = iVar4;
    }
    if ((iVar2 < 1) || (g_00653a70 < iVar2)) {
      iVar2 = g_00653a70;
    }
    uVar1 = (undefined4)(((BLArenaResultView *)uVar1)->getPresenter());
    ((BLArenaResultPresenter *)uVar1)->initWith(1, iVar2, 0);
  }
  return;
}

void BLResultManager::showArenaFaild()
{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_r3;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  iVar2 = ((UIManager *)uVar1)->showUIById(200);
  if ((iVar2 != 0) &&
     (iVar2 = func_0079e55c(iVar2,*(undefined4 *)(&g_00653a8e + g_00653ac4),
                              *(undefined4 *)(&g_00653a90 + g_00653ac8),0,in_r3), iVar2 != 0))
  {
    uVar1 = (undefined4)(*(undefined4 *)(iVar2 + 0x24));
    iVar2 = ((CircusData *)this)->getMe();
    iVar2 = *(int *)(iVar2 + 0x84);
    if ((iVar2 < 1) || (g_00653acc < iVar2)) {
      iVar2 = g_00653acc;
    }
    uVar1 = (undefined4)(((BLArenaResultView *)uVar1)->getPresenter());
    ((BLArenaResultPresenter *)uVar1)->initWith(0, iVar2, 0);
  }
  return;
}

void BLResultManager::showMineWin()
{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_r3;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  iVar2 = ((UIManager *)uVar1)->showUIById(0x10a);
  if ((iVar2 != 0) &&
     (iVar2 = func_0079e55c(iVar2,*(undefined4 *)(&g_00653aec + g_00653b08),
                              *(undefined4 *)(&g_00653aee + g_00653b0c),0,in_r3), iVar2 != 0))
  {
    uVar1 = (undefined4)(((BLMineResultView *)*(undefined4 *)(iVar2 + 0x24))->getPresenter());
    ((BLMineResultPresenter *)uVar1)->initWith(1);
  }
  return;
}

void BLResultManager::showMineFaild()
{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_r3;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  iVar2 = ((UIManager *)uVar1)->showUIById(0x10a);
  if ((iVar2 != 0) &&
     (iVar2 = func_0079e55c(iVar2,*(undefined4 *)(&g_00653b2c + g_00653b48),
                              *(undefined4 *)(&g_00653b2e + g_00653b4c),0,in_r3), iVar2 != 0))
  {
    uVar1 = (undefined4)(((BLMineResultView *)*(undefined4 *)(iVar2 + 0x24))->getPresenter());
    ((BLMineResultPresenter *)uVar1)->initWith(0);
  }
  return;
}

void BLResultManager::showPKFaild()
{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_r3;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  iVar2 = ((UIManager *)uVar1)->showUIById(0x2a);
  if ((iVar2 != 0) &&
     (iVar2 = func_0079e55c(iVar2,*(undefined4 *)(&g_00653b6a + g_00653b84),
                              *(undefined4 *)(&g_00653b6c + g_00653b88),0,in_r3), iVar2 != 0))
  {
    uVar1 = (undefined4)(((BLPKResultView *)*(undefined4 *)(iVar2 + 0x24))->getPresenter());
    ((BLPKResultPresenter *)uVar1)->initWith(0);
  }
  return;
}

void BLResultManager::showPKWin()
{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_r3;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  iVar2 = ((UIManager *)uVar1)->showUIById(0x2a);
  if ((iVar2 != 0) &&
     (iVar2 = func_0079e55c(iVar2,*(undefined4 *)(&g_00653ba6 + g_00653bc0),
                              *(undefined4 *)(&g_00653ba8 + g_00653bc4),0,in_r3), iVar2 != 0))
  {
    uVar1 = (undefined4)(((BLPKResultView *)*(undefined4 *)(iVar2 + 0x24))->getPresenter());
    ((BLPKResultPresenter *)uVar1)->initWith(1);
  }
  return;
}


void BLResultManager::showChallengeWin()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->showUIById(0x288);
  return;
}

void BLResultManager::showMoneyTreeWin()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->showUIById(g_00653d10);
  return;
}

void BLResultManager::showChallengeFailed()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->showUIById(g_00653d24);
  return;
}

// ===== 修复: 补回被误删的函数占位 (9) =====
void BLResultManager::showMine()
{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)(uVar1))->removeObserver((cocos2d::CCObject*)((int)this), (char const*)(unsigned char *)((char *)&g_006535b4 + (intptr_t)(g_00653624)));
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  iVar2 = (undefined4)((void)(((UIManager *)(uVar1))->getUIObject(0xb1)),(intptr_t)0);
  if (iVar2 != 0) {
    uVar1 = (undefined4)(((UIManager *)this)->shareManager());
    ((UIManager *)(uVar1))->removeUIByID(0xb1);
  }
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  iVar3 = (undefined4)(intptr_t)(((UIManager *)(uVar1))->createUi(0xb1));
  iVar2 = 0;
  if ((((iVar3 != 0) &&
       (iVar2 = func_0079e55c(iVar3,*(undefined4 *)((unsigned char *)((char *)&g_006535e6 + (intptr_t)(g_00653628))),
                                *(undefined4 *)((unsigned char *)((char *)&g_006535e8 + (intptr_t)(g_0065362c))),0), iVar2 != 0)) &&
      (*(int *)(iVar2 + 0x24) != 0)) &&
     (iVar3 = func_0079e55c(*(int *)(iVar2 + 0x24),*(undefined4 *)((unsigned char *)((char *)&g_00653602 + (intptr_t)(g_00653630))),
                              *(undefined4 *)((unsigned char *)((char *)&g_00653604 + (intptr_t)(g_00653634))),0), iVar3 != 0)) {
    uVar1 = (undefined4)(((BLMineView *)this)->getPresenter());
    ((BLMinePresenter *)(uVar1))->showUI(1);
  }
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)(uVar1))->pushUi((UIObject*)iVar2);
  return;
}

void BLResultManager::showNormalWin()
{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  int iStack_28;
  int iStack_24;
  undefined1 auStack_20 [4];
  undefined4 auStack_1c [2];
  
  piVar1 = (int *)((BLMission *)this)->currentMission();
  piVar1 = (int *)(**(code **)(*(int *)(piVar1) + (0x208)))();
  piVar2 = (int *)((DataManager *)this)->shareDataManager();
  uVar3 = (undefined4)((**(code **)(*(int *)(piVar2) + (0x28)))());
  ((UserData *)this)->getMission();
  *(undefined1 *)(((int)this) + 0x14) = 0;
  piVar1 = (int *)(**(code **)(*(int *)(piVar1) + (0xb0)))(piVar1);
  (**(code **)(*(int *)(piVar1) + (0x18)))(&iStack_24,piVar1);
  bVar7 = (undefined4)(intptr_t)(false);
  if (*(int *)(iStack_24 + -0xc) == *(int *)(iStack_28 + -0xc)) {
    iVar4 = (undefined4)(intptr_t)(func_0079e60c());
    bVar7 = (undefined4)(intptr_t)(iVar4 == 0);
  }
  func_0079e2bc(&iStack_24);
  if (bVar7) {
    piVar1 = (int *)((DataManager *)this)->shareDataManager();
    uVar3 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x28)))());
    ((UserData *)this)->nextMission();
    func_0079e2bc(auStack_20);
    *(undefined1 *)(((int)this) + 0x14) = 1;
  }
  uVar3 = (undefined4)(((UIManager *)this)->shareManager());
  iVar4 = (undefined4)(intptr_t)(((UIManager *)uVar3)->showUIById(g_006537fc));
  if ((((iVar4 != 0) &&
       (iVar4 = func_0079e55c(iVar4,*(undefined4 *)("Xԫ"),
                                *(undefined4 *)(g_00653804 + 0x653786),0), iVar4 != 0)) &&
      (*(int *)(iVar4 + 0x24) != 0)) &&
     (iVar4 = func_0079e55c(*(int *)(iVar4 + 0x24),*(undefined4 *)(g_00653808 + 0x6537a0),
                              *(undefined4 *)(g_0065380c + 0x6537a2),0), iVar4 != 0)) {
    iVar5 = (undefined4)(intptr_t)(func_0079e6c0(iStack_28));
    piVar1 = (int *)((DataManager *)this)->shareDataManager();
    uVar3 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x28)))());
    ((UserData *)this)->getMission();
    iVar6 = (undefined4)(intptr_t)(func_0079e6c0(auStack_1c[0]));
    func_0079e2bc(auStack_1c);
    if (iVar5 < iVar6) {
      (**(code **)(**(int **)(iVar4 + 0x108) + 0x44))(*(int **)(iVar4 + 0x108),1);
    }
    ((BLNormalWinPresenter *)*(undefined4 *)(iVar4 + 0x108))->initData();
  }
  func_0079e2bc(&iStack_28);
  return;
}

void BLResultManager::showEliteWin()
{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  int iStack_28;
  int iStack_24;
  undefined1 auStack_20 [4];
  undefined4 auStack_1c [2];
  
  piVar1 = (int *)((BLMission *)this)->currentMission();
  piVar1 = (int *)(**(code **)(*(int *)(piVar1) + (0x208)))();
  piVar2 = (int *)((DataManager *)this)->shareDataManager();
  uVar3 = (undefined4)((**(code **)(*(int *)(piVar2) + (0x28)))());
  ((UserData *)this)->getMission();
  *(undefined1 *)(((int)this) + 0x14) = 0;
  piVar1 = (int *)(**(code **)(*(int *)(piVar1) + (0xb0)))(piVar1);
  (**(code **)(*(int *)(piVar1) + (0x18)))(&iStack_24,piVar1);
  bVar7 = (undefined4)(intptr_t)(false);
  if (*(int *)(iStack_24 + -0xc) == *(int *)(iStack_28 + -0xc)) {
    iVar4 = (undefined4)(intptr_t)(func_0079e60c());
    bVar7 = (undefined4)(intptr_t)(iVar4 == 0);
  }
  func_0079e2bc(&iStack_24);
  if (bVar7) {
    piVar1 = (int *)((DataManager *)this)->shareDataManager();
    uVar3 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x28)))());
    ((UserData *)this)->nextMission();
    func_0079e2bc(auStack_20);
    *(undefined1 *)(((int)this) + 0x14) = 1;
  }
  uVar3 = (undefined4)(((UIManager *)this)->shareManager());
  iVar4 = (undefined4)(intptr_t)(((UIManager *)uVar3)->showUIById(0x29));
  if ((((iVar4 != 0) &&
       (iVar4 = func_0079e55c(iVar4,*(undefined4 *)((unsigned char *)((char *)&g_006538bc + (intptr_t)(g_0065393c))),
                                *(undefined4 *)((unsigned char *)((char *)&g_006538be + (intptr_t)(g_00653940))),0), iVar4 != 0)) &&
      (*(int *)(iVar4 + 0x24) != 0)) &&
     (iVar4 = func_0079e55c(*(int *)(iVar4 + 0x24),*(undefined4 *)((unsigned char *)((char *)&g_006538d8 + (intptr_t)(g_00653944))),
                              *(undefined4 *)((unsigned char *)((char *)&g_006538da + (intptr_t)(g_00653948))),0), iVar4 != 0)) {
    iVar5 = (undefined4)(intptr_t)(func_0079e6c0(iStack_28));
    piVar1 = (int *)((DataManager *)this)->shareDataManager();
    uVar3 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x28)))());
    ((UserData *)this)->getMission();
    iVar6 = (undefined4)(intptr_t)(func_0079e6c0(auStack_1c[0]));
    func_0079e2bc(auStack_1c);
    if (iVar5 < iVar6) {
      piVar1 = (int *)((BLWinView *)iVar4)->getPresenter();
      (**(code **)(*(int *)(piVar1) + (0x44)))(piVar1,1);
    }
    ((BLWinView *)iVar4)->getPresenter();
    ((BLWinPresenter *)this)->initData();
  }
  func_0079e2bc(&iStack_28);
  return;
}

undefined8 BLResultManager::showGift(std::string * p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void BLResultManager::pickupDropItems()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLResultManager::giftManager()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLResultManager::showFailed()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLResultManager::returnMainCity()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLResultManager::showWin()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
