#include "CarSetPresenter.h"
#include "CCGeometry.h"
#include "CCScrollView.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "CCNotificationCenter.h"
#include "CarSetView.h"
#include "CCObject.h"
#include "CCTouch.h"
#include "CCDirector.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BuyCountPresenter.h"
#include "BuyCountView.h"
#include "CarHttpUtil.h"
#include "DataManager.h"
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
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2dc(...);
extern "C" long long func_0079e2ec(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e34c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4bc(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e5bc(...);
extern "C" long long func_0079e734(...);
extern "C" long long func_0079e794(...);
extern "C" long long ghidra_CONCAT13(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_006beef0;
extern "C" unsigned long UNK_006bef08;
extern "C" unsigned long UNK_006bef20;
extern "C" unsigned long UNK_006bef38;
extern "C" unsigned long UNK_006befcc;
extern "C" unsigned long UNK_006bf024;
extern "C" unsigned long UNK_006bf06c;
extern "C" unsigned long UNK_006bf086;
extern "C" unsigned long UNK_006bf0e0;
extern "C" unsigned long UNK_006bf108;
extern "C" unsigned long UNK_006bf11e;
extern "C" unsigned long UNK_006bf15c;
extern "C" unsigned long UNK_006bf1b4;
extern "C" unsigned long UNK_006bf1bc;
extern "C" unsigned long UNK_006bf1de;
extern "C" unsigned long UNK_006bf1fa;
extern "C" unsigned long UNK_006bf22e;
extern "C" unsigned long UNK_006bf24a;
extern "C" unsigned long UNK_006bf2f4;
extern "C" unsigned long UNK_006bf31a;
extern "C" unsigned long UNK_006bf33e;
extern "C" unsigned long UNK_006bf3bc;
extern "C" unsigned long UNK_006bf57a;
extern "C" unsigned long UNK_006bf5c4;
extern "C" unsigned long UNK_006bf5e2;
extern "C" unsigned long UNK_006bf600;
extern "C" unsigned long UNK_006bf678;
extern "C" unsigned long UNK_006bf696;
extern "C" unsigned long UNK_006bf6ec;
extern "C" unsigned long UNK_006bf8ca;
extern "C" unsigned long UNK_006bfa6a;
extern "C" unsigned long UNK_006bfd80;
extern "C" unsigned long UNK_006bfefc;
extern "C" unsigned long UNK_006c0230;
extern "C" unsigned long UNK_006c03ae;
extern "C" unsigned long UNK_006c06e0;
extern "C" unsigned long UNK_006c085e;
extern "C" unsigned long UNK_006c09fe;
extern "C" unsigned long UNK_006c101e;
extern "C" unsigned long UNK_006c102c;
extern "C" unsigned long UNK_006c1046;
extern "C" unsigned long UNK_006c1052;
extern "C" unsigned long UNK_006c105e;
extern "C" unsigned long UNK_006c1096;
extern "C" unsigned long UNK_006c10a4;
extern "C" unsigned long UNK_006c10b0;
extern "C" unsigned long UNK_006c10bc;
extern "C" unsigned long UNK_006c10fe;
extern "C" unsigned long UNK_006c110c;
extern "C" unsigned long UNK_006c1118;
extern "C" unsigned long UNK_006c1124;
extern "C" unsigned long UNK_006c1172;
extern "C" unsigned long UNK_006c117e;
extern "C" unsigned long UNK_006c118a;
extern "C" unsigned long UNK_006c11ce;
extern "C" unsigned long UNK_006c11de;
extern "C" unsigned long UNK_006c11ea;
extern "C" unsigned long UNK_006c11f6;
extern "C" unsigned long UNK_006c147a;
extern "C" unsigned long UNK_006c1554;
extern "C" unsigned long UNK_006c156c;
extern "C" unsigned long UNK_006c158e;
extern "C" unsigned long UNK_006c163a;
extern "C" unsigned long UNK_006c1662;
extern "C" unsigned long _UNK_006beef4;
extern "C" unsigned long _UNK_006bef0c;
extern "C" unsigned long _UNK_006bef24;
extern "C" unsigned long _UNK_006bef3c;
extern "C" unsigned long _UNK_006befbc;
extern "C" unsigned long _UNK_006befdc;
extern "C" unsigned long _UNK_006befe0;
extern "C" unsigned long _UNK_006bf010;
extern "C" unsigned long _UNK_006bf060;
extern "C" unsigned long _UNK_006bf0cc;
extern "C" unsigned long _UNK_006bf0d0;
extern "C" unsigned long _UNK_006bf0e4;
extern "C" unsigned long _UNK_006bf10c;
extern "C" unsigned long _UNK_006bf198;
extern "C" unsigned long _UNK_006bf19c;
extern "C" unsigned long _UNK_006bf254;
extern "C" unsigned long _UNK_006bf258;
extern "C" unsigned long _UNK_006bf25c;
extern "C" unsigned long _UNK_006bf260;
extern "C" unsigned long _UNK_006bf264;
extern "C" unsigned long _UNK_006bf268;
extern "C" unsigned long _UNK_006bf26c;
extern "C" unsigned long _UNK_006bf270;
extern "C" unsigned long _UNK_006bf274;
extern "C" unsigned long _UNK_006bf278;
extern "C" unsigned long _UNK_006bf27c;
extern "C" unsigned long _UNK_006bf280;
extern "C" unsigned long _UNK_006bf354;
extern "C" unsigned long _UNK_006bf358;
extern "C" unsigned long _UNK_006bf35c;
extern "C" unsigned long _UNK_006bf3c8;
extern "C" unsigned long _UNK_006bf6ac;
extern "C" unsigned long _UNK_006bf6b0;
extern "C" unsigned long _UNK_006bf6b4;
extern "C" unsigned long _UNK_006bf6b8;
extern "C" unsigned long _UNK_006bf6bc;
extern "C" unsigned long _UNK_006bf6c0;
extern "C" unsigned long _UNK_006bf6c4;
extern "C" unsigned long _UNK_006bf6c8;
extern "C" unsigned long _UNK_006bf6cc;
extern "C" unsigned long _UNK_006bf6d0;
extern "C" unsigned long _UNK_006bf6d4;
extern "C" unsigned long _UNK_006bf6d8;
extern "C" unsigned long _UNK_006bf6dc;
extern "C" unsigned long _UNK_006bfa2c;
extern "C" unsigned long _UNK_006bfa30;
extern "C" unsigned long _UNK_006bfa34;
extern "C" unsigned long _UNK_006bfa38;
extern "C" unsigned long _UNK_006bfa3c;
extern "C" unsigned long _UNK_006bfa40;
extern "C" unsigned long _UNK_006bfa44;
extern "C" unsigned long _UNK_006bfa48;
extern "C" unsigned long _UNK_006bfbe4;
extern "C" unsigned long _UNK_006bfbe8;
extern "C" unsigned long _UNK_006bfbec;
extern "C" unsigned long _UNK_006bfbf0;
extern "C" unsigned long _UNK_006c0034;
extern "C" unsigned long _UNK_006c0038;
extern "C" unsigned long _UNK_006c003c;
extern "C" unsigned long _UNK_006c0040;
extern "C" unsigned long _UNK_006c0044;
extern "C" unsigned long _UNK_006c0048;
extern "C" unsigned long _UNK_006c004c;
extern "C" unsigned long _UNK_006c0050;
extern "C" unsigned long _UNK_006c0054;
extern "C" unsigned long _UNK_006c0058;
extern "C" unsigned long _UNK_006c005c;
extern "C" unsigned long _UNK_006c04e4;
extern "C" unsigned long _UNK_006c04e8;
extern "C" unsigned long _UNK_006c04ec;
extern "C" unsigned long _UNK_006c04f0;
extern "C" unsigned long _UNK_006c04f4;
extern "C" unsigned long _UNK_006c04f8;
extern "C" unsigned long _UNK_006c04fc;
extern "C" unsigned long _UNK_006c0500;
extern "C" unsigned long _UNK_006c0504;
extern "C" unsigned long _UNK_006c0508;
extern "C" unsigned long _UNK_006c050c;
extern "C" unsigned long _UNK_006c09b4;
extern "C" unsigned long _UNK_006c09b8;
extern "C" unsigned long _UNK_006c09bc;
extern "C" unsigned long _UNK_006c09c0;
extern "C" unsigned long _UNK_006c09c4;
extern "C" unsigned long _UNK_006c09c8;
extern "C" unsigned long _UNK_006c09cc;
extern "C" unsigned long _UNK_006c09d0;
extern "C" unsigned long _UNK_006c09d4;
extern "C" unsigned long _UNK_006c09d8;
extern "C" unsigned long _UNK_006c09dc;
extern "C" unsigned long _UNK_006c0d4c;
extern "C" unsigned long _UNK_006c0d50;
extern "C" unsigned long _UNK_006c0d54;
extern "C" unsigned long _UNK_006c0ec0;
extern "C" unsigned long _UNK_006c0ec4;
extern "C" unsigned long _UNK_006c0f70;
extern "C" unsigned long _UNK_006c13e4;
extern "C" unsigned long _UNK_006c13e8;
extern "C" unsigned long _UNK_006c13ec;
extern "C" unsigned long _UNK_006c13f0;
extern "C" unsigned long _UNK_006c13f4;
extern "C" unsigned long _UNK_006c13f8;
extern "C" unsigned long _UNK_006c13fc;
extern "C" unsigned long _UNK_006c1400;
extern "C" unsigned long _UNK_006c1404;
extern "C" unsigned long _UNK_006c1408;
extern "C" unsigned long _UNK_006c140c;
extern "C" unsigned long _UNK_006c1410;
extern "C" unsigned long _UNK_006c1414;
extern "C" unsigned long _UNK_006c1418;
extern "C" unsigned long _UNK_006c141c;
extern "C" unsigned long _UNK_006c1420;
extern "C" unsigned long _UNK_006c1424;
extern "C" unsigned long _UNK_006c1428;
extern "C" unsigned long _UNK_006c142c;
extern "C" unsigned long _UNK_006c1430;
extern "C" unsigned long _UNK_006c1434;
extern "C" unsigned long _UNK_006c1438;
extern "C" unsigned long _UNK_006c143c;
extern "C" unsigned long _UNK_006c1440;
extern "C" unsigned long _UNK_006c1444;
extern "C" unsigned long _UNK_006c1448;
extern "C" unsigned long _UNK_006c1790;
extern "C" unsigned long _UNK_006c1794;
extern "C" unsigned long _UNK_006c1798;
extern "C" unsigned long _UNK_006c179c;
extern "C" unsigned long _UNK_006c17a0;
extern "C" unsigned long _UNK_006c17a4;
extern "C" unsigned long _UNK_006c17a8;
extern "C" unsigned long _UNK_006c17ac;
extern "C" unsigned long _UNK_006c17b0;
extern "C" unsigned long _UNK_006c17b4;
extern "C" unsigned long _UNK_006c17b8;
extern "C" unsigned long _UNK_006c1888;
extern "C" unsigned long g_006beef0;
extern "C" unsigned long g_006beef4;
extern "C" unsigned long g_006bef08;
extern "C" unsigned long g_006bef0c;
extern "C" unsigned long g_006bef20;
extern "C" unsigned long g_006bef24;
extern "C" unsigned long g_006bef38;
extern "C" unsigned long g_006bef3c;
extern "C" unsigned long g_006befbc;
extern "C" unsigned long g_006befcc;
extern "C" unsigned long g_006befdc;
extern "C" unsigned long g_006befe0;
extern "C" unsigned long g_006bf010;
extern "C" unsigned long g_006bf024;
extern "C" unsigned long g_006bf060;
extern "C" unsigned long g_006bf06c;
extern "C" unsigned long g_006bf086;
extern "C" unsigned long g_006bf0cc;
extern "C" unsigned long g_006bf0d0;
extern "C" unsigned long g_006bf0e0;
extern "C" unsigned long g_006bf0e4;
extern "C" unsigned long g_006bf108;
extern "C" unsigned long g_006bf10c;
extern "C" unsigned long g_006bf11e;
extern "C" unsigned long g_006bf15c;
extern "C" unsigned long g_006bf198;
extern "C" unsigned long g_006bf19c;
extern "C" unsigned long g_006bf1b4;
extern "C" unsigned long g_006bf1bc;
extern "C" unsigned long g_006bf1de;
extern "C" unsigned long g_006bf1fa;
extern "C" unsigned long g_006bf22e;
extern "C" unsigned long g_006bf24a;
extern "C" unsigned long g_006bf254;
extern "C" unsigned long g_006bf258;
extern "C" unsigned long g_006bf25c;
extern "C" unsigned long g_006bf260;
extern "C" unsigned long g_006bf264;
extern "C" unsigned long g_006bf268;
extern "C" unsigned long g_006bf26c;
extern "C" unsigned long g_006bf270;
extern "C" unsigned long g_006bf274;
extern "C" unsigned long g_006bf278;
extern "C" unsigned long g_006bf27c;
extern "C" unsigned long g_006bf280;
extern "C" unsigned long g_006bf2f4;
extern "C" unsigned long g_006bf31a;
extern "C" unsigned long g_006bf33e;
extern "C" unsigned long g_006bf354;
extern "C" unsigned long g_006bf358;
extern "C" unsigned long g_006bf35c;
extern "C" unsigned long g_006bf3bc;
extern "C" unsigned long g_006bf3c8;
extern "C" unsigned long g_006bf57a;
extern "C" unsigned long g_006bf5c4;
extern "C" unsigned long g_006bf5e2;
extern "C" unsigned long g_006bf600;
extern "C" unsigned long g_006bf678;
extern "C" unsigned long g_006bf696;
extern "C" unsigned long g_006bf6ac;
extern "C" unsigned long g_006bf6b0;
extern "C" unsigned long g_006bf6b4;
extern "C" unsigned long g_006bf6b8;
extern "C" unsigned long g_006bf6bc;
extern "C" unsigned long g_006bf6c0;
extern "C" unsigned long g_006bf6c4;
extern "C" unsigned long g_006bf6c8;
extern "C" unsigned long g_006bf6cc;
extern "C" unsigned long g_006bf6d0;
extern "C" unsigned long g_006bf6d4;
extern "C" unsigned long g_006bf6d8;
extern "C" unsigned long g_006bf6dc;
extern "C" unsigned long g_006bf6ec;
extern "C" unsigned long g_006bf8ca;
extern "C" unsigned long g_006bfa2c;
extern "C" unsigned long g_006bfa30;
extern "C" unsigned long g_006bfa34;
extern "C" unsigned long g_006bfa38;
extern "C" unsigned long g_006bfa3c;
extern "C" unsigned long g_006bfa40;
extern "C" unsigned long g_006bfa44;
extern "C" unsigned long g_006bfa48;
extern "C" unsigned long g_006bfa6a;
extern "C" unsigned long g_006bfbe4;
extern "C" unsigned long g_006bfbe8;
extern "C" unsigned long g_006bfbec;
extern "C" unsigned long g_006bfbf0;
extern "C" unsigned long g_006bfd80;
extern "C" unsigned long g_006bfefc;
extern "C" unsigned long g_006c0034;
extern "C" unsigned long g_006c0038;
extern "C" unsigned long g_006c003c;
extern "C" unsigned long g_006c0040;
extern "C" unsigned long g_006c0044;
extern "C" unsigned long g_006c0048;
extern "C" unsigned long g_006c004c;
extern "C" unsigned long g_006c0050;
extern "C" unsigned long g_006c0054;
extern "C" unsigned long g_006c0058;
extern "C" unsigned long g_006c005c;
extern "C" unsigned long g_006c0230;
extern "C" unsigned long g_006c03ae;
extern "C" unsigned long g_006c04e4;
extern "C" unsigned long g_006c04e8;
extern "C" unsigned long g_006c04ec;
extern "C" unsigned long g_006c04f0;
extern "C" unsigned long g_006c04f4;
extern "C" unsigned long g_006c04f8;
extern "C" unsigned long g_006c04fc;
extern "C" unsigned long g_006c0500;
extern "C" unsigned long g_006c0504;
extern "C" unsigned long g_006c0508;
extern "C" unsigned long g_006c050c;
extern "C" unsigned long g_006c06e0;
extern "C" unsigned long g_006c085e;
extern "C" unsigned long g_006c09b4;
extern "C" unsigned long g_006c09b8;
extern "C" unsigned long g_006c09bc;
extern "C" unsigned long g_006c09c0;
extern "C" unsigned long g_006c09c4;
extern "C" unsigned long g_006c09c8;
extern "C" unsigned long g_006c09cc;
extern "C" unsigned long g_006c09d0;
extern "C" unsigned long g_006c09d4;
extern "C" unsigned long g_006c09d8;
extern "C" unsigned long g_006c09dc;
extern "C" unsigned long g_006c09fe;
extern "C" unsigned long g_006c0d4c;
extern "C" unsigned long g_006c0d50;
extern "C" unsigned long g_006c0d54;
extern "C" unsigned long g_006c0ec0;
extern "C" unsigned long g_006c0ec4;
extern "C" unsigned long g_006c0f70;
extern "C" unsigned long g_006c101e;
extern "C" unsigned long g_006c102c;
extern "C" unsigned long g_006c1046;
extern "C" unsigned long g_006c1052;
extern "C" unsigned long g_006c105e;
extern "C" unsigned long g_006c1096;
extern "C" unsigned long g_006c10a4;
extern "C" unsigned long g_006c10b0;
extern "C" unsigned long g_006c10bc;
extern "C" unsigned long g_006c10fe;
extern "C" unsigned long g_006c110c;
extern "C" unsigned long g_006c1118;
extern "C" unsigned long g_006c1124;
extern "C" unsigned long g_006c1172;
extern "C" unsigned long g_006c117e;
extern "C" unsigned long g_006c118a;
extern "C" unsigned long g_006c11ce;
extern "C" unsigned long g_006c11de;
extern "C" unsigned long g_006c11ea;
extern "C" unsigned long g_006c11f6;
extern "C" unsigned long g_006c13e4;
extern "C" unsigned long g_006c13e8;
extern "C" unsigned long g_006c13ec;
extern "C" unsigned long g_006c13f0;
extern "C" unsigned long g_006c13f4;
extern "C" unsigned long g_006c13f8;
extern "C" unsigned long g_006c13fc;
extern "C" unsigned long g_006c1400;
extern "C" unsigned long g_006c1404;
extern "C" unsigned long g_006c1408;
extern "C" unsigned long g_006c140c;
extern "C" unsigned long g_006c1410;
extern "C" unsigned long g_006c1414;
extern "C" unsigned long g_006c1418;
extern "C" unsigned long g_006c141c;
extern "C" unsigned long g_006c1420;
extern "C" unsigned long g_006c1424;
extern "C" unsigned long g_006c1428;
extern "C" unsigned long g_006c142c;
extern "C" unsigned long g_006c1430;
extern "C" unsigned long g_006c1434;
extern "C" unsigned long g_006c1438;
extern "C" unsigned long g_006c143c;
extern "C" unsigned long g_006c1440;
extern "C" unsigned long g_006c1444;
extern "C" unsigned long g_006c1448;
extern "C" unsigned long g_006c147a;
extern "C" unsigned long g_006c1554;
extern "C" unsigned long g_006c156c;
extern "C" unsigned long g_006c158e;
extern "C" unsigned long g_006c163a;
extern "C" unsigned long g_006c1662;
extern "C" unsigned long g_006c1790;
extern "C" unsigned long g_006c1794;
extern "C" unsigned long g_006c1798;
extern "C" unsigned long g_006c179c;
extern "C" unsigned long g_006c17a0;
extern "C" unsigned long g_006c17a4;
extern "C" unsigned long g_006c17a8;
extern "C" unsigned long g_006c17ac;
extern "C" unsigned long g_006c17b0;
extern "C" unsigned long g_006c17b4;
extern "C" unsigned long g_006c17b8;
extern "C" unsigned long g_006c1888;
void CarSetPresenter::tick(float p1)
{
  return;
}

bool CarSetPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void CarSetPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void CarSetPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void CarSetPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void CarSetPresenter::onSaveDataFail()
{
  ((CarHttpUtil *)this)->getInstance();
  ((CarHttpUtil *)this)->getADDate();
  return;
}

void CarSetPresenter::onSaveDataSucceed()
{
  ((CarHttpUtil *)this)->getInstance();
  ((CarHttpUtil *)this)->getADDate();
  return;
}

void CarSetPresenter::onGetDataSucceed()
{
  ((CarHttpUtil *)this)->getInstance();
  ((CarHttpUtil *)this)->onGetUserData();
  return;
}

void CarSetPresenter::onGetDataFail()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(g_006befbc);
  return;
}

void CarSetPresenter::onClose(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar1)->postNotification((char const*)&g_006befcc + g_006befdc);
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(g_006befe0);
  return;
}


void CarSetPresenter::onBuyChariotNum()
{
  undefined4 uVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  
  uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar1)->removeObserver((cocos2d::CCObject*)((int)this), (char const*)&g_006bf024 + g_006bf060);
  iVar4 = *(int *)(((int)this) + 0x2c);
  if (iVar4 == 2) {
    piVar2 = (int *)((CarHttpUtil *)this)->getInstance();
    pcVar3 = *(code **)(*piVar2 + 0x5c);
  }
  else if (iVar4 == 3) {
    piVar2 = (int *)((CarHttpUtil *)this)->getInstance();
    pcVar3 = *(code **)(*piVar2 + 100);
  }
  else {
    if (iVar4 != 1) goto code_r0x006bf056;
    piVar2 = (int *)((CarHttpUtil *)this)->getInstance();
    pcVar3 = *(code **)(*piVar2 + 0x54);
  }
  (*pcVar3)(piVar2,1);
code_r0x006bf056:
  ((CarHttpUtil *)this)->getInstance();
  ((CarHttpUtil *)this)->saveUserData();
  return;
}

