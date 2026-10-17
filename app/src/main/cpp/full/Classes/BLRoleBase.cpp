#include "BLRoleBase.h"
#include "CCDictionary.h"
#include "CCActionManager.h"
#include "CCActionInterval.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "CCNotificationCenter.h"
#include "BLRemoteAttackData.h"
#include "BLRole.h"
#include "BLRoleData.h"
#include "CCAction.h"
#include "BLAnimateData.h"
#include "BLAnimateFrameData.h"
#include "CCGeometry.h"
#include "CCTouch.h"
#include "CCObject.h"
#include "CCNode.h"
#include "CCSprite.h"
#include "CCDirector.h"
#include "CCArray.h"
#include "RoleData.h"
#include "BLAction.h"
#include "BLAttackHurtData.h"
#include "BLDebug.h"
#include "BLGameScene.h"
#include "BLHit.h"
#include "BLLeakUtils.h"
#include "BLMapScene.h"
#include "BLMission.h"
#include "BLMonsterData.h"
#include "BLRemoteAttackSprite.h"
#include "BLRoleAttribute.h"
#include "BLRoleDrop.h"
#include "BLSpeed.h"
#include "BLSprite.h"
#include "BLSpriteEffect.h"
#include "DataCacheManager.h"
#include "DataManager.h"
#include "SharkAction.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
using namespace cocos2d;
// 兜底声明
extern "C" unsigned long g_00450788;
extern "C" long long func_0042f3fc(...);
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2dc(...);
extern "C" long long func_0079e2ec(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4bc(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long func_0079e4ec(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e51c(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long func_0079e5bc(...);
extern "C" long long func_0079e5dc(...);
extern "C" long long func_0079e5ec(...);
extern "C" long long func_0079e5fc(...);
extern "C" long long func_0079e60c(...);
extern "C" long long func_0079e63c(...);
extern "C" long long func_0079e6c0(...);
extern "C" long long func_0079e734(...);
extern "C" long long func_0079e744(...);
extern "C" long long func_0079e7b4(...);
extern "C" long long func_0079e7c4(...);
extern "C" long long func_0079e7e4(...);
extern "C" long long func_0079e8c4(...);
extern "C" long long func_0079e934(...);
extern "C" long long func_0079e944(...);
extern "C" long long func_0079e9f4(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long _DAT_004508e8;
extern "C" unsigned long _DAT_004508ec;
extern "C" unsigned long _DAT_004508f0;
extern "C" unsigned long _DAT_004508f4;
extern "C" unsigned long _DAT_00450ad4;
extern "C" unsigned long _DAT_00450ad8;
extern "C" unsigned long _DAT_00450adc;
extern "C" unsigned long _DAT_00450ae0;
extern "C" unsigned long _DAT_00450ae4;
extern "C" unsigned long _DAT_00450ae8;
extern "C" unsigned long _DAT_00450aec;
extern "C" unsigned long _DAT_00450af0;
extern "C" unsigned long _DAT_00450af4;
extern "C" unsigned long _DAT_00450b18;
extern "C" unsigned long _DAT_00450e9c;
extern "C" unsigned long _DAT_00450ea0;
extern "C" unsigned long _DAT_00450ea4;
extern "C" unsigned long _DAT_00450ea8;
extern "C" unsigned long _DAT_00450eac;
extern "C" unsigned long _DAT_00450eb0;
extern "C" unsigned long _DAT_00450eb4;
extern "C" unsigned long _DAT_00450eb8;
extern "C" unsigned long _DAT_00451150;
extern "C" unsigned long _DAT_00451154;
extern "C" unsigned long _DAT_00451158;
extern "C" unsigned long _DAT_0045125c;
extern "C" unsigned long _DAT_00451260;
extern "C" unsigned long _DAT_00451264;
extern "C" unsigned long _DAT_00451268;
extern "C" unsigned long _DAT_00451358;
extern "C" unsigned long _DAT_00451420;
extern "C" unsigned long _DAT_0045167c;
extern "C" unsigned long _DAT_00451908;
extern "C" unsigned long _DAT_0045190c;
extern "C" unsigned long _DAT_00451a00;
extern "C" unsigned long _DAT_00451ab0;
extern "C" unsigned long _DAT_00451d18;
extern "C" unsigned long _DAT_00451d1c;
extern "C" unsigned long _DAT_00451d20;
extern "C" unsigned long _DAT_00451d24;
extern "C" unsigned long _DAT_0045232c;
extern "C" unsigned long _DAT_00452330;
extern "C" unsigned long _DAT_00452334;
extern "C" unsigned long _DAT_00452338;
extern "C" unsigned long _DAT_0045233c;
extern "C" unsigned long _DAT_00452340;
extern "C" unsigned long _DAT_00452344;
extern "C" unsigned long _DAT_00452348;
extern "C" unsigned long _DAT_0045249c;
extern "C" unsigned long _DAT_004524a0;
extern "C" unsigned long _DAT_004524a4;
extern "C" unsigned long _DAT_004524a8;
extern "C" unsigned long _DAT_004524ac;
extern "C" unsigned long _DAT_004524b0;
extern "C" unsigned long _DAT_004524b4;
extern "C" unsigned long _DAT_004524b8;
extern "C" unsigned long _DAT_004524bc;
extern "C" unsigned long _DAT_00452804;
extern "C" unsigned long _DAT_00452808;
extern "C" unsigned long _DAT_0045280c;
extern "C" unsigned long _DAT_00452810;
extern "C" unsigned long _DAT_00452814;
extern "C" unsigned long _DAT_00452818;
extern "C" unsigned long _DAT_00452b5c;
extern "C" unsigned long _DAT_00452b60;
extern "C" unsigned long _DAT_00452b64;
extern "C" unsigned long _DAT_00452b68;
extern "C" unsigned long _DAT_00452b6c;
extern "C" unsigned long _DAT_00452b70;
extern "C" unsigned long _DAT_00452c98;
extern "C" unsigned long _DAT_00452c9c;
extern "C" unsigned long _DAT_00452ca0;
extern "C" unsigned long _DAT_0045302c;
extern "C" unsigned long _DAT_00453030;
extern "C" unsigned long _DAT_00453034;
extern "C" unsigned long _DAT_00453038;
extern "C" unsigned long _DAT_0045303c;
extern "C" unsigned long _DAT_00453040;
extern "C" unsigned long _DAT_00453044;
extern "C" unsigned long _DAT_00453048;
extern "C" unsigned long _DAT_0045304c;
extern "C" unsigned long _DAT_00453220;
extern "C" unsigned long _DAT_00453224;
extern "C" unsigned long _DAT_00453228;
extern "C" unsigned long _DAT_0045322c;
extern "C" unsigned long _DAT_00453230;
extern "C" unsigned long _DAT_00453234;
extern "C" unsigned long _DAT_00453238;
extern "C" unsigned long _DAT_0045323c;
extern "C" unsigned long _DAT_00453240;
extern "C" unsigned long _DAT_00453400;
extern "C" unsigned long _DAT_00453404;
extern "C" unsigned long _DAT_00453480;
extern "C" unsigned long _DAT_00453878;
extern "C" unsigned long _DAT_0045387c;
extern "C" unsigned long _DAT_00453880;
extern "C" unsigned long _DAT_00453884;
extern "C" unsigned long _DAT_00453888;
extern "C" unsigned long _DAT_0045388c;
extern "C" unsigned long _DAT_00453890;
extern "C" unsigned long _DAT_00453894;
extern "C" unsigned long _DAT_00453898;
extern "C" unsigned long _DAT_0045389c;
extern "C" unsigned long _DAT_004538a0;
extern "C" unsigned long _DAT_004538a4;
extern "C" unsigned long _UNK_004507a0;
extern "C" unsigned long _UNK_00450908;
extern "C" unsigned long _UNK_0045091c;
extern "C" unsigned long _UNK_00450944;
extern "C" unsigned long _UNK_00450958;
extern "C" unsigned long _UNK_00450b2c;
extern "C" unsigned long _UNK_0045136c;
extern "C" unsigned long _UNK_00451690;
extern "C" unsigned long g_004507a0;
extern "C" unsigned long g_004508e8;
extern "C" unsigned long g_004508ec;
extern "C" unsigned long g_004508f0;
extern "C" unsigned long g_004508f4;
extern "C" unsigned long g_00450908;
extern "C" unsigned long g_0045091c;
extern "C" unsigned long g_00450944;
extern "C" unsigned long g_00450958;
extern "C" unsigned long g_00450ad4;
extern "C" unsigned long g_00450ad8;
extern "C" unsigned long g_00450adc;
extern "C" unsigned long g_00450ae0;
extern "C" unsigned long g_00450ae4;
extern "C" unsigned long g_00450ae8;
extern "C" unsigned long g_00450aec;
extern "C" unsigned long g_00450af0;
extern "C" unsigned long g_00450af4;
extern "C" unsigned long g_00450b18;
extern "C" unsigned long g_00450b2c;
extern "C" unsigned long g_00450e9c;
extern "C" unsigned long g_00450ea0;
extern "C" unsigned long g_00450ea4;
extern "C" unsigned long g_00450ea8;
extern "C" unsigned long g_00450eac;
extern "C" unsigned long g_00450eb0;
extern "C" unsigned long g_00450eb4;
extern "C" unsigned long g_00450eb8;
extern "C" unsigned long g_00451150;
extern "C" unsigned long g_00451154;
extern "C" unsigned long g_00451158;
extern "C" unsigned long g_0045125c;
extern "C" unsigned long g_00451260;
extern "C" unsigned long g_00451264;
extern "C" unsigned long g_00451268;
extern "C" unsigned long g_00451358;
extern "C" unsigned long g_0045136c;
extern "C" unsigned long g_00451420;
extern "C" unsigned long g_0045167c;
extern "C" unsigned long g_00451690;
extern "C" unsigned long g_00451908;
extern "C" unsigned long g_0045190c;
extern "C" unsigned long g_00451a00;
extern "C" unsigned long g_00451ab0;
extern "C" unsigned long g_00451d18;
extern "C" unsigned long g_00451d1c;
extern "C" unsigned long g_00451d20;
extern "C" unsigned long g_00451d24;
extern "C" unsigned long g_0045232c;
extern "C" unsigned long g_00452330;
extern "C" unsigned long g_00452334;
extern "C" unsigned long g_00452338;
extern "C" unsigned long g_0045233c;
extern "C" unsigned long g_00452340;
extern "C" unsigned long g_00452344;
extern "C" unsigned long g_00452348;
extern "C" unsigned long g_0045249c;
extern "C" unsigned long g_004524a0;
extern "C" unsigned long g_004524a4;
extern "C" unsigned long g_004524a8;
extern "C" unsigned long g_004524ac;
extern "C" unsigned long g_004524b0;
extern "C" unsigned long g_004524b4;
extern "C" unsigned long g_004524b8;
extern "C" unsigned long g_004524bc;
extern "C" unsigned long g_00452804;
extern "C" unsigned long g_00452808;
extern "C" unsigned long g_0045280c;
extern "C" unsigned long g_00452810;
extern "C" unsigned long g_00452814;
extern "C" unsigned long g_00452818;
extern "C" unsigned long g_00452b5c;
extern "C" unsigned long g_00452b60;
extern "C" unsigned long g_00452b64;
extern "C" unsigned long g_00452b68;
extern "C" unsigned long g_00452b6c;
extern "C" unsigned long g_00452b70;
extern "C" unsigned long g_00452c98;
extern "C" unsigned long g_00452c9c;
extern "C" unsigned long g_00452ca0;
extern "C" unsigned long g_0045302c;
extern "C" unsigned long g_00453030;
extern "C" unsigned long g_00453034;
extern "C" unsigned long g_00453038;
extern "C" unsigned long g_0045303c;
extern "C" unsigned long g_00453040;
extern "C" unsigned long g_00453044;
extern "C" unsigned long g_00453048;
extern "C" unsigned long g_0045304c;
extern "C" unsigned long g_00453220;
extern "C" unsigned long g_00453224;
extern "C" unsigned long g_00453228;
extern "C" unsigned long g_0045322c;
extern "C" unsigned long g_00453230;
extern "C" unsigned long g_00453234;
extern "C" unsigned long g_00453238;
extern "C" unsigned long g_0045323c;
extern "C" unsigned long g_00453240;
extern "C" unsigned long g_00453400;
extern "C" unsigned long g_00453404;
extern "C" unsigned long g_00453480;
extern "C" unsigned long g_00453878;
extern "C" unsigned long g_0045387c;
extern "C" unsigned long g_00453880;
extern "C" unsigned long g_00453884;
extern "C" unsigned long g_00453888;
extern "C" unsigned long g_0045388c;
extern "C" unsigned long g_00453890;
extern "C" unsigned long g_00453894;
extern "C" unsigned long g_00453898;
extern "C" unsigned long g_0045389c;
extern "C" unsigned long g_004538a0;
extern "C" unsigned long g_004538a4;
BLMapScene* BLRoleBase::getMapScene() const
{
  return (BLMapScene*)(*(undefined4 *)(((int)this) + 0x23c));
}

void BLRoleBase::setMapScene(BLMapScene* p1)
{
  *(undefined4 *)(((int)this) + 0x23c) = (undefined4)(intptr_t)p1;
  return;
}

int BLRoleBase::getRoleType() const
{
  return *(undefined4 *)(((int)this) + 0x240);
}

void BLRoleBase::setRoleType(int p1)
{
  *(undefined4 *)(((int)this) + 0x240) = p1;
  return;
}

int BLRoleBase::getRoleSubType() const
{
  return *(undefined4 *)(((int)this) + 0x244);
}

void BLRoleBase::setRoleSubType(int p1)
{
  *(undefined4 *)(((int)this) + 0x244) = p1;
  return;
}

int BLRoleBase::getCurrentStopFrame() const
{
  return *(undefined4 *)(((int)this) + 0x248);
}

void BLRoleBase::setCurrentStopFrame(int p1)
{
  *(undefined4 *)(((int)this) + 0x248) = p1;
  return;
}

int BLRoleBase::getCurrentFps() const
{
  return *(undefined4 *)(((int)this) + 0x24c);
}

void BLRoleBase::setCurrentFps(int p1)
{
  *(undefined4 *)(((int)this) + 0x24c) = p1;
  return;
}

int BLRoleBase::getAnimationStatus() const
{
  return *(undefined4 *)(((int)this) + 0x250);
}

void BLRoleBase::setAnimationStatus(int p1)
{
  *(undefined4 *)(((int)this) + 0x250) = p1;
  return;
}

float BLRoleBase::getSpeedMoveX() const
{
  return *(undefined4 *)(((int)this) + 0x254);
}

void BLRoleBase::setSpeedMoveX(float p1)
{
  *(undefined4 *)(((int)this) + 0x254) = p1;
  return;
}

float BLRoleBase::getSpeedMoveY() const
{
  return *(undefined4 *)(((int)this) + 600);
}

void BLRoleBase::setSpeedMoveY(float p1)
{
  *(undefined4 *)(((int)this) + 600) = p1;
  return;
}

float BLRoleBase::getSpeedX() const
{
  return *(undefined4 *)(((int)this) + 0x25c);
}

void BLRoleBase::setSpeedX(float p1)
{
  *(undefined4 *)(((int)this) + 0x25c) = p1;
  return;
}

float BLRoleBase::getSpeedY() const
{
  return *(undefined4 *)(((int)this) + 0x260);
}

void BLRoleBase::setSpeedY(float p1)
{
  *(undefined4 *)(((int)this) + 0x260) = p1;
  return;
}

float BLRoleBase::getAccelerationX() const
{
  return *(undefined4 *)(((int)this) + 0x264);
}

void BLRoleBase::setAccelerationX(float p1)
{
  *(undefined4 *)(((int)this) + 0x264) = p1;
  return;
}

float BLRoleBase::getAccelerationY() const
{
  return *(undefined4 *)(((int)this) + 0x268);
}

void BLRoleBase::setAccelerationY(float p1)
{
  *(undefined4 *)(((int)this) + 0x268) = p1;
  return;
}

float BLRoleBase::getMoveCommobX() const
{
  return *(undefined4 *)(((int)this) + 0x26c);
}

void BLRoleBase::setMoveCommobX(float p1)
{
  *(undefined4 *)(((int)this) + 0x26c) = p1;
  return;
}

BLSpriteEffect* BLRoleBase::getSpriteUnder() const
{
  return (BLSpriteEffect*)(*(undefined4 *)(((int)this) + 0x270));
}

void BLRoleBase::setSpriteUnder(BLSpriteEffect* p1)
{
  *(undefined4 *)(((int)this) + 0x270) = (undefined4)(intptr_t)p1;
  return;
}

BLSpriteEffect* BLRoleBase::getSpriteUp() const
{
  return (BLSpriteEffect*)(*(undefined4 *)(((int)this) + 0x274));
}

void BLRoleBase::setSpriteUp(BLSpriteEffect* p1)
{
  *(undefined4 *)(((int)this) + 0x274) = (undefined4)(intptr_t)p1;
  return;
}

cocos2d::CCSprite* BLRoleBase::getSpriteRole() const
{
  return (cocos2d::CCSprite*)(*(undefined4 *)(((int)this) + 0x278));
}

void BLRoleBase::setSpriteRole(cocos2d::CCSprite* p1)
{
  *(undefined4 *)(((int)this) + 0x278) = (undefined4)(intptr_t)p1;
  return;
}

cocos2d::CCSprite* BLRoleBase::getSpriteUnderParent() const
{
  return (cocos2d::CCSprite*)(*(undefined4 *)(((int)this) + 0x27c));
}

void BLRoleBase::setSpriteUnderParent(cocos2d::CCSprite* p1)
{
  *(undefined4 *)(((int)this) + 0x27c) = (undefined4)(intptr_t)p1;
  return;
}

cocos2d::CCSprite* BLRoleBase::getSpriteUpParent() const
{
  return (cocos2d::CCSprite*)(*(undefined4 *)(((int)this) + 0x280));
}

void BLRoleBase::setSpriteUpParent(cocos2d::CCSprite* p1)
{
  *(undefined4 *)(((int)this) + 0x280) = (undefined4)(intptr_t)p1;
  return;
}

bool BLRoleBase::getISCanFlapX() const
{
  return *(undefined1 *)(((int)this) + 0x284);
}

void BLRoleBase::setISCanFlapX(bool p1)
{
  *(undefined1 *)(((int)this) + 0x284) = p1;
  return;
}

float BLRoleBase::getMapHeight() const
{
  return *(undefined4 *)(((int)this) + 0x288);
}

void BLRoleBase::setMapHeight(float p1)
{
  *(undefined4 *)(((int)this) + 0x288) = p1;
  return;
}

cocos2d::CCNode* BLRoleBase::getPartentNode() const
{
  return (cocos2d::CCNode*)(*(undefined4 *)(((int)this) + 0x28c));
}

void BLRoleBase::setPartentNode(cocos2d::CCNode* p1)
{
  *(undefined4 *)(((int)this) + 0x28c) = (undefined4)(intptr_t)p1;
  return;
}

float BLRoleBase::getRoleScaleX() const
{
  return *(undefined4 *)(((int)this) + 0x290);
}

void BLRoleBase::setRoleScaleX(float p1)
{
  *(undefined4 *)(((int)this) + 0x290) = p1;
  return;
}

float BLRoleBase::getRoleScaleY() const
{
  return *(undefined4 *)(((int)this) + 0x294);
}

void BLRoleBase::setRoleScaleY(float p1)
{
  *(undefined4 *)(((int)this) + 0x294) = p1;
  return;
}

float BLRoleBase::getSpriteScale() const
{
  return *(undefined4 *)(((int)this) + 0x29c);
}

void BLRoleBase::setSpriteScale(float p1)
{
  *(undefined4 *)(((int)this) + 0x29c) = p1;
  return;
}

int BLRoleBase::getSpeed() const
{
  return *(undefined4 *)(((int)this) + 0x2a0);
}

void BLRoleBase::setSpeed(int p1)
{
  *(undefined4 *)(((int)this) + 0x2a0) = p1;
  return;
}

float BLRoleBase::getUnderAttackLevel() const
{
  return *(undefined4 *)(((int)this) + 0x2a4);
}

void BLRoleBase::setUnderAttackLevel(float p1)
{
  *(undefined4 *)(((int)this) + 0x2a4) = p1;
  return;
}

float BLRoleBase::getRoleBaseAlpha() const
{
  return *(undefined4 *)(((int)this) + 0x2a8);
}

void BLRoleBase::setRoleBaseAlpha(float p1)
{
  *(undefined4 *)(((int)this) + 0x2a8) = p1;
  return;
}

float BLRoleBase::getRoleBaseRotation() const
{
  return *(undefined4 *)(((int)this) + 0x2ac);
}

void BLRoleBase::setRoleBaseRotation(float p1)
{
  *(undefined4 *)(((int)this) + 0x2ac) = p1;
  return;
}

float BLRoleBase::getAttackDistance() const
{
  return *(undefined4 *)(((int)this) + 0x2b0);
}

void BLRoleBase::setAttackDistance(float p1)
{
  *(undefined4 *)(((int)this) + 0x2b0) = p1;
  return;
}

BLMonsterData* BLRoleBase::getMonsterData() const
{
  return (BLMonsterData*)(*(undefined4 *)(((int)this) + 0x2b4));
}

RoleData* BLRoleBase::getUserData() const
{
  return (RoleData*)(*(undefined4 *)(((int)this) + 0x2b8));
}

bool BLRoleBase::getISRoleTouchEnable() const
{
  return *(undefined1 *)(((int)this) + 700);
}

void BLRoleBase::setISRoleTouchEnable(bool p1)
{
  *(undefined1 *)(((int)this) + 700) = p1;
  return;
}

int BLRoleBase::getSkinId() const
{
  return *(undefined4 *)(((int)this) + 0x2c0);
}

void BLRoleBase::setSkinId(int p1)
{
  *(undefined4 *)(((int)this) + 0x2c0) = p1;
  return;
}

void BLRoleBase::setUserData(RoleData* p1)
{
  if (*(int *)(((int)this) + 0x2b8) != (int)(intptr_t)p1) {
    if ((int)(intptr_t)p1 != 0) {
      ((cocos2d::CCObject *)p1)->retain();
    }
    if (*(int *)(((int)this) + 0x2b8) != 0) {
      ((cocos2d::CCObject *)this)->release();
    }
    *(int *)(((int)this) + 0x2b8) = (undefined4)(intptr_t)p1;
  }
  return;
}

void BLRoleBase::setMonsterData(BLMonsterData* p1)
{
  if (*(int *)(((int)this) + 0x2b4) != (int)(intptr_t)p1) {
    if ((int)(intptr_t)p1 != 0) {
      ((cocos2d::CCObject *)p1)->retain();
    }
    if (*(int *)(((int)this) + 0x2b4) != 0) {
      ((cocos2d::CCObject *)this)->release();
    }
    *(int *)(((int)this) + 0x2b4) = (undefined4)(intptr_t)p1;
  }
  return;
}

void BLRoleBase::setRoleBaseScale(float p1)
{
  *(undefined4 *)(((int)this) + 0x298) = p1;
  return;
}

int BLRoleBase::getRoleBaseScale()
{
  return *(undefined4 *)(((int)this) + 0x298);
}

void BLRoleBase::onMoveToEnd()
{
  return;
}

void BLRoleBase::onPauseActionCallBack(cocos2d::CCObject* p1)
{
  *(undefined4 *)(((int)this) + 0x248) = 0;
  return;
}

void BLRoleBase::onChangeFpsCallBack(cocos2d::CCObject* p1)
{
  *(undefined4 *)(((int)this) + 0x24c) = 0x1e;
  return;
}

void BLRoleBase::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLRoleBase::hit(BLHit* p1, cocos2d::CCArray* p2)
{
  cocos2d::CCArray::create();
  return;
}

BLRoleBase::~BLRoleBase()
{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [8];
  
  iVar2 = *(int *)(g_004508e8 + 0x45080c);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x3a8;
  *(int *)((int)this + 4*(0x3d)) = iVar2 + 1000;
  *(int *)((int)this + 4*(0x71)) = iVar2 + 0x400;
  *(int *)((int)this + 4*(0x8b)) = iVar2 + g_004508ec;
  *(int *)((int)this + 4*(0x8c)) = iVar2 + g_004508f0;
  if (*(int *)((int)this + 4*(0xad)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0xad)) = 0;
  }
  if (*(int *)((int)this + 4*(0xae)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0xae)) = 0;
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(auStack_1c,((intptr_t)"BLRoleBase"),auStack_20);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)auStack_1c);
  func_0079e2bc(auStack_1c);
  func_0079e2bc(((int)this) + 0xb6);
  ((BLRoleDrop *)((int)this) + 0x8c)->~BLRoleDrop();
  ((BLRoleAttribute *)((int)this) + 0x71)->~BLRoleAttribute();
  BLSprite::~BLSprite();
  return;
}




void BLRoleBase::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  undefined4 uVar1;
  
  *(undefined1 *)(((int)this) + 800) = 1;
  uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar1)->postNotification((char const*)((intptr_t)"EVENT_TOUCH_MOVE"), (cocos2d::CCObject*)*(undefined4 *)(((int)this) + 0x1b8));
  return;
}



