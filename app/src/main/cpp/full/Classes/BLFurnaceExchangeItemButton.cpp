#include "BLFurnaceExchangeItemButton.h"
#include "CCObject.h"
#include "CCControlButton.h"
#include "CCSprite.h"
#include "CCLabelTTF.h"
#include "CCDirector.h"
#include "CCString.h"
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
extern "C" long long func_0079e34c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long func_0079e62c(...);
extern "C" long long func_0079e69c(...);
extern "C" long long func_0079e724(...);
extern "C" long long func_0079e7e4(...);
extern "C" unsigned long UNK_00533530;
extern "C" unsigned long UNK_00533574;
extern "C" unsigned long UNK_0053359c;
extern "C" unsigned long UNK_005335c8;
extern "C" unsigned long UNK_0053367c;
extern "C" unsigned long UNK_005336b6;
extern "C" unsigned long UNK_0053377e;
extern "C" unsigned long UNK_005337a6;
extern "C" unsigned long UNK_005337c8;
extern "C" unsigned long UNK_005337f7;
extern "C" unsigned long UNK_005337fa;
extern "C" unsigned long UNK_005338b6;
extern "C" unsigned long UNK_005339f8;
extern "C" unsigned long UNK_00533a22;
extern "C" unsigned long UNK_00533ad6;
extern "C" unsigned long UNK_00533af8;
extern "C" unsigned long UNK_00533b09;
extern "C" unsigned long UNK_00533b0f;
extern "C" unsigned long UNK_00533d20;
extern "C" unsigned long UNK_00533ddc;
extern "C" unsigned long UNK_00533de8;
extern "C" unsigned long UNK_00533f2a;
extern "C" unsigned long _UNK_00533564;
extern "C" unsigned long _UNK_00533578;
extern "C" unsigned long _UNK_005335a0;
extern "C" unsigned long _UNK_00533628;
extern "C" unsigned long _UNK_00533750;
extern "C" unsigned long _UNK_00533754;
extern "C" unsigned long _UNK_00533758;
extern "C" unsigned long _UNK_0053375c;
extern "C" unsigned long _UNK_00533870;
extern "C" unsigned long _UNK_00533874;
extern "C" unsigned long _UNK_00533878;
extern "C" unsigned long _UNK_0053387c;
extern "C" unsigned long _UNK_00533880;
extern "C" unsigned long _UNK_00533884;
extern "C" unsigned long _UNK_00533888;
extern "C" unsigned long _UNK_005339c8;
extern "C" unsigned long _UNK_005339cc;
extern "C" unsigned long _UNK_005339d0;
extern "C" unsigned long _UNK_00533cc0;
extern "C" unsigned long _UNK_00533cc4;
extern "C" unsigned long _UNK_00533cc8;
extern "C" unsigned long _UNK_00533ccc;
extern "C" unsigned long _UNK_00533cd0;
extern "C" unsigned long _UNK_00533cd4;
extern "C" unsigned long _UNK_00533cd8;
extern "C" unsigned long _UNK_00533cdc;
extern "C" unsigned long _UNK_00533ce0;
extern "C" unsigned long _UNK_00533ed8;
extern "C" unsigned long _UNK_00533edc;
extern "C" unsigned long _UNK_00533ee0;
extern "C" unsigned long _UNK_00533ee4;
extern "C" unsigned long _UNK_00533ee8;
extern "C" unsigned long _UNK_00533f44;
extern "C" unsigned long g_00533530;
extern "C" unsigned long g_00533564;
extern "C" unsigned long g_00533574;
extern "C" unsigned long g_00533578;
extern "C" unsigned long g_0053359c;
extern "C" unsigned long g_005335a0;
extern "C" unsigned long g_005335c8;
extern "C" unsigned long g_00533628;
extern "C" unsigned long g_0053367c;
extern "C" unsigned long g_005336b6;
extern "C" unsigned long g_00533750;
extern "C" unsigned long g_00533754;
extern "C" unsigned long g_00533758;
extern "C" unsigned long g_0053375c;
extern "C" unsigned long g_0053377e;
extern "C" unsigned long g_005337a6;
extern "C" unsigned long g_005337c8;
extern "C" unsigned long g_005337f7;
extern "C" unsigned long g_005337fa;
extern "C" unsigned long g_00533870;
extern "C" unsigned long g_00533874;
extern "C" unsigned long g_00533878;
extern "C" unsigned long g_0053387c;
extern "C" unsigned long g_00533880;
extern "C" unsigned long g_00533884;
extern "C" unsigned long g_00533888;
extern "C" unsigned long g_005338b6;
extern "C" unsigned long g_005339c8;
extern "C" unsigned long g_005339cc;
extern "C" unsigned long g_005339d0;
extern "C" unsigned long g_005339f8;
extern "C" unsigned long g_00533a22;
extern "C" unsigned long g_00533ad6;
extern "C" unsigned long g_00533af8;
extern "C" unsigned long g_00533b09;
extern "C" unsigned long g_00533b0f;
extern "C" unsigned long g_00533cc0;
extern "C" unsigned long g_00533cc4;
extern "C" unsigned long g_00533cc8;
extern "C" unsigned long g_00533ccc;
extern "C" unsigned long g_00533cd0;
extern "C" unsigned long g_00533cd4;
extern "C" unsigned long g_00533cd8;
extern "C" unsigned long g_00533cdc;
extern "C" unsigned long g_00533ce0;
extern "C" unsigned long g_00533d20;
extern "C" unsigned long g_00533ddc;
extern "C" unsigned long g_00533de8;
extern "C" unsigned long g_00533ed8;
extern "C" unsigned long g_00533edc;
extern "C" unsigned long g_00533ee0;
extern "C" unsigned long g_00533ee4;
extern "C" unsigned long g_00533ee8;
extern "C" unsigned long g_00533f2a;
extern "C" unsigned long g_00533f44;
BLFurnaceExchangeItemButton::~BLFurnaceExchangeItemButton()
{
  int iVar1;
  
  iVar1 = *(int *)(&g_00533530 + g_00533564);
  *(int *)this = iVar1 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar1 + 0x33c;
  *(int *)((int)this + 4*(0x3a)) = iVar1 + 0x36c;
  *(int *)((int)this + 4*(0x3b)) = iVar1 + 0x378;
  *(int *)((int)this + 4*(0x42)) = iVar1 + 0x388;
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCControlButton(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

int * BLFurnaceExchangeItemButton::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x1b8)));
  (void)(((long long)::memset((void *)(piVar1),(int)(0),(size_t)(0x1b8))));
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_005335c8 + g_00533628);
  *piVar1 = iVar2 + 8;
  piVar1[0x39] = iVar2 + 0x33c;
  piVar1[0x3a] = iVar2 + 0x36c;
  piVar1[0x3b] = iVar2 + 0x378;
  piVar1[0x42] = iVar2 + 0x388;
  iVar2 = ((BLFurnaceExchangeItemButton *)piVar1)->init();
  if (iVar2 == 0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    piVar1 = (int *)0x0;
  }
  else {
    ((cocos2d::CCObject *)piVar1)->autorelease();
  }
  return (int *)(piVar1);
}

