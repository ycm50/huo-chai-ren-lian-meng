#include "BLMainPausePresenter.h"
#include "BLForwards.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "CCNotificationCenter.h"
#include "HttpResponse.h"
#include "HttpClient.h"
#include "CCObject.h"
#include "CCTouch.h"
#include "CCString.h"
#include "CCUserDefault.h"
#include "CCDirector.h"
#include "BLGameScene.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLMainPauseView.h"
#include "BLUpAndDownUtils.h"
#include "CCJson.h"
#include "DataManager.h"
#include "DownLoadDataNumData.h"
#include "MainPauseCheckData.h"
#include "NoticeData.h"
#include "PlatformHelp.h"
#include "StringJsonManager.h"
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
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2dc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e34c(...);
extern "C" long long func_0079e41c(...);
extern "C" long long func_0079e42c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4bc(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e54c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e5ac(...);
extern "C" long long func_0079e5ec(...);
extern "C" long long func_0079e68c(...);
extern "C" long long func_0079e794(...);
extern "C" long long func_0079e854(...);
extern "C" long long func_0079e904(...);
extern "C" long long func_0079e914(...);
extern "C" long long func_0079e954(...);
extern "C" long long ghidra_CONCAT13(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0058d990;
extern "C" unsigned long UNK_0058d9a8;
extern "C" unsigned long UNK_0058d9c0;
extern "C" unsigned long UNK_0058da38;
extern "C" unsigned long UNK_0058da58;
extern "C" unsigned long UNK_0058daa8;
extern "C" unsigned long UNK_0058dad0;
extern "C" unsigned long UNK_0058daf4;
extern "C" unsigned long UNK_0058db2c;
extern "C" unsigned long UNK_0058db2e;
extern "C" unsigned long UNK_0058db66;
extern "C" unsigned long UNK_0058db9c;
extern "C" unsigned long UNK_0058dbd0;
extern "C" unsigned long UNK_0058dc00;
extern "C" unsigned long UNK_0058dc34;
extern "C" unsigned long UNK_0058dc98;
extern "C" unsigned long UNK_0058dccc;
extern "C" unsigned long UNK_0058dcfc;
extern "C" unsigned long UNK_0058dd30;
extern "C" unsigned long UNK_0058dd58;
extern "C" unsigned long UNK_0058dd7c;
extern "C" unsigned long UNK_0058de66;
extern "C" unsigned long UNK_0058de98;
extern "C" unsigned long UNK_0058dee2;
extern "C" unsigned long UNK_0058df12;
extern "C" unsigned long UNK_0058df5e;
extern "C" unsigned long UNK_0058df92;
extern "C" unsigned long UNK_0058e004;
extern "C" unsigned long UNK_0058e022;
extern "C" unsigned long UNK_0058e0f0;
extern "C" unsigned long UNK_0058e112;
extern "C" unsigned long UNK_0058e154;
extern "C" unsigned long UNK_0058e194;
extern "C" unsigned long UNK_0058e1b2;
extern "C" unsigned long UNK_0058e1cc;
extern "C" unsigned long UNK_0058e1f6;
extern "C" unsigned long UNK_0058e23a;
extern "C" unsigned long UNK_0058e268;
extern "C" unsigned long UNK_0058e272;
extern "C" unsigned long UNK_0058e27e;
extern "C" unsigned long UNK_0058e2ac;
extern "C" unsigned long UNK_0058e2c8;
extern "C" unsigned long UNK_0058e2e2;
extern "C" unsigned long UNK_0058e33e;
extern "C" unsigned long UNK_0058e37a;
extern "C" unsigned long UNK_0058e3c6;
extern "C" unsigned long UNK_0058e466;
extern "C" unsigned long UNK_0058e474;
extern "C" unsigned long UNK_0058e482;
extern "C" unsigned long UNK_0058e496;
extern "C" unsigned long UNK_0058e566;
extern "C" unsigned long UNK_0058e59a;
extern "C" unsigned long UNK_0058e5e2;
extern "C" unsigned long UNK_0058e616;
extern "C" unsigned long UNK_0058e6b8;
extern "C" unsigned long UNK_0058e6de;
extern "C" unsigned long UNK_0058e73c;
extern "C" unsigned long UNK_0058e754;
extern "C" unsigned long UNK_0058e766;
extern "C" unsigned long UNK_0058e79e;
extern "C" unsigned long UNK_0058e7da;
extern "C" unsigned long UNK_0058e7f6;
extern "C" unsigned long UNK_0058e81a;
extern "C" unsigned long UNK_0058e836;
extern "C" unsigned long UNK_0058e852;
extern "C" unsigned long UNK_0058e906;
extern "C" unsigned long UNK_0058eaa8;
extern "C" unsigned long UNK_0058eac4;
extern "C" unsigned long UNK_0058eb48;
extern "C" unsigned long UNK_0058eb82;
extern "C" unsigned long UNK_0058ebd8;
extern "C" unsigned long UNK_0058ec06;
extern "C" unsigned long UNK_0058ec46;
extern "C" unsigned long UNK_0058ec62;
extern "C" unsigned long UNK_0058ec8e;
extern "C" unsigned long UNK_0058ecbc;
extern "C" unsigned long UNK_0058ed2c;
extern "C" unsigned long UNK_0058ed54;
extern "C" unsigned long UNK_0058ed70;
extern "C" unsigned long UNK_0058ed9e;
extern "C" unsigned long UNK_0058eda2;
extern "C" unsigned long UNK_0058eda8;
extern "C" unsigned long UNK_0058edc8;
extern "C" unsigned long UNK_0058edd8;
extern "C" unsigned long UNK_0058ee0e;
extern "C" unsigned long UNK_0058ee84;
extern "C" unsigned long UNK_0058ef44;
extern "C" unsigned long _UNK_0058d994;
extern "C" unsigned long _UNK_0058d9ac;
extern "C" unsigned long _UNK_0058d9c4;
extern "C" unsigned long _UNK_0058da94;
extern "C" unsigned long _UNK_0058da98;
extern "C" unsigned long _UNK_0058daac;
extern "C" unsigned long _UNK_0058dad4;
extern "C" unsigned long _UNK_0058daf8;
extern "C" unsigned long _UNK_0058db38;
extern "C" unsigned long _UNK_0058db3c;
extern "C" unsigned long _UNK_0058db68;
extern "C" unsigned long _UNK_0058de24;
extern "C" unsigned long _UNK_0058de28;
extern "C" unsigned long _UNK_0058de2c;
extern "C" unsigned long _UNK_0058de30;
extern "C" unsigned long _UNK_0058de34;
extern "C" unsigned long _UNK_0058de38;
extern "C" unsigned long _UNK_0058de3c;
extern "C" unsigned long _UNK_0058de40;
extern "C" unsigned long _UNK_0058de44;
extern "C" unsigned long _UNK_0058de48;
extern "C" unsigned long _UNK_0058de4c;
extern "C" unsigned long _UNK_0058e064;
extern "C" unsigned long _UNK_0058e068;
extern "C" unsigned long _UNK_0058e06c;
extern "C" unsigned long _UNK_0058e070;
extern "C" unsigned long _UNK_0058e074;
extern "C" unsigned long _UNK_0058e078;
extern "C" unsigned long _UNK_0058e07c;
extern "C" unsigned long _UNK_0058e080;
extern "C" unsigned long _UNK_0058e0f4;
extern "C" unsigned long _UNK_0058e180;
extern "C" unsigned long _UNK_0058e184;
extern "C" unsigned long _UNK_0058e4cc;
extern "C" unsigned long _UNK_0058e4d0;
extern "C" unsigned long _UNK_0058e4d4;
extern "C" unsigned long _UNK_0058e4d8;
extern "C" unsigned long _UNK_0058e4dc;
extern "C" unsigned long _UNK_0058e4e0;
extern "C" unsigned long _UNK_0058e4e4;
extern "C" unsigned long _UNK_0058e4e8;
extern "C" unsigned long _UNK_0058e4ec;
extern "C" unsigned long _UNK_0058e4f0;
extern "C" unsigned long _UNK_0058e4f4;
extern "C" unsigned long _UNK_0058e4f8;
extern "C" unsigned long _UNK_0058e4fc;
extern "C" unsigned long _UNK_0058e500;
extern "C" unsigned long _UNK_0058e504;
extern "C" unsigned long _UNK_0058e508;
extern "C" unsigned long _UNK_0058e50c;
extern "C" unsigned long _UNK_0058e510;
extern "C" unsigned long _UNK_0058e514;
extern "C" unsigned long _UNK_0058e518;
extern "C" unsigned long _UNK_0058e51c;
extern "C" unsigned long _UNK_0058e520;
extern "C" unsigned long _UNK_0058e524;
extern "C" unsigned long _UNK_0058e528;
extern "C" unsigned long _UNK_0058e52c;
extern "C" unsigned long _UNK_0058e660;
extern "C" unsigned long _UNK_0058e664;
extern "C" unsigned long _UNK_0058e668;
extern "C" unsigned long _UNK_0058e66c;
extern "C" unsigned long _UNK_0058e728;
extern "C" unsigned long _UNK_0058e72c;
extern "C" unsigned long _UNK_0058e740;
extern "C" unsigned long _UNK_0058e784;
extern "C" unsigned long _UNK_0058e788;
extern "C" unsigned long _UNK_0058e87c;
extern "C" unsigned long _UNK_0058e880;
extern "C" unsigned long _UNK_0058e884;
extern "C" unsigned long _UNK_0058e888;
extern "C" unsigned long _UNK_0058e88c;
extern "C" unsigned long _UNK_0058e890;
extern "C" unsigned long _UNK_0058e894;
extern "C" unsigned long _UNK_0058e898;
extern "C" unsigned long _UNK_0058e89c;
extern "C" unsigned long _UNK_0058e8a0;
extern "C" unsigned long _UNK_0058e8a4;
extern "C" unsigned long _UNK_0058ea50;
extern "C" unsigned long _UNK_0058ea54;
extern "C" unsigned long _UNK_0058ea58;
extern "C" unsigned long _UNK_0058ea5c;
extern "C" unsigned long _UNK_0058ea60;
extern "C" unsigned long _UNK_0058ea64;
extern "C" unsigned long _UNK_0058ea68;
extern "C" unsigned long _UNK_0058ea6c;
extern "C" unsigned long _UNK_0058ea70;
extern "C" unsigned long _UNK_0058ea74;
extern "C" unsigned long _UNK_0058ea78;
extern "C" unsigned long _UNK_0058eb14;
extern "C" unsigned long _UNK_0058eb18;
extern "C" unsigned long _UNK_0058ebc8;
extern "C" unsigned long _UNK_0058ebcc;
extern "C" unsigned long _UNK_0058ec30;
extern "C" unsigned long _UNK_0058ec34;
extern "C" unsigned long _UNK_0058ed00;
extern "C" unsigned long _UNK_0058ed04;
extern "C" unsigned long _UNK_0058ed08;
extern "C" unsigned long _UNK_0058ed0c;
extern "C" unsigned long _UNK_0058ed58;
extern "C" unsigned long _UNK_0058ed5c;
extern "C" unsigned long _UNK_0058efdc;
extern "C" unsigned long _UNK_0058efe0;
extern "C" unsigned long _UNK_0058efe4;
extern "C" unsigned long _UNK_0058efe8;
extern "C" unsigned long _UNK_0058efec;
extern "C" unsigned long _UNK_0058eff0;
extern "C" unsigned long _UNK_0058eff4;
extern "C" unsigned long _UNK_0058eff8;
extern "C" unsigned long _UNK_0058effc;
extern "C" unsigned long extraout_r2;
extern "C" unsigned long extraout_r3;
extern "C" unsigned long g_0058d990;
extern "C" unsigned long g_0058d994;
extern "C" unsigned long g_0058d9a8;
extern "C" unsigned long g_0058d9ac;
extern "C" unsigned long g_0058d9c0;
extern "C" unsigned long g_0058d9c4;
extern "C" unsigned long g_0058da38;
extern "C" unsigned long g_0058da58;
extern "C" unsigned long g_0058da94;
extern "C" unsigned long g_0058da98;
extern "C" unsigned long g_0058daa8;
extern "C" unsigned long g_0058daac;
extern "C" unsigned long g_0058dad0;
extern "C" unsigned long g_0058dad4;
extern "C" unsigned long g_0058daf4;
extern "C" unsigned long g_0058daf8;
extern "C" unsigned long g_0058db2c;
extern "C" unsigned long g_0058db2e;
extern "C" unsigned long g_0058db38;
extern "C" unsigned long g_0058db3c;
extern "C" unsigned long g_0058db66;
extern "C" unsigned long g_0058db68;
extern "C" unsigned long g_0058db9c;
extern "C" unsigned long g_0058dbd0;
extern "C" unsigned long g_0058dc00;
extern "C" unsigned long g_0058dc34;
extern "C" unsigned long g_0058dc98;
extern "C" unsigned long g_0058dccc;
extern "C" unsigned long g_0058dcfc;
extern "C" unsigned long g_0058dd30;
extern "C" unsigned long g_0058dd58;
extern "C" unsigned long g_0058dd7c;
extern "C" unsigned long g_0058de24;
extern "C" unsigned long g_0058de28;
extern "C" unsigned long g_0058de2c;
extern "C" unsigned long g_0058de30;
extern "C" unsigned long g_0058de34;
extern "C" unsigned long g_0058de38;
extern "C" unsigned long g_0058de3c;
extern "C" unsigned long g_0058de40;
extern "C" unsigned long g_0058de44;
extern "C" unsigned long g_0058de48;
extern "C" unsigned long g_0058de4c;
extern "C" unsigned long g_0058de66;
extern "C" unsigned long g_0058de98;
extern "C" unsigned long g_0058dee2;
extern "C" unsigned long g_0058df12;
extern "C" unsigned long g_0058df5e;
extern "C" unsigned long g_0058df92;
extern "C" unsigned long g_0058e004;
extern "C" unsigned long g_0058e022;
extern "C" unsigned long g_0058e064;
extern "C" unsigned long g_0058e068;
extern "C" unsigned long g_0058e06c;
extern "C" unsigned long g_0058e070;
extern "C" unsigned long g_0058e074;
extern "C" unsigned long g_0058e078;
extern "C" unsigned long g_0058e07c;
extern "C" unsigned long g_0058e080;
extern "C" unsigned long g_0058e0f0;
extern "C" unsigned long g_0058e0f4;
extern "C" unsigned long g_0058e112;
extern "C" unsigned long g_0058e154;
extern "C" unsigned long g_0058e180;
extern "C" unsigned long g_0058e184;
extern "C" unsigned long g_0058e194;
extern "C" unsigned long g_0058e1b2;
extern "C" unsigned long g_0058e1cc;
extern "C" unsigned long g_0058e1f6;
extern "C" unsigned long g_0058e23a;
extern "C" unsigned long g_0058e268;
extern "C" unsigned long g_0058e272;
extern "C" unsigned long g_0058e27e;
extern "C" unsigned long g_0058e2ac;
extern "C" unsigned long g_0058e2c8;
extern "C" unsigned long g_0058e2e2;
extern "C" unsigned long g_0058e33e;
extern "C" unsigned long g_0058e37a;
extern "C" unsigned long g_0058e3c6;
extern "C" unsigned long g_0058e466;
extern "C" unsigned long g_0058e474;
extern "C" unsigned long g_0058e482;
extern "C" unsigned long g_0058e496;
extern "C" unsigned long g_0058e4cc;
extern "C" unsigned long g_0058e4d0;
extern "C" unsigned long g_0058e4d4;
extern "C" unsigned long g_0058e4d8;
extern "C" unsigned long g_0058e4dc;
extern "C" unsigned long g_0058e4e0;
extern "C" unsigned long g_0058e4e4;
extern "C" unsigned long g_0058e4e8;
extern "C" unsigned long g_0058e4ec;
extern "C" unsigned long g_0058e4f0;
extern "C" unsigned long g_0058e4f4;
extern "C" unsigned long g_0058e4f8;
extern "C" unsigned long g_0058e4fc;
extern "C" unsigned long g_0058e500;
extern "C" unsigned long g_0058e504;
extern "C" unsigned long g_0058e508;
extern "C" unsigned long g_0058e50c;
extern "C" unsigned long g_0058e510;
extern "C" unsigned long g_0058e514;
extern "C" unsigned long g_0058e518;
extern "C" unsigned long g_0058e51c;
extern "C" unsigned long g_0058e520;
extern "C" unsigned long g_0058e524;
extern "C" unsigned long g_0058e528;
extern "C" unsigned long g_0058e52c;
extern "C" unsigned long g_0058e566;
extern "C" unsigned long g_0058e59a;
extern "C" unsigned long g_0058e5e2;
extern "C" unsigned long g_0058e616;
extern "C" unsigned long g_0058e660;
extern "C" unsigned long g_0058e664;
extern "C" unsigned long g_0058e668;
extern "C" unsigned long g_0058e66c;
extern "C" unsigned long g_0058e6b8;
extern "C" unsigned long g_0058e6de;
extern "C" unsigned long g_0058e728;
extern "C" unsigned long g_0058e72c;
extern "C" unsigned long g_0058e73c;
extern "C" unsigned long g_0058e740;
extern "C" unsigned long g_0058e754;
extern "C" unsigned long g_0058e766;
extern "C" unsigned long g_0058e784;
extern "C" unsigned long g_0058e788;
extern "C" unsigned long g_0058e79e;
extern "C" unsigned long g_0058e7da;
extern "C" unsigned long g_0058e7f6;
extern "C" unsigned long g_0058e81a;
extern "C" unsigned long g_0058e836;
extern "C" unsigned long g_0058e852;
extern "C" unsigned long g_0058e87c;
extern "C" unsigned long g_0058e880;
extern "C" unsigned long g_0058e884;
extern "C" unsigned long g_0058e888;
extern "C" unsigned long g_0058e88c;
extern "C" unsigned long g_0058e890;
extern "C" unsigned long g_0058e894;
extern "C" unsigned long g_0058e898;
extern "C" unsigned long g_0058e89c;
extern "C" unsigned long g_0058e8a0;
extern "C" unsigned long g_0058e8a4;
extern "C" unsigned long g_0058e906;
extern "C" unsigned long g_0058ea50;
extern "C" unsigned long g_0058ea54;
extern "C" unsigned long g_0058ea58;
extern "C" unsigned long g_0058ea5c;
extern "C" unsigned long g_0058ea60;
extern "C" unsigned long g_0058ea64;
extern "C" unsigned long g_0058ea68;
extern "C" unsigned long g_0058ea6c;
extern "C" unsigned long g_0058ea70;
extern "C" unsigned long g_0058ea74;
extern "C" unsigned long g_0058ea78;
extern "C" unsigned long g_0058eaa8;
extern "C" unsigned long g_0058eac4;
extern "C" unsigned long g_0058eb14;
extern "C" unsigned long g_0058eb18;
extern "C" unsigned long g_0058eb48;
extern "C" unsigned long g_0058eb82;
extern "C" unsigned long g_0058ebc8;
extern "C" unsigned long g_0058ebcc;
extern "C" unsigned long g_0058ebd8;
extern "C" unsigned long g_0058ec06;
extern "C" unsigned long g_0058ec30;
extern "C" unsigned long g_0058ec34;
extern "C" unsigned long g_0058ec46;
extern "C" unsigned long g_0058ec62;
extern "C" unsigned long g_0058ec8e;
extern "C" unsigned long g_0058ecbc;
extern "C" unsigned long g_0058ed00;
extern "C" unsigned long g_0058ed04;
extern "C" unsigned long g_0058ed08;
extern "C" unsigned long g_0058ed0c;
extern "C" unsigned long g_0058ed2c;
extern "C" unsigned long g_0058ed54;
extern "C" unsigned long g_0058ed58;
extern "C" unsigned long g_0058ed5c;
extern "C" unsigned long g_0058ed70;
extern "C" unsigned long g_0058ed9e;
extern "C" unsigned long g_0058eda2;
extern "C" unsigned long g_0058eda8;
extern "C" unsigned long g_0058edc8;
extern "C" unsigned long g_0058edd8;
extern "C" unsigned long g_0058ee0e;
extern "C" unsigned long g_0058ee84;
extern "C" unsigned long g_0058ef44;
extern "C" unsigned long g_0058efdc;
extern "C" unsigned long g_0058efe0;
extern "C" unsigned long g_0058efe4;
extern "C" unsigned long g_0058efe8;
extern "C" unsigned long g_0058efec;
extern "C" unsigned long g_0058eff0;
extern "C" unsigned long g_0058eff4;
extern "C" unsigned long g_0058eff8;
extern "C" unsigned long g_0058effc;
bool BLMainPausePresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLMainPausePresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLMainPausePresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLMainPausePresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLMainPausePresenter::updateView()
{
  *(undefined1 *)(((int)this) + 0x24) = 1;
  return;
}

BLMainPausePresenter::~BLMainPausePresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0058da38 + g_0058da94);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x44;
  *(int *)((int)this + 4*(6)) = iVar2 + 0x74;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0058da58 + g_0058da98,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar1)->removeAllObservers((cocos2d::CCObject*)((int)this));
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLMainPausePresenter::onCheckFailed(MainPauseCheckData* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->showUIById(0x5b);
  return;
}

