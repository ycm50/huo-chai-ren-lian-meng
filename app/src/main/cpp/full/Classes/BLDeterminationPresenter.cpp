#include "BLDeterminationPresenter.h"
#include "BLDeterminationView.h"
#include "BLLeakUtils.h"
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
extern "C" unsigned long UNK_005ca500;
extern "C" unsigned long UNK_005ca51a;
extern "C" unsigned long UNK_005ca560;
extern "C" unsigned long UNK_005ca588;
extern "C" unsigned long UNK_005ca5ce;
extern "C" unsigned long UNK_005ca5e6;
extern "C" unsigned long UNK_005ca676;
extern "C" unsigned long UNK_005ca696;
extern "C" unsigned long UNK_005ca6b4;
extern "C" unsigned long _UNK_005ca54c;
extern "C" unsigned long _UNK_005ca550;
extern "C" unsigned long _UNK_005ca564;
extern "C" unsigned long _UNK_005ca58c;
extern "C" unsigned long _UNK_005ca630;
extern "C" unsigned long _UNK_005ca634;
extern "C" unsigned long _UNK_005ca6c4;
extern "C" unsigned long _UNK_005ca6c8;
extern "C" unsigned long _UNK_005ca6cc;
extern "C" unsigned long g_005ca500;
extern "C" unsigned long g_005ca51a;
extern "C" unsigned long g_005ca54c;
extern "C" unsigned long g_005ca550;
extern "C" unsigned long g_005ca560;
extern "C" unsigned long g_005ca564;
extern "C" unsigned long g_005ca588;
extern "C" unsigned long g_005ca58c;
extern "C" unsigned long g_005ca5ce;
extern "C" unsigned long g_005ca5e6;
extern "C" unsigned long g_005ca630;
extern "C" unsigned long g_005ca634;
extern "C" unsigned long g_005ca676;
extern "C" unsigned long g_005ca696;
extern "C" unsigned long g_005ca6b4;
extern "C" unsigned long g_005ca6c4;
extern "C" unsigned long g_005ca6c8;
extern "C" unsigned long g_005ca6cc;
bool BLDeterminationPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

BLDeterminationPresenter::~BLDeterminationPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_005ca500 + g_005ca54c);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x2c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005ca51a + g_005ca550,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLDeterminationPresenter::onClose(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(0x280);
  return;
}

void BLDeterminationPresenter::onSure(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(0x280);
  return;
}

void BLDeterminationPresenter::onCancle(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(0x280);
  return;
}

BLDeterminationPresenter::BLDeterminationPresenter()
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
  iVar3 = *(int *)(&g_005ca5ce + g_005ca630);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x2c;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005ca5e6 + g_005ca634,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  piVar2 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar1 = (undefined4)((**(code **)(*piVar2 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar1)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 1);
  ((UIManager *)this)->shareManager();
  ((UIManager *)this)->pushCurScrollViewUnEnable();
  return;
}

undefined4 BLDeterminationPresenter::create()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x1c))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}


void BLDeterminationPresenter::onEnter()
{
  return;
}

void BLDeterminationPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  ((UIManager *)this)->shareManager();
  ((UIManager *)this)->popUnEnableScrollView();
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
void BLDeterminationPresenter::initWithView(BLDeterminationView* p1)
{
  int *piVar1;
  
  *(int *)(((int)this) + 0x18) = (undefined4)(intptr_t)p1;
  (**(code **)(**(int **)(p1 + 0x10c) + 0x254))
            (*(int **)(p1 + 0x10c),((int)this),*(undefined4 *)((unsigned char *)((char *)&g_005ca676 + (intptr_t)(g_005ca6c4))),0,
             0x20);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x18) + 0x110);
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)((unsigned char *)((char *)&g_005ca696 + (intptr_t)(g_005ca6c8))),0,0x20);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x18) + 0x114);
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)((unsigned char *)((char *)&g_005ca6b4 + (intptr_t)(g_005ca6cc))),0,0x20);
  return;
}
