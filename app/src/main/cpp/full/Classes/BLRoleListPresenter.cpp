#include "BLRoleListPresenter.h"
#include "CCNotificationCenter.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "CCArray.h"
#include "CCObject.h"
#include "CCNode.h"
#include "CCTouch.h"
#include "CCString.h"
#include "CCDirector.h"
#include "BLRoleListView.h"
#include "RoleData.h"
#include "RoleInfoItemData.h"
#include "BLLeakUtils.h"
#include "BLRoleTabItemPresenter.h"
#include "BLRoleTabItemView.h"
#include "BLTableView.h"
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
extern "C" long long software_udf(...);

extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0064e3fc;
extern "C" unsigned long UNK_0064e454;
extern "C" unsigned long UNK_0064e47a;
extern "C" unsigned long UNK_0064e4c0;
extern "C" unsigned long UNK_0064e4e8;
extern "C" unsigned long UNK_0064e514;
extern "C" unsigned long UNK_0064e540;
extern "C" unsigned long UNK_0064e55a;
extern "C" unsigned long UNK_0064e55e;
extern "C" unsigned long UNK_0064e594;
extern "C" unsigned long UNK_0064e596;
extern "C" unsigned long UNK_0064e630;
extern "C" unsigned long UNK_0064e632;
extern "C" unsigned long UNK_0064e662;
extern "C" unsigned long UNK_0064e682;
extern "C" unsigned long UNK_0064e6b8;
extern "C" unsigned long UNK_0064e6ce;
extern "C" unsigned long UNK_0064e6f2;
extern "C" unsigned long _UNK_0064e400;
extern "C" unsigned long _UNK_0064e4ac;
extern "C" unsigned long _UNK_0064e4b0;
extern "C" unsigned long _UNK_0064e4c4;
extern "C" unsigned long _UNK_0064e4ec;
extern "C" unsigned long _UNK_0064e518;
extern "C" unsigned long _UNK_0064e52c;
extern "C" unsigned long _UNK_0064e530;
extern "C" unsigned long _UNK_0064e544;
extern "C" unsigned long _UNK_0064e5e4;
extern "C" unsigned long _UNK_0064e5e8;
extern "C" unsigned long _UNK_0064e5ec;
extern "C" unsigned long _UNK_0064e5f0;
extern "C" unsigned long _UNK_0064e69c;
extern "C" unsigned long _UNK_0064e6a0;
extern "C" unsigned long _UNK_0064e6a4;
extern "C" unsigned long _UNK_0064e6a8;
extern "C" unsigned long _UNK_0064e6bc;
extern "C" unsigned long _UNK_0064e734;
extern "C" unsigned long _UNK_0064e738;
extern "C" unsigned long g_0064e3fc;
extern "C" unsigned long g_0064e400;
extern "C" unsigned long g_0064e454;
extern "C" unsigned long g_0064e47a;
extern "C" unsigned long g_0064e4ac;
extern "C" unsigned long g_0064e4b0;
extern "C" unsigned long g_0064e4c0;
extern "C" unsigned long g_0064e4c4;
extern "C" unsigned long g_0064e4e8;
extern "C" unsigned long g_0064e4ec;
extern "C" unsigned long g_0064e514;
extern "C" unsigned long g_0064e518;
extern "C" unsigned long g_0064e52c;
extern "C" unsigned long g_0064e530;
extern "C" unsigned long g_0064e540;
extern "C" unsigned long g_0064e544;
extern "C" unsigned long g_0064e55a;
extern "C" unsigned long g_0064e55e;
extern "C" unsigned long g_0064e594;
extern "C" unsigned long g_0064e596;
extern "C" unsigned long g_0064e5e4;
extern "C" unsigned long g_0064e5e8;
extern "C" unsigned long g_0064e5ec;
extern "C" unsigned long g_0064e5f0;
extern "C" unsigned long g_0064e630;
extern "C" unsigned long g_0064e632;
extern "C" unsigned long g_0064e662;
extern "C" unsigned long g_0064e682;
extern "C" unsigned long g_0064e69c;
extern "C" unsigned long g_0064e6a0;
extern "C" unsigned long g_0064e6a4;
extern "C" unsigned long g_0064e6a8;
extern "C" unsigned long g_0064e6b8;
extern "C" unsigned long g_0064e6bc;
extern "C" unsigned long g_0064e6ce;
extern "C" unsigned long g_0064e6f2;
extern "C" unsigned long g_0064e734;
extern "C" unsigned long g_0064e738;
bool BLRoleListPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

BLRoleListPresenter::~BLRoleListPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0064e454 + g_0064e4ac);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x3c;
  *(int *)((int)this + 4*(6)) = iVar2 + 0x6c;
  *(int *)((int)this + 4*(7)) = iVar2 + 0x80;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0064e47a + g_0064e4b0,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLRoleListPresenter::numOfCellItem(BLTableView* p1)
{
  int *piVar1;
  
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  piVar1 = (int *)(**(code **)(*piVar1 + 0x28))();
  (**(code **)(*piVar1 + 0x68))();
  ((cocos2d::CCArray *)this)->count();
  return;
}

undefined4 BLRoleListPresenter::sizeOfCellItem(BLTableView* p1)
{
  0 /* ctorZero */;
  return ((int)this);
}



