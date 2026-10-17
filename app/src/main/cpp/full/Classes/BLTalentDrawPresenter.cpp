#include "BLTalentDrawPresenter.h"
#include "BLLeakUtils.h"
#include "BLTalentChestPresenter.h"
#include "BLTalentChestView.h"
#include "DataManager.h"
#include "TalentDrawData.h"
#include "TalentDrawList.h"
#include "UIManager.h"
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
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0053e4b8;
extern "C" unsigned long UNK_0053e4d0;
extern "C" unsigned long UNK_0053e4e8;
extern "C" unsigned long UNK_0053e55c;
extern "C" unsigned long UNK_0053e57c;
extern "C" unsigned long UNK_0053e5c0;
extern "C" unsigned long UNK_0053e5e8;
extern "C" unsigned long UNK_0053e5fe;
extern "C" unsigned long UNK_0053e632;
extern "C" unsigned long UNK_0053e69c;
extern "C" unsigned long UNK_0053e69e;
extern "C" unsigned long UNK_0053e6d2;
extern "C" unsigned long UNK_0053e950;
extern "C" unsigned long UNK_0053e992;
extern "C" unsigned long UNK_0053e9b6;
extern "C" unsigned long UNK_0053e9d0;
extern "C" unsigned long UNK_0053e9f4;
extern "C" unsigned long UNK_0053ea4c;
extern "C" unsigned long UNK_0053eb20;
extern "C" unsigned long UNK_0053eb3a;
extern "C" unsigned long UNK_0053eb3c;
extern "C" unsigned long UNK_0053eb56;
extern "C" unsigned long UNK_0053eb58;
extern "C" unsigned long UNK_0053ec88;
extern "C" unsigned long _UNK_0053e4bc;
extern "C" unsigned long _UNK_0053e4d4;
extern "C" unsigned long _UNK_0053e4ec;
extern "C" unsigned long _UNK_0053e5ac;
extern "C" unsigned long _UNK_0053e5b0;
extern "C" unsigned long _UNK_0053e5c4;
extern "C" unsigned long _UNK_0053e5ec;
extern "C" unsigned long _UNK_0053e65c;
extern "C" unsigned long _UNK_0053e660;
extern "C" unsigned long _UNK_0053e6a8;
extern "C" unsigned long _UNK_0053e6ac;
extern "C" unsigned long _UNK_0053e6e0;
extern "C" unsigned long _UNK_0053ea14;
extern "C" unsigned long _UNK_0053ea18;
extern "C" unsigned long _UNK_0053ea1c;
extern "C" unsigned long _UNK_0053ea20;
extern "C" unsigned long _UNK_0053ea24;
extern "C" unsigned long _UNK_0053eacc;
extern "C" unsigned long _UNK_0053eb94;
extern "C" unsigned long _UNK_0053eb98;
extern "C" unsigned long _UNK_0053eb9c;
extern "C" unsigned long _UNK_0053eba0;
extern "C" unsigned long _UNK_0053eba4;
extern "C" unsigned long _UNK_0053ec8c;
extern "C" unsigned long g_0053e4b8;
extern "C" unsigned long g_0053e4bc;
extern "C" unsigned long g_0053e4d0;
extern "C" unsigned long g_0053e4d4;
extern "C" unsigned long g_0053e4e8;
extern "C" unsigned long g_0053e4ec;
extern "C" unsigned long g_0053e55c;
extern "C" unsigned long g_0053e57c;
extern "C" unsigned long g_0053e5ac;
extern "C" unsigned long g_0053e5b0;
extern "C" unsigned long g_0053e5c0;
extern "C" unsigned long g_0053e5c4;
extern "C" unsigned long g_0053e5e8;
extern "C" unsigned long g_0053e5ec;
extern "C" unsigned long g_0053e5fe;
extern "C" unsigned long g_0053e632;
extern "C" unsigned long g_0053e65c;
extern "C" unsigned long g_0053e660;
extern "C" unsigned long g_0053e69c;
extern "C" unsigned long g_0053e69e;
extern "C" unsigned long g_0053e6a8;
extern "C" unsigned long g_0053e6ac;
extern "C" unsigned long g_0053e6d2;
extern "C" unsigned long g_0053e6e0;
extern "C" unsigned long g_0053e950;
extern "C" unsigned long g_0053e992;
extern "C" unsigned long g_0053e9b6;
extern "C" unsigned long g_0053e9d0;
extern "C" unsigned long g_0053e9f4;
extern "C" unsigned long g_0053ea14;
extern "C" unsigned long g_0053ea18;
extern "C" unsigned long g_0053ea1c;
extern "C" unsigned long g_0053ea20;
extern "C" unsigned long g_0053ea24;
extern "C" unsigned long g_0053ea4c;
extern "C" unsigned long g_0053eacc;
extern "C" unsigned long g_0053eb20;
extern "C" unsigned long g_0053eb3a;
extern "C" unsigned long g_0053eb3c;
extern "C" unsigned long g_0053eb56;
extern "C" unsigned long g_0053eb58;
extern "C" unsigned long g_0053eb94;
extern "C" unsigned long g_0053eb98;
extern "C" unsigned long g_0053eb9c;
extern "C" unsigned long g_0053eba0;
extern "C" unsigned long g_0053eba4;
extern "C" unsigned long g_0053ec88;
extern "C" unsigned long g_0053ec8c;
bool BLTalentDrawPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLTalentDrawPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLTalentDrawPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLTalentDrawPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLTalentDrawPresenter::tick(float p1)
{
  return;
}

