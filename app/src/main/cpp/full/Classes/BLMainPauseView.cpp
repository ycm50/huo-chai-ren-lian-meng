#include "BLMainPauseView.h"
#include "CCArray.h"
#include "CCLayer.h"
#include "CCNotificationCenter.h"
#include "CCObject.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLMainPausePresenter.h"
#include "PlatformHelp.h"
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
extern "C" long long func_0079e4dc(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e59c(...);
extern "C" long long ghidra_CONCAT13(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0059931c;
extern "C" unsigned long UNK_0059936e;
extern "C" unsigned long UNK_0059938e;
extern "C" unsigned long UNK_0059939c;
extern "C" unsigned long UNK_005993d8;
extern "C" unsigned long UNK_00599400;
extern "C" unsigned long UNK_00599692;
extern "C" unsigned long UNK_00599776;
extern "C" unsigned long UNK_00599864;
extern "C" unsigned long UNK_0059988e;
extern "C" unsigned long UNK_00599956;
extern "C" unsigned long UNK_0059998e;
extern "C" unsigned long UNK_00599a60;
extern "C" unsigned long UNK_00599ad2;
extern "C" unsigned long UNK_00599b94;
extern "C" unsigned long UNK_00599b96;
extern "C" unsigned long UNK_00599c30;
extern "C" unsigned long UNK_00599cc4;
extern "C" unsigned long UNK_00599cec;
extern "C" unsigned long UNK_00599dbe;
extern "C" unsigned long UNK_00599de8;
extern "C" unsigned long UNK_00599ef0;
extern "C" unsigned long UNK_00599f1c;
extern "C" unsigned long UNK_00599fee;
extern "C" unsigned long UNK_0059a018;
extern "C" unsigned long UNK_0059a0e4;
extern "C" unsigned long UNK_0059a110;
extern "C" unsigned long UNK_0059a1e2;
extern "C" unsigned long UNK_0059a20c;
extern "C" unsigned long UNK_0059a308;
extern "C" unsigned long UNK_0059a336;
extern "C" unsigned long UNK_0059a408;
extern "C" unsigned long UNK_0059a432;
extern "C" unsigned long UNK_0059a508;
extern "C" unsigned long UNK_0059a540;
extern "C" unsigned long UNK_0059a61c;
extern "C" unsigned long UNK_0059a64a;
extern "C" unsigned long UNK_0059a762;
extern "C" unsigned long UNK_0059a78a;
extern "C" unsigned long UNK_0059a852;
extern "C" unsigned long UNK_0059a8d4;
extern "C" unsigned long UNK_0059a8d6;
extern "C" unsigned long UNK_0059a94a;
extern "C" unsigned long UNK_0059a976;
extern "C" unsigned long UNK_0059aa72;
extern "C" unsigned long UNK_0059aa9a;
extern "C" unsigned long UNK_0059abb2;
extern "C" unsigned long UNK_0059abd0;
extern "C" unsigned long UNK_0059ac10;
extern "C" unsigned long _DAT_005994f4;
extern "C" unsigned long _DAT_005994f8;
extern "C" unsigned long _DAT_005994fc;
extern "C" unsigned long _DAT_00599500;
extern "C" unsigned long _DAT_00599504;
extern "C" unsigned long _DAT_00599508;
extern "C" unsigned long _UNK_005993bc;
extern "C" unsigned long _UNK_005993c0;
extern "C" unsigned long _UNK_005993c4;
extern "C" unsigned long _UNK_005993c8;
extern "C" unsigned long _UNK_005993dc;
extern "C" unsigned long _UNK_00599404;
extern "C" unsigned long _UNK_00599a74;
extern "C" unsigned long _UNK_00599a78;
extern "C" unsigned long _UNK_00599a7c;
extern "C" unsigned long _UNK_00599a80;
extern "C" unsigned long _UNK_00599a84;
extern "C" unsigned long _UNK_00599a88;
extern "C" unsigned long _UNK_00599a8c;
extern "C" unsigned long _UNK_00599a90;
extern "C" unsigned long _UNK_00599a94;
extern "C" unsigned long _UNK_00599a98;
extern "C" unsigned long _UNK_00599a9c;
extern "C" unsigned long _UNK_00599aa0;
extern "C" unsigned long _UNK_00599aa4;
extern "C" unsigned long _UNK_00599aa8;
extern "C" unsigned long _UNK_00599aac;
extern "C" unsigned long _UNK_00599eac;
extern "C" unsigned long _UNK_00599eb0;
extern "C" unsigned long _UNK_00599eb4;
extern "C" unsigned long _UNK_00599eb8;
extern "C" unsigned long _UNK_00599ebc;
extern "C" unsigned long _UNK_00599ec0;
extern "C" unsigned long _UNK_00599ec4;
extern "C" unsigned long _UNK_00599ec8;
extern "C" unsigned long _UNK_00599ecc;
extern "C" unsigned long _UNK_00599ed0;
extern "C" unsigned long _UNK_00599ed4;
extern "C" unsigned long _UNK_00599ed8;
extern "C" unsigned long _UNK_00599edc;
extern "C" unsigned long _UNK_00599ee0;
extern "C" unsigned long _UNK_00599ee4;
extern "C" unsigned long _UNK_0059a2cc;
extern "C" unsigned long _UNK_0059a2d0;
extern "C" unsigned long _UNK_0059a2d4;
extern "C" unsigned long _UNK_0059a2d8;
extern "C" unsigned long _UNK_0059a2dc;
extern "C" unsigned long _UNK_0059a2e0;
extern "C" unsigned long _UNK_0059a2e4;
extern "C" unsigned long _UNK_0059a2e8;
extern "C" unsigned long _UNK_0059a2ec;
extern "C" unsigned long _UNK_0059a2f0;
extern "C" unsigned long _UNK_0059a2f4;
extern "C" unsigned long _UNK_0059a2f8;
extern "C" unsigned long _UNK_0059a2fc;
extern "C" unsigned long _UNK_0059a6ec;
extern "C" unsigned long _UNK_0059a6f0;
extern "C" unsigned long _UNK_0059a6f4;
extern "C" unsigned long _UNK_0059a6f8;
extern "C" unsigned long _UNK_0059a6fc;
extern "C" unsigned long _UNK_0059a700;
extern "C" unsigned long _UNK_0059a704;
extern "C" unsigned long _UNK_0059a708;
extern "C" unsigned long _UNK_0059a70c;
extern "C" unsigned long _UNK_0059a710;
extern "C" unsigned long _UNK_0059a714;
extern "C" unsigned long _UNK_0059a718;
extern "C" unsigned long _UNK_0059a71c;
extern "C" unsigned long _UNK_0059a720;
extern "C" unsigned long _UNK_0059a724;
extern "C" unsigned long _UNK_0059ab44;
extern "C" unsigned long _UNK_0059ab48;
extern "C" unsigned long _UNK_0059ab4c;
extern "C" unsigned long _UNK_0059ab50;
extern "C" unsigned long _UNK_0059ab54;
extern "C" unsigned long _UNK_0059ab58;
extern "C" unsigned long _UNK_0059ab5c;
extern "C" unsigned long _UNK_0059ab60;
extern "C" unsigned long _UNK_0059ab64;
extern "C" unsigned long _UNK_0059ab68;
extern "C" unsigned long _UNK_0059ab6c;
extern "C" unsigned long _UNK_0059ab70;
extern "C" unsigned long _UNK_0059ab74;
extern "C" unsigned long _UNK_0059ab78;
extern "C" unsigned long _UNK_0059ab7c;
extern "C" unsigned long _UNK_0059ab80;
extern "C" unsigned long _UNK_0059ab84;
extern "C" unsigned long _UNK_0059ad74;
extern "C" unsigned long _UNK_0059ad78;
extern "C" unsigned long _UNK_0059ad7c;
extern "C" unsigned long _UNK_0059ad80;
extern "C" unsigned long _UNK_0059ad84;
extern "C" unsigned long _UNK_0059ad88;
extern "C" unsigned long _UNK_0059ad8c;
extern "C" unsigned long g_0059931c;
extern "C" unsigned long g_0059936e;
extern "C" unsigned long g_0059938e;
extern "C" unsigned long g_0059939c;
extern "C" unsigned long g_005993bc;
extern "C" unsigned long g_005993c0;
extern "C" unsigned long g_005993c4;
extern "C" unsigned long g_005993c8;
extern "C" unsigned long g_005993d8;
extern "C" unsigned long g_005993dc;
extern "C" unsigned long g_00599400;
extern "C" unsigned long g_00599404;
extern "C" unsigned long g_005994f4;
extern "C" unsigned long g_005994f8;
extern "C" unsigned long g_005994fc;
extern "C" unsigned long g_00599500;
extern "C" unsigned long g_00599504;
extern "C" unsigned long g_00599508;
extern "C" unsigned long g_00599692;
extern "C" unsigned long g_00599776;
extern "C" unsigned long g_00599864;
extern "C" unsigned long g_0059988e;
extern "C" unsigned long g_00599956;
extern "C" unsigned long g_0059998e;
extern "C" unsigned long g_00599a60;
extern "C" unsigned long g_00599a74;
extern "C" unsigned long g_00599a78;
extern "C" unsigned long g_00599a7c;
extern "C" unsigned long g_00599a80;
extern "C" unsigned long g_00599a84;
extern "C" unsigned long g_00599a88;
extern "C" unsigned long g_00599a8c;
extern "C" unsigned long g_00599a90;
extern "C" unsigned long g_00599a94;
extern "C" unsigned long g_00599a98;
extern "C" unsigned long g_00599a9c;
extern "C" unsigned long g_00599aa0;
extern "C" unsigned long g_00599aa4;
extern "C" unsigned long g_00599aa8;
extern "C" unsigned long g_00599aac;
extern "C" unsigned long g_00599ad2;
extern "C" unsigned long g_00599b94;
extern "C" unsigned long g_00599b96;
extern "C" unsigned long g_00599c30;
extern "C" unsigned long g_00599cc4;
extern "C" unsigned long g_00599cec;
extern "C" unsigned long g_00599dbe;
extern "C" unsigned long g_00599de8;
extern "C" unsigned long g_00599eac;
extern "C" unsigned long g_00599eb0;
extern "C" unsigned long g_00599eb4;
extern "C" unsigned long g_00599eb8;
extern "C" unsigned long g_00599ebc;
extern "C" unsigned long g_00599ec0;
extern "C" unsigned long g_00599ec4;
extern "C" unsigned long g_00599ec8;
extern "C" unsigned long g_00599ecc;
extern "C" unsigned long g_00599ed0;
extern "C" unsigned long g_00599ed4;
extern "C" unsigned long g_00599ed8;
extern "C" unsigned long g_00599edc;
extern "C" unsigned long g_00599ee0;
extern "C" unsigned long g_00599ee4;
extern "C" unsigned long g_00599ef0;
extern "C" unsigned long g_00599f1c;
extern "C" unsigned long g_00599fee;
extern "C" unsigned long g_0059a018;
extern "C" unsigned long g_0059a0e4;
extern "C" unsigned long g_0059a110;
extern "C" unsigned long g_0059a1e2;
extern "C" unsigned long g_0059a20c;
extern "C" unsigned long g_0059a2cc;
extern "C" unsigned long g_0059a2d0;
extern "C" unsigned long g_0059a2d4;
extern "C" unsigned long g_0059a2d8;
extern "C" unsigned long g_0059a2dc;
extern "C" unsigned long g_0059a2e0;
extern "C" unsigned long g_0059a2e4;
extern "C" unsigned long g_0059a2e8;
extern "C" unsigned long g_0059a2ec;
extern "C" unsigned long g_0059a2f0;
extern "C" unsigned long g_0059a2f4;
extern "C" unsigned long g_0059a2f8;
extern "C" unsigned long g_0059a2fc;
extern "C" unsigned long g_0059a308;
extern "C" unsigned long g_0059a336;
extern "C" unsigned long g_0059a408;
extern "C" unsigned long g_0059a432;
extern "C" unsigned long g_0059a508;
extern "C" unsigned long g_0059a540;
extern "C" unsigned long g_0059a61c;
extern "C" unsigned long g_0059a64a;
extern "C" unsigned long g_0059a6ec;
extern "C" unsigned long g_0059a6f0;
extern "C" unsigned long g_0059a6f4;
extern "C" unsigned long g_0059a6f8;
extern "C" unsigned long g_0059a6fc;
extern "C" unsigned long g_0059a700;
extern "C" unsigned long g_0059a704;
extern "C" unsigned long g_0059a708;
extern "C" unsigned long g_0059a70c;
extern "C" unsigned long g_0059a710;
extern "C" unsigned long g_0059a714;
extern "C" unsigned long g_0059a718;
extern "C" unsigned long g_0059a71c;
extern "C" unsigned long g_0059a720;
extern "C" unsigned long g_0059a724;
extern "C" unsigned long g_0059a762;
extern "C" unsigned long g_0059a78a;
extern "C" unsigned long g_0059a852;
extern "C" unsigned long g_0059a8d4;
extern "C" unsigned long g_0059a8d6;
extern "C" unsigned long g_0059a94a;
extern "C" unsigned long g_0059a976;
extern "C" unsigned long g_0059aa72;
extern "C" unsigned long g_0059aa9a;
extern "C" unsigned long g_0059ab44;
extern "C" unsigned long g_0059ab48;
extern "C" unsigned long g_0059ab4c;
extern "C" unsigned long g_0059ab50;
extern "C" unsigned long g_0059ab54;
extern "C" unsigned long g_0059ab58;
extern "C" unsigned long g_0059ab5c;
extern "C" unsigned long g_0059ab60;
extern "C" unsigned long g_0059ab64;
extern "C" unsigned long g_0059ab68;
extern "C" unsigned long g_0059ab6c;
extern "C" unsigned long g_0059ab70;
extern "C" unsigned long g_0059ab74;
extern "C" unsigned long g_0059ab78;
extern "C" unsigned long g_0059ab7c;
extern "C" unsigned long g_0059ab80;
extern "C" unsigned long g_0059ab84;
extern "C" unsigned long g_0059abb2;
extern "C" unsigned long g_0059abd0;
extern "C" unsigned long g_0059ac10;
extern "C" unsigned long g_0059ad74;
extern "C" unsigned long g_0059ad78;
extern "C" unsigned long g_0059ad7c;
extern "C" unsigned long g_0059ad80;
extern "C" unsigned long g_0059ad84;
extern "C" unsigned long g_0059ad88;
extern "C" unsigned long g_0059ad8c;
BLMainPauseView::~BLMainPauseView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0059931c + g_005993bc);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  if (*(int *)((int)this + 4*(0x42)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x42)) = 0;
  }
  if (*(int *)((int)this + 4*(0x43)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x43)) = 0;
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0059936e + g_005993c0,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar1)->removeObserver((cocos2d::CCObject*)((int)this), (char const*)&g_0059938e + g_005993c4);
  uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar1)->removeObserver((cocos2d::CCObject*)((int)this), (char const*)&g_0059939c + g_005993c8);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}


