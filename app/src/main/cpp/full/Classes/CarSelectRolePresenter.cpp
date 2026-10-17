#include "CarSelectRolePresenter.h"
#include "CCNode.h"
#include "CCObject.h"
#include "CCTouch.h"
#include "CCArray.h"
#include "CCDirector.h"
#include "RoleData.h"
#include "BLLeakUtils.h"
#include "BLTableView.h"
#include "CarHttpUtil.h"
#include "CarSelectRoleItemPresenter.h"
#include "CarSelectRoleItemView.h"
#include "CarSelectRoleView.h"
#include "DataManager.h"
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
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_006be880;
extern "C" unsigned long UNK_006be898;
extern "C" unsigned long UNK_006be8b0;
extern "C" unsigned long UNK_006be940;
extern "C" unsigned long UNK_006be974;
extern "C" unsigned long UNK_006be9b8;
extern "C" unsigned long UNK_006be9e0;
extern "C" unsigned long UNK_006bea00;
extern "C" unsigned long UNK_006bea5c;
extern "C" unsigned long UNK_006bea5e;
extern "C" unsigned long UNK_006bea84;
extern "C" unsigned long UNK_006bea86;
extern "C" unsigned long UNK_006bead2;
extern "C" unsigned long UNK_006beb1e;
extern "C" unsigned long UNK_006bebea;
extern "C" unsigned long UNK_006bebec;
extern "C" unsigned long UNK_006becca;
extern "C" unsigned long UNK_006bed14;
extern "C" unsigned long _UNK_006be884;
extern "C" unsigned long _UNK_006be89c;
extern "C" unsigned long _UNK_006be8b4;
extern "C" unsigned long _UNK_006be9a4;
extern "C" unsigned long _UNK_006be9a8;
extern "C" unsigned long _UNK_006be9bc;
extern "C" unsigned long _UNK_006be9e4;
extern "C" unsigned long _UNK_006bea04;
extern "C" unsigned long _UNK_006bea18;
extern "C" unsigned long _UNK_006bea2c;
extern "C" unsigned long _UNK_006bea30;
extern "C" unsigned long _UNK_006beaa0;
extern "C" unsigned long _UNK_006beaa4;
extern "C" unsigned long _UNK_006beaa8;
extern "C" unsigned long _UNK_006beaac;
extern "C" unsigned long _UNK_006beb50;
extern "C" unsigned long _UNK_006beb54;
extern "C" unsigned long _UNK_006bec4c;
extern "C" unsigned long _UNK_006bec50;
extern "C" unsigned long _UNK_006bec74;
extern "C" unsigned long _UNK_006bec8c;
extern "C" unsigned long _UNK_006beebc;
extern "C" unsigned long _UNK_006beec0;
extern "C" unsigned long _UNK_006beec4;
extern "C" unsigned long _UNK_006beec8;
extern "C" unsigned long _UNK_006beecc;
extern "C" unsigned long _UNK_006beed0;
extern "C" unsigned long _UNK_006beed4;
extern "C" unsigned long _UNK_006beed8;
extern "C" unsigned long extraout_r2;
extern "C" unsigned long g_006be880;
extern "C" unsigned long g_006be884;
extern "C" unsigned long g_006be898;
extern "C" unsigned long g_006be89c;
extern "C" unsigned long g_006be8b0;
extern "C" unsigned long g_006be8b4;
extern "C" unsigned long g_006be940;
extern "C" unsigned long g_006be974;
extern "C" unsigned long g_006be9a4;
extern "C" unsigned long g_006be9a8;
extern "C" unsigned long g_006be9b8;
extern "C" unsigned long g_006be9bc;
extern "C" unsigned long g_006be9e0;
extern "C" unsigned long g_006be9e4;
extern "C" unsigned long g_006bea00;
extern "C" unsigned long g_006bea04;
extern "C" unsigned long g_006bea18;
extern "C" unsigned long g_006bea2c;
extern "C" unsigned long g_006bea30;
extern "C" unsigned long g_006bea5c;
extern "C" unsigned long g_006bea5e;
extern "C" unsigned long g_006bea84;
extern "C" unsigned long g_006bea86;
extern "C" unsigned long g_006beaa0;
extern "C" unsigned long g_006beaa4;
extern "C" unsigned long g_006beaa8;
extern "C" unsigned long g_006beaac;
extern "C" unsigned long g_006bead2;
extern "C" unsigned long g_006beb1e;
extern "C" unsigned long g_006beb50;
extern "C" unsigned long g_006beb54;
extern "C" unsigned long g_006bebea;
extern "C" unsigned long g_006bebec;
extern "C" unsigned long g_006bec4c;
extern "C" unsigned long g_006bec50;
extern "C" unsigned long g_006bec74;
extern "C" unsigned long g_006bec8c;
extern "C" unsigned long g_006becca;
extern "C" unsigned long g_006bed14;
extern "C" unsigned long g_006beebc;
extern "C" unsigned long g_006beec0;
extern "C" unsigned long g_006beec4;
extern "C" unsigned long g_006beec8;
extern "C" unsigned long g_006beecc;
extern "C" unsigned long g_006beed0;
extern "C" unsigned long g_006beed4;
extern "C" unsigned long g_006beed8;
bool CarSelectRolePresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void CarSelectRolePresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void CarSelectRolePresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void CarSelectRolePresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void CarSelectRolePresenter::onRight(cocos2d::CCObject* p1, unsigned int p2)
{
  return;
}

void CarSelectRolePresenter::onLeft(cocos2d::CCObject* p1, unsigned int p2)
{
  return;
}

void CarSelectRolePresenter::touchItemAtIndex(BLTableView* p1, cocos2d::CCNode* p2, int p3)
{
  return;
}

void CarSelectRolePresenter::tick(float p1)
{
  return;
}

