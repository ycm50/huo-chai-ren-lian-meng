#include "BLJingJiGuiZeView.h"
#include "BLJingJiGuiZePresenter.h"
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
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e57c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0062f99c;
extern "C" unsigned long UNK_0062f9e0;
extern "C" unsigned long UNK_0062fa24;
extern "C" unsigned long UNK_0062fa4c;
extern "C" unsigned long UNK_0062fbec;
extern "C" unsigned long UNK_0062fcce;
extern "C" unsigned long UNK_0062fdb6;
extern "C" unsigned long UNK_0062fe5e;
extern "C" unsigned long UNK_0062fe62;
extern "C" unsigned long UNK_0062ff46;
extern "C" unsigned long _DAT_0062faec;
extern "C" unsigned long _DAT_0062faf0;
extern "C" unsigned long _UNK_0062fa10;
extern "C" unsigned long _UNK_0062fa14;
extern "C" unsigned long _UNK_0062fa28;
extern "C" unsigned long _UNK_0062fa50;
extern "C" unsigned long _UNK_0062ffd0;
extern "C" unsigned long _UNK_0062ffd4;
extern "C" unsigned long _UNK_0062ffd8;
extern "C" unsigned long _UNK_0062ffdc;
extern "C" unsigned long _UNK_0062ffe0;
extern "C" unsigned long _UNK_0062ffe4;
extern "C" unsigned long _UNK_0062ffe8;
extern "C" unsigned long _UNK_0062ffec;
extern "C" unsigned long _UNK_0062fff0;
extern "C" unsigned long _UNK_0062fff4;
extern "C" unsigned long _UNK_0062fff8;
extern "C" unsigned long _UNK_0062fffc;
extern "C" unsigned long _UNK_00630000;
extern "C" unsigned long _UNK_00630004;
extern "C" unsigned long _UNK_00630068;
extern "C" unsigned long g_0062f99c;
extern "C" unsigned long g_0062f9e0;
extern "C" unsigned long g_0062fa10;
extern "C" unsigned long g_0062fa14;
extern "C" unsigned long g_0062fa24;
extern "C" unsigned long g_0062fa28;
extern "C" unsigned long g_0062fa4c;
extern "C" unsigned long g_0062fa50;
extern "C" unsigned long g_0062faec;
extern "C" unsigned long g_0062faf0;
extern "C" unsigned long g_0062fbec;
extern "C" unsigned long g_0062fcce;
extern "C" unsigned long g_0062fdb6;
extern "C" unsigned long g_0062fe5e;
extern "C" unsigned long g_0062fe62;
extern "C" unsigned long g_0062ff46;
extern "C" unsigned long g_0062ffd0;
extern "C" unsigned long g_0062ffd4;
extern "C" unsigned long g_0062ffd8;
extern "C" unsigned long g_0062ffdc;
extern "C" unsigned long g_0062ffe0;
extern "C" unsigned long g_0062ffe4;
extern "C" unsigned long g_0062ffe8;
extern "C" unsigned long g_0062ffec;
extern "C" unsigned long g_0062fff0;
extern "C" unsigned long g_0062fff4;
extern "C" unsigned long g_0062fff8;
extern "C" unsigned long g_0062fffc;
extern "C" unsigned long g_00630000;
extern "C" unsigned long g_00630004;
extern "C" unsigned long g_00630068;
BLJingJiGuiZeView::~BLJingJiGuiZeView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = (undefined4)(intptr_t)(*(int *)((unsigned char *)((char *)&g_0062f99c + (intptr_t)(g_0062fa10))));
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
  func_0079e45c(&uStack_14,(unsigned char *)((char *)&g_0062f9e0 + (intptr_t)(g_0062fa14)),&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLJingJiGuiZeView::BLJingJiGuiZeView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = (undefined4)(intptr_t)(*(int *)(g_0062faec + 0x62fa94));
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLJingJiGuiZeView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * BLJingJiGuiZeView::create()
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

undefined4 BLJingJiGuiZeView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x108);
}

undefined4 BLJingJiGuiZeView::getBackGround()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

undefined4 BLJingJiGuiZeView::getTabBg()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 BLJingJiGuiZeView::getLabTitle()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

undefined4 BLJingJiGuiZeView::getLabGuize()
{
  return *(undefined4 *)(((int)this) + 0x118);
}

undefined4 BLJingJiGuiZeView::getBtnClose()
{
  return *(undefined4 *)(((int)this) + 0x11c);
}

void BLJingJiGuiZeView::onEnter()
{
  ((BLJingJiGuiZePresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLJingJiGuiZeView::onExit()
{
  ((BLJingJiGuiZePresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
bool BLJingJiGuiZeView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
