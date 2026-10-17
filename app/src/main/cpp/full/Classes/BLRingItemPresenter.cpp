#include "BLRingItemPresenter.h"
#include "BLHeroDetailPresenter.h"
#include "BLHeroDetailView.h"
#include "BLLeakUtils.h"
#include "BLRingItemNumItem.h"
#include "BLRingItemView.h"
#include "CircusPlayerinfo.h"
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
extern "C" long long func_0079e43c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e46c(...);
extern "C" long long func_0079e47c(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e5dc(...);
extern "C" long long func_0079e934(...);
extern "C" long long func_0079e944(...);
extern "C" long long func_0079ea14(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_004c2cec;
extern "C" unsigned long UNK_004c2d08;
extern "C" unsigned long UNK_004c2d24;
extern "C" unsigned long UNK_004c2d3c;
extern "C" unsigned long UNK_004c2d9e;
extern "C" unsigned long UNK_004c2e30;
extern "C" unsigned long UNK_004c2e68;
extern "C" unsigned long UNK_004c2e86;
extern "C" unsigned long UNK_004c2ed8;
extern "C" unsigned long UNK_004c2f00;
extern "C" unsigned long UNK_004c2f1c;
extern "C" unsigned long UNK_004c2f32;
extern "C" unsigned long UNK_004c2f58;
extern "C" unsigned long UNK_004c2f8e;
extern "C" unsigned long UNK_004c303c;
extern "C" unsigned long UNK_004c3096;
extern "C" unsigned long UNK_004c30b6;
extern "C" unsigned long UNK_004c30e0;
extern "C" unsigned long _UNK_004c2cf0;
extern "C" unsigned long _UNK_004c2d0c;
extern "C" unsigned long _UNK_004c2d28;
extern "C" unsigned long _UNK_004c2d40;
extern "C" unsigned long _UNK_004c2e44;
extern "C" unsigned long _UNK_004c2e48;
extern "C" unsigned long _UNK_004c2e4c;
extern "C" unsigned long _UNK_004c2e50;
extern "C" unsigned long _UNK_004c2e54;
extern "C" unsigned long _UNK_004c2e58;
extern "C" unsigned long _UNK_004c2e5c;
extern "C" unsigned long _UNK_004c2ec4;
extern "C" unsigned long _UNK_004c2ec8;
extern "C" unsigned long _UNK_004c2edc;
extern "C" unsigned long _UNK_004c2f04;
extern "C" unsigned long _UNK_004c2fcc;
extern "C" unsigned long _UNK_004c2fd0;
extern "C" unsigned long _UNK_004c2fd4;
extern "C" unsigned long _UNK_004c2fd8;
extern "C" unsigned long _UNK_004c3044;
extern "C" unsigned long _UNK_004c3124;
extern "C" unsigned long _UNK_004c3128;
extern "C" unsigned long _UNK_004c312c;
extern "C" unsigned long extraout_r1;
extern "C" unsigned long g_004c2cec;
extern "C" unsigned long g_004c2cf0;
extern "C" unsigned long g_004c2d08;
extern "C" unsigned long g_004c2d0c;
extern "C" unsigned long g_004c2d24;
extern "C" unsigned long g_004c2d28;
extern "C" unsigned long g_004c2d3c;
extern "C" unsigned long g_004c2d40;
extern "C" unsigned long g_004c2d9e;
extern "C" unsigned long g_004c2e30;
extern "C" unsigned long g_004c2e44;
extern "C" unsigned long g_004c2e48;
extern "C" unsigned long g_004c2e4c;
extern "C" unsigned long g_004c2e50;
extern "C" unsigned long g_004c2e54;
extern "C" unsigned long g_004c2e58;
extern "C" unsigned long g_004c2e5c;
extern "C" unsigned long g_004c2e68;
extern "C" unsigned long g_004c2e86;
extern "C" unsigned long g_004c2ec4;
extern "C" unsigned long g_004c2ec8;
extern "C" unsigned long g_004c2ed8;
extern "C" unsigned long g_004c2edc;
extern "C" unsigned long g_004c2f00;
extern "C" unsigned long g_004c2f04;
extern "C" unsigned long g_004c2f1c;
extern "C" unsigned long g_004c2f32;
extern "C" unsigned long g_004c2f58;
extern "C" unsigned long g_004c2f8e;
extern "C" unsigned long g_004c2fcc;
extern "C" unsigned long g_004c2fd0;
extern "C" unsigned long g_004c2fd4;
extern "C" unsigned long g_004c2fd8;
extern "C" unsigned long g_004c303c;
extern "C" unsigned long g_004c3044;
extern "C" unsigned long g_004c3096;
extern "C" unsigned long g_004c30b6;
extern "C" unsigned long g_004c30e0;
extern "C" unsigned long g_004c3124;
extern "C" unsigned long g_004c3128;
extern "C" unsigned long g_004c312c;

void BLRingItemPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  *(undefined1 *)(((int)this) + 0x78) = 1;
  return;
}

void BLRingItemPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  *(undefined1 *)(((int)this) + 0x78) = 0;
  return;
}

void BLRingItemPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLRingItemPresenter::tick(float p1)
{
  return;
}


BLRingItemPresenter::~BLRingItemPresenter()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  iVar2 = *(int *)(&g_004c2e68 + g_004c2ec4);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x3c;
  piStack_20 = (int *)((int)this);
  uStack_1c = (undefined4)(p2);
  uStack_18 = (undefined4)(p3);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_1c,&g_004c2e86 + g_004c2ec8,&piStack_20);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_1c);
  func_0079e2bc(&uStack_1c);
  ((CircusPlayerinfo *)((int)this) + 8)->~CircusPlayerinfo();
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLRingItemPresenter::BLRingItemPresenter()
{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [8];
  
  0 /* ctorZero */;
  iVar4 = g_004c2fd0;
  iVar3 = *(int *)(&g_004c2f1c + g_004c2fcc);
  *(int *)((int)this + 4*(5)) = iVar3 + 0x3c;
  *(int *)this = iVar3 + 8;
  func_0079e45c(auStack_20,&g_004c2f32 + iVar4,auStack_1c);
  func_0079e53c(((int)this) + 8,auStack_20);
  *(int *)((int)this + 4*(10)) = 0;
  *(int *)((int)this + 4*(0xb)) = 0;
  *(int *)((int)this + 4*(0xe)) = 0;
  *(int *)((int)this + 4*(0xf)) = 0;
  iVar4 = g_004c2fd4;
  *(int *)((int)this + 4*(0x15)) = 0;
  *(int *)((int)this + 4*(0x16)) = 0;
  iVar4 = *(int *)(&g_004c2f58 + iVar4);
  *(int *)((int)this + 4*(0x17)) = 0;
  *(int *)((int)this + 4*(0x14)) = iVar4 + 0xc;
  *(int *)((int)this + 4*(0x18)) = iVar4 + 0xc;
  func_0079e2bc(auStack_20);
  *(undefined1 *)(((int)this) + 0x1e) = 0;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 0);
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(auStack_1c,&g_004c2f8e + g_004c2fd8,auStack_20);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)auStack_1c);
  func_0079e2bc(auStack_1c);
  return;
}

undefined4 BLRingItemPresenter::create(BLRingItemView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x80))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLRingItemPresenter::onEnter()
{
  return;
}

void BLRingItemPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  return;
}

undefined4 BLRingItemPresenter::initWithView(BLRingItemView* p1)
{
  int *piVar1;
  
  *(undefined4 *)(((int)this) + 0x18) = (undefined4)(intptr_t)p1;
  piVar1 = (int *)((BLRingItemView *)p1)->getBtnInfo();
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)(&g_004c303c + g_004c3044),0,0x20);
  return 1;
}

void BLRingItemPresenter::updateData()
{
  undefined4 uVar1;
  int *piVar2;
  undefined4 extraout_r1;
  undefined4 uVar3;
  int iStack_dc;
  undefined1 auStack_d8 [4];
  int aiStack_d4 [2];
  undefined1 auStack_cc [4];
  undefined1 auStack_c8 [180];
  
  uVar1 = (undefined4)(((BLRingItemView *)*(undefined4 *)(((int)this) + 0x18))->getSpNum());
  ((BLRingItemNumItem *)uVar1)->updateData(*(undefined4 *)(((int)this) + 0x34));
  piVar2 = (int *)((BLRingItemView *)*(undefined4 *)(((int)this) + 0x18))->getLabName();
  (**(code **)(*piVar2 + 0x234))(piVar2,*(undefined4 *)(((int)this) + 0x50));
  uVar1 = (undefined4)(*(undefined4 *)(((int)this) + 0x38));
  uVar3 = (undefined4)(*(undefined4 *)(((int)this) + 0x3c));
  func_0079e43c(aiStack_d4,0x18);
  func_0079ea14(auStack_cc,extraout_r1,uVar1,uVar3);
  func_0079e45c(auStack_d8,&g_004c3096 + g_004c3124,&iStack_dc);
  func_0079e46c(&iStack_dc,auStack_c8);
  func_0079e2bc(auStack_d8);
  func_0079e47c(aiStack_d4);
  aiStack_d4[0] = *(int *)(&g_004c30b6 + g_004c3128) + 0xc;
  func_0079e934(aiStack_d4,*(int *)(iStack_dc + -0xc) + 9);
  func_0079e944(aiStack_d4,&g_004c30e0 + g_004c312c,9);
  func_0079e5dc(aiStack_d4,&iStack_dc);
  func_0079e2bc(&iStack_dc);
  piVar2 = (int *)((BLRingItemView *)*(undefined4 *)(((int)this) + 0x18))->getLabFight();
  (**(code **)(*piVar2 + 0x234))(piVar2,aiStack_d4[0]);
  func_0079e2bc(aiStack_d4);
  return;
}

// ===== 修复: 补回被误删的函数占位 (3) =====
bool BLRingItemPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void BLRingItemPresenter::onInfo(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLRingItemPresenter::initWith(CircusPlayerinfo const& p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