void BLRoleBase::removeNodeInMaps()
{
  int iVar1;
  
  if ((*(int **)(((int)this) + 0x27c) != (int *)0x0) &&
     (iVar1 = (**(code **)(**(int **)(((int)this) + 0x27c) + 0xe4))(), iVar1 != 0)) {
    ((cocos2d::CCNode *)*(undefined4 *)(((int)this) + 0x270))->stopAllActions();
    (**(code **)(**(int **)(((int)this) + 0x27c) + 0xec))(*(int **)(((int)this) + 0x27c),1);
    *(undefined4 *)(((int)this) + 0x27c) = 0;
    *(undefined4 *)(((int)this) + 0x270) = 0;
  }
  if ((*(int **)(((int)this) + 0x280) != (int *)0x0) &&
     (iVar1 = (**(code **)(**(int **)(((int)this) + 0x280) + 0xe4))(), iVar1 != 0)) {
    ((cocos2d::CCNode *)*(undefined4 *)(((int)this) + 0x274))->stopAllActions();
    (**(code **)(**(int **)(((int)this) + 0x280) + 0xec))(*(int **)(((int)this) + 0x280),1);
    *(undefined4 *)(((int)this) + 0x274) = 0;
    *(undefined4 *)(((int)this) + 0x280) = 0;
  }
  if ((*(int **)(((int)this) + 0x32c) != (int *)0x0) &&
     (iVar1 = (**(code **)(**(int **)(((int)this) + 0x32c) + 0xe4))(), iVar1 != 0)) {
    (**(code **)(**(int **)(((int)this) + 0x32c) + 0xec))(*(int **)(((int)this) + 0x32c),1);
    *(undefined4 *)(((int)this) + 0x32c) = 0;
  }
  if ((*(int **)(((int)this) + 0x330) != (int *)0x0) &&
     (iVar1 = (**(code **)(**(int **)(((int)this) + 0x330) + 0xe4))(), iVar1 != 0)) {
    (**(code **)(**(int **)(((int)this) + 0x330) + 0xec))(*(int **)(((int)this) + 0x330),1);
    *(undefined4 *)(((int)this) + 0x330) = 0;
  }
  if ((*(int **)(((int)this) + 0x334) != (int *)0x0) &&
     (iVar1 = (**(code **)(**(int **)(((int)this) + 0x334) + 0xe4))(), iVar1 != 0)) {
    ((BLRoleBase *)*(undefined4 *)(((int)this) + 0x334))->removeNodeInMaps();
    (**(code **)(**(int **)(((int)this) + 0x334) + 0xec))(*(int **)(((int)this) + 0x334),1);
    *(undefined4 *)(((int)this) + 0x334) = 0;
  }
  return;
}

