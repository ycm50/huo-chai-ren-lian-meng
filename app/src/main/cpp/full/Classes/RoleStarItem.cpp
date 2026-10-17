#include "RoleStarItem.h"
#include "CCSpriteBatchNode.h"
#include "CCArray.h"
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
extern "C" long long func_0079e2ec(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e52c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_005233e8;
extern "C" unsigned long UNK_00523432;
extern "C" unsigned long UNK_00523484;
extern "C" unsigned long UNK_005234ac;
extern "C" unsigned long UNK_005234c4;
extern "C" unsigned long UNK_005234ee;
extern "C" unsigned long UNK_00523512;
extern "C" unsigned long UNK_0052358e;
extern "C" unsigned long UNK_00523606;
extern "C" unsigned long _UNK_00523470;
extern "C" unsigned long _UNK_00523474;
extern "C" unsigned long _UNK_00523488;
extern "C" unsigned long _UNK_005234b0;
extern "C" unsigned long _UNK_00523550;
extern "C" unsigned long _UNK_00523554;
extern "C" unsigned long _UNK_00523558;
extern "C" unsigned long _UNK_00523594;
extern "C" unsigned long _UNK_0052367c;
extern "C" unsigned long extraout_r2;
extern "C" unsigned long g_005233e8;
extern "C" unsigned long g_00523432;
extern "C" unsigned long g_00523470;
extern "C" unsigned long g_00523474;
extern "C" unsigned long g_00523484;
extern "C" unsigned long g_00523488;
extern "C" unsigned long g_005234ac;
extern "C" unsigned long g_005234b0;
extern "C" unsigned long g_005234c4;
extern "C" unsigned long g_005234ee;
extern "C" unsigned long g_00523512;
extern "C" unsigned long g_00523550;
extern "C" unsigned long g_00523554;
extern "C" unsigned long g_00523558;
extern "C" unsigned long g_0052358e;
extern "C" unsigned long g_00523594;
extern "C" unsigned long g_00523606;
extern "C" unsigned long g_0052367c;
RoleStarItem::~RoleStarItem()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  iVar2 = *(int *)(&g_005233e8 + g_00523470);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  piStack_20 = (int *)((int)this);
  uStack_1c = (undefined4)(p2);
  uStack_18 = (undefined4)(p3);
  if (*(int *)((int)this + 4*(0x42)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x42)) = 0;
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_1c,&g_00523432 + g_00523474,&piStack_20);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_1c);
  func_0079e2bc(&uStack_1c);
  func_0079e2bc(((int)this) + 0x44);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}



void RoleStarItem::setNum(int p1)
{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  code *pcVar5;
  int *piVar6;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [8];
  
  iVar1 = ((cocos2d::CCArray *)*(undefined4 *)(((int)this) + 0x108))->count();
  while( true ) {
    if (p1 <= iVar1) break;
    func_0079e45c(auStack_1c,*(undefined4 *)(((int)this) + 0x110),auStack_20);
    piVar2 = (int *)0 /* ctorZero */;
    func_0079e2bc(auStack_1c);
    if (piVar2 != (int *)0x0) {
      pcVar5 = *(code **)(*piVar2 + 0x5c);
      puVar3 = (undefined4 *)(**(code **)(*piVar2 + 0x8c))(piVar2);
      uVar4 = (undefined4)(((long long)([](int _a){float _f;__builtin_memcpy(&_f,&_a,4);float _r=(float)(int)_a;int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(iVar1)))));
      uVar4 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar4),(int)(*puVar3)))));
      (*pcVar5)(piVar2,uVar4);
      (**(code **)(*piVar2 + 0x7c))(piVar2,&g_00523606 + g_0052367c);
      (**(code **)(**(int **)(((int)this) + 0x10c) + 200))(*(int **)(((int)this) + 0x10c),piVar2);
      ((cocos2d::CCArray *)*(undefined4 *)(((int)this) + 0x108))->addObject((cocos2d::CCObject*)piVar2);
    }
    iVar1 = iVar1 + 1;
  }
  func_0079e45c(auStack_1c,*(undefined4 *)(((int)this) + 0x110),auStack_20);
  piVar2 = (int *)0 /* ctorZero */;
  func_0079e2bc(auStack_1c);
  piVar6 = *(int **)(((int)this) + 0x10c);
  pcVar5 = *(code **)(*piVar6 + 0x5c);
  piVar2 = (int *)(**(code **)(*piVar2 + 0x8c))(piVar2);
  iVar1 = (int)*(int *)&(*piVar2);
  uVar4 = (undefined4)(((long long)([](int _a){float _f;__builtin_memcpy(&_f,&_a,4);float _r=(float)(int)_a;int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(p1)))));
  uVar4 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(iVar1 + -0x80000000),(int)(uVar4)))));
  uVar4 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar4),(int)(0x3f000000)))));
  (*pcVar5)(piVar6,uVar4);
  return;
}


void RoleStarItem::onEnter()
{
  ((cocos2d::CCLayer *)this)->onEnter();
  return;
}

void RoleStarItem::onExit()
{
  ((cocos2d::CCLayer *)this)->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (3) =====
RoleStarItem::RoleStarItem()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = (undefined4)(intptr_t)(*(int *)((unsigned char *)((char *)&g_005234c4 + (intptr_t)(g_00523550))));
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  *(int *)((int)this + 4*(0x44)) = *(int *)((unsigned char *)((char *)&g_005234ee + (intptr_t)(g_00523554))) + 0xc;
  iVar2 = (undefined4)(intptr_t)(cocos2d::CCArray::create());
  *(int *)((int)this + 4*(0x42)) = iVar2;
  if (iVar2 != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  *(int *)((int)this + 4*(0x43)) = 0;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,(unsigned char *)((char *)&g_00523512 + (intptr_t)(g_00523558)),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

void RoleStarItem::initWith(std::string * p1)
{
  undefined4 p4 = 0;

  int iVar1;
  undefined4 extraout_r2;
  
  func_0079e52c(((int)this) + 0x44);
  iVar1 = (undefined4)(intptr_t)(cocos2d::CCSpriteBatchNode::create((char const*)*(int *)p1, (unsigned int)0x1d));
  *(int *)((int)this + 4*(0x43)) = iVar1;
  (**(code **)(*(int *)this + 200))(((int)this),iVar1,extraout_r2,*(code **)(*(int *)this + 200),p4);
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x43)) + 0x7c))((int *)*(int *)((int)this + 4*(0x43)),(unsigned char *)((char *)&g_0052358e + (intptr_t)(g_00523594)));
  return;
}

bool RoleStarItem::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
