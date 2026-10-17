#include "MissionValleryData.h"
#include "BLGameScene.h"
#include "BLLanguage.h"
#include "Toast.h"
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
extern "C" long long func_0079e54c(...);
extern "C" unsigned long _DAT_004993d4;
extern "C" unsigned long _DAT_0049940c;
extern "C" unsigned long _DAT_00499440;
extern "C" unsigned long _DAT_004994f0;
extern "C" unsigned long _DAT_004994f4;
extern "C" unsigned long _DAT_004994f8;
extern "C" unsigned long _DAT_004994fc;
extern "C" unsigned long _DAT_00499500;
extern "C" unsigned long _DAT_00499504;
extern "C" unsigned long _DAT_0049956c;
extern "C" unsigned long _DAT_00499570;
extern "C" unsigned long _DAT_00499574;
extern "C" unsigned long _DAT_004995dc;
extern "C" unsigned long _DAT_004995e0;
extern "C" unsigned long _DAT_004995e4;
extern "C" unsigned long _DAT_0049964c;
extern "C" unsigned long _DAT_00499650;
extern "C" unsigned long _DAT_00499654;
extern "C" unsigned long _DAT_0049972c;
extern "C" unsigned long _DAT_00499730;
extern "C" unsigned long _DAT_00499734;
extern "C" unsigned long _DAT_00499738;
extern "C" unsigned long _DAT_0049973c;
extern "C" unsigned long _DAT_0049988c;
extern "C" unsigned long _DAT_00499890;
extern "C" unsigned long _DAT_00499894;
extern "C" unsigned long _DAT_00499898;
extern "C" unsigned long _DAT_0049989c;
extern "C" unsigned long _DAT_004998a0;
extern "C" unsigned long _DAT_004998a4;
extern "C" unsigned long _DAT_004998a8;
extern "C" unsigned long _DAT_004998ac;
extern "C" unsigned long _DAT_00499a04;
extern "C" unsigned long _DAT_00499a08;
extern "C" unsigned long _DAT_00499a0c;
extern "C" unsigned long _DAT_00499a10;
extern "C" unsigned long _DAT_00499a14;
extern "C" unsigned long _DAT_00499a18;
extern "C" unsigned long _DAT_00499a1c;
extern "C" unsigned long _DAT_00499a20;
extern "C" unsigned long _DAT_00499a24;
extern "C" unsigned long _DAT_00499b88;
extern "C" unsigned long _DAT_00499b8c;
extern "C" unsigned long _DAT_00499b90;
extern "C" unsigned long _DAT_00499b94;
extern "C" unsigned long _DAT_00499b98;
extern "C" unsigned long _DAT_00499b9c;
extern "C" unsigned long _DAT_00499ba0;
extern "C" unsigned long _DAT_00499ba4;
extern "C" unsigned long _DAT_00499ba8;
extern "C" unsigned long _DAT_00499bac;
extern "C" unsigned long _DAT_00499d14;
extern "C" unsigned long _DAT_00499d18;
extern "C" unsigned long _DAT_00499d1c;
extern "C" unsigned long _DAT_00499d20;
extern "C" unsigned long _DAT_00499d24;
extern "C" unsigned long _DAT_00499d28;
extern "C" unsigned long _DAT_00499d2c;
extern "C" unsigned long _DAT_00499d30;
extern "C" unsigned long _DAT_00499d34;
extern "C" unsigned long g_004993d4;
extern "C" unsigned long g_0049940c;
extern "C" unsigned long g_00499440;
extern "C" unsigned long g_004994f0;
extern "C" unsigned long g_004994f4;
extern "C" unsigned long g_004994f8;
extern "C" unsigned long g_004994fc;
extern "C" unsigned long g_00499500;
extern "C" unsigned long g_00499504;
extern "C" unsigned long g_0049956c;
extern "C" unsigned long g_00499570;
extern "C" unsigned long g_00499574;
extern "C" unsigned long g_004995dc;
extern "C" unsigned long g_004995e0;
extern "C" unsigned long g_004995e4;
extern "C" unsigned long g_0049964c;
extern "C" unsigned long g_00499650;
extern "C" unsigned long g_00499654;
extern "C" unsigned long g_0049972c;
extern "C" unsigned long g_00499730;
extern "C" unsigned long g_00499734;
extern "C" unsigned long g_00499738;
extern "C" unsigned long g_0049973c;
extern "C" unsigned long g_0049988c;
extern "C" unsigned long g_00499890;
extern "C" unsigned long g_00499894;
extern "C" unsigned long g_00499898;
extern "C" unsigned long g_0049989c;
extern "C" unsigned long g_004998a0;
extern "C" unsigned long g_004998a4;
extern "C" unsigned long g_004998a8;
extern "C" unsigned long g_004998ac;
extern "C" unsigned long g_00499a04;
extern "C" unsigned long g_00499a08;
extern "C" unsigned long g_00499a0c;
extern "C" unsigned long g_00499a10;
extern "C" unsigned long g_00499a14;
extern "C" unsigned long g_00499a18;
extern "C" unsigned long g_00499a1c;
extern "C" unsigned long g_00499a20;
extern "C" unsigned long g_00499a24;
extern "C" unsigned long g_00499b88;
extern "C" unsigned long g_00499b8c;
extern "C" unsigned long g_00499b90;
extern "C" unsigned long g_00499b94;
extern "C" unsigned long g_00499b98;
extern "C" unsigned long g_00499b9c;
extern "C" unsigned long g_00499ba0;
extern "C" unsigned long g_00499ba4;
extern "C" unsigned long g_00499ba8;
extern "C" unsigned long g_00499bac;
extern "C" unsigned long g_00499d14;
extern "C" unsigned long g_00499d18;
extern "C" unsigned long g_00499d1c;
extern "C" unsigned long g_00499d20;
extern "C" unsigned long g_00499d24;
extern "C" unsigned long g_00499d28;
extern "C" unsigned long g_00499d2c;
extern "C" unsigned long g_00499d30;
extern "C" unsigned long g_00499d34;
MissionValleryData::~MissionValleryData()
{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)((int)this + 4*(6));
  iVar3 = *(int *)((int)this + 4*(7));
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  for (iVar1 = iVar2; iVar1 != iVar3; iVar1 = iVar1 + 4) {
    func_0079e2bc(iVar1);
  }
  iVar1 = *(int *)((int)this + 4*(6));
  *(int *)((int)this + 4*(7)) = iVar2;
  for (; iVar1 != iVar2; iVar1 = iVar1 + 4) {
    func_0079e2bc(iVar1);
  }
  if (*(int *)((int)this + 4*(6)) != 0) {
    (void)(::operator delete((void *)(*(int *)((int)this + 4*(6)))));
  }
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

