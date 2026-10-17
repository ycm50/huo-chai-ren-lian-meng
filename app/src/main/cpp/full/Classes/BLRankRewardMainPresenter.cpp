#include "BLRankRewardMainPresenter.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "CCNotificationCenter.h"
#include "CCObject.h"
#include "CCNode.h"
#include "CCTouch.h"
#include "CCDirector.h"
#include "BLLeakUtils.h"
#include "BLRankRewardItemPresenter.h"
#include "BLRankRewardItemView.h"
#include "BLRankRewardMainView.h"
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
extern "C" long long func_0079e33c(...);
extern "C" long long func_0079e38c(...);
extern "C" long long func_0079e39c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_00641eb0;
extern "C" unsigned long UNK_00641f20;
extern "C" unsigned long UNK_00641f46;
extern "C" unsigned long UNK_00641f8c;
extern "C" unsigned long UNK_00641fb4;
extern "C" unsigned long UNK_00642084;
extern "C" unsigned long UNK_00642086;
extern "C" unsigned long UNK_006420be;
extern "C" unsigned long UNK_006420c0;
extern "C" unsigned long UNK_006420ee;
extern "C" unsigned long UNK_006420f0;
extern "C" unsigned long UNK_00642114;
extern "C" unsigned long UNK_0064211c;
extern "C" unsigned long UNK_00642140;
extern "C" unsigned long UNK_00642144;
extern "C" unsigned long UNK_00642184;
extern "C" unsigned long UNK_0064219c;
extern "C" unsigned long UNK_006421dc;
extern "C" unsigned long UNK_00642200;
extern "C" unsigned long UNK_00642202;
extern "C" unsigned long UNK_0064221a;
extern "C" unsigned long UNK_0064221c;
extern "C" unsigned long UNK_00642234;
extern "C" unsigned long UNK_00642238;
extern "C" unsigned long UNK_006422f0;
extern "C" unsigned long _UNK_00641eb4;
extern "C" unsigned long _UNK_00641f78;
extern "C" unsigned long _UNK_00641f7c;
extern "C" unsigned long _UNK_00641f90;
extern "C" unsigned long _UNK_00641fb8;
extern "C" unsigned long _UNK_00641fe0;
extern "C" unsigned long _UNK_00641fe4;
extern "C" unsigned long _UNK_006420a4;
extern "C" unsigned long _UNK_006420a8;
extern "C" unsigned long _UNK_006420d4;
extern "C" unsigned long _UNK_006420d8;
extern "C" unsigned long _UNK_00642104;
extern "C" unsigned long _UNK_00642108;
extern "C" unsigned long _UNK_00642164;
extern "C" unsigned long _UNK_00642168;
extern "C" unsigned long _UNK_0064216c;
extern "C" unsigned long _UNK_00642170;
extern "C" unsigned long _UNK_00642174;
extern "C" unsigned long _UNK_00642188;
extern "C" unsigned long _UNK_0064225c;
extern "C" unsigned long _UNK_00642260;
extern "C" unsigned long _UNK_00642264;
extern "C" unsigned long _UNK_00642268;
extern "C" unsigned long _UNK_0064226c;
extern "C" unsigned long _UNK_00642270;
extern "C" unsigned long _UNK_00642274;
extern "C" unsigned long _UNK_00642278;
extern "C" unsigned long _UNK_00642348;
extern "C" unsigned long g_00641eb0;
extern "C" unsigned long g_00641eb4;
extern "C" unsigned long g_00641f20;
extern "C" unsigned long g_00641f46;
extern "C" unsigned long g_00641f78;
extern "C" unsigned long g_00641f7c;
extern "C" unsigned long g_00641f8c;
extern "C" unsigned long g_00641f90;
extern "C" unsigned long g_00641fb4;
extern "C" unsigned long g_00641fb8;
extern "C" unsigned long g_00641fe0;
extern "C" unsigned long g_00641fe4;
extern "C" unsigned long g_00642084;
extern "C" unsigned long g_00642086;
extern "C" unsigned long g_006420a4;
extern "C" unsigned long g_006420a8;
extern "C" unsigned long g_006420be;
extern "C" unsigned long g_006420c0;
extern "C" unsigned long g_006420d4;
extern "C" unsigned long g_006420d8;
extern "C" unsigned long g_006420ee;
extern "C" unsigned long g_006420f0;
extern "C" unsigned long g_00642104;
extern "C" unsigned long g_00642108;
extern "C" unsigned long g_00642114;
extern "C" unsigned long g_0064211c;
extern "C" unsigned long g_00642140;
extern "C" unsigned long g_00642144;
extern "C" unsigned long g_00642164;
extern "C" unsigned long g_00642168;
extern "C" unsigned long g_0064216c;
extern "C" unsigned long g_00642170;
extern "C" unsigned long g_00642174;
extern "C" unsigned long g_00642184;
extern "C" unsigned long g_00642188;
extern "C" unsigned long g_0064219c;
extern "C" unsigned long g_006421dc;
extern "C" unsigned long g_00642200;
extern "C" unsigned long g_00642202;
extern "C" unsigned long g_0064221a;
extern "C" unsigned long g_0064221c;
extern "C" unsigned long g_00642234;
extern "C" unsigned long g_00642238;
extern "C" unsigned long g_0064225c;
extern "C" unsigned long g_00642260;
extern "C" unsigned long g_00642264;
extern "C" unsigned long g_00642268;
extern "C" unsigned long g_0064226c;
extern "C" unsigned long g_00642270;
extern "C" unsigned long g_00642274;
extern "C" unsigned long g_00642278;
extern "C" unsigned long g_006422f0;
extern "C" unsigned long g_00642348;
bool BLRankRewardMainPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLRankRewardMainPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLRankRewardMainPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLRankRewardMainPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLRankRewardMainPresenter::initComplete(BLTableView* p1)
{
  return;
}

