#include "PKOnlineManager.h"
#include "CCObject.h"
#include "CCNotificationCenter.h"
#include "PKHallPresenter.h"
#include "BLGameScene.h"
#include "BLLanguage.h"
#include "BLMission.h"
#include "BluetoothHelper.h"
#include "DataManager.h"
#include "MissionSelectHeroData.h"
#include "PKResultView.h"
#include "Toast.h"
#include "UIManager.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
using namespace CocosDenshion;

using namespace cocos2d;
// 兜底声明
#include "JniHelper.h"   // P1: cocos2d::JniHelper
#include <jni.h>   // P1: _JNIEnv/_jclass/_jmethodID
#include <new>   // ghost_fix.js 自动补齐
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_00617cfc;
extern "C" unsigned long UNK_00617d0c;
extern "C" unsigned long UNK_00617d16;
extern "C" unsigned long UNK_00617d44;
extern "C" unsigned long UNK_00617d46;
extern "C" unsigned long UNK_00617d48;
extern "C" unsigned long UNK_00617d56;
extern "C" unsigned long UNK_00617d58;
extern "C" unsigned long UNK_00617e10;
extern "C" unsigned long UNK_00617e12;
extern "C" unsigned long UNK_00617e14;
extern "C" unsigned long UNK_00617e22;
extern "C" unsigned long UNK_00617e24;
extern "C" unsigned long UNK_00617e60;
extern "C" unsigned long UNK_00617e62;
extern "C" unsigned long UNK_00617e64;
extern "C" unsigned long UNK_00617e72;
extern "C" unsigned long UNK_00617e74;
extern "C" unsigned long UNK_00617eb0;
extern "C" unsigned long UNK_00617eb2;
extern "C" unsigned long UNK_00617eb4;
extern "C" unsigned long UNK_00617ec2;
extern "C" unsigned long UNK_00617ec4;
extern "C" unsigned long UNK_0061804a;
extern "C" unsigned long UNK_0061815a;
extern "C" unsigned long UNK_0061815e;
extern "C" unsigned long UNK_00618160;
extern "C" unsigned long UNK_0061816e;
extern "C" unsigned long UNK_00618170;
extern "C" unsigned long _DAT_00617cec;
extern "C" unsigned long _DAT_00617cf0;
extern "C" unsigned long _DAT_00617d30;
extern "C" unsigned long _DAT_00617de8;
extern "C" unsigned long _DAT_00617dec;
extern "C" unsigned long _DAT_00617df0;
extern "C" unsigned long _DAT_00617df4;
extern "C" unsigned long _DAT_00617df8;
extern "C" unsigned long _DAT_00617dfc;
extern "C" unsigned long _DAT_00617f44;
extern "C" unsigned long _DAT_00617f48;
extern "C" unsigned long _DAT_00617f4c;
extern "C" unsigned long _DAT_00617f50;
extern "C" unsigned long _DAT_00617f54;
extern "C" unsigned long _DAT_00617fb4;
extern "C" unsigned long _DAT_00618080;
extern "C" unsigned long _DAT_00618084;
extern "C" unsigned long _DAT_00618088;
extern "C" unsigned long _DAT_0061808c;
extern "C" unsigned long _DAT_00618090;
extern "C" unsigned long _DAT_00618094;
extern "C" unsigned long _DAT_006180ac;
extern "C" unsigned long _DAT_006180bc;
extern "C" unsigned long _DAT_00618140;
extern "C" unsigned long _DAT_00618144;
extern "C" unsigned long _DAT_00618228;
extern "C" unsigned long _DAT_0061822c;
extern "C" unsigned long _DAT_00618230;
extern "C" unsigned long _DAT_00618234;
extern "C" unsigned long _DAT_00618238;
extern "C" unsigned long _DAT_0061823c;
extern "C" unsigned long _DAT_00618284;
extern "C" unsigned long _DAT_00618288;
extern "C" unsigned long _DAT_0061828c;
extern "C" unsigned long _DAT_00618290;
extern "C" unsigned long _DAT_00618294;
extern "C" unsigned long _DAT_006182dc;
extern "C" unsigned long _DAT_006182e0;
extern "C" unsigned long _DAT_006182e4;
extern "C" unsigned long _DAT_006182e8;
extern "C" unsigned long _DAT_006182ec;
extern "C" unsigned long _DAT_00618370;
extern "C" unsigned long _DAT_00618374;
extern "C" unsigned long _DAT_00618378;
extern "C" unsigned long _DAT_0061837c;
extern "C" unsigned long _DAT_00618380;
extern "C" unsigned long _DAT_006183ec;
extern "C" unsigned long _DAT_006183f0;
extern "C" unsigned long _UNK_00617d00;
extern "C" unsigned long _UNK_00617d1c;
extern "C" unsigned long _UNK_00617d20;
extern "C" unsigned long _UNK_00617d70;
extern "C" unsigned long _UNK_00617d74;
extern "C" unsigned long _UNK_00617d78;
extern "C" unsigned long _UNK_00617d7c;
extern "C" unsigned long _UNK_00617d80;
extern "C" unsigned long _UNK_00617e3c;
extern "C" unsigned long _UNK_00617e40;
extern "C" unsigned long _UNK_00617e44;
extern "C" unsigned long _UNK_00617e48;
extern "C" unsigned long _UNK_00617e4c;
extern "C" unsigned long _UNK_00617e8c;
extern "C" unsigned long _UNK_00617e90;
extern "C" unsigned long _UNK_00617e94;
extern "C" unsigned long _UNK_00617e98;
extern "C" unsigned long _UNK_00617e9c;
extern "C" unsigned long _UNK_00617edc;
extern "C" unsigned long _UNK_00617ee0;
extern "C" unsigned long _UNK_00617ee4;
extern "C" unsigned long _UNK_00617ee8;
extern "C" unsigned long _UNK_00617eec;
extern "C" unsigned long _UNK_0061819c;
extern "C" unsigned long _UNK_006181a0;
extern "C" unsigned long _UNK_006181a4;
extern "C" unsigned long _UNK_006181a8;
extern "C" unsigned long _UNK_006181ac;
extern "C" unsigned long g_00617cec;
extern "C" unsigned long g_00617cf0;
extern "C" unsigned long g_00617cfc;
extern "C" unsigned long g_00617d00;
extern "C" unsigned long g_00617d0c;
extern "C" unsigned long g_00617d16;
extern "C" unsigned long g_00617d1c;
extern "C" unsigned long g_00617d20;
extern "C" unsigned long g_00617d30;
extern "C" unsigned long g_00617d44;
extern "C" unsigned long g_00617d46;
extern "C" unsigned long g_00617d48;
extern "C" unsigned long g_00617d56;
extern "C" unsigned long g_00617d58;
extern "C" unsigned long g_00617d70;
extern "C" unsigned long g_00617d74;
extern "C" unsigned long g_00617d78;
extern "C" unsigned long g_00617d7c;
extern "C" unsigned long g_00617d80;
extern "C" unsigned long g_00617de8;
extern "C" unsigned long g_00617dec;
extern "C" unsigned long g_00617df0;
extern "C" unsigned long g_00617df4;
extern "C" unsigned long g_00617df8;
extern "C" unsigned long g_00617dfc;
extern "C" unsigned long g_00617e10;
extern "C" unsigned long g_00617e12;
extern "C" unsigned long g_00617e14;
extern "C" unsigned long g_00617e22;
extern "C" unsigned long g_00617e24;
extern "C" unsigned long g_00617e3c;
extern "C" unsigned long g_00617e40;
extern "C" unsigned long g_00617e44;
extern "C" unsigned long g_00617e48;
extern "C" unsigned long g_00617e4c;
extern "C" unsigned long g_00617e60;
extern "C" unsigned long g_00617e62;
extern "C" unsigned long g_00617e64;
extern "C" unsigned long g_00617e72;
extern "C" unsigned long g_00617e74;
extern "C" unsigned long g_00617e8c;
extern "C" unsigned long g_00617e90;
extern "C" unsigned long g_00617e94;
extern "C" unsigned long g_00617e98;
extern "C" unsigned long g_00617e9c;
extern "C" unsigned long g_00617eb0;
extern "C" unsigned long g_00617eb2;
extern "C" unsigned long g_00617eb4;
extern "C" unsigned long g_00617ec2;
extern "C" unsigned long g_00617ec4;
extern "C" unsigned long g_00617edc;
extern "C" unsigned long g_00617ee0;
extern "C" unsigned long g_00617ee4;
extern "C" unsigned long g_00617ee8;
extern "C" unsigned long g_00617eec;
extern "C" unsigned long g_00617f44;
extern "C" unsigned long g_00617f48;
extern "C" unsigned long g_00617f4c;
extern "C" unsigned long g_00617f50;
extern "C" unsigned long g_00617f54;
extern "C" unsigned long g_00617fb4;
extern "C" unsigned long g_0061804a;
extern "C" unsigned long g_00618080;
extern "C" unsigned long g_00618084;
extern "C" unsigned long g_00618088;
extern "C" unsigned long g_0061808c;
extern "C" unsigned long g_00618090;
extern "C" unsigned long g_00618094;
extern "C" unsigned long g_006180ac;
extern "C" unsigned long g_006180bc;
extern "C" unsigned long g_00618140;
extern "C" unsigned long g_00618144;
extern "C" unsigned long g_0061815a;
extern "C" unsigned long g_0061815e;
extern "C" unsigned long g_00618160;
extern "C" unsigned long g_0061816e;
extern "C" unsigned long g_00618170;
extern "C" unsigned long g_0061819c;
extern "C" unsigned long g_006181a0;
extern "C" unsigned long g_006181a4;
extern "C" unsigned long g_006181a8;
extern "C" unsigned long g_006181ac;
extern "C" unsigned long g_00618228;
extern "C" unsigned long g_0061822c;
extern "C" unsigned long g_00618230;
extern "C" unsigned long g_00618234;
extern "C" unsigned long g_00618238;
extern "C" unsigned long g_0061823c;
extern "C" unsigned long g_00618284;
extern "C" unsigned long g_00618288;
extern "C" unsigned long g_0061828c;
extern "C" unsigned long g_00618290;
extern "C" unsigned long g_00618294;
extern "C" unsigned long g_006182dc;
extern "C" unsigned long g_006182e0;
extern "C" unsigned long g_006182e4;
extern "C" unsigned long g_006182e8;
extern "C" unsigned long g_006182ec;
extern "C" unsigned long g_00618370;
extern "C" unsigned long g_00618374;
extern "C" unsigned long g_00618378;
extern "C" unsigned long g_0061837c;
extern "C" unsigned long g_00618380;
extern "C" unsigned long g_006183ec;
extern "C" unsigned long g_006183f0;
PKOnlineManager::PKOnlineManager()
{
  return;
}