// ===== 修复: 补回被误删的函数占位 (6) =====
void BLFurnaceExchangeItemButton::setName(std::string const& p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLFurnaceExchangeItemButton::setCount(int p1)
{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  code *pcVar4;
  int *piVar5;
  undefined1 auStack_38 [8];
  undefined4 auStack_30 [2];
  undefined1 auStack_28 [4];
  undefined4 uStack_24;
  undefined1 auStack_20 [12];
  
  piVar5 = (int *)*(int *)((int)this + 4*(0x65));
  if (piVar5 == (int *)0x0) {
    uVar2 = (undefined4)((**(code **)(*(int *)this + 0x8c))());
    0 /* ctorZero */;
    cocos2d::CCString::createWithFormat((char const*)(unsigned char *)((char *)&g_005337a6 + (intptr_t)(g_00533874)), p1);
    uVar2 = (undefined4)(((cocos2d::CCString *)this)->getCString());
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(func_0079e4dc(g_00533878,uVar3));
    piVar5 = (int *)cocos2d::CCLabelTTF::create((char const*)uVar2, (char const*)(unsigned char *)((char *)&g_005337c8 + (intptr_t)(g_0053387c)), uVar3);
    *(int *)((int)this + 4*(0x65)) = (int)piVar5;
    pcVar4 = *(code **)(*piVar5 + 0x7c);
    0 /* ctorZero */;
    (*pcVar4)(piVar5,auStack_20);
    iVar1 = (undefined4)(intptr_t)(g_00533880);
    ((cocos2d::CCLabelTTF *)(*(int *)((int)this + 4*(0x65))))->enableStroke(*(cocos2d::_ccColor3B const*)(unsigned char *)((char *)&g_005337f7 + (intptr_t)(g_00533880)), 0x3f800000, 1);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x65)) + 0x1b4))((int *)*(int *)((int)this + 4*(0x65)),&g_005337fa + iVar1);
    piVar5 = (int *)*(int *)((int)this + 4*(0x65));
    pcVar4 = *(code **)(*piVar5 + 0x4c);
    0 /* ctorZero */;
    cocos2d::CCDirector::sharedDirector();
    uVar2 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar2 = (undefined4)(func_0079e4dc(auStack_30[0],uVar2));
    0 /* ctorZero */;
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(func_0079e4dc(uStack_24,uVar3));
    0 /* ctorZero */;
    (*pcVar4)(piVar5,auStack_20);
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x65)),1);
  }
  else {
    pcVar4 = *(code **)(*piVar5 + 0x234);
    cocos2d::CCString::createWithFormat((char const*)(unsigned char *)((char *)&g_0053377e + (intptr_t)(g_00533870)));
    uVar2 = (undefined4)(((cocos2d::CCString *)this)->getCString());
    (*pcVar4)(piVar5,uVar2);
  }
  return;
}

