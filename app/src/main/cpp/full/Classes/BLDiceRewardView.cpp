#include "BLDiceRewardView.h"
#include "BLDiceRewardPresenter.h"
#include "BLItemDataView.h"
#include "BLLeakUtils.h"
#include "BackPackItemData.h"
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
extern "C" long long func_0079e2ec(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e43c(...);
extern "C" long long func_0079e44c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e46c(...);
extern "C" long long func_0079e47c(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long func_0079e784(...);
extern "C" long long ghidra_CONCAT13(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0062bc74;
extern "C" unsigned long UNK_0062bcb8;
extern "C" unsigned long UNK_0062bcfc;
extern "C" unsigned long UNK_0062bd24;
extern "C" unsigned long UNK_0062be78;
extern "C" unsigned long UNK_0062beb6;
extern "C" unsigned long UNK_0062bf98;
extern "C" unsigned long UNK_0062c02e;
extern "C" unsigned long UNK_0062c12e;
extern "C" unsigned long UNK_0062c130;
extern "C" unsigned long UNK_0062c218;
extern "C" unsigned long UNK_0062c390;
extern "C" unsigned long UNK_0062c4d4;
extern "C" unsigned long UNK_0062c4fe;
extern "C" unsigned long UNK_0062c5fe;
extern "C" unsigned long UNK_0062c600;
extern "C" unsigned long UNK_0062c810;
extern "C" unsigned long UNK_0062c832;
extern "C" unsigned long UNK_0062c928;
extern "C" unsigned long UNK_0062ca0e;
extern "C" unsigned long UNK_0062caaa;
extern "C" unsigned long UNK_0062cc4a;
extern "C" unsigned long UNK_0062cc4c;
extern "C" unsigned long UNK_0062cce0;
extern "C" unsigned long _DAT_0062bdc4;
extern "C" unsigned long _DAT_0062bdc8;
extern "C" unsigned long _UNK_0062bce8;
extern "C" unsigned long _UNK_0062bcec;
extern "C" unsigned long _UNK_0062bd00;
extern "C" unsigned long _UNK_0062bd28;
extern "C" unsigned long _UNK_0062c258;
extern "C" unsigned long _UNK_0062c25c;
extern "C" unsigned long _UNK_0062c260;
extern "C" unsigned long _UNK_0062c264;
extern "C" unsigned long _UNK_0062c268;
extern "C" unsigned long _UNK_0062c26c;
extern "C" unsigned long _UNK_0062c270;
extern "C" unsigned long _UNK_0062c274;
extern "C" unsigned long _UNK_0062c278;
extern "C" unsigned long _UNK_0062c27c;
extern "C" unsigned long _UNK_0062c280;
extern "C" unsigned long _UNK_0062c284;
extern "C" unsigned long _UNK_0062c288;
extern "C" unsigned long _UNK_0062c28c;
extern "C" unsigned long _UNK_0062c290;
extern "C" unsigned long _UNK_0062c690;
extern "C" unsigned long _UNK_0062c694;
extern "C" unsigned long _UNK_0062c698;
extern "C" unsigned long _UNK_0062c69c;
extern "C" unsigned long _UNK_0062c6a0;
extern "C" unsigned long _UNK_0062c6a4;
extern "C" unsigned long _UNK_0062c6a8;
extern "C" unsigned long _UNK_0062c6ac;
extern "C" unsigned long _UNK_0062c6b0;
extern "C" unsigned long _UNK_0062c6b4;
extern "C" unsigned long _UNK_0062c6b8;
extern "C" unsigned long _UNK_0062c964;
extern "C" unsigned long _UNK_0062c968;
extern "C" unsigned long _UNK_0062c96c;
extern "C" unsigned long _UNK_0062c970;
extern "C" unsigned long _UNK_0062c974;
extern "C" unsigned long _UNK_0062c978;
extern "C" unsigned long _UNK_0062c97c;
extern "C" unsigned long _UNK_0062c980;
extern "C" unsigned long _UNK_0062c984;
extern "C" unsigned long _UNK_0062c988;
extern "C" unsigned long _UNK_0062c98c;
extern "C" unsigned long _UNK_0062cd60;
extern "C" unsigned long _UNK_0062cd64;
extern "C" unsigned long _UNK_0062cd68;
extern "C" unsigned long _UNK_0062cd6c;
extern "C" unsigned long _UNK_0062cd70;
extern "C" unsigned long _UNK_0062cd74;
extern "C" unsigned long _UNK_0062cd78;
extern "C" unsigned long _UNK_0062cd7c;
extern "C" unsigned long _UNK_0062cd80;
extern "C" unsigned long _UNK_0062cd84;
extern "C" unsigned long extraout_r1;
extern "C" unsigned long extraout_r1_00;
extern "C" unsigned long extraout_r3;
extern "C" unsigned long extraout_r3_00;
extern "C" unsigned long g_0062bc74;
extern "C" unsigned long g_0062bcb8;
extern "C" unsigned long g_0062bce8;
extern "C" unsigned long g_0062bcec;
extern "C" unsigned long g_0062bcfc;
extern "C" unsigned long g_0062bd00;
extern "C" unsigned long g_0062bd24;
extern "C" unsigned long g_0062bd28;
extern "C" unsigned long g_0062bdc4;
extern "C" unsigned long g_0062bdc8;
extern "C" unsigned long g_0062be78;
extern "C" unsigned long g_0062beb6;
extern "C" unsigned long g_0062bf98;
extern "C" unsigned long g_0062c02e;
extern "C" unsigned long g_0062c12e;
extern "C" unsigned long g_0062c130;
extern "C" unsigned long g_0062c218;
extern "C" unsigned long g_0062c258;
extern "C" unsigned long g_0062c25c;
extern "C" unsigned long g_0062c260;
extern "C" unsigned long g_0062c264;
extern "C" unsigned long g_0062c268;
extern "C" unsigned long g_0062c26c;
extern "C" unsigned long g_0062c270;
extern "C" unsigned long g_0062c274;
extern "C" unsigned long g_0062c278;
extern "C" unsigned long g_0062c27c;
extern "C" unsigned long g_0062c280;
extern "C" unsigned long g_0062c284;
extern "C" unsigned long g_0062c288;
extern "C" unsigned long g_0062c28c;
extern "C" unsigned long g_0062c290;
extern "C" unsigned long g_0062c390;
extern "C" unsigned long g_0062c4d4;
extern "C" unsigned long g_0062c4fe;
extern "C" unsigned long g_0062c5fe;
extern "C" unsigned long g_0062c600;
extern "C" unsigned long g_0062c690;
extern "C" unsigned long g_0062c694;
extern "C" unsigned long g_0062c698;
extern "C" unsigned long g_0062c69c;
extern "C" unsigned long g_0062c6a0;
extern "C" unsigned long g_0062c6a4;
extern "C" unsigned long g_0062c6a8;
extern "C" unsigned long g_0062c6ac;
extern "C" unsigned long g_0062c6b0;
extern "C" unsigned long g_0062c6b4;
extern "C" unsigned long g_0062c6b8;
extern "C" unsigned long g_0062c810;
extern "C" unsigned long g_0062c832;
extern "C" unsigned long g_0062c928;
extern "C" unsigned long g_0062c964;
extern "C" unsigned long g_0062c968;
extern "C" unsigned long g_0062c96c;
extern "C" unsigned long g_0062c970;
extern "C" unsigned long g_0062c974;
extern "C" unsigned long g_0062c978;
extern "C" unsigned long g_0062c97c;
extern "C" unsigned long g_0062c980;
extern "C" unsigned long g_0062c984;
extern "C" unsigned long g_0062c988;
extern "C" unsigned long g_0062c98c;
extern "C" unsigned long g_0062ca0e;
extern "C" unsigned long g_0062caaa;
extern "C" unsigned long g_0062cc4a;
extern "C" unsigned long g_0062cc4c;
extern "C" unsigned long g_0062cce0;
extern "C" unsigned long g_0062cd60;
extern "C" unsigned long g_0062cd64;
extern "C" unsigned long g_0062cd68;
extern "C" unsigned long g_0062cd6c;
extern "C" unsigned long g_0062cd70;
extern "C" unsigned long g_0062cd74;
extern "C" unsigned long g_0062cd78;
extern "C" unsigned long g_0062cd7c;
extern "C" unsigned long g_0062cd80;
extern "C" unsigned long g_0062cd84;
BLDiceRewardView::~BLDiceRewardView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0062bc74 + g_0062bce8);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  if (*(int *)((int)this + 4*(0x46)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x46)) = 0;
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0062bcb8 + g_0062bcec,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLDiceRewardView::BLDiceRewardView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(g_0062bdc4 + 0x62bd6c);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLMainPauseView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * BLDiceRewardView::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x124)));
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

undefined4 BLDiceRewardView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x118);
}

undefined4 BLDiceRewardView::getBtnOK()
{
  return *(undefined4 *)(((int)this) + 0x120);
}

undefined4 BLDiceRewardView::getBtnClose()
{
  return *(undefined4 *)(((int)this) + 0x11c);
}

undefined4 BLDiceRewardView::getLabTitle()
{
  return *(undefined4 *)(((int)this) + 0x108);
}

undefined4 BLDiceRewardView::getLabBtnOK()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 BLDiceRewardView::getSPBackGround()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

undefined4 BLDiceRewardView::getSPTabBg()
{
  return *(undefined4 *)(((int)this) + 0x110);
}


void BLDiceRewardView::onEnter()
{
  ((BLDiceRewardPresenter *)*(undefined4 *)(((int)this) + 0x118))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLDiceRewardView::onExit()
{
  ((BLDiceRewardPresenter *)*(undefined4 *)(((int)this) + 0x118))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
bool BLDiceRewardView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
