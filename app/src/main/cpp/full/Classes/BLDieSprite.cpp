#include "BLDieSprite.h"
#include "CCNode.h"
#include "CCArray.h"
#include "CCSprite.h"
#include "CCObject.h"
#include "CCSpriteFrameCache.h"
#include "ItemData.h"
#include "BLLeakUtils.h"
#include "BLMission.h"
#include "BLRole.h"
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
extern "C" long long func_0079e4ec(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e51c(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long func_0079e5ec(...);
extern "C" long long func_0079e62c(...);
extern "C" long long func_0079e63c(...);
extern "C" long long func_0079e724(...);
extern "C" long long func_0079e794(...);
extern "C" long long func_0079e7b4(...);
extern "C" long long func_0079e7e4(...);
extern "C" long long func_0079e8a4(...);
extern "C" long long func_0079e8b4(...);
extern "C" long long func_0079e8f4(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long _DAT_00437a08;
extern "C" unsigned long _DAT_00437a0c;
extern "C" unsigned long _DAT_00437af4;
extern "C" unsigned long _DAT_00437af8;
extern "C" unsigned long _DAT_00437b9c;
extern "C" unsigned long _DAT_00437e30;
extern "C" unsigned long _DAT_00437e34;
extern "C" unsigned long _DAT_00437e38;
extern "C" unsigned long _DAT_00437e3c;
extern "C" unsigned long _DAT_00437e40;
extern "C" unsigned long _DAT_00437e44;
extern "C" unsigned long _DAT_00437e48;
extern "C" unsigned long _DAT_00437e4c;
extern "C" unsigned long _DAT_00437e50;
extern "C" unsigned long _DAT_00437e78;
extern "C" unsigned long extraout_r1;
extern "C" unsigned long extraout_r1_00;
extern "C" unsigned long extraout_r1_01;
extern "C" unsigned long extraout_r1_02;
extern "C" unsigned long g_00437a08;
extern "C" unsigned long g_00437a0c;
extern "C" unsigned long g_00437af4;
extern "C" unsigned long g_00437af8;
extern "C" unsigned long g_00437b9c;
extern "C" unsigned long g_00437e30;
extern "C" unsigned long g_00437e34;
extern "C" unsigned long g_00437e38;
extern "C" unsigned long g_00437e3c;
extern "C" unsigned long g_00437e40;
extern "C" unsigned long g_00437e44;
extern "C" unsigned long g_00437e48;
extern "C" unsigned long g_00437e4c;
extern "C" unsigned long g_00437e50;
extern "C" unsigned long g_00437e78;
ItemData* BLDieSprite::getItemData() const
{
  return (ItemData*)(*(undefined4 *)(((int)this) + 0x1b4));
}

float BLDieSprite::getMapHeight() const
{
  return *(undefined4 *)(((int)this) + 0x1b8);
}

void BLDieSprite::setMapHeight(float p1)
{
  *(undefined4 *)(((int)this) + 0x1b8) = p1;
  return;
}

float BLDieSprite::getStartRotation() const
{
  return *(undefined4 *)(((int)this) + 0x1bc);
}

void BLDieSprite::setStartRotation(float p1)
{
  *(undefined4 *)(((int)this) + 0x1bc) = p1;
  return;
}

float BLDieSprite::getGravity() const
{
  return *(undefined4 *)(((int)this) + 0x1c0);
}

void BLDieSprite::setGravity(float p1)
{
  *(undefined4 *)(((int)this) + 0x1c0) = p1;
  return;
}

float BLDieSprite::getSpeedX() const
{
  return *(undefined4 *)(((int)this) + 0x1c4);
}

void BLDieSprite::setSpeedX(float p1)
{
  *(undefined4 *)(((int)this) + 0x1c4) = p1;
  return;
}

float BLDieSprite::getSpeedY() const
{
  return *(undefined4 *)(((int)this) + 0x1c8);
}

void BLDieSprite::setSpeedY(float p1)
{
  *(undefined4 *)(((int)this) + 0x1c8) = p1;
  return;
}

float BLDieSprite::getSpeedAddX() const
{
  return *(undefined4 *)(((int)this) + 0x1cc);
}

void BLDieSprite::setSpeedAddX(float p1)
{
  *(undefined4 *)(((int)this) + 0x1cc) = p1;
  return;
}

float BLDieSprite::getSpeedAddY() const
{
  return *(undefined4 *)(((int)this) + 0x1d0);
}

void BLDieSprite::setSpeedAddY(float p1)
{
  *(undefined4 *)(((int)this) + 0x1d0) = p1;
  return;
}

float BLDieSprite::getAngle() const
{
  return *(undefined4 *)(((int)this) + 0x1d4);
}

void BLDieSprite::setAngle(float p1)
{
  *(undefined4 *)(((int)this) + 0x1d4) = p1;
  return;
}

float BLDieSprite::getAlphaTimes() const
{
  return *(undefined4 *)(((int)this) + 0x1d8);
}

void BLDieSprite::setAlphaTimes(float p1)
{
  *(undefined4 *)(((int)this) + 0x1d8) = p1;
  return;
}

BLDieSprite::~BLDieSprite()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(g_00437a08 + 0x437998);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x294;
  *(int *)((int)this + 4*(0x3d)) = iVar2 + 0x2d4;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  if (*(int *)((int)this + 4*(0x6d)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x6d)) = 0;
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLDieSprite"),&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCSprite(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLDieSprite::setItemData(ItemData* p1)
{
  if (*(int *)(((int)this) + 0x1b4) != (int)(intptr_t)p1) {
    if ((int)(intptr_t)p1 != 0) {
      ((cocos2d::CCObject *)p1)->retain();
    }
    if (*(int *)(((int)this) + 0x1b4) != 0) {
      ((cocos2d::CCObject *)this)->release();
    }
    *(int *)(((int)this) + 0x1b4) = (undefined4)(intptr_t)p1;
  }
  return;
}

BLDieSprite::BLDieSprite()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(g_00437af4 + 0x437a5c);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x294;
  *(int *)((int)this + 4*(0x3d)) = iVar2 + 0x2d4;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLDieSprite"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  *(int *)((int)this + 4*(0x6e)) = 0;
  *(int *)((int)this + 4*(0x6f)) = 0;
  *(int *)((int)this + 4*(0x70)) = 0;
  *(int *)((int)this + 4*(0x75)) = 0;
  *(int *)((int)this + 4*(0x71)) = 0;
  *(int *)((int)this + 4*(0x74)) = 0;
  *(int *)((int)this + 4*(0x72)) = 0;
  *(int *)((int)this + 4*(0x73)) = 0;
  *(int *)((int)this + 4*(0x76)) = 0;
  *(undefined1 *)(((int)this) + 0x77) = 0;
  *(int *)((int)this + 4*(0x6d)) = 0;
  return;
}



void BLDieSprite::removeSelf()
{
  int *piVar1;
  undefined4 uVar2;
  
  if (*(int *)((int)this + 4*(0x6d)) != 0) {
    piVar1 = (int *)((BLMission *)this)->currentMission();
    piVar1 = (int *)(**(code **)(*piVar1 + 0x208))();
    uVar2 = (undefined4)((**(code **)(*piVar1 + 0x98))());
    ((BLRole *)uVar2)->createItemAction((ItemData*)*(int *)((int)this + 4*(0x6d)));
  }
  (**(code **)(*(int *)this + 0xec))(((int)this),1);
  return;
}

void BLDieSprite::tick(float p1)
{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  undefined4 uVar6;
  code *pcVar7;
  undefined8 uVar8;
  
  uVar2 = (undefined4)((**(code **)(*(int *)this + 0x9c))());
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x + _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar2),(int)(*(int *)((int)this + 4*(0x75)))))));
  (**(code **)(*(int *)this + 0x98))(((int)this),uVar2);
  pcVar7 = *(code **)(*(int *)this + 0x5c);
  uVar2 = (undefined4)((**(code **)(*(int *)this + 0x60))(((int)this)));
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x + _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar2),(int)(*(int *)((int)this + 4*(0x71)))))));
  (*pcVar7)(((int)this),uVar2);
  iVar3 = ((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x - _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(*(int *)((int)this + 4*(0x72))),(int)(*(int *)((int)this + 4*(0x70))))));
  *(int *)((int)this + 4*(0x72)) = iVar3;
  pcVar7 = *(code **)(*(int *)this + 100);
  uVar2 = (undefined4)((**(code **)(*(int *)this + 0x68))(((int)this)));
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x + _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar2),(int)(*(int *)((int)this + 4*(0x72)))))));
  (*pcVar7)(((int)this),uVar2);
  if (*(int *)((int)this + 4*(0x6d)) == 0) {
    (**(code **)(*(int *)this + 0x1ac))(((int)this));
    (**(code **)(*(int *)this + 0x1b4))(((int)this));
  }
  uVar2 = (undefined4)((**(code **)(*(int *)this + 0x68))(((int)this)));
  iVar3 = ((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);return ((_x < _y)?1:0);}((int)(uVar2),(int)(*(int *)((int)this + 4*(0x6e))))));
  if (iVar3 != 0) {
    if ((*(int *)((int)this + 4*(0x6d)) != 0) && ((char)*(int *)((int)this + 4*(0x77)) == '\0')) {
      *(undefined1 *)(((int)this) + 0x77) = 1;
      piVar4 = (int *)((BLMission *)this)->currentMission();
      piVar4 = (int *)(**(code **)(*piVar4 + 0x208))();
      uVar2 = (undefined4)((**(code **)(*piVar4 + 0x58))());
      ((cocos2d::CCArray *)uVar2)->addObject((cocos2d::CCObject*)((int)this));
    }
    uVar8 = ((long long)([](int _a){float _f;__builtin_memcpy(&_f,&_a,4);double _d=(double)_f;long long _o;__builtin_memcpy(&_o,&_d,8);return _o;}((int)(*(int *)((int)this + 4*(0x75))))));
    (void)(((long long)([](long long _a,long long _b){double _x,_y;__builtin_memcpy(&_x,&_a,8);__builtin_memcpy(&_y,&_b,8);double _r=(_x * _y);long long _o;__builtin_memcpy(&_o,&_r,8);return _o;}((((long long)(unsigned)((int)uVar8))|(((long long)(unsigned)((int)((ulonglong)uVar8 >> 0x20)))<<32)),(((long long)(unsigned)(g_00437e30))|(((long long)(unsigned)(g_00437e34))<<32))))));
    iVar3 = ((long long)([](long long _a){double _x;__builtin_memcpy(&_x,&_a,8);float _r=(float)_x;int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((((long long)([](long long _a,long long _b){double _x,_y;__builtin_memcpy(&_x,&_a,8);__builtin_memcpy(&_y,&_b,8);double _r=(_x * _y);long long _o;__builtin_memcpy(&_o,&_r,8);return _o;}((((long long)(unsigned)((int)uVar8))|(((long long)(unsigned)((int)((ulonglong)uVar8 >> 0x20)))<<32)),(((long long)(unsigned)(g_00437e30))|(((long long)(unsigned)(g_00437e34))<<32)))))))));
    *(int *)((int)this + 4*(0x75)) = iVar3;
    uVar8 = ((long long)([](int _a){float _f;__builtin_memcpy(&_f,&_a,4);double _d=(double)_f;long long _o;__builtin_memcpy(&_o,&_d,8);return _o;}((int)(*(int *)((int)this + 4*(0x71))))));
    (void)(((long long)([](long long _a,long long _b){double _x,_y;__builtin_memcpy(&_x,&_a,8);__builtin_memcpy(&_y,&_b,8);double _r=(_x * _y);long long _o;__builtin_memcpy(&_o,&_r,8);return _o;}((((long long)(unsigned)((int)uVar8))|(((long long)(unsigned)((int)((ulonglong)uVar8 >> 0x20)))<<32)),(((long long)(unsigned)(g_00437e38))|(((long long)(unsigned)(g_00437e3c))<<32))))));
    iVar3 = ((long long)([](long long _a){double _x;__builtin_memcpy(&_x,&_a,8);float _r=(float)_x;int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((((long long)([](long long _a,long long _b){double _x,_y;__builtin_memcpy(&_x,&_a,8);__builtin_memcpy(&_y,&_b,8);double _r=(_x * _y);long long _o;__builtin_memcpy(&_o,&_r,8);return _o;}((((long long)(unsigned)((int)uVar8))|(((long long)(unsigned)((int)((ulonglong)uVar8 >> 0x20)))<<32)),(((long long)(unsigned)(g_00437e38))|(((long long)(unsigned)(g_00437e3c))<<32)))))))));
    *(int *)((int)this + 4*(0x71)) = iVar3;
    (**(code **)(*(int *)this + 100))(((int)this),*(int *)((int)this + 4*(0x6e)));
    uVar5 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(*(int *)((int)this + 4*(0x72)) + -0x80000000),(int)(0x3f000000)))));
    *(int *)((int)this + 4*(0x72)) = uVar5;
    iVar3 = ((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);return ((_x < _y)?1:0);}((int)(*(int *)((int)this + 4*(0x71)) & 0x7fffffff),(int)(0x3f000000))));
    if (iVar3 != 0) {
      *(int *)((int)this + 4*(0x71)) = 0;
    }
    iVar3 = ((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);return ((_x < _y)?1:0);}((int)(uVar5 & 0x7fffffff),(int)(0x3f800000))));
    if (iVar3 != 0) {
      *(int *)((int)this + 4*(0x72)) = 0;
    }
  }
  iVar3 = ((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);return ((_x == _y)?1:0);}((int)(*(int *)((int)this + 4*(0x72))),(int)(0))));
  if ((iVar3 != 0) && (iVar3 = ((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);return ((_x == _y)?1:0);}((int)(*(int *)((int)this + 4*(0x71))),(int)(0)))), iVar3 != 0)) {
    uVar2 = (undefined4)((**(code **)(*(int *)this + 0x68))(((int)this)));
    iVar3 = ((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);return ((_x <= _y)?1:0);}((int)(uVar2),(int)(*(int *)((int)this + 4*(0x6e))))));
    if (iVar3 != 0) {
      if (*(int *)((int)this + 4*(0x6d)) == 0) {
        iVar3 = ((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x + _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(*(int *)((int)this + 4*(0x76))),(int)(0x3f800000))));
        uVar2 = (undefined4)(g_00437e50);
        *(int *)((int)this + 4*(0x76)) = iVar3;
        iVar3 = ((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);return ((_x > _y)?1:0);}((int)(iVar3),(int)(uVar2))));
        if (iVar3 != 0) {
          pcVar7 = *(code **)(*(int *)this + 0x19c);
          (**(code **)(*(int *)this + 0x194))(((int)this));
          uVar2 = (undefined4)(func_0079e2ec());
          uVar6 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x - _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(*(int *)((int)this + 4*(0x76))),(int)(g_00437e50)))));
          uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x - _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar2),(int)(uVar6)))));
          iVar3 = ((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);return ((_x > _y)?1:0);}((int)(uVar2),(int)(0))));
          uVar1 = 0;
          if (iVar3 != 0) {
            (**(code **)(*(int *)this + 0x194))(((int)this));
            uVar2 = (undefined4)(func_0079e2ec());
            uVar6 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x - _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(*(int *)((int)this + 4*(0x76))),(int)(g_00437e50)))));
            (void)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x - _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar2),(int)(uVar6)))));
            uVar8 = ((long long)([](int _a){float _f;__builtin_memcpy(&_f,&_a,4);double _d=(double)_f;long long _o;__builtin_memcpy(&_o,&_d,8);return _o;}((int)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x - _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar2),(int)(uVar6))))))));
            uVar8 = ((long long)([](long long _a,long long _b){double _x,_y;__builtin_memcpy(&_x,&_a,8);__builtin_memcpy(&_y,&_b,8);double _r=(_x * _y);long long _o;__builtin_memcpy(&_o,&_r,8);return _o;}((((long long)(unsigned)((int)uVar8))|(((long long)(unsigned)((int)((ulonglong)uVar8 >> 0x20)))<<32)),(((long long)(unsigned)(g_00437e40))|(((long long)(unsigned)(g_00437e44))<<32)))));
            (void)(((long long)([](long long _a,long long _b){double _x,_y;__builtin_memcpy(&_x,&_a,8);__builtin_memcpy(&_y,&_b,8);double _r=(_x / _y);long long _o;__builtin_memcpy(&_o,&_r,8);return _o;}((((long long)(unsigned)((int)uVar8))|(((long long)(unsigned)((int)((ulonglong)uVar8 >> 0x20)))<<32)),(((long long)(unsigned)(g_00437e48))|(((long long)(unsigned)(g_00437e4c))<<32))))));
            uVar1 = ((long long)([](long long _a){double _x;__builtin_memcpy(&_x,&_a,8);return (long long)(unsigned)_x;}((((long long)([](long long _a,long long _b){double _x,_y;__builtin_memcpy(&_x,&_a,8);__builtin_memcpy(&_y,&_b,8);double _r=(_x / _y);long long _o;__builtin_memcpy(&_o,&_r,8);return _o;}((((long long)(unsigned)((int)uVar8))|(((long long)(unsigned)((int)((ulonglong)uVar8 >> 0x20)))<<32)),(((long long)(unsigned)(g_00437e48))|(((long long)(unsigned)(g_00437e4c))<<32)))))))));
          }
          (*pcVar7)(((int)this),uVar1);
          iVar3 = (**(code **)(*(int *)this + 0x194))(((int)this));
          if (iVar3 == 0) {
            BLDieSprite::removeSelf();
          }
        }
      }
      else {
        BLDieSprite::actionEnd();
      }
    }
  }
  return;
}


