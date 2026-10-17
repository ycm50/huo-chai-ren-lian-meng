#include "BLMinedefendPresenter.h"
#include "MineData.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "CCObject.h"
#include "CCTouch.h"
#include "CCDirector.h"
#include "BLLeakUtils.h"
#include "BLMinedefendView.h"
#include "DefenseMineInfo.h"
#include "UIManager.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <new>   // ghost_fix.js 自动补齐
#include "BLForwards.h"

using namespace cocos2d;
// 兜底声明
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2dc(...);
extern "C" long long func_0079e2ec(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long func_0079e5bc(...);
extern "C" long long func_0079e68c(...);
extern "C" long long func_0079e6c0(...);
extern "C" long long func_0079e784(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_00627594;
extern "C" unsigned long UNK_006275ac;
extern "C" unsigned long UNK_006275c4;
extern "C" unsigned long UNK_00627634;
extern "C" unsigned long UNK_0062764e;
extern "C" unsigned long UNK_00627694;
extern "C" unsigned long UNK_006276bc;
extern "C" unsigned long UNK_006276e6;
extern "C" unsigned long UNK_0062771c;
extern "C" unsigned long UNK_0062784a;
extern "C" unsigned long UNK_00627874;
extern "C" unsigned long UNK_0062788a;
extern "C" unsigned long UNK_00627894;
extern "C" unsigned long UNK_006278aa;
extern "C" unsigned long UNK_006278b4;
extern "C" unsigned long UNK_00627954;
extern "C" unsigned long UNK_006279f8;
extern "C" unsigned long UNK_00627ab0;
extern "C" unsigned long UNK_00627b02;
extern "C" unsigned long UNK_00627b6c;
extern "C" unsigned long UNK_00627b84;
extern "C" unsigned long UNK_00627b86;
extern "C" unsigned long UNK_00627bef;
extern "C" unsigned long UNK_00627c1a;
extern "C" unsigned long UNK_00627c26;
extern "C" unsigned long UNK_00627c94;
extern "C" unsigned long UNK_00627cac;
extern "C" unsigned long UNK_00627cae;
extern "C" unsigned long UNK_00627d17;
extern "C" unsigned long UNK_00627d32;
extern "C" unsigned long UNK_00628078;
extern "C" unsigned long _UNK_00627598;
extern "C" unsigned long _UNK_006275b0;
extern "C" unsigned long _UNK_006275c8;
extern "C" unsigned long _UNK_00627680;
extern "C" unsigned long _UNK_00627684;
extern "C" unsigned long _UNK_00627698;
extern "C" unsigned long _UNK_006276c0;
extern "C" unsigned long _UNK_006276d4;
extern "C" unsigned long _UNK_00627748;
extern "C" unsigned long _UNK_0062774c;
extern "C" unsigned long _UNK_00627ab4;
extern "C" unsigned long _UNK_00627ab8;
extern "C" unsigned long _UNK_00627abc;
extern "C" unsigned long _UNK_00627ac0;
extern "C" unsigned long _UNK_00627ac4;
extern "C" unsigned long _UNK_00627ac8;
extern "C" unsigned long _UNK_00627acc;
extern "C" unsigned long _UNK_00627ad0;
extern "C" unsigned long _UNK_00627ad4;
extern "C" unsigned long _UNK_00627ad8;
extern "C" unsigned long _UNK_00627adc;
extern "C" unsigned long _UNK_00627ae0;
extern "C" unsigned long _UNK_00627ae4;
extern "C" unsigned long _UNK_00627ae8;
extern "C" unsigned long _UNK_00627aec;
extern "C" unsigned long _UNK_00627af0;
extern "C" unsigned long _UNK_00627af4;
extern "C" unsigned long _UNK_00627de4;
extern "C" unsigned long _UNK_00627de8;
extern "C" unsigned long _UNK_00627dec;
extern "C" unsigned long _UNK_00627df0;
extern "C" unsigned long _UNK_00627df4;
extern "C" unsigned long _UNK_00627df8;
extern "C" unsigned long _UNK_00627dfc;
extern "C" unsigned long _UNK_00627e00;
extern "C" unsigned long _UNK_00627e04;
extern "C" unsigned long _UNK_00627e08;
extern "C" unsigned long _UNK_00627e0c;
extern "C" unsigned long _UNK_00627e10;
extern "C" unsigned long _UNK_00627e14;
extern "C" unsigned long _UNK_00627e18;
extern "C" unsigned long _UNK_00627e1c;
extern "C" unsigned long _UNK_00627e20;
extern "C" unsigned long _UNK_0062804c;
extern "C" unsigned long _UNK_00628050;
extern "C" unsigned long _UNK_00628088;
extern "C" unsigned long extraout_r1;
extern "C" unsigned long extraout_r2;
extern "C" unsigned long extraout_r3;
extern "C" unsigned long extraout_r3_00;
extern "C" unsigned long extraout_r3_01;
extern "C" unsigned long g_00627594;
extern "C" unsigned long g_00627598;
extern "C" unsigned long g_006275ac;
extern "C" unsigned long g_006275b0;
extern "C" unsigned long g_006275c4;
extern "C" unsigned long g_006275c8;
extern "C" unsigned long g_00627634;
extern "C" unsigned long g_0062764e;
extern "C" unsigned long g_00627680;
extern "C" unsigned long g_00627684;
extern "C" unsigned long g_00627694;
extern "C" unsigned long g_00627698;
extern "C" unsigned long g_006276bc;
extern "C" unsigned long g_006276c0;
extern "C" unsigned long g_006276d4;
extern "C" unsigned long g_006276e6;
extern "C" unsigned long g_0062771c;
extern "C" unsigned long g_00627748;
extern "C" unsigned long g_0062774c;
extern "C" unsigned long g_0062784a;
extern "C" unsigned long g_00627874;
extern "C" unsigned long g_0062788a;
extern "C" unsigned long g_00627894;
extern "C" unsigned long g_006278aa;
extern "C" unsigned long g_006278b4;
extern "C" unsigned long g_00627954;
extern "C" unsigned long g_006279f8;
extern "C" unsigned long g_00627ab0;
extern "C" unsigned long g_00627ab4;
extern "C" unsigned long g_00627ab8;
extern "C" unsigned long g_00627abc;
extern "C" unsigned long g_00627ac0;
extern "C" unsigned long g_00627ac4;
extern "C" unsigned long g_00627ac8;
extern "C" unsigned long g_00627acc;
extern "C" unsigned long g_00627ad0;
extern "C" unsigned long g_00627ad4;
extern "C" unsigned long g_00627ad8;
extern "C" unsigned long g_00627adc;
extern "C" unsigned long g_00627ae0;
extern "C" unsigned long g_00627ae4;
extern "C" unsigned long g_00627ae8;
extern "C" unsigned long g_00627aec;
extern "C" unsigned long g_00627af0;
extern "C" unsigned long g_00627af4;
extern "C" unsigned long g_00627b02;
extern "C" unsigned long g_00627b6c;
extern "C" unsigned long g_00627b84;
extern "C" unsigned long g_00627b86;
extern "C" unsigned long g_00627bef;
extern "C" unsigned long g_00627c1a;
extern "C" unsigned long g_00627c26;
extern "C" unsigned long g_00627c94;
extern "C" unsigned long g_00627cac;
extern "C" unsigned long g_00627cae;
extern "C" unsigned long g_00627d17;
extern "C" unsigned long g_00627d32;
extern "C" unsigned long g_00627de4;
extern "C" unsigned long g_00627de8;
extern "C" unsigned long g_00627dec;
extern "C" unsigned long g_00627df0;
extern "C" unsigned long g_00627df4;
extern "C" unsigned long g_00627df8;
extern "C" unsigned long g_00627dfc;
extern "C" unsigned long g_00627e00;
extern "C" unsigned long g_00627e04;
extern "C" unsigned long g_00627e08;
extern "C" unsigned long g_00627e0c;
extern "C" unsigned long g_00627e10;
extern "C" unsigned long g_00627e14;
extern "C" unsigned long g_00627e18;
extern "C" unsigned long g_00627e1c;
extern "C" unsigned long g_00627e20;
extern "C" unsigned long g_0062804c;
extern "C" unsigned long g_00628050;
extern "C" unsigned long g_00628078;
extern "C" unsigned long g_00628088;
void BLMinedefendPresenter::tick(float p1)
{
  return;
}

bool BLMinedefendPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLMinedefendPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLMinedefendPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLMinedefendPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

BLMinedefendPresenter::~BLMinedefendPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_00627634 + g_00627680);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x3c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0062764e + g_00627684,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLMinedefendPresenter::onClose(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(g_006276d4);
  return;
}

BLMinedefendPresenter::BLMinedefendPresenter()
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
  iVar3 = *(int *)(&g_006276e6 + g_00627748);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x3c;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 1);
  ((UIManager *)this)->shareManager();
  ((UIManager *)this)->pushCurScrollViewUnEnable();
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0062771c + g_0062774c,&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

void BLMinedefendPresenter::onEnter()
{
  return;
}

void BLMinedefendPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  ((UIManager *)this)->shareManager();
  ((UIManager *)this)->popUnEnableScrollView();
  return;
}

undefined4 BLMinedefendPresenter::create(BLMinedefendView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x1c))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

// ===== 修复: 补回被误删的函数占位 (3) =====
void BLMinedefendPresenter::initScroItem(std::vector<int, std::allocator<int>> * p1, std::vector<std::string, std::allocator<std::string>> * p2, std::vector<std::string, std::allocator<std::string>> * p3)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMinedefendPresenter::initDate()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMinedefendPresenter::initWithView(BLMinedefendView* p1)
{
  int *piVar1;
  
  *(undefined4 *)(((int)this) + 0x18) = (undefined4)(intptr_t)p1;
  piVar1 = (int *)((BLMinedefendView *)p1)->getBtnClose();
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)(&g_00628078 + g_00628088),0,0x20);
  BLMinedefendPresenter::initDate();
  return;
}
