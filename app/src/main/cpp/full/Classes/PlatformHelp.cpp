#include "PlatformHelp.h"
#include "BLFileUtils.h"
#include "BLLanguage.h"
#include "BluetoothHelper.h"
#include "DataCacheManager.h"
#include "DataManager.h"
#include "Toast.h"
#include "UserData.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
using namespace cocos2d;
// 兜底声明
#include "JniHelper.h"   // P1: cocos2d::JniHelper
#include <jni.h>   // P1: _JNIEnv/_jclass/_jmethodID
#include <new>   // ghost_fix.js 自动补齐
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e67c(...);
extern "C" long long func_0079e6c0(...);
extern "C" long long func_0079e874(...);
extern "C" long long func_0079ea34(...);
extern "C" long long func_0079ead4(...);
extern "C" long long func_0079eae4(...);
extern "C" long long func_0079eaf4(...);
extern "C" long long func_0079ece8(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_006cda0c;
extern "C" unsigned long UNK_006cda0e;
extern "C" unsigned long UNK_006cda10;
extern "C" unsigned long UNK_006cda64;
extern "C" unsigned long UNK_006cda6a;
extern "C" unsigned long UNK_006cdadc;
extern "C" unsigned long UNK_006cdade;
extern "C" unsigned long UNK_006cdae0;
extern "C" unsigned long UNK_006cdb16;
extern "C" unsigned long UNK_006cdb1a;
extern "C" unsigned long UNK_006cdb1c;
extern "C" unsigned long UNK_006cdb8e;
extern "C" unsigned long UNK_006cdb92;
extern "C" unsigned long UNK_006cdb94;
extern "C" unsigned long UNK_006cdbd0;
extern "C" unsigned long UNK_006cdbd2;
extern "C" unsigned long UNK_006cdbd4;
extern "C" unsigned long UNK_006cdc06;
extern "C" unsigned long UNK_006cdc0a;
extern "C" unsigned long UNK_006cdc0c;
extern "C" unsigned long UNK_006cdc4e;
extern "C" unsigned long UNK_006cdc52;
extern "C" unsigned long UNK_006cdc54;
extern "C" unsigned long UNK_006cdee8;
extern "C" unsigned long UNK_006cdefe;
extern "C" unsigned long UNK_006cdf02;
extern "C" unsigned long UNK_006cdf04;
extern "C" unsigned long UNK_006ce018;
extern "C" unsigned long UNK_006ce02c;
extern "C" unsigned long UNK_006ce030;
extern "C" unsigned long UNK_006ce032;
extern "C" unsigned long UNK_006ce098;
extern "C" unsigned long UNK_006ce09c;
extern "C" unsigned long UNK_006ce0a0;
extern "C" unsigned long UNK_006ce2b8;
extern "C" unsigned long UNK_006ce2ba;
extern "C" unsigned long UNK_006ce2bc;
extern "C" unsigned long UNK_006ce2ec;
extern "C" unsigned long UNK_006ce2ee;
extern "C" unsigned long UNK_006ce2f0;
extern "C" unsigned long UNK_006ce320;
extern "C" unsigned long UNK_006ce322;
extern "C" unsigned long UNK_006ce324;
extern "C" unsigned long UNK_006ce356;
extern "C" unsigned long UNK_006ce35a;
extern "C" unsigned long UNK_006ce35c;
extern "C" unsigned long UNK_006ce45a;
extern "C" unsigned long UNK_006ce67a;
extern "C" unsigned long UNK_006ce67e;
extern "C" unsigned long UNK_006ce680;
extern "C" unsigned long UNK_006ce68c;
extern "C" unsigned long UNK_006ce6ca;
extern "C" unsigned long UNK_006ce6ce;
extern "C" unsigned long UNK_006ce6d0;
extern "C" unsigned long UNK_006ce6dc;
extern "C" unsigned long UNK_006ce8c0;
extern "C" unsigned long UNK_006ce8d4;
extern "C" unsigned long UNK_006ce8d8;
extern "C" unsigned long UNK_006ce8da;
extern "C" unsigned long UNK_006ce8f4;
extern "C" unsigned long UNK_006ce8fe;
extern "C" unsigned long UNK_006ce910;
extern "C" unsigned long UNK_006ce912;
extern "C" unsigned long UNK_006ce914;
extern "C" unsigned long UNK_006ce944;
extern "C" unsigned long UNK_006ce9a8;
extern "C" unsigned long UNK_006ce9aa;
extern "C" unsigned long UNK_006ce9ac;
extern "C" unsigned long UNK_006ce9b8;
extern "C" unsigned long UNK_006ce9f2;
extern "C" unsigned long UNK_006ce9f6;
extern "C" unsigned long UNK_006ce9f8;
extern "C" unsigned long UNK_006cea04;
extern "C" unsigned long UNK_006cea74;
extern "C" unsigned long UNK_006cea76;
extern "C" unsigned long UNK_006cea78;
extern "C" unsigned long UNK_006ceaa8;
extern "C" unsigned long UNK_006ceaaa;
extern "C" unsigned long UNK_006ceaac;
extern "C" unsigned long UNK_006ceab8;
extern "C" unsigned long UNK_006ceacc;
extern "C" unsigned long UNK_006ceb80;
extern "C" unsigned long UNK_006ceb84;
extern "C" unsigned long UNK_006ceb86;
extern "C" unsigned long _DAT_006cdb70;
extern "C" unsigned long _DAT_006cdb74;
extern "C" unsigned long _DAT_006cdb78;
extern "C" unsigned long _DAT_006cdd4c;
extern "C" unsigned long _DAT_006cdda8;
extern "C" unsigned long _DAT_006cde14;
extern "C" unsigned long _DAT_006cde18;
extern "C" unsigned long _DAT_006cde1c;
extern "C" unsigned long _DAT_006cde20;
extern "C" unsigned long _DAT_006cded0;
extern "C" unsigned long _DAT_006cded4;
extern "C" unsigned long _DAT_006cded8;
extern "C" unsigned long _DAT_006cdedc;
extern "C" unsigned long _DAT_006ce000;
extern "C" unsigned long _DAT_006ce004;
extern "C" unsigned long _DAT_006ce008;
extern "C" unsigned long _DAT_006ce00c;
extern "C" unsigned long _DAT_006ce1b0;
extern "C" unsigned long _DAT_006ce1b4;
extern "C" unsigned long _DAT_006ce1b8;
extern "C" unsigned long _DAT_006ce1bc;
extern "C" unsigned long _DAT_006ce224;
extern "C" unsigned long _DAT_006ce228;
extern "C" unsigned long _DAT_006ce22c;
extern "C" unsigned long _DAT_006ce230;
extern "C" unsigned long _DAT_006ce298;
extern "C" unsigned long _DAT_006ce29c;
extern "C" unsigned long _DAT_006ce2a0;
extern "C" unsigned long _DAT_006ce2a4;
extern "C" unsigned long _DAT_006ce3c0;
extern "C" unsigned long _DAT_006ce3c4;
extern "C" unsigned long _DAT_006ce3c8;
extern "C" unsigned long _DAT_006ce408;
extern "C" unsigned long _DAT_006ce40c;
extern "C" unsigned long _DAT_006ce410;
extern "C" unsigned long _DAT_006ce580;
extern "C" unsigned long _DAT_006ce584;
extern "C" unsigned long _DAT_006ce588;
extern "C" unsigned long _DAT_006ce5bc;
extern "C" unsigned long _DAT_006ce5c0;
extern "C" unsigned long _DAT_006ce5c4;
extern "C" unsigned long _DAT_006ce608;
extern "C" unsigned long _DAT_006ce60c;
extern "C" unsigned long _DAT_006ce610;
extern "C" unsigned long _DAT_006ce614;
extern "C" unsigned long _DAT_006ce65c;
extern "C" unsigned long _DAT_006ce660;
extern "C" unsigned long _DAT_006ce664;
extern "C" unsigned long _DAT_006ce750;
extern "C" unsigned long _DAT_006ce754;
extern "C" unsigned long _DAT_006ce758;
extern "C" unsigned long _DAT_006ce75c;
extern "C" unsigned long _DAT_006ce7d0;
extern "C" unsigned long _DAT_006ce7d4;
extern "C" unsigned long _DAT_006ce7d8;
extern "C" unsigned long _DAT_006ce7dc;
extern "C" unsigned long _DAT_006ce7e0;
extern "C" unsigned long _DAT_006ce824;
extern "C" unsigned long _DAT_006ce828;
extern "C" unsigned long _DAT_006ce82c;
extern "C" unsigned long _DAT_006ce830;
extern "C" unsigned long _DAT_006ce8a4;
extern "C" unsigned long _DAT_006ce8a8;
extern "C" unsigned long _DAT_006ce8ac;
extern "C" unsigned long _DAT_006ce8b0;
extern "C" unsigned long _DAT_006ce8b4;
extern "C" unsigned long _UNK_006cda24;
extern "C" unsigned long _UNK_006cda28;
extern "C" unsigned long _UNK_006cda2c;
extern "C" unsigned long _UNK_006cdaa8;
extern "C" unsigned long _UNK_006cdaac;
extern "C" unsigned long _UNK_006cdaf4;
extern "C" unsigned long _UNK_006cdaf8;
extern "C" unsigned long _UNK_006cdafc;
extern "C" unsigned long _UNK_006cdb3c;
extern "C" unsigned long _UNK_006cdb40;
extern "C" unsigned long _UNK_006cdb44;
extern "C" unsigned long _UNK_006cdbb4;
extern "C" unsigned long _UNK_006cdbb8;
extern "C" unsigned long _UNK_006cdbbc;
extern "C" unsigned long _UNK_006cdbe8;
extern "C" unsigned long _UNK_006cdbec;
extern "C" unsigned long _UNK_006cdbf0;
extern "C" unsigned long _UNK_006cdc30;
extern "C" unsigned long _UNK_006cdc34;
extern "C" unsigned long _UNK_006cdc38;
extern "C" unsigned long _UNK_006cdc74;
extern "C" unsigned long _UNK_006cdc78;
extern "C" unsigned long _UNK_006cdc7c;
extern "C" unsigned long _UNK_006cdf8c;
extern "C" unsigned long _UNK_006cdf90;
extern "C" unsigned long _UNK_006cdf94;
extern "C" unsigned long _UNK_006cdf98;
extern "C" unsigned long _UNK_006ce074;
extern "C" unsigned long _UNK_006ce078;
extern "C" unsigned long _UNK_006ce07c;
extern "C" unsigned long _UNK_006ce080;
extern "C" unsigned long _UNK_006ce0c8;
extern "C" unsigned long _UNK_006ce0cc;
extern "C" unsigned long _UNK_006ce0d0;
extern "C" unsigned long _UNK_006ce2d0;
extern "C" unsigned long _UNK_006ce2d4;
extern "C" unsigned long _UNK_006ce2d8;
extern "C" unsigned long _UNK_006ce304;
extern "C" unsigned long _UNK_006ce308;
extern "C" unsigned long _UNK_006ce30c;
extern "C" unsigned long _UNK_006ce338;
extern "C" unsigned long _UNK_006ce33c;
extern "C" unsigned long _UNK_006ce340;
extern "C" unsigned long _UNK_006ce37c;
extern "C" unsigned long _UNK_006ce380;
extern "C" unsigned long _UNK_006ce384;
extern "C" unsigned long _UNK_006ce520;
extern "C" unsigned long _UNK_006ce6a8;
extern "C" unsigned long _UNK_006ce6ac;
extern "C" unsigned long _UNK_006ce6b0;
extern "C" unsigned long _UNK_006ce6b4;
extern "C" unsigned long _UNK_006ce700;
extern "C" unsigned long _UNK_006ce704;
extern "C" unsigned long _UNK_006ce708;
extern "C" unsigned long _UNK_006ce70c;
extern "C" unsigned long _UNK_006ce970;
extern "C" unsigned long _UNK_006ce974;
extern "C" unsigned long _UNK_006ce978;
extern "C" unsigned long _UNK_006ce97c;
extern "C" unsigned long _UNK_006ce980;
extern "C" unsigned long _UNK_006ce984;
extern "C" unsigned long _UNK_006ce988;
extern "C" unsigned long _UNK_006ce98c;
extern "C" unsigned long _UNK_006ce990;
extern "C" unsigned long _UNK_006ce994;
extern "C" unsigned long _UNK_006ce9d0;
extern "C" unsigned long _UNK_006ce9d4;
extern "C" unsigned long _UNK_006ce9d8;
extern "C" unsigned long _UNK_006ce9dc;
extern "C" unsigned long _UNK_006cea54;
extern "C" unsigned long _UNK_006cea58;
extern "C" unsigned long _UNK_006cea5c;
extern "C" unsigned long _UNK_006cea60;
extern "C" unsigned long _UNK_006cea8c;
extern "C" unsigned long _UNK_006cea90;
extern "C" unsigned long _UNK_006cea94;
extern "C" unsigned long _UNK_006cead0;
extern "C" unsigned long _UNK_006cead4;
extern "C" unsigned long _UNK_006cead8;
extern "C" unsigned long _UNK_006ceadc;
extern "C" unsigned long _UNK_006ceae0;
extern "C" unsigned long _UNK_006ceb9c;
extern "C" unsigned long _UNK_006ceba0;
extern "C" unsigned long _UNK_006ceba4;
extern "C" unsigned long extraout_r1;
extern "C" unsigned long g_006cda0c;
extern "C" unsigned long g_006cda0e;
extern "C" unsigned long g_006cda10;
extern "C" unsigned long g_006cda24;
extern "C" unsigned long g_006cda28;
extern "C" unsigned long g_006cda2c;
extern "C" unsigned long g_006cda64;
extern "C" unsigned long g_006cda6a;
extern "C" unsigned long g_006cdaa8;
extern "C" unsigned long g_006cdaac;
extern "C" unsigned long g_006cdadc;
extern "C" unsigned long g_006cdade;
extern "C" unsigned long g_006cdae0;
extern "C" unsigned long g_006cdaf4;
extern "C" unsigned long g_006cdaf8;
extern "C" unsigned long g_006cdafc;
extern "C" unsigned long g_006cdb16;
extern "C" unsigned long g_006cdb1a;
extern "C" unsigned long g_006cdb1c;
extern "C" unsigned long g_006cdb3c;
extern "C" unsigned long g_006cdb40;
extern "C" unsigned long g_006cdb44;
extern "C" unsigned long g_006cdb70;
extern "C" unsigned long g_006cdb74;
extern "C" unsigned long g_006cdb78;
extern "C" unsigned long g_006cdb8e;
extern "C" unsigned long g_006cdb92;
extern "C" unsigned long g_006cdb94;
extern "C" unsigned long g_006cdbb4;
extern "C" unsigned long g_006cdbb8;
extern "C" unsigned long g_006cdbbc;
extern "C" unsigned long g_006cdbd0;
extern "C" unsigned long g_006cdbd2;
extern "C" unsigned long g_006cdbd4;
extern "C" unsigned long g_006cdbe8;
extern "C" unsigned long g_006cdbec;
extern "C" unsigned long g_006cdbf0;
extern "C" unsigned long g_006cdc06;
extern "C" unsigned long g_006cdc0a;
extern "C" unsigned long g_006cdc0c;
extern "C" unsigned long g_006cdc30;
extern "C" unsigned long g_006cdc34;
extern "C" unsigned long g_006cdc38;
extern "C" unsigned long g_006cdc4e;
extern "C" unsigned long g_006cdc52;
extern "C" unsigned long g_006cdc54;
extern "C" unsigned long g_006cdc74;
extern "C" unsigned long g_006cdc78;
extern "C" unsigned long g_006cdc7c;
extern "C" unsigned long g_006cdd4c;
extern "C" unsigned long g_006cdda8;
extern "C" unsigned long g_006cde14;
extern "C" unsigned long g_006cde18;
extern "C" unsigned long g_006cde1c;
extern "C" unsigned long g_006cde20;
extern "C" unsigned long g_006cded0;
extern "C" unsigned long g_006cded4;
extern "C" unsigned long g_006cded8;
extern "C" unsigned long g_006cdedc;
extern "C" unsigned long g_006cdee8;
extern "C" unsigned long g_006cdefe;
extern "C" unsigned long g_006cdf02;
extern "C" unsigned long g_006cdf04;
extern "C" unsigned long g_006cdf8c;
extern "C" unsigned long g_006cdf90;
extern "C" unsigned long g_006cdf94;
extern "C" unsigned long g_006cdf98;
extern "C" unsigned long g_006ce000;
extern "C" unsigned long g_006ce004;
extern "C" unsigned long g_006ce008;
extern "C" unsigned long g_006ce00c;
extern "C" unsigned long g_006ce018;
extern "C" unsigned long g_006ce02c;
extern "C" unsigned long g_006ce030;
extern "C" unsigned long g_006ce032;
extern "C" unsigned long g_006ce074;
extern "C" unsigned long g_006ce078;
extern "C" unsigned long g_006ce07c;
extern "C" unsigned long g_006ce080;
extern "C" unsigned long g_006ce098;
extern "C" unsigned long g_006ce09c;
extern "C" unsigned long g_006ce0a0;
extern "C" unsigned long g_006ce0c8;
extern "C" unsigned long g_006ce0cc;
extern "C" unsigned long g_006ce0d0;
extern "C" unsigned long g_006ce1b0;
extern "C" unsigned long g_006ce1b4;
extern "C" unsigned long g_006ce1b8;
extern "C" unsigned long g_006ce1bc;
extern "C" unsigned long g_006ce224;
extern "C" unsigned long g_006ce228;
extern "C" unsigned long g_006ce22c;
extern "C" unsigned long g_006ce230;
extern "C" unsigned long g_006ce298;
extern "C" unsigned long g_006ce29c;
extern "C" unsigned long g_006ce2a0;
extern "C" unsigned long g_006ce2a4;
extern "C" unsigned long g_006ce2b8;
extern "C" unsigned long g_006ce2ba;
extern "C" unsigned long g_006ce2bc;
extern "C" unsigned long g_006ce2d0;
extern "C" unsigned long g_006ce2d4;
extern "C" unsigned long g_006ce2d8;
extern "C" unsigned long g_006ce2ec;
extern "C" unsigned long g_006ce2ee;
extern "C" unsigned long g_006ce2f0;
extern "C" unsigned long g_006ce304;
extern "C" unsigned long g_006ce308;
extern "C" unsigned long g_006ce30c;
extern "C" unsigned long g_006ce320;
extern "C" unsigned long g_006ce322;
extern "C" unsigned long g_006ce324;
extern "C" unsigned long g_006ce338;
extern "C" unsigned long g_006ce33c;
extern "C" unsigned long g_006ce340;
extern "C" unsigned long g_006ce356;
extern "C" unsigned long g_006ce35a;
extern "C" unsigned long g_006ce35c;
extern "C" unsigned long g_006ce37c;
extern "C" unsigned long g_006ce380;
extern "C" unsigned long g_006ce384;
extern "C" unsigned long g_006ce3c0;
extern "C" unsigned long g_006ce3c4;
extern "C" unsigned long g_006ce3c8;
extern "C" unsigned long g_006ce408;
extern "C" unsigned long g_006ce40c;
extern "C" unsigned long g_006ce410;
extern "C" unsigned long g_006ce45a;
extern "C" unsigned long g_006ce520;
extern "C" unsigned long g_006ce580;
extern "C" unsigned long g_006ce584;
extern "C" unsigned long g_006ce588;
extern "C" unsigned long g_006ce5bc;
extern "C" unsigned long g_006ce5c0;
extern "C" unsigned long g_006ce5c4;
extern "C" unsigned long g_006ce608;
extern "C" unsigned long g_006ce60c;
extern "C" unsigned long g_006ce610;
extern "C" unsigned long g_006ce614;
extern "C" unsigned long g_006ce65c;
extern "C" unsigned long g_006ce660;
extern "C" unsigned long g_006ce664;
extern "C" unsigned long g_006ce67a;
extern "C" unsigned long g_006ce67e;
extern "C" unsigned long g_006ce680;
extern "C" unsigned long g_006ce68c;
extern "C" unsigned long g_006ce6a8;
extern "C" unsigned long g_006ce6ac;
extern "C" unsigned long g_006ce6b0;
extern "C" unsigned long g_006ce6b4;
extern "C" unsigned long g_006ce6ca;
extern "C" unsigned long g_006ce6ce;
extern "C" unsigned long g_006ce6d0;
extern "C" unsigned long g_006ce6dc;
extern "C" unsigned long g_006ce700;
extern "C" unsigned long g_006ce704;
extern "C" unsigned long g_006ce708;
extern "C" unsigned long g_006ce70c;
extern "C" unsigned long g_006ce750;
extern "C" unsigned long g_006ce754;
extern "C" unsigned long g_006ce758;
extern "C" unsigned long g_006ce75c;
extern "C" unsigned long g_006ce7d0;
extern "C" unsigned long g_006ce7d4;
extern "C" unsigned long g_006ce7d8;
extern "C" unsigned long g_006ce7dc;
extern "C" unsigned long g_006ce7e0;
extern "C" unsigned long g_006ce824;
extern "C" unsigned long g_006ce828;
extern "C" unsigned long g_006ce82c;
extern "C" unsigned long g_006ce830;
extern "C" unsigned long g_006ce8a4;
extern "C" unsigned long g_006ce8a8;
extern "C" unsigned long g_006ce8ac;
extern "C" unsigned long g_006ce8b0;
extern "C" unsigned long g_006ce8b4;
extern "C" unsigned long g_006ce8c0;
extern "C" unsigned long g_006ce8d4;
extern "C" unsigned long g_006ce8d8;
extern "C" unsigned long g_006ce8da;
extern "C" unsigned long g_006ce8f4;
extern "C" unsigned long g_006ce8fe;
extern "C" unsigned long g_006ce910;
extern "C" unsigned long g_006ce912;
extern "C" unsigned long g_006ce914;
extern "C" unsigned long g_006ce944;
extern "C" unsigned long g_006ce970;
extern "C" unsigned long g_006ce974;
extern "C" unsigned long g_006ce978;
extern "C" unsigned long g_006ce97c;
extern "C" unsigned long g_006ce980;
extern "C" unsigned long g_006ce984;
extern "C" unsigned long g_006ce988;
extern "C" unsigned long g_006ce98c;
extern "C" unsigned long g_006ce990;
extern "C" unsigned long g_006ce994;
extern "C" unsigned long g_006ce9a8;
extern "C" unsigned long g_006ce9aa;
extern "C" unsigned long g_006ce9ac;
extern "C" unsigned long g_006ce9b8;
extern "C" unsigned long g_006ce9d0;
extern "C" unsigned long g_006ce9d4;
extern "C" unsigned long g_006ce9d8;
extern "C" unsigned long g_006ce9dc;
extern "C" unsigned long g_006ce9f2;
extern "C" unsigned long g_006ce9f6;
extern "C" unsigned long g_006ce9f8;
extern "C" unsigned long g_006cea04;
extern "C" unsigned long g_006cea54;
extern "C" unsigned long g_006cea58;
extern "C" unsigned long g_006cea5c;
extern "C" unsigned long g_006cea60;
extern "C" unsigned long g_006cea74;
extern "C" unsigned long g_006cea76;
extern "C" unsigned long g_006cea78;
extern "C" unsigned long g_006cea8c;
extern "C" unsigned long g_006cea90;
extern "C" unsigned long g_006cea94;
extern "C" unsigned long g_006ceaa8;
extern "C" unsigned long g_006ceaaa;
extern "C" unsigned long g_006ceaac;
extern "C" unsigned long g_006ceab8;
extern "C" unsigned long g_006ceacc;
extern "C" unsigned long g_006cead0;
extern "C" unsigned long g_006cead4;
extern "C" unsigned long g_006cead8;
extern "C" unsigned long g_006ceadc;
extern "C" unsigned long g_006ceae0;
extern "C" unsigned long g_006ceb80;
extern "C" unsigned long g_006ceb84;
extern "C" unsigned long g_006ceb86;
extern "C" unsigned long g_006ceb9c;
extern "C" unsigned long g_006ceba0;
extern "C" unsigned long g_006ceba4;


void PlatformHelp::adInit()
{
  return;
}

void PlatformHelp::showAdMob()
{
  return;
}


void PlatformHelp::removeAdmob()
{
  return;
}







undefined4 PlatformHelp::isIOS()
{
  return 0;
}

void PlatformHelp::loginGameCenter()
{
  return;
}

void PlatformHelp::reportScore(int p1, char const* p2)
{
  return;
}

undefined4 PlatformHelp::getCurrentRank()
{
  return 1;
}

void PlatformHelp::deleteFileByName(char const* p1)
{
  return;
}




void PlatformHelp::copyFileToPath(char const* p1, char const* p2)
{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined1 auStack_24 [4];
  undefined4 uStack_20;
  undefined1 auStack_1c [8];
  
  uStack_20 = (undefined4)(0);
  piVar2 = (int *)cocos2d::CCFileUtils::sharedFileUtils();
  iVar3 = (**(code **)(*piVar2 + 0x10))(piVar2,((int)this),((intptr_t)"rb"),&uStack_20);
  uVar1 = (undefined4)(uStack_20);
  func_0079e45c(auStack_1c,p1,auStack_24);
  PlatformHelp::writeTofile((char*)iVar3, uVar1, (std::string)(char*)auStack_1c);
  func_0079e2bc(auStack_1c);
  if (iVar3 != 0) {
    (void)(::operator delete[]((void *)(iVar3)));
  }
  return;
}

void PlatformHelp::showCamera()
{
  return;
}

void PlatformHelp::showAlbum()
{
  return;
}






void PlatformHelp::getRunningProcesses()
{
  return;
}










void PlatformHelp::initDomob()
{
  return;
}

void PlatformHelp::showFreeDiamond()
{
  return;
}






void PlatformHelp::disConnetScuess()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((BluetoothHelper *)this)->share());
  ((BluetoothHelper *)uVar1)->setIsBlueFight(0);
  ((BluetoothHelper *)this)->share();
  ((BluetoothHelper *)this)->disConnetScuess();
  return;
}

