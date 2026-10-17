#include "BLProgressBar.h"
#include "CCLayer.h"
#include "CCObject.h"
#include "CCScale9Sprite.h"
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
extern "C" long long func_0079e4dc(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_00521a44;
extern "C" unsigned long UNK_00521a56;
extern "C" unsigned long UNK_00521a86;
extern "C" unsigned long UNK_00521acc;
extern "C" unsigned long _DAT_00521b58;
extern "C" unsigned long _DAT_00521b5c;
extern "C" unsigned long _DAT_00521b9c;
extern "C" unsigned long _UNK_00521a48;
extern "C" unsigned long _UNK_00521ab8;
extern "C" unsigned long _UNK_00521abc;
extern "C" unsigned long _UNK_00521ad0;
extern "C" unsigned long g_00521a44;
extern "C" unsigned long g_00521a48;
extern "C" unsigned long g_00521a56;
extern "C" unsigned long g_00521a86;
extern "C" unsigned long g_00521ab8;
extern "C" unsigned long g_00521abc;
extern "C" unsigned long g_00521acc;
extern "C" unsigned long g_00521ad0;
extern "C" unsigned long g_00521b58;
extern "C" unsigned long g_00521b5c;
extern "C" unsigned long g_00521b9c;
int * BLProgressBar::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x114)));
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

void BLProgressBar::onExit()
{
  ((cocos2d::CCLayer *)this)->onExit();
  return;
}

void BLProgressBar::onEnter()
{
  ((cocos2d::CCLayer *)this)->onEnter();
  return;
}


BLProgressBar::~BLProgressBar()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  iVar2 = *(int *)(&g_00521a56 + g_00521ab8);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uStack_10 = (undefined4)(p3);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00521a86 + g_00521abc,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLProgressBar::BLProgressBar()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uStack_10 = (undefined4)(p3);
  0 /* ctorZero */;
  iVar2 = *(int *)(g_00521b58 + 0x521afa);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  *(int *)((int)this + 4*(0x44)) = 0;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLProgressBar"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

// ===== 修复: 补回被误删的函数占位 (3) =====
bool BLProgressBar::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

undefined8 BLProgressBar::setPercentage(float p1)
{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  int iStack_18;
  undefined4 uStack_14;
  
  iStack_18 = (undefined4)(intptr_t)((int *)((int)this));
  uStack_14 = (undefined4)(p1);
  uVar1 = (undefined4)(func_0079e4fc(p1,*(undefined4 *)(((int)this) + 0x110)));
  uVar1 = (undefined4)(func_0079e4dc(uVar1,g_00521b9c));
  piVar3 = *(int **)(((int)this) + 0x108);
  pcVar4 = *(code **)(*piVar3 + 0x1d4);
  iVar2 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar3) + (0x8c)))(piVar3));
  0 /* ctorZero */;
  (*pcVar4)(piVar3,&iStack_18);
  return ghidra_CONCAT44(uStack_14,iStack_18);
}

void BLProgressBar::setProgressAndWidth(cocos2d::extension::CCScale9Sprite* p1, cocos2d::extension::CCScale9Sprite* p2, float p3)
{
  undefined4 uVar1;
  code *pcVar2;
  code *pcVar3;
  
  *(int *)((int)this + 4*(0x42)) = (int) (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  *(int *)((int)this + 4*(0x44)) = p3;
  pcVar2 = *(code **)(*(int *)this + 0xcc);
  uVar1 = (undefined4)((**(code **)(*(int *)(p1) + (0x24)))(p1));
  (*pcVar2)(((int)this),p1,uVar1);
  *(int *)((int)this + 4*(0x43)) = (int) (undefined4)(intptr_t) (undefined4)(intptr_t)p2;
  pcVar3 = *(code **)(*(int *)this + 0xcc);
  uVar1 = (undefined4)((**(code **)(*(int *)(p2) + (0x24)))(p2));
  (*pcVar3)(((int)this),p2,uVar1);
  return;
}
