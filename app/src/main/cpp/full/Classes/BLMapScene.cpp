#include "BLMapScene.h"
#include "CCArray.h"
#include "CCObject.h"
#include "BLMapSceneItemData.h"
#include "CCNode.h"
#include "CCTouch.h"
#include "CCSpriteBatchNode.h"
#include "CCLayer.h"
#include "CCDirector.h"
#include "CCDictionary.h"
#include "CCGeometry.h"
#include "BLMapSceneData.h"
#include "BLLeakUtils.h"
#include "BLMap.h"
#include "BLMonsterData.h"
#include "BLRole.h"
#include "BLRoleAttribute.h"
#include "GuideManager.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
using namespace cocos2d;
static inline undefined4 hw_fbits(float f) { undefined4 r; __builtin_memcpy(&r, &f, 4); return r; }
// 兜底声明
extern "C" unsigned long g_0043befc;
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4bc(...);
extern "C" long long func_0079e4ec(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long func_0079e5dc(...);
extern "C" long long func_0079e69c(...);
extern "C" long long func_0079e804(...);
extern "C" long long func_0079e814(...);
extern "C" long long func_0079e854(...);
extern "C" long long func_0079e934(...);
extern "C" long long func_0079e944(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long _DAT_0043b118;
extern "C" unsigned long _DAT_0043b11c;
extern "C" unsigned long _DAT_0043b22c;
extern "C" unsigned long _DAT_0043b230;
extern "C" unsigned long _DAT_0043b498;
extern "C" unsigned long _DAT_0043b49c;
extern "C" unsigned long _DAT_0043b744;
extern "C" unsigned long _DAT_0043b748;
extern "C" unsigned long _DAT_0043b74c;
extern "C" unsigned long _DAT_0043b750;
extern "C" unsigned long _DAT_0043b754;
extern "C" unsigned long _DAT_0043b758;
extern "C" unsigned long _DAT_0043b75c;
extern "C" unsigned long _DAT_0043b760;
extern "C" unsigned long _DAT_0043b764;
extern "C" unsigned long _DAT_0043ba98;
extern "C" unsigned long _DAT_0043ba9c;
extern "C" unsigned long _DAT_0043baa0;
extern "C" unsigned long _DAT_0043baa4;
extern "C" unsigned long _DAT_0043baa8;
extern "C" unsigned long _DAT_0043bbec;
extern "C" unsigned long _DAT_0043bbf0;
extern "C" unsigned long _DAT_0043bbf4;
extern "C" unsigned long _DAT_0043bcc0;
extern "C" unsigned long _DAT_0043bcc4;
extern "C" unsigned long _DAT_0043bcc8;
extern "C" unsigned long _DAT_0043bccc;
extern "C" unsigned long _DAT_0043bcd0;
extern "C" unsigned long _DAT_0043bcd4;
extern "C" unsigned long _DAT_0043bd78;
extern "C" unsigned long _DAT_0043bd7c;
extern "C" unsigned long _DAT_0043bd80;
extern "C" unsigned long _DAT_0043be20;
extern "C" unsigned long _DAT_0043be24;
extern "C" unsigned long _DAT_0043be28;
extern "C" unsigned long _DAT_0043bec8;
extern "C" unsigned long _DAT_0043becc;
extern "C" unsigned long _DAT_0043bed0;
extern "C" unsigned long _UNK_0043af78;
extern "C" unsigned long _UNK_0043af90;
extern "C" unsigned long _UNK_0043afa8;
extern "C" unsigned long _UNK_0043afc0;
extern "C" unsigned long _UNK_0043b130;
extern "C" unsigned long _UNK_0043b158;
extern "C" unsigned long g_0043af78;
extern "C" unsigned long g_0043af90;
extern "C" unsigned long g_0043afa8;
extern "C" unsigned long g_0043afc0;
extern "C" unsigned long g_0043b118;
extern "C" unsigned long g_0043b11c;
extern "C" unsigned long g_0043b130;
extern "C" unsigned long g_0043b158;
extern "C" unsigned long g_0043b22c;
extern "C" unsigned long g_0043b230;
extern "C" unsigned long g_0043b498;
extern "C" unsigned long g_0043b49c;
extern "C" unsigned long g_0043b744;
extern "C" unsigned long g_0043b748;
extern "C" unsigned long g_0043b74c;
extern "C" unsigned long g_0043b750;
extern "C" unsigned long g_0043b754;
extern "C" unsigned long g_0043b758;
extern "C" unsigned long g_0043b75c;
extern "C" unsigned long g_0043b760;
extern "C" unsigned long g_0043b764;
extern "C" unsigned long g_0043ba98;
extern "C" unsigned long g_0043ba9c;
extern "C" unsigned long g_0043baa0;
extern "C" unsigned long g_0043baa4;
extern "C" unsigned long g_0043baa8;
extern "C" unsigned long g_0043bbec;
extern "C" unsigned long g_0043bbf0;
extern "C" unsigned long g_0043bbf4;
extern "C" unsigned long g_0043bcc0;
extern "C" unsigned long g_0043bcc4;
extern "C" unsigned long g_0043bcc8;
extern "C" unsigned long g_0043bccc;
extern "C" unsigned long g_0043bcd0;
extern "C" unsigned long g_0043bcd4;
extern "C" unsigned long g_0043bd78;
extern "C" unsigned long g_0043bd7c;
extern "C" unsigned long g_0043bd80;
extern "C" unsigned long g_0043be20;
extern "C" unsigned long g_0043be24;
extern "C" unsigned long g_0043be28;
extern "C" unsigned long g_0043bec8;
extern "C" unsigned long g_0043becc;
extern "C" unsigned long g_0043bed0;
float BLMapScene::getMapWidth() const
{
  return *(undefined4 *)(((int)this) + 0x108);
}

void BLMapScene::setMapWidth(float p1)
{
  *(undefined4 *)(((int)this) + 0x108) = p1;
  return;
}

float BLMapScene::getFloodHeight() const
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

void BLMapScene::setFloodHeight(float p1)
{
  *(undefined4 *)(((int)this) + 0x10c) = p1;
  return;
}

float BLMapScene::getFlood() const
{
  return *(undefined4 *)(((int)this) + 0x110);
}

void BLMapScene::setFlood(float p1)
{
  *(undefined4 *)(((int)this) + 0x110) = p1;
  return;
}

BLMapSceneData* BLMapScene::getMapSceneData() const
{
  return (BLMapSceneData*)(*(undefined4 *)(((int)this) + 0x114));
}

cocos2d::CCDictionary* BLMapScene::getDicBatchNode() const
{
  return (cocos2d::CCDictionary*)(*(undefined4 *)(((int)this) + 0x118));
}

cocos2d::CCLayer* BLMapScene::getLayerShake() const
{
  return (cocos2d::CCLayer*)(*(undefined4 *)(((int)this) + 0x11c));
}

void BLMapScene::setLayerShake(cocos2d::CCLayer* p1)
{
  *(undefined4 *)(((int)this) + 0x11c) = (undefined4)(intptr_t)p1;
  return;
}

cocos2d::CCDictionary* BLMapScene::getDicRoleBatch() const
{
  return (cocos2d::CCDictionary*)(*(undefined4 *)(((int)this) + 0x120));
}

void BLMapScene::setDicRoleBatch(cocos2d::CCDictionary* p1)
{
  *(undefined4 *)(((int)this) + 0x120) = (undefined4)(intptr_t)p1;
  return;
}

cocos2d::CCDictionary* BLMapScene::getDicEffectUpBatch() const
{
  return (cocos2d::CCDictionary*)(*(undefined4 *)(((int)this) + 0x124));
}

void BLMapScene::setDicEffectUpBatch(cocos2d::CCDictionary* p1)
{
  *(undefined4 *)(((int)this) + 0x124) = (undefined4)(intptr_t)p1;
  return;
}

cocos2d::CCDictionary* BLMapScene::getDicEffectDownBatch() const
{
  return (cocos2d::CCDictionary*)(*(undefined4 *)(((int)this) + 0x128));
}

cocos2d::CCDictionary* BLMapScene::getDicRiyan() const
{
  return (cocos2d::CCDictionary*)(*(undefined4 *)(((int)this) + 300));
}

void BLMapScene::setDicRiyan(cocos2d::CCDictionary* p1)
{
  *(undefined4 *)(((int)this) + 300) = (undefined4)(intptr_t)p1;
  return;
}

cocos2d::CCSpriteBatchNode* BLMapScene::getBatchNodeDropItem() const
{
  return (cocos2d::CCSpriteBatchNode*)(*(undefined4 *)(((int)this) + 0x130));
}

cocos2d::CCLayer* BLMapScene::getLayerRole() const
{
  return (cocos2d::CCLayer*)(*(undefined4 *)(((int)this) + 0x134));
}

void BLMapScene::setLayerRole(cocos2d::CCLayer* p1)
{
  *(undefined4 *)(((int)this) + 0x134) = (undefined4)(intptr_t)p1;
  return;
}

cocos2d::CCLayer* BLMapScene::getLayerFlood() const
{
  return (cocos2d::CCLayer*)(*(undefined4 *)(((int)this) + 0x138));
}

void BLMapScene::setLayerFlood(cocos2d::CCLayer* p1)
{
  *(undefined4 *)(((int)this) + 0x138) = (undefined4)(intptr_t)p1;
  return;
}

bool BLMapScene::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLMapScene::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLMapScene::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLMapScene::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLMapScene::setMapSceneData(BLMapSceneData* p1)
{
  if (*(int *)(((int)this) + 0x114) != (int)(intptr_t)p1) {
    if ((int)(intptr_t)p1 != 0) {
      ((cocos2d::CCObject *)p1)->retain();
    }
    if (*(int *)(((int)this) + 0x114) != 0) {
      ((cocos2d::CCObject *)this)->release();
    }
    *(int *)(((int)this) + 0x114) = (undefined4)(intptr_t)p1;
  }
  return;
}

void BLMapScene::setDicBatchNode(cocos2d::CCDictionary* p1)
{
  if (*(int *)(((int)this) + 0x118) != (int)(intptr_t)p1) {
    if ((int)(intptr_t)p1 != 0) {
      ((cocos2d::CCObject *)p1)->retain();
    }
    if (*(int *)(((int)this) + 0x118) != 0) {
      ((cocos2d::CCObject *)this)->release();
    }
    *(int *)(((int)this) + 0x118) = (undefined4)(intptr_t)p1;
  }
  return;
}

BLMapScene::~BLMapScene()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(g_0043b118 + 0x43b05c);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x270;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x2a0;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x2ac;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  if (*(int *)((int)this + 4*(0x45)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x45)) = 0;
  }
  if (*(int *)((int)this + 4*(0x46)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x46)) = 0;
  }
  if (*(int *)((int)this + 4*(0x4a)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x4a)) = 0;
  }
  if (*(int *)((int)this + 4*(0x49)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x49)) = 0;
  }
  if (*(int *)((int)this + 4*(0x48)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x48)) = 0;
  }
  if (*(int *)((int)this + 4*(0x4b)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x4b)) = 0;
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLMapScene"),&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}