MissionValleryData::MissionValleryData()
{
  0 /* ctorZero */;
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  *(int *)((int)this + 4*(6)) = 0;
  *(int *)((int)this + 4*(8)) = 0;
  *(int *)((int)this + 4*(7)) = 0;
  *(int *)((int)this + 4*(5)) = 0;
  return;
}

int MissionValleryData::getInstance()
{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)(g_00499440 + 0x499418);
  if (*piVar2 == 0) {
    iVar1 = ((long long)::operator new((size_t)(0x28)));
    0 /* ctorZero */;
    *piVar2 = iVar1;
  }
  return *piVar2;
}

void MissionValleryData::getData(bool p1)
{
  undefined4 *puVar1;
  undefined1 auStack_34 [4];
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [4];
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  puVar1 = &uStack_20;
  if (p1 == 0) {
    func_0079e45c(auStack_2c,((intptr_t)"url_vallery_get"),auStack_34);
    puVar1 = &uStack_28;
    func_0079e45c(puVar1,g_00499500 + 0x4994aa,auStack_30);
    uStack_1c = (undefined4)(0);
    uStack_20 = (undefined4)(*(undefined4 *)(g_00499504 + 0x4994ba));
    0 /* ctorZero */;
  }
  else {
    ((BLGameScene *)this)->shareGameScene();
    ((BLGameScene *)this)->showShieldLayer();
    func_0079e45c(auStack_2c,((intptr_t)"url_vallery_get"),auStack_34);
    func_0079e45c(puVar1,g_004994f4 + 0x499472,auStack_30);
    uStack_24 = (undefined4)(0);
    uStack_28 = (undefined4)(*(undefined4 *)(g_004994f8 + 0x499482));
    0 /* ctorZero */;
  }
  func_0079e2bc(puVar1);
  func_0079e2bc(auStack_2c);
  return;
}

void MissionValleryData::checkChallenge()
{
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [16];
  
  ((BLGameScene *)this)->shareGameScene();
  ((BLGameScene *)this)->showShieldLayer();
  func_0079e45c(auStack_28,((intptr_t)"url_vallery_challenge"),auStack_30);
  func_0079e45c(auStack_24,g_00499570 + 0x49952e,auStack_2c);
  0 /* ctorZero */;
  func_0079e2bc(auStack_24);
  func_0079e2bc(auStack_28);
  return;
}

void MissionValleryData::saveData()
{
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [12];
  
  ((BLGameScene *)this)->shareGameScene();
  ((BLGameScene *)this)->showShieldLayer();
  func_0079e45c(auStack_20,((intptr_t)"url_vallery_save"),auStack_28);
  func_0079e45c(auStack_1c,g_004995e0 + 0x49959e,auStack_24);
  0 /* ctorZero */;
  func_0079e2bc(auStack_1c);
  func_0079e2bc(auStack_20);
  return;
}

void MissionValleryData::checkBuy()
{
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [12];
  
  ((BLGameScene *)this)->shareGameScene();
  ((BLGameScene *)this)->showShieldLayer();
  func_0079e45c(auStack_20,((intptr_t)"url_vallery_buy"),auStack_28);
  func_0079e45c(auStack_1c,g_00499650 + 0x49960e,auStack_24);
  0 /* ctorZero */;
  func_0079e2bc(auStack_1c);
  func_0079e2bc(auStack_20);
  return;
}

// ===== 修复: 补回被误删的函数占位 (5) =====
void MissionValleryData::onSlientGetDataCallback(cocos2d::extension::CCHttpClient* p1, cocos2d::extension::CCHttpResponse* p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void MissionValleryData::onGetDataCallback(cocos2d::extension::CCHttpClient* p1, cocos2d::extension::CCHttpResponse* p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void MissionValleryData::onChallengeCallback(cocos2d::extension::CCHttpClient* p1, cocos2d::extension::CCHttpResponse* p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void MissionValleryData::onSaveCallback(cocos2d::extension::CCHttpClient* p1, cocos2d::extension::CCHttpResponse* p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void MissionValleryData::onBuyCallback(cocos2d::extension::CCHttpClient* p1, cocos2d::extension::CCHttpResponse* p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
