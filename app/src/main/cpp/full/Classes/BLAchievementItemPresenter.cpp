#include "BLAchievementItemPresenter.h"
#include "BLAchievementItemView.h"
#include "BLAchievementManager.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BackPackData.h"
#include "DataCacheManager.h"
#include "DataManager.h"
#include "ItemData.h"
#include "PetUserData.h"
#include "RichTextData.h"
#include "Toast.h"
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
extern "C" long long func_0042f3fc(...);
extern "C" long long func_00442068(...);
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e43c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e46c(...);
extern "C" long long func_0079e47c(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long func_0079e69c(...);
extern "C" long long func_0079e6c0(...);
extern "C" long long func_0079e734(...);
extern "C" long long func_0079e784(...);
extern "C" long long func_0079e874(...);
extern "C" long long func_0079ea14(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_004ed618;
extern "C" unsigned long UNK_004ed640;
extern "C" unsigned long UNK_004ed684;
extern "C" unsigned long UNK_004ed6ac;
extern "C" unsigned long UNK_004ed6e6;
extern "C" unsigned long UNK_004ed718;
extern "C" unsigned long UNK_004ed7a4;
extern "C" unsigned long UNK_004ed7a6;
extern "C" unsigned long UNK_004ed7dc;
extern "C" unsigned long UNK_004ed948;
extern "C" unsigned long UNK_004ed956;
extern "C" unsigned long UNK_004ed9ca;
extern "C" unsigned long UNK_004ed9f0;
extern "C" unsigned long UNK_004eda00;
extern "C" unsigned long UNK_004eda54;
extern "C" unsigned long UNK_004eda62;
extern "C" unsigned long UNK_004edace;
extern "C" unsigned long UNK_004edaf2;
extern "C" unsigned long UNK_004edb14;
extern "C" unsigned long UNK_004edb82;
extern "C" unsigned long UNK_004edba6;
extern "C" unsigned long UNK_004edc0a;
extern "C" unsigned long UNK_004edc74;
extern "C" unsigned long UNK_004edc90;
extern "C" unsigned long UNK_004edd0c;
extern "C" unsigned long UNK_004edda6;
extern "C" unsigned long UNK_004edf50;
extern "C" unsigned long UNK_004edfbe;
extern "C" unsigned long UNK_004ee0f6;
extern "C" unsigned long UNK_004ee0f7;
extern "C" unsigned long UNK_004ee0f8;
extern "C" unsigned long UNK_004ee10e;
extern "C" unsigned long UNK_004ee1c8;
extern "C" unsigned long UNK_004ee3a6;
extern "C" unsigned long _UNK_004ed670;
extern "C" unsigned long _UNK_004ed674;
extern "C" unsigned long _UNK_004ed688;
extern "C" unsigned long _UNK_004ed6b0;
extern "C" unsigned long _UNK_004ed744;
extern "C" unsigned long _UNK_004ed748;
extern "C" unsigned long _UNK_004ed7b0;
extern "C" unsigned long _UNK_004ed7b4;
extern "C" unsigned long _UNK_004ed854;
extern "C" unsigned long _UNK_004edbc0;
extern "C" unsigned long _UNK_004edbc4;
extern "C" unsigned long _UNK_004edbc8;
extern "C" unsigned long _UNK_004edbcc;
extern "C" unsigned long _UNK_004edbd0;
extern "C" unsigned long _UNK_004edbd4;
extern "C" unsigned long _UNK_004edbd8;
extern "C" unsigned long _UNK_004edbdc;
extern "C" unsigned long _UNK_004edbe0;
extern "C" unsigned long _UNK_004edbe4;
extern "C" unsigned long _UNK_004edbe8;
extern "C" unsigned long _UNK_004edbec;
extern "C" unsigned long _UNK_004edbf0;
extern "C" unsigned long _UNK_004edbf4;
extern "C" unsigned long _UNK_004edbf8;
extern "C" unsigned long _UNK_004edbfc;
extern "C" unsigned long _UNK_004edf5c;
extern "C" unsigned long _UNK_004edf60;
extern "C" unsigned long _UNK_004edf64;
extern "C" unsigned long _UNK_004edf68;
extern "C" unsigned long _UNK_004edf6c;
extern "C" unsigned long _UNK_004edf70;
extern "C" unsigned long _UNK_004edf74;
extern "C" unsigned long _UNK_004ee338;
extern "C" unsigned long _UNK_004ee33c;
extern "C" unsigned long _UNK_004ee340;
extern "C" unsigned long _UNK_004ee344;
extern "C" unsigned long _UNK_004ee3dc;
extern "C" unsigned long extraout_r1;
extern "C" unsigned long extraout_r1_00;
extern "C" unsigned long extraout_r1_01;
extern "C" unsigned long g_004ed618;
extern "C" unsigned long g_004ed640;
extern "C" unsigned long g_004ed670;
extern "C" unsigned long g_004ed674;
extern "C" unsigned long g_004ed684;
extern "C" unsigned long g_004ed688;
extern "C" unsigned long g_004ed6ac;
extern "C" unsigned long g_004ed6b0;
extern "C" unsigned long g_004ed6e6;
extern "C" unsigned long g_004ed718;
extern "C" unsigned long g_004ed744;
extern "C" unsigned long g_004ed748;
extern "C" unsigned long g_004ed7a4;
extern "C" unsigned long g_004ed7a6;
extern "C" unsigned long g_004ed7b0;
extern "C" unsigned long g_004ed7b4;
extern "C" unsigned long g_004ed7dc;
extern "C" unsigned long g_004ed854;
extern "C" unsigned long g_004ed948;
extern "C" unsigned long g_004ed956;
extern "C" unsigned long g_004ed9ca;
extern "C" unsigned long g_004ed9f0;
extern "C" unsigned long g_004eda00;
extern "C" unsigned long g_004eda54;
extern "C" unsigned long g_004eda62;
extern "C" unsigned long g_004edace;
extern "C" unsigned long g_004edaf2;
extern "C" unsigned long g_004edb14;
extern "C" unsigned long g_004edb82;
extern "C" unsigned long g_004edba6;
extern "C" unsigned long g_004edbc0;
extern "C" unsigned long g_004edbc4;
extern "C" unsigned long g_004edbc8;
extern "C" unsigned long g_004edbcc;
extern "C" unsigned long g_004edbd0;
extern "C" unsigned long g_004edbd4;
extern "C" unsigned long g_004edbd8;
extern "C" unsigned long g_004edbdc;
extern "C" unsigned long g_004edbe0;
extern "C" unsigned long g_004edbe4;
extern "C" unsigned long g_004edbe8;
extern "C" unsigned long g_004edbec;
extern "C" unsigned long g_004edbf0;
extern "C" unsigned long g_004edbf4;
extern "C" unsigned long g_004edbf8;
extern "C" unsigned long g_004edbfc;
extern "C" unsigned long g_004edc0a;
extern "C" unsigned long g_004edc74;
extern "C" unsigned long g_004edc90;
extern "C" unsigned long g_004edd0c;
extern "C" unsigned long g_004edda6;
extern "C" unsigned long g_004edf50;
extern "C" unsigned long g_004edf5c;
extern "C" unsigned long g_004edf60;
extern "C" unsigned long g_004edf64;
extern "C" unsigned long g_004edf68;
extern "C" unsigned long g_004edf6c;
extern "C" unsigned long g_004edf70;
extern "C" unsigned long g_004edf74;
extern "C" unsigned long g_004edfbe;
extern "C" unsigned long g_004ee0f6;
extern "C" unsigned long g_004ee0f7;
extern "C" unsigned long g_004ee0f8;
extern "C" unsigned long g_004ee10e;
extern "C" unsigned long g_004ee1c8;
extern "C" unsigned long g_004ee338;
extern "C" unsigned long g_004ee33c;
extern "C" unsigned long g_004ee340;
extern "C" unsigned long g_004ee344;
extern "C" unsigned long g_004ee3a6;
extern "C" unsigned long g_004ee3dc;
AchievementItemData* BLAchievementItemPresenter::getItemData() const
{
  return (AchievementItemData*)(*(undefined4 *)(((int)this) + 0x1c));
}

bool BLAchievementItemPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLAchievementItemPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLAchievementItemPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLAchievementItemPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLAchievementItemPresenter::tick(float p1)
{
  return;
}

BLAchievementItemPresenter::~BLAchievementItemPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_004ed618 + g_004ed670);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x44;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  if (*(int *)((int)this + 4*(7)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(7)) = 0;
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_004ed640 + g_004ed674,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLAchievementItemPresenter::setItemData(AchievementItemData* p1)
{
  if (*(int *)(((int)this) + 0x1c) != (int)(intptr_t)p1) {
    if ((int)(intptr_t)p1 != 0) {
      ((cocos2d::CCObject *)p1)->retain();
    }
    if (*(int *)(((int)this) + 0x1c) != 0) {
      ((cocos2d::CCObject *)this)->release();
    }
    *(int *)(((int)this) + 0x1c) = (undefined4)(intptr_t)p1;
  }
  return;
}

BLAchievementItemPresenter::BLAchievementItemPresenter()
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
  iVar3 = *(int *)(&g_004ed6e6 + g_004ed744);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x44;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 0);
  *(int *)((int)this + 4*(7)) = 0;
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_004ed718 + g_004ed748,&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

undefined4 BLAchievementItemPresenter::create(BLAchievementItemView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x20))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLAchievementItemPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar2)->removeAllObservers((cocos2d::CCObject*)((int)this));
  return;
}