int * BLMainPauseView::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x170)));
  0 /* ctorZero */;
  iVar2 = (**(code **)(*piVar1 + 0x18))(piVar1);
  if (iVar2 == 0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    piVar1 = (int *)0x0;
  }
  else {
    ((cocos2d::CCObject *)piVar1)->autorelease();
  }
  return (int *)(piVar1);
}

undefined4 BLMainPauseView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

void BLMainPauseView::getChangeFanuiNum()
{
  (**(code **)(**(int **)(((int)this) + 0x154) + 0x94))();
  return;
}


undefined4 BLMainPauseView::getBackGround()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

undefined4 BLMainPauseView::getTabBg()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

undefined4 BLMainPauseView::getLabTitle()
{
  return *(undefined4 *)(((int)this) + 0x118);
}

undefined4 BLMainPauseView::getBtnMusic()
{
  return *(undefined4 *)(((int)this) + 0x11c);
}

undefined4 BLMainPauseView::getLabMusic()
{
  return *(undefined4 *)(((int)this) + 0x120);
}

undefined4 BLMainPauseView::getBtnSound()
{
  return *(undefined4 *)(((int)this) + 0x124);
}

undefined4 BLMainPauseView::getLabSound()
{
  return *(undefined4 *)(((int)this) + 0x128);
}

