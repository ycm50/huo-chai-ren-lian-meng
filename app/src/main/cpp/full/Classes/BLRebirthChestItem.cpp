#include "BLRebirthChestItem.h"
#include "CCNode.h"
#include "ItemData.h"
#include "CCTextureCache.h"
#include "CCSprite.h"
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
extern "C" long long func_0079e34c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e69c(...);
extern "C" long long func_0079e904(...);
extern "C" long long func_0079e914(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_005124f8;
extern "C" unsigned long UNK_00512522;
extern "C" unsigned long UNK_00512580;
extern "C" unsigned long UNK_005125ae;
extern "C" unsigned long UNK_005125e8;
extern "C" unsigned long UNK_0051260a;
extern "C" unsigned long UNK_0051268c;
extern "C" unsigned long UNK_005126ec;
extern "C" unsigned long UNK_005126fa;
extern "C" unsigned long _UNK_00512554;
extern "C" unsigned long _UNK_00512558;
extern "C" unsigned long _UNK_005125d8;
extern "C" unsigned long _UNK_005125dc;
extern "C" unsigned long _UNK_005126c8;
extern "C" unsigned long _UNK_005126cc;
extern "C" unsigned long _UNK_005126d0;
extern "C" unsigned long _UNK_0051275c;
extern "C" unsigned long _UNK_00512760;
extern "C" unsigned long g_005124f8;
extern "C" unsigned long g_00512522;
extern "C" unsigned long g_00512554;
extern "C" unsigned long g_00512558;
extern "C" unsigned long g_00512580;
extern "C" unsigned long g_005125ae;
extern "C" unsigned long g_005125d8;
extern "C" unsigned long g_005125dc;
extern "C" unsigned long g_005125e8;
extern "C" unsigned long g_0051260a;
extern "C" unsigned long g_0051268c;
extern "C" unsigned long g_005126c8;
extern "C" unsigned long g_005126cc;
extern "C" unsigned long g_005126d0;
extern "C" unsigned long g_005126ec;
extern "C" unsigned long g_005126fa;
extern "C" unsigned long g_0051275c;
extern "C" unsigned long g_00512760;
cocos2d::CCSprite* BLRebirthChestItem::getSpriteItem() const
{
  return (cocos2d::CCSprite*)(*(undefined4 *)(((int)this) + 0x1b4));
}

void BLRebirthChestItem::setSpriteItem(cocos2d::CCSprite* p1)
{
  *(undefined4 *)(((int)this) + 0x1b4) = (undefined4)(intptr_t)p1;
  return;
}

BLRebirthChestItem::~BLRebirthChestItem()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_005124f8 + g_00512554);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x24c;
  *(int *)((int)this + 4*(0x3d)) = iVar2 + 0x28c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00512522 + g_00512558,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCSprite(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLRebirthChestItem::BLRebirthChestItem()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_00512580 + g_005125d8);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x24c;
  *(int *)((int)this + 4*(0x3d)) = iVar2 + 0x28c;
  *(int *)((int)this + 4*(0x6d)) = 0;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005125ae + g_005125dc,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}



void BLRebirthChestItem::onEnter()
{
  ((cocos2d::CCNode *)this)->onEnter();
  return;
}

void BLRebirthChestItem::onExit()
{
  ((cocos2d::CCNode *)this)->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (2) =====
void BLRebirthChestItem::initWithItemdData(ItemData* p1)
{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  int *piVar4;
  int *piVar5;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 auStack_38 [28];
  int iStack_1c;
  
  piVar4 = *(int **)((unsigned char *)((char *)&g_005125e8 + (intptr_t)(g_005126c8)));
  iStack_1c = (int)*(int *)&(*piVar4);
  if ((int)(intptr_t)(int)(intptr_t)p1 != 0) {
    (**(code **)(*(int *)(p1) + (0x20)))(&uStack_40);
    cocos2d::CCLog((char const*)(unsigned char *)((char *)&g_0051260a + (intptr_t)(g_005126cc)), uStack_40);
    func_0079e2bc(&uStack_40);
  }
  iVar1 = (undefined4)(intptr_t)((**(code **)(*(int *)(p1) + (0x30)))(p1));
  piVar5 = (int *)*(int *)((int)this + 4*(0x6d));
  if (iVar1 == 3) {
    pcVar3 = *(code **)(*piVar5 + 0x1e0);
    (**(code **)(*(int *)(p1) + (0x58)))(&uStack_40,p1);
    (*pcVar3)(piVar5,uStack_40);
  }
  else {
    pcVar3 = *(code **)(*piVar5 + 0x1dc);
    (**(code **)(*(int *)(p1) + (0x58)))(&uStack_40,p1);
    (*pcVar3)(piVar5,uStack_40);
  }
  func_0079e2bc(&uStack_40);
  iVar1 = (undefined4)(intptr_t)((**(code **)(*(int *)(p1) + (0x30)))(p1));
  if (iVar1 == 6) {
    uStack_3c = (undefined4)(0);
    func_0079e34c(auStack_38,0,0x1c);
    uVar2 = (undefined4)((**(code **)(*(int *)(p1) + (0x50)))(p1));
    func_0079e904(&uStack_3c,(unsigned char *)((char *)&g_0051268c + (intptr_t)(g_005126d0)),uVar2);
    iVar1 = (undefined4)(intptr_t)(cocos2d::CCSprite::create((char const*)&uStack_3c));
    if (iVar1 != 0) {
      (**(code **)(*(int *)this + 200))(((int)this));
    }
  }
  if (iStack_1c != *piVar4) {
    func_0079e914();
  }
  return;
}

bool BLRebirthChestItem::init()
{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  code *pcVar4;
  undefined4 uStack_2c;
  undefined1 auStack_28 [20];
  
  iVar1 = (undefined4)(intptr_t)(((cocos2d::CCSprite *)this)->init());
  if (iVar1 != 0) {
    func_0079e45c(&uStack_2c,(unsigned char *)((char *)&g_005126ec + (intptr_t)(g_0051275c)),auStack_28);
    func_0079e69c(&uStack_2c,(unsigned char *)((char *)&g_005126fa + (intptr_t)(g_00512760)));
    pcVar4 = *(code **)(*(int *)this + 0x1d0);
    uVar2 = (undefined4)(cocos2d::CCTextureCache::sharedTextureCache());
    uVar2 = (undefined4)(((cocos2d::CCTextureCache *)uVar2)->textureForKey((char const*)uStack_2c));
    0 /* ctorZero */;
    (*pcVar4)(((int)this),uVar2,auStack_28);
    iVar3 = (undefined4)(intptr_t)(cocos2d::CCSprite::create());
    *(int *)((int)this + 4*(0x6d)) = iVar3;
    (**(code **)(*(int *)this + 200))(((int)this),iVar3);
    func_0079e2bc(&uStack_2c);
  }
  return iVar1;
}
