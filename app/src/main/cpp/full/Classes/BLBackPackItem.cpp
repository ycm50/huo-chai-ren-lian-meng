#include "BLBackPackItem.h"
#include "BLLeakUtils.h"
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
extern "C" long long func_0079e69c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_004f50bc;
extern "C" unsigned long UNK_004f50e6;
extern "C" unsigned long UNK_004f5144;
extern "C" unsigned long UNK_004f5172;
extern "C" unsigned long UNK_004f51f6;
extern "C" unsigned long UNK_004f5206;
extern "C" unsigned long UNK_004f5240;
extern "C" unsigned long UNK_004f5268;
extern "C" unsigned long UNK_004f5290;
extern "C" unsigned long UNK_004f52bc;
extern "C" unsigned long _UNK_004f5118;
extern "C" unsigned long _UNK_004f511c;
extern "C" unsigned long _UNK_004f519c;
extern "C" unsigned long _UNK_004f51a0;
extern "C" unsigned long _UNK_004f5304;
extern "C" unsigned long _UNK_004f5308;
extern "C" unsigned long _UNK_004f530c;
extern "C" unsigned long _UNK_004f5310;
extern "C" unsigned long _UNK_004f5314;
extern "C" unsigned long _UNK_004f5318;
extern "C" unsigned long g_004f50bc;
extern "C" unsigned long g_004f50e6;
extern "C" unsigned long g_004f5118;
extern "C" unsigned long g_004f511c;
extern "C" unsigned long g_004f5144;
extern "C" unsigned long g_004f5172;
extern "C" unsigned long g_004f519c;
extern "C" unsigned long g_004f51a0;
extern "C" unsigned long g_004f51f6;
extern "C" unsigned long g_004f5206;
extern "C" unsigned long g_004f5240;
extern "C" unsigned long g_004f5268;
extern "C" unsigned long g_004f5290;
extern "C" unsigned long g_004f52bc;
extern "C" unsigned long g_004f5304;
extern "C" unsigned long g_004f5308;
extern "C" unsigned long g_004f530c;
extern "C" unsigned long g_004f5310;
extern "C" unsigned long g_004f5314;
extern "C" unsigned long g_004f5318;
cocos2d::CCSprite* BLBackPackItem::getSpriteItem() const
{
  return (cocos2d::CCSprite*)(*(undefined4 *)(((int)this) + 0x1b4));
}

void BLBackPackItem::setSpriteItem(cocos2d::CCSprite* p1)
{
  *(undefined4 *)(((int)this) + 0x1b4) = (undefined4)(intptr_t)p1;
  return;
}

cocos2d::CCSprite* BLBackPackItem::getSpriteDebris() const
{
  return (cocos2d::CCSprite*)(*(undefined4 *)(((int)this) + 0x1b8));
}

void BLBackPackItem::setSpriteDebris(cocos2d::CCSprite* p1)
{
  *(undefined4 *)(((int)this) + 0x1b8) = (undefined4)(intptr_t)p1;
  return;
}

BLBackPackItem::~BLBackPackItem()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_004f50bc + g_004f5118);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x254;
  *(int *)((int)this + 4*(0x3d)) = iVar2 + 0x294;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_004f50e6 + g_004f511c,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCSprite(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLBackPackItem::BLBackPackItem()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_004f5144 + g_004f519c);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x254;
  *(int *)((int)this + 4*(0x3d)) = iVar2 + 0x294;
  *(int *)((int)this + 4*(0x6d)) = 0;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_004f5172 + g_004f51a0,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}


bool BLBackPackItem::init()
{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  code *pcVar4;
  undefined4 uStack_38;
  undefined1 auStack_34 [4];
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [20];
  
  iVar1 = ((cocos2d::CCSprite *)this)->init();
  if (iVar1 != 0) {
    func_0079e45c(&uStack_38,&g_004f51f6 + g_004f5304,auStack_28);
    func_0079e69c(&uStack_38,&g_004f5206 + g_004f5308);
    pcVar4 = *(code **)(*(int *)this + 0x1d0);
    uVar2 = (undefined4)(cocos2d::CCTextureCache::sharedTextureCache());
    uVar2 = (undefined4)(((cocos2d::CCTextureCache *)uVar2)->textureForKey((char const*)uStack_38));
    0 /* ctorZero */;
    (*pcVar4)(((int)this),uVar2,auStack_28);
    func_0079e45c(auStack_34,&g_004f5240 + g_004f530c,auStack_28);
    uVar2 = (undefined4)(0 /* ctorZero */);
    func_0079e2bc(auStack_34);
    (**(code **)(*(int *)this + 200))(((int)this),uVar2);
    func_0079e45c(auStack_30,&g_004f5268 + g_004f5310,auStack_28);
    uVar2 = (undefined4)(0 /* ctorZero */);
    func_0079e2bc(auStack_30);
    (**(code **)(*(int *)this + 200))(((int)this),uVar2);
    func_0079e45c(auStack_2c,&g_004f5290 + g_004f5314,auStack_28);
    iVar3 = 0 /* ctorZero */;
    *(int *)((int)this + 4*(0x6d)) = iVar3;
    func_0079e2bc(auStack_2c);
    (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x6d)));
    func_0079e45c(auStack_28,&g_004f52bc + g_004f5318,auStack_2c);
    iVar3 = 0 /* ctorZero */;
    *(int *)((int)this + 4*(0x6e)) = iVar3;
    func_0079e2bc(auStack_28);
    (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x6e)));
    func_0079e2bc(&uStack_38);
  }
  return iVar1;
}

void BLBackPackItem::onEnter()
{
  ((cocos2d::CCNode *)this)->onEnter();
  return;
}

void BLBackPackItem::onExit()
{
  ((cocos2d::CCNode *)this)->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
undefined8 BLBackPackItem::initWithItemdData(ItemData* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
