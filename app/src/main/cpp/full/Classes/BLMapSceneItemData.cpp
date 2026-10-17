#include "BLMapSceneItemData.h"
#include "CCString.h"
#include "CCObject.h"
#include "CCDictionary.h"
#include "BLLeakUtils.h"
#include "BLMonsterData.h"
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
extern "C" long long func_0079e4bc(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e6c0(...);
extern "C" long long func_0079e7e4(...);
extern "C" long long func_0079e804(...);
extern "C" long long func_0079e814(...);
extern "C" long long func_0079e824(...);
extern "C" long long func_0079e834(...);
extern "C" long long func_0079e844(...);
extern "C" long long func_0079e8c4(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long _DAT_004570ec;
extern "C" unsigned long _DAT_004570f0;
extern "C" unsigned long _DAT_004571ac;
extern "C" unsigned long _DAT_004571b0;
extern "C" unsigned long _DAT_004571b4;
extern "C" unsigned long _DAT_0045753c;
extern "C" unsigned long _DAT_00457540;
extern "C" unsigned long _DAT_00457544;
extern "C" unsigned long _DAT_00457548;
extern "C" unsigned long _DAT_0045754c;
extern "C" unsigned long _DAT_00457550;
extern "C" unsigned long _DAT_00457554;
extern "C" unsigned long _DAT_00457558;
extern "C" unsigned long _DAT_0045755c;
extern "C" unsigned long _DAT_00457560;
extern "C" unsigned long _DAT_00457564;
extern "C" unsigned long _DAT_00457568;
extern "C" unsigned long _DAT_0045756c;
extern "C" unsigned long _DAT_00457570;
extern "C" unsigned long _DAT_00457574;
extern "C" unsigned long _DAT_00457578;
extern "C" unsigned long g_004570ec;
extern "C" unsigned long g_004570f0;
extern "C" unsigned long g_004571ac;
extern "C" unsigned long g_004571b0;
extern "C" unsigned long g_004571b4;
extern "C" unsigned long g_0045753c;
extern "C" unsigned long g_00457540;
extern "C" unsigned long g_00457544;
extern "C" unsigned long g_00457548;
extern "C" unsigned long g_0045754c;
extern "C" unsigned long g_00457550;
extern "C" unsigned long g_00457554;
extern "C" unsigned long g_00457558;
extern "C" unsigned long g_0045755c;
extern "C" unsigned long g_00457560;
extern "C" unsigned long g_00457564;
extern "C" unsigned long g_00457568;
extern "C" unsigned long g_0045756c;
extern "C" unsigned long g_00457570;
extern "C" unsigned long g_00457574;
extern "C" unsigned long g_00457578;
float BLMapSceneItemData::getPositionX() const
{
  return *(undefined4 *)(((int)this) + 0x14);
}

void BLMapSceneItemData::setPositionX(float p1)
{
  *(undefined4 *)(((int)this) + 0x14) = p1;
  return;
}

float BLMapSceneItemData::getPositionY() const
{
  return *(undefined4 *)(((int)this) + 0x18);
}

void BLMapSceneItemData::setPositionY(float p1)
{
  *(undefined4 *)(((int)this) + 0x18) = p1;
  return;
}

float BLMapSceneItemData::getRotation() const
{
  return *(undefined4 *)(((int)this) + 0x1c);
}

void BLMapSceneItemData::setRotation(float p1)
{
  *(undefined4 *)(((int)this) + 0x1c) = p1;
  return;
}

float BLMapSceneItemData::getScaleX() const
{
  return *(undefined4 *)(((int)this) + 0x20);
}

void BLMapSceneItemData::setScaleX(float p1)
{
  *(undefined4 *)(((int)this) + 0x20) = p1;
  return;
}

float BLMapSceneItemData::getScaleY() const
{
  return *(undefined4 *)(((int)this) + 0x24);
}

void BLMapSceneItemData::setScaleY(float p1)
{
  *(undefined4 *)(((int)this) + 0x24) = p1;
  return;
}

float BLMapSceneItemData::getSkewX() const
{
  return *(undefined4 *)(((int)this) + 0x28);
}

void BLMapSceneItemData::setSkewX(float p1)
{
  *(undefined4 *)(((int)this) + 0x28) = p1;
  return;
}

float BLMapSceneItemData::getSkewY() const
{
  return *(undefined4 *)(((int)this) + 0x2c);
}

void BLMapSceneItemData::setSkewY(float p1)
{
  *(undefined4 *)(((int)this) + 0x2c) = p1;
  return;
}

int BLMapSceneItemData::getType() const
{
  return *(undefined4 *)(((int)this) + 0x34);
}

void BLMapSceneItemData::setType(int p1)
{
  *(undefined4 *)(((int)this) + 0x34) = p1;
  return;
}

int BLMapSceneItemData::getZorder() const
{
  return *(undefined4 *)(((int)this) + 0x38);
}

void BLMapSceneItemData::setZorder(int p1)
{
  *(undefined4 *)(((int)this) + 0x38) = p1;
  return;
}

BLMapSceneItemData::~BLMapSceneItemData()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;

  undefined4 uVar1;
  int *piStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uStack_10 = (undefined4)(p3);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLMapSceneItemData"),&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  func_0079e2bc(((int)this) + 0xc);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

std::string BLMapSceneItemData::getName() const
{ return *(std::string *)(((int)this) + 0x30); }

void BLMapSceneItemData::setName(std::string p1)
{
  func_0079e834(((int)this) + 0x30);
  return;
}

BLMapSceneItemData::BLMapSceneItemData()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uStack_10 = (undefined4)(p3);
  0 /* ctorZero */;
  iVar2 = g_004571ac;
  *(int *)((int)this + 4*(0xd)) = 0;
  iVar2 = *(int *)(iVar2 + 0x45714a);
  *(int *)((int)this + 4*(0xe)) = 0;
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0xc)) = *(int *)(g_004571b0 + 0x457156) + 0xc;
  *(int *)((int)this + 4*(5)) = 0;
  *(int *)((int)this + 4*(6)) = 0;
  *(int *)((int)this + 4*(7)) = 0;
  *(int *)((int)this + 4*(8)) = 0;
  *(int *)((int)this + 4*(9)) = 0;
  *(int *)((int)this + 4*(10)) = 0;
  *(int *)((int)this + 4*(0xb)) = 0;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLMapSceneItemData"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

