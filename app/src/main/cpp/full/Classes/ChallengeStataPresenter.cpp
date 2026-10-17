#include "ChallengeStataPresenter.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "CCObject.h"
#include "ChallengeStataView.h"
#include "CCTouch.h"
#include "CCDirector.h"
#include "BLLeakUtils.h"
#include "ChallengeBoxPresenter.h"
#include "ChallengeBoxView.h"
#include "ChallengeHttpUtil.h"
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
extern "C" long long func_0079e48c(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long func_0079e6ac(...);
extern "C" long long func_0079e6d0(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_00509d38;
extern "C" unsigned long UNK_00509d90;
extern "C" unsigned long UNK_00509daa;
extern "C" unsigned long UNK_00509df0;
extern "C" unsigned long UNK_00509e18;
extern "C" unsigned long UNK_00509e2e;
extern "C" unsigned long UNK_00509e5c;
extern "C" unsigned long UNK_00509f1a;
extern "C" unsigned long UNK_0050a274;
extern "C" unsigned long UNK_0050a338;
extern "C" unsigned long UNK_0050a374;
extern "C" unsigned long UNK_0050a3b0;
extern "C" unsigned long UNK_0050a520;
extern "C" unsigned long UNK_0050a53e;
extern "C" unsigned long UNK_0050a56a;
extern "C" unsigned long UNK_0050a588;
extern "C" unsigned long UNK_0050a5b0;
extern "C" unsigned long UNK_0050a5ce;
extern "C" unsigned long UNK_0050a5e8;
extern "C" unsigned long UNK_0050a606;
extern "C" unsigned long UNK_0050a6a6;
extern "C" unsigned long UNK_0050a6c4;
extern "C" unsigned long UNK_0050a740;
extern "C" unsigned long UNK_0050a75e;
extern "C" unsigned long UNK_0050a786;
extern "C" unsigned long UNK_0050a7a4;
extern "C" unsigned long UNK_0050a7be;
extern "C" unsigned long UNK_0050a7dc;
extern "C" unsigned long UNK_0050a87c;
extern "C" unsigned long UNK_0050a89a;
extern "C" unsigned long UNK_0050a8c6;
extern "C" unsigned long UNK_0050a8e4;
extern "C" unsigned long UNK_0050a90c;
extern "C" unsigned long UNK_0050a92a;
extern "C" unsigned long UNK_0050a944;
extern "C" unsigned long UNK_0050a962;
extern "C" unsigned long _UNK_00509d3c;
extern "C" unsigned long _UNK_00509ddc;
extern "C" unsigned long _UNK_00509de0;
extern "C" unsigned long _UNK_00509df4;
extern "C" unsigned long _UNK_00509e1c;
extern "C" unsigned long _UNK_00509e8c;
extern "C" unsigned long _UNK_00509e90;
extern "C" unsigned long _UNK_0050a204;
extern "C" unsigned long _UNK_0050a2fc;
extern "C" unsigned long _UNK_0050a6d8;
extern "C" unsigned long _UNK_0050a6dc;
extern "C" unsigned long _UNK_0050a6e0;
extern "C" unsigned long _UNK_0050a6e4;
extern "C" unsigned long _UNK_0050a6e8;
extern "C" unsigned long _UNK_0050a6ec;
extern "C" unsigned long _UNK_0050a6f0;
extern "C" unsigned long _UNK_0050a6f4;
extern "C" unsigned long _UNK_0050a6f8;
extern "C" unsigned long _UNK_0050a6fc;
extern "C" unsigned long _UNK_0050a700;
extern "C" unsigned long _UNK_0050a704;
extern "C" unsigned long _UNK_0050a708;
extern "C" unsigned long _UNK_0050a70c;
extern "C" unsigned long _UNK_0050a710;
extern "C" unsigned long _UNK_0050a714;
extern "C" unsigned long _UNK_0050a718;
extern "C" unsigned long _UNK_0050a71c;
extern "C" unsigned long _UNK_0050a720;
extern "C" unsigned long _UNK_0050a724;
extern "C" unsigned long _UNK_0050a984;
extern "C" unsigned long _UNK_0050a988;
extern "C" unsigned long _UNK_0050a98c;
extern "C" unsigned long _UNK_0050a990;
extern "C" unsigned long _UNK_0050a994;
extern "C" unsigned long _UNK_0050a998;
extern "C" unsigned long _UNK_0050a99c;
extern "C" unsigned long _UNK_0050a9a0;
extern "C" unsigned long _UNK_0050a9a4;
extern "C" unsigned long _UNK_0050a9a8;
extern "C" unsigned long _UNK_0050a9ac;
extern "C" unsigned long _UNK_0050a9b0;
extern "C" unsigned long _UNK_0050a9b4;
extern "C" unsigned long _UNK_0050a9b8;
extern "C" unsigned long extraout_r1;
extern "C" unsigned long g_00509d38;
extern "C" unsigned long g_00509d3c;
extern "C" unsigned long g_00509d90;
extern "C" unsigned long g_00509daa;
extern "C" unsigned long g_00509ddc;
extern "C" unsigned long g_00509de0;
extern "C" unsigned long g_00509df0;
extern "C" unsigned long g_00509df4;
extern "C" unsigned long g_00509e18;
extern "C" unsigned long g_00509e1c;
extern "C" unsigned long g_00509e2e;
extern "C" unsigned long g_00509e5c;
extern "C" unsigned long g_00509e8c;
extern "C" unsigned long g_00509e90;
extern "C" unsigned long g_00509f1a;
extern "C" unsigned long g_0050a204;
extern "C" unsigned long g_0050a274;
extern "C" unsigned long g_0050a2fc;
extern "C" unsigned long g_0050a338;
extern "C" unsigned long g_0050a374;
extern "C" unsigned long g_0050a3b0;
extern "C" unsigned long g_0050a520;
extern "C" unsigned long g_0050a53e;
extern "C" unsigned long g_0050a56a;
extern "C" unsigned long g_0050a588;
extern "C" unsigned long g_0050a5b0;
extern "C" unsigned long g_0050a5ce;
extern "C" unsigned long g_0050a5e8;
extern "C" unsigned long g_0050a606;
extern "C" unsigned long g_0050a6a6;
extern "C" unsigned long g_0050a6c4;
extern "C" unsigned long g_0050a6d8;
extern "C" unsigned long g_0050a6dc;
extern "C" unsigned long g_0050a6e0;
extern "C" unsigned long g_0050a6e4;
extern "C" unsigned long g_0050a6e8;
extern "C" unsigned long g_0050a6ec;
extern "C" unsigned long g_0050a6f0;
extern "C" unsigned long g_0050a6f4;
extern "C" unsigned long g_0050a6f8;
extern "C" unsigned long g_0050a6fc;
extern "C" unsigned long g_0050a700;
extern "C" unsigned long g_0050a704;
extern "C" unsigned long g_0050a708;
extern "C" unsigned long g_0050a70c;
extern "C" unsigned long g_0050a710;
extern "C" unsigned long g_0050a714;
extern "C" unsigned long g_0050a718;
extern "C" unsigned long g_0050a71c;
extern "C" unsigned long g_0050a720;
extern "C" unsigned long g_0050a724;
extern "C" unsigned long g_0050a740;
extern "C" unsigned long g_0050a75e;
extern "C" unsigned long g_0050a786;
extern "C" unsigned long g_0050a7a4;
extern "C" unsigned long g_0050a7be;
extern "C" unsigned long g_0050a7dc;
extern "C" unsigned long g_0050a87c;
extern "C" unsigned long g_0050a89a;
extern "C" unsigned long g_0050a8c6;
extern "C" unsigned long g_0050a8e4;
extern "C" unsigned long g_0050a90c;
extern "C" unsigned long g_0050a92a;
extern "C" unsigned long g_0050a944;
extern "C" unsigned long g_0050a962;
extern "C" unsigned long g_0050a984;
extern "C" unsigned long g_0050a988;
extern "C" unsigned long g_0050a98c;
extern "C" unsigned long g_0050a990;
extern "C" unsigned long g_0050a994;
extern "C" unsigned long g_0050a998;
extern "C" unsigned long g_0050a99c;
extern "C" unsigned long g_0050a9a0;
extern "C" unsigned long g_0050a9a4;
extern "C" unsigned long g_0050a9a8;
extern "C" unsigned long g_0050a9ac;
extern "C" unsigned long g_0050a9b0;
extern "C" unsigned long g_0050a9b4;
extern "C" unsigned long g_0050a9b8;
void ChallengeStataPresenter::tick(float p1)
{
  return;
}

bool ChallengeStataPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

ChallengeStataPresenter::~ChallengeStataPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_00509d90 + g_00509ddc);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x30;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00509daa + g_00509de0,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

ChallengeStataPresenter::ChallengeStataPresenter()
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
  iVar3 = *(int *)(&g_00509e2e + g_00509e8c);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x30;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 1);
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00509e5c + g_00509e90,&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  *(int *)((int)this + 4*(7)) = 0;
  return;
}

