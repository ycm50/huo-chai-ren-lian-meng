#include "BLHeroLineUpPresenter.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "CCNotificationCenter.h"
#include "CCObject.h"
#include "CCNode.h"
#include "CCTouch.h"
#include "CCArray.h"
#include "CCDirector.h"
#include "RoleData.h"
#include "BLHeroLineUpItemPresenter.h"
#include "BLHeroLineUpItemView.h"
#include "BLHeroLineUpView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLMissionData.h"
#include "BLTableView.h"
#include "CircusData.h"
#include "CircusPlayerinfo.h"
#include "DataManager.h"
#include "MissionSelectHeroData.h"
#include "PlatformHelp.h"
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
extern "C" long long func_0079e43c(...);
extern "C" long long func_0079e44c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e46c(...);
extern "C" long long func_0079e47c(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e5bc(...);
extern "C" long long func_0079e5dc(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_004c2208;
extern "C" unsigned long UNK_004c2220;
extern "C" unsigned long UNK_004c2238;
extern "C" unsigned long UNK_004c22c4;
extern "C" unsigned long UNK_004c22f8;
extern "C" unsigned long UNK_004c233c;
extern "C" unsigned long UNK_004c2364;
extern "C" unsigned long UNK_004c2384;
extern "C" unsigned long UNK_004c23b0;
extern "C" unsigned long UNK_004c23cc;
extern "C" unsigned long UNK_004c23ce;
extern "C" unsigned long UNK_004c23f4;
extern "C" unsigned long UNK_004c23f6;
extern "C" unsigned long UNK_004c2492;
extern "C" unsigned long UNK_004c24f4;
extern "C" unsigned long UNK_004c251a;
extern "C" unsigned long UNK_004c251e;
extern "C" unsigned long UNK_004c255e;
extern "C" unsigned long UNK_004c25ac;
extern "C" unsigned long UNK_004c25d6;
extern "C" unsigned long UNK_004c2640;
extern "C" unsigned long UNK_004c278c;
extern "C" unsigned long UNK_004c278e;
extern "C" unsigned long UNK_004c27da;
extern "C" unsigned long UNK_004c27f8;
extern "C" unsigned long UNK_004c281c;
extern "C" unsigned long UNK_004c283e;
extern "C" unsigned long UNK_004c2872;
extern "C" unsigned long UNK_004c2982;
extern "C" unsigned long UNK_004c29ce;
extern "C" unsigned long UNK_004c2b74;
extern "C" unsigned long UNK_004c2b76;
extern "C" unsigned long _UNK_004c220c;
extern "C" unsigned long _UNK_004c2224;
extern "C" unsigned long _UNK_004c223c;
extern "C" unsigned long _UNK_004c2328;
extern "C" unsigned long _UNK_004c232c;
extern "C" unsigned long _UNK_004c2340;
extern "C" unsigned long _UNK_004c2368;
extern "C" unsigned long _UNK_004c2388;
extern "C" unsigned long _UNK_004c239c;
extern "C" unsigned long _UNK_004c23a0;
extern "C" unsigned long _UNK_004c23b4;
extern "C" unsigned long _UNK_004c2410;
extern "C" unsigned long _UNK_004c2414;
extern "C" unsigned long _UNK_004c2418;
extern "C" unsigned long _UNK_004c241c;
extern "C" unsigned long _UNK_004c24dc;
extern "C" unsigned long _UNK_004c24e0;
extern "C" unsigned long _UNK_004c2594;
extern "C" unsigned long _UNK_004c2598;
extern "C" unsigned long _UNK_004c259c;
extern "C" unsigned long _UNK_004c25a0;
extern "C" unsigned long _UNK_004c25b0;
extern "C" unsigned long _UNK_004c25e8;
extern "C" unsigned long _UNK_004c27b8;
extern "C" unsigned long _UNK_004c27bc;
extern "C" unsigned long _UNK_004c27c0;
extern "C" unsigned long _UNK_004c2948;
extern "C" unsigned long _UNK_004c294c;
extern "C" unsigned long _UNK_004c2950;
extern "C" unsigned long _UNK_004c2954;
extern "C" unsigned long _UNK_004c2958;
extern "C" unsigned long _UNK_004c295c;
extern "C" unsigned long _UNK_004c2af8;
extern "C" unsigned long _UNK_004c2afc;
extern "C" unsigned long _UNK_004c2b00;
extern "C" unsigned long _UNK_004c2b04;
extern "C" unsigned long _UNK_004c2b08;
extern "C" unsigned long _UNK_004c2b0c;
extern "C" unsigned long _UNK_004c2b10;
extern "C" unsigned long _UNK_004c2cc8;
extern "C" unsigned long _UNK_004c2ccc;
extern "C" unsigned long _UNK_004c2cd0;
extern "C" unsigned long g_004c2208;
extern "C" unsigned long g_004c220c;
extern "C" unsigned long g_004c2220;
extern "C" unsigned long g_004c2224;
extern "C" unsigned long g_004c2238;
extern "C" unsigned long g_004c223c;
extern "C" unsigned long g_004c22c4;
extern "C" unsigned long g_004c22f8;
extern "C" unsigned long g_004c2328;
extern "C" unsigned long g_004c232c;
extern "C" unsigned long g_004c233c;
extern "C" unsigned long g_004c2340;
extern "C" unsigned long g_004c2364;
extern "C" unsigned long g_004c2368;
extern "C" unsigned long g_004c2384;
extern "C" unsigned long g_004c2388;
extern "C" unsigned long g_004c239c;
extern "C" unsigned long g_004c23a0;
extern "C" unsigned long g_004c23b0;
extern "C" unsigned long g_004c23b4;
extern "C" unsigned long g_004c23cc;
extern "C" unsigned long g_004c23ce;
extern "C" unsigned long g_004c23f4;
extern "C" unsigned long g_004c23f6;
extern "C" unsigned long g_004c2410;
extern "C" unsigned long g_004c2414;
extern "C" unsigned long g_004c2418;
extern "C" unsigned long g_004c241c;
extern "C" unsigned long g_004c2492;
extern "C" unsigned long g_004c24dc;
extern "C" unsigned long g_004c24e0;
extern "C" unsigned long g_004c24f4;
extern "C" unsigned long g_004c251a;
extern "C" unsigned long g_004c251e;
extern "C" unsigned long g_004c255e;
extern "C" unsigned long g_004c2594;
extern "C" unsigned long g_004c2598;
extern "C" unsigned long g_004c259c;
extern "C" unsigned long g_004c25a0;
extern "C" unsigned long g_004c25ac;
extern "C" unsigned long g_004c25b0;
extern "C" unsigned long g_004c25d6;
extern "C" unsigned long g_004c25e8;
extern "C" unsigned long g_004c2640;
extern "C" unsigned long g_004c278c;
extern "C" unsigned long g_004c278e;
extern "C" unsigned long g_004c27b8;
extern "C" unsigned long g_004c27bc;
extern "C" unsigned long g_004c27c0;
extern "C" unsigned long g_004c27da;
extern "C" unsigned long g_004c27f8;
extern "C" unsigned long g_004c281c;
extern "C" unsigned long g_004c283e;
extern "C" unsigned long g_004c2872;
extern "C" unsigned long g_004c2948;
extern "C" unsigned long g_004c294c;
extern "C" unsigned long g_004c2950;
extern "C" unsigned long g_004c2954;
extern "C" unsigned long g_004c2958;
extern "C" unsigned long g_004c295c;
extern "C" unsigned long g_004c2982;
extern "C" unsigned long g_004c29ce;
extern "C" unsigned long g_004c2af8;
extern "C" unsigned long g_004c2afc;
extern "C" unsigned long g_004c2b00;
extern "C" unsigned long g_004c2b04;
extern "C" unsigned long g_004c2b08;
extern "C" unsigned long g_004c2b0c;
extern "C" unsigned long g_004c2b10;
extern "C" unsigned long g_004c2b74;
extern "C" unsigned long g_004c2b76;
extern "C" unsigned long g_004c2cc8;
extern "C" unsigned long g_004c2ccc;
extern "C" unsigned long g_004c2cd0;
void BLHeroLineUpPresenter::tick(float p1)
{
  return;
}

bool BLHeroLineUpPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLHeroLineUpPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLHeroLineUpPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLHeroLineUpPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLHeroLineUpPresenter::touchItemAtIndex(BLTableView* p1, cocos2d::CCNode* p2, int p3)
{
  return;
}

void BLHeroLineUpPresenter::onRight(cocos2d::CCObject* p1, unsigned int p2)
{
  return;
}

void BLHeroLineUpPresenter::onLeft(cocos2d::CCObject* p1, unsigned int p2)
{
  return;
}

BLHeroLineUpPresenter::~BLHeroLineUpPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_004c22c4 + g_004c2328);
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
  func_0079e45c(&uStack_14,&g_004c22f8 + g_004c232c,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLHeroLineUpPresenter::numOfCellItem(BLTableView* p1)
{
  ((cocos2d::CCArray *)*(undefined4 *)(((int)this) + 0x24))->count();
  return;
}

undefined4 BLHeroLineUpPresenter::sizeOfCellItem(BLTableView* p1)
{
  0 /* ctorZero */;
  return ((int)this);
}


void BLHeroLineUpPresenter::onClose(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(0x95);
  return;
}

void BLHeroLineUpPresenter::onCancle(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(0x95);
  return;
}


BLHeroLineUpPresenter::BLHeroLineUpPresenter()
{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [4];
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  0 /* ctorZero */;
  iVar3 = (undefined4)(intptr_t)(*(int *)((unsigned char *)((char *)&g_004c24f4 + (intptr_t)(g_004c2594))));
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x4c;
  *(int *)((int)this + 4*(6)) = iVar3 + 0x7c;
  *(int *)((int)this + 4*(7)) = iVar3 + 0x8c;
  uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  uStack_18 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_004c251a + (intptr_t)(g_004c2598))));
  uStack_14 = (undefined4)(0);
  ((cocos2d::CCNotificationCenter *)(((int)this)))->addObserver((cocos2d::CCObject*)uStack_18, 0, (char const*)(unsigned char *)((char *)&g_004c251e + (intptr_t)(g_004c259c)), 0);
  piVar2 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar1 = (undefined4)((**(code **)(*(int *)(piVar2) + (0x40)))());
  ((cocos2d::CCTouchDispatcher *)(uVar1))->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 1);
  ((UIManager *)this)->shareManager();
  ((UIManager *)this)->pushCurScrollViewUnEnable();
  iVar3 = (undefined4)(intptr_t)(cocos2d::CCArray::create());
  *(int *)((int)this + 4*(9)) = iVar3;
  if (iVar3 != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(auStack_1c,(unsigned char *)((char *)&g_004c255e + (intptr_t)(g_004c25a0)),auStack_20);
  ((BLLeakUtils *)(uVar1))->addClass((std::string)(char*)auStack_1c);
  func_0079e2bc(auStack_1c);
  return;
}

