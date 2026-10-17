#include "BLTreasureRolePresenter.h"
#include "CCAction.h"
#include "CCActionInterval.h"
#include "CCGeometry.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "CCNotificationCenter.h"
#include "BLTreasureRoleView.h"
#include "CCObject.h"
#include "CCNode.h"
#include "CCTouch.h"
#include "CCArray.h"
#include "CCDirector.h"
#include "RoleData.h"
#include "BLLeakUtils.h"
#include "BLTableView.h"
#include "BLTreasureRoleItemPresenter.h"
#include "BLTreasureRoleItemView.h"
#include "DataManager.h"
#include "Toast.h"
#include "TreasureDataManager.h"
#include "TreasureHeroData.h"
#include "UIManager.h"
#include "UserData.h"
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
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long func_0079e5bc(...);
extern "C" long long func_0079e68c(...);
extern "C" long long func_0079e784(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_006abe18;
extern "C" unsigned long UNK_006abe30;
extern "C" unsigned long UNK_006abe48;
extern "C" unsigned long UNK_006abed4;
extern "C" unsigned long UNK_006abf08;
extern "C" unsigned long UNK_006abf4c;
extern "C" unsigned long UNK_006abf74;
extern "C" unsigned long UNK_006abf94;
extern "C" unsigned long UNK_006abfdc;
extern "C" unsigned long UNK_006abfde;
extern "C" unsigned long UNK_006ac004;
extern "C" unsigned long UNK_006ac006;
extern "C" unsigned long UNK_006ac0a8;
extern "C" unsigned long UNK_006ac150;
extern "C" unsigned long UNK_006ac172;
extern "C" unsigned long UNK_006ac1b6;
extern "C" unsigned long UNK_006ac3ac;
extern "C" unsigned long UNK_006ac4e8;
extern "C" unsigned long UNK_006ac500;
extern "C" unsigned long UNK_006ac518;
extern "C" unsigned long _UNK_006abe1c;
extern "C" unsigned long _UNK_006abe34;
extern "C" unsigned long _UNK_006abe4c;
extern "C" unsigned long _UNK_006abf38;
extern "C" unsigned long _UNK_006abf3c;
extern "C" unsigned long _UNK_006abf50;
extern "C" unsigned long _UNK_006abf78;
extern "C" unsigned long _UNK_006abf98;
extern "C" unsigned long _UNK_006abfac;
extern "C" unsigned long _UNK_006abfb0;
extern "C" unsigned long _UNK_006ac020;
extern "C" unsigned long _UNK_006ac024;
extern "C" unsigned long _UNK_006ac028;
extern "C" unsigned long _UNK_006ac02c;
extern "C" unsigned long _UNK_006ac0c8;
extern "C" unsigned long _UNK_006ac0cc;
extern "C" unsigned long _UNK_006ac0d0;
extern "C" unsigned long _UNK_006ac0d4;
extern "C" unsigned long _UNK_006ac13c;
extern "C" unsigned long _UNK_006ac140;
extern "C" unsigned long _UNK_006ac160;
extern "C" unsigned long _UNK_006ac1e8;
extern "C" unsigned long _UNK_006ac1ec;
extern "C" unsigned long _UNK_006ac390;
extern "C" unsigned long _UNK_006ac4ac;
extern "C" unsigned long _UNK_006ac4b0;
extern "C" unsigned long _UNK_006ac4b4;
extern "C" unsigned long _UNK_006ac4b8;
extern "C" unsigned long _UNK_006ac4bc;
extern "C" unsigned long _UNK_006ac4c0;
extern "C" unsigned long _UNK_006ac4c4;
extern "C" unsigned long _UNK_006ac568;
extern "C" unsigned long _UNK_006ac56c;
extern "C" unsigned long _UNK_006ac570;
extern "C" unsigned long _UNK_006ac574;
extern "C" unsigned long _UNK_006ac578;
extern "C" unsigned long extraout_r3;
extern "C" unsigned long g_006abe18;
extern "C" unsigned long g_006abe1c;
extern "C" unsigned long g_006abe30;
extern "C" unsigned long g_006abe34;
extern "C" unsigned long g_006abe48;
extern "C" unsigned long g_006abe4c;
extern "C" unsigned long g_006abed4;
extern "C" unsigned long g_006abf08;
extern "C" unsigned long g_006abf38;
extern "C" unsigned long g_006abf3c;
extern "C" unsigned long g_006abf4c;
extern "C" unsigned long g_006abf50;
extern "C" unsigned long g_006abf74;
extern "C" unsigned long g_006abf78;
extern "C" unsigned long g_006abf94;
extern "C" unsigned long g_006abf98;
extern "C" unsigned long g_006abfac;
extern "C" unsigned long g_006abfb0;
extern "C" unsigned long g_006abfdc;
extern "C" unsigned long g_006abfde;
extern "C" unsigned long g_006ac004;
extern "C" unsigned long g_006ac006;
extern "C" unsigned long g_006ac020;
extern "C" unsigned long g_006ac024;
extern "C" unsigned long g_006ac028;
extern "C" unsigned long g_006ac02c;
extern "C" unsigned long g_006ac0a8;
extern "C" unsigned long g_006ac0c8;
extern "C" unsigned long g_006ac0cc;
extern "C" unsigned long g_006ac0d0;
extern "C" unsigned long g_006ac0d4;
extern "C" unsigned long g_006ac13c;
extern "C" unsigned long g_006ac140;
extern "C" unsigned long g_006ac150;
extern "C" unsigned long g_006ac160;
extern "C" unsigned long g_006ac172;
extern "C" unsigned long g_006ac1b6;
extern "C" unsigned long g_006ac1e8;
extern "C" unsigned long g_006ac1ec;
extern "C" unsigned long g_006ac390;
extern "C" unsigned long g_006ac3ac;
extern "C" unsigned long g_006ac4ac;
extern "C" unsigned long g_006ac4b0;
extern "C" unsigned long g_006ac4b4;
extern "C" unsigned long g_006ac4b8;
extern "C" unsigned long g_006ac4bc;
extern "C" unsigned long g_006ac4c0;
extern "C" unsigned long g_006ac4c4;
extern "C" unsigned long g_006ac4e8;
extern "C" unsigned long g_006ac500;
extern "C" unsigned long g_006ac518;
extern "C" unsigned long g_006ac568;
extern "C" unsigned long g_006ac56c;
extern "C" unsigned long g_006ac570;
extern "C" unsigned long g_006ac574;
extern "C" unsigned long g_006ac578;
bool BLTreasureRolePresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLTreasureRolePresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLTreasureRolePresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLTreasureRolePresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLTreasureRolePresenter::tick(float p1)
{
  return;
}

void BLTreasureRolePresenter::touchItemAtIndex(BLTableView* p1, cocos2d::CCNode* p2, int p3)
{
  return;
}

void BLTreasureRolePresenter::onOpen(cocos2d::CCObject* p1, unsigned int p2)
{
  return;
}

void BLTreasureRolePresenter::onLeft(cocos2d::CCObject* p1, unsigned int p2)
{
  return;
}

BLTreasureRolePresenter::~BLTreasureRolePresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_006abed4 + g_006abf38);
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
  func_0079e45c(&uStack_14,&g_006abf08 + g_006abf3c,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLTreasureRolePresenter::numOfCellItem(BLTableView* p1)
{
  ((cocos2d::CCArray *)*(undefined4 *)(((int)this) + 0x24))->count();
  return;
}

undefined4 BLTreasureRolePresenter::sizeOfCellItem(BLTableView* p1)
{
  0 /* ctorZero */;
  return ((int)this);
}




void BLTreasureRolePresenter::onclose()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar1)->postNotification((char const*)&g_006ac150 + g_006ac160);
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(0x1f7);
  return;
}

