#include "BLTreasureGameResultView.h"
#include "BLLeakUtils.h"
#include "BLTreasureGameResultPresenter.h"
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
extern "C" unsigned long UNK_0066a400;
extern "C" unsigned long UNK_0066a444;
extern "C" unsigned long UNK_0066a488;
extern "C" unsigned long UNK_0066a4b0;
extern "C" unsigned long UNK_0066a632;
extern "C" unsigned long UNK_0066a72a;
extern "C" unsigned long UNK_0066a758;
extern "C" unsigned long UNK_0066a82e;
extern "C" unsigned long UNK_0066a830;
extern "C" unsigned long UNK_0066a8d4;
extern "C" unsigned long UNK_0066a9b6;
extern "C" unsigned long UNK_0066ab7a;
extern "C" unsigned long UNK_0066ac58;
extern "C" unsigned long UNK_0066ad4e;
extern "C" unsigned long UNK_0066ad52;
extern "C" unsigned long UNK_0066ae04;
extern "C" unsigned long _DAT_0066a550;
extern "C" unsigned long _DAT_0066a554;
extern "C" unsigned long _UNK_0066a474;
extern "C" unsigned long _UNK_0066a478;
extern "C" unsigned long _UNK_0066a48c;
extern "C" unsigned long _UNK_0066a4b4;
extern "C" unsigned long _UNK_0066aa14;
extern "C" unsigned long _UNK_0066aa18;
extern "C" unsigned long _UNK_0066aa1c;
extern "C" unsigned long _UNK_0066aa20;
extern "C" unsigned long _UNK_0066aa24;
extern "C" unsigned long _UNK_0066aa28;
extern "C" unsigned long _UNK_0066aa2c;
extern "C" unsigned long _UNK_0066aa30;
extern "C" unsigned long _UNK_0066aa34;
extern "C" unsigned long _UNK_0066aa38;
extern "C" unsigned long _UNK_0066aa3c;
extern "C" unsigned long _UNK_0066aa40;
extern "C" unsigned long _UNK_0066aa44;
extern "C" unsigned long _UNK_0066aa48;
extern "C" unsigned long _UNK_0066aa4c;
extern "C" unsigned long _UNK_0066aa50;
extern "C" unsigned long _UNK_0066aa54;
extern "C" unsigned long _UNK_0066ae7c;
extern "C" unsigned long _UNK_0066ae80;
extern "C" unsigned long _UNK_0066ae84;
extern "C" unsigned long _UNK_0066ae88;
extern "C" unsigned long _UNK_0066ae8c;
extern "C" unsigned long _UNK_0066ae90;
extern "C" unsigned long _UNK_0066ae94;
extern "C" unsigned long _UNK_0066ae98;
extern "C" unsigned long _UNK_0066ae9c;
extern "C" unsigned long _UNK_0066aea0;
extern "C" unsigned long _UNK_0066aea4;
extern "C" unsigned long _UNK_0066aea8;
extern "C" unsigned long _UNK_0066aeac;
extern "C" unsigned long _UNK_0066aeb0;
extern "C" unsigned long _UNK_0066aeb4;
extern "C" unsigned long _UNK_0066aeb8;
extern "C" unsigned long _UNK_0066af68;
extern "C" unsigned long _UNK_0066af6c;
extern "C" unsigned long g_0066a400;
extern "C" unsigned long g_0066a444;
extern "C" unsigned long g_0066a474;
extern "C" unsigned long g_0066a478;
extern "C" unsigned long g_0066a488;
extern "C" unsigned long g_0066a48c;
extern "C" unsigned long g_0066a4b0;
extern "C" unsigned long g_0066a4b4;
extern "C" unsigned long g_0066a550;
extern "C" unsigned long g_0066a554;
extern "C" unsigned long g_0066a632;
extern "C" unsigned long g_0066a72a;
extern "C" unsigned long g_0066a758;
extern "C" unsigned long g_0066a82e;
extern "C" unsigned long g_0066a830;
extern "C" unsigned long g_0066a8d4;
extern "C" unsigned long g_0066a9b6;
extern "C" unsigned long g_0066aa14;
extern "C" unsigned long g_0066aa18;
extern "C" unsigned long g_0066aa1c;
extern "C" unsigned long g_0066aa20;
extern "C" unsigned long g_0066aa24;
extern "C" unsigned long g_0066aa28;
extern "C" unsigned long g_0066aa2c;
extern "C" unsigned long g_0066aa30;
extern "C" unsigned long g_0066aa34;
extern "C" unsigned long g_0066aa38;
extern "C" unsigned long g_0066aa3c;
extern "C" unsigned long g_0066aa40;
extern "C" unsigned long g_0066aa44;
extern "C" unsigned long g_0066aa48;
extern "C" unsigned long g_0066aa4c;
extern "C" unsigned long g_0066aa50;
extern "C" unsigned long g_0066aa54;
extern "C" unsigned long g_0066ab7a;
extern "C" unsigned long g_0066ac58;
extern "C" unsigned long g_0066ad4e;
extern "C" unsigned long g_0066ad52;
extern "C" unsigned long g_0066ae04;
extern "C" unsigned long g_0066ae7c;
extern "C" unsigned long g_0066ae80;
extern "C" unsigned long g_0066ae84;
extern "C" unsigned long g_0066ae88;
extern "C" unsigned long g_0066ae8c;
extern "C" unsigned long g_0066ae90;
extern "C" unsigned long g_0066ae94;
extern "C" unsigned long g_0066ae98;
extern "C" unsigned long g_0066ae9c;
extern "C" unsigned long g_0066aea0;
extern "C" unsigned long g_0066aea4;
extern "C" unsigned long g_0066aea8;
extern "C" unsigned long g_0066aeac;
extern "C" unsigned long g_0066aeb0;
extern "C" unsigned long g_0066aeb4;
extern "C" unsigned long g_0066aeb8;
extern "C" unsigned long g_0066af68;
extern "C" unsigned long g_0066af6c;
BLTreasureGameResultView::~BLTreasureGameResultView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0066a400 + g_0066a474);
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
  func_0079e45c(&uStack_14,&g_0066a444 + g_0066a478,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLTreasureGameResultView::BLTreasureGameResultView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(g_0066a550 + 0x66a4f8);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLTreasureGameResultView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * BLTreasureGameResultView::create()
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

undefined4 BLTreasureGameResultView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x108);
}

void BLTreasureGameResultView::onEnter()
{
  ((BLTreasureGameResultPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLTreasureGameResultView::onExit()
{
  ((BLTreasureGameResultPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
bool BLTreasureGameResultView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
