#include "PKHeroRankItemView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "PKHeroRankItemPresenter.h"
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
extern "C" unsigned long UNK_00616478;
extern "C" unsigned long UNK_006164bc;
extern "C" unsigned long UNK_00616500;
extern "C" unsigned long UNK_00616528;
extern "C" unsigned long UNK_00616570;
extern "C" unsigned long UNK_0061659e;
extern "C" unsigned long UNK_006166c8;
extern "C" unsigned long UNK_006167aa;
extern "C" unsigned long UNK_00616858;
extern "C" unsigned long UNK_00616882;
extern "C" unsigned long UNK_00616942;
extern "C" unsigned long UNK_0061696e;
extern "C" unsigned long UNK_00616a34;
extern "C" unsigned long UNK_00616a60;
extern "C" unsigned long _UNK_006164ec;
extern "C" unsigned long _UNK_006164f0;
extern "C" unsigned long _UNK_00616504;
extern "C" unsigned long _UNK_0061652c;
extern "C" unsigned long _UNK_006165c8;
extern "C" unsigned long _UNK_006165cc;
extern "C" unsigned long _UNK_00616aa4;
extern "C" unsigned long _UNK_00616aa8;
extern "C" unsigned long _UNK_00616aac;
extern "C" unsigned long _UNK_00616ab0;
extern "C" unsigned long _UNK_00616ab4;
extern "C" unsigned long _UNK_00616ab8;
extern "C" unsigned long _UNK_00616abc;
extern "C" unsigned long _UNK_00616ac0;
extern "C" unsigned long _UNK_00616ac4;
extern "C" unsigned long _UNK_00616ac8;
extern "C" unsigned long _UNK_00616acc;
extern "C" unsigned long _UNK_00616ad0;
extern "C" unsigned long _UNK_00616ad4;
extern "C" unsigned long _UNK_00616ad8;
extern "C" unsigned long _UNK_00616adc;
extern "C" unsigned long _UNK_00616ae0;
extern "C" unsigned long _UNK_00616ae4;
extern "C" unsigned long _UNK_00616be0;
extern "C" unsigned long _UNK_00616be4;
extern "C" unsigned long _UNK_00616be8;
extern "C" unsigned long g_00616478;
extern "C" unsigned long g_006164bc;
extern "C" unsigned long g_006164ec;
extern "C" unsigned long g_006164f0;
extern "C" unsigned long g_00616500;
extern "C" unsigned long g_00616504;
extern "C" unsigned long g_00616528;
extern "C" unsigned long g_0061652c;
extern "C" unsigned long g_00616570;
extern "C" unsigned long g_0061659e;
extern "C" unsigned long g_006165c8;
extern "C" unsigned long g_006165cc;
extern "C" unsigned long g_006166c8;
extern "C" unsigned long g_006167aa;
extern "C" unsigned long g_00616858;
extern "C" unsigned long g_00616882;
extern "C" unsigned long g_00616942;
extern "C" unsigned long g_0061696e;
extern "C" unsigned long g_00616a34;
extern "C" unsigned long g_00616a60;
extern "C" unsigned long g_00616aa4;
extern "C" unsigned long g_00616aa8;
extern "C" unsigned long g_00616aac;
extern "C" unsigned long g_00616ab0;
extern "C" unsigned long g_00616ab4;
extern "C" unsigned long g_00616ab8;
extern "C" unsigned long g_00616abc;
extern "C" unsigned long g_00616ac0;
extern "C" unsigned long g_00616ac4;
extern "C" unsigned long g_00616ac8;
extern "C" unsigned long g_00616acc;
extern "C" unsigned long g_00616ad0;
extern "C" unsigned long g_00616ad4;
extern "C" unsigned long g_00616ad8;
extern "C" unsigned long g_00616adc;
extern "C" unsigned long g_00616ae0;
extern "C" unsigned long g_00616ae4;
extern "C" unsigned long g_00616be0;
extern "C" unsigned long g_00616be4;
extern "C" unsigned long g_00616be8;
PKHeroRankItemView::~PKHeroRankItemView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_00616478 + g_006164ec);
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
  func_0079e45c(&uStack_14,&g_006164bc + g_006164f0,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

PKHeroRankItemView::PKHeroRankItemView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_00616570 + g_006165c8);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0061659e + g_006165cc,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * PKHeroRankItemView::create()
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

undefined4 PKHeroRankItemView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x108);
}

undefined4 PKHeroRankItemView::getLblName()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 PKHeroRankItemView::getBtnShowDes()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

undefined4 PKHeroRankItemView::getLblZhanLi()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

undefined4 PKHeroRankItemView::getSprimg_icon()
{
  return *(undefined4 *)(((int)this) + 0x118);
}

undefined4 PKHeroRankItemView::getLblIcon()
{
  return *(undefined4 *)(((int)this) + 0x120);
}

void PKHeroRankItemView::onEnter()
{
  ((PKHeroRankItemPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void PKHeroRankItemView::onExit()
{
  ((PKHeroRankItemPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
bool PKHeroRankItemView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
