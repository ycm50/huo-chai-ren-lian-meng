#include "BLMineCollectHeroPresenter.h"
#include "MineDealData.h"
#include "CCNotificationCenter.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "CCObject.h"
#include "CCNode.h"
#include "CCTouch.h"
#include "CCArray.h"
#include "CCDirector.h"
#include "RoleData.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLMineCollectHeroItemPresenter.h"
#include "BLMineCollectHeroItemView.h"
#include "BLMineCollectHeroView.h"
#include "BLTableView.h"
#include "DataManager.h"
#include "PlatformHelp.h"
#include "UIManager.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <new>   // ghost_fix.js 自动补齐
#include "BLForwards.h"

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
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e5bc(...);
extern "C" long long func_0079e5dc(...);
extern "C" long long func_0079e854(...);
extern "C" long long func_0079ec34(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_005a4c24;
extern "C" unsigned long UNK_005a4c58;
extern "C" unsigned long UNK_005a4c9c;
extern "C" unsigned long UNK_005a4cc4;
extern "C" unsigned long UNK_005a4ce4;
extern "C" unsigned long UNK_005a4d2c;
extern "C" unsigned long UNK_005a4d2e;
extern "C" unsigned long UNK_005a4d54;
extern "C" unsigned long UNK_005a4d56;
extern "C" unsigned long UNK_005a4da4;
extern "C" unsigned long UNK_005a4dca;
extern "C" unsigned long UNK_005a4dce;
extern "C" unsigned long UNK_005a4e0e;
extern "C" unsigned long UNK_005a4e5c;
extern "C" unsigned long UNK_005a4e86;
extern "C" unsigned long UNK_005a4efe;
extern "C" unsigned long UNK_005a4f00;
extern "C" unsigned long UNK_005a4ffc;
extern "C" unsigned long UNK_005a502a;
extern "C" unsigned long UNK_005a5052;
extern "C" unsigned long UNK_005a50a8;
extern "C" unsigned long UNK_005a50fe;
extern "C" unsigned long UNK_005a5134;
extern "C" unsigned long UNK_005a5250;
extern "C" unsigned long UNK_005a527e;
extern "C" unsigned long UNK_005a529a;
extern "C" unsigned long UNK_005a52bc;
extern "C" unsigned long _UNK_005a4c88;
extern "C" unsigned long _UNK_005a4c8c;
extern "C" unsigned long _UNK_005a4ca0;
extern "C" unsigned long _UNK_005a4cc8;
extern "C" unsigned long _UNK_005a4ce8;
extern "C" unsigned long _UNK_005a4cfc;
extern "C" unsigned long _UNK_005a4d00;
extern "C" unsigned long _UNK_005a4d70;
extern "C" unsigned long _UNK_005a4d74;
extern "C" unsigned long _UNK_005a4d78;
extern "C" unsigned long _UNK_005a4d7c;
extern "C" unsigned long _UNK_005a4e44;
extern "C" unsigned long _UNK_005a4e48;
extern "C" unsigned long _UNK_005a4e4c;
extern "C" unsigned long _UNK_005a4e50;
extern "C" unsigned long _UNK_005a4e60;
extern "C" unsigned long _UNK_005a4e98;
extern "C" unsigned long _UNK_005a4f18;
extern "C" unsigned long _UNK_005a4f1c;
extern "C" unsigned long _UNK_005a500c;
extern "C" unsigned long _UNK_005a5010;
extern "C" unsigned long _UNK_005a5218;
extern "C" unsigned long _UNK_005a521c;
extern "C" unsigned long _UNK_005a5220;
extern "C" unsigned long _UNK_005a5224;
extern "C" unsigned long _UNK_005a5228;
extern "C" unsigned long _UNK_005a522c;
extern "C" unsigned long _UNK_005a5368;
extern "C" unsigned long _UNK_005a536c;
extern "C" unsigned long _UNK_005a5370;
extern "C" unsigned long _UNK_005a5374;
extern "C" unsigned long g_005a4c24;
extern "C" unsigned long g_005a4c58;
extern "C" unsigned long g_005a4c88;
extern "C" unsigned long g_005a4c8c;
extern "C" unsigned long g_005a4c9c;
extern "C" unsigned long g_005a4ca0;
extern "C" unsigned long g_005a4cc4;
extern "C" unsigned long g_005a4cc8;
extern "C" unsigned long g_005a4ce4;
extern "C" unsigned long g_005a4ce8;
extern "C" unsigned long g_005a4cfc;
extern "C" unsigned long g_005a4d00;
extern "C" unsigned long g_005a4d2c;
extern "C" unsigned long g_005a4d2e;
extern "C" unsigned long g_005a4d54;
extern "C" unsigned long g_005a4d56;
extern "C" unsigned long g_005a4d70;
extern "C" unsigned long g_005a4d74;
extern "C" unsigned long g_005a4d78;
extern "C" unsigned long g_005a4d7c;
extern "C" unsigned long g_005a4da4;
extern "C" unsigned long g_005a4dca;
extern "C" unsigned long g_005a4dce;
extern "C" unsigned long g_005a4e0e;
extern "C" unsigned long g_005a4e44;
extern "C" unsigned long g_005a4e48;
extern "C" unsigned long g_005a4e4c;
extern "C" unsigned long g_005a4e50;
extern "C" unsigned long g_005a4e5c;
extern "C" unsigned long g_005a4e60;
extern "C" unsigned long g_005a4e86;
extern "C" unsigned long g_005a4e98;
extern "C" unsigned long g_005a4efe;
extern "C" unsigned long g_005a4f00;
extern "C" unsigned long g_005a4f18;
extern "C" unsigned long g_005a4f1c;
extern "C" unsigned long g_005a4ffc;
extern "C" unsigned long g_005a500c;
extern "C" unsigned long g_005a5010;
extern "C" unsigned long g_005a502a;
extern "C" unsigned long g_005a5052;
extern "C" unsigned long g_005a50a8;
extern "C" unsigned long g_005a50fe;
extern "C" unsigned long g_005a5134;
extern "C" unsigned long g_005a5218;
extern "C" unsigned long g_005a521c;
extern "C" unsigned long g_005a5220;
extern "C" unsigned long g_005a5224;
extern "C" unsigned long g_005a5228;
extern "C" unsigned long g_005a522c;
extern "C" unsigned long g_005a5250;
extern "C" unsigned long g_005a527e;
extern "C" unsigned long g_005a529a;
extern "C" unsigned long g_005a52bc;
extern "C" unsigned long g_005a5368;
extern "C" unsigned long g_005a536c;
extern "C" unsigned long g_005a5370;
extern "C" unsigned long g_005a5374;
bool BLMineCollectHeroPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLMineCollectHeroPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLMineCollectHeroPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLMineCollectHeroPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLMineCollectHeroPresenter::tick(float p1)
{
  return;
}

void BLMineCollectHeroPresenter::touchItemAtIndex(BLTableView* p1, cocos2d::CCNode* p2, int p3)
{
  return;
}

BLMineCollectHeroPresenter::~BLMineCollectHeroPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_005a4c24 + g_005a4c88);
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
  func_0079e45c(&uStack_14,&g_005a4c58 + g_005a4c8c,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLMineCollectHeroPresenter::numOfCellItem(BLTableView* p1)
{
  ((cocos2d::CCArray *)*(undefined4 *)(((int)this) + 0x24))->count();
  return;
}

undefined4 BLMineCollectHeroPresenter::sizeOfCellItem(BLTableView* p1)
{
  0 /* ctorZero */;
  return ((int)this);
}



void BLMineCollectHeroPresenter::onEnter()
{
  ((PlatformHelp *)this)->showLenovoBanner((char const*)&g_005a4e5c + g_005a4e60);
  return;
}

void BLMineCollectHeroPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar2)->removeObserver((cocos2d::CCObject*)((int)this), (char const*)&g_005a4e86 + g_005a4e98);
  ((UIManager *)this)->shareManager();
  ((UIManager *)this)->popUnEnableScrollView();
  ((PlatformHelp *)this)->hideLenovoBanner();
  return;
}

