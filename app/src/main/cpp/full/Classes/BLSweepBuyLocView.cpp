#include "BLSweepBuyLocView.h"
#include "BLLeakUtils.h"
#include "BLSweepBuyLocPresenter.h"
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
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_005d863c;
extern "C" unsigned long UNK_005d8680;
extern "C" unsigned long UNK_005d86c4;
extern "C" unsigned long UNK_005d86ec;
extern "C" unsigned long UNK_005d8850;
extern "C" unsigned long UNK_005d893e;
extern "C" unsigned long UNK_005d8940;
extern "C" unsigned long UNK_005d8a12;
extern "C" unsigned long UNK_005d8ab2;
extern "C" unsigned long UNK_005d8ba8;
extern "C" unsigned long UNK_005d8bac;
extern "C" unsigned long UNK_005d8cba;
extern "C" unsigned long UNK_005d8d8e;
extern "C" unsigned long UNK_005d8e74;
extern "C" unsigned long UNK_005d8f5c;
extern "C" unsigned long UNK_005d8f96;
extern "C" unsigned long UNK_005d9112;
extern "C" unsigned long UNK_005d9114;
extern "C" unsigned long UNK_005d9148;
extern "C" unsigned long UNK_005d9218;
extern "C" unsigned long UNK_005d9342;
extern "C" unsigned long UNK_005d9370;
extern "C" unsigned long UNK_005d94b8;
extern "C" unsigned long UNK_005d94ba;
extern "C" unsigned long UNK_005d94ea;
extern "C" unsigned long UNK_005d9604;
extern "C" unsigned long _DAT_005d87c4;
extern "C" unsigned long _DAT_005d87c8;
extern "C" unsigned long _UNK_005d86b0;
extern "C" unsigned long _UNK_005d86b4;
extern "C" unsigned long _UNK_005d86c8;
extern "C" unsigned long _UNK_005d86f0;
extern "C" unsigned long _UNK_005d8c34;
extern "C" unsigned long _UNK_005d8c38;
extern "C" unsigned long _UNK_005d8c3c;
extern "C" unsigned long _UNK_005d8c40;
extern "C" unsigned long _UNK_005d8c44;
extern "C" unsigned long _UNK_005d8c48;
extern "C" unsigned long _UNK_005d8c4c;
extern "C" unsigned long _UNK_005d8c50;
extern "C" unsigned long _UNK_005d8c54;
extern "C" unsigned long _UNK_005d8c58;
extern "C" unsigned long _UNK_005d8c5c;
extern "C" unsigned long _UNK_005d8c60;
extern "C" unsigned long _UNK_005d8c64;
extern "C" unsigned long _UNK_005d8c68;
extern "C" unsigned long _UNK_005d8c6c;
extern "C" unsigned long _UNK_005d909c;
extern "C" unsigned long _UNK_005d90a0;
extern "C" unsigned long _UNK_005d90a4;
extern "C" unsigned long _UNK_005d90a8;
extern "C" unsigned long _UNK_005d90ac;
extern "C" unsigned long _UNK_005d90b0;
extern "C" unsigned long _UNK_005d90b4;
extern "C" unsigned long _UNK_005d90b8;
extern "C" unsigned long _UNK_005d90bc;
extern "C" unsigned long _UNK_005d90c0;
extern "C" unsigned long _UNK_005d90c4;
extern "C" unsigned long _UNK_005d90c8;
extern "C" unsigned long _UNK_005d90cc;
extern "C" unsigned long _UNK_005d90d0;
extern "C" unsigned long _UNK_005d94ec;
extern "C" unsigned long _UNK_005d94f0;
extern "C" unsigned long _UNK_005d94f4;
extern "C" unsigned long _UNK_005d94f8;
extern "C" unsigned long _UNK_005d94fc;
extern "C" unsigned long _UNK_005d9500;
extern "C" unsigned long _UNK_005d9504;
extern "C" unsigned long _UNK_005d9508;
extern "C" unsigned long _UNK_005d950c;
extern "C" unsigned long _UNK_005d9510;
extern "C" unsigned long _UNK_005d9514;
extern "C" unsigned long _UNK_005d9518;
extern "C" unsigned long _UNK_005d951c;
extern "C" unsigned long _UNK_005d9520;
extern "C" unsigned long _UNK_005d9524;
extern "C" unsigned long _UNK_005d9528;
extern "C" unsigned long _UNK_005d952c;
extern "C" unsigned long _UNK_005d9530;
extern "C" unsigned long _UNK_005d9738;
extern "C" unsigned long _UNK_005d973c;
extern "C" unsigned long _UNK_005d9740;
extern "C" unsigned long _UNK_005d9744;
extern "C" unsigned long _UNK_005d9748;
extern "C" unsigned long g_005d863c;
extern "C" unsigned long g_005d8680;
extern "C" unsigned long g_005d86b0;
extern "C" unsigned long g_005d86b4;
extern "C" unsigned long g_005d86c4;
extern "C" unsigned long g_005d86c8;
extern "C" unsigned long g_005d86ec;
extern "C" unsigned long g_005d86f0;
extern "C" unsigned long g_005d87c4;
extern "C" unsigned long g_005d87c8;
extern "C" unsigned long g_005d8850;
extern "C" unsigned long g_005d893e;
extern "C" unsigned long g_005d8940;
extern "C" unsigned long g_005d8a12;
extern "C" unsigned long g_005d8ab2;
extern "C" unsigned long g_005d8ba8;
extern "C" unsigned long g_005d8bac;
extern "C" unsigned long g_005d8c34;
extern "C" unsigned long g_005d8c38;
extern "C" unsigned long g_005d8c3c;
extern "C" unsigned long g_005d8c40;
extern "C" unsigned long g_005d8c44;
extern "C" unsigned long g_005d8c48;
extern "C" unsigned long g_005d8c4c;
extern "C" unsigned long g_005d8c50;
extern "C" unsigned long g_005d8c54;
extern "C" unsigned long g_005d8c58;
extern "C" unsigned long g_005d8c5c;
extern "C" unsigned long g_005d8c60;
extern "C" unsigned long g_005d8c64;
extern "C" unsigned long g_005d8c68;
extern "C" unsigned long g_005d8c6c;
extern "C" unsigned long g_005d8cba;
extern "C" unsigned long g_005d8d8e;
extern "C" unsigned long g_005d8e74;
extern "C" unsigned long g_005d8f5c;
extern "C" unsigned long g_005d8f96;
extern "C" unsigned long g_005d909c;
extern "C" unsigned long g_005d90a0;
extern "C" unsigned long g_005d90a4;
extern "C" unsigned long g_005d90a8;
extern "C" unsigned long g_005d90ac;
extern "C" unsigned long g_005d90b0;
extern "C" unsigned long g_005d90b4;
extern "C" unsigned long g_005d90b8;
extern "C" unsigned long g_005d90bc;
extern "C" unsigned long g_005d90c0;
extern "C" unsigned long g_005d90c4;
extern "C" unsigned long g_005d90c8;
extern "C" unsigned long g_005d90cc;
extern "C" unsigned long g_005d90d0;
extern "C" unsigned long g_005d9112;
extern "C" unsigned long g_005d9114;
extern "C" unsigned long g_005d9148;
extern "C" unsigned long g_005d9218;
extern "C" unsigned long g_005d9342;
extern "C" unsigned long g_005d9370;
extern "C" unsigned long g_005d94b8;
extern "C" unsigned long g_005d94ba;
extern "C" unsigned long g_005d94ea;
extern "C" unsigned long g_005d94ec;
extern "C" unsigned long g_005d94f0;
extern "C" unsigned long g_005d94f4;
extern "C" unsigned long g_005d94f8;
extern "C" unsigned long g_005d94fc;
extern "C" unsigned long g_005d9500;
extern "C" unsigned long g_005d9504;
extern "C" unsigned long g_005d9508;
extern "C" unsigned long g_005d950c;
extern "C" unsigned long g_005d9510;
extern "C" unsigned long g_005d9514;
extern "C" unsigned long g_005d9518;
extern "C" unsigned long g_005d951c;
extern "C" unsigned long g_005d9520;
extern "C" unsigned long g_005d9524;
extern "C" unsigned long g_005d9528;
extern "C" unsigned long g_005d952c;
extern "C" unsigned long g_005d9530;
extern "C" unsigned long g_005d9604;
extern "C" unsigned long g_005d9738;
extern "C" unsigned long g_005d973c;
extern "C" unsigned long g_005d9740;
extern "C" unsigned long g_005d9744;
extern "C" unsigned long g_005d9748;
BLSweepBuyLocView::~BLSweepBuyLocView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_005d863c + g_005d86b0);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  if (*(int *)((int)this + 4*(0x48)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x48)) = 0;
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005d8680 + g_005d86b4,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLSweepBuyLocView::BLSweepBuyLocView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(g_005d87c4 + 0x5d876c);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLSweepBuyLocView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * BLSweepBuyLocView::create()
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


void BLSweepBuyLocView::onEnter()
{
  ((BLSweepBuyLocPresenter *)*(undefined4 *)(((int)this) + 0x120))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLSweepBuyLocView::onExit()
{
  ((BLSweepBuyLocPresenter *)*(undefined4 *)(((int)this) + 0x120))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
bool BLSweepBuyLocView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
