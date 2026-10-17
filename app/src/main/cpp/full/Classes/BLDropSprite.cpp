#include "BLDropSprite.h"
#include "CCNode.h"
#include "CCSprite.h"
#include "CCObject.h"
#include "CCSpriteFrameCache.h"
#include "ItemData.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLMission.h"
#include "BLMissionManager.h"
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
extern "C" long long func_0079e2dc(...);
extern "C" long long func_0079e2ec(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e34c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4ec(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e51c(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long func_0079e5ec(...);
extern "C" long long func_0079e5fc(...);
extern "C" long long func_0079e62c(...);
extern "C" long long func_0079e63c(...);
extern "C" long long func_0079e724(...);
extern "C" long long func_0079e734(...);
extern "C" long long func_0079e794(...);
extern "C" long long func_0079e7b4(...);
extern "C" long long func_0079e7e4(...);
extern "C" long long func_0079e8a4(...);
extern "C" long long func_0079e8b4(...);
extern "C" long long func_0079e904(...);
extern "C" long long func_0079e914(...);
extern "C" long long ghidra_CONCAT11(...);
extern "C" long long ghidra_CONCAT12(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" long long ghidra_SUB41(...);
extern "C" unsigned long _DAT_00437fe4;
extern "C" unsigned long _DAT_00437fe8;
extern "C" unsigned long _DAT_00438250;
extern "C" unsigned long _DAT_00438254;
extern "C" unsigned long _DAT_00438258;
extern "C" unsigned long _DAT_0043825c;
extern "C" unsigned long _DAT_00438260;
extern "C" unsigned long _DAT_00438264;
extern "C" unsigned long _DAT_00438268;
extern "C" unsigned long _DAT_0043826c;
extern "C" unsigned long _DAT_00438270;
extern "C" unsigned long _DAT_00438274;
extern "C" unsigned long _DAT_00438278;
extern "C" unsigned long _DAT_0043832c;
extern "C" unsigned long _DAT_00438330;
extern "C" unsigned long _DAT_004383b8;
extern "C" unsigned long _DAT_004383bc;
extern "C" unsigned long _DAT_00438444;
extern "C" unsigned long _DAT_00438448;
extern "C" unsigned long _DAT_00438738;
extern "C" unsigned long _DAT_0043873c;
extern "C" unsigned long _DAT_00438740;
extern "C" unsigned long _DAT_00438744;
extern "C" unsigned long _DAT_00438748;
extern "C" unsigned long _DAT_0043874c;
extern "C" unsigned long _DAT_00438750;
extern "C" unsigned long _DAT_00438754;
extern "C" unsigned long _DAT_00438758;
extern "C" unsigned long _DAT_0043875c;
extern "C" unsigned long _DAT_00438760;
extern "C" unsigned long _DAT_004387a8;
extern "C" unsigned long _DAT_004387ac;
extern "C" unsigned long _DAT_004387d0;
extern "C" unsigned long extraout_r1;
extern "C" unsigned long extraout_r1_00;
extern "C" unsigned long extraout_r1_01;
extern "C" unsigned long g_00437fe4;
extern "C" unsigned long g_00437fe8;
extern "C" unsigned long g_00438250;
extern "C" unsigned long g_00438254;
extern "C" unsigned long g_00438258;
extern "C" unsigned long g_0043825c;
extern "C" unsigned long g_00438260;
extern "C" unsigned long g_00438264;
extern "C" unsigned long g_00438268;
extern "C" unsigned long g_0043826c;
extern "C" unsigned long g_00438270;
extern "C" unsigned long g_00438274;
extern "C" unsigned long g_00438278;
extern "C" unsigned long g_0043832c;
extern "C" unsigned long g_00438330;
extern "C" unsigned long g_004383b8;
extern "C" unsigned long g_004383bc;
extern "C" unsigned long g_00438444;
extern "C" unsigned long g_00438448;
extern "C" unsigned long g_00438738;
extern "C" unsigned long g_0043873c;
extern "C" unsigned long g_00438740;
extern "C" unsigned long g_00438744;
extern "C" unsigned long g_00438748;
extern "C" unsigned long g_0043874c;
extern "C" unsigned long g_00438750;
extern "C" unsigned long g_00438754;
extern "C" unsigned long g_00438758;
extern "C" unsigned long g_0043875c;
extern "C" unsigned long g_00438760;
extern "C" unsigned long g_004387a8;
extern "C" unsigned long g_004387ac;
extern "C" unsigned long g_004387d0;
float BLDropSprite::getMapHeight() const
{
  return *(undefined4 *)(((int)this) + 0x1b8);
}

void BLDropSprite::setMapHeight(float p1)
{
  *(undefined4 *)(((int)this) + 0x1b8) = p1;
  return;
}

float BLDropSprite::getStartRotation() const
{
  return *(undefined4 *)(((int)this) + 0x1bc);
}

void BLDropSprite::setStartRotation(float p1)
{
  *(undefined4 *)(((int)this) + 0x1bc) = p1;
  return;
}

float BLDropSprite::getGravity() const
{
  return *(undefined4 *)(((int)this) + 0x1c0);
}

void BLDropSprite::setGravity(float p1)
{
  *(undefined4 *)(((int)this) + 0x1c0) = p1;
  return;
}

float BLDropSprite::getSpeedX() const
{
  return *(undefined4 *)(((int)this) + 0x1c4);
}

void BLDropSprite::setSpeedX(float p1)
{
  *(undefined4 *)(((int)this) + 0x1c4) = p1;
  return;
}

float BLDropSprite::getSpeedY() const
{
  return *(undefined4 *)(((int)this) + 0x1c8);
}

void BLDropSprite::setSpeedY(float p1)
{
  *(undefined4 *)(((int)this) + 0x1c8) = p1;
  return;
}

float BLDropSprite::getSpeedAddX() const
{
  return *(undefined4 *)(((int)this) + 0x1cc);
}

void BLDropSprite::setSpeedAddX(float p1)
{
  *(undefined4 *)(((int)this) + 0x1cc) = p1;
  return;
}

float BLDropSprite::getSpeedAddY() const
{
  return *(undefined4 *)(((int)this) + 0x1d0);
}

void BLDropSprite::setSpeedAddY(float p1)
{
  *(undefined4 *)(((int)this) + 0x1d0) = p1;
  return;
}

float BLDropSprite::getAngle() const
{
  return *(undefined4 *)(((int)this) + 0x1d4);
}

void BLDropSprite::setAngle(float p1)
{
  *(undefined4 *)(((int)this) + 0x1d4) = p1;
  return;
}

float BLDropSprite::getAlphaTimes() const
{
  return *(undefined4 *)(((int)this) + 0x1d8);
}

void BLDropSprite::setAlphaTimes(float p1)
{
  *(undefined4 *)(((int)this) + 0x1d8) = p1;
  return;
}

ItemData* BLDropSprite::getItemData()
{
  return (ItemData*)(*(undefined4 *)(((int)this) + 0x1b4));
}

BLDropSprite::~BLDropSprite()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(g_00437fe4 + 0x437f74);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x294;
  *(int *)((int)this + 4*(0x3d)) = iVar2 + 0x2d4;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  if (*(int *)((int)this + 4*(0x6d)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x6d)) = 0;
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLDropSprite"),&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCSprite(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}


BLDropSprite::BLDropSprite()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(g_0043832c + 0x438290);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x294;
  *(int *)((int)this + 4*(0x3d)) = iVar2 + 0x2d4;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLDropSprite"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  *(int *)((int)this + 4*(0x6e)) = 0;
  *(int *)((int)this + 4*(0x6f)) = 0;
  *(int *)((int)this + 4*(0x70)) = 0;
  *(int *)((int)this + 4*(0x75)) = 0;
  *(int *)((int)this + 4*(0x71)) = 0;
  *(int *)((int)this + 4*(0x74)) = 0;
  *(int *)((int)this + 4*(0x72)) = 0;
  *(int *)((int)this + 4*(0x73)) = 0;
  *(int *)((int)this + 4*(0x76)) = 0;
  *(undefined1 *)((int)((int)this) + 0x1dd) = 0;
  *(undefined1 *)(((int)this) + 0x77) = 0;
  *(int *)((int)this + 4*(0x6d)) = 0;
  return;
}






void BLDropSprite::onEnter()
{
  ((cocos2d::CCNode *)this)->onEnter();
  return;
}

void BLDropSprite::onExit()
{
  ((cocos2d::CCNode *)this)->onExit();
  return;
}

int * BLDropSprite::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x1e0)));
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

