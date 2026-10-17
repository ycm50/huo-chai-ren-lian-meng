#include "BLItemDataPresenter.h"
#include "BLItemDataView.h"
#include "BLLeakUtils.h"
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
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_005f1a2c;
extern "C" unsigned long UNK_005f1a44;
extern "C" unsigned long UNK_005f1a5c;
extern "C" unsigned long UNK_005f1a74;
extern "C" unsigned long UNK_005f1ad0;
extern "C" unsigned long UNK_005f1aea;
extern "C" unsigned long UNK_005f1b30;
extern "C" unsigned long UNK_005f1b58;
extern "C" unsigned long UNK_005f1b6e;
extern "C" unsigned long UNK_005f1b9c;
extern "C" unsigned long _UNK_005f1a30;
extern "C" unsigned long _UNK_005f1a48;
extern "C" unsigned long _UNK_005f1a60;
extern "C" unsigned long _UNK_005f1a78;
extern "C" unsigned long _UNK_005f1b1c;
extern "C" unsigned long _UNK_005f1b20;
extern "C" unsigned long _UNK_005f1b34;
extern "C" unsigned long _UNK_005f1b5c;
extern "C" unsigned long _UNK_005f1bc8;
extern "C" unsigned long _UNK_005f1bcc;
extern "C" unsigned long _UNK_005f1c20;
extern "C" unsigned long g_005f1a2c;
extern "C" unsigned long g_005f1a30;
extern "C" unsigned long g_005f1a44;
extern "C" unsigned long g_005f1a48;
extern "C" unsigned long g_005f1a5c;
extern "C" unsigned long g_005f1a60;
extern "C" unsigned long g_005f1a74;
extern "C" unsigned long g_005f1a78;
extern "C" unsigned long g_005f1ad0;
extern "C" unsigned long g_005f1aea;
extern "C" unsigned long g_005f1b1c;
extern "C" unsigned long g_005f1b20;
extern "C" unsigned long g_005f1b30;
extern "C" unsigned long g_005f1b34;
extern "C" unsigned long g_005f1b58;
extern "C" unsigned long g_005f1b5c;
extern "C" unsigned long g_005f1b6e;
extern "C" unsigned long g_005f1b9c;
extern "C" unsigned long g_005f1bc8;
extern "C" unsigned long g_005f1bcc;
extern "C" unsigned long g_005f1c20;
bool BLItemDataPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLItemDataPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLItemDataPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLItemDataPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLItemDataPresenter::tick(float p1)
{
  return;
}

BLItemDataPresenter::~BLItemDataPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_005f1ad0 + g_005f1b1c);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x3c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005f1aea + g_005f1b20,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLItemDataPresenter::BLItemDataPresenter()
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
  iVar3 = *(int *)(&g_005f1b6e + g_005f1bc8);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x3c;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 0);
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005f1b9c + g_005f1bcc,&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

undefined4 BLItemDataPresenter::create(BLItemDataView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x1c))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLItemDataPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  return;
}

void BLItemDataPresenter::onEnter()
{
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
undefined4 BLItemDataPresenter::initWithView(BLItemDataView* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