void BLRankRewardMainPresenter::touchItemAtIndex(BLTableView* p1, cocos2d::CCNode* p2, int p3)
{
  return;
}

BLRankRewardMainPresenter::~BLRankRewardMainPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_00641f20 + g_00641f78);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x50;
  *(int *)((int)this + 4*(6)) = iVar2 + 0x80;
  *(int *)((int)this + 4*(7)) = iVar2 + 0x90;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00641f46 + g_00641f7c,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLRankRewardMainPresenter::onRefreshRankInfo()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((BLRankRewardMainView *)*(undefined4 *)(((int)this) + 0x20))->getTableView());
  ((BLTableView *)uVar1)->reloadData(0, 1);
  return;
}

undefined4 BLRankRewardMainPresenter::sizeOfCellItem(BLTableView* p1)
{
  0 /* ctorZero */;
  return ((int)this);
}


void BLRankRewardMainPresenter::onClose(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(0xdc);
  return;
}

void BLRankRewardMainPresenter::tick(float p1)
{
  int iVar1;
  int *piVar2;
  
  if ((*(int *)(((int)this) + 0x24) != 0) &&
     (iVar1 = func_0079e55c(*(int *)(((int)this) + 0x24),
                              *(undefined4 *)(&g_00642084 + g_006420a8),
                              *(undefined4 *)(&g_00642086 + g_006420a4),0), iVar1 != 0)) {
    piVar2 = (int *)((BLRankRewardItemView *)this)->getPresenter();
    (**(code **)(*piVar2 + 0x194))(piVar2,p1);
  }
  return;
}

void BLRankRewardMainPresenter::onGetReward()
{
  undefined4 p4 = 0;

  int iVar1;
  
  if ((*(int *)(((int)this) + 0x24) != 0) &&
     (iVar1 = func_0079e55c(*(int *)(((int)this) + 0x24),
                              *(undefined4 *)(&g_006420be + g_006420d4),
                              *(undefined4 *)(&g_006420c0 + g_006420d8),0,p4), iVar1 != 0)
     ) {
    ((BLRankRewardItemView *)this)->getPresenter();
    ((BLRankRewardItemPresenter *)this)->onGetReward();
  }
  return;
}

void BLRankRewardMainPresenter::onGetRewardFail()
{
  undefined4 p4 = 0;

  int iVar1;
  
  if ((*(int *)(((int)this) + 0x24) != 0) &&
     (iVar1 = func_0079e55c(*(int *)(((int)this) + 0x24),
                              *(undefined4 *)(&g_006420ee + g_00642104),
                              *(undefined4 *)(&g_006420f0 + g_00642108),0,p4), iVar1 != 0)
     ) {
    ((BLRankRewardItemView *)this)->getPresenter();
    ((BLRankRewardItemPresenter *)this)->onGetRewardFail();
  }
  return;
}

