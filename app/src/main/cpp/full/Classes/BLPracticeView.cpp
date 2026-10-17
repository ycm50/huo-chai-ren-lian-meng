#include "BLPracticeView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLPracticePresenter.h"
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
extern "C" long long ghidra_CONCAT13(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_00640930;
extern "C" unsigned long UNK_00640974;
extern "C" unsigned long UNK_006409b8;
extern "C" unsigned long UNK_006409e0;
extern "C" unsigned long UNK_00640b5c;
extern "C" unsigned long UNK_00640dbc;
extern "C" unsigned long UNK_00640de8;
extern "C" unsigned long UNK_00640f2e;
extern "C" unsigned long UNK_00640f8a;
extern "C" unsigned long _DAT_00640ab8;
extern "C" unsigned long _DAT_00640abc;
extern "C" unsigned long _UNK_006409a4;
extern "C" unsigned long _UNK_006409a8;
extern "C" unsigned long _UNK_006409bc;
extern "C" unsigned long _UNK_006409e4;
extern "C" unsigned long _UNK_00640f44;
extern "C" unsigned long _UNK_00640f48;
extern "C" unsigned long _UNK_00640f4c;
extern "C" unsigned long _UNK_00640f50;
extern "C" unsigned long _UNK_00640f54;
extern "C" unsigned long _UNK_00640f58;
extern "C" unsigned long _UNK_00640f5c;
extern "C" unsigned long _UNK_00640f60;
extern "C" unsigned long _UNK_00640f64;
extern "C" unsigned long _UNK_00640f68;
extern "C" unsigned long _UNK_00640f6c;
extern "C" unsigned long _UNK_00640f70;
extern "C" unsigned long _UNK_006411b0;
extern "C" unsigned long _UNK_006411b4;
extern "C" unsigned long _UNK_006411b8;
extern "C" unsigned long _UNK_006411bc;
extern "C" unsigned long _UNK_006411c0;
extern "C" unsigned long _UNK_006411c4;
extern "C" unsigned long _UNK_006411c8;
extern "C" unsigned long _UNK_006411cc;
extern "C" unsigned long _UNK_006411d0;
extern "C" unsigned long _UNK_006411d4;
extern "C" unsigned long g_00640930;
extern "C" unsigned long g_00640974;
extern "C" unsigned long g_006409a4;
extern "C" unsigned long g_006409a8;
extern "C" unsigned long g_006409b8;
extern "C" unsigned long g_006409bc;
extern "C" unsigned long g_006409e0;
extern "C" unsigned long g_006409e4;
extern "C" unsigned long g_00640ab8;
extern "C" unsigned long g_00640abc;
extern "C" unsigned long g_00640b5c;
extern "C" unsigned long g_00640dbc;
extern "C" unsigned long g_00640de8;
extern "C" unsigned long g_00640f2e;
extern "C" unsigned long g_00640f44;
extern "C" unsigned long g_00640f48;
extern "C" unsigned long g_00640f4c;
extern "C" unsigned long g_00640f50;
extern "C" unsigned long g_00640f54;
extern "C" unsigned long g_00640f58;
extern "C" unsigned long g_00640f5c;
extern "C" unsigned long g_00640f60;
extern "C" unsigned long g_00640f64;
extern "C" unsigned long g_00640f68;
extern "C" unsigned long g_00640f6c;
extern "C" unsigned long g_00640f70;
extern "C" unsigned long g_00640f8a;
extern "C" unsigned long g_006411b0;
extern "C" unsigned long g_006411b4;
extern "C" unsigned long g_006411b8;
extern "C" unsigned long g_006411bc;
extern "C" unsigned long g_006411c0;
extern "C" unsigned long g_006411c4;
extern "C" unsigned long g_006411c8;
extern "C" unsigned long g_006411cc;
extern "C" unsigned long g_006411d0;
extern "C" unsigned long g_006411d4;
BLPracticeView::~BLPracticeView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_00640930 + g_006409a4);
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
  func_0079e45c(&uStack_14,&g_00640974 + g_006409a8,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLPracticeView::BLPracticeView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(g_00640ab8 + 0x640a60);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLPracticeView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * BLPracticeView::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x114)));
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

void BLPracticeView::onEnter()
{
  ((BLPracticePresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLPracticeView::onExit()
{
  ((BLPracticePresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

bool BLPracticeView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
