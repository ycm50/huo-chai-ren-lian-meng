#include "BLPracticeHeroPresenter.h"
#include "CCNotificationCenter.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "CCObject.h"
#include "CCNode.h"
#include "CCTouch.h"
#include "CCArray.h"
#include "CCDirector.h"
#include "RoleData.h"
#include "BLPracticeHeroView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLPracticeHeroItemPresenter.h"
#include "BLPracticeHeroItemView.h"
#include "BLPracticeTimeItemPresenter.h"
#include "BLPracticeTimeItemView.h"
#include "BLTableView.h"
#include "DataManager.h"
#include "PracDataItem.h"
#include "PracticeData.h"
#include "Toast.h"
#include "UIManager.h"
#include "UserData.h"
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
extern "C" long long func_0079e31c(...);
extern "C" long long func_0079e34c(...);
extern "C" long long func_0079e43c(...);
extern "C" long long func_0079e44c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e46c(...);
extern "C" long long func_0079e47c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e6c0(...);
extern "C" long long func_0079e724(...);
extern "C" long long func_0079e734(...);
extern "C" long long func_0079e8c4(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_00638ea0;
extern "C" unsigned long UNK_00638eb8;
extern "C" unsigned long UNK_00638ed0;
extern "C" unsigned long UNK_00638f58;
extern "C" unsigned long UNK_00638f8c;
extern "C" unsigned long UNK_00638fd0;
extern "C" unsigned long UNK_00638ff8;
extern "C" unsigned long UNK_00639074;
extern "C" unsigned long UNK_0063913a;
extern "C" unsigned long UNK_00639186;
extern "C" unsigned long UNK_006391d6;
extern "C" unsigned long UNK_006391d8;
extern "C" unsigned long UNK_006391f0;
extern "C" unsigned long UNK_006391f2;
extern "C" unsigned long UNK_0063920a;
extern "C" unsigned long UNK_0063920c;
extern "C" unsigned long UNK_006392c8;
extern "C" unsigned long UNK_00639308;
extern "C" unsigned long UNK_00639346;
extern "C" unsigned long UNK_0063942a;
extern "C" unsigned long UNK_006394b2;
extern "C" unsigned long UNK_0063957c;
extern "C" unsigned long UNK_0063959c;
extern "C" unsigned long UNK_00639624;
extern "C" unsigned long UNK_006396ec;
extern "C" unsigned long UNK_0063970c;
extern "C" unsigned long UNK_00639794;
extern "C" unsigned long UNK_00639796;
extern "C" unsigned long UNK_0063986e;
extern "C" unsigned long UNK_00639898;
extern "C" unsigned long UNK_006398b6;
extern "C" unsigned long UNK_006398d6;
extern "C" unsigned long _UNK_00638ea4;
extern "C" unsigned long _UNK_00638ebc;
extern "C" unsigned long _UNK_00638ed4;
extern "C" unsigned long _UNK_00638fbc;
extern "C" unsigned long _UNK_00638fc0;
extern "C" unsigned long _UNK_00638fd4;
extern "C" unsigned long _UNK_00638ffc;
extern "C" unsigned long _UNK_00639020;
extern "C" unsigned long _UNK_00639024;
extern "C" unsigned long _UNK_00639028;
extern "C" unsigned long _UNK_0063902c;
extern "C" unsigned long _UNK_00639100;
extern "C" unsigned long _UNK_00639104;
extern "C" unsigned long _UNK_00639108;
extern "C" unsigned long _UNK_0063910c;
extern "C" unsigned long _UNK_00639110;
extern "C" unsigned long _UNK_00639114;
extern "C" unsigned long _UNK_006391b8;
extern "C" unsigned long _UNK_006391bc;
extern "C" unsigned long _UNK_0063921c;
extern "C" unsigned long _UNK_00639220;
extern "C" unsigned long _UNK_00639224;
extern "C" unsigned long _UNK_00639228;
extern "C" unsigned long _UNK_0063922c;
extern "C" unsigned long _UNK_00639230;
extern "C" unsigned long _UNK_006392cc;
extern "C" unsigned long _UNK_00639388;
extern "C" unsigned long _UNK_0063938c;
extern "C" unsigned long _UNK_00639454;
extern "C" unsigned long _UNK_006395c0;
extern "C" unsigned long _UNK_006395c4;
extern "C" unsigned long _UNK_006395c8;
extern "C" unsigned long _UNK_006395cc;
extern "C" unsigned long _UNK_006395d0;
extern "C" unsigned long _UNK_00639738;
extern "C" unsigned long _UNK_0063973c;
extern "C" unsigned long _UNK_00639740;
extern "C" unsigned long _UNK_00639744;
extern "C" unsigned long _UNK_00639748;
extern "C" unsigned long _UNK_0063984c;
extern "C" unsigned long _UNK_00639850;
extern "C" unsigned long _UNK_006399c0;
extern "C" unsigned long _UNK_006399c4;
extern "C" unsigned long _UNK_006399c8;
extern "C" unsigned long _UNK_006399cc;
extern "C" unsigned long g_00638ea0;
extern "C" unsigned long g_00638ea4;
extern "C" unsigned long g_00638eb8;
extern "C" unsigned long g_00638ebc;
extern "C" unsigned long g_00638ed0;
extern "C" unsigned long g_00638ed4;
extern "C" unsigned long g_00638f58;
extern "C" unsigned long g_00638f8c;
extern "C" unsigned long g_00638fbc;
extern "C" unsigned long g_00638fc0;
extern "C" unsigned long g_00638fd0;
extern "C" unsigned long g_00638fd4;
extern "C" unsigned long g_00638ff8;
extern "C" unsigned long g_00638ffc;
extern "C" unsigned long g_00639020;
extern "C" unsigned long g_00639024;
extern "C" unsigned long g_00639028;
extern "C" unsigned long g_0063902c;
extern "C" unsigned long g_00639074;
extern "C" unsigned long g_00639100;
extern "C" unsigned long g_00639104;
extern "C" unsigned long g_00639108;
extern "C" unsigned long g_0063910c;
extern "C" unsigned long g_00639110;
extern "C" unsigned long g_00639114;
extern "C" unsigned long g_0063913a;
extern "C" unsigned long g_00639186;
extern "C" unsigned long g_006391b8;
extern "C" unsigned long g_006391bc;
extern "C" unsigned long g_006391d6;
extern "C" unsigned long g_006391d8;
extern "C" unsigned long g_006391f0;
extern "C" unsigned long g_006391f2;
extern "C" unsigned long g_0063920a;
extern "C" unsigned long g_0063920c;
extern "C" unsigned long g_0063921c;
extern "C" unsigned long g_00639220;
extern "C" unsigned long g_00639224;
extern "C" unsigned long g_00639228;
extern "C" unsigned long g_0063922c;
extern "C" unsigned long g_00639230;
extern "C" unsigned long g_006392c8;
extern "C" unsigned long g_006392cc;
extern "C" unsigned long g_00639308;
extern "C" unsigned long g_00639346;
extern "C" unsigned long g_00639388;
extern "C" unsigned long g_0063938c;
extern "C" unsigned long g_0063942a;
extern "C" unsigned long g_00639454;
extern "C" unsigned long g_006394b2;
extern "C" unsigned long g_0063957c;
extern "C" unsigned long g_0063959c;
extern "C" unsigned long g_006395c0;
extern "C" unsigned long g_006395c4;
extern "C" unsigned long g_006395c8;
extern "C" unsigned long g_006395cc;
extern "C" unsigned long g_006395d0;
extern "C" unsigned long g_00639624;
extern "C" unsigned long g_006396ec;
extern "C" unsigned long g_0063970c;
extern "C" unsigned long g_00639738;
extern "C" unsigned long g_0063973c;
extern "C" unsigned long g_00639740;
extern "C" unsigned long g_00639744;
extern "C" unsigned long g_00639748;
extern "C" unsigned long g_00639794;
extern "C" unsigned long g_00639796;
extern "C" unsigned long g_0063984c;
extern "C" unsigned long g_00639850;
extern "C" unsigned long g_0063986e;
extern "C" unsigned long g_00639898;
extern "C" unsigned long g_006398b6;
extern "C" unsigned long g_006398d6;
extern "C" unsigned long g_006399c0;
extern "C" unsigned long g_006399c4;
extern "C" unsigned long g_006399c8;
extern "C" unsigned long g_006399cc;
bool BLPracticeHeroPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLPracticeHeroPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLPracticeHeroPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLPracticeHeroPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLPracticeHeroPresenter::tick(float p1)
{
  return;
}

void BLPracticeHeroPresenter::touchItemAtIndex(BLTableView* p1, cocos2d::CCNode* p2, int p3)
{
  return;
}

BLPracticeHeroPresenter::~BLPracticeHeroPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_00638f58 + g_00638fbc);
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
  func_0079e45c(&uStack_14,&g_00638f8c + g_00638fc0,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}


