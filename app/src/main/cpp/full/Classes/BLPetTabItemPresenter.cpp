#include "BLPetTabItemPresenter.h"
#include "CCNotificationCenter.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "CCObject.h"
#include "CCTouch.h"
#include "CCDirector.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLPetTabItemView.h"
#include "DataCacheManager.h"
#include "DataManager.h"
#include "PetData.h"
#include "PetUserData.h"
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
extern "C" long long func_0079e43c(...);
extern "C" long long func_0079e44c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e46c(...);
extern "C" long long func_0079e47c(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e5dc(...);
extern "C" long long func_0079e60c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0060a588;
extern "C" unsigned long UNK_0060a5a0;
extern "C" unsigned long UNK_0060a5b8;
extern "C" unsigned long UNK_0060a62c;
extern "C" unsigned long UNK_0060a64a;
extern "C" unsigned long UNK_0060a69c;
extern "C" unsigned long UNK_0060a6c4;
extern "C" unsigned long UNK_0060a778;
extern "C" unsigned long UNK_0060a788;
extern "C" unsigned long UNK_0060a7b2;
extern "C" unsigned long UNK_0060a7d6;
extern "C" unsigned long UNK_0060a7da;
extern "C" unsigned long UNK_0060a85e;
extern "C" unsigned long UNK_0060a906;
extern "C" unsigned long UNK_0060a95c;
extern "C" unsigned long UNK_0060a9ca;
extern "C" unsigned long UNK_0060a9da;
extern "C" unsigned long _UNK_0060a58c;
extern "C" unsigned long _UNK_0060a5a4;
extern "C" unsigned long _UNK_0060a5bc;
extern "C" unsigned long _UNK_0060a688;
extern "C" unsigned long _UNK_0060a68c;
extern "C" unsigned long _UNK_0060a6a0;
extern "C" unsigned long _UNK_0060a6c8;
extern "C" unsigned long _UNK_0060a804;
extern "C" unsigned long _UNK_0060a808;
extern "C" unsigned long _UNK_0060a80c;
extern "C" unsigned long _UNK_0060a810;
extern "C" unsigned long _UNK_0060a814;
extern "C" unsigned long _UNK_0060a864;
extern "C" unsigned long _UNK_0060aa1c;
extern "C" unsigned long _UNK_0060aa20;
extern "C" unsigned long _UNK_0060aa24;
extern "C" unsigned long _UNK_0060aa28;
extern "C" unsigned long g_0060a588;
extern "C" unsigned long g_0060a58c;
extern "C" unsigned long g_0060a5a0;
extern "C" unsigned long g_0060a5a4;
extern "C" unsigned long g_0060a5b8;
extern "C" unsigned long g_0060a5bc;
extern "C" unsigned long g_0060a62c;
extern "C" unsigned long g_0060a64a;
extern "C" unsigned long g_0060a688;
extern "C" unsigned long g_0060a68c;
extern "C" unsigned long g_0060a69c;
extern "C" unsigned long g_0060a6a0;
extern "C" unsigned long g_0060a6c4;
extern "C" unsigned long g_0060a6c8;
extern "C" unsigned long g_0060a778;
extern "C" unsigned long g_0060a788;
extern "C" unsigned long g_0060a7b2;
extern "C" unsigned long g_0060a7d6;
extern "C" unsigned long g_0060a7da;
extern "C" unsigned long g_0060a804;
extern "C" unsigned long g_0060a808;
extern "C" unsigned long g_0060a80c;
extern "C" unsigned long g_0060a810;
extern "C" unsigned long g_0060a814;
extern "C" unsigned long g_0060a85e;
extern "C" unsigned long g_0060a864;
extern "C" unsigned long g_0060a906;
extern "C" unsigned long g_0060a95c;
extern "C" unsigned long g_0060a9ca;
extern "C" unsigned long g_0060a9da;
extern "C" unsigned long g_0060aa1c;
extern "C" unsigned long g_0060aa20;
extern "C" unsigned long g_0060aa24;
extern "C" unsigned long g_0060aa28;
bool BLPetTabItemPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLPetTabItemPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLPetTabItemPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLPetTabItemPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLPetTabItemPresenter::tick(float p1)
{
  return;
}

BLPetTabItemPresenter::~BLPetTabItemPresenter()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  iVar2 = *(int *)(&g_0060a62c + g_0060a688);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x3c;
  piStack_20 = (int *)((int)this);
  uStack_1c = (undefined4)(p2);
  uStack_18 = (undefined4)(p3);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_1c,&g_0060a64a + g_0060a68c,&piStack_20);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_1c);
  func_0079e2bc(&uStack_1c);
  func_0079e2bc(((int)this) + 7);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}



