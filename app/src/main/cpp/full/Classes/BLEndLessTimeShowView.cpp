#include "BLEndLessTimeShowView.h"
#include "BLEndLessTimeShowPresenter.h"
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
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long func_0079e62c(...);
extern "C" long long func_0079e724(...);
extern "C" long long func_0079e744(...);
extern "C" long long func_0079e7e4(...);
extern "C" long long func_0079e8d4(...);
extern "C" long long ghidra_CONCAT13(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0052c690;
extern "C" unsigned long UNK_0052c6d4;
extern "C" unsigned long UNK_0052c718;
extern "C" unsigned long UNK_0052c740;
extern "C" unsigned long UNK_0052c938;
extern "C" unsigned long UNK_0052c964;
extern "C" unsigned long UNK_0052ca4e;
extern "C" unsigned long UNK_0052caf8;
extern "C" unsigned long UNK_0052cb72;
extern "C" unsigned long UNK_0052cb8a;
extern "C" unsigned long UNK_0052cbfa;
extern "C" unsigned long UNK_0052cc1a;
extern "C" unsigned long UNK_0052cc3e;
extern "C" unsigned long UNK_0052cc8a;
extern "C" unsigned long UNK_0052cca0;
extern "C" unsigned long UNK_0052ccc2;
extern "C" unsigned long UNK_0052cd92;
extern "C" unsigned long UNK_0052ceac;
extern "C" unsigned long UNK_0052cedc;
extern "C" unsigned long UNK_0052cf7c;
extern "C" unsigned long UNK_0052cf7e;
extern "C" unsigned long UNK_0052cf8f;
extern "C" unsigned long UNK_0052cfd2;
extern "C" unsigned long UNK_0052d08c;
extern "C" unsigned long UNK_0052d0ba;
extern "C" unsigned long UNK_0052d1ac;
extern "C" unsigned long UNK_0052d1ae;
extern "C" unsigned long UNK_0052d1bf;
extern "C" unsigned long UNK_0052d204;
extern "C" unsigned long UNK_0052d2c8;
extern "C" unsigned long UNK_0052d2f6;
extern "C" unsigned long UNK_0052d39a;
extern "C" unsigned long UNK_0052d39c;
extern "C" unsigned long UNK_0052d3ad;
extern "C" unsigned long UNK_0052d3f8;
extern "C" unsigned long UNK_0052d40e;
extern "C" unsigned long UNK_0052d49c;
extern "C" unsigned long UNK_0052d4b8;
extern "C" unsigned long UNK_0052d4e6;
extern "C" unsigned long _DAT_0052c7ec;
extern "C" unsigned long _DAT_0052c7f0;
extern "C" unsigned long _DAT_0052c7f4;
extern "C" unsigned long _UNK_0052c704;
extern "C" unsigned long _UNK_0052c708;
extern "C" unsigned long _UNK_0052c71c;
extern "C" unsigned long _UNK_0052c744;
extern "C" unsigned long _UNK_0052cd0c;
extern "C" unsigned long _UNK_0052cd10;
extern "C" unsigned long _UNK_0052cd14;
extern "C" unsigned long _UNK_0052cd18;
extern "C" unsigned long _UNK_0052cd1c;
extern "C" unsigned long _UNK_0052cd20;
extern "C" unsigned long _UNK_0052cd24;
extern "C" unsigned long _UNK_0052cd28;
extern "C" unsigned long _UNK_0052cd2c;
extern "C" unsigned long _UNK_0052cd30;
extern "C" unsigned long _UNK_0052cd34;
extern "C" unsigned long _UNK_0052cd38;
extern "C" unsigned long _UNK_0052cd3c;
extern "C" unsigned long _UNK_0052cd40;
extern "C" unsigned long _UNK_0052cd44;
extern "C" unsigned long _UNK_0052cd48;
extern "C" unsigned long _UNK_0052cd4c;
extern "C" unsigned long _UNK_0052cd50;
extern "C" unsigned long _UNK_0052cd54;
extern "C" unsigned long _UNK_0052cd58;
extern "C" unsigned long _UNK_0052cd5c;
extern "C" unsigned long _UNK_0052cd60;
extern "C" unsigned long _UNK_0052d120;
extern "C" unsigned long _UNK_0052d124;
extern "C" unsigned long _UNK_0052d128;
extern "C" unsigned long _UNK_0052d12c;
extern "C" unsigned long _UNK_0052d130;
extern "C" unsigned long _UNK_0052d134;
extern "C" unsigned long _UNK_0052d138;
extern "C" unsigned long _UNK_0052d13c;
extern "C" unsigned long _UNK_0052d140;
extern "C" unsigned long _UNK_0052d144;
extern "C" unsigned long _UNK_0052d148;
extern "C" unsigned long _UNK_0052d14c;
extern "C" unsigned long _UNK_0052d150;
extern "C" unsigned long _UNK_0052d154;
extern "C" unsigned long _UNK_0052d158;
extern "C" unsigned long _UNK_0052d15c;
extern "C" unsigned long _UNK_0052d160;
extern "C" unsigned long _UNK_0052d164;
extern "C" unsigned long _UNK_0052d168;
extern "C" unsigned long _UNK_0052d568;
extern "C" unsigned long _UNK_0052d56c;
extern "C" unsigned long _UNK_0052d570;
extern "C" unsigned long _UNK_0052d574;
extern "C" unsigned long _UNK_0052d578;
extern "C" unsigned long _UNK_0052d57c;
extern "C" unsigned long _UNK_0052d580;
extern "C" unsigned long _UNK_0052d584;
extern "C" unsigned long _UNK_0052d588;
extern "C" unsigned long _UNK_0052d58c;
extern "C" unsigned long _UNK_0052d590;
extern "C" unsigned long _UNK_0052d594;
extern "C" unsigned long _UNK_0052d598;
extern "C" unsigned long _UNK_0052d59c;
extern "C" unsigned long _UNK_0052d5a0;
extern "C" unsigned long _UNK_0052d5a4;
extern "C" unsigned long _UNK_0052d5a8;
extern "C" unsigned long _UNK_0052d5ac;
extern "C" unsigned long _UNK_0052d5b0;
extern "C" unsigned long _UNK_0052d5b4;
extern "C" unsigned long _UNK_0052d5b8;
extern "C" unsigned long _UNK_0052d5bc;
extern "C" unsigned long _UNK_0052d5c0;
extern "C" unsigned long _UNK_0052d5c4;
extern "C" unsigned long _UNK_0052d5c8;
extern "C" unsigned long _UNK_0052d68c;
extern "C" unsigned long _UNK_0052d690;
extern "C" unsigned long _UNK_0052d694;
extern "C" unsigned long g_0052c690;
extern "C" unsigned long g_0052c6d4;
extern "C" unsigned long g_0052c704;
extern "C" unsigned long g_0052c708;
extern "C" unsigned long g_0052c718;
extern "C" unsigned long g_0052c71c;
extern "C" unsigned long g_0052c740;
extern "C" unsigned long g_0052c744;
extern "C" unsigned long g_0052c7ec;
extern "C" unsigned long g_0052c7f0;
extern "C" unsigned long g_0052c7f4;
extern "C" unsigned long g_0052c938;
extern "C" unsigned long g_0052c964;
extern "C" unsigned long g_0052ca4e;
extern "C" unsigned long g_0052caf8;
extern "C" unsigned long g_0052cb72;
extern "C" unsigned long g_0052cb8a;
extern "C" unsigned long g_0052cbfa;
extern "C" unsigned long g_0052cc1a;
extern "C" unsigned long g_0052cc3e;
extern "C" unsigned long g_0052cc8a;
extern "C" unsigned long g_0052cca0;
extern "C" unsigned long g_0052ccc2;
extern "C" unsigned long g_0052cd0c;
extern "C" unsigned long g_0052cd10;
extern "C" unsigned long g_0052cd14;
extern "C" unsigned long g_0052cd18;
extern "C" unsigned long g_0052cd1c;
extern "C" unsigned long g_0052cd20;
extern "C" unsigned long g_0052cd24;
extern "C" unsigned long g_0052cd28;
extern "C" unsigned long g_0052cd2c;
extern "C" unsigned long g_0052cd30;
extern "C" unsigned long g_0052cd34;
extern "C" unsigned long g_0052cd38;
extern "C" unsigned long g_0052cd3c;
extern "C" unsigned long g_0052cd40;
extern "C" unsigned long g_0052cd44;
extern "C" unsigned long g_0052cd48;
extern "C" unsigned long g_0052cd4c;
extern "C" unsigned long g_0052cd50;
extern "C" unsigned long g_0052cd54;
extern "C" unsigned long g_0052cd58;
extern "C" unsigned long g_0052cd5c;
extern "C" unsigned long g_0052cd60;
extern "C" unsigned long g_0052cd92;
extern "C" unsigned long g_0052ceac;
extern "C" unsigned long g_0052cedc;
extern "C" unsigned long g_0052cf7c;
extern "C" unsigned long g_0052cf7e;
extern "C" unsigned long g_0052cf8f;
extern "C" unsigned long g_0052cfd2;
extern "C" unsigned long g_0052d08c;
extern "C" unsigned long g_0052d0ba;
extern "C" unsigned long g_0052d120;
extern "C" unsigned long g_0052d124;
extern "C" unsigned long g_0052d128;
extern "C" unsigned long g_0052d12c;
extern "C" unsigned long g_0052d130;
extern "C" unsigned long g_0052d134;
extern "C" unsigned long g_0052d138;
extern "C" unsigned long g_0052d13c;
extern "C" unsigned long g_0052d140;
extern "C" unsigned long g_0052d144;
extern "C" unsigned long g_0052d148;
extern "C" unsigned long g_0052d14c;
extern "C" unsigned long g_0052d150;
extern "C" unsigned long g_0052d154;
extern "C" unsigned long g_0052d158;
extern "C" unsigned long g_0052d15c;
extern "C" unsigned long g_0052d160;
extern "C" unsigned long g_0052d164;
extern "C" unsigned long g_0052d168;
extern "C" unsigned long g_0052d1ac;
extern "C" unsigned long g_0052d1ae;
extern "C" unsigned long g_0052d1bf;
extern "C" unsigned long g_0052d204;
extern "C" unsigned long g_0052d2c8;
extern "C" unsigned long g_0052d2f6;
extern "C" unsigned long g_0052d39a;
extern "C" unsigned long g_0052d39c;
extern "C" unsigned long g_0052d3ad;
extern "C" unsigned long g_0052d3f8;
extern "C" unsigned long g_0052d40e;
extern "C" unsigned long g_0052d49c;
extern "C" unsigned long g_0052d4b8;
extern "C" unsigned long g_0052d4e6;
extern "C" unsigned long g_0052d568;
extern "C" unsigned long g_0052d56c;
extern "C" unsigned long g_0052d570;
extern "C" unsigned long g_0052d574;
extern "C" unsigned long g_0052d578;
extern "C" unsigned long g_0052d57c;
extern "C" unsigned long g_0052d580;
extern "C" unsigned long g_0052d584;
extern "C" unsigned long g_0052d588;
extern "C" unsigned long g_0052d58c;
extern "C" unsigned long g_0052d590;
extern "C" unsigned long g_0052d594;
extern "C" unsigned long g_0052d598;
extern "C" unsigned long g_0052d59c;
extern "C" unsigned long g_0052d5a0;
extern "C" unsigned long g_0052d5a4;
extern "C" unsigned long g_0052d5a8;
extern "C" unsigned long g_0052d5ac;
extern "C" unsigned long g_0052d5b0;
extern "C" unsigned long g_0052d5b4;
extern "C" unsigned long g_0052d5b8;
extern "C" unsigned long g_0052d5bc;
extern "C" unsigned long g_0052d5c0;
extern "C" unsigned long g_0052d5c4;
extern "C" unsigned long g_0052d5c8;
extern "C" unsigned long g_0052d68c;
extern "C" unsigned long g_0052d690;
extern "C" unsigned long g_0052d694;
BLEndLessTimeShowView::~BLEndLessTimeShowView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0052c690 + g_0052c704);
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
  func_0079e45c(&uStack_14,&g_0052c6d4 + g_0052c708,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLEndLessTimeShowView::BLEndLessTimeShowView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(g_0052c7ec + 0x52c788);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache());
  ((cocos2d::CCSpriteFrameCache *)uVar1)->addSpriteFramesWithFile((char const*)((intptr_t)"items/items.plist"));
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLEndLessTimeShowView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * BLEndLessTimeShowView::create()
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