CarSelectRolePresenter::~CarSelectRolePresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_006be940 + g_006be9a4);
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
  func_0079e45c(&uStack_14,&g_006be974 + g_006be9a8,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void CarSelectRolePresenter::numOfCellItem(BLTableView* p1)
{
  ((cocos2d::CCArray *)*(undefined4 *)(((int)this) + 0x24))->count();
  return;
}

void CarSelectRolePresenter::onCancle(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(g_006bea18);
  return;
}

undefined4 CarSelectRolePresenter::sizeOfCellItem(BLTableView* p1)
{
  0 /* ctorZero */;
  return ((int)this);
}


CarSelectRolePresenter::CarSelectRolePresenter()
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
  iVar3 = (undefined4)(intptr_t)(*(int *)((unsigned char *)((char *)&g_006bead2 + (intptr_t)(g_006beb50))));
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
  func_0079e45c(&uStack_14,(unsigned char *)((char *)&g_006beb1e + (intptr_t)(g_006beb54)),&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

undefined4 CarSelectRolePresenter::create(CarSelectRoleView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x28))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void CarSelectRolePresenter::onExit()
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

void CarSelectRolePresenter::onEnter()
{
  return;
}


void CarSelectRolePresenter::updateSelecetData()
{
  ((CarHttpUtil *)this)->getInstance();
  ((CarHttpUtil *)this)->saveUserADDate();
  return;
}

void CarSelectRolePresenter::onClose(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  CarSelectRolePresenter::updateSelecetData();
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(g_006bec74);
  return;
}

void CarSelectRolePresenter::onSure(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  CarSelectRolePresenter::updateSelecetData();
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(g_006bec8c);
  return;
}

void CarSelectRolePresenter::updateData(cocos2d::CCObject* p1)
{
  undefined4 p4 = 0;

  int *piVar1;
  undefined4 extraout_r2;
  
  piVar1 = (int *)((CarSelectRoleView *)*(undefined4 *)(((int)this) + 0x20))->getLabRoleLimit();
  (**(code **)(*piVar1 + 0x90))(piVar1,0,extraout_r2,*(code **)(*piVar1 + 0x90),p4);
  return;
}

// ===== 修复: 补回被误删的函数占位 (3) =====
void CarSelectRolePresenter::nodeOfCellItemAtIndex(BLTableView* p1, cocos2d::CCNode* p2, int p3)
{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (((int)(intptr_t)p2 == 0) ||
     (iVar1 = func_0079e55c(p2,*(undefined4 *)((unsigned char *)((char *)&g_006bea5c + (intptr_t)(g_006beaa0))),
                              *(undefined4 *)((unsigned char *)((char *)&g_006bea5e + (intptr_t)(g_006beaa4))),0), iVar1 == 0)) {
    iVar1 = (undefined4)(intptr_t)(((CarSelectRoleItemView *)this)->create());
  }
  iVar2 = (undefined4)(intptr_t)(((cocos2d::CCArray *)*(undefined4 *)(((int)this) + 0x24))->objectAtIndex((unsigned int)p3));
  uVar3 = (undefined4)(0);
  if (iVar2 != 0) {
    uVar3 = func_0079e55c(iVar2,*(undefined4 *)((unsigned char *)((char *)&g_006bea84 + (intptr_t)(g_006beaa8))),
                            *(undefined4 *)((unsigned char *)((char *)&g_006bea86 + (intptr_t)(g_006beaac))),0);
  }
  uVar4 = (undefined4)(((CarSelectRoleItemView *)iVar1)->getPresenter());
  ((CarSelectRoleItemPresenter *)uVar4)->initWithRoleData((RoleData*)uVar3);
  return;
}

void CarSelectRolePresenter::initRolesData()
{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  uint uVar7;
  int iStack_2c;
  undefined1 auStack_1c [8];
  
  ((cocos2d::CCArray *)*(undefined4 *)(((int)this) + 0x24))->removeAllObjects();
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  piVar1 = (int *)(**(code **)(*(int *)(piVar1) + (0x28)))();
  uVar2 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x60)))());
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  piVar1 = (int *)(**(code **)(*(int *)(piVar1) + (0x40)))();
  iStack_2c = 0;
  for (uVar7 = 0; uVar3 = (undefined4)(intptr_t)(((cocos2d::CCArray *)uVar2)->count(), uVar7 < uVar3); uVar7 = uVar7 + 1) {
    iVar4 = (undefined4)(intptr_t)(((cocos2d::CCArray *)uVar2)->objectAtIndex((unsigned int)uVar7));
    if ((iVar4 != 0) &&
       (piVar5 = (int *)func_0079e55c(iVar4,*(undefined4 *)((unsigned char *)((char *)&g_006bebea + (intptr_t)(g_006bec4c))),
                                        *(undefined4 *)((unsigned char *)((char *)&g_006bebec + (intptr_t)(g_006bec50))),0),
       piVar5 != (int *)0x0)) {
      uVar6 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x28)))(piVar1));
      (**(code **)(*(int *)(piVar5) + (0x18)))(auStack_1c,piVar5);
      iVar4 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)uVar6)->objectForKey((char const *)auStack_1c));
      func_0079e2bc(auStack_1c);
      if (iVar4 == 0) {
        ((cocos2d::CCArray *)*(undefined4 *)(((int)this) + 0x24))->addObject((cocos2d::CCObject*)piVar5);
      }
      else {
        ((cocos2d::CCArray *)*(undefined4 *)(((int)this) + 0x24))->insertObject((cocos2d::CCObject*)piVar5, (unsigned int)iStack_2c);
        iStack_2c = iStack_2c + 1;
      }
    }
  }
  return;
}

void CarSelectRolePresenter::initWithView(CarSelectRoleView* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
