#include "BLPracticeBuyLocPresenter.h"
#include "BLLeakUtils.h"
#include "DataManager.h"
#include "PracDataItem.h"
#include "PracticeData.h"
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
extern "C" long long func_0079e31c(...);
extern "C" long long func_0079e34c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e6c0(...);
extern "C" long long func_0079e734(...);
extern "C" long long func_0079e784(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_00636b84;
extern "C" unsigned long UNK_00636b9e;
extern "C" unsigned long UNK_00636be4;
extern "C" unsigned long UNK_00636c0c;
extern "C" unsigned long UNK_00636c32;
extern "C" unsigned long UNK_00636c68;
extern "C" unsigned long UNK_00636da2;
extern "C" unsigned long UNK_00636dc2;
extern "C" unsigned long UNK_00636ed2;
extern "C" unsigned long UNK_00636ffc;
extern "C" unsigned long UNK_00637032;
extern "C" unsigned long _UNK_00636bd0;
extern "C" unsigned long _UNK_00636bd4;
extern "C" unsigned long _UNK_00636be8;
extern "C" unsigned long _UNK_00636c10;
extern "C" unsigned long _UNK_00636c94;
extern "C" unsigned long _UNK_00636c98;
extern "C" unsigned long _UNK_00636f00;
extern "C" unsigned long _UNK_00636f04;
extern "C" unsigned long _UNK_00636f08;
extern "C" unsigned long _UNK_0063706c;
extern "C" unsigned long _UNK_00637070;
extern "C" unsigned long extraout_r3;
extern "C" unsigned long g_00636b84;
extern "C" unsigned long g_00636b9e;
extern "C" unsigned long g_00636bd0;
extern "C" unsigned long g_00636bd4;
extern "C" unsigned long g_00636be4;
extern "C" unsigned long g_00636be8;
extern "C" unsigned long g_00636c0c;
extern "C" unsigned long g_00636c10;
extern "C" unsigned long g_00636c32;
extern "C" unsigned long g_00636c68;
extern "C" unsigned long g_00636c94;
extern "C" unsigned long g_00636c98;
extern "C" unsigned long g_00636da2;
extern "C" unsigned long g_00636dc2;
extern "C" unsigned long g_00636ed2;
extern "C" unsigned long g_00636f00;
extern "C" unsigned long g_00636f04;
extern "C" unsigned long g_00636f08;
extern "C" unsigned long g_00636ffc;
extern "C" unsigned long g_00637032;
extern "C" unsigned long g_0063706c;
extern "C" unsigned long g_00637070;
bool BLPracticeBuyLocPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLPracticeBuyLocPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLPracticeBuyLocPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLPracticeBuyLocPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLPracticeBuyLocPresenter::tick(float p1)
{
  return;
}

BLPracticeBuyLocPresenter::~BLPracticeBuyLocPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_00636b84 + g_00636bd0);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x3c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00636b9e + g_00636bd4,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLPracticeBuyLocPresenter::onClose(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(0xe9);
  return;
}

BLPracticeBuyLocPresenter::BLPracticeBuyLocPresenter()
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
  iVar3 = *(int *)(&g_00636c32 + g_00636c94);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x3c;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 1);
  ((UIManager *)this)->shareManager();
  ((UIManager *)this)->pushCurScrollViewUnEnable();
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00636c68 + g_00636c98,&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

void BLPracticeBuyLocPresenter::onEnter()
{
  return;
}

void BLPracticeBuyLocPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  ((UIManager *)this)->shareManager();
  ((UIManager *)this)->popUnEnableScrollView();
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  return;
}

undefined4 BLPracticeBuyLocPresenter::create(BLPracticeBuyLocView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x20))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

// ===== 修复: 补回被误删的函数占位 (2) =====
void BLPracticeBuyLocPresenter::initWithView(BLPracticeBuyLocView* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLPracticeBuyLocPresenter::onBtnOK(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
