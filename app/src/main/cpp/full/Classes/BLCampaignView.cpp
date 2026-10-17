#include "BLCampaignView.h"
#include "CCLayer.h"
#include "CCObject.h"
#include "CCControlButton.h"
#include "CCLabelTTF.h"
#include "CCLabelBMFont.h"
#include "CCDirector.h"
#include "CCGeometry.h"
#include "BLCampaignPresenter.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLTableView.h"
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
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_00502af8;
extern "C" unsigned long UNK_00502b3c;
extern "C" unsigned long UNK_00502b80;
extern "C" unsigned long UNK_00502ba8;
extern "C" unsigned long UNK_00502d4c;
extern "C" unsigned long UNK_00502dc2;
extern "C" unsigned long UNK_00502dde;
extern "C" unsigned long UNK_00502ec0;
extern "C" unsigned long UNK_00502eec;
extern "C" unsigned long UNK_0050303e;
extern "C" unsigned long UNK_00503120;
extern "C" unsigned long UNK_00503268;
extern "C" unsigned long UNK_00503280;
extern "C" unsigned long UNK_005032a4;
extern "C" unsigned long UNK_00503318;
extern "C" unsigned long UNK_0050333a;
extern "C" unsigned long UNK_005033c1;
extern "C" unsigned long UNK_005033e4;
extern "C" unsigned long UNK_005033fc;
extern "C" unsigned long UNK_0050348a;
extern "C" unsigned long UNK_005034ac;
extern "C" unsigned long UNK_005034c4;
extern "C" unsigned long UNK_0050354b;
extern "C" unsigned long UNK_00503568;
extern "C" unsigned long UNK_00503770;
extern "C" unsigned long _DAT_00502c84;
extern "C" unsigned long _DAT_00502c88;
extern "C" unsigned long _UNK_00502b6c;
extern "C" unsigned long _UNK_00502b70;
extern "C" unsigned long _UNK_00502b84;
extern "C" unsigned long _UNK_00502bac;
extern "C" unsigned long _UNK_00503130;
extern "C" unsigned long _UNK_00503134;
extern "C" unsigned long _UNK_00503138;
extern "C" unsigned long _UNK_0050313c;
extern "C" unsigned long _UNK_00503140;
extern "C" unsigned long _UNK_00503144;
extern "C" unsigned long _UNK_00503148;
extern "C" unsigned long _UNK_0050314c;
extern "C" unsigned long _UNK_00503150;
extern "C" unsigned long _UNK_00503154;
extern "C" unsigned long _UNK_00503158;
extern "C" unsigned long _UNK_0050315c;
extern "C" unsigned long _UNK_00503160;
extern "C" unsigned long _UNK_00503164;
extern "C" unsigned long _UNK_00503168;
extern "C" unsigned long _UNK_0050316c;
extern "C" unsigned long _UNK_00503170;
extern "C" unsigned long _UNK_00503174;
extern "C" unsigned long _UNK_00503568;
extern "C" unsigned long _UNK_0050356c;
extern "C" unsigned long _UNK_00503570;
extern "C" unsigned long _UNK_00503574;
extern "C" unsigned long _UNK_00503578;
extern "C" unsigned long _UNK_0050357c;
extern "C" unsigned long _UNK_00503580;
extern "C" unsigned long _UNK_00503584;
extern "C" unsigned long _UNK_00503588;
extern "C" unsigned long _UNK_0050358c;
extern "C" unsigned long _UNK_00503590;
extern "C" unsigned long _UNK_00503594;
extern "C" unsigned long _UNK_00503598;
extern "C" unsigned long _UNK_0050359c;
extern "C" unsigned long _UNK_005035a0;
extern "C" unsigned long _UNK_005035a4;
extern "C" unsigned long _UNK_005035a8;
extern "C" unsigned long _UNK_005035ac;
extern "C" unsigned long _UNK_005035b0;
extern "C" unsigned long _UNK_005035b4;
extern "C" unsigned long _UNK_005038e4;
extern "C" unsigned long _UNK_005038e8;
extern "C" unsigned long _UNK_005038ec;
extern "C" unsigned long _UNK_005038f0;
extern "C" unsigned long _UNK_005038f4;
extern "C" unsigned long _UNK_005038f8;
extern "C" unsigned long _UNK_005038fc;
extern "C" unsigned long _UNK_00503900;
extern "C" unsigned long _UNK_00503904;
extern "C" unsigned long _UNK_00503908;
extern "C" unsigned long _UNK_0050390c;
extern "C" unsigned long g_00502af8;
extern "C" unsigned long g_00502b3c;
extern "C" unsigned long g_00502b6c;
extern "C" unsigned long g_00502b70;
extern "C" unsigned long g_00502b80;
extern "C" unsigned long g_00502b84;
extern "C" unsigned long g_00502ba8;
extern "C" unsigned long g_00502bac;
extern "C" unsigned long g_00502c84;
extern "C" unsigned long g_00502c88;
extern "C" unsigned long g_00502d4c;
extern "C" unsigned long g_00502dc2;
extern "C" unsigned long g_00502dde;
extern "C" unsigned long g_00502ec0;
extern "C" unsigned long g_00502eec;
extern "C" unsigned long g_0050303e;
extern "C" unsigned long g_00503120;
extern "C" unsigned long g_00503130;
extern "C" unsigned long g_00503134;
extern "C" unsigned long g_00503138;
extern "C" unsigned long g_0050313c;
extern "C" unsigned long g_00503140;
extern "C" unsigned long g_00503144;
extern "C" unsigned long g_00503148;
extern "C" unsigned long g_0050314c;
extern "C" unsigned long g_00503150;
extern "C" unsigned long g_00503154;
extern "C" unsigned long g_00503158;
extern "C" unsigned long g_0050315c;
extern "C" unsigned long g_00503160;
extern "C" unsigned long g_00503164;
extern "C" unsigned long g_00503168;
extern "C" unsigned long g_0050316c;
extern "C" unsigned long g_00503170;
extern "C" unsigned long g_00503174;
extern "C" unsigned long g_00503268;
extern "C" unsigned long g_00503280;
extern "C" unsigned long g_005032a4;
extern "C" unsigned long g_00503318;
extern "C" unsigned long g_0050333a;
extern "C" unsigned long g_005033c1;
extern "C" unsigned long g_005033e4;
extern "C" unsigned long g_005033fc;
extern "C" unsigned long g_0050348a;
extern "C" unsigned long g_005034ac;
extern "C" unsigned long g_005034c4;
extern "C" unsigned long g_0050354b;
extern "C" unsigned long g_00503568;
extern "C" unsigned long g_0050356c;
extern "C" unsigned long g_00503570;
extern "C" unsigned long g_00503574;
extern "C" unsigned long g_00503578;
extern "C" unsigned long g_0050357c;
extern "C" unsigned long g_00503580;
extern "C" unsigned long g_00503584;
extern "C" unsigned long g_00503588;
extern "C" unsigned long g_0050358c;
extern "C" unsigned long g_00503590;
extern "C" unsigned long g_00503594;
extern "C" unsigned long g_00503598;
extern "C" unsigned long g_0050359c;
extern "C" unsigned long g_005035a0;
extern "C" unsigned long g_005035a4;
extern "C" unsigned long g_005035a8;
extern "C" unsigned long g_005035ac;
extern "C" unsigned long g_005035b0;
extern "C" unsigned long g_005035b4;
extern "C" unsigned long g_00503770;
extern "C" unsigned long g_005038e4;
extern "C" unsigned long g_005038e8;
extern "C" unsigned long g_005038ec;
extern "C" unsigned long g_005038f0;
extern "C" unsigned long g_005038f4;
extern "C" unsigned long g_005038f8;
extern "C" unsigned long g_005038fc;
extern "C" unsigned long g_00503900;
extern "C" unsigned long g_00503904;
extern "C" unsigned long g_00503908;
extern "C" unsigned long g_0050390c;
BLCampaignView::~BLCampaignView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_00502af8 + g_00502b6c);
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
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00502b3c + g_00502b70,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLCampaignView::BLCampaignView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(g_00502c84 + 0x502c2c);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLCampaignView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * BLCampaignView::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(300)));
  0 /* ctorZero */;
  iVar2 = (**(code **)(*piVar1 + 0x18))(piVar1);
  if (iVar2 == 0) {
    ((cocos2d::CCObject *)piVar1)->release();
    piVar1 = (int *)0x0;
  }
  else {
    ((cocos2d::CCObject *)piVar1)->autorelease();
  }
  return (int *)(piVar1);
}

