#include "BLCampaignQuestionView.h"
#include "BLCampaignQuestionPresenter.h"
#include "BLLeakUtils.h"
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
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_005021a8;
extern "C" unsigned long UNK_005021ec;
extern "C" unsigned long UNK_00502230;
extern "C" unsigned long UNK_00502258;
extern "C" unsigned long UNK_005023c8;
extern "C" unsigned long UNK_0050243a;
extern "C" unsigned long UNK_005024c4;
extern "C" unsigned long _DAT_005022f8;
extern "C" unsigned long _DAT_005022fc;
extern "C" unsigned long _UNK_0050221c;
extern "C" unsigned long _UNK_00502220;
extern "C" unsigned long _UNK_00502234;
extern "C" unsigned long _UNK_0050225c;
extern "C" unsigned long _UNK_00502694;
extern "C" unsigned long _UNK_00502698;
extern "C" unsigned long _UNK_0050269c;
extern "C" unsigned long _UNK_005026a0;
extern "C" unsigned long _UNK_005026a4;
extern "C" unsigned long _UNK_005026a8;
extern "C" unsigned long _UNK_005026ac;
extern "C" unsigned long g_005021a8;
extern "C" unsigned long g_005021ec;
extern "C" unsigned long g_0050221c;
extern "C" unsigned long g_00502220;
extern "C" unsigned long g_00502230;
extern "C" unsigned long g_00502234;
extern "C" unsigned long g_00502258;
extern "C" unsigned long g_0050225c;
extern "C" unsigned long g_005022f8;
extern "C" unsigned long g_005022fc;
extern "C" unsigned long g_005023c8;
extern "C" unsigned long g_0050243a;
extern "C" unsigned long g_005024c4;
extern "C" unsigned long g_00502694;
extern "C" unsigned long g_00502698;
extern "C" unsigned long g_0050269c;
extern "C" unsigned long g_005026a0;
extern "C" unsigned long g_005026a4;
extern "C" unsigned long g_005026a8;
extern "C" unsigned long g_005026ac;
BLCampaignQuestionView::~BLCampaignQuestionView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_005021a8 + g_0050221c);
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
  func_0079e45c(&uStack_14,&g_005021ec + g_00502220,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLCampaignQuestionView::BLCampaignQuestionView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(g_005022f8 + 0x5022a0);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLCampaignQuestionView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * BLCampaignQuestionView::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x118)));
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

undefined4 BLCampaignQuestionView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x108);
}

undefined4 BLCampaignQuestionView::getSpritebg()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 BLCampaignQuestionView::getSpriteframe()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

undefined4 BLCampaignQuestionView::getBtnclose()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