undefined4 BLMineCollectHeroPresenter::create(BLMineCollectHeroView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x28))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

// ===== 修复: 补回被误删的函数占位 (8) =====
void BLMineCollectHeroPresenter::nodeOfCellItemAtIndex(BLTableView* p1, cocos2d::CCNode* p2, int p3)
{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (((int)(intptr_t)p2 == 0) ||
     (iVar1 = func_0079e55c(p2,*(undefined4 *)((unsigned char *)((char *)&g_005a4d2c + (intptr_t)(g_005a4d70))),
                              *(undefined4 *)((unsigned char *)((char *)&g_005a4d2e + (intptr_t)(g_005a4d74))),0), iVar1 == 0)) {
    iVar1 = (undefined4)(intptr_t)(((BLMineCollectHeroItemView *)this)->create());
  }
  iVar2 = (undefined4)(intptr_t)(((cocos2d::CCArray *)*(undefined4 *)(((int)this) + 0x24))->objectAtIndex((unsigned int)p3));
  uVar3 = (undefined4)(0);
  if (iVar2 != 0) {
    uVar3 = func_0079e55c(iVar2,*(undefined4 *)((unsigned char *)((char *)&g_005a4d54 + (intptr_t)(g_005a4d78))),
                            *(undefined4 *)((unsigned char *)((char *)&g_005a4d56 + (intptr_t)(g_005a4d7c))),0);
  }
  uVar4 = (undefined4)(((BLMineCollectHeroItemView *)iVar1)->getPresenter());
  ((BLMineCollectHeroItemPresenter *)uVar4)->initWithRoleData((RoleData*)uVar3);
  return;
}

