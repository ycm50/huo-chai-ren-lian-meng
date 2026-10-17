#include "BLCampaignTotalItemView.h"
#include "BLCampaignTotalItemPresenter.h"
#include "BLLeakUtils.h"
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
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_005026e4;
extern "C" unsigned long UNK_00502728;
extern "C" unsigned long UNK_0050276c;
extern "C" unsigned long UNK_00502794;
extern "C" unsigned long UNK_005027ac;
extern "C" unsigned long UNK_005027da;
extern "C" unsigned long UNK_0050287a;
extern "C" unsigned long UNK_005028f8;
extern "C" unsigned long UNK_00502920;
extern "C" unsigned long UNK_00502924;
extern "C" unsigned long UNK_005029b2;
extern "C" unsigned long _UNK_00502758;
extern "C" unsigned long _UNK_0050275c;
extern "C" unsigned long _UNK_00502770;
extern "C" unsigned long _UNK_00502798;
extern "C" unsigned long _UNK_00502804;
extern "C" unsigned long _UNK_00502808;
extern "C" unsigned long _UNK_00502ac8;
extern "C" unsigned long _UNK_00502acc;
extern "C" unsigned long _UNK_00502ad0;
extern "C" unsigned long _UNK_00502ad4;
extern "C" unsigned long _UNK_00502ad8;
extern "C" unsigned long _UNK_00502adc;
extern "C" unsigned long _UNK_00502ae0;
extern "C" unsigned long _UNK_00502ae4;
extern "C" unsigned long _UNK_00502ae8;
extern "C" unsigned long _UNK_00502aec;
extern "C" unsigned long g_005026e4;
extern "C" unsigned long g_00502728;
extern "C" unsigned long g_00502758;
extern "C" unsigned long g_0050275c;
extern "C" unsigned long g_0050276c;
extern "C" unsigned long g_00502770;
extern "C" unsigned long g_00502794;
extern "C" unsigned long g_00502798;
extern "C" unsigned long g_005027ac;
extern "C" unsigned long g_005027da;
extern "C" unsigned long g_00502804;
extern "C" unsigned long g_00502808;
extern "C" unsigned long g_0050287a;
extern "C" unsigned long g_005028f8;
extern "C" unsigned long g_00502920;
extern "C" unsigned long g_00502924;
extern "C" unsigned long g_005029b2;
extern "C" unsigned long g_00502ac8;
extern "C" unsigned long g_00502acc;
extern "C" unsigned long g_00502ad0;
extern "C" unsigned long g_00502ad4;
extern "C" unsigned long g_00502ad8;
extern "C" unsigned long g_00502adc;
extern "C" unsigned long g_00502ae0;
extern "C" unsigned long g_00502ae4;
extern "C" unsigned long g_00502ae8;
extern "C" unsigned long g_00502aec;
BLCampaignTotalItemView::~BLCampaignTotalItemView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_005026e4 + g_00502758);
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
  func_0079e45c(&uStack_14,&g_00502728 + g_0050275c,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLCampaignTotalItemView::BLCampaignTotalItemView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_005027ac + g_00502804);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005027da + g_00502808,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

undefined4 BLCampaignTotalItemView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x108);
}

undefined4 BLCampaignTotalItemView::getBtn()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 BLCampaignTotalItemView::getLabTitle()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

undefined4 BLCampaignTotalItemView::getSpAble()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

void BLCampaignTotalItemView::onEnter()
{
  ((BLCampaignTotalItemPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLCampaignTotalItemView::onExit()
{
  ((BLCampaignTotalItemPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

bool BLCampaignTotalItemView::init()
{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  code *pcVar7;
  undefined4 auStack_30 [2];
  undefined1 auStack_28 [4];
  undefined4 uStack_24;
  undefined1 uStack_20;
  undefined1 uStack_1f;
  undefined1 uStack_1e;
  
  iVar1 = ((cocos2d::CCLayer *)this)->init();
  if (iVar1 != 0) {
    iVar2 = ((BLCampaignTotalItemPresenter *)this)->create();
    *(int *)((int)this + 4*(0x42)) = iVar2;
    ((cocos2d::CCObject *)this)->retain();
    func_0079e45c(&uStack_20,&g_0050287a + g_00502ac8,auStack_28);
    piVar3 = (int *)0 /* ctorZero */;
    func_0079e2bc(&uStack_20);
    pcVar7 = *(code **)(*piVar3 + 0x1d4);
    0 /* ctorZero */;
    uVar6 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar4 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar6),(int)(uVar4)))));
    0 /* ctorZero */;
    uVar6 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar6 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar6),(int)(uVar5)))));
    0 /* ctorZero */;
    (*pcVar7)(piVar3,&uStack_20);
    (**(code **)(*piVar3 + 0x4c))(piVar3,&g_005028f8 + g_00502ad4);
    (**(code **)(*(int *)this + 0xcc))(((int)this),piVar3,1);
    cocos2d::CCDirector::sharedDirector();
    uVar6 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar6 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(g_00502ad8),(int)(uVar6)))));
    piVar3 = (int *)cocos2d::CCLabelTTF::create((char const*)&g_00502924 + g_00502ae0, (char const*)&g_00502920 + g_00502adc, uVar6);
    *(int *)((int)this + 4*(0x44)) = (int)piVar3;
    pcVar7 = *(code **)(*piVar3 + 0x4c);
    0 /* ctorZero */;
    uVar6 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar4 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar6),(int)(uVar4)))));
    0 /* ctorZero */;
    uVar6 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar6 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar6),(int)(uVar5)))));
    0 /* ctorZero */;
    (*pcVar7)(piVar3,&uStack_20);
    uStack_20 = 0xff;
    uStack_1f = 0xff;
    uStack_1e = 0;
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x44)) + 0x1b4))((int *)*(int *)((int)this + 4*(0x44)),&uStack_20);
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x44)),2);
    func_0079e45c(&uStack_20,&g_005029b2 + g_00502ae4,auStack_28);
    iVar2 = 0 /* ctorZero */;
    *(int *)((int)this + 4*(0x45)) = iVar2;
    func_0079e2bc(&uStack_20);
    piVar3 = (int *)*(int *)((int)this + 4*(0x45));
    pcVar7 = *(code **)(*piVar3 + 0x7c);
    0 /* ctorZero */;
    (*pcVar7)(piVar3,&uStack_20);
    piVar3 = (int *)*(int *)((int)this + 4*(0x45));
    pcVar7 = *(code **)(*piVar3 + 0x4c);
    0 /* ctorZero */;
    uVar6 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar4 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar6),(int)(uVar4)))));
    0 /* ctorZero */;
    uVar6 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar6 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar6),(int)(uVar5)))));
    0 /* ctorZero */;
    (*pcVar7)(piVar3,&uStack_20);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x45)) + 0x90))((int *)*(int *)((int)this + 4*(0x45)),0);
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x45)),3);
    pcVar7 = *(code **)(*(int *)this + 0x88);
    0 /* ctorZero */;
    cocos2d::CCDirector::sharedDirector();
    uVar6 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar6 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(auStack_30[0]),(int)(uVar6)))));
    0 /* ctorZero */;
    cocos2d::CCDirector::sharedDirector();
    uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar4 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uStack_24),(int)(uVar4)))));
    0 /* ctorZero */;
    (*pcVar7)(((int)this),&uStack_20);
    ((BLCampaignTotalItemPresenter *)*(int *)((int)this + 4*(0x42)))->initWithView((BLCampaignTotalItemView*)((int)this));
  }
  return iVar1;
}
