#include "BLLuckyDrawItemView.h"
#include "CCLayer.h"
#include "BLLuckyDrawItemPresenter.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
using namespace cocos2d;
// 兜底声明
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2dc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4fc(...);
extern "C" unsigned long UNK_00588408;
extern "C" unsigned long UNK_00588444;
extern "C" unsigned long UNK_0058846c;
extern "C" unsigned long UNK_00588484;
extern "C" unsigned long UNK_005884e0;
extern "C" unsigned long UNK_005884f8;
extern "C" unsigned long UNK_00588516;
extern "C" unsigned long UNK_0058851c;
extern "C" unsigned long UNK_005885aa;
extern "C" unsigned long UNK_005885d0;
extern "C" unsigned long UNK_0058865c;
extern "C" unsigned long UNK_00588670;
extern "C" unsigned long UNK_00588720;
extern "C" unsigned long UNK_0058874a;
extern "C" unsigned long _UNK_00588434;
extern "C" unsigned long _UNK_00588448;
extern "C" unsigned long _UNK_00588470;
extern "C" unsigned long _UNK_005884bc;
extern "C" unsigned long _UNK_005887b8;
extern "C" unsigned long _UNK_005887bc;
extern "C" unsigned long _UNK_005887c0;
extern "C" unsigned long _UNK_005887c4;
extern "C" unsigned long _UNK_005887c8;
extern "C" unsigned long _UNK_005887cc;
extern "C" unsigned long _UNK_005887d0;
extern "C" unsigned long _UNK_005887d4;
extern "C" unsigned long _UNK_005887d8;
extern "C" unsigned long _UNK_005887dc;
extern "C" unsigned long _UNK_005887e0;
extern "C" unsigned long _UNK_005887e4;
extern "C" unsigned long _UNK_005887e8;
extern "C" unsigned long g_00588408;
extern "C" unsigned long g_00588434;
extern "C" unsigned long g_00588444;
extern "C" unsigned long g_00588448;
extern "C" unsigned long g_0058846c;
extern "C" unsigned long g_00588470;
extern "C" unsigned long g_00588484;
extern "C" unsigned long g_005884bc;
extern "C" unsigned long g_005884e0;
extern "C" unsigned long g_005884f8;
extern "C" unsigned long g_00588516;
extern "C" unsigned long g_0058851c;
extern "C" unsigned long g_005885aa;
extern "C" unsigned long g_005885d0;
extern "C" unsigned long g_0058865c;
extern "C" unsigned long g_00588670;
extern "C" unsigned long g_00588720;
extern "C" unsigned long g_0058874a;
extern "C" unsigned long g_005887b8;
extern "C" unsigned long g_005887bc;
extern "C" unsigned long g_005887c0;
extern "C" unsigned long g_005887c4;
extern "C" unsigned long g_005887c8;
extern "C" unsigned long g_005887cc;
extern "C" unsigned long g_005887d0;
extern "C" unsigned long g_005887d4;
extern "C" unsigned long g_005887d8;
extern "C" unsigned long g_005887dc;
extern "C" unsigned long g_005887e0;
extern "C" unsigned long g_005887e4;
extern "C" unsigned long g_005887e8;
BLLuckyDrawItemView::~BLLuckyDrawItemView()
{
  int iVar1;
  
  iVar1 = *(int *)(&g_00588408 + g_00588434);
  *(int *)this = iVar1 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar1 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar1 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar1 + 0x244;
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLLuckyDrawItemView::BLLuckyDrawItemView()
{
  int iVar1;
  
  0 /* ctorZero */;
  iVar1 = *(int *)(&g_00588484 + g_005884bc);
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

// ===== 修复: 补回被误删的函数占位 (3) =====
bool BLLuckyDrawItemView::init(LuckyDrawItem const& p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

int * BLLuckyDrawItemView::create(LuckyDrawItem const& p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return nullptr;
}

void BLLuckyDrawItemView::setCntLblVisible(bool p1)
{
  undefined4 p3 = 0;
  undefined4 p4 = 0;

  int iVar1;
  int *piVar2;
  
  iVar1 = (undefined4)(intptr_t)((**(code **)(*(int *)this + 0xd4))(((int)this),1000,p3,*(code **)(*(int *)this + 0xd4),p4));
  if (iVar1 != 0) {
    piVar2 = (int *)(**(code **)(*(int *)this + 0xd4))(((int)this),1000);
    (**(code **)(*(int *)(piVar2) + (0x90)))(piVar2,p1);
  }
  return;
}
