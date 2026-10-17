#include "BLDebugLogPresenter.h"
#include "BLDebugLogItemView.h"
#include "BLDebugLogView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLTableView.h"
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
extern "C" long long func_0079e4dc(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_005e5910;
extern "C" unsigned long UNK_005e5928;
extern "C" unsigned long UNK_005e5940;
extern "C" unsigned long UNK_005e5958;
extern "C" unsigned long UNK_005e5970;
extern "C" unsigned long UNK_005e59c8;
extern "C" unsigned long UNK_005e59ee;
extern "C" unsigned long UNK_005e5a34;
extern "C" unsigned long UNK_005e5a5c;
extern "C" unsigned long UNK_005e5ad0;
extern "C" unsigned long UNK_005e5afa;
extern "C" unsigned long UNK_005e5b3c;
extern "C" unsigned long UNK_005e5bb8;
extern "C" unsigned long UNK_005e5cd4;
extern "C" unsigned long UNK_005e5d3c;
extern "C" unsigned long UNK_005e5d3e;
extern "C" unsigned long _UNK_005e5914;
extern "C" unsigned long _UNK_005e592c;
extern "C" unsigned long _UNK_005e5944;
extern "C" unsigned long _UNK_005e595c;
extern "C" unsigned long _UNK_005e5974;
extern "C" unsigned long _UNK_005e5a20;
extern "C" unsigned long _UNK_005e5a24;
extern "C" unsigned long _UNK_005e5a38;
extern "C" unsigned long _UNK_005e5a60;
extern "C" unsigned long _UNK_005e5abc;
extern "C" unsigned long _UNK_005e5ac0;
extern "C" unsigned long _UNK_005e5ad4;
extern "C" unsigned long _UNK_005e5ae8;
extern "C" unsigned long _UNK_005e5b6c;
extern "C" unsigned long _UNK_005e5b70;
extern "C" unsigned long _UNK_005e5c10;
extern "C" unsigned long _UNK_005e5cd8;
extern "C" unsigned long _UNK_005e5dac;
extern "C" unsigned long _UNK_005e5db0;
extern "C" unsigned long g_005e5910;
extern "C" unsigned long g_005e5914;
extern "C" unsigned long g_005e5928;
extern "C" unsigned long g_005e592c;
extern "C" unsigned long g_005e5940;
extern "C" unsigned long g_005e5944;
extern "C" unsigned long g_005e5958;
extern "C" unsigned long g_005e595c;
extern "C" unsigned long g_005e5970;
extern "C" unsigned long g_005e5974;
extern "C" unsigned long g_005e59c8;
extern "C" unsigned long g_005e59ee;
extern "C" unsigned long g_005e5a20;
extern "C" unsigned long g_005e5a24;
extern "C" unsigned long g_005e5a34;
extern "C" unsigned long g_005e5a38;
extern "C" unsigned long g_005e5a5c;
extern "C" unsigned long g_005e5a60;
extern "C" unsigned long g_005e5abc;
extern "C" unsigned long g_005e5ac0;
extern "C" unsigned long g_005e5ad0;
extern "C" unsigned long g_005e5ad4;
extern "C" unsigned long g_005e5ae8;
extern "C" unsigned long g_005e5afa;
extern "C" unsigned long g_005e5b3c;
extern "C" unsigned long g_005e5b6c;
extern "C" unsigned long g_005e5b70;
extern "C" unsigned long g_005e5bb8;
extern "C" unsigned long g_005e5c10;
extern "C" unsigned long g_005e5cd4;
extern "C" unsigned long g_005e5cd8;
extern "C" unsigned long g_005e5d3c;
extern "C" unsigned long g_005e5d3e;
extern "C" unsigned long g_005e5dac;
extern "C" unsigned long g_005e5db0;
bool BLDebugLogPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLDebugLogPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLDebugLogPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLDebugLogPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLDebugLogPresenter::touchItemAtIndex(BLTableView* p1, cocos2d::CCNode* p2, int p3)
{
  return;
}

BLDebugLogPresenter::~BLDebugLogPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_005e59c8 + g_005e5a20);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x48;
  *(int *)((int)this + 4*(6)) = iVar2 + 0x78;
  *(int *)((int)this + 4*(7)) = iVar2 + 0x88;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005e59ee + g_005e5a24,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

