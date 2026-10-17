#include "JingJiShopView.h"
#include "BLGridView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLListButton.h"
#include "JingJiShopPresenter.h"
#include "UIManager.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
using namespace cocos2d;
// 兜底声明
extern "C" long long func_0057a37c(...);
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e30c(...);
extern "C" long long func_0079e33c(...);
extern "C" long long func_0079e34c(...);
extern "C" long long func_0079e38c(...);
extern "C" long long func_0079e39c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long func_0079e5bc(...);
extern "C" long long func_0079e774(...);
extern "C" long long func_0079e904(...);
extern "C" long long func_0079e914(...);
extern "C" long long ghidra_CONCAT13(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_00579478;
extern "C" unsigned long UNK_005794bc;
extern "C" unsigned long UNK_00579500;
extern "C" unsigned long UNK_00579528;
extern "C" unsigned long UNK_00579624;
extern "C" unsigned long UNK_00579650;
extern "C" unsigned long UNK_005796f4;
extern "C" unsigned long UNK_00579740;
extern "C" unsigned long UNK_0057975c;
extern "C" unsigned long UNK_005797da;
extern "C" unsigned long UNK_00579848;
extern "C" unsigned long UNK_00579862;
extern "C" unsigned long UNK_0057994a;
extern "C" unsigned long UNK_005799e6;
extern "C" unsigned long UNK_00579a1c;
extern "C" unsigned long UNK_00579a52;
extern "C" unsigned long UNK_00579a88;
extern "C" unsigned long UNK_00579ac0;
extern "C" unsigned long UNK_00579ade;
extern "C" unsigned long UNK_00579afa;
extern "C" unsigned long UNK_00579b16;
extern "C" unsigned long UNK_00579b32;
extern "C" unsigned long UNK_00579b56;
extern "C" unsigned long UNK_00579b74;
extern "C" unsigned long UNK_00579b90;
extern "C" unsigned long UNK_00579bac;
extern "C" unsigned long UNK_00579bc8;
extern "C" unsigned long UNK_00579bfe;
extern "C" unsigned long UNK_00579bff;
extern "C" unsigned long UNK_00579c00;
extern "C" unsigned long UNK_00579e18;
extern "C" unsigned long UNK_00579eda;
extern "C" unsigned long UNK_00579ef8;
extern "C" unsigned long UNK_00579f68;
extern "C" unsigned long UNK_0057a036;
extern "C" unsigned long UNK_0057a044;
extern "C" unsigned long UNK_0057a068;
extern "C" unsigned long UNK_0057a06c;
extern "C" unsigned long UNK_0057a09e;
extern "C" unsigned long UNK_0057a0f8;
extern "C" unsigned long UNK_0057a104;
extern "C" unsigned long UNK_0057a19e;
extern "C" unsigned long UNK_0057a1ec;
extern "C" unsigned long UNK_00787878;
extern "C" unsigned long _DAT_005795b0;
extern "C" unsigned long _DAT_005795b4;
extern "C" unsigned long _UNK_005794ec;
extern "C" unsigned long _UNK_005794f0;
extern "C" unsigned long _UNK_00579504;
extern "C" unsigned long _UNK_0057952c;
extern "C" unsigned long _UNK_00579960;
extern "C" unsigned long _UNK_00579964;
extern "C" unsigned long _UNK_00579968;
extern "C" unsigned long _UNK_0057996c;
extern "C" unsigned long _UNK_00579970;
extern "C" unsigned long _UNK_00579974;
extern "C" unsigned long _UNK_00579978;
extern "C" unsigned long _UNK_0057997c;
extern "C" unsigned long _UNK_00579980;
extern "C" unsigned long _UNK_00579984;
extern "C" unsigned long _UNK_00579988;
extern "C" unsigned long _UNK_0057998c;
extern "C" unsigned long _UNK_00579990;
extern "C" unsigned long _UNK_00579994;
extern "C" unsigned long _UNK_00579998;
extern "C" unsigned long _UNK_0057999c;
extern "C" unsigned long _UNK_005799a0;
extern "C" unsigned long _UNK_005799a4;
extern "C" unsigned long _UNK_005799a8;
extern "C" unsigned long _UNK_005799ac;
extern "C" unsigned long _UNK_005799b0;
extern "C" unsigned long _UNK_005799b4;
extern "C" unsigned long _UNK_00579d00;
extern "C" unsigned long _UNK_00579d04;
extern "C" unsigned long _UNK_00579d08;
extern "C" unsigned long _UNK_00579d0c;
extern "C" unsigned long _UNK_00579d10;
extern "C" unsigned long _UNK_00579d14;
extern "C" unsigned long _UNK_00579d18;
extern "C" unsigned long _UNK_00579d1c;
extern "C" unsigned long _UNK_00579d20;
extern "C" unsigned long _UNK_00579d24;
extern "C" unsigned long _UNK_00579d28;
extern "C" unsigned long _UNK_00579d2c;
extern "C" unsigned long _UNK_00579d30;
extern "C" unsigned long _UNK_00579d34;
extern "C" unsigned long _UNK_00579d38;
extern "C" unsigned long _UNK_00579d3c;
extern "C" unsigned long _UNK_00579d40;
extern "C" unsigned long _UNK_00579d44;
extern "C" unsigned long _UNK_0057a0a0;
extern "C" unsigned long _UNK_0057a0a4;
extern "C" unsigned long _UNK_0057a0a8;
extern "C" unsigned long _UNK_0057a0ac;
extern "C" unsigned long _UNK_0057a0b0;
extern "C" unsigned long _UNK_0057a0b4;
extern "C" unsigned long _UNK_0057a0b8;
extern "C" unsigned long _UNK_0057a0bc;
extern "C" unsigned long _UNK_0057a0c0;
extern "C" unsigned long _UNK_0057a0c4;
extern "C" unsigned long _UNK_0057a0c8;
extern "C" unsigned long _UNK_0057a0cc;
extern "C" unsigned long _UNK_0057a0d0;
extern "C" unsigned long _UNK_0057a0d4;
extern "C" unsigned long _UNK_0057a0d8;
extern "C" unsigned long _UNK_0057a0dc;
extern "C" unsigned long _UNK_0057a0e0;
extern "C" unsigned long _UNK_0057a0e4;
extern "C" unsigned long _UNK_0057a0e8;
extern "C" unsigned long _UNK_0057a0ec;
extern "C" unsigned long _UNK_0057a390;
extern "C" unsigned long _UNK_0057a394;
extern "C" unsigned long _UNK_0057a398;
extern "C" unsigned long _UNK_0057a39c;
extern "C" unsigned long _UNK_0057a3a0;
extern "C" unsigned long _UNK_0057a3a4;
extern "C" unsigned long _UNK_0057a3a8;
extern "C" unsigned long _UNK_0057a3ac;
extern "C" unsigned long unaff_r5;
extern "C" unsigned long g_00579478;
extern "C" unsigned long g_005794bc;
extern "C" unsigned long g_005794ec;
extern "C" unsigned long g_005794f0;
extern "C" unsigned long g_00579500;
extern "C" unsigned long g_00579504;
extern "C" unsigned long g_00579528;
extern "C" unsigned long g_0057952c;
extern "C" unsigned long g_005795b0;
extern "C" unsigned long g_005795b4;
extern "C" unsigned long g_00579624;
extern "C" unsigned long g_00579650;
extern "C" unsigned long g_005796f4;
extern "C" unsigned long g_00579740;
extern "C" unsigned long g_0057975c;
extern "C" unsigned long g_005797da;
extern "C" unsigned long g_00579848;
extern "C" unsigned long g_00579862;
extern "C" unsigned long g_0057994a;
extern "C" unsigned long g_00579960;
extern "C" unsigned long g_00579964;
extern "C" unsigned long g_00579968;
extern "C" unsigned long g_0057996c;
extern "C" unsigned long g_00579970;
extern "C" unsigned long g_00579974;
extern "C" unsigned long g_00579978;
extern "C" unsigned long g_0057997c;
extern "C" unsigned long g_00579980;
extern "C" unsigned long g_00579984;
extern "C" unsigned long g_00579988;
extern "C" unsigned long g_0057998c;
extern "C" unsigned long g_00579990;
extern "C" unsigned long g_00579994;
extern "C" unsigned long g_00579998;
extern "C" unsigned long g_0057999c;
extern "C" unsigned long g_005799a0;
extern "C" unsigned long g_005799a4;
extern "C" unsigned long g_005799a8;
extern "C" unsigned long g_005799ac;
extern "C" unsigned long g_005799b0;
extern "C" unsigned long g_005799b4;
extern "C" unsigned long g_005799e6;
extern "C" unsigned long g_00579a1c;
extern "C" unsigned long g_00579a52;
extern "C" unsigned long g_00579a88;
extern "C" unsigned long g_00579ac0;
extern "C" unsigned long g_00579ade;
extern "C" unsigned long g_00579afa;
extern "C" unsigned long g_00579b16;
extern "C" unsigned long g_00579b32;
extern "C" unsigned long g_00579b56;
extern "C" unsigned long g_00579b74;
extern "C" unsigned long g_00579b90;
extern "C" unsigned long g_00579bac;
extern "C" unsigned long g_00579bc8;
extern "C" unsigned long g_00579bfe;
extern "C" unsigned long g_00579bff;
extern "C" unsigned long g_00579c00;
extern "C" unsigned long g_00579d00;
extern "C" unsigned long g_00579d04;
extern "C" unsigned long g_00579d08;
extern "C" unsigned long g_00579d0c;
extern "C" unsigned long g_00579d10;
extern "C" unsigned long g_00579d14;
extern "C" unsigned long g_00579d18;
extern "C" unsigned long g_00579d1c;
extern "C" unsigned long g_00579d20;
extern "C" unsigned long g_00579d24;
extern "C" unsigned long g_00579d28;
extern "C" unsigned long g_00579d2c;
extern "C" unsigned long g_00579d30;
extern "C" unsigned long g_00579d34;
extern "C" unsigned long g_00579d38;
extern "C" unsigned long g_00579d3c;
extern "C" unsigned long g_00579d40;
extern "C" unsigned long g_00579d44;
extern "C" unsigned long g_00579e18;
extern "C" unsigned long g_00579eda;
extern "C" unsigned long g_00579ef8;
extern "C" unsigned long g_00579f68;
extern "C" unsigned long g_0057a036;
extern "C" unsigned long g_0057a044;
extern "C" unsigned long g_0057a068;
extern "C" unsigned long g_0057a06c;
extern "C" unsigned long g_0057a09e;
extern "C" unsigned long g_0057a0a0;
extern "C" unsigned long g_0057a0a4;
extern "C" unsigned long g_0057a0a8;
extern "C" unsigned long g_0057a0ac;
extern "C" unsigned long g_0057a0b0;
extern "C" unsigned long g_0057a0b4;
extern "C" unsigned long g_0057a0b8;
extern "C" unsigned long g_0057a0bc;
extern "C" unsigned long g_0057a0c0;
extern "C" unsigned long g_0057a0c4;
extern "C" unsigned long g_0057a0c8;
extern "C" unsigned long g_0057a0cc;
extern "C" unsigned long g_0057a0d0;
extern "C" unsigned long g_0057a0d4;
extern "C" unsigned long g_0057a0d8;
extern "C" unsigned long g_0057a0dc;
extern "C" unsigned long g_0057a0e0;
extern "C" unsigned long g_0057a0e4;
extern "C" unsigned long g_0057a0e8;
extern "C" unsigned long g_0057a0ec;
extern "C" unsigned long g_0057a0f8;
extern "C" unsigned long g_0057a104;
extern "C" unsigned long g_0057a19e;
extern "C" unsigned long g_0057a1ec;
extern "C" unsigned long g_0057a390;
extern "C" unsigned long g_0057a394;
extern "C" unsigned long g_0057a398;
extern "C" unsigned long g_0057a39c;
extern "C" unsigned long g_0057a3a0;
extern "C" unsigned long g_0057a3a4;
extern "C" unsigned long g_0057a3a8;
extern "C" unsigned long g_0057a3ac;
extern "C" unsigned long g_00787878;
JingJiShopView::~JingJiShopView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_00579478 + g_005794ec);
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
  func_0079e45c(&uStack_14,&g_005794bc + g_005794f0,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

JingJiShopView::JingJiShopView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(g_005795b0 + 0x579540);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  *(int *)((int)this + 4*(0x43)) = 0;
  *(int *)((int)this + 4*(0x44)) = 0;
  *(int *)((int)this + 4*(0x45)) = 0;
  *(int *)((int)this + 4*(0x47)) = 0;
  ((UIManager *)this)->shareManager();
  ((UIManager *)this)->pushCurScrollViewUnEnable();
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"JingJiShopView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

undefined4 JingJiShopView::getListButton()
{
  return *(undefined4 *)(((int)this) + 0x11c);
}

undefined4 JingJiShopView::getGridViewItem()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 JingJiShopView::getGridViewNum()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

undefined4 JingJiShopView::getScrollView()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

undefined4 JingJiShopView::getBtnClose()
{
  return *(undefined4 *)(((int)this) + 0x118);
}

undefined4 JingJiShopView::getSpriteLeft()
{
  return *(undefined4 *)(((int)this) + 0x124);
}

undefined4 JingJiShopView::getSpriteRight()
{
  return *(undefined4 *)(((int)this) + 0x128);
}

undefined4 JingJiShopView::getLabJifen()
{
  return *(undefined4 *)(((int)this) + 0x120);
}

void JingJiShopView::onEnter()
{
  ((cocos2d::CCLayer *)this)->onEnter();
  ((JingJiShopPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  return;
}

void JingJiShopView::onExit()
{
  ((UIManager *)this)->shareManager();
  ((UIManager *)this)->popUnEnableScrollView();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  ((JingJiShopPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
bool JingJiShopView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
