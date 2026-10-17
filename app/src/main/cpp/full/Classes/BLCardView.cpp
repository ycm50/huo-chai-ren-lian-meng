#include "BLCardView.h"
#include "BLCardPresenter.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "PagedScrollView.h"
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
extern "C" long long ghidra_CONCAT13(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_005047b0;
extern "C" unsigned long UNK_00504802;
extern "C" unsigned long UNK_00504848;
extern "C" unsigned long UNK_00504870;
extern "C" unsigned long UNK_00504b0a;
extern "C" unsigned long UNK_00504be2;
extern "C" unsigned long UNK_00504cca;
extern "C" unsigned long UNK_00504e46;
extern "C" unsigned long UNK_00504f68;
extern "C" unsigned long UNK_00504f7e;
extern "C" unsigned long UNK_0050500c;
extern "C" unsigned long UNK_00505040;
extern "C" unsigned long UNK_0050510e;
extern "C" unsigned long UNK_0050519c;
extern "C" unsigned long UNK_005051a0;
extern "C" unsigned long UNK_00505200;
extern "C" unsigned long UNK_00505214;
extern "C" unsigned long UNK_00505262;
extern "C" unsigned long UNK_00505278;
extern "C" unsigned long UNK_0050529f;
extern "C" unsigned long UNK_00505310;
extern "C" unsigned long UNK_00505312;
extern "C" unsigned long UNK_00505408;
extern "C" unsigned long UNK_005054e8;
extern "C" unsigned long UNK_005054ea;
extern "C" unsigned long UNK_005054fe;
extern "C" unsigned long UNK_005055a4;
extern "C" unsigned long UNK_00505678;
extern "C" unsigned long UNK_0050567c;
extern "C" unsigned long UNK_00505690;
extern "C" unsigned long UNK_00505693;
extern "C" unsigned long UNK_005056d8;
extern "C" unsigned long UNK_0050577a;
extern "C" unsigned long _DAT_00504928;
extern "C" unsigned long _DAT_0050492c;
extern "C" unsigned long _UNK_00504834;
extern "C" unsigned long _UNK_00504838;
extern "C" unsigned long _UNK_0050484c;
extern "C" unsigned long _UNK_00504874;
extern "C" unsigned long _UNK_00504ef4;
extern "C" unsigned long _UNK_00504ef8;
extern "C" unsigned long _UNK_00504efc;
extern "C" unsigned long _UNK_00504f00;
extern "C" unsigned long _UNK_00504f04;
extern "C" unsigned long _UNK_00504f08;
extern "C" unsigned long _UNK_00504f0c;
extern "C" unsigned long _UNK_00504f10;
extern "C" unsigned long _UNK_00504f14;
extern "C" unsigned long _UNK_00504f18;
extern "C" unsigned long _UNK_00504f1c;
extern "C" unsigned long _UNK_00504f20;
extern "C" unsigned long _UNK_00504f24;
extern "C" unsigned long _UNK_00504f28;
extern "C" unsigned long _UNK_00504f2c;
extern "C" unsigned long _UNK_0050533c;
extern "C" unsigned long _UNK_00505340;
extern "C" unsigned long _UNK_00505344;
extern "C" unsigned long _UNK_00505348;
extern "C" unsigned long _UNK_0050534c;
extern "C" unsigned long _UNK_00505350;
extern "C" unsigned long _UNK_00505354;
extern "C" unsigned long _UNK_00505358;
extern "C" unsigned long _UNK_0050535c;
extern "C" unsigned long _UNK_00505360;
extern "C" unsigned long _UNK_00505364;
extern "C" unsigned long _UNK_00505368;
extern "C" unsigned long _UNK_0050536c;
extern "C" unsigned long _UNK_00505370;
extern "C" unsigned long _UNK_00505374;
extern "C" unsigned long _UNK_00505378;
extern "C" unsigned long _UNK_0050537c;
extern "C" unsigned long _UNK_00505380;
extern "C" unsigned long _UNK_00505384;
extern "C" unsigned long _UNK_00505388;
extern "C" unsigned long _UNK_0050538c;
extern "C" unsigned long _UNK_00505390;
extern "C" unsigned long _UNK_00505394;
extern "C" unsigned long _UNK_00505398;
extern "C" unsigned long _UNK_0050539c;
extern "C" unsigned long _UNK_005053a0;
extern "C" unsigned long _UNK_005053a4;
extern "C" unsigned long _UNK_005057b4;
extern "C" unsigned long _UNK_005057b8;
extern "C" unsigned long _UNK_005057bc;
extern "C" unsigned long _UNK_005057c0;
extern "C" unsigned long _UNK_005057c4;
extern "C" unsigned long _UNK_005057c8;
extern "C" unsigned long _UNK_005057cc;
extern "C" unsigned long _UNK_005057d0;
extern "C" unsigned long _UNK_005057d4;
extern "C" unsigned long _UNK_005057d8;
extern "C" unsigned long _UNK_005057dc;
extern "C" unsigned long _UNK_005057e0;
extern "C" unsigned long _UNK_005057e4;
extern "C" unsigned long _UNK_005057e8;
extern "C" unsigned long _UNK_005057ec;
extern "C" unsigned long _UNK_005057f0;
extern "C" unsigned long _UNK_005057f4;
extern "C" unsigned long _UNK_005057f8;
extern "C" unsigned long _UNK_005057fc;
extern "C" unsigned long _UNK_005058f0;
extern "C" unsigned long _UNK_005058f4;
extern "C" unsigned long _UNK_005058f8;
extern "C" unsigned long _UNK_005058fc;
extern "C" unsigned long g_005047b0;
extern "C" unsigned long g_00504802;
extern "C" unsigned long g_00504834;
extern "C" unsigned long g_00504838;
extern "C" unsigned long g_00504848;
extern "C" unsigned long g_0050484c;
extern "C" unsigned long g_00504870;
extern "C" unsigned long g_00504874;
extern "C" unsigned long g_00504928;
extern "C" unsigned long g_0050492c;
extern "C" unsigned long g_00504b0a;
extern "C" unsigned long g_00504be2;
extern "C" unsigned long g_00504cca;
extern "C" unsigned long g_00504e46;
extern "C" unsigned long g_00504ef4;
extern "C" unsigned long g_00504ef8;
extern "C" unsigned long g_00504efc;
extern "C" unsigned long g_00504f00;
extern "C" unsigned long g_00504f04;
extern "C" unsigned long g_00504f08;
extern "C" unsigned long g_00504f0c;
extern "C" unsigned long g_00504f10;
extern "C" unsigned long g_00504f14;
extern "C" unsigned long g_00504f18;
extern "C" unsigned long g_00504f1c;
extern "C" unsigned long g_00504f20;
extern "C" unsigned long g_00504f24;
extern "C" unsigned long g_00504f28;
extern "C" unsigned long g_00504f2c;
extern "C" unsigned long g_00504f68;
extern "C" unsigned long g_00504f7e;
extern "C" unsigned long g_0050500c;
extern "C" unsigned long g_00505040;
extern "C" unsigned long g_0050510e;
extern "C" unsigned long g_0050519c;
extern "C" unsigned long g_005051a0;
extern "C" unsigned long g_00505200;
extern "C" unsigned long g_00505214;
extern "C" unsigned long g_00505262;
extern "C" unsigned long g_00505278;
extern "C" unsigned long g_0050529f;
extern "C" unsigned long g_00505310;
extern "C" unsigned long g_00505312;
extern "C" unsigned long g_0050533c;
extern "C" unsigned long g_00505340;
extern "C" unsigned long g_00505344;
extern "C" unsigned long g_00505348;
extern "C" unsigned long g_0050534c;
extern "C" unsigned long g_00505350;
extern "C" unsigned long g_00505354;
extern "C" unsigned long g_00505358;
extern "C" unsigned long g_0050535c;
extern "C" unsigned long g_00505360;
extern "C" unsigned long g_00505364;
extern "C" unsigned long g_00505368;
extern "C" unsigned long g_0050536c;
extern "C" unsigned long g_00505370;
extern "C" unsigned long g_00505374;
extern "C" unsigned long g_00505378;
extern "C" unsigned long g_0050537c;
extern "C" unsigned long g_00505380;
extern "C" unsigned long g_00505384;
extern "C" unsigned long g_00505388;
extern "C" unsigned long g_0050538c;
extern "C" unsigned long g_00505390;
extern "C" unsigned long g_00505394;
extern "C" unsigned long g_00505398;
extern "C" unsigned long g_0050539c;
extern "C" unsigned long g_005053a0;
extern "C" unsigned long g_005053a4;
extern "C" unsigned long g_00505408;
extern "C" unsigned long g_005054e8;
extern "C" unsigned long g_005054ea;
extern "C" unsigned long g_005054fe;
extern "C" unsigned long g_005055a4;
extern "C" unsigned long g_00505678;
extern "C" unsigned long g_0050567c;
extern "C" unsigned long g_00505690;
extern "C" unsigned long g_00505693;
extern "C" unsigned long g_005056d8;
extern "C" unsigned long g_0050577a;
extern "C" unsigned long g_005057b4;
extern "C" unsigned long g_005057b8;
extern "C" unsigned long g_005057bc;
extern "C" unsigned long g_005057c0;
extern "C" unsigned long g_005057c4;
extern "C" unsigned long g_005057c8;
extern "C" unsigned long g_005057cc;
extern "C" unsigned long g_005057d0;
extern "C" unsigned long g_005057d4;
extern "C" unsigned long g_005057d8;
extern "C" unsigned long g_005057dc;
extern "C" unsigned long g_005057e0;
extern "C" unsigned long g_005057e4;
extern "C" unsigned long g_005057e8;
extern "C" unsigned long g_005057ec;
extern "C" unsigned long g_005057f0;
extern "C" unsigned long g_005057f4;
extern "C" unsigned long g_005057f8;
extern "C" unsigned long g_005057fc;
extern "C" unsigned long g_005058f0;
extern "C" unsigned long g_005058f4;
extern "C" unsigned long g_005058f8;
extern "C" unsigned long g_005058fc;
BLCardView::~BLCardView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_005047b0 + g_00504834);
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
  func_0079e45c(&uStack_14,&g_00504802 + g_00504838,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}