void BLFurnaceExchangeItemButton::setAlreadyBuy(bool p1)
{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined1 uStack_48;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 auStack_30 [2];
  undefined1 auStack_28 [4];
  undefined4 uStack_24;
  undefined1 auStack_20 [12];
  
  uStack_48 = (undefined1)p1;
  *(undefined1 *)(((int)this) + 0x6d) = uStack_48;
  if (*(int *)((int)this + 4*(0x6a)) == 0) {
    iVar1 = (undefined4)(intptr_t)(cocos2d::CCSprite::create((char const*)(unsigned char *)((char *)&g_005338b6 + (intptr_t)(g_005339d0))));
    *(int *)((int)this + 4*(0x6a)) = iVar1;
    uVar2 = (undefined4)((**(code **)(*(int *)this + 0x8c))(((int)this)));
    0 /* ctorZero */;
    piVar5 = (int *)*(int *)((int)this + 4*(0x6a));
    pcVar6 = *(code **)(*piVar5 + 0x4c);
    uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uStack_38),(int)(0x3f000000)))));
    uVar7 = (undefined4)(intptr_t)(((long long)([](int _a){float _f;__builtin_memcpy(&_f,&_a,4);double _d=(double)_f;long long _o;__builtin_memcpy(&_o,&_d,8);return _o;}((int)(uStack_34)))));
    (void)(((long long)([](long long _a,long long _b){double _x,_y;__builtin_memcpy(&_x,&_a,8);__builtin_memcpy(&_y,&_b,8);double _r=(_x * _y);long long _o;__builtin_memcpy(&_o,&_r,8);return _o;}((((long long)(unsigned)((int)uVar7))|(((long long)(unsigned)((int)((ulonglong)uVar7 >> 0x20)))<<32)),(((long long)(unsigned)(g_005339c8))|(((long long)(unsigned)(g_005339cc))<<32))))));
    uVar3 = (undefined4)(((long long)([](long long _a){double _x;__builtin_memcpy(&_x,&_a,8);float _r=(float)_x;int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((((long long)([](long long _a,long long _b){double _x,_y;__builtin_memcpy(&_x,&_a,8);__builtin_memcpy(&_y,&_b,8);double _r=(_x * _y);long long _o;__builtin_memcpy(&_o,&_r,8);return _o;}((((long long)(unsigned)((int)uVar7))|(((long long)(unsigned)((int)((ulonglong)uVar7 >> 0x20)))<<32)),(((long long)(unsigned)(g_005339c8))|(((long long)(unsigned)(g_005339cc))<<32))))))))));
    0 /* ctorZero */;
    cocos2d::CCDirector::sharedDirector();
    uVar2 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(auStack_30[0]),(int)(uVar2)))));
    uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uStack_38),(int)(0x3f000000)))));
    uVar7 = (undefined4)(intptr_t)(((long long)([](int _a){float _f;__builtin_memcpy(&_f,&_a,4);double _d=(double)_f;long long _o;__builtin_memcpy(&_o,&_d,8);return _o;}((int)(uStack_34)))));
    (void)(((long long)([](long long _a,long long _b){double _x,_y;__builtin_memcpy(&_x,&_a,8);__builtin_memcpy(&_y,&_b,8);double _r=(_x * _y);long long _o;__builtin_memcpy(&_o,&_r,8);return _o;}((((long long)(unsigned)((int)uVar7))|(((long long)(unsigned)((int)((ulonglong)uVar7 >> 0x20)))<<32)),(((long long)(unsigned)(g_005339c8))|(((long long)(unsigned)(g_005339cc))<<32))))));
    uVar4 = (undefined4)(((long long)([](long long _a){double _x;__builtin_memcpy(&_x,&_a,8);float _r=(float)_x;int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((((long long)([](long long _a,long long _b){double _x,_y;__builtin_memcpy(&_x,&_a,8);__builtin_memcpy(&_y,&_b,8);double _r=(_x * _y);long long _o;__builtin_memcpy(&_o,&_r,8);return _o;}((((long long)(unsigned)((int)uVar7))|(((long long)(unsigned)((int)((ulonglong)uVar7 >> 0x20)))<<32)),(((long long)(unsigned)(g_005339c8))|(((long long)(unsigned)(g_005339cc))<<32))))))))));
    0 /* ctorZero */;
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uStack_24),(int)(uVar3)))));
    0 /* ctorZero */;
    (*pcVar6)(piVar5,auStack_20);
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x6a)),2);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x6a)) + 0x90))((int *)*(int *)((int)this + 4*(0x6a)),0);
  }
  if (p1 == 0) {
    piVar5 = (int *)*(int *)((int)this + 4*(0x67));
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 0x90))(piVar5,1);
    }
    piVar5 = (int *)*(int *)((int)this + 4*(0x69));
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 0x90))(piVar5,1);
    }
    uVar2 = (undefined4)(0);
    piVar5 = (int *)*(int *)((int)this + 4*(0x6a));
    pcVar6 = *(code **)(*piVar5 + 0x90);
  }
  else {
    piVar5 = (int *)*(int *)((int)this + 4*(0x6a));
    uVar2 = (undefined4)(1);
    pcVar6 = *(code **)(*piVar5 + 0x90);
  }
  (*pcVar6)(piVar5,uVar2);
  return;
}

