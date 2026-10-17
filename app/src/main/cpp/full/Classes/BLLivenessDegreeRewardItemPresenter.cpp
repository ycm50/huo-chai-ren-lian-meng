#include "BLLivenessDegreeRewardItemPresenter.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "BLLivenessDegreeRewardItemView.h"
#include "CCObject.h"
#include "LivenessUserItemData.h"
#include "CCTouch.h"
#include "CCDirector.h"
#include "BLLeakUtils.h"
#include "BLLivenessDegreeRewardInfoPresenter.h"
#include "DataCacheManager.h"
#include "DataManager.h"
#include "LivenessData.h"
#include "LivenessUserData.h"
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
extern "C" unsigned long g_0057d826;
extern "C" unsigned long g_0057d830;
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e43c(...);
extern "C" long long func_0079e44c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e46c(...);
extern "C" long long func_0079e47c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0057d648;
extern "C" unsigned long UNK_0057d662;
extern "C" unsigned long UNK_0057d6a8;
extern "C" unsigned long UNK_0057d6d0;
extern "C" unsigned long UNK_0057d77e;
extern "C" unsigned long UNK_0057d796;
extern "C" unsigned long UNK_0057d882;
extern "C" unsigned long UNK_0057d90c;
extern "C" unsigned long UNK_0057d958;
extern "C" unsigned long UNK_0057d9f0;
extern "C" unsigned long UNK_0057da40;
extern "C" unsigned long UNK_0057dde8;
extern "C" unsigned long UNK_0057de1c;
extern "C" unsigned long UNK_0057de1e;
extern "C" unsigned long UNK_0057de34;
extern "C" unsigned long UNK_0057de36;
extern "C" unsigned long _UNK_0057d694;
extern "C" unsigned long _UNK_0057d698;
extern "C" unsigned long _UNK_0057d6ac;
extern "C" unsigned long _UNK_0057d6d4;
extern "C" unsigned long _UNK_0057d7d8;
extern "C" unsigned long _UNK_0057d7dc;
extern "C" unsigned long _UNK_0057d9a4;
extern "C" unsigned long _UNK_0057d9a8;
extern "C" unsigned long _UNK_0057d9ac;
extern "C" unsigned long _UNK_0057da80;
extern "C" unsigned long _UNK_0057da84;
extern "C" unsigned long _UNK_0057dea8;
extern "C" unsigned long _UNK_0057deac;
extern "C" unsigned long _UNK_0057deb0;
extern "C" unsigned long _UNK_0057deb4;
extern "C" unsigned long _UNK_0057deb8;
extern "C" unsigned long _UNK_0057debc;
extern "C" unsigned long g_0057d648;
extern "C" unsigned long g_0057d662;
extern "C" unsigned long g_0057d694;
extern "C" unsigned long g_0057d698;
extern "C" unsigned long g_0057d6a8;
extern "C" unsigned long g_0057d6ac;
extern "C" unsigned long g_0057d6d0;
extern "C" unsigned long g_0057d6d4;
extern "C" unsigned long g_0057d77e;
extern "C" unsigned long g_0057d796;
extern "C" unsigned long g_0057d7d8;
extern "C" unsigned long g_0057d7dc;
extern "C" unsigned long g_0057d882;
extern "C" unsigned long g_0057d90c;
extern "C" unsigned long g_0057d958;
extern "C" unsigned long g_0057d9a4;
extern "C" unsigned long g_0057d9a8;
extern "C" unsigned long g_0057d9ac;
extern "C" unsigned long g_0057d9f0;
extern "C" unsigned long g_0057da40;
extern "C" unsigned long g_0057da80;
extern "C" unsigned long g_0057da84;
extern "C" unsigned long g_0057dde8;
extern "C" unsigned long g_0057de1c;
extern "C" unsigned long g_0057de1e;
extern "C" unsigned long g_0057de34;
extern "C" unsigned long g_0057de36;
extern "C" unsigned long g_0057dea8;
extern "C" unsigned long g_0057deac;
extern "C" unsigned long g_0057deb0;
extern "C" unsigned long g_0057deb4;
extern "C" unsigned long g_0057deb8;
extern "C" unsigned long g_0057debc;
bool BLLivenessDegreeRewardItemPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

BLLivenessDegreeRewardItemPresenter::~BLLivenessDegreeRewardItemPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0057d648 + g_0057d694);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x2c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0057d662 + g_0057d698,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLLivenessDegreeRewardItemPresenter::BLLivenessDegreeRewardItemPresenter()
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
  iVar3 = *(int *)(&g_0057d77e + g_0057d7d8);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x2c;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0057d796 + g_0057d7dc,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  piVar2 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar1 = (undefined4)((**(code **)(*piVar2 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar1)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 0);
  return;
}

