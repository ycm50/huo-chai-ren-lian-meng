#include "BLRemoteAttackSprite.h"
#include "CCDictionary.h"
#include "CCNotificationCenter.h"
#include "CCObject.h"
#include "CCNode.h"
#include "BLHit.h"
#include "CCGeometry.h"
#include "CCArray.h"
#include "BLAnimateFrameData.h"
#include "BLAttackHurtData.h"
#include "BLRole.h"
#include "BLDebug.h"
#include "BLLeakUtils.h"
#include "BLMission.h"
#include "BLMissionManager.h"
#include "BLMonsterData.h"
#include "BLRemoteAttackData.h"
#include "BLRoleAttribute.h"
#include "BLRoleBase.h"
#include "DataCacheManager.h"
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
extern "C" long long func_0079e2ec(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4bc(...);
extern "C" long long func_0079e4ec(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long func_0079e5dc(...);
extern "C" long long func_0079e5ec(...);
extern "C" long long func_0079e62c(...);
extern "C" long long func_0079e63c(...);
extern "C" long long func_0079e64c(...);
extern "C" long long func_0079e6ac(...);
extern "C" long long func_0079e724(...);
extern "C" long long func_0079e734(...);
extern "C" long long func_0079e7b4(...);
extern "C" long long func_0079e7e4(...);
extern "C" long long func_0079e854(...);
extern "C" long long func_0079e994(...);
extern "C" long long func_0079e9a4(...);
extern "C" long long func_0079e9b4(...);
extern "C" long long func_0079e9c4(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long _DAT_00444f14;
extern "C" unsigned long _DAT_00444f18;
extern "C" unsigned long _DAT_00444f1c;
extern "C" unsigned long _DAT_00444f20;
extern "C" unsigned long _DAT_00445134;
extern "C" unsigned long _DAT_00445138;
extern "C" unsigned long _DAT_0044513c;
extern "C" unsigned long _DAT_00445140;
extern "C" unsigned long _DAT_00445370;
extern "C" unsigned long _DAT_004453a4;
extern "C" unsigned long _DAT_004453a8;
extern "C" unsigned long _DAT_004453cc;
extern "C" unsigned long _DAT_004454c4;
extern "C" unsigned long _DAT_004454c8;
extern "C" unsigned long _DAT_004454cc;
extern "C" unsigned long _DAT_004454d0;
extern "C" unsigned long _DAT_004454d4;
extern "C" unsigned long _DAT_00445558;
extern "C" unsigned long _DAT_0044555c;
extern "C" unsigned long _DAT_00445560;
extern "C" unsigned long _DAT_00445650;
extern "C" unsigned long _DAT_00445654;
extern "C" unsigned long _DAT_00445658;
extern "C" unsigned long _DAT_00445960;
extern "C" unsigned long _DAT_00445964;
extern "C" unsigned long _DAT_00445c6c;
extern "C" unsigned long _DAT_00445f00;
extern "C" unsigned long _DAT_00445f04;
extern "C" unsigned long _DAT_00445f08;
extern "C" unsigned long _DAT_00445f0c;
extern "C" unsigned long _DAT_00445f10;
extern "C" unsigned long _DAT_00446014;
extern "C" unsigned long _DAT_00446018;
extern "C" unsigned long _DAT_00446104;
extern "C" unsigned long _DAT_00446108;
extern "C" unsigned long _DAT_0044610c;
extern "C" unsigned long _DAT_00446110;
extern "C" unsigned long _DAT_00446114;
extern "C" unsigned long _UNK_00444f34;
extern "C" unsigned long _UNK_00444f48;
extern "C" unsigned long _UNK_00444f70;
extern "C" unsigned long _UNK_00444f84;
extern "C" unsigned long g_00444f14;
extern "C" unsigned long g_00444f18;
extern "C" unsigned long g_00444f1c;
extern "C" unsigned long g_00444f20;
extern "C" unsigned long g_00444f34;
extern "C" unsigned long g_00444f48;
extern "C" unsigned long g_00444f70;
extern "C" unsigned long g_00444f84;
extern "C" unsigned long g_00445134;
extern "C" unsigned long g_00445138;
extern "C" unsigned long g_0044513c;
extern "C" unsigned long g_00445140;
extern "C" unsigned long g_00445370;
extern "C" unsigned long g_004453a4;
extern "C" unsigned long g_004453a8;
extern "C" unsigned long g_004453cc;
extern "C" unsigned long g_004454c4;
extern "C" unsigned long g_004454c8;
extern "C" unsigned long g_004454cc;
extern "C" unsigned long g_004454d0;
extern "C" unsigned long g_004454d4;
extern "C" unsigned long g_00445558;
extern "C" unsigned long g_0044555c;
extern "C" unsigned long g_00445560;
extern "C" unsigned long g_00445650;
extern "C" unsigned long g_00445654;
extern "C" unsigned long g_00445658;
extern "C" unsigned long g_00445960;
extern "C" unsigned long g_00445964;
extern "C" unsigned long g_00445c6c;
extern "C" unsigned long g_00445f00;
extern "C" unsigned long g_00445f04;
extern "C" unsigned long g_00445f08;
extern "C" unsigned long g_00445f0c;
extern "C" unsigned long g_00445f10;
extern "C" unsigned long g_00446014;
extern "C" unsigned long g_00446018;
extern "C" unsigned long g_00446104;
extern "C" unsigned long g_00446108;
extern "C" unsigned long g_0044610c;
extern "C" unsigned long g_00446110;
extern "C" unsigned long g_00446114;
BLRole* BLRemoteAttackSprite::getRole() const
{
  return (BLRole*)(*(undefined4 *)(((int)this) + 0x33c));
}

BLRole* BLRemoteAttackSprite::getHitRole() const
{
  return (BLRole*)(*(undefined4 *)(((int)this) + 0x340));
}

BLRemoteAttackData* BLRemoteAttackSprite::getRemoteAttackData() const
{
  return (BLRemoteAttackData*)(*(undefined4 *)(((int)this) + 0x344));
}

BLAttackHurtData* BLRemoteAttackSprite::getAttackData() const
{
  return (BLAttackHurtData*)(*(undefined4 *)(((int)this) + 0x348));
}

float BLRemoteAttackSprite::getHitTimes() const
{
  return *(undefined4 *)(((int)this) + 0x354);
}

void BLRemoteAttackSprite::setHitTimes(float p1)
{
  *(undefined4 *)(((int)this) + 0x354) = p1;
  return;
}

bool BLRemoteAttackSprite::getISPlayAttack() const
{
  return *(undefined1 *)(((int)this) + 0x358);
}

void BLRemoteAttackSprite::setISPlayAttack(bool p1)
{
  *(undefined1 *)(((int)this) + 0x358) = p1;
  return;
}

BLAnimateFrameData* BLRemoteAttackSprite::getAnimateFrameData() const
{
  return (BLAnimateFrameData*)(*(undefined4 *)(((int)this) + 0x35c));
}

BLRemoteAttackSprite::~BLRemoteAttackSprite()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(g_00444f14 + 0x444e34);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x3ec;
  *(int *)((int)this + 4*(0x3d)) = iVar2 + g_00444f18;
  *(int *)((int)this + 4*(0x71)) = iVar2 + g_00444f1c;
  *(int *)((int)this + 4*(0x8b)) = iVar2 + 0x500;
  *(int *)((int)this + 4*(0x8c)) = iVar2 + 0x530;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  if (*(int *)((int)this + 4*(0xcf)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0xcf)) = 0;
  }
  if (*(int *)((int)this + 4*(0xd0)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0xd0)) = 0;
  }
  if (*(int *)((int)this + 4*(0xd1)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0xd1)) = 0;
  }
  if (*(int *)((int)this + 4*(0xd2)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0xd2)) = 0;
  }
  if (*(int *)((int)this + 4*(0xd7)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0xd7)) = 0;
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLRemoteAttackSprite"),&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  BLRoleBase::~BLRoleBase();
  return;
}



