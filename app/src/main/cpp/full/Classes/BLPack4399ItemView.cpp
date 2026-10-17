#include "BLPack4399ItemView.h"
#include "BLPack4399ItemPresenter.h"
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
extern "C" long long func_0079e30c(...);
extern "C" long long func_0079e34c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e904(...);
extern "C" long long func_0079e914(...);
extern "C" unsigned long UNK_005564f0;
extern "C" unsigned long UNK_0055652c;
extern "C" unsigned long UNK_00556554;
extern "C" unsigned long UNK_0055656c;
extern "C" unsigned long UNK_005565b4;
extern "C" unsigned long UNK_0055660c;
extern "C" unsigned long UNK_0055666e;
extern "C" unsigned long UNK_005566d6;
extern "C" unsigned long UNK_0055675c;
extern "C" unsigned long UNK_00556846;
extern "C" unsigned long UNK_0055685a;
extern "C" unsigned long UNK_00556918;
extern "C" unsigned long _UNK_0055651c;
extern "C" unsigned long _UNK_00556530;
extern "C" unsigned long _UNK_00556558;
extern "C" unsigned long _UNK_005565a4;
extern "C" unsigned long _UNK_00556980;
extern "C" unsigned long _UNK_00556984;
extern "C" unsigned long _UNK_00556988;
extern "C" unsigned long _UNK_0055698c;
extern "C" unsigned long _UNK_00556990;
extern "C" unsigned long _UNK_00556994;
extern "C" unsigned long _UNK_00556998;
extern "C" unsigned long _UNK_0055699c;
extern "C" unsigned long _UNK_005569a0;
extern "C" unsigned long _UNK_005569a4;
extern "C" unsigned long _UNK_005569a8;
extern "C" unsigned long _UNK_005569ac;
extern "C" unsigned long _UNK_005569b0;
extern "C" unsigned long _UNK_005569b4;
extern "C" unsigned long _UNK_005569b8;
extern "C" unsigned long _UNK_005569bc;
extern "C" unsigned long _UNK_005569c0;
extern "C" unsigned long _UNK_005569c4;
extern "C" unsigned long _UNK_005569c8;
extern "C" unsigned long _UNK_005569cc;
extern "C" unsigned long _UNK_005569d0;
extern "C" unsigned long g_005564f0;
extern "C" unsigned long g_0055651c;
extern "C" unsigned long g_0055652c;
extern "C" unsigned long g_00556530;
extern "C" unsigned long g_00556554;
extern "C" unsigned long g_00556558;
extern "C" unsigned long g_0055656c;
extern "C" unsigned long g_005565a4;
extern "C" unsigned long g_005565b4;
extern "C" unsigned long g_0055660c;
extern "C" unsigned long g_0055666e;
extern "C" unsigned long g_005566d6;
extern "C" unsigned long g_0055675c;
extern "C" unsigned long g_00556846;
extern "C" unsigned long g_0055685a;
extern "C" unsigned long g_00556918;
extern "C" unsigned long g_00556980;
extern "C" unsigned long g_00556984;
extern "C" unsigned long g_00556988;
extern "C" unsigned long g_0055698c;
extern "C" unsigned long g_00556990;
extern "C" unsigned long g_00556994;
extern "C" unsigned long g_00556998;
extern "C" unsigned long g_0055699c;
extern "C" unsigned long g_005569a0;
extern "C" unsigned long g_005569a4;
extern "C" unsigned long g_005569a8;
extern "C" unsigned long g_005569ac;
extern "C" unsigned long g_005569b0;
extern "C" unsigned long g_005569b4;
extern "C" unsigned long g_005569b8;
extern "C" unsigned long g_005569bc;
extern "C" unsigned long g_005569c0;
extern "C" unsigned long g_005569c4;
extern "C" unsigned long g_005569c8;
extern "C" unsigned long g_005569cc;
extern "C" unsigned long g_005569d0;
BLPack4399ItemView::~BLPack4399ItemView()
{
  int iVar1;
  
  iVar1 = *(int *)(&g_005564f0 + g_0055651c);
  *(int *)this = iVar1 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar1 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar1 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar1 + 0x244;
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLPack4399ItemView::BLPack4399ItemView()
{
  int iVar1;
  
  0 /* ctorZero */;
  iVar1 = *(int *)(&g_0055656c + g_005565a4);
  *(int *)this = iVar1 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar1 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar1 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar1 + 0x244;
  *(int *)((int)this + 4*(0x44)) = 0;
  *(int *)((int)this + 4*(0x45)) = 0;
  *(int *)((int)this + 4*(0x42)) = -1;
  *(int *)((int)this + 4*(0x43)) = 0;
  return;
}


int * BLPack4399ItemView::create(Pack4399Item const& p1)
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x118)));
  0 /* ctorZero */;
  iVar2 = ((BLPack4399ItemView *)piVar1)->init(((int)this));
  if (iVar2 == 0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    piVar1 = (int *)0x0;
  }
  else {
    ((cocos2d::CCObject *)piVar1)->autorelease();
  }
  return (int *)(piVar1);
}

// ===== 修复: 补回被误删的函数占位 (1) =====
bool BLPack4399ItemView::init(Pack4399Item const& p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