// ===== 修复: 补回被误删的函数占位 (51) =====
void PlatformHelp::showShareSocialView(char const* p1, char const* p2)
{
  undefined4 p4 = 0;

  int iVar1;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_14 = (undefined4)(p1);
  uStack_10 = (undefined4)(p2);
  uStack_c = (undefined4)(p4);
  iVar1 = (undefined4)(intptr_t)(cocos2d::JniHelper::getStaticMethodInfo(*(cocos2d::JniMethodInfo *)&uStack_14, (char const*)(unsigned char *)((char *)&g_006cda0c + (intptr_t)(g_006cda24)), (char const*)(unsigned char *)((char *)&g_006cda0e + (intptr_t)(g_006cda28)), (char const*)(unsigned char *)((char *)&g_006cda10 + (intptr_t)(g_006cda2c))));
  if (iVar1 != 0) {
    ((_JNIEnv *)this)->CallStaticVoidMethod((_jclass*)uStack_14, (_jmethodID*)uStack_10, uStack_c);
  }
  return;
}

void PlatformHelp::showShareSocialViewWithScreen(char const* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

undefined4 PlatformHelp::getLocalLanguage(char const* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void PlatformHelp::gotoAppstoreRating()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void PlatformHelp::showInter()
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
  iVar1 = (undefined4)(intptr_t)(cocos2d::JniHelper::getStaticMethodInfo(*(cocos2d::JniMethodInfo *)&uStack_14, (char const*)(unsigned char *)((char *)&g_006cdadc + (intptr_t)(g_006cdaf4)), (char const*)(unsigned char *)((char *)&g_006cdade + (intptr_t)(g_006cdaf8)), (char const*)(unsigned char *)((char *)&g_006cdae0 + (intptr_t)(g_006cdafc))));
  if (iVar1 != 0) {
    ((_JNIEnv *)this)->CallStaticVoidMethod((_jclass*)uStack_14, (_jmethodID*)uStack_10, uStack_c);
  }
  return;
}

void PlatformHelp::showLenovoBanner(char const* p1)
{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iVar1 = (undefined4)(intptr_t)(cocos2d::JniHelper::getStaticMethodInfo(*(cocos2d::JniMethodInfo *)&uStack_1c, (char const*)(unsigned char *)((char *)&g_006cdb16 + (intptr_t)(g_006cdb3c)), (char const*)(unsigned char *)((char *)&g_006cdb1a + (intptr_t)(g_006cdb40)), (char const*)(unsigned char *)((char *)&g_006cdb1c + (intptr_t)(g_006cdb44))));
  if (iVar1 != 0) {
    uVar2 = (undefined4)(((_JNIEnv *)uStack_1c)->NewStringUTF((char const*)((int)this)));
    ((_JNIEnv *)uStack_1c)->CallStaticVoidMethod((_jclass*)uStack_18, (_jmethodID*)uStack_14, uVar2);
  }
  return;
}

void PlatformHelp::hideLenovoBanner()
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
  iVar1 = (undefined4)(intptr_t)(cocos2d::JniHelper::getStaticMethodInfo(*(cocos2d::JniMethodInfo *)&uStack_14, (char const*)((intptr_t)"com/DBGame/Common/BLHelper"), (char const*)((intptr_t)"hideBanner"), (char const*)((intptr_t)"()V")));
  if (iVar1 != 0) {
    ((_JNIEnv *)this)->CallStaticVoidMethod((_jclass*)uStack_14, (_jmethodID*)uStack_10, uStack_c);
  }
  return;
}

