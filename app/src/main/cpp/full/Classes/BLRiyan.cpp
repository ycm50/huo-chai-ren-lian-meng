#include "BLRiyan.h"
#include "CCObject.h"
#include "CCNode.h"
#include "BLAnimateFrameData.h"
#include "CCArray.h"
#include "BLLeakUtils.h"
#include "BLMission.h"
#include "BLMonsterData.h"
#include "BLRole.h"
#include "BLRoleBase.h"
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
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e51c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long func_0079e7b4(...);
extern "C" long long func_0079e9c4(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long _DAT_004462c0;
extern "C" unsigned long _DAT_004462c4;
extern "C" unsigned long _DAT_004462c8;
extern "C" unsigned long _DAT_004462cc;
extern "C" unsigned long _DAT_00446408;
extern "C" unsigned long _DAT_0044640c;
extern "C" unsigned long _DAT_00446410;
extern "C" unsigned long _DAT_00446414;
extern "C" unsigned long _DAT_00446418;
extern "C" unsigned long _DAT_0044653c;
extern "C" unsigned long _DAT_00446540;
extern "C" unsigned long _DAT_00446554;
extern "C" unsigned long _DAT_004465a0;
extern "C" unsigned long _DAT_00446818;
extern "C" unsigned long _DAT_0044681c;
extern "C" unsigned long _DAT_00446820;
extern "C" unsigned long _DAT_00446824;
extern "C" unsigned long _DAT_00446828;
extern "C" unsigned long _DAT_0044682c;
extern "C" unsigned long _DAT_00446830;
extern "C" unsigned long _UNK_004462e0;
extern "C" unsigned long _UNK_004462f4;
extern "C" unsigned long _UNK_0044631c;
extern "C" unsigned long _UNK_00446330;
extern "C" unsigned long g_004462c0;
extern "C" unsigned long g_004462c4;
extern "C" unsigned long g_004462c8;
extern "C" unsigned long g_004462cc;
extern "C" unsigned long g_004462e0;
extern "C" unsigned long g_004462f4;
extern "C" unsigned long g_0044631c;
extern "C" unsigned long g_00446330;
extern "C" unsigned long g_00446408;
extern "C" unsigned long g_0044640c;
extern "C" unsigned long g_00446410;
extern "C" unsigned long g_00446414;
extern "C" unsigned long g_00446418;
extern "C" unsigned long g_0044653c;
extern "C" unsigned long g_00446540;
extern "C" unsigned long g_00446554;
extern "C" unsigned long g_004465a0;
extern "C" unsigned long g_00446818;
extern "C" unsigned long g_0044681c;
extern "C" unsigned long g_00446820;
extern "C" unsigned long g_00446824;
extern "C" unsigned long g_00446828;
extern "C" unsigned long g_0044682c;
extern "C" unsigned long g_00446830;
BLRole* BLRiyan::getRole() const
{
  return (BLRole*)(*(undefined4 *)(((int)this) + 0x33c));
}

int BLRiyan::getHurt() const
{
  return *(undefined4 *)(((int)this) + 0x340);
}

void BLRiyan::setHurt(int p1)
{
  *(undefined4 *)(((int)this) + 0x340) = p1;
  return;
}

float BLRiyan::getTime() const
{
  return *(undefined4 *)(((int)this) + 0x344);
}

void BLRiyan::setTime(float p1)
{
  *(undefined4 *)(((int)this) + 0x344) = p1;
  return;
}

float BLRiyan::getLeftTime() const
{
  return *(undefined4 *)(((int)this) + 0x348);
}

void BLRiyan::setLeftTime(float p1)
{
  *(undefined4 *)(((int)this) + 0x348) = p1;
  return;
}

float BLRiyan::getHurtRadius() const
{
  return *(undefined4 *)(((int)this) + 0x34c);
}

void BLRiyan::setHurtRadius(float p1)
{
  *(undefined4 *)(((int)this) + 0x34c) = p1;
  return;
}

bool BLRiyan::getISPlayAttack() const
{
  return *(undefined1 *)(((int)this) + 0x350);
}

void BLRiyan::setISPlayAttack(bool p1)
{
  *(undefined1 *)(((int)this) + 0x350) = p1;
  return;
}

void BLRiyan::updatePosition()
{
  return;
}

void BLRiyan::updateFrameData(BLAnimateFrameData* p1)
{
  return;
}

BLRiyan::~BLRiyan()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(g_004462c0 + 0x446244);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x3d8;
  *(int *)((int)this + 4*(0x3d)) = iVar2 + 0x418;
  *(int *)((int)this + 4*(0x71)) = iVar2 + 0x430;
  *(int *)((int)this + 4*(0x8b)) = iVar2 + g_004462c4;
  *(int *)((int)this + 4*(0x8c)) = iVar2 + g_004462c8;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLRiyan"),&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  BLRoleBase::~BLRoleBase();
  return;
}

void BLRiyan::setRole(BLRole* p1)
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

BLRiyan::BLRiyan()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(g_00446408 + 0x44636c);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x3d8;
  *(int *)((int)this + 4*(0x3d)) = iVar2 + 0x418;
  *(int *)((int)this + 4*(0x71)) = iVar2 + 0x430;
  *(int *)((int)this + 4*(0x8b)) = iVar2 + g_0044640c;
  *(int *)((int)this + 4*(0x8c)) = iVar2 + g_00446410;
  *(int *)((int)this + 4*(0xcf)) = 0;
  *(int *)((int)this + 4*(0xb5)) = 0;
  *(undefined1 *)(((int)this) + 0xd4) = 0;
  *(int *)((int)this + 4*(0xd3)) = g_00446414;
  *(int *)((int)this + 4*(0xd0)) = 99;
  *(int *)((int)this + 4*(0xd2)) = 0;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLRiyan"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

