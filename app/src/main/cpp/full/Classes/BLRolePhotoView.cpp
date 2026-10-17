#include "BLRolePhotoView.h"
#include "BLLeakUtils.h"
#include "BLRolePhotoPresenter.h"
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
extern "C" unsigned long UNK_00652bd4;
extern "C" unsigned long UNK_00652c06;
extern "C" unsigned long UNK_00652c60;
extern "C" unsigned long UNK_00652c88;
extern "C" unsigned long UNK_00652fb0;
extern "C" unsigned long UNK_00652fde;
extern "C" unsigned long UNK_00653066;
extern "C" unsigned long UNK_0065309a;
extern "C" unsigned long UNK_00653144;
extern "C" unsigned long UNK_006531ca;
extern "C" unsigned long UNK_006531cc;
extern "C" unsigned long UNK_006531e0;
extern "C" unsigned long _UNK_00652c4c;
extern "C" unsigned long _UNK_00652c50;
extern "C" unsigned long _UNK_00652c64;
extern "C" unsigned long _UNK_00652c8c;
extern "C" unsigned long _UNK_00653008;
extern "C" unsigned long _UNK_0065300c;
extern "C" unsigned long _UNK_00653238;
extern "C" unsigned long _UNK_0065323c;
extern "C" unsigned long _UNK_00653240;
extern "C" unsigned long _UNK_00653244;
extern "C" unsigned long _UNK_00653248;
extern "C" unsigned long _UNK_0065324c;
extern "C" unsigned long _UNK_00653250;
extern "C" unsigned long _UNK_00653254;
extern "C" unsigned long _UNK_00653258;
extern "C" unsigned long _UNK_0065325c;
extern "C" unsigned long _UNK_00653260;
extern "C" unsigned long g_00652bd4;
extern "C" unsigned long g_00652c06;
extern "C" unsigned long g_00652c4c;
extern "C" unsigned long g_00652c50;
extern "C" unsigned long g_00652c60;
extern "C" unsigned long g_00652c64;
extern "C" unsigned long g_00652c88;
extern "C" unsigned long g_00652c8c;
extern "C" unsigned long g_00652fb0;
extern "C" unsigned long g_00652fde;
extern "C" unsigned long g_00653008;
extern "C" unsigned long g_0065300c;
extern "C" unsigned long g_00653066;
extern "C" unsigned long g_0065309a;
extern "C" unsigned long g_00653144;
extern "C" unsigned long g_006531ca;
extern "C" unsigned long g_006531cc;
extern "C" unsigned long g_006531e0;
extern "C" unsigned long g_00653238;
extern "C" unsigned long g_0065323c;
extern "C" unsigned long g_00653240;
extern "C" unsigned long g_00653244;
extern "C" unsigned long g_00653248;
extern "C" unsigned long g_0065324c;
extern "C" unsigned long g_00653250;
extern "C" unsigned long g_00653254;
extern "C" unsigned long g_00653258;
extern "C" unsigned long g_0065325c;
extern "C" unsigned long g_00653260;
BLRolePhotoView::~BLRolePhotoView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_00652bd4 + g_00652c4c);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00652c06 + g_00652c50,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  if (*(int *)((int)this + 4*(0x42)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x42)) = 0;
  }
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLRolePhotoView::onEnter()
{
  ((BLRolePhotoPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLRolePhotoView::onExit()
{
  ((BLRolePhotoPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

BLRolePhotoView::BLRolePhotoView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_00652fb0 + g_00653008);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00652fde + g_0065300c,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

void BLRolePhotoView::initView()
{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  code *pcVar7;
  int *piStack_3c;
  int aiStack_30 [2];
  undefined4 auStack_28 [2];
  undefined1 auStack_20 [4];
  undefined4 uStack_1c;
  
  0 /* ctorZero */;
  cocos2d::CCDirector::sharedDirector();
  uVar1 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar1 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(auStack_28[0]),(int)(uVar1)))));
  0 /* ctorZero */;
  cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uStack_1c),(int)(uVar2)))));
  0 /* ctorZero */;
  func_0079e45c(auStack_20,&g_00653066 + g_00653240,auStack_28);
  piVar3 = (int *)0 /* ctorZero */;
  func_0079e2bc(auStack_20);
  (**(code **)(*piVar3 + 0x40))(piVar3,0x40000000);
  (**(code **)(*(int *)this + 200))(((int)this),piVar3);
  func_0079e45c(auStack_20,&g_0065309a + g_00653244,auStack_28);
  iVar4 = 0 /* ctorZero */;
  *(int *)((int)this + 4*(0x43)) = iVar4;
  func_0079e2bc(auStack_20);
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x43)) + 0x40))((int *)*(int *)((int)this + 4*(0x43)),0x3fc00000);
  (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x43)));
  piStack_3c = (int *)((long long)::operator new((size_t)(0x118)));
  0 /* ctorZero */;
  iVar4 = (**(code **)(*piStack_3c + 0x18))(piStack_3c);
  if (iVar4 == 0) {
    (**(code **)(*piStack_3c + 8))(piStack_3c);
    piStack_3c = (int *)0x0;
  }
  else {
    ((cocos2d::CCObject *)piStack_3c)->autorelease();
  }
  *(int *)((int)this + 4*(0x44)) = (int)piStack_3c;
  iVar4 = (int)*(int *)&(*piStack_3c);
  pcVar7 = *(code **)(iVar4 + 0x4c);
  uVar1 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(aiStack_30[0] + -0x80000000),(int)(0x3f000000)))));
  puVar5 = (undefined4 *)(**(code **)(iVar4 + 0x8c))(piStack_3c);
  uVar1 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x + _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar1),(int)(*puVar5)))));
  0 /* ctorZero */;
  (*pcVar7)(piStack_3c,auStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x44)));
  func_0079e45c(auStack_20,&g_00653144 + g_00653248,auStack_28);
  piVar6 = (int *)0 /* ctorZero */;
  func_0079e2bc(auStack_20);
  pcVar7 = *(code **)(*piVar6 + 0x1d4);
  0 /* ctorZero */;
  (*pcVar7)(piVar6,auStack_20);
  pcVar7 = *(code **)(*piVar6 + 0x4c);
  iVar4 = (**(code **)(*piVar6 + 0x8c))(piVar6);
  uVar1 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(*(undefined4 *)(iVar4 + 4)),(int)(0x3f000000)))));
  iVar4 = (**(code **)(*piVar3 + 0x8c))(piVar3);
  uVar1 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x - _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar1),(int)(*(undefined4 *)(iVar4 + 4))))));
  0 /* ctorZero */;
  (*pcVar7)(piVar6,auStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),piVar6);
  piVar3 = (int *)cocos2d::CCLabelTTF::create((char const*)&g_006531cc + g_00653254, (char const*)&g_006531ca + g_00653258, g_0065325c);
  *(int *)((int)this + 4*(0x45)) = (int)piVar3;
  (**(code **)(*piVar3 + 0x1b4))(piVar3,&g_006531e0 + g_00653260);
  piVar3 = (int *)*(int *)((int)this + 4*(0x45));
  pcVar7 = *(code **)(*piVar3 + 0x4c);
  uVar1 = (undefined4)((**(code **)(*piVar6 + 0x50))(piVar6));
  (*pcVar7)(piVar3,uVar1);
  (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x45)));
  (**(code **)(*(int *)this + 0x88))(((int)this),aiStack_30);
  return;
}

bool BLRolePhotoView::init()
{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = ((cocos2d::CCLayer *)this)->init();
  if (iVar1 != 0) {
    uVar2 = (undefined4)(((BLRolePhotoPresenter *)this)->create());
    *(undefined4 *)(((int)this) + 0x108) = uVar2;
    ((cocos2d::CCObject *)this)->retain();
    BLRolePhotoView::initView();
    ((BLRolePhotoPresenter *)*(undefined4 *)(((int)this) + 0x108))->initWithView((BLRolePhotoView*)((int)this));
  }
  return iVar1;
}
