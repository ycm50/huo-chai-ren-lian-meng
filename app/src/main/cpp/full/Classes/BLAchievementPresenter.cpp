#include "BLAchievementPresenter.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "CCObject.h"
#include "CCNode.h"
#include "CCTouch.h"
#include "CCArray.h"
#include "CCDirector.h"
#include "BLAchievementItemPresenter.h"
#include "BLAchievementItemView.h"
#include "BLAchievementManager.h"
#include "BLAchievementView.h"
#include "BLLeakUtils.h"
#include "BLTableView.h"
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
extern "C" long long software_udf(...);

extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_004ee3f0;
extern "C" unsigned long UNK_004ee408;
extern "C" unsigned long UNK_004ee420;
extern "C" unsigned long UNK_004ee4ac;
extern "C" unsigned long UNK_004ee4e0;
extern "C" unsigned long UNK_004ee524;
extern "C" unsigned long UNK_004ee54c;
extern "C" unsigned long UNK_004ee578;
extern "C" unsigned long UNK_004ee5f8;
extern "C" unsigned long UNK_004ee5fa;
extern "C" unsigned long UNK_004ee64e;
extern "C" unsigned long UNK_004ee69a;
extern "C" unsigned long UNK_004ee73e;
extern "C" unsigned long _UNK_004ee3f4;
extern "C" unsigned long _UNK_004ee40c;
extern "C" unsigned long _UNK_004ee424;
extern "C" unsigned long _UNK_004ee510;
extern "C" unsigned long _UNK_004ee514;
extern "C" unsigned long _UNK_004ee528;
extern "C" unsigned long _UNK_004ee550;
extern "C" unsigned long _UNK_004ee57c;
extern "C" unsigned long _UNK_004ee5a8;
extern "C" unsigned long _UNK_004ee5ac;
extern "C" unsigned long _UNK_004ee624;
extern "C" unsigned long _UNK_004ee628;
extern "C" unsigned long _UNK_004ee6cc;
extern "C" unsigned long _UNK_004ee6d0;
extern "C" unsigned long _UNK_004ee8e8;
extern "C" unsigned long _UNK_004ee8ec;
extern "C" unsigned long _UNK_004ee8f0;
extern "C" unsigned long _UNK_004ee8f4;
extern "C" unsigned long g_004ee3f0;
extern "C" unsigned long g_004ee3f4;
extern "C" unsigned long g_004ee408;
extern "C" unsigned long g_004ee40c;
extern "C" unsigned long g_004ee420;
extern "C" unsigned long g_004ee424;
extern "C" unsigned long g_004ee4ac;
extern "C" unsigned long g_004ee4e0;
extern "C" unsigned long g_004ee510;
extern "C" unsigned long g_004ee514;
extern "C" unsigned long g_004ee524;
extern "C" unsigned long g_004ee528;
extern "C" unsigned long g_004ee54c;
extern "C" unsigned long g_004ee550;
extern "C" unsigned long g_004ee578;
extern "C" unsigned long g_004ee57c;
extern "C" unsigned long g_004ee5a8;
extern "C" unsigned long g_004ee5ac;
extern "C" unsigned long g_004ee5f8;
extern "C" unsigned long g_004ee5fa;
extern "C" unsigned long g_004ee624;
extern "C" unsigned long g_004ee628;
extern "C" unsigned long g_004ee64e;
extern "C" unsigned long g_004ee69a;
extern "C" unsigned long g_004ee6cc;
extern "C" unsigned long g_004ee6d0;
extern "C" unsigned long g_004ee73e;
extern "C" unsigned long g_004ee8e8;
extern "C" unsigned long g_004ee8ec;
extern "C" unsigned long g_004ee8f0;
extern "C" unsigned long g_004ee8f4;
bool BLAchievementPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLAchievementPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLAchievementPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLAchievementPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLAchievementPresenter::touchItemAtIndex(BLTableView* p1, cocos2d::CCNode* p2, int p3)
{
  return;
}

void BLAchievementPresenter::tick(float p1)
{
  return;
}

