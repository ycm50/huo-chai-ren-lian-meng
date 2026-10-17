#include "BLSkillDetailView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLSkillDetailPresenter.h"
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
extern "C" unsigned long UNK_006826f8;
extern "C" unsigned long UNK_0068274a;
extern "C" unsigned long UNK_00682790;
extern "C" unsigned long UNK_006827b8;
extern "C" unsigned long UNK_006829c6;
extern "C" unsigned long UNK_00682aa8;
extern "C" unsigned long UNK_00682b98;
extern "C" unsigned long UNK_00682bc2;
extern "C" unsigned long UNK_00682c80;
extern "C" unsigned long UNK_00682cb4;
extern "C" unsigned long UNK_00682d74;
extern "C" unsigned long UNK_00682d9e;
extern "C" unsigned long UNK_00682e9e;
extern "C" unsigned long UNK_00682ec8;
extern "C" unsigned long UNK_00682f88;
extern "C" unsigned long UNK_00682fb2;
extern "C" unsigned long UNK_0068306e;
extern "C" unsigned long UNK_00683098;
extern "C" unsigned long UNK_00683158;
extern "C" unsigned long UNK_00683182;
extern "C" unsigned long UNK_00683280;
extern "C" unsigned long UNK_006832aa;
extern "C" unsigned long UNK_0068336a;
extern "C" unsigned long UNK_00683394;
extern "C" unsigned long UNK_00683452;
extern "C" unsigned long UNK_00683486;
extern "C" unsigned long UNK_0068354a;
extern "C" unsigned long UNK_00683574;
extern "C" unsigned long UNK_00683634;
extern "C" unsigned long UNK_006836a4;
extern "C" unsigned long UNK_00683768;
extern "C" unsigned long UNK_00683792;
extern "C" unsigned long UNK_00683852;
extern "C" unsigned long UNK_0068387c;
extern "C" unsigned long UNK_00683940;
extern "C" unsigned long UNK_0068396a;
extern "C" unsigned long UNK_00683a2e;
extern "C" unsigned long UNK_00683a58;
extern "C" unsigned long UNK_00683b5c;
extern "C" unsigned long UNK_00683b86;
extern "C" unsigned long UNK_00683c3c;
extern "C" unsigned long _DAT_00682870;
extern "C" unsigned long _DAT_00682874;
extern "C" unsigned long _UNK_0068277c;
extern "C" unsigned long _UNK_00682780;
extern "C" unsigned long _UNK_00682794;
extern "C" unsigned long _UNK_006827bc;
extern "C" unsigned long _UNK_00682da8;
extern "C" unsigned long _UNK_00682dac;
extern "C" unsigned long _UNK_00682db0;
extern "C" unsigned long _UNK_00682db4;
extern "C" unsigned long _UNK_00682db8;
extern "C" unsigned long _UNK_00682dbc;
extern "C" unsigned long _UNK_00682dc0;
extern "C" unsigned long _UNK_00682dc4;
extern "C" unsigned long _UNK_00682dc8;
extern "C" unsigned long _UNK_00682dcc;
extern "C" unsigned long _UNK_00682dd0;
extern "C" unsigned long _UNK_00682dd4;
extern "C" unsigned long _UNK_00682dd8;
extern "C" unsigned long _UNK_00682ddc;
extern "C" unsigned long _UNK_00682de0;
extern "C" unsigned long _UNK_00682de4;
extern "C" unsigned long _UNK_0068320c;
extern "C" unsigned long _UNK_00683210;
extern "C" unsigned long _UNK_00683214;
extern "C" unsigned long _UNK_00683218;
extern "C" unsigned long _UNK_0068321c;
extern "C" unsigned long _UNK_00683220;
extern "C" unsigned long _UNK_00683224;
extern "C" unsigned long _UNK_00683228;
extern "C" unsigned long _UNK_0068322c;
extern "C" unsigned long _UNK_00683230;
extern "C" unsigned long _UNK_00683234;
extern "C" unsigned long _UNK_00683238;
extern "C" unsigned long _UNK_0068323c;
extern "C" unsigned long _UNK_00683240;
extern "C" unsigned long _UNK_00683244;
extern "C" unsigned long _UNK_0068365c;
extern "C" unsigned long _UNK_00683660;
extern "C" unsigned long _UNK_00683664;
extern "C" unsigned long _UNK_00683668;
extern "C" unsigned long _UNK_0068366c;
extern "C" unsigned long _UNK_00683670;
extern "C" unsigned long _UNK_00683674;
extern "C" unsigned long _UNK_00683678;
extern "C" unsigned long _UNK_0068367c;
extern "C" unsigned long _UNK_00683680;
extern "C" unsigned long _UNK_00683684;
extern "C" unsigned long _UNK_00683688;
extern "C" unsigned long _UNK_0068368c;
extern "C" unsigned long _UNK_00683690;
extern "C" unsigned long _UNK_00683694;
extern "C" unsigned long _UNK_00683698;
extern "C" unsigned long _UNK_0068369c;
extern "C" unsigned long _UNK_00683ad8;
extern "C" unsigned long _UNK_00683adc;
extern "C" unsigned long _UNK_00683ae0;
extern "C" unsigned long _UNK_00683ae4;
extern "C" unsigned long _UNK_00683ae8;
extern "C" unsigned long _UNK_00683aec;
extern "C" unsigned long _UNK_00683af0;
extern "C" unsigned long _UNK_00683af4;
extern "C" unsigned long _UNK_00683af8;
extern "C" unsigned long _UNK_00683afc;
extern "C" unsigned long _UNK_00683b00;
extern "C" unsigned long _UNK_00683b04;
extern "C" unsigned long _UNK_00683b08;
extern "C" unsigned long _UNK_00683b0c;
extern "C" unsigned long _UNK_00683b10;
extern "C" unsigned long _UNK_00683da0;
extern "C" unsigned long _UNK_00683da4;
extern "C" unsigned long _UNK_00683da8;
extern "C" unsigned long _UNK_00683dac;
extern "C" unsigned long _UNK_00683db0;
extern "C" unsigned long _UNK_00683db4;
extern "C" unsigned long _UNK_00683db8;
extern "C" unsigned long _UNK_00683dbc;
extern "C" unsigned long _UNK_00683dc0;
extern "C" unsigned long _UNK_00683dc4;
extern "C" unsigned long g_006826f8;
extern "C" unsigned long g_0068274a;
extern "C" unsigned long g_0068277c;
extern "C" unsigned long g_00682780;
extern "C" unsigned long g_00682790;
extern "C" unsigned long g_00682794;
extern "C" unsigned long g_006827b8;
extern "C" unsigned long g_006827bc;
extern "C" unsigned long g_00682870;
extern "C" unsigned long g_00682874;
extern "C" unsigned long g_006829c6;
extern "C" unsigned long g_00682aa8;
extern "C" unsigned long g_00682b98;
extern "C" unsigned long g_00682bc2;
extern "C" unsigned long g_00682c80;
extern "C" unsigned long g_00682cb4;
extern "C" unsigned long g_00682d74;
extern "C" unsigned long g_00682d9e;
extern "C" unsigned long g_00682da8;
extern "C" unsigned long g_00682dac;
extern "C" unsigned long g_00682db0;
extern "C" unsigned long g_00682db4;
extern "C" unsigned long g_00682db8;
extern "C" unsigned long g_00682dbc;
extern "C" unsigned long g_00682dc0;
extern "C" unsigned long g_00682dc4;
extern "C" unsigned long g_00682dc8;
extern "C" unsigned long g_00682dcc;
extern "C" unsigned long g_00682dd0;
extern "C" unsigned long g_00682dd4;
extern "C" unsigned long g_00682dd8;
extern "C" unsigned long g_00682ddc;
extern "C" unsigned long g_00682de0;
extern "C" unsigned long g_00682de4;
extern "C" unsigned long g_00682e9e;
extern "C" unsigned long g_00682ec8;
extern "C" unsigned long g_00682f88;
extern "C" unsigned long g_00682fb2;
extern "C" unsigned long g_0068306e;
extern "C" unsigned long g_00683098;
extern "C" unsigned long g_00683158;
extern "C" unsigned long g_00683182;
extern "C" unsigned long g_0068320c;
extern "C" unsigned long g_00683210;
extern "C" unsigned long g_00683214;
extern "C" unsigned long g_00683218;
extern "C" unsigned long g_0068321c;
extern "C" unsigned long g_00683220;
extern "C" unsigned long g_00683224;
extern "C" unsigned long g_00683228;
extern "C" unsigned long g_0068322c;
extern "C" unsigned long g_00683230;
extern "C" unsigned long g_00683234;
extern "C" unsigned long g_00683238;
extern "C" unsigned long g_0068323c;
extern "C" unsigned long g_00683240;
extern "C" unsigned long g_00683244;
extern "C" unsigned long g_00683280;
extern "C" unsigned long g_006832aa;
extern "C" unsigned long g_0068336a;
extern "C" unsigned long g_00683394;
extern "C" unsigned long g_00683452;
extern "C" unsigned long g_00683486;
extern "C" unsigned long g_0068354a;
extern "C" unsigned long g_00683574;
extern "C" unsigned long g_00683634;
extern "C" unsigned long g_0068365c;
extern "C" unsigned long g_00683660;
extern "C" unsigned long g_00683664;
extern "C" unsigned long g_00683668;
extern "C" unsigned long g_0068366c;
extern "C" unsigned long g_00683670;
extern "C" unsigned long g_00683674;
extern "C" unsigned long g_00683678;
extern "C" unsigned long g_0068367c;
extern "C" unsigned long g_00683680;
extern "C" unsigned long g_00683684;
extern "C" unsigned long g_00683688;
extern "C" unsigned long g_0068368c;
extern "C" unsigned long g_00683690;
extern "C" unsigned long g_00683694;
extern "C" unsigned long g_00683698;
extern "C" unsigned long g_0068369c;
extern "C" unsigned long g_006836a4;
extern "C" unsigned long g_00683768;
extern "C" unsigned long g_00683792;
extern "C" unsigned long g_00683852;
extern "C" unsigned long g_0068387c;
extern "C" unsigned long g_00683940;
extern "C" unsigned long g_0068396a;
extern "C" unsigned long g_00683a2e;
extern "C" unsigned long g_00683a58;
extern "C" unsigned long g_00683ad8;
extern "C" unsigned long g_00683adc;
extern "C" unsigned long g_00683ae0;
extern "C" unsigned long g_00683ae4;
extern "C" unsigned long g_00683ae8;
extern "C" unsigned long g_00683aec;
extern "C" unsigned long g_00683af0;
extern "C" unsigned long g_00683af4;
extern "C" unsigned long g_00683af8;
extern "C" unsigned long g_00683afc;
extern "C" unsigned long g_00683b00;
extern "C" unsigned long g_00683b04;
extern "C" unsigned long g_00683b08;
extern "C" unsigned long g_00683b0c;
extern "C" unsigned long g_00683b10;
extern "C" unsigned long g_00683b5c;
extern "C" unsigned long g_00683b86;
extern "C" unsigned long g_00683c3c;
extern "C" unsigned long g_00683da0;
extern "C" unsigned long g_00683da4;
extern "C" unsigned long g_00683da8;
extern "C" unsigned long g_00683dac;
extern "C" unsigned long g_00683db0;
extern "C" unsigned long g_00683db4;
extern "C" unsigned long g_00683db8;
extern "C" unsigned long g_00683dbc;
extern "C" unsigned long g_00683dc0;
extern "C" unsigned long g_00683dc4;
BLSkillDetailView::~BLSkillDetailView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_006826f8 + g_0068277c);
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
  func_0079e45c(&uStack_14,&g_0068274a + g_00682780,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}


