#include "BLFightRecordItemView.h"
#include "BLFightRecordItemPresenter.h"
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
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_004c6a28;
extern "C" unsigned long UNK_004c6a6c;
extern "C" unsigned long UNK_004c6ab0;
extern "C" unsigned long UNK_004c6ad8;
extern "C" unsigned long UNK_004c6b20;
extern "C" unsigned long UNK_004c6b4e;
extern "C" unsigned long UNK_004c6d70;
extern "C" unsigned long UNK_004c6d9e;
extern "C" unsigned long UNK_004c6dec;
extern "C" unsigned long UNK_004c6e1a;
extern "C" unsigned long UNK_004c6e9c;
extern "C" unsigned long UNK_004c6f94;
extern "C" unsigned long UNK_004c706a;
extern "C" unsigned long UNK_004c706c;
extern "C" unsigned long UNK_004c70ee;
extern "C" unsigned long UNK_004c716a;
extern "C" unsigned long UNK_004c7176;
extern "C" unsigned long UNK_004c7208;
extern "C" unsigned long UNK_004c725e;
extern "C" unsigned long UNK_004c7260;
extern "C" unsigned long UNK_004c7354;
extern "C" unsigned long UNK_004c741a;
extern "C" unsigned long UNK_004c741c;
extern "C" unsigned long UNK_004c742c;
extern "C" unsigned long _UNK_004c6a9c;
extern "C" unsigned long _UNK_004c6aa0;
extern "C" unsigned long _UNK_004c6ab4;
extern "C" unsigned long _UNK_004c6adc;
extern "C" unsigned long _UNK_004c6b78;
extern "C" unsigned long _UNK_004c6b7c;
extern "C" unsigned long _UNK_004c6e50;
extern "C" unsigned long _UNK_004c6e54;
extern "C" unsigned long _UNK_004c6e58;
extern "C" unsigned long _UNK_004c6e5c;
extern "C" unsigned long _UNK_004c6e60;
extern "C" unsigned long _UNK_004c6e64;
extern "C" unsigned long _UNK_004c6e68;
extern "C" unsigned long _UNK_004c7278;
extern "C" unsigned long _UNK_004c727c;
extern "C" unsigned long _UNK_004c7280;
extern "C" unsigned long _UNK_004c7284;
extern "C" unsigned long _UNK_004c7288;
extern "C" unsigned long _UNK_004c728c;
extern "C" unsigned long _UNK_004c7290;
extern "C" unsigned long _UNK_004c7294;
extern "C" unsigned long _UNK_004c7298;
extern "C" unsigned long _UNK_004c729c;
extern "C" unsigned long _UNK_004c72a0;
extern "C" unsigned long _UNK_004c72a4;
extern "C" unsigned long _UNK_004c72a8;
extern "C" unsigned long _UNK_004c72ac;
extern "C" unsigned long _UNK_004c72b0;
extern "C" unsigned long _UNK_004c72b4;
extern "C" unsigned long _UNK_004c72b8;
extern "C" unsigned long _UNK_004c72bc;
extern "C" unsigned long _UNK_004c72c0;
extern "C" unsigned long _UNK_004c74c8;
extern "C" unsigned long _UNK_004c74cc;
extern "C" unsigned long _UNK_004c74d0;
extern "C" unsigned long _UNK_004c74d4;
extern "C" unsigned long _UNK_004c74d8;
extern "C" unsigned long _UNK_004c74dc;
extern "C" unsigned long _UNK_004c74e0;
extern "C" unsigned long _UNK_004c74e4;
extern "C" unsigned long _UNK_004c74e8;
extern "C" unsigned long _UNK_004c74ec;
extern "C" unsigned long _UNK_004c74f0;
extern "C" unsigned long g_004c6a28;
extern "C" unsigned long g_004c6a6c;
extern "C" unsigned long g_004c6a9c;
extern "C" unsigned long g_004c6aa0;
extern "C" unsigned long g_004c6ab0;
extern "C" unsigned long g_004c6ab4;
extern "C" unsigned long g_004c6ad8;
extern "C" unsigned long g_004c6adc;
extern "C" unsigned long g_004c6b20;
extern "C" unsigned long g_004c6b4e;
extern "C" unsigned long g_004c6b78;
extern "C" unsigned long g_004c6b7c;
extern "C" unsigned long g_004c6d70;
extern "C" unsigned long g_004c6d9e;
extern "C" unsigned long g_004c6dec;
extern "C" unsigned long g_004c6e1a;
extern "C" unsigned long g_004c6e50;
extern "C" unsigned long g_004c6e54;
extern "C" unsigned long g_004c6e58;
extern "C" unsigned long g_004c6e5c;
extern "C" unsigned long g_004c6e60;
extern "C" unsigned long g_004c6e64;
extern "C" unsigned long g_004c6e68;
extern "C" unsigned long g_004c6e9c;
extern "C" unsigned long g_004c6f94;
extern "C" unsigned long g_004c706a;
extern "C" unsigned long g_004c706c;
extern "C" unsigned long g_004c70ee;
extern "C" unsigned long g_004c716a;
extern "C" unsigned long g_004c7176;
extern "C" unsigned long g_004c7208;
extern "C" unsigned long g_004c725e;
extern "C" unsigned long g_004c7260;
extern "C" unsigned long g_004c7278;
extern "C" unsigned long g_004c727c;
extern "C" unsigned long g_004c7280;
extern "C" unsigned long g_004c7284;
extern "C" unsigned long g_004c7288;
extern "C" unsigned long g_004c728c;
extern "C" unsigned long g_004c7290;
extern "C" unsigned long g_004c7294;
extern "C" unsigned long g_004c7298;
extern "C" unsigned long g_004c729c;
extern "C" unsigned long g_004c72a0;
extern "C" unsigned long g_004c72a4;
extern "C" unsigned long g_004c72a8;
extern "C" unsigned long g_004c72ac;
extern "C" unsigned long g_004c72b0;
extern "C" unsigned long g_004c72b4;
extern "C" unsigned long g_004c72b8;
extern "C" unsigned long g_004c72bc;
extern "C" unsigned long g_004c72c0;
extern "C" unsigned long g_004c7354;
extern "C" unsigned long g_004c741a;
extern "C" unsigned long g_004c741c;
extern "C" unsigned long g_004c742c;
extern "C" unsigned long g_004c74c8;
extern "C" unsigned long g_004c74cc;
extern "C" unsigned long g_004c74d0;
extern "C" unsigned long g_004c74d4;
extern "C" unsigned long g_004c74d8;
extern "C" unsigned long g_004c74dc;
extern "C" unsigned long g_004c74e0;
extern "C" unsigned long g_004c74e4;
extern "C" unsigned long g_004c74e8;
extern "C" unsigned long g_004c74ec;
extern "C" unsigned long g_004c74f0;
BLFightRecordItemView::~BLFightRecordItemView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_004c6a28 + g_004c6a9c);
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
  func_0079e45c(&uStack_14,&g_004c6a6c + g_004c6aa0,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLFightRecordItemView::BLFightRecordItemView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_004c6b20 + g_004c6b78);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_004c6b4e + g_004c6b7c,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * BLFightRecordItemView::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x130)));
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