void BLRoleBase::setRoleBaseScale(float p1, float p2)
{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  bool bVar5;
  undefined4 uStack_34;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [8];
  
  iVar3 = *(int *)((int)this + 4*(0xa6));
  iVar1 = ((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(p1),(int)(iVar3))));
  *(int *)((int)this + 4*(0xa4)) = iVar1;
  iVar3 = ((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(p2),(int)(iVar3))));
  *(int *)((int)this + 4*(0xa5)) = iVar3;
  piVar4 = (int *)*(int *)((int)this + 4*(0x9e));
  iVar3 = (int)*(int *)&(*piVar4);
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(iVar1),(int)(*(int *)((int)this + 4*(0xa7)))))));
  (**(code **)(iVar3 + 0x30))(piVar4,uVar2);
  piVar4 = (int *)*(int *)((int)this + 4*(0x9e));
  iVar1 = (int)*(int *)&(*piVar4);
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(*(int *)((int)this + 4*(0xa5))),(int)(*(int *)((int)this + 4*(0xa7)))))));
  (**(code **)(iVar1 + 0x38))(piVar4,uVar2);
  if (*(int *)((int)this + 4*(0x9d)) == 0) {
    uStack_34 = (undefined4)(0x40000000);
    goto LAB_004510fa;
  }
  iVar1 = (**(code **)(*(int *)this + 0x378))(((int)this));
  if (iVar1 == 0) {
LAB_004510ac:
    uStack_34 = (undefined4)(0x40000000);
  }
  else {
    piVar4 = (int *)(**(code **)(*(int *)this + 0x378))(((int)this));
    (**(code **)(*piVar4 + 0x28))(auStack_20,piVar4);
    iVar1 = func_0079e4bc(auStack_20,((intptr_t)"rank"));
    bVar5 = true;
    if (iVar1 != 0) {
      piVar4 = (int *)(**(code **)(*(int *)this + 0x378))(((int)this));
      (**(code **)(*piVar4 + 0x28))(auStack_1c,piVar4);
      iVar1 = func_0079e4bc(auStack_1c,((intptr_t)"startbattle"));
      bVar5 = iVar1 == 0;
      func_0079e2bc(auStack_1c);
    }
    func_0079e2bc(auStack_20);
    uStack_34 = (undefined4)(g_00451158);
    if (!bVar5) goto LAB_004510ac;
  }
  piVar4 = (int *)*(int *)((int)this + 4*(0x9d));
  iVar1 = (int)*(int *)&(*piVar4);
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(*(int *)((int)this + 4*(0xa4))),(int)(*(int *)((int)this + 4*(0xa7)))))));
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar2),(int)(uStack_34)))));
  (**(code **)(iVar1 + 0x30))(piVar4,uVar2);
  piVar4 = (int *)*(int *)((int)this + 4*(0x9d));
  iVar1 = (int)*(int *)&(*piVar4);
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(*(int *)((int)this + 4*(0xa5))),(int)(*(int *)((int)this + 4*(0xa7)))))));
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar2),(int)(uStack_34)))));
  (**(code **)(iVar1 + 0x38))(piVar4,uVar2);