BLMineCollectHeroPresenter::BLMineCollectHeroPresenter()
{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [4];
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  0 /* ctorZero */;
  iVar3 = (undefined4)(intptr_t)(*(int *)((unsigned char *)((char *)&g_005a4da4 + (intptr_t)(g_005a4e44))));
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x4c;
  *(int *)((int)this + 4*(6)) = iVar3 + 0x7c;
  *(int *)((int)this + 4*(7)) = iVar3 + 0x8c;
  uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  uStack_18 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_005a4dca + (intptr_t)(g_005a4e48))));
  uStack_14 = (undefined4)(0);
  ((cocos2d::CCNotificationCenter *)(((int)this)))->addObserver((cocos2d::CCObject*)uStack_18, 0, (char const*)(unsigned char *)((char *)&g_005a4dce + (intptr_t)(g_005a4e4c)), 0);
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
  func_0079e45c(auStack_1c,(unsigned char *)((char *)&g_005a4e0e + (intptr_t)(g_005a4e50)),auStack_20);
  ((BLLeakUtils *)(uVar1))->addClass((std::string)(char*)auStack_1c);
  func_0079e2bc(auStack_1c);
  return;
}

void BLMineCollectHeroPresenter::initRolesData()
{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  ((cocos2d::CCArray *)*(undefined4 *)(((int)this) + 0x24))->removeAllObjects();
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  piVar1 = (int *)(**(code **)(*piVar1 + 0x28))();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x60))());
  for (uVar5 = 0; uVar3 = (undefined4)(intptr_t)(((cocos2d::CCArray *)uVar2)->count(), uVar5 < uVar3); uVar5 = uVar5 + 1) {
    iVar4 = (undefined4)(intptr_t)(((cocos2d::CCArray *)uVar2)->objectAtIndex((unsigned int)uVar5));
    if ((iVar4 != 0) &&
       (iVar4 = func_0079e55c(iVar4,*(undefined4 *)((unsigned char *)((char *)&g_005a4efe + (intptr_t)(g_005a4f18))),
                                *(undefined4 *)((unsigned char *)((char *)&g_005a4f00 + (intptr_t)(g_005a4f1c))),0), iVar4 != 0)) {
      ((cocos2d::CCArray *)this)->addObject((cocos2d::CCObject*)*(undefined4 *)(((int)this) + 0x24));
    }
  }
  return;
}