PKOnlineManager::~PKOnlineManager()
{
  return;
}

void PKOnlineManager::onEnterLobby()
{
  ((BLGameScene *)this)->shareGameScene();
  ((BLGameScene *)this)->closeShieldLayer();
  return;
}

void PKOnlineManager::onExitLobby()
{
  undefined4 p3 = 0;
  undefined4 p4 = 0;

  undefined4 uVar1;
  
  cocos2d::CCLog((char const*)((intptr_t)"JNI:%s"), ((intptr_t)"PKOnlineManager::onExitLobby"), p3, p4, p4);
  uVar1 = (undefined4)(((BluetoothHelper *)this)->share());
  ((BluetoothHelper *)uVar1)->setIsBlueFight(0);
  return;
}

void PKOnlineManager::onEnterRoom()
{
  **(undefined1 **)(&g_00617cfc + g_00617d00) = 1;
  return;
}

void PKOnlineManager::onExitRoom()
{
  **(undefined1 **)(&g_00617d0c + g_00617d1c) = 0;
  **(undefined4 **)(&g_00617d16 + g_00617d20) = 0;
  return;
}

void PKOnlineManager::onGameReady()
{
  **(undefined1 **)(g_00617d30 + 0x617d2c) = 1;
  return;
}









void PKOnlineManager::loginSuccess()
{
  return;
}

