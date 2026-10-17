#include "BLGamePauseView.h"
#include "BLGamePausePresenter.h"
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
extern "C" unsigned long UNK_005fc554;
extern "C" unsigned long UNK_005fc598;
extern "C" unsigned long UNK_005fc5dc;
extern "C" unsigned long UNK_005fc604;
extern "C" unsigned long UNK_005fc7c2;
extern "C" unsigned long UNK_005fc89c;
extern "C" unsigned long UNK_005fc98c;
extern "C" unsigned long UNK_005fc9b6;
extern "C" unsigned long UNK_005fca7e;
extern "C" unsigned long UNK_005fcab6;
extern "C" unsigned long UNK_005fcb88;
extern "C" unsigned long UNK_005fcc02;
extern "C" unsigned long UNK_005fccca;
extern "C" unsigned long UNK_005fccf6;
extern "C" unsigned long UNK_005fcdc8;
extern "C" unsigned long UNK_005fcdf2;
extern "C" unsigned long UNK_005fcebc;
extern "C" unsigned long UNK_005fcee8;
extern "C" unsigned long UNK_005fcfba;
extern "C" unsigned long UNK_005fd026;
extern "C" unsigned long UNK_005fd0f0;
extern "C" unsigned long UNK_005fd11c;
extern "C" unsigned long UNK_005fd1ee;
extern "C" unsigned long UNK_005fd218;
extern "C" unsigned long _DAT_005fc6a4;
extern "C" unsigned long _DAT_005fc6a8;
extern "C" unsigned long _UNK_005fc5c8;
extern "C" unsigned long _UNK_005fc5cc;
extern "C" unsigned long _UNK_005fc5e0;
extern "C" unsigned long _UNK_005fc608;
extern "C" unsigned long _UNK_005fcba4;
extern "C" unsigned long _UNK_005fcba8;
extern "C" unsigned long _UNK_005fcbac;
extern "C" unsigned long _UNK_005fcbb0;
extern "C" unsigned long _UNK_005fcbb4;
extern "C" unsigned long _UNK_005fcbb8;
extern "C" unsigned long _UNK_005fcbbc;
extern "C" unsigned long _UNK_005fcbc0;
extern "C" unsigned long _UNK_005fcbc4;
extern "C" unsigned long _UNK_005fcbc8;
extern "C" unsigned long _UNK_005fcbcc;
extern "C" unsigned long _UNK_005fcbd0;
extern "C" unsigned long _UNK_005fcbd4;
extern "C" unsigned long _UNK_005fcbd8;
extern "C" unsigned long _UNK_005fcbdc;
extern "C" unsigned long _UNK_005fcbe0;
extern "C" unsigned long _UNK_005fcbe4;
extern "C" unsigned long _UNK_005fcfdc;
extern "C" unsigned long _UNK_005fcfe0;
extern "C" unsigned long _UNK_005fcfe4;
extern "C" unsigned long _UNK_005fcfe8;
extern "C" unsigned long _UNK_005fcfec;
extern "C" unsigned long _UNK_005fcff0;
extern "C" unsigned long _UNK_005fcff4;
extern "C" unsigned long _UNK_005fcff8;
extern "C" unsigned long _UNK_005fcffc;
extern "C" unsigned long _UNK_005fd000;
extern "C" unsigned long _UNK_005fd004;
extern "C" unsigned long _UNK_005fd008;
extern "C" unsigned long _UNK_005fd00c;
extern "C" unsigned long _UNK_005fd010;
extern "C" unsigned long _UNK_005fd014;
extern "C" unsigned long _UNK_005fd018;
extern "C" unsigned long _UNK_005fd374;
extern "C" unsigned long _UNK_005fd378;
extern "C" unsigned long _UNK_005fd37c;
extern "C" unsigned long _UNK_005fd380;
extern "C" unsigned long _UNK_005fd384;
extern "C" unsigned long _UNK_005fd388;
extern "C" unsigned long _UNK_005fd38c;
extern "C" unsigned long _UNK_005fd390;
extern "C" unsigned long _UNK_005fd394;
extern "C" unsigned long _UNK_005fd398;
extern "C" unsigned long _UNK_005fd39c;
extern "C" unsigned long _UNK_005fd3a0;
extern "C" unsigned long g_005fc554;
extern "C" unsigned long g_005fc598;
extern "C" unsigned long g_005fc5c8;
extern "C" unsigned long g_005fc5cc;
extern "C" unsigned long g_005fc5dc;
extern "C" unsigned long g_005fc5e0;
extern "C" unsigned long g_005fc604;
extern "C" unsigned long g_005fc608;
extern "C" unsigned long g_005fc6a4;
extern "C" unsigned long g_005fc6a8;
extern "C" unsigned long g_005fc7c2;
extern "C" unsigned long g_005fc89c;
extern "C" unsigned long g_005fc98c;
extern "C" unsigned long g_005fc9b6;
extern "C" unsigned long g_005fca7e;
extern "C" unsigned long g_005fcab6;
extern "C" unsigned long g_005fcb88;
extern "C" unsigned long g_005fcba4;
extern "C" unsigned long g_005fcba8;
extern "C" unsigned long g_005fcbac;
extern "C" unsigned long g_005fcbb0;
extern "C" unsigned long g_005fcbb4;
extern "C" unsigned long g_005fcbb8;
extern "C" unsigned long g_005fcbbc;
extern "C" unsigned long g_005fcbc0;
extern "C" unsigned long g_005fcbc4;
extern "C" unsigned long g_005fcbc8;
extern "C" unsigned long g_005fcbcc;
extern "C" unsigned long g_005fcbd0;
extern "C" unsigned long g_005fcbd4;
extern "C" unsigned long g_005fcbd8;
extern "C" unsigned long g_005fcbdc;
extern "C" unsigned long g_005fcbe0;
extern "C" unsigned long g_005fcbe4;
extern "C" unsigned long g_005fcc02;
extern "C" unsigned long g_005fccca;
extern "C" unsigned long g_005fccf6;
extern "C" unsigned long g_005fcdc8;
extern "C" unsigned long g_005fcdf2;
extern "C" unsigned long g_005fcebc;
extern "C" unsigned long g_005fcee8;
extern "C" unsigned long g_005fcfba;
extern "C" unsigned long g_005fcfdc;
extern "C" unsigned long g_005fcfe0;
extern "C" unsigned long g_005fcfe4;
extern "C" unsigned long g_005fcfe8;
extern "C" unsigned long g_005fcfec;
extern "C" unsigned long g_005fcff0;
extern "C" unsigned long g_005fcff4;
extern "C" unsigned long g_005fcff8;
extern "C" unsigned long g_005fcffc;
extern "C" unsigned long g_005fd000;
extern "C" unsigned long g_005fd004;
extern "C" unsigned long g_005fd008;
extern "C" unsigned long g_005fd00c;
extern "C" unsigned long g_005fd010;
extern "C" unsigned long g_005fd014;
extern "C" unsigned long g_005fd018;
extern "C" unsigned long g_005fd026;
extern "C" unsigned long g_005fd0f0;
extern "C" unsigned long g_005fd11c;
extern "C" unsigned long g_005fd1ee;
extern "C" unsigned long g_005fd218;
extern "C" unsigned long g_005fd374;
extern "C" unsigned long g_005fd378;
extern "C" unsigned long g_005fd37c;
extern "C" unsigned long g_005fd380;
extern "C" unsigned long g_005fd384;
extern "C" unsigned long g_005fd388;
extern "C" unsigned long g_005fd38c;
extern "C" unsigned long g_005fd390;
extern "C" unsigned long g_005fd394;
extern "C" unsigned long g_005fd398;
extern "C" unsigned long g_005fd39c;
extern "C" unsigned long g_005fd3a0;
BLGamePauseView::~BLGamePauseView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_005fc554 + g_005fc5c8);
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
  func_0079e45c(&uStack_14,&g_005fc598 + g_005fc5cc,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLGamePauseView::BLGamePauseView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(g_005fc6a4 + 0x5fc64c);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLGamePauseView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * BLGamePauseView::create()
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

undefined4 BLGamePauseView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x108);
}

