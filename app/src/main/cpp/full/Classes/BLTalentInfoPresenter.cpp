#include "BLTalentInfoPresenter.h"
#include "CCNotificationCenter.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "CCObject.h"
#include "CCNode.h"
#include "CCTouch.h"
#include "CCString.h"
#include "CCDirector.h"
#include "ItemData.h"
#include "BLLeakUtils.h"
#include "BLTableView.h"
#include "BLTalentInfoItemPresenter.h"
#include "BLTalentInfoItemView.h"
#include "BLTalentInfoView.h"
#include "BackPackData.h"
#include "DataCacheManager.h"
#include "DataManager.h"
#include "MaterialData.h"
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
extern "C" long long func_0079e784(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0069f1fc;
extern "C" unsigned long UNK_0069f214;
extern "C" unsigned long UNK_0069f22c;
extern "C" unsigned long UNK_0069f2f0;
extern "C" unsigned long UNK_0069f316;
extern "C" unsigned long UNK_0069f35c;
extern "C" unsigned long UNK_0069f394;
extern "C" unsigned long UNK_0069f3d0;
extern "C" unsigned long UNK_0069f420;
extern "C" unsigned long UNK_0069f576;
extern "C" unsigned long UNK_0069f578;
extern "C" unsigned long UNK_0069f598;
extern "C" unsigned long UNK_0069f606;
extern "C" unsigned long UNK_0069f62a;
extern "C" unsigned long UNK_0069f6a4;
extern "C" unsigned long UNK_0069f776;
extern "C" unsigned long _UNK_0069f200;
extern "C" unsigned long _UNK_0069f218;
extern "C" unsigned long _UNK_0069f230;
extern "C" unsigned long _UNK_0069f348;
extern "C" unsigned long _UNK_0069f34c;
extern "C" unsigned long _UNK_0069f360;
extern "C" unsigned long _UNK_0069f398;
extern "C" unsigned long _UNK_0069f3bc;
extern "C" unsigned long _UNK_0069f3c0;
extern "C" unsigned long _UNK_0069f3d4;
extern "C" unsigned long _UNK_0069f424;
extern "C" unsigned long _UNK_0069f5d4;
extern "C" unsigned long _UNK_0069f5d8;
extern "C" unsigned long _UNK_0069f5dc;
extern "C" unsigned long _UNK_0069f654;
extern "C" unsigned long _UNK_0069f658;
extern "C" unsigned long _UNK_0069f6ac;
extern "C" unsigned long _UNK_0069f7e8;
extern "C" unsigned long extraout_r3;
extern "C" unsigned long g_0069f1fc;
extern "C" unsigned long g_0069f200;
extern "C" unsigned long g_0069f214;
extern "C" unsigned long g_0069f218;
extern "C" unsigned long g_0069f22c;
extern "C" unsigned long g_0069f230;
extern "C" unsigned long g_0069f2f0;
extern "C" unsigned long g_0069f316;
extern "C" unsigned long g_0069f348;
extern "C" unsigned long g_0069f34c;
extern "C" unsigned long g_0069f35c;
extern "C" unsigned long g_0069f360;
extern "C" unsigned long g_0069f394;
extern "C" unsigned long g_0069f398;
extern "C" unsigned long g_0069f3bc;
extern "C" unsigned long g_0069f3c0;
extern "C" unsigned long g_0069f3d0;
extern "C" unsigned long g_0069f3d4;
extern "C" unsigned long g_0069f420;
extern "C" unsigned long g_0069f424;
extern "C" unsigned long g_0069f576;
extern "C" unsigned long g_0069f578;
extern "C" unsigned long g_0069f598;
extern "C" unsigned long g_0069f5d4;
extern "C" unsigned long g_0069f5d8;
extern "C" unsigned long g_0069f5dc;
extern "C" unsigned long g_0069f606;
extern "C" unsigned long g_0069f62a;
extern "C" unsigned long g_0069f654;
extern "C" unsigned long g_0069f658;
extern "C" unsigned long g_0069f6a4;
extern "C" unsigned long g_0069f6ac;
extern "C" unsigned long g_0069f776;
extern "C" unsigned long g_0069f7e8;
bool BLTalentInfoPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLTalentInfoPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLTalentInfoPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLTalentInfoPresenter::touchItemAtIndex(BLTableView* p1, cocos2d::CCNode* p2, int p3)
{
  return;
}

BLTalentInfoPresenter::~BLTalentInfoPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0069f2f0 + g_0069f348);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x44;
  *(int *)((int)this + 4*(6)) = iVar2 + 0x74;
  *(int *)((int)this + 4*(7)) = iVar2 + 0x88;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0069f316 + g_0069f34c,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLTalentInfoPresenter::onClose(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(0xb0);
  return;
}

undefined4 BLTalentInfoPresenter::sizeOfCellItem(BLTableView* p1)
{
  0 /* ctorZero */;
  return ((int)this);
}



BLTalentInfoPresenter::BLTalentInfoPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_0069f606 + g_0069f654);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x44;
  *(int *)((int)this + 4*(6)) = iVar2 + 0x74;
  *(int *)((int)this + 4*(7)) = iVar2 + 0x88;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0069f62a + g_0069f658,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

undefined4 BLTalentInfoPresenter::create()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x28))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}



void BLTalentInfoPresenter::onEnter()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14, 1, 1);
  return;
}

void BLTalentInfoPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar2)->removeAllObservers((cocos2d::CCObject*)((int)this));
  ((UIManager *)this)->shareManager();
  ((UIManager *)this)->popUnEnableScrollView();
  return;
}

void BLTalentInfoPresenter::tick(float p1)
{
  return;
}

// ===== 修复: 补回被误删的函数占位 (4) =====
int BLTalentInfoPresenter::numOfCellItem(BLTableView* p1)
{
  int *piVar1;
  undefined4 uVar2;
  undefined1 auStack_1c [4];
  undefined1 auStack_18 [4];
  int iStack_14;
  int iStack_10;
  
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  uVar2 = (undefined4)((**(code **)(*(int *)(piVar1) + (400)))());
  ((MaterialData *)(uVar2))->getMaterialById(*(undefined4 *)(((int)this) + 0x24));
  if (iStack_14 != 0) {
    func_0079e2cc();
  }
  func_0079e2bc(auStack_18);
  return iStack_10 - iStack_14 >> 3;
}

void BLTalentInfoPresenter::nodeOfCellItemAtIndex(BLTableView* p1, cocos2d::CCNode* p2, int p3)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLTalentInfoPresenter::initWithView(BLTalentInfoView* p1)
{
  int *piVar1;
  
  *(undefined4 *)(((int)this) + 0x20) = (undefined4)(intptr_t)p1;
  piVar1 = (int *)((BLTalentInfoView *)p1)->getBtnClose();
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)(&g_0069f6a4 + g_0069f6ac),0,0x20);
  return;
}

void BLTalentInfoPresenter::initWithID(int p1)
{
  undefined4 uVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  code *pcVar5;
  undefined4 auStack_1c [2];
  
  *(undefined4 *)(((int)this) + 0x24) = p1;
  uVar1 = (undefined4)(((DataCacheManager *)this)->shareManager());
  piVar2 = ((void)((DataCacheManager *)(uVar1))->getItemDataByID(p1),(int *)0);
  piVar3 = (int *)((DataManager *)this)->shareDataManager();
  piVar3 = (int *)(**(code **)(*(int *)(piVar3) + (0x28)))();
  piVar3 = (int *)(**(code **)(*(int *)(piVar3) + (0x50)))();
  (**(code **)(*(int *)(piVar3) + (0x18)))();
  (**(code **)(*(int *)(piVar2) + (0x58)))(auStack_1c,piVar2);
  piVar3 = (int *)0 /* ctorZero */;
  func_0079e2bc(auStack_1c);
  piVar4 = (int *)((BLTalentInfoView *)(*(undefined4 *)(((int)this) + 0x20)))->getSprItem();
  pcVar5 = *(code **)(*piVar4 + 0x20c);
  uVar1 = (undefined4)((**(code **)(*(int *)(piVar3) + (0x214)))(piVar3));
  (*pcVar5)(piVar4,uVar1);
  piVar3 = (int *)((BLTalentInfoView *)(*(undefined4 *)(((int)this) + 0x20)))->getLabItemName();
  pcVar5 = *(code **)(*piVar3 + 0x234);
  (**(code **)(*(int *)(piVar2) + (0x20)))(auStack_1c,piVar2);
  (*pcVar5)(piVar3,auStack_1c[0]);
  func_0079e2bc(auStack_1c);
  piVar3 = (int *)((DataManager *)this)->shareDataManager();
  piVar3 = (int *)(**(code **)(*(int *)(piVar3) + (0x28)))();
  uVar1 = (undefined4)((**(code **)(*(int *)(piVar3) + (0x50)))());
  piVar2 = (int *)((BackPackData *)(uVar1))->getItemData((ItemData*)piVar2);
  uVar1 = (undefined4)(0);
  if (piVar2 != (int *)0x0) {
    uVar1 = (undefined4)((**(code **)(*(int *)(piVar2) + (0x28)))());
  }
  uVar1 = (undefined4)(cocos2d::CCString::createWithFormat((char const*)(unsigned char *)((char *)&g_0069f776 + (intptr_t)(g_0069f7e8)), uVar1));
  piVar2 = (int *)((BLTalentInfoView *)(*(undefined4 *)(((int)this) + 0x20)))->getLabNum();
  pcVar5 = *(code **)(*piVar2 + 0x234);
  uVar1 = (undefined4)(((cocos2d::CCString *)(uVar1))->getCString());
  (*pcVar5)(piVar2,uVar1);
  piVar2 = (int *)((BLTalentInfoView *)(*(undefined4 *)(((int)this) + 0x20)))->getTableView();
  (**(code **)(*(int *)(piVar2) + (0x22c)))(piVar2,1);
  piVar2 = (int *)((BLTalentInfoView *)(*(undefined4 *)(((int)this) + 0x20)))->getTableView();
  (**(code **)(*(int *)(piVar2) + (0x214)))(piVar2,((int)this) + 0x18);
  piVar2 = (int *)((BLTalentInfoView *)(*(undefined4 *)(((int)this) + 0x20)))->getTableView();
  (**(code **)(*(int *)(piVar2) + (0x21c)))(piVar2,((int)this) + 0x1c);
  uVar1 = (undefined4)(((BLTalentInfoView *)(*(undefined4 *)(((int)this) + 0x20)))->getTableView());
  ((BLTableView *)(uVar1))->reloadData(0, 1);
  return;
}
