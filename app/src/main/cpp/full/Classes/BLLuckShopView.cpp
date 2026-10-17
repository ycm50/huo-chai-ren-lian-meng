#include "BLLuckShopView.h"
#include "BLGridView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLLuckShopPresenter.h"
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
extern "C" long long func_0079e30c(...);
extern "C" long long func_0079e34c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long func_0079e774(...);
extern "C" long long func_0079e904(...);
extern "C" long long func_0079e914(...);
extern "C" long long ghidra_CONCAT13(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_00585f8c;
extern "C" unsigned long UNK_00585fde;
extern "C" unsigned long UNK_00586024;
extern "C" unsigned long UNK_0058604c;
extern "C" unsigned long UNK_00586194;
extern "C" unsigned long UNK_005861d6;
extern "C" unsigned long UNK_0058627e;
extern "C" unsigned long UNK_005862d6;
extern "C" unsigned long UNK_0058635c;
extern "C" unsigned long UNK_005863c8;
extern "C" unsigned long UNK_005863e2;
extern "C" unsigned long UNK_005864a6;
extern "C" unsigned long UNK_00586560;
extern "C" unsigned long UNK_005865e6;
extern "C" unsigned long UNK_00586656;
extern "C" unsigned long UNK_0058666e;
extern "C" unsigned long UNK_005866f4;
extern "C" unsigned long UNK_005866fe;
extern "C" unsigned long UNK_0058670a;
extern "C" unsigned long UNK_005867c0;
extern "C" unsigned long _DAT_005860dc;
extern "C" unsigned long _DAT_005860e0;
extern "C" unsigned long _UNK_00586010;
extern "C" unsigned long _UNK_00586014;
extern "C" unsigned long _UNK_00586028;
extern "C" unsigned long _UNK_00586050;
extern "C" unsigned long _UNK_0058656c;
extern "C" unsigned long _UNK_00586570;
extern "C" unsigned long _UNK_00586574;
extern "C" unsigned long _UNK_00586578;
extern "C" unsigned long _UNK_0058657c;
extern "C" unsigned long _UNK_00586580;
extern "C" unsigned long _UNK_00586584;
extern "C" unsigned long _UNK_00586588;
extern "C" unsigned long _UNK_0058658c;
extern "C" unsigned long _UNK_00586590;
extern "C" unsigned long _UNK_00586594;
extern "C" unsigned long _UNK_00586598;
extern "C" unsigned long _UNK_0058659c;
extern "C" unsigned long _UNK_005865a0;
extern "C" unsigned long _UNK_005865a4;
extern "C" unsigned long _UNK_005865a8;
extern "C" unsigned long _UNK_005865ac;
extern "C" unsigned long _UNK_005865b0;
extern "C" unsigned long _UNK_005865b4;
extern "C" unsigned long _UNK_005865b8;
extern "C" unsigned long _UNK_005865bc;
extern "C" unsigned long _UNK_005865c0;
extern "C" unsigned long _UNK_005865c4;
extern "C" unsigned long _UNK_005868f8;
extern "C" unsigned long _UNK_005868fc;
extern "C" unsigned long _UNK_00586900;
extern "C" unsigned long _UNK_00586904;
extern "C" unsigned long _UNK_00586908;
extern "C" unsigned long _UNK_0058690c;
extern "C" unsigned long _UNK_00586910;
extern "C" unsigned long _UNK_00586914;
extern "C" unsigned long _UNK_00586918;
extern "C" unsigned long _UNK_0058691c;
extern "C" unsigned long _UNK_00586920;
extern "C" unsigned long _UNK_00586924;
extern "C" unsigned long _UNK_00586928;
extern "C" unsigned long _UNK_0058692c;
extern "C" unsigned long _UNK_00586930;
extern "C" unsigned long _UNK_00586934;
extern "C" unsigned long _UNK_00586938;
extern "C" unsigned long _UNK_0058693c;
extern "C" unsigned long g_00585f8c;
extern "C" unsigned long g_00585fde;
extern "C" unsigned long g_00586010;
extern "C" unsigned long g_00586014;
extern "C" unsigned long g_00586024;
extern "C" unsigned long g_00586028;
extern "C" unsigned long g_0058604c;
extern "C" unsigned long g_00586050;
extern "C" unsigned long g_005860dc;
extern "C" unsigned long g_005860e0;
extern "C" unsigned long g_00586194;
extern "C" unsigned long g_005861d6;
extern "C" unsigned long g_0058627e;
extern "C" unsigned long g_005862d6;
extern "C" unsigned long g_0058635c;
extern "C" unsigned long g_005863c8;
extern "C" unsigned long g_005863e2;
extern "C" unsigned long g_005864a6;
extern "C" unsigned long g_00586560;
extern "C" unsigned long g_0058656c;
extern "C" unsigned long g_00586570;
extern "C" unsigned long g_00586574;
extern "C" unsigned long g_00586578;
extern "C" unsigned long g_0058657c;
extern "C" unsigned long g_00586580;
extern "C" unsigned long g_00586584;
extern "C" unsigned long g_00586588;
extern "C" unsigned long g_0058658c;
extern "C" unsigned long g_00586590;
extern "C" unsigned long g_00586594;
extern "C" unsigned long g_00586598;
extern "C" unsigned long g_0058659c;
extern "C" unsigned long g_005865a0;
extern "C" unsigned long g_005865a4;
extern "C" unsigned long g_005865a8;
extern "C" unsigned long g_005865ac;
extern "C" unsigned long g_005865b0;
extern "C" unsigned long g_005865b4;
extern "C" unsigned long g_005865b8;
extern "C" unsigned long g_005865bc;
extern "C" unsigned long g_005865c0;
extern "C" unsigned long g_005865c4;
extern "C" unsigned long g_005865e6;
extern "C" unsigned long g_00586656;
extern "C" unsigned long g_0058666e;
extern "C" unsigned long g_005866f4;
extern "C" unsigned long g_005866fe;
extern "C" unsigned long g_0058670a;
extern "C" unsigned long g_005867c0;
extern "C" unsigned long g_005868f8;
extern "C" unsigned long g_005868fc;
extern "C" unsigned long g_00586900;
extern "C" unsigned long g_00586904;
extern "C" unsigned long g_00586908;
extern "C" unsigned long g_0058690c;
extern "C" unsigned long g_00586910;
extern "C" unsigned long g_00586914;
extern "C" unsigned long g_00586918;
extern "C" unsigned long g_0058691c;
extern "C" unsigned long g_00586920;
extern "C" unsigned long g_00586924;
extern "C" unsigned long g_00586928;
extern "C" unsigned long g_0058692c;
extern "C" unsigned long g_00586930;
extern "C" unsigned long g_00586934;
extern "C" unsigned long g_00586938;
extern "C" unsigned long g_0058693c;
BLLuckShopView::~BLLuckShopView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_00585f8c + g_00586010);
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
  func_0079e45c(&uStack_14,&g_00585fde + g_00586014,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}