undefined4 BLPetTabItemPresenter::create(BLPetTabItemView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x20))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLPetTabItemPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar2)->removeObserver((cocos2d::CCObject*)((int)this), (char const*)&g_0060a85e + g_0060a864);
  return;
}

void BLPetTabItemPresenter::onEnter()
{
  return;
}

// ===== 修复: 补回被误删的函数占位 (4) =====
void BLPetTabItemPresenter::onChangeRole(std::string * p1)
{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  undefined1 uStack_1c;
  undefined1 uStack_1b;
  undefined1 uStack_1a;
  
  piVar1 = (int *)((BLPetTabItemView *)*(undefined4 *)(((int)this) + 0x18))->getLabName();
  pcVar3 = *(code **)(*piVar1 + 0x1b4);
  if ((*(int *)(*(int *)(((int)this) + 0x1c) + -0xc) == *(int *)(*(int *)p1 + -0xc)) &&
     (iVar2 = func_0079e60c(), iVar2 == 0)) {
    uStack_1c = 0xe1;
    uStack_1b = 0x14;
  }
  else {
    uStack_1b = 0xff;
    uStack_1c = 0xff;
  }
  uStack_1a = (undefined4)(intptr_t)(uStack_1b);
  (*pcVar3)(piVar1,&uStack_1c);
  piVar1 = (int *)((BLPetTabItemView *)*(undefined4 *)(((int)this) + 0x18))->getLabLV();
  pcVar3 = *(code **)(*piVar1 + 0x1b4);
  if ((*(int *)(*(int *)(((int)this) + 0x1c) + -0xc) == *(int *)(*(int *)p1 + -0xc)) &&
     (iVar2 = func_0079e60c(), iVar2 == 0)) {
    uStack_1c = 0xe1;
    uStack_1b = 0x14;
  }
  else {
    uStack_1b = 0xff;
    uStack_1c = 0xff;
  }
  uStack_1a = (undefined4)(intptr_t)(uStack_1b);
  (*pcVar3)(piVar1,&uStack_1c);
  return;
}

BLPetTabItemPresenter::BLPetTabItemPresenter()
{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 auStack_24 [4];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  0 /* ctorZero */;
  iVar4 = (undefined4)(intptr_t)(*(int *)((unsigned char *)((char *)&g_0060a778 + (intptr_t)(g_0060a804))));
  *(int *)((int)this + 4*(5)) = iVar4 + 0x3c;
  iVar1 = (undefined4)(intptr_t)(g_0060a808);
  *(int *)this = iVar4 + 8;
  *(int *)((int)this + 4*(7)) = *(int *)(&g_0060a788 + iVar1) + 0xc;
  piVar2 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar3 = (undefined4)((**(code **)(*(int *)(piVar2) + (0x40)))());
  ((cocos2d::CCTouchDispatcher *)(uVar3))->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 0);
  uVar3 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(auStack_24,(unsigned char *)((char *)&g_0060a7b2 + (intptr_t)(g_0060a80c)),&uStack_20);
  ((BLLeakUtils *)(uVar3))->addClass((std::string)(char*)auStack_24);
  func_0079e2bc(auStack_24);
  uVar3 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  uStack_1c = (undefined4)(0);
  uStack_20 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_0060a7d6 + (intptr_t)(g_0060a810))));
  ((cocos2d::CCNotificationCenter *)(((int)this)))->addObserver((cocos2d::CCObject*)uStack_20, 0, (char const*)(unsigned char *)((char *)&g_0060a7da + (intptr_t)(g_0060a814)), 0);
  return;
}

void BLPetTabItemPresenter::initWithView(BLPetTabItemView* p1)
{
  *(undefined4 *)(((int)this) + 0x18) = (undefined4)(intptr_t)p1;
  return;
}

void BLPetTabItemPresenter::initWithData(std::string * p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
