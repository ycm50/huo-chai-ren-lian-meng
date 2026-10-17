#include "BLFightRecordPresenter.h"
#include "CCNotificationCenter.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "CCObject.h"
#include "CCNode.h"
#include "CCTouch.h"
#include "CCDirector.h"
#include "BLFightRecordItemPresenter.h"
#include "BLFightRecordItemView.h"
#include "BLFightRecordView.h"
#include "BLGameScene.h"
#include "BLLeakUtils.h"
#include "BLTableView.h"
#include "BLVideoPlayer.h"
#include "CircusData.h"
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
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_004c038c;
extern "C" unsigned long UNK_004c03a4;
extern "C" unsigned long UNK_004c03bc;
extern "C" unsigned long UNK_004c0448;
extern "C" unsigned long UNK_004c046e;
extern "C" unsigned long UNK_004c04b4;
extern "C" unsigned long UNK_004c04dc;
extern "C" unsigned long UNK_004c0534;
extern "C" unsigned long UNK_004c0538;
extern "C" unsigned long UNK_004c05e4;
extern "C" unsigned long UNK_004c0700;
extern "C" unsigned long UNK_004c073c;
extern "C" unsigned long UNK_004c073e;
extern "C" unsigned long UNK_004c0754;
extern "C" unsigned long UNK_004c0800;
extern "C" unsigned long _UNK_004c0390;
extern "C" unsigned long _UNK_004c03a8;
extern "C" unsigned long _UNK_004c03c0;
extern "C" unsigned long _UNK_004c04a0;
extern "C" unsigned long _UNK_004c04a4;
extern "C" unsigned long _UNK_004c04b8;
extern "C" unsigned long _UNK_004c04e0;
extern "C" unsigned long _UNK_004c04f4;
extern "C" unsigned long _UNK_004c04f8;
extern "C" unsigned long _UNK_004c05b4;
extern "C" unsigned long _UNK_004c05b8;
extern "C" unsigned long _UNK_004c05e8;
extern "C" unsigned long _UNK_004c0780;
extern "C" unsigned long _UNK_004c0784;
extern "C" unsigned long _UNK_004c0788;
extern "C" unsigned long _UNK_004c078c;
extern "C" unsigned long _UNK_004c0858;
extern "C" unsigned long g_004c038c;
extern "C" unsigned long g_004c0390;
extern "C" unsigned long g_004c03a4;
extern "C" unsigned long g_004c03a8;
extern "C" unsigned long g_004c03bc;
extern "C" unsigned long g_004c03c0;
extern "C" unsigned long g_004c0448;
extern "C" unsigned long g_004c046e;
extern "C" unsigned long g_004c04a0;
extern "C" unsigned long g_004c04a4;
extern "C" unsigned long g_004c04b4;
extern "C" unsigned long g_004c04b8;
extern "C" unsigned long g_004c04dc;
extern "C" unsigned long g_004c04e0;
extern "C" unsigned long g_004c04f4;
extern "C" unsigned long g_004c04f8;
extern "C" unsigned long g_004c0534;
extern "C" unsigned long g_004c0538;
extern "C" unsigned long g_004c05b4;
extern "C" unsigned long g_004c05b8;
extern "C" unsigned long g_004c05e4;
extern "C" unsigned long g_004c05e8;
extern "C" unsigned long g_004c0700;
extern "C" unsigned long g_004c073c;
extern "C" unsigned long g_004c073e;
extern "C" unsigned long g_004c0754;
extern "C" unsigned long g_004c0780;
extern "C" unsigned long g_004c0784;
extern "C" unsigned long g_004c0788;
extern "C" unsigned long g_004c078c;
extern "C" unsigned long g_004c0800;
extern "C" unsigned long g_004c0858;
bool BLFightRecordPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLFightRecordPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLFightRecordPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLFightRecordPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLFightRecordPresenter::touchItemAtIndex(BLTableView* p1, cocos2d::CCNode* p2, int p3)
{
  return;
}

