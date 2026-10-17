#include "BLEndLessTimeRwardItem.h"
#include "CCNode.h"
#include "CCSprite.h"
#include "CCLabelTTF.h"
#include "CCControlButton.h"
#include "CCString.h"
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
extern "C" long long func_0079e57c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_00529988;
extern "C" unsigned long UNK_005299b2;
extern "C" unsigned long UNK_00529a10;
extern "C" unsigned long UNK_00529a44;
extern "C" unsigned long UNK_00529ac4;
extern "C" unsigned long UNK_00529b02;
extern "C" unsigned long UNK_00529b40;
extern "C" unsigned long UNK_00529b6c;
extern "C" unsigned long UNK_00529bd6;
extern "C" unsigned long UNK_00529bd8;
extern "C" unsigned long UNK_00529bea;
extern "C" unsigned long _UNK_005299e4;
extern "C" unsigned long _UNK_005299e8;
extern "C" unsigned long _UNK_00529a70;
extern "C" unsigned long _UNK_00529a74;
extern "C" unsigned long _UNK_00529ae0;
extern "C" unsigned long _UNK_00529c40;
extern "C" unsigned long _UNK_00529c44;
extern "C" unsigned long _UNK_00529c48;
extern "C" unsigned long _UNK_00529c4c;
extern "C" unsigned long _UNK_00529c50;
extern "C" unsigned long _UNK_00529c54;
extern "C" unsigned long _UNK_00529c58;
extern "C" unsigned long _UNK_00529c5c;
extern "C" unsigned long _UNK_00529c60;
extern "C" unsigned long _UNK_00529c64;
extern "C" unsigned long _UNK_00529c68;
extern "C" unsigned long g_00529988;
extern "C" unsigned long g_005299b2;
extern "C" unsigned long g_005299e4;
extern "C" unsigned long g_005299e8;
extern "C" unsigned long g_00529a10;
extern "C" unsigned long g_00529a44;
extern "C" unsigned long g_00529a70;
extern "C" unsigned long g_00529a74;
extern "C" unsigned long g_00529ac4;
extern "C" unsigned long g_00529ae0;
extern "C" unsigned long g_00529b02;
extern "C" unsigned long g_00529b40;
extern "C" unsigned long g_00529b6c;
extern "C" unsigned long g_00529bd6;
extern "C" unsigned long g_00529bd8;
extern "C" unsigned long g_00529bea;
extern "C" unsigned long g_00529c40;
extern "C" unsigned long g_00529c44;
extern "C" unsigned long g_00529c48;
extern "C" unsigned long g_00529c4c;
extern "C" unsigned long g_00529c50;
extern "C" unsigned long g_00529c54;
extern "C" unsigned long g_00529c58;
extern "C" unsigned long g_00529c5c;
extern "C" unsigned long g_00529c60;
extern "C" unsigned long g_00529c64;
extern "C" unsigned long g_00529c68;
cocos2d::extension::CCControlButton* BLEndLessTimeRwardItem::getBtnItem() const
{
  return (cocos2d::extension::CCControlButton*)(*(undefined4 *)(((int)this) + 0x1b4));
}

cocos2d::CCLabelTTF* BLEndLessTimeRwardItem::getLabelNum() const
{
  return (cocos2d::CCLabelTTF*)(*(undefined4 *)(((int)this) + 0x1b8));
}

BLEndLessTimeRwardItem::~BLEndLessTimeRwardItem()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_00529988 + g_005299e4);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x254;
  *(int *)((int)this + 4*(0x3d)) = iVar2 + 0x294;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005299b2 + g_005299e8,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCSprite(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLEndLessTimeRwardItem::BLEndLessTimeRwardItem()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_00529a10 + g_00529a70);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x254;
  *(int *)((int)this + 4*(0x3d)) = iVar2 + 0x294;
  *(int *)((int)this + 4*(0x6d)) = 0;
  *(int *)((int)this + 4*(0x6e)) = 0;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00529a44 + g_00529a74,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

