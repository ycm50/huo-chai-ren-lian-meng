#include "MirrorDataManager.h"
#include "BLGameScene.h"
#include "DataCacheManager.h"
#include "DataManager.h"
#include "MirrorMissionData.h"
#include "Toast.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
using namespace cocos2d;
// 兜底声明
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2dc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e54c(...);
extern "C" long long func_0079e864(...);
extern "C" unsigned long UNK_0049424e;
extern "C" unsigned long _DAT_00493620;
extern "C" unsigned long _DAT_004936a4;
extern "C" unsigned long _DAT_004936a8;
extern "C" unsigned long _DAT_004936ac;
extern "C" unsigned long _DAT_004936e0;
extern "C" unsigned long _DAT_00493878;
extern "C" unsigned long _DAT_0049387c;
extern "C" unsigned long _DAT_00493880;
extern "C" unsigned long _DAT_00493884;
extern "C" unsigned long _DAT_00493888;
extern "C" unsigned long _DAT_0049388c;
extern "C" unsigned long _DAT_00493890;
extern "C" unsigned long _DAT_00493894;
extern "C" unsigned long _DAT_00493898;
extern "C" unsigned long _DAT_0049389c;
extern "C" unsigned long _DAT_004938a0;
extern "C" unsigned long _DAT_004938a4;
extern "C" unsigned long _DAT_004938a8;
extern "C" unsigned long _DAT_004938ac;
extern "C" unsigned long _DAT_004938b0;
extern "C" unsigned long _DAT_004938b4;
extern "C" unsigned long _DAT_004938b8;
extern "C" unsigned long _DAT_00493964;
extern "C" unsigned long _DAT_00493968;
extern "C" unsigned long _DAT_0049396c;
extern "C" unsigned long _DAT_00493970;
extern "C" unsigned long _DAT_00493974;
extern "C" unsigned long _DAT_00493978;
extern "C" unsigned long _DAT_00493aa0;
extern "C" unsigned long _DAT_00493aa4;
extern "C" unsigned long _DAT_00493aa8;
extern "C" unsigned long _DAT_00493aac;
extern "C" unsigned long _DAT_00493ab0;
extern "C" unsigned long _DAT_00493c44;
extern "C" unsigned long _DAT_00493c48;
extern "C" unsigned long _DAT_00493c4c;
extern "C" unsigned long _DAT_00493c50;
extern "C" unsigned long _DAT_00493c54;
extern "C" unsigned long _DAT_00493c58;
extern "C" unsigned long _DAT_00493c5c;
extern "C" unsigned long _DAT_00493c60;
extern "C" unsigned long _DAT_00493c64;
extern "C" unsigned long _DAT_00493c68;
extern "C" unsigned long _DAT_00493e2c;
extern "C" unsigned long _DAT_00493e30;
extern "C" unsigned long _DAT_00493e34;
extern "C" unsigned long _DAT_00493e38;
extern "C" unsigned long _DAT_00493e3c;
extern "C" unsigned long _DAT_00493e40;
extern "C" unsigned long _DAT_00493e44;
extern "C" unsigned long _DAT_00493e48;
extern "C" unsigned long _DAT_00493e4c;
extern "C" unsigned long _DAT_00493e50;
extern "C" unsigned long _DAT_00493e54;
extern "C" unsigned long _DAT_00494020;
extern "C" unsigned long _DAT_00494024;
extern "C" unsigned long _DAT_00494028;
extern "C" unsigned long _DAT_0049402c;
extern "C" unsigned long _DAT_00494030;
extern "C" unsigned long _DAT_00494034;
extern "C" unsigned long _DAT_00494038;
extern "C" unsigned long _DAT_0049403c;
extern "C" unsigned long _DAT_00494040;
extern "C" unsigned long _DAT_00494044;
extern "C" unsigned long _DAT_00494048;
extern "C" unsigned long _DAT_0049425c;
extern "C" unsigned long _DAT_00494260;
extern "C" unsigned long _DAT_00494264;
extern "C" unsigned long _DAT_00494268;
extern "C" unsigned long _DAT_0049426c;
extern "C" unsigned long _DAT_00494270;
extern "C" unsigned long _DAT_00494274;
extern "C" unsigned long _DAT_00494278;
extern "C" unsigned long _DAT_0049427c;
extern "C" unsigned long _DAT_00494280;
extern "C" unsigned long _DAT_00494284;
extern "C" unsigned long _DAT_00494288;
extern "C" unsigned long _DAT_0049428c;
extern "C" unsigned long _DAT_00494290;
extern "C" unsigned long _DAT_00494294;
extern "C" unsigned long _DAT_00494298;
extern "C" unsigned long _DAT_0049429c;
extern "C" unsigned long extraout_r2;
extern "C" unsigned long g_00493620;
extern "C" unsigned long g_004936a4;
extern "C" unsigned long g_004936a8;
extern "C" unsigned long g_004936ac;
extern "C" unsigned long g_004936e0;
extern "C" unsigned long g_00493878;
extern "C" unsigned long g_0049387c;
extern "C" unsigned long g_00493880;
extern "C" unsigned long g_00493884;
extern "C" unsigned long g_00493888;
extern "C" unsigned long g_0049388c;
extern "C" unsigned long g_00493890;
extern "C" unsigned long g_00493894;
extern "C" unsigned long g_00493898;
extern "C" unsigned long g_0049389c;
extern "C" unsigned long g_004938a0;
extern "C" unsigned long g_004938a4;
extern "C" unsigned long g_004938a8;
extern "C" unsigned long g_004938ac;
extern "C" unsigned long g_004938b0;
extern "C" unsigned long g_004938b4;
extern "C" unsigned long g_004938b8;
extern "C" unsigned long g_00493964;
extern "C" unsigned long g_00493968;
extern "C" unsigned long g_0049396c;
extern "C" unsigned long g_00493970;
extern "C" unsigned long g_00493974;
extern "C" unsigned long g_00493978;
extern "C" unsigned long g_00493aa0;
extern "C" unsigned long g_00493aa4;
extern "C" unsigned long g_00493aa8;
extern "C" unsigned long g_00493aac;
extern "C" unsigned long g_00493ab0;
extern "C" unsigned long g_00493c44;
extern "C" unsigned long g_00493c48;
extern "C" unsigned long g_00493c4c;
extern "C" unsigned long g_00493c50;
extern "C" unsigned long g_00493c54;
extern "C" unsigned long g_00493c58;
extern "C" unsigned long g_00493c5c;
extern "C" unsigned long g_00493c60;
extern "C" unsigned long g_00493c64;
extern "C" unsigned long g_00493c68;
extern "C" unsigned long g_00493e2c;
extern "C" unsigned long g_00493e30;
extern "C" unsigned long g_00493e34;
extern "C" unsigned long g_00493e38;
extern "C" unsigned long g_00493e3c;
extern "C" unsigned long g_00493e40;
extern "C" unsigned long g_00493e44;
extern "C" unsigned long g_00493e48;
extern "C" unsigned long g_00493e4c;
extern "C" unsigned long g_00493e50;
extern "C" unsigned long g_00493e54;
extern "C" unsigned long g_00494020;
extern "C" unsigned long g_00494024;
extern "C" unsigned long g_00494028;
extern "C" unsigned long g_0049402c;
extern "C" unsigned long g_00494030;
extern "C" unsigned long g_00494034;
extern "C" unsigned long g_00494038;
extern "C" unsigned long g_0049403c;
extern "C" unsigned long g_00494040;
extern "C" unsigned long g_00494044;
extern "C" unsigned long g_00494048;
extern "C" unsigned long g_0049424e;
extern "C" unsigned long g_0049425c;
extern "C" unsigned long g_00494260;
extern "C" unsigned long g_00494264;
extern "C" unsigned long g_00494268;
extern "C" unsigned long g_0049426c;
extern "C" unsigned long g_00494270;
extern "C" unsigned long g_00494274;
extern "C" unsigned long g_00494278;
extern "C" unsigned long g_0049427c;
extern "C" unsigned long g_00494280;
extern "C" unsigned long g_00494284;
extern "C" unsigned long g_00494288;
extern "C" unsigned long g_0049428c;
extern "C" unsigned long g_00494290;
extern "C" unsigned long g_00494294;
extern "C" unsigned long g_00494298;
extern "C" unsigned long g_0049429c;
MirrorDataManager::~MirrorDataManager()
{
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  func_0079e2bc(((int)this) + 5);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

MirrorDataManager::MirrorDataManager()
{
  undefined4 p4 = 0;

  int *piVar1;
  int iVar2;
  undefined4 extraout_r2;
  int iVar3;
  
  0 /* ctorZero */;
  iVar2 = g_004936a8;
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  iVar3 = *(int *)(g_004936ac + 0x493662) + 0xc;
  *(int *)((int)this + 4*(5)) = iVar3;
  func_0079e2dc(((int)this) + 5,iVar2 + 0x493660,extraout_r2,iVar3,p4);
  *(int *)((int)this + 4*(6)) = -1;
  *(int *)((int)this + 4*(8)) = 3;
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  iVar2 = (**(code **)(*piVar1 + 0x100))();
  if (iVar2 != 0) {
    *(int *)((int)this + 4*(8)) = 4;
  }
  *(int *)((int)this + 4*(7)) = 0;
  *(int *)((int)this + 4*(9)) = 0;
  return;
}

int MirrorDataManager::getInstance()
{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)(g_004936e0 + 0x4936b8);
  if (*piVar2 == 0) {
    iVar1 = func_0079e2fc(0x28);
    0 /* ctorZero */;
    *piVar2 = iVar1;
  }
  return *piVar2;
}