undefined4 BLGamePauseView::getTabBg()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

undefined4 BLGamePauseView::getLabTitle()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

undefined4 BLGamePauseView::getBtnQuit()
{
  return *(undefined4 *)(((int)this) + 0x118);
}

undefined4 BLGamePauseView::getLabQuit()
{
  return *(undefined4 *)(((int)this) + 0x11c);
}

undefined4 BLGamePauseView::getBtnGoOn()
{
  return *(undefined4 *)(((int)this) + 0x120);
}

undefined4 BLGamePauseView::getLabGoOn()
{
  return *(undefined4 *)(((int)this) + 0x124);
}

undefined4 BLGamePauseView::getBtnMusic()
{
  return *(undefined4 *)(((int)this) + 0x128);
}

undefined4 BLGamePauseView::getLabMusic()
{
  return *(undefined4 *)(((int)this) + 300);
}

undefined4 BLGamePauseView::getBtnSound()
{
  return *(undefined4 *)(((int)this) + 0x130);
}

undefined4 BLGamePauseView::getLabSound()
{
  return *(undefined4 *)(((int)this) + 0x134);
}

void BLGamePauseView::onEnter()
{
  ((BLGamePausePresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLGamePauseView::onExit()
{
  ((BLGamePausePresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
bool BLGamePauseView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
