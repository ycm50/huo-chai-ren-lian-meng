#include "BLUpgraceMAXButtonView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLUpgraceMAXButtonPresenter.h"
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
extern "C" unsigned long UNK_00685584;
extern "C" unsigned long UNK_006855c8;
extern "C" unsigned long UNK_0068560c;
extern "C" unsigned long UNK_00685634;
extern "C" unsigned long UNK_0068567c;
extern "C" unsigned long UNK_006856aa;
extern "C" unsigned long UNK_006857d4;
extern "C" unsigned long UNK_006857fe;
extern "C" unsigned long UNK_006858d0;
extern "C" unsigned long UNK_006858fc;
extern "C" unsigned long UNK_006859b2;
extern "C" unsigned long UNK_00685a6a;
extern "C" unsigned long UNK_00685a96;
extern "C" unsigned long _UNK_006855f8;
extern "C" unsigned long _UNK_006855fc;
extern "C" unsigned long _UNK_00685610;
extern "C" unsigned long _UNK_00685638;
extern "C" unsigned long _UNK_006856d4;
extern "C" unsigned long _UNK_006856d8;
extern "C" unsigned long _UNK_00685bac;
extern "C" unsigned long _UNK_00685bb0;
extern "C" unsigned long _UNK_00685bb4;
extern "C" unsigned long _UNK_00685bb8;
extern "C" unsigned long _UNK_00685bbc;
extern "C" unsigned long _UNK_00685bc0;
extern "C" unsigned long _UNK_00685bc4;
extern "C" unsigned long _UNK_00685bc8;
extern "C" unsigned long _UNK_00685bcc;
extern "C" unsigned long _UNK_00685bd0;
extern "C" unsigned long _UNK_00685bd4;
extern "C" unsigned long _UNK_00685bd8;
extern "C" unsigned long _UNK_00685bdc;
extern "C" unsigned long _UNK_00685be0;
extern "C" unsigned long g_00685584;
extern "C" unsigned long g_006855c8;
extern "C" unsigned long g_006855f8;
extern "C" unsigned long g_006855fc;
extern "C" unsigned long g_0068560c;
extern "C" unsigned long g_00685610;
extern "C" unsigned long g_00685634;
extern "C" unsigned long g_00685638;
extern "C" unsigned long g_0068567c;
extern "C" unsigned long g_006856aa;
extern "C" unsigned long g_006856d4;
extern "C" unsigned long g_006856d8;
extern "C" unsigned long g_006857d4;
extern "C" unsigned long g_006857fe;
extern "C" unsigned long g_006858d0;
extern "C" unsigned long g_006858fc;
extern "C" unsigned long g_006859b2;
extern "C" unsigned long g_00685a6a;
extern "C" unsigned long g_00685a96;
extern "C" unsigned long g_00685bac;
extern "C" unsigned long g_00685bb0;
extern "C" unsigned long g_00685bb4;
extern "C" unsigned long g_00685bb8;
extern "C" unsigned long g_00685bbc;
extern "C" unsigned long g_00685bc0;
extern "C" unsigned long g_00685bc4;
extern "C" unsigned long g_00685bc8;
extern "C" unsigned long g_00685bcc;
extern "C" unsigned long g_00685bd0;
extern "C" unsigned long g_00685bd4;
extern "C" unsigned long g_00685bd8;
extern "C" unsigned long g_00685bdc;
extern "C" unsigned long g_00685be0;
BLUpgraceMAXButtonView::~BLUpgraceMAXButtonView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_00685584 + g_006855f8);
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
  func_0079e45c(&uStack_14,&g_006855c8 + g_006855fc,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLUpgraceMAXButtonView::BLUpgraceMAXButtonView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_0068567c + g_006856d4);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_006856aa + g_006856d8,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * BLUpgraceMAXButtonView::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x11c)));
  0 /* ctorZero */;
  iVar2 = (**(code **)(*piVar1 + 0x18))(piVar1);
  if (iVar2 == 0) {
    ((cocos2d::CCObject *)piVar1)->release();
    piVar1 = (int *)0x0;
  }
  return (int *)(piVar1);
}

undefined4 BLUpgraceMAXButtonView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x108);
}

undefined4 BLUpgraceMAXButtonView::getBtnUpgrace()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 BLUpgraceMAXButtonView::getLabPrice()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

undefined4 BLUpgraceMAXButtonView::getSprCoin()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

undefined4 BLUpgraceMAXButtonView::getLabUpgrace()
{
  return *(undefined4 *)(((int)this) + 0x118);
}

void BLUpgraceMAXButtonView::onEnter()
{
  ((BLUpgraceMAXButtonPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLUpgraceMAXButtonView::onExit()
{
  ((BLUpgraceMAXButtonPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
bool BLUpgraceMAXButtonView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