void BLFightRecordPresenter::tick(float p1)
{
  return;
}

BLFightRecordPresenter::~BLFightRecordPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_004c0448 + g_004c04a0);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x4c;
  *(int *)((int)this + 4*(6)) = iVar2 + 0x7c;
  *(int *)((int)this + 4*(7)) = iVar2 + 0x8c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_004c046e + g_004c04a4,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

undefined4 BLFightRecordPresenter::sizeOfCellItem(BLTableView* p1)
{
  0 /* ctorZero */;
  return ((int)this);
}

void BLFightRecordPresenter::onClose(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(0xc9);
  return;
}


int BLFightRecordPresenter::numOfCellItem(BLTableView* p1)
{
  int iVar1;
  
  iVar1 = ((CircusData *)this)->getMe();
  return *(int *)(iVar1 + 0x120) - *(int *)(iVar1 + 0x11c) >> 2;
}



undefined4 BLFightRecordPresenter::create(BLFightRecordView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x24))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLFightRecordPresenter::onEnter()
{
  return;
}

void BLFightRecordPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  ((UIManager *)this)->shareManager();
  ((UIManager *)this)->popUnEnableScrollView();
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar2)->removeAllObservers((cocos2d::CCObject*)((int)this));
  return;
}

// ===== 修复: 补回被误删的函数占位 (4) =====
void BLFightRecordPresenter::onDownloadZip(cocos2d::CCObject* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLFightRecordPresenter::nodeOfCellItemAtIndex(BLTableView* p1, cocos2d::CCNode* p2, int p3)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

BLFightRecordPresenter::BLFightRecordPresenter()
{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [12];
  
  0 /* ctorZero */;
  iVar3 = (undefined4)(intptr_t)(*(int *)((unsigned char *)((char *)&g_004c0700 + (intptr_t)(g_004c0780))));
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x4c;
  *(int *)((int)this + 4*(6)) = iVar3 + 0x7c;
  *(int *)((int)this + 4*(7)) = iVar3 + 0x8c;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x40)))());
  ((cocos2d::CCTouchDispatcher *)(uVar2))->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 1);
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)(((int)this)))->addObserver((cocos2d::CCObject*)*(undefined4 *)((unsigned char *)((char *)&g_004c073c + (intptr_t)(g_004c0784))), 0, (char const*)(unsigned char *)((char *)&g_004c073e + (intptr_t)(g_004c0788)), 0);
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(auStack_1c,(unsigned char *)((char *)&g_004c0754 + (intptr_t)(g_004c078c)),auStack_20);
  ((BLLeakUtils *)(uVar2))->addClass((std::string)(char*)auStack_1c);
  func_0079e2bc(auStack_1c);
  return;
}

void BLFightRecordPresenter::initWithView(BLFightRecordView* p1)
{
  int *piVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(((int)this) + 0x20) = (undefined4)(intptr_t)p1;
  piVar1 = (int *)((BLFightRecordView *)p1)->getBtnClose();
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)(&g_004c0800 + g_004c0858),0,0x20,p1,
             *(undefined4 *)(&g_004c0800 + g_004c0858),0);
  piVar1 = (int *)((BLFightRecordView *)*(undefined4 *)(((int)this) + 0x20))->getTableView();
  (**(code **)(*piVar1 + 0x21c))(piVar1,((int)this) + 0x18);
  piVar1 = (int *)((BLFightRecordView *)*(undefined4 *)(((int)this) + 0x20))->getTableView();
  (**(code **)(*piVar1 + 0x214))(piVar1,((int)this) + 0x1c);
  piVar1 = (int *)((BLFightRecordView *)*(undefined4 *)(((int)this) + 0x20))->getTableView();
  (**(code **)(*piVar1 + 0x22c))(piVar1,1);
  uVar2 = (undefined4)(((BLFightRecordView *)*(undefined4 *)(((int)this) + 0x20))->getTableView());
  ((BLTableView *)uVar2)->reloadData(0, 1);
  return;
}