void PKOnlineManager::onFriendDisconnect()
{
  **(undefined1 **)(g_006180ac + 0x6180a8) = 1;
  return;
}

void PKOnlineManager::onDisconnect()
{
  **(undefined1 **)(g_006180bc + 0x6180b8) = 1;
  return;
}



void PKOnlineManager::openResultUI(bool p1)
{
  undefined4 p4 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  
  if (**(char **)(g_00618228 + 0x6181b8) != '\0') {
    **(char **)(g_00618228 + 0x6181b8) = '\0';
    **(undefined4 **)(g_0061822c + 0x6181cc) = 0;
    uVar1 = (undefined4)(((UIManager *)this)->shareManager());
    ((UIManager *)uVar1)->removeUIByID(g_00618230);
    uVar1 = (undefined4)(((UIManager *)this)->shareManager());
    iVar2 = ((UIManager *)uVar1)->showUIById(g_00618234);
    if ((iVar2 != 0) &&
       (iVar2 = func_0079e55c(iVar2,*(undefined4 *)("Xԫ"),
                                *(undefined4 *)(g_0061823c + 0x6181f2),0,p4), iVar2 != 0)) {
      ((PKResultView *)*(undefined4 *)(iVar2 + 0x24))->setResult(((int)this));
    }
    ((CocosDenshion::SimpleAudioEngine *)this)->sharedEngine();
    ((CocosDenshion::SimpleAudioEngine *)this)->pauseBackgroundMusic();
    ((CocosDenshion::SimpleAudioEngine *)this)->sharedEngine();
    ((CocosDenshion::SimpleAudioEngine *)this)->pauseAllEffects();
    piVar3 = (int *)((BLMission *)this)->currentMission();
    (**(code **)(*piVar3 + 0x1fc))(piVar3,1);
  }
  return;
}



