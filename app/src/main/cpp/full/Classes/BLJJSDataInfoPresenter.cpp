#include "BLJJSDataInfoPresenter.h"
#include "BLFileUtils.h"
#include "BLJJSDataInfoView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "CircusShopData.h"
#include "CircusShopItem.h"
#include "DataCacheManager.h"
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
extern "C" long long func_0079e33c(...);
extern "C" long long func_0079e34c(...);
extern "C" long long func_0079e38c(...);
extern "C" long long func_0079e39c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e5dc(...);
extern "C" long long func_0079e904(...);
extern "C" long long func_0079e914(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_005f1c34;
extern "C" unsigned long UNK_005f1c4c;
extern "C" unsigned long UNK_005f1c64;
extern "C" unsigned long UNK_005f1ce8;
extern "C" unsigned long UNK_005f1d06;
extern "C" unsigned long UNK_005f1d58;
extern "C" unsigned long UNK_005f1d80;
extern "C" unsigned long UNK_005f1d96;
extern "C" unsigned long UNK_005f1da6;
extern "C" unsigned long UNK_005f1de2;
extern "C" unsigned long UNK_005f1e7a;
extern "C" unsigned long UNK_005f1e9a;
extern "C" unsigned long UNK_005f1ec2;
extern "C" unsigned long UNK_005f1f96;
extern "C" unsigned long UNK_005f1ff6;
extern "C" unsigned long UNK_005f21ae;
extern "C" unsigned long UNK_005f225e;
extern "C" unsigned long UNK_005f2262;
extern "C" unsigned long UNK_005f2288;
extern "C" unsigned long UNK_005f228c;
extern "C" unsigned long UNK_005f22c0;
extern "C" unsigned long UNK_005f22fc;
extern "C" unsigned long UNK_005f2340;
extern "C" unsigned long UNK_005f2352;
extern "C" unsigned long _UNK_005f1c38;
extern "C" unsigned long _UNK_005f1c50;
extern "C" unsigned long _UNK_005f1c68;
extern "C" unsigned long _UNK_005f1d44;
extern "C" unsigned long _UNK_005f1d48;
extern "C" unsigned long _UNK_005f1d5c;
extern "C" unsigned long _UNK_005f1d84;
extern "C" unsigned long _UNK_005f1e14;
extern "C" unsigned long _UNK_005f1e18;
extern "C" unsigned long _UNK_005f1e1c;
extern "C" unsigned long _UNK_005f1ea8;
extern "C" unsigned long _UNK_005f1eac;
extern "C" unsigned long _UNK_005f223c;
extern "C" unsigned long _UNK_005f2240;
extern "C" unsigned long _UNK_005f2244;
extern "C" unsigned long _UNK_005f2248;
extern "C" unsigned long _UNK_005f2388;
extern "C" unsigned long _UNK_005f238c;
extern "C" unsigned long _UNK_005f2390;
extern "C" unsigned long _UNK_005f2394;
extern "C" unsigned long _UNK_005f2398;
extern "C" unsigned long _UNK_005f239c;
extern "C" unsigned long _UNK_005f23a0;
extern "C" unsigned long _UNK_005f23a4;
extern "C" unsigned long g_005f1c34;
extern "C" unsigned long g_005f1c38;
extern "C" unsigned long g_005f1c4c;
extern "C" unsigned long g_005f1c50;
extern "C" unsigned long g_005f1c64;
extern "C" unsigned long g_005f1c68;
extern "C" unsigned long g_005f1ce8;
extern "C" unsigned long g_005f1d06;
extern "C" unsigned long g_005f1d44;
extern "C" unsigned long g_005f1d48;
extern "C" unsigned long g_005f1d58;
extern "C" unsigned long g_005f1d5c;
extern "C" unsigned long g_005f1d80;
extern "C" unsigned long g_005f1d84;
extern "C" unsigned long g_005f1d96;
extern "C" unsigned long g_005f1da6;
extern "C" unsigned long g_005f1de2;
extern "C" unsigned long g_005f1e14;
extern "C" unsigned long g_005f1e18;
extern "C" unsigned long g_005f1e1c;
extern "C" unsigned long g_005f1e7a;
extern "C" unsigned long g_005f1e9a;
extern "C" unsigned long g_005f1ea8;
extern "C" unsigned long g_005f1eac;
extern "C" unsigned long g_005f1ec2;
extern "C" unsigned long g_005f1f96;
extern "C" unsigned long g_005f1ff6;
extern "C" unsigned long g_005f21ae;
extern "C" unsigned long g_005f223c;
extern "C" unsigned long g_005f2240;
extern "C" unsigned long g_005f2244;
extern "C" unsigned long g_005f2248;
extern "C" unsigned long g_005f225e;
extern "C" unsigned long g_005f2262;
extern "C" unsigned long g_005f2288;
extern "C" unsigned long g_005f228c;
extern "C" unsigned long g_005f22c0;
extern "C" unsigned long g_005f22fc;
extern "C" unsigned long g_005f2340;
extern "C" unsigned long g_005f2352;
extern "C" unsigned long g_005f2388;
extern "C" unsigned long g_005f238c;
extern "C" unsigned long g_005f2390;
extern "C" unsigned long g_005f2394;
extern "C" unsigned long g_005f2398;
extern "C" unsigned long g_005f239c;
extern "C" unsigned long g_005f23a0;
extern "C" unsigned long g_005f23a4;
bool BLJJSDataInfoPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLJJSDataInfoPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLJJSDataInfoPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLJJSDataInfoPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLJJSDataInfoPresenter::tick(float p1)
{
  return;
}

void BLJJSDataInfoPresenter::onClose(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(0x92);
  return;
}

BLJJSDataInfoPresenter::~BLJJSDataInfoPresenter()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  iVar2 = *(int *)(&g_005f1ce8 + g_005f1d44);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x3c;
  piStack_20 = (int *)((int)this);
  uStack_1c = (undefined4)(p2);
  uStack_18 = (undefined4)(p3);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_1c,&g_005f1d06 + g_005f1d48,&piStack_20);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_1c);
  func_0079e2bc(&uStack_1c);
  ((CircusShopItem *)((int)this) + 7)->~CircusShopItem();
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLJJSDataInfoPresenter::BLJJSDataInfoPresenter()
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
  iVar3 = *(int *)(&g_005f1d96 + g_005f1e14);
  *(int *)((int)this + 4*(5)) = iVar3 + 0x3c;
  iVar4 = g_005f1e18;
  *(int *)this = iVar3 + 8;
  iVar4 = *(int *)(&g_005f1da6 + iVar4) + 0xc;
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
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 0);
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005f1de2 + g_005f1e1c,&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

undefined4 BLJJSDataInfoPresenter::create(BLJJSDataInfoView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x5c))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLJJSDataInfoPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  return;
}

void BLJJSDataInfoPresenter::onEnter()
{
  return;
}

// ===== 修复: 补回被误删的函数占位 (3) =====
void BLJJSDataInfoPresenter::initWithView(BLJJSDataInfoView* p1)
{
  int *piVar1;
  
  *(undefined4 *)(((int)this) + 0x18) = (undefined4)(intptr_t)p1;
  piVar1 = (int *)((BLJJSDataInfoView *)p1)->getBtnClose();
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)(&g_005f1e7a + g_005f1ea8),0,0x20);
  piVar1 = (int *)((BLJJSDataInfoView *)*(undefined4 *)(((int)this) + 0x18))->getBtnBuy();
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)(&g_005f1e9a + g_005f1eac),0,0x20);
  return;
}

void BLJJSDataInfoPresenter::initWithItemData(CircusShopItem * p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLJJSDataInfoPresenter::onBuy(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
