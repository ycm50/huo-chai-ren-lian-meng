#include "BLSuitListPresenter.h"
#include "CCNotificationCenter.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "CCNode.h"
#include "CCObject.h"
#include "CCTouch.h"
#include "CCArray.h"
#include "CCDirector.h"
#include "BLSuitListView.h"
#include "BackPackItemData.h"
#include "BLGameScene.h"
#include "BLLeakUtils.h"
#include "BLSuitListItemPresenter.h"
#include "BLSuitListItemView.h"
#include "BLTableView.h"
#include "BackPackData.h"
#include "DataCacheManager.h"
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
extern "C" long long func_0079e55c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0068d8b4;
extern "C" unsigned long UNK_0068d8cc;
extern "C" unsigned long UNK_0068d8e4;
extern "C" unsigned long UNK_0068d8fc;
extern "C" unsigned long UNK_0068d968;
extern "C" unsigned long UNK_0068d98e;
extern "C" unsigned long UNK_0068d9e4;
extern "C" unsigned long UNK_0068da0c;
extern "C" unsigned long UNK_0068da26;
extern "C" unsigned long UNK_0068da40;
extern "C" unsigned long UNK_0068da6c;
extern "C" unsigned long UNK_0068da88;
extern "C" unsigned long UNK_0068da8a;
extern "C" unsigned long UNK_0068dab0;
extern "C" unsigned long UNK_0068dab2;
extern "C" unsigned long UNK_0068dafe;
extern "C" unsigned long UNK_0068db38;
extern "C" unsigned long UNK_0068dbdc;
extern "C" unsigned long UNK_0068dbde;
extern "C" unsigned long UNK_0068dc6a;
extern "C" unsigned long UNK_0068dc6e;
extern "C" unsigned long UNK_0068dcb2;
extern "C" unsigned long _UNK_0068d8b8;
extern "C" unsigned long _UNK_0068d8d0;
extern "C" unsigned long _UNK_0068d8e8;
extern "C" unsigned long _UNK_0068d900;
extern "C" unsigned long _UNK_0068d9d0;
extern "C" unsigned long _UNK_0068d9d4;
extern "C" unsigned long _UNK_0068d9e8;
extern "C" unsigned long _UNK_0068da10;
extern "C" unsigned long _UNK_0068da30;
extern "C" unsigned long _UNK_0068da44;
extern "C" unsigned long _UNK_0068da58;
extern "C" unsigned long _UNK_0068da5c;
extern "C" unsigned long _UNK_0068da70;
extern "C" unsigned long _UNK_0068dacc;
extern "C" unsigned long _UNK_0068dad0;
extern "C" unsigned long _UNK_0068dad4;
extern "C" unsigned long _UNK_0068dad8;
extern "C" unsigned long _UNK_0068db7c;
extern "C" unsigned long _UNK_0068db80;
extern "C" unsigned long _UNK_0068dbe8;
extern "C" unsigned long _UNK_0068dbec;
extern "C" unsigned long _UNK_0068dcf0;
extern "C" unsigned long _UNK_0068dcf4;
extern "C" unsigned long _UNK_0068dcf8;
extern "C" unsigned long g_0068d8b4;
extern "C" unsigned long g_0068d8b8;
extern "C" unsigned long g_0068d8cc;
extern "C" unsigned long g_0068d8d0;
extern "C" unsigned long g_0068d8e4;
extern "C" unsigned long g_0068d8e8;
extern "C" unsigned long g_0068d8fc;
extern "C" unsigned long g_0068d900;
extern "C" unsigned long g_0068d968;
extern "C" unsigned long g_0068d98e;
extern "C" unsigned long g_0068d9d0;
extern "C" unsigned long g_0068d9d4;
extern "C" unsigned long g_0068d9e4;
extern "C" unsigned long g_0068d9e8;
extern "C" unsigned long g_0068da0c;
extern "C" unsigned long g_0068da10;
extern "C" unsigned long g_0068da26;
extern "C" unsigned long g_0068da30;
extern "C" unsigned long g_0068da40;
extern "C" unsigned long g_0068da44;
extern "C" unsigned long g_0068da58;
extern "C" unsigned long g_0068da5c;
extern "C" unsigned long g_0068da6c;
extern "C" unsigned long g_0068da70;
extern "C" unsigned long g_0068da88;
extern "C" unsigned long g_0068da8a;
extern "C" unsigned long g_0068dab0;
extern "C" unsigned long g_0068dab2;
extern "C" unsigned long g_0068dacc;
extern "C" unsigned long g_0068dad0;
extern "C" unsigned long g_0068dad4;
extern "C" unsigned long g_0068dad8;
extern "C" unsigned long g_0068dafe;
extern "C" unsigned long g_0068db38;
extern "C" unsigned long g_0068db7c;
extern "C" unsigned long g_0068db80;
extern "C" unsigned long g_0068dbdc;
extern "C" unsigned long g_0068dbde;
extern "C" unsigned long g_0068dbe8;
extern "C" unsigned long g_0068dbec;
extern "C" unsigned long g_0068dc6a;
extern "C" unsigned long g_0068dc6e;
extern "C" unsigned long g_0068dcb2;
extern "C" unsigned long g_0068dcf0;
extern "C" unsigned long g_0068dcf4;
extern "C" unsigned long g_0068dcf8;
bool BLSuitListPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLSuitListPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLSuitListPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLSuitListPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