void BLEndLessTimeRwardItem::initWithItemdData(char const* p1, int p2)
{
  undefined4 uVar1;
  code *pcVar2;
  int *piVar3;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [8];
  
  piVar3 = *(int **)(((int)this) + 0x1b4);
  pcVar2 = *(code **)(*piVar3 + 0x30c);
  func_0079e45c(auStack_1c,p1,auStack_20);
  uVar1 = (undefined4)(0 /* ctorZero */);
  (*pcVar2)(piVar3,uVar1,1);
  func_0079e2bc(auStack_1c);
  piVar3 = *(int **)(((int)this) + 0x1b8);
  pcVar2 = *(code **)(*piVar3 + 0x234);
  cocos2d::CCString::createWithFormat((char const*)&g_00529ac4 + g_00529ae0, p2);
  uVar1 = (undefined4)(((cocos2d::CCString *)this)->getCString());
  (*pcVar2)(piVar3,uVar1);
  return;
}

bool BLEndLessTimeRwardItem::init()
{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  code *pcVar5;
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [12];
  
  iVar1 = ((cocos2d::CCSprite *)this)->init();
  if (iVar1 != 0) {
    func_0079e45c(auStack_20,&g_00529b02 + g_00529c40,auStack_24);
    uVar2 = (undefined4)(0 /* ctorZero */);
    func_0079e2bc(auStack_20);
    (**(code **)(*(int *)this + 200))(((int)this),uVar2);
    piVar3 = (int *)cocos2d::extension::CCControlButton::create();
    *(int *)((int)this + 4*(0x6d)) = (int)piVar3;
    (**(code **)(*piVar3 + 0x294))(piVar3,0);
    func_0079e45c(auStack_20,&g_00529b40 + g_00529c44,auStack_24);
    uVar2 = (undefined4)(0 /* ctorZero */);
    func_0079e2bc(auStack_20);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x6d)) + 0x30c))((int *)*(int *)((int)this + 4*(0x6d)),uVar2,1);
    func_0079e45c(auStack_20,&g_00529b6c + g_00529c48,auStack_24);
    uVar2 = (undefined4)(0 /* ctorZero */);
    func_0079e2bc(auStack_20);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x6d)) + 0x30c))((int *)*(int *)((int)this + 4*(0x6d)),uVar2,2);
    piVar3 = (int *)*(int *)((int)this + 4*(0x6d));
    pcVar5 = *(code **)(*piVar3 + 0x28c);
    0 /* ctorZero */;
    (*pcVar5)(piVar3,auStack_20);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x6d)) + 0x30))((int *)*(int *)((int)this + 4*(0x6d)),0x3f800000);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x6d)) + 0x38))((int *)*(int *)((int)this + 4*(0x6d)),0x3f800000);
    (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x6d)));
    piVar3 = (int *)cocos2d::CCLabelTTF::create((char const*)&g_00529bd6 + g_00529c54, (char const*)&g_00529bd8 + g_00529c58, g_00529c5c);
    *(int *)((int)this + 4*(0x6e)) = (int)piVar3;
    (**(code **)(*piVar3 + 0x1b4))(piVar3,&g_00529bea + g_00529c60);
    piVar3 = (int *)*(int *)((int)this + 4*(0x6e));
    pcVar5 = *(code **)(*piVar3 + 0x4c);
    puVar4 = (undefined4 *)(**(code **)(*(int *)*(int *)((int)this + 4*(0x6d)) + 0x8c))();
    uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x - _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(*puVar4),(int)(g_00529c64)))));
    0 /* ctorZero */;
    (*pcVar5)(piVar3,auStack_20);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x6d)) + 200))((int *)*(int *)((int)this + 4*(0x6d)),*(int *)((int)this + 4*(0x6e)));
  }
  return iVar1;
}

void BLEndLessTimeRwardItem::onEnter()
{
  ((cocos2d::CCNode *)this)->onEnter();
  return;
}

void BLEndLessTimeRwardItem::onExit()
{
  ((cocos2d::CCNode *)this)->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (2) =====
void BLEndLessTimeRwardItem::setBtnItem(cocos2d::extension::CCControlButton* p1)
{
  *(undefined4 *)(((int)this) + 0x1b4) = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  return;
}

void BLEndLessTimeRwardItem::setLabelNum(cocos2d::CCLabelTTF* p1)
{
  *(undefined4 *)(((int)this) + 0x1b8) = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  return;
}