void BLMainPausePresenter::onFanKui(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->showUIById(0xa0);
  return;
}


void BLMainPausePresenter::onGLSB(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->showUIById(0xc1);
  return;
}

void BLMainPausePresenter::updateTip()
{
  undefined4 p4 = 0;

  int *piVar1;
  code *pcVar2;
  
  piVar1 = (int *)((BLMainPauseView *)*(undefined4 *)(((int)this) + 0x1c))->getLabTip();
  pcVar2 = *(code **)(*piVar1 + 0x234);
  (*pcVar2)(piVar1,&g_0058db66 + g_0058db68,*piVar1,pcVar2,p4);
  return;
}


void BLMainPausePresenter::onMusic(cocos2d::CCObject* p1, unsigned int p2)
{
  byte bVar1;
  int *piVar2;
  int *piVar3;
  code *pcVar4;
  
  piVar2 = (int *)((DataManager *)this)->shareDataManager();
  pcVar4 = *(code **)(*piVar2 + 0x8c);
  piVar3 = (int *)((DataManager *)this)->shareDataManager();
  bVar1 = (**(code **)(*piVar3 + 0x88))();
  (*pcVar4)(piVar2,bVar1 ^ 1);
  BLMainPausePresenter::updateInfo();
  return;
}

void BLMainPausePresenter::onSound(cocos2d::CCObject* p1, unsigned int p2)
{
  byte bVar1;
  int *piVar2;
  int *piVar3;
  code *pcVar4;
  
  piVar2 = (int *)((DataManager *)this)->shareDataManager();
  pcVar4 = *(code **)(*piVar2 + 0x9c);
  piVar3 = (int *)((DataManager *)this)->shareDataManager();
  bVar1 = (**(code **)(*piVar3 + 0x98))();
  (*pcVar4)(piVar2,bVar1 ^ 1);
  BLMainPausePresenter::updateInfo();
  return;
}

