#include "BLChestPresenter.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "CCObject.h"
#include "CCTouch.h"
#include "CCLayer.h"
#include "CCDirector.h"
#include "BLChestPagePresenter.h"
#include "BLChestPageView.h"
#include "BLChestView.h"
#include "BLLeakUtils.h"
#include "BLPageLayer.h"
#include "DataManager.h"
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
extern "C" long long func_0079e4ac(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_00516edc;
extern "C" unsigned long UNK_00516ef4;
extern "C" unsigned long UNK_00516f0c;
extern "C" unsigned long UNK_00516f24;
extern "C" unsigned long UNK_00516f3c;
extern "C" unsigned long UNK_00516f98;
extern "C" unsigned long UNK_00516fbe;
extern "C" unsigned long UNK_00517004;
extern "C" unsigned long UNK_0051702c;
extern "C" unsigned long UNK_005170c0;
extern "C" unsigned long UNK_00517184;
extern "C" unsigned long UNK_0051719a;
extern "C" unsigned long UNK_005171d4;
extern "C" unsigned long UNK_005172d8;
extern "C" unsigned long UNK_005172f6;
extern "C" unsigned long _UNK_00516ee0;
extern "C" unsigned long _UNK_00516ef8;
extern "C" unsigned long _UNK_00516f10;
extern "C" unsigned long _UNK_00516f28;
extern "C" unsigned long _UNK_00516f40;
extern "C" unsigned long _UNK_00516ff0;
extern "C" unsigned long _UNK_00516ff4;
extern "C" unsigned long _UNK_00517008;
extern "C" unsigned long _UNK_00517030;
extern "C" unsigned long _UNK_005170c4;
extern "C" unsigned long _UNK_00517174;
extern "C" unsigned long _UNK_00517188;
extern "C" unsigned long _UNK_00517208;
extern "C" unsigned long _UNK_0051720c;
extern "C" unsigned long _UNK_00517370;
extern "C" unsigned long _UNK_00517374;
extern "C" unsigned long g_00516edc;
extern "C" unsigned long g_00516ee0;
extern "C" unsigned long g_00516ef4;
extern "C" unsigned long g_00516ef8;
extern "C" unsigned long g_00516f0c;
extern "C" unsigned long g_00516f10;
extern "C" unsigned long g_00516f24;
extern "C" unsigned long g_00516f28;
extern "C" unsigned long g_00516f3c;
extern "C" unsigned long g_00516f40;
extern "C" unsigned long g_00516f98;
extern "C" unsigned long g_00516fbe;
extern "C" unsigned long g_00516ff0;
extern "C" unsigned long g_00516ff4;
extern "C" unsigned long g_00517004;
extern "C" unsigned long g_00517008;
extern "C" unsigned long g_0051702c;
extern "C" unsigned long g_00517030;
extern "C" unsigned long g_005170c0;
extern "C" unsigned long g_005170c4;
extern "C" unsigned long g_00517174;
extern "C" unsigned long g_00517184;
extern "C" unsigned long g_00517188;
extern "C" unsigned long g_0051719a;
extern "C" unsigned long g_005171d4;
extern "C" unsigned long g_00517208;
extern "C" unsigned long g_0051720c;
extern "C" unsigned long g_005172d8;
extern "C" unsigned long g_005172f6;
extern "C" unsigned long g_00517370;
extern "C" unsigned long g_00517374;
bool BLChestPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLChestPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLChestPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLChestPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

undefined4 BLChestPresenter::numOfPages(BLPageLayer* p1)
{
  return 5;
}

void BLChestPresenter::tick(float p1)
{
  return;
}

BLChestPresenter::~BLChestPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_00516f98 + g_00516ff0);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x48;
  *(int *)((int)this + 4*(6)) = iVar2 + 0x78;
  *(int *)((int)this + 4*(7)) = iVar2 + 0x88;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00516fbe + g_00516ff4,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLChestPresenter::onClose(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(0x3c);
  return;
}



BLChestPresenter::BLChestPresenter()
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
  iVar3 = *(int *)(&g_0051719a + g_00517208);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x48;
  *(int *)((int)this + 4*(6)) = iVar3 + 0x78;
  *(int *)((int)this + 4*(7)) = iVar3 + 0x88;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 1);
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005171d4 + g_0051720c,&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  ((UIManager *)this)->shareManager();
  ((UIManager *)this)->pushCurScrollViewUnEnable();
  return;
}

undefined4 BLChestPresenter::create(BLChestView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x24))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLChestPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this + 0x14));
  ((UIManager *)this)->shareManager();
  ((UIManager *)this)->popUnEnableScrollView();
  return;
}

void BLChestPresenter::onEnter()
{
  return;
}