void BLMapScene::addRole(cocos2d::CCNode* p1, std::string * p2)
{
  (**(code **)(**(int **)(((int)this) + 0x134) + 200))();
  return;
}





void BLMapScene::onEnter()
{
  ((cocos2d::CCLayer *)this)->onEnter();
  return;
}

void BLMapScene::onExit()
{
  ((cocos2d::CCLayer *)this)->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (16) =====
void BLMapScene::setDicEffectDownBatch(cocos2d::CCDictionary* p1)
{
  *(undefined4 *)(((int)this) + 0x128) = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  return;
}

void BLMapScene::setBatchNodeDropItem(cocos2d::CCSpriteBatchNode* p1)
{
  *(undefined4 *)(((int)this) + 0x130) = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  return;
}

BLMapScene::BLMapScene()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = (undefined4)(intptr_t)(*(int *)(g_0043b22c + 0x43b16c));
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x270;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x2a0;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x2ac;
  *(int *)((int)this + 4*(0x4f)) = 0;
  *(int *)((int)this + 4*(0x42)) = 0;
  *(int *)((int)this + 4*(0x44)) = 0;
  *(int *)((int)this + 4*(0x47)) = 0;
  *(int *)((int)this + 4*(0x45)) = 0;
  iVar2 = (undefined4)(intptr_t)(cocos2d::CCDictionary::create());
  *(int *)((int)this + 4*(0x46)) = iVar2;
  if (iVar2 != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  *(int *)((int)this + 4*(0x43)) = 0;
  iVar2 = (undefined4)(intptr_t)(cocos2d::CCDictionary::create());
  *(int *)((int)this + 4*(0x48)) = iVar2;
  if (iVar2 != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  iVar2 = (undefined4)(intptr_t)(cocos2d::CCDictionary::create());
  *(int *)((int)this + 4*(0x49)) = iVar2;
  if (iVar2 != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  iVar2 = (undefined4)(intptr_t)(cocos2d::CCDictionary::create());
  *(int *)((int)this + 4*(0x4a)) = iVar2;
  if (iVar2 != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  iVar2 = (undefined4)(intptr_t)(cocos2d::CCDictionary::create());
  *(int *)((int)this + 4*(0x4b)) = iVar2;
  if (iVar2 != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  *(int *)((int)this + 4*(0x4e)) = 0;
  *(int *)((int)this + 4*(0x4c)) = 0;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLMapScene"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

void BLMapScene::setItemProperty(cocos2d::CCNode* p1, BLMapSceneItemData* p2)
{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined4 uVar5;
  code *pcVar6;
  undefined1 auStack_28 [4];
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar6 = *(code **)(*(int *)p1 + 0x5c);
  uVar1 = (undefined4)((**(code **)(*(int *)(p2) + (0x18)))(p2));
  (*pcVar6)(p1,uVar1);
  pcVar6 = *(code **)(*(int *)p1 + 100);
  uVar1 = (undefined4)((**(code **)(*(int *)(p2) + (0x20)))(p2));
  (*pcVar6)(p1,uVar1);
  iVar2 = (undefined4)(intptr_t)((**(code **)(**(int **)(((int)this) + 0x114) + 0x28))());
  if (iVar2 == 0) {
    pcVar6 = *(code **)(*(int *)p1 + 100);
    uVar1 = (undefined4)(cocos2d::CCDirector::sharedDirector());
    { cocos2d::CCSize _ws = ((cocos2d::CCDirector *)uVar1)->getWinSize(); __builtin_memcpy(&auStack_28, &_ws.width, 4); uStack_24 = hw_fbits(_ws.height); }
    uVar1 = (undefined4)((**(code **)(*(int *)(p2) + (0x20)))(p2));
    uVar1 = (undefined4)(func_0079e57c(uStack_24,uVar1));
  }
  else {
    iVar2 = (undefined4)(intptr_t)((**(code **)(**(int **)(((int)this) + 0x114) + 0x28))());
    if (iVar2 != 2) goto LAB_0043b2d6;
    pcVar6 = *(code **)(*(int *)p1 + 100);
    uVar1 = (undefined4)(cocos2d::CCDirector::sharedDirector());
    { cocos2d::CCSize _ws = ((cocos2d::CCDirector *)uVar1)->getWinSize(); __builtin_memcpy(&auStack_28, &_ws.width, 4); uStack_24 = hw_fbits(_ws.height); }
    uVar1 = (undefined4)(func_0079e4fc(uStack_24,0x3f000000));
    uVar5 = (undefined4)((**(code **)(*(int *)(p2) + (0x20)))(p2));
    uVar1 = (undefined4)(func_0079e59c(uVar1,uVar5));
  }
  (*pcVar6)(p1,uVar1);
LAB_0043b2d6:
  piVar3 = (int *)func_0079e55c(p1,*(undefined4 *)(g_0043b498 + 0x43b2e0),
                                  *(undefined4 *)(g_0043b49c + 0x43b2e2),0);
  if (piVar3 == (int *)0x0) {
    pcVar6 = *(code **)(*(int *)p1 + 0x30);
    uVar1 = (undefined4)((**(code **)(*(int *)(p2) + (0x30)))(p2));
    (*pcVar6)(p1,uVar1);
    pcVar6 = *(code **)(*(int *)p1 + 0x38);
    uVar1 = (undefined4)((**(code **)(*(int *)(p2) + (0x38)))(p2));
    (*pcVar6)(p1,uVar1);
    pcVar6 = *(code **)(*(int *)p1 + 0xa0);
    uVar1 = (undefined4)((**(code **)(*(int *)(p2) + (0x40)))(p2));
    (*pcVar6)(p1,uVar1);
    pcVar6 = *(code **)(*(int *)p1 + 0xa8);
    uVar1 = (undefined4)((**(code **)(*(int *)(p2) + (0x48)))(p2));
    (*pcVar6)(p1,uVar1);
  }
  else {
    pcVar6 = *(code **)(*piVar3 + 0x344);
    uVar1 = (undefined4)((**(code **)(*(int *)(p2) + (0x30)))(p2));
    (*pcVar6)(piVar3,uVar1);
    pcVar6 = *(code **)(*piVar3 + 0x36c);
    uVar1 = (undefined4)((**(code **)(*(int *)(p2) + (0x28)))(p2));
    (*pcVar6)(piVar3,uVar1);
    piVar4 = (int *)(**(code **)(*(int *)(piVar3) + (0x300)))(piVar3);
    pcVar6 = *(code **)(*piVar4 + 0x6c);
    uVar1 = (undefined4)((**(code **)(*(int *)(p2) + (0x40)))(p2));
    (*pcVar6)(piVar4,uVar1);
    piVar4 = (int *)(**(code **)(*(int *)(piVar3) + (0x300)))(piVar3);
    pcVar6 = *(code **)(*piVar4 + 0x74);
    uVar1 = (undefined4)((**(code **)(*(int *)(p2) + (0x48)))(p2));
    (*pcVar6)(piVar4,uVar1);
    iVar2 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar3) + (0x2f8)))(piVar3));
    if (iVar2 != 0) {
      piVar4 = (int *)(**(code **)(*(int *)(piVar3) + (0x2f8)))(piVar3);
      pcVar6 = *(code **)(*piVar4 + 0x6c);
      uVar1 = (undefined4)((**(code **)(*(int *)(p2) + (0x40)))(p2));
      (*pcVar6)(piVar4,uVar1);
      piVar4 = (int *)(**(code **)(*(int *)(piVar3) + (0x2f8)))(piVar3);
      pcVar6 = *(code **)(*piVar4 + 0x74);
      uVar1 = (undefined4)((**(code **)(*(int *)(p2) + (0x48)))(p2));
      (*pcVar6)(piVar4,uVar1);
    }
    iVar2 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar3) + (0x2f0)))(piVar3));
    if (iVar2 != 0) {
      piVar4 = (int *)(**(code **)(*(int *)(piVar3) + (0x2f0)))(piVar3);
      pcVar6 = *(code **)(*piVar4 + 0x6c);
      uVar1 = (undefined4)((**(code **)(*(int *)(p2) + (0x40)))(p2));
      (*pcVar6)(piVar4,uVar1);
      piVar3 = (int *)(**(code **)(*(int *)(piVar3) + (0x2f0)))(piVar3);
      pcVar6 = *(code **)(*piVar3 + 0x74);
      uVar1 = (undefined4)((**(code **)(*(int *)(p2) + (0x48)))(p2));
      (*pcVar6)(piVar3,uVar1);
    }
  }
  uVar1 = (undefined4)((**(code **)(*(int *)(p1) + (0x60)))(p1));
  *(CCRect *)auStack_28 = ((cocos2d::CCNode *)p1)->boundingBox();
  uVar5 = (undefined4)(func_0079e4fc(uStack_20,0x3f000000));
  uVar1 = (undefined4)(func_0079e59c(uVar1,uVar5));
  iVar2 = (undefined4)(intptr_t)(func_0079e4ec(uVar1,*(undefined4 *)(((int)this) + 0x108)));
  if (iVar2 != 0) {
    *(undefined4 *)(((int)this) + 0x108) = uVar1;
  }
  return;
}