void BLMainPausePresenter::onDuiHuan(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar1)->postNotification((char const*)&g_0058e0f0 + g_0058e0f4);
  return;
}



void BLMainPausePresenter::tick(float p1)
{
  int *piVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined1 auStack_20 [4];
  undefined1 uStack_1c;
  undefined1 uStack_1b;
  undefined1 uStack_1a;
  
  if (*(char *)(((int)this) + 0x24) != '\0') {
    *(undefined1 *)(((int)this) + 0x24) = 0;
    piVar1 = (int *)((BLMainPauseView *)*(undefined4 *)(((int)this) + 0x1c))->getBtnYJBD();
    pcVar3 = *(code **)(*piVar1 + 0x30c);
    func_0079e45c(&uStack_1c,&g_0058e566 + g_0058e660,auStack_20);
    uVar2 = (undefined4)(0 /* ctorZero */);
    (*pcVar3)(piVar1,uVar2,1);
    func_0079e2bc(&uStack_1c);
    piVar1 = (int *)((BLMainPauseView *)*(undefined4 *)(((int)this) + 0x1c))->getBtnYJBD();
    pcVar3 = *(code **)(*piVar1 + 0x30c);
    func_0079e45c(&uStack_1c,&g_0058e59a + g_0058e664,auStack_20);
    uVar2 = (undefined4)(0 /* ctorZero */);
    (*pcVar3)(piVar1,uVar2,2);
    func_0079e2bc(&uStack_1c);
    piVar1 = (int *)((BLMainPauseView *)*(undefined4 *)(((int)this) + 0x1c))->getLabelYJBD();
    uStack_1c = 0xff;
    uStack_1b = 0xff;
    uStack_1a = 0xff;
    (**(code **)(*piVar1 + 0x1b4))(piVar1,&uStack_1c);
    piVar1 = (int *)((BLMainPauseView *)*(undefined4 *)(((int)this) + 0x1c))->getBtnSaveData();
    pcVar3 = *(code **)(*piVar1 + 0x30c);
    func_0079e45c(&uStack_1c,&g_0058e5e2 + g_0058e668,auStack_20);
    uVar2 = (undefined4)(0 /* ctorZero */);
    (*pcVar3)(piVar1,uVar2,1);
    func_0079e2bc(&uStack_1c);
    piVar1 = (int *)((BLMainPauseView *)*(undefined4 *)(((int)this) + 0x1c))->getBtnSaveData();
    pcVar3 = *(code **)(*piVar1 + 0x30c);
    func_0079e45c(&uStack_1c,&g_0058e616 + g_0058e66c,auStack_20);
    uVar2 = (undefined4)(0 /* ctorZero */);
    (*pcVar3)(piVar1,uVar2,2);
    func_0079e2bc(&uStack_1c);
    piVar1 = (int *)((BLMainPauseView *)*(undefined4 *)(((int)this) + 0x1c))->getLabSaveData();
    uStack_1c = 0xff;
    uStack_1b = 0xff;
    uStack_1a = 0;
    (**(code **)(*piVar1 + 0x1b4))(piVar1,&uStack_1c);
  }
  return;
}




