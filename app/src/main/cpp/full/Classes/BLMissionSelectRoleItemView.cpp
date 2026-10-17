#include "BLMissionSelectRoleItemView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLMissionSelectRoleItemPresenter.h"
#include "BLPageControl.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <new>   // ghost_fix.js 自动补齐
using namespace cocos2d;
// 兜底声明
extern "C" long long func_005c11c2(...);
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long ghidra_CONCAT13(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_005c0538;
extern "C" unsigned long UNK_005c058a;
extern "C" unsigned long UNK_005c05d0;
extern "C" unsigned long UNK_005c05f8;
extern "C" unsigned long UNK_005c0640;
extern "C" unsigned long UNK_005c067c;
extern "C" unsigned long UNK_005c07dc;
extern "C" unsigned long UNK_005c080a;
extern "C" unsigned long UNK_005c0964;
extern "C" unsigned long UNK_005c09ac;
extern "C" unsigned long UNK_005c09fc;
extern "C" unsigned long UNK_005c0a26;
extern "C" unsigned long UNK_005c0aee;
extern "C" unsigned long UNK_005c0b8c;
extern "C" unsigned long UNK_005c0c30;
extern "C" unsigned long UNK_005c0cd8;
extern "C" unsigned long UNK_005c0d02;
extern "C" unsigned long UNK_005c0e10;
extern "C" unsigned long UNK_005c0e3a;
extern "C" unsigned long UNK_005c0efa;
extern "C" unsigned long UNK_005c0f24;
extern "C" unsigned long UNK_005c0fdc;
extern "C" unsigned long UNK_005c107a;
extern "C" unsigned long _UNK_005c05bc;
extern "C" unsigned long _UNK_005c05c0;
extern "C" unsigned long _UNK_005c05d4;
extern "C" unsigned long _UNK_005c05fc;
extern "C" unsigned long _UNK_005c06b0;
extern "C" unsigned long _UNK_005c06b4;
extern "C" unsigned long _UNK_005c0980;
extern "C" unsigned long _UNK_005c0984;
extern "C" unsigned long _UNK_005c0988;
extern "C" unsigned long _UNK_005c098c;
extern "C" unsigned long _UNK_005c0990;
extern "C" unsigned long _UNK_005c0994;
extern "C" unsigned long _UNK_005c0d8c;
extern "C" unsigned long _UNK_005c0d90;
extern "C" unsigned long _UNK_005c0d94;
extern "C" unsigned long _UNK_005c0d98;
extern "C" unsigned long _UNK_005c0d9c;
extern "C" unsigned long _UNK_005c0da0;
extern "C" unsigned long _UNK_005c0da4;
extern "C" unsigned long _UNK_005c0da8;
extern "C" unsigned long _UNK_005c0dac;
extern "C" unsigned long _UNK_005c0db0;
extern "C" unsigned long _UNK_005c0db4;
extern "C" unsigned long _UNK_005c0db8;
extern "C" unsigned long _UNK_005c0dbc;
extern "C" unsigned long _UNK_005c0dc0;
extern "C" unsigned long _UNK_005c0dc4;
extern "C" unsigned long _UNK_005c0dc8;
extern "C" unsigned long _UNK_005c0dcc;
extern "C" unsigned long _UNK_005c0dd0;
extern "C" unsigned long _UNK_005c11d0;
extern "C" unsigned long _UNK_005c11d4;
extern "C" unsigned long _UNK_005c11d8;
extern "C" unsigned long _UNK_005c11dc;
extern "C" unsigned long _UNK_005c11e0;
extern "C" unsigned long _UNK_005c11e4;
extern "C" unsigned long _UNK_005c11e8;
extern "C" unsigned long _UNK_005c11ec;
extern "C" unsigned long _UNK_005c11f0;
extern "C" unsigned long _UNK_005c11f4;
extern "C" unsigned long _UNK_005c11f8;
extern "C" unsigned long _UNK_005c11fc;
extern "C" unsigned long _UNK_005c1200;
extern "C" unsigned long _UNK_005c1204;
extern "C" unsigned long g_005c0538;
extern "C" unsigned long g_005c058a;
extern "C" unsigned long g_005c05bc;
extern "C" unsigned long g_005c05c0;
extern "C" unsigned long g_005c05d0;
extern "C" unsigned long g_005c05d4;
extern "C" unsigned long g_005c05f8;
extern "C" unsigned long g_005c05fc;
extern "C" unsigned long g_005c0640;
extern "C" unsigned long g_005c067c;
extern "C" unsigned long g_005c06b0;
extern "C" unsigned long g_005c06b4;
extern "C" unsigned long g_005c07dc;
extern "C" unsigned long g_005c080a;
extern "C" unsigned long g_005c0964;
extern "C" unsigned long g_005c0980;
extern "C" unsigned long g_005c0984;
extern "C" unsigned long g_005c0988;
extern "C" unsigned long g_005c098c;
extern "C" unsigned long g_005c0990;
extern "C" unsigned long g_005c0994;
extern "C" unsigned long g_005c09ac;
extern "C" unsigned long g_005c09fc;
extern "C" unsigned long g_005c0a26;
extern "C" unsigned long g_005c0aee;
extern "C" unsigned long g_005c0b8c;
extern "C" unsigned long g_005c0c30;
extern "C" unsigned long g_005c0cd8;
extern "C" unsigned long g_005c0d02;
extern "C" unsigned long g_005c0d8c;
extern "C" unsigned long g_005c0d90;
extern "C" unsigned long g_005c0d94;
extern "C" unsigned long g_005c0d98;
extern "C" unsigned long g_005c0d9c;
extern "C" unsigned long g_005c0da0;
extern "C" unsigned long g_005c0da4;
extern "C" unsigned long g_005c0da8;
extern "C" unsigned long g_005c0dac;
extern "C" unsigned long g_005c0db0;
extern "C" unsigned long g_005c0db4;
extern "C" unsigned long g_005c0db8;
extern "C" unsigned long g_005c0dbc;
extern "C" unsigned long g_005c0dc0;
extern "C" unsigned long g_005c0dc4;
extern "C" unsigned long g_005c0dc8;
extern "C" unsigned long g_005c0dcc;
extern "C" unsigned long g_005c0dd0;
extern "C" unsigned long g_005c0e10;
extern "C" unsigned long g_005c0e3a;
extern "C" unsigned long g_005c0efa;
extern "C" unsigned long g_005c0f24;
extern "C" unsigned long g_005c0fdc;
extern "C" unsigned long g_005c107a;
extern "C" unsigned long g_005c11d0;
extern "C" unsigned long g_005c11d4;
extern "C" unsigned long g_005c11d8;
extern "C" unsigned long g_005c11dc;
extern "C" unsigned long g_005c11e0;
extern "C" unsigned long g_005c11e4;
extern "C" unsigned long g_005c11e8;
extern "C" unsigned long g_005c11ec;
extern "C" unsigned long g_005c11f0;
extern "C" unsigned long g_005c11f4;
extern "C" unsigned long g_005c11f8;
extern "C" unsigned long g_005c11fc;
extern "C" unsigned long g_005c1200;
extern "C" unsigned long g_005c1204;
BLMissionSelectRoleItemView::~BLMissionSelectRoleItemView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_005c0538 + g_005c05bc);
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
  func_0079e45c(&uStack_14,&g_005c058a + g_005c05c0,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLMissionSelectRoleItemView::BLMissionSelectRoleItemView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = (undefined4)(intptr_t)(*(int *)((unsigned char *)((char *)&g_005c0640 + (intptr_t)(g_005c06b0))));
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
  func_0079e45c(&uStack_14,(unsigned char *)((char *)&g_005c067c + (intptr_t)(g_005c06b4)),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * BLMissionSelectRoleItemView::create()
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

undefined4 BLMissionSelectRoleItemView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 BLMissionSelectRoleItemView::getLabName()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

undefined4 BLMissionSelectRoleItemView::getPageControlStars()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

undefined4 BLMissionSelectRoleItemView::getBtnRole()
{
  return *(undefined4 *)(((int)this) + 0x118);
}

undefined4 BLMissionSelectRoleItemView::getSprSelected()
{
  return *(undefined4 *)(((int)this) + 0x11c);
}

undefined4 BLMissionSelectRoleItemView::getSprUnLockBG()
{
  return *(undefined4 *)(((int)this) + 0x120);
}

undefined4 BLMissionSelectRoleItemView::getSprDiamondIcon()
{
  return *(undefined4 *)(((int)this) + 0x124);
}

undefined4 BLMissionSelectRoleItemView::getLabDiamond()
{
  return *(undefined4 *)(((int)this) + 0x128);
}

undefined4 BLMissionSelectRoleItemView::getLabUnLock()
{
  return *(undefined4 *)(((int)this) + 300);
}

undefined4 BLMissionSelectRoleItemView::getLabCombat()
{
  return *(undefined4 *)(((int)this) + 0x130);
}

undefined4 BLMissionSelectRoleItemView::getSprQuestion()
{
  return *(undefined4 *)(((int)this) + 0x134);
}

undefined4 BLMissionSelectRoleItemView::getSprSprCombat()
{
  return *(undefined4 *)(((int)this) + 0x138);
}

void BLMissionSelectRoleItemView::onEnter()
{
  ((BLMissionSelectRoleItemPresenter *)*(undefined4 *)(((int)this) + 0x10c))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLMissionSelectRoleItemView::onExit()
{
  ((BLMissionSelectRoleItemPresenter *)*(undefined4 *)(((int)this) + 0x10c))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
bool BLMissionSelectRoleItemView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