void PlatformHelp::showLenovoInterAD(char const* p1)
{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iVar1 = (undefined4)(intptr_t)(cocos2d::JniHelper::getStaticMethodInfo(*(cocos2d::JniMethodInfo *)&uStack_1c, (char const*)(unsigned char *)((char *)&g_006cdb8e + (intptr_t)(g_006cdbb4)), (char const*)(unsigned char *)((char *)&g_006cdb92 + (intptr_t)(g_006cdbb8)), (char const*)(unsigned char *)((char *)&g_006cdb94 + (intptr_t)(g_006cdbbc))));
  if (iVar1 != 0) {
    uVar2 = (undefined4)(((_JNIEnv *)uStack_1c)->NewStringUTF((char const*)((int)this)));
    ((_JNIEnv *)uStack_1c)->CallStaticVoidMethod((_jclass*)uStack_18, (_jmethodID*)uStack_14, uVar2);
  }
  return;
}

void PlatformHelp::closeLenovoInterAD()
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
  iVar1 = (undefined4)(intptr_t)(cocos2d::JniHelper::getStaticMethodInfo(*(cocos2d::JniMethodInfo *)&uStack_14, (char const*)(unsigned char *)((char *)&g_006cdbd0 + (intptr_t)(g_006cdbe8)), (char const*)(unsigned char *)((char *)&g_006cdbd2 + (intptr_t)(g_006cdbec)), (char const*)(unsigned char *)((char *)&g_006cdbd4 + (intptr_t)(g_006cdbf0))));
  if (iVar1 != 0) {
    ((_JNIEnv *)this)->CallStaticVoidMethod((_jclass*)uStack_14, (_jmethodID*)uStack_10, uStack_c);
  }
  return;
}