CarSetPresenter::~CarSetPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_006bf06c + g_006bf0cc);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x44;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_006bf086 + g_006bf0d0,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  if (*(int *)((int)this + 4*(6)) != 0) {
    (void)(::operator delete((void *)(*(int *)((int)this + 4*(6)))));
  }
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

CarSetPresenter::CarSetPresenter()
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
  iVar3 = *(int *)(&g_006bf11e + g_006bf198);
  *(int *)((int)this + 4*(5)) = iVar3 + 0x44;
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(6)) = 0;
  *(int *)((int)this + 4*(7)) = 0;
  *(int *)((int)this + 4*(8)) = 0;
  ((UIManager *)this)->shareManager();
  ((UIManager *)this)->pushCurScrollViewUnEnable();
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 1);
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_006bf15c + g_006bf19c,&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  *(int *)((int)this + 4*(0xb)) = 0;
  *(int *)((int)this + 4*(10)) = 0;
  return;
}


void CarSetPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  ((UIManager *)this)->shareManager();
  ((UIManager *)this)->popUnEnableScrollView();
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar2)->removeAllObservers((cocos2d::CCObject*)((int)this));
  return;
}

undefined4 CarSetPresenter::create(CarSetView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x30))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}




void CarSetPresenter::onNextCar(cocos2d::CCObject* p1, unsigned int p2)
{
  int *piVar1;
  int iVar2;
  
  if (*(int *)(((int)this) + 0x28) < 4) {
    iVar2 = *(int *)(((int)this) + 0x28) + 1;
    *(int *)(((int)this) + 0x28) = iVar2;
    if (iVar2 == 4) {
      piVar1 = (int *)(**(code **)(**(int **)(((int)this) + 0x24) + 0x248))();
      (**(code **)(*piVar1 + 0x90))(piVar1,0);
    }
    if (*(int *)(((int)this) + 0x28) == 1) {
      piVar1 = (int *)(**(code **)(**(int **)(((int)this) + 0x24) + 0x250))();
      (**(code **)(*piVar1 + 0x90))(piVar1,1);
    }
    CarSetPresenter::initTitle(*(undefined4 *)(((int)this) + 0x28));
    piVar1 = (int *)((std::vector<CarData*, std::allocator<CarData*>> *)((int)this) + 0x18)->at((unsigned int)*(undefined4 *)(((int)this) + 0x28));
    if (*(char *)(*piVar1 + 0x14) != '\0') {
      piVar1 = (int *)((CarHttpUtil *)this)->getInstance();
      (**(code **)(*piVar1 + 0x4c))(piVar1,*(undefined4 *)(((int)this) + 0x28));
      ((CarHttpUtil *)this)->getInstance();
      ((CarHttpUtil *)this)->saveUserADDate();
    }
  }
  return;
}