void BLAchievementItemPresenter::initWith(AchievementItemData* p1)
{
  (**(code **)(*(int *)this + 0x30))();
  BLAchievementItemPresenter::updateData();
  return;
}

void BLAchievementItemPresenter::updateStatus(cocos2d::CCObject* p1)
{
  BLAchievementItemPresenter::updateData();
  return;
}


void BLAchievementItemPresenter::onGet(cocos2d::CCObject* p1, unsigned int p2)
{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar1 = (**(code **)(**(int **)(((int)this) + 0x1c) + 0x58))();
  if ((iVar1 != 0) && (iVar1 = (**(code **)(**(int **)(((int)this) + 0x1c) + 0x50))(), iVar1 == 0)) {
    (**(code **)(**(int **)(((int)this) + 0x1c) + 0x54))(*(int **)(((int)this) + 0x1c),1);
    piVar2 = (int *)((BLAchievementManager *)this)->share();
    uVar3 = (undefined4)((**(code **)(*piVar2 + 0x48))());
    iVar4 = (**(code **)(**(int **)(((int)this) + 0x1c) + 0x18))();
    piVar2 = (int *)((long long)::operator new((size_t)(0x18)));
    0 /* ctorZero */;
    iVar1 = g_004ee3dc;
    piVar2[5] = iVar4;
    *piVar2 = *(int *)(&g_004ee3a6 + iVar1) + 8;
    ((cocos2d::CCObject *)piVar2)->autorelease();
    uVar5 = (undefined4)((**(code **)(**(int **)(((int)this) + 0x1c) + 0x18))());
    ((cocos2d::CCDictionary *)uVar3)->setObject((cocos2d::CCObject*)piVar2, uVar5);
    ((BLAchievementManager *)this)->share();
    ((BLAchievementManager *)this)->updateDataToDB();
    BLAchievementItemPresenter::addItem();
  }
  return;
}

