#include "BLJiTanMainItemPresenter.h"
#include "JiTanData.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "CCObject.h"
#include "CCTouch.h"
#include "CCDirector.h"
#include "BLForwards.h"
#include "BLJiTanMainItemView.h"
#include "BLLeakUtils.h"
#include "DataCacheManager.h"
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
extern "C" long long func_0079e6c0(...);
extern "C" long long func_0079e784(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0057a464;
extern "C" unsigned long UNK_0057a47e;
extern "C" unsigned long UNK_0057a4c4;
extern "C" unsigned long UNK_0057a4ec;
extern "C" unsigned long UNK_0057a502;
extern "C" unsigned long UNK_0057a51a;
extern "C" unsigned long UNK_0057a5d8;
extern "C" unsigned long _UNK_0057a4b0;
extern "C" unsigned long _UNK_0057a4b4;
extern "C" unsigned long _UNK_0057a4c8;
extern "C" unsigned long _UNK_0057a4f0;
extern "C" unsigned long _UNK_0057a55c;
extern "C" unsigned long _UNK_0057a560;
extern "C" unsigned long _UNK_0057a64c;
extern "C" unsigned long extraout_r1;
extern "C" unsigned long extraout_r3;
extern "C" unsigned long g_0057a464;
extern "C" unsigned long g_0057a47e;
extern "C" unsigned long g_0057a4b0;
extern "C" unsigned long g_0057a4b4;
extern "C" unsigned long g_0057a4c4;
extern "C" unsigned long g_0057a4c8;
extern "C" unsigned long g_0057a4ec;
extern "C" unsigned long g_0057a4f0;
extern "C" unsigned long g_0057a502;
extern "C" unsigned long g_0057a51a;
extern "C" unsigned long g_0057a55c;
extern "C" unsigned long g_0057a560;
extern "C" unsigned long g_0057a5d8;
extern "C" unsigned long g_0057a64c;
bool BLJiTanMainItemPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLJiTanMainItemPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLJiTanMainItemPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLJiTanMainItemPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLJiTanMainItemPresenter::tick(float p1)
{
  return;
}

BLJiTanMainItemPresenter::~BLJiTanMainItemPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0057a464 + g_0057a4b0);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x3c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0057a47e + g_0057a4b4,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLJiTanMainItemPresenter::BLJiTanMainItemPresenter()
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
  iVar3 = *(int *)(&g_0057a502 + g_0057a55c);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x3c;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0057a51a + g_0057a560,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  piVar2 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar1 = (undefined4)((**(code **)(*piVar2 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar1)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 0);
  return;
}

undefined4 BLJiTanMainItemPresenter::create(BLJiTanMainItemView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x20))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLJiTanMainItemPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  return;
}

void BLJiTanMainItemPresenter::onEnter()
{
  return;
}

void BLJiTanMainItemPresenter::initWithView(BLJiTanMainItemView* p1)
{
  *(undefined4 *)(((int)this) + 0x18) = (undefined4)(intptr_t)p1;
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
void BLJiTanMainItemPresenter::initWithData(int p1)
{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  uint uVar5;
  uint extraout_r1;
  int extraout_r3;
  code *pcVar6;
  undefined1 auStack_34 [8];
  undefined1 auStack_2c [4];
  int iStack_28;
  int iStack_24;
  
  *(undefined4 *)(((int)this) + 0x1c) = p1;
  piVar1 = (int *)((sir::singleton<JiTanData, 0> *)this)->instance();
  (**(code **)(*(int *)(piVar1) + (0x18)))(auStack_34,piVar1);
  uVar5 = (undefined4)(*(uint *)(((int)this) + 0x1c));
  if ((uint)(iStack_24 - iStack_28 >> 2) <= uVar5) {
    func_0079e784((unsigned char *)((char *)&g_0057a5d8 + (intptr_t)(g_0057a64c)));
    uVar5 = (undefined4)(extraout_r1);
    iStack_28 = (undefined4)(intptr_t)(extraout_r3);
  }
  uVar2 = (undefined4)(func_0079e6c0(*(undefined4 *)(uVar5 * 4 + iStack_28)));
  ((std::vector<std::string, std::allocator<std::string>> *)(&iStack_28))->~vector();
  func_0079e2bc(auStack_2c);
  uVar3 = (undefined4)(((DataCacheManager *)this)->shareManager());
  piVar1 = ((void)((DataCacheManager *)(uVar3))->getItemDataByID(uVar2),(int *)0);
  piVar4 = (int *)((BLJiTanMainItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getSprIcon();
  pcVar6 = *(code **)(*piVar4 + 0x20c);
  (**(code **)(*(int *)(piVar1) + (0x58)))(auStack_34,piVar1);
  piVar1 = (int *)0 /* ctorZero */;
  uVar2 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x214)))());
  (*pcVar6)(piVar4,uVar2);
  func_0079e2bc(auStack_34);
  return;
}