undefined4 BLMainPauseView::getBtnDuiHuan()
{
  return *(undefined4 *)(((int)this) + 300);
}

undefined4 BLMainPauseView::getBtnFanKui()
{
  return *(undefined4 *)(((int)this) + 0x130);
}

undefined4 BLMainPauseView::getBtnGongGao()
{
  return *(undefined4 *)(((int)this) + 0x134);
}

undefined4 BLMainPauseView::getFankuiTips()
{
  return *(undefined4 *)(((int)this) + 0x154);
}

undefined4 BLMainPauseView::getBtnClose()
{
  return *(undefined4 *)(((int)this) + 0x138);
}

undefined4 BLMainPauseView::getBtnAccount()
{
  return *(undefined4 *)(((int)this) + 0x13c);
}

undefined4 BLMainPauseView::getLabAccount()
{
  return *(undefined4 *)(((int)this) + 0x140);
}

undefined4 BLMainPauseView::getBtnSaveData()
{
  return *(undefined4 *)(((int)this) + 0x144);
}

undefined4 BLMainPauseView::getLabSaveData()
{
  return *(undefined4 *)(((int)this) + 0x148);
}

undefined4 BLMainPauseView::getLabTip()
{
  return *(undefined4 *)(((int)this) + 0x158);
}

undefined4 BLMainPauseView::getLabDevice()
{
  return *(undefined4 *)(((int)this) + 0x15c);
}