void BLHeroLineUpPresenter::onEnter()
{
  ((PlatformHelp *)this)->showLenovoBanner((char const*)&g_004c25ac + g_004c25b0);
  return;
}

void BLHeroLineUpPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar2)->removeObserver((cocos2d::CCObject*)((int)this), (char const*)&g_004c25d6 + g_004c25e8);
  ((UIManager *)this)->shareManager();
  ((UIManager *)this)->popUnEnableScrollView();
  ((PlatformHelp *)this)->hideLenovoBanner();
  return;
}

undefined4 BLHeroLineUpPresenter::create(BLHeroLineUpView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x28))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

// ===== 修复: 补回被误删的函数占位 (6) =====
void BLHeroLineUpPresenter::nodeOfCellItemAtIndex(BLTableView* p1, cocos2d::CCNode* p2, int p3)
{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (((int)(intptr_t)p2 == 0) ||
     (iVar1 = func_0079e55c(p2,*(undefined4 *)((unsigned char *)((char *)&g_004c23cc + (intptr_t)(g_004c2410))),
                              *(undefined4 *)((unsigned char *)((char *)&g_004c23ce + (intptr_t)(g_004c2414))),0), iVar1 == 0)) {
    iVar1 = (undefined4)(intptr_t)(((BLHeroLineUpItemView *)this)->create());
  }
  iVar2 = (undefined4)(intptr_t)(((cocos2d::CCArray *)*(undefined4 *)(((int)this) + 0x24))->objectAtIndex((unsigned int)p3));
  uVar3 = (undefined4)(0);
  if (iVar2 != 0) {
    uVar3 = func_0079e55c(iVar2,*(undefined4 *)((unsigned char *)((char *)&g_004c23f4 + (intptr_t)(g_004c2418))),
                            *(undefined4 *)((unsigned char *)((char *)&g_004c23f6 + (intptr_t)(g_004c241c))),0);
  }
  uVar4 = (undefined4)(((BLHeroLineUpItemView *)iVar1)->getPresenter());
  ((BLHeroLineUpItemPresenter *)uVar4)->initWithRoleData((RoleData*)uVar3);
  return;
}