void BLDieSprite::onEnter()
{
  ((cocos2d::CCNode *)this)->onEnter();
  return;
}

void BLDieSprite::onExit()
{
  ((cocos2d::CCNode *)this)->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (3) =====
void BLDieSprite::initWith(std::string * p1)
{
  undefined4 p4 = 0;

  undefined4 uVar1;
  int iVar2;
  undefined4 extraout_r1;
  int extraout_r1_00;
  int extraout_r1_01;
  undefined4 extraout_r1_02;
  code *pcVar3;
  
  uVar1 = (undefined4)(cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache());
  uVar1 = (undefined4)(((cocos2d::CCSpriteFrameCache *)uVar1)->spriteFrameByName((char const*)*(int *)p1));
  pcVar3 = *(code **)(*(int *)this + 0x1d8);
  (*pcVar3)(((int)this),uVar1,*(int *)this,pcVar3,p4);
  pcVar3 = *(code **)(*(int *)this + 0x98);
  uVar1 = (undefined4)(func_0079e8a4());
  func_0079e8b4(uVar1,0x168);
  uVar1 = (undefined4)(func_0079e794(extraout_r1));
  (*pcVar3)(((int)this),uVar1);
  *(int *)((int)this + 4*(0x70)) = 0x40000000;
  uVar1 = (undefined4)(func_0079e8a4());
  func_0079e8b4(uVar1,0x14);
  iVar2 = (undefined4)(intptr_t)(func_0079e2ec(10 - extraout_r1_00));
  *(int *)((int)this + 4*(0x71)) = iVar2;
  uVar1 = (undefined4)(func_0079e8a4());
  func_0079e8b4(uVar1,0x1e);
  iVar2 = (undefined4)(intptr_t)(func_0079e794(extraout_r1_01 + 10));
  *(int *)((int)this + 4*(0x72)) = iVar2;
  uVar1 = (undefined4)(func_0079e8a4());
  func_0079e8b4(uVar1,0x1e);
  iVar2 = (undefined4)(intptr_t)(func_0079e794(extraout_r1_02));
  *(int *)((int)this + 4*(0x75)) = iVar2;
  return;
}

undefined8 BLDieSprite::actionEnd()
{
  undefined4 p2 = 0;

  ((cocos2d::CCNode *)(*(undefined4 *)(g_00437b9c + 0x437b96)))->unschedule(0);
  return ghidra_CONCAT44(p2,((int)this));
}

bool BLDieSprite::init()
{
  int iVar1;
  
  iVar1 = (undefined4)(intptr_t)(((cocos2d::CCSprite *)this)->init());
  if (iVar1 != 0) {
    ((cocos2d::CCNode *)(*(undefined4 *)(g_00437e78 + 0x437e6c)))->schedule(0);
  }
  return ghidra_CONCAT44(((int)this),iVar1);
}
