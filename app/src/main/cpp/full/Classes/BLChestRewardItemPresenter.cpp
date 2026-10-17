#include "BLChestRewardItemPresenter.h"
#include "CCNotificationCenter.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "CCNode.h"
#include "CCObject.h"
#include "CCTouch.h"
#include "CCDirector.h"
#include "EquipData.h"
#include "BLChestRewardItemView.h"
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
using namespace CocosDenshion;

using namespace cocos2d;
// 兜底声明
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2dc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e30c(...);
extern "C" long long func_0079e34c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e724(...);
extern "C" long long func_0079e734(...);
extern "C" long long func_0079e7e4(...);
extern "C" long long func_0079e904(...);
extern "C" long long func_0079e914(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_00517430;
extern "C" unsigned long UNK_00517458;
extern "C" unsigned long UNK_0051749c;
extern "C" unsigned long UNK_005174c4;
extern "C" unsigned long UNK_00517516;
extern "C" unsigned long UNK_0051752e;
extern "C" unsigned long UNK_00517558;
extern "C" unsigned long UNK_0051757e;
extern "C" unsigned long UNK_005175ac;
extern "C" unsigned long UNK_0051762a;
extern "C" unsigned long UNK_00517648;
extern "C" unsigned long UNK_0051764a;
extern "C" unsigned long UNK_00517676;
extern "C" unsigned long UNK_00517722;
extern "C" unsigned long UNK_00517728;
extern "C" unsigned long UNK_00517790;
extern "C" unsigned long UNK_00517792;
extern "C" unsigned long UNK_005177c0;
extern "C" unsigned long UNK_00517854;
extern "C" unsigned long _UNK_00517488;
extern "C" unsigned long _UNK_0051748c;
extern "C" unsigned long _UNK_005174a0;
extern "C" unsigned long _UNK_005174c8;
extern "C" unsigned long _UNK_00517564;
extern "C" unsigned long _UNK_00517568;
extern "C" unsigned long _UNK_0051756c;
extern "C" unsigned long _UNK_005175dc;
extern "C" unsigned long _UNK_005175e0;
extern "C" unsigned long _UNK_00517630;
extern "C" unsigned long _UNK_00517654;
extern "C" unsigned long _UNK_00517658;
extern "C" unsigned long _UNK_005178b0;
extern "C" unsigned long _UNK_005178b4;
extern "C" unsigned long _UNK_005178b8;
extern "C" unsigned long _UNK_005178bc;
extern "C" unsigned long _UNK_005178c0;
extern "C" unsigned long _UNK_005178c4;
extern "C" unsigned long _UNK_005178c8;
extern "C" unsigned long _UNK_005178cc;
extern "C" unsigned long _UNK_005178d0;
extern "C" unsigned long _UNK_005178d4;
extern "C" unsigned long g_00517430;
extern "C" unsigned long g_00517458;
extern "C" unsigned long g_00517488;
extern "C" unsigned long g_0051748c;
extern "C" unsigned long g_0051749c;
extern "C" unsigned long g_005174a0;
extern "C" unsigned long g_005174c4;
extern "C" unsigned long g_005174c8;
extern "C" unsigned long g_00517516;
extern "C" unsigned long g_0051752e;
extern "C" unsigned long g_00517558;
extern "C" unsigned long g_00517564;
extern "C" unsigned long g_00517568;
extern "C" unsigned long g_0051756c;
extern "C" unsigned long g_0051757e;
extern "C" unsigned long g_005175ac;
extern "C" unsigned long g_005175dc;
extern "C" unsigned long g_005175e0;
extern "C" unsigned long g_0051762a;
extern "C" unsigned long g_00517630;
extern "C" unsigned long g_00517648;
extern "C" unsigned long g_0051764a;
extern "C" unsigned long g_00517654;
extern "C" unsigned long g_00517658;
extern "C" unsigned long g_00517676;
extern "C" unsigned long g_00517722;
extern "C" unsigned long g_00517728;
extern "C" unsigned long g_00517790;
extern "C" unsigned long g_00517792;
extern "C" unsigned long g_005177c0;
extern "C" unsigned long g_00517854;
extern "C" unsigned long g_005178b0;
extern "C" unsigned long g_005178b4;
extern "C" unsigned long g_005178b8;
extern "C" unsigned long g_005178bc;
extern "C" unsigned long g_005178c0;
extern "C" unsigned long g_005178c4;
extern "C" unsigned long g_005178c8;
extern "C" unsigned long g_005178cc;
extern "C" unsigned long g_005178d0;
extern "C" unsigned long g_005178d4;
EquipData* BLChestRewardItemPresenter::getEquipData() const
{
  return (EquipData*)(*(undefined4 *)(((int)this) + 0x1c));
}

bool BLChestRewardItemPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLChestRewardItemPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLChestRewardItemPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLChestRewardItemPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLChestRewardItemPresenter::tick(float p1)
{
  return;
}

BLChestRewardItemPresenter::~BLChestRewardItemPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_00517430 + g_00517488);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x44;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  if (*(int *)((int)this + 4*(7)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(7)) = 0;
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00517458 + g_0051748c,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLChestRewardItemPresenter::setEquipData(EquipData* p1)
{
  if (*(int *)(((int)this) + 0x1c) != (int)(intptr_t)p1) {
    if ((int)(intptr_t)p1 != 0) {
      ((cocos2d::CCObject *)p1)->retain();
    }
    if (*(int *)(((int)this) + 0x1c) != 0) {
      ((cocos2d::CCObject *)this)->release();
    }
    *(int *)(((int)this) + 0x1c) = (undefined4)(intptr_t)p1;
  }
  return;
}

void BLChestRewardItemPresenter::onPlayAction(cocos2d::CCObject* p1)
{
  (**(code **)(**(int **)(((int)this) + 0x18) + 0x30))(*(int **)(((int)this) + 0x18),0);
  ((cocos2d::CCNode *)*(undefined4 *)(((int)this) + 0x18))->stopAllActions();
  return;
}


BLChestRewardItemPresenter::BLChestRewardItemPresenter()
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
  iVar3 = *(int *)(&g_0051757e + g_005175dc);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x44;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 0);
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005175ac + g_005175e0,&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  *(int *)((int)this + 4*(7)) = 0;
  return;
}