bool BLCampaignQuestionView::init()
{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  code *pcVar8;
  int *piVar9;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 auStack_30 [2];
  undefined1 auStack_28 [4];
  undefined4 uStack_24;
  undefined1 auStack_20 [12];
  
  iVar1 = ((cocos2d::CCLayer *)this)->init();
  if (iVar1 != 0) {
    uVar2 = (undefined4)(cocos2d::CCDirector::sharedDirector());
    *(CCSize *)&uStack_38 = ((cocos2d::CCDirector *)uVar2)->getWinSize();
    iVar3 = ((BLCampaignQuestionPresenter *)this)->create((BLCampaignQuestionView*)((int)this));
    *(int *)((int)this + 4*(0x42)) = iVar3;
    ((cocos2d::CCObject *)this)->retain();
    func_0079e45c(auStack_20,&g_005023c8 + g_00502694,auStack_28);
    iVar3 = 0 /* ctorZero */;
    *(int *)((int)this + 4*(0x43)) = iVar3;
    func_0079e2bc(auStack_20);
    piVar9 = (int *)*(int *)((int)this + 4*(0x43));
    pcVar8 = *(code **)(*piVar9 + 0x88);
    uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x - _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uStack_38),(int)(g_00502698)))));
    uVar4 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x - _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uStack_34),(int)(g_00502698)))));
    0 /* ctorZero */;
    (*pcVar8)(piVar9,auStack_20);
    piVar9 = (int *)*(int *)((int)this + 4*(0x43));
    pcVar8 = *(code **)(*piVar9 + 0x7c);
    0 /* ctorZero */;
    (*pcVar8)(piVar9,auStack_20);
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x43)),1);
    func_0079e45c(auStack_20,&g_0050243a + g_0050269c,auStack_28);
    iVar3 = 0 /* ctorZero */;
    *(int *)((int)this + 4*(0x44)) = iVar3;
    func_0079e2bc(auStack_20);
    piVar9 = (int *)*(int *)((int)this + 4*(0x44));
    pcVar8 = *(code **)(*piVar9 + 0x88);
    uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x - _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uStack_38),(int)(g_005026a0)))));
    uVar4 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x - _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uStack_34),(int)(g_005026a0)))));
    0 /* ctorZero */;
    (*pcVar8)(piVar9,auStack_20);
    piVar9 = (int *)*(int *)((int)this + 4*(0x44));
    pcVar8 = *(code **)(*piVar9 + 0x7c);
    0 /* ctorZero */;
    (*pcVar8)(piVar9,auStack_20);
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x44)),2);
    piVar9 = (int *)cocos2d::extension::CCControlButton::create();
    *(int *)((int)this + 4*(0x45)) = (int)piVar9;
    (**(code **)(*piVar9 + 0x294))(piVar9,0);
    func_0079e45c(auStack_20,&g_005024c4 + g_005026a4,auStack_28);
    uVar2 = (undefined4)(0 /* ctorZero */);
    func_0079e2bc(auStack_20);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x45)) + 0x30c))((int *)*(int *)((int)this + 4*(0x45)),uVar2,1);
    piVar9 = (int *)*(int *)((int)this + 4*(0x45));
    pcVar8 = *(code **)(*piVar9 + 0x28c);
    0 /* ctorZero */;
    uVar2 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar4 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar2),(int)(uVar4)))));
    0 /* ctorZero */;
    uVar2 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar2),(int)(uVar5)))));
    0 /* ctorZero */;
    (*pcVar8)(piVar9,auStack_20);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x45)) + 0x40))((int *)*(int *)((int)this + 4*(0x45)),0x3f800000);
    piVar9 = (int *)*(int *)((int)this + 4*(0x45));
    pcVar8 = *(code **)(*piVar9 + 0x4c);
    uVar2 = (undefined4)((**(code **)(*(int *)*(int *)((int)this + 4*(0x43)) + 0x60))());
    puVar6 = (undefined4 *)(**(code **)(*(int *)*(int *)((int)this + 4*(0x43)) + 0x8c))();
    uVar4 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(*puVar6),(int)(0x3f000000)))));
    uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x + _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar2),(int)(uVar4)))));
    uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x - _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar2),(int)(g_005026ac)))));
    uVar4 = (undefined4)((**(code **)(*(int *)*(int *)((int)this + 4*(0x43)) + 0x68))());
    iVar3 = (**(code **)(*(int *)*(int *)((int)this + 4*(0x43)) + 0x8c))();
    uVar5 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(*(undefined4 *)(iVar3 + 4)),(int)(0x3f000000)))));
    uVar4 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x + _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar4),(int)(uVar5)))));
    uVar4 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x - _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar4),(int)(g_005026ac)))));
    0 /* ctorZero */;
    cocos2d::CCDirector::sharedDirector();
    uVar2 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(auStack_30[0]),(int)(uVar2)))));
    uVar4 = (undefined4)((**(code **)(*(int *)*(int *)((int)this + 4*(0x43)) + 0x60))());
    puVar6 = (undefined4 *)(**(code **)(*(int *)*(int *)((int)this + 4*(0x43)) + 0x8c))();
    uVar5 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(*puVar6),(int)(0x3f000000)))));
    uVar4 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x + _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar4),(int)(uVar5)))));
    uVar4 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x - _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar4),(int)(g_005026ac)))));
    uVar5 = (undefined4)((**(code **)(*(int *)*(int *)((int)this + 4*(0x43)) + 0x68))());
    iVar3 = (**(code **)(*(int *)*(int *)((int)this + 4*(0x43)) + 0x8c))();
    uVar7 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(*(undefined4 *)(iVar3 + 4)),(int)(0x3f000000)))));
    uVar5 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x + _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar5),(int)(uVar7)))));
    uVar5 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x - _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar5),(int)(g_005026ac)))));
    0 /* ctorZero */;
    cocos2d::CCDirector::sharedDirector();
    uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar4 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uStack_24),(int)(uVar4)))));
    0 /* ctorZero */;
    (*pcVar8)(piVar9,auStack_20);
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x45)),3);
    ((BLCampaignQuestionPresenter *)*(int *)((int)this + 4*(0x42)))->initWithView((BLCampaignQuestionView*)((int)this));
  }
  return iVar1;
}

void BLCampaignQuestionView::onEnter()
{
  ((BLCampaignQuestionPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLCampaignQuestionView::onExit()
{
  ((BLCampaignQuestionPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}
