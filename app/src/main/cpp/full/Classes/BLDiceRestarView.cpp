#include "BLDiceRestarView.h"
#include "BLDiceRestarPresenter.h"
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
extern "C" unsigned long UNK_0062b104;
extern "C" unsigned long UNK_0062b148;
extern "C" unsigned long UNK_0062b18c;
extern "C" unsigned long UNK_0062b1b4;
extern "C" unsigned long UNK_0062b358;
extern "C" unsigned long UNK_0062b43a;
extern "C" unsigned long UNK_0062b4d0;
extern "C" unsigned long UNK_0062b5d0;
extern "C" unsigned long UNK_0062b5d2;
extern "C" unsigned long UNK_0062b6c8;
extern "C" unsigned long UNK_0062b6fe;
extern "C" unsigned long UNK_0062b88c;
extern "C" unsigned long UNK_0062b88e;
extern "C" unsigned long UNK_0062b98e;
extern "C" unsigned long UNK_0062b9b8;
extern "C" unsigned long UNK_0062bb00;
extern "C" unsigned long UNK_0062bb02;
extern "C" unsigned long _DAT_0062b254;
extern "C" unsigned long _DAT_0062b258;
extern "C" unsigned long _UNK_0062b178;
extern "C" unsigned long _UNK_0062b17c;
extern "C" unsigned long _UNK_0062b190;
extern "C" unsigned long _UNK_0062b1b8;
extern "C" unsigned long _UNK_0062b73c;
extern "C" unsigned long _UNK_0062b740;
extern "C" unsigned long _UNK_0062b744;
extern "C" unsigned long _UNK_0062b748;
extern "C" unsigned long _UNK_0062b74c;
extern "C" unsigned long _UNK_0062b750;
extern "C" unsigned long _UNK_0062b754;
extern "C" unsigned long _UNK_0062b758;
extern "C" unsigned long _UNK_0062b75c;
extern "C" unsigned long _UNK_0062b760;
extern "C" unsigned long _UNK_0062b764;
extern "C" unsigned long _UNK_0062b768;
extern "C" unsigned long _UNK_0062b76c;
extern "C" unsigned long _UNK_0062b770;
extern "C" unsigned long _UNK_0062b774;
extern "C" unsigned long _UNK_0062b778;
extern "C" unsigned long _UNK_0062bba4;
extern "C" unsigned long _UNK_0062bba8;
extern "C" unsigned long _UNK_0062bbac;
extern "C" unsigned long _UNK_0062bbb0;
extern "C" unsigned long _UNK_0062bbb4;
extern "C" unsigned long _UNK_0062bbb8;
extern "C" unsigned long _UNK_0062bbbc;
extern "C" unsigned long _UNK_0062bbc0;
extern "C" unsigned long _UNK_0062bbc4;
extern "C" unsigned long _UNK_0062bbc8;
extern "C" unsigned long g_0062b104;
extern "C" unsigned long g_0062b148;
extern "C" unsigned long g_0062b178;
extern "C" unsigned long g_0062b17c;
extern "C" unsigned long g_0062b18c;
extern "C" unsigned long g_0062b190;
extern "C" unsigned long g_0062b1b4;
extern "C" unsigned long g_0062b1b8;
extern "C" unsigned long g_0062b254;
extern "C" unsigned long g_0062b258;
extern "C" unsigned long g_0062b358;
extern "C" unsigned long g_0062b43a;
extern "C" unsigned long g_0062b4d0;
extern "C" unsigned long g_0062b5d0;
extern "C" unsigned long g_0062b5d2;
extern "C" unsigned long g_0062b6c8;
extern "C" unsigned long g_0062b6fe;
extern "C" unsigned long g_0062b73c;
extern "C" unsigned long g_0062b740;
extern "C" unsigned long g_0062b744;
extern "C" unsigned long g_0062b748;
extern "C" unsigned long g_0062b74c;
extern "C" unsigned long g_0062b750;
extern "C" unsigned long g_0062b754;
extern "C" unsigned long g_0062b758;
extern "C" unsigned long g_0062b75c;
extern "C" unsigned long g_0062b760;
extern "C" unsigned long g_0062b764;
extern "C" unsigned long g_0062b768;
extern "C" unsigned long g_0062b76c;
extern "C" unsigned long g_0062b770;
extern "C" unsigned long g_0062b774;
extern "C" unsigned long g_0062b778;
extern "C" unsigned long g_0062b88c;
extern "C" unsigned long g_0062b88e;
extern "C" unsigned long g_0062b98e;
extern "C" unsigned long g_0062b9b8;
extern "C" unsigned long g_0062bb00;
extern "C" unsigned long g_0062bb02;
extern "C" unsigned long g_0062bba4;
extern "C" unsigned long g_0062bba8;
extern "C" unsigned long g_0062bbac;
extern "C" unsigned long g_0062bbb0;
extern "C" unsigned long g_0062bbb4;
extern "C" unsigned long g_0062bbb8;
extern "C" unsigned long g_0062bbbc;
extern "C" unsigned long g_0062bbc0;
extern "C" unsigned long g_0062bbc4;
extern "C" unsigned long g_0062bbc8;
BLDiceRestarView::~BLDiceRestarView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0062b104 + g_0062b178);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  if (*(int *)((int)this + 4*(0x4a)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x4a)) = 0;
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0062b148 + g_0062b17c,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLDiceRestarView::BLDiceRestarView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(g_0062b254 + 0x62b1fc);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLMainPauseView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * BLDiceRestarView::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x138)));
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