BLTalentDrawPresenter::~BLTalentDrawPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0053e55c + g_0053e5ac);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x40;
  *(int *)((int)this + 4*(6)) = iVar2 + 0x70;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0053e57c + g_0053e5b0,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLTalentDrawPresenter::BLTalentDrawPresenter()
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
  iVar3 = *(int *)(&g_0053e5fe + g_0053e65c);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x40;
  *(int *)((int)this + 4*(6)) = iVar3 + 0x70;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 1);
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0053e632 + g_0053e660,&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

undefined4 BLTalentDrawPresenter::create(BLTalentDrawView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x20))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}


void BLTalentDrawPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar2)->removeObserver((cocos2d::CCObject*)((int)this), (char const*)&g_0053e6d2 + g_0053e6e0);
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar2)->removeAllObservers((cocos2d::CCObject*)((int)this));
  return;
}

void BLTalentDrawPresenter::hideinfo()
{
  int *piVar1;
  
  piVar1 = *(int **)(*(int *)(((int)this) + 0x1c) + 0x110);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x90))(piVar1,0);
  }
  piVar1 = *(int **)(*(int *)(((int)this) + 0x1c) + 0x114);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x90))(piVar1,0);
  }
  piVar1 = *(int **)(*(int *)(((int)this) + 0x1c) + 0x118);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x90))(piVar1,0);
  }
  piVar1 = *(int **)(*(int *)(((int)this) + 0x1c) + 0x11c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x90))(piVar1,0);
  }
  piVar1 = *(int **)(*(int *)(((int)this) + 0x1c) + 0x124);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x90))(piVar1,0);
  }
  piVar1 = *(int **)(*(int *)(((int)this) + 0x1c) + 0x120);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x90))(piVar1,0);
  }
  piVar1 = *(int **)(*(int *)(((int)this) + 0x1c) + 0x128);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x90))(piVar1,1);
  }
  return;
}

// ===== 修复: 补回被误删的函数占位 (6) =====
void BLTalentDrawPresenter::onEnter()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLTalentDrawPresenter::initinfo(TalentDrawList p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

undefined4 BLTalentDrawPresenter::initWithView(BLTalentDrawView* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void BLTalentDrawPresenter::onDraw(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLTalentDrawPresenter::onTalentUpdate()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLTalentDrawPresenter::onUpdateNum(TalentDrawData* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
