#include "BLMineGuiZeView.h"
#include "BLLeakUtils.h"
#include "BLMineGuiZePresenter.h"
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
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_00631bf4;
extern "C" unsigned long UNK_00631c38;
extern "C" unsigned long UNK_00631c7c;
extern "C" unsigned long UNK_00631ca4;
extern "C" unsigned long UNK_00631e44;
extern "C" unsigned long UNK_00631f26;
extern "C" unsigned long UNK_0063200e;
extern "C" unsigned long UNK_006320b6;
extern "C" unsigned long UNK_006320ba;
extern "C" unsigned long UNK_0063219e;
extern "C" unsigned long _DAT_00631d44;
extern "C" unsigned long _DAT_00631d48;
extern "C" unsigned long _UNK_00631c68;
extern "C" unsigned long _UNK_00631c6c;
extern "C" unsigned long _UNK_00631c80;
extern "C" unsigned long _UNK_00631ca8;
extern "C" unsigned long _UNK_00632228;
extern "C" unsigned long _UNK_0063222c;
extern "C" unsigned long _UNK_00632230;
extern "C" unsigned long _UNK_00632234;
extern "C" unsigned long _UNK_00632238;
extern "C" unsigned long _UNK_0063223c;
extern "C" unsigned long _UNK_00632240;
extern "C" unsigned long _UNK_00632244;
extern "C" unsigned long _UNK_00632248;
extern "C" unsigned long _UNK_0063224c;
extern "C" unsigned long _UNK_00632250;
extern "C" unsigned long _UNK_00632254;
extern "C" unsigned long _UNK_00632258;
extern "C" unsigned long _UNK_0063225c;
extern "C" unsigned long _UNK_006322d0;
extern "C" unsigned long g_00631bf4;
extern "C" unsigned long g_00631c38;
extern "C" unsigned long g_00631c68;
extern "C" unsigned long g_00631c6c;
extern "C" unsigned long g_00631c7c;
extern "C" unsigned long g_00631c80;
extern "C" unsigned long g_00631ca4;
extern "C" unsigned long g_00631ca8;
extern "C" unsigned long g_00631d44;
extern "C" unsigned long g_00631d48;
extern "C" unsigned long g_00631e44;
extern "C" unsigned long g_00631f26;
extern "C" unsigned long g_0063200e;
extern "C" unsigned long g_006320b6;
extern "C" unsigned long g_006320ba;
extern "C" unsigned long g_0063219e;
extern "C" unsigned long g_00632228;
extern "C" unsigned long g_0063222c;
extern "C" unsigned long g_00632230;
extern "C" unsigned long g_00632234;
extern "C" unsigned long g_00632238;
extern "C" unsigned long g_0063223c;
extern "C" unsigned long g_00632240;
extern "C" unsigned long g_00632244;
extern "C" unsigned long g_00632248;
extern "C" unsigned long g_0063224c;
extern "C" unsigned long g_00632250;
extern "C" unsigned long g_00632254;
extern "C" unsigned long g_00632258;
extern "C" unsigned long g_0063225c;
extern "C" unsigned long g_006322d0;
BLMineGuiZeView::~BLMineGuiZeView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_00631bf4 + g_00631c68);
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
  func_0079e45c(&uStack_14,&g_00631c38 + g_00631c6c,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLMineGuiZeView::BLMineGuiZeView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(g_00631d44 + 0x631cec);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLMineGuiZeView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * BLMineGuiZeView::create()
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

undefined4 BLMineGuiZeView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x108);
}

undefined4 BLMineGuiZeView::getBackGround()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

undefined4 BLMineGuiZeView::getTabBg()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 BLMineGuiZeView::getLabTitle()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

undefined4 BLMineGuiZeView::getLabGuize()
{
  return *(undefined4 *)(((int)this) + 0x118);
}

undefined4 BLMineGuiZeView::getBtnClose()
{
  return *(undefined4 *)(((int)this) + 0x11c);
}

void BLMineGuiZeView::onEnter()
{
  ((BLMineGuiZePresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLMineGuiZeView::onExit()
{
  ((BLMineGuiZePresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
bool BLMineGuiZeView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
