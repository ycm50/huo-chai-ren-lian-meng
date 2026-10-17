#include "BLSuitListItemPresenter.h"
#include "BackPackItemData.h"
#include "BLSuitListItemView.h"
#include "BLGameScene.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BackPackData.h"
#include "DataCacheManager.h"
#include "DataManager.h"
#include "SuitEquipEquipData.h"
#include "SuitEquipEquipItemData.h"
#include "SuitEquipUserData.h"
#include "Toast.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <new>   // ghost_fix.js 自动补齐
using namespace cocos2d;
// 兜底声明
extern "C" long long func_0042f3fc(...);
extern "C" long long func_00442068(...);
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e43c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e46c(...);
extern "C" long long func_0079e47c(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long func_0079e5ec(...);
extern "C" long long func_0079e62c(...);
extern "C" long long func_0079e63c(...);
extern "C" long long func_0079e69c(...);
extern "C" long long func_0079e724(...);
extern "C" long long func_0079e784(...);
extern "C" long long func_0079e854(...);
extern "C" long long func_0079e884(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0068cfe4;
extern "C" unsigned long UNK_0068cffc;
extern "C" unsigned long UNK_0068d014;
extern "C" unsigned long UNK_0068d088;
extern "C" unsigned long UNK_0068d0a2;
extern "C" unsigned long UNK_0068d0e8;
extern "C" unsigned long UNK_0068d110;
extern "C" unsigned long UNK_0068d1bc;
extern "C" unsigned long UNK_0068d24e;
extern "C" unsigned long UNK_0068d27c;
extern "C" unsigned long UNK_0068d312;
extern "C" unsigned long UNK_0068d364;
extern "C" unsigned long UNK_0068d464;
extern "C" unsigned long UNK_0068d4ec;
extern "C" unsigned long UNK_0068d582;
extern "C" unsigned long UNK_0068d67a;
extern "C" unsigned long UNK_0068d698;
extern "C" unsigned long UNK_0068d6d6;
extern "C" unsigned long UNK_0068d714;
extern "C" unsigned long UNK_0068d75a;
extern "C" unsigned long _UNK_0068cfe8;
extern "C" unsigned long _UNK_0068d000;
extern "C" unsigned long _UNK_0068d018;
extern "C" unsigned long _UNK_0068d0d4;
extern "C" unsigned long _UNK_0068d0d8;
extern "C" unsigned long _UNK_0068d0ec;
extern "C" unsigned long _UNK_0068d114;
extern "C" unsigned long _UNK_0068d23c;
extern "C" unsigned long _UNK_0068d2ac;
extern "C" unsigned long _UNK_0068d2b0;
extern "C" unsigned long _UNK_0068d388;
extern "C" unsigned long _UNK_0068d38c;
extern "C" unsigned long _UNK_0068d808;
extern "C" unsigned long _UNK_0068d80c;
extern "C" unsigned long _UNK_0068d810;
extern "C" unsigned long _UNK_0068d814;
extern "C" unsigned long _UNK_0068d818;
extern "C" unsigned long _UNK_0068d81c;
extern "C" unsigned long _UNK_0068d820;
extern "C" unsigned long _UNK_0068d824;
extern "C" unsigned long _UNK_0068d828;
extern "C" unsigned long _UNK_0068d82c;
extern "C" unsigned long _UNK_0068d830;
extern "C" unsigned long _UNK_0068d834;
extern "C" unsigned long _UNK_0068d838;
extern "C" unsigned long extraout_r3;
extern "C" unsigned long g_0068cfe4;
extern "C" unsigned long g_0068cfe8;
extern "C" unsigned long g_0068cffc;
extern "C" unsigned long g_0068d000;
extern "C" unsigned long g_0068d014;
extern "C" unsigned long g_0068d018;
extern "C" unsigned long g_0068d088;
extern "C" unsigned long g_0068d0a2;
extern "C" unsigned long g_0068d0d4;
extern "C" unsigned long g_0068d0d8;
extern "C" unsigned long g_0068d0e8;
extern "C" unsigned long g_0068d0ec;
extern "C" unsigned long g_0068d110;
extern "C" unsigned long g_0068d114;
extern "C" unsigned long g_0068d1bc;
extern "C" unsigned long g_0068d23c;
extern "C" unsigned long g_0068d24e;
extern "C" unsigned long g_0068d27c;
extern "C" unsigned long g_0068d2ac;
extern "C" unsigned long g_0068d2b0;
extern "C" unsigned long g_0068d312;
extern "C" unsigned long g_0068d364;
extern "C" unsigned long g_0068d388;
extern "C" unsigned long g_0068d38c;
extern "C" unsigned long g_0068d464;
extern "C" unsigned long g_0068d4ec;
extern "C" unsigned long g_0068d582;
extern "C" unsigned long g_0068d67a;
extern "C" unsigned long g_0068d698;
extern "C" unsigned long g_0068d6d6;
extern "C" unsigned long g_0068d714;
extern "C" unsigned long g_0068d75a;
extern "C" unsigned long g_0068d808;
extern "C" unsigned long g_0068d80c;
extern "C" unsigned long g_0068d810;
extern "C" unsigned long g_0068d814;
extern "C" unsigned long g_0068d818;
extern "C" unsigned long g_0068d81c;
extern "C" unsigned long g_0068d820;
extern "C" unsigned long g_0068d824;
extern "C" unsigned long g_0068d828;
extern "C" unsigned long g_0068d82c;
extern "C" unsigned long g_0068d830;
extern "C" unsigned long g_0068d834;
extern "C" unsigned long g_0068d838;
bool BLSuitListItemPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLSuitListItemPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLSuitListItemPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLSuitListItemPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLSuitListItemPresenter::tick(float p1)
{
  return;
}

BLSuitListItemPresenter::~BLSuitListItemPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0068d088 + g_0068d0d4);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x3c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0068d0a2 + g_0068d0d8,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}


