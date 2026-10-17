#include "BLGMEquipItemView.h"
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
extern "C" unsigned long UNK_0055e050;
extern "C" unsigned long UNK_0055e082;
extern "C" unsigned long UNK_0055e0c8;
extern "C" unsigned long UNK_0055e0f0;
extern "C" unsigned long UNK_0055e108;
extern "C" unsigned long UNK_0055e136;
extern "C" unsigned long UNK_0055e1aa;
extern "C" unsigned long UNK_0055e1ae;
extern "C" unsigned long UNK_0055e1f4;
extern "C" unsigned long _UNK_0055e0b4;
extern "C" unsigned long _UNK_0055e0b8;
extern "C" unsigned long _UNK_0055e0cc;
extern "C" unsigned long _UNK_0055e0f4;
extern "C" unsigned long _UNK_0055e160;
extern "C" unsigned long _UNK_0055e164;
extern "C" unsigned long _UNK_0055e220;
extern "C" unsigned long _UNK_0055e224;
extern "C" unsigned long _UNK_0055e228;
extern "C" unsigned long _UNK_0055e22c;
extern "C" unsigned long _UNK_0055e230;
extern "C" unsigned long _UNK_0055e234;
extern "C" unsigned long g_0055e050;
extern "C" unsigned long g_0055e082;
extern "C" unsigned long g_0055e0b4;
extern "C" unsigned long g_0055e0b8;
extern "C" unsigned long g_0055e0c8;
extern "C" unsigned long g_0055e0cc;
extern "C" unsigned long g_0055e0f0;
extern "C" unsigned long g_0055e0f4;
extern "C" unsigned long g_0055e108;
extern "C" unsigned long g_0055e136;
extern "C" unsigned long g_0055e160;
extern "C" unsigned long g_0055e164;
extern "C" unsigned long g_0055e1aa;
extern "C" unsigned long g_0055e1ae;
extern "C" unsigned long g_0055e1f4;
extern "C" unsigned long g_0055e220;
extern "C" unsigned long g_0055e224;
extern "C" unsigned long g_0055e228;
extern "C" unsigned long g_0055e22c;
extern "C" unsigned long g_0055e230;
extern "C" unsigned long g_0055e234;
BLGMEquipItemView::~BLGMEquipItemView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0055e050 + g_0055e0b4);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0055e082 + g_0055e0b8,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLGMEquipItemView::BLGMEquipItemView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_0055e108 + g_0055e160);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0055e136 + g_0055e164,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

undefined4 BLGMEquipItemView::getlabequip()
{
  return *(undefined4 *)(((int)this) + 0x108);
}

void BLGMEquipItemView::onEnter()
{
  ((cocos2d::CCLayer *)this)->onEnter();
  return;
}

void BLGMEquipItemView::onExit()
{
  ((cocos2d::CCLayer *)this)->onExit();
  return;
}

bool BLGMEquipItemView::init()
{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  code *pcVar4;
  undefined1 auStack_20 [12];
  
  iVar1 = ((cocos2d::CCLayer *)this)->init();
  if (iVar1 != 0) {
    cocos2d::CCDirector::sharedDirector();
    uVar2 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(g_0055e220),(int)(uVar2)))));
    piVar3 = (int *)cocos2d::CCLabelTTF::create((char const*)&g_0055e1ae + g_0055e228, (char const*)&g_0055e1aa + g_0055e224, uVar2);
    *(int *)((int)this + 4*(0x42)) = (int)piVar3;
    pcVar4 = *(code **)(*piVar3 + 0x4c);
    0 /* ctorZero */;
    (*pcVar4)(piVar3,auStack_20);
    piVar3 = (int *)*(int *)((int)this + 4*(0x42));
    pcVar4 = *(code **)(*piVar3 + 0x7c);
    0 /* ctorZero */;
    (*pcVar4)(piVar3,auStack_20);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x42)) + 0x1b4))((int *)*(int *)((int)this + 4*(0x42)),&g_0055e1f4 + g_0055e22c)
    ;
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x42)),3);
    pcVar4 = *(code **)(*(int *)this + 0x88);
    0 /* ctorZero */;
    (*pcVar4)(((int)this),auStack_20);
  }
  return iVar1;
}