LAB_004510fa:
  piVar4 = (int *)*(int *)((int)this + 4*(0x9c));
  if (piVar4 != (int *)0x0) {
    iVar1 = (int)*(int *)&(*piVar4);
    uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(*(int *)((int)this + 4*(0xa4))),(int)(*(int *)((int)this + 4*(0xa7)))))));
    uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar2),(int)(uStack_34)))));
    (**(code **)(iVar1 + 0x30))(piVar4,uVar2);
    piVar4 = (int *)*(int *)((int)this + 4*(0x9c));
    iVar1 = (int)*(int *)&(*piVar4);
    uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(*(int *)((int)this + 4*(0xa5))),(int)(*(int *)((int)this + 4*(0xa7)))))));
    uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar2),(int)(uStack_34)))));
    (**(code **)(iVar1 + 0x38))(piVar4,uVar2);
  }
  return;
}

void BLRoleBase::setRoleOpacity(int p1)
{
  int *piVar1;
  
  (**(code **)(**(int **)(((int)this) + 0x278) + 0x19c))(*(int **)(((int)this) + 0x278),p1);
  piVar1 = *(int **)(((int)this) + 0x274);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x19c))(piVar1,p1);
  }
  piVar1 = *(int **)(((int)this) + 0x270);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x19c))(piVar1,p1);
  }
  return;
}