void BLMapScene::addImage(BLMapSceneItemData* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMapScene::addAnimate(BLMapSceneItemData* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMapScene::addItem(BLMapSceneItemData* p1)
{
  int iVar1;
  
  iVar1 = (undefined4)(intptr_t)((**(code **)(*(int *)(p1) + (0x58)))(p1));
  if (iVar1 == 0) {
    BLMapScene::addImage((BLMapSceneItemData*)p1);
  }
  else {
    BLMapScene::addAnimate((BLMapSceneItemData*)p1);
  }
  return;
}

void BLMapScene::initWithData(BLMapSceneData* p1)
{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined1 auStack_20 [4];
  undefined4 uStack_1c;
  
  (**(code **)(*(int *)this + 0x214))();
  uVar6 = (undefined4)(0);
  do {
    (**(code **)(*(int *)(p1) + (0x20)))(p1);
    uVar1 = (undefined4)(((cocos2d::CCArray *)this)->count());
    if (uVar1 <= uVar6) {
      return;
    }
    uVar2 = (undefined4)((**(code **)(*(int *)(p1) + (0x20)))(p1));
    iVar3 = (undefined4)(intptr_t)(((cocos2d::CCArray *)uVar2)->objectAtIndex((unsigned int)uVar6));
    piVar4 = (int *)0x0;
    if (iVar3 != 0) {
      piVar4 = (int *)func_0079e55c(iVar3,*(undefined4 *)(g_0043bbec + 0x43bb1c),
                                      *(undefined4 *)(g_0043bbf0 + 0x43bb1e),0);
    }
    (**(code **)(*(int *)(piVar4) + (0x50)))(auStack_20,piVar4);
    iVar3 = (undefined4)(intptr_t)(func_0079e4bc(auStack_20,((intptr_t)"line")));
    func_0079e2bc(auStack_20);
    if (iVar3 == 0) {
      iVar3 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar4) + (0x20)))(piVar4));
      *(int *)((int)this + 4*(0x43)) = iVar3;
      iVar3 = (undefined4)(intptr_t)((**(code **)(*(int *)*(int *)((int)this + 4*(0x45)) + 0x28))());
      if (iVar3 == 0) {
        uVar2 = (undefined4)(cocos2d::CCDirector::sharedDirector());
        { cocos2d::CCSize _ws = ((cocos2d::CCDirector *)uVar2)->getWinSize(); __builtin_memcpy(&auStack_20, &_ws.width, 4); uStack_1c = hw_fbits(_ws.height); }
        uVar2 = (undefined4)(uStack_1c);
        uVar5 = (undefined4)((**(code **)(*(int *)(piVar4) + (0x20)))(piVar4));
        iVar3 = (undefined4)(intptr_t)(func_0079e57c(uVar2,uVar5));
LAB_0043bbb6:
        *(int *)((int)this + 4*(0x43)) = iVar3;
      }
      else {
        iVar3 = (undefined4)(intptr_t)((**(code **)(*(int *)*(int *)((int)this + 4*(0x45)) + 0x28))());
        if (iVar3 == 2) {
          uVar2 = (undefined4)(cocos2d::CCDirector::sharedDirector());
          { cocos2d::CCSize _ws = ((cocos2d::CCDirector *)uVar2)->getWinSize(); __builtin_memcpy(&auStack_20, &_ws.width, 4); uStack_1c = hw_fbits(_ws.height); }
          uVar2 = (undefined4)(func_0079e4fc(uStack_1c,0x3f000000));
          uVar5 = (undefined4)((**(code **)(*(int *)(piVar4) + (0x20)))(piVar4));
          iVar3 = (undefined4)(intptr_t)(func_0079e59c(uVar2,uVar5));
          goto LAB_0043bbb6;
        }
      }
      *(int *)((int)this + 4*(0x44)) = *(int *)((int)this + 4*(0x43));
      (**(code **)(*(int *)*(int *)((int)this + 4*(0x4e)) + 100))((int *)*(int *)((int)this + 4*(0x4e)),*(int *)((int)this + 4*(0x43)));
      *(int *)((int)this + 4*(0x43)) = 0;
    }
    else {
      BLMapScene::addItem((BLMapSceneItemData*)piVar4);
    }
    uVar6 = (undefined4)(uVar6 + 1);
  } while( true );
}

