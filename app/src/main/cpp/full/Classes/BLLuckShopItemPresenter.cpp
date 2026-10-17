#include "BLLuckShopItemPresenter.h"
#include "BLFileUtils.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLLuckShopDataInfoPresenter.h"
#include "BLLuckShopDataInfoView.h"
#include "LuckShopData.h"
#include "LuckShopItem.h"
#include "PairingDownPng.h"
#include "UIManager.h"
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
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e5dc(...);
extern "C" long long func_0079e904(...);
extern "C" long long func_0079e914(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_00582898;
extern "C" unsigned long UNK_005828f0;
extern "C" unsigned long UNK_0058290e;
extern "C" unsigned long UNK_00582960;
extern "C" unsigned long UNK_00582988;
extern "C" unsigned long UNK_0058299e;
extern "C" unsigned long UNK_005829ae;
extern "C" unsigned long UNK_005829ea;
extern "C" unsigned long UNK_00582a8e;
extern "C" unsigned long UNK_00582ab2;
extern "C" unsigned long UNK_00582b82;
extern "C" unsigned long UNK_00582cd6;
extern "C" unsigned long UNK_00582d3e;
extern "C" unsigned long UNK_00582e5e;
extern "C" unsigned long UNK_00582ef8;
extern "C" unsigned long UNK_00583010;
extern "C" unsigned long UNK_00583012;
extern "C" unsigned long UNK_00583066;
extern "C" unsigned long UNK_00583068;
extern "C" unsigned long _UNK_0058289c;
extern "C" unsigned long _UNK_0058294c;
extern "C" unsigned long _UNK_00582950;
extern "C" unsigned long _UNK_00582964;
extern "C" unsigned long _UNK_0058298c;
extern "C" unsigned long _UNK_00582a1c;
extern "C" unsigned long _UNK_00582a20;
extern "C" unsigned long _UNK_00582a24;
extern "C" unsigned long _UNK_00582a98;
extern "C" unsigned long _UNK_00582e08;
extern "C" unsigned long _UNK_00582e0c;
extern "C" unsigned long _UNK_00582e10;
extern "C" unsigned long _UNK_00582e14;
extern "C" unsigned long _UNK_00582fec;
extern "C" unsigned long _UNK_00582ff0;
extern "C" unsigned long _UNK_00582ff4;
extern "C" unsigned long _UNK_005830c8;
extern "C" unsigned long _UNK_005830cc;
extern "C" unsigned long _UNK_005830d0;
extern "C" unsigned long _UNK_005830d4;
extern "C" unsigned long g_00582898;
extern "C" unsigned long g_0058289c;
extern "C" unsigned long g_005828f0;
extern "C" unsigned long g_0058290e;
extern "C" unsigned long g_0058294c;
extern "C" unsigned long g_00582950;
extern "C" unsigned long g_00582960;
extern "C" unsigned long g_00582964;
extern "C" unsigned long g_00582988;
extern "C" unsigned long g_0058298c;
extern "C" unsigned long g_0058299e;
extern "C" unsigned long g_005829ae;
extern "C" unsigned long g_005829ea;
extern "C" unsigned long g_00582a1c;
extern "C" unsigned long g_00582a20;
extern "C" unsigned long g_00582a24;
extern "C" unsigned long g_00582a8e;
extern "C" unsigned long g_00582a98;
extern "C" unsigned long g_00582ab2;
extern "C" unsigned long g_00582b82;
extern "C" unsigned long g_00582cd6;
extern "C" unsigned long g_00582d3e;
extern "C" unsigned long g_00582e08;
extern "C" unsigned long g_00582e0c;
extern "C" unsigned long g_00582e10;
extern "C" unsigned long g_00582e14;
extern "C" unsigned long g_00582e5e;
extern "C" unsigned long g_00582ef8;
extern "C" unsigned long g_00582fec;
extern "C" unsigned long g_00582ff0;
extern "C" unsigned long g_00582ff4;
extern "C" unsigned long g_00583010;
extern "C" unsigned long g_00583012;
extern "C" unsigned long g_00583066;
extern "C" unsigned long g_00583068;
extern "C" unsigned long g_005830c8;
extern "C" unsigned long g_005830cc;
extern "C" unsigned long g_005830d0;
extern "C" unsigned long g_005830d4;
bool BLLuckShopItemPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

BLLuckShopItemPresenter::~BLLuckShopItemPresenter()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  iVar2 = *(int *)(&g_005828f0 + g_0058294c);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x2c;
  piStack_20 = (int *)((int)this);
  uStack_1c = (undefined4)(p2);
  uStack_18 = (undefined4)(p3);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_1c,&g_0058290e + g_00582950,&piStack_20);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_1c);
  func_0079e2bc(&uStack_1c);
  ((LuckShopItem *)((int)this) + 7)->~LuckShopItem();
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLLuckShopItemPresenter::BLLuckShopItemPresenter()
{
  undefined4 p2 = 0;

  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar3 = *(int *)(&g_0058299e + g_00582a1c);
  *(int *)((int)this + 4*(5)) = iVar3 + 0x2c;
  iVar4 = g_00582a20;
  *(int *)this = iVar3 + 8;
  iVar4 = *(int *)(&g_005829ae + iVar4) + 0xc;
  *(int *)((int)this + 4*(9)) = iVar4;
  *(int *)((int)this + 4*(10)) = iVar4;
  *(int *)((int)this + 4*(0xb)) = iVar4;
  *(int *)((int)this + 4*(0xc)) = iVar4;
  *(int *)((int)this + 4*(0x14)) = 0;
  *(int *)((int)this + 4*(0x15)) = 0;
  *(int *)((int)this + 4*(0x16)) = 0;
  *(int *)((int)this + 4*(7)) = -1;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 1);
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005829ea + g_00582a24,&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

void BLLuckShopItemPresenter::onEnter()
{
  return;
}

void BLLuckShopItemPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  return;
}

undefined4 BLLuckShopItemPresenter::create()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x5c))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}


void BLLuckShopItemPresenter::tick(float p1)
{
  return;
}

// ===== 修复: 补回被误删的函数占位 (3) =====
void BLLuckShopItemPresenter::initWithView(BLLuckShopItemView* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLLuckShopItemPresenter::initWithData(LuckShopItem& p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLLuckShopItemPresenter::onBuy(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
