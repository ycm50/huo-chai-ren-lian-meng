#include "BLEquipPresenter.h"
#include "BLEquipListPresenter.h"
#include "BLEquipListView.h"
#include "BLRoleInfoPresenter.h"
#include "BLRoleInfoView.h"
#include "UIManager.h"
#include "RoleData.h"
#include "RoleInfoItemData.h"
#include "BLRoleTabItemPresenter.h"
#include "BLRoleTabItemView.h"
#include "DataManager.h"
#include "BLEquipView.h"
#include "BLTableView.h"
#include "BLLeakUtils.h"
#include <new>   // ghost_fix.js 自动补齐
// 兜底声明
extern "C" unsigned long g_0067073a;
extern "C" unsigned long g_00670780;
extern "C" unsigned long g_0067073c;
extern "C" unsigned long g_00670784;
extern "C" unsigned long g_0067075c;
extern "C" unsigned long g_00670788;
extern "C" unsigned long g_0067062a;
extern "C" unsigned long g_0067069c;
extern "C" unsigned long g_0067066c;
extern "C" unsigned long g_006706a0;
extern "C" long long func_0079e55c(...);
extern "C" unsigned long g_00670572;
extern "C" unsigned long g_006705fc;
extern "C" unsigned long g_0067056e;
extern "C" unsigned long g_006705f8;
extern "C" unsigned long g_006705a8;
extern "C" unsigned long g_00670600;
extern "C" unsigned long g_006705aa;
extern "C" unsigned long g_00670604;
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e2bc(...);
extern "C" unsigned long g_00670468;
extern "C" unsigned long g_006704c0;
extern "C" unsigned long g_0067048e;
extern "C" unsigned long g_006704c4;
extern "C" long long func_0079e2fc(...);

// R14: 重置为纯占位形态(原恢复体存在编译错误, 待后续逐函数修复)

int BLEquipPresenter::getCurrentIndex() const
{
  return *(undefined4 *)(((int)this) + 0x24);
}

void BLEquipPresenter::setCurrentIndex(int p1)
{
  *(undefined4 *)(((int)this) + 0x24) = p1;
  return;
}

bool BLEquipPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLEquipPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLEquipPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLEquipPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLEquipPresenter::tick(float p1)
{
  return;
}

void BLEquipPresenter::initComplete(BLTableView* p1)
{
  return;
}

BLEquipPresenter::~BLEquipPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = (undefined4)(intptr_t)(*(int *)((unsigned char *)((char *)&g_00670468 + (intptr_t)(g_006704c0))));
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x58;
  *(int *)((int)this + 4*(6)) = iVar2 + 0x88;
  *(int *)((int)this + 4*(7)) = iVar2 + 0x98;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,(unsigned char *)((char *)&g_0067048e + (intptr_t)(g_006704c4)),&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLEquipPresenter::numOfCellItem(BLTableView* p1)
{
  int *piVar1;
  
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  piVar1 = (int *)(**(code **)(*piVar1 + 0x28))();
  (**(code **)(*piVar1 + 0x68))();
  ((cocos2d::CCArray *)this)->count();
  return;
}

undefined4 BLEquipPresenter::sizeOfCellItem(BLTableView* p1)
{
  0 /* ctorZero */;
  return ((int)this);
}

void BLEquipPresenter::nodeOfCellItemAtIndex(BLTableView* p1, cocos2d::CCNode* p2, int p3)
{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if (((int)(intptr_t)p2 == 0) ||
     (iVar1 = func_0079e55c(p2,*(undefined4 *)((unsigned char *)((char *)&g_00670572 + (intptr_t)(g_006705fc))),
                              *(undefined4 *)((unsigned char *)((char *)&g_0067056e + (intptr_t)(g_006705f8))),0,((int)this),p1,
                              p2), iVar1 == 0)) {
    iVar1 = (undefined4)(intptr_t)(((BLRoleTabItemView *)this)->create());
  }
  piVar2 = (int *)((DataManager *)this)->shareDataManager();
  piVar2 = (int *)(**(code **)(*piVar2 + 0x28))();
  uVar3 = (undefined4)((**(code **)(*piVar2 + 0x68))());
  iVar4 = (undefined4)(intptr_t)(((cocos2d::CCArray *)uVar3)->objectAtIndex((unsigned int)p3));
  if ((iVar4 != 0) &&
     (piVar2 = (int *)func_0079e55c(iVar4,*(undefined4 *)((unsigned char *)((char *)&g_006705a8 + (intptr_t)(g_00670600))),
                                      *(undefined4 *)((unsigned char *)((char *)&g_006705aa + (intptr_t)(g_00670604))),0),
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

BLEquipPresenter::BLEquipPresenter()
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
  iVar3 = (undefined4)(intptr_t)(*(int *)((unsigned char *)((char *)&g_0067062a + (intptr_t)(g_0067069c))));
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x58;
  *(int *)((int)this + 4*(6)) = iVar3 + 0x88;
  *(int *)((int)this + 4*(7)) = iVar3 + 0x98;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 1);
  ((UIManager *)this)->shareManager();
  ((UIManager *)this)->pushCurScrollViewUnEnable();
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,(unsigned char *)((char *)&g_0067066c + (intptr_t)(g_006706a0)),&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  *(int *)((int)this + 4*(9)) = -1;
  return;
}

undefined4 BLEquipPresenter::create(BLEquipView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x28))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLEquipPresenter::onExit()
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