int * BLSkillDetailView::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x15c)));
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

undefined4 BLSkillDetailView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 BLSkillDetailView::getBG()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

undefined4 BLSkillDetailView::getLineUp()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

undefined4 BLSkillDetailView::getLabLvTitle()
{
  return *(undefined4 *)(((int)this) + 0x118);
}

undefined4 BLSkillDetailView::getLabHurtTitle()
{
  return *(undefined4 *)(((int)this) + 0x11c);
}

undefined4 BLSkillDetailView::getLabEffectTitle()
{
  return *(undefined4 *)(((int)this) + 0x120);
}

undefined4 BLSkillDetailView::getLabCDTitle()
{
  return *(undefined4 *)(((int)this) + 0x124);
}

undefined4 BLSkillDetailView::getLabNexLvTitle()
{
  return *(undefined4 *)(((int)this) + 0x128);
}

undefined4 BLSkillDetailView::getLabNexHurtTitle()
{
  return *(undefined4 *)(((int)this) + 300);
}

undefined4 BLSkillDetailView::getLabNextEffectTitle()
{
  return *(undefined4 *)(((int)this) + 0x130);
}

undefined4 BLSkillDetailView::getLabNextCDTitle()
{
  return *(undefined4 *)(((int)this) + 0x134);
}

undefined4 BLSkillDetailView::getLabLv()
{
  return *(undefined4 *)(((int)this) + 0x138);
}