undefined4 BLMainPausePresenter::create(BLMainPauseView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x28))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLMainPausePresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this + 0x14));
  return;
}

void BLMainPausePresenter::onEnter()
{
  return;
}




void BLMainPausePresenter::updateViewYJTD()
{
  int *piVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined1 auStack_20 [4];
  undefined1 uStack_1c;
  undefined1 uStack_1b;
  undefined1 uStack_1a;
  
  piVar1 = (int *)((BLMainPauseView *)*(undefined4 *)(((int)this) + 0x1c))->getBtnAccount();
  pcVar3 = *(code **)(*piVar1 + 0x30c);
  func_0079e45c(&uStack_1c,&g_0058eb48 + g_0058ebc8,auStack_20);
  uVar2 = (undefined4)(0 /* ctorZero */);
  (*pcVar3)(piVar1,uVar2,1);
  func_0079e2bc(&uStack_1c);
  piVar1 = (int *)((BLMainPauseView *)*(undefined4 *)(((int)this) + 0x1c))->getBtnAccount();
  pcVar3 = *(code **)(*piVar1 + 0x30c);
  func_0079e45c(&uStack_1c,&g_0058eb82 + g_0058ebcc,auStack_20);
  uVar2 = (undefined4)(0 /* ctorZero */);
  (*pcVar3)(piVar1,uVar2,2);
  func_0079e2bc(&uStack_1c);
  piVar1 = (int *)((BLMainPauseView *)*(undefined4 *)(((int)this) + 0x1c))->getLabAccount();
  uStack_1c = 0xff;
  uStack_1b = 0xff;
  uStack_1a = 0xff;
  (**(code **)(*piVar1 + 0x1b4))(piVar1,&uStack_1c);
  return;
}

