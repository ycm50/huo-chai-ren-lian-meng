#include "ChallengeMainView.h"
#include "BLLeakUtils.h"
#include "ChallengeMainPresenter.h"
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
extern "C" unsigned long UNK_0050e13c;
extern "C" unsigned long UNK_0050e194;
extern "C" unsigned long UNK_0050e1c6;
extern "C" unsigned long UNK_0050e20c;
extern "C" unsigned long UNK_0050e234;
extern "C" unsigned long _DAT_0050e2d4;
extern "C" unsigned long _DAT_0050e2d8;
extern "C" unsigned long _UNK_0050e140;
extern "C" unsigned long _UNK_0050e1f8;
extern "C" unsigned long _UNK_0050e1fc;
extern "C" unsigned long _UNK_0050e210;
extern "C" unsigned long _UNK_0050e238;
extern "C" unsigned long g_0050e13c;
extern "C" unsigned long g_0050e140;
extern "C" unsigned long g_0050e194;
extern "C" unsigned long g_0050e1c6;
extern "C" unsigned long g_0050e1f8;
extern "C" unsigned long g_0050e1fc;
extern "C" unsigned long g_0050e20c;
extern "C" unsigned long g_0050e210;
extern "C" unsigned long g_0050e234;
extern "C" unsigned long g_0050e238;
extern "C" unsigned long g_0050e2d4;
extern "C" unsigned long g_0050e2d8;
void ChallengeMainView::keyBackClicked()
{
  return;
}

ChallengeMainView::~ChallengeMainView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0050e194 + g_0050e1f8);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0050e1c6 + g_0050e1fc,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

ChallengeMainView::ChallengeMainView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(g_0050e2d4 + 0x50e27c);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"ChallengeMainView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * ChallengeMainView::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x168)));
  0 /* ctorZero */;
  iVar2 = (**(code **)(*piVar1 + 0x18))(piVar1);
  if (iVar2 == 0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    piVar1 = (int *)0x0;
  }
  else {
    ((cocos2d::CCObject *)piVar1)->autorelease();
  }
  return (int *)(piVar1);
}

undefined4 ChallengeMainView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x108);
}

void ChallengeMainView::onEnter()
{
  ((ChallengeMainPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void ChallengeMainView::onExit()
{
  undefined4 uVar1;
  
  ((ChallengeMainPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar1)->removeAllObservers((cocos2d::CCObject*)((int)this));
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}
