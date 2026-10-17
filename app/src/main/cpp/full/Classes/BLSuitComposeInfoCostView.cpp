#include "BLSuitComposeInfoCostView.h"
#include "BLLeakUtils.h"
#include "BLSuitComposeInfoCostPresenter.h"
#include "BLSuitComposeInfoItemView.h"
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
extern "C" long long func_0079e34c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_006932d0;
extern "C" unsigned long UNK_0069331c;
extern "C" unsigned long UNK_00693378;
extern "C" unsigned long UNK_006933a0;
extern "C" unsigned long UNK_00693590;
extern "C" unsigned long UNK_006935ce;
extern "C" unsigned long UNK_0069405e;
extern "C" unsigned long UNK_006940c2;
extern "C" unsigned long UNK_006940c4;
extern "C" unsigned long UNK_006940d4;
extern "C" unsigned long UNK_006940d8;
extern "C" unsigned long UNK_006940dc;
extern "C" unsigned long UNK_006940e0;
extern "C" unsigned long UNK_006940e4;
extern "C" unsigned long UNK_006942a4;
extern "C" unsigned long _UNK_00693364;
extern "C" unsigned long _UNK_00693368;
extern "C" unsigned long _UNK_0069337c;
extern "C" unsigned long _UNK_006933a4;
extern "C" unsigned long _UNK_00693604;
extern "C" unsigned long _UNK_00693608;
extern "C" unsigned long _UNK_00694324;
extern "C" unsigned long _UNK_00694328;
extern "C" unsigned long _UNK_0069432c;
extern "C" unsigned long _UNK_00694330;
extern "C" unsigned long _UNK_00694334;
extern "C" unsigned long _UNK_00694338;
extern "C" unsigned long _UNK_0069433c;
extern "C" unsigned long _UNK_00694340;
extern "C" unsigned long _UNK_00694344;
extern "C" unsigned long _UNK_00694348;
extern "C" unsigned long _UNK_0069434c;
extern "C" unsigned long g_006932d0;
extern "C" unsigned long g_0069331c;
extern "C" unsigned long g_00693364;
extern "C" unsigned long g_00693368;
extern "C" unsigned long g_00693378;
extern "C" unsigned long g_0069337c;
extern "C" unsigned long g_006933a0;
extern "C" unsigned long g_006933a4;
extern "C" unsigned long g_00693590;
extern "C" unsigned long g_006935ce;
extern "C" unsigned long g_00693604;
extern "C" unsigned long g_00693608;
extern "C" unsigned long g_0069405e;
extern "C" unsigned long g_006940c2;
extern "C" unsigned long g_006940c4;
extern "C" unsigned long g_006940d4;
extern "C" unsigned long g_006940d8;
extern "C" unsigned long g_006940dc;
extern "C" unsigned long g_006940e0;
extern "C" unsigned long g_006940e4;
extern "C" unsigned long g_006942a4;
extern "C" unsigned long g_00694324;
extern "C" unsigned long g_00694328;
extern "C" unsigned long g_0069432c;
extern "C" unsigned long g_00694330;
extern "C" unsigned long g_00694334;
extern "C" unsigned long g_00694338;
extern "C" unsigned long g_0069433c;
extern "C" unsigned long g_00694340;
extern "C" unsigned long g_00694344;
extern "C" unsigned long g_00694348;
extern "C" unsigned long g_0069434c;
BLSuitComposeInfoCostView::~BLSuitComposeInfoCostView()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  iVar2 = *(int *)(&g_006932d0 + g_00693364);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  *(int *)((int)this + 4*(0x44)) = *(int *)((int)this + 4*(0x43));
  piStack_20 = (int *)((int)this);
  uStack_1c = (undefined4)(p2);
  uStack_18 = (undefined4)(p3);
  if (*(int *)((int)this + 4*(0x42)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x42)) = 0;
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_1c,&g_0069331c + g_00693368,&piStack_20);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_1c);
  func_0079e2bc(&uStack_1c);
  if (*(int *)((int)this + 4*(0x43)) != 0) {
    (void)(::operator delete((void *)(*(int *)((int)this + 4*(0x43)))));
  }
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLSuitComposeInfoCostView::BLSuitComposeInfoCostView()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  piStack_20 = (int *)((int)this);
  uStack_1c = (undefined4)(p2);
  uStack_18 = (undefined4)(p3);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_00693590 + g_00693604);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  *(int *)((int)this + 4*(0x43)) = 0;
  *(int *)((int)this + 4*(0x44)) = 0;
  *(int *)((int)this + 4*(0x45)) = 0;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_1c,&g_006935ce + g_00693608,&piStack_20);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_1c);
  func_0079e2bc(&uStack_1c);
  return;
}


bool BLSuitComposeInfoCostView::init()
{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = ((cocos2d::CCLayer *)this)->init();
  if (iVar1 != 0) {
    uVar2 = (undefined4)(((BLSuitComposeInfoCostPresenter *)this)->create());
    *(undefined4 *)(((int)this) + 0x108) = uVar2;
    ((cocos2d::CCObject *)this)->retain();
    BLSuitComposeInfoCostView::initView();
    ((BLSuitComposeInfoCostPresenter *)*(undefined4 *)(((int)this) + 0x108))->initWithView((BLSuitComposeInfoCostView*)((int)this));
  }
  return iVar1;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
void BLSuitComposeInfoCostView::initView()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
