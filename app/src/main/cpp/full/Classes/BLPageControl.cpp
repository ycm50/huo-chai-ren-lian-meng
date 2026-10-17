#include "BLPageControl.h"
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
extern "C" long long func_0079e2dc(...);
extern "C" long long func_0079e2ec(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_00520958;
extern "C" unsigned long UNK_00520998;
extern "C" unsigned long UNK_005209f8;
extern "C" unsigned long UNK_00520a20;
extern "C" unsigned long UNK_00520a5a;
extern "C" unsigned long UNK_00520a88;
extern "C" unsigned long UNK_00520aac;
extern "C" unsigned long UNK_00520ab8;
extern "C" unsigned long UNK_00520ad2;
extern "C" unsigned long _UNK_005209e4;
extern "C" unsigned long _UNK_005209e8;
extern "C" unsigned long _UNK_005209fc;
extern "C" unsigned long _UNK_00520a24;
extern "C" unsigned long _UNK_00520b0c;
extern "C" unsigned long _UNK_00520b10;
extern "C" unsigned long _UNK_00520b14;
extern "C" unsigned long _UNK_00520b18;
extern "C" unsigned long _UNK_00520b1c;
extern "C" unsigned long extraout_r2;
extern "C" unsigned long g_00520958;
extern "C" unsigned long g_00520998;
extern "C" unsigned long g_005209e4;
extern "C" unsigned long g_005209e8;
extern "C" unsigned long g_005209f8;
extern "C" unsigned long g_005209fc;
extern "C" unsigned long g_00520a20;
extern "C" unsigned long g_00520a24;
extern "C" unsigned long g_00520a5a;
extern "C" unsigned long g_00520a88;
extern "C" unsigned long g_00520aac;
extern "C" unsigned long g_00520ab8;
extern "C" unsigned long g_00520ad2;
extern "C" unsigned long g_00520b0c;
extern "C" unsigned long g_00520b10;
extern "C" unsigned long g_00520b14;
extern "C" unsigned long g_00520b18;
extern "C" unsigned long g_00520b1c;
int BLPageControl::getPageNum() const
{
  return *(undefined4 *)(((int)this) + 0x110);
}

void BLPageControl::setPageNum(int p1)
{
  *(undefined4 *)(((int)this) + 0x110) = p1;
  return;
}

float BLPageControl::getDistance() const
{
  return *(undefined4 *)(((int)this) + 0x114);
}

void BLPageControl::setDistance(float p1)
{
  *(undefined4 *)(((int)this) + 0x114) = p1;
  return;
}

int BLPageControl::getPageControlAlignment()
{
  return *(undefined4 *)(((int)this) + 0x118);
}

undefined8 BLPageControl::setCurrentPage(int p1)
{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  code *pcVar4;
  int *piVar5;
  
  *(undefined4 *)(((int)this) + 0x11c) = p1;
  piVar5 = *(int **)(((int)this) + 0x124);
  pcVar4 = *(code **)(*piVar5 + 0x5c);
  puVar1 = (undefined4 *)(**(code **)(*piVar5 + 0x8c))(piVar5);
  uVar2 = (undefined4)(((long long)([](int _a){float _f;__builtin_memcpy(&_f,&_a,4);float _r=(float)(int)_a;int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(p1)))));
  uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x + _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(*puVar1),(int)(*(undefined4 *)(((int)this) + 0x114))))));
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar2),(int)(uVar3)))));
  (*pcVar4)(piVar5,uVar2);
  return ghidra_CONCAT44(pcVar4,((int)this));
}

int BLPageControl::getCurrentPage()
{
  return *(undefined4 *)(((int)this) + 0x11c);
}

void BLPageControl::setCurrentImage(std::string p1)
{
  func_0079e52c(((int)this) + 0x10c);
  return;
}

void BLPageControl::setTintImage(std::string p1)
{
  func_0079e52c(((int)this) + 0x108);
  return;
}

