#include "BLMissionMirrorView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLMissionMirrorBtnView.h"
#include "BLMissionMirrorPresenter.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
using namespace cocos2d;
// 兜底声明
extern "C" long long func_005d1148(...);
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
extern "C" unsigned long UNK_005cfb14;
extern "C" unsigned long UNK_005cfb46;
extern "C" unsigned long UNK_005cfba0;
extern "C" unsigned long UNK_005cfbf0;
extern "C" unsigned long UNK_005d0114;
extern "C" unsigned long UNK_005d01ae;
extern "C" unsigned long UNK_005d0234;
extern "C" unsigned long UNK_005d024a;
extern "C" unsigned long UNK_005d02c2;
extern "C" unsigned long UNK_005d039c;
extern "C" unsigned long UNK_005d05a0;
extern "C" unsigned long UNK_005d068c;
extern "C" unsigned long UNK_005d06c6;
extern "C" unsigned long UNK_005d06e8;
extern "C" unsigned long UNK_005d06ee;
extern "C" unsigned long UNK_005d0778;
extern "C" unsigned long UNK_005d07ac;
extern "C" unsigned long UNK_005d07ca;
extern "C" unsigned long UNK_005d083a;
extern "C" unsigned long UNK_005d0864;
extern "C" unsigned long UNK_005d08d7;
extern "C" unsigned long UNK_005d08da;
extern "C" unsigned long UNK_005d08dd;
extern "C" unsigned long UNK_005d08fe;
extern "C" unsigned long UNK_005d0900;
extern "C" unsigned long UNK_005d09a0;
extern "C" unsigned long UNK_005d0bdc;
extern "C" unsigned long UNK_005d0c0c;
extern "C" unsigned long UNK_005d0cc6;
extern "C" unsigned long UNK_005d0cc8;
extern "C" unsigned long UNK_005d0d90;
extern "C" unsigned long UNK_005d0dbc;
extern "C" unsigned long UNK_005d0e76;
extern "C" unsigned long UNK_005d0e78;
extern "C" unsigned long UNK_005d0f7c;
extern "C" unsigned long UNK_005d0faa;
extern "C" unsigned long UNK_005d1064;
extern "C" unsigned long UNK_005d1066;
extern "C" unsigned long _DAT_005d00b4;
extern "C" unsigned long _DAT_005d00b8;
extern "C" unsigned long _UNK_005cfb8c;
extern "C" unsigned long _UNK_005cfb90;
extern "C" unsigned long _UNK_005cfba4;
extern "C" unsigned long _UNK_005cfbf4;
extern "C" unsigned long _UNK_005d04ac;
extern "C" unsigned long _UNK_005d04b0;
extern "C" unsigned long _UNK_005d04b4;
extern "C" unsigned long _UNK_005d04b8;
extern "C" unsigned long _UNK_005d04bc;
extern "C" unsigned long _UNK_005d04c0;
extern "C" unsigned long _UNK_005d04c4;
extern "C" unsigned long _UNK_005d04c8;
extern "C" unsigned long _UNK_005d04cc;
extern "C" unsigned long _UNK_005d04d0;
extern "C" unsigned long _UNK_005d04d4;
extern "C" unsigned long _UNK_005d04d8;
extern "C" unsigned long _UNK_005d04dc;
extern "C" unsigned long _UNK_005d04e0;
extern "C" unsigned long _UNK_005d04e4;
extern "C" unsigned long _UNK_005d06a8;
extern "C" unsigned long _UNK_005d06ac;
extern "C" unsigned long _UNK_005d06b0;
extern "C" unsigned long _UNK_005d06b4;
extern "C" unsigned long _UNK_005d06b8;
extern "C" unsigned long _UNK_005d0aa0;
extern "C" unsigned long _UNK_005d0aa4;
extern "C" unsigned long _UNK_005d0aa8;
extern "C" unsigned long _UNK_005d0aac;
extern "C" unsigned long _UNK_005d0ab0;
extern "C" unsigned long _UNK_005d0ab4;
extern "C" unsigned long _UNK_005d0ab8;
extern "C" unsigned long _UNK_005d0abc;
extern "C" unsigned long _UNK_005d0ac0;
extern "C" unsigned long _UNK_005d0ac4;
extern "C" unsigned long _UNK_005d0ac8;
extern "C" unsigned long _UNK_005d0acc;
extern "C" unsigned long _UNK_005d0ad0;
extern "C" unsigned long _UNK_005d0ad4;
extern "C" unsigned long _UNK_005d0ad8;
extern "C" unsigned long _UNK_005d0adc;
extern "C" unsigned long _UNK_005d0ae0;
extern "C" unsigned long _UNK_005d0ef0;
extern "C" unsigned long _UNK_005d0ef4;
extern "C" unsigned long _UNK_005d0ef8;
extern "C" unsigned long _UNK_005d0efc;
extern "C" unsigned long _UNK_005d0f00;
extern "C" unsigned long _UNK_005d0f04;
extern "C" unsigned long _UNK_005d0f08;
extern "C" unsigned long _UNK_005d0f0c;
extern "C" unsigned long _UNK_005d0f10;
extern "C" unsigned long _UNK_005d0f14;
extern "C" unsigned long _UNK_005d0f18;
extern "C" unsigned long _UNK_005d0f1c;
extern "C" unsigned long _UNK_005d0f20;
extern "C" unsigned long _UNK_005d0f24;
extern "C" unsigned long _UNK_005d0f28;
extern "C" unsigned long _UNK_005d1154;
extern "C" unsigned long _UNK_005d1158;
extern "C" unsigned long _UNK_005d115c;
extern "C" unsigned long _UNK_005d1160;
extern "C" unsigned long _UNK_005d1164;
extern "C" unsigned long _UNK_005d1168;
extern "C" unsigned long _UNK_005d116c;
extern "C" unsigned long _UNK_005d1170;
extern "C" unsigned long _UNK_005d1174;
extern "C" unsigned long _UNK_005d1178;
extern "C" unsigned long g_005cfb14;
extern "C" unsigned long g_005cfb46;
extern "C" unsigned long g_005cfb8c;
extern "C" unsigned long g_005cfb90;
extern "C" unsigned long g_005cfba0;
extern "C" unsigned long g_005cfba4;
extern "C" unsigned long g_005cfbf0;
extern "C" unsigned long g_005cfbf4;
extern "C" unsigned long g_005d00b4;
extern "C" unsigned long g_005d00b8;
extern "C" unsigned long g_005d0114;
extern "C" unsigned long g_005d01ae;
extern "C" unsigned long g_005d0234;
extern "C" unsigned long g_005d024a;
extern "C" unsigned long g_005d02c2;
extern "C" unsigned long g_005d039c;
extern "C" unsigned long g_005d04ac;
extern "C" unsigned long g_005d04b0;
extern "C" unsigned long g_005d04b4;
extern "C" unsigned long g_005d04b8;
extern "C" unsigned long g_005d04bc;
extern "C" unsigned long g_005d04c0;
extern "C" unsigned long g_005d04c4;
extern "C" unsigned long g_005d04c8;
extern "C" unsigned long g_005d04cc;
extern "C" unsigned long g_005d04d0;
extern "C" unsigned long g_005d04d4;
extern "C" unsigned long g_005d04d8;
extern "C" unsigned long g_005d04dc;
extern "C" unsigned long g_005d04e0;
extern "C" unsigned long g_005d04e4;
extern "C" unsigned long g_005d05a0;
extern "C" unsigned long g_005d068c;
extern "C" unsigned long g_005d06a8;
extern "C" unsigned long g_005d06ac;
extern "C" unsigned long g_005d06b0;
extern "C" unsigned long g_005d06b4;
extern "C" unsigned long g_005d06b8;
extern "C" unsigned long g_005d06c6;
extern "C" unsigned long g_005d06e8;
extern "C" unsigned long g_005d06ee;
extern "C" unsigned long g_005d0778;
extern "C" unsigned long g_005d07ac;
extern "C" unsigned long g_005d07ca;
extern "C" unsigned long g_005d083a;
extern "C" unsigned long g_005d0864;
extern "C" unsigned long g_005d08d7;
extern "C" unsigned long g_005d08da;
extern "C" unsigned long g_005d08dd;
extern "C" unsigned long g_005d08fe;
extern "C" unsigned long g_005d0900;
extern "C" unsigned long g_005d09a0;
extern "C" unsigned long g_005d0aa0;
extern "C" unsigned long g_005d0aa4;
extern "C" unsigned long g_005d0aa8;
extern "C" unsigned long g_005d0aac;
extern "C" unsigned long g_005d0ab0;
extern "C" unsigned long g_005d0ab4;
extern "C" unsigned long g_005d0ab8;
extern "C" unsigned long g_005d0abc;
extern "C" unsigned long g_005d0ac0;
extern "C" unsigned long g_005d0ac4;
extern "C" unsigned long g_005d0ac8;
extern "C" unsigned long g_005d0acc;
extern "C" unsigned long g_005d0ad0;
extern "C" unsigned long g_005d0ad4;
extern "C" unsigned long g_005d0ad8;
extern "C" unsigned long g_005d0adc;
extern "C" unsigned long g_005d0ae0;
extern "C" unsigned long g_005d0bdc;
extern "C" unsigned long g_005d0c0c;
extern "C" unsigned long g_005d0cc6;
extern "C" unsigned long g_005d0cc8;
extern "C" unsigned long g_005d0d90;
extern "C" unsigned long g_005d0dbc;
extern "C" unsigned long g_005d0e76;
extern "C" unsigned long g_005d0e78;
extern "C" unsigned long g_005d0ef0;
extern "C" unsigned long g_005d0ef4;
extern "C" unsigned long g_005d0ef8;
extern "C" unsigned long g_005d0efc;
extern "C" unsigned long g_005d0f00;
extern "C" unsigned long g_005d0f04;
extern "C" unsigned long g_005d0f08;
extern "C" unsigned long g_005d0f0c;
extern "C" unsigned long g_005d0f10;
extern "C" unsigned long g_005d0f14;
extern "C" unsigned long g_005d0f18;
extern "C" unsigned long g_005d0f1c;
extern "C" unsigned long g_005d0f20;
extern "C" unsigned long g_005d0f24;
extern "C" unsigned long g_005d0f28;
extern "C" unsigned long g_005d0f7c;
extern "C" unsigned long g_005d0faa;
extern "C" unsigned long g_005d1064;
extern "C" unsigned long g_005d1066;
extern "C" unsigned long g_005d1154;
extern "C" unsigned long g_005d1158;
extern "C" unsigned long g_005d115c;
extern "C" unsigned long g_005d1160;
extern "C" unsigned long g_005d1164;
extern "C" unsigned long g_005d1168;
extern "C" unsigned long g_005d116c;
extern "C" unsigned long g_005d1170;
extern "C" unsigned long g_005d1174;
extern "C" unsigned long g_005d1178;
BLMissionMirrorView::~BLMissionMirrorView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_005cfb14 + g_005cfb8c);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005cfb46 + g_005cfb90,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  if (*(int *)((int)this + 4*(0x42)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x42)) = 0;
  }
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLMissionMirrorView::BLMissionMirrorView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(g_005d00b4 + 0x5d005c);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLMissionMirrorView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}


bool BLMissionMirrorView::init()
{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = ((cocos2d::CCLayer *)this)->init();
  if (iVar1 != 0) {
    uVar2 = (undefined4)(((BLMissionMirrorPresenter *)this)->create());
    *(undefined4 *)(((int)this) + 0x108) = uVar2;
    ((cocos2d::CCObject *)this)->retain();
    BLMissionMirrorView::initView();
    ((BLMissionMirrorPresenter *)*(undefined4 *)(((int)this) + 0x108))->initWithView((BLMissionMirrorView*)((int)this));
  }
  return iVar1;
}

void BLMissionMirrorView::onEnter()
{
  ((BLMissionMirrorPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLMissionMirrorView::onExit()
{
  ((BLMissionMirrorPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
void BLMissionMirrorView::initView()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