int BLRankRewardMainPresenter::numOfCellItem(BLTableView* p1)
{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = *(int **)(&g_00642114 + g_00642164);
  iVar3 = *(int *)(&g_0064211c + g_00642168);
  if ((-1 < *piVar1 << 0x1f) && (iVar2 = func_0079e33c(), iVar2 != 0)) {
    0 /* ctorZero */;
    func_0079e38c(piVar1);
    func_0079e39c(iVar3,*(undefined4 *)(&g_00642140 + g_0064216c),
                    &g_00642144 + g_00642170);
  }
  return g_00642174 * (*(int *)(iVar3 + 0x150) - *(int *)(iVar3 + 0x14c) >> 3) + 1;
}


undefined4 BLRankRewardMainPresenter::create(BLRankRewardMainView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x28))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLRankRewardMainPresenter::onEnter()
{
  return;
}

void BLRankRewardMainPresenter::onExit()
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

void BLRankRewardMainPresenter::initWithView(BLRankRewardMainView* p1)
{
  int *piVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(((int)this) + 0x20) = (undefined4)(intptr_t)p1;
  piVar1 = (int *)((BLRankRewardMainView *)p1)->getBtnClose();
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)(&g_006422f0 + g_00642348),0,0x20,p1,
             *(undefined4 *)(&g_006422f0 + g_00642348),0);
  piVar1 = (int *)((BLRankRewardMainView *)*(undefined4 *)(((int)this) + 0x20))->getTableView();
  (**(code **)(*piVar1 + 0x21c))(piVar1,((int)this) + 0x18);
  piVar1 = (int *)((BLRankRewardMainView *)*(undefined4 *)(((int)this) + 0x20))->getTableView();
  (**(code **)(*piVar1 + 0x214))(piVar1,((int)this) + 0x1c);
  piVar1 = (int *)((BLRankRewardMainView *)*(undefined4 *)(((int)this) + 0x20))->getTableView();
  (**(code **)(*piVar1 + 0x22c))(piVar1,1);
  uVar2 = (undefined4)(((BLRankRewardMainView *)*(undefined4 *)(((int)this) + 0x20))->getTableView());
  ((BLTableView *)uVar2)->reloadData(0, 1);
  return;
}

// ===== 修复: 补回被误删的函数占位 (2) =====
void BLRankRewardMainPresenter::nodeOfCellItemAtIndex(BLTableView* p1, cocos2d::CCNode* p2, int p3)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

BLRankRewardMainPresenter::BLRankRewardMainPresenter()
{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_34 [20];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  0 /* ctorZero */;
  iVar3 = (undefined4)(intptr_t)(*(int *)((unsigned char *)((char *)&g_0064219c + (intptr_t)(g_0064225c))));
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x50;
  *(int *)((int)this + 4*(6)) = iVar3 + 0x80;
  *(int *)((int)this + 4*(7)) = iVar3 + 0x90;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x40)))());
  ((cocos2d::CCTouchDispatcher *)(uVar2))->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 1);
  *(int *)((int)this + 4*(9)) = 0;
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(auStack_34,(unsigned char *)((char *)&g_006421dc + (intptr_t)(g_00642260)),&uStack_20);
  ((BLLeakUtils *)(uVar2))->addClass((std::string)(char*)auStack_34);
  func_0079e2bc(auStack_34);
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)(((int)this)))->addObserver((cocos2d::CCObject*)*(undefined4 *)((unsigned char *)((char *)&g_00642200 + (intptr_t)(g_00642264))), 0, (char const*)(unsigned char *)((char *)&g_00642202 + (intptr_t)(g_00642268)), 0);
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)(((int)this)))->addObserver((cocos2d::CCObject*)*(undefined4 *)((unsigned char *)((char *)&g_0064221a + (intptr_t)(g_0064226c))), 0, (char const*)(unsigned char *)((char *)&g_0064221c + (intptr_t)(g_00642270)), 0);
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  uStack_1c = (undefined4)(0);
  uStack_20 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_00642234 + (intptr_t)(g_00642274))));
  ((cocos2d::CCNotificationCenter *)(((int)this)))->addObserver((cocos2d::CCObject*)uStack_20, 0, (char const*)(unsigned char *)((char *)&g_00642238 + (intptr_t)(g_00642278)), 0);
  return;
}