undefined4 BLLivenessDegreeRewardItemPresenter::create()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x20))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLLivenessDegreeRewardItemPresenter::initWithData(LivenessUserItemData* p1)
{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  code *pcVar4;
  int *piVar5;
  undefined4 uStack_dc;
  undefined1 auStack_d8 [4];
  undefined1 auStack_d4 [8];
  undefined1 auStack_cc [4];
  undefined1 auStack_c8 [180];
  
  *(undefined4 *)(((int)this) + 0x1c) = (undefined4)(intptr_t)p1;
  piVar1 = (int *)((DataCacheManager *)this)->shareManager();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 200))());
  iVar3 = ((LivenessData *)uVar2)->getItemData(**(undefined4 **)(((int)this) + 0x1c));
  uVar2 = (undefined4)(*(undefined4 *)(iVar3 + 0x14));
  piVar1 = *(int **)(*(int *)(((int)this) + 0x18) + 0x114);
  pcVar4 = *(code **)(*piVar1 + 0x234);
  func_0079e43c(auStack_d4,0x18);
  func_0079e44c(auStack_cc,uVar2);
  func_0079e45c(auStack_d8,&g_0057d882 + g_0057d9a4,&uStack_dc);
  func_0079e46c(&uStack_dc,auStack_c8);
  func_0079e2bc(auStack_d8);
  func_0079e47c(auStack_d4);
  (*pcVar4)(piVar1,uStack_dc);
  func_0079e2bc(&uStack_dc);
  piVar5 = *(int **)(*(int *)(((int)this) + 0x18) + 0x110);
  pcVar4 = *(code **)(*piVar5 + 0x22c);
  func_0079e53c(auStack_d4,iVar3 + 0xc);
  piVar1 = (int *)0 /* ctorZero */;
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x214))());
  (*pcVar4)(piVar5,uVar2);
  func_0079e2bc(auStack_d4);
  if (*(int *)(*(int *)(((int)this) + 0x1c) + 8) == 1) {
    piVar5 = *(int **)(*(int *)(((int)this) + 0x18) + 0x118);
    pcVar4 = *(code **)(*piVar5 + 0x22c);
    func_0079e45c(auStack_d4,&g_0057d90c + g_0057d9a8,auStack_d8);
    piVar1 = (int *)0 /* ctorZero */;
    uVar2 = (undefined4)((**(code **)(*piVar1 + 0x214))());
    (*pcVar4)(piVar5,uVar2);
    func_0079e2bc(auStack_d4);
    piVar1 = *(int **)(*(int *)(((int)this) + 0x18) + 0x118);
    (**(code **)(*piVar1 + 0x90))(piVar1,1);
  }
  if (*(int *)(*(int *)(((int)this) + 0x1c) + 8) == 2) {
    piVar5 = *(int **)(*(int *)(((int)this) + 0x18) + 0x118);
    pcVar4 = *(code **)(*piVar5 + 0x22c);
    func_0079e45c(auStack_d4,&g_0057d958 + g_0057d9ac,auStack_d8);
    piVar1 = (int *)0 /* ctorZero */;
    uVar2 = (undefined4)((**(code **)(*piVar1 + 0x214))());
    (*pcVar4)(piVar5,uVar2);
    func_0079e2bc(auStack_d4);
    piVar1 = *(int **)(*(int *)(((int)this) + 0x18) + 0x118);
    (**(code **)(*piVar1 + 0x90))(piVar1,1);
  }
  return;
}

void BLLivenessDegreeRewardItemPresenter::onEnter()
{
  return;
}

void BLLivenessDegreeRewardItemPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  return;
}

void BLLivenessDegreeRewardItemPresenter::updateWithData()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;

  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  code *pcVar4;
  int iStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  iStack_20 = (undefined4)(intptr_t)((int *)((int)this));
  uStack_1c = (undefined4)(p2);
  uStack_18 = (undefined4)(p3);
  if (*(int *)(*(int *)(((int)this) + 0x1c) + 8) == 1) {
    piVar3 = *(int **)(*(int *)(((int)this) + 0x18) + 0x118);
    pcVar4 = *(code **)(*piVar3 + 0x22c);
    func_0079e45c(&uStack_1c,(unsigned char *)((char *)&g_0057d9f0 + (intptr_t)(g_0057da80)),&iStack_20);
    piVar1 = (int *)0 /* ctorZero */;
    uVar2 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x214)))());
    (*pcVar4)(piVar3,uVar2);
    func_0079e2bc(&uStack_1c);
    piVar1 = *(int **)(*(int *)(((int)this) + 0x18) + 0x118);
    (**(code **)(*(int *)(piVar1) + (0x90)))(piVar1,1);
  }
  if (*(int *)(*(int *)(((int)this) + 0x1c) + 8) == 2) {
    piVar3 = *(int **)(*(int *)(((int)this) + 0x18) + 0x118);
    pcVar4 = *(code **)(*piVar3 + 0x22c);
    func_0079e45c(&uStack_1c,(unsigned char *)((char *)&g_0057da40 + (intptr_t)(g_0057da84)),&iStack_20);
    piVar1 = (int *)0 /* ctorZero */;
    uVar2 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x214)))());
    (*pcVar4)(piVar3,uVar2);
    func_0079e2bc(&uStack_1c);
    piVar1 = *(int **)(*(int *)(((int)this) + 0x18) + 0x118);
    (**(code **)(*(int *)(piVar1) + (0x90)))(piVar1,1);
  }
  return;
}

void BLLivenessDegreeRewardItemPresenter::receiveReward()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLLivenessDegreeRewardItemPresenter::onBtn(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

// ===== 修复: 补回被误删的函数占位 (1) =====
void BLLivenessDegreeRewardItemPresenter::initWithView(BLLivenessDegreeRewardItemView* p1)
{
  *(int *)(((int)this) + 0x18) = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  (**(code **)(**(int **)(p1 + 0x10c) + 0x254))
            (*(int **)(p1 + 0x10c),((int)this),*(undefined4 *)((unsigned char *)((char *)&g_0057d826 + (intptr_t)(g_0057d830))),0,
             0x20);
  return;
}
