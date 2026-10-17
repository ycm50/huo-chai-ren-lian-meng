#include "ChallengeBoxPresenter.h"
#include "ChallengeBoxView.h"
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
extern "C" long long func_0079e6d0(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_00506310;
extern "C" unsigned long UNK_0050636c;
extern "C" unsigned long UNK_00506386;
extern "C" unsigned long UNK_005063cc;
extern "C" unsigned long UNK_005063f4;
extern "C" unsigned long UNK_0050640a;
extern "C" unsigned long UNK_00506422;
extern "C" unsigned long UNK_005064b6;
extern "C" unsigned long UNK_005064ee;
extern "C" unsigned long UNK_0050655e;
extern "C" unsigned long _UNK_00506314;
extern "C" unsigned long _UNK_005063b8;
extern "C" unsigned long _UNK_005063bc;
extern "C" unsigned long _UNK_005063d0;
extern "C" unsigned long _UNK_005063f8;
extern "C" unsigned long _UNK_00506450;
extern "C" unsigned long _UNK_00506454;
extern "C" unsigned long _UNK_005064c0;
extern "C" unsigned long _UNK_005065e8;
extern "C" unsigned long _UNK_005065fc;
extern "C" unsigned long extraout_r2;
extern "C" unsigned long extraout_r2_00;
extern "C" unsigned long g_00506310;
extern "C" unsigned long g_00506314;
extern "C" unsigned long g_0050636c;
extern "C" unsigned long g_00506386;
extern "C" unsigned long g_005063b8;
extern "C" unsigned long g_005063bc;
extern "C" unsigned long g_005063cc;
extern "C" unsigned long g_005063d0;
extern "C" unsigned long g_005063f4;
extern "C" unsigned long g_005063f8;
extern "C" unsigned long g_0050640a;
extern "C" unsigned long g_00506422;
extern "C" unsigned long g_00506450;
extern "C" unsigned long g_00506454;
extern "C" unsigned long g_005064b6;
extern "C" unsigned long g_005064c0;
extern "C" unsigned long g_005064ee;
extern "C" unsigned long g_0050655e;
extern "C" unsigned long g_005065e8;
extern "C" unsigned long g_005065fc;
void ChallengeBoxPresenter::tick(float p1)
{
  return;
}

bool ChallengeBoxPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void ChallengeBoxPresenter::onBoxClick(cocos2d::CCObject* p1, unsigned int p2)
{
  return;
}

ChallengeBoxPresenter::~ChallengeBoxPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0050636c + g_005063b8);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x30;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00506386 + g_005063bc,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

ChallengeBoxPresenter::ChallengeBoxPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_0050640a + g_00506450);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x30;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00506422 + g_00506454,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  *(int *)((int)this + 4*(7)) = 0;
  return;
}

void ChallengeBoxPresenter::onEnter()
{
  return;
}

void ChallengeBoxPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  return;
}

undefined4 ChallengeBoxPresenter::create(ChallengeBoxView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x20))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}


undefined8 ChallengeBoxPresenter::initWithIndex(int p1, bool p2)
{
  undefined4 uVar1;
  int *piVar2;
  int extraout_r2;
  int extraout_r2_00;
  int iVar3;
  undefined4 uStack_20;
  uint uStack_1c;
  int iStack_18;
  
  uStack_20 = (undefined4)((int *)((int)this));
  uStack_1c = (undefined4)(p1);
  iStack_18 = p2;
  if (p2 == 0) {
    if (4 < p1) goto code_r0x005065e4;
    func_0079e6d0(p1,p1,&uStack_20);
    func_0079e45c(&uStack_1c,&g_0050655e + g_005065fc);
    uVar1 = (undefined4)(0 /* ctorZero */);
    iVar3 = extraout_r2_00;
  }
  else {
    if (4 < p1) goto code_r0x005065e4;
    func_0079e6d0(p1,p1,&uStack_20);
    func_0079e45c(&uStack_1c,&g_005064ee + g_005065e8);
    uVar1 = (undefined4)(0 /* ctorZero */);
    iVar3 = extraout_r2;
  }
  func_0079e2bc(&uStack_1c);
  piVar2 = *(int **)(*(int *)(iVar3 + 0x18) + 0x10c);
  (**(code **)(*piVar2 + 0x30c))(piVar2,uVar1,1);
code_r0x005065e4:
  return ghidra_CONCAT44(uStack_1c,uStack_20);
}

void ChallengeBoxPresenter::updateLable(char const* p1)
{
  (**(code **)(**(int **)(*(int *)(((int)this) + 0x18) + 0x114) + 0x234))();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
undefined4 ChallengeBoxPresenter::initWithView(ChallengeBoxView* p1)
{
  *(int *)(((int)this) + 0x18) = (undefined4)(intptr_t)p1;
  (**(code **)(**(int **)(p1 + 0x10c) + 0x254))
            (*(int **)(p1 + 0x10c),((int)this),*(undefined4 *)((unsigned char *)((char *)&g_005064b6 + (intptr_t)(g_005064c0))),0,
             0x20);
  return 1;
}