void PlatformHelp::showLargeBannerAD(char const* p1)
{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  iVar1 = (undefined4)(intptr_t)(cocos2d::JniHelper::getStaticMethodInfo(*(cocos2d::JniMethodInfo *)&uStack_24, (char const*)(unsigned char *)((char *)&g_006cdc06 + (intptr_t)(g_006cdc30)), (char const*)(unsigned char *)((char *)&g_006cdc0a + (intptr_t)(g_006cdc34)), (char const*)(unsigned char *)((char *)&g_006cdc0c + (intptr_t)(g_006cdc38))));
  if (iVar1 != 0) {
    uVar2 = (undefined4)(((long long)::atoi((const char *)(((int)this)))));
    ((_JNIEnv *)uStack_24)->CallStaticVoidMethod((_jclass*)uStack_20, (_jmethodID*)uStack_1c, uVar2);
  }
  return;
}

void PlatformHelp::showTopBannerAD(char const* p1)
{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iVar1 = (undefined4)(intptr_t)(cocos2d::JniHelper::getStaticMethodInfo(*(cocos2d::JniMethodInfo *)&uStack_1c, (char const*)(unsigned char *)((char *)&g_006cdc4e + (intptr_t)(g_006cdc74)), (char const*)(unsigned char *)((char *)&g_006cdc52 + (intptr_t)(g_006cdc78)), (char const*)(unsigned char *)((char *)&g_006cdc54 + (intptr_t)(g_006cdc7c))));
  if (iVar1 != 0) {
    uVar2 = (undefined4)(((_JNIEnv *)uStack_1c)->NewStringUTF((char const*)((int)this)));
    ((_JNIEnv *)uStack_1c)->CallStaticVoidMethod((_jclass*)uStack_18, (_jmethodID*)uStack_14, uVar2);
  }
  return;
}

