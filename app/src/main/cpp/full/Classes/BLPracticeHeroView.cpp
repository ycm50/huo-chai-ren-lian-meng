#include "BLPracticeHeroView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLPracticeHeroPresenter.h"
#include "BLTableView.h"
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
extern "C" long long func_0079e59c(...);
extern "C" long long ghidra_CONCAT13(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0063d8b0;
extern "C" unsigned long UNK_0063d8f4;
extern "C" unsigned long UNK_0063d938;
extern "C" unsigned long UNK_0063d960;
extern "C" unsigned long UNK_0063dade;
extern "C" unsigned long UNK_0063dbb8;
extern "C" unsigned long UNK_0063dc6a;
extern "C" unsigned long UNK_0063dc9c;
extern "C" unsigned long UNK_0063dd5a;
extern "C" unsigned long UNK_0063dd8c;
extern "C" unsigned long UNK_0063e01e;
extern "C" unsigned long UNK_0063e102;
extern "C" unsigned long UNK_0063e12c;
extern "C" unsigned long UNK_0063e1f4;
extern "C" unsigned long UNK_0063e22a;
extern "C" unsigned long UNK_0063e2f0;
extern "C" unsigned long UNK_0063e324;
extern "C" unsigned long UNK_0063e41c;
extern "C" unsigned long UNK_0063e446;
extern "C" unsigned long UNK_0063e50e;
extern "C" unsigned long UNK_0063e540;
extern "C" unsigned long UNK_0063e5f6;
extern "C" unsigned long UNK_0063e620;
extern "C" unsigned long UNK_0063e6dc;
extern "C" unsigned long UNK_0063e708;
extern "C" unsigned long UNK_0063e810;
extern "C" unsigned long UNK_0063e812;
extern "C" unsigned long UNK_0063e82b;
extern "C" unsigned long _DAT_0063da38;
extern "C" unsigned long _DAT_0063da3c;
extern "C" unsigned long _UNK_0063d924;
extern "C" unsigned long _UNK_0063d928;
extern "C" unsigned long _UNK_0063d93c;
extern "C" unsigned long _UNK_0063d964;
extern "C" unsigned long _UNK_0063dec4;
extern "C" unsigned long _UNK_0063dec8;
extern "C" unsigned long _UNK_0063decc;
extern "C" unsigned long _UNK_0063ded0;
extern "C" unsigned long _UNK_0063ded4;
extern "C" unsigned long _UNK_0063ded8;
extern "C" unsigned long _UNK_0063dedc;
extern "C" unsigned long _UNK_0063dee0;
extern "C" unsigned long _UNK_0063dee4;
extern "C" unsigned long _UNK_0063dee8;
extern "C" unsigned long _UNK_0063deec;
extern "C" unsigned long _UNK_0063def0;
extern "C" unsigned long _UNK_0063def4;
extern "C" unsigned long _UNK_0063def8;
extern "C" unsigned long _UNK_0063defc;
extern "C" unsigned long _UNK_0063df00;
extern "C" unsigned long _UNK_0063df04;
extern "C" unsigned long _UNK_0063df08;
extern "C" unsigned long _UNK_0063e340;
extern "C" unsigned long _UNK_0063e344;
extern "C" unsigned long _UNK_0063e348;
extern "C" unsigned long _UNK_0063e34c;
extern "C" unsigned long _UNK_0063e350;
extern "C" unsigned long _UNK_0063e354;
extern "C" unsigned long _UNK_0063e358;
extern "C" unsigned long _UNK_0063e35c;
extern "C" unsigned long _UNK_0063e360;
extern "C" unsigned long _UNK_0063e364;
extern "C" unsigned long _UNK_0063e368;
extern "C" unsigned long _UNK_0063e36c;
extern "C" unsigned long _UNK_0063e370;
extern "C" unsigned long _UNK_0063e374;
extern "C" unsigned long _UNK_0063e378;
extern "C" unsigned long _UNK_0063e37c;
extern "C" unsigned long _UNK_0063e380;
extern "C" unsigned long _UNK_0063e774;
extern "C" unsigned long _UNK_0063e778;
extern "C" unsigned long _UNK_0063e77c;
extern "C" unsigned long _UNK_0063e780;
extern "C" unsigned long _UNK_0063e784;
extern "C" unsigned long _UNK_0063e788;
extern "C" unsigned long _UNK_0063e78c;
extern "C" unsigned long _UNK_0063e790;
extern "C" unsigned long _UNK_0063e794;
extern "C" unsigned long _UNK_0063e798;
extern "C" unsigned long _UNK_0063e79c;
extern "C" unsigned long _UNK_0063e7a0;
extern "C" unsigned long _UNK_0063e7a4;
extern "C" unsigned long _UNK_0063e7a8;
extern "C" unsigned long _UNK_0063e7ac;
extern "C" unsigned long _UNK_0063e9e4;
extern "C" unsigned long _UNK_0063e9e8;
extern "C" unsigned long _UNK_0063e9ec;
extern "C" unsigned long _UNK_0063e9f0;
extern "C" unsigned long _UNK_0063e9f4;
extern "C" unsigned long _UNK_0063e9f8;
extern "C" unsigned long _UNK_0063e9fc;
extern "C" unsigned long _UNK_0063ea00;
extern "C" unsigned long g_0063d8b0;
extern "C" unsigned long g_0063d8f4;
extern "C" unsigned long g_0063d924;
extern "C" unsigned long g_0063d928;
extern "C" unsigned long g_0063d938;
extern "C" unsigned long g_0063d93c;
extern "C" unsigned long g_0063d960;
extern "C" unsigned long g_0063d964;
extern "C" unsigned long g_0063da38;
extern "C" unsigned long g_0063da3c;
extern "C" unsigned long g_0063dade;
extern "C" unsigned long g_0063dbb8;
extern "C" unsigned long g_0063dc6a;
extern "C" unsigned long g_0063dc9c;
extern "C" unsigned long g_0063dd5a;
extern "C" unsigned long g_0063dd8c;
extern "C" unsigned long g_0063dec4;
extern "C" unsigned long g_0063dec8;
extern "C" unsigned long g_0063decc;
extern "C" unsigned long g_0063ded0;
extern "C" unsigned long g_0063ded4;
extern "C" unsigned long g_0063ded8;
extern "C" unsigned long g_0063dedc;
extern "C" unsigned long g_0063dee0;
extern "C" unsigned long g_0063dee4;
extern "C" unsigned long g_0063dee8;
extern "C" unsigned long g_0063deec;
extern "C" unsigned long g_0063def0;
extern "C" unsigned long g_0063def4;
extern "C" unsigned long g_0063def8;
extern "C" unsigned long g_0063defc;
extern "C" unsigned long g_0063df00;
extern "C" unsigned long g_0063df04;
extern "C" unsigned long g_0063df08;
extern "C" unsigned long g_0063e01e;
extern "C" unsigned long g_0063e102;
extern "C" unsigned long g_0063e12c;
extern "C" unsigned long g_0063e1f4;
extern "C" unsigned long g_0063e22a;
extern "C" unsigned long g_0063e2f0;
extern "C" unsigned long g_0063e324;
extern "C" unsigned long g_0063e340;
extern "C" unsigned long g_0063e344;
extern "C" unsigned long g_0063e348;
extern "C" unsigned long g_0063e34c;
extern "C" unsigned long g_0063e350;
extern "C" unsigned long g_0063e354;
extern "C" unsigned long g_0063e358;
extern "C" unsigned long g_0063e35c;
extern "C" unsigned long g_0063e360;
extern "C" unsigned long g_0063e364;
extern "C" unsigned long g_0063e368;
extern "C" unsigned long g_0063e36c;
extern "C" unsigned long g_0063e370;
extern "C" unsigned long g_0063e374;
extern "C" unsigned long g_0063e378;
extern "C" unsigned long g_0063e37c;
extern "C" unsigned long g_0063e380;
extern "C" unsigned long g_0063e41c;
extern "C" unsigned long g_0063e446;
extern "C" unsigned long g_0063e50e;
extern "C" unsigned long g_0063e540;
extern "C" unsigned long g_0063e5f6;
extern "C" unsigned long g_0063e620;
extern "C" unsigned long g_0063e6dc;
extern "C" unsigned long g_0063e708;
extern "C" unsigned long g_0063e774;
extern "C" unsigned long g_0063e778;
extern "C" unsigned long g_0063e77c;
extern "C" unsigned long g_0063e780;
extern "C" unsigned long g_0063e784;
extern "C" unsigned long g_0063e788;
extern "C" unsigned long g_0063e78c;
extern "C" unsigned long g_0063e790;
extern "C" unsigned long g_0063e794;
extern "C" unsigned long g_0063e798;
extern "C" unsigned long g_0063e79c;
extern "C" unsigned long g_0063e7a0;
extern "C" unsigned long g_0063e7a4;
extern "C" unsigned long g_0063e7a8;
extern "C" unsigned long g_0063e7ac;
extern "C" unsigned long g_0063e810;
extern "C" unsigned long g_0063e812;
extern "C" unsigned long g_0063e82b;
extern "C" unsigned long g_0063e9e4;
extern "C" unsigned long g_0063e9e8;
extern "C" unsigned long g_0063e9ec;
extern "C" unsigned long g_0063e9f0;
extern "C" unsigned long g_0063e9f4;
extern "C" unsigned long g_0063e9f8;
extern "C" unsigned long g_0063e9fc;
extern "C" unsigned long g_0063ea00;
BLPracticeHeroView::~BLPracticeHeroView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0063d8b0 + g_0063d924);
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
  func_0079e45c(&uStack_14,&g_0063d8f4 + g_0063d928,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLPracticeHeroView::BLPracticeHeroView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(g_0063da38 + 0x63d9e0);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLPracticeHeroView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * BLPracticeHeroView::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(300)));
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

void BLPracticeHeroView::onEnter()
{
  ((BLPracticeHeroPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLPracticeHeroView::onExit()
{
  ((BLPracticeHeroPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

bool BLPracticeHeroView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