void BLRemoteAttackSprite::setHitRole(BLRole* p1)
{
  if (*(int *)(((int)this) + 0x340) != (int)(intptr_t)p1) {
    if ((int)(intptr_t)p1 != 0) {
      ((cocos2d::CCObject *)p1)->retain();
    }
    if (*(int *)(((int)this) + 0x340) != 0) {
      ((cocos2d::CCObject *)this)->release();
    }
    *(int *)(((int)this) + 0x340) = (undefined4)(intptr_t)p1;
  }
  return;
}

void BLRemoteAttackSprite::setAnimateFrameData(BLAnimateFrameData* p1)
{
  if (*(int *)(((int)this) + 0x35c) != (int)(intptr_t)p1) {
    if ((int)(intptr_t)p1 != 0) {
      ((cocos2d::CCObject *)p1)->retain();
    }
    if (*(int *)(((int)this) + 0x35c) != 0) {
      ((cocos2d::CCObject *)this)->release();
    }
    *(int *)(((int)this) + 0x35c) = (undefined4)(intptr_t)p1;
  }
  return;
}

void BLRemoteAttackSprite::setRole(BLRole* p1)
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

void BLRemoteAttackSprite::setAttackData(BLAttackHurtData* p1)
{
  if (*(int *)(((int)this) + 0x348) != (int)(intptr_t)p1) {
    if ((int)(intptr_t)p1 != 0) {
      ((cocos2d::CCObject *)p1)->retain();
    }
    if (*(int *)(((int)this) + 0x348) != 0) {
      ((cocos2d::CCObject *)this)->release();
    }
    *(int *)(((int)this) + 0x348) = (undefined4)(intptr_t)p1;
  }
  return;
}