undefined8 PKOnlineManager::checkConnection(float p1)
{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  
  iVar4 = g_00618370 + 0x6182fa;
  pcVar3 = *(char **)(iVar4 + g_00618374);
  if (*pcVar3 != '\0') {
    pcVar5 = *(char **)(iVar4 + g_00618378);
    if (*pcVar5 != '\0') {
      PKOnlineManager::gameWin();
      iVar1 = g_0061837c;
      *pcVar3 = '\0';
      **(undefined4 **)(iVar4 + iVar1) = 0;
      piVar2 = (int *)((BluetoothHelper *)this)->share();
      (**(code **)(*piVar2 + 0x1c))(piVar2,0);
      piVar2 = (int *)((BluetoothHelper *)this)->share();
      (**(code **)(*piVar2 + 0x24))(piVar2,0);
      *pcVar5 = '\0';
    }
    pcVar5 = *(char **)(iVar4 + g_00618380);
    if (*pcVar5 != '\0') {
      PKOnlineManager::gameFail();
      iVar1 = g_0061837c;
      *pcVar3 = '\0';
      **(undefined4 **)(iVar4 + iVar1) = 0;
      piVar2 = (int *)((BluetoothHelper *)this)->share();
      (**(code **)(*piVar2 + 0x1c))(piVar2,0);
      piVar2 = (int *)((BluetoothHelper *)this)->share();
      (**(code **)(*piVar2 + 0x24))(piVar2,0);
      *pcVar5 = '\0';
    }
  }
  return ghidra_CONCAT44(pcVar3,((int)this));
}

