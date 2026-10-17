#include "HeroLineUpPresenter.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLMissionData.h"
#include "BLTableView.h"
#include "ChallengeHeroItemPresenter.h"
#include "ChallengeHeroItemView.h"
#include "ChallengeUserData.h"
#include "DataManager.h"
#include "HeroLineUpView.h"
#include "MissionSelectHeroData.h"
#include "Toast.h"
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
extern "C" long long func_0079e69c(...);
extern "C" long long func_0079e874(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0050ad50;
extern "C" unsigned long UNK_0050ad68;
extern "C" unsigned long UNK_0050ad80;
extern "C" unsigned long UNK_0050ad98;
extern "C" unsigned long UNK_0050adb0;
extern "C" unsigned long UNK_0050ae0c;
extern "C" unsigned long UNK_0050ae40;
extern "C" unsigned long UNK_0050ae84;
extern "C" unsigned long UNK_0050aeac;
extern "C" unsigned long UNK_0050aecc;
extern "C" unsigned long UNK_0050aef8;
extern "C" unsigned long UNK_0050af14;
extern "C" unsigned long UNK_0050af16;
extern "C" unsigned long UNK_0050af3c;
extern "C" unsigned long UNK_0050af3e;
extern "C" unsigned long UNK_0050afe0;
extern "C" unsigned long UNK_0050b01c;
extern "C" unsigned long UNK_0050b040;
extern "C" unsigned long UNK_0050b062;
extern "C" unsigned long UNK_0050b09e;
extern "C" unsigned long UNK_0050b102;
extern "C" unsigned long UNK_0050b14e;
extern "C" unsigned long UNK_0050b1f6;
extern "C" unsigned long UNK_0050b29a;
extern "C" unsigned long UNK_0050b29c;
extern "C" unsigned long UNK_0050b2f6;
extern "C" unsigned long UNK_0050b31e;
extern "C" unsigned long UNK_0050b36a;
extern "C" unsigned long _UNK_0050ad54;
extern "C" unsigned long _UNK_0050ad6c;
extern "C" unsigned long _UNK_0050ad84;
extern "C" unsigned long _UNK_0050ad9c;
extern "C" unsigned long _UNK_0050adb4;
extern "C" unsigned long _UNK_0050ae70;
extern "C" unsigned long _UNK_0050ae74;
extern "C" unsigned long _UNK_0050ae88;
extern "C" unsigned long _UNK_0050aeb0;
extern "C" unsigned long _UNK_0050aed0;
extern "C" unsigned long _UNK_0050aee4;
extern "C" unsigned long _UNK_0050aee8;
extern "C" unsigned long _UNK_0050aefc;
extern "C" unsigned long _UNK_0050af58;
extern "C" unsigned long _UNK_0050af5c;
extern "C" unsigned long _UNK_0050af60;
extern "C" unsigned long _UNK_0050af64;
extern "C" unsigned long _UNK_0050af8c;
extern "C" unsigned long _UNK_0050afa0;
extern "C" unsigned long _UNK_0050b0dc;
extern "C" unsigned long _UNK_0050b0e0;
extern "C" unsigned long _UNK_0050b0e4;
extern "C" unsigned long _UNK_0050b0e8;
extern "C" unsigned long _UNK_0050b0ec;
extern "C" unsigned long _UNK_0050b0f0;
extern "C" unsigned long _UNK_0050b180;
extern "C" unsigned long _UNK_0050b184;
extern "C" unsigned long _UNK_0050b2d0;
extern "C" unsigned long _UNK_0050b2d4;
extern "C" unsigned long _UNK_0050b2d8;
extern "C" unsigned long _UNK_0050b2f8;
extern "C" unsigned long _UNK_0050b494;
extern "C" unsigned long _UNK_0050b498;
extern "C" unsigned long _UNK_0050b49c;
extern "C" unsigned long _UNK_0050b4a0;
extern "C" unsigned long _UNK_0050b4a4;
extern "C" unsigned long _UNK_0050b4a8;
extern "C" unsigned long _UNK_0050b4ac;
extern "C" unsigned long g_0050ad50;
extern "C" unsigned long g_0050ad54;
extern "C" unsigned long g_0050ad68;
extern "C" unsigned long g_0050ad6c;
extern "C" unsigned long g_0050ad80;
extern "C" unsigned long g_0050ad84;
extern "C" unsigned long g_0050ad98;
extern "C" unsigned long g_0050ad9c;
extern "C" unsigned long g_0050adb0;
extern "C" unsigned long g_0050adb4;
extern "C" unsigned long g_0050ae0c;
extern "C" unsigned long g_0050ae40;
extern "C" unsigned long g_0050ae70;
extern "C" unsigned long g_0050ae74;
extern "C" unsigned long g_0050ae84;
extern "C" unsigned long g_0050ae88;
extern "C" unsigned long g_0050aeac;
extern "C" unsigned long g_0050aeb0;
extern "C" unsigned long g_0050aecc;
extern "C" unsigned long g_0050aed0;
extern "C" unsigned long g_0050aee4;
extern "C" unsigned long g_0050aee8;
extern "C" unsigned long g_0050aef8;
extern "C" unsigned long g_0050aefc;
extern "C" unsigned long g_0050af14;
extern "C" unsigned long g_0050af16;
extern "C" unsigned long g_0050af3c;
extern "C" unsigned long g_0050af3e;
extern "C" unsigned long g_0050af58;
extern "C" unsigned long g_0050af5c;
extern "C" unsigned long g_0050af60;
extern "C" unsigned long g_0050af64;
extern "C" unsigned long g_0050af8c;
extern "C" unsigned long g_0050afa0;
extern "C" unsigned long g_0050afe0;
extern "C" unsigned long g_0050b01c;
extern "C" unsigned long g_0050b040;
extern "C" unsigned long g_0050b062;
extern "C" unsigned long g_0050b09e;
extern "C" unsigned long g_0050b0dc;
extern "C" unsigned long g_0050b0e0;
extern "C" unsigned long g_0050b0e4;
extern "C" unsigned long g_0050b0e8;
extern "C" unsigned long g_0050b0ec;
extern "C" unsigned long g_0050b0f0;
extern "C" unsigned long g_0050b102;
extern "C" unsigned long g_0050b14e;
extern "C" unsigned long g_0050b180;
extern "C" unsigned long g_0050b184;
extern "C" unsigned long g_0050b1f6;
extern "C" unsigned long g_0050b29a;
extern "C" unsigned long g_0050b29c;
extern "C" unsigned long g_0050b2d0;
extern "C" unsigned long g_0050b2d4;
extern "C" unsigned long g_0050b2d8;
extern "C" unsigned long g_0050b2f6;
extern "C" unsigned long g_0050b2f8;
extern "C" unsigned long g_0050b31e;
extern "C" unsigned long g_0050b36a;
extern "C" unsigned long g_0050b494;
extern "C" unsigned long g_0050b498;
extern "C" unsigned long g_0050b49c;
extern "C" unsigned long g_0050b4a0;
extern "C" unsigned long g_0050b4a4;
extern "C" unsigned long g_0050b4a8;
extern "C" unsigned long g_0050b4ac;
void HeroLineUpPresenter::tick(float p1)
{
  return;
}

bool HeroLineUpPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void HeroLineUpPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void HeroLineUpPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void HeroLineUpPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void HeroLineUpPresenter::touchItemAtIndex(BLTableView* p1, cocos2d::CCNode* p2, int p3)
{
  return;
}

void HeroLineUpPresenter::onRight(cocos2d::CCObject* p1, unsigned int p2)
{
  return;
}

void HeroLineUpPresenter::onLeft(cocos2d::CCObject* p1, unsigned int p2)
{
  return;
}

HeroLineUpPresenter::~HeroLineUpPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0050ae0c + g_0050ae70);
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
  func_0079e45c(&uStack_14,&g_0050ae40 + g_0050ae74,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void HeroLineUpPresenter::numOfCellItem(BLTableView* p1)
{
  ((cocos2d::CCArray *)*(undefined4 *)(((int)this) + 0x24))->count();
  return;
}

undefined4 HeroLineUpPresenter::sizeOfCellItem(BLTableView* p1)
{
  0 /* ctorZero */;
  return ((int)this);
}


void HeroLineUpPresenter::onClose(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(g_0050af8c);
  return;
}

void HeroLineUpPresenter::onCancle(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(g_0050afa0);
  return;
}



void HeroLineUpPresenter::onEnter()
{
  return;
}

void HeroLineUpPresenter::onExit()
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

undefined4 HeroLineUpPresenter::create(HeroLineUpView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x28))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}


