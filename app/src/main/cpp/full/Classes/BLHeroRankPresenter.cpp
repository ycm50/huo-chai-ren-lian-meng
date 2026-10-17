#include "BLHeroRankPresenter.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "CCObject.h"
#include "CCNode.h"
#include "CCTouch.h"
#include "CCString.h"
#include "CCArray.h"
#include "CCDirector.h"
#include "BLHeroRankItemPresenter.h"
#include "BLHeroRankItemView.h"
#include "BLHeroRankView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLTableView.h"
#include "CircusData.h"
#include "CircusPlayerinfo.h"
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
extern "C" long long func_0079e48c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e5bc(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_00566d90;
extern "C" unsigned long UNK_00566da8;
extern "C" unsigned long UNK_00566dc0;
extern "C" unsigned long UNK_00566dd8;
extern "C" unsigned long UNK_00566df0;
extern "C" unsigned long UNK_00566e4c;
extern "C" unsigned long UNK_00566e80;
extern "C" unsigned long UNK_00566ec4;
extern "C" unsigned long UNK_00566eec;
extern "C" unsigned long UNK_00566f28;
extern "C" unsigned long UNK_005670f6;
extern "C" unsigned long UNK_00567142;
extern "C" unsigned long UNK_005671e4;
extern "C" unsigned long UNK_00567212;
extern "C" unsigned long UNK_0056735c;
extern "C" unsigned long _UNK_00566d94;
extern "C" unsigned long _UNK_00566dac;
extern "C" unsigned long _UNK_00566dc4;
extern "C" unsigned long _UNK_00566ddc;
extern "C" unsigned long _UNK_00566df4;
extern "C" unsigned long _UNK_00566eb0;
extern "C" unsigned long _UNK_00566eb4;
extern "C" unsigned long _UNK_00566ec8;
extern "C" unsigned long _UNK_00566ef0;
extern "C" unsigned long _UNK_00566f14;
extern "C" unsigned long _UNK_00566f18;
extern "C" unsigned long _UNK_00566f2c;
extern "C" unsigned long _UNK_005670c8;
extern "C" unsigned long _UNK_005670cc;
extern "C" unsigned long _UNK_005670d0;
extern "C" unsigned long _UNK_00567174;
extern "C" unsigned long _UNK_00567178;
extern "C" unsigned long _UNK_005672a0;
extern "C" unsigned long _UNK_005672a4;
extern "C" unsigned long _UNK_0056734c;
extern "C" unsigned long _UNK_00567360;
extern "C" unsigned long g_00566d90;
extern "C" unsigned long g_00566d94;
extern "C" unsigned long g_00566da8;
extern "C" unsigned long g_00566dac;
extern "C" unsigned long g_00566dc0;
extern "C" unsigned long g_00566dc4;
extern "C" unsigned long g_00566dd8;
extern "C" unsigned long g_00566ddc;
extern "C" unsigned long g_00566df0;
extern "C" unsigned long g_00566df4;
extern "C" unsigned long g_00566e4c;
extern "C" unsigned long g_00566e80;
extern "C" unsigned long g_00566eb0;
extern "C" unsigned long g_00566eb4;
extern "C" unsigned long g_00566ec4;
extern "C" unsigned long g_00566ec8;
extern "C" unsigned long g_00566eec;
extern "C" unsigned long g_00566ef0;
extern "C" unsigned long g_00566f14;
extern "C" unsigned long g_00566f18;
extern "C" unsigned long g_00566f28;
extern "C" unsigned long g_00566f2c;
extern "C" unsigned long g_005670c8;
extern "C" unsigned long g_005670cc;
extern "C" unsigned long g_005670d0;
extern "C" unsigned long g_005670f6;
extern "C" unsigned long g_00567142;
extern "C" unsigned long g_00567174;
extern "C" unsigned long g_00567178;
extern "C" unsigned long g_005671e4;
extern "C" unsigned long g_00567212;
extern "C" unsigned long g_005672a0;
extern "C" unsigned long g_005672a4;
extern "C" unsigned long g_0056734c;
extern "C" unsigned long g_0056735c;
extern "C" unsigned long g_00567360;
bool BLHeroRankPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLHeroRankPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLHeroRankPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLHeroRankPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLHeroRankPresenter::touchItemAtIndex(BLTableView* p1, cocos2d::CCNode* p2, int p3)
{
  return;
}

void BLHeroRankPresenter::tick(float p1)
{
  return;
}

BLHeroRankPresenter::~BLHeroRankPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_00566e4c + g_00566eb0);
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
  func_0079e45c(&uStack_14,&g_00566e80 + g_00566eb4,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLHeroRankPresenter::onClose(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(0x93);
  return;
}

undefined4 BLHeroRankPresenter::sizeOfCellItem(BLTableView* p1)
{
  0 /* ctorZero */;
  return ((int)this);
}



undefined4 BLHeroRankPresenter::create(BLHeroRankView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x28))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLHeroRankPresenter::onEnter()
{
  return;
}