undefined4 BLMainPauseView::getLabValue()
{
  return *(undefined4 *)(((int)this) + 0x160);
}

undefined4 BLMainPauseView::getSpDemond()
{
  return *(undefined4 *)(((int)this) + 0x164);
}

undefined4 BLMainPauseView::getBtnGLSB()
{
  return *(undefined4 *)(((int)this) + 0x14c);
}

undefined4 BLMainPauseView::getLabGLSB()
{
  return *(undefined4 *)(((int)this) + 0x150);
}

undefined4 BLMainPauseView::getBtnYJBD()
{
  return *(undefined4 *)(((int)this) + 0x168);
}

undefined4 BLMainPauseView::getLabelYJBD()
{
  return *(undefined4 *)(((int)this) + 0x16c);
}

void BLMainPauseView::onEnter()
{
  ((BLMainPausePresenter *)*(undefined4 *)(((int)this) + 0x10c))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLMainPauseView::onExit()
{
  ((BLMainPausePresenter *)*(undefined4 *)(((int)this) + 0x10c))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (5) =====
void BLMainPauseView::showFanKuiNum()
{
  undefined4 p3 = 0;
  undefined4 p4 = 0;

  code *pcVar1;
  
  pcVar1 = *(code **)(**(int **)(((int)this) + 0x154) + 0x90);
  (*pcVar1)(*(int **)(((int)this) + 0x154),1,p3,pcVar1,p4);
  return;
}

void BLMainPauseView::hideFanKuiNum()
{
  undefined4 p3 = 0;
  undefined4 p4 = 0;

  code *pcVar1;
  
  pcVar1 = *(code **)(**(int **)(((int)this) + 0x154) + 0x90);
  (*pcVar1)(*(int **)(((int)this) + 0x154),0,p3,pcVar1,p4);
  return;
}

BLMainPauseView::BLMainPauseView()
{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_2c [12];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  0 /* ctorZero */;
  iVar2 = (undefined4)(intptr_t)(*(int *)(g_005994f4 + 0x59944a));
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  iVar2 = (undefined4)(intptr_t)(cocos2d::CCArray::create());
  *(int *)((int)this + 4*(0x42)) = iVar2;
  if (iVar2 != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(auStack_2c,"BLMainPauseView",&uStack_20);
  ((BLLeakUtils *)(uVar1))->addClass((std::string)(char*)auStack_2c);
  func_0079e2bc(auStack_2c);
  uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)(((int)this)))->addObserver((cocos2d::CCObject*)*(undefined4 *)(g_005994fc + 0x5994b4), 0, (char const*)"DAILYSIGN_SHEZHI_FANKUINUM", 0);
  uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  uStack_1c = (undefined4)(0);
  uStack_20 = (undefined4)(*(undefined4 *)(g_00599504 + 0x5994ce));
  ((cocos2d::CCNotificationCenter *)(((int)this)))->addObserver((cocos2d::CCObject*)uStack_20, 0, (char const*)"DAILYSIGN_SHEZHI_FANKUINUM_NO", 0);
  return;
}

void BLMainPauseView::onPauseFanKui()
{
  BLMainPauseView::getChangeFanuiNum();
  ((PlatformHelp *)this)->openUrlFanKui((int)0);
  return;
}

bool BLMainPauseView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