void BLRemoteAttackSprite::setRemoteAttackData(BLRemoteAttackData* p1)
{
  if (*(int *)(((int)this) + 0x344) != (int)(intptr_t)p1) {
    if ((int)(intptr_t)p1 != 0) {
      ((cocos2d::CCObject *)p1)->retain();
    }
    if (*(int *)(((int)this) + 0x344) != 0) {
      ((cocos2d::CCObject *)this)->release();
    }
    *(int *)(((int)this) + 0x344) = (undefined4)(intptr_t)p1;
  }
  return;
}

BLRemoteAttackSprite::BLRemoteAttackSprite()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(g_00445134 + 0x445080);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x3ec;
  *(int *)((int)this + 4*(0x3d)) = iVar2 + g_00445138;
  *(int *)((int)this + 4*(0x71)) = iVar2 + g_0044513c;
  *(int *)((int)this + 4*(0x8b)) = iVar2 + 0x500;
  *(int *)((int)this + 4*(0x8c)) = iVar2 + 0x530;
  0 /* ctorZero */;
  *(int *)((int)this + 4*(0xcf)) = 0;
  *(int *)((int)this + 4*(0xb5)) = 0;
  *(int *)((int)this + 4*(0xd0)) = 0;
  *(int *)((int)this + 4*(0xd1)) = 0;
  *(int *)((int)this + 4*(0xd2)) = 0;
  *(int *)((int)this + 4*(0xd5)) = 0;
  *(undefined1 *)(((int)this) + 0xd8) = 0;
  *(int *)((int)this + 4*(0xd7)) = 0;
  *(undefined1 *)(((int)this) + 0xd6) = 0;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLRemoteAttackSprite"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}



void BLRemoteAttackSprite::move()
{
  (**(code **)(*(int *)this + 0x2b4))(((int)this),4);
  BLRoleBase::runNewAction((char const*)((intptr_t)"move"), 0, 1);
  return;
}

void BLRemoteAttackSprite::removeSelf()
{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  BLRoleBase::removeNodeInMaps();
  piVar1 = (int *)((BLMission *)this)->currentMission();
  piVar1 = (int *)(**(code **)(*piVar1 + 0x208))();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x88))());
  iVar3 = ((cocos2d::CCArray *)uVar2)->containsObject((cocos2d::CCObject*)((int)this));
  if (iVar3 == 0) {
    *(undefined1 *)(((int)this) + 0x360) = 1;
    piVar1 = (int *)((BLMission *)this)->currentMission();
    piVar1 = (int *)(**(code **)(*piVar1 + 0x208))();
    uVar2 = (undefined4)((**(code **)(*piVar1 + 0x88))());
    ((cocos2d::CCArray *)uVar2)->addObject((cocos2d::CCObject*)((int)this));
  }
  return;
}

void BLRemoteAttackSprite::onAttackEnd()
{
  BLRemoteAttackSprite::removeSelf();
  return;
}


void BLRemoteAttackSprite::attack()
{
  (**(code **)(*(int *)this + 0x2b4))(((int)this),5);
  BLRemoteAttackSprite::playAttackAction();
  return;
}







void BLRemoteAttackSprite::onEnter()
{
  BLRoleBase::onEnter();
  return;
}

void BLRemoteAttackSprite::onExit()
{
  BLRoleBase::onExit();
  return;
}







int * BLRemoteAttackSprite::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x364)));
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

// ===== 修复: 补回被误删的函数占位 (17) =====
cocos2d::CCPoint BLRemoteAttackSprite::getThrrow() const
{ return cocos2d::CCPoint(); }

void BLRemoteAttackSprite::setThrrow(cocos2d::CCPoint * p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLRemoteAttackSprite::createThrrow(BLRole* p1, BLAnimateFrameData* p2, BLRemoteAttackData* p3, std::string p4)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

undefined8 BLRemoteAttackSprite::stand()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

undefined1 BLRemoteAttackSprite::playAttackAction()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

undefined8 BLRemoteAttackSprite::standOnEnd()
{
  undefined4 p2 = 0;

  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iStack_18;
  undefined4 uStack_14;
  
  iStack_18 = (undefined4)(intptr_t)((int *)((int)this));
  uStack_14 = (undefined4)(p2);
  ((cocos2d::CCNode *)(*(undefined4 *)(((int)this) + 0x278)))->stopAllActions();
  uVar3 = (undefined4)(*(undefined4 *)(((int)this) + 0x1c0));
  func_0079e45c(&uStack_14,"move",&iStack_18);
  iVar1 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)(uVar3))->objectForKey(*(std::string const*)&uStack_14));
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = func_0079e55c(iVar1,*(undefined4 *)(g_0044555c + 0x445528),
                            *(undefined4 *)(g_00445560 + 0x44552a),0);
  }
  func_0079e2bc(&uStack_14);
  if (iVar2 == 0) {
    ((BLRemoteAttackSprite *)(((int)this)))->playAttackAction();
  }
  else {
    BLRemoteAttackSprite::move();
  }
  return ghidra_CONCAT44(uStack_14,iStack_18);
}

