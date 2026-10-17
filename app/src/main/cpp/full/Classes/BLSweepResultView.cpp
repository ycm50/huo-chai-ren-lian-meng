#include "BLSweepResultView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLSweepResultPresenter.h"
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
extern "C" unsigned long UNK_00669758;
extern "C" unsigned long UNK_0066979c;
extern "C" unsigned long UNK_006697e0;
extern "C" unsigned long UNK_00669808;
extern "C" unsigned long UNK_0066998a;
extern "C" unsigned long UNK_00669a82;
extern "C" unsigned long UNK_00669ab0;
extern "C" unsigned long UNK_00669b86;
extern "C" unsigned long UNK_00669b88;
extern "C" unsigned long UNK_00669c2a;
extern "C" unsigned long UNK_00669cd4;
extern "C" unsigned long UNK_00669d00;
extern "C" unsigned long UNK_00669e58;
extern "C" unsigned long UNK_00669ef0;
extern "C" unsigned long UNK_00669f8a;
extern "C" unsigned long UNK_0066a066;
extern "C" unsigned long UNK_0066a142;
extern "C" unsigned long UNK_0066a270;
extern "C" unsigned long UNK_0066a29a;
extern "C" unsigned long _DAT_006698a8;
extern "C" unsigned long _DAT_006698ac;
extern "C" unsigned long _UNK_006697cc;
extern "C" unsigned long _UNK_006697d0;
extern "C" unsigned long _UNK_006697e4;
extern "C" unsigned long _UNK_0066980c;
extern "C" unsigned long _UNK_00669d6c;
extern "C" unsigned long _UNK_00669d70;
extern "C" unsigned long _UNK_00669d74;
extern "C" unsigned long _UNK_00669d78;
extern "C" unsigned long _UNK_00669d7c;
extern "C" unsigned long _UNK_00669d80;
extern "C" unsigned long _UNK_00669d84;
extern "C" unsigned long _UNK_00669d88;
extern "C" unsigned long _UNK_00669d8c;
extern "C" unsigned long _UNK_00669d90;
extern "C" unsigned long _UNK_00669d94;
extern "C" unsigned long _UNK_00669d98;
extern "C" unsigned long _UNK_00669d9c;
extern "C" unsigned long _UNK_00669da0;
extern "C" unsigned long _UNK_00669da4;
extern "C" unsigned long _UNK_00669da8;
extern "C" unsigned long _UNK_00669dac;
extern "C" unsigned long _UNK_00669db0;
extern "C" unsigned long _UNK_0066a1ac;
extern "C" unsigned long _UNK_0066a1b0;
extern "C" unsigned long _UNK_0066a1b4;
extern "C" unsigned long _UNK_0066a1b8;
extern "C" unsigned long _UNK_0066a1bc;
extern "C" unsigned long _UNK_0066a1c0;
extern "C" unsigned long _UNK_0066a1c4;
extern "C" unsigned long _UNK_0066a1c8;
extern "C" unsigned long _UNK_0066a1cc;
extern "C" unsigned long _UNK_0066a1d0;
extern "C" unsigned long _UNK_0066a1d4;
extern "C" unsigned long _UNK_0066a1d8;
extern "C" unsigned long _UNK_0066a1dc;
extern "C" unsigned long _UNK_0066a1e0;
extern "C" unsigned long _UNK_0066a1e4;
extern "C" unsigned long _UNK_0066a1e8;
extern "C" unsigned long _UNK_0066a1ec;
extern "C" unsigned long _UNK_0066a3dc;
extern "C" unsigned long _UNK_0066a3e0;
extern "C" unsigned long _UNK_0066a3e4;
extern "C" unsigned long _UNK_0066a3e8;
extern "C" unsigned long _UNK_0066a3ec;
extern "C" unsigned long _UNK_0066a3f0;
extern "C" unsigned long _UNK_0066a3f4;
extern "C" unsigned long g_00669758;
extern "C" unsigned long g_0066979c;
extern "C" unsigned long g_006697cc;
extern "C" unsigned long g_006697d0;
extern "C" unsigned long g_006697e0;
extern "C" unsigned long g_006697e4;
extern "C" unsigned long g_00669808;
extern "C" unsigned long g_0066980c;
extern "C" unsigned long g_006698a8;
extern "C" unsigned long g_006698ac;
extern "C" unsigned long g_0066998a;
extern "C" unsigned long g_00669a82;
extern "C" unsigned long g_00669ab0;
extern "C" unsigned long g_00669b86;
extern "C" unsigned long g_00669b88;
extern "C" unsigned long g_00669c2a;
extern "C" unsigned long g_00669cd4;
extern "C" unsigned long g_00669d00;
extern "C" unsigned long g_00669d6c;
extern "C" unsigned long g_00669d70;
extern "C" unsigned long g_00669d74;
extern "C" unsigned long g_00669d78;
extern "C" unsigned long g_00669d7c;
extern "C" unsigned long g_00669d80;
extern "C" unsigned long g_00669d84;
extern "C" unsigned long g_00669d88;
extern "C" unsigned long g_00669d8c;
extern "C" unsigned long g_00669d90;
extern "C" unsigned long g_00669d94;
extern "C" unsigned long g_00669d98;
extern "C" unsigned long g_00669d9c;
extern "C" unsigned long g_00669da0;
extern "C" unsigned long g_00669da4;
extern "C" unsigned long g_00669da8;
extern "C" unsigned long g_00669dac;
extern "C" unsigned long g_00669db0;
extern "C" unsigned long g_00669e58;
extern "C" unsigned long g_00669ef0;
extern "C" unsigned long g_00669f8a;
extern "C" unsigned long g_0066a066;
extern "C" unsigned long g_0066a142;
extern "C" unsigned long g_0066a1ac;
extern "C" unsigned long g_0066a1b0;
extern "C" unsigned long g_0066a1b4;
extern "C" unsigned long g_0066a1b8;
extern "C" unsigned long g_0066a1bc;
extern "C" unsigned long g_0066a1c0;
extern "C" unsigned long g_0066a1c4;
extern "C" unsigned long g_0066a1c8;
extern "C" unsigned long g_0066a1cc;
extern "C" unsigned long g_0066a1d0;
extern "C" unsigned long g_0066a1d4;
extern "C" unsigned long g_0066a1d8;
extern "C" unsigned long g_0066a1dc;
extern "C" unsigned long g_0066a1e0;
extern "C" unsigned long g_0066a1e4;
extern "C" unsigned long g_0066a1e8;
extern "C" unsigned long g_0066a1ec;
extern "C" unsigned long g_0066a270;
extern "C" unsigned long g_0066a29a;
extern "C" unsigned long g_0066a3dc;
extern "C" unsigned long g_0066a3e0;
extern "C" unsigned long g_0066a3e4;
extern "C" unsigned long g_0066a3e8;
extern "C" unsigned long g_0066a3ec;
extern "C" unsigned long g_0066a3f0;
extern "C" unsigned long g_0066a3f4;
BLSweepResultView::~BLSweepResultView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_00669758 + g_006697cc);
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
  func_0079e45c(&uStack_14,&g_0066979c + g_006697d0,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLSweepResultView::BLSweepResultView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(g_006698a8 + 0x669850);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLSweepResultView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * BLSweepResultView::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x118)));
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

undefined4 BLSweepResultView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x108);
}

void BLSweepResultView::onEnter()
{
  ((BLSweepResultPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLSweepResultView::onExit()
{
  ((BLSweepResultPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
bool BLSweepResultView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