void BLHeroLineUpPresenter::onSure(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLHeroLineUpPresenter::initRolesData()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLHeroLineUpPresenter::updateData(cocos2d::CCObject* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLHeroLineUpPresenter::initWithView(BLHeroLineUpView* p1)
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
  piVar2 = (int *)((BLHeroLineUpView *)p1)->getbtnRight();
  iVar1 = g_004c2af8;
  uStack_40 = (undefined4)(*(undefined4 *)(&g_004c2982 + g_004c2afc + g_004c2af8));
  uStack_3c = (undefined4)(0);
  (**(code **)(*piVar2 + 0x254))(piVar2,((int)this),uStack_40,0,0x20);
  piVar2 = (int *)((BLHeroLineUpView *)*(undefined4 *)(((int)this) + 0x20))->getBtnLeft();
  uStack_38 = (undefined4)(*(undefined4 *)(&g_004c2982 + g_004c2b00 + iVar1));
  uStack_34 = (undefined4)(0);
  (**(code **)(*piVar2 + 0x254))(piVar2,((int)this),uStack_38,0,0x20);
  piVar2 = (int *)((BLHeroLineUpView *)*(undefined4 *)(((int)this) + 0x20))->getBtnClose();
  pcVar5 = *(code **)(*piVar2 + 0x26c);
  func_0079e45c(&uStack_20,&g_004c29ce + g_004c2b04,&uStack_28);
  (*pcVar5)(piVar2,&uStack_20);
  func_0079e2bc(&uStack_20);
  piVar2 = (int *)((BLHeroLineUpView *)*(undefined4 *)(((int)this) + 0x20))->getBtnClose();
  uStack_30 = (undefined4)(*(undefined4 *)(&g_004c2982 + g_004c2b08 + iVar1));
  uStack_2c = (undefined4)(0);
  (**(code **)(*piVar2 + 0x254))(piVar2,((int)this),uStack_30,0,0x20);
  piVar2 = (int *)((BLHeroLineUpView *)*(undefined4 *)(((int)this) + 0x20))->getBtnCancle();
  uStack_28 = (undefined4)(*(undefined4 *)(&g_004c2982 + g_004c2b0c + iVar1));
  uStack_24 = (undefined4)(0);
  (**(code **)(*piVar2 + 0x254))(piVar2,((int)this),uStack_28,0,0x20);
  piVar2 = (int *)((BLHeroLineUpView *)*(undefined4 *)(((int)this) + 0x20))->getBtnSure();
  uStack_20 = (undefined4)(*(undefined4 *)(&g_004c2982 + g_004c2b10 + iVar1));
  uStack_1c = (undefined4)(0);
  (**(code **)(*piVar2 + 0x254))(piVar2,((int)this),uStack_20,0,0x20);
  piVar2 = (int *)((BLHeroLineUpView *)*(undefined4 *)(((int)this) + 0x20))->getBtnClose();
  pcVar5 = *(code **)(*piVar2 + 0x28c);
  piVar3 = (int *)((BLHeroLineUpView *)*(undefined4 *)(((int)this) + 0x20))->getBtnClose();
  piVar3 = (int *)(**(code **)(*piVar3 + 0x308))(piVar3,1);
  (**(code **)(*piVar3 + 0x1cc))(auStack_48,piVar3);
  (*pcVar5)(piVar2,auStack_48);
  piVar2 = (int *)((BLHeroLineUpView *)*(undefined4 *)(((int)this) + 0x20))->getTableViewRoles();
  (**(code **)(*piVar2 + 0x21c))(piVar2,((int)this) + 0x18);
  piVar2 = (int *)((BLHeroLineUpView *)*(undefined4 *)(((int)this) + 0x20))->getTableViewRoles();
  (**(code **)(*piVar2 + 0x214))(piVar2,((int)this) + 0x1c);
  piVar2 = (int *)((BLHeroLineUpView *)*(undefined4 *)(((int)this) + 0x20))->getTableViewRoles();
  (**(code **)(*piVar2 + 0x22c))(piVar2,0);
  BLHeroLineUpPresenter::initRolesData();
  uVar4 = (undefined4)(((BLHeroLineUpView *)*(undefined4 *)(((int)this) + 0x20))->getTableViewRoles());
  ((BLTableView *)uVar4)->reloadData(0, 1);
  BLHeroLineUpPresenter::updateData(0);
  return;
}

void BLHeroLineUpPresenter::updateSelecetData()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
