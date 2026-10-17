#include "BLUpgraceButtonView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLUpgraceButtonPresenter.h"
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
extern "C" unsigned long UNK_00684ebc;
extern "C" unsigned long UNK_00684f0e;
extern "C" unsigned long UNK_00684f54;
extern "C" unsigned long UNK_00684f7c;
extern "C" unsigned long UNK_00684fc4;
extern "C" unsigned long UNK_00685000;
extern "C" unsigned long UNK_0068513e;
extern "C" unsigned long UNK_00685168;
extern "C" unsigned long UNK_0068523a;
extern "C" unsigned long UNK_00685266;
extern "C" unsigned long UNK_0068531c;
extern "C" unsigned long UNK_006853d4;
extern "C" unsigned long UNK_00685400;
extern "C" unsigned long _UNK_00684f40;
extern "C" unsigned long _UNK_00684f44;
extern "C" unsigned long _UNK_00684f58;
extern "C" unsigned long _UNK_00684f80;
extern "C" unsigned long _UNK_00685034;
extern "C" unsigned long _UNK_00685038;
extern "C" unsigned long _UNK_00685518;
extern "C" unsigned long _UNK_0068551c;
extern "C" unsigned long _UNK_00685520;
extern "C" unsigned long _UNK_00685524;
extern "C" unsigned long _UNK_00685528;
extern "C" unsigned long _UNK_0068552c;
extern "C" unsigned long _UNK_00685530;
extern "C" unsigned long _UNK_00685534;
extern "C" unsigned long _UNK_00685538;
extern "C" unsigned long _UNK_0068553c;
extern "C" unsigned long _UNK_00685540;
extern "C" unsigned long _UNK_00685544;
extern "C" unsigned long _UNK_00685548;
extern "C" unsigned long _UNK_0068554c;
extern "C" unsigned long g_00684ebc;
extern "C" unsigned long g_00684f0e;
extern "C" unsigned long g_00684f40;
extern "C" unsigned long g_00684f44;
extern "C" unsigned long g_00684f54;
extern "C" unsigned long g_00684f58;
extern "C" unsigned long g_00684f7c;
extern "C" unsigned long g_00684f80;
extern "C" unsigned long g_00684fc4;
extern "C" unsigned long g_00685000;
extern "C" unsigned long g_00685034;
extern "C" unsigned long g_00685038;
extern "C" unsigned long g_0068513e;
extern "C" unsigned long g_00685168;
extern "C" unsigned long g_0068523a;
extern "C" unsigned long g_00685266;
extern "C" unsigned long g_0068531c;
extern "C" unsigned long g_006853d4;
extern "C" unsigned long g_00685400;
extern "C" unsigned long g_00685518;
extern "C" unsigned long g_0068551c;
extern "C" unsigned long g_00685520;
extern "C" unsigned long g_00685524;
extern "C" unsigned long g_00685528;
extern "C" unsigned long g_0068552c;
extern "C" unsigned long g_00685530;
extern "C" unsigned long g_00685534;
extern "C" unsigned long g_00685538;
extern "C" unsigned long g_0068553c;
extern "C" unsigned long g_00685540;
extern "C" unsigned long g_00685544;
extern "C" unsigned long g_00685548;
extern "C" unsigned long g_0068554c;
BLUpgraceButtonView::~BLUpgraceButtonView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_00684ebc + g_00684f40);
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
  func_0079e45c(&uStack_14,&g_00684f0e + g_00684f44,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLUpgraceButtonView::BLUpgraceButtonView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = (undefined4)(intptr_t)(*(int *)((unsigned char *)((char *)&g_00684fc4 + (intptr_t)(g_00685034))));
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
  func_0079e45c(&uStack_14,(unsigned char *)((char *)&g_00685000 + (intptr_t)(g_00685038)),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * BLUpgraceButtonView::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x120)));
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

undefined4 BLUpgraceButtonView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 BLUpgraceButtonView::getBtnUpgrace()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

undefined4 BLUpgraceButtonView::getLabPrice()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

undefined4 BLUpgraceButtonView::getSprCoin()
{
  return *(undefined4 *)(((int)this) + 0x118);
}

undefined4 BLUpgraceButtonView::getLabUpgrace()
{
  return *(undefined4 *)(((int)this) + 0x11c);
}

void BLUpgraceButtonView::onEnter()
{
  ((BLUpgraceButtonPresenter *)*(undefined4 *)(((int)this) + 0x10c))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLUpgraceButtonView::onExit()
{
  ((BLUpgraceButtonPresenter *)*(undefined4 *)(((int)this) + 0x10c))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
bool BLUpgraceButtonView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