void BLRemoteAttackSprite::trackRole()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLRemoteAttackSprite::setRemotePosition(cocos2d::CCPoint * p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLRemoteAttackSprite::attackNextRole()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLRemoteAttackSprite::hit(BLHit* p1, cocos2d::CCArray* p2)
{
  undefined4 uVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 auStack_20 [3];
  char cStack_1d;
  undefined1 auStack_1c [8];
  
  uVar1 = (undefined4)(cocos2d::CCArray::create());
  cStack_1d = (char)*(int *)((int)this + 4*(0xd8));
  if (cStack_1d == '\0') {
    piVar2 = (int *)((BLMission *)this)->currentMission();
    piVar2 = (int *)(**(code **)(*(int *)(piVar2) + (0x208)))();
    uVar3 = (undefined4)((**(code **)(*(int *)(piVar2) + (0x1c)))(piVar2,((int)this),p1,&cStack_1d,p2));
    ((cocos2d::CCArray *)uVar1)->addObjectsFromArray((cocos2d::CCArray*)uVar3);
    iVar4 = (undefined4)(intptr_t)(((cocos2d::CCArray *)uVar1)->count());
    if ((iVar4 != 0) && (iVar4 = (**(code **)(*(int *)this + 0x290))(((int)this)), iVar4 == 0)) {
      piVar2 = (int *)((BLMission *)this)->currentMission();
      piVar2 = (int *)(**(code **)(*(int *)(piVar2) + (0x208)))();
      iVar4 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar2) + (0x118)))());
      piVar2 = (int *)((BLMission *)this)->currentMission();
      piVar2 = (int *)(**(code **)(*(int *)(piVar2) + (0x208)))();
      (**(code **)(*(int *)(piVar2) + (0x124)))(piVar2,0);
      piVar2 = (int *)((BLMission *)this)->currentMission();
      piVar2 = (int *)(**(code **)(*(int *)(piVar2) + (0x208)))();
      (**(code **)(*(int *)(piVar2) + (0x11c)))(piVar2,iVar4 + 1);
      uVar3 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
      ((cocos2d::CCNotificationCenter *)uVar3)->postNotification((char const*)((intptr_t)"EVENT_UPDATE_ATTACK_COUNT"));
    }
    if ((*(int *)((int)this + 4*(0x94)) - 3U < 2) && (iVar4 = ((cocos2d::CCArray *)uVar1)->count(), iVar4 != 0)) {
      iVar4 = (undefined4)(intptr_t)(func_0079e59c(*(int *)((int)this + 4*(0xd5)),0x3f800000));
      *(int *)((int)this + 4*(0xd5)) = iVar4;
      (**(code **)(*(int *)*(int *)((int)this + 4*(0xd1)) + 0x30))();
      uVar3 = (undefined4)(func_0079e2ec());
      iVar4 = (undefined4)(intptr_t)(func_0079e7b4(iVar4,uVar3));
      if (iVar4 == 0) {
        iVar4 = (undefined4)(intptr_t)(*(int *)((int)this + 4*(0x70)));
        func_0079e45c(auStack_1c,g_00445960 + 0x4458ce,auStack_20);
        iVar4 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)iVar4)->objectForKey((char const *)auStack_1c));
        func_0079e2bc(auStack_1c);
        if (iVar4 == 0) {
          iVar4 = (undefined4)(intptr_t)((**(code **)(*(int *)*(int *)((int)this + 4*(0xd1)) + 0x50))());
          if (iVar4 == 0) {
            BLRemoteAttackSprite::removeSelf();
          }
        }
        else {
          BLRemoteAttackSprite::playAttackAction();
        }
      }
      else {
        BLRemoteAttackSprite::attackNextRole();
      }
    }
  }
  return;
}

void BLRemoteAttackSprite::thrrow(BLAnimateFrameData* p1, cocos2d::CCArray* p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

bool BLRemoteAttackSprite::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void BLRemoteAttackSprite::setPartnerNode(cocos2d::CCNode* p1, float p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLRemoteAttackSprite::updatePosition()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLRemoteAttackSprite::updateFrameDataInTikc(BLAnimateFrameData* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLRemoteAttackSprite::tick(float p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLRemoteAttackSprite::updateFrameData(BLAnimateFrameData* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
