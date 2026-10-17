#include "BLEffectSprite.h"
#include "CCObject.h"
#include "BLRoleData.h"
#include "BLEffectData.h"
#include "BLLeakUtils.h"
#include "BLRoleBase.h"
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
extern "C" long long func_0079e53c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long _DAT_00438b90;
extern "C" unsigned long _DAT_00438b94;
extern "C" unsigned long _DAT_00438b98;
extern "C" unsigned long _DAT_00438b9c;
extern "C" unsigned long _DAT_00438d20;
extern "C" unsigned long _DAT_00438d24;
extern "C" unsigned long _DAT_00438d28;
extern "C" unsigned long _DAT_00438d2c;
extern "C" unsigned long _UNK_00438ae4;
extern "C" unsigned long _UNK_00438af8;
extern "C" unsigned long _UNK_00438bb0;
extern "C" unsigned long _UNK_00438bc4;
extern "C" unsigned long g_00438ae4;
extern "C" unsigned long g_00438af8;
extern "C" unsigned long g_00438b90;
extern "C" unsigned long g_00438b94;
extern "C" unsigned long g_00438b98;
extern "C" unsigned long g_00438b9c;
extern "C" unsigned long g_00438bb0;
extern "C" unsigned long g_00438bc4;
extern "C" unsigned long g_00438d20;
extern "C" unsigned long g_00438d24;
extern "C" unsigned long g_00438d28;
extern "C" unsigned long g_00438d2c;
BLEffectData* BLEffectSprite::getEffectData() const
{
  return (BLEffectData*)(*(undefined4 *)(((int)this) + 0x33c));
}


void BLEffectSprite::onExit()
{
  BLRoleBase::onExit();
  return;
}

void BLEffectSprite::onEnter()
{
  BLRoleBase::onEnter();
  return;
}


BLEffectSprite::~BLEffectSprite()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;

  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  iVar3 = *(int *)(g_00438b90 + 0x438b08);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar3 + 0x3b0;
  *(int *)((int)this + 4*(0x3d)) = iVar3 + 0x3f0;
  iVar1 = g_00438b94;
  *(int *)((int)this + 4*(0x71)) = iVar3 + 0x408;
  *(int *)((int)this + 4*(0x8b)) = iVar3 + iVar1;
  *(int *)((int)this + 4*(0x8c)) = iVar3 + g_00438b98;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uStack_10 = (undefined4)(p3);
  if (*(int *)((int)this + 4*(0xcf)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0xcf)) = 0;
  }
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLEffectSprite"),&piStack_18);
  ((BLLeakUtils *)uVar2)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  BLRoleBase::~BLRoleBase();
  return;
}

void BLEffectSprite::setEffectData(BLEffectData* p1)
{
  if (*(int *)(((int)this) + 0x33c) != (int)(intptr_t)p1) {
    if ((int)(intptr_t)p1 != 0) {
      ((cocos2d::CCObject *)p1)->retain();
    }
    if (*(int *)(((int)this) + 0x33c) != 0) {
      ((cocos2d::CCObject *)this)->release();
    }
    *(int *)(((int)this) + 0x33c) = (undefined4)(intptr_t)p1;
  }
  return;
}

BLEffectSprite::BLEffectSprite()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;

  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uStack_10 = (undefined4)(p3);
  0 /* ctorZero */;
  iVar3 = *(int *)(g_00438d20 + 0x438caa);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar3 + 0x3b0;
  *(int *)((int)this + 4*(0x3d)) = iVar3 + 0x3f0;
  iVar1 = g_00438d24;
  *(int *)((int)this + 4*(0x71)) = iVar3 + 0x408;
  *(int *)((int)this + 4*(0x8b)) = iVar3 + iVar1;
  *(int *)((int)this + 4*(0x8c)) = iVar3 + g_00438d28;
  *(int *)((int)this + 4*(0xcf)) = 0;
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLEffectSprite"),&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

void BLEffectSprite::initWith(BLEffectData* p1)
{
  (**(code **)(*(int *)this + 0x39c))();
  BLRoleBase::initWithRoleData((BLRoleData*)p1);
  return;
}

// ===== 修复: 补回被误删的函数占位 (3) =====
void BLEffectSprite::tick(float p1)
{
  BLRoleBase::tick((float)0);
  return;
}

bool BLEffectSprite::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void BLEffectSprite::initWithID(std::string p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
