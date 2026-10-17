#include "PKRankRewardMainPresenter.h"
#include "BLLeakUtils.h"
#include "BLTableView.h"
#include "PKRankRewardItemPresenter.h"
#include "PKRankRewardItemView.h"
#include "PKRankRewardMainView.h"
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
extern "C" long long func_0079e55c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_00620f54;
extern "C" unsigned long UNK_00620f6c;
extern "C" unsigned long UNK_00620fdc;
extern "C" unsigned long UNK_00621002;
extern "C" unsigned long UNK_00621048;
extern "C" unsigned long UNK_00621070;
extern "C" unsigned long UNK_00621130;
extern "C" unsigned long UNK_00621132;
extern "C" unsigned long UNK_00621166;
extern "C" unsigned long UNK_006211a4;
extern "C" unsigned long UNK_0062124c;
extern "C" unsigned long UNK_006212ce;
extern "C" unsigned long UNK_006212d0;
extern "C" unsigned long UNK_006212fe;
extern "C" unsigned long UNK_00621300;
extern "C" unsigned long _UNK_00620f58;
extern "C" unsigned long _UNK_00620f70;
extern "C" unsigned long _UNK_00621034;
extern "C" unsigned long _UNK_00621038;
extern "C" unsigned long _UNK_0062104c;
extern "C" unsigned long _UNK_00621074;
extern "C" unsigned long _UNK_00621088;
extern "C" unsigned long _UNK_0062108c;
extern "C" unsigned long _UNK_00621118;
extern "C" unsigned long _UNK_00621150;
extern "C" unsigned long _UNK_00621154;
extern "C" unsigned long _UNK_006211d0;
extern "C" unsigned long _UNK_006211d4;
extern "C" unsigned long _UNK_006212a4;
extern "C" unsigned long _UNK_006212e4;
extern "C" unsigned long _UNK_006212e8;
extern "C" unsigned long _UNK_00621314;
extern "C" unsigned long _UNK_00621318;
extern "C" unsigned long g_00620f54;
extern "C" unsigned long g_00620f58;
extern "C" unsigned long g_00620f6c;
extern "C" unsigned long g_00620f70;
extern "C" unsigned long g_00620fdc;
extern "C" unsigned long g_00621002;
extern "C" unsigned long g_00621034;
extern "C" unsigned long g_00621038;
extern "C" unsigned long g_00621048;
extern "C" unsigned long g_0062104c;
extern "C" unsigned long g_00621070;
extern "C" unsigned long g_00621074;
extern "C" unsigned long g_00621088;
extern "C" unsigned long g_0062108c;
extern "C" unsigned long g_00621118;
extern "C" unsigned long g_00621130;
extern "C" unsigned long g_00621132;
extern "C" unsigned long g_00621150;
extern "C" unsigned long g_00621154;
extern "C" unsigned long g_00621166;
extern "C" unsigned long g_006211a4;
extern "C" unsigned long g_006211d0;
extern "C" unsigned long g_006211d4;
extern "C" unsigned long g_0062124c;
extern "C" unsigned long g_006212a4;
extern "C" unsigned long g_006212ce;
extern "C" unsigned long g_006212d0;
extern "C" unsigned long g_006212e4;
extern "C" unsigned long g_006212e8;
extern "C" unsigned long g_006212fe;
extern "C" unsigned long g_00621300;
extern "C" unsigned long g_00621314;
extern "C" unsigned long g_00621318;
bool PKRankRewardMainPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void PKRankRewardMainPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void PKRankRewardMainPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void PKRankRewardMainPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

undefined4 PKRankRewardMainPresenter::numOfCellItem(BLTableView* p1)
{
  return 4;
}

void PKRankRewardMainPresenter::initComplete(BLTableView* p1)
{
  return;
}

void PKRankRewardMainPresenter::touchItemAtIndex(BLTableView* p1, cocos2d::CCNode* p2, int p3)
{
  return;
}

PKRankRewardMainPresenter::~PKRankRewardMainPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_00620fdc + g_00621034);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x50;
  *(int *)((int)this + 4*(6)) = iVar2 + 0x80;
  *(int *)((int)this + 4*(7)) = iVar2 + 0x90;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00621002 + g_00621038,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

undefined4 PKRankRewardMainPresenter::sizeOfCellItem(BLTableView* p1)
{
  0 /* ctorZero */;
  return ((int)this);
}


void PKRankRewardMainPresenter::onClose(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(g_00621118);
  return;
}