void BLMapScene::addEffectUp(cocos2d::CCNode* p1, std::string * p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMapScene::addEffectDown(cocos2d::CCNode* p1, std::string * p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMapScene::addDieSprite(cocos2d::CCNode* p1, std::string * p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

undefined8 BLMapScene::addCoin(cocos2d::CCNode* p1)
{
  undefined4 p3 = 0;

  undefined4 uVar1;
  int iStack_20;
  int iStack_1c;
  undefined4 uStack_18;
  
  iStack_20 = (undefined4)(intptr_t)((int *)((int)this));
  iStack_1c = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  uStack_18 = (undefined4)(p3);
  if (*(int *)(((int)this) + 0x130) == 0) {
    func_0079e45c(&iStack_20,".png",&iStack_1c);
    iStack_1c = (undefined4)(intptr_t)(*(int *)(g_0043becc + 0x43be50) + 0xc);
    func_0079e934(&iStack_1c,*(int *)(iStack_20 + -0xc) + 9);
    func_0079e944(&iStack_1c,((intptr_t)"item_drop"),9);
    func_0079e5dc(&iStack_1c,&iStack_20);
    func_0079e52c(&iStack_20,&iStack_1c);
    func_0079e2bc(&iStack_1c);
    uVar1 = (undefined4)(cocos2d::CCSpriteBatchNode::create((char const*)iStack_20, (unsigned int)0x1d));
    *(undefined4 *)(((int)this) + 0x130) = uVar1;
    (**(code **)(**(int **)(((int)this) + 0x138) + 0xcc))(*(int **)(((int)this) + 0x138),uVar1,0x67);
    func_0079e2bc(&iStack_20);
  }
  (**(code **)(**(int **)(((int)this) + 0x130) + 200))(*(int **)(((int)this) + 0x130),p1);
  return ghidra_CONCAT44(iStack_1c,iStack_20);
}


void BLMapScene::onShakeEnd(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 p4 = 0;

  code *pcVar1;
  
  pcVar1 = *(code **)(**(int **)(((int)this) + 0x11c) + 0x4c);
  (*pcVar1)(*(int **)(((int)this) + 0x11c),"NU) 4.4.3",p2,pcVar1,p4);
  return;
}

void BLMapScene::addRiyan(cocos2d::CCNode* p1, std::string * p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

bool BLMapScene::init()
{
  int iVar1;
  int iVar2;
  
  iVar1 = (undefined4)(intptr_t)(((cocos2d::CCLayer *)this)->init());
  if (iVar1 != 0) {
    iVar2 = (undefined4)(intptr_t)(cocos2d::CCLayer::create());
    *(int *)((int)this + 4*(0x47)) = iVar2;
    (**(code **)(*(int *)this + 200))(((int)this),iVar2);
    iVar2 = (undefined4)(intptr_t)(cocos2d::CCLayer::create());
    *(int *)((int)this + 4*(0x4e)) = iVar2;
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x47)) + 0xcc))((int *)*(int *)((int)this + 4*(0x47)),iVar2,99);
    iVar2 = (undefined4)(intptr_t)(cocos2d::CCLayer::create());
    *(int *)((int)this + 4*(0x4d)) = iVar2;
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x4e)) + 200))((int *)*(int *)((int)this + 4*(0x4e)),iVar2);
  }
  return iVar1;
}
