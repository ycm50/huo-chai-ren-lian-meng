#include "BLPracticeBuyHeroView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLPracticeBuyHeroPresenter.h"
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
extern "C" unsigned long UNK_0063b610;
extern "C" unsigned long UNK_0063b654;
extern "C" unsigned long UNK_0063b698;
extern "C" unsigned long UNK_0063b6c0;
extern "C" unsigned long UNK_0063b86e;
extern "C" unsigned long UNK_0063b950;
extern "C" unsigned long UNK_0063ba4a;
extern "C" unsigned long UNK_0063ba78;
extern "C" unsigned long UNK_0063bb56;
extern "C" unsigned long UNK_0063bb80;
extern "C" unsigned long UNK_0063bc50;
extern "C" unsigned long UNK_0063bcbc;
extern "C" unsigned long UNK_0063bd7a;
extern "C" unsigned long UNK_0063bdae;
extern "C" unsigned long UNK_0063beca;
extern "C" unsigned long UNK_0063bef4;
extern "C" unsigned long _DAT_0063b760;
extern "C" unsigned long _DAT_0063b764;
extern "C" unsigned long _UNK_0063b684;
extern "C" unsigned long _UNK_0063b688;
extern "C" unsigned long _UNK_0063b69c;
extern "C" unsigned long _UNK_0063b6c4;
extern "C" unsigned long _UNK_0063bc50;
extern "C" unsigned long _UNK_0063bc54;
extern "C" unsigned long _UNK_0063bc58;
extern "C" unsigned long _UNK_0063bc5c;
extern "C" unsigned long _UNK_0063bc60;
extern "C" unsigned long _UNK_0063bc64;
extern "C" unsigned long _UNK_0063bc68;
extern "C" unsigned long _UNK_0063bc6c;
extern "C" unsigned long _UNK_0063bc70;
extern "C" unsigned long _UNK_0063bc74;
extern "C" unsigned long _UNK_0063bc78;
extern "C" unsigned long _UNK_0063bc7c;
extern "C" unsigned long _UNK_0063bc80;
extern "C" unsigned long _UNK_0063bc84;
extern "C" unsigned long _UNK_0063bc88;
extern "C" unsigned long _UNK_0063bc8c;
extern "C" unsigned long _UNK_0063c048;
extern "C" unsigned long _UNK_0063c04c;
extern "C" unsigned long _UNK_0063c050;
extern "C" unsigned long _UNK_0063c054;
extern "C" unsigned long _UNK_0063c058;
extern "C" unsigned long _UNK_0063c05c;
extern "C" unsigned long _UNK_0063c060;
extern "C" unsigned long _UNK_0063c064;
extern "C" unsigned long _UNK_0063c068;
extern "C" unsigned long _UNK_0063c06c;
extern "C" unsigned long _UNK_0063c070;
extern "C" unsigned long _UNK_0063c074;
extern "C" unsigned long _UNK_0063c078;
extern "C" unsigned long _UNK_0063c07c;
extern "C" unsigned long g_0063b610;
extern "C" unsigned long g_0063b654;
extern "C" unsigned long g_0063b684;
extern "C" unsigned long g_0063b688;
extern "C" unsigned long g_0063b698;
extern "C" unsigned long g_0063b69c;
extern "C" unsigned long g_0063b6c0;
extern "C" unsigned long g_0063b6c4;
extern "C" unsigned long g_0063b760;
extern "C" unsigned long g_0063b764;
extern "C" unsigned long g_0063b86e;
extern "C" unsigned long g_0063b950;
extern "C" unsigned long g_0063ba4a;
extern "C" unsigned long g_0063ba78;
extern "C" unsigned long g_0063bb56;
extern "C" unsigned long g_0063bb80;
extern "C" unsigned long g_0063bc50;
extern "C" unsigned long g_0063bc54;
extern "C" unsigned long g_0063bc58;
extern "C" unsigned long g_0063bc5c;
extern "C" unsigned long g_0063bc60;
extern "C" unsigned long g_0063bc64;
extern "C" unsigned long g_0063bc68;
extern "C" unsigned long g_0063bc6c;
extern "C" unsigned long g_0063bc70;
extern "C" unsigned long g_0063bc74;
extern "C" unsigned long g_0063bc78;
extern "C" unsigned long g_0063bc7c;
extern "C" unsigned long g_0063bc80;
extern "C" unsigned long g_0063bc84;
extern "C" unsigned long g_0063bc88;
extern "C" unsigned long g_0063bc8c;
extern "C" unsigned long g_0063bcbc;
extern "C" unsigned long g_0063bd7a;
extern "C" unsigned long g_0063bdae;
extern "C" unsigned long g_0063beca;
extern "C" unsigned long g_0063bef4;
extern "C" unsigned long g_0063c048;
extern "C" unsigned long g_0063c04c;
extern "C" unsigned long g_0063c050;
extern "C" unsigned long g_0063c054;
extern "C" unsigned long g_0063c058;
extern "C" unsigned long g_0063c05c;
extern "C" unsigned long g_0063c060;
extern "C" unsigned long g_0063c064;
extern "C" unsigned long g_0063c068;
extern "C" unsigned long g_0063c06c;
extern "C" unsigned long g_0063c070;
extern "C" unsigned long g_0063c074;
extern "C" unsigned long g_0063c078;
extern "C" unsigned long g_0063c07c;
BLPracticeBuyHeroView::~BLPracticeBuyHeroView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0063b610 + g_0063b684);
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
  func_0079e45c(&uStack_14,&g_0063b654 + g_0063b688,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLPracticeBuyHeroView::BLPracticeBuyHeroView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(g_0063b760 + 0x63b708);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLPracticeBuyHeroView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * BLPracticeBuyHeroView::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x128)));
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

undefined4 BLPracticeBuyHeroView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x108);
}

undefined4 BLPracticeBuyHeroView::getBackGround()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 BLPracticeBuyHeroView::getTabBg()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

undefined4 BLPracticeBuyHeroView::getBtnSure()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

undefined4 BLPracticeBuyHeroView::getBtnCancle()
{
  return *(undefined4 *)(((int)this) + 0x118);
}

undefined4 BLPracticeBuyHeroView::getLabSure()
{
  return *(undefined4 *)(((int)this) + 0x11c);
}

undefined4 BLPracticeBuyHeroView::getLabTitle()
{
  return *(undefined4 *)(((int)this) + 0x120);
}

undefined4 BLPracticeBuyHeroView::getLabCancle()
{
  return *(undefined4 *)(((int)this) + 0x124);
}

void BLPracticeBuyHeroView::onEnter()
{
  ((BLPracticeBuyHeroPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLPracticeBuyHeroView::onExit()
{
  ((BLPracticeBuyHeroPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

bool BLPracticeBuyHeroView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