// ===== 修复: 补回被误删的函数占位 (4) =====
void BLAchievementItemPresenter::onEnter()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLAchievementItemPresenter::initWithView(BLAchievementItemView* p1)
{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  code *pcVar6;
  undefined1 auStack_28 [8];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  *(undefined4 *)(((int)this) + 0x18) = (undefined4)(intptr_t)p1;
  piVar1 = (int *)((BLAchievementItemView *)p1)->getBtnGet();
  uStack_1c = (undefined4)(0);
  uStack_20 = (undefined4)(*(undefined4 *)(&g_004ed7dc + g_004ed854));
  (**(code **)(*piVar1 + 0x254))(piVar1,((int)this),uStack_20,0,0x20);
  piVar1 = (int *)((BLAchievementItemView *)*(undefined4 *)(((int)this) + 0x18))->getLabProgress();
  pcVar6 = *(code **)(*piVar1 + 0x7c);
  0 /* ctorZero */;
  (*pcVar6)(piVar1,auStack_28);
  piVar1 = (int *)((BLAchievementItemView *)*(undefined4 *)(((int)this) + 0x18))->getLabProgress();
  pcVar6 = *(code **)(*piVar1 + 0x5c);
  piVar2 = (int *)((BLAchievementItemView *)*(undefined4 *)(((int)this) + 0x18))->getLabProgress();
  uVar3 = (undefined4)((**(code **)(*piVar2 + 0x60))());
  piVar2 = (int *)((BLAchievementItemView *)*(undefined4 *)(((int)this) + 0x18))->getLabProgress();
  puVar4 = (undefined4 *)(**(code **)(*piVar2 + 0x8c))();
  uVar5 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(*puVar4),(int)(0x3f000000)))));
  uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x + _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar3),(int)(uVar5)))));
  (*pcVar6)(piVar1,uVar3);
  return;
}

void BLAchievementItemPresenter::updateData()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLAchievementItemPresenter::addItem()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
