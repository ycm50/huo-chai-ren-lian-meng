#include "BLSprite.h"
#include "CCDictionary.h"
#include "BLAction.h"
#include "BLAnimateData.h"
#include "BLDebug.h"
#include "BLLeakUtils.h"
#include "BLRoleData.h"
#include "BluetoothHelper.h"
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
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4bc(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e5dc(...);
extern "C" long long func_0079e854(...);
extern "C" long long func_0079e864(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long _DAT_0042e408;
extern "C" unsigned long _DAT_0042e40c;
extern "C" unsigned long _DAT_0042e4dc;
extern "C" unsigned long _DAT_0042e4e0;
extern "C" unsigned long _DAT_0042e544;
extern "C" unsigned long _DAT_0042e548;
extern "C" unsigned long _DAT_0042e610;
extern "C" unsigned long _DAT_0042e614;
extern "C" unsigned long _DAT_0042e6ec;
extern "C" unsigned long _DAT_0042e6f0;
extern "C" unsigned long _DAT_0042e6f4;
extern "C" unsigned long _DAT_0042e6f8;
extern "C" unsigned long _DAT_0042e6fc;
extern "C" unsigned long _DAT_0042e700;
extern "C" unsigned long _DAT_0042e704;
extern "C" unsigned long _DAT_0042e708;
extern "C" unsigned long _DAT_0042ea30;
extern "C" unsigned long _DAT_0042ea34;
extern "C" unsigned long _DAT_0042ea38;
extern "C" unsigned long _DAT_0042ea3c;
extern "C" unsigned long _DAT_0042ea40;
extern "C" unsigned long _DAT_0042ea44;
extern "C" unsigned long _DAT_0042ea48;
extern "C" unsigned long _DAT_0042ea4c;
extern "C" unsigned long _DAT_0042ea50;
extern "C" unsigned long _DAT_0042ea54;
extern "C" unsigned long _DAT_0042ea58;
extern "C" unsigned long _DAT_0042ea5c;
extern "C" unsigned long _DAT_0042ea60;
extern "C" unsigned long _DAT_0042ebb0;
extern "C" unsigned long _DAT_0042ebb4;
extern "C" unsigned long _DAT_0042ebb8;
extern "C" unsigned long _DAT_0042ebbc;
extern "C" unsigned long g_0042e408;
extern "C" unsigned long g_0042e40c;
extern "C" unsigned long g_0042e4dc;
extern "C" unsigned long g_0042e4e0;
extern "C" unsigned long g_0042e544;
extern "C" unsigned long g_0042e548;
extern "C" unsigned long g_0042e610;
extern "C" unsigned long g_0042e614;
extern "C" unsigned long g_0042e6ec;
extern "C" unsigned long g_0042e6f0;
extern "C" unsigned long g_0042e6f4;
extern "C" unsigned long g_0042e6f8;
extern "C" unsigned long g_0042e6fc;
extern "C" unsigned long g_0042e700;
extern "C" unsigned long g_0042e704;
extern "C" unsigned long g_0042e708;
extern "C" unsigned long g_0042ea30;
extern "C" unsigned long g_0042ea34;
extern "C" unsigned long g_0042ea38;
extern "C" unsigned long g_0042ea3c;
extern "C" unsigned long g_0042ea40;
extern "C" unsigned long g_0042ea44;
extern "C" unsigned long g_0042ea48;
extern "C" unsigned long g_0042ea4c;
extern "C" unsigned long g_0042ea50;
extern "C" unsigned long g_0042ea54;
extern "C" unsigned long g_0042ea58;
extern "C" unsigned long g_0042ea5c;
extern "C" unsigned long g_0042ea60;
extern "C" unsigned long g_0042ebb0;
extern "C" unsigned long g_0042ebb4;
extern "C" unsigned long g_0042ebb8;
extern "C" unsigned long g_0042ebbc;
BLRoleData* BLSprite::getRoleData() const
{
  return (BLRoleData*)(*(undefined4 *)(((int)this) + 0x1b8));
}

void BLSprite::setRoleData(BLRoleData* p1)
{
  *(undefined4 *)(((int)this) + 0x1b8) = (undefined4)(intptr_t)p1;
  return;
}

int BLSprite::getUniqID() const
{
  return *(undefined4 *)(((int)this) + 0x1bc);
}

void BLSprite::setUniqID(int p1)
{
  *(undefined4 *)(((int)this) + 0x1bc) = p1;
  return;
}

float BLSprite::getAnimationTime()
{
  return *(undefined4 *)(((int)this) + 0x1b4);
}

void BLSprite::tick(float p1)
{
  return;
}

BLSprite::~BLSprite()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(g_0042e408 + 0x42e3ac);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x268;
  *(int *)((int)this + 4*(0x3d)) = iVar2 + 0x2a8;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLSprite"),&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCSprite(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}


void BLSprite::setAnimationTime(float p1)
{
  int iVar1;
  int iVar2;
  
  *(undefined4 *)(((int)this) + 0x1b4) = p1;
  if (*(int *)(((int)this) + 0x1c0) != 0) {
    iVar1 = *(int *)(*(int *)(((int)this) + 0x1c0) + 0x14);
    iVar2 = iVar1;
    if (iVar1 != 0) {
      iVar2 = *(int *)(iVar1 + 0x110);
    }
    while (iVar1 != 0) {
      if ((*(int *)(iVar1 + 0x104) != 0) &&
         (iVar1 = func_0079e55c(*(int *)(iVar1 + 0x104),*(undefined4 *)(g_0042e544 + 0x42e52c),
                                  *(undefined4 *)(g_0042e548 + 0x42e52e),0), iVar1 != 0)) {
        ((BLAction *)iVar1)->setAnimateTime(*(undefined4 *)(((int)this) + 0x1b4));
      }
      iVar1 = iVar2;
      if (iVar2 != 0) {
        iVar2 = *(int *)(iVar2 + 0x110);
      }
    }
  }
  return;
}



void BLSprite::initWithRoleData(BLRoleData* p1)
{
  *(undefined4 *)(((int)this) + 0x1b8) = (undefined4)(intptr_t)p1;
  BLSprite::initAnimate();
  return;
}


void BLSprite::onEnter()
{
  ((cocos2d::CCNode *)this)->onEnter();
  return;
}

void BLSprite::onExit()
{
  if (*(int *)(((int)this) + 0x1c0) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(undefined4 *)(((int)this) + 0x1c0) = 0;
  }
  ((cocos2d::CCNode *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (5) =====
void BLSprite::initWithRoleID(std::string * p1)
{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  code *pcVar5;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [8];
  
  piVar1 = (int *)((DataCacheManager *)this)->shareManager();
  uVar2 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x30)))());
  func_0079e45c(auStack_1c,*(int *)p1,auStack_20);
  iVar3 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)uVar2)->objectForKey((char const *)auStack_1c));
  piVar1 = (int *)0x0;
  if (iVar3 != 0) {
    piVar1 = (int *)func_0079e55c(iVar3,*(undefined4 *)(g_0042e4dc + 0x42e45a),
                                    *(undefined4 *)(g_0042e4e0 + 0x42e45c),0);
  }
  func_0079e2bc(auStack_1c);
  if (piVar1 == (int *)0x0) {
    piVar4 = (int *)::operator new(0x28);
    ::new ((void *)piVar4) BLRoleData();   /* ALLOC+CTOR_FIX(R115): 原为裸 new + ctorZero 占位；生成器丢了 BLRoleData 的构造函数 -> vptr 垃圾 */
    iVar3 = (undefined4)(intptr_t)(((BLRoleData *)piVar4)->init());
    if (iVar3 == 0) {
      (**(code **)(*(int *)(piVar4) + (8)))(piVar4);
    }
    else {
      ((cocos2d::CCObject *)piVar4)->autorelease();
      piVar1 = piVar4;
    }
    pcVar5 = *(code **)(*piVar1 + 0x18);
    func_0079e53c(auStack_1c,p1);
    (*pcVar5)(piVar1,auStack_1c);
    func_0079e2bc(auStack_1c);
  }
  (**(code **)(*(int *)this + 0x23c))(((int)this),piVar1);
  return;
}

