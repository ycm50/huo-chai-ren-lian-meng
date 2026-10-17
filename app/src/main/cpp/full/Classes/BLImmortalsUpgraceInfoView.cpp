#include "BLImmortalsUpgraceInfoView.h"
#include "BLImmortalsItemPresenter.h"
#include "BLImmortalsItemView.h"
#include "BLImmortalsUpgraceInfoPresenter.h"
#include "BLImmortalsUpgracePropertyPresenter.h"
#include "BLImmortalsUpgracePropertyView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
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
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_005746d4;
extern "C" unsigned long UNK_00574706;
extern "C" unsigned long UNK_00574760;
extern "C" unsigned long UNK_00574788;
extern "C" unsigned long UNK_00574b4c;
extern "C" unsigned long UNK_00574b7a;
extern "C" unsigned long UNK_00574c08;
extern "C" unsigned long UNK_00574d9a;
extern "C" unsigned long UNK_00574eac;
extern "C" unsigned long UNK_00574ec4;
extern "C" unsigned long UNK_00574ee8;
extern "C" unsigned long _UNK_0057474c;
extern "C" unsigned long _UNK_00574750;
extern "C" unsigned long _UNK_00574764;
extern "C" unsigned long _UNK_0057478c;
extern "C" unsigned long _UNK_00574ba4;
extern "C" unsigned long _UNK_00574ba8;
extern "C" unsigned long _UNK_00574f7c;
extern "C" unsigned long _UNK_00574f80;
extern "C" unsigned long _UNK_00574f84;
extern "C" unsigned long _UNK_00574f88;
extern "C" unsigned long _UNK_00574f8c;
extern "C" unsigned long _UNK_00574f90;
extern "C" unsigned long _UNK_00574f94;
extern "C" unsigned long _UNK_00574f98;
extern "C" unsigned long _UNK_00574f9c;
extern "C" unsigned long _UNK_00574fa0;
extern "C" unsigned long _UNK_00574fa4;
extern "C" unsigned long g_005746d4;
extern "C" unsigned long g_00574706;
extern "C" unsigned long g_0057474c;
extern "C" unsigned long g_00574750;
extern "C" unsigned long g_00574760;
extern "C" unsigned long g_00574764;
extern "C" unsigned long g_00574788;
extern "C" unsigned long g_0057478c;
extern "C" unsigned long g_00574b4c;
extern "C" unsigned long g_00574b7a;
extern "C" unsigned long g_00574ba4;
extern "C" unsigned long g_00574ba8;
extern "C" unsigned long g_00574c08;
extern "C" unsigned long g_00574d9a;
extern "C" unsigned long g_00574eac;
extern "C" unsigned long g_00574ec4;
extern "C" unsigned long g_00574ee8;
extern "C" unsigned long g_00574f7c;
extern "C" unsigned long g_00574f80;
extern "C" unsigned long g_00574f84;
extern "C" unsigned long g_00574f88;
extern "C" unsigned long g_00574f8c;
extern "C" unsigned long g_00574f90;
extern "C" unsigned long g_00574f94;
extern "C" unsigned long g_00574f98;
extern "C" unsigned long g_00574f9c;
extern "C" unsigned long g_00574fa0;
extern "C" unsigned long g_00574fa4;
BLImmortalsUpgraceInfoView::~BLImmortalsUpgraceInfoView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_005746d4 + g_0057474c);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00574706 + g_00574750,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  if (*(int *)((int)this + 4*(0x42)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x42)) = 0;
  }
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLImmortalsUpgraceInfoView::BLImmortalsUpgraceInfoView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_00574b4c + g_00574ba4);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00574b7a + g_00574ba8,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}


bool BLImmortalsUpgraceInfoView::init()
{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = ((cocos2d::CCLayer *)this)->init();
  if (iVar1 != 0) {
    uVar2 = (undefined4)(((BLImmortalsUpgraceInfoPresenter *)this)->create());
    *(undefined4 *)(((int)this) + 0x108) = uVar2;
    ((cocos2d::CCObject *)this)->retain();
    BLImmortalsUpgraceInfoView::initView();
    ((BLImmortalsUpgraceInfoPresenter *)*(undefined4 *)(((int)this) + 0x108))->initWithView((BLImmortalsUpgraceInfoView*)((int)this));
  }
  return iVar1;
}

void BLImmortalsUpgraceInfoView::onEnter()
{
  ((BLImmortalsUpgraceInfoPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLImmortalsUpgraceInfoView::onExit()
{
  ((BLImmortalsUpgraceInfoPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
void BLImmortalsUpgraceInfoView::initView()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
