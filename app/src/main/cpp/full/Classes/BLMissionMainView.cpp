#include "BLMissionMainView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLMissionMainPresenter.h"
#include "BLPageControl.h"
#include "BLPageLayer.h"
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
extern "C" long long ghidra_CONCAT13(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_005bd79c;
extern "C" unsigned long UNK_005bd7e0;
extern "C" unsigned long UNK_005bd824;
extern "C" unsigned long UNK_005bd84c;
extern "C" unsigned long UNK_005bd9cc;
extern "C" unsigned long UNK_005bdab0;
extern "C" unsigned long UNK_005bdb64;
extern "C" unsigned long UNK_005bdb94;
extern "C" unsigned long UNK_005bdc7c;
extern "C" unsigned long UNK_005bdcaa;
extern "C" unsigned long UNK_005bdda6;
extern "C" unsigned long UNK_005bde88;
extern "C" unsigned long UNK_005bdf70;
extern "C" unsigned long UNK_005bdf9a;
extern "C" unsigned long UNK_005be064;
extern "C" unsigned long UNK_005be098;
extern "C" unsigned long UNK_005be166;
extern "C" unsigned long UNK_005be190;
extern "C" unsigned long UNK_005be2a0;
extern "C" unsigned long UNK_005be2ca;
extern "C" unsigned long UNK_005be420;
extern "C" unsigned long UNK_005be464;
extern "C" unsigned long UNK_005be502;
extern "C" unsigned long UNK_005be52e;
extern "C" unsigned long UNK_005be5fa;
extern "C" unsigned long UNK_005be624;
extern "C" unsigned long _DAT_005bd8ec;
extern "C" unsigned long _DAT_005bd8f0;
extern "C" unsigned long _UNK_005bd810;
extern "C" unsigned long _UNK_005bd814;
extern "C" unsigned long _UNK_005bd828;
extern "C" unsigned long _UNK_005bd850;
extern "C" unsigned long _UNK_005bddb0;
extern "C" unsigned long _UNK_005bddb4;
extern "C" unsigned long _UNK_005bddb8;
extern "C" unsigned long _UNK_005bddbc;
extern "C" unsigned long _UNK_005bddc0;
extern "C" unsigned long _UNK_005bddc4;
extern "C" unsigned long _UNK_005bddc8;
extern "C" unsigned long _UNK_005bddcc;
extern "C" unsigned long _UNK_005bddd0;
extern "C" unsigned long _UNK_005bddd4;
extern "C" unsigned long _UNK_005bddd8;
extern "C" unsigned long _UNK_005bdddc;
extern "C" unsigned long _UNK_005bdde0;
extern "C" unsigned long _UNK_005bdde4;
extern "C" unsigned long _UNK_005bdde8;
extern "C" unsigned long _UNK_005bddec;
extern "C" unsigned long _UNK_005bddf0;
extern "C" unsigned long _UNK_005be204;
extern "C" unsigned long _UNK_005be208;
extern "C" unsigned long _UNK_005be20c;
extern "C" unsigned long _UNK_005be210;
extern "C" unsigned long _UNK_005be214;
extern "C" unsigned long _UNK_005be218;
extern "C" unsigned long _UNK_005be21c;
extern "C" unsigned long _UNK_005be220;
extern "C" unsigned long _UNK_005be224;
extern "C" unsigned long _UNK_005be228;
extern "C" unsigned long _UNK_005be22c;
extern "C" unsigned long _UNK_005be230;
extern "C" unsigned long _UNK_005be234;
extern "C" unsigned long _UNK_005be238;
extern "C" unsigned long _UNK_005be23c;
extern "C" unsigned long _UNK_005be240;
extern "C" unsigned long _UNK_005be434;
extern "C" unsigned long _UNK_005be438;
extern "C" unsigned long _UNK_005be43c;
extern "C" unsigned long _UNK_005be440;
extern "C" unsigned long _UNK_005be444;
extern "C" unsigned long _UNK_005be448;
extern "C" unsigned long _UNK_005be44c;
extern "C" unsigned long _UNK_005be7d4;
extern "C" unsigned long _UNK_005be7d8;
extern "C" unsigned long _UNK_005be7dc;
extern "C" unsigned long _UNK_005be7e0;
extern "C" unsigned long _UNK_005be7e4;
extern "C" unsigned long _UNK_005be7e8;
extern "C" unsigned long _UNK_005be7ec;
extern "C" unsigned long _UNK_005be7f0;
extern "C" unsigned long _UNK_005be7f4;
extern "C" unsigned long _UNK_005be7f8;
extern "C" unsigned long _UNK_005be7fc;
extern "C" unsigned long _UNK_005be800;
extern "C" unsigned long g_005bd79c;
extern "C" unsigned long g_005bd7e0;
extern "C" unsigned long g_005bd810;
extern "C" unsigned long g_005bd814;
extern "C" unsigned long g_005bd824;
extern "C" unsigned long g_005bd828;
extern "C" unsigned long g_005bd84c;
extern "C" unsigned long g_005bd850;
extern "C" unsigned long g_005bd8ec;
extern "C" unsigned long g_005bd8f0;
extern "C" unsigned long g_005bd9cc;
extern "C" unsigned long g_005bdab0;
extern "C" unsigned long g_005bdb64;
extern "C" unsigned long g_005bdb94;
extern "C" unsigned long g_005bdc7c;
extern "C" unsigned long g_005bdcaa;
extern "C" unsigned long g_005bdda6;
extern "C" unsigned long g_005bddb0;
extern "C" unsigned long g_005bddb4;
extern "C" unsigned long g_005bddb8;
extern "C" unsigned long g_005bddbc;
extern "C" unsigned long g_005bddc0;
extern "C" unsigned long g_005bddc4;
extern "C" unsigned long g_005bddc8;
extern "C" unsigned long g_005bddcc;
extern "C" unsigned long g_005bddd0;
extern "C" unsigned long g_005bddd4;
extern "C" unsigned long g_005bddd8;
extern "C" unsigned long g_005bdddc;
extern "C" unsigned long g_005bdde0;
extern "C" unsigned long g_005bdde4;
extern "C" unsigned long g_005bdde8;
extern "C" unsigned long g_005bddec;
extern "C" unsigned long g_005bddf0;
extern "C" unsigned long g_005bde88;
extern "C" unsigned long g_005bdf70;
extern "C" unsigned long g_005bdf9a;
extern "C" unsigned long g_005be064;
extern "C" unsigned long g_005be098;
extern "C" unsigned long g_005be166;
extern "C" unsigned long g_005be190;
extern "C" unsigned long g_005be204;
extern "C" unsigned long g_005be208;
extern "C" unsigned long g_005be20c;
extern "C" unsigned long g_005be210;
extern "C" unsigned long g_005be214;
extern "C" unsigned long g_005be218;
extern "C" unsigned long g_005be21c;
extern "C" unsigned long g_005be220;
extern "C" unsigned long g_005be224;
extern "C" unsigned long g_005be228;
extern "C" unsigned long g_005be22c;
extern "C" unsigned long g_005be230;
extern "C" unsigned long g_005be234;
extern "C" unsigned long g_005be238;
extern "C" unsigned long g_005be23c;
extern "C" unsigned long g_005be240;
extern "C" unsigned long g_005be2a0;
extern "C" unsigned long g_005be2ca;
extern "C" unsigned long g_005be420;
extern "C" unsigned long g_005be434;
extern "C" unsigned long g_005be438;
extern "C" unsigned long g_005be43c;
extern "C" unsigned long g_005be440;
extern "C" unsigned long g_005be444;
extern "C" unsigned long g_005be448;
extern "C" unsigned long g_005be44c;
extern "C" unsigned long g_005be464;
extern "C" unsigned long g_005be502;
extern "C" unsigned long g_005be52e;
extern "C" unsigned long g_005be5fa;
extern "C" unsigned long g_005be624;
extern "C" unsigned long g_005be7d4;
extern "C" unsigned long g_005be7d8;
extern "C" unsigned long g_005be7dc;
extern "C" unsigned long g_005be7e0;
extern "C" unsigned long g_005be7e4;
extern "C" unsigned long g_005be7e8;
extern "C" unsigned long g_005be7ec;
extern "C" unsigned long g_005be7f0;
extern "C" unsigned long g_005be7f4;
extern "C" unsigned long g_005be7f8;
extern "C" unsigned long g_005be7fc;
extern "C" unsigned long g_005be800;
BLMissionMainView::~BLMissionMainView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_005bd79c + g_005bd810);
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
  func_0079e45c(&uStack_14,&g_005bd7e0 + g_005bd814,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLMissionMainView::BLMissionMainView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(g_005bd8ec + 0x5bd894);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLMissionMainView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * BLMissionMainView::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x144)));
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

undefined4 BLMissionMainView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x108);
}

void BLMissionMainView::onEnter()
{
  ((BLMissionMainPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLMissionMainView::onExit()
{
  ((BLMissionMainPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
bool BLMissionMainView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
