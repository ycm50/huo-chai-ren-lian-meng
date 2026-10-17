#include "PKHeroRankPresenter.h"
#include "BLLeakUtils.h"
#include "BLTableView.h"
#include "PKData.h"
#include "PKHeroRankItemPresenter.h"
#include "PKHeroRankItemView.h"
#include "PKHeroRankView.h"
#include "RankPlayerData.h"
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
extern "C" long long func_0079e784(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_00615110;
extern "C" unsigned long UNK_00615128;
extern "C" unsigned long UNK_00615140;
extern "C" unsigned long UNK_00615158;
extern "C" unsigned long UNK_00615170;
extern "C" unsigned long UNK_006151cc;
extern "C" unsigned long UNK_00615200;
extern "C" unsigned long UNK_00615244;
extern "C" unsigned long UNK_0061526c;
extern "C" unsigned long UNK_006152a4;
extern "C" unsigned long UNK_006152d0;
extern "C" unsigned long UNK_006152e6;
extern "C" unsigned long UNK_00615332;
extern "C" unsigned long UNK_006153d0;
extern "C" unsigned long UNK_006153ee;
extern "C" unsigned long UNK_00615528;
extern "C" unsigned long _UNK_00615114;
extern "C" unsigned long _UNK_0061512c;
extern "C" unsigned long _UNK_00615144;
extern "C" unsigned long _UNK_0061515c;
extern "C" unsigned long _UNK_00615174;
extern "C" unsigned long _UNK_00615230;
extern "C" unsigned long _UNK_00615234;
extern "C" unsigned long _UNK_00615248;
extern "C" unsigned long _UNK_00615270;
extern "C" unsigned long _UNK_00615284;
extern "C" unsigned long _UNK_006152a8;
extern "C" unsigned long _UNK_006152bc;
extern "C" unsigned long _UNK_006152c0;
extern "C" unsigned long _UNK_006152d4;
extern "C" unsigned long _UNK_00615364;
extern "C" unsigned long _UNK_00615368;
extern "C" unsigned long _UNK_0061543c;
extern "C" unsigned long _UNK_00615440;
extern "C" unsigned long _UNK_00615578;
extern "C" unsigned long extraout_r1;
extern "C" unsigned long g_00615110;
extern "C" unsigned long g_00615114;
extern "C" unsigned long g_00615128;
extern "C" unsigned long g_0061512c;
extern "C" unsigned long g_00615140;
extern "C" unsigned long g_00615144;
extern "C" unsigned long g_00615158;
extern "C" unsigned long g_0061515c;
extern "C" unsigned long g_00615170;
extern "C" unsigned long g_00615174;
extern "C" unsigned long g_006151cc;
extern "C" unsigned long g_00615200;
extern "C" unsigned long g_00615230;
extern "C" unsigned long g_00615234;
extern "C" unsigned long g_00615244;
extern "C" unsigned long g_00615248;
extern "C" unsigned long g_0061526c;
extern "C" unsigned long g_00615270;
extern "C" unsigned long g_00615284;
extern "C" unsigned long g_006152a4;
extern "C" unsigned long g_006152a8;
extern "C" unsigned long g_006152bc;
extern "C" unsigned long g_006152c0;
extern "C" unsigned long g_006152d0;
extern "C" unsigned long g_006152d4;
extern "C" unsigned long g_006152e6;
extern "C" unsigned long g_00615332;
extern "C" unsigned long g_00615364;
extern "C" unsigned long g_00615368;
extern "C" unsigned long g_006153d0;
extern "C" unsigned long g_006153ee;
extern "C" unsigned long g_0061543c;
extern "C" unsigned long g_00615440;
extern "C" unsigned long g_00615528;
extern "C" unsigned long g_00615578;
bool PKHeroRankPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void PKHeroRankPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void PKHeroRankPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void PKHeroRankPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void PKHeroRankPresenter::touchItemAtIndex(BLTableView* p1, cocos2d::CCNode* p2, int p3)
{
  return;
}

void PKHeroRankPresenter::tick(float p1)
{
  return;
}

PKHeroRankPresenter::~PKHeroRankPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_006151cc + g_00615230);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x4c;
  *(int *)((int)this + 4*(6)) = iVar2 + 0x7c;
  *(int *)((int)this + 4*(7)) = iVar2 + 0x8c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  if (*(int *)((int)this + 4*(9)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(9)) = 0;
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00615200 + g_00615234,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void PKHeroRankPresenter::onClose(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(g_00615284);
  return;
}

int PKHeroRankPresenter::numOfCellItem(BLTableView* p1)
{
  int iVar1;
  
  iVar1 = ((PKData *)this)->getIns();
  return *(int *)(iVar1 + 0x6c) - *(int *)(iVar1 + 0x68) >> 5;
}

undefined4 PKHeroRankPresenter::sizeOfCellItem(BLTableView* p1)
{
  0 /* ctorZero */;
  return ((int)this);
}


undefined4 PKHeroRankPresenter::create(PKHeroRankView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x28))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void PKHeroRankPresenter::onEnter()
{
  return;
}

void PKHeroRankPresenter::onExit()
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

undefined4 PKHeroRankPresenter::initWithView(PKHeroRankView* p1)
{
  int *piVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(((int)this) + 0x20) = (undefined4)(intptr_t)p1;
  piVar1 = (int *)((PKHeroRankView *)p1)->getBtnClose();
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)(&g_006153d0 + g_0061543c),0,0x20,p1,
             *(undefined4 *)(&g_006153d0 + g_0061543c),0);
  piVar1 = (int *)((PKHeroRankView *)*(undefined4 *)(((int)this) + 0x20))->getLabTitle();
  (**(code **)(*piVar1 + 0x234))(piVar1,&g_006153ee + g_00615440);
  piVar1 = (int *)((PKHeroRankView *)*(undefined4 *)(((int)this) + 0x20))->getTableViewTableView();
  (**(code **)(*piVar1 + 0x21c))(piVar1,((int)this) + 0x18);
  piVar1 = (int *)((PKHeroRankView *)*(undefined4 *)(((int)this) + 0x20))->getTableViewTableView();
  (**(code **)(*piVar1 + 0x214))(piVar1,((int)this) + 0x1c);
  piVar1 = (int *)((PKHeroRankView *)*(undefined4 *)(((int)this) + 0x20))->getTableViewTableView();
  (**(code **)(*piVar1 + 0x22c))(piVar1,1);
  uVar2 = (undefined4)(((PKHeroRankView *)*(undefined4 *)(((int)this) + 0x20))->getTableViewTableView());
  ((BLTableView *)uVar2)->reloadData(0, 1);
  return 1;
}

// ===== 修复: 补回被误删的函数占位 (2) =====
PKHeroRankPresenter::PKHeroRankPresenter()
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
  iVar3 = (undefined4)(intptr_t)(*(int *)((unsigned char *)((char *)&g_006152e6 + (intptr_t)(g_00615364))));
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x4c;
  *(int *)((int)this + 4*(6)) = iVar3 + 0x7c;
  *(int *)((int)this + 4*(7)) = iVar3 + 0x8c;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 1);
  ((UIManager *)this)->shareManager();
  ((UIManager *)this)->pushCurScrollViewUnEnable();
  iVar3 = (undefined4)(intptr_t)(cocos2d::CCArray::create());
  *(int *)((int)this + 4*(9)) = iVar3;
  if (iVar3 != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,(unsigned char *)((char *)&g_00615332 + (intptr_t)(g_00615368)),&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

void PKHeroRankPresenter::nodeOfCellItemAtIndex(BLTableView* p1, cocos2d::CCNode* p2, int p3)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