void BLMineCollectHeroPresenter::onClose(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(0x105);
  iVar2 = (undefined4)(intptr_t)(((sir::singleton<MineDealData, 0> *)this)->instance());
  *(undefined4 *)(iVar2 + 0x94) = *(undefined4 *)(iVar2 + 0x90);
  return;
}

void BLMineCollectHeroPresenter::onCancle(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(0x105);
  iVar2 = (undefined4)(intptr_t)(((sir::singleton<MineDealData, 0> *)this)->instance());
  *(undefined4 *)(iVar2 + 0x94) = *(undefined4 *)(iVar2 + 0x90);
  return;
}

undefined8 BLMineCollectHeroPresenter::onSure(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void BLMineCollectHeroPresenter::updateData(cocos2d::CCObject* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMineCollectHeroPresenter::initWithView(BLMineCollectHeroView* p1)
{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  code *pcVar4;
  undefined1 auStack_38 [8];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  *(undefined4 *)(((int)this) + 0x20) = (undefined4)(intptr_t)p1;
  piVar1 = (int *)((BLMineCollectHeroView *)p1)->getBtnClose();
  pcVar4 = *(code **)(*piVar1 + 0x26c);
  func_0079e45c(&uStack_20,&g_005a5250 + g_005a5368,&uStack_28);
  (*pcVar4)(piVar1,&uStack_20);
  func_0079e2bc(&uStack_20);
  piVar1 = (int *)((BLMineCollectHeroView *)*(undefined4 *)(((int)this) + 0x20))->getBtnClose();
  uStack_30 = (undefined4)(*(undefined4 *)(&g_005a527e + g_005a536c));
  uStack_2c = (undefined4)(0);
  (**(code **)(*piVar1 + 0x254))(piVar1,((int)this),uStack_30,0,0x20);
  piVar1 = (int *)((BLMineCollectHeroView *)*(undefined4 *)(((int)this) + 0x20))->getBtnCancle();
  uStack_28 = (undefined4)(*(undefined4 *)(&g_005a529a + g_005a5370));
  uStack_24 = (undefined4)(0);
  (**(code **)(*piVar1 + 0x254))(piVar1,((int)this),uStack_28,0,0x20);
  piVar1 = (int *)((BLMineCollectHeroView *)*(undefined4 *)(((int)this) + 0x20))->getBtnSure();
  uStack_20 = (undefined4)(*(undefined4 *)(&g_005a52bc + g_005a5374));
  uStack_1c = (undefined4)(0);
  (**(code **)(*piVar1 + 0x254))(piVar1,((int)this),uStack_20,0,0x20);
  piVar1 = (int *)((BLMineCollectHeroView *)*(undefined4 *)(((int)this) + 0x20))->getBtnClose();
  pcVar4 = *(code **)(*piVar1 + 0x28c);
  piVar2 = (int *)((BLMineCollectHeroView *)*(undefined4 *)(((int)this) + 0x20))->getBtnClose();
  piVar2 = (int *)(**(code **)(*piVar2 + 0x308))(piVar2,1);
  (**(code **)(*piVar2 + 0x1cc))(auStack_38,piVar2);
  (*pcVar4)(piVar1,auStack_38);
  piVar1 = (int *)((BLMineCollectHeroView *)*(undefined4 *)(((int)this) + 0x20))->getTableViewRoles();
  (**(code **)(*piVar1 + 0x21c))(piVar1,((int)this) + 0x18);
  piVar1 = (int *)((BLMineCollectHeroView *)*(undefined4 *)(((int)this) + 0x20))->getTableViewRoles();
  (**(code **)(*piVar1 + 0x214))(piVar1,((int)this) + 0x1c);
  piVar1 = (int *)((BLMineCollectHeroView *)*(undefined4 *)(((int)this) + 0x20))->getTableViewRoles();
  (**(code **)(*piVar1 + 0x22c))(piVar1,0);
  BLMineCollectHeroPresenter::initRolesData();
  uVar3 = (undefined4)(((BLMineCollectHeroView *)*(undefined4 *)(((int)this) + 0x20))->getTableViewRoles());
  ((BLTableView *)uVar3)->reloadData(0, 1);
  BLMineCollectHeroPresenter::updateData(0);
  return;
}