void MirrorDataManager::getMirrorData(int p1, bool p2)
{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iVar1 = g_00493878 + 0x4936ee;
  if (p1 == 0) {
    puVar2 = &uStack_20;
    func_0079e45c(puVar2,((intptr_t)"url_mirror_get"),&uStack_30);
    puVar3 = &uStack_18;
    func_0079e45c(puVar3,g_00493880 + 0x493708,&uStack_28);
    uStack_38 = (undefined4)(*(undefined4 *)(iVar1 + g_00493884));
    uStack_34 = (undefined4)(0);
    0 /* ctorZero */;
  }
  else if (p1 == 1) {
    ((BLGameScene *)this)->shareGameScene();
    ((BLGameScene *)this)->showShieldLayer();
    puVar2 = &uStack_20;
    func_0079e45c(puVar2,((intptr_t)"url_mirror_get"),&uStack_38);
    puVar3 = &uStack_18;
    func_0079e45c(puVar3,g_00493890 + 0x49374e,&uStack_28);
    uStack_30 = (undefined4)(*(undefined4 *)(iVar1 + g_00493894));
    uStack_2c = (undefined4)(0);
    0 /* ctorZero */;
  }
  else if (p1 == 2) {
    ((BLGameScene *)this)->shareGameScene();
    ((BLGameScene *)this)->showShieldLayer();
    puVar2 = &uStack_20;
    func_0079e45c(puVar2,((intptr_t)"url_mirror_use"),&uStack_38);
    puVar3 = &uStack_18;
    func_0079e45c(puVar3,g_0049389c + 0x493794,&uStack_30);
    uStack_28 = (undefined4)(*(undefined4 *)(iVar1 + g_004938a0));
    uStack_24 = (undefined4)(0);
    0 /* ctorZero */;
  }
  else if (p1 == 4) {
    ((BLGameScene *)this)->shareGameScene();
    ((BLGameScene *)this)->showShieldLayer();
    puVar2 = &uStack_28;
    func_0079e45c(puVar2,((intptr_t)"url_mirror_buy"),&uStack_38);
    puVar3 = &uStack_18;
    func_0079e45c(puVar3,g_004938a8 + 0x4937dc,&uStack_30);
    uStack_20 = (undefined4)(*(undefined4 *)(iVar1 + g_004938ac));
    uStack_1c = (undefined4)(0);
    0 /* ctorZero */;
  }
  else {
    if (p1 != 3) {
      return;
    }
    ((BLGameScene *)this)->shareGameScene();
    ((BLGameScene *)this)->showShieldLayer();
    puVar2 = &uStack_28;
    func_0079e45c(puVar2,((intptr_t)"url_mirror_check"),&uStack_38);
    puVar3 = &uStack_20;
    func_0079e45c(puVar3,g_004938b4 + 0x493824,&uStack_30);
    uStack_18 = (undefined4)(*(undefined4 *)(iVar1 + g_004938b8));
    uStack_14 = (undefined4)(0);
    0 /* ctorZero */;
  }
  func_0079e2bc(puVar3);
  func_0079e2bc(puVar2);
  return;
}