void BLHeroRankPresenter::onExit()
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


int BLHeroRankPresenter::numOfCellItem(BLTableView* p1)
{
  int iVar1;
  int iVar2;
  int iVar3;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  
  iVar1 = ((CircusData *)this)->getMe();
  iVar3 = *(int *)(iVar1 + 0x144) - *(int *)(iVar1 + 0x140);
  iStack_24 = 0;
  iStack_20 = 0;
  iStack_1c = 0;
  iVar2 = 0;
  if (iVar3 >> 2 != 0) {
    if (g_0056734c < (uint)(iVar3 >> 2)) {
      func_0079e5bc();
    }
    iVar2 = ((long long)::operator new((size_t)(iVar3)));
  }
  iStack_1c = iVar2 + iVar3;
  iVar3 = *(int *)(iVar1 + 0x144);
  iStack_24 = iVar2;
  iStack_20 = iVar2;
  for (iVar1 = *(int *)(iVar1 + 0x140); iVar1 != iVar3; iVar1 = iVar1 + 4) {
    if (iVar2 != 0) {
      func_0079e53c(iVar2,iVar1);
    }
    iVar2 = iVar2 + 4;
  }
  iVar1 = iVar2 - iStack_24;
  iStack_20 = iVar2;
  ((std::vector<std::string, std::allocator<std::string>> *)&iStack_24)->~vector();
  return iVar1 >> 2;
}

// ===== 修复: 补回被误删的函数占位 (3) =====
void BLHeroRankPresenter::nodeOfCellItemAtIndex(BLTableView* p1, cocos2d::CCNode* p2, int p3)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

BLHeroRankPresenter::BLHeroRankPresenter()
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
  iVar3 = (undefined4)(intptr_t)(*(int *)((unsigned char *)((char *)&g_005670f6 + (intptr_t)(g_00567174))));
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
  func_0079e45c(&uStack_14,(unsigned char *)((char *)&g_00567142 + (intptr_t)(g_00567178)),&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

undefined4 BLHeroRankPresenter::initWithView(BLHeroRankView* p1)
{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  code *pcVar5;
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  *(undefined4 *)(((int)this) + 0x20) = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  piVar1 = (int *)((BLHeroRankView *)(p1))->getBtnClose();
  uStack_1c = (undefined4)(0);
  uStack_20 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_005671e4 + (intptr_t)(g_005672a0))));
  (**(code **)(*(int *)(piVar1) + (0x254)))(piVar1,((int)this),uStack_20,0,0x20);
  piVar1 = (int *)((BLHeroRankView *)(*(undefined4 *)(((int)this) + 0x20)))->getLabTitle();
  pcVar5 = *(code **)(*piVar1 + 0x234);
  uVar2 = (undefined4)(((BLLanguage *)this)->share());
  iVar3 = (undefined4)(intptr_t)(((CircusData *)this)->getMe());
  cocos2d::CCString::createWithFormat((char const*)(unsigned char *)((char *)&g_00567212 + (intptr_t)(g_005672a4)), *(undefined4 *)(iVar3 + 0x74));
  uVar4 = (undefined4)(((cocos2d::CCString *)this)->getCString());
  func_0079e45c(auStack_28,uVar4,auStack_2c);
  ((BLLanguage *)this)->getString(*(std::string *)(void *)&uStack_24);
  (*pcVar5)(piVar1,uStack_24);
  func_0079e2bc(&uStack_24);
  func_0079e2bc(auStack_28);
  piVar1 = (int *)((BLHeroRankView *)(*(undefined4 *)(((int)this) + 0x20)))->getTableViewTableView();
  (**(code **)(*(int *)(piVar1) + (0x21c)))(piVar1,((int)this) + 0x18);
  piVar1 = (int *)((BLHeroRankView *)(*(undefined4 *)(((int)this) + 0x20)))->getTableViewTableView();
  (**(code **)(*(int *)(piVar1) + (0x214)))(piVar1,((int)this) + 0x1c);
  piVar1 = (int *)((BLHeroRankView *)(*(undefined4 *)(((int)this) + 0x20)))->getTableViewTableView();
  (**(code **)(*(int *)(piVar1) + (0x22c)))(piVar1,1);
  uVar2 = (undefined4)(((BLHeroRankView *)(*(undefined4 *)(((int)this) + 0x20)))->getTableViewTableView());
  ((BLTableView *)(uVar2))->reloadData(0, 1);
  return 1;
}
