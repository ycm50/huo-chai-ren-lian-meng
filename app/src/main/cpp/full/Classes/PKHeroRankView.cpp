#include "PKHeroRankView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "PKHeroRankPresenter.h"
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
extern "C" long long ghidra_CONCAT13(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_00616c3c;
extern "C" unsigned long UNK_00616c80;
extern "C" unsigned long UNK_00616cc4;
extern "C" unsigned long UNK_00616cec;
extern "C" unsigned long UNK_00616e84;
extern "C" unsigned long UNK_00616f0e;
extern "C" unsigned long UNK_00616ff4;
extern "C" unsigned long UNK_006170d6;
extern "C" unsigned long UNK_0061717a;
extern "C" unsigned long UNK_00617190;
extern "C" unsigned long UNK_00617202;
extern "C" unsigned long UNK_00617236;
extern "C" unsigned long UNK_0061734a;
extern "C" unsigned long UNK_00617376;
extern "C" unsigned long _DAT_00616d8c;
extern "C" unsigned long _DAT_00616d90;
extern "C" unsigned long _UNK_00616cb0;
extern "C" unsigned long _UNK_00616cb4;
extern "C" unsigned long _UNK_00616cc8;
extern "C" unsigned long _UNK_00616cf0;
extern "C" unsigned long _UNK_00617264;
extern "C" unsigned long _UNK_00617268;
extern "C" unsigned long _UNK_0061726c;
extern "C" unsigned long _UNK_00617270;
extern "C" unsigned long _UNK_00617274;
extern "C" unsigned long _UNK_00617278;
extern "C" unsigned long _UNK_0061727c;
extern "C" unsigned long _UNK_00617280;
extern "C" unsigned long _UNK_00617284;
extern "C" unsigned long _UNK_00617288;
extern "C" unsigned long _UNK_0061728c;
extern "C" unsigned long _UNK_00617290;
extern "C" unsigned long _UNK_00617294;
extern "C" unsigned long _UNK_00617298;
extern "C" unsigned long _UNK_0061729c;
extern "C" unsigned long _UNK_006172a0;
extern "C" unsigned long _UNK_006172a4;
extern "C" unsigned long _UNK_006172a8;
extern "C" unsigned long _UNK_006175c4;
extern "C" unsigned long _UNK_006175c8;
extern "C" unsigned long _UNK_006175cc;
extern "C" unsigned long _UNK_006175d0;
extern "C" unsigned long _UNK_006175d4;
extern "C" unsigned long _UNK_006175d8;
extern "C" unsigned long _UNK_006175dc;
extern "C" unsigned long _UNK_006175e0;
extern "C" unsigned long _UNK_006175e4;
extern "C" unsigned long _UNK_006175e8;
extern "C" unsigned long _UNK_006175ec;
extern "C" unsigned long _UNK_006175f0;
extern "C" unsigned long g_00616c3c;
extern "C" unsigned long g_00616c80;
extern "C" unsigned long g_00616cb0;
extern "C" unsigned long g_00616cb4;
extern "C" unsigned long g_00616cc4;
extern "C" unsigned long g_00616cc8;
extern "C" unsigned long g_00616cec;
extern "C" unsigned long g_00616cf0;
extern "C" unsigned long g_00616d8c;
extern "C" unsigned long g_00616d90;
extern "C" unsigned long g_00616e84;
extern "C" unsigned long g_00616f0e;
extern "C" unsigned long g_00616ff4;
extern "C" unsigned long g_006170d6;
extern "C" unsigned long g_0061717a;
extern "C" unsigned long g_00617190;
extern "C" unsigned long g_00617202;
extern "C" unsigned long g_00617236;
extern "C" unsigned long g_00617264;
extern "C" unsigned long g_00617268;
extern "C" unsigned long g_0061726c;
extern "C" unsigned long g_00617270;
extern "C" unsigned long g_00617274;
extern "C" unsigned long g_00617278;
extern "C" unsigned long g_0061727c;
extern "C" unsigned long g_00617280;
extern "C" unsigned long g_00617284;
extern "C" unsigned long g_00617288;
extern "C" unsigned long g_0061728c;
extern "C" unsigned long g_00617290;
extern "C" unsigned long g_00617294;
extern "C" unsigned long g_00617298;
extern "C" unsigned long g_0061729c;
extern "C" unsigned long g_006172a0;
extern "C" unsigned long g_006172a4;
extern "C" unsigned long g_006172a8;
extern "C" unsigned long g_0061734a;
extern "C" unsigned long g_00617376;
extern "C" unsigned long g_006175c4;
extern "C" unsigned long g_006175c8;
extern "C" unsigned long g_006175cc;
extern "C" unsigned long g_006175d0;
extern "C" unsigned long g_006175d4;
extern "C" unsigned long g_006175d8;
extern "C" unsigned long g_006175dc;
extern "C" unsigned long g_006175e0;
extern "C" unsigned long g_006175e4;
extern "C" unsigned long g_006175e8;
extern "C" unsigned long g_006175ec;
extern "C" unsigned long g_006175f0;
PKHeroRankView::~PKHeroRankView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_00616c3c + g_00616cb0);
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
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00616c80 + g_00616cb4,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

PKHeroRankView::PKHeroRankView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(g_00616d8c + 0x616d34);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"PKHeroRankView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * PKHeroRankView::create()
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

undefined4 PKHeroRankView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x108);
}

undefined4 PKHeroRankView::getBackGround()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 PKHeroRankView::getLabTitle()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

undefined4 PKHeroRankView::getBtnClose()
{
  return *(undefined4 *)(((int)this) + 0x118);
}

undefined4 PKHeroRankView::getTableViewTableView()
{
  return *(undefined4 *)(((int)this) + 0x11c);
}

void PKHeroRankView::onExit()
{
  ((PKHeroRankPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

void PKHeroRankView::onEnter()
{
  ((PKHeroRankPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
bool PKHeroRankView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
