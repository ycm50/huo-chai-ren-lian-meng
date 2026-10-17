#include "BLEquipGiftItemPresenter.h"
#include "BLEquipGiftItemView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
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
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e43c(...);
extern "C" long long func_0079e44c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e46c(...);
extern "C" long long func_0079e47c(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e5dc(...);
extern "C" long long func_0079e874(...);
extern "C" long long func_0079e934(...);
extern "C" long long func_0079e944(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_005411a4;
extern "C" unsigned long UNK_005411be;
extern "C" unsigned long UNK_00541204;
extern "C" unsigned long UNK_0054122c;
extern "C" unsigned long UNK_00541242;
extern "C" unsigned long UNK_00541270;
extern "C" unsigned long UNK_00541344;
extern "C" unsigned long UNK_0054136a;
extern "C" unsigned long UNK_00541394;
extern "C" unsigned long UNK_0054143a;
extern "C" unsigned long UNK_0054144e;
extern "C" unsigned long UNK_0054146a;
extern "C" unsigned long _UNK_005411f0;
extern "C" unsigned long _UNK_005411f4;
extern "C" unsigned long _UNK_00541208;
extern "C" unsigned long _UNK_00541230;
extern "C" unsigned long _UNK_0054129c;
extern "C" unsigned long _UNK_005412a0;
extern "C" unsigned long _UNK_00541594;
extern "C" unsigned long _UNK_00541598;
extern "C" unsigned long _UNK_0054159c;
extern "C" unsigned long _UNK_005415a0;
extern "C" unsigned long _UNK_005415a4;
extern "C" unsigned long _UNK_005415a8;
extern "C" unsigned long _UNK_005415ac;
extern "C" unsigned long _UNK_005415b0;
extern "C" unsigned long g_005411a4;
extern "C" unsigned long g_005411be;
extern "C" unsigned long g_005411f0;
extern "C" unsigned long g_005411f4;
extern "C" unsigned long g_00541204;
extern "C" unsigned long g_00541208;
extern "C" unsigned long g_0054122c;
extern "C" unsigned long g_00541230;
extern "C" unsigned long g_00541242;
extern "C" unsigned long g_00541270;
extern "C" unsigned long g_0054129c;
extern "C" unsigned long g_005412a0;
extern "C" unsigned long g_00541344;
extern "C" unsigned long g_0054136a;
extern "C" unsigned long g_00541394;
extern "C" unsigned long g_0054143a;
extern "C" unsigned long g_0054144e;
extern "C" unsigned long g_0054146a;
extern "C" unsigned long g_00541594;
extern "C" unsigned long g_00541598;
extern "C" unsigned long g_0054159c;
extern "C" unsigned long g_005415a0;
extern "C" unsigned long g_005415a4;
extern "C" unsigned long g_005415a8;
extern "C" unsigned long g_005415ac;
extern "C" unsigned long g_005415b0;
bool BLEquipGiftItemPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLEquipGiftItemPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLEquipGiftItemPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLEquipGiftItemPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLEquipGiftItemPresenter::tick(float p1)
{
  return;
}

BLEquipGiftItemPresenter::~BLEquipGiftItemPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_005411a4 + g_005411f0);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x3c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005411be + g_005411f4,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLEquipGiftItemPresenter::BLEquipGiftItemPresenter()
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
  iVar3 = *(int *)(&g_00541242 + g_0054129c);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x3c;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 0);
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00541270 + g_005412a0,&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

undefined4 BLEquipGiftItemPresenter::create(BLEquipGiftItemView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x1c))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLEquipGiftItemPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  return;
}

void BLEquipGiftItemPresenter::onEnter()
{
  return;
}

void BLEquipGiftItemPresenter::initWithView(BLEquipGiftItemView* p1)
{
  *(undefined4 *)(((int)this) + 0x18) = (undefined4)(intptr_t)p1;
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
void BLEquipGiftItemPresenter::initWith(int p1, int p2, bool p3)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
