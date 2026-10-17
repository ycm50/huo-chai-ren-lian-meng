#include "BLPetListPresenter.h"
#include "BLPetListView.h"
#include "BLLeakUtils.h"
#include "BLPetTabItemPresenter.h"
#include "BLPetTabItemView.h"
#include "BLTableView.h"
#include "DataManager.h"
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
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_00609054;
extern "C" unsigned long UNK_006090ac;
extern "C" unsigned long UNK_006090d2;
extern "C" unsigned long UNK_00609118;
extern "C" unsigned long UNK_00609140;
extern "C" unsigned long UNK_00609174;
extern "C" unsigned long UNK_006091a0;
extern "C" unsigned long UNK_006091b6;
extern "C" unsigned long UNK_006091da;
extern "C" unsigned long UNK_00609352;
extern "C" unsigned long UNK_0060937c;
extern "C" unsigned long UNK_0060939a;
extern "C" unsigned long UNK_0060939e;
extern "C" unsigned long _UNK_00609058;
extern "C" unsigned long _UNK_00609104;
extern "C" unsigned long _UNK_00609108;
extern "C" unsigned long _UNK_0060911c;
extern "C" unsigned long _UNK_00609144;
extern "C" unsigned long _UNK_00609178;
extern "C" unsigned long _UNK_0060918c;
extern "C" unsigned long _UNK_00609190;
extern "C" unsigned long _UNK_006091a4;
extern "C" unsigned long _UNK_00609220;
extern "C" unsigned long _UNK_00609224;
extern "C" unsigned long _UNK_0060936c;
extern "C" unsigned long _UNK_00609380;
extern "C" unsigned long _UNK_00609450;
extern "C" unsigned long _UNK_00609454;
extern "C" unsigned long g_00609054;
extern "C" unsigned long g_00609058;
extern "C" unsigned long g_006090ac;
extern "C" unsigned long g_006090d2;
extern "C" unsigned long g_00609104;
extern "C" unsigned long g_00609108;
extern "C" unsigned long g_00609118;
extern "C" unsigned long g_0060911c;
extern "C" unsigned long g_00609140;
extern "C" unsigned long g_00609144;
extern "C" unsigned long g_00609174;
extern "C" unsigned long g_00609178;
extern "C" unsigned long g_0060918c;
extern "C" unsigned long g_00609190;
extern "C" unsigned long g_006091a0;
extern "C" unsigned long g_006091a4;
extern "C" unsigned long g_006091b6;
extern "C" unsigned long g_006091da;
extern "C" unsigned long g_00609220;
extern "C" unsigned long g_00609224;
extern "C" unsigned long g_00609352;
extern "C" unsigned long g_0060936c;
extern "C" unsigned long g_0060937c;
extern "C" unsigned long g_00609380;
extern "C" unsigned long g_0060939a;
extern "C" unsigned long g_0060939e;
extern "C" unsigned long g_00609450;
extern "C" unsigned long g_00609454;
bool BLPetListPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

BLPetListPresenter::~BLPetListPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_006090ac + g_00609104);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x3c;
  *(int *)((int)this + 4*(6)) = iVar2 + 0x6c;
  *(int *)((int)this + 4*(7)) = iVar2 + 0x80;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_006090d2 + g_00609108,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

int BLPetListPresenter::numOfCellItem(BLTableView* p1)
{
  int *piVar1;
  
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  piVar1 = (int *)(**(code **)(*piVar1 + 0x28))();
  piVar1 = (int *)(**(code **)(*piVar1 + 0x188))();
  return piVar1[1] - *piVar1 >> 2;
}

undefined4 BLPetListPresenter::sizeOfCellItem(BLTableView* p1)
{
  0 /* ctorZero */;
  return ((int)this);
}

BLPetListPresenter::BLPetListPresenter()
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
  iVar3 = *(int *)(&g_006091b6 + g_00609220);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x3c;
  *(int *)((int)this + 4*(6)) = iVar3 + 0x6c;
  *(int *)((int)this + 4*(7)) = iVar3 + 0x80;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_006091da + g_00609224,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  piVar2 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar1 = (undefined4)((**(code **)(*piVar2 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar1)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 0);
  *(int *)((int)this + 4*(9)) = 0;
  return;
}

undefined4 BLPetListPresenter::create()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x28))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}


void BLPetListPresenter::onEnter()
{
  return;
}

void BLPetListPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  return;
}

void BLPetListPresenter::updateView()
{
  int *piVar1;
  
  piVar1 = *(int **)(*(int *)(((int)this) + 0x20) + 0x10c);
  (**(code **)(*piVar1 + 0x214))(piVar1,((int)this) + 0x18);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x20) + 0x10c);
  (**(code **)(*piVar1 + 0x21c))(piVar1,((int)this) + 0x1c);
  ((BLTableView *)*(undefined4 *)(*(int *)(((int)this) + 0x20) + 0x10c))->reloadData(0, 1);
  return;
}

// ===== 修复: 补回被误删的函数占位 (3) =====
void BLPetListPresenter::initWithView(BLPetListView* p1)
{
  int *piVar1;
  
  *(int *)(((int)this) + 0x20) = (undefined4)(intptr_t)p1;
  (**(code **)(**(int **)(p1 + 0x10c) + 0x214))(*(int **)(p1 + 0x10c),((int)this) + 0x18);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x20) + 0x10c);
  (**(code **)(*piVar1 + 0x21c))(piVar1,((int)this) + 0x1c);
  ((BLTableView *)*(undefined4 *)(*(int *)(((int)this) + 0x20) + 0x10c))->reloadData(0, 1);
  return;
}

void BLPetListPresenter::touchItemAtIndex(BLTableView* p1, cocos2d::CCNode* p2, int p3)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLPetListPresenter::nodeOfCellItemAtIndex(BLTableView* p1, cocos2d::CCNode* p2, int p3)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
