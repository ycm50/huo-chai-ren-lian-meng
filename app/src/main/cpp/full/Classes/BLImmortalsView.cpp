#include "BLImmortalsView.h"
#include "BLImmortalsPresenter.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLListButton.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
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
extern "C" long long func_0079e5bc(...);
extern "C" long long func_0079e5fc(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_00575db0;
extern "C" unsigned long UNK_00575de2;
extern "C" unsigned long UNK_00575e3c;
extern "C" unsigned long UNK_00575e64;
extern "C" unsigned long UNK_00575f62;
extern "C" unsigned long UNK_0057603c;
extern "C" unsigned long UNK_0057612a;
extern "C" unsigned long UNK_0057612c;
extern "C" unsigned long UNK_005761ea;
extern "C" unsigned long UNK_00576214;
extern "C" unsigned long UNK_0057634e;
extern "C" unsigned long UNK_0057639e;
extern "C" unsigned long UNK_005763e4;
extern "C" unsigned long UNK_0057642a;
extern "C" unsigned long UNK_00576478;
extern "C" unsigned long UNK_005764d0;
extern "C" unsigned long UNK_005764d1;
extern "C" unsigned long UNK_005764d2;
extern "C" unsigned long UNK_00576820;
extern "C" unsigned long UNK_00576852;
extern "C" unsigned long UNK_0062ff00;
extern "C" unsigned long _DAT_00575f04;
extern "C" unsigned long _DAT_00575f08;
extern "C" unsigned long _UNK_00575e28;
extern "C" unsigned long _UNK_00575e2c;
extern "C" unsigned long _UNK_00575e40;
extern "C" unsigned long _UNK_00575e68;
extern "C" unsigned long _UNK_005762e4;
extern "C" unsigned long _UNK_005762e8;
extern "C" unsigned long _UNK_005762ec;
extern "C" unsigned long _UNK_005762f0;
extern "C" unsigned long _UNK_005762f4;
extern "C" unsigned long _UNK_005762f8;
extern "C" unsigned long _UNK_005762fc;
extern "C" unsigned long _UNK_00576300;
extern "C" unsigned long _UNK_00576304;
extern "C" unsigned long _UNK_00576308;
extern "C" unsigned long _UNK_0057630c;
extern "C" unsigned long _UNK_00576310;
extern "C" unsigned long _UNK_00576314;
extern "C" unsigned long _UNK_00576318;
extern "C" unsigned long _UNK_0057631c;
extern "C" unsigned long _UNK_00576320;
extern "C" unsigned long _UNK_00576324;
extern "C" unsigned long _UNK_00576328;
extern "C" unsigned long _UNK_0057632c;
extern "C" unsigned long _UNK_005766f8;
extern "C" unsigned long _UNK_005766fc;
extern "C" unsigned long _UNK_00576700;
extern "C" unsigned long _UNK_00576704;
extern "C" unsigned long _UNK_00576708;
extern "C" unsigned long _UNK_0057670c;
extern "C" unsigned long _UNK_00576710;
extern "C" unsigned long _UNK_00576714;
extern "C" unsigned long _UNK_00576718;
extern "C" unsigned long _UNK_0057671c;
extern "C" unsigned long _UNK_00576720;
extern "C" unsigned long _UNK_00576724;
extern "C" unsigned long _UNK_00576a40;
extern "C" unsigned long _UNK_00576a44;
extern "C" unsigned long _UNK_00576a48;
extern "C" unsigned long _UNK_00576a4c;
extern "C" unsigned long _UNK_00576a50;
extern "C" unsigned long _UNK_00576a54;
extern "C" unsigned long _UNK_00576a58;
extern "C" unsigned long _UNK_00576a5c;
extern "C" unsigned long _UNK_00576a60;
extern "C" unsigned long g_00575db0;
extern "C" unsigned long g_00575de2;
extern "C" unsigned long g_00575e28;
extern "C" unsigned long g_00575e2c;
extern "C" unsigned long g_00575e3c;
extern "C" unsigned long g_00575e40;
extern "C" unsigned long g_00575e64;
extern "C" unsigned long g_00575e68;
extern "C" unsigned long g_00575f04;
extern "C" unsigned long g_00575f08;
extern "C" unsigned long g_00575f62;
extern "C" unsigned long g_0057603c;
extern "C" unsigned long g_0057612a;
extern "C" unsigned long g_0057612c;
extern "C" unsigned long g_005761ea;
extern "C" unsigned long g_00576214;
extern "C" unsigned long g_005762e4;
extern "C" unsigned long g_005762e8;
extern "C" unsigned long g_005762ec;
extern "C" unsigned long g_005762f0;
extern "C" unsigned long g_005762f4;
extern "C" unsigned long g_005762f8;
extern "C" unsigned long g_005762fc;
extern "C" unsigned long g_00576300;
extern "C" unsigned long g_00576304;
extern "C" unsigned long g_00576308;
extern "C" unsigned long g_0057630c;
extern "C" unsigned long g_00576310;
extern "C" unsigned long g_00576314;
extern "C" unsigned long g_00576318;
extern "C" unsigned long g_0057631c;
extern "C" unsigned long g_00576320;
extern "C" unsigned long g_00576324;
extern "C" unsigned long g_00576328;
extern "C" unsigned long g_0057632c;
extern "C" unsigned long g_0057634e;
extern "C" unsigned long g_0057639e;
extern "C" unsigned long g_005763e4;
extern "C" unsigned long g_0057642a;
extern "C" unsigned long g_00576478;
extern "C" unsigned long g_005764d0;
extern "C" unsigned long g_005764d1;
extern "C" unsigned long g_005764d2;
extern "C" unsigned long g_005766f8;
extern "C" unsigned long g_005766fc;
extern "C" unsigned long g_00576700;
extern "C" unsigned long g_00576704;
extern "C" unsigned long g_00576708;
extern "C" unsigned long g_0057670c;
extern "C" unsigned long g_00576710;
extern "C" unsigned long g_00576714;
extern "C" unsigned long g_00576718;
extern "C" unsigned long g_0057671c;
extern "C" unsigned long g_00576720;
extern "C" unsigned long g_00576724;
extern "C" unsigned long g_00576820;
extern "C" unsigned long g_00576852;
extern "C" unsigned long g_00576a40;
extern "C" unsigned long g_00576a44;
extern "C" unsigned long g_00576a48;
extern "C" unsigned long g_00576a4c;
extern "C" unsigned long g_00576a50;
extern "C" unsigned long g_00576a54;
extern "C" unsigned long g_00576a58;
extern "C" unsigned long g_00576a5c;
extern "C" unsigned long g_00576a60;
extern "C" unsigned long g_0062ff00;
BLImmortalsView::~BLImmortalsView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_00575db0 + g_00575e28);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00575de2 + g_00575e2c,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  if (*(int *)((int)this + 4*(0x42)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x42)) = 0;
  }
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLImmortalsView::BLImmortalsView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(g_00575f04 + 0x575eac);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLImmortalsView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}


bool BLImmortalsView::init()
{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = ((cocos2d::CCLayer *)this)->init();
  if (iVar1 != 0) {
    uVar2 = (undefined4)(((BLImmortalsPresenter *)this)->create());
    *(undefined4 *)(((int)this) + 0x108) = uVar2;
    ((cocos2d::CCObject *)this)->retain();
    BLImmortalsView::initView();
    ((BLImmortalsPresenter *)*(undefined4 *)(((int)this) + 0x108))->initWithView((BLImmortalsView*)((int)this));
  }
  return iVar1;
}

void BLImmortalsView::onEnter()
{
  ((BLImmortalsPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLImmortalsView::onExit()
{
  ((BLImmortalsPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
void BLImmortalsView::initView()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
