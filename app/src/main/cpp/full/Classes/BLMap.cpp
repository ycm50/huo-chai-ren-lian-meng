#include "BLMap.h"
#include "CCAction.h"
#include "CCActionInterval.h"
#include "CCInvocation.h"
#include "CCNode.h"
#include "CCSprite.h"
#include "CCObject.h"
#include "BLRole.h"
#include "CCTouch.h"
#include "CCDirector.h"
#include "CCSpriteBatchNode.h"
#include "CCArray.h"
#include "CCGeometry.h"
#include "BLMapSceneData.h"
#include "BLLeakUtils.h"
#include "BLMapData.h"
#include "BLMapScene.h"
#include "BLSpeed.h"
#include "SharkAction.h"
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
extern "C" long long func_0079e4dc(...);
extern "C" long long func_0079e4ec(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e51c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long func_0079e63c(...);
extern "C" long long func_0079e7b4(...);
extern "C" long long func_0079e7e4(...);
extern "C" long long func_0079e824(...);
extern "C" long long func_0079e864(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0043a4f0;
extern "C" unsigned long _DAT_0043a504;
extern "C" unsigned long _DAT_0043a508;
extern "C" unsigned long _DAT_0043a50c;
extern "C" unsigned long _DAT_0043a52c;
extern "C" unsigned long _DAT_0043a604;
extern "C" unsigned long _DAT_0043a608;
extern "C" unsigned long _DAT_0043a7a4;
extern "C" unsigned long _DAT_0043a7a8;
extern "C" unsigned long _DAT_0043a7ac;
extern "C" unsigned long _DAT_0043a7b0;
extern "C" unsigned long _DAT_0043a7b4;
extern "C" unsigned long _DAT_0043a7b8;
extern "C" unsigned long _DAT_0043a7bc;
extern "C" unsigned long _DAT_0043a7c0;
extern "C" unsigned long _DAT_0043a7c4;
extern "C" unsigned long _DAT_0043a7c8;
extern "C" unsigned long _DAT_0043a8bc;
extern "C" unsigned long _DAT_0043a8c0;
extern "C" unsigned long _DAT_0043a9a4;
extern "C" unsigned long _DAT_0043a9a8;
extern "C" unsigned long _DAT_0043ab30;
extern "C" unsigned long _DAT_0043ab34;
extern "C" unsigned long _DAT_0043ab38;
extern "C" unsigned long _DAT_0043ab3c;
extern "C" unsigned long _DAT_0043ab40;
extern "C" unsigned long _DAT_0043ab44;
extern "C" unsigned long _DAT_0043ab48;
extern "C" unsigned long _DAT_0043ab4c;
extern "C" unsigned long _DAT_0043ac88;
extern "C" unsigned long _DAT_0043ac8c;
extern "C" unsigned long _DAT_0043ac90;
extern "C" unsigned long _DAT_0043ad90;
extern "C" unsigned long _DAT_0043ad94;
extern "C" unsigned long _DAT_0043ae98;
extern "C" unsigned long _DAT_0043ae9c;
extern "C" unsigned long _DAT_0043aea0;
extern "C" unsigned long _DAT_0043aea4;
extern "C" unsigned long _DAT_0043aea8;
extern "C" unsigned long _DAT_0043aed0;
extern "C" unsigned long g_0043a4f0;
extern "C" unsigned long g_0043a504;
extern "C" unsigned long g_0043a508;
extern "C" unsigned long g_0043a50c;
extern "C" unsigned long g_0043a52c;
extern "C" unsigned long g_0043a604;
extern "C" unsigned long g_0043a608;
extern "C" unsigned long g_0043a7a4;
extern "C" unsigned long g_0043a7a8;
extern "C" unsigned long g_0043a7ac;
extern "C" unsigned long g_0043a7b0;
extern "C" unsigned long g_0043a7b4;
extern "C" unsigned long g_0043a7b8;
extern "C" unsigned long g_0043a7bc;
extern "C" unsigned long g_0043a7c0;
extern "C" unsigned long g_0043a7c4;
extern "C" unsigned long g_0043a7c8;
extern "C" unsigned long g_0043a8bc;
extern "C" unsigned long g_0043a8c0;
extern "C" unsigned long g_0043a9a4;
extern "C" unsigned long g_0043a9a8;
extern "C" unsigned long g_0043ab30;
extern "C" unsigned long g_0043ab34;
extern "C" unsigned long g_0043ab38;
extern "C" unsigned long g_0043ab3c;
extern "C" unsigned long g_0043ab40;
extern "C" unsigned long g_0043ab44;
extern "C" unsigned long g_0043ab48;
extern "C" unsigned long g_0043ab4c;
extern "C" unsigned long g_0043ac88;
extern "C" unsigned long g_0043ac8c;
extern "C" unsigned long g_0043ac90;
extern "C" unsigned long g_0043ad90;
extern "C" unsigned long g_0043ad94;
extern "C" unsigned long g_0043ae98;
extern "C" unsigned long g_0043ae9c;
extern "C" unsigned long g_0043aea0;
extern "C" unsigned long g_0043aea4;
extern "C" unsigned long g_0043aea8;
extern "C" unsigned long g_0043aed0;
BLMapScene* BLMap::getMainScene() const
{
  return (BLMapScene*)(*(undefined4 *)(((int)this) + 0x1b4));
}

void BLMap::setMainScene(BLMapScene* p1)
{
  *(undefined4 *)(((int)this) + 0x1b4) = (undefined4)(intptr_t)p1;
  return;
}

BLMapData* BLMap::getMapData() const
{
  return (BLMapData*)(*(undefined4 *)(((int)this) + 0x1b8));
}

int BLMap::getMapID() const
{
  return *(undefined4 *)(((int)this) + 0x1bc);
}

void BLMap::setMapID(int p1)
{
  *(undefined4 *)(((int)this) + 0x1bc) = p1;
  return;
}

float BLMap::getMapWidth() const
{
  return *(undefined4 *)(((int)this) + 0x1c0);
}

void BLMap::setMapWidth(float p1)
{
  *(undefined4 *)(((int)this) + 0x1c0) = p1;
  return;
}

float BLMap::getFloodHeight() const
{
  return *(undefined4 *)(((int)this) + 0x1c4);
}

void BLMap::setFloodHeight(float p1)
{
  *(undefined4 *)(((int)this) + 0x1c4) = p1;
  return;
}

float BLMap::getLockWidth() const
{
  return *(undefined4 *)(((int)this) + 0x1c8);
}

void BLMap::setLockWidth(float p1)
{
  *(undefined4 *)(((int)this) + 0x1c8) = p1;
  return;
}

cocos2d::CCSpriteBatchNode* BLMap::getSpriteBatchNodeEffect() const
{
  return (cocos2d::CCSpriteBatchNode*)(*(undefined4 *)(((int)this) + 0x1cc));
}

cocos2d::CCArray* BLMap::getArrayScenes() const
{
  return (cocos2d::CCArray*)(*(undefined4 *)(((int)this) + 0x1d0));
}

void BLMap::setArrayScenes(cocos2d::CCArray* p1)
{
  *(undefined4 *)(((int)this) + 0x1d0) = (undefined4)(intptr_t)p1;
  return;
}

cocos2d::CCArray* BLMap::getArrayWoods() const
{
  return (cocos2d::CCArray*)(*(undefined4 *)(((int)this) + 0x1d4));
}

void BLMap::setArrayWoods(cocos2d::CCArray* p1)
{
  *(undefined4 *)(((int)this) + 0x1d4) = (undefined4)(intptr_t)p1;
  return;
}

cocos2d::CCArray* BLMap::getArrayLights() const
{
  return (cocos2d::CCArray*)(*(undefined4 *)(((int)this) + 0x1d8));
}

void BLMap::setArrayLights(cocos2d::CCArray* p1)
{
  *(undefined4 *)(((int)this) + 0x1d8) = (undefined4)(intptr_t)p1;
  return;
}

bool BLMap::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLMap::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLMap::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLMap::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLMap::setMapData(BLMapData* p1)
{
  if (*(int *)(((int)this) + 0x1b8) != (int)(intptr_t)p1) {
    if ((int)(intptr_t)p1 != 0) {
      ((cocos2d::CCObject *)p1)->retain();
    }
    if (*(int *)(((int)this) + 0x1b8) != 0) {
      ((cocos2d::CCObject *)this)->release();
    }
    *(int *)(((int)this) + 0x1b8) = (undefined4)(intptr_t)p1;
  }
  return;
}

BLMap::~BLMap()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(g_0043a504 + 0x43a450);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x2a8;
  *(int *)((int)this + 4*(0x3d)) = iVar2 + 0x2e8;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  if (*(int *)((int)this + 4*(0x76)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x76)) = 0;
  }
  if (*(int *)((int)this + 4*(0x6e)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x6e)) = 0;
  }
  if (*(int *)((int)this + 4*(0x74)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x74)) = 0;
  }
  if (*(int *)((int)this + 4*(0x75)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x75)) = 0;
  }
  *(undefined4 *)(&g_0043a4f0 + g_0043a508) = 0;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLMap"),&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCSprite(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