void CarSetPresenter::onBeforeCar(cocos2d::CCObject* p1, unsigned int p2)
{
  int *piVar1;
  int iVar2;
  
  if (0 < *(int *)(((int)this) + 0x28)) {
    iVar2 = *(int *)(((int)this) + 0x28) + -1;
    *(int *)(((int)this) + 0x28) = iVar2;
    if (iVar2 == 0) {
      piVar1 = (int *)(**(code **)(**(int **)(((int)this) + 0x24) + 0x250))();
      (**(code **)(*piVar1 + 0x90))(piVar1,0);
    }
    if (*(int *)(((int)this) + 0x28) == 3) {
      piVar1 = (int *)(**(code **)(**(int **)(((int)this) + 0x24) + 0x248))();
      (**(code **)(*piVar1 + 0x90))(piVar1,1);
    }
    CarSetPresenter::initTitle(*(undefined4 *)(((int)this) + 0x28));
    piVar1 = (int *)((std::vector<CarData*, std::allocator<CarData*>> *)((int)this) + 0x18)->at((unsigned int)*(undefined4 *)(((int)this) + 0x28));
    if (*(char *)(*piVar1 + 0x14) != '\0') {
      piVar1 = (int *)((CarHttpUtil *)this)->getInstance();
      (**(code **)(*piVar1 + 0x4c))(piVar1,*(undefined4 *)(((int)this) + 0x28));
      ((CarHttpUtil *)this)->getInstance();
      ((CarHttpUtil *)this)->saveUserADDate();
    }
  }
  return;
}