undefined8 BLRoleBase::setRoleAlpha(float p1)
{
  undefined1 uVar1;
  int iVar2;
  int *piVar3;
  int iStack_1c;
  
  piVar3 = *(int **)(((int)this) + 0x278);
  iVar2 = (int)*(int *)&(*piVar3);
  (void)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(p1),(int)(*(undefined4 *)(((int)this) + 0x2a8))))));
  uVar1 = ((long long)([](int _a){float _f;__builtin_memcpy(&_f,&_a,4);return (int)(unsigned)_f;}((int)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(p1),(int)(*(undefined4 *)(((int)this) + 0x2a8)))))))));
  (**(code **)(iVar2 + 0x19c))(piVar3,uVar1);
  piVar3 = *(int **)(((int)this) + 0x274);
  iStack_1c = p1;
  if (piVar3 != (int *)0x0) {
    iStack_1c = (int)*(int *)&(*piVar3);
    (void)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(p1),(int)(*(undefined4 *)(((int)this) + 0x2a8))))));
    uVar1 = ((long long)([](int _a){float _f;__builtin_memcpy(&_f,&_a,4);return (int)(unsigned)_f;}((int)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(p1),(int)(*(undefined4 *)(((int)this) + 0x2a8)))))))));
    (**(code **)(iStack_1c + 0x19c))(piVar3,uVar1);
  }
  piVar3 = *(int **)(((int)this) + 0x270);
  if (piVar3 != (int *)0x0) {
    iStack_1c = (int)*(int *)&(*piVar3);
    (void)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(p1),(int)(*(undefined4 *)(((int)this) + 0x2a8))))));
    uVar1 = ((long long)([](int _a){float _f;__builtin_memcpy(&_f,&_a,4);return (int)(unsigned)_f;}((int)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(p1),(int)(*(undefined4 *)(((int)this) + 0x2a8)))))))));
    (**(code **)(iStack_1c + 0x19c))(piVar3,uVar1);
  }
  return ghidra_CONCAT44(iStack_1c,0x19c);
}















void BLRoleBase::onExit()
{
  undefined4 uVar1;
  int *piVar2;
  
  uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar1)->removeObserver((cocos2d::CCObject*)((int)this), (char const*)((intptr_t)"EVENT_ANIMATE_UPDATE"));
  piVar2 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar1 = (undefined4)((**(code **)(*piVar2 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar1)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x22c);
  if (*(int *)(((int)this) + 0x314) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(undefined4 *)(((int)this) + 0x314) = 0;
  }
  if (*(int *)(((int)this) + 0x318) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(undefined4 *)(((int)this) + 0x318) = 0;
  }
  if (*(int *)(((int)this) + 0x31c) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(undefined4 *)(((int)this) + 0x31c) = 0;
  }
  if (*(int *)(((int)this) + 0x2dc) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(undefined4 *)(((int)this) + 0x2dc) = 0;
  }
  BLSprite::onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (38) =====
void BLRoleBase::onRoleSharkEndCallBack(cocos2d::CCObject* p1)
{
  undefined4 p3 = 0;
  undefined4 p4 = 0;

  code *pcVar1;
  
  pcVar1 = *(code **)(**(int **)(((int)this) + 0x2d0) + 0x4c);
  (*pcVar1)(*(int **)(((int)this) + 0x2d0),"CC: (GNU) 4.4.3",p3,pcVar1,p4);
  return;
}

undefined8 BLRoleBase::roleMove(cocos2d::CCPoint * p1)
{
  undefined4 uVar1;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p1);
  uVar1 = (undefined4)((**(code **)(*(int *)this + 0x50))());
  ((cocos2d::CCPoint *)(uVar1))->operator+(*(const CCPoint *)(void *)p1);
  (**(code **)(*(int *)this + 0x4c))(((int)this),&piStack_18);
  return ghidra_CONCAT44(uStack_14,piStack_18);
}

void BLRoleBase::setRoleFilpX(bool p1, bool p2)
{
  if ((*(char *)(((int)this) + 0x284) != '\0') || (p2 != 0)) {
    ((cocos2d::CCSprite *)this)->setFlipX((bool)0);
    if (*(int *)(((int)this) + 0x274) != 0) {
      ((cocos2d::CCSprite *)(*(int *)(((int)this) + 0x274)))->setFlipX(p1);
    }
    if (*(int *)(((int)this) + 0x270) != 0) {
      ((cocos2d::CCSprite *)(*(int *)(((int)this) + 0x270)))->setFlipX(p1);
    }
    ((cocos2d::CCSprite *)(*(undefined4 *)(((int)this) + 0x278)))->setFlipX(p1);
  }
  return;
}