BLAchievementPresenter::~BLAchievementPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_004ee4ac + g_004ee510);
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
  func_0079e45c(&uStack_14,&g_004ee4e0 + g_004ee514,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLAchievementPresenter::numOfCellItem(BLTableView* p1)
{
  int *piVar1;
  
  piVar1 = (int *)((BLAchievementManager *)this)->share();
  piVar1 = (int *)(**(code **)(*piVar1 + 0x30))();
  (**(code **)(*piVar1 + 0x18))();
  ((cocos2d::CCArray *)this)->count();
  return;
}

void BLAchievementPresenter::onClose(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  ((BLAchievementManager *)this)->share();
  ((BLAchievementManager *)this)->updateDataToDB();
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(0x78);
  return;
}

undefined4 BLAchievementPresenter::sizeOfCellItem(BLTableView* p1)
{
  0 /* ctorZero */;
  return ((int)this);
}



undefined4 BLAchievementPresenter::create(BLAchievementView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x28))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLAchievementPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  ((BLAchievementManager *)this)->share();
  ((BLAchievementManager *)this)->updateDataToDB();
  ((UIManager *)this)->shareManager();
  ((UIManager *)this)->popUnEnableScrollView();
  return;
}

void BLAchievementPresenter::onEnter()
{
  return;
}

// ===== 修复: 补回被误删的函数占位 (3) =====
void BLAchievementPresenter::nodeOfCellItemAtIndex(BLTableView* p1, cocos2d::CCNode* p2, int p3)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