undefined4 BLFightRecordItemView::getPreasenter()
{
  return *(undefined4 *)(((int)this) + 0x108);
}

undefined4 BLFightRecordItemView::getBtnVideo()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

undefined4 BLFightRecordItemView::getLab()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

undefined4 BLFightRecordItemView::getLabEnemy()
{
  return *(undefined4 *)(((int)this) + 0x118);
}

undefined4 BLFightRecordItemView::getLabRank()
{
  return *(undefined4 *)(((int)this) + 0x124);
}

undefined4 BLFightRecordItemView::getBtnFuChou()
{
  return *(undefined4 *)(((int)this) + 0x128);
}

undefined4 BLFightRecordItemView::getSprLine()
{
  return *(undefined4 *)(((int)this) + 0x11c);
}

void BLFightRecordItemView::updateData(bool p1, bool p2)
{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  code *pcVar6;
  undefined4 auStack_30 [2];
  undefined1 auStack_28 [4];
  undefined4 uStack_24;
  undefined1 auStack_20 [12];
  
  if (p1 == 0) {
    if (p2 == 0) {
      piVar5 = *(int **)(((int)this) + 0x120);
      pcVar6 = *(code **)(*piVar5 + 0x22c);
      func_0079e45c(auStack_20,&g_004c6e1a + g_004c6e68,auStack_28);
      piVar3 = (int *)0 /* ctorZero */;
      uVar4 = (undefined4)((**(code **)(*piVar3 + 0x214))());
      (*pcVar6)(piVar5,uVar4);
    }
    else {
      (**(code **)(**(int **)(((int)this) + 0x128) + 0x90))();
      (**(code **)(**(int **)(((int)this) + 300) + 0x90))(*(int **)(((int)this) + 300),0);
      piVar5 = *(int **)(((int)this) + 0x120);
      pcVar6 = *(code **)(*piVar5 + 0x22c);
      func_0079e45c(auStack_20,&g_004c6dec + g_004c6e64,auStack_28);
      piVar3 = (int *)0 /* ctorZero */;
      uVar4 = (undefined4)((**(code **)(*piVar3 + 0x214))());
      (*pcVar6)(piVar5,uVar4);
    }
  }
  else {
    piVar3 = *(int **)(((int)this) + 0x114);
    pcVar6 = *(code **)(*piVar3 + 0x4c);
    0 /* ctorZero */;
    uVar4 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar1 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar1 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar4),(int)(uVar1)))));
    0 /* ctorZero */;
    uVar4 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar2 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar4 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar4),(int)(uVar2)))));
    0 /* ctorZero */;
    (*pcVar6)(piVar3,auStack_20);
    piVar3 = *(int **)(((int)this) + 0x118);
    pcVar6 = *(code **)(*piVar3 + 0x4c);
    0 /* ctorZero */;
    uVar4 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar1 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar1 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar4),(int)(uVar1)))));
    0 /* ctorZero */;
    uVar4 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar2 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar4 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar4),(int)(uVar2)))));
    0 /* ctorZero */;
    (*pcVar6)(piVar3,auStack_20);
    piVar3 = *(int **)(((int)this) + 0x11c);
    pcVar6 = *(code **)(*piVar3 + 0x4c);
    0 /* ctorZero */;
    cocos2d::CCDirector::sharedDirector();
    uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar4 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(auStack_30[0]),(int)(uVar4)))));
    0 /* ctorZero */;
    cocos2d::CCDirector::sharedDirector();
    uVar1 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar1 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uStack_24),(int)(uVar1)))));
    0 /* ctorZero */;
    (*pcVar6)(piVar3,auStack_20);
    if (p2 == 0) {
      piVar5 = *(int **)(((int)this) + 0x120);
      pcVar6 = *(code **)(*piVar5 + 0x22c);
      func_0079e45c(auStack_20,&g_004c6d9e + g_004c6e60,auStack_28);
      piVar3 = (int *)0 /* ctorZero */;
      uVar4 = (undefined4)((**(code **)(*piVar3 + 0x214))());
      (*pcVar6)(piVar5,uVar4);
    }
    else {
      (**(code **)(**(int **)(((int)this) + 0x128) + 0x90))(*(int **)(((int)this) + 0x128),0);
      (**(code **)(**(int **)(((int)this) + 300) + 0x90))(*(int **)(((int)this) + 300),0);
      piVar5 = *(int **)(((int)this) + 0x120);
      pcVar6 = *(code **)(*piVar5 + 0x22c);
      func_0079e45c(auStack_20,&g_004c6d70 + g_004c6e5c,auStack_28);
      piVar3 = (int *)0 /* ctorZero */;
      uVar4 = (undefined4)((**(code **)(*piVar3 + 0x214))());
      (*pcVar6)(piVar5,uVar4);
    }
  }
  func_0079e2bc(auStack_20);
  return;
}