void PlatformHelp::showGameRank()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void PlatformHelp::copyFileToPathAndEncryption(char const* p1, char const* p2, char const* p3)
{
  int *piVar1;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  uStack_1c = (undefined4)(p1);
  uStack_18 = (undefined4)(p2);
  piVar1 = (int *)cocos2d::CCFileUtils::sharedFileUtils();
  (**(code **)(*piVar1 + 0x18))(&uStack_1c,piVar1,((int)this));
  cocos2d::CCMessageBox((char const*)uStack_1c, (char const*)uStack_1c);
  ((BLFileUtils *)this)->encodeFileByXOR((char const*)uStack_1c, (char const*)p1, (char const*)p2);
  func_0079e2bc(&uStack_1c);
  return;
}

void PlatformHelp::copyFileToPathAndDecrypt(char const* p1, char const* p2, char const* p3)
{
  int *piVar1;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  uStack_1c = (undefined4)(p1);
  uStack_18 = (undefined4)(p2);
  piVar1 = (int *)cocos2d::CCFileUtils::sharedFileUtils();
  (**(code **)(*piVar1 + 0x18))(&uStack_1c,piVar1,((int)this));
  ((BLFileUtils *)this)->encodeFileByXOR((char const*)uStack_1c, (char const*)p1, (char const*)p2);
  func_0079e2bc(&uStack_1c);
  return;
}