void HeroLineUpPresenter::updateSelecetData()
{
  return;
}

void HeroLineUpPresenter::updateData(cocos2d::CCObject* p1)
{
  undefined4 p4 = 0;

  int *piVar1;
  code *pcVar2;
  
  piVar1 = (int *)((HeroLineUpView *)*(undefined4 *)(((int)this) + 0x20))->getLabRoleLimit();
  pcVar2 = *(code **)(*piVar1 + 0x234);
  (*pcVar2)(piVar1,&g_0050b2f6 + g_0050b2f8,*piVar1,pcVar2,p4);
  return;
}

undefined4 HeroLineUpPresenter::initWithView(HeroLineUpView* p1)
{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  code *pcVar5;
  undefined1 auStack_48 [8];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  *(undefined4 *)(((int)this) + 0x20) = (undefined4)(intptr_t)p1;
  piVar2 = (int *)((HeroLineUpView *)p1)->getbtnRight();
  iVar1 = g_0050b494;
  uStack_40 = (undefined4)(*(undefined4 *)(&g_0050b31e + g_0050b498 + g_0050b494));
  uStack_3c = (undefined4)(0);
  (**(code **)(*piVar2 + 0x254))(piVar2,((int)this),uStack_40,0,0x20);
  piVar2 = (int *)((HeroLineUpView *)*(undefined4 *)(((int)this) + 0x20))->getBtnLeft();
  uStack_38 = (undefined4)(*(undefined4 *)(&g_0050b31e + g_0050b49c + iVar1));
  uStack_34 = (undefined4)(0);
  (**(code **)(*piVar2 + 0x254))(piVar2,((int)this),uStack_38,0,0x20);
  piVar2 = (int *)((HeroLineUpView *)*(undefined4 *)(((int)this) + 0x20))->getBtnClose();
  pcVar5 = *(code **)(*piVar2 + 0x26c);
  func_0079e45c(&uStack_20,&g_0050b36a + g_0050b4a0,&uStack_28);
  (*pcVar5)(piVar2,&uStack_20);
  func_0079e2bc(&uStack_20);
  piVar2 = (int *)((HeroLineUpView *)*(undefined4 *)(((int)this) + 0x20))->getBtnClose();
  uStack_30 = (undefined4)(*(undefined4 *)(&g_0050b31e + g_0050b4a4 + iVar1));
  uStack_2c = (undefined4)(0);
  (**(code **)(*piVar2 + 0x254))(piVar2,((int)this),uStack_30,0,0x20);
  piVar2 = (int *)((HeroLineUpView *)*(undefined4 *)(((int)this) + 0x20))->getBtnCancle();
  uStack_28 = (undefined4)(*(undefined4 *)(&g_0050b31e + g_0050b4a8 + iVar1));
  uStack_24 = (undefined4)(0);
  (**(code **)(*piVar2 + 0x254))(piVar2,((int)this),uStack_28,0,0x20);
  piVar2 = (int *)((HeroLineUpView *)*(undefined4 *)(((int)this) + 0x20))->getBtnSure();
  uStack_20 = (undefined4)(*(undefined4 *)(&g_0050b31e + g_0050b4ac + iVar1));
  uStack_1c = (undefined4)(0);
  (**(code **)(*piVar2 + 0x254))(piVar2,((int)this),uStack_20,0,0x20);
  piVar2 = (int *)((HeroLineUpView *)*(undefined4 *)(((int)this) + 0x20))->getBtnClose();
  pcVar5 = *(code **)(*piVar2 + 0x28c);
  piVar3 = (int *)((HeroLineUpView *)*(undefined4 *)(((int)this) + 0x20))->getBtnClose();
  piVar3 = (int *)(**(code **)(*piVar3 + 0x308))(piVar3,1);
  (**(code **)(*piVar3 + 0x1cc))(auStack_48,piVar3);
  (*pcVar5)(piVar2,auStack_48);
  piVar2 = (int *)((HeroLineUpView *)*(undefined4 *)(((int)this) + 0x20))->getTableViewRoles();
  (**(code **)(*piVar2 + 0x21c))(piVar2,((int)this) + 0x18);
  piVar2 = (int *)((HeroLineUpView *)*(undefined4 *)(((int)this) + 0x20))->getTableViewRoles();
  (**(code **)(*piVar2 + 0x214))(piVar2,((int)this) + 0x1c);
  piVar2 = (int *)((HeroLineUpView *)*(undefined4 *)(((int)this) + 0x20))->getTableViewRoles();
  (**(code **)(*piVar2 + 0x22c))(piVar2,0);
  HeroLineUpPresenter::initRolesData();
  uVar4 = (undefined4)(((HeroLineUpView *)*(undefined4 *)(((int)this) + 0x20))->getTableViewRoles());
  ((BLTableView *)uVar4)->reloadData(0, 1);
  HeroLineUpPresenter::updateData(0);
  return 1;
}

