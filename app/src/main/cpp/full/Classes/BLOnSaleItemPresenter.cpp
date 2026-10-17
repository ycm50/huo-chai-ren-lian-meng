#include "BLOnSaleItemPresenter.h"
#include "BLItemDataInfoPresenter.h"
#include "BLItemDataInfoView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLOnSaleItemView.h"
#include "DataCacheManager.h"
#include "DataManager.h"
#include "OnSaleData.h"
#include "OnSaleItem.h"
#include "Toast.h"
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
extern "C" long long func_0079e3bc(...);
extern "C" long long func_0079e41c(...);
extern "C" long long func_0079e42c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e48c(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e5bc(...);
extern "C" long long func_0079e784(...);
extern "C" long long func_0079e904(...);
extern "C" long long func_0079e914(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_005e65c4;
extern "C" unsigned long UNK_005e6626;
extern "C" unsigned long UNK_005e6724;
extern "C" unsigned long UNK_005e6742;
extern "C" unsigned long UNK_005e6794;
extern "C" unsigned long UNK_005e67bc;
extern "C" unsigned long UNK_005e67d2;
extern "C" unsigned long UNK_005e67e8;
extern "C" unsigned long UNK_005e6800;
extern "C" unsigned long UNK_005e6896;
extern "C" unsigned long UNK_005e68b6;
extern "C" unsigned long UNK_005e6982;
extern "C" unsigned long UNK_005e6984;
extern "C" unsigned long UNK_005e69bc;
extern "C" unsigned long UNK_005e69ea;
extern "C" unsigned long UNK_005e6a34;
extern "C" unsigned long UNK_005e6a74;
extern "C" unsigned long UNK_005e6a9e;
extern "C" unsigned long UNK_005e6b2a;
extern "C" unsigned long UNK_005e6b50;
extern "C" unsigned long UNK_005e6be2;
extern "C" unsigned long UNK_005e6d1a;
extern "C" unsigned long UNK_005e6e18;
extern "C" unsigned long UNK_005e6e1a;
extern "C" unsigned long UNK_005e6e7a;
extern "C" unsigned long UNK_005e6e9e;
extern "C" unsigned long UNK_005e6eba;
extern "C" unsigned long UNK_005e6f34;
extern "C" unsigned long UNK_005e6fae;
extern "C" unsigned long UNK_005e6fd4;
extern "C" unsigned long UNK_005e6ff2;
extern "C" unsigned long _UNK_005e65c8;
extern "C" unsigned long _UNK_005e6708;
extern "C" unsigned long _UNK_005e670c;
extern "C" unsigned long _UNK_005e6710;
extern "C" unsigned long _UNK_005e6714;
extern "C" unsigned long _UNK_005e6718;
extern "C" unsigned long _UNK_005e6780;
extern "C" unsigned long _UNK_005e6784;
extern "C" unsigned long _UNK_005e6798;
extern "C" unsigned long _UNK_005e67c0;
extern "C" unsigned long _UNK_005e6848;
extern "C" unsigned long _UNK_005e684c;
extern "C" unsigned long _UNK_005e6850;
extern "C" unsigned long _UNK_005e68c4;
extern "C" unsigned long _UNK_005e68c8;
extern "C" unsigned long _UNK_005e6bac;
extern "C" unsigned long _UNK_005e6bb0;
extern "C" unsigned long _UNK_005e6bb4;
extern "C" unsigned long _UNK_005e6bb8;
extern "C" unsigned long _UNK_005e6bbc;
extern "C" unsigned long _UNK_005e6bc0;
extern "C" unsigned long _UNK_005e6bc4;
extern "C" unsigned long _UNK_005e6bc8;
extern "C" unsigned long _UNK_005e6bcc;
extern "C" unsigned long _UNK_005e6bd0;
extern "C" unsigned long _UNK_005e6f08;
extern "C" unsigned long _UNK_005e6f0c;
extern "C" unsigned long _UNK_005e6f10;
extern "C" unsigned long _UNK_005e6f14;
extern "C" unsigned long _UNK_005e6f18;
extern "C" unsigned long _UNK_005e6f1c;
extern "C" unsigned long _UNK_005e6f20;
extern "C" unsigned long _UNK_005e6f24;
extern "C" unsigned long _UNK_005e6f28;
extern "C" unsigned long _UNK_005e7084;
extern "C" unsigned long _UNK_005e7088;
extern "C" unsigned long _UNK_005e708c;
extern "C" unsigned long _UNK_005e7090;
extern "C" unsigned long g_005e65c4;
extern "C" unsigned long g_005e65c8;
extern "C" unsigned long g_005e6626;
extern "C" unsigned long g_005e6708;
extern "C" unsigned long g_005e670c;
extern "C" unsigned long g_005e6710;
extern "C" unsigned long g_005e6714;
extern "C" unsigned long g_005e6718;
extern "C" unsigned long g_005e6724;
extern "C" unsigned long g_005e6742;
extern "C" unsigned long g_005e6780;
extern "C" unsigned long g_005e6784;
extern "C" unsigned long g_005e6794;
extern "C" unsigned long g_005e6798;
extern "C" unsigned long g_005e67bc;
extern "C" unsigned long g_005e67c0;
extern "C" unsigned long g_005e67d2;
extern "C" unsigned long g_005e67e8;
extern "C" unsigned long g_005e6800;
extern "C" unsigned long g_005e6848;
extern "C" unsigned long g_005e684c;
extern "C" unsigned long g_005e6850;
extern "C" unsigned long g_005e6896;
extern "C" unsigned long g_005e68b6;
extern "C" unsigned long g_005e68c4;
extern "C" unsigned long g_005e68c8;
extern "C" unsigned long g_005e6982;
extern "C" unsigned long g_005e6984;
extern "C" unsigned long g_005e69bc;
extern "C" unsigned long g_005e69ea;
extern "C" unsigned long g_005e6a34;
extern "C" unsigned long g_005e6a74;
extern "C" unsigned long g_005e6a9e;
extern "C" unsigned long g_005e6b2a;
extern "C" unsigned long g_005e6b50;
extern "C" unsigned long g_005e6bac;
extern "C" unsigned long g_005e6bb0;
extern "C" unsigned long g_005e6bb4;
extern "C" unsigned long g_005e6bb8;
extern "C" unsigned long g_005e6bbc;
extern "C" unsigned long g_005e6bc0;
extern "C" unsigned long g_005e6bc4;
extern "C" unsigned long g_005e6bc8;
extern "C" unsigned long g_005e6bcc;
extern "C" unsigned long g_005e6bd0;
extern "C" unsigned long g_005e6be2;
extern "C" unsigned long g_005e6d1a;
extern "C" unsigned long g_005e6e18;
extern "C" unsigned long g_005e6e1a;
extern "C" unsigned long g_005e6e7a;
extern "C" unsigned long g_005e6e9e;
extern "C" unsigned long g_005e6eba;
extern "C" unsigned long g_005e6f08;
extern "C" unsigned long g_005e6f0c;
extern "C" unsigned long g_005e6f10;
extern "C" unsigned long g_005e6f14;
extern "C" unsigned long g_005e6f18;
extern "C" unsigned long g_005e6f1c;
extern "C" unsigned long g_005e6f20;
extern "C" unsigned long g_005e6f24;
extern "C" unsigned long g_005e6f28;
extern "C" unsigned long g_005e6f34;
extern "C" unsigned long g_005e6fae;
extern "C" unsigned long g_005e6fd4;
extern "C" unsigned long g_005e6ff2;
extern "C" unsigned long g_005e7084;
extern "C" unsigned long g_005e7088;
extern "C" unsigned long g_005e708c;
extern "C" unsigned long g_005e7090;
bool BLOnSaleItemPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}


BLOnSaleItemPresenter::~BLOnSaleItemPresenter()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  iVar2 = *(int *)(&g_005e6724 + g_005e6780);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x2c;
  piStack_20 = (int *)((int)this);
  uStack_1c = (undefined4)(p2);
  uStack_18 = (undefined4)(p3);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_1c,&g_005e6742 + g_005e6784,&piStack_20);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_1c);
  func_0079e2bc(&uStack_1c);
  ((OnSaleItem *)((int)this) + 7)->~OnSaleItem();
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLOnSaleItemPresenter::BLOnSaleItemPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar3 = *(int *)(&g_005e67d2 + g_005e6848);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x2c;
  iVar3 = g_005e684c;
  *(int *)((int)this + 4*(0xb)) = 0;
  *(int *)((int)this + 4*(0xc)) = 0;
  iVar3 = *(int *)(&g_005e67e8 + iVar3);
  *(int *)((int)this + 4*(0xd)) = 0;
  iVar3 = iVar3 + 0xc;
  *(int *)((int)this + 4*(10)) = iVar3;
  *(int *)((int)this + 4*(0xe)) = iVar3;
  *(int *)((int)this + 4*(0xf)) = iVar3;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005e6800 + g_005e6850,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  piVar2 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar1 = (undefined4)((**(code **)(*piVar2 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar1)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 0);
  return;
}

undefined4 BLOnSaleItemPresenter::create()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x60))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLOnSaleItemPresenter::initWithView(BLOnSaleItemView* p1)
{
  int *piVar1;
  
  *(undefined4 *)(((int)this) + 0x18) = (undefined4)(intptr_t)p1;
  piVar1 = (int *)((BLOnSaleItemView *)p1)->getBtnInfo();
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)(&g_005e6896 + g_005e68c4),0,0x20);
  piVar1 = (int *)((BLOnSaleItemView *)*(undefined4 *)(((int)this) + 0x18))->getBtnBuy();
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)(&g_005e68b6 + g_005e68c8),0,0x20);
  return;
}

void BLOnSaleItemPresenter::onEnter()
{
  return;
}

void BLOnSaleItemPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  return;
}

// ===== 修复: 补回被误删的函数占位 (3) =====
void BLOnSaleItemPresenter::onInfo(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLOnSaleItemPresenter::onBuy(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLOnSaleItemPresenter::initWithData(OnSaleItem * p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
