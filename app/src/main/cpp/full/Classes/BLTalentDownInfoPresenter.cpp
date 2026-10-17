#include "BLTalentDownInfoPresenter.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "CCObject.h"
#include "CCTouch.h"
#include "CCDirector.h"
#include "BLLeakUtils.h"
#include "BLTalentDownInfoItemPresenter.h"
#include "BLTalentDownInfoItemView.h"
#include "BLTalentDownInfoView.h"
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
extern "C" long long func_0079e45c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0069e9ac;
extern "C" unsigned long UNK_0069e9c6;
extern "C" unsigned long UNK_0069ea0c;
extern "C" unsigned long UNK_0069ea34;
extern "C" unsigned long UNK_0069ecbe;
extern "C" unsigned long UNK_0069ecd6;
extern "C" unsigned long _UNK_0069e9f8;
extern "C" unsigned long _UNK_0069e9fc;
extern "C" unsigned long _UNK_0069ea10;
extern "C" unsigned long _UNK_0069ea38;
extern "C" unsigned long _UNK_0069ed00;
extern "C" unsigned long _UNK_0069ed04;
extern "C" unsigned long g_0069e9ac;
extern "C" unsigned long g_0069e9c6;
extern "C" unsigned long g_0069e9f8;
extern "C" unsigned long g_0069e9fc;
extern "C" unsigned long g_0069ea0c;
extern "C" unsigned long g_0069ea10;
extern "C" unsigned long g_0069ea34;
extern "C" unsigned long g_0069ea38;
extern "C" unsigned long g_0069ecbe;
extern "C" unsigned long g_0069ecd6;
extern "C" unsigned long g_0069ed00;
extern "C" unsigned long g_0069ed04;
bool BLTalentDownInfoPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLTalentDownInfoPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLTalentDownInfoPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

BLTalentDownInfoPresenter::~BLTalentDownInfoPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0069e9ac + g_0069e9f8);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x34;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0069e9c6 + g_0069e9fc,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLTalentDownInfoPresenter::BLTalentDownInfoPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_0069ecbe + g_0069ed00);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x34;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0069ecd6 + g_0069ed04,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

undefined4 BLTalentDownInfoPresenter::create()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x1c))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLTalentDownInfoPresenter::initWithView(BLTalentDownInfoView* p1)
{
  *(undefined4 *)(((int)this) + 0x18) = (undefined4)(intptr_t)p1;
  return;
}

void BLTalentDownInfoPresenter::onEnter()
{
  return;
}

void BLTalentDownInfoPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
void BLTalentDownInfoPresenter::initWithId(int p1)
{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_28 [4];
  int iStack_24;
  int iStack_20;
  
  uVar1 = (undefined4)(((DataCacheManager *)this)->shareManager());
  piVar2 = ((void)((DataCacheManager *)(uVar1))->getTalentDataById(p1),(int *)0);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*(int *)(piVar2) + (0x20)))(auStack_28);
    ((BLTalentDownInfoView *)this)->getInfoItemView();
    iVar3 = (undefined4)(intptr_t)(iStack_20 - iStack_24);
    for (iVar4 = 0; iVar4 != iVar3 >> 2; iVar4 = iVar4 + 1) {
      uVar1 = (undefined4)(((BLTalentDownInfoItemView *)(*(undefined4 *)(iVar4 * 4 + iStack_24)))->getPresenter());
      ((BLTalentDownInfoItemPresenter *)(uVar1))->initWithData(p1, iVar4 != 0);
    }
    if (iStack_24 != 0) {
      func_0079e2cc();
    }
    func_0079e2bc(auStack_28);
  }
  return;
}