void BLPracticeHeroPresenter::onClose(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(0xe7);
  return;
}

void BLPracticeHeroPresenter::onCancle(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(0xe7);
  return;
}




void BLPracticeHeroPresenter::onExit()
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

undefined4 BLPracticeHeroPresenter::create(BLPracticeHeroView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x28))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLPracticeHeroPresenter::updateSelecetData()
{
  return;
}

// ===== 修复: 补回被误删的函数占位 (11) =====
void BLPracticeHeroPresenter::sizeOfCellItem(BLTableView* p1)
{
  undefined4 p3 = 0;

  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = (undefined4)(g_00639028);
  uVar2 = (undefined4)(g_0063902c);
  if (p3 == *(int *)(*(int *)(p1 + 0x20) + 0x10c)) {
    uVar1 = (undefined4)(g_00639020);
    uVar2 = (undefined4)(g_00639024);
  }
  0 /* ctorZero */;
  return;
}

void BLPracticeHeroPresenter::nodeOfCellItemAtIndex(BLTableView* p1, cocos2d::CCNode* p2, int p3)
{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  
  iVar1 = (undefined4)(intptr_t)(g_00639100);
  iVar5 = (undefined4)(intptr_t)((int *)((int)this));
  if ((int)(intptr_t)(int)(intptr_t)p1 != *(int *)(*(int *)(((int)this) + 0x20) + 0x10c)) {
    if ((int)(intptr_t)(int)(intptr_t)p2 == 0) {
code_r0x006390ea:
      iVar2 = (undefined4)(intptr_t)(((BLPracticeTimeItemView *)this)->create());
    }
    else {
      iVar5 = (undefined4)(intptr_t)(*(int *)((unsigned char *)((char *)&g_00639074 + (intptr_t)(g_00639104)) + g_00639100));
      uVar6 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_00639074 + (intptr_t)(g_00639114)) + g_00639100));
      iVar2 = (undefined4)(intptr_t)(func_0079e55c(p2,iVar5,uVar6,0,iVar5,uVar6,p2));
      if (iVar2 == 0) goto code_r0x006390ea;
    }
    ((BLPracticeTimeItemPresenter *)(*(undefined4 *)(iVar2 + 0x108)))->setitemid(p3);
    goto code_r0x006390fc;
  }
  if ((int)(intptr_t)(int)(intptr_t)p2 == 0) {
code_r0x00639094:
    iVar2 = (undefined4)(intptr_t)(((BLPracticeHeroItemView *)this)->create());
  }
  else {
    iVar5 = (undefined4)(intptr_t)(*(int *)((unsigned char *)((char *)&g_00639074 + (intptr_t)(g_00639104)) + g_00639100));
    uVar6 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_00639074 + (intptr_t)(g_00639108)) + g_00639100));
    iVar2 = (undefined4)(intptr_t)(func_0079e55c(p2,iVar5,uVar6,0,iVar5,uVar6,p2));
    if (iVar2 == 0) goto code_r0x00639094;
  }
  iVar3 = (undefined4)(intptr_t)(((cocos2d::CCArray *)(*(undefined4 *)(((int)this) + 0x24)))->objectAtIndex((unsigned int)p3));
  uVar6 = (undefined4)(0);
  if (iVar3 != 0) {
    iVar5 = (undefined4)(intptr_t)(*(int *)((unsigned char *)((char *)&g_00639074 + (intptr_t)(g_0063910c)) + iVar1));
    uVar6 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_00639074 + (intptr_t)(g_00639110)) + iVar1));
    uVar6 = (undefined4)(func_0079e55c(iVar3,iVar5,uVar6,0,iVar5,uVar6,p2));
  }
  uVar4 = (undefined4)(((BLPracticeHeroItemView *)(iVar2))->getPresenter());
  ((BLPracticeHeroItemPresenter *)(uVar4))->initWithRoleData((RoleData*)uVar6);