// ===== 修复: 补回被误删的函数占位 (14) =====
void PKOnlineManager::enterLobby()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;
  undefined4 p4 = 0;

  int iVar1;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_14 = (undefined4)(p2);
  uStack_10 = (undefined4)(p3);
  uStack_c = (undefined4)(p4);
  iVar1 = (undefined4)(intptr_t)(cocos2d::JniHelper::getStaticMethodInfo(*(cocos2d::JniMethodInfo *)&uStack_14, (char const*)(unsigned char *)((char *)&g_00617d44 + (intptr_t)(g_00617d70)), (char const*)(unsigned char *)((char *)&g_00617d46 + (intptr_t)(g_00617d74)), (char const*)(unsigned char *)((char *)&g_00617d48 + (intptr_t)(g_00617d78))));
  if (iVar1 == 0) {
    cocos2d::CCLog((char const*)(unsigned char *)((char *)&g_00617d56 + (intptr_t)(g_00617d7c)), (unsigned char *)((char *)&g_00617d58 + (intptr_t)(g_00617d80)));
  }
  else {
    ((_JNIEnv *)this)->CallStaticVoidMethod((_jclass*)uStack_14, (_jmethodID*)uStack_10, uStack_c);
  }
  ((_JNIEnv *)uStack_14)->DeleteLocalRef((_jobject*)uStack_10);
  return;
}

void PKOnlineManager::exitLobby()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;
  undefined4 p4 = 0;

  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_14 = (undefined4)(p2);
  uStack_10 = (undefined4)(p3);
  uStack_c = (undefined4)(p4);
  piVar1 = (int *)((BluetoothHelper *)this)->share();
  (**(code **)(*piVar1 + 0x8c))(piVar1,0);
  uVar2 = (undefined4)(((BluetoothHelper *)this)->share());
  ((BluetoothHelper *)uVar2)->setIsBlueFight(0);
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar2)->postNotification((char const*)((intptr_t)"EVENT_BLUETOOTH_DISCONNECT_ACTION"), 0);
  iVar3 = (undefined4)(intptr_t)(cocos2d::JniHelper::getStaticMethodInfo(*(cocos2d::JniMethodInfo *)&uStack_14, (char const*)((intptr_t)"com/DBGame/pk/MatchVSHelper"), (char const*)((intptr_t)"exitLobby"), (char const*)((intptr_t)"()V")));
  if (iVar3 == 0) {
    cocos2d::CCLog((char const*)((intptr_t)"JNI:%s"), "java层quitLobby 函数不存在;");
  }
  else {
    ((_JNIEnv *)this)->CallStaticVoidMethod((_jclass*)uStack_14, (_jmethodID*)uStack_10, uStack_c);
  }
  ((_JNIEnv *)uStack_14)->DeleteLocalRef((_jobject*)uStack_10);
  return;
}

void PKOnlineManager::exitRoom()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;
  undefined4 p4 = 0;

  int iVar1;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_14 = (undefined4)(p2);
  uStack_10 = (undefined4)(p3);
  uStack_c = (undefined4)(p4);
  iVar1 = (undefined4)(intptr_t)(cocos2d::JniHelper::getStaticMethodInfo(*(cocos2d::JniMethodInfo *)&uStack_14, (char const*)(unsigned char *)((char *)&g_00617e10 + (intptr_t)(g_00617e3c)), (char const*)(unsigned char *)((char *)&g_00617e12 + (intptr_t)(g_00617e40)), (char const*)(unsigned char *)((char *)&g_00617e14 + (intptr_t)(g_00617e44))));
  if (iVar1 == 0) {
    cocos2d::CCLog((char const*)(unsigned char *)((char *)&g_00617e22 + (intptr_t)(g_00617e48)), (unsigned char *)((char *)&g_00617e24 + (intptr_t)(g_00617e4c)));
  }
  else {
    ((_JNIEnv *)this)->CallStaticVoidMethod((_jclass*)uStack_14, (_jmethodID*)uStack_10, uStack_c);
  }
  ((_JNIEnv *)uStack_14)->DeleteLocalRef((_jobject*)uStack_10);
  return;
}