void CarSetPresenter::initCar()
{
  int *piVar1;
  undefined4 uVar2;
  code *pcVar3;
  
  piVar1 = (int *)((CarHttpUtil *)this)->getInstance();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x48))());
  *(undefined4 *)(((int)this) + 0x28) = uVar2;
  CarSetPresenter::deletUserNotHaveRole();
  CarSetPresenter::initCarData();
  CarSetPresenter::initTitle(*(undefined4 *)(((int)this) + 0x28));
  CarSetPresenter::initCarSeting();
  piVar1 = *(int **)(((int)this) + 0x24);
  if (*(int *)(((int)this) + 0x28) == 0) {
    piVar1 = (int *)(**(code **)(*piVar1 + 0x250))();
    pcVar3 = *(code **)(*piVar1 + 0x90);
    uVar2 = (undefined4)(0);
  }
  else if (*(int *)(((int)this) + 0x28) == 4) {
    piVar1 = (int *)(**(code **)(*piVar1 + 0x248))();
    uVar2 = (undefined4)(0);
    pcVar3 = *(code **)(*piVar1 + 0x90);
  }
  else {
    piVar1 = (int *)(**(code **)(*piVar1 + 0x250))();
    (**(code **)(*piVar1 + 0x90))(piVar1,1);
    piVar1 = (int *)(**(code **)(**(int **)(((int)this) + 0x24) + 0x248))();
    uVar2 = (undefined4)(1);
    pcVar3 = *(code **)(*piVar1 + 0x90);
  }
  (*pcVar3)(piVar1,uVar2);
  return;
}