void BLFurnaceExchangeItemButton::setPrice(int p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLFurnaceExchangeItemButton::setIcon(std::string const& p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

bool BLFurnaceExchangeItemButton::init()
{
  undefined4 p4 = 0;

  int iVar1;
  int iVar2;
  
  iVar1 = (undefined4)(intptr_t)(((cocos2d::extension::CCControlButton *)this)->init());
  if (iVar1 != 0) {
    *(undefined1 *)(((int)this) + 0x6d) = 0;
    *(int *)((int)this + 4*(0x65)) = 0;
    *(int *)((int)this + 4*(0x66)) = 0;
    *(int *)((int)this + 4*(0x67)) = 0;
    *(int *)((int)this + 4*(0x68)) = 0;
    *(int *)((int)this + 4*(0x6b)) = 0;
    iVar2 = (undefined4)(intptr_t)(g_00533f44);
    *(int *)((int)this + 4*(0x6a)) = 0;
    iVar2 = (undefined4)(intptr_t)(cocos2d::CCSprite::create((char const*)&g_00533f2a + iVar2));
    *(int *)((int)this + 4*(0x69)) = iVar2;
    (**(code **)(*(int *)this + 0xcc))(((int)this),iVar2,1,*(code **)(*(int *)this + 0xcc),p4);
  }
  return iVar1;
}
