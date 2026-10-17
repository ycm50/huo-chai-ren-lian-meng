#include "JingJiShopItemPresenter.h"
#include "BLFileUtils.h"
#include "BLJJSDataInfoPresenter.h"
#include "BLJJSDataInfoView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "CircusShopData.h"
#include "CircusShopItem.h"
#include "DataCacheManager.h"
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
extern "C" unsigned long UNK_00577e04;
extern "C" unsigned long UNK_00577e5c;
extern "C" unsigned long UNK_00577e7a;
extern "C" unsigned long UNK_00577ecc;
extern "C" unsigned long UNK_00577ef4;
extern "C" unsigned long UNK_00577f0a;
extern "C" unsigned long UNK_00577f1a;
extern "C" unsigned long UNK_00577f56;
extern "C" unsigned long UNK_00577ffa;
extern "C" unsigned long UNK_0057801e;
extern "C" unsigned long UNK_005780ee;
extern "C" unsigned long UNK_00578242;
extern "C" unsigned long UNK_005782aa;
extern "C" unsigned long UNK_005783c8;
extern "C" unsigned long UNK_0057842c;
extern "C" unsigned long UNK_005784f0;
extern "C" unsigned long UNK_005785cc;
extern "C" unsigned long UNK_005785ce;
extern "C" unsigned long UNK_00578622;
extern "C" unsigned long UNK_00578624;
extern "C" unsigned long _UNK_00577e08;
extern "C" unsigned long _UNK_00577eb8;
extern "C" unsigned long _UNK_00577ebc;
extern "C" unsigned long _UNK_00577ed0;
extern "C" unsigned long _UNK_00577ef8;
extern "C" unsigned long _UNK_00577f88;
extern "C" unsigned long _UNK_00577f8c;
extern "C" unsigned long _UNK_00577f90;
extern "C" unsigned long _UNK_00578004;
extern "C" unsigned long _UNK_00578374;
extern "C" unsigned long _UNK_00578378;
extern "C" unsigned long _UNK_0057837c;
extern "C" unsigned long _UNK_00578380;
extern "C" unsigned long _UNK_005785a4;
extern "C" unsigned long _UNK_005785a8;
extern "C" unsigned long _UNK_005785ac;
extern "C" unsigned long _UNK_005785b0;
extern "C" unsigned long _UNK_00578684;
extern "C" unsigned long _UNK_00578688;
extern "C" unsigned long _UNK_0057868c;
extern "C" unsigned long _UNK_00578690;
extern "C" unsigned long g_00577e04;
extern "C" unsigned long g_00577e08;
extern "C" unsigned long g_00577e5c;
extern "C" unsigned long g_00577e7a;
extern "C" unsigned long g_00577eb8;
extern "C" unsigned long g_00577ebc;
extern "C" unsigned long g_00577ecc;
extern "C" unsigned long g_00577ed0;
extern "C" unsigned long g_00577ef4;
extern "C" unsigned long g_00577ef8;
extern "C" unsigned long g_00577f0a;
extern "C" unsigned long g_00577f1a;
extern "C" unsigned long g_00577f56;
extern "C" unsigned long g_00577f88;
extern "C" unsigned long g_00577f8c;
extern "C" unsigned long g_00577f90;
extern "C" unsigned long g_00577ffa;
extern "C" unsigned long g_00578004;
extern "C" unsigned long g_0057801e;
extern "C" unsigned long g_005780ee;
extern "C" unsigned long g_00578242;
extern "C" unsigned long g_005782aa;
extern "C" unsigned long g_00578374;
extern "C" unsigned long g_00578378;
extern "C" unsigned long g_0057837c;
extern "C" unsigned long g_00578380;
extern "C" unsigned long g_005783c8;
extern "C" unsigned long g_0057842c;
extern "C" unsigned long g_005784f0;
extern "C" unsigned long g_005785a4;
extern "C" unsigned long g_005785a8;
extern "C" unsigned long g_005785ac;
extern "C" unsigned long g_005785b0;
extern "C" unsigned long g_005785cc;
extern "C" unsigned long g_005785ce;
extern "C" unsigned long g_00578622;
extern "C" unsigned long g_00578624;
extern "C" unsigned long g_00578684;
extern "C" unsigned long g_00578688;
extern "C" unsigned long g_0057868c;
extern "C" unsigned long g_00578690;
bool JingJiShopItemPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

JingJiShopItemPresenter::~JingJiShopItemPresenter()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  iVar2 = *(int *)(&g_00577e5c + g_00577eb8);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x2c;
  piStack_20 = (int *)((int)this);
  uStack_1c = (undefined4)(p2);
  uStack_18 = (undefined4)(p3);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_1c,&g_00577e7a + g_00577ebc,&piStack_20);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_1c);
  func_0079e2bc(&uStack_1c);
  ((CircusShopItem *)((int)this) + 7)->~CircusShopItem();
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

JingJiShopItemPresenter::JingJiShopItemPresenter()
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
  iVar3 = *(int *)(&g_00577f0a + g_00577f88);
  *(int *)((int)this + 4*(5)) = iVar3 + 0x2c;
  iVar4 = g_00577f8c;
  *(int *)this = iVar3 + 8;
  iVar4 = *(int *)(&g_00577f1a + iVar4) + 0xc;
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
  func_0079e45c(&uStack_14,&g_00577f56 + g_00577f90,&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

void JingJiShopItemPresenter::onEnter()
{
  return;
}

void JingJiShopItemPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  return;
}

undefined4 JingJiShopItemPresenter::create()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x5c))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}


void JingJiShopItemPresenter::tick(float p1)
{
  return;
}

// ===== 修复: 补回被误删的函数占位 (3) =====
void JingJiShopItemPresenter::initWithView(JingJiShopItemView* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void JingJiShopItemPresenter::initWithData(CircusShopItem& p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void JingJiShopItemPresenter::onBuy(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
