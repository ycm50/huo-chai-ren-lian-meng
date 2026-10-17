#include "BLMineMenuPresenter.h"
#include "BLLeakUtils.h"
#include "BLMineMenuView.h"
#include "BLVirtualItemPresenter.h"
#include "BLVirtualItemView.h"
#include "DataManager.h"
#include "UIManager.h"
#include "UserData.h"
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
extern "C" long long func_0079e53c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_005a02f0;
extern "C" unsigned long UNK_005a0348;
extern "C" unsigned long UNK_005a0362;
extern "C" unsigned long UNK_005a03a8;
extern "C" unsigned long UNK_005a03d0;
extern "C" unsigned long UNK_005a04be;
extern "C" unsigned long UNK_005a04ec;
extern "C" unsigned long UNK_005a0562;
extern "C" unsigned long UNK_005a0582;
extern "C" unsigned long UNK_005a05ac;
extern "C" unsigned long UNK_005a05ae;
extern "C" unsigned long _UNK_005a02f4;
extern "C" unsigned long _UNK_005a0394;
extern "C" unsigned long _UNK_005a0398;
extern "C" unsigned long _UNK_005a03ac;
extern "C" unsigned long _UNK_005a03d4;
extern "C" unsigned long _UNK_005a03f8;
extern "C" unsigned long _UNK_005a0518;
extern "C" unsigned long _UNK_005a051c;
extern "C" unsigned long _UNK_005a0590;
extern "C" unsigned long _UNK_005a0594;
extern "C" unsigned long _UNK_005a05b8;
extern "C" unsigned long _UNK_005a05bc;
extern "C" unsigned long g_005a02f0;
extern "C" unsigned long g_005a02f4;
extern "C" unsigned long g_005a0348;
extern "C" unsigned long g_005a0362;
extern "C" unsigned long g_005a0394;
extern "C" unsigned long g_005a0398;
extern "C" unsigned long g_005a03a8;
extern "C" unsigned long g_005a03ac;
extern "C" unsigned long g_005a03d0;
extern "C" unsigned long g_005a03d4;
extern "C" unsigned long g_005a03f8;
extern "C" unsigned long g_005a04be;
extern "C" unsigned long g_005a04ec;
extern "C" unsigned long g_005a0518;
extern "C" unsigned long g_005a051c;
extern "C" unsigned long g_005a0562;
extern "C" unsigned long g_005a0582;
extern "C" unsigned long g_005a0590;
extern "C" unsigned long g_005a0594;
extern "C" unsigned long g_005a05ac;
extern "C" unsigned long g_005a05ae;
extern "C" unsigned long g_005a05b8;
extern "C" unsigned long g_005a05bc;
bool BLMineMenuPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

BLMineMenuPresenter::~BLMineMenuPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_005a0348 + g_005a0394);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x2c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005a0362 + g_005a0398,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLMineMenuPresenter::onClose(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(0xb1);
  return;
}

void BLMineMenuPresenter::onAbout(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->showUIById(g_005a03f8);
  return;
}


BLMineMenuPresenter::BLMineMenuPresenter()
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
  iVar3 = *(int *)(&g_005a04be + g_005a0518);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x2c;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 0);
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005a04ec + g_005a051c,&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

undefined4 BLMineMenuPresenter::create()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x1c))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLMineMenuPresenter::initWithView(BLMineMenuView* p1)
{
  int *piVar1;
  
  *(undefined4 *)(((int)this) + 0x18) = (undefined4)(intptr_t)p1;
  piVar1 = (int *)((BLMineMenuView *)p1)->getBtnClose();
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)(&g_005a0562 + g_005a0590),0,0x20);
  piVar1 = (int *)((BLMineMenuView *)*(undefined4 *)(((int)this) + 0x18))->getBtnAbout();
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)(&g_005a0582 + g_005a0594),0,0x20);
  return;
}


void BLMineMenuPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar2)->removeAllObservers((cocos2d::CCObject*)((int)this));
  return;
}

void BLMineMenuPresenter::initWithData()
{
  return;
}

// ===== 修复: 补回被误删的函数占位 (2) =====
void BLMineMenuPresenter::updateVirtualData(cocos2d::CCObject* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMineMenuPresenter::onEnter()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