void BLRoleBase::onSpriteFrameUpdate(cocos2d::CCObject* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLRoleBase::thrrow(BLAnimateFrameData* p1, cocos2d::CCArray* p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

BLRoleBase::BLRoleBase()
{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [8];
  
  0 /* ctorZero */;
  0 /* ctorZero */;
  *(int *)((int)this + 4*(0x8b)) = *(int *)(g_00450e9c + 0x450c7a) + 8;
  0 /* ctorZero */;
  iVar2 = (undefined4)(intptr_t)(*(int *)(g_00450ea0 + 0x450c90));
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x3a8;
  *(int *)((int)this + 4*(0x3d)) = iVar2 + 1000;
  *(int *)((int)this + 4*(0x71)) = iVar2 + 0x400;
  *(int *)((int)this + 4*(0x8b)) = iVar2 + g_00450ea4;
  *(int *)((int)this + 4*(0x8c)) = iVar2 + g_00450ea8;
  *(int *)((int)this + 4*(0xb6)) = *(int *)(g_00450eac + 0x450cd6) + 0xc;
  0 /* ctorZero */;
  0 /* ctorZero */;
  0 /* ctorZero */;
  0 /* ctorZero */;
  *(int *)((int)this + 4*(0x95)) = 0;
  *(int *)((int)this + 4*(0x97)) = 0;
  *(int *)((int)this + 4*(0x98)) = 0;
  *(int *)((int)this + 4*(0x96)) = 0;
  *(int *)((int)this + 4*(0x9b)) = 0;
  *(int *)((int)this + 4*(0x99)) = 0;
  *(int *)((int)this + 4*(0x9a)) = 0;
  *(int *)((int)this + 4*(0xa2)) = 0;
  *(int *)((int)this + 4*(0xb8)) = 0;
  *(int *)((int)this + 4*(0x94)) = 0;
  *(int *)((int)this + 4*(0x91)) = 0;
  *(int *)((int)this + 4*(0xb4)) = 0;
  *(int *)((int)this + 4*(0xb5)) = 0;
  *(int *)((int)this + 4*(0xb1)) = 0;
  *(int *)((int)this + 4*(0x9d)) = 0;
  *(int *)((int)this + 4*(0x9c)) = 0;
  *(int *)((int)this + 4*(0x9e)) = 0;
  *(int *)((int)this + 4*(0xa3)) = 0;
  *(int *)((int)this + 4*(0xb2)) = 0;
  *(int *)((int)this + 4*(0xb3)) = 0;
  *(int *)((int)this + 4*(0xb7)) = 0;
  *(int *)((int)this + 4*(0xc5)) = 0;
  *(int *)((int)this + 4*(0xc6)) = 0;
  *(int *)((int)this + 4*(199)) = 0;
  *(int *)((int)this + 4*(0xad)) = 0;
  *(int *)((int)this + 4*(0xae)) = 0;
  func_0079e2dc(((int)this) + 0xb6,g_00450eb0 + 0x450daa);
  *(undefined1 *)(((int)this) + 0xa1) = 1;
  *(int *)((int)this + 4*(0x92)) = 0;
  *(int *)((int)this + 4*(0x93)) = 0x1e;
  *(int *)((int)this + 4*(0xa4)) = 0x3f800000;
  *(int *)((int)this + 4*(0xa5)) = 0x3f800000;
  *(int *)((int)this + 4*(0xa6)) = 0x3f800000;
  *(int *)((int)this + 4*(0x9f)) = 0;
  *(int *)((int)this + 4*(0xa0)) = 0;
  *(int *)((int)this + 4*(0x8f)) = 0;
  *(int *)((int)this + 4*(0xaa)) = 0x3f800000;
  *(int *)((int)this + 4*(0xab)) = 0;
  *(int *)((int)this + 4*(0xac)) = g_00450eb4;
  *(int *)((int)this + 4*(0xa7)) = 0x40000000;
  *(int *)((int)this + 4*(0xcb)) = 0;
  *(int *)((int)this + 4*(0xcc)) = 0;
  *(undefined1 *)(((int)this) + 0xaf) = 0;
  *(int *)((int)this + 4*(0xcd)) = 0;
  *(int *)((int)this + 4*(0xb0)) = -1;
  iVar2 = (undefined4)(intptr_t)(cocos2d::CCArray::create());
  *(int *)((int)this + 4*(0xb7)) = iVar2;
  if (iVar2 != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  *(int *)((int)this + 4*(0xce)) = 0;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(auStack_1c,((intptr_t)"BLRoleBase"),auStack_20);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)auStack_1c);
  func_0079e2bc(auStack_1c);
  return;
}

void BLRoleBase::getFirstFrameBody()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLRoleBase::updateBody()
{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined1 auStack_20 [4];
  undefined4 uStack_1c;
  undefined4 uStack_14;
  
  ((BLRoleBase *)(((int)this)))->getFirstFrameBody();
  uVar1 = (undefined4)(func_0079e4fc(uStack_14,0x3f000000));
  iVar2 = (undefined4)(intptr_t)(func_0079e59c(uVar1,uStack_1c));
  iVar2 = (undefined4)(intptr_t)(iVar2 + -0x80000000);
  (**(code **)(**(int **)(((int)this) + 0x278) + 100))(*(int **)(((int)this) + 0x278),iVar2);
  piVar3 = *(int **)(((int)this) + 0x274);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*(int *)(piVar3) + (100)))(piVar3,iVar2);
  }
  piVar3 = *(int **)(((int)this) + 0x270);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*(int *)(piVar3) + (100)))(piVar3,iVar2);
  }
  return;
}

bool BLRoleBase::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void BLRoleBase::setRCAttack(cocos2d::CCRect * p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLRoleBase::setRCThrrow(cocos2d::CCRect * p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

cocos2d::CCRect BLRoleBase::getRCThrrow(bool p1)
{ return cocos2d::CCRect(); }

void BLRoleBase::setRCBeingAttack(cocos2d::CCRect * p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

cocos2d::CCRect BLRoleBase::getRCBeingAttack(bool p1)
{ return cocos2d::CCRect(); }

void BLRoleBase::getStartPosY()
{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined1 auStack_28 [12];
  undefined4 uStack_1c;
  
  ((BLRoleBase *)(((int)this)))->getRCBeingAttack(1);
  piVar3 = *(int **)(((int)this) + 0x2b4);
  if (piVar3 == (int *)0x0) {
    uVar2 = (undefined4)(func_0079e4fc(uStack_1c,0x3f000000));
    uVar1 = (undefined4)(*(undefined4 *)(((int)this) + 0x288));
  }
  else {
    uVar1 = (undefined4)(func_0079e4fc(uStack_1c,0x3f000000));
    uVar2 = (undefined4)(func_0079e59c(uVar1,*(undefined4 *)(((int)this) + 0x288)));
    (**(code **)(*(int *)(piVar3) + (0x78)))(piVar3);
    uVar1 = (undefined4)(func_0079e2ec());
  }
  func_0079e59c(uVar2,uVar1);
  return;
}

void BLRoleBase::getCenterDistance()
{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_20 [4];
  undefined4 uStack_1c;
  undefined4 uStack_14;
  
  ((BLRoleBase *)(((int)this)))->getRCBeingAttack(0);
  uVar1 = (undefined4)(func_0079e4fc(uStack_14,0x3f000000));
  iVar2 = (undefined4)(intptr_t)(func_0079e59c(uVar1,uStack_1c));
  func_0079e57c(iVar2 + -0x80000000,uStack_14);
  return;
}

cocos2d::CCRect BLRoleBase::getRCAttack(bool p1)
{ return cocos2d::CCRect(); }

void BLRoleBase::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLRoleBase::setSpeedZero()
{
  undefined4 p4 = 0;

  code *pcVar1;
  
  pcVar1 = *(code **)(*(int *)this + 700);
  (*pcVar1)(((int)this),0,*(int *)this,pcVar1,p4);
  (**(code **)(*(int *)this + 0x2d4))(((int)this),0);
  (**(code **)(*(int *)this + 0x2e4))(((int)this),0);
  (**(code **)(*(int *)this + 0x2cc))(((int)this),0);
  (**(code **)(*(int *)this + 0x2dc))(((int)this),0);
  return;
}

void BLRoleBase::runEffectAction(BLAnimateData* p1, bool p2)
{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(((int)this) + 0x270) != 0) {
    ((cocos2d::CCNode *)this)->stopAllActions();
  }
  if (*(int *)(((int)this) + 0x274) != 0) {
    ((cocos2d::CCNode *)this)->stopAllActions();
  }
  if ((*(char *)(p1 + 0x25) != '\0') && (*(int *)(((int)this) + 0x270) != 0)) {
    uVar1 = (undefined4)(((BLAction *)this)->create());
    ((BLAction *)(uVar1))->initWithAnimata((BLAnimateData*)p1, 2);
    iVar2 = (undefined4)((void)(((BLAction *)(uVar1))->getActionWithCallBack(0)),(intptr_t)0);
    iVar3 = (undefined4)(intptr_t)(*(int *)(((int)this) + 0x31c));
    if (iVar3 != 0) {
      ((BLSpeed *)(iVar2))->changeFps(*(undefined4 *)(iVar3 + 0x20), *(undefined4 *)(iVar3 + 0x30));
    }
    if (*(int *)(((int)this) + 0x31c) != 0) {
      ((cocos2d::CCObject *)this)->release();
    }
    *(int *)(((int)this) + 0x31c) = iVar2;
    if (iVar2 != 0) {
      ((cocos2d::CCObject *)(iVar2))->retain();
    }
    if (p2 == 0) {
      uVar1 = (undefined4)(*(undefined4 *)(((int)this) + 0x270));
    }
    else {
      uVar1 = (undefined4)(*(undefined4 *)(((int)this) + 0x270));
      iVar2 = (undefined4)(intptr_t)(cocos2d::CCRepeatForever::create((cocos2d::CCActionInterval*)iVar2));
    }
    ((cocos2d::CCNode *)(uVar1))->runAction((cocos2d::CCAction*)iVar2);
  }
  if (*(char *)(p1 + 0x24) != '\0') {
    if (*(int *)(((int)this) + 0x274) != 0) {
      uVar1 = (undefined4)(((BLAction *)this)->create());
      ((BLAction *)(uVar1))->initWithAnimata((BLAnimateData*)p1, 1);
      iVar2 = (undefined4)((void)(((BLAction *)(uVar1))->getActionWithCallBack(0)),(intptr_t)0);
      iVar3 = (undefined4)(intptr_t)(*(int *)(((int)this) + 0x318));
      if (iVar3 != 0) {
        ((BLSpeed *)(iVar2))->changeFps(*(undefined4 *)(iVar3 + 0x20), *(undefined4 *)(iVar3 + 0x30));
      }
      if (*(int *)(((int)this) + 0x318) != 0) {
        ((cocos2d::CCObject *)this)->release();
      }
      *(int *)(((int)this) + 0x318) = iVar2;
      if (iVar2 != 0) {
        ((cocos2d::CCObject *)(iVar2))->retain();
      }
      if (p2 == 0) {
        uVar1 = (undefined4)(*(undefined4 *)(((int)this) + 0x274));
      }
      else {
        uVar1 = (undefined4)(*(undefined4 *)(((int)this) + 0x274));
        iVar2 = (undefined4)(intptr_t)(cocos2d::CCRepeatForever::create((cocos2d::CCActionInterval*)iVar2));
      }
      ((cocos2d::CCNode *)(uVar1))->runAction((cocos2d::CCAction*)iVar2);
    }
  }
  return;
}

void BLRoleBase::runNewAction(char const* p1, cocos2d::CCAction* p2, bool p3)
{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [8];
  
  BLRoleBase::setSpeedZero();
  ((cocos2d::CCNode *)(*(int *)((int)this + 4*(0x9e))))->stopAllActions();
  uVar1 = (undefined4)((**(code **)(*(int *)this + 0x168))(((int)this)));
  iVar2 = (undefined4)(intptr_t)(((cocos2d::CCActionManager *)(uVar1))->getActionByTag((unsigned int)0x7b, (cocos2d::CCObject*)((int)this)));
  if (iVar2 != 0) {
    ((cocos2d::CCNode *)(((int)this)))->stopActionByTag(0x7b);
    (**(code **)(*(int *)this + 0x284))(((int)this));
  }
  iVar2 = (undefined4)(intptr_t)(*(int *)((int)this + 4*(0x70)));
  if (iVar2 != 0) {
    func_0079e45c(auStack_1c,p1,auStack_20);
    iVar2 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)(iVar2))->objectForKey((char const *)auStack_1c));
    piVar3 = (int *)0x0;
    if (iVar2 != 0) {
      piVar3 = (int *)func_0079e55c(iVar2,*(undefined4 *)(g_00451908 + 0x451862),
                                      *(undefined4 *)(g_0045190c + 0x451864),0);
    }
    func_0079e2bc(auStack_1c);
    if (piVar3 != (int *)0x0) {
      piVar4 = (int *)(**(code **)(*(int *)(piVar3) + (0x18)))(piVar3);
      iVar2 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar4) + (0x34)))());
      if (*(char *)(iVar2 + 0x26) != '\0') {
        iVar2 = (undefined4)((void)(((BLAction *)(piVar3))->getActionWithCallBack((cocos2d::CCAction*)p2)),(intptr_t)0);
        iVar5 = (undefined4)(intptr_t)(*(int *)((int)this + 4*(0xc5)));
        if (iVar5 != 0) {
          ((BLSpeed *)(iVar2))->changeFps(*(undefined4 *)(iVar5 + 0x20), *(undefined4 *)(iVar5 + 0x30));
        }
        if (*(int *)((int)this + 4*(0xc5)) != 0) {
          ((cocos2d::CCObject *)this)->release();
        }
        *(int *)((int)this + 4*(0xc5)) = iVar2;
        if (iVar2 != 0) {
          ((cocos2d::CCObject *)(iVar2))->retain();
        }
        if (p3 == 0) {
          iVar5 = (undefined4)(intptr_t)(*(int *)((int)this + 4*(0x9e)));
        }
        else {
          iVar5 = (undefined4)(intptr_t)(*(int *)((int)this + 4*(0x9e)));
          iVar2 = (undefined4)(intptr_t)(cocos2d::CCRepeatForever::create((cocos2d::CCActionInterval*)iVar2));
        }
        ((cocos2d::CCNode *)(iVar5))->runAction((cocos2d::CCAction*)iVar2);
      }
      piVar3 = (int *)(**(code **)(*(int *)(piVar3) + (0x18)))(piVar3);
      uVar1 = (undefined4)((**(code **)(*(int *)(piVar3) + (0x34)))());
      ((BLRoleBase *)(((int)this)))->runEffectAction((BLAnimateData*)uVar1, p3);
    }
  }
  return;
}