undefined4 BLSkillDetailView::getLabHurt()
{
  return *(undefined4 *)(((int)this) + 0x13c);
}

undefined4 BLSkillDetailView::getLabEffect()
{
  return *(undefined4 *)(((int)this) + 0x140);
}

undefined4 BLSkillDetailView::getLabCD()
{
  return *(undefined4 *)(((int)this) + 0x144);
}

undefined4 BLSkillDetailView::getLabNextLv()
{
  return *(undefined4 *)(((int)this) + 0x148);
}

undefined4 BLSkillDetailView::getLabNextHurt()
{
  return *(undefined4 *)(((int)this) + 0x14c);
}

undefined4 BLSkillDetailView::getLabNextEffect()
{
  return *(undefined4 *)(((int)this) + 0x150);
}

undefined4 BLSkillDetailView::getLabNextCD()
{
  return *(undefined4 *)(((int)this) + 0x154);
}

undefined4 BLSkillDetailView::getLabDetail()
{
  return *(undefined4 *)(((int)this) + 0x158);
}

void BLSkillDetailView::onEnter()
{
  ((BLSkillDetailPresenter *)*(undefined4 *)(((int)this) + 0x10c))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLSkillDetailView::onExit()
{
  ((BLSkillDetailPresenter *)*(undefined4 *)(((int)this) + 0x10c))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (2) =====
BLSkillDetailView::BLSkillDetailView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = (undefined4)(intptr_t)(*(int *)(g_00682870 + 0x682800));
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
  func_0079e45c(&uStack_14,((intptr_t)"BLSkillDetailView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

bool BLSkillDetailView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
