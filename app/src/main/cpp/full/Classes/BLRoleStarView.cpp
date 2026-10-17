#include "BLRoleStarView.h"
#include "BLLeakUtils.h"
#include "BLRoleStarPresenter.h"
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
extern "C" long long func_0079e59c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_00652cc4;
extern "C" unsigned long UNK_00652cfa;
extern "C" unsigned long UNK_00652d68;
extern "C" unsigned long UNK_00652d90;
extern "C" unsigned long UNK_00652f20;
extern "C" unsigned long UNK_00652f5c;
extern "C" unsigned long _UNK_00652d54;
extern "C" unsigned long _UNK_00652d58;
extern "C" unsigned long _UNK_00652d6c;
extern "C" unsigned long _UNK_00652d94;
extern "C" unsigned long _UNK_00652f98;
extern "C" unsigned long _UNK_00652f9c;
extern "C" unsigned long _UNK_00653438;
extern "C" unsigned long _UNK_0065343c;
extern "C" unsigned long _UNK_00653440;
extern "C" unsigned long g_00652cc4;
extern "C" unsigned long g_00652cfa;
extern "C" unsigned long g_00652d54;
extern "C" unsigned long g_00652d58;
extern "C" unsigned long g_00652d68;
extern "C" unsigned long g_00652d6c;
extern "C" unsigned long g_00652d90;
extern "C" unsigned long g_00652d94;
extern "C" unsigned long g_00652f20;
extern "C" unsigned long g_00652f5c;
extern "C" unsigned long g_00652f98;
extern "C" unsigned long g_00652f9c;
extern "C" unsigned long g_00653438;
extern "C" unsigned long g_0065343c;
extern "C" unsigned long g_00653440;
BLRoleStarView::~BLRoleStarView()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  iVar2 = *(int *)(&g_00652cc4 + g_00652d54);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  piStack_20 = (int *)((int)this);
  uStack_1c = (undefined4)(p2);
  uStack_18 = (undefined4)(p3);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_1c,&g_00652cfa + g_00652d58,&piStack_20);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_1c);
  func_0079e2bc(&uStack_1c);
  if (*(int *)((int)this + 4*(0x42)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x42)) = 0;
  }
  *(int *)((int)this + 4*(0x44)) = *(int *)((int)this + 4*(0x43));
  if (*(int *)((int)this + 4*(0x43)) != 0) {
    (void)(::operator delete((void *)(*(int *)((int)this + 4*(0x43)))));
  }
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLRoleStarView::BLRoleStarView()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  piStack_20 = (int *)((int)this);
  uStack_1c = (undefined4)(p2);
  uStack_18 = (undefined4)(p3);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_00652f20 + g_00652f98);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  *(int *)((int)this + 4*(0x43)) = 0;
  *(int *)((int)this + 4*(0x44)) = 0;
  *(int *)((int)this + 4*(0x45)) = 0;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_1c,&g_00652f5c + g_00652f9c,&piStack_20);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_1c);
  func_0079e2bc(&uStack_1c);
  *(int *)((int)this + 4*(0x44)) = *(int *)((int)this + 4*(0x43));
  return;
}

// ===== 修复: 补回被误删的函数占位 (2) =====
void BLRoleStarView::initView()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

bool BLRoleStarView::init()
{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (undefined4)(intptr_t)(((cocos2d::CCLayer *)this)->init());
  if (iVar1 != 0) {
    uVar2 = (undefined4)(((BLRoleStarPresenter *)this)->create());
    *(undefined4 *)(((int)this) + 0x108) = uVar2;
    ((cocos2d::CCObject *)this)->retain();
    BLRoleStarView::initView();
    ((BLRoleStarPresenter *)*(undefined4 *)(((int)this) + 0x108))->initWithView((BLRoleStarView*)((int)this));
  }
  return iVar1 != 0;
}
