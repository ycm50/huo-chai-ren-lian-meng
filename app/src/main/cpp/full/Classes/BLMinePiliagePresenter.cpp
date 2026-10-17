#include "BLMinePiliagePresenter.h"
#include "BLLeakUtils.h"
#include "BLMinePiliageView.h"
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
extern "C" long long func_0079e45c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_00627278;
extern "C" unsigned long UNK_00627290;
extern "C" unsigned long UNK_006272a8;
extern "C" unsigned long UNK_00627318;
extern "C" unsigned long UNK_00627332;
extern "C" unsigned long UNK_00627378;
extern "C" unsigned long UNK_006273a0;
extern "C" unsigned long UNK_006273ca;
extern "C" unsigned long UNK_00627400;
extern "C" unsigned long UNK_006274ba;
extern "C" unsigned long UNK_0062750a;
extern "C" unsigned long UNK_0062756c;
extern "C" unsigned long _UNK_0062727c;
extern "C" unsigned long _UNK_00627294;
extern "C" unsigned long _UNK_006272ac;
extern "C" unsigned long _UNK_00627364;
extern "C" unsigned long _UNK_00627368;
extern "C" unsigned long _UNK_0062737c;
extern "C" unsigned long _UNK_006273a4;
extern "C" unsigned long _UNK_006273b8;
extern "C" unsigned long _UNK_0062742c;
extern "C" unsigned long _UNK_00627430;
extern "C" unsigned long _UNK_00627540;
extern "C" unsigned long _UNK_00627544;
extern "C" unsigned long _UNK_0062757c;
extern "C" unsigned long g_00627278;
extern "C" unsigned long g_0062727c;
extern "C" unsigned long g_00627290;
extern "C" unsigned long g_00627294;
extern "C" unsigned long g_006272a8;
extern "C" unsigned long g_006272ac;
extern "C" unsigned long g_00627318;
extern "C" unsigned long g_00627332;
extern "C" unsigned long g_00627364;
extern "C" unsigned long g_00627368;
extern "C" unsigned long g_00627378;
extern "C" unsigned long g_0062737c;
extern "C" unsigned long g_006273a0;
extern "C" unsigned long g_006273a4;
extern "C" unsigned long g_006273b8;
extern "C" unsigned long g_006273ca;
extern "C" unsigned long g_00627400;
extern "C" unsigned long g_0062742c;
extern "C" unsigned long g_00627430;
extern "C" unsigned long g_006274ba;
extern "C" unsigned long g_0062750a;
extern "C" unsigned long g_00627540;
extern "C" unsigned long g_00627544;
extern "C" unsigned long g_0062756c;
extern "C" unsigned long g_0062757c;
void BLMinePiliagePresenter::tick(float p1)
{
  return;
}

bool BLMinePiliagePresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLMinePiliagePresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLMinePiliagePresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLMinePiliagePresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

BLMinePiliagePresenter::~BLMinePiliagePresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_00627318 + g_00627364);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x3c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00627332 + g_00627368,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLMinePiliagePresenter::onClose(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(g_006273b8);
  return;
}

BLMinePiliagePresenter::BLMinePiliagePresenter()
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
  iVar3 = *(int *)(&g_006273ca + g_0062742c);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x3c;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 1);
  ((UIManager *)this)->shareManager();
  ((UIManager *)this)->pushCurScrollViewUnEnable();
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00627400 + g_00627430,&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

void BLMinePiliagePresenter::onEnter()
{
  return;
}

void BLMinePiliagePresenter::onExit()
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

undefined4 BLMinePiliagePresenter::create(BLMinePiliageView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x1c))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLMinePiliagePresenter::setGuize(char const* p1)
{
  return;
}


void BLMinePiliagePresenter::initWithView(BLMinePiliageView* p1)
{
  int *piVar1;
  
  *(undefined4 *)(((int)this) + 0x18) = (undefined4)(intptr_t)p1;
  piVar1 = (int *)((BLMinePiliageView *)p1)->getBtnClose();
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)(&g_0062756c + g_0062757c),0,0x20);
  BLMinePiliagePresenter::initDate();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
void BLMinePiliagePresenter::initDate()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