void ChallengeStataPresenter::onEnter()
{
  return;
}

void ChallengeStataPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  return;
}

undefined4 ChallengeStataPresenter::create(ChallengeStataView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x20))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}


void ChallengeStataPresenter::updateWinNum(int p1)
{
  undefined4 p3 = 0;

  int *piVar1;
  undefined4 uVar2;
  int extraout_r1;
  int iVar3;
  code *pcVar4;
  undefined4 *puVar5;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [8];
  
  if (p1 < 0xd) {
    puVar5 = *(undefined4 **)(*(int *)(((int)this) + 0x18) + 0x10c);
    func_0079e6ac(p1,p1,p3,*puVar5);
    iVar3 = extraout_r1 * 2;
    pcVar4 = *(code **)((int)auStack_1c * 2 + 0x1d8);
    func_0079e45c(iVar3,&g_00509f1a + g_0050a204,auStack_20);
    piVar1 = (int *)0 /* ctorZero */;
    uVar2 = (undefined4)((**(code **)(*piVar1 + 0x214))());
    (*pcVar4)((int)puVar5 * 2,uVar2);
    func_0079e2bc(iVar3);
    piVar1 = *(int **)(*(int *)((int)auStack_1c * 0x20 + 0x18) + 0x110);
    (**(code **)(*piVar1 + 0x90))(piVar1,0);
  }
  return;
}