void BLRoleBase::pauseAction(int p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLRoleBase::changeFps(float p1, float p2, bool p3)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLRoleBase::runSharkAction(BLHit* p1, bool p2)
{
  undefined4 uVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if (p2 != 0) {
    uVar1 = (undefined4)(((BLGameScene *)this)->shareGameScene());
    piVar2 = (int *)(**(code **)(*(int *)(p1) + (0x60)))(p1);
    uVar3 = (undefined4)((**(code **)(*(int *)(piVar2) + (0x20)))());
    piVar2 = (int *)(**(code **)(*(int *)(p1) + (0x60)))(p1);
    uVar4 = (undefined4)((**(code **)(*(int *)(piVar2) + (0x30)))());
    piVar2 = (int *)(**(code **)(*(int *)(p1) + (0x60)))(p1);
    uVar5 = (undefined4)((**(code **)(*(int *)(piVar2) + (0x38)))());
    uVar4 = (undefined4)(func_0079e2ec(uVar4));
    ((BLGameScene *)uVar1)->runSharkAction(uVar3, uVar4, uVar5);
  }
  return;
}

void BLRoleBase::updateEffectPosition()
{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  code *pcVar6;
  code *pcStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  int iStack_20;
  undefined4 uStack_1c;
  
  piVar5 = (int *)*(int *)((int)this + 4*(0x9f));
  if (piVar5 != (int *)0x0) {
    pcVar6 = *(code **)(*piVar5 + 0x4c);
    uVar1 = (undefined4)((**(code **)(*(int *)this + 0x50))());
    (*pcVar6)(piVar5,uVar1);
    piVar5 = (int *)*(int *)((int)this + 4*(0x9f));
    pcVar6 = *(code **)(*piVar5 + 0x98);
    uVar1 = (undefined4)((**(code **)(*(int *)this + 0xa4))(((int)this)));
    (*pcVar6)(piVar5,uVar1);
  }
  piVar5 = (int *)*(int *)((int)this + 4*(0xa0));
  if (piVar5 != (int *)0x0) {
    pcVar6 = *(code **)(*piVar5 + 0x4c);
    uVar1 = (undefined4)((**(code **)(*(int *)this + 0x50))(((int)this)));
    (*pcVar6)(piVar5,uVar1);
    piVar5 = (int *)*(int *)((int)this + 4*(0xa0));
    pcVar6 = *(code **)(*piVar5 + 0x98);
    uVar1 = (undefined4)((**(code **)(*(int *)this + 0xa4))(((int)this)));
    (*pcVar6)(piVar5,uVar1);
  }
  if (*(int *)((int)this + 4*(0xcb)) != 0) {
    ((BLRoleBase *)(((int)this)))->getRCBeingAttack(1);
    piVar5 = (int *)(**(code **)(*(int *)this + 0x378))(((int)this));
    (**(code **)(*(int *)(piVar5) + (0x20)))(auStack_30,piVar5);
    iVar2 = (undefined4)(intptr_t)(func_0079e4bc(auStack_30,"2800"));
    func_0079e2bc(auStack_30);
    if (iVar2 == 0) {
      piVar5 = (int *)*(int *)((int)this + 4*(0xcb));
      pcStack_44 = *(code **)(*piVar5 + 0x4c);
      uStack_40 = (undefined4)((**(code **)(*(int *)this + 0x50))(((int)this)));
      uStack_3c = (undefined4)(func_0079e4fc(iStack_20 + -0x80000000,0x3f000000));
      uVar1 = (undefined4)(func_0079e4fc(uStack_1c,0x3f000000));
      uVar1 = (undefined4)(func_0079e59c(uVar1,g_00451d1c));
      uVar1 = (undefined4)(func_0079e57c(uVar1,g_00451d20));
    }
    else {
      piVar5 = (int *)*(int *)((int)this + 4*(0xcb));
      pcStack_44 = *(code **)(*piVar5 + 0x4c);
      uStack_40 = (undefined4)((**(code **)(*(int *)this + 0x50))(((int)this)));
      uStack_3c = (undefined4)(func_0079e4fc(iStack_20 + -0x80000000,0x3f000000));
      uVar1 = (undefined4)(func_0079e4fc(uStack_1c,0x3f000000));
      uVar1 = (undefined4)(func_0079e59c(uVar1,g_00451d1c));
    }
    0 /* ctorZero */;
    ((cocos2d::CCPoint *)(uStack_40))->operator+(*(const CCPoint *)(void *)auStack_38);
    (*pcStack_44)(piVar5,auStack_30);
  }
  if (*(int *)((int)this + 4*(0xcc)) != 0) {
    ((BLRoleBase *)(((int)this)))->getRCBeingAttack(1);
    piVar5 = (int *)*(int *)((int)this + 4*(0xcc));
    pcVar6 = *(code **)(*piVar5 + 0x4c);
    uVar1 = (undefined4)((**(code **)(*(int *)this + 0x50))(((int)this)));
    uVar3 = (undefined4)(func_0079e4fc(uStack_1c,0x3f000000));
    uVar3 = (undefined4)(func_0079e59c(uVar3,g_00451d24));
    0 /* ctorZero */;
    ((cocos2d::CCPoint *)(uVar1))->operator+(*(const CCPoint *)(void *)auStack_38);
    (*pcVar6)(piVar5,auStack_30);
  }
  if (*(int *)((int)this + 4*(0xce)) != 0) {
    ((BLRoleBase *)(((int)this)))->getRCBeingAttack(1);
    piVar5 = (int *)*(int *)((int)this + 4*(0xce));
    pcVar6 = *(code **)(*piVar5 + 0x4c);
    uVar1 = (undefined4)((**(code **)(*(int *)this + 0x50))(((int)this)));
    uVar3 = (undefined4)(func_0079e4fc(iStack_20 + -0x80000000,0x3f000000));
    uVar4 = (undefined4)(func_0079e4fc(uStack_1c,0x3f000000));
    uVar4 = (undefined4)(func_0079e59c(uVar4,g_00451d1c));
    0 /* ctorZero */;
    ((cocos2d::CCPoint *)(uVar1))->operator+(*(const CCPoint *)(void *)auStack_38);
    (*pcVar6)(piVar5,auStack_30);
  }
  return;
}

void BLRoleBase::setPartnerNode(cocos2d::CCNode* p1, float p2)
{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_28 [4];
  undefined4 uStack_24;
  undefined4 uStack_1c;
  
  if ((int *)*(int *)((int)this + 4*(0xad)) != (int *)0x0) {
    piVar1 = (int *)(**(code **)(*(int *)*(int *)((int)this + 4*(0xad)) + 0x58))();
    (**(code **)(*(int *)(piVar1) + (0x38)))();
    iVar2 = (undefined4)(intptr_t)(func_0079e5fc());
    *(int *)((int)this + 4*(0xa8)) = iVar2;
  }
  *(int *)((int)this + 4*(0xa3)) = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  ((BLRoleBase *)(((int)this)))->setRoleBaseScale(0x3f800000, 0x3f800000);
  ((BLRoleBase *)(((int)this)))->getFirstFrameBody();
  *(int *)((int)this + 4*(0xa2)) = p2;
  uVar3 = (undefined4)(func_0079e4fc(uStack_1c,0x3f000000));
  uVar4 = (undefined4)(func_0079e59c(p2,uVar3));
  iVar2 = (undefined4)(intptr_t)(func_0079e59c(uVar3,uStack_24));
  iVar2 = (undefined4)(intptr_t)(iVar2 + -0x80000000);
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x9e)) + 100))((int *)*(int *)((int)this + 4*(0x9e)),iVar2);
  piVar1 = (int *)*(int *)((int)this + 4*(0x9d));
  if (piVar1 != (int *)0x0) {
    (**(code **)(*(int *)(piVar1) + (100)))(piVar1,iVar2);
  }
  piVar1 = (int *)*(int *)((int)this + 4*(0x9c));
  if (piVar1 != (int *)0x0) {
    (**(code **)(*(int *)(piVar1) + (100)))(piVar1,iVar2);
  }
  (**(code **)(*(int *)this + 100))(((int)this),uVar4);
  piVar1 = (int *)*(int *)((int)this + 4*(0x9f));
  if (piVar1 != (int *)0x0) {
    (**(code **)(*(int *)(piVar1) + (100)))(piVar1,uVar4);
  }
  piVar1 = (int *)*(int *)((int)this + 4*(0xa0));
  if (piVar1 != (int *)0x0) {
    (**(code **)(*(int *)(piVar1) + (100)))(piVar1,uVar4);
  }
  ((BLRoleBase *)(((int)this)))->updateEffectPosition();
  return;
}