undefined4 BLMap::currentMap()
{
  return *(undefined4 *)(g_0043a52c + 0x43a556);
}


void BLMap::initScenes()
{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  code *pcVar5;
  char *pcVar6;
  int iVar7;
  char *pcStack_28;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [8];
  
  iVar1 = (**(code **)(*(int *)*(int *)((int)this + 4*(0x6e)) + 0x30))();
  if (iVar1 != 0) {
    pcVar6 = *(char **)(iVar1 + 0x14);
    pcStack_28 = pcVar6;
    if (pcVar6 != (char *)0x0) {
      pcStack_28 = *(char **)(pcVar6 + 0x110);
    }
    while (pcVar6 != (char *)0x0) {
      if ((*(int *)(pcVar6 + 0x104) != 0) &&
         (piVar2 = (int *)func_0079e55c(*(int *)(pcVar6 + 0x104),
                                          *(undefined4 *)(g_0043a7a4 + 0x43a64e),
                                          *(undefined4 *)(g_0043a7a8 + 0x43a650),0),
         piVar2 != (int *)0x0)) {
        piVar3 = (int *)::operator new(0x140);
        ::new ((void *)piVar3) cocos2d::CCObject();   /* ALLOC+CTOR_FIX(R115): 原为裸 new + ctorZero 占位；生成器丢了 cocos2d::CCObject 的构造函数 -> vptr 垃圾 */
        iVar1 = (**(code **)(*piVar3 + 0x18))(piVar3);
        if (iVar1 == 0) {
          (**(code **)(*piVar3 + 8))(piVar3);
          piVar3 = (int *)0x0;
        }
        else {
          ((cocos2d::CCObject *)piVar3)->autorelease();
        }
        ((BLMapScene *)piVar3)->initWithData((BLMapSceneData*)piVar2);
        pcVar5 = *(code **)(*(int *)this + 0xcc);
        iVar1 = (**(code **)(*piVar2 + 0x18))(piVar2);
        (*pcVar5)(((int)this),piVar3,1000 - iVar1);
        if (*pcVar6 == '\0') {
          iVar7 = ((intptr_t)"Should not call this function for integer dictionary");
          iVar1 = 0 /* ctorZero */;
          if (iVar1 == 0) {
            cocos2d::CCLog((char const*)((intptr_t)"Assert failed: %s"), iVar7);
          }
          if (*pcVar6 == '\0') {
            func_0079e864(6,((intptr_t)"cocos2d-x assert"),((intptr_t)"%s function:%s line:%d"),
                            ((intptr_t)"/Users/hoolai/Documents/projects/lol_hulai/cocos2d/projects/DiabloLOL/proj.android_RongHe/../../../cocos2dx/cocoa/CCDictionary.h"),((intptr_t)"getStrKey"),99);
          }
        }
        func_0079e45c(auStack_1c,pcVar6,auStack_20);
        iVar1 = func_0079e4bc(auStack_1c,((intptr_t)"main"));
        if ((iVar1 == 0) ||
           (iVar1 = func_0079e4bc(auStack_1c,((intptr_t)"midmain")), iVar1 == 0)) {
          (**(code **)(*(int *)this + 0x24c))(((int)this),piVar3);
          pcVar5 = *(code **)(*(int *)this + 0x264);
          uVar4 = (undefined4)((**(code **)(*piVar3 + 0x1f8))(piVar3));
          (*pcVar5)(((int)this),uVar4);
          iVar1 = (**(code **)(*piVar3 + 0x1f8))(piVar3);
          *(int *)((int)this + 4*(0x72)) = iVar1;
          pcVar5 = *(code **)(*(int *)this + 0x26c);
          uVar4 = (undefined4)((**(code **)(*piVar3 + 0x200))(piVar3));
          (*pcVar5)(((int)this),uVar4);
        }
        ((cocos2d::CCArray *)*(int *)((int)this + 4*(0x74)))->addObject((cocos2d::CCObject*)piVar3);
        func_0079e2bc(auStack_1c);
      }
      pcVar6 = pcStack_28;
      if (pcStack_28 != (char *)0x0) {
        pcStack_28 = *(char **)(pcStack_28 + 0x110);
      }
    }
  }
  return;
}