BLRoleListPresenter::BLRoleListPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar3 = *(int *)(&g_0064e6ce + g_0064e734);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x3c;
  *(int *)((int)this + 4*(6)) = iVar3 + 0x6c;
  *(int *)((int)this + 4*(7)) = iVar3 + 0x80;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0064e6f2 + g_0064e738,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  piVar2 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar1 = (undefined4)((**(code **)(*piVar2 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar1)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 0);
  return;
}

undefined4 BLRoleListPresenter::create()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x24))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}


void BLRoleListPresenter::onEnter()
{
  return;
}

void BLRoleListPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  return;
}

// ===== 修复: 补回被误删的函数占位 (3) =====
void BLRoleListPresenter::nodeOfCellItemAtIndex(BLTableView* p1, cocos2d::CCNode* p2, int p3)
{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if (((int)(intptr_t)p2 == 0) ||
     (iVar1 = func_0079e55c(p2,*(undefined4 *)((unsigned char *)((char *)&g_0064e55e + (intptr_t)(g_0064e5e8))),
                              *(undefined4 *)((unsigned char *)((char *)&g_0064e55a + (intptr_t)(g_0064e5e4))),0,((int)this),p1,
                              p2), iVar1 == 0)) {
    iVar1 = (undefined4)(intptr_t)(((BLRoleTabItemView *)this)->create());
  }
  piVar2 = (int *)((DataManager *)this)->shareDataManager();
  piVar2 = (int *)(**(code **)(*piVar2 + 0x28))();
  uVar3 = (undefined4)((**(code **)(*piVar2 + 0x68))());
  iVar4 = (undefined4)(intptr_t)(((cocos2d::CCArray *)uVar3)->objectAtIndex((unsigned int)p3));
  if ((iVar4 != 0) &&
     (piVar2 = (int *)func_0079e55c(iVar4,*(undefined4 *)((unsigned char *)((char *)&g_0064e594 + (intptr_t)(g_0064e5ec))),
                                      *(undefined4 *)((unsigned char *)((char *)&g_0064e596 + (intptr_t)(g_0064e5f0))),0),
     piVar2 != (int *)0x0)) {
    uVar3 = (undefined4)(((BLRoleTabItemView *)iVar1)->getPresenter());
    uVar5 = (undefined4)((**(code **)(*piVar2 + 0x20))(piVar2));
    uVar6 = (undefined4)((**(code **)(*piVar2 + 0x18))(piVar2));
    ((BLRoleTabItemPresenter *)uVar3)->initWithData((RoleInfoItemData*)uVar5, (RoleData*)uVar6);
    if (p3 == 0) {
      uVar3 = (undefined4)(((BLRoleTabItemView *)iVar1)->getPresenter());
      uVar5 = (undefined4)((**(code **)(*piVar2 + 0x18))(piVar2));
      ((BLRoleTabItemPresenter *)uVar3)->onChangeRole((cocos2d::CCObject*)uVar5);
    }
  }
  return;
}

void BLRoleListPresenter::touchItemAtIndex(BLTableView* p1, cocos2d::CCNode* p2, int p3)
{
  code *pcVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 uStack_14;
  
  uStack_14 = (undefined4)(p1);
  piVar2 = (int *)((DataManager *)this)->shareDataManager();
  piVar2 = (int *)(**(code **)(*(int *)(piVar2) + (0x28)))();
  uVar3 = (undefined4)((**(code **)(*(int *)(piVar2) + (0x68)))());
  iVar4 = (undefined4)(intptr_t)(((cocos2d::CCArray *)(uVar3))->objectAtIndex((unsigned int)p3));
  if ((iVar4 != 0) &&
     (piVar2 = (int *)func_0079e55c(iVar4,*(undefined4 *)((unsigned char *)((char *)&g_0064e630 + (intptr_t)(g_0064e69c))),
                                      *(undefined4 *)((unsigned char *)((char *)&g_0064e632 + (intptr_t)(g_0064e6a0))),0),
     piVar2 != (int *)0x0)) {
    piVar5 = (int *)(**(code **)(*(int *)(piVar2) + (0x18)))();
    (**(code **)(*(int *)(piVar5) + (0x18)))(&uStack_14,piVar5);
    uVar3 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
    uVar6 = (undefined4)(cocos2d::CCString::create(*(std::string const*)&uStack_14));
    ((cocos2d::CCNotificationCenter *)(uVar3))->postNotification((char const*)(unsigned char *)((char *)&g_0064e662 + (intptr_t)(g_0064e6a4)), (cocos2d::CCObject*)uVar6);
    func_0079e2bc(&uStack_14);
    uVar3 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
    uVar6 = (undefined4)((**(code **)(*(int *)(piVar2) + (0x18)))(piVar2));
    ((cocos2d::CCNotificationCenter *)(uVar3))->postNotification((char const*)(unsigned char *)((char *)&g_0064e682 + (intptr_t)(g_0064e6a8)), (cocos2d::CCObject*)uVar6);
    return;
  }
  ((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter();
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xff,0x64e69a);
  (*pcVar1)();
}

void BLRoleListPresenter::initWithView(BLRoleListView* p1)
{
  int *piVar1;
  
  *(int *)(((int)this) + 0x20) = (undefined4)(intptr_t)p1;
  (**(code **)(**(int **)(p1 + 0x10c) + 0x214))(*(int **)(p1 + 0x10c),((int)this) + 0x18);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x20) + 0x10c);
  (**(code **)(*piVar1 + 0x21c))(piVar1,((int)this) + 0x1c);
  ((BLTableView *)*(undefined4 *)(*(int *)(((int)this) + 0x20) + 0x10c))->reloadData(0, 1);
  return;
}