void PKRankRewardMainPresenter::tick(float p1)
{
  int iVar1;
  int *piVar2;
  
  if ((*(int *)(((int)this) + 0x24) != 0) &&
     (iVar1 = func_0079e55c(*(int *)(((int)this) + 0x24),
                              *(undefined4 *)(&g_00621130 + g_00621154),
                              *(undefined4 *)(&g_00621132 + g_00621150),0), iVar1 != 0)) {
    piVar2 = (int *)((PKRankRewardItemView *)this)->getPresenter();
    (**(code **)(*piVar2 + 0x194))(piVar2,p1);
  }
  return;
}

PKRankRewardMainPresenter::PKRankRewardMainPresenter()
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
  iVar3 = *(int *)(&g_00621166 + g_006211d0);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x50;
  *(int *)((int)this + 4*(6)) = iVar3 + 0x80;
  *(int *)((int)this + 4*(7)) = iVar3 + 0x90;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 1);
  *(int *)((int)this + 4*(9)) = 0;
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_006211a4 + g_006211d4,&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

undefined4 PKRankRewardMainPresenter::create(PKRankRewardMainView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x28))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void PKRankRewardMainPresenter::onEnter()
{
  return;
}

void PKRankRewardMainPresenter::onExit()
{
  undefined4 uVar1;
  int *piVar2;
  
  ((UIManager *)this)->shareManager();
  ((UIManager *)this)->popUnEnableScrollView();
  uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar1)->removeAllObservers((cocos2d::CCObject*)((int)this));
  piVar2 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar1 = (undefined4)((**(code **)(*piVar2 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar1)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  *(undefined4 *)(((int)this) + 0x24) = 0;
  return;
}

void PKRankRewardMainPresenter::initWithView(PKRankRewardMainView* p1)
{
  int *piVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(((int)this) + 0x20) = (undefined4)(intptr_t)p1;
  piVar1 = (int *)((PKRankRewardMainView *)p1)->getBtnClose();
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)(&g_0062124c + g_006212a4),0,0x20,p1,
             *(undefined4 *)(&g_0062124c + g_006212a4),0);
  piVar1 = (int *)((PKRankRewardMainView *)*(undefined4 *)(((int)this) + 0x20))->getTableView();
  (**(code **)(*piVar1 + 0x21c))(piVar1,((int)this) + 0x18);
  piVar1 = (int *)((PKRankRewardMainView *)*(undefined4 *)(((int)this) + 0x20))->getTableView();
  (**(code **)(*piVar1 + 0x214))(piVar1,((int)this) + 0x1c);
  piVar1 = (int *)((PKRankRewardMainView *)*(undefined4 *)(((int)this) + 0x20))->getTableView();
  (**(code **)(*piVar1 + 0x22c))(piVar1,1);
  uVar2 = (undefined4)(((PKRankRewardMainView *)*(undefined4 *)(((int)this) + 0x20))->getTableView());
  ((BLTableView *)uVar2)->reloadData(0, 1);
  return;
}

void PKRankRewardMainPresenter::onRefreshRankInfo()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((PKRankRewardMainView *)*(undefined4 *)(((int)this) + 0x20))->getTableView());
  ((BLTableView *)uVar1)->reloadData(0, 1);
  return;
}

void PKRankRewardMainPresenter::onGetReward()
{
  undefined4 p4 = 0;

  int iVar1;
  
  if ((*(int *)(((int)this) + 0x24) != 0) &&
     (iVar1 = func_0079e55c(*(int *)(((int)this) + 0x24),
                              *(undefined4 *)(&g_006212ce + g_006212e4),
                              *(undefined4 *)(&g_006212d0 + g_006212e8),0,p4), iVar1 != 0)
     ) {
    ((PKRankRewardItemView *)this)->getPresenter();
    ((PKRankRewardItemPresenter *)this)->onGetReward();
  }
  return;
}

void PKRankRewardMainPresenter::onGetRewardFail()
{
  undefined4 p4 = 0;

  int iVar1;
  
  if ((*(int *)(((int)this) + 0x24) != 0) &&
     (iVar1 = func_0079e55c(*(int *)(((int)this) + 0x24),
                              *(undefined4 *)(&g_006212fe + g_00621314),
                              *(undefined4 *)(&g_00621300 + g_00621318),0,p4), iVar1 != 0)
     ) {
    ((PKRankRewardItemView *)this)->getPresenter();
    ((PKRankRewardItemPresenter *)this)->onGetRewardFail();
  }
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
void PKRankRewardMainPresenter::nodeOfCellItemAtIndex(BLTableView* p1, cocos2d::CCNode* p2, int p3)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