void PKOnlineManager::changeRoom()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;
  undefined4 p4 = 0;

  int iVar1;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_14 = (undefined4)(p2);
  uStack_10 = (undefined4)(p3);
  uStack_c = (undefined4)(p4);
  iVar1 = (undefined4)(intptr_t)(cocos2d::JniHelper::getStaticMethodInfo(*(cocos2d::JniMethodInfo *)&uStack_14, (char const*)(unsigned char *)((char *)&g_00617e60 + (intptr_t)(g_00617e8c)), (char const*)(unsigned char *)((char *)&g_00617e62 + (intptr_t)(g_00617e90)), (char const*)(unsigned char *)((char *)&g_00617e64 + (intptr_t)(g_00617e94))));
  if (iVar1 == 0) {
    cocos2d::CCLog((char const*)(unsigned char *)((char *)&g_00617e72 + (intptr_t)(g_00617e98)), (unsigned char *)((char *)&g_00617e74 + (intptr_t)(g_00617e9c)));
  }
  else {
    ((_JNIEnv *)this)->CallStaticVoidMethod((_jclass*)uStack_14, (_jmethodID*)uStack_10, uStack_c);
  }
  ((_JNIEnv *)uStack_14)->DeleteLocalRef((_jobject*)uStack_10);
  return;
}

void PKOnlineManager::enterRoom()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;
  undefined4 p4 = 0;

  int iVar1;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_14 = (undefined4)(p2);
  uStack_10 = (undefined4)(p3);
  uStack_c = (undefined4)(p4);
  iVar1 = (undefined4)(intptr_t)(cocos2d::JniHelper::getStaticMethodInfo(*(cocos2d::JniMethodInfo *)&uStack_14, (char const*)(unsigned char *)((char *)&g_00617eb0 + (intptr_t)(g_00617edc)), (char const*)(unsigned char *)((char *)&g_00617eb2 + (intptr_t)(g_00617ee0)), (char const*)(unsigned char *)((char *)&g_00617eb4 + (intptr_t)(g_00617ee4))));
  if (iVar1 == 0) {
    cocos2d::CCLog((char const*)(unsigned char *)((char *)&g_00617ec2 + (intptr_t)(g_00617ee8)), (unsigned char *)((char *)&g_00617ec4 + (intptr_t)(g_00617eec)));
  }
  else {
    ((_JNIEnv *)this)->CallStaticVoidMethod((_jclass*)uStack_14, (_jmethodID*)uStack_10, uStack_c);
  }
  ((_JNIEnv *)uStack_14)->DeleteLocalRef((_jobject*)uStack_10);
  return;
}

void PKOnlineManager::sendData(char const* p1)
{
  int iVar1;
  undefined4 uVar2;
  int *piStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  if (**(char **)(g_00617f44 + 0x617ef8) != '\0') {
    iVar1 = (undefined4)(intptr_t)(cocos2d::JniHelper::getStaticMethodInfo(*(cocos2d::JniMethodInfo *)&piStack_1c, (char const*)((intptr_t)"com/DBGame/pk/MatchVSHelper"), (char const*)((intptr_t)"sendData"), (char const*)((intptr_t)"(Ljava/lang/String;)V")));
    if (iVar1 == 0) {
      cocos2d::CCLog((char const*)"jni->/callJni:此函数不存在");
    }
    else {
      uVar2 = (undefined4)((**(code **)(*piStack_1c + 0x29c))(piStack_1c,((int)this)));
      ((_JNIEnv *)piStack_1c)->CallStaticVoidMethod((_jclass*)uStack_18, (_jmethodID*)uStack_14, uVar2);
    }
  }
  return;
}

