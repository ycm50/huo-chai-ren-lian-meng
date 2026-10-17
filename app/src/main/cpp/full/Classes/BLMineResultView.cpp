#include "BLMineResultView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLMineResultPresenter.h"
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
extern "C" unsigned long UNK_006654cc;
extern "C" unsigned long UNK_00665510;
extern "C" unsigned long UNK_00665554;
extern "C" unsigned long UNK_0066557c;
extern "C" unsigned long UNK_00665728;
extern "C" unsigned long UNK_0066580a;
extern "C" unsigned long UNK_006658ac;
extern "C" unsigned long UNK_0066595c;
extern "C" unsigned long UNK_0066598c;
extern "C" unsigned long UNK_006659b6;
extern "C" unsigned long UNK_00665a70;
extern "C" unsigned long UNK_00665a9a;
extern "C" unsigned long UNK_00665b98;
extern "C" unsigned long UNK_00665c80;
extern "C" unsigned long UNK_00665caa;
extern "C" unsigned long UNK_00665d6a;
extern "C" unsigned long UNK_00665d94;
extern "C" unsigned long _DAT_0066561c;
extern "C" unsigned long _DAT_00665620;
extern "C" unsigned long _UNK_00665540;
extern "C" unsigned long _UNK_00665544;
extern "C" unsigned long _UNK_00665558;
extern "C" unsigned long _UNK_00665580;
extern "C" unsigned long _UNK_00665b08;
extern "C" unsigned long _UNK_00665b0c;
extern "C" unsigned long _UNK_00665b10;
extern "C" unsigned long _UNK_00665b14;
extern "C" unsigned long _UNK_00665b18;
extern "C" unsigned long _UNK_00665b1c;
extern "C" unsigned long _UNK_00665b20;
extern "C" unsigned long _UNK_00665b24;
extern "C" unsigned long _UNK_00665b28;
extern "C" unsigned long _UNK_00665b2c;
extern "C" unsigned long _UNK_00665b30;
extern "C" unsigned long _UNK_00665b34;
extern "C" unsigned long _UNK_00665b38;
extern "C" unsigned long _UNK_00665b3c;
extern "C" unsigned long _UNK_00665b40;
extern "C" unsigned long _UNK_00665b44;
extern "C" unsigned long _UNK_00665b48;
extern "C" unsigned long _UNK_00665ee8;
extern "C" unsigned long _UNK_00665eec;
extern "C" unsigned long _UNK_00665ef0;
extern "C" unsigned long _UNK_00665ef4;
extern "C" unsigned long _UNK_00665ef8;
extern "C" unsigned long _UNK_00665efc;
extern "C" unsigned long _UNK_00665f00;
extern "C" unsigned long _UNK_00665f04;
extern "C" unsigned long _UNK_00665f08;
extern "C" unsigned long _UNK_00665f0c;
extern "C" unsigned long _UNK_00665f10;
extern "C" unsigned long _UNK_00665f14;
extern "C" unsigned long _UNK_00665f18;
extern "C" unsigned long _UNK_00665f1c;
extern "C" unsigned long _UNK_00665f20;
extern "C" unsigned long g_006654cc;
extern "C" unsigned long g_00665510;
extern "C" unsigned long g_00665540;
extern "C" unsigned long g_00665544;
extern "C" unsigned long g_00665554;
extern "C" unsigned long g_00665558;
extern "C" unsigned long g_0066557c;
extern "C" unsigned long g_00665580;
extern "C" unsigned long g_0066561c;
extern "C" unsigned long g_00665620;
extern "C" unsigned long g_00665728;
extern "C" unsigned long g_0066580a;
extern "C" unsigned long g_006658ac;
extern "C" unsigned long g_0066595c;
extern "C" unsigned long g_0066598c;
extern "C" unsigned long g_006659b6;
extern "C" unsigned long g_00665a70;
extern "C" unsigned long g_00665a9a;
extern "C" unsigned long g_00665b08;
extern "C" unsigned long g_00665b0c;
extern "C" unsigned long g_00665b10;
extern "C" unsigned long g_00665b14;
extern "C" unsigned long g_00665b18;
extern "C" unsigned long g_00665b1c;
extern "C" unsigned long g_00665b20;
extern "C" unsigned long g_00665b24;
extern "C" unsigned long g_00665b28;
extern "C" unsigned long g_00665b2c;
extern "C" unsigned long g_00665b30;
extern "C" unsigned long g_00665b34;
extern "C" unsigned long g_00665b38;
extern "C" unsigned long g_00665b3c;
extern "C" unsigned long g_00665b40;
extern "C" unsigned long g_00665b44;
extern "C" unsigned long g_00665b48;
extern "C" unsigned long g_00665b98;
extern "C" unsigned long g_00665c80;
extern "C" unsigned long g_00665caa;
extern "C" unsigned long g_00665d6a;
extern "C" unsigned long g_00665d94;
extern "C" unsigned long g_00665ee8;
extern "C" unsigned long g_00665eec;
extern "C" unsigned long g_00665ef0;
extern "C" unsigned long g_00665ef4;
extern "C" unsigned long g_00665ef8;
extern "C" unsigned long g_00665efc;
extern "C" unsigned long g_00665f00;
extern "C" unsigned long g_00665f04;
extern "C" unsigned long g_00665f08;
extern "C" unsigned long g_00665f0c;
extern "C" unsigned long g_00665f10;
extern "C" unsigned long g_00665f14;
extern "C" unsigned long g_00665f18;
extern "C" unsigned long g_00665f1c;
extern "C" unsigned long g_00665f20;
BLMineResultView::~BLMineResultView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_006654cc + g_00665540);
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
  func_0079e45c(&uStack_14,&g_00665510 + g_00665544,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLMineResultView::BLMineResultView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(g_0066561c + 0x6655c4);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLMineResultView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * BLMineResultView::create()
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

undefined4 BLMineResultView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x108);
}

undefined4 BLMineResultView::getBackGround()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 BLMineResultView::getSprSprWin()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

undefined4 BLMineResultView::getSprSprFaild()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

undefined4 BLMineResultView::getBtnSure()
{
  return *(undefined4 *)(((int)this) + 0x118);
}

undefined4 BLMineResultView::getLabSure()
{
  return *(undefined4 *)(((int)this) + 0x11c);
}

undefined4 BLMineResultView::getLabRewardTitle()
{
  return *(undefined4 *)(((int)this) + 0x120);
}

undefined4 BLMineResultView::getLabReward()
{
  return *(undefined4 *)(((int)this) + 0x124);
}

void BLMineResultView::onEnter()
{
  ((BLMineResultPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLMineResultView::onExit()
{
  ((BLMineResultPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
bool BLMineResultView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