BLTreasureRolePresenter::BLTreasureRolePresenter()
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
  iVar3 = (undefined4)(intptr_t)(*(int *)((unsigned char *)((char *)&g_006ac172 + (intptr_t)(g_006ac1e8))));
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x4c;
  *(int *)((int)this + 4*(6)) = iVar3 + 0x7c;
  *(int *)((int)this + 4*(7)) = iVar3 + 0x8c;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 0);
  iVar3 = (undefined4)(intptr_t)(cocos2d::CCArray::create());
  *(int *)((int)this + 4*(9)) = iVar3;
  if (iVar3 != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,(unsigned char *)((char *)&g_006ac1b6 + (intptr_t)(g_006ac1ec)),&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

void BLTreasureRolePresenter::onEnter()
{
  return;
}

void BLTreasureRolePresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  return;
}

undefined4 BLTreasureRolePresenter::create(BLTreasureRoleView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x28))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

// ===== 修复: 补回被误删的函数占位 (6) =====
void BLTreasureRolePresenter::nodeOfCellItemAtIndex(BLTableView* p1, cocos2d::CCNode* p2, int p3)
{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (((int)(intptr_t)p2 == 0) ||
     (iVar1 = func_0079e55c(p2,*(undefined4 *)((unsigned char *)((char *)&g_006abfdc + (intptr_t)(g_006ac020))),
                              *(undefined4 *)((unsigned char *)((char *)&g_006abfde + (intptr_t)(g_006ac024))),0), iVar1 == 0)) {
    iVar1 = (undefined4)(intptr_t)(((BLTreasureRoleItemView *)this)->create());
  }
  iVar2 = (undefined4)(intptr_t)(((cocos2d::CCArray *)*(undefined4 *)(((int)this) + 0x24))->objectAtIndex((unsigned int)p3));
  uVar3 = (undefined4)(0);
  if (iVar2 != 0) {
    uVar3 = func_0079e55c(iVar2,*(undefined4 *)((unsigned char *)((char *)&g_006ac004 + (intptr_t)(g_006ac028))),
                            *(undefined4 *)((unsigned char *)((char *)&g_006ac006 + (intptr_t)(g_006ac02c))),0);
  }
  uVar4 = (undefined4)(((BLTreasureRoleItemView *)iVar1)->getPresenter());
  ((BLTreasureRoleItemPresenter *)uVar4)->initWithRoleData((RoleData*)uVar3);
  return;
}

