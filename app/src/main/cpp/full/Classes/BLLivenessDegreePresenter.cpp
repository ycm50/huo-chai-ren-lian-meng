#include "BLLivenessDegreePresenter.h"
#include "CCProgressTimer.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "CCObject.h"
#include "BLLivenessDegreeView.h"
#include "CCTouch.h"
#include "CCDirector.h"
#include "BLLeakUtils.h"
#include "BLLivenessDegreeRewardItemPresenter.h"
#include "DataCacheManager.h"
#include "DataManager.h"
#include "LivenessData.h"
#include "LivenessUserData.h"
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
extern "C" long long func_0079e2ec(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e43c(...);
extern "C" long long func_0079e44c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e46c(...);
extern "C" long long func_0079e47c(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long func_0079e4ec(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long func_0079e5bc(...);
extern "C" long long func_0079e68c(...);
extern "C" long long func_0079e7b4(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0057d6e0;
extern "C" unsigned long UNK_0057d6fa;
extern "C" unsigned long UNK_0057d740;
extern "C" unsigned long UNK_0057d768;
extern "C" unsigned long UNK_0057da96;
extern "C" unsigned long UNK_0057daae;
extern "C" unsigned long UNK_0057dbd4;
extern "C" unsigned long _UNK_0057d72c;
extern "C" unsigned long _UNK_0057d730;
extern "C" unsigned long _UNK_0057d744;
extern "C" unsigned long _UNK_0057d76c;
extern "C" unsigned long _UNK_0057daf0;
extern "C" unsigned long _UNK_0057daf4;
extern "C" unsigned long _UNK_0057dc18;
extern "C" unsigned long _UNK_0057dc1c;
extern "C" unsigned long _UNK_0057dc98;
extern "C" unsigned long _UNK_0057e0dc;
extern "C" unsigned long _UNK_0057e0e0;
extern "C" unsigned long g_0057d6e0;
extern "C" unsigned long g_0057d6fa;
extern "C" unsigned long g_0057d72c;
extern "C" unsigned long g_0057d730;
extern "C" unsigned long g_0057d740;
extern "C" unsigned long g_0057d744;
extern "C" unsigned long g_0057d768;
extern "C" unsigned long g_0057d76c;
extern "C" unsigned long g_0057da96;
extern "C" unsigned long g_0057daae;
extern "C" unsigned long g_0057daf0;
extern "C" unsigned long g_0057daf4;
extern "C" unsigned long g_0057dbd4;
extern "C" unsigned long g_0057dc18;
extern "C" unsigned long g_0057dc1c;
extern "C" unsigned long g_0057dc98;
extern "C" unsigned long g_0057e0dc;
extern "C" unsigned long g_0057e0e0;
bool BLLivenessDegreePresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

BLLivenessDegreePresenter::~BLLivenessDegreePresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0057d6e0 + g_0057d72c);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x2c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0057d6fa + g_0057d730,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLLivenessDegreePresenter::BLLivenessDegreePresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar3 = *(int *)(&g_0057da96 + g_0057daf0);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x2c;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0057daae + g_0057daf4,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  piVar2 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar1 = (undefined4)((**(code **)(*piVar2 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar1)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 0);
  return;
}

undefined4 BLLivenessDegreePresenter::create()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x1c))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLLivenessDegreePresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  return;
}

void BLLivenessDegreePresenter::updateProgress()
{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uStack_dc;
  undefined1 auStack_d8 [4];
  undefined1 auStack_d4 [8];
  undefined1 auStack_cc [4];
  undefined1 auStack_c8 [180];
  
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  piVar1 = (int *)(**(code **)(*piVar1 + 0x28))();
  iVar2 = (**(code **)(*piVar1 + 0x170))();
  uVar6 = (undefined4)(*(undefined4 *)(iVar2 + 0x24));
  piVar1 = (int *)((DataCacheManager *)this)->shareManager();
  iVar2 = (**(code **)(*piVar1 + 200))();
  uVar3 = (undefined4)(((long long)([](int _a){float _f;__builtin_memcpy(&_f,&_a,4);float _r=(float)(int)_a;int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar6)))));
  uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar3),(int)(g_0057dc18)))));
  uVar4 = (undefined4)(((long long)([](int _a){float _f;__builtin_memcpy(&_f,&_a,4);float _r=(float)(int)_a;int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(*(undefined4 *)(iVar2 + 0x24))))));
  uVar4 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar3),(int)(uVar4)))));
  iVar2 = ((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);return ((_x > _y)?1:0);}((int)(uVar4),(int)(g_0057dc18))));
  uVar3 = (undefined4)(g_0057dc18);
  if ((iVar2 == 0) && (iVar2 = ((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);return ((_x < _y)?1:0);}((int)(uVar4),(int)(0)))), uVar3 = uVar4, iVar2 != 0)) {
    uVar3 = (undefined4)(0);
  }
  ((cocos2d::CCProgressTimer *)*(undefined4 *)(*(int *)(((int)this) + 0x18) + 0x110))->setPercentage(uVar3);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x18) + 0x10c);
  pcVar5 = *(code **)(*piVar1 + 0x234);
  func_0079e43c(auStack_d4,0x18);
  func_0079e44c(auStack_cc,uVar6);
  func_0079e45c(auStack_d8,&g_0057dbd4 + g_0057dc1c,&uStack_dc);
  func_0079e46c(&uStack_dc,auStack_c8);
  func_0079e2bc(auStack_d8);
  func_0079e47c(auStack_d4);
  (*pcVar5)(piVar1,uStack_dc);
  func_0079e2bc(&uStack_dc);
  return;
}

void BLLivenessDegreePresenter::updateWithData()
{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  BLLivenessDegreePresenter::updateProgress();
  iVar3 = *(int *)(((int)this) + 0x18);
  uVar2 = (undefined4)(*(int *)(iVar3 + 0x118) - *(int *)(iVar3 + 0x114) >> 2);
  piVar1 = (int *)0x0;
  if (uVar2 != 0) {
    if (g_0057dc98 < uVar2) {
      func_0079e5bc();
    }
    piVar1 = (int *)func_0079e2fc();
  }
  iVar4 = *(int *)(iVar3 + 0x118) - *(int *)(iVar3 + 0x114);
  if (iVar4 >> 2 != 0) {
    (void)(((long long)::memmove((void *)(piVar1),(const void *)(*(int *)(iVar3 + 0x114)),(size_t)(iVar4))));
  }
  for (piVar5 = piVar1; piVar5 != (int *)((int)piVar1 + iVar4); piVar5 = piVar5 + 1) {
    if (*piVar5 != 0) {
      ((BLLivenessDegreeRewardItemPresenter *)*(undefined4 *)(*piVar5 + 0x108))->updateWithData();
    }
  }
  if (piVar1 != (int *)0x0) {
    (void)(::operator delete((void *)(piVar1)));
  }
  return;
}


void BLLivenessDegreePresenter::onEnter()
{
  BLLivenessDegreePresenter::initWithData();
  return;
}

// ===== 修复: 补回被误删的函数占位 (2) =====
void BLLivenessDegreePresenter::initWithView(BLLivenessDegreeView* p1)
{
  *(undefined4 *)(((int)this) + 0x18) = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  return;
}

void BLLivenessDegreePresenter::initWithData()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
