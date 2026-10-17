#include "BLDiceRuleView.h"
#include "BLDiceRuleViewPresenter.h"
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
extern "C" long long func_0079e2ec(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e57c(...);
extern "C" long long ghidra_CONCAT13(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0062cdbc;
extern "C" unsigned long UNK_0062ce00;
extern "C" unsigned long UNK_0062ce44;
extern "C" unsigned long UNK_0062ce6c;
extern "C" unsigned long UNK_0062cffe;
extern "C" unsigned long UNK_0062d0e0;
extern "C" unsigned long UNK_0062d1c8;
extern "C" unsigned long UNK_0062d270;
extern "C" unsigned long UNK_0062d272;
extern "C" unsigned long UNK_0062d34a;
extern "C" unsigned long UNK_0062d368;
extern "C" unsigned long UNK_0062d384;
extern "C" unsigned long UNK_0062d3a0;
extern "C" unsigned long UNK_0062d3bc;
extern "C" unsigned long UNK_0062d3d8;
extern "C" unsigned long UNK_0062d43a;
extern "C" unsigned long UNK_0062d456;
extern "C" unsigned long UNK_0062d472;
extern "C" unsigned long UNK_0062d48e;
extern "C" unsigned long UNK_0062d4aa;
extern "C" unsigned long UNK_0062d4c6;
extern "C" unsigned long UNK_0062d4e2;
extern "C" unsigned long UNK_0062d506;
extern "C" unsigned long UNK_0062d522;
extern "C" unsigned long UNK_0062d53e;
extern "C" unsigned long UNK_0062d55c;
extern "C" unsigned long UNK_0062d57a;
extern "C" unsigned long UNK_0062d596;
extern "C" unsigned long UNK_0062d5b2;
extern "C" unsigned long UNK_0062d5ce;
extern "C" unsigned long UNK_0062d5ea;
extern "C" unsigned long UNK_0062d606;
extern "C" unsigned long UNK_0062d622;
extern "C" unsigned long UNK_0062d63e;
extern "C" unsigned long UNK_0062d65a;
extern "C" unsigned long UNK_0062d680;
extern "C" unsigned long UNK_0062d69c;
extern "C" unsigned long UNK_0062d6b8;
extern "C" unsigned long UNK_0062d6d4;
extern "C" unsigned long UNK_0062d6f0;
extern "C" unsigned long UNK_0062d70c;
extern "C" unsigned long UNK_0062d728;
extern "C" unsigned long UNK_0062d746;
extern "C" unsigned long UNK_0062d762;
extern "C" unsigned long UNK_0062d77e;
extern "C" unsigned long UNK_0062d79a;
extern "C" unsigned long UNK_0062d7b6;
extern "C" unsigned long UNK_0062d7d2;
extern "C" unsigned long UNK_0062d916;
extern "C" unsigned long UNK_0062d918;
extern "C" unsigned long UNK_0062da1a;
extern "C" unsigned long UNK_0062daac;
extern "C" unsigned long _DAT_0062cf0c;
extern "C" unsigned long _DAT_0062cf10;
extern "C" unsigned long _UNK_0062ce30;
extern "C" unsigned long _UNK_0062ce34;
extern "C" unsigned long _UNK_0062ce48;
extern "C" unsigned long _UNK_0062ce70;
extern "C" unsigned long _UNK_0062d3d8;
extern "C" unsigned long _UNK_0062d3dc;
extern "C" unsigned long _UNK_0062d3e0;
extern "C" unsigned long _UNK_0062d3e4;
extern "C" unsigned long _UNK_0062d3e8;
extern "C" unsigned long _UNK_0062d3ec;
extern "C" unsigned long _UNK_0062d3f0;
extern "C" unsigned long _UNK_0062d3f4;
extern "C" unsigned long _UNK_0062d3f8;
extern "C" unsigned long _UNK_0062d3fc;
extern "C" unsigned long _UNK_0062d400;
extern "C" unsigned long _UNK_0062d404;
extern "C" unsigned long _UNK_0062d408;
extern "C" unsigned long _UNK_0062d40c;
extern "C" unsigned long _UNK_0062d410;
extern "C" unsigned long _UNK_0062d414;
extern "C" unsigned long _UNK_0062d418;
extern "C" unsigned long _UNK_0062d7e8;
extern "C" unsigned long _UNK_0062d7ec;
extern "C" unsigned long _UNK_0062d7f0;
extern "C" unsigned long _UNK_0062d7f4;
extern "C" unsigned long _UNK_0062d7f8;
extern "C" unsigned long _UNK_0062d7fc;
extern "C" unsigned long _UNK_0062d800;
extern "C" unsigned long _UNK_0062d804;
extern "C" unsigned long _UNK_0062d808;
extern "C" unsigned long _UNK_0062d80c;
extern "C" unsigned long _UNK_0062d810;
extern "C" unsigned long _UNK_0062d814;
extern "C" unsigned long _UNK_0062d818;
extern "C" unsigned long _UNK_0062d81c;
extern "C" unsigned long _UNK_0062d820;
extern "C" unsigned long _UNK_0062d824;
extern "C" unsigned long _UNK_0062d828;
extern "C" unsigned long _UNK_0062d82c;
extern "C" unsigned long _UNK_0062d830;
extern "C" unsigned long _UNK_0062d834;
extern "C" unsigned long _UNK_0062d838;
extern "C" unsigned long _UNK_0062d83c;
extern "C" unsigned long _UNK_0062d840;
extern "C" unsigned long _UNK_0062d844;
extern "C" unsigned long _UNK_0062d848;
extern "C" unsigned long _UNK_0062d84c;
extern "C" unsigned long _UNK_0062d850;
extern "C" unsigned long _UNK_0062d854;
extern "C" unsigned long _UNK_0062d858;
extern "C" unsigned long _UNK_0062d85c;
extern "C" unsigned long _UNK_0062d860;
extern "C" unsigned long _UNK_0062d864;
extern "C" unsigned long _UNK_0062d868;
extern "C" unsigned long _UNK_0062dbd4;
extern "C" unsigned long _UNK_0062dbd8;
extern "C" unsigned long _UNK_0062dbdc;
extern "C" unsigned long _UNK_0062dbe0;
extern "C" unsigned long _UNK_0062dbe4;
extern "C" unsigned long _UNK_0062dbe8;
extern "C" unsigned long _UNK_0062dbec;
extern "C" unsigned long _UNK_0062dbf0;
extern "C" unsigned long _UNK_0062dbf4;
extern "C" unsigned long _UNK_0062dbf8;
extern "C" unsigned long _UNK_0062dbfc;
extern "C" unsigned long _UNK_0062dc00;
extern "C" unsigned long _UNK_0062dc04;
extern "C" unsigned long _UNK_0062dc08;
extern "C" unsigned long _UNK_0062dc0c;
extern "C" unsigned long _UNK_0062dc10;
extern "C" unsigned long _UNK_0062dc14;
extern "C" unsigned long g_0062cdbc;
extern "C" unsigned long g_0062ce00;
extern "C" unsigned long g_0062ce30;
extern "C" unsigned long g_0062ce34;
extern "C" unsigned long g_0062ce44;
extern "C" unsigned long g_0062ce48;
extern "C" unsigned long g_0062ce6c;
extern "C" unsigned long g_0062ce70;
extern "C" unsigned long g_0062cf0c;
extern "C" unsigned long g_0062cf10;
extern "C" unsigned long g_0062cffe;
extern "C" unsigned long g_0062d0e0;
extern "C" unsigned long g_0062d1c8;
extern "C" unsigned long g_0062d270;
extern "C" unsigned long g_0062d272;
extern "C" unsigned long g_0062d34a;
extern "C" unsigned long g_0062d368;
extern "C" unsigned long g_0062d384;
extern "C" unsigned long g_0062d3a0;
extern "C" unsigned long g_0062d3bc;
extern "C" unsigned long g_0062d3d8;
extern "C" unsigned long g_0062d3dc;
extern "C" unsigned long g_0062d3e0;
extern "C" unsigned long g_0062d3e4;
extern "C" unsigned long g_0062d3e8;
extern "C" unsigned long g_0062d3ec;
extern "C" unsigned long g_0062d3f0;
extern "C" unsigned long g_0062d3f4;
extern "C" unsigned long g_0062d3f8;
extern "C" unsigned long g_0062d3fc;
extern "C" unsigned long g_0062d400;
extern "C" unsigned long g_0062d404;
extern "C" unsigned long g_0062d408;
extern "C" unsigned long g_0062d40c;
extern "C" unsigned long g_0062d410;
extern "C" unsigned long g_0062d414;
extern "C" unsigned long g_0062d418;
extern "C" unsigned long g_0062d43a;
extern "C" unsigned long g_0062d456;
extern "C" unsigned long g_0062d472;
extern "C" unsigned long g_0062d48e;
extern "C" unsigned long g_0062d4aa;
extern "C" unsigned long g_0062d4c6;
extern "C" unsigned long g_0062d4e2;
extern "C" unsigned long g_0062d506;
extern "C" unsigned long g_0062d522;
extern "C" unsigned long g_0062d53e;
extern "C" unsigned long g_0062d55c;
extern "C" unsigned long g_0062d57a;
extern "C" unsigned long g_0062d596;
extern "C" unsigned long g_0062d5b2;
extern "C" unsigned long g_0062d5ce;
extern "C" unsigned long g_0062d5ea;
extern "C" unsigned long g_0062d606;
extern "C" unsigned long g_0062d622;
extern "C" unsigned long g_0062d63e;
extern "C" unsigned long g_0062d65a;
extern "C" unsigned long g_0062d680;
extern "C" unsigned long g_0062d69c;
extern "C" unsigned long g_0062d6b8;
extern "C" unsigned long g_0062d6d4;
extern "C" unsigned long g_0062d6f0;
extern "C" unsigned long g_0062d70c;
extern "C" unsigned long g_0062d728;
extern "C" unsigned long g_0062d746;
extern "C" unsigned long g_0062d762;
extern "C" unsigned long g_0062d77e;
extern "C" unsigned long g_0062d79a;
extern "C" unsigned long g_0062d7b6;
extern "C" unsigned long g_0062d7d2;
extern "C" unsigned long g_0062d7e8;
extern "C" unsigned long g_0062d7ec;
extern "C" unsigned long g_0062d7f0;
extern "C" unsigned long g_0062d7f4;
extern "C" unsigned long g_0062d7f8;
extern "C" unsigned long g_0062d7fc;
extern "C" unsigned long g_0062d800;
extern "C" unsigned long g_0062d804;
extern "C" unsigned long g_0062d808;
extern "C" unsigned long g_0062d80c;
extern "C" unsigned long g_0062d810;
extern "C" unsigned long g_0062d814;
extern "C" unsigned long g_0062d818;
extern "C" unsigned long g_0062d81c;
extern "C" unsigned long g_0062d820;
extern "C" unsigned long g_0062d824;
extern "C" unsigned long g_0062d828;
extern "C" unsigned long g_0062d82c;
extern "C" unsigned long g_0062d830;
extern "C" unsigned long g_0062d834;
extern "C" unsigned long g_0062d838;
extern "C" unsigned long g_0062d83c;
extern "C" unsigned long g_0062d840;
extern "C" unsigned long g_0062d844;
extern "C" unsigned long g_0062d848;
extern "C" unsigned long g_0062d84c;
extern "C" unsigned long g_0062d850;
extern "C" unsigned long g_0062d854;
extern "C" unsigned long g_0062d858;
extern "C" unsigned long g_0062d85c;
extern "C" unsigned long g_0062d860;
extern "C" unsigned long g_0062d864;
extern "C" unsigned long g_0062d868;
extern "C" unsigned long g_0062d916;
extern "C" unsigned long g_0062d918;
extern "C" unsigned long g_0062da1a;
extern "C" unsigned long g_0062daac;
extern "C" unsigned long g_0062dbd4;
extern "C" unsigned long g_0062dbd8;
extern "C" unsigned long g_0062dbdc;
extern "C" unsigned long g_0062dbe0;
extern "C" unsigned long g_0062dbe4;
extern "C" unsigned long g_0062dbe8;
extern "C" unsigned long g_0062dbec;
extern "C" unsigned long g_0062dbf0;
extern "C" unsigned long g_0062dbf4;
extern "C" unsigned long g_0062dbf8;
extern "C" unsigned long g_0062dbfc;
extern "C" unsigned long g_0062dc00;
extern "C" unsigned long g_0062dc04;
extern "C" unsigned long g_0062dc08;
extern "C" unsigned long g_0062dc0c;
extern "C" unsigned long g_0062dc10;
extern "C" unsigned long g_0062dc14;
BLDiceRuleView::~BLDiceRuleView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0062cdbc + g_0062ce30);
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
  func_0079e45c(&uStack_14,&g_0062ce00 + g_0062ce34,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLDiceRuleView::BLDiceRuleView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(g_0062cf0c + 0x62ceb4);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLDiceRuleView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * BLDiceRuleView::create()
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

undefined4 BLDiceRuleView::getBackGround()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

undefined4 BLDiceRuleView::getTabBg()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 BLDiceRuleView::getLabTitle()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

undefined4 BLDiceRuleView::getLabGuize()
{
  return *(undefined4 *)(((int)this) + 0x118);
}

undefined4 BLDiceRuleView::getBtnClose()
{
  return *(undefined4 *)(((int)this) + 0x11c);
}

undefined4 BLDiceRuleView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x108);
}

void BLDiceRuleView::onEnter()
{
  ((cocos2d::CCLayer *)this)->onEnter();
  return;
}

void BLDiceRuleView::onExit()
{
  ((cocos2d::CCLayer *)this)->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
bool BLDiceRuleView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