void BLTreasureRolePresenter::onRight(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLTreasureRolePresenter::onNextFlash()
{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_20 [4];
  int iStack_1c;
  undefined1 auStack_18 [12];
  
  piVar1 = *(int **)(*(int *)(((int)this) + 0x20) + 0x120);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*(int *)(piVar1) + (0x90)))(piVar1,1);
  }
  uVar2 = (undefined4)(cocos2d::CCDirector::sharedDirector());
  *(CCSize *)(auStack_20) = ((cocos2d::CCDirector *)(uVar2))->getWinSize();
  uVar3 = (undefined4)(*(undefined4 *)(*(int *)(((int)this) + 0x20) + 0x120));
  uVar2 = (undefined4)(func_0079e4fc(iStack_1c + -0x80000000,0x3f000000));
  uVar2 = (undefined4)(func_0079e59c(uVar2,g_006ac13c));
  0 /* ctorZero */;
  uVar2 = (undefined4)(cocos2d::CCMoveTo::create(0x3f000000, *(const CCPoint *)(void *)auStack_18));
  ((cocos2d::CCNode *)(uVar3))->runAction((cocos2d::CCAction*)uVar2);
  return;
}

void BLTreasureRolePresenter::initRolesData()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

undefined4 BLTreasureRolePresenter::initWithView(BLTreasureRoleView* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void BLTreasureRolePresenter::onRefresh(cocos2d::CCObject* p1, unsigned int p2)
{
  int *piVar1;
  undefined4 uVar2;
  undefined *puVar3;
  int iVar4;
  int extraout_r3;
  int iStack_18;
  
  ((TreasureDataManager *)this)->getInstance();
  piVar1 = (int *)((TreasureDataManager *)this)->getMapItemDatas();
  iVar4 = (int)*(int *)&(*piVar1);
  if ((uint)(piVar1[1] - iVar4 >> 2) < 100) {
    func_0079e784((unsigned char *)((char *)&g_006ac4e8 + (intptr_t)(g_006ac570)),99);
    iVar4 = (undefined4)(intptr_t)(extraout_r3);
  }
  iStack_18 = (undefined4)(intptr_t)((int *)((int)this));
  if (*(char *)(*(int *)(iVar4 + 0x18c) + 0x18) == '\0') {
    iVar4 = (undefined4)(intptr_t)(((TreasureDataManager *)this)->getInstance());
    iVar4 = (undefined4)(intptr_t)(((TreasureHeroData *)*(undefined4 *)(iVar4 + 0x70))->checkModifyHeroData());
    if (iVar4 != 0) {
      uVar2 = (undefined4)(((DataManager *)this)->shareDataManager());
      iVar4 = (undefined4)(intptr_t)(((DataManager *)uVar2)->isEnoughVirNumber(2, 0x14, 1));
      if (iVar4 != 0) {
        iVar4 = (undefined4)(intptr_t)(((TreasureDataManager *)this)->getInstance());
        ((TreasureHeroData *)*(undefined4 *)(iVar4 + 0x70))->checkAddedHeroData();
        piVar1 = (int *)((DataManager *)this)->shareDataManager();
        uVar2 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x28)))());
        iStack_18 = 1;
        ((UserData *)uVar2)->subVirNumber(2, g_006ac568, g_006ac56c);
        BLTreasureRolePresenter::initRolesData();
        ((BLTableView *)*(undefined4 *)(*(int *)(((int)this) + 0x20) + 0x11c))->reloadData(0, 1);
      }
      goto code_r0x006ac564;
    }
    uVar2 = (undefined4)(((Toast *)this)->sharedToast());
    puVar3 = (unsigned char *)((char *)&g_006ac518 + (intptr_t)(g_006ac578));
  }
  else {
    uVar2 = (undefined4)(((Toast *)this)->sharedToast());
    puVar3 = (unsigned char *)((char *)&g_006ac500 + (intptr_t)(g_006ac574));
  }
  ((Toast *)uVar2)->showToast((char const*)puVar3);
code_r0x006ac564:
  return;
}