void PlatformHelp::writeTofile(char* p1, int p2, std::string p3)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

int * PlatformHelp::getAppVersion()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return nullptr;
}

int * PlatformHelp::getMD5(char const* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return nullptr;
}

int * PlatformHelp::ConvertStringFromUTF8ToURL(char const* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return nullptr;
}

int * PlatformHelp::getAppEmChannel()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return nullptr;
}

int * PlatformHelp::getVersionRelease()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return nullptr;
}

bool PlatformHelp::isHaveSpecialCharacters(char const* p1)
{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iVar1 = (undefined4)(intptr_t)(cocos2d::JniHelper::getStaticMethodInfo(*(cocos2d::JniMethodInfo *)&uStack_1c, (char const*)(unsigned char *)((char *)&g_006ce09c + (intptr_t)(g_006ce0c8)), (char const*)(unsigned char *)((char *)&g_006ce0a0 + (intptr_t)(g_006ce0cc)), (char const*)(unsigned char *)((char *)&g_006ce098 + (intptr_t)(g_006ce0d0))));
  bVar3 = (undefined4)(intptr_t)(true);
  if (iVar1 != 0) {
    uVar2 = (undefined4)(((_JNIEnv *)uStack_1c)->NewStringUTF((char const*)((int)this)));
    iVar1 = (undefined4)(intptr_t)(((_JNIEnv *)uStack_1c)->CallStaticBooleanMethod((_jclass*)uStack_18, (_jmethodID*)uStack_14, uVar2));
    bVar3 = (undefined4)(intptr_t)(iVar1 != 0);
  }
  return bVar3;
}

void PlatformHelp::getSimData()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void PlatformHelp::isCrack()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

undefined4 PlatformHelp::getDeviceID()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

undefined4 PlatformHelp::getMacID()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

undefined4 PlatformHelp::getAppKey()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void PlatformHelp::reyunexit()
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
  iVar1 = (undefined4)(intptr_t)(cocos2d::JniHelper::getStaticMethodInfo(*(cocos2d::JniMethodInfo *)&uStack_14, (char const*)(unsigned char *)((char *)&g_006ce2b8 + (intptr_t)(g_006ce2d0)), (char const*)(unsigned char *)((char *)&g_006ce2ba + (intptr_t)(g_006ce2d4)), (char const*)(unsigned char *)((char *)&g_006ce2bc + (intptr_t)(g_006ce2d8))));
  if (iVar1 != 0) {
    ((_JNIEnv *)this)->CallStaticVoidMethod((_jclass*)uStack_14, (_jmethodID*)uStack_10, uStack_c);
  }
  return;
}

void PlatformHelp::backButtonPromptShow()
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
  iVar1 = (undefined4)(intptr_t)(cocos2d::JniHelper::getStaticMethodInfo(*(cocos2d::JniMethodInfo *)&uStack_14, (char const*)(unsigned char *)((char *)&g_006ce2ec + (intptr_t)(g_006ce304)), (char const*)(unsigned char *)((char *)&g_006ce2ee + (intptr_t)(g_006ce308)), (char const*)(unsigned char *)((char *)&g_006ce2f0 + (intptr_t)(g_006ce30c))));
  if (iVar1 != 0) {
    ((_JNIEnv *)this)->CallStaticVoidMethod((_jclass*)uStack_14, (_jmethodID*)uStack_10, uStack_c);
  }
  return;
}

void PlatformHelp::getExchangePay()
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
  iVar1 = (undefined4)(intptr_t)(cocos2d::JniHelper::getStaticMethodInfo(*(cocos2d::JniMethodInfo *)&uStack_14, (char const*)(unsigned char *)((char *)&g_006ce320 + (intptr_t)(g_006ce338)), (char const*)(unsigned char *)((char *)&g_006ce322 + (intptr_t)(g_006ce33c)), (char const*)(unsigned char *)((char *)&g_006ce324 + (intptr_t)(g_006ce340))));
  if (iVar1 != 0) {
    ((_JNIEnv *)this)->CallStaticVoidMethod((_jclass*)uStack_14, (_jmethodID*)uStack_10, uStack_c);
  }
  return;
}

void PlatformHelp::copyCode(std::string p1)
{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iVar1 = (undefined4)(intptr_t)(cocos2d::JniHelper::getStaticMethodInfo(*(cocos2d::JniMethodInfo *)&uStack_1c, (char const*)(unsigned char *)((char *)&g_006ce356 + (intptr_t)(g_006ce37c)), (char const*)(unsigned char *)((char *)&g_006ce35a + (intptr_t)(g_006ce380)), (char const*)(unsigned char *)((char *)&g_006ce35c + (intptr_t)(g_006ce384))));
  if (iVar1 != 0) {
    uVar2 = (undefined4)(((_JNIEnv *)uStack_1c)->NewStringUTF((char const*)*(int *)this));
    ((_JNIEnv *)uStack_1c)->CallStaticVoidMethod((_jclass*)uStack_18, (_jmethodID*)uStack_14, uVar2);
  }
  return;
}