// ===== 修复: 补回被误删的函数占位 (14) =====
undefined * BLMainPausePresenter::onDownLoadData()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return nullptr;
}

void BLMainPausePresenter::updateInfo()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMainPausePresenter::onClose(cocos2d::CCObject* p1, unsigned int p2)
{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  code *pcVar4;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_18 = (undefined4)((int *)((int)this));
  uStack_14 = (undefined4)(p1);
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  (**(code **)(*piVar1 + 0x48))(&uStack_14,piVar1);
  iVar2 = func_0079e4bc(&uStack_14,&g_0058e112 + g_0058e180);
  func_0079e2bc(&uStack_14);
  if (iVar2 != 0) {
    uVar3 = (undefined4)(cocos2d::CCUserDefault::sharedUserDefault());
    piVar1 = (int *)((DataManager *)this)->shareDataManager();
    (**(code **)(*piVar1 + 0x48))(&uStack_14,piVar1);
    ((cocos2d::CCUserDefault *)uVar3)->setBoolForKey((char const*)uStack_14, 1);
    func_0079e2bc(&uStack_14);
    piVar1 = (int *)((DataManager *)this)->shareDataManager();
    pcVar4 = *(code **)(*piVar1 + 0x4c);
    func_0079e45c(&uStack_14,&g_0058e154 + g_0058e184,&uStack_18);
    (*pcVar4)(piVar1,&uStack_14);
    func_0079e2bc(&uStack_14);
  }
  uVar3 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar3)->removeUIByID(0x55);
  return;
}

