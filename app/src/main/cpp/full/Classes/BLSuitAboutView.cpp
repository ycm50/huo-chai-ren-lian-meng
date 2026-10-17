#include "BLSuitAboutView.h"
#include "BLLeakUtils.h"
#include "BLSuitAboutPresenter.h"
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
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_006927ac;
extern "C" unsigned long UNK_006927fe;
extern "C" unsigned long UNK_00692844;
extern "C" unsigned long UNK_0069286c;
extern "C" unsigned long UNK_00692a10;
extern "C" unsigned long UNK_00692af6;
extern "C" unsigned long UNK_00692be6;
extern "C" unsigned long UNK_00692c10;
extern "C" unsigned long UNK_00692cf2;
extern "C" unsigned long UNK_00692cf6;
extern "C" unsigned long UNK_00692e88;
extern "C" unsigned long UNK_00692e9a;
extern "C" unsigned long UNK_00692ede;
extern "C" unsigned long _DAT_00692924;
extern "C" unsigned long _DAT_00692928;
extern "C" unsigned long _UNK_00692830;
extern "C" unsigned long _UNK_00692834;
extern "C" unsigned long _UNK_00692848;
extern "C" unsigned long _UNK_00692870;
extern "C" unsigned long _UNK_00692df4;
extern "C" unsigned long _UNK_00692df8;
extern "C" unsigned long _UNK_00692dfc;
extern "C" unsigned long _UNK_00692e00;
extern "C" unsigned long _UNK_00692e04;
extern "C" unsigned long _UNK_00692e08;
extern "C" unsigned long _UNK_00692e0c;
extern "C" unsigned long _UNK_00692e10;
extern "C" unsigned long _UNK_00692e14;
extern "C" unsigned long _UNK_00692e18;
extern "C" unsigned long _UNK_00692e1c;
extern "C" unsigned long _UNK_00692e20;
extern "C" unsigned long _UNK_00692e24;
extern "C" unsigned long _UNK_00692e28;
extern "C" unsigned long _UNK_00692e2c;
extern "C" unsigned long _UNK_00692e30;
extern "C" unsigned long _UNK_00692e34;
extern "C" unsigned long _UNK_00692f74;
extern "C" unsigned long _UNK_00692f78;
extern "C" unsigned long _UNK_00692f7c;
extern "C" unsigned long _UNK_00692f80;
extern "C" unsigned long _UNK_00692f84;
extern "C" unsigned long _UNK_00692f88;
extern "C" unsigned long _UNK_00692f8c;
extern "C" unsigned long _UNK_00692f90;
extern "C" unsigned long _UNK_00692f94;
extern "C" unsigned long _UNK_00692f98;
extern "C" unsigned long g_006927ac;
extern "C" unsigned long g_006927fe;
extern "C" unsigned long g_00692830;
extern "C" unsigned long g_00692834;
extern "C" unsigned long g_00692844;
extern "C" unsigned long g_00692848;
extern "C" unsigned long g_0069286c;
extern "C" unsigned long g_00692870;
extern "C" unsigned long g_00692924;
extern "C" unsigned long g_00692928;
extern "C" unsigned long g_00692a10;
extern "C" unsigned long g_00692af6;
extern "C" unsigned long g_00692be6;
extern "C" unsigned long g_00692c10;
extern "C" unsigned long g_00692cf2;
extern "C" unsigned long g_00692cf6;
extern "C" unsigned long g_00692df4;
extern "C" unsigned long g_00692df8;
extern "C" unsigned long g_00692dfc;
extern "C" unsigned long g_00692e00;
extern "C" unsigned long g_00692e04;
extern "C" unsigned long g_00692e08;
extern "C" unsigned long g_00692e0c;
extern "C" unsigned long g_00692e10;
extern "C" unsigned long g_00692e14;
extern "C" unsigned long g_00692e18;
extern "C" unsigned long g_00692e1c;
extern "C" unsigned long g_00692e20;
extern "C" unsigned long g_00692e24;
extern "C" unsigned long g_00692e28;
extern "C" unsigned long g_00692e2c;
extern "C" unsigned long g_00692e30;
extern "C" unsigned long g_00692e34;
extern "C" unsigned long g_00692e88;
extern "C" unsigned long g_00692e9a;
extern "C" unsigned long g_00692ede;
extern "C" unsigned long g_00692f74;
extern "C" unsigned long g_00692f78;
extern "C" unsigned long g_00692f7c;
extern "C" unsigned long g_00692f80;
extern "C" unsigned long g_00692f84;
extern "C" unsigned long g_00692f88;
extern "C" unsigned long g_00692f8c;
extern "C" unsigned long g_00692f90;
extern "C" unsigned long g_00692f94;
extern "C" unsigned long g_00692f98;
BLSuitAboutView::~BLSuitAboutView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_006927ac + g_00692830);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  if (*(int *)((int)this + 4*(0x42)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x42)) = 0;
  }
  if (*(int *)((int)this + 4*(0x43)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x43)) = 0;
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_006927fe + g_00692834,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}


int * BLSuitAboutView::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x120)));
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

undefined4 BLSuitAboutView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 BLSuitAboutView::getBackGround()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

undefined4 BLSuitAboutView::getSprBg()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

void BLSuitAboutView::onEnter()
{
  ((BLSuitAboutPresenter *)*(undefined4 *)(((int)this) + 0x10c))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLSuitAboutView::onExit()
{
  ((BLSuitAboutPresenter *)*(undefined4 *)(((int)this) + 0x10c))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (2) =====
BLSuitAboutView::BLSuitAboutView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = (undefined4)(intptr_t)(*(int *)(g_00692924 + 0x6928b4));
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  iVar2 = (undefined4)(intptr_t)(cocos2d::CCArray::create());
  *(int *)((int)this + 4*(0x42)) = iVar2;
  if (iVar2 != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLSuitAboutView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

bool BLSuitAboutView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