BLSuitListItemPresenter::BLSuitListItemPresenter()
{
  undefined4 p2 = 0;

  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar3 = *(int *)(&g_0068d24e + g_0068d2ac);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x3c;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 0);
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0068d27c + g_0068d2b0,&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  *(int *)((int)this + 4*(7)) = 0;
  return;
}

undefined4 BLSuitListItemPresenter::create(BLSuitListItemView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x20))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLSuitListItemPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  return;
}

void BLSuitListItemPresenter::onEnter()
{
  return;
}

// ===== 修复: 补回被误删的函数占位 (4) =====
void BLSuitListItemPresenter::onSuit(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

undefined4 BLSuitListItemPresenter::initWithView(BLSuitListItemView* p1)
{
  undefined4 uVar1;
  int *piVar2;
  code *pcVar3;
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [8];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  *(int *)(((int)this) + 0x18) = (undefined4)(intptr_t)p1;
  uStack_1c = (undefined4)(0);
  uStack_20 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_0068d312 + (intptr_t)(g_0068d388))));
  (**(code **)(**(int **)(p1 + 0x124) + 0x254))
            (*(int **)(p1 + 0x124),((int)this),uStack_20,0,0x20);
  piVar2 = *(int **)(*(int *)(((int)this) + 0x18) + 300);
  pcVar3 = *(code **)(*piVar2 + 0x7c);
  0 /* ctorZero */;
  (*pcVar3)(piVar2,auStack_28);
  piVar2 = *(int **)(*(int *)(((int)this) + 0x18) + 300);
  pcVar3 = *(code **)(*piVar2 + 0x5c);
  uVar1 = (undefined4)((**(code **)(**(int **)(*(int *)(((int)this) + 0x18) + 0x130) + 0x60))());
  (*pcVar3)(piVar2,uVar1);
  piVar2 = *(int **)(*(int *)(((int)this) + 0x18) + 0x124);
  pcVar3 = *(code **)(*piVar2 + 0x26c);
  func_0079e45c(auStack_28,(unsigned char *)((char *)&g_0068d364 + (intptr_t)(g_0068d38c)),auStack_2c);
  (*pcVar3)(piVar2,auStack_28);
  func_0079e2bc(auStack_28);
  return 1;
}

void BLSuitListItemPresenter::onEquipChange(cocos2d::CCObject* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLSuitListItemPresenter::initWithData(BackPackItemData* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