undefined4 BLCampaignView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x108);
}

undefined4 BLCampaignView::getTableViewInfo()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

undefined4 BLCampaignView::getTableViewTotal()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 BLCampaignView::getBtnClose()
{
  return *(undefined4 *)(((int)this) + 0x11c);
}

undefined4 BLCampaignView::getSpAD()
{
  return *(undefined4 *)(((int)this) + 0x120);
}

undefined4 BLCampaignView::getLabADTime()
{
  return *(undefined4 *)(((int)this) + 0x124);
}

undefined4 BLCampaignView::getLabDes()
{
  return *(undefined4 *)(((int)this) + 0x128);
}


void BLCampaignView::onEnter()
{
  ((BLCampaignPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLCampaignView::onExit()
{
  ((BLCampaignPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
bool BLCampaignView::init()
{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  code *pcVar8;
  int *piVar9;
  int *piVar10;
  undefined4 auStack_30 [2];
  undefined1 auStack_28 [4];
  undefined4 uStack_24;
  undefined4 auStack_20 [3];
  
  iVar1 = (undefined4)(intptr_t)(((cocos2d::CCLayer *)this)->init());
  if (iVar1 != 0) {
    iVar2 = (undefined4)(intptr_t)(((BLCampaignPresenter *)this)->create());
    *(int *)((int)this + 4*(0x42)) = iVar2;
    ((cocos2d::CCObject *)this)->retain();
    func_0079e45c(auStack_20,(unsigned char *)((char *)&g_00502d4c + (intptr_t)(g_00503130)),auStack_28);
    iVar2 = (undefined4)(intptr_t)(0 /* ctorZero */);
    *(int *)((int)this + 4*(0x45)) = iVar2;
    func_0079e2bc(auStack_20);
    piVar9 = (int *)*(int *)((int)this + 4*(0x45));
    pcVar8 = *(code **)(*piVar9 + 0x88);
    0 /* ctorZero */;
    uVar5 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(func_0079e4dc(uVar5,uVar3));
    0 /* ctorZero */;
    uVar5 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(uVar5,uVar4));
    0 /* ctorZero */;
    (*pcVar8)(piVar9,auStack_20);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x45)) + 0x4c))((int *)*(int *)((int)this + 4*(0x45)),(unsigned char *)((char *)&g_00502dc2 + (intptr_t)(g_0050313c)));
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x45)),1);
    func_0079e45c(auStack_20,(unsigned char *)((char *)&g_00502dde + (intptr_t)(g_00503140)),auStack_28);
    piVar9 = (int *)0 /* ctorZero */;
    func_0079e2bc(auStack_20);
    pcVar8 = *(code **)(*piVar9 + 0x88);
    0 /* ctorZero */;
    uVar5 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(func_0079e4dc(uVar5,uVar3));
    0 /* ctorZero */;
    uVar5 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(uVar5,uVar4));
    0 /* ctorZero */;
    (*pcVar8)(piVar9,auStack_20);
    pcVar8 = *(code **)(*piVar9 + 0x4c);
    0 /* ctorZero */;
    uVar5 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(func_0079e4dc(uVar5,uVar3));
    0 /* ctorZero */;
    uVar5 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(uVar5,uVar4));
    0 /* ctorZero */;
    (*pcVar8)(piVar9,auStack_20);
    (**(code **)(*(int *)this + 0xcc))(((int)this),piVar9,2);
    uVar5 = (undefined4)(((BLLanguage *)this)->share());
    func_0079e45c(auStack_28,(unsigned char *)((char *)&g_00502ec0 + (intptr_t)(g_0050314c)),auStack_30);
    ((BLLanguage *)(uVar5))->getString((std::string)(char*)auStack_28);
    uVar5 = (undefined4)(auStack_20[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(func_0079e4dc(g_00503150,uVar3));
    iVar2 = (undefined4)(intptr_t)(cocos2d::CCLabelBMFont::create((char const*)uVar5, (char const*)(unsigned char *)((char *)&g_00502eec + (intptr_t)(g_00503154)), uVar3));
    *(int *)((int)this + 4*(0x46)) = iVar2;
    func_0079e2bc(auStack_20);
    func_0079e2bc(auStack_28);
    piVar9 = (int *)*(int *)((int)this + 4*(0x46));
    pcVar8 = *(code **)(*piVar9 + 0x4c);
    0 /* ctorZero */;
    uVar5 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(func_0079e4dc(uVar5,uVar3));
    0 /* ctorZero */;
    uVar5 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(uVar5,uVar4));
    0 /* ctorZero */;
    (*pcVar8)(piVar9,auStack_20);
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x46)),3);
    piVar9 = (int *)((BLTableView *)this)->create();
    *(int *)((int)this + 4*(0x43)) = (int)piVar9;
    pcVar8 = *(code **)(*piVar9 + 0x234);
    0 /* ctorZero */;
    uVar5 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(func_0079e4dc(uVar5,uVar3));
    0 /* ctorZero */;
    uVar5 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(uVar5,uVar4));
    0 /* ctorZero */;
    (*pcVar8)(piVar9,auStack_20);
    piVar9 = (int *)*(int *)((int)this + 4*(0x43));
    pcVar8 = *(code **)(*piVar9 + 0x4c);
    0 /* ctorZero */;
    uVar5 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(func_0079e4dc(uVar5,uVar3));
    0 /* ctorZero */;
    uVar5 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(uVar5,uVar4));
    0 /* ctorZero */;
    (*pcVar8)(piVar9,auStack_20);
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x43)),8);
    func_0079e45c(auStack_20,(unsigned char *)((char *)&g_0050303e + (intptr_t)(g_0050316c)),auStack_28);
    piVar9 = (int *)0 /* ctorZero */;
    func_0079e2bc(auStack_20);
    pcVar8 = *(code **)(*piVar9 + 0x88);
    0 /* ctorZero */;
    uVar5 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(func_0079e4dc(uVar5,uVar3));
    0 /* ctorZero */;
    uVar5 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(uVar5,uVar4));
    0 /* ctorZero */;
    (*pcVar8)(piVar9,auStack_20);
    pcVar8 = *(code **)(*piVar9 + 0x4c);
    0 /* ctorZero */;
    uVar5 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(func_0079e4dc(uVar5,uVar3));
    0 /* ctorZero */;
    uVar5 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(uVar5,uVar4));
    0 /* ctorZero */;
    (*pcVar8)(piVar9,auStack_20);
    (**(code **)(*(int *)this + 0xcc))(((int)this),piVar9,5);
    func_0079e45c(auStack_20,(unsigned char *)((char *)&g_00503120 + (intptr_t)(g_00503174)),auStack_28);
    iVar2 = (undefined4)(intptr_t)(0 /* ctorZero */);
    *(int *)((int)this + 4*(0x48)) = iVar2;
    func_0079e2bc(auStack_20);
    piVar9 = (int *)*(int *)((int)this + 4*(0x48));
    pcVar8 = *(code **)(*piVar9 + 0x1d4);
    0 /* ctorZero */;
    uVar5 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(func_0079e4dc(uVar5,uVar3));
    0 /* ctorZero */;
    uVar5 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(uVar5,uVar4));
    0 /* ctorZero */;
    (*pcVar8)(piVar9,auStack_20);
    piVar9 = (int *)*(int *)((int)this + 4*(0x48));
    pcVar8 = *(code **)(*piVar9 + 0x4c);
    0 /* ctorZero */;
    uVar5 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(func_0079e4dc(uVar5,uVar3));
    0 /* ctorZero */;
    uVar5 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(uVar5,uVar4));
    0 /* ctorZero */;
    (*pcVar8)(piVar9,auStack_20);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x48)) + 0x40))((int *)*(int *)((int)this + 4*(0x48)),0x3f800000);
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x48)),6);
    uVar5 = (undefined4)(((BLLanguage *)this)->share());
    func_0079e45c(auStack_28,(unsigned char *)((char *)&g_00503268 + (intptr_t)(g_00503578)),auStack_30);
    ((BLLanguage *)(uVar5))->getString((std::string)(char*)auStack_28);
    piVar9 = (int *)cocos2d::CCLabelTTF::create((char const*)auStack_20[0], (char const*)(unsigned char *)((char *)&g_00503280 + (intptr_t)(g_0050357c)), 0x41800000);
    func_0079e2bc(auStack_20);
    func_0079e2bc(auStack_28);
    (**(code **)(*(int *)(piVar9) + (0x1b4)))(piVar9,(unsigned char *)((char *)&g_005032a4 + (intptr_t)(g_00503580)));
    pcVar8 = *(code **)(*piVar9 + 0x4c);
    0 /* ctorZero */;
    uVar5 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(func_0079e4dc(uVar5,uVar3));
    0 /* ctorZero */;
    uVar5 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(uVar5,uVar4));
    0 /* ctorZero */;
    (*pcVar8)(piVar9,auStack_20);
    (**(code **)(*(int *)this + 0xcc))(((int)this),piVar9,6);
    uVar5 = (undefined4)(((BLLanguage *)this)->share());
    func_0079e45c(auStack_28,(unsigned char *)((char *)&g_00503318 + (intptr_t)(g_0050358c)),auStack_30);
    ((BLLanguage *)(uVar5))->getString((std::string)(char*)auStack_28);
    iVar2 = (undefined4)(intptr_t)(cocos2d::CCLabelTTF::create((char const*)auStack_20[0], (char const*)(unsigned char *)((char *)&g_0050333a + (intptr_t)(g_00503590)), 0x41800000));
    *(int *)((int)this + 4*(0x4a)) = iVar2;
    func_0079e2bc(auStack_20);
    func_0079e2bc(auStack_28);
    piVar10 = (int *)*(int *)((int)this + 4*(0x4a));
    pcVar8 = *(code **)(*piVar10 + 0x7c);
    0 /* ctorZero */;
    (*pcVar8)(piVar10,auStack_20);
    piVar10 = (int *)*(int *)((int)this + 4*(0x4a));
    pcVar8 = *(code **)(*piVar10 + 0x4c);
    uVar5 = (undefined4)((**(code **)(*(int *)(piVar9) + (0x50)))(piVar9));
    puVar6 = (undefined4 *)(**(code **)(*(int *)(piVar9) + (0x8c)))(piVar9);
    uVar3 = (undefined4)(func_0079e4fc(*puVar6,0x3f000000));
    0 /* ctorZero */;
    ((cocos2d::CCPoint *)(uVar5))->operator+(*(const CCPoint *)(void *)auStack_28);
    (*pcVar8)(piVar10,auStack_20);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x4a)) + 0x1b4))((int *)*(int *)((int)this + 4*(0x4a)),(unsigned char *)((char *)&g_005033c1 + (intptr_t)(g_00503594)))
    ;
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x4a)),6);
    uVar5 = (undefined4)(((BLLanguage *)this)->share());
    func_0079e45c(auStack_28,(unsigned char *)((char *)&g_005033e4 + (intptr_t)(g_00503598)),auStack_30);
    ((BLLanguage *)(uVar5))->getString((std::string)(char*)auStack_28);
    piVar9 = (int *)cocos2d::CCLabelTTF::create((char const*)auStack_20[0], (char const*)(unsigned char *)((char *)&g_005033fc + (intptr_t)(g_0050359c)), 0x41800000);
    func_0079e2bc(auStack_20);
    func_0079e2bc(auStack_28);
    pcVar8 = *(code **)(*piVar9 + 0x7c);
    0 /* ctorZero */;
    (*pcVar8)(piVar9,auStack_20);
    pcVar8 = *(code **)(*piVar9 + 0x4c);
    0 /* ctorZero */;
    uVar5 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(func_0079e4dc(uVar5,uVar3));
    0 /* ctorZero */;
    uVar5 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(uVar5,uVar4));
    0 /* ctorZero */;
    (*pcVar8)(piVar9,auStack_20);
    (**(code **)(*(int *)(piVar9) + (0x1b4)))(piVar9,(unsigned char *)((char *)&g_0050348a + (intptr_t)(g_005035a4)));
    (**(code **)(*(int *)this + 0xcc))(((int)this),piVar9,6);
    uVar5 = (undefined4)(((BLLanguage *)this)->share());
    func_0079e45c(auStack_28,(unsigned char *)((char *)&g_005034ac + (intptr_t)(g_005035a8)),auStack_30);
    ((BLLanguage *)(uVar5))->getString((std::string)(char*)auStack_28);
    iVar2 = (undefined4)(intptr_t)(cocos2d::CCLabelTTF::create((char const*)auStack_20[0], (char const*)(unsigned char *)((char *)&g_005034c4 + (intptr_t)(g_005035ac)), 0x41800000));
    *(int *)((int)this + 4*(0x49)) = iVar2;
    func_0079e2bc(auStack_20);
    func_0079e2bc(auStack_28);
    piVar10 = (int *)*(int *)((int)this + 4*(0x49));
    pcVar8 = *(code **)(*piVar10 + 0x7c);
    0 /* ctorZero */;
    (*pcVar8)(piVar10,auStack_20);
    piVar10 = (int *)*(int *)((int)this + 4*(0x49));
    pcVar8 = *(code **)(*piVar10 + 0x4c);
    uVar5 = (undefined4)((**(code **)(*(int *)(piVar9) + (0x50)))(piVar9));
    puVar6 = (undefined4 *)(**(code **)(*(int *)(piVar9) + (0x8c)))(piVar9);
    uVar3 = (undefined4)(func_0079e4fc(*puVar6,0x3f000000));
    0 /* ctorZero */;
    ((cocos2d::CCPoint *)(uVar5))->operator+(*(const CCPoint *)(void *)auStack_28);
    (*pcVar8)(piVar10,auStack_20);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x49)) + 0x1b4))((int *)*(int *)((int)this + 4*(0x49)),(unsigned char *)((char *)&g_0050354b + (intptr_t)(g_005035b0)))
    ;
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x49)),6);
    func_0079e45c(auStack_20,(unsigned char *)((char *)&g_00503568 + (intptr_t)(g_005035b4)),auStack_28);
    piVar9 = (int *)0 /* ctorZero */;
    func_0079e2bc(auStack_20);
    pcVar8 = *(code **)(*piVar9 + 0x88);
    0 /* ctorZero */;
    uVar5 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(func_0079e4dc(uVar5,uVar3));
    0 /* ctorZero */;
    uVar5 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(uVar5,uVar4));
    0 /* ctorZero */;
    (*pcVar8)(piVar9,auStack_20);
    pcVar8 = *(code **)(*piVar9 + 0x4c);
    0 /* ctorZero */;
    uVar5 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(func_0079e4dc(uVar5,uVar3));
    0 /* ctorZero */;
    uVar5 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(uVar5,uVar4));
    0 /* ctorZero */;
    (*pcVar8)(piVar9,auStack_20);
    (**(code **)(*(int *)this + 0xcc))(((int)this),piVar9,6);
    piVar9 = (int *)((BLTableView *)this)->create();
    uVar5 = (undefined4)(g_005038f0);
    *(int *)((int)this + 4*(0x44)) = (int)piVar9;
    pcVar8 = *(code **)(*piVar9 + 0x234);
    0 /* ctorZero */;
    uVar5 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(func_0079e4dc(uVar5,uVar3));
    0 /* ctorZero */;
    uVar5 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(uVar5,uVar4));
    0 /* ctorZero */;
    (*pcVar8)(piVar9,auStack_20);
    piVar9 = (int *)*(int *)((int)this + 4*(0x44));
    pcVar8 = *(code **)(*piVar9 + 0x4c);
    0 /* ctorZero */;
    uVar5 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(func_0079e4dc(uVar5,uVar3));
    0 /* ctorZero */;
    uVar5 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(uVar5,uVar4));
    0 /* ctorZero */;
    (*pcVar8)(piVar9,auStack_20);
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x44)),8);
    iVar7 = (undefined4)(intptr_t)(cocos2d::extension::CCControlButton::create());
    iVar2 = (undefined4)(intptr_t)(g_00503900);
    *(int *)((int)this + 4*(0x47)) = iVar7;
    func_0079e45c(auStack_20,&g_00503770 + iVar2,auStack_28);
    uVar5 = (undefined4)(0 /* ctorZero */);
    func_0079e2bc(auStack_20);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x47)) + 0x30c))((int *)*(int *)((int)this + 4*(0x47)),uVar5,1);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x47)) + 0x294))((int *)*(int *)((int)this + 4*(0x47)),0);
    piVar9 = (int *)*(int *)((int)this + 4*(0x47));
    pcVar8 = *(code **)(*piVar9 + 0x28c);
    0 /* ctorZero */;
    uVar5 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(func_0079e4dc(uVar5,uVar3));
    0 /* ctorZero */;
    uVar5 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(uVar5,uVar4));
    0 /* ctorZero */;
    (*pcVar8)(piVar9,auStack_20);
    piVar9 = (int *)*(int *)((int)this + 4*(0x47));
    pcVar8 = *(code **)(*piVar9 + 0x4c);
    0 /* ctorZero */;
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(auStack_30[0],uVar5));
    0 /* ctorZero */;
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(func_0079e4dc(uStack_24,uVar3));
    0 /* ctorZero */;
    (*pcVar8)(piVar9,auStack_20);
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x47)),7);
    pcVar8 = *(code **)(*(int *)this + 0x88);
    uVar5 = (undefined4)(cocos2d::CCDirector::sharedDirector());
    *(CCSize *)(auStack_20) = ((cocos2d::CCDirector *)(uVar5))->getWinSize();
    (*pcVar8)(((int)this),auStack_20);
    ((BLCampaignPresenter *)(*(int *)((int)this + 4*(0x42))))->initWithView((BLCampaignView*)((int)this));
  }
  return iVar1;
}