// ===== 修复: 补回被误删的函数占位 (11) =====
void CarSetPresenter::onAddRole(cocos2d::CCObject* p1, unsigned int p2)
{
  int *piVar1;
  undefined4 uVar2;
  code *pcVar3;
  
  piVar1 = (int *)((CarHttpUtil *)this)->getInstance();
  pcVar3 = *(code **)(*piVar1 + 0x3c);
  uVar2 = (undefined4)((**(code **)(*(int *)(p1) + (0x118)))(p1));
  (*pcVar3)(piVar1,uVar2);
  uVar2 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar2)->showUIById(g_006bf010);
  return;
}

void CarSetPresenter::onEnter()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

undefined4 CarSetPresenter::initWithView(CarSetView* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void CarSetPresenter::onHttpSaveDataSucceed()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void CarSetPresenter::initTitle(int p1)
{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *piVar5;
  code *pcVar6;
  int iVar7;
  undefined1 auStack_20 [12];
  
  uVar1 = (undefined4)((**(code **)(**(int **)(((int)this) + 0x24) + 0x220))());
  uVar2 = (undefined4)(func_0079e2ec(p1 * -200));
  0 /* ctorZero */;
  ((cocos2d::extension::CCScrollView *)(uVar1))->setContentOffset(*(cocos2d::CCPoint *)(void *)&auStack_20, 0);
  iVar7 = (undefined4)(intptr_t)(((int)this) + 0x18);
  piVar3 = (int *)(**(code **)(**(int **)(((int)this) + 0x24) + 0x208))();
  pcVar6 = *(code **)(*piVar3 + 0x234);
  puVar4 = (undefined4 *)((std::vector<CarData*, std::allocator<CarData*>> *)(iVar7))->at((unsigned int)p1);
  (*pcVar6)(piVar3,*(undefined4 *)*puVar4);
  piVar3 = (int *)(**(code **)(**(int **)(((int)this) + 0x24) + 0x210))();
  pcVar6 = *(code **)(*piVar3 + 0x234);
  piVar5 = (int *)((std::vector<CarData*, std::allocator<CarData*>> *)(iVar7))->at((unsigned int)p1);
  (*pcVar6)(piVar3,*(undefined4 *)(*piVar5 + 4));
  piVar3 = (int *)(**(code **)(**(int **)(((int)this) + 0x24) + 0x218))();
  pcVar6 = *(code **)(*piVar3 + 0x234);
  piVar5 = (int *)((std::vector<CarData*, std::allocator<CarData*>> *)(iVar7))->at((unsigned int)p1);
  (*pcVar6)(piVar3,*(undefined4 *)(*piVar5 + 8));
  return;
}

void CarSetPresenter::onLuckCar(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void CarSetPresenter::initCarSeting()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void CarSetPresenter::deletUserNotHaveRole()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

undefined8 CarSetPresenter::setCarData(std::vector<CarData*, std::allocator<CarData*>> * p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void CarSetPresenter::initCarData()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

int CarSetPresenter::getCarData() const
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