BLSprite::BLSprite()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = (undefined4)(intptr_t)(*(int *)(g_0042e610 + 0x42e594));
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x268;
  *(int *)((int)this + 4*(0x3d)) = iVar2 + 0x2a8;
  *(int *)((int)this + 4*(0x70)) = 0;
  *(int *)((int)this + 4*(0x6d)) = 0;
  *(int *)((int)this + 4*(0x6e)) = 0;
  iVar2 = (undefined4)(intptr_t)(cocos2d::CCDictionary::create());
  *(int *)((int)this + 4*(0x70)) = iVar2;
  if (iVar2 != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLSprite"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

void BLSprite::initAnimate()
{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [8];
  
  iVar3 = (undefined4)(intptr_t)(*(int *)(*(int *)(((int)this) + 0x1b8) + 0x14));
  if (iVar3 != 0) {
    pcVar4 = *(char **)(iVar3 + 0x14);
    pcVar5 = pcVar4;
    if (pcVar4 != (char *)0x0) {
      pcVar5 = *(char **)(pcVar4 + 0x110);
    }
    while (pcVar4 != (char *)0x0) {
      uVar1 = (undefined4)(((BLAction *)this)->create());
      uVar2 = (undefined4)(0);
      if (*(int *)(pcVar4 + 0x104) != 0) {
        uVar2 = func_0079e55c(*(int *)(pcVar4 + 0x104),*(undefined4 *)(g_0042e6ec + 0x42e652),
                                *(undefined4 *)(g_0042e6f0 + 0x42e654),0);
      }
      ((BLAction *)uVar1)->initWithAnimata((BLAnimateData*)uVar2, 0);
      uVar2 = (undefined4)(*(undefined4 *)(((int)this) + 0x1c0));
      if (*pcVar4 == '\0') {
        iVar6 = (undefined4)(intptr_t)(((intptr_t)"Should not call this function for integer dictionary"));
        iVar3 = (undefined4)(intptr_t)(0 /* ctorZero */);
        if (iVar3 == 0) {
          cocos2d::CCLog((char const*)((intptr_t)"Assert failed: %s"), iVar6);
        }
        if (*pcVar4 == '\0') {
          func_0079e864(6,((intptr_t)"cocos2d-x assert"),((intptr_t)"%s function:%s line:%d"),
                          ((intptr_t)"/Users/hoolai/Documents/projects/lol_hulai/cocos2d/projects/DiabloLOL/proj.android_RongHe/../../../cocos2dx/cocoa/CCDictionary.h"),((intptr_t)"getStrKey"),99);
        }
      }
      func_0079e45c(auStack_1c,pcVar4,auStack_20);
      ((cocos2d::CCDictionary *)uVar2)->setObject((cocos2d::CCObject*)uVar1, (char const *)auStack_1c);
      func_0079e2bc(auStack_1c);
      pcVar4 = pcVar5;
      if (pcVar5 != (char *)0x0) {
        pcVar5 = *(char **)(pcVar5 + 0x110);
      }
    }
  }
  return;
}

void BLSprite::setBeAttackAction(std::string * p1, std::string p2, int p3)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

bool BLSprite::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
