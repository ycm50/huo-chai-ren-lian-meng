#include "BLDailySignPresenter.h"
#include "BLDailySignItemPresenter.h"
#include "BLDailySignItemView.h"
#include "BLDailySignView.h"
#include "BLLeakUtils.h"
#include "BLTableView.h"
#include "DailySignData.h"
#include "DataManager.h"
#include "UIManager.h"
#include "UserData.h"
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
extern "C" long long func_0079e5bc(...);
extern "C" long long func_0079e784(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0052446c;
extern "C" unsigned long UNK_00524484;
extern "C" unsigned long UNK_0052449c;
extern "C" unsigned long UNK_005244cc;
extern "C" unsigned long UNK_0052453c;
extern "C" unsigned long UNK_00524570;
extern "C" unsigned long UNK_005245b4;
extern "C" unsigned long UNK_005245dc;
extern "C" unsigned long UNK_00524618;
extern "C" unsigned long UNK_0052469a;
extern "C" unsigned long UNK_005246dc;
extern "C" unsigned long UNK_00524736;
extern "C" unsigned long UNK_0052476e;
extern "C" unsigned long UNK_0052485e;
extern "C" unsigned long UNK_00524916;
extern "C" unsigned long UNK_00524922;
extern "C" unsigned long UNK_0052497a;
extern "C" unsigned long UNK_0052497e;
extern "C" unsigned long UNK_00524aac;
extern "C" unsigned long _UNK_00524470;
extern "C" unsigned long _UNK_00524488;
extern "C" unsigned long _UNK_005244a0;
extern "C" unsigned long _UNK_005244d0;
extern "C" unsigned long _UNK_005245a0;
extern "C" unsigned long _UNK_005245a4;
extern "C" unsigned long _UNK_005245b8;
extern "C" unsigned long _UNK_005245e0;
extern "C" unsigned long _UNK_00524604;
extern "C" unsigned long _UNK_00524608;
extern "C" unsigned long _UNK_0052461c;
extern "C" unsigned long _UNK_0052470c;
extern "C" unsigned long _UNK_00524710;
extern "C" unsigned long _UNK_00524744;
extern "C" unsigned long _UNK_00524804;
extern "C" unsigned long _UNK_00524930;
extern "C" unsigned long _UNK_00524934;
extern "C" unsigned long _UNK_00524938;
extern "C" unsigned long _UNK_00524b5c;
extern "C" unsigned long _UNK_00524b60;
extern "C" unsigned long _UNK_00524b64;
extern "C" unsigned long _UNK_00524b68;
extern "C" unsigned long extraout_r2;
extern "C" unsigned long extraout_r3;
extern "C" unsigned long g_0052446c;
extern "C" unsigned long g_00524470;
extern "C" unsigned long g_00524484;
extern "C" unsigned long g_00524488;
extern "C" unsigned long g_0052449c;
extern "C" unsigned long g_005244a0;
extern "C" unsigned long g_005244cc;
extern "C" unsigned long g_005244d0;
extern "C" unsigned long g_0052453c;
extern "C" unsigned long g_00524570;
extern "C" unsigned long g_005245a0;
extern "C" unsigned long g_005245a4;
extern "C" unsigned long g_005245b4;
extern "C" unsigned long g_005245b8;
extern "C" unsigned long g_005245dc;
extern "C" unsigned long g_005245e0;
extern "C" unsigned long g_00524604;
extern "C" unsigned long g_00524608;
extern "C" unsigned long g_00524618;
extern "C" unsigned long g_0052461c;
extern "C" unsigned long g_0052469a;
extern "C" unsigned long g_005246dc;
extern "C" unsigned long g_0052470c;
extern "C" unsigned long g_00524710;
extern "C" unsigned long g_00524736;
extern "C" unsigned long g_00524744;
extern "C" unsigned long g_0052476e;
extern "C" unsigned long g_00524804;
extern "C" unsigned long g_0052485e;
extern "C" unsigned long g_00524916;
extern "C" unsigned long g_00524922;
extern "C" unsigned long g_00524930;
extern "C" unsigned long g_00524934;
extern "C" unsigned long g_00524938;
extern "C" unsigned long g_0052497a;
extern "C" unsigned long g_0052497e;
extern "C" unsigned long g_00524aac;
extern "C" unsigned long g_00524b5c;
extern "C" unsigned long g_00524b60;
extern "C" unsigned long g_00524b64;
extern "C" unsigned long g_00524b68;
bool BLDailySignPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLDailySignPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLDailySignPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLDailySignPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

undefined4 BLDailySignPresenter::numOfCellItem(BLTableView* p1)
{
  return 7;
}

void BLDailySignPresenter::touchItemAtIndex(BLTableView* p1, cocos2d::CCNode* p2, int p3)
{
  return;
}

BLDailySignPresenter::~BLDailySignPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0052453c + g_005245a0);
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
  func_0079e45c(&uStack_14,&g_00524570 + g_005245a4,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLDailySignPresenter::onClose(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(0x66);
  return;
}

undefined4 BLDailySignPresenter::sizeOfCellItem(BLTableView* p1)
{
  0 /* ctorZero */;
  return ((int)this);
}

void BLDailySignPresenter::tick(float p1)
{
  undefined4 p4 = 0;

  int iVar1;
  int *piVar2;
  undefined4 extraout_r2;
  code *pcVar3;
  
  ((BLDailySignView *)*(undefined4 *)(((int)this) + 0x20))->getTableView();
  iVar1 = ((BLTableView *)this)->isScrollMax();
  if (iVar1 == 0) {
    ((BLDailySignView *)*(undefined4 *)(((int)this) + 0x20))->getTableView();
    iVar1 = ((BLTableView *)this)->isScrollMin();
    if (iVar1 == 0) {
      piVar2 = (int *)((BLDailySignView *)*(undefined4 *)(((int)this) + 0x20))->getm_pright();
      pcVar3 = *(code **)(*piVar2 + 0x90);
    }
    else {
      piVar2 = (int *)((BLDailySignView *)*(undefined4 *)(((int)this) + 0x20))->getm_pright();
      pcVar3 = *(code **)(*piVar2 + 0x90);
    }
    (*pcVar3)(piVar2,iVar1 == 0);
    piVar2 = (int *)((BLDailySignView *)*(undefined4 *)(((int)this) + 0x20))->getm_pleft();
  }
  else {
    piVar2 = (int *)((BLDailySignView *)this)->getm_pleft();
    (**(code **)(*piVar2 + 0x90))(piVar2,0,extraout_r2,*(code **)(*piVar2 + 0x90),p4);
    piVar2 = (int *)((BLDailySignView *)*(undefined4 *)(((int)this) + 0x20))->getm_pright();
  }
  (**(code **)(*piVar2 + 0x90))(piVar2,1);
  return;
}

BLDailySignPresenter::BLDailySignPresenter()
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
  iVar3 = *(int *)(&g_0052469a + g_0052470c);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x4c;
  *(int *)((int)this + 4*(6)) = iVar3 + 0x7c;
  *(int *)((int)this + 4*(7)) = iVar3 + 0x8c;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 1);
  ((UIManager *)this)->shareManager();
  ((UIManager *)this)->pushCurScrollViewUnEnable();
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005246dc + g_00524710,&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  *(int *)((int)this + 4*(9)) = 0;
  return;
}

void BLDailySignPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar2)->removeObserver((cocos2d::CCObject*)((int)this), (char const*)&g_00524736 + g_00524744);
  ((UIManager *)this)->shareManager();
  ((UIManager *)this)->popUnEnableScrollView();
  return;
}

void BLDailySignPresenter::onEnter()
{
  return;
}


void BLDailySignPresenter::onRight(cocos2d::CCObject* p1, unsigned int p2)
{
  return;
}

void BLDailySignPresenter::onLeft(cocos2d::CCObject* p1, unsigned int p2)
{
  return;
}


undefined4 BLDailySignPresenter::create(BLDailySignView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x28))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  ((BLDailySignPresenter *)uVar1)->initDailySignData();
  return uVar1;
}

// ===== 修复: 补回被误删的函数占位 (3) =====
void BLDailySignPresenter::initWithView(BLDailySignView* p1)
{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  code *pcVar4;
  undefined1 auStack_28 [8];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  *(undefined4 *)(((int)this) + 0x20) = (undefined4)(intptr_t)p1;
  piVar1 = (int *)((BLDailySignView *)p1)->getBtnClose();
  uStack_20 = (undefined4)(*(undefined4 *)(&g_0052476e + g_00524804));
  uStack_1c = (undefined4)(0);
  (**(code **)(*piVar1 + 0x254))(piVar1,((int)this),uStack_20,0,0x20);
  piVar1 = (int *)((BLDailySignView *)*(undefined4 *)(((int)this) + 0x20))->getBtnClose();
  pcVar4 = *(code **)(*piVar1 + 0x28c);
  piVar2 = (int *)((BLDailySignView *)*(undefined4 *)(((int)this) + 0x20))->getBtnClose();
  piVar2 = (int *)(**(code **)(*piVar2 + 0x308))(piVar2,1);
  (**(code **)(*piVar2 + 0x1cc))(auStack_28,piVar2);
  (*pcVar4)(piVar1,auStack_28);
  piVar1 = (int *)((BLDailySignView *)*(undefined4 *)(((int)this) + 0x20))->getTableView();
  (**(code **)(*piVar1 + 0x21c))(piVar1,((int)this) + 0x18);
  piVar1 = (int *)((BLDailySignView *)*(undefined4 *)(((int)this) + 0x20))->getTableView();
  (**(code **)(*piVar1 + 0x214))(piVar1,((int)this) + 0x1c);
  piVar1 = (int *)((BLDailySignView *)*(undefined4 *)(((int)this) + 0x20))->getTableView();
  (**(code **)(*piVar1 + 0x22c))(piVar1,0);
  uVar3 = (undefined4)(((BLDailySignView *)*(undefined4 *)(((int)this) + 0x20))->getTableView());
  ((BLTableView *)uVar3)->reloadData(0, 1);
  return;
}

void BLDailySignPresenter::initDailySignData()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLDailySignPresenter::nodeOfCellItemAtIndex(BLTableView* p1, cocos2d::CCNode* p2, int p3)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