BLAchievementPresenter::BLAchievementPresenter()
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
  iVar3 = (undefined4)(intptr_t)(*(int *)((unsigned char *)((char *)&g_004ee64e + (intptr_t)(g_004ee6cc))));
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
  func_0079e45c(&uStack_14,(unsigned char *)((char *)&g_004ee69a + (intptr_t)(g_004ee6d0)),&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

void BLAchievementPresenter::initWithView(BLAchievementView* p1)
{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  
  *(undefined4 *)(((int)this) + 0x20) = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  piVar3 = (int *)((BLAchievementView *)(p1))->getBtnClose();
  iVar2 = (undefined4)(intptr_t)(g_004ee8e8);
  uVar7 = (undefined4)(0);
  (**(code **)(*(int *)(piVar3) + (0x254)))
            (piVar3,((int)this),*(undefined4 *)((unsigned char *)((char *)&g_004ee73e + (intptr_t)(g_004ee8ec)) + g_004ee8e8),0,0x20);
  piVar3 = (int *)((BLAchievementView *)(*(undefined4 *)(((int)this) + 0x20)))->getTableViewTableView();
  (**(code **)(*(int *)(piVar3) + (0x21c)))(piVar3,((int)this) + 0x18);
  piVar3 = (int *)((BLAchievementView *)(*(undefined4 *)(((int)this) + 0x20)))->getTableViewTableView();
  (**(code **)(*(int *)(piVar3) + (0x214)))(piVar3,((int)this) + 0x1c);
  piVar3 = (int *)((BLAchievementView *)(*(undefined4 *)(((int)this) + 0x20)))->getTableViewTableView();
  (**(code **)(*(int *)(piVar3) + (0x22c)))(piVar3,1);
  while( true ) {
    piVar3 = (int *)((BLAchievementManager *)this)->share();
    piVar3 = (int *)(**(code **)(*(int *)(piVar3) + (0x30)))();
    (**(code **)(*(int *)(piVar3) + (0x18)))();
    uVar4 = (undefined4)(((cocos2d::CCArray *)this)->count());
    if (uVar4 <= uVar7) break;
    piVar3 = (int *)((BLAchievementManager *)this)->share();
    piVar3 = (int *)(**(code **)(*(int *)(piVar3) + (0x30)))();
    uVar5 = (undefined4)((**(code **)(*(int *)(piVar3) + (0x18)))());
    iVar6 = (undefined4)(intptr_t)(((cocos2d::CCArray *)(uVar5))->objectAtIndex((unsigned int)uVar7));
    if (iVar6 == 0) goto code_r0x004ee8ce;
    piVar3 = (int *)func_0079e55c(iVar6,*(undefined4 *)((unsigned char *)((char *)&g_004ee73e + (intptr_t)(g_004ee8f0)) + iVar2),
                                    *(undefined4 *)((unsigned char *)((char *)&g_004ee73e + (intptr_t)(g_004ee8f4)) + iVar2),0);
    iVar6 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar3) + (0x58)))());
    if ((iVar6 != 0) && (iVar6 = (**(code **)(*(int *)(piVar3) + (0x50)))(piVar3), iVar6 == 0)) {
      ((cocos2d::CCArray *)(*(undefined4 *)(((int)this) + 0x24)))->addObject((cocos2d::CCObject*)piVar3);
    }
    uVar7 = (undefined4)(uVar7 + 1);
  }
  uVar7 = (undefined4)(0);
  while( true ) {
    piVar3 = (int *)((BLAchievementManager *)this)->share();
    piVar3 = (int *)(**(code **)(*(int *)(piVar3) + (0x30)))();
    (**(code **)(*(int *)(piVar3) + (0x18)))();
    uVar4 = (undefined4)(((cocos2d::CCArray *)this)->count());
    if (uVar4 <= uVar7) break;
    piVar3 = (int *)((BLAchievementManager *)this)->share();
    piVar3 = (int *)(**(code **)(*(int *)(piVar3) + (0x30)))();
    uVar5 = (undefined4)((**(code **)(*(int *)(piVar3) + (0x18)))());
    iVar6 = (undefined4)(intptr_t)(((cocos2d::CCArray *)(uVar5))->objectAtIndex((unsigned int)uVar7));
    if (iVar6 == 0) goto code_r0x004ee8ce;
    piVar3 = (int *)func_0079e55c(iVar6,*(undefined4 *)((unsigned char *)((char *)&g_004ee73e + (intptr_t)(g_004ee8f0)) + iVar2),
                                    *(undefined4 *)((unsigned char *)((char *)&g_004ee73e + (intptr_t)(g_004ee8f4)) + iVar2),0);
    iVar6 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar3) + (0x58)))());
    if (iVar6 == 0) {
      ((cocos2d::CCArray *)(*(undefined4 *)(((int)this) + 0x24)))->addObject((cocos2d::CCObject*)piVar3);
    }
    uVar7 = (undefined4)(uVar7 + 1);
  }
  uVar7 = (undefined4)(0);
  while( true ) {
    piVar3 = (int *)((BLAchievementManager *)this)->share();
    piVar3 = (int *)(**(code **)(*(int *)(piVar3) + (0x30)))();
    (**(code **)(*(int *)(piVar3) + (0x18)))();
    uVar4 = (undefined4)(((cocos2d::CCArray *)this)->count());
    if (uVar4 <= uVar7) {
      uVar5 = (undefined4)(((BLAchievementView *)(*(undefined4 *)(((int)this) + 0x20)))->getTableViewTableView());
      ((BLTableView *)(uVar5))->reloadData(0, 1);
      return;
    }
    piVar3 = (int *)((BLAchievementManager *)this)->share();
    piVar3 = (int *)(**(code **)(*(int *)(piVar3) + (0x30)))();
    uVar5 = (undefined4)((**(code **)(*(int *)(piVar3) + (0x18)))());
    iVar6 = (undefined4)(intptr_t)(((cocos2d::CCArray *)(uVar5))->objectAtIndex((unsigned int)uVar7));
    if (iVar6 == 0) break;
    piVar3 = (int *)func_0079e55c(iVar6,*(undefined4 *)((unsigned char *)((char *)&g_004ee73e + (intptr_t)(g_004ee8f0)) + iVar2),
                                    *(undefined4 *)((unsigned char *)((char *)&g_004ee73e + (intptr_t)(g_004ee8f4)) + iVar2),0);
    iVar6 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar3) + (0x58)))());
    if ((iVar6 != 0) && (iVar6 = (**(code **)(*(int *)(piVar3) + (0x50)))(piVar3), iVar6 != 0)) {
      ((cocos2d::CCArray *)(*(undefined4 *)(((int)this) + 0x24)))->addObject((cocos2d::CCObject*)piVar3);
    }
    uVar7 = (undefined4)(uVar7 + 1);
  }
code_r0x004ee8ce:
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xff,0x4ee8d0);
  (*pcVar1)();
}