BLPageControl::~BLPageControl()
{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [8];
  
  iVar2 = *(int *)(&g_00520958 + g_005209e4);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x268;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x274;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(auStack_1c,&g_00520998 + g_005209e8,auStack_20);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)auStack_1c);
  func_0079e2bc(auStack_1c);
  func_0079e2bc(((int)this) + 0x43);
  func_0079e2bc(((int)this) + 0x42);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

std::string BLPageControl::getCurrentImage() const
{ return *(std::string *)(((int)this) + 0x10c); }

std::string BLPageControl::getTintImage() const
{ return *(std::string *)(((int)this) + 0x108); }

BLPageControl::BLPageControl()
{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [8];
  
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_00520a5a + g_00520b0c);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x268;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x274;
  iVar2 = *(int *)(&g_00520a88 + g_00520b10);
  *(int *)((int)this + 4*(0x42)) = iVar2 + 0xc;
  *(int *)((int)this + 4*(0x43)) = iVar2 + 0xc;
  *(int *)((int)this + 4*(0x46)) = 2;
  iVar2 = g_00520b14;
  *(int *)((int)this + 4*(0x48)) = 0;
  *(int *)((int)this + 4*(0x47)) = 0;
  *(int *)((int)this + 4*(0x44)) = 0;
  func_0079e2dc(((int)this) + 0x43,&g_00520aac + iVar2);
  func_0079e2dc(((int)this) + 0x42,&g_00520ab8 + g_00520b18);
  *(int *)((int)this + 4*(0x4a)) = 0;
  *(int *)((int)this + 4*(0x45)) = 0;
  *(int *)((int)this + 4*(0x49)) = 0;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(auStack_1c,&g_00520ad2 + g_00520b1c,auStack_20);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)auStack_1c);
  func_0079e2bc(auStack_1c);
  return;
}


void BLPageControl::setPageControlAlignment(EnumPageControlAlignment p1)
{
  *(undefined4 *)(((int)this) + 0x118) = p1;
  BLPageControl::reload();
  return;
}


void BLPageControl::onEnter()
{
  ((cocos2d::CCLayer *)this)->onEnter();
  return;
}

void BLPageControl::onExit()
{
  ((cocos2d::CCLayer *)this)->onExit();
  return;
}

int * BLPageControl::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(300)));
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