int BLSuitListPresenter::getIndex() const
{
  return *(undefined4 *)(((int)this) + 0x24);
}

void BLSuitListPresenter::setIndex(int p1)
{
  *(undefined4 *)(((int)this) + 0x24) = p1;
  return;
}

cocos2d::CCArray* BLSuitListPresenter::getArrayBackItems() const
{
  return (cocos2d::CCArray*)(*(undefined4 *)(((int)this) + 0x28));
}

void BLSuitListPresenter::setArrayBackItems(cocos2d::CCArray* p1)
{
  *(undefined4 *)(((int)this) + 0x28) = (undefined4)(intptr_t)p1;
  return;
}

void BLSuitListPresenter::touchItemAtIndex(BLTableView* p1, int p2)
{
  return;
}

void BLSuitListPresenter::tick(float p1)
{
  return;
}

BLSuitListPresenter::~BLSuitListPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0068d968 + g_0068d9d0);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x5c;
  *(int *)((int)this + 4*(6)) = iVar2 + 0x8c;
  *(int *)((int)this + 4*(7)) = iVar2 + 0x9c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0068d98e + g_0068d9d4,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  if (*(int *)((int)this + 4*(10)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(10)) = 0;
  }
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLSuitListPresenter::numOfCellItem(BLTableView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((cocos2d::CCArray *)*(undefined4 *)(((int)this) + 0x28))->count());
  cocos2d::CCLog((char const*)&g_0068da26 + g_0068da30, uVar1);
  ((cocos2d::CCArray *)*(undefined4 *)(((int)this) + 0x28))->count();
  return;
}

undefined4 BLSuitListPresenter::sizeOfCellItem(BLTableView* p1)
{
  0 /* ctorZero */;
  return ((int)this);
}


BLSuitListPresenter::BLSuitListPresenter()
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
  iVar3 = (undefined4)(intptr_t)(*(int *)((unsigned char *)((char *)&g_0068dafe + (intptr_t)(g_0068db7c))));
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x5c;
  *(int *)((int)this + 4*(6)) = iVar3 + 0x8c;
  *(int *)((int)this + 4*(7)) = iVar3 + 0x9c;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 0);
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,(unsigned char *)((char *)&g_0068db38 + (intptr_t)(g_0068db80)),&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  iVar3 = (undefined4)(intptr_t)(cocos2d::CCArray::create());
  *(int *)((int)this + 4*(10)) = iVar3;
  if (iVar3 != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  *(undefined1 *)(((int)this) + 0xb) = 1;
  return;
}

undefined4 BLSuitListPresenter::create(BLSuitListView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x30))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLSuitListPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar2)->removeAllObservers((cocos2d::CCObject*)((int)this));
  return;
}




void BLSuitListPresenter::initPageIndex()
{
  ((cocos2d::CCArray *)*(undefined4 *)(((int)this) + 0x28))->removeAllObjects();
  BLSuitListPresenter::initSuitList();
  ((BLTableView *)*(undefined4 *)(*(int *)(((int)this) + 0x20) + 0x10c))->reloadData(0, 1);
  ((BLGameScene *)this)->shareGameScene();
  ((BLGameScene *)this)->closeShieldLayer();
  return;
}

void BLSuitListPresenter::onPageChange(cocos2d::CCObject* p1)
{
  BLSuitListPresenter::initPageIndex();
  return;
}

