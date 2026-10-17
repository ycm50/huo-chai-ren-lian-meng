#include "BLHit.h"
#include "CCDictionary.h"
#include "CCObject.h"
#include "BLEffectData.h"
#include "BLBeAttackData.h"
#include "BLHitLevelData.h"
#include "BLLeakUtils.h"
#include "DataCacheManager.h"
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
extern "C" long long func_0079e2dc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e6c0(...);
extern "C" long long func_0079e7e4(...);
extern "C" long long func_0079e824(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long _DAT_004395c4;
extern "C" unsigned long _DAT_004395c8;
extern "C" unsigned long _DAT_00439b24;
extern "C" unsigned long _DAT_00439b28;
extern "C" unsigned long _DAT_00439b2c;
extern "C" unsigned long _DAT_00439c7c;
extern "C" unsigned long _DAT_00439c80;
extern "C" unsigned long _DAT_00439c84;
extern "C" unsigned long _DAT_00439c88;
extern "C" unsigned long _DAT_00439d64;
extern "C" unsigned long _DAT_00439d68;
extern "C" unsigned long _DAT_00439d6c;
extern "C" unsigned long _DAT_00439d70;
extern "C" unsigned long g_004395c4;
extern "C" unsigned long g_004395c8;
extern "C" unsigned long g_00439b24;
extern "C" unsigned long g_00439b28;
extern "C" unsigned long g_00439b2c;
extern "C" unsigned long g_00439c7c;
extern "C" unsigned long g_00439c80;
extern "C" unsigned long g_00439c84;
extern "C" unsigned long g_00439c88;
extern "C" unsigned long g_00439d64;
extern "C" unsigned long g_00439d68;
extern "C" unsigned long g_00439d6c;
extern "C" unsigned long g_00439d70;
float BLHit::getHurt() const
{
  return *(undefined4 *)(((int)this) + 0x14);
}

void BLHit::setHurt(float p1)
{
  *(undefined4 *)(((int)this) + 0x14) = p1;
  return;
}

int BLHit::getAttackLV() const
{
  return *(undefined4 *)(((int)this) + 0x28);
}

void BLHit::setAttackLV(int p1)
{
  *(undefined4 *)(((int)this) + 0x28) = p1;
  return;
}

int BLHit::getShakeLV() const
{
  return *(undefined4 *)(((int)this) + 0x2c);
}

void BLHit::setShakeLV(int p1)
{
  *(undefined4 *)(((int)this) + 0x2c) = p1;
  return;
}

BLEffectData* BLHit::getEffectData() const
{
  return (BLEffectData*)(*(undefined4 *)(((int)this) + 0x30));
}

void BLHit::setEffectData(BLEffectData* p1)
{
  *(undefined4 *)(((int)this) + 0x30) = (undefined4)(intptr_t)p1;
  return;
}

BLBeAttackData* BLHit::getBeAttackData() const
{
  return (BLBeAttackData*)(*(undefined4 *)(((int)this) + 0x34));
}

void BLHit::setBeAttackData(BLBeAttackData* p1)
{
  *(undefined4 *)(((int)this) + 0x34) = (undefined4)(intptr_t)p1;
  return;
}

BLHitLevelData* BLHit::getHitLevelData() const
{
  return (BLHitLevelData*)(*(undefined4 *)(((int)this) + 0x38));
}

void BLHit::setHitLevelData(BLHitLevelData* p1)
{
  *(undefined4 *)(((int)this) + 0x38) = (undefined4)(intptr_t)p1;
  return;
}

cocos2d::CCObject* BLHit::getAttackHurtData() const
{
  return (cocos2d::CCObject*)(*(undefined4 *)(((int)this) + 0x3c));
}

int BLHit::getType() const
{
  return *(undefined4 *)(((int)this) + 0x44);
}

void BLHit::setType(int p1)
{
  *(undefined4 *)(((int)this) + 0x44) = p1;
  return;
}

void BLHit::setRoleID(std::string p1)
{
  func_0079e52c(((int)this) + 0x24);
  return;
}

void BLHit::setBeAttackEffect(std::string p1)
{
  func_0079e52c(((int)this) + 0x20);
  return;
}

void BLHit::setBeAttackName(std::string p1)
{
  func_0079e52c(((int)this) + 0x1c);
  return;
}

void BLHit::setHitName(std::string p1)
{
  func_0079e52c(((int)this) + 0x18);
  return;
}

std::string BLHit::getRoleID() const
{ return *(std::string *)(((int)this) + 0x24); }

std::string BLHit::getBeAttackEffect() const
{ return *(std::string *)(((int)this) + 0x20); }

std::string BLHit::getBeAttackName() const
{ return *(std::string *)(((int)this) + 0x1c); }

std::string BLHit::getHitName() const
{ return *(std::string *)(((int)this) + 0x18); }

BLHit::~BLHit()
{
  undefined4 uVar1;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [8];
  
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  if (*(int *)((int)this + 4*(0xc)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0xc)) = 0;
  }
  if (*(int *)((int)this + 4*(0xd)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0xd)) = 0;
  }
  if (*(int *)((int)this + 4*(0xe)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0xe)) = 0;
  }
  if (*(int *)((int)this + 4*(0xf)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0xf)) = 0;
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(auStack_1c,((intptr_t)"BLHit"),auStack_20);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)auStack_1c);
  func_0079e2bc(auStack_1c);
  func_0079e2bc(((int)this) + 0x10);
  func_0079e2bc(((int)this) + 9);
  func_0079e2bc(((int)this) + 8);
  func_0079e2bc(((int)this) + 7);
  func_0079e2bc(((int)this) + 6);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLHit::setAttackHurtData(cocos2d::CCObject* p1)
{
  if (*(int *)(((int)this) + 0x3c) != (int)(intptr_t)p1) {
    if ((int)(intptr_t)p1 != 0) {
      ((cocos2d::CCObject *)p1)->retain();
    }
    if (*(int *)(((int)this) + 0x3c) != 0) {
      ((cocos2d::CCObject *)this)->release();
    }
    *(int *)(((int)this) + 0x3c) = (undefined4)(intptr_t)p1;
  }
  return;
}