void PKOnlineManager::setInfo(char const* p1)
{
  undefined4 p3 = 0;

  int *piVar1;
  code *pcVar2;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  uStack_20 = (undefined4)((int *)((int)this));
  uStack_1c = (undefined4)(p1);
  uStack_18 = (undefined4)(p3);
  func_0079e45c(&uStack_20,((int)this),&uStack_1c);
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  piVar1 = (int *)(**(code **)(*piVar1 + 0x28))();
  pcVar2 = *(code **)(*piVar1 + 0x164);
  func_0079e53c(&uStack_1c,&uStack_20);
  (*pcVar2)(piVar1,&uStack_1c);
  func_0079e2bc(&uStack_1c);
  cocos2d::CCLog((char const*)((intptr_t)"info:%s"), uStack_20);
  func_0079e2bc(&uStack_20);
  return;
}

void PKOnlineManager::onGameStart(bool p1)
{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined *puVar5;
  
  **(undefined1 **)(g_00618080 + 0x617fc2) = 0;
  **(undefined1 **)(g_00618084 + 0x617fce) = 0;
  **(undefined1 **)(g_00618088 + 0x617fd8) = 1;
  **(undefined4 **)(g_0061808c + 0x617fe2) = 0;
  piVar1 = (int *)((long long)::operator new((size_t)(0x24)));
  0 /* ctorZero */;
  iVar2 = (undefined4)(intptr_t)(((MissionSelectHeroData *)piVar1)->init());
  if (iVar2 == 0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    piVar1 = (int *)0x0;
  }
  else {
    ((cocos2d::CCObject *)piVar1)->autorelease();
  }
  ((MissionSelectHeroData *)piVar1)->initWithMissionType(5);
  piVar3 = (int *)((DataManager *)this)->shareDataManager();
  (**(code **)(*piVar3 + 0x44))(piVar3,piVar1);
  uVar4 = (undefined4)(((BluetoothHelper *)this)->share());
  ((BluetoothHelper *)uVar4)->setIsBlueFight(1);
  uVar4 = (undefined4)(((BluetoothHelper *)this)->share());
  ((BluetoothHelper *)uVar4)->setIsHost(((int)this));
  if (((int)this) == 0) {
    piVar1 = (int *)((BluetoothHelper *)this)->share();
    (**(code **)(*piVar1 + 0x1c))(piVar1,1);
    ((BluetoothHelper *)this)->share();
    ((BluetoothHelper *)this)->setHeroRoleAttr();
    puVar5 = (undefined *)("副机正在启动游戏");
  }
  else {
    piVar1 = (int *)((BluetoothHelper *)this)->share();
    (**(code **)(*piVar1 + 0x24))(piVar1,1);
    piVar1 = (int *)((BluetoothHelper *)this)->share();
    (**(code **)(*piVar1 + 0x84))(piVar1,1);
    puVar5 = (unsigned char *)((char *)&g_0061804a + (intptr_t)(g_00618090));
  }
  PKOnlineManager::setInfo((char const*)puVar5);
  return;
}

void PKOnlineManager::setPKHallPresenter(PKHallPresenter* p1)
{
  *(int *)this = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  return;
}

void PKOnlineManager::loginFail()
{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  undefined4 uStack_20;
  undefined1 auStack_1c [8];
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)(uVar1))->removeUIByID(g_00618140);
  ((BLGameScene *)this)->shareGameScene();
  ((BLGameScene *)this)->closeShieldLayer();
  uVar1 = (undefined4)(((Toast *)this)->sharedToast());
  uVar2 = (undefined4)(((BLLanguage *)this)->share());
  func_0079e45c(auStack_24,"登陆失败，请稍后再试",auStack_2c);
  ((BLLanguage *)this)->getString(*(std::string *)(void *)&uStack_20);
  func_0079e45c(auStack_1c,uStack_20,auStack_28);
  ((Toast *)(uVar1))->showSystemRemind((std::string *)(char *)auStack_1c);
  func_0079e2bc(auStack_1c);
  func_0079e2bc(&uStack_20);
  func_0079e2bc(auStack_24);
  return;
}

