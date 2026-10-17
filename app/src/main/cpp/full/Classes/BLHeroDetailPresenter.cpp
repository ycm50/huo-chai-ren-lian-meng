#include "BLHeroDetailPresenter.h"
#include "BLHeroDetailView.h"
#include "BLHeroSprite.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "RoleInfoData.h"
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
extern "C" long long func_0079e2ec(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_00565f90;
extern "C" unsigned long UNK_00565fa8;
extern "C" unsigned long UNK_00565fc0;
extern "C" unsigned long UNK_00566034;
extern "C" unsigned long UNK_0056604e;
extern "C" unsigned long UNK_00566094;
extern "C" unsigned long UNK_005660bc;
extern "C" unsigned long UNK_005660e2;
extern "C" unsigned long UNK_00566110;
extern "C" unsigned long UNK_005661a4;
extern "C" unsigned long UNK_00566228;
extern "C" unsigned long UNK_00566266;
extern "C" unsigned long UNK_00566290;
extern "C" unsigned long UNK_005662f6;
extern "C" unsigned long UNK_0056640e;
extern "C" unsigned long UNK_00566482;
extern "C" unsigned long _UNK_00565f94;
extern "C" unsigned long _UNK_00565fac;
extern "C" unsigned long _UNK_00565fc4;
extern "C" unsigned long _UNK_00566080;
extern "C" unsigned long _UNK_00566084;
extern "C" unsigned long _UNK_00566098;
extern "C" unsigned long _UNK_005660c0;
extern "C" unsigned long _UNK_0056613c;
extern "C" unsigned long _UNK_00566140;
extern "C" unsigned long _UNK_005661ac;
extern "C" unsigned long _UNK_0056651c;
extern "C" unsigned long _UNK_00566520;
extern "C" unsigned long _UNK_00566524;
extern "C" unsigned long _UNK_00566528;
extern "C" unsigned long _UNK_0056652c;
extern "C" unsigned long _UNK_00566530;
extern "C" unsigned long _UNK_00566534;
extern "C" unsigned long _UNK_00566538;
extern "C" unsigned long _UNK_0056653c;
extern "C" unsigned long g_00565f90;
extern "C" unsigned long g_00565f94;
extern "C" unsigned long g_00565fa8;
extern "C" unsigned long g_00565fac;
extern "C" unsigned long g_00565fc0;
extern "C" unsigned long g_00565fc4;
extern "C" unsigned long g_00566034;
extern "C" unsigned long g_0056604e;
extern "C" unsigned long g_00566080;
extern "C" unsigned long g_00566084;
extern "C" unsigned long g_00566094;
extern "C" unsigned long g_00566098;
extern "C" unsigned long g_005660bc;
extern "C" unsigned long g_005660c0;
extern "C" unsigned long g_005660e2;
extern "C" unsigned long g_00566110;
extern "C" unsigned long g_0056613c;
extern "C" unsigned long g_00566140;
extern "C" unsigned long g_005661a4;
extern "C" unsigned long g_005661ac;
extern "C" unsigned long g_00566228;
extern "C" unsigned long g_00566266;
extern "C" unsigned long g_00566290;
extern "C" unsigned long g_005662f6;
extern "C" unsigned long g_0056640e;
extern "C" unsigned long g_00566482;
extern "C" unsigned long g_0056651c;
extern "C" unsigned long g_00566520;
extern "C" unsigned long g_00566524;
extern "C" unsigned long g_00566528;
extern "C" unsigned long g_0056652c;
extern "C" unsigned long g_00566530;
extern "C" unsigned long g_00566534;
extern "C" unsigned long g_00566538;
extern "C" unsigned long g_0056653c;
bool BLHeroDetailPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLHeroDetailPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLHeroDetailPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLHeroDetailPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLHeroDetailPresenter::tick(float p1)
{
  return;
}

BLHeroDetailPresenter::~BLHeroDetailPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_00566034 + g_00566080);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x3c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0056604e + g_00566084,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLHeroDetailPresenter::onClose(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(0x94);
  return;
}

BLHeroDetailPresenter::BLHeroDetailPresenter()
{
  undefined4 p2 = 0;

  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar3 = *(int *)(&g_005660e2 + g_0056613c);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x3c;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 1);
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00566110 + g_00566140,&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

undefined4 BLHeroDetailPresenter::create(BLHeroDetailView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x1c))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLHeroDetailPresenter::onEnter()
{
  return;
}

void BLHeroDetailPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  return;
}

void BLHeroDetailPresenter::initWithView(BLHeroDetailView* p1)
{
  int *piVar1;
  
  *(undefined4 *)(((int)this) + 0x18) = (undefined4)(intptr_t)p1;
  piVar1 = (int *)((BLHeroDetailView *)p1)->getBtnClose();
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)(&g_005661a4 + g_005661ac),0,0x20);
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
void BLHeroDetailPresenter::initWith(CircusPlayerinfo const& p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
