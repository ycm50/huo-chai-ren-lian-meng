#include "BLMainAddPresenter.h"
#include "CCNotificationCenter.h"
#include "CCObject.h"
#include "CCTouch.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLMainAddView.h"
#include "BackPackData.h"
#include "DataCacheManager.h"
#include "DataManager.h"
#include "ItemData.h"
#include "PetUserData.h"
#include "RichTextData.h"
#include "Toast.h"
#include "UIManager.h"
#include "UserData.h"
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
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e5dc(...);
extern "C" long long func_0079e734(...);
extern "C" long long func_0079e854(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_005f23b8;
extern "C" unsigned long UNK_005f23d0;
extern "C" unsigned long UNK_005f23e8;
extern "C" unsigned long UNK_005f2400;
extern "C" unsigned long UNK_005f245c;
extern "C" unsigned long UNK_005f2480;
extern "C" unsigned long UNK_005f24c4;
extern "C" unsigned long UNK_005f24ec;
extern "C" unsigned long UNK_005f2504;
extern "C" unsigned long UNK_005f251e;
extern "C" unsigned long UNK_005f2520;
extern "C" unsigned long UNK_005f2536;
extern "C" unsigned long UNK_005f25a6;
extern "C" unsigned long UNK_005f25ea;
extern "C" unsigned long UNK_005f26e0;
extern "C" unsigned long UNK_005f26e1;
extern "C" unsigned long UNK_005f26e2;
extern "C" unsigned long UNK_005f270a;
extern "C" unsigned long UNK_005f27b2;
extern "C" unsigned long UNK_005f2958;
extern "C" unsigned long UNK_005f2976;
extern "C" unsigned long UNK_005f2a3e;
extern "C" unsigned long UNK_005f2a52;
extern "C" unsigned long UNK_005f2a82;
extern "C" unsigned long UNK_005f2b84;
extern "C" unsigned long UNK_005f2ba2;
extern "C" unsigned long UNK_005f2bd0;
extern "C" unsigned long _UNK_005f23bc;
extern "C" unsigned long _UNK_005f23d4;
extern "C" unsigned long _UNK_005f23ec;
extern "C" unsigned long _UNK_005f2404;
extern "C" unsigned long _UNK_005f24b0;
extern "C" unsigned long _UNK_005f24b4;
extern "C" unsigned long _UNK_005f24c8;
extern "C" unsigned long _UNK_005f24f0;
extern "C" unsigned long _UNK_005f2564;
extern "C" unsigned long _UNK_005f2568;
extern "C" unsigned long _UNK_005f256c;
extern "C" unsigned long _UNK_005f2570;
extern "C" unsigned long _UNK_005f25ac;
extern "C" unsigned long _UNK_005f291c;
extern "C" unsigned long _UNK_005f2920;
extern "C" unsigned long _UNK_005f2924;
extern "C" unsigned long _UNK_005f2928;
extern "C" unsigned long _UNK_005f2ae8;
extern "C" unsigned long _UNK_005f2aec;
extern "C" unsigned long _UNK_005f2af0;
extern "C" unsigned long _UNK_005f2af4;
extern "C" unsigned long _UNK_005f2af8;
extern "C" unsigned long _UNK_005f2afc;
extern "C" unsigned long _UNK_005f2c24;
extern "C" unsigned long _UNK_005f2c28;
extern "C" unsigned long _UNK_005f2c2c;
extern "C" unsigned long _UNK_005f2c30;
extern "C" unsigned long _UNK_005f2c34;
extern "C" unsigned long g_005f23b8;
extern "C" unsigned long g_005f23bc;
extern "C" unsigned long g_005f23d0;
extern "C" unsigned long g_005f23d4;
extern "C" unsigned long g_005f23e8;
extern "C" unsigned long g_005f23ec;
extern "C" unsigned long g_005f2400;
extern "C" unsigned long g_005f2404;
extern "C" unsigned long g_005f245c;
extern "C" unsigned long g_005f2480;
extern "C" unsigned long g_005f24b0;
extern "C" unsigned long g_005f24b4;
extern "C" unsigned long g_005f24c4;
extern "C" unsigned long g_005f24c8;
extern "C" unsigned long g_005f24ec;
extern "C" unsigned long g_005f24f0;
extern "C" unsigned long g_005f2504;
extern "C" unsigned long g_005f251e;
extern "C" unsigned long g_005f2520;
extern "C" unsigned long g_005f2536;
extern "C" unsigned long g_005f2564;
extern "C" unsigned long g_005f2568;
extern "C" unsigned long g_005f256c;
extern "C" unsigned long g_005f2570;
extern "C" unsigned long g_005f25a6;
extern "C" unsigned long g_005f25ac;
extern "C" unsigned long g_005f25ea;
extern "C" unsigned long g_005f26e0;
extern "C" unsigned long g_005f26e1;
extern "C" unsigned long g_005f26e2;
extern "C" unsigned long g_005f270a;
extern "C" unsigned long g_005f27b2;
extern "C" unsigned long g_005f291c;
extern "C" unsigned long g_005f2920;
extern "C" unsigned long g_005f2924;
extern "C" unsigned long g_005f2928;
extern "C" unsigned long g_005f2958;
extern "C" unsigned long g_005f2976;
extern "C" unsigned long g_005f2a3e;
extern "C" unsigned long g_005f2a52;
extern "C" unsigned long g_005f2a82;
extern "C" unsigned long g_005f2ae8;
extern "C" unsigned long g_005f2aec;
extern "C" unsigned long g_005f2af0;
extern "C" unsigned long g_005f2af4;
extern "C" unsigned long g_005f2af8;
extern "C" unsigned long g_005f2afc;
extern "C" unsigned long g_005f2b84;
extern "C" unsigned long g_005f2ba2;
extern "C" unsigned long g_005f2bd0;
extern "C" unsigned long g_005f2c24;
extern "C" unsigned long g_005f2c28;
extern "C" unsigned long g_005f2c2c;
extern "C" unsigned long g_005f2c30;
extern "C" unsigned long g_005f2c34;
bool BLMainAddPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLMainAddPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLMainAddPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLMainAddPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLMainAddPresenter::tick(float p1)
{
  return;
}

BLMainAddPresenter::~BLMainAddPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_005f245c + g_005f24b0);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x3c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar1)->removeAllObservers((cocos2d::CCObject*)((int)this));
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005f2480 + g_005f24b4,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLMainAddPresenter::BLMainAddPresenter()
{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [12];
  
  0 /* ctorZero */;
  iVar2 = (undefined4)(intptr_t)(*(int *)((unsigned char *)((char *)&g_005f2504 + (intptr_t)(g_005f2564))));
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x3c;
  uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)(((int)this)))->addObserver((cocos2d::CCObject*)*(undefined4 *)((unsigned char *)((char *)&g_005f251e + (intptr_t)(g_005f2568))), 0, (char const*)(unsigned char *)((char *)&g_005f2520 + (intptr_t)(g_005f256c)), 0);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(auStack_1c,(unsigned char *)((char *)&g_005f2536 + (intptr_t)(g_005f2570)),auStack_20);
  ((BLLeakUtils *)(uVar1))->addClass((std::string)(char*)auStack_1c);
  func_0079e2bc(auStack_1c);
  return;
}

undefined4 BLMainAddPresenter::create(BLMainAddView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x1c))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLMainAddPresenter::onExit()
{
  return;
}

void BLMainAddPresenter::onEnter()
{
  return;
}

undefined4 BLMainAddPresenter::initWithView(BLMainAddView* p1)
{
  *(undefined4 *)(((int)this) + 0x18) = (undefined4)(intptr_t)p1;
  cocos2d::CCLog((char const*)&g_005f25a6 + g_005f25ac);
  return 1;
}

void BLMainAddPresenter::onGiftChangWan(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->showUIById(0x91);
  return;
}

void BLMainAddPresenter::addItem(std::vector<int, std::allocator<int>> * p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMainAddPresenter::onGiftZhuanShu(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMainAddPresenter::onGiftChangWanHide()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
