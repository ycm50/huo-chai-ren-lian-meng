#include "BLArenaResultView.h"
#include "BLArenaResultPresenter.h"
#include "BLLanguage.h"
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
extern "C" long long ghidra_CONCAT13(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_00661028;
extern "C" unsigned long UNK_0066107a;
extern "C" unsigned long UNK_006610c0;
extern "C" unsigned long UNK_006610e8;
extern "C" unsigned long UNK_006612be;
extern "C" unsigned long UNK_006613a0;
extern "C" unsigned long UNK_00661442;
extern "C" unsigned long UNK_006614f2;
extern "C" unsigned long UNK_00661522;
extern "C" unsigned long UNK_0066154c;
extern "C" unsigned long UNK_0066161e;
extern "C" unsigned long UNK_00661648;
extern "C" unsigned long UNK_0066174a;
extern "C" unsigned long UNK_0066183c;
extern "C" unsigned long UNK_00661866;
extern "C" unsigned long UNK_00661926;
extern "C" unsigned long UNK_00661950;
extern "C" unsigned long UNK_00661a10;
extern "C" unsigned long UNK_00661a3a;
extern "C" unsigned long UNK_00661b3c;
extern "C" unsigned long UNK_00661b66;
extern "C" unsigned long UNK_00661c1e;
extern "C" unsigned long _DAT_006611a0;
extern "C" unsigned long _DAT_006611a4;
extern "C" unsigned long _UNK_006610ac;
extern "C" unsigned long _UNK_006610b0;
extern "C" unsigned long _UNK_006610c4;
extern "C" unsigned long _UNK_006610ec;
extern "C" unsigned long _UNK_006616a0;
extern "C" unsigned long _UNK_006616a4;
extern "C" unsigned long _UNK_006616a8;
extern "C" unsigned long _UNK_006616ac;
extern "C" unsigned long _UNK_006616b0;
extern "C" unsigned long _UNK_006616b4;
extern "C" unsigned long _UNK_006616b8;
extern "C" unsigned long _UNK_006616bc;
extern "C" unsigned long _UNK_006616c0;
extern "C" unsigned long _UNK_006616c4;
extern "C" unsigned long _UNK_006616c8;
extern "C" unsigned long _UNK_006616cc;
extern "C" unsigned long _UNK_006616d0;
extern "C" unsigned long _UNK_006616d4;
extern "C" unsigned long _UNK_006616d8;
extern "C" unsigned long _UNK_006616dc;
extern "C" unsigned long _UNK_006616e0;
extern "C" unsigned long _UNK_006616e4;
extern "C" unsigned long _UNK_00661ae8;
extern "C" unsigned long _UNK_00661aec;
extern "C" unsigned long _UNK_00661af0;
extern "C" unsigned long _UNK_00661af4;
extern "C" unsigned long _UNK_00661af8;
extern "C" unsigned long _UNK_00661afc;
extern "C" unsigned long _UNK_00661b00;
extern "C" unsigned long _UNK_00661b04;
extern "C" unsigned long _UNK_00661b08;
extern "C" unsigned long _UNK_00661b0c;
extern "C" unsigned long _UNK_00661b10;
extern "C" unsigned long _UNK_00661b14;
extern "C" unsigned long _UNK_00661b18;
extern "C" unsigned long _UNK_00661b1c;
extern "C" unsigned long _UNK_00661b20;
extern "C" unsigned long _UNK_00661b24;
extern "C" unsigned long _UNK_00661d60;
extern "C" unsigned long _UNK_00661d64;
extern "C" unsigned long _UNK_00661d68;
extern "C" unsigned long _UNK_00661d6c;
extern "C" unsigned long _UNK_00661d70;
extern "C" unsigned long _UNK_00661d74;
extern "C" unsigned long _UNK_00661d78;
extern "C" unsigned long _UNK_00661d7c;
extern "C" unsigned long _UNK_00661d80;
extern "C" unsigned long _UNK_00661d84;
extern "C" unsigned long g_00661028;
extern "C" unsigned long g_0066107a;
extern "C" unsigned long g_006610ac;
extern "C" unsigned long g_006610b0;
extern "C" unsigned long g_006610c0;
extern "C" unsigned long g_006610c4;
extern "C" unsigned long g_006610e8;
extern "C" unsigned long g_006610ec;
extern "C" unsigned long g_006611a0;
extern "C" unsigned long g_006611a4;
extern "C" unsigned long g_006612be;
extern "C" unsigned long g_006613a0;
extern "C" unsigned long g_00661442;
extern "C" unsigned long g_006614f2;
extern "C" unsigned long g_00661522;
extern "C" unsigned long g_0066154c;
extern "C" unsigned long g_0066161e;
extern "C" unsigned long g_00661648;
extern "C" unsigned long g_006616a0;
extern "C" unsigned long g_006616a4;
extern "C" unsigned long g_006616a8;
extern "C" unsigned long g_006616ac;
extern "C" unsigned long g_006616b0;
extern "C" unsigned long g_006616b4;
extern "C" unsigned long g_006616b8;
extern "C" unsigned long g_006616bc;
extern "C" unsigned long g_006616c0;
extern "C" unsigned long g_006616c4;
extern "C" unsigned long g_006616c8;
extern "C" unsigned long g_006616cc;
extern "C" unsigned long g_006616d0;
extern "C" unsigned long g_006616d4;
extern "C" unsigned long g_006616d8;
extern "C" unsigned long g_006616dc;
extern "C" unsigned long g_006616e0;
extern "C" unsigned long g_006616e4;
extern "C" unsigned long g_0066174a;
extern "C" unsigned long g_0066183c;
extern "C" unsigned long g_00661866;
extern "C" unsigned long g_00661926;
extern "C" unsigned long g_00661950;
extern "C" unsigned long g_00661a10;
extern "C" unsigned long g_00661a3a;
extern "C" unsigned long g_00661ae8;
extern "C" unsigned long g_00661aec;
extern "C" unsigned long g_00661af0;
extern "C" unsigned long g_00661af4;
extern "C" unsigned long g_00661af8;
extern "C" unsigned long g_00661afc;
extern "C" unsigned long g_00661b00;
extern "C" unsigned long g_00661b04;
extern "C" unsigned long g_00661b08;
extern "C" unsigned long g_00661b0c;
extern "C" unsigned long g_00661b10;
extern "C" unsigned long g_00661b14;
extern "C" unsigned long g_00661b18;
extern "C" unsigned long g_00661b1c;
extern "C" unsigned long g_00661b20;
extern "C" unsigned long g_00661b24;
extern "C" unsigned long g_00661b3c;
extern "C" unsigned long g_00661b66;
extern "C" unsigned long g_00661c1e;
extern "C" unsigned long g_00661d60;
extern "C" unsigned long g_00661d64;
extern "C" unsigned long g_00661d68;
extern "C" unsigned long g_00661d6c;
extern "C" unsigned long g_00661d70;
extern "C" unsigned long g_00661d74;
extern "C" unsigned long g_00661d78;
extern "C" unsigned long g_00661d7c;
extern "C" unsigned long g_00661d80;
extern "C" unsigned long g_00661d84;
BLArenaResultView::~BLArenaResultView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_00661028 + g_006610ac);
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
  func_0079e45c(&uStack_14,&g_0066107a + g_006610b0,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}