// ===== 修复: 补回被误删的函数占位 (3) =====
void BLChestPresenter::nodeOfPageAtIndex(BLPageLayer* p1, int p2)
{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  code *pcVar7;
  undefined1 auStack_20 [12];
  
  piVar1 = (int *)cocos2d::CCLayer::create();
  piVar2 = (int *)((BLChestPageView *)this)->create();
  pcVar7 = *(code **)(*piVar2 + 0x4c);
  puVar3 = (undefined4 *)(**(code **)(*piVar2 + 0x8c))();
  uVar4 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(*puVar3),(int)(0x3f000000)))));
  iVar5 = (**(code **)(*piVar2 + 0x8c))(piVar2);
  uVar6 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(*(undefined4 *)(iVar5 + 4)),(int)(0x3f000000)))));
  0 /* ctorZero */;
  (*pcVar7)(piVar2,auStack_20);
  (**(code **)(*piVar1 + 200))(piVar1,piVar2);
  uVar4 = (undefined4)(((BLChestPageView *)piVar2)->getPresenter());
  ((BLChestPagePresenter *)uVar4)->initWithIndex(p2);
  return;
}

void BLChestPresenter::pageChange(BLPageLayer* p1, int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

undefined4 BLChestPresenter::initWithView(BLChestView* p1)
{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  code *pcVar5;
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [8];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  *(undefined4 *)(((int)this) + 0x20) = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  uVar1 = (undefined4)(((BLChestView *)(p1))->Chest());
  ((BLPageLayer *)(uVar1))->setDataSource((BLPageLayerDataSource*)((int)this + 0x18));
  piVar2 = (int *)((BLChestView *)(*(undefined4 *)(((int)this) + 0x20)))->Chest();
  (**(code **)(*(int *)(piVar2) + (0x210)))(piVar2,((int)this) + 0x1c);
  uVar1 = (undefined4)(((DataManager *)this)->shareDataManager());
  piVar2 = ((void)((DataManager *)(uVar1))->getPlayerDataByIndex(0),(int *)0);
  iVar3 = 0;
  if (piVar2 != 0) {
    piVar2 = (int *)(**(code **)(*(int *)(piVar2) + (0x18)))();
    uVar1 = (undefined4)((**(code **)(*(int *)(piVar2) + (0x20)))());
    iVar3 = (undefined4)(intptr_t)(func_0079e4ac(uVar1,10));
    if (4 < iVar3) {
      iVar3 = 4;
    }
  }
  uVar1 = (undefined4)(((BLChestView *)(*(undefined4 *)(((int)this) + 0x20)))->Chest());
  ((BLPageLayer *)(uVar1))->setCurrentPage(iVar3);
  ((BLChestView *)(*(undefined4 *)(((int)this) + 0x20)))->Chest();
  ((BLPageLayer *)this)->reloadData();
  piVar2 = (int *)((BLChestView *)(*(undefined4 *)(((int)this) + 0x20)))->getBtnClose();
  uStack_1c = (undefined4)(0);
  uStack_20 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_005172d8 + (intptr_t)(g_00517370))));
  (**(code **)(*(int *)(piVar2) + (0x254)))(piVar2,((int)this),uStack_20,0,0x20);
  piVar2 = (int *)((BLChestView *)(*(undefined4 *)(((int)this) + 0x20)))->getBtnClose();
  pcVar5 = *(code **)(*piVar2 + 0x26c);
  func_0079e45c(auStack_28,(unsigned char *)((char *)&g_005172f6 + (intptr_t)(g_00517374)),auStack_2c);
  (*pcVar5)(piVar2,auStack_28);
  func_0079e2bc(auStack_28);
  piVar2 = (int *)((BLChestView *)(*(undefined4 *)(((int)this) + 0x20)))->getBtnClose();
  pcVar5 = *(code **)(*piVar2 + 0x28c);
  piVar4 = (int *)((BLChestView *)(*(undefined4 *)(((int)this) + 0x20)))->getBtnClose();
  piVar4 = (int *)(**(code **)(*(int *)(piVar4) + (0x308)))(piVar4,1);
  (**(code **)(*(int *)(piVar4) + (0x1cc)))(auStack_28,piVar4);
  (*pcVar5)(piVar2,auStack_28);
  piVar2 = (int *)((BLChestView *)(*(undefined4 *)(((int)this) + 0x20)))->getSprLeft();
  (**(code **)(*(int *)(piVar2) + (0x40)))(piVar2,0x40000000);
  piVar2 = (int *)((BLChestView *)(*(undefined4 *)(((int)this) + 0x20)))->getSprRight();
  (**(code **)(*(int *)(piVar2) + (0x40)))(piVar2,0x40000000);
  return 1;
}