void PKOnlineManager::testLogin(char const* p1)
{
  int iVar1;
  undefined4 uVar2;
  int *piStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iVar1 = (undefined4)(intptr_t)(cocos2d::JniHelper::getStaticMethodInfo(*(cocos2d::JniMethodInfo *)&piStack_1c, (char const*)(unsigned char *)((char *)&g_0061815a + (intptr_t)(g_0061819c)), (char const*)(unsigned char *)((char *)&g_0061815e + (intptr_t)(g_006181a0)), (char const*)(unsigned char *)((char *)&g_00618160 + (intptr_t)(g_006181a4))));
  if (iVar1 == 0) {
    cocos2d::CCLog((char const*)(unsigned char *)((char *)&g_0061816e + (intptr_t)(g_006181a8)), (unsigned char *)((char *)&g_00618170 + (intptr_t)(g_006181ac)));
  }
  else {
    uVar2 = (undefined4)((**(code **)(*piStack_1c + 0x29c))(piStack_1c,((int)this)));
    ((_JNIEnv *)piStack_1c)->CallStaticVoidMethod((_jclass*)uStack_18, (_jmethodID*)uStack_14, uVar2);
  }
  ((_JNIEnv *)piStack_1c)->DeleteLocalRef((_jobject*)uStack_18);
  return;
}

void PKOnlineManager::gameWin()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;
  undefined4 p4 = 0;

  int iVar1;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_14 = (undefined4)(p2);
  uStack_10 = (undefined4)(p3);
  uStack_c = (undefined4)(p4);
  PKOnlineManager::openResultUI(1);
  iVar1 = (undefined4)(intptr_t)(cocos2d::JniHelper::getStaticMethodInfo(*(cocos2d::JniMethodInfo *)&uStack_14, (char const*)((intptr_t)"com/DBGame/pk/MatchVSHelper"), (char const*)((intptr_t)"gameWin"), (char const*)((intptr_t)"()V")));
  if (iVar1 == 0) {
    cocos2d::CCLog((char const*)((intptr_t)"JNI:%s"), "java层gameWin 函数不存在;");
  }
  else {
    ((_JNIEnv *)this)->CallStaticVoidMethod((_jclass*)uStack_14, (_jmethodID*)uStack_10, uStack_c);
  }
  ((_JNIEnv *)uStack_14)->DeleteLocalRef((_jobject*)uStack_10);
  return;
}

void PKOnlineManager::gameFail()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;
  undefined4 p4 = 0;

  int iVar1;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_14 = (undefined4)(p2);
  uStack_10 = (undefined4)(p3);
  uStack_c = (undefined4)(p4);
  PKOnlineManager::openResultUI(0);
  iVar1 = (undefined4)(intptr_t)(cocos2d::JniHelper::getStaticMethodInfo(*(cocos2d::JniMethodInfo *)&uStack_14, (char const*)((intptr_t)"com/DBGame/pk/MatchVSHelper"), (char const*)((intptr_t)"gameFail"), (char const*)((intptr_t)"()V")));
  if (iVar1 == 0) {
    cocos2d::CCLog((char const*)((intptr_t)"JNI:%s"), "java层gameFail 函数不存在;");
  }
  else {
    ((_JNIEnv *)this)->CallStaticVoidMethod((_jclass*)uStack_14, (_jmethodID*)uStack_10, uStack_c);
  }
  ((_JNIEnv *)uStack_14)->DeleteLocalRef((_jobject*)uStack_10);
  return;
}

undefined8 PKOnlineManager::receiveData(char const* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