void BLMainPausePresenter::onCallBackZhuCe(cocos2d::extension::CCHttpClient* p1, cocos2d::extension::CCHttpResponse* p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMainPausePresenter::onCheckSuccess(MainPauseCheckData* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMainPausePresenter::onSureDownLoadSave(cocos2d::CCObject* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

BLMainPausePresenter::BLMainPausePresenter()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMainPausePresenter::initWithView(BLMainPauseView* p1)
{
  int iVar1;
  int *piVar2;
  
  *(undefined4 *)(((int)this) + 0x1c) = (undefined4)(intptr_t)p1;
  piVar2 = (int *)((BLMainPauseView *)p1)->getBtnMusic();
  iVar1 = g_0058ea50;
  (**(code **)(*piVar2 + 0x254))
            (piVar2,((int)this),*(undefined4 *)(&g_0058e906 + g_0058ea54 + g_0058ea50),0,0x20);
  piVar2 = (int *)((BLMainPauseView *)*(undefined4 *)(((int)this) + 0x1c))->getBtnSound();
  (**(code **)(*piVar2 + 0x254))
            (piVar2,((int)this),*(undefined4 *)(&g_0058e906 + g_0058ea58 + iVar1),0,0x20);
  piVar2 = (int *)((BLMainPauseView *)*(undefined4 *)(((int)this) + 0x1c))->getBtnFanKui();
  (**(code **)(*piVar2 + 0x254))
            (piVar2,((int)this),*(undefined4 *)(&g_0058e906 + g_0058ea5c + iVar1),0,0x20);
  piVar2 = (int *)((BLMainPauseView *)*(undefined4 *)(((int)this) + 0x1c))->getBtnDuiHuan();
  (**(code **)(*piVar2 + 0x254))
            (piVar2,((int)this),*(undefined4 *)(&g_0058e906 + g_0058ea60 + iVar1),0,0x20);
  piVar2 = (int *)((BLMainPauseView *)*(undefined4 *)(((int)this) + 0x1c))->getBtnClose();
  (**(code **)(*piVar2 + 0x254))
            (piVar2,((int)this),*(undefined4 *)(&g_0058e906 + g_0058ea64 + iVar1),0,0x20);
  piVar2 = (int *)((BLMainPauseView *)*(undefined4 *)(((int)this) + 0x1c))->getBtnAccount();
  (**(code **)(*piVar2 + 0x254))
            (piVar2,((int)this),*(undefined4 *)(&g_0058e906 + g_0058ea68 + iVar1),0,0x20);
  piVar2 = (int *)((BLMainPauseView *)*(undefined4 *)(((int)this) + 0x1c))->getBtnSaveData();
  (**(code **)(*piVar2 + 0x254))
            (piVar2,((int)this),*(undefined4 *)(&g_0058e906 + g_0058ea6c + iVar1),0,0x20);
  piVar2 = (int *)((BLMainPauseView *)*(undefined4 *)(((int)this) + 0x1c))->getBtnGLSB();
  (**(code **)(*piVar2 + 0x254))
            (piVar2,((int)this),*(undefined4 *)(&g_0058e906 + g_0058ea70 + iVar1),0,0x20);
  piVar2 = (int *)((BLMainPauseView *)*(undefined4 *)(((int)this) + 0x1c))->getBtnYJBD();
  (**(code **)(*piVar2 + 0x254))
            (piVar2,((int)this),*(undefined4 *)(&g_0058e906 + g_0058ea74 + iVar1),0,0x20);
  piVar2 = (int *)((BLMainPauseView *)*(undefined4 *)(((int)this) + 0x1c))->getBtnGongGao();
  (**(code **)(*piVar2 + 0x254))
            (piVar2,((int)this),*(undefined4 *)(&g_0058e906 + g_0058ea78 + iVar1),0,0x20);
  BLMainPausePresenter::updateInfo();
  return;
}

void BLMainPausePresenter::updateDevice()
{
  int *piVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined1 auStack_28 [4];
  undefined4 uStack_24;
  undefined1 auStack_20 [4];
  undefined4 auStack_1c [2];
  
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  piVar1 = (int *)(**(code **)(*(int *)(piVar1) + (0x28)))();
  (**(code **)(*(int *)(piVar1) + (0xd8)))(&uStack_24,piVar1);
  uVar2 = (undefined4)(((BLLanguage *)this)->share());
  func_0079e45c(auStack_20,(unsigned char *)((char *)&g_0058eaa8 + (intptr_t)(g_0058eb14)),auStack_28);
  (((BLLanguage *)this))->getString(*(std::string *)auStack_1c);
  uVar2 = (undefined4)(cocos2d::CCString::createWithFormat((char const*)(unsigned char *)((char *)&g_0058eac4 + (intptr_t)(g_0058eb18)), auStack_1c[0], uStack_24));
  func_0079e2bc(auStack_1c);
  func_0079e2bc(auStack_20);
  piVar1 = (int *)((BLMainPauseView *)(*(undefined4 *)(((int)this) + 0x1c)))->getLabDevice();
  pcVar3 = *(code **)(*piVar1 + 0x234);
  uVar2 = (undefined4)(((cocos2d::CCString *)(uVar2))->getCString());
  (*pcVar3)(piVar1,uVar2);
  func_0079e2bc(&uStack_24);
  return;
}

void BLMainPausePresenter::onQuit(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMainPausePresenter::onGongGao(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMainPausePresenter::onAccount(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMainPausePresenter::onSaveData(cocos2d::CCObject* p1, unsigned int p2)
{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  (**(code **)(*(int *)(piVar1) + (0x124)))(piVar1,0);
  uVar2 = (undefined4)(cocos2d::CCUserDefault::sharedUserDefault());
  iVar3 = (undefined4)(intptr_t)(((cocos2d::CCUserDefault *)(uVar2))->getBoolForKey((char const*)(unsigned char *)((char *)&g_0058ed2c + (intptr_t)(g_0058ed58))));
  if (iVar3 == 0) {
    uVar2 = (undefined4)(((Toast *)this)->sharedToast());
    ((Toast *)(uVar2))->showToast((char const*)(unsigned char *)((char *)&g_0058ed54 + (intptr_t)(g_0058ed5c)));
  }
  else {
    uVar2 = (undefined4)(((sir::singleton<MainPauseCheckData, 0> *)this)->instance());
    ((MainPauseCheckData *)(uVar2))->GetDataFromNet(1);
    uVar2 = (undefined4)(((sir::singleton<MainPauseCheckData, 0> *)this)->instance());
    ((MainPauseCheckData *)(uVar2))->setCheckDelegate((CEMainPauseCheckDataDelegate*)((int)this + 0x18));
  }
  return;
}

void BLMainPausePresenter::onYJBD(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