void PlatformHelp::charge(std::string p1)
{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iVar1 = (undefined4)(intptr_t)(cocos2d::JniHelper::getStaticMethodInfo(*(cocos2d::JniMethodInfo *)&uStack_1c, (char const*)((intptr_t)"com/DBGame/Common/BLHelper"), (char const*)((intptr_t)"purchase"), (char const*)((intptr_t)"(Ljava/lang/String;)V")));
  if (iVar1 != 0) {
    uVar2 = (undefined4)(((_JNIEnv *)uStack_1c)->NewStringUTF((char const*)*(int *)this));
    ((_JNIEnv *)uStack_1c)->CallStaticVoidMethod((_jclass*)uStack_18, (_jmethodID*)uStack_14, uVar2);
  }
  return;
}

void PlatformHelp::earnDiamond(long long p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void PlatformHelp::setBuyCompleteID(char const* p1)
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
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  pcVar2 = *(code **)(*piVar1 + 0xa4);
  func_0079e45c(&uStack_1c,((int)this),&uStack_20);
  (*pcVar2)(piVar1,&uStack_1c);
  func_0079e2bc(&uStack_1c);
  return;
}

void PlatformHelp::bluetoothLink()
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
  iVar1 = (undefined4)(intptr_t)(cocos2d::JniHelper::getStaticMethodInfo(*(cocos2d::JniMethodInfo *)&uStack_14, (char const*)((intptr_t)"com/DBGame/Common/BLHelper"), (char const*)((intptr_t)"onBluetoothClient"), (char const*)((intptr_t)"()V")));
  if (iVar1 != 0) {
    ((_JNIEnv *)this)->CallStaticVoidMethod((_jclass*)uStack_14, (_jmethodID*)uStack_10, uStack_c);
  }
  return;
}

void PlatformHelp::bluetoothHost()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;
  undefined4 p4 = 0;

  undefined4 uVar1;
  int iVar2;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_14 = (undefined4)(p2);
  uStack_10 = (undefined4)(p3);
  uStack_c = (undefined4)(p4);
  uVar1 = (undefined4)(((BluetoothHelper *)this)->share());
  ((BluetoothHelper *)uVar1)->setIsHost(1);
  iVar2 = (undefined4)(intptr_t)(cocos2d::JniHelper::getStaticMethodInfo(*(cocos2d::JniMethodInfo *)&uStack_14, (char const*)((intptr_t)"com/DBGame/Common/BLHelper"), (char const*)((intptr_t)"onBluetoothHost"), (char const*)((intptr_t)"()V")));
  if (iVar2 != 0) {
    ((_JNIEnv *)this)->CallStaticVoidMethod((_jclass*)uStack_14, (_jmethodID*)uStack_10, uStack_c);
  }
  return;
}

void PlatformHelp::sendBluetoothData(char const* p1)
{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iVar1 = (undefined4)(intptr_t)(cocos2d::JniHelper::getStaticMethodInfo(*(cocos2d::JniMethodInfo *)&uStack_1c, (char const*)((intptr_t)"com/DBGame/Common/BLHelper"), (char const*)((intptr_t)"sendData"), (char const*)((intptr_t)"(Ljava/lang/String;)V")));
  if (iVar1 == 0) {
    cocos2d::CCLog((char const*)"jni->/callJni:此函数不存在");
  }
  else {
    uVar2 = (undefined4)(((_JNIEnv *)uStack_1c)->NewStringUTF((char const*)((int)this)));
    ((_JNIEnv *)uStack_1c)->CallStaticVoidMethod((_jclass*)uStack_18, (_jmethodID*)uStack_14, uVar2);
  }
  return;
}

void PlatformHelp::bluetoothDisconnect()
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
  iVar1 = (undefined4)(intptr_t)(cocos2d::JniHelper::getStaticMethodInfo(*(cocos2d::JniMethodInfo *)&uStack_14, (char const*)((intptr_t)"com/DBGame/Common/BLHelper"), (char const*)((intptr_t)"onBluetoothDisconnect"), (char const*)((intptr_t)"()V")));
  if (iVar1 != 0) {
    ((_JNIEnv *)this)->CallStaticVoidMethod((_jclass*)uStack_14, (_jmethodID*)uStack_10, uStack_c);
  }
  PlatformHelp::disConnetScuess();
  return;
}

void PlatformHelp::openUrlFanKui(int p1)
{
  int iVar1;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iVar1 = (undefined4)(intptr_t)(cocos2d::JniHelper::getStaticMethodInfo(*(cocos2d::JniMethodInfo *)&uStack_1c, (char const*)(unsigned char *)((char *)&g_006ce67a + (intptr_t)(g_006ce6a8)), (char const*)(unsigned char *)((char *)&g_006ce67e + (intptr_t)(g_006ce6ac)), (char const*)(unsigned char *)((char *)&g_006ce680 + (intptr_t)(g_006ce6b0))));
  if (iVar1 == 0) {
    cocos2d::CCLog((char const*)(unsigned char *)((char *)&g_006ce68c + (intptr_t)(g_006ce6b4)));
  }
  else {
    ((_JNIEnv *)uStack_1c)->CallStaticVoidMethod((_jclass*)uStack_18, (_jmethodID*)uStack_14, ((int)this))
    ;
  }
  ((_JNIEnv *)uStack_1c)->DeleteLocalRef((_jobject*)uStack_18);
  return;
}

void PlatformHelp::openHuaWeiShop(char const* p1)
{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iVar1 = (undefined4)(intptr_t)(cocos2d::JniHelper::getStaticMethodInfo(*(cocos2d::JniMethodInfo *)&uStack_1c, (char const*)(unsigned char *)((char *)&g_006ce6ca + (intptr_t)(g_006ce700)), (char const*)(unsigned char *)((char *)&g_006ce6ce + (intptr_t)(g_006ce704)), (char const*)(unsigned char *)((char *)&g_006ce6d0 + (intptr_t)(g_006ce708))));
  if (iVar1 == 0) {
    cocos2d::CCLog((char const*)(unsigned char *)((char *)&g_006ce6dc + (intptr_t)(g_006ce70c)));
  }
  else {
    uVar2 = (undefined4)(((_JNIEnv *)uStack_1c)->NewStringUTF((char const*)((int)this)));
    ((_JNIEnv *)uStack_1c)->CallStaticVoidMethod((_jclass*)uStack_18, (_jmethodID*)uStack_14, uVar2);
  }
  ((_JNIEnv *)uStack_1c)->DeleteLocalRef((_jobject*)uStack_18);
  return;
}