undefined4 BLChestRewardItemPresenter::create(BLChestRewardItemView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x20))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLChestRewardItemPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar2)->removeObserver((cocos2d::CCObject*)((int)this), (char const*)&g_0051762a + g_00517630);
  return;
}

// ===== 修复: 补回被误删的函数占位 (4) =====
void BLChestRewardItemPresenter::onActionEnd()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;

  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  int iStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  iStack_18 = (undefined4)(intptr_t)((int *)((int)this));
  uStack_14 = (undefined4)(p2);
  uStack_10 = (undefined4)(p3);
  func_0079e45c(&uStack_14,(unsigned char *)((char *)&g_00517516 + (intptr_t)(g_00517564)),&iStack_18);
  iVar1 = (undefined4)(intptr_t)((**(code **)(**(int **)(((int)this) + 0x1c) + 0x38))());
  if (iVar1 == 1) {
    puVar3 = (unsigned char *)((char *)&g_0051752e + (intptr_t)(g_00517568));
  }
  else {
    iVar1 = (undefined4)(intptr_t)((**(code **)(**(int **)(((int)this) + 0x1c) + 0x38))());
    if (iVar1 != 3) goto code_r0x00517530;
    puVar3 = (unsigned char *)((char *)&g_00517558 + (intptr_t)(g_0051756c));
  }
  func_0079e2dc(&uStack_14,puVar3);
code_r0x00517530:
  uVar2 = (undefined4)(((CocosDenshion::SimpleAudioEngine *)this)->sharedEngine());
  ((CocosDenshion::SimpleAudioEngine *)(uVar2))->playEffect((char const*)uStack_14, 0);
  func_0079e2bc(&uStack_14);
  return;
}

void BLChestRewardItemPresenter::onEnter()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLChestRewardItemPresenter::initWithView(BLChestRewardItemView* p1)
{
  *(undefined4 *)(((int)this) + 0x18) = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  return;
}

void BLChestRewardItemPresenter::initWith(EquipData* p1, int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
