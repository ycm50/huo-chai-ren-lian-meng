#include "BLTreeRoleItemView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLPageControl.h"
#include "BLTreeRoleItemPresenter.h"
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
extern "C" unsigned long UNK_005d28a4;
extern "C" unsigned long UNK_005d28d6;
extern "C" unsigned long UNK_005d2930;
extern "C" unsigned long UNK_005d29f4;
extern "C" unsigned long UNK_005d2b40;
extern "C" unsigned long UNK_005d2b6e;
extern "C" unsigned long UNK_005d2bf2;
extern "C" unsigned long UNK_005d2c20;
extern "C" unsigned long UNK_005d2d78;
extern "C" unsigned long UNK_005d2dbe;
extern "C" unsigned long UNK_005d2e1e;
extern "C" unsigned long UNK_005d2e48;
extern "C" unsigned long UNK_005d2f1a;
extern "C" unsigned long UNK_005d2f44;
extern "C" unsigned long UNK_005d2ffc;
extern "C" unsigned long _UNK_005d291c;
extern "C" unsigned long _UNK_005d2920;
extern "C" unsigned long _UNK_005d2934;
extern "C" unsigned long _UNK_005d29f8;
extern "C" unsigned long _UNK_005d2b98;
extern "C" unsigned long _UNK_005d2b9c;
extern "C" unsigned long _UNK_005d2d90;
extern "C" unsigned long _UNK_005d2d94;
extern "C" unsigned long _UNK_005d2d98;
extern "C" unsigned long _UNK_005d2d9c;
extern "C" unsigned long _UNK_005d2da0;
extern "C" unsigned long _UNK_005d2da4;
extern "C" unsigned long _UNK_005d312c;
extern "C" unsigned long _UNK_005d3130;
extern "C" unsigned long _UNK_005d3134;
extern "C" unsigned long _UNK_005d3138;
extern "C" unsigned long _UNK_005d313c;
extern "C" unsigned long _UNK_005d3140;
extern "C" unsigned long _UNK_005d3144;
extern "C" unsigned long _UNK_005d3148;
extern "C" unsigned long _UNK_005d314c;
extern "C" unsigned long _UNK_005d3150;
extern "C" unsigned long _UNK_005d3154;
extern "C" unsigned long _UNK_005d3158;
extern "C" unsigned long _UNK_005d315c;
extern "C" unsigned long _UNK_005d3160;
extern "C" unsigned long _UNK_005d3164;
extern "C" unsigned long g_005d28a4;
extern "C" unsigned long g_005d28d6;
extern "C" unsigned long g_005d291c;
extern "C" unsigned long g_005d2920;
extern "C" unsigned long g_005d2930;
extern "C" unsigned long g_005d2934;
extern "C" unsigned long g_005d29f4;
extern "C" unsigned long g_005d29f8;
extern "C" unsigned long g_005d2b40;
extern "C" unsigned long g_005d2b6e;
extern "C" unsigned long g_005d2b98;
extern "C" unsigned long g_005d2b9c;
extern "C" unsigned long g_005d2bf2;
extern "C" unsigned long g_005d2c20;
extern "C" unsigned long g_005d2d78;
extern "C" unsigned long g_005d2d90;
extern "C" unsigned long g_005d2d94;
extern "C" unsigned long g_005d2d98;
extern "C" unsigned long g_005d2d9c;
extern "C" unsigned long g_005d2da0;
extern "C" unsigned long g_005d2da4;
extern "C" unsigned long g_005d2dbe;
extern "C" unsigned long g_005d2e1e;
extern "C" unsigned long g_005d2e48;
extern "C" unsigned long g_005d2f1a;
extern "C" unsigned long g_005d2f44;
extern "C" unsigned long g_005d2ffc;
extern "C" unsigned long g_005d312c;
extern "C" unsigned long g_005d3130;
extern "C" unsigned long g_005d3134;
extern "C" unsigned long g_005d3138;
extern "C" unsigned long g_005d313c;
extern "C" unsigned long g_005d3140;
extern "C" unsigned long g_005d3144;
extern "C" unsigned long g_005d3148;
extern "C" unsigned long g_005d314c;
extern "C" unsigned long g_005d3150;
extern "C" unsigned long g_005d3154;
extern "C" unsigned long g_005d3158;
extern "C" unsigned long g_005d315c;
extern "C" unsigned long g_005d3160;
extern "C" unsigned long g_005d3164;
BLTreeRoleItemView::~BLTreeRoleItemView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_005d28a4 + g_005d291c);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005d28d6 + g_005d2920,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  if (*(int *)((int)this + 4*(0x42)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x42)) = 0;
  }
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLTreeRoleItemView::BLTreeRoleItemView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_005d2b40 + g_005d2b98);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005d2b6e + g_005d2b9c,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * BLTreeRoleItemView::create()
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


bool BLTreeRoleItemView::init()
{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = ((cocos2d::CCLayer *)this)->init();
  if (iVar1 != 0) {
    uVar2 = (undefined4)(((BLTreeRoleItemPresenter *)this)->create());
    *(undefined4 *)(((int)this) + 0x108) = uVar2;
    ((cocos2d::CCObject *)this)->retain();
    BLTreeRoleItemView::initView();
    ((BLTreeRoleItemPresenter *)*(undefined4 *)(((int)this) + 0x108))->initWithView((BLTreeRoleItemView*)((int)this));
  }
  return iVar1;
}

void BLTreeRoleItemView::onEnter()
{
  ((BLTreeRoleItemPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLTreeRoleItemView::onExit()
{
  ((BLTreeRoleItemPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
void BLTreeRoleItemView::initView()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
