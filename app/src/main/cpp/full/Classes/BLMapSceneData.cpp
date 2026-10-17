#include "BLMapSceneData.h"
#include "CCString.h"
#include "CCObject.h"
#include "CCDictionary.h"
#include "CCArray.h"
#include "BLLeakUtils.h"
#include "BLMapSceneItemData.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
using namespace cocos2d;
// 兜底声明
extern "C" unsigned long LAB_004576a8;

extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e6c0(...);
extern "C" long long func_0079e7e4(...);
extern "C" long long func_0079e824(...);
extern "C" long long func_0079e834(...);
extern "C" long long func_0079e844(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long _DAT_00457074;
extern "C" unsigned long _DAT_00457078;
extern "C" unsigned long _DAT_0045763c;
extern "C" unsigned long _DAT_00457640;
extern "C" unsigned long _DAT_00457644;
extern "C" unsigned long _DAT_00457648;
extern "C" unsigned long _DAT_0045778c;
extern "C" unsigned long _DAT_00457790;
extern "C" unsigned long _DAT_00457794;
extern "C" unsigned long _DAT_00457798;
extern "C" unsigned long _DAT_0045779c;
extern "C" unsigned long _DAT_004577a0;
extern "C" unsigned long _DAT_004577a4;
extern "C" unsigned long g_00457074;
extern "C" unsigned long g_00457078;
extern "C" unsigned long g_0045763c;
extern "C" unsigned long g_00457640;
extern "C" unsigned long g_00457644;
extern "C" unsigned long g_00457648;
extern "C" unsigned long g_0045778c;
extern "C" unsigned long g_00457790;
extern "C" unsigned long g_00457794;
extern "C" unsigned long g_00457798;
extern "C" unsigned long g_0045779c;
extern "C" unsigned long g_004577a0;
extern "C" unsigned long g_004577a4;
int BLMapSceneData::getZorder() const
{
  return *(undefined4 *)(((int)this) + 0x14);
}

void BLMapSceneData::setZorder(int p1)
{
  *(undefined4 *)(((int)this) + 0x14) = p1;
  return;
}

cocos2d::CCArray* BLMapSceneData::getArrayItems() const
{
  return (cocos2d::CCArray*)(*(undefined4 *)(((int)this) + 0x18));
}

void BLMapSceneData::setArrayItems(cocos2d::CCArray* p1)
{
  *(undefined4 *)(((int)this) + 0x18) = (undefined4)(intptr_t)p1;
  return;
}

int BLMapSceneData::getPosType() const
{
  return *(undefined4 *)(((int)this) + 0x1c);
}

void BLMapSceneData::setPosType(int p1)
{
  *(undefined4 *)(((int)this) + 0x1c) = p1;
  return;
}

float BLMapSceneData::getSpeed() const
{
  return *(undefined4 *)(((int)this) + 0x24);
}

void BLMapSceneData::setSpeed(float p1)
{
  *(undefined4 *)(((int)this) + 0x24) = p1;
  return;
}

BLMapSceneData::~BLMapSceneData()
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
  if (*(int *)((int)this + 4*(6)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(6)) = 0;
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLMapSceneData"),&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  func_0079e2bc(((int)this) + 8);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

std::string BLMapSceneData::getSceneName() const
{ return *(std::string *)(((int)this) + 0x20); }

void BLMapSceneData::setSceneName(std::string p1)
{
  func_0079e834(((int)this) + 0x20);
  return;
}


bool BLMapSceneData::init()
{
  return 1;
}

// ===== 修复: 补回被误删的函数占位 (2) =====
BLMapSceneData::BLMapSceneData()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;

  int iVar1;
  undefined4 uVar2;
  int *piStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uStack_10 = (undefined4)(p3);
  0 /* ctorZero */;
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  *(int *)((int)this + 4*(8)) = *(int *)(g_00457640 + 0x4575d4) + 0xc;
  *(int *)((int)this + 4*(5)) = 0;
  *(int *)((int)this + 4*(7)) = 0;
  iVar1 = (undefined4)(intptr_t)(cocos2d::CCArray::create());
  *(int *)((int)this + 4*(6)) = iVar1;
  if (iVar1 != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  func_0079e844(((int)this) + 8,g_00457644 + 0x4575f6);
  *(int *)((int)this + 4*(9)) = 0;
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLMapSceneData"),&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

void BLMapSceneData::initWithDic(cocos2d::CCDictionary* p1)
{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [8];
  
  iVar4 = (undefined4)(intptr_t)(g_0045778c + 0x45765e);
  if ((int)(intptr_t)(int)(intptr_t)p1 != 0) {
    iVar3 = (undefined4)(intptr_t)(*(int *)(p1 + 0x14));
    iVar1 = (undefined4)(intptr_t)(iVar3);
    if (iVar3 == 0) goto LAB_004576a8;
    do {
      iVar1 = (undefined4)(intptr_t)(iVar3);
      iVar3 = (undefined4)(intptr_t)(*(int *)(iVar3 + 0x110));
LAB_004576a8:
      if (iVar1 == 0) break;
      if ((*(int *)(iVar1 + 0x104) != 0) &&
         (iVar1 = func_0079e55c(*(int *)(iVar1 + 0x104),*(undefined4 *)(iVar4 + g_00457790),
                                  *(undefined4 *)(iVar4 + g_00457794),0), iVar1 != 0)) {
        uVar2 = (undefined4)(((BLMapSceneItemData *)this)->create());
        ((BLMapSceneItemData *)(uVar2))->initWithDic((cocos2d::CCDictionary*)iVar1);
        ((cocos2d::CCArray *)(*(undefined4 *)(((int)this) + 0x18)))->addObject((cocos2d::CCObject*)uVar2);
      }
    } while (iVar3 != 0);
    func_0079e45c(auStack_24,"lzd",auStack_30);
    iVar3 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)(p1))->objectForKey((char const *)auStack_24));
    iVar1 = 0;
    if (iVar3 != 0) {
      iVar1 = func_0079e55c(iVar3,*(undefined4 *)(iVar4 + g_00457790),
                              *(undefined4 *)(iVar4 + g_0045779c),0);
    }
    func_0079e2bc(auStack_24);
    if (iVar1 != 0) {
      ((cocos2d::CCString *)(iVar1))->getCString();
      uVar2 = (undefined4)(func_0079e6c0());
      *(undefined4 *)(((int)this) + 0x14) = uVar2;
    }
    func_0079e45c(auStack_20,"postype",auStack_2c);
    iVar3 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)(p1))->objectForKey((char const *)auStack_20));
    iVar1 = 0;
    if (iVar3 != 0) {
      iVar1 = func_0079e55c(iVar3,*(undefined4 *)(iVar4 + g_00457790),
                              *(undefined4 *)(iVar4 + g_0045779c),0);
    }
    func_0079e2bc(auStack_20);
    if (iVar1 != 0) {
      ((cocos2d::CCString *)(iVar1))->getCString();
      uVar2 = (undefined4)(func_0079e6c0());
      *(undefined4 *)(((int)this) + 0x1c) = uVar2;
    }
    func_0079e45c(auStack_1c,"speed",auStack_28);
    iVar3 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)(p1))->objectForKey((char const *)auStack_1c));
    iVar1 = 0;
    if (iVar3 != 0) {
      iVar1 = func_0079e55c(iVar3,*(undefined4 *)(iVar4 + g_00457790),
                              *(undefined4 *)(iVar4 + g_0045779c),0);
    }
    func_0079e2bc(auStack_1c);
    if (iVar1 != 0) {
      uVar2 = (undefined4)(((cocos2d::CCString *)(iVar1))->getCString());
      func_0079e824(uVar2,0);
      uVar2 = (undefined4)(func_0079e7e4());
      *(undefined4 *)(((int)this) + 0x24) = uVar2;
    }
  }
  return;
}