undefined4 BLEndLessTimeShowView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x108);
}

undefined4 BLEndLessTimeShowView::getLabelNum()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

undefined4 BLEndLessTimeShowView::getLabelTip()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 BLEndLessTimeShowView::getBtnBack()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

undefined4 BLEndLessTimeShowView::getBtnZheDie()
{
  return *(undefined4 *)(((int)this) + 0x118);
}

undefined4 BLEndLessTimeShowView::getSpBg()
{
  return *(undefined4 *)(((int)this) + 0x11c);
}

undefined4 BLEndLessTimeShowView::getBtnReward1()
{
  return *(undefined4 *)(((int)this) + 0x120);
}

undefined4 BLEndLessTimeShowView::getBtnReward2()
{
  return *(undefined4 *)(((int)this) + 0x124);
}

undefined4 BLEndLessTimeShowView::getBtnReward3()
{
  return *(undefined4 *)(((int)this) + 0x128);
}

undefined4 BLEndLessTimeShowView::getLabelReward1()
{
  return *(undefined4 *)(((int)this) + 300);
}

undefined4 BLEndLessTimeShowView::getLabelReward2()
{
  return *(undefined4 *)(((int)this) + 0x130);
}

undefined4 BLEndLessTimeShowView::getLabelReward3()
{
  return *(undefined4 *)(((int)this) + 0x134);
}

void BLEndLessTimeShowView::onEnter()
{
  ((BLEndLessTimeShowPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLEndLessTimeShowView::onExit()
{
  ((BLEndLessTimeShowPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
bool BLEndLessTimeShowView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