void BLMap::setCamerAndMove(cocos2d::CCPoint * p1, float p2)
{
  return;
}


void BLMap::onEnter()
{
  ((cocos2d::CCNode *)this)->onEnter();
  return;
}

void BLMap::onExit()
{
  ((cocos2d::CCNode *)this)->onExit();
  return;
}


int * BLMap::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)::operator new(0x1e8);
  ::new ((void *)piVar1) cocos2d::CCObject();   /* ALLOC+CTOR_FIX(R115): 原为裸 new + ctorZero 占位；生成器丢了 cocos2d::CCObject 的构造函数 -> vptr 垃圾 */
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

// ===== 修复: 补回被误删的函数占位 (10) =====
void BLMap::setSpriteBatchNodeEffect(cocos2d::CCSpriteBatchNode* p1)
{
  *(undefined4 *)(((int)this) + 0x1cc) = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  return;
}

BLMap::BLMap()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = (undefined4)(intptr_t)(*(int *)(g_0043a604 + 0x43a540));
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x2a8;
  *(int *)((int)this + 4*(0x3d)) = iVar2 + 0x2e8;
  0 /* ctorZero */;
  *(int *)((int)this + 4*(0x6d)) = 0;
  *(int *)((int)this + 4*(0x6e)) = 0;
  *(int *)((int)this + 4*(0x6f)) = 0;
  *(int *)((int)this + 4*(0x70)) = 0;
  *(int *)((int)this + 4*(0x72)) = 0;
  *(int *)((int)this + 4*(0x71)) = 0;
  *(int *)((int)this + 4*(0x73)) = 0;
  iVar2 = (undefined4)(intptr_t)(cocos2d::CCArray::create());
  *(int *)((int)this + 4*(0x76)) = iVar2;
  if (iVar2 != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  iVar2 = (undefined4)(intptr_t)(cocos2d::CCArray::create());
  *(int *)((int)this + 4*(0x75)) = iVar2;
  if (iVar2 != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  iVar2 = (undefined4)(intptr_t)(cocos2d::CCArray::create());
  *(int *)((int)this + 4*(0x74)) = iVar2;
  if (iVar2 != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLMap"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

void BLMap::initWith(int p1)
{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  code *pcVar5;
  int *piVar6;
  undefined1 auStack_20 [12];
  
  *(int *)((int)this + 4*(0x6f)) = p1;
  piVar1 = (int *)::operator new(0x24);
  ::new ((void *)piVar1) BLMapData();   /* ALLOC+CTOR_FIX(R115): 原为裸 new + ctorZero 占位；生成器丢了 BLMapData 的构造函数 -> vptr 垃圾 */
  iVar2 = (undefined4)(intptr_t)(((BLMapData *)piVar1)->init());
  if (iVar2 == 0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    piVar1 = (int *)0x0;
  }
  else {
    ((cocos2d::CCObject *)piVar1)->autorelease();
  }
  *(int *)((int)this + 4*(0x6e)) = (int)piVar1;
  ((BLMapData *)piVar1)->initWithMapID(*(int *)((int)this + 4*(0x6f)));
  if (*(int *)((int)this + 4*(0x6e)) != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  BLMap::initScenes();
  iVar3 = (undefined4)(intptr_t)(cocos2d::CCSpriteBatchNode::create((char const*)((intptr_t)"effect_effup.png"), (unsigned int)0x1d));
  *(int *)((int)this + 4*(0x73)) = iVar3;
  iVar2 = (undefined4)(intptr_t)(g_0043a8c0);
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x6d)) + 0xcc))((int *)*(int *)((int)this + 4*(0x6d)),iVar3,0x65);
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x73)) + 0x7c))((int *)*(int *)((int)this + 4*(0x73)),iVar2 + 0x43a878);
  pcVar5 = *(code **)(*(int *)*(int *)((int)this + 4*(0x73)) + 0x19c);
  (*pcVar5)((int *)*(int *)((int)this + 4*(0x73)),1,1,pcVar5,1,1);
  (**(code **)(*(int *)this + 0x7c))(((int)this),iVar2 + 0x43a878);
  piVar6 = (int *)*(int *)((int)this + 4*(0x73));
  pcVar5 = *(code **)(*piVar6 + 100);
  piVar1 = (int *)(**(code **)(*(int *)this + 0x248))(((int)this));
  uVar4 = (undefined4)((**(code **)(*piVar1 + 0x208))());
  (*pcVar5)(piVar6,uVar4);
  pcVar5 = *(code **)(*(int *)this + 0x88);
  uVar4 = (undefined4)(cocos2d::CCDirector::sharedDirector());
  *(CCSize *)auStack_20 = ((cocos2d::CCDirector *)uVar4)->getWinSize();
  (*pcVar5)(((int)this),auStack_20);
  return;
}