bool BLMapSceneItemData::init()
{
  return 1;
}

int * BLMapSceneItemData::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x3c)));
  0 /* ctorZero */;
  if (piVar1 != (int *)0x0) {
    iVar2 = ((BLMapSceneItemData *)piVar1)->init();
    if (iVar2 == 0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      piVar1 = (int *)0x0;
    }
    else {
      ((cocos2d::CCObject *)piVar1)->autorelease();
    }
  }
  return (int *)(piVar1);
}

// ===== 修复: 补回被误删的函数占位 (1) =====
void BLMapSceneItemData::initWithDic(cocos2d::CCDictionary* p1)
{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 auStack_74 [4];
  undefined1 auStack_70 [4];
  undefined1 auStack_6c [4];
  undefined1 auStack_68 [4];
  undefined1 auStack_64 [4];
  undefined1 auStack_60 [4];
  undefined1 auStack_5c [4];
  undefined1 auStack_58 [4];
  undefined1 auStack_54 [4];
  undefined1 auStack_50 [4];
  undefined1 auStack_4c [4];
  undefined1 auStack_48 [4];
  undefined1 auStack_44 [4];
  undefined1 auStack_40 [4];
  undefined1 auStack_3c [4];
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [4];
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [8];
  
  iVar5 = (undefined4)(intptr_t)(g_0045753c + 0x457206);
  if ((int)(intptr_t)(int)(intptr_t)p1 != 0) {
    func_0079e45c(auStack_4c,((intptr_t)"name"),auStack_74);
    iVar1 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)p1)->objectForKey((char const *)auStack_4c));
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar2 = func_0079e55c(iVar1,*(undefined4 *)(iVar5 + g_00457544),
                              *(undefined4 *)(iVar5 + g_00457548),0);
    }
    func_0079e2bc(auStack_4c);
    if (iVar2 != 0) {
      uVar3 = (undefined4)(((cocos2d::CCString *)iVar2)->getCString());
      func_0079e844(((int)this) + 0x30,uVar3);
    }
    func_0079e45c(auStack_48,g_0045754c + 0x457258,auStack_70);
    iVar1 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)p1)->objectForKey((char const *)auStack_48));
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar2 = func_0079e55c(iVar1,*(undefined4 *)(iVar5 + g_00457544),
                              *(undefined4 *)(iVar5 + g_00457548),0);
    }
    func_0079e2bc(auStack_48);
    if (iVar2 != 0) {
      uVar3 = (undefined4)(((cocos2d::CCString *)iVar2)->getCString());
      func_0079e824(uVar3,0);
      uVar3 = (undefined4)(func_0079e7e4());
      *(undefined4 *)(((int)this) + 0x14) = uVar3;
    }
    func_0079e45c(auStack_44,g_00457550 + 0x45729e,auStack_6c);
    iVar1 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)p1)->objectForKey((char const *)auStack_44));
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar2 = func_0079e55c(iVar1,*(undefined4 *)(iVar5 + g_00457544),
                              *(undefined4 *)(iVar5 + g_00457548),0);
    }
    func_0079e2bc(auStack_44);
    if (iVar2 != 0) {
      uVar3 = (undefined4)(((cocos2d::CCString *)iVar2)->getCString());
      func_0079e824(uVar3,0);
      uVar3 = (undefined4)(func_0079e7e4());
      *(undefined4 *)(((int)this) + 0x18) = uVar3;
    }
    func_0079e45c(auStack_40,((intptr_t)"ro"),auStack_68);
    iVar1 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)p1)->objectForKey((char const *)auStack_40));
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar2 = func_0079e55c(iVar1,*(undefined4 *)(iVar5 + g_00457544),
                              *(undefined4 *)(iVar5 + g_00457548),0);
    }
    func_0079e2bc(auStack_40);
    if (iVar2 != 0) {
      uVar3 = (undefined4)(((cocos2d::CCString *)iVar2)->getCString());
      func_0079e824(uVar3,0);
      uVar3 = (undefined4)(func_0079e7e4());
      *(undefined4 *)(((int)this) + 0x1c) = uVar3;
    }
    func_0079e45c(auStack_3c,((intptr_t)"sx"),auStack_64);
    iVar1 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)p1)->objectForKey((char const *)auStack_3c));
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar2 = func_0079e55c(iVar1,*(undefined4 *)(iVar5 + g_00457544),
                              *(undefined4 *)(iVar5 + g_00457548),0);
    }
    func_0079e2bc(auStack_3c);
    if (iVar2 != 0) {
      uVar3 = (undefined4)(((cocos2d::CCString *)iVar2)->getCString());
      func_0079e824(uVar3,0);
      uVar3 = (undefined4)(func_0079e7e4());
      *(undefined4 *)(((int)this) + 0x20) = uVar3;
    }
    func_0079e45c(auStack_38,((intptr_t)"sy"),auStack_60);
    iVar1 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)p1)->objectForKey((char const *)auStack_38));
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar2 = func_0079e55c(iVar1,*(undefined4 *)(iVar5 + g_00457544),
                              *(undefined4 *)(iVar5 + g_00457548),0);
    }
    func_0079e2bc(auStack_38);
    if (iVar2 != 0) {
      uVar3 = (undefined4)(((cocos2d::CCString *)iVar2)->getCString());
      func_0079e824(uVar3,0);
      uVar3 = (undefined4)(func_0079e7e4());
      *(undefined4 *)(((int)this) + 0x24) = uVar3;
    }
    func_0079e45c(auStack_34,((intptr_t)"skewX"),auStack_5c);
    iVar1 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)p1)->objectForKey((char const *)auStack_34));
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar2 = func_0079e55c(iVar1,*(undefined4 *)(iVar5 + g_00457544),
                              *(undefined4 *)(iVar5 + g_00457548),0);
    }
    func_0079e2bc(auStack_34);
    if (iVar2 != 0) {
      uVar3 = (undefined4)(((cocos2d::CCString *)iVar2)->getCString());
      func_0079e824(uVar3,0);
      uVar3 = (undefined4)(func_0079e7e4());
      *(undefined4 *)(((int)this) + 0x28) = uVar3;
    }
    func_0079e45c(auStack_30,((intptr_t)"skewY"),auStack_58);
    iVar1 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)p1)->objectForKey((char const *)auStack_30));
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar2 = func_0079e55c(iVar1,*(undefined4 *)(iVar5 + g_00457544),
                              *(undefined4 *)(iVar5 + g_00457548),0);
    }
    func_0079e2bc(auStack_30);
    if (iVar2 != 0) {
      uVar3 = (undefined4)(((cocos2d::CCString *)iVar2)->getCString());
      func_0079e824(uVar3,0);
      uVar3 = (undefined4)(func_0079e7e4());
      *(undefined4 *)(((int)this) + 0x2c) = uVar3;
    }
    func_0079e45c(auStack_2c,((intptr_t)"zd"),auStack_54);
    iVar1 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)p1)->objectForKey((char const *)auStack_2c));
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar2 = func_0079e55c(iVar1,*(undefined4 *)(iVar5 + g_00457544),
                              *(undefined4 *)(iVar5 + g_00457548),0);
    }
    func_0079e2bc(auStack_2c);
    if (iVar2 != 0) {
      uVar3 = (undefined4)(((cocos2d::CCString *)iVar2)->getCString());
      func_0079e824(uVar3,0);
      uVar3 = (undefined4)(func_0079e8c4());
      *(undefined4 *)(((int)this) + 0x38) = uVar3;
    }
    func_0079e45c(auStack_28,((intptr_t)"type"),auStack_50);
    iVar1 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)p1)->objectForKey((char const *)auStack_28));
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar2 = func_0079e55c(iVar1,*(undefined4 *)(iVar5 + g_00457544),
                              *(undefined4 *)(iVar5 + g_00457548),0);
    }
    func_0079e2bc(auStack_28);
    if (iVar2 != 0) {
      ((cocos2d::CCString *)iVar2)->getCString();
      uVar3 = (undefined4)(func_0079e6c0());
      *(undefined4 *)(((int)this) + 0x34) = uVar3;
    }
    if (*(int *)(((int)this) + 0x34) == 1) {
      iVar5 = (undefined4)(intptr_t)(func_0079e4bc(((int)this) + 0x30,((intptr_t)"line")));
      if (iVar5 != 0) {
        uVar3 = (undefined4)(((BLMonsterData *)this)->create());
        func_0079e53c(auStack_24,((int)this) + 0x30);
        iVar5 = (undefined4)(intptr_t)(func_0079e804(auStack_24,g_00457574 + 0x4574ec,0));
        if (iVar5 != -1) {
          uVar4 = (undefined4)(func_0079e804(auStack_24,g_00457578 + 0x4574fc,0));
          func_0079e814(auStack_20,auStack_24,0,uVar4);
          func_0079e834(auStack_24,auStack_20);
          func_0079e2bc(auStack_20);
        }
        func_0079e53c(auStack_1c,auStack_24);
        ((BLMonsterData *)uVar3)->initWith((std::string)(char*)auStack_1c, 1);
        func_0079e2bc(auStack_1c);
        func_0079e2bc(auStack_24);
      }
    }
  }
  return;
}
