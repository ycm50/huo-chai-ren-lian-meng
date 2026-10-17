#include "BLUpgraceTitleView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLUpgraceTitlePresenter.h"
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
extern "C" unsigned long UNK_00685c60;
extern "C" unsigned long UNK_00685cb2;
extern "C" unsigned long UNK_00685cf8;
extern "C" unsigned long UNK_00685d20;
extern "C" unsigned long UNK_00685d68;
extern "C" unsigned long UNK_00685da4;
extern "C" unsigned long UNK_00685ed0;
extern "C" unsigned long UNK_00685fba;
extern "C" unsigned long UNK_00685fe4;
extern "C" unsigned long UNK_006860a4;
extern "C" unsigned long UNK_006860d8;
extern "C" unsigned long UNK_00686196;
extern "C" unsigned long UNK_006861c0;
extern "C" unsigned long _UNK_00685ce4;
extern "C" unsigned long _UNK_00685ce8;
extern "C" unsigned long _UNK_00685cfc;
extern "C" unsigned long _UNK_00685d24;
extern "C" unsigned long _UNK_00685dd8;
extern "C" unsigned long _UNK_00685ddc;
extern "C" unsigned long _UNK_006862b0;
extern "C" unsigned long _UNK_006862b4;
extern "C" unsigned long _UNK_006862b8;
extern "C" unsigned long _UNK_006862bc;
extern "C" unsigned long _UNK_006862c0;
extern "C" unsigned long _UNK_006862c4;
extern "C" unsigned long _UNK_006862c8;
extern "C" unsigned long _UNK_006862cc;
extern "C" unsigned long _UNK_006862d0;
extern "C" unsigned long _UNK_006862d4;
extern "C" unsigned long _UNK_006862d8;
extern "C" unsigned long _UNK_006862dc;
extern "C" unsigned long _UNK_006862e0;
extern "C" unsigned long _UNK_006862e4;
extern "C" unsigned long g_00685c60;
extern "C" unsigned long g_00685cb2;
extern "C" unsigned long g_00685ce4;
extern "C" unsigned long g_00685ce8;
extern "C" unsigned long g_00685cf8;
extern "C" unsigned long g_00685cfc;
extern "C" unsigned long g_00685d20;
extern "C" unsigned long g_00685d24;
extern "C" unsigned long g_00685d68;
extern "C" unsigned long g_00685da4;
extern "C" unsigned long g_00685dd8;
extern "C" unsigned long g_00685ddc;
extern "C" unsigned long g_00685ed0;
extern "C" unsigned long g_00685fba;
extern "C" unsigned long g_00685fe4;
extern "C" unsigned long g_006860a4;
extern "C" unsigned long g_006860d8;
extern "C" unsigned long g_00686196;
extern "C" unsigned long g_006861c0;
extern "C" unsigned long g_006862b0;
extern "C" unsigned long g_006862b4;
extern "C" unsigned long g_006862b8;
extern "C" unsigned long g_006862bc;
extern "C" unsigned long g_006862c0;
extern "C" unsigned long g_006862c4;
extern "C" unsigned long g_006862c8;
extern "C" unsigned long g_006862cc;
extern "C" unsigned long g_006862d0;
extern "C" unsigned long g_006862d4;
extern "C" unsigned long g_006862d8;
extern "C" unsigned long g_006862dc;
extern "C" unsigned long g_006862e0;
extern "C" unsigned long g_006862e4;
BLUpgraceTitleView::~BLUpgraceTitleView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_00685c60 + g_00685ce4);
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
  func_0079e45c(&uStack_14,&g_00685cb2 + g_00685ce8,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLUpgraceTitleView::BLUpgraceTitleView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = (undefined4)(intptr_t)(*(int *)((unsigned char *)((char *)&g_00685d68 + (intptr_t)(g_00685dd8))));
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
  func_0079e45c(&uStack_14,(unsigned char *)((char *)&g_00685da4 + (intptr_t)(g_00685ddc)),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * BLUpgraceTitleView::create()
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

undefined4 BLUpgraceTitleView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 BLUpgraceTitleView::getBG()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

undefined4 BLUpgraceTitleView::getLabLvTitle()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

undefined4 BLUpgraceTitleView::getLabLvMax()
{
  return *(undefined4 *)(((int)this) + 0x118);
}

undefined4 BLUpgraceTitleView::getLabLv()
{
  return *(undefined4 *)(((int)this) + 0x11c);
}

void BLUpgraceTitleView::onEnter()
{
  ((BLUpgraceTitlePresenter *)*(undefined4 *)(((int)this) + 0x10c))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLUpgraceTitleView::onExit()
{
  ((BLUpgraceTitlePresenter *)*(undefined4 *)(((int)this) + 0x10c))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
bool BLUpgraceTitleView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