// ===== 修复: 补回被误删的函数占位 (2) =====
void BLPageControl::reload()
{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  int iVar7;
  int *piVar8;
  int iStack_38;
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [12];
  
  piVar1 = (int *)*(int *)((int)this + 4*(0x48));
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xec))(piVar1,1);
    *(int *)((int)this + 4*(0x48)) = 0;
  }
  iVar2 = (undefined4)(intptr_t)(cocos2d::CCSpriteBatchNode::create((char const*)*(int *)((int)this + 4*(0x42)), (unsigned int)0x1d));
  *(int *)((int)this + 4*(0x48)) = iVar2;
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x4a)) + 200))((int *)*(int *)((int)this + 4*(0x4a)),iVar2);
  iStack_38 = 0;
  while( true ) {
    if (*(int *)((int)this + 4*(0x44)) <= iStack_38) break;
    func_0079e45c(auStack_20,*(int *)((int)this + 4*(0x42)),auStack_24);
    piVar1 = (int *)0 /* ctorZero */;
    func_0079e2bc(auStack_20);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x48)) + 200))((int *)*(int *)((int)this + 4*(0x48)),piVar1);
    pcVar6 = *(code **)(*piVar1 + 0x7c);
    0 /* ctorZero */;
    (*pcVar6)(piVar1,auStack_20);
    pcVar6 = *(code **)(*piVar1 + 0x5c);
    puVar3 = (undefined4 *)(**(code **)(*piVar1 + 0x8c))(piVar1);
    uVar4 = (undefined4)(((long long)([](int _a){float _f;__builtin_memcpy(&_f,&_a,4);float _r=(float)(int)_a;int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(iStack_38)))));
    uVar5 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x + _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(*puVar3),(int)(*(int *)((int)this + 4*(0x45)))))));
    uVar4 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar4),(int)(uVar5)))));
    (*pcVar6)(piVar1,uVar4);
    iStack_38 = iStack_38 + 1;
  }
  if (*(int *)((int)this + 4*(0x49)) == 0) {
    func_0079e45c(auStack_20,*(int *)((int)this + 4*(0x43)),auStack_24);
    iVar2 = (undefined4)(intptr_t)(0 /* ctorZero */);
    *(int *)((int)this + 4*(0x49)) = iVar2;
    func_0079e2bc(auStack_20);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x4a)) + 0xcc))((int *)*(int *)((int)this + 4*(0x4a)),*(int *)((int)this + 4*(0x49)),1);
  }
  piVar8 = (int *)*(int *)((int)this + 4*(0x49));
  pcVar6 = *(code **)(*piVar8 + 0x1d8);
  func_0079e45c(auStack_20,*(int *)((int)this + 4*(0x43)),auStack_24);
  piVar1 = (int *)0 /* ctorZero */;
  uVar4 = (undefined4)((**(code **)(*piVar1 + 0x214))());
  (*pcVar6)(piVar8,uVar4);
  func_0079e2bc(auStack_20);
  piVar1 = (int *)*(int *)((int)this + 4*(0x49));
  pcVar6 = *(code **)(*piVar1 + 0x7c);
  0 /* ctorZero */;
  (*pcVar6)(piVar1,auStack_20);
  (**(code **)(*(int *)this + 0x224))(((int)this),*(int *)((int)this + 4*(0x47)));
  func_0079e45c(auStack_20,*(int *)((int)this + 4*(0x42)),auStack_24);
  piVar1 = (int *)0 /* ctorZero */;
  func_0079e2bc(auStack_20);
  uVar4 = (undefined4)(((long long)([](int _a){float _f;__builtin_memcpy(&_f,&_a,4);float _r=(float)(int)_a;int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(*(int *)((int)this + 4*(0x44)) + -1)))));
  puVar3 = (undefined4 *)(**(code **)(*piVar1 + 0x8c))(piVar1);
  uVar5 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x + _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(*puVar3),(int)(*(int *)((int)this + 4*(0x45)))))));
  uVar4 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar4),(int)(uVar5)))));
  puVar3 = (undefined4 *)(**(code **)(*piVar1 + 0x8c))(piVar1);
  iVar2 = (undefined4)(intptr_t)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x + _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar4),(int)(*puVar3)))));
  iVar7 = (undefined4)(intptr_t)(*(int *)((int)this + 4*(0x46)));
  if (iVar7 == 2) {
    iVar2 = (undefined4)(intptr_t)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(iVar2 + -0x80000000),(int)(0x3f000000)))));
    piVar1 = (int *)*(int *)((int)this + 4*(0x4a));
    pcVar6 = *(code **)(*piVar1 + 0x5c);
  }
  else if (iVar7 == 3) {
    piVar1 = (int *)*(int *)((int)this + 4*(0x4a));
    pcVar6 = *(code **)(*piVar1 + 0x5c);
  }
  else {
    if (iVar7 != 1) {
      return;
    }
    piVar1 = (int *)*(int *)((int)this + 4*(0x4a));
    iVar2 = 0;
    pcVar6 = *(code **)(*piVar1 + 0x5c);
  }
  (*pcVar6)(piVar1,iVar2);
  return;
}

bool BLPageControl::init()
{
  undefined4 p4 = 0;

  int iVar1;
  int iVar2;
  undefined4 extraout_r2;
  
  iVar1 = (undefined4)(intptr_t)(((cocos2d::CCLayer *)this)->init());
  if (iVar1 != 0) {
    iVar2 = (undefined4)(intptr_t)(cocos2d::CCLayer::create());
    *(int *)((int)this + 4*(0x4a)) = iVar2;
    (**(code **)(*(int *)this + 200))(((int)this),iVar2,extraout_r2,*(code **)(*(int *)this + 200),p4);
  }
  return iVar1;
}
