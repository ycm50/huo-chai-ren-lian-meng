#include "BLLivenessMissionPresenter.h"
#include "BLLeakUtils.h"
#include "BLLivenessMissionItemPresenter.h"
#include "BLLivenessMissionView.h"
#include "BLTableView.h"
#include "DataManager.h"
#include "LivenessUserData.h"
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
extern "C" long long func_0079e30c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long func_0079e784(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0057f2f4;
extern "C" unsigned long UNK_0057f31a;
extern "C" unsigned long UNK_0057f360;
extern "C" unsigned long UNK_0057f388;
extern "C" unsigned long UNK_0057f3bc;
extern "C" unsigned long UNK_0057f4fe;
extern "C" unsigned long UNK_0057f546;
extern "C" unsigned long UNK_0057f58a;
extern "C" unsigned long UNK_0057f5ae;
extern "C" unsigned long _UNK_0057f34c;
extern "C" unsigned long _UNK_0057f350;
extern "C" unsigned long _UNK_0057f364;
extern "C" unsigned long _UNK_0057f38c;
extern "C" unsigned long _UNK_0057f3c0;
extern "C" unsigned long _UNK_0057f41c;
extern "C" unsigned long _UNK_0057f420;
extern "C" unsigned long _UNK_0057f558;
extern "C" unsigned long _UNK_0057f55c;
extern "C" unsigned long _UNK_0057f560;
extern "C" unsigned long _UNK_0057f564;
extern "C" unsigned long _UNK_0057f5f0;
extern "C" unsigned long _UNK_0057f5f4;
extern "C" unsigned long g_0057f2f4;
extern "C" unsigned long g_0057f31a;
extern "C" unsigned long g_0057f34c;
extern "C" unsigned long g_0057f350;
extern "C" unsigned long g_0057f360;
extern "C" unsigned long g_0057f364;
extern "C" unsigned long g_0057f388;
extern "C" unsigned long g_0057f38c;
extern "C" unsigned long g_0057f3bc;
extern "C" unsigned long g_0057f3c0;
extern "C" unsigned long g_0057f41c;
extern "C" unsigned long g_0057f420;
extern "C" unsigned long g_0057f4fe;
extern "C" unsigned long g_0057f546;
extern "C" unsigned long g_0057f558;
extern "C" unsigned long g_0057f55c;
extern "C" unsigned long g_0057f560;
extern "C" unsigned long g_0057f564;
extern "C" unsigned long g_0057f58a;
extern "C" unsigned long g_0057f5ae;
extern "C" unsigned long g_0057f5f0;
extern "C" unsigned long g_0057f5f4;
bool BLLivenessMissionPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLLivenessMissionPresenter::touchItemAtIndex(BLTableView* p1, cocos2d::CCNode* p2, int p3)
{
  return;
}

BLLivenessMissionPresenter::~BLLivenessMissionPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0057f2f4 + g_0057f34c);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x3c;
  *(int *)((int)this + 4*(6)) = iVar2 + 0x50;
  *(int *)((int)this + 4*(7)) = iVar2 + 0x60;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0057f31a + g_0057f350,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

int BLLivenessMissionPresenter::numOfCellItem(BLTableView* p1)
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  piVar1 = (int *)(**(code **)(*piVar1 + 0x28))();
  iVar2 = (**(code **)(*piVar1 + 0x170))();
  return *(int *)(iVar2 + 0x10) - *(int *)(iVar2 + 0xc) >> 2;
}

undefined4 BLLivenessMissionPresenter::sizeOfCellItem(BLTableView* p1)
{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 auStack_28 [2];
  undefined1 auStack_20 [4];
  undefined4 uStack_1c;
  
  uVar1 = (undefined4)(g_0057f420);
  uVar3 = (undefined4)(g_0057f41c);
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


BLLivenessMissionPresenter::BLLivenessMissionPresenter()
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
  iVar3 = *(int *)(&g_0057f58a + g_0057f5f0);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x3c;
  *(int *)((int)this + 4*(6)) = iVar3 + 0x50;
  *(int *)((int)this + 4*(7)) = iVar3 + 0x60;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0057f5ae + g_0057f5f4,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  piVar2 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar1 = (undefined4)((**(code **)(*piVar2 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar1)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 7, 1, 1);
  return;
}

undefined4 BLLivenessMissionPresenter::create()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x24))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLLivenessMissionPresenter::initWithView(BLLivenessMissionView* p1)
{
  int *piVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(((int)this) + 0x20) = (undefined4)(intptr_t)p1;
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  piVar1 = (int *)(**(code **)(*piVar1 + 0x28))();
  (**(code **)(*piVar1 + 0x170))();
  ((LivenessUserData *)this)->sortByStatus();
  piVar1 = (int *)((BLLivenessMissionView *)*(undefined4 *)(((int)this) + 0x20))->getTableView();
  (**(code **)(*piVar1 + 0x214))(piVar1,((int)this) + 0x14);
  piVar1 = (int *)((BLLivenessMissionView *)*(undefined4 *)(((int)this) + 0x20))->getTableView();
  (**(code **)(*piVar1 + 0x21c))(piVar1,((int)this) + 0x18);
  uVar2 = (undefined4)(((BLLivenessMissionView *)*(undefined4 *)(((int)this) + 0x20))->getTableView());
  ((BLTableView *)uVar2)->reloadData(0, 1);
  return;
}

void BLLivenessMissionPresenter::initWithData()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  piVar1 = (int *)(**(code **)(*piVar1 + 0x28))();
  (**(code **)(*piVar1 + 0x170))();
  ((LivenessUserData *)this)->sortByStatus();
  uVar2 = (undefined4)(((BLLivenessMissionView *)*(undefined4 *)(((int)this) + 0x20))->getTableView());
  ((BLTableView *)uVar2)->reloadData(0, 1);
  return;
}

void BLLivenessMissionPresenter::onEnter()
{
  return;
}

void BLLivenessMissionPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x1c);
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
void BLLivenessMissionPresenter::nodeOfCellItemAtIndex(BLTableView* p1, cocos2d::CCNode* p2, int p3)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