BLHit::BLHit()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  iVar2 = *(int *)(g_00439b28 + 0x439aa4) + 0xc;
  *(int *)((int)this + 4*(6)) = iVar2;
  *(int *)((int)this + 4*(7)) = iVar2;
  *(int *)((int)this + 4*(8)) = iVar2;
  *(int *)((int)this + 4*(9)) = iVar2;
  *(int *)((int)this + 4*(0x10)) = iVar2;
  *(int *)((int)this + 4*(5)) = 0x3f800000;
  *(int *)((int)this + 4*(0xb)) = 0;
  *(int *)((int)this + 4*(0xc)) = 0;
  *(int *)((int)this + 4*(0xd)) = 0;
  *(int *)((int)this + 4*(0xe)) = 0;
  *(int *)((int)this + 4*(0xf)) = 0;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLHit"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

bool BLHit::init()
{
  return 1;
}


void BLHit::setAnimateName(std::string p1)
{
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
void BLHit::initWith(char** p1, int& p2)
{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_1c [8];
  
  iVar5 = (int)*(int *)&(*(int *)p2);
  *(int *)p2 = iVar5 + 1;
  func_0079e2dc(((int)this) + 0x24,*(undefined4 *)((iVar5 + 1) * 4 + p1));
  iVar6 = (undefined4)(intptr_t)(g_00439c7c);
  iVar5 = (int)*(int *)&(*(int *)p2);
  *(int *)p2 = iVar5 + 1;
  func_0079e2dc(((int)this) + 0x18,*(undefined4 *)((iVar5 + 1) * 4 + p1));
  iVar5 = (int)*(int *)&(*(int *)p2);
  iVar6 = (undefined4)(intptr_t)(iVar6 + 0x439b6c);
  *(int *)p2 = iVar5 + 1;
  func_0079e2dc(((int)this) + 0x20,*(undefined4 *)((iVar5 + 1) * 4 + p1));
  iVar5 = (int)*(int *)&(*(int *)p2);
  *(int *)p2 = iVar5 + 1;
  uVar1 = (undefined4)(func_0079e6c0(*(undefined4 *)((iVar5 + 1) * 4 + p1)));
  *(undefined4 *)(((int)this) + 0x2c) = uVar1;
  iVar5 = (int)*(int *)&(*(int *)p2);
  *(int *)p2 = iVar5 + 1;
  uVar1 = (undefined4)(func_0079e6c0(*(undefined4 *)((iVar5 + 1) * 4 + p1)));
  *(undefined4 *)(((int)this) + 0x28) = uVar1;
  iVar5 = (int)*(int *)&(*(int *)p2);
  iVar4 = (undefined4)(intptr_t)(((int)this) + 0x1c);
  *(int *)p2 = iVar5 + 1;
  func_0079e2dc(iVar4,*(undefined4 *)((iVar5 + 1) * 4 + p1));
  iVar5 = (int)*(int *)&(*(int *)p2);
  *(int *)p2 = iVar5 + 1;
  func_0079e824(*(undefined4 *)((iVar5 + 1) * 4 + p1),0);
  uVar1 = (undefined4)(func_0079e7e4());
  *(undefined4 *)(((int)this) + 0x14) = uVar1;
  *(int *)p2 = *(int *)p2 + 1;
  piVar2 = (int *)((DataCacheManager *)this)->shareManager();
  uVar1 = (undefined4)((**(code **)(*(int *)(piVar2) + (0x20)))());
  iVar3 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)uVar1)->objectForKey(iVar4));
  iVar5 = 0;
  if (iVar3 != 0) {
    iVar5 = func_0079e55c(iVar3,*(undefined4 *)(iVar6 + g_00439c80),
                            *(undefined4 *)(iVar6 + g_00439c84),0);
  }
  *(int *)(((int)this) + 0x34) = iVar5;
  if (iVar5 == 0) {
    uVar1 = (undefined4)(((BLBeAttackData *)this)->create());
    *(undefined4 *)(((int)this) + 0x34) = uVar1;
    func_0079e53c(auStack_1c,iVar4);
    ((BLBeAttackData *)uVar1)->initWithName((std::string)(char*)auStack_1c);
    func_0079e2bc(auStack_1c);
  }
  if (*(int *)(((int)this) + 0x34) != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  piVar2 = (int *)((DataCacheManager *)this)->shareManager();
  uVar1 = (undefined4)((**(code **)(*(int *)(piVar2) + (0x18)))());
  iVar3 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)uVar1)->objectForKey(*(undefined4 *)(((int)this) + 0x2c)));
  iVar5 = 0;
  if (iVar3 != 0) {
    iVar5 = func_0079e55c(iVar3,*(undefined4 *)(iVar6 + g_00439c80),
                            *(undefined4 *)(iVar6 + g_00439c88),0);
  }
  *(int *)(((int)this) + 0x38) = iVar5;
  if (iVar5 == 0) {
    uVar1 = (undefined4)(((BLHitLevelData *)this)->create());
    *(undefined4 *)(((int)this) + 0x38) = uVar1;
    ((BLHitLevelData *)uVar1)->initWith(*(undefined4 *)(((int)this) + 0x2c));
  }
  if (*(int *)(((int)this) + 0x38) != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  return;
}