bool BLFightRecordItemView::init()
{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  int *piVar7;
  undefined4 auStack_30 [2];
  undefined1 auStack_28 [4];
  undefined4 uStack_24;
  undefined1 auStack_20 [12];
  
  iVar1 = ((cocos2d::CCLayer *)this)->init();
  if (iVar1 != 0) {
    iVar2 = ((BLFightRecordItemPresenter *)this)->create((BLFightRecordItemView*)((int)this));
    *(int *)((int)this + 4*(0x42)) = iVar2;
    if (iVar2 != 0) {
      ((cocos2d::CCObject *)this)->retain();
    }
    func_0079e45c(auStack_20,&g_004c6e9c + g_004c7278,auStack_28);
    iVar2 = 0 /* ctorZero */;
    *(int *)((int)this + 4*(0x43)) = iVar2;
    func_0079e2bc(auStack_20);
    piVar7 = (int *)*(int *)((int)this + 4*(0x43));
    pcVar6 = *(code **)(*piVar7 + 0x88);
    0 /* ctorZero */;
    uVar5 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar5),(int)(uVar3)))));
    0 /* ctorZero */;
    uVar5 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar5),(int)(uVar4)))));
    0 /* ctorZero */;
    (*pcVar6)(piVar7,auStack_20);
    piVar7 = (int *)*(int *)((int)this + 4*(0x43));
    pcVar6 = *(code **)(*piVar7 + 0x4c);
    0 /* ctorZero */;
    uVar5 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar5),(int)(uVar3)))));
    0 /* ctorZero */;
    uVar5 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar5),(int)(uVar4)))));
    0 /* ctorZero */;
    (*pcVar6)(piVar7,auStack_20);
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x43)),1);
    piVar7 = (int *)cocos2d::extension::CCControlButton::create();
    *(int *)((int)this + 4*(0x44)) = (int)piVar7;
    (**(code **)(*piVar7 + 0x294))(piVar7,0);
    func_0079e45c(auStack_20,&g_004c6f94 + g_004c7284,auStack_28);
    uVar5 = (undefined4)(0 /* ctorZero */);
    func_0079e2bc(auStack_20);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x44)) + 0x30c))((int *)*(int *)((int)this + 4*(0x44)),uVar5,1);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x44)) + 0x40))((int *)*(int *)((int)this + 4*(0x44)),0x3f800000);
    piVar7 = (int *)*(int *)((int)this + 4*(0x44));
    pcVar6 = *(code **)(*piVar7 + 0x28c);
    0 /* ctorZero */;
    (*pcVar6)(piVar7,auStack_20);
    piVar7 = (int *)*(int *)((int)this + 4*(0x44));
    pcVar6 = *(code **)(*piVar7 + 0x4c);
    0 /* ctorZero */;
    uVar5 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar5),(int)(uVar3)))));
    0 /* ctorZero */;
    uVar5 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar5),(int)(uVar4)))));
    0 /* ctorZero */;
    (*pcVar6)(piVar7,auStack_20);
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x44)),2);
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(g_004c7294),(int)(uVar5)))));
    piVar7 = (int *)cocos2d::CCLabelTTF::create((char const*)&g_004c706c + g_004c729c, (char const*)&g_004c706a + g_004c7298, uVar5);
    *(int *)((int)this + 4*(0x45)) = (int)piVar7;
    pcVar6 = *(code **)(*piVar7 + 0x4c);
    0 /* ctorZero */;
    uVar5 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar5),(int)(uVar3)))));
    0 /* ctorZero */;
    uVar5 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar5),(int)(uVar4)))));
    0 /* ctorZero */;
    (*pcVar6)(piVar7,auStack_20);
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x45)),2);
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(g_004c7294),(int)(uVar5)))));
    piVar7 = (int *)cocos2d::CCLabelTTF::create((char const*)&g_004c70ee + g_004c72a4, (char const*)&g_004c70ee + g_004c72a4, uVar5);
    *(int *)((int)this + 4*(0x46)) = (int)piVar7;
    pcVar6 = *(code **)(*piVar7 + 0x4c);
    0 /* ctorZero */;
    uVar5 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar5),(int)(uVar3)))));
    0 /* ctorZero */;
    uVar5 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar5),(int)(uVar4)))));
    0 /* ctorZero */;
    (*pcVar6)(piVar7,auStack_20);
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x46)),2);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x46)) + 0x1b4))((int *)*(int *)((int)this + 4*(0x46)),&g_004c716a + g_004c72ac)
    ;
    func_0079e45c(auStack_20,&g_004c7176 + g_004c72b0,auStack_28);
    iVar2 = 0 /* ctorZero */;
    *(int *)((int)this + 4*(0x47)) = iVar2;
    func_0079e2bc(auStack_20);
    piVar7 = (int *)*(int *)((int)this + 4*(0x47));
    pcVar6 = *(code **)(*piVar7 + 0x4c);
    0 /* ctorZero */;
    uVar5 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar5),(int)(uVar3)))));
    0 /* ctorZero */;
    uVar5 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar5),(int)(uVar4)))));
    0 /* ctorZero */;
    (*pcVar6)(piVar7,auStack_20);
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x47)),2);
    func_0079e45c(auStack_20,&g_004c7208 + g_004c72b8,auStack_28);
    iVar2 = 0 /* ctorZero */;
    *(int *)((int)this + 4*(0x48)) = iVar2;
    func_0079e2bc(auStack_20);
    piVar7 = (int *)*(int *)((int)this + 4*(0x48));
    pcVar6 = *(code **)(*piVar7 + 0x4c);
    0 /* ctorZero */;
    (*pcVar6)(piVar7,auStack_20);
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x48)),2);
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(g_004c7294),(int)(uVar5)))));
    piVar7 = (int *)cocos2d::CCLabelTTF::create((char const*)&g_004c7260 + g_004c72c0, (char const*)&g_004c725e + g_004c72bc, uVar5);
    *(int *)((int)this + 4*(0x49)) = (int)piVar7;
    pcVar6 = *(code **)(*piVar7 + 0x7c);
    0 /* ctorZero */;
    (*pcVar6)(piVar7,auStack_20);
    piVar7 = (int *)*(int *)((int)this + 4*(0x49));
    pcVar6 = *(code **)(*piVar7 + 0x4c);
    0 /* ctorZero */;
    uVar5 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar5),(int)(uVar3)))));
    0 /* ctorZero */;
    uVar5 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar5),(int)(uVar4)))));
    0 /* ctorZero */;
    (*pcVar6)(piVar7,auStack_20);
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x49)),2);
    piVar7 = (int *)cocos2d::extension::CCControlButton::create();
    *(int *)((int)this + 4*(0x4a)) = (int)piVar7;
    (**(code **)(*piVar7 + 0x294))(piVar7,0);
    func_0079e45c(auStack_20,&g_004c7354 + g_004c74cc,auStack_28);
    uVar5 = (undefined4)(0 /* ctorZero */);
    func_0079e2bc(auStack_20);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x4a)) + 0x30c))((int *)*(int *)((int)this + 4*(0x4a)),uVar5,1);
    piVar7 = (int *)*(int *)((int)this + 4*(0x4a));
    pcVar6 = *(code **)(*piVar7 + 0x28c);
    0 /* ctorZero */;
    (*pcVar6)(piVar7,auStack_20);
    piVar7 = (int *)*(int *)((int)this + 4*(0x4a));
    pcVar6 = *(code **)(*piVar7 + 0x4c);
    0 /* ctorZero */;
    uVar5 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar5),(int)(uVar3)))));
    0 /* ctorZero */;
    uVar5 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar5),(int)(uVar4)))));
    0 /* ctorZero */;
    (*pcVar6)(piVar7,auStack_20);
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x4a)),3);
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(g_004c74dc),(int)(uVar5)))));
    piVar7 = (int *)cocos2d::CCLabelTTF::create((char const*)&g_004c741c + g_004c74e4, (char const*)&g_004c741a + g_004c74e0, uVar5);
    *(int *)((int)this + 4*(0x4b)) = (int)piVar7;
    (**(code **)(*piVar7 + 0x1b4))(piVar7,&g_004c742c + g_004c74e8);
    piVar7 = (int *)*(int *)((int)this + 4*(0x4b));
    pcVar6 = *(code **)(*piVar7 + 0x4c);
    uVar5 = (undefined4)((**(code **)(*(int *)*(int *)((int)this + 4*(0x4a)) + 0x50))());
    (*pcVar6)(piVar7,uVar5);
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x4b)),4);
    pcVar6 = *(code **)(*(int *)this + 0x88);
    0 /* ctorZero */;
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(auStack_30[0]),(int)(uVar5)))));
    0 /* ctorZero */;
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uStack_24),(int)(uVar3)))));
    0 /* ctorZero */;
    (*pcVar6)(((int)this),auStack_20);
    ((BLFightRecordItemPresenter *)*(int *)((int)this + 4*(0x42)))->initWithView((BLFightRecordItemView*)((int)this));
  }
  return iVar1;
}

void BLFightRecordItemView::onEnter()
{
  ((BLFightRecordItemPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLFightRecordItemView::onExit()
{
  ((BLFightRecordItemPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}