void BLRoleBase::updatePosition()
{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  undefined1 auStack_20 [12];
  
  iVar1 = (undefined4)(intptr_t)((**(code **)(*(int *)this + 0x2c8))());
  iVar2 = (undefined4)(intptr_t)(((cocos2d::CCSprite *)(((int)this)))->isFlipX());
  if (iVar2 != 0) {
    iVar1 = (undefined4)(intptr_t)((**(code **)(*(int *)this + 0x2c8))(((int)this)));
    iVar1 = (undefined4)(intptr_t)(iVar1 + -0x80000000);
  }
  iVar2 = (undefined4)(intptr_t)(func_0079e57c(*(int *)((int)this + 4*(0x98)),*(int *)((int)this + 4*(0xb5))));
  *(int *)((int)this + 4*(0x98)) = iVar2;
  iVar3 = (undefined4)(intptr_t)(func_0079e5ec(iVar1,0));
  if ((iVar3 == 0) || (iVar3 = func_0079e5ec(iVar2,0), iVar3 == 0)) {
    pcVar6 = *(code **)(*(int *)this + 0x280);
    0 /* ctorZero */;
    (*pcVar6)(((int)this),auStack_20);
  }
  uVar4 = ((void)(((BLRoleBase *)(((int)this)))->getStartPosY()),(undefined4)0);
  uVar5 = (undefined4)((**(code **)(*(int *)this + 0x68))(((int)this)));
  iVar1 = (undefined4)(intptr_t)(func_0079e7b4(uVar5,uVar4));
  if (iVar1 != 0) {
    (**(code **)(*(int *)this + 100))(((int)this),uVar4);
    *(int *)((int)this + 4*(0x9a)) = 0;
    *(int *)((int)this + 4*(0x98)) = 0;
    *(int *)((int)this + 4*(0x96)) = 0;
  }
  ((BLRoleBase *)(((int)this)))->updateEffectPosition();
  iVar1 = (undefined4)(intptr_t)(func_0079e59c(*(int *)((int)this + 4*(0x97)),*(int *)((int)this + 4*(0x99))));
  *(int *)((int)this + 4*(0x97)) = iVar1;
  iVar1 = (undefined4)(intptr_t)(func_0079e59c(*(int *)((int)this + 4*(0x98)),*(int *)((int)this + 4*(0x9a))));
  *(int *)((int)this + 4*(0x98)) = iVar1;
  return;
}

void BLRoleBase::addThrow(BLRemoteAttackSprite* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLRoleBase::skinBody(BLRoleData* p1, int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLRoleBase::updateFrameData(BLAnimateFrameData* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLRoleBase::createThrrow(BLRole* p1, BLAnimateFrameData* p2, BLRemoteAttackData* p3, std::string p4)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLRoleBase::runRoleSharkAction(BLHit* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

undefined4 * BLRoleBase::getRCAttackPoint()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return nullptr;
}

undefined4 * BLRoleBase::getRCBeAttackPoint()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return nullptr;
}

void BLRoleBase::onEnter()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

bool BLRoleBase::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void BLRoleBase::initWithRoleData(BLRoleData* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLRoleBase::tick(float p1)
{
  BLSprite::tick((float)0);
  ((BLRoleAttribute *)(((int)this) + 0x1c4))->updateBuffStatus(p1);
  return;
}