int * BLCardView::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x13c)));
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

undefined4 BLCardView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 BLCardView::getBtnClose()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

undefined4 BLCardView::getBtnJiHuo()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

undefined4 BLCardView::getLabeJiHuo()
{
  return *(undefined4 *)(((int)this) + 0x128);
}

undefined4 BLCardView::getLabeLeftDays()
{
  return *(undefined4 *)(((int)this) + 0x124);
}

undefined4 BLCardView::getLabeMony()
{
  return *(undefined4 *)(((int)this) + 300);
}

undefined4 BLCardView::getLabGet()
{
  return *(undefined4 *)(((int)this) + 0x11c);
}

undefined4 BLCardView::getLabGetNum()
{
  return *(undefined4 *)(((int)this) + 0x120);
}

undefined4 BLCardView::getLabTitle()
{
  return *(undefined4 *)(((int)this) + 0x118);
}

undefined4 BLCardView::getSpDiamod()
{
  return *(undefined4 *)(((int)this) + 0x130);
}

undefined4 BLCardView::getLabeLevel()
{
  return *(undefined4 *)(((int)this) + 0x134);
}

undefined4 BLCardView::getScrollView()
{
  return *(undefined4 *)(((int)this) + 0x138);
}

void BLCardView::onEnter()
{
  ((cocos2d::CCLayer *)this)->onEnter();
  ((BLCardPresenter *)*(undefined4 *)(((int)this) + 0x10c))->onEnter();
  return;
}

void BLCardView::onExit()
{
  ((BLCardPresenter *)*(undefined4 *)(((int)this) + 0x10c))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (2) =====
BLCardView::BLCardView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = (undefined4)(intptr_t)(*(int *)(g_00504928 + 0x5048b8));
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
  func_0079e45c(&uStack_14,((intptr_t)"BLCardView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

bool BLCardView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
