#include "BLBufferItemView.h"
#include "BLBufferItemPresenter.h"
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
extern "C" unsigned long UNK_0052bd88;
extern "C" unsigned long UNK_0052bdcc;
extern "C" unsigned long UNK_0052be10;
extern "C" unsigned long UNK_0052be38;
extern "C" unsigned long UNK_0052be50;
extern "C" unsigned long UNK_0052be7e;
extern "C" unsigned long UNK_0052bf86;
extern "C" unsigned long UNK_0052bfb2;
extern "C" unsigned long UNK_0052c084;
extern "C" unsigned long UNK_0052c0b8;
extern "C" unsigned long UNK_0052c176;
extern "C" unsigned long UNK_0052c1aa;
extern "C" unsigned long UNK_0052c26e;
extern "C" unsigned long UNK_0052c298;
extern "C" unsigned long UNK_0052c35c;
extern "C" unsigned long UNK_0052c3cc;
extern "C" unsigned long UNK_0052c4a4;
extern "C" unsigned long UNK_0052c4cc;
extern "C" unsigned long _UNK_0052bdfc;
extern "C" unsigned long _UNK_0052be00;
extern "C" unsigned long _UNK_0052be14;
extern "C" unsigned long _UNK_0052be3c;
extern "C" unsigned long _UNK_0052bea8;
extern "C" unsigned long _UNK_0052beac;
extern "C" unsigned long _UNK_0052c364;
extern "C" unsigned long _UNK_0052c368;
extern "C" unsigned long _UNK_0052c36c;
extern "C" unsigned long _UNK_0052c370;
extern "C" unsigned long _UNK_0052c374;
extern "C" unsigned long _UNK_0052c378;
extern "C" unsigned long _UNK_0052c37c;
extern "C" unsigned long _UNK_0052c380;
extern "C" unsigned long _UNK_0052c384;
extern "C" unsigned long _UNK_0052c388;
extern "C" unsigned long _UNK_0052c38c;
extern "C" unsigned long _UNK_0052c390;
extern "C" unsigned long _UNK_0052c394;
extern "C" unsigned long _UNK_0052c398;
extern "C" unsigned long _UNK_0052c39c;
extern "C" unsigned long _UNK_0052c3a0;
extern "C" unsigned long _UNK_0052c620;
extern "C" unsigned long _UNK_0052c624;
extern "C" unsigned long _UNK_0052c628;
extern "C" unsigned long _UNK_0052c62c;
extern "C" unsigned long _UNK_0052c630;
extern "C" unsigned long _UNK_0052c634;
extern "C" unsigned long _UNK_0052c638;
extern "C" unsigned long _UNK_0052c63c;
extern "C" unsigned long g_0052bd88;
extern "C" unsigned long g_0052bdcc;
extern "C" unsigned long g_0052bdfc;
extern "C" unsigned long g_0052be00;
extern "C" unsigned long g_0052be10;
extern "C" unsigned long g_0052be14;
extern "C" unsigned long g_0052be38;
extern "C" unsigned long g_0052be3c;
extern "C" unsigned long g_0052be50;
extern "C" unsigned long g_0052be7e;
extern "C" unsigned long g_0052bea8;
extern "C" unsigned long g_0052beac;
extern "C" unsigned long g_0052bf86;
extern "C" unsigned long g_0052bfb2;
extern "C" unsigned long g_0052c084;
extern "C" unsigned long g_0052c0b8;
extern "C" unsigned long g_0052c176;
extern "C" unsigned long g_0052c1aa;
extern "C" unsigned long g_0052c26e;
extern "C" unsigned long g_0052c298;
extern "C" unsigned long g_0052c35c;
extern "C" unsigned long g_0052c364;
extern "C" unsigned long g_0052c368;
extern "C" unsigned long g_0052c36c;
extern "C" unsigned long g_0052c370;
extern "C" unsigned long g_0052c374;
extern "C" unsigned long g_0052c378;
extern "C" unsigned long g_0052c37c;
extern "C" unsigned long g_0052c380;
extern "C" unsigned long g_0052c384;
extern "C" unsigned long g_0052c388;
extern "C" unsigned long g_0052c38c;
extern "C" unsigned long g_0052c390;
extern "C" unsigned long g_0052c394;
extern "C" unsigned long g_0052c398;
extern "C" unsigned long g_0052c39c;
extern "C" unsigned long g_0052c3a0;
extern "C" unsigned long g_0052c3cc;
extern "C" unsigned long g_0052c4a4;
extern "C" unsigned long g_0052c4cc;
extern "C" unsigned long g_0052c620;
extern "C" unsigned long g_0052c624;
extern "C" unsigned long g_0052c628;
extern "C" unsigned long g_0052c62c;
extern "C" unsigned long g_0052c630;
extern "C" unsigned long g_0052c634;
extern "C" unsigned long g_0052c638;
extern "C" unsigned long g_0052c63c;
BLBufferItemView::~BLBufferItemView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0052bd88 + g_0052bdfc);
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
  func_0079e45c(&uStack_14,&g_0052bdcc + g_0052be00,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLBufferItemView::BLBufferItemView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_0052be50 + g_0052bea8);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0052be7e + g_0052beac,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * BLBufferItemView::create()
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

undefined4 BLBufferItemView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x108);
}

undefined4 BLBufferItemView::getLabAttack()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 BLBufferItemView::getLabDefense()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

undefined4 BLBufferItemView::getLabLife()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

undefined4 BLBufferItemView::getBtnAttack()
{
  return *(undefined4 *)(((int)this) + 0x118);
}

undefined4 BLBufferItemView::getBtnDefense()
{
  return *(undefined4 *)(((int)this) + 0x11c);
}

undefined4 BLBufferItemView::getBtnLife()
{
  return *(undefined4 *)(((int)this) + 0x120);
}

void BLBufferItemView::onEnter()
{
  ((BLBufferItemPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLBufferItemView::onExit()
{
  ((BLBufferItemPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
bool BLBufferItemView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