undefined4 MirrorDataManager::getPurchasePrice(int p1)
{
  return 100;
}

undefined4 MirrorDataManager::getMissionId()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int *piVar2;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [8];
  
  if ((*(int *)(p2 + 0x18) == -1) &&
     (0 /* ctorZero */, *(int *)(p2 + 0x18) == -1))
  {
    func_0079e864(6,((intptr_t)"cocos2d-x assert"),((intptr_t)"%s function:%s line:%d"),((intptr_t)"jni/../../Classes/data/mirror/MirrorDataManager.cpp"),
                    ((intptr_t)"getMissionId"),0x56);
  }
  cocos2d::CCString::createWithFormat((char const*)((intptr_t)"%s,%d"), *(undefined4 *)(p2 + 0x14), *(undefined4 *)(p2 + 0x18));
  uVar1 = (undefined4)(((cocos2d::CCString *)this)->getCString());
  func_0079e45c(auStack_20,uVar1,auStack_1c);
  piVar2 = (int *)((DataCacheManager *)this)->shareManager();
  uVar1 = (undefined4)((**(code **)(*piVar2 + 0xe0))());
  func_0079e53c(auStack_1c,auStack_20);
  uVar1 = (undefined4)(((MirrorMissionData *)uVar1)->getItemData((std::string)(char*)auStack_1c));
  func_0079e2bc(auStack_1c);
  func_0079e53c(((int)this),uVar1);
  func_0079e2bc(auStack_20);
  return ((int)this);
}

undefined4 MirrorDataManager::getTotalNum()
{
  int *piVar1;
  int iVar2;
  
  *(undefined4 *)(((int)this) + 0x20) = 3;
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  iVar2 = (**(code **)(*piVar1 + 0x100))();
  if (iVar2 != 0) {
    *(undefined4 *)(((int)this) + 0x20) = 4;
  }
  return *(undefined4 *)(((int)this) + 0x20);
}

// ===== 修复: 补回被误删的函数占位 (5) =====
void MirrorDataManager::onGetDataSlientCallback(cocos2d::extension::CCHttpClient* p1, cocos2d::extension::CCHttpResponse* p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void MirrorDataManager::onGetDataCallback(cocos2d::extension::CCHttpClient* p1, cocos2d::extension::CCHttpResponse* p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void MirrorDataManager::onUseCallback(cocos2d::extension::CCHttpClient* p1, cocos2d::extension::CCHttpResponse* p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void MirrorDataManager::onBuyCallback(cocos2d::extension::CCHttpClient* p1, cocos2d::extension::CCHttpResponse* p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void MirrorDataManager::onCheckCallback(cocos2d::extension::CCHttpClient* p1, cocos2d::extension::CCHttpResponse* p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