int * BLMap::nearestWood(BLRole* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return nullptr;
}

void BLMap::resetLights()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMap::tick(float p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMap::setCamer(cocos2d::CCPoint * p1, float p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMap::resetCamer()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMap::runShakeAction(int p1, float p2, float p3)
{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  code *pcVar9;
  undefined1 auStack_28 [8];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  uVar8 = (undefined4)(0);
  while( true ) {
    uVar1 = (undefined4)(((cocos2d::CCArray *)(*(undefined4 *)(((int)this) + 0x1d0)))->count());
    if (uVar1 <= uVar8) break;
    iVar2 = (undefined4)(intptr_t)(((cocos2d::CCArray *)(*(undefined4 *)(((int)this) + 0x1d0)))->objectAtIndex((unsigned int)uVar8));
    if ((iVar2 != 0) &&
       (piVar3 = (int *)func_0079e55c(iVar2,*(undefined4 *)(g_0043ae98 + 0x43adda),
                                        *(undefined4 *)(g_0043ae9c + 0x43addc),0),
       piVar3 != (int *)0x0)) {
      (**(code **)(*(int *)(piVar3) + (0x220)))();
      ((cocos2d::CCNode *)this)->stopAllActions();
      piVar4 = (int *)(**(code **)(*(int *)(piVar3) + (0x220)))(piVar3);
      (**(code **)(*(int *)(piVar4) + (0x4c)))(piVar4,"CC: (GNU) 4.4.3");
      piVar4 = (int *)((SharkAction *)this)->create();
      piVar5 = (int *)(**(code **)(*(int *)(piVar3) + (0x220)))(piVar3);
      uVar6 = (undefined4)((**(code **)(*(int *)(piVar5) + (0x50)))());
      0 /* ctorZero */;
      piVar5 = (int *)(**(code **)(*(int *)(piVar3) + (0x210)))(piVar3);
      uVar6 = (undefined4)((**(code **)(*(int *)(piVar5) + (0x38)))());
      ((SharkAction *)(piVar4))->initWith(p1, *(cocos2d::CCPoint *)(void *)&auStack_28, uVar6);
      pcVar9 = *(code **)(*piVar4 + 0x50);
      uStack_20 = (undefined4)(*(undefined4 *)(g_0043aea4 + 0x43ae52));
      uStack_1c = (undefined4)(0);
      uVar6 = (undefined4)(cocos2d::extension::CCInvocation::create((cocos2d::CCObject*)piVar3, 0 /*memptr*/, 0));
      (*pcVar9)(piVar4,uVar6);
      uVar6 = (undefined4)(((BLSpeed *)this)->create((cocos2d::CCActionInterval*)piVar4, g_0043aea8));
      uVar7 = (undefined4)(func_0079e4dc(0x3f800000,p2));
      ((BLSpeed *)(uVar6))->changeFps(uVar7, p3);
      uVar7 = (undefined4)((**(code **)(*(int *)(piVar3) + (0x220)))(piVar3));
      ((cocos2d::CCNode *)(uVar7))->runAction((cocos2d::CCAction*)uVar6);
    }
    uVar8 = (undefined4)(uVar8 + 1);
  }
  return;
}

bool BLMap::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