int * BLArenaResultView::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x138)));
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

undefined4 BLArenaResultView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 BLArenaResultView::getBackGround()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

undefined4 BLArenaResultView::getSprSprWin()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

undefined4 BLArenaResultView::getSprSprFaild()
{
  return *(undefined4 *)(((int)this) + 0x118);
}

undefined4 BLArenaResultView::getBtnSure()
{
  return *(undefined4 *)(((int)this) + 0x11c);
}

undefined4 BLArenaResultView::getLabSure()
{
  return *(undefined4 *)(((int)this) + 0x120);
}

undefined4 BLArenaResultView::getSspBg()
{
  return *(undefined4 *)(((int)this) + 0x124);
}

undefined4 BLArenaResultView::getLabRankTitle()
{
  return *(undefined4 *)(((int)this) + 0x128);
}

undefined4 BLArenaResultView::getLabRewardTitle()
{
  return *(undefined4 *)(((int)this) + 300);
}

undefined4 BLArenaResultView::getLabRank()
{
  return *(undefined4 *)(((int)this) + 0x130);
}

undefined4 BLArenaResultView::getLabReward()
{
  return *(undefined4 *)(((int)this) + 0x134);
}

void BLArenaResultView::onEnter()
{
  ((BLArenaResultPresenter *)*(undefined4 *)(((int)this) + 0x10c))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLArenaResultView::onExit()
{
  ((BLArenaResultPresenter *)*(undefined4 *)(((int)this) + 0x10c))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (2) =====
BLArenaResultView::BLArenaResultView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = (undefined4)(intptr_t)(*(int *)(g_006611a0 + 0x661130));
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
  func_0079e45c(&uStack_14,((intptr_t)"BLArenaResultView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

bool BLArenaResultView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