undefined4 BLDebugLogPresenter::sizeOfCellItem(BLTableView* p1)
{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 auStack_28 [2];
  undefined1 auStack_20 [4];
  undefined4 uStack_1c;
  
  uVar1 = (undefined4)(g_005e5ac0);
  uVar3 = (undefined4)(g_005e5abc);
  0 /* ctorZero */;
  cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(auStack_28[0]),(int)(uVar2)))));
  0 /* ctorZero */;
  cocos2d::CCDirector::sharedDirector();
  uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uStack_1c),(int)(uVar3)))));
  0 /* ctorZero */;
  return ((int)this);
}

void BLDebugLogPresenter::onClose(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(g_005e5ae8);
  return;
}

BLDebugLogPresenter::BLDebugLogPresenter()
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
  iVar3 = *(int *)(&g_005e5afa + g_005e5b6c);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x48;
  *(int *)((int)this + 4*(6)) = iVar3 + 0x78;
  *(int *)((int)this + 4*(7)) = iVar3 + 0x88;
  ((UIManager *)this)->shareManager();
  ((UIManager *)this)->pushCurScrollViewUnEnable();
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 1);
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005e5b3c + g_005e5b70,&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  *(int *)((int)this + 4*(9)) = 0;
  return;
}

undefined4 BLDebugLogPresenter::create()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x28))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

undefined4 BLDebugLogPresenter::initWithView(BLDebugLogView* p1)
{
  int *piVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(((int)this) + 0x20) = (undefined4)(intptr_t)p1;
  piVar1 = (int *)((BLDebugLogView *)p1)->getBtnClose();
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)(&g_005e5bb8 + g_005e5c10),0,0x20,p1,
             *(undefined4 *)(&g_005e5bb8 + g_005e5c10),0);
  piVar1 = (int *)((BLDebugLogView *)*(undefined4 *)(((int)this) + 0x20))->getTableViewTotal();
  (**(code **)(*piVar1 + 0x21c))(piVar1,((int)this) + 0x18);
  piVar1 = (int *)((BLDebugLogView *)*(undefined4 *)(((int)this) + 0x20))->getTableViewTotal();
  (**(code **)(*piVar1 + 0x214))(piVar1,((int)this) + 0x1c);
  piVar1 = (int *)((BLDebugLogView *)*(undefined4 *)(((int)this) + 0x20))->getTableViewTotal();
  (**(code **)(*piVar1 + 0x22c))(piVar1,1);
  uVar2 = (undefined4)(((BLDebugLogView *)*(undefined4 *)(((int)this) + 0x20))->getTableViewTotal());
  ((BLTableView *)uVar2)->reloadData(0, 1);
  return 1;
}

void BLDebugLogPresenter::onEnter()
{
  return;
}

void BLDebugLogPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar2)->removeAllObservers((cocos2d::CCObject*)((int)this));
  ((UIManager *)this)->shareManager();
  ((UIManager *)this)->popUnEnableScrollView();
  return;
}

void BLDebugLogPresenter::tick(float p1)
{
  return;
}

// ===== 修复: 补回被误删的函数占位 (2) =====
int BLDebugLogPresenter::numOfCellItem(BLTableView* p1)
{
  int iVar1;
  
  iVar1 = (undefined4)(intptr_t)(((sir::singleton<LogContent, 0> *)this)->instance());
  return *(int *)(iVar1 + 0x20) - *(int *)(iVar1 + 0x1c) >> 2;
}

void BLDebugLogPresenter::nodeOfCellItemAtIndex(BLTableView* p1, cocos2d::CCNode* p2, int p3)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