void BLRiyan::stand()
{
  return;
}

void BLRiyan::move()
{
  undefined4 uVar1;
  int *piVar2;
  code *pcVar3;
  
  piVar2 = *(int **)(((int)this) + 0x354);
  if (piVar2 != (int *)0x0) {
    pcVar3 = *(code **)(*piVar2 + 0x5c);
    uVar1 = (undefined4)((**(code **)(**(int **)(((int)this) + 0x33c) + 0x60))());
    (*pcVar3)(piVar2,uVar1);
    ((BLRoleBase *)*(undefined4 *)(((int)this) + 0x354))->updateEffectPosition();
  }
  return;
}



undefined4 BLRiyan::playAttackAction()
{
  return 0;
}

void BLRiyan::onAttackEnd()
{
  0 /* ctorZero */;
  return;
}

void BLRiyan::removeSelf()
{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  BLRoleBase::removeNodeInMaps();
  piVar1 = (int *)((BLMission *)this)->currentMission();
  piVar1 = (int *)(**(code **)(*piVar1 + 0x208))();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  iVar3 = ((cocos2d::CCArray *)uVar2)->containsObject((cocos2d::CCObject*)((int)this));
  if (iVar3 != 0) {
    *(undefined1 *)(((int)this) + g_004465a0) = 1;
    piVar1 = (int *)((BLMission *)this)->currentMission();
    piVar1 = (int *)(**(code **)(*piVar1 + 0x208))();
    uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
    ((cocos2d::CCArray *)uVar2)->removeObject((cocos2d::CCObject*)((int)this), 1);
  }
  return;
}

void BLRiyan::onTick(float p1)
{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(int **)(((int)this) + 0x33c) == (int *)0x0) ||
     (iVar1 = (**(code **)(**(int **)(((int)this) + 0x33c) + 0x2b0))(), iVar1 == 0x15)) {
    BLRiyan::removeSelf();
  }
  else {
    uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x - _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(*(undefined4 *)(((int)this) + 0x348)),(int)(p1)))));
    *(undefined4 *)(((int)this) + 0x348) = uVar2;
    iVar1 = ((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);return ((_x < _y)?1:0);}((int)(uVar2),(int)(0))));
    if (iVar1 != 0) {
      *(undefined4 *)(((int)this) + 0x348) = *(undefined4 *)(((int)this) + 0x344);
      BLRiyan::attack();
    }
    BLRiyan::move();
  }
  return;
}




void BLRiyan::onEnter()
{
  BLRoleBase::onEnter();
  return;
}

void BLRiyan::onExit()
{
  BLRoleBase::onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (7) =====
undefined8 BLRiyan::isAttack(BLRole* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

undefined8 BLRiyan::attack()
{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  iVar1 = (undefined4)(intptr_t)(cocos2d::CCArray::create());
  piVar2 = (int *)((BLMission *)this)->currentMission();
  piVar2 = (int *)(**(code **)(*piVar2 + 0x208))();
  uVar3 = (undefined4)((**(code **)(*piVar2 + 0x38))());
  for (uVar6 = 0; uVar4 = (undefined4)(intptr_t)(((cocos2d::CCArray *)uVar3)->count(), uVar6 < uVar4); uVar6 = uVar6 + 1) {
    iVar5 = (undefined4)(intptr_t)(((cocos2d::CCArray *)uVar3)->objectAtIndex((unsigned int)uVar6));
    if ((((iVar5 != 0) &&
         (piVar2 = (int *)func_0079e55c(iVar5,*(undefined4 *)(g_0044653c + 0x4464e2),
                                          *(undefined4 *)(g_00446540 + 0x4464e4),0),
         piVar2 != (int *)0x0)) &&
        ((iVar1 == 0 ||
         (iVar5 = ((cocos2d::CCArray *)iVar1)->containsObject((cocos2d::CCObject*)piVar2), iVar5 == 0))))
       && ((iVar5 = (**(code **)(*piVar2 + 0x2b0))(piVar2), iVar5 != 0x15 &&
           (iVar5 = BLRiyan::isAttack((BLRole*)piVar2), iVar5 != 0)))) {
      ((cocos2d::CCArray *)iVar1)->addObject((cocos2d::CCObject*)piVar2);
      ((BLRole *)piVar2)->onRealHurt((BLRole*)*(undefined4 *)(((int)this) + 0x33c), *(undefined4 *)(((int)this) + 0x340));
    }
  }
  return ghidra_CONCAT44(uVar3,((int)this));
}

void BLRiyan::tick(float p1)
{
  BLRiyan::onTick((float)0);
  return;
}

void BLRiyan::initAction()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLRiyan::initWithRole(BLRole* p1, int p2, float p3, float p4)
{
  if ((int)(intptr_t)p1 != 0) {
    *(int *)(((int)this) + 0x33c) = (undefined4)(intptr_t)p1;
    *(undefined4 *)(((int)this) + 0x340) = p2;
    *(undefined4 *)(((int)this) + 0x344) = p3;
    *(undefined4 *)(((int)this) + 0x34c) = p4;
    BLRiyan::initAction();
    BLRiyan::onTick(0);
  }
  return;
}

bool BLRiyan::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void BLRiyan::setPartnerNode(cocos2d::CCNode* p1, float p2)
{
  undefined4 uVar1;
  code *pcVar2;
  
  BLRoleBase::setPartnerNode((cocos2d::CCNode*)0, (float)0);
  pcVar2 = *(code **)(*(int *)this + 0x294);
  uVar1 = (undefined4)((**(code **)(*(int *)*(int *)((int)this + 4*(0xcf)) + 0x290))());
  (*pcVar2)(((int)this),uVar1);
  return;
}