// ===== 修复: 补回被误删的函数占位 (4) =====
void BLSuitListPresenter::nodeOfCellItemAtIndex(BLTableView* p1, cocos2d::CCNode* p2, int p3)
{
  int iVar1;
  int iVar2;
  
  if (((int)(intptr_t)p2 == 0) ||
     (iVar1 = func_0079e55c(p2,*(undefined4 *)((unsigned char *)((char *)&g_0068da88 + (intptr_t)(g_0068dacc))),
                              *(undefined4 *)((unsigned char *)((char *)&g_0068da8a + (intptr_t)(g_0068dad0))),0), iVar1 == 0)) {
    iVar1 = (undefined4)(intptr_t)(((BLSuitListItemView *)this)->create());
  }
  iVar2 = (undefined4)(intptr_t)(((cocos2d::CCArray *)*(undefined4 *)(((int)this) + 0x28))->objectAtIndex((unsigned int)p3));
  if ((iVar2 != 0) &&
     (iVar2 = func_0079e55c(iVar2,*(undefined4 *)((unsigned char *)((char *)&g_0068dab0 + (intptr_t)(g_0068dad4))),
                              *(undefined4 *)((unsigned char *)((char *)&g_0068dab2 + (intptr_t)(g_0068dad8))),0), iVar2 != 0)) {
    ((BLSuitListItemPresenter *)this)->initWithData((BackPackItemData*)*(undefined4 *)(iVar1 + 0x108));
  }
  return;
}

void BLSuitListPresenter::onEnter()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

undefined4 BLSuitListPresenter::initWithView(BLSuitListView* p1)
{
  int *piVar1;
  
  *(int *)(((int)this) + 0x20) = (undefined4)(intptr_t)p1;
  (**(code **)(**(int **)(p1 + 0x10c) + 0x21c))(*(int **)(p1 + 0x10c),((int)this) + 0x18);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x20) + 0x10c);
  (**(code **)(*piVar1 + 0x214))(piVar1,((int)this) + 0x1c);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x20) + 0x10c);
  (**(code **)(*piVar1 + 0x22c))(piVar1,1);
  return 1;
}

undefined8 BLSuitListPresenter::initSuitList()
{
  undefined4 p2 = 0;

  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  int iStack_20;
  undefined4 uStack_1c;
  
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  piVar1 = (int *)(**(code **)(*(int *)(piVar1) + (0x28)))();
  uVar2 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x68)))());
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  uVar3 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x68)))());
  iVar4 = (undefined4)(intptr_t)(((cocos2d::CCArray *)(uVar2))->objectAtIndex((unsigned int)uVar3));
  iStack_20 = (undefined4)(intptr_t)((int *)((int)this));
  uStack_1c = (undefined4)(p2);
  if (iVar4 != 0) {
    uStack_1c = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_0068dc6a + (intptr_t)(g_0068dcf0))));
    iVar4 = (undefined4)(intptr_t)(func_0079e55c(iVar4,uStack_1c,*(undefined4 *)((unsigned char *)((char *)&g_0068dc6e + (intptr_t)(g_0068dcf4))),0));
    if (iVar4 != 0) {
      piVar1 = (int *)((DataManager *)this)->shareDataManager();
      piVar1 = (int *)(**(code **)(*(int *)(piVar1) + (0x28)))();
      (**(code **)(*(int *)(piVar1) + (0x50)))();
      uVar2 = (undefined4)(((BackPackData *)this)->sortItems());
      for (uVar7 = 0; uVar5 = (undefined4)(intptr_t)(((cocos2d::CCArray *)(uVar2))->count(), uVar7 < uVar5); uVar7 = uVar7 + 1)
      {
        iVar4 = (undefined4)(intptr_t)(((cocos2d::CCArray *)(uVar2))->objectAtIndex((unsigned int)uVar7));
        if ((iVar4 != 0) &&
           (piVar1 = (int *)func_0079e55c(iVar4,uStack_1c,
                                            *(undefined4 *)((unsigned char *)((char *)&g_0068dcb2 + (intptr_t)(g_0068dcf8))),0),
           piVar1 != (int *)0x0)) {
          iStack_20 = (undefined4)(intptr_t)(((DataCacheManager *)this)->shareManager());
          uVar3 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x20)))(piVar1));
          piVar6 = ((void)((DataCacheManager *)(iStack_20))->getItemDataByID(uVar3),(int *)0);
          if ((piVar6 != (int *)0x0) && (iVar4 = (**(code **)(*(int *)(piVar6) + (0x30)))(), iVar4 == 8)) {
            ((cocos2d::CCArray *)(*(undefined4 *)(((int)this) + 0x28)))->addObject((cocos2d::CCObject*)piVar1);
          }
        }
      }
    }
  }
  return ghidra_CONCAT44(uStack_1c,iStack_20);
}