undefined4 BLDiceRestarView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x128);
}

undefined4 BLDiceRestarView::getBtnOK()
{
  return *(undefined4 *)(((int)this) + 0x130);
}

undefined4 BLDiceRestarView::getBtnNO()
{
  return *(undefined4 *)(((int)this) + 0x134);
}

undefined4 BLDiceRestarView::getBtnClose()
{
  return *(undefined4 *)(((int)this) + 300);
}

undefined4 BLDiceRestarView::getLabTitle()
{
  return *(undefined4 *)(((int)this) + 0x108);
}

undefined4 BLDiceRestarView::getLab_1()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 BLDiceRestarView::getLab_2()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

undefined4 BLDiceRestarView::getLab_3()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

undefined4 BLDiceRestarView::getLabBtnOK()
{
  return *(undefined4 *)(((int)this) + 0x118);
}

undefined4 BLDiceRestarView::getSPBackGround()
{
  return *(undefined4 *)(((int)this) + 0x124);
}

undefined4 BLDiceRestarView::getSPTabBg()
{
  return *(undefined4 *)(((int)this) + 0x120);
}


void BLDiceRestarView::onEnter()
{
  ((BLDiceRestarPresenter *)*(undefined4 *)(((int)this) + 0x128))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLDiceRestarView::onExit()
{
  ((BLDiceRestarPresenter *)*(undefined4 *)(((int)this) + 0x128))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
bool BLDiceRestarView::init()
{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 *puVar7;
  code *pcVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  undefined1 *puVar12;
  undefined4 auStack_30 [2];
  undefined1 auStack_28 [4];
  undefined4 uStack_24;
  undefined1 uStack_20;
  undefined1 uStack_1f;
  undefined1 uStack_1e;
  
  iVar1 = (undefined4)(intptr_t)(((cocos2d::CCLayer *)this)->init());
  if (iVar1 != 0) {
    (**(code **)(*(int *)this + 0x11c))(((int)this),0x24c);
    iVar2 = (undefined4)(intptr_t)(((BLDiceRestarPresenter *)this)->create((BLDiceRestarView*)((int)this)));
    *(int *)((int)this + 4*(0x4a)) = iVar2;
    piVar11 = (int *)((int)this);
    if (iVar2 != 0) {
      ((cocos2d::CCObject *)this)->retain();
    }
    func_0079e45c(&uStack_20,(unsigned char *)((char *)&g_0062b358 + (intptr_t)(g_0062b73c)),auStack_28);
    iVar2 = (undefined4)(intptr_t)(0 /* ctorZero */);
    *(int *)((int)this + 4*(0x48)) = iVar2;
    func_0079e2bc(&uStack_20);
    piVar9 = (int *)*(int *)((int)this + 4*(0x48));
    pcVar8 = *(code **)(*piVar9 + 0x88);
    puVar7 = auStack_30;
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
    (*pcVar8)(piVar9,&uStack_20);
    piVar9 = (int *)*(int *)((int)this + 4*(0x48));
    pcVar8 = *(code **)(*piVar9 + 0x4c);
    0 /* ctorZero */;
    uVar5 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar5),(int)(uVar3)))));
    0 /* ctorZero */;
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uStack_24),(int)(uVar3)))));
    0 /* ctorZero */;
    (*pcVar8)(piVar9,&uStack_20);
    pcVar8 = *(code **)(*piVar11 + 0xcc);
    (*pcVar8)(piVar11,*(int *)((int)this + 4*(0x48)),2,pcVar8,piVar11,*piVar11);
    func_0079e45c(&uStack_20,(unsigned char *)((char *)&g_0062b43a + (intptr_t)(g_0062b74c)),auStack_28);
    piVar6 = (int *)0 /* ctorZero */;
    func_0079e2bc(&uStack_20);
    iVar2 = (undefined4)(intptr_t)(cocos2d::extension::CCControlButton::create((cocos2d::extension::CCScale9Sprite*)piVar6));
    piVar11[0x4b] = iVar2;
    piVar9 = piVar11;
    (**(code **)(*(int *)piVar11[0x48] + 0xcc))((int *)piVar11[0x48],iVar2,3);
    piVar10 = (int *)piVar11[0x4b];
    pcVar8 = *(code **)(*piVar10 + 0x28c);
    (**(code **)(*piVar6 + 0x1cc))(&uStack_20,piVar6);
    (*pcVar8)(piVar10,&uStack_20);
    piVar6 = (int *)piVar11[0x4b];
    pcVar8 = *(code **)(*piVar6 + 0x5c);
    puVar7 = (undefined4 *)(**(code **)(*(int *)piVar11[0x48] + 0x8c))();
    uVar5 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x - _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(*puVar7),(int)(g_0062b750)))));
    (*pcVar8)(piVar6,uVar5);
    piVar6 = (int *)piVar11[0x4b];
    pcVar8 = *(code **)(*piVar6 + 100);
    iVar2 = (undefined4)(intptr_t)((**(code **)(*(int *)piVar11[0x48] + 0x8c))());
    uVar5 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(*(undefined4 *)(iVar2 + 4)),(int)(0x3f000000)))));
    (*pcVar8)(piVar6,uVar5);
    func_0079e45c(&uStack_20,(unsigned char *)((char *)&g_0062b4d0 + (intptr_t)(g_0062b754)),auStack_28);
    iVar2 = (undefined4)(intptr_t)(0 /* ctorZero */);
    piVar11[0x49] = iVar2;
    func_0079e2bc(&uStack_20);
    piVar6 = (int *)piVar11[0x49];
    pcVar8 = *(code **)(*piVar6 + 0x88);
    0 /* ctorZero */;
    uVar5 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar5),(int)(uVar3)))));
    puVar12 = auStack_28;
    0 /* ctorZero */;
    uVar4 = (undefined4)(*(undefined4 *)(puVar12 + 4));
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar4),(int)(uVar3)))));
    0 /* ctorZero */;
    (*pcVar8)(piVar6,&uStack_20);
    piVar6 = (int *)piVar11[0x49];
    pcVar8 = *(code **)(*piVar6 + 0x4c);
    0 /* ctorZero */;
    uVar5 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar5),(int)(uVar3)))));
    0 /* ctorZero */;
    uVar4 = (undefined4)(*(undefined4 *)(puVar12 + 4));
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar4),(int)(uVar3)))));
    0 /* ctorZero */;
    (*pcVar8)(piVar6,&uStack_20);
    (**(code **)(*piVar9 + 0xcc))(piVar9,piVar11[0x49],1);
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(g_0062b75c),(int)(uVar5)))));
    piVar6 = (int *)cocos2d::CCLabelTTF::create((char const*)(unsigned char *)((char *)&g_0062b5d2 + (intptr_t)(g_0062b764)), (char const*)(unsigned char *)((char *)&g_0062b5d0 + (intptr_t)(g_0062b760)), uVar5);
    piVar11[0x43] = (int)piVar6;
    uStack_20 = 0;
    uStack_1f = 0;
    uStack_1e = 0;
    (**(code **)(*piVar6 + 0x1b4))(piVar6,&uStack_20);
    piVar6 = (int *)piVar11[0x43];
    pcVar8 = *(code **)(*piVar6 + 0x4c);
    puVar7 = (undefined4 *)(**(code **)(*(int *)piVar11[0x49] + 0x8c))();
    uVar5 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(*puVar7),(int)(0x3f000000)))));
    iVar2 = (undefined4)(intptr_t)((**(code **)(*(int *)piVar11[0x49] + 0x8c))());
    uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(*(undefined4 *)(iVar2 + 4)),(int)(0x3f000000)))));
    uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x + _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar3),(int)(g_0062b768)))));
    0 /* ctorZero */;
    uVar5 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar5),(int)(uVar3)))));
    puVar7 = (undefined4 *)(**(code **)(*(int *)piVar11[0x49] + 0x8c))();
    uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(*puVar7),(int)(0x3f000000)))));
    iVar2 = (undefined4)(intptr_t)((**(code **)(*(int *)piVar11[0x49] + 0x8c))());
    uVar4 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(*(undefined4 *)(iVar2 + 4)),(int)(0x3f000000)))));
    uVar4 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x + _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar4),(int)(g_0062b768)))));
    0 /* ctorZero */;
    uVar4 = (undefined4)(*(undefined4 *)(puVar12 + 4));
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar4),(int)(uVar3)))));
    0 /* ctorZero */;
    (*pcVar8)(piVar6,&uStack_20);
    (**(code **)(*(int *)piVar11[0x49] + 200))((int *)piVar11[0x49],piVar11[0x43]);
    piVar6 = (int *)cocos2d::extension::CCControlButton::create();
    piVar11[0x4c] = (int)piVar6;
    (**(code **)(*piVar6 + 0x294))(piVar6,0);
    func_0079e45c(&uStack_20,(unsigned char *)((char *)&g_0062b6c8 + (intptr_t)(g_0062b76c)),puVar12);
    uVar5 = (undefined4)(0 /* ctorZero */);
    func_0079e2bc(&uStack_20);
    (**(code **)(*(int *)piVar9[0x4c] + 0x30c))((int *)piVar9[0x4c],uVar5,1);
    func_0079e45c(&uStack_20,(unsigned char *)((char *)&g_0062b6fe + (intptr_t)(g_0062b770)),puVar12);
    uVar5 = (undefined4)(0 /* ctorZero */);
    func_0079e2bc(&uStack_20);
    piVar11 = piVar9;
    (**(code **)(*(int *)piVar9[0x4c] + 0x30c))((int *)piVar9[0x4c],uVar5,2);
    piVar6 = (int *)piVar9[0x4c];
    pcVar8 = *(code **)(*piVar6 + 0x28c);
    0 /* ctorZero */;
    (*pcVar8)(piVar6,&uStack_20);
    (**(code **)(*(int *)piVar9[0x4c] + 0x30))((int *)piVar9[0x4c],0x3f800000);
    (**(code **)(*(int *)piVar9[0x4c] + 0x38))((int *)piVar9[0x4c],0x3f800000);
    piVar6 = (int *)piVar9[0x4c];
    pcVar8 = *(code **)(*piVar6 + 0x4c);
    puVar7 = (undefined4 *)(**(code **)(*(int *)piVar9[0x49] + 0x8c))();
    uVar5 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(*puVar7),(int)(0x3f000000)))));
    uVar5 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x - _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar5),(int)(g_0062bba4)))));
    iVar2 = (undefined4)(intptr_t)((**(code **)(*(int *)piVar9[0x49] + 0x8c))());
    uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(*(undefined4 *)(iVar2 + 4)),(int)(0x3f000000)))));
    uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x - _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar3),(int)(g_0062bba8)))));
    0 /* ctorZero */;
    uVar5 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar5),(int)(uVar3)))));
    puVar7 = (undefined4 *)(**(code **)(*(int *)piVar9[0x49] + 0x8c))();
    uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(*puVar7),(int)(0x3f000000)))));
    uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x - _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar3),(int)(g_0062bba4)))));
    iVar2 = (undefined4)(intptr_t)((**(code **)(*(int *)piVar9[0x49] + 0x8c))());
    uVar4 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(*(undefined4 *)(iVar2 + 4)),(int)(0x3f000000)))));
    uVar4 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x - _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar4),(int)(g_0062bba8)))));
    puVar12 = auStack_28;
    0 /* ctorZero */;
    uVar4 = (undefined4)(*(undefined4 *)(puVar12 + 4));
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar4),(int)(uVar3)))));
    0 /* ctorZero */;
    (*pcVar8)(piVar6,&uStack_20);
    (**(code **)(*(int *)piVar9[0x49] + 0xcc))((int *)piVar9[0x49],piVar9[0x4c],10);
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(0x42000000),(int)(uVar5)))));
    piVar6 = (int *)cocos2d::CCLabelTTF::create((char const*)(unsigned char *)((char *)&g_0062b88e + (intptr_t)(g_0062bbb0)), (char const*)(unsigned char *)((char *)&g_0062b88c + (intptr_t)(g_0062bbac)), uVar5);
    piVar9[0x46] = (int)piVar6;
    pcVar8 = *(code **)(*piVar6 + 0x7c);
    0 /* ctorZero */;
    (*pcVar8)(piVar6,&uStack_20);
    uStack_20 = 0xff;
    uStack_1f = 0xff;
    uStack_1e = 0;
    (**(code **)(*(int *)piVar9[0x46] + 0x1b4))((int *)piVar9[0x46],&uStack_20);
    piVar6 = (int *)piVar9[0x46];
    pcVar8 = *(code **)(*piVar6 + 0x4c);
    puVar7 = (undefined4 *)(**(code **)(*(int *)piVar9[0x4c] + 0x8c))();
    uVar5 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(*puVar7),(int)(0x3f000000)))));
    iVar2 = (undefined4)(intptr_t)((**(code **)(*(int *)piVar9[0x4c] + 0x8c))());
    uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(*(undefined4 *)(iVar2 + 4)),(int)(0x3f000000)))));
    0 /* ctorZero */;
    uVar5 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar5),(int)(uVar3)))));
    puVar7 = (undefined4 *)(**(code **)(*(int *)piVar9[0x4c] + 0x8c))();
    uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(*puVar7),(int)(0x3f000000)))));
    iVar2 = (undefined4)(intptr_t)((**(code **)(*(int *)piVar9[0x4c] + 0x8c))());
    uVar4 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(*(undefined4 *)(iVar2 + 4)),(int)(0x3f000000)))));
    0 /* ctorZero */;
    uVar4 = (undefined4)(*(undefined4 *)(puVar12 + 4));
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar4),(int)(uVar3)))));
    0 /* ctorZero */;
    (*pcVar8)(piVar6,&uStack_20);
    (**(code **)(*(int *)piVar9[0x4c] + 200))((int *)piVar9[0x4c],piVar9[0x46]);
    piVar6 = (int *)cocos2d::extension::CCControlButton::create();
    piVar9[0x4d] = (int)piVar6;
    (**(code **)(*piVar6 + 0x294))(piVar6,0);
    func_0079e45c(&uStack_20,(unsigned char *)((char *)&g_0062b98e + (intptr_t)(g_0062bbb4)),puVar12);
    uVar5 = (undefined4)(0 /* ctorZero */);
    func_0079e2bc(&uStack_20);
    (**(code **)(*(int *)piVar9[0x4d] + 0x30c))((int *)piVar9[0x4d],uVar5,1);
    func_0079e45c(&uStack_20,(unsigned char *)((char *)&g_0062b9b8 + (intptr_t)(g_0062bbb8)),auStack_28);
    uVar5 = (undefined4)(0 /* ctorZero */);
    func_0079e2bc(&uStack_20);
    piVar9 = piVar11;
    (**(code **)(*(int *)piVar11[0x4d] + 0x30c))((int *)piVar11[0x4d],uVar5,2);
    piVar6 = (int *)piVar11[0x4d];
    pcVar8 = *(code **)(*piVar6 + 0x28c);
    0 /* ctorZero */;
    (*pcVar8)(piVar6,&uStack_20);
    (**(code **)(*(int *)piVar11[0x4d] + 0x30))((int *)piVar11[0x4d],0x3f800000);
    (**(code **)(*(int *)piVar11[0x4d] + 0x38))((int *)piVar11[0x4d],0x3f800000);
    piVar6 = (int *)piVar11[0x4d];
    pcVar8 = *(code **)(*piVar6 + 0x4c);
    puVar7 = (undefined4 *)(**(code **)(*(int *)piVar11[0x49] + 0x8c))();
    uVar5 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(*puVar7),(int)(0x3f000000)))));
    uVar5 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x + _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar5),(int)(g_0062bba4)))));
    iVar2 = (undefined4)(intptr_t)((**(code **)(*(int *)piVar11[0x49] + 0x8c))());
    uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(*(undefined4 *)(iVar2 + 4)),(int)(0x3f000000)))));
    uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x - _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar3),(int)(g_0062bba8)))));
    0 /* ctorZero */;
    uVar5 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar5),(int)(uVar3)))));
    puVar7 = (undefined4 *)(**(code **)(*(int *)piVar11[0x49] + 0x8c))();
    uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(*puVar7),(int)(0x3f000000)))));
    uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x + _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar3),(int)(g_0062bba4)))));
    iVar2 = (undefined4)(intptr_t)((**(code **)(*(int *)piVar11[0x49] + 0x8c))());
    uVar4 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(*(undefined4 *)(iVar2 + 4)),(int)(0x3f000000)))));
    uVar4 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x - _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar4),(int)(g_0062bba8)))));
    puVar12 = auStack_28;
    0 /* ctorZero */;
    uVar4 = (undefined4)(*(undefined4 *)(puVar12 + 4));
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar4),(int)(uVar3)))));
    0 /* ctorZero */;
    (*pcVar8)(piVar6,&uStack_20);
    (**(code **)(*(int *)piVar11[0x49] + 0xcc))((int *)piVar11[0x49],piVar11[0x4d],10);
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(0x42000000),(int)(uVar5)))));
    piVar6 = (int *)cocos2d::CCLabelTTF::create((char const*)(unsigned char *)((char *)&g_0062bb02 + (intptr_t)(g_0062bbc8)), (char const*)(unsigned char *)((char *)&g_0062bb00 + (intptr_t)(g_0062bbc4)), uVar5);
    piVar11[0x47] = (int)piVar6;
    pcVar8 = *(code **)(*piVar6 + 0x7c);
    0 /* ctorZero */;
    (*pcVar8)(piVar6,&uStack_20);
    uStack_20 = 0xff;
    uStack_1f = 0xff;
    uStack_1e = 0;
    (**(code **)(*(int *)piVar11[0x47] + 0x1b4))((int *)piVar11[0x47],&uStack_20);
    piVar6 = (int *)piVar11[0x47];
    pcVar8 = *(code **)(*piVar6 + 0x4c);
    puVar7 = (undefined4 *)(**(code **)(*(int *)piVar11[0x4d] + 0x8c))();
    uVar5 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(*puVar7),(int)(0x3f000000)))));
    iVar2 = (undefined4)(intptr_t)((**(code **)(*(int *)piVar11[0x4d] + 0x8c))());
    uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(*(undefined4 *)(iVar2 + 4)),(int)(0x3f000000)))));
    0 /* ctorZero */;
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(auStack_30[0]),(int)(uVar5)))));
    puVar7 = (undefined4 *)(**(code **)(*(int *)piVar11[0x4d] + 0x8c))();
    uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(*puVar7),(int)(0x3f000000)))));
    iVar2 = (undefined4)(intptr_t)((**(code **)(*(int *)piVar11[0x4d] + 0x8c))());
    uVar4 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(*(undefined4 *)(iVar2 + 4)),(int)(0x3f000000)))));
    0 /* ctorZero */;
    uVar4 = (undefined4)(*(undefined4 *)(puVar12 + 4));
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar4),(int)(uVar3)))));
    0 /* ctorZero */;
    (*pcVar8)(piVar6,&uStack_20);
    (**(code **)(*(int *)piVar11[0x4d] + 200))((int *)piVar11[0x4d],piVar11[0x47]);
    ((BLDiceRestarPresenter *)piVar11[0x4a])->initWithView((BLDiceRestarView*)piVar9);
  }
  return iVar1;
}
