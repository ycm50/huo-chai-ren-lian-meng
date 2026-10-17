#include "BLMineCollectBuyHeroView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLMineCollectBuyHeroPresenter.h"
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
extern "C" unsigned long UNK_005ab3b0;
extern "C" unsigned long UNK_005ab3f4;
extern "C" unsigned long UNK_005ab438;
extern "C" unsigned long UNK_005ab460;
extern "C" unsigned long UNK_005ab60e;
extern "C" unsigned long UNK_005ab6f0;
extern "C" unsigned long UNK_005ab7ea;
extern "C" unsigned long UNK_005ab818;
extern "C" unsigned long UNK_005ab8f6;
extern "C" unsigned long UNK_005ab920;
extern "C" unsigned long UNK_005ab9f0;
extern "C" unsigned long UNK_005aba5c;
extern "C" unsigned long UNK_005abb1a;
extern "C" unsigned long UNK_005abb4e;
extern "C" unsigned long UNK_005abc6a;
extern "C" unsigned long UNK_005abc94;
extern "C" unsigned long _DAT_005ab500;
extern "C" unsigned long _DAT_005ab504;
extern "C" unsigned long _UNK_005ab424;
extern "C" unsigned long _UNK_005ab428;
extern "C" unsigned long _UNK_005ab43c;
extern "C" unsigned long _UNK_005ab464;
extern "C" unsigned long _UNK_005ab9f0;
extern "C" unsigned long _UNK_005ab9f4;
extern "C" unsigned long _UNK_005ab9f8;
extern "C" unsigned long _UNK_005ab9fc;
extern "C" unsigned long _UNK_005aba00;
extern "C" unsigned long _UNK_005aba04;
extern "C" unsigned long _UNK_005aba08;
extern "C" unsigned long _UNK_005aba0c;
extern "C" unsigned long _UNK_005aba10;
extern "C" unsigned long _UNK_005aba14;
extern "C" unsigned long _UNK_005aba18;
extern "C" unsigned long _UNK_005aba1c;
extern "C" unsigned long _UNK_005aba20;
extern "C" unsigned long _UNK_005aba24;
extern "C" unsigned long _UNK_005aba28;
extern "C" unsigned long _UNK_005aba2c;
extern "C" unsigned long _UNK_005abde8;
extern "C" unsigned long _UNK_005abdec;
extern "C" unsigned long _UNK_005abdf0;
extern "C" unsigned long _UNK_005abdf4;
extern "C" unsigned long _UNK_005abdf8;
extern "C" unsigned long _UNK_005abdfc;
extern "C" unsigned long _UNK_005abe00;
extern "C" unsigned long _UNK_005abe04;
extern "C" unsigned long _UNK_005abe08;
extern "C" unsigned long _UNK_005abe0c;
extern "C" unsigned long _UNK_005abe10;
extern "C" unsigned long _UNK_005abe14;
extern "C" unsigned long _UNK_005abe18;
extern "C" unsigned long _UNK_005abe1c;
extern "C" unsigned long g_005ab3b0;
extern "C" unsigned long g_005ab3f4;
extern "C" unsigned long g_005ab424;
extern "C" unsigned long g_005ab428;
extern "C" unsigned long g_005ab438;
extern "C" unsigned long g_005ab43c;
extern "C" unsigned long g_005ab460;
extern "C" unsigned long g_005ab464;
extern "C" unsigned long g_005ab500;
extern "C" unsigned long g_005ab504;
extern "C" unsigned long g_005ab60e;
extern "C" unsigned long g_005ab6f0;
extern "C" unsigned long g_005ab7ea;
extern "C" unsigned long g_005ab818;
extern "C" unsigned long g_005ab8f6;
extern "C" unsigned long g_005ab920;
extern "C" unsigned long g_005ab9f0;
extern "C" unsigned long g_005ab9f4;
extern "C" unsigned long g_005ab9f8;
extern "C" unsigned long g_005ab9fc;
extern "C" unsigned long g_005aba00;
extern "C" unsigned long g_005aba04;
extern "C" unsigned long g_005aba08;
extern "C" unsigned long g_005aba0c;
extern "C" unsigned long g_005aba10;
extern "C" unsigned long g_005aba14;
extern "C" unsigned long g_005aba18;
extern "C" unsigned long g_005aba1c;
extern "C" unsigned long g_005aba20;
extern "C" unsigned long g_005aba24;
extern "C" unsigned long g_005aba28;
extern "C" unsigned long g_005aba2c;
extern "C" unsigned long g_005aba5c;
extern "C" unsigned long g_005abb1a;
extern "C" unsigned long g_005abb4e;
extern "C" unsigned long g_005abc6a;
extern "C" unsigned long g_005abc94;
extern "C" unsigned long g_005abde8;
extern "C" unsigned long g_005abdec;
extern "C" unsigned long g_005abdf0;
extern "C" unsigned long g_005abdf4;
extern "C" unsigned long g_005abdf8;
extern "C" unsigned long g_005abdfc;
extern "C" unsigned long g_005abe00;
extern "C" unsigned long g_005abe04;
extern "C" unsigned long g_005abe08;
extern "C" unsigned long g_005abe0c;
extern "C" unsigned long g_005abe10;
extern "C" unsigned long g_005abe14;
extern "C" unsigned long g_005abe18;
extern "C" unsigned long g_005abe1c;
BLMineCollectBuyHeroView::~BLMineCollectBuyHeroView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_005ab3b0 + g_005ab424);
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
  func_0079e45c(&uStack_14,&g_005ab3f4 + g_005ab428,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLMineCollectBuyHeroView::BLMineCollectBuyHeroView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(g_005ab500 + 0x5ab4a8);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLMineCollectBuyHeroView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * BLMineCollectBuyHeroView::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x128)));
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

undefined4 BLMineCollectBuyHeroView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x108);
}

undefined4 BLMineCollectBuyHeroView::getBackGround()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 BLMineCollectBuyHeroView::getTabBg()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

undefined4 BLMineCollectBuyHeroView::getBtnSure()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

undefined4 BLMineCollectBuyHeroView::getBtnCancle()
{
  return *(undefined4 *)(((int)this) + 0x118);
}

undefined4 BLMineCollectBuyHeroView::getLabSure()
{
  return *(undefined4 *)(((int)this) + 0x11c);
}

undefined4 BLMineCollectBuyHeroView::getLabTitle()
{
  return *(undefined4 *)(((int)this) + 0x120);
}

undefined4 BLMineCollectBuyHeroView::getLabCancle()
{
  return *(undefined4 *)(((int)this) + 0x124);
}

void BLMineCollectBuyHeroView::onEnter()
{
  ((BLMineCollectBuyHeroPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLMineCollectBuyHeroView::onExit()
{
  ((BLMineCollectBuyHeroPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
bool BLMineCollectBuyHeroView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