void BLEquipPresenter::onEnter()
{
  return;
}

void BLEquipPresenter::initRolesData()
{
  return;
}

void BLEquipPresenter::updateRoleDataAtIndex(int p1)
{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (*(int *)(((int)this) + 0x24) != p1) {
    *(int *)(((int)this) + 0x24) = p1;
    piVar1 = (int *)((DataManager *)this)->shareDataManager();
    (**(code **)(*piVar1 + 100))(piVar1,*(undefined4 *)(((int)this) + 0x24));
    ((BLEquipView *)*(undefined4 *)(((int)this) + 0x20))->RoleInfo();
    uVar2 = (undefined4)(((BLRoleInfoView *)this)->getPresenter());
    ((BLRoleInfoPresenter *)uVar2)->initWithIndex(p1);
    piVar1 = (int *)((DataManager *)this)->shareDataManager();
    piVar1 = (int *)(**(code **)(*piVar1 + 0x28))();
    uVar2 = (undefined4)((**(code **)(*piVar1 + 0x68))());
    iVar3 = (undefined4)(intptr_t)(((cocos2d::CCArray *)uVar2)->objectAtIndex((unsigned int)p1));
    if ((iVar3 != 0) &&
       (piVar1 = (int *)func_0079e55c(iVar3,*(undefined4 *)((unsigned char *)((char *)&g_0067073a + (intptr_t)(g_00670780))),
                                        *(undefined4 *)((unsigned char *)((char *)&g_0067073c + (intptr_t)(g_00670784))),0),
       piVar1 != (int *)0x0)) {
      uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
      uVar4 = (undefined4)((**(code **)(*piVar1 + 0x18))(piVar1));
      ((cocos2d::CCNotificationCenter *)uVar2)->postNotification((char const*)(unsigned char *)((char *)&g_0067075c + (intptr_t)(g_00670788)), (cocos2d::CCObject*)uVar4);
    }
    ((BLEquipView *)*(undefined4 *)(((int)this) + 0x20))->EquipList();
    uVar2 = (undefined4)(((BLEquipListView *)this)->getPresenter());
    piVar1 = (int *)((DataManager *)this)->shareDataManager();
    uVar4 = (undefined4)((**(code **)(*piVar1 + 0x70))());
    ((BLEquipListPresenter *)uVar2)->initPageIndex(uVar4);
  }
  return;
}

undefined4 BLEquipPresenter::initWithView(BLEquipView* p1)
{
  int *piVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(((int)this) + 0x20) = (undefined4)(intptr_t)p1;
  piVar1 = (int *)((BLEquipView *)p1)->getTableViewRoleList();
  (**(code **)(*piVar1 + 0x22c))(piVar1,1);
  piVar1 = (int *)((BLEquipView *)*(undefined4 *)(((int)this) + 0x20))->getTableViewRoleList();
  (**(code **)(*piVar1 + 0x21c))(piVar1,((int)this) + 0x18);
  piVar1 = (int *)((BLEquipView *)*(undefined4 *)(((int)this) + 0x20))->getTableViewRoleList();
  (**(code **)(*piVar1 + 0x214))(piVar1,((int)this) + 0x1c);
  uVar2 = (undefined4)(((BLEquipView *)*(undefined4 *)(((int)this) + 0x20))->getTableViewRoleList());
  ((BLTableView *)uVar2)->reloadData(0, 0);
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  (**(code **)(*piVar1 + 0x74))(piVar1,0);
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x60))());
  BLEquipPresenter::updateRoleDataAtIndex(uVar2);
  return 1;
}

void BLEquipPresenter::touchItemAtIndex(BLTableView* p1, cocos2d::CCNode* p2, int p3)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