undefined4 PlatformHelp::CheckNet()
{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iVar1 = (undefined4)(intptr_t)(cocos2d::JniHelper::getStaticMethodInfo(*(cocos2d::JniMethodInfo *)&uStack_1c, (char const*)((intptr_t)"com/DBGame/Common/BLHelper"), (char const*)((intptr_t)"CheckNetWork"), (char const*)((intptr_t)"()I")));
  if (iVar1 == 0) {
    cocos2d::CCLog((char const*)"java层doReactive 函数不存在;");
    uVar2 = (undefined4)(0);
  }
  else {
    uVar2 = (undefined4)(((_JNIEnv *)this)->CallStaticIntMethod((_jclass*)uStack_1c, (_jmethodID*)uStack_18, uStack_14));
  }
  ((_JNIEnv *)uStack_1c)->DeleteLocalRef((_jobject*)uStack_18);
  return uVar2;
}

undefined4 PlatformHelp::getICCID()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

undefined4 PlatformHelp::GetUniCom()
{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iVar1 = (undefined4)(intptr_t)(cocos2d::JniHelper::getStaticMethodInfo(*(cocos2d::JniMethodInfo *)&uStack_1c, (char const*)((intptr_t)"com/DBGame/Common/BLHelper"), (char const*)((intptr_t)"GetUniCom"), (char const*)((intptr_t)"()I")));
  if (iVar1 == 0) {
    cocos2d::CCLog((char const*)"java层doReactive 函数不存在;");
    uVar2 = (undefined4)(0);
  }
  else {
    uVar2 = (undefined4)(((_JNIEnv *)this)->CallStaticIntMethod((_jclass*)uStack_1c, (_jmethodID*)uStack_18, uStack_14));
  }
  ((_JNIEnv *)uStack_1c)->DeleteLocalRef((_jobject*)uStack_18);
  return uVar2;
}

int * PlatformHelp::getAPPSecretString()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return nullptr;
}

undefined4 PlatformHelp::getSecretString()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void PlatformHelp::openUrlHuoJiang()
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
  iVar1 = (undefined4)(intptr_t)(cocos2d::JniHelper::getStaticMethodInfo(*(cocos2d::JniMethodInfo *)&uStack_14, (char const*)(unsigned char *)((char *)&g_006ce9a8 + (intptr_t)(g_006ce9d0)), (char const*)(unsigned char *)((char *)&g_006ce9aa + (intptr_t)(g_006ce9d4)), (char const*)(unsigned char *)((char *)&g_006ce9ac + (intptr_t)(g_006ce9d8))));
  if (iVar1 == 0) {
    cocos2d::CCLog((char const*)(unsigned char *)((char *)&g_006ce9b8 + (intptr_t)(g_006ce9dc)));
  }
  else {
    ((_JNIEnv *)this)->CallStaticVoidMethod((_jclass*)uStack_14, (_jmethodID*)uStack_10, uStack_c);
  }
  ((_JNIEnv *)uStack_14)->DeleteLocalRef((_jobject*)uStack_10);
  return;
}

void PlatformHelp::opensumbiturl(std::string const& p1)
{
  int iVar1;
  undefined4 uVar2;
  int *piStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iVar1 = (undefined4)(intptr_t)(cocos2d::JniHelper::getStaticMethodInfo(*(cocos2d::JniMethodInfo *)&piStack_1c, (char const*)(unsigned char *)((char *)&g_006ce9f2 + (intptr_t)(g_006cea54)), (char const*)(unsigned char *)((char *)&g_006ce9f6 + (intptr_t)(g_006cea58)), (char const*)(unsigned char *)((char *)&g_006ce9f8 + (intptr_t)(g_006cea5c))));
  if (iVar1 != 0) {
    cocos2d::CCLog((char const*)(unsigned char *)((char *)&g_006cea04 + (intptr_t)(g_006cea60)));
    uVar2 = (undefined4)((**(code **)(*piStack_1c + 0x2c0))(piStack_1c,*(undefined4 *)(*(int *)this + -0xc)));
    (**(code **)(*piStack_1c + 0x340))(piStack_1c,uVar2,0,*(undefined4 *)(*(int *)this + -0xc),*(int *)this)
    ;
    ((_JNIEnv *)piStack_1c)->CallStaticVoidMethod((_jclass*)uStack_18, (_jmethodID*)uStack_14, uVar2);
    ((_JNIEnv *)piStack_1c)->DeleteLocalRef((_jobject*)uVar2);
    ((_JNIEnv *)piStack_1c)->DeleteLocalRef((_jobject*)uStack_18);
  }
  return;
}

void PlatformHelp::showAD()
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
  iVar1 = (undefined4)(intptr_t)(cocos2d::JniHelper::getStaticMethodInfo(*(cocos2d::JniMethodInfo *)&uStack_14, (char const*)(unsigned char *)((char *)&g_006cea74 + (intptr_t)(g_006cea8c)), (char const*)(unsigned char *)((char *)&g_006cea76 + (intptr_t)(g_006cea90)), (char const*)(unsigned char *)((char *)&g_006cea78 + (intptr_t)(g_006cea94))));
  if (iVar1 != 0) {
    ((_JNIEnv *)this)->CallStaticVoidMethod((_jclass*)uStack_14, (_jmethodID*)uStack_10, uStack_c);
  }
  return;
}

void PlatformHelp::getMore()
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
  iVar1 = (undefined4)(intptr_t)(cocos2d::JniHelper::getStaticMethodInfo(*(cocos2d::JniMethodInfo *)&uStack_14, (char const*)(unsigned char *)((char *)&g_006ceaa8 + (intptr_t)(g_006cead0)), (char const*)(unsigned char *)((char *)&g_006ceaaa + (intptr_t)(g_006cead4)), (char const*)(unsigned char *)((char *)&g_006ceaac + (intptr_t)(g_006cead8))));
  if (iVar1 == 0) {
    cocos2d::CCLog((char const*)(unsigned char *)((char *)&g_006ceacc + (intptr_t)(g_006ceae0)));
  }
  else {
    cocos2d::CCLog((char const*)(unsigned char *)((char *)&g_006ceab8 + (intptr_t)(g_006ceadc)));
    ((_JNIEnv *)this)->CallStaticObjectMethod((_jclass*)uStack_14, (_jmethodID*)uStack_10, uStack_c);
  }
  return;
}

void PlatformHelp::blueConnetScuess()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

undefined8 PlatformHelp::receiveBluetoothData(char const* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void PlatformHelp::purchaseMonthlyContract(int p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