int * BLLuckShopView::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x130)));
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

undefined4 BLLuckShopView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 BLLuckShopView::getListButton()
{
  return *(undefined4 *)(((int)this) + 0x120);
}

undefined4 BLLuckShopView::getGridViewItem()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

undefined4 BLLuckShopView::getGridViewNum()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

undefined4 BLLuckShopView::getScrollView()
{
  return *(undefined4 *)(((int)this) + 0x118);
}

undefined4 BLLuckShopView::getBtnClose()
{
  return *(undefined4 *)(((int)this) + 0x11c);
}

undefined4 BLLuckShopView::getSpriteLeft()
{
  return *(undefined4 *)(((int)this) + 0x124);
}

undefined4 BLLuckShopView::getSpriteRight()
{
  return *(undefined4 *)(((int)this) + 0x128);
}

undefined4 BLLuckShopView::getlabLuckfen()
{
  return *(undefined4 *)(((int)this) + 300);
}

void BLLuckShopView::onEnter()
{
  ((BLLuckShopPresenter *)*(undefined4 *)(((int)this) + 0x10c))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLLuckShopView::onExit()
{
  ((BLLuckShopPresenter *)*(undefined4 *)(((int)this) + 0x10c))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (2) =====
BLLuckShopView::BLLuckShopView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = (undefined4)(intptr_t)(*(int *)(g_005860dc + 0x586064));
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  *(int *)((int)this + 4*(0x44)) = 0;
  *(int *)((int)this + 4*(0x45)) = 0;
  *(int *)((int)this + 4*(0x46)) = 0;
  *(int *)((int)this + 4*(0x48)) = 0;
  iVar2 = (undefined4)(intptr_t)(cocos2d::CCArray::create());
  *(int *)((int)this + 4*(0x42)) = iVar2;
  if (iVar2 != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLLuckShopView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

bool BLLuckShopView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