code_r0x006390fc:
  return;
}

BLPracticeHeroPresenter::BLPracticeHeroPresenter()
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
  iVar3 = (undefined4)(intptr_t)(*(int *)((unsigned char *)((char *)&g_0063913a + (intptr_t)(g_006391b8))));
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
  func_0079e45c(&uStack_14,(unsigned char *)((char *)&g_00639186 + (intptr_t)(g_006391bc)),&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

void BLPracticeHeroPresenter::onEnter()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

int BLPracticeHeroPresenter::numOfCellItem(BLTableView* p1)
{
  int iVar1;
  undefined1 auStack_68 [76];
  int iStack_1c;
  int iStack_18;
  
  if ((int)(intptr_t)p1 == *(int *)(*(int *)(((int)this) + 0x20) + 0x10c)) {
    iVar1 = (undefined4)(intptr_t)(((cocos2d::CCArray *)*(undefined4 *)(((int)this) + 0x24))->count());
  }
  else {
    iVar1 = (undefined4)(intptr_t)(((sir::singleton<PracticeData, 0> *)this)->instance());
    0 /* ctorZero */;
    iVar1 = (undefined4)(intptr_t)(iStack_18 - iStack_1c >> 2);
    ((PracDataItem *)auStack_68)->~PracDataItem();
  }
  return iVar1;
}

void BLPracticeHeroPresenter::onSure(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLPracticeHeroPresenter::onPracticeSelHero()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLPracticeHeroPresenter::onPracticeSelTime()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLPracticeHeroPresenter::onPracticeUpdateExpView()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLPracticeHeroPresenter::initRolesData()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

undefined4 BLPracticeHeroPresenter::initWithView(BLPracticeHeroView* p1)
{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  undefined1 auStack_38 [8];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  *(int *)(((int)this) + 0x20) = (undefined4)(intptr_t)p1;
  piVar1 = *(int **)(p1 + 0x120);
  pcVar3 = *(code **)(*piVar1 + 0x26c);
  func_0079e45c(&uStack_20,(unsigned char *)((char *)&g_0063986e + (intptr_t)(g_006399c0)),&uStack_28);
  (*pcVar3)(piVar1,&uStack_20);
  func_0079e2bc(&uStack_20);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x20) + 0x120);
  uStack_30 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_00639898 + (intptr_t)(g_006399c4))));
  uStack_2c = (undefined4)(0);
  (**(code **)(*piVar1 + 0x254))(piVar1,((int)this),uStack_30,0,0x20);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x20) + 0x124);
  uStack_28 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_006398b6 + (intptr_t)(g_006399c8))));
  uStack_24 = (undefined4)(0);
  (**(code **)(*piVar1 + 0x254))(piVar1,((int)this),uStack_28,0,0x20);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x20) + 0x128);
  uStack_20 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_006398d6 + (intptr_t)(g_006399cc))));
  uStack_1c = (undefined4)(0);
  (**(code **)(*piVar1 + 0x254))(piVar1,((int)this),uStack_20,0,0x20);
  piVar2 = *(int **)(*(int *)(((int)this) + 0x20) + 0x120);
  pcVar3 = *(code **)(*piVar2 + 0x28c);
  piVar1 = (int *)(**(code **)(*piVar2 + 0x308))(piVar2,1);
  (**(code **)(*piVar1 + 0x1cc))(auStack_38,piVar1);
  (*pcVar3)(piVar2,auStack_38);
  BLPracticeHeroPresenter::initRolesData();
  piVar1 = *(int **)(*(int *)(((int)this) + 0x20) + 0x10c);
  (**(code **)(*piVar1 + 0x21c))(piVar1,((int)this) + 0x18);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x20) + 0x10c);
  (**(code **)(*piVar1 + 0x214))(piVar1,((int)this) + 0x1c);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x20) + 0x10c);
  (**(code **)(*piVar1 + 0x22c))(piVar1,0);
  ((BLTableView *)*(undefined4 *)(*(int *)(((int)this) + 0x20) + 0x10c))->reloadData(0, 1);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x20) + 0x110);
  (**(code **)(*piVar1 + 0x21c))(piVar1,((int)this) + 0x18);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x20) + 0x110);
  (**(code **)(*piVar1 + 0x214))(piVar1,((int)this) + 0x1c);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x20) + 0x110);
  (**(code **)(*piVar1 + 0x22c))(piVar1,0);
  ((BLTableView *)*(undefined4 *)(*(int *)(((int)this) + 0x20) + 0x110))->reloadData(0, 1);
  return 1;
}