// ===== 修复: 补回被误删的函数占位 (6) =====
void BLDropSprite::setItemData(ItemData* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLDropSprite::initWith(std::string * p1)
{
  undefined4 p4 = 0;

  undefined4 uVar1;
  int iVar2;
  int extraout_r1;
  int extraout_r1_00;
  undefined4 extraout_r1_01;
  code *pcVar3;
  undefined8 uVar4;
  
  uVar1 = (undefined4)(cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache());
  uVar1 = (undefined4)(((cocos2d::CCSpriteFrameCache *)uVar1)->spriteFrameByName((char const*)*(int *)p1));
  pcVar3 = *(code **)(*(int *)this + 0x1d8);
  (*pcVar3)(((int)this),uVar1,*(int *)this,pcVar3,p4);
  *(int *)((int)this + 4*(0x70)) = 0x40000000;
  uVar1 = (undefined4)(func_0079e8a4());
  func_0079e8b4(uVar1,0x14);
  uVar4 = (undefined4)(intptr_t)(func_0079e734(10 - extraout_r1));
  func_0079e63c((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),g_004383b8,g_004383bc);
  iVar2 = (undefined4)(intptr_t)(func_0079e7e4());
  *(int *)((int)this + 4*(0x71)) = iVar2;
  uVar1 = (undefined4)(func_0079e8a4());
  func_0079e8b4(uVar1,0x1e);
  iVar2 = (undefined4)(intptr_t)(func_0079e794(extraout_r1_00 + 10));
  *(int *)((int)this + 4*(0x72)) = iVar2;
  uVar1 = (undefined4)(func_0079e8a4());
  func_0079e8b4(uVar1,0x1e);
  iVar2 = (undefined4)(intptr_t)(func_0079e794(extraout_r1_01));
  *(int *)((int)this + 4*(0x75)) = iVar2;
  return;
}

void BLDropSprite::actionEnd()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLDropSprite::tick(float p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLDropSprite::removeSelf()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

bool BLDropSprite::init()
{
  int iVar1;
  
  iVar1 = (undefined4)(intptr_t)(((cocos2d::CCSprite *)this)->init());
  if (iVar1 != 0) {
    ((cocos2d::CCNode *)(*(undefined4 *)(g_004387d0 + 0x4387c4)))->schedule(0);
  }
  return ghidra_CONCAT44(((int)this),iVar1);
}
