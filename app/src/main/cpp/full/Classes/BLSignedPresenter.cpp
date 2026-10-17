#include "BLSignedPresenter.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "CCObject.h"
#include "CCNode.h"
#include "CCTouch.h"
#include "CCDirector.h"
#include "BLLeakUtils.h"
#include "BLSignedItemPresenter.h"
#include "BLSignedItemView.h"
#include "BLSignedView.h"
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
extern "C" long long func_0079e2ec(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4ac(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e59c(...);
extern "C" long long func_0079e5bc(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_00688400;
extern "C" unsigned long UNK_00688418;
extern "C" unsigned long UNK_00688430;
extern "C" unsigned long UNK_00688448;
extern "C" unsigned long UNK_00688460;
extern "C" unsigned long UNK_00688478;
extern "C" unsigned long UNK_006884d4;
extern "C" unsigned long UNK_006884fa;
extern "C" unsigned long UNK_00688540;
extern "C" unsigned long UNK_00688568;
extern "C" unsigned long UNK_006885c8;
extern "C" unsigned long UNK_006885de;
extern "C" unsigned long UNK_00688620;
extern "C" unsigned long UNK_006886b6;
extern "C" unsigned long UNK_006886d6;
extern "C" unsigned long _UNK_00688404;
extern "C" unsigned long _UNK_0068841c;
extern "C" unsigned long _UNK_00688434;
extern "C" unsigned long _UNK_0068844c;
extern "C" unsigned long _UNK_00688464;
extern "C" unsigned long _UNK_0068847c;
extern "C" unsigned long _UNK_0068852c;
extern "C" unsigned long _UNK_00688530;
extern "C" unsigned long _UNK_00688544;
extern "C" unsigned long _UNK_0068856c;
extern "C" unsigned long _UNK_006885b4;
extern "C" unsigned long _UNK_006885b8;
extern "C" unsigned long _UNK_006885cc;
extern "C" unsigned long _UNK_0068864c;
extern "C" unsigned long _UNK_00688650;
extern "C" unsigned long _UNK_00688720;
extern "C" unsigned long _UNK_00688724;
extern "C" unsigned long _UNK_0068889c;
extern "C" unsigned long _UNK_006888a0;
extern "C" unsigned long _UNK_006888a4;
extern "C" unsigned long g_00688400;
extern "C" unsigned long g_00688404;
extern "C" unsigned long g_00688418;
extern "C" unsigned long g_0068841c;
extern "C" unsigned long g_00688430;
extern "C" unsigned long g_00688434;
extern "C" unsigned long g_00688448;
extern "C" unsigned long g_0068844c;
extern "C" unsigned long g_00688460;
extern "C" unsigned long g_00688464;
extern "C" unsigned long g_00688478;
extern "C" unsigned long g_0068847c;
extern "C" unsigned long g_006884d4;
extern "C" unsigned long g_006884fa;
extern "C" unsigned long g_0068852c;
extern "C" unsigned long g_00688530;
extern "C" unsigned long g_00688540;
extern "C" unsigned long g_00688544;
extern "C" unsigned long g_00688568;
extern "C" unsigned long g_0068856c;
extern "C" unsigned long g_006885b4;
extern "C" unsigned long g_006885b8;
extern "C" unsigned long g_006885c8;
extern "C" unsigned long g_006885cc;
extern "C" unsigned long g_006885de;
extern "C" unsigned long g_00688620;
extern "C" unsigned long g_0068864c;
extern "C" unsigned long g_00688650;
extern "C" unsigned long g_006886b6;
extern "C" unsigned long g_006886d6;
extern "C" unsigned long g_00688720;
extern "C" unsigned long g_00688724;
extern "C" unsigned long g_0068889c;
extern "C" unsigned long g_006888a0;
extern "C" unsigned long g_006888a4;
bool BLSignedPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLSignedPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLSignedPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLSignedPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

undefined4 BLSignedPresenter::numOfCellItem(BLTableView* p1)
{
  return 5;
}

void BLSignedPresenter::touchItemAtIndex(BLTableView* p1, cocos2d::CCNode* p2, int p3)
{
  return;
}

void BLSignedPresenter::tick(float p1)
{
  return;
}

BLSignedPresenter::~BLSignedPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_006884d4 + g_0068852c);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x4c;
  *(int *)((int)this + 4*(6)) = iVar2 + 0x7c;
  *(int *)((int)this + 4*(7)) = iVar2 + 0x8c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_006884fa + g_00688530,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}


void BLSignedPresenter::onAbout(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->showUIById(0xb7);
  return;
}

undefined4 BLSignedPresenter::sizeOfCellItem(BLTableView* p1)
{
  0 /* ctorZero */;
  return ((int)this);
}

BLSignedPresenter::BLSignedPresenter()
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
  iVar3 = *(int *)(&g_006885de + g_0068864c);
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
  func_0079e45c(&uStack_14,&g_00688620 + g_00688650,&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

undefined4 BLSignedPresenter::create(BLSignedView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x24))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLSignedPresenter::onExit()
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

void BLSignedPresenter::onEnter()
{
  return;
}

undefined4 BLSignedPresenter::initWithView(BLSignedView* p1)
{
  int *piVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(((int)this) + 0x20) = (undefined4)(intptr_t)p1;
  piVar1 = (int *)((BLSignedView *)p1)->getBtnClose();
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)(&g_006886b6 + g_00688720),0,0x20);
  piVar1 = (int *)((BLSignedView *)*(undefined4 *)(((int)this) + 0x20))->getBtnAbout();
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)(&g_006886d6 + g_00688724),0,0x20);
  piVar1 = (int *)((BLSignedView *)*(undefined4 *)(((int)this) + 0x20))->getTableView();
  (**(code **)(*piVar1 + 0x21c))(piVar1,((int)this) + 0x18);
  piVar1 = (int *)((BLSignedView *)*(undefined4 *)(((int)this) + 0x20))->getTableView();
  (**(code **)(*piVar1 + 0x214))(piVar1,((int)this) + 0x1c);
  uVar2 = (undefined4)(((BLSignedView *)*(undefined4 *)(((int)this) + 0x20))->getTableView());
  ((BLTableView *)uVar2)->reloadData(0, 1);
  return 1;
}

// ===== 修复: 补回被误删的函数占位 (2) =====
void BLSignedPresenter::onClose(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  iVar2 = (undefined4)((void)(((UIManager *)(uVar1))->getUIObject(0x1f)),(intptr_t)0);
  if (iVar2 != 0) {
    uVar1 = (undefined4)(((UIManager *)this)->shareManager());
    ((UIManager *)(uVar1))->removeUIByID(0x1f);
  }
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)(uVar1))->removeUIByID(0xb2);
  return;
}

void BLSignedPresenter::nodeOfCellItemAtIndex(BLTableView* p1, cocos2d::CCNode* p2, int p3)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