// ===== 修复: 补回被误删的函数占位 (3) =====
void ChallengeStataPresenter::initWithView(ChallengeStataView* p1)
{
  *(undefined4 *)(((int)this) + 0x18) = (undefined4)(intptr_t)p1;
  return;
}

void ChallengeStataPresenter::updateFailNum(int p1)
{
  undefined4 p3 = 0;

  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  code *pcVar5;
  int iStack_20;
  uint uStack_1c;
  undefined4 uStack_18;
  
  iStack_20 = (undefined4)(intptr_t)((int *)((int)this));
  uStack_1c = (undefined4)(p1);
  if (p1 < 4) {
    piVar4 = *(int **)(*(int *)(((int)this) + 0x18) + 0x114);
    pcVar5 = *(code **)(*piVar4 + 0x1d8);
    uStack_18 = (undefined4)(p3);
    iVar1 = (undefined4)(intptr_t)(func_0079e6d0(p1,0x1d8,&iStack_20));
    func_0079e45c(&uStack_1c,(unsigned char *)((char *)&g_0050a274 + (intptr_t)(g_0050a2fc)),iVar1 >> 4);
    piVar2 = (int *)0 /* ctorZero */;
    uVar3 = (undefined4)((**(code **)(*(int *)(piVar2) + (0x214)))());
    (*pcVar5)(piVar4,uVar3);
    func_0079e2bc(&uStack_1c);
  }
  return;
}

void ChallengeStataPresenter::initBoxWithType(int p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