// ===== 修复: 补回被误删的函数占位 (4) =====
void HeroLineUpPresenter::nodeOfCellItemAtIndex(BLTableView* p1, cocos2d::CCNode* p2, int p3)
{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (((int)(intptr_t)p2 == 0) ||
     (iVar1 = func_0079e55c(p2,*(undefined4 *)((unsigned char *)((char *)&g_0050af14 + (intptr_t)(g_0050af58))),
                              *(undefined4 *)((unsigned char *)((char *)&g_0050af16 + (intptr_t)(g_0050af5c))),0), iVar1 == 0)) {
    iVar1 = (undefined4)(intptr_t)(((ChallengeHeroItemView *)this)->create());
  }
  iVar2 = (undefined4)(intptr_t)(((cocos2d::CCArray *)*(undefined4 *)(((int)this) + 0x24))->objectAtIndex((unsigned int)p3));
  uVar3 = (undefined4)(0);
  if (iVar2 != 0) {
    uVar3 = func_0079e55c(iVar2,*(undefined4 *)((unsigned char *)((char *)&g_0050af3c + (intptr_t)(g_0050af60))),
                            *(undefined4 *)((unsigned char *)((char *)&g_0050af3e + (intptr_t)(g_0050af64))),0);
  }
  uVar4 = (undefined4)(((ChallengeHeroItemView *)iVar1)->getPresenter());
  ((ChallengeHeroItemPresenter *)uVar4)->initWithRoleData((RoleData*)uVar3);
  return;
}

void HeroLineUpPresenter::onSure(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

HeroLineUpPresenter::HeroLineUpPresenter()
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
  iVar3 = (undefined4)(intptr_t)(*(int *)((unsigned char *)((char *)&g_0050b102 + (intptr_t)(g_0050b180))));
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
  func_0079e45c(&uStack_14,(unsigned char *)((char *)&g_0050b14e + (intptr_t)(g_0050b184)),&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

void HeroLineUpPresenter::initRolesData()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
