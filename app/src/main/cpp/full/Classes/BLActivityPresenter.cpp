#include "BLActivityPresenter.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "CCNotificationCenter.h"
#include "CCObject.h"
#include "CCTouch.h"
#include "CCArray.h"
#include "CCDirector.h"
#include "ActivityItemData.h"
#include "ActivityData.h"
#include "BLActivityItemView.h"
#include "BLActivityManager.h"
#include "BLActivityView.h"
#include "BLLeakUtils.h"
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
extern "C" long long func_0079e4ec(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long func_0079e7b4(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_004f0bf4;
extern "C" unsigned long UNK_004f0c0c;
extern "C" unsigned long UNK_004f0c24;
extern "C" unsigned long UNK_004f0c3c;
extern "C" unsigned long UNK_004f0c98;
extern "C" unsigned long UNK_004f0cc0;
extern "C" unsigned long UNK_004f0ce0;
extern "C" unsigned long UNK_004f0d18;
extern "C" unsigned long UNK_004f0d40;
extern "C" unsigned long UNK_004f0ee4;
extern "C" unsigned long UNK_004f0f26;
extern "C" unsigned long UNK_004f0f52;
extern "C" unsigned long UNK_004f0f56;
extern "C" unsigned long UNK_004f0ff8;
extern "C" unsigned long _UNK_004f0bf8;
extern "C" unsigned long _UNK_004f0c10;
extern "C" unsigned long _UNK_004f0c28;
extern "C" unsigned long _UNK_004f0c40;
extern "C" unsigned long _UNK_004f0d00;
extern "C" unsigned long _UNK_004f0d04;
extern "C" unsigned long _UNK_004f0d08;
extern "C" unsigned long _UNK_004f0d1c;
extern "C" unsigned long _UNK_004f0d44;
extern "C" unsigned long _UNK_004f0eb8;
extern "C" unsigned long _UNK_004f0f78;
extern "C" unsigned long _UNK_004f0f7c;
extern "C" unsigned long _UNK_004f0f80;
extern "C" unsigned long _UNK_004f0f84;
extern "C" unsigned long _UNK_004f1194;
extern "C" unsigned long _UNK_004f1198;
extern "C" unsigned long g_004f0bf4;
extern "C" unsigned long g_004f0bf8;
extern "C" unsigned long g_004f0c0c;
extern "C" unsigned long g_004f0c10;
extern "C" unsigned long g_004f0c24;
extern "C" unsigned long g_004f0c28;
extern "C" unsigned long g_004f0c3c;
extern "C" unsigned long g_004f0c40;
extern "C" unsigned long g_004f0c98;
extern "C" unsigned long g_004f0cc0;
extern "C" unsigned long g_004f0ce0;
extern "C" unsigned long g_004f0d00;
extern "C" unsigned long g_004f0d04;
extern "C" unsigned long g_004f0d08;
extern "C" unsigned long g_004f0d18;
extern "C" unsigned long g_004f0d1c;
extern "C" unsigned long g_004f0d40;
extern "C" unsigned long g_004f0d44;
extern "C" unsigned long g_004f0eb8;
extern "C" unsigned long g_004f0ee4;
extern "C" unsigned long g_004f0f26;
extern "C" unsigned long g_004f0f52;
extern "C" unsigned long g_004f0f56;
extern "C" unsigned long g_004f0f78;
extern "C" unsigned long g_004f0f7c;
extern "C" unsigned long g_004f0f80;
extern "C" unsigned long g_004f0f84;
extern "C" unsigned long g_004f0ff8;
extern "C" unsigned long g_004f1194;
extern "C" unsigned long g_004f1198;
bool BLActivityPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLActivityPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLActivityPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLActivityPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLActivityPresenter::tick(float p1)
{
  return;
}

BLActivityPresenter::~BLActivityPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_004f0c98 + g_004f0d00);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x3c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  if (*(int *)((int)this + 4*(7)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(7)) = 0;
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_004f0cc0 + g_004f0d04,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar1)->removeObserver((cocos2d::CCObject*)((int)this), (char const*)&g_004f0ce0 + g_004f0d08);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLActivityPresenter::updateScrollView(cocos2d::CCObject* p1)
{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  undefined4 uStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  undefined1 auStack_20 [4];
  undefined4 uStack_1c;
  
  iVar1 = ((cocos2d::CCArray *)*(undefined4 *)(((int)this) + 0x1c))->count();
  uVar5 = (undefined4)(0);
  iStack_30 = 0;
  uStack_34 = (undefined4)(0);
  iStack_28 = 0;
  iStack_2c = 0;
  while( true ) {
    if (iVar1 <= iStack_30) break;
    piVar2 = (int *)((cocos2d::CCArray *)*(undefined4 *)(((int)this) + 0x1c))->objectAtIndex((unsigned int)iStack_30);
    if (piVar2 != (int *)0x0) {
      pcVar6 = *(code **)(*piVar2 + 0x4c);
      0 /* ctorZero */;
      (*pcVar6)(piVar2,auStack_20);
      uVar5 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x + _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(piVar2[0x42]),(int)(g_004f0eb8)))));
      uStack_34 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x + _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uStack_34),(int)(uVar5)))));
      puVar3 = (undefined4 *)(**(code **)(*piVar2 + 0x8c))(piVar2);
      uVar5 = (undefined4)(*puVar3);
      if (piVar2[0x43] != 0) {
        piVar2[0x43] = 0;
        iStack_2c = piVar2[0x42];
        iStack_28 = (**(code **)(*piVar2 + 0x68))(piVar2);
      }
    }
    iStack_30 = iStack_30 + 1;
  }
  piVar2 = (int *)((BLActivityView *)*(undefined4 *)(((int)this) + 0x18))->getScrollview();
  pcVar6 = *(code **)(*piVar2 + 0x88);
  0 /* ctorZero */;
  (*pcVar6)(piVar2,auStack_20);
  uVar5 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x - _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(iStack_28 + -0x80000000),(int)(iStack_2c)))));
  piVar2 = (int *)((BLActivityView *)*(undefined4 *)(((int)this) + 0x18))->getScrollview();
  (**(code **)(*piVar2 + 0x1f8))(auStack_20,piVar2);
  uVar5 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x + _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar5),(int)(uStack_1c)))));
  iVar1 = ((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);return ((_x > _y)?1:0);}((int)(uVar5),(int)(0))));
  if (iVar1 != 0) {
    uVar5 = (undefined4)(0);
  }
  piVar2 = (int *)((BLActivityView *)*(undefined4 *)(((int)this) + 0x18))->getScrollview();
  (**(code **)(*piVar2 + 0x1f8))(auStack_20,piVar2);
  uVar4 = (undefined4)(uStack_1c);
  piVar2 = (int *)((BLActivityView *)*(undefined4 *)(((int)this) + 0x18))->getcontainerLayer();
  iVar1 = (**(code **)(*piVar2 + 0x8c))();
  uVar4 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x - _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar4),(int)(*(undefined4 *)(iVar1 + 4))))));
  iVar1 = ((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);return ((_x < _y)?1:0);}((int)(uVar5),(int)(uVar4))));
  if (iVar1 != 0) {
    piVar2 = (int *)((BLActivityView *)*(undefined4 *)(((int)this) + 0x18))->getScrollview();
    (**(code **)(*piVar2 + 0x1f8))(auStack_20,piVar2);
    piVar2 = (int *)((BLActivityView *)*(undefined4 *)(((int)this) + 0x18))->getcontainerLayer();
    iVar1 = (**(code **)(*piVar2 + 0x8c))();
    uVar5 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x - _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uStack_1c),(int)(*(undefined4 *)(iVar1 + 4))))));
  }
  piVar2 = (int *)((BLActivityView *)*(undefined4 *)(((int)this) + 0x18))->getcontainerLayer();
  pcVar6 = *(code **)(*piVar2 + 0x4c);
  0 /* ctorZero */;
  (*pcVar6)(piVar2,auStack_20);
  return;
}

void BLActivityPresenter::onClose(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  ((BLActivityManager *)this)->share();
  ((BLActivityManager *)this)->updateDataToDB();
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(0x79);
  return;
}


undefined4 BLActivityPresenter::create(BLActivityView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x20))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLActivityPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  ((BLActivityManager *)this)->share();
  ((BLActivityManager *)this)->updateDataToDB();
  ((UIManager *)this)->shareManager();
  ((UIManager *)this)->popUnEnableScrollView();
  return;
}

void BLActivityPresenter::onEnter()
{
  return;
}

undefined4 BLActivityPresenter::initWithView(BLActivityView* p1)
{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  code *pcVar8;
  undefined4 uVar9;
  undefined4 uStack_40;
  int iStack_3c;
  undefined1 auStack_30 [4];
  undefined4 uStack_2c;
  undefined1 auStack_28 [8];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  *(undefined4 *)(((int)this) + 0x18) = (undefined4)(intptr_t)p1;
  piVar1 = (int *)((BLActivityView *)p1)->getBtnClose();
  uStack_1c = (undefined4)(0);
  uStack_20 = (undefined4)(*(undefined4 *)(&g_004f0ff8 + g_004f1194));
  (**(code **)(*piVar1 + 0x254))(piVar1,((int)this),uStack_20,0,0x20);
  piVar1 = (int *)((BLActivityManager *)this)->share();
  (**(code **)(*piVar1 + 0x20))();
  iStack_3c = ((cocos2d::CCArray *)this)->count();
  piVar1 = (int *)((BLActivityManager *)this)->share();
  (**(code **)(*piVar1 + 0x18))();
  iVar2 = ((cocos2d::CCArray *)this)->count();
  uVar9 = (undefined4)(0);
  uStack_40 = (undefined4)(0);
  while (iStack_3c = iStack_3c + -1, -1 < iStack_3c) {
    piVar1 = (int *)((BLActivityManager *)this)->share();
    uVar3 = (undefined4)((**(code **)(*piVar1 + 0x20))());
    piVar1 = (int *)((cocos2d::CCArray *)uVar3)->objectAtIndex((unsigned int)iStack_3c);
    piVar4 = (int *)((BLActivityView *)*(undefined4 *)(((int)this) + 0x18))->getcontainerLayer();
    pcVar8 = *(code **)(*piVar4 + 0xd4);
    uVar3 = (undefined4)((**(code **)(*piVar1 + 0x18))(piVar1));
    iVar5 = (*pcVar8)(piVar4,uVar3);
    if (iVar5 == 0) {
      piVar4 = (int *)((BLActivityItemView *)this)->create();
      pcVar8 = *(code **)(*piVar4 + 0x11c);
      uVar9 = (undefined4)((**(code **)(*piVar1 + 0x18))(piVar1));
      (*pcVar8)(piVar4,uVar9);
      ((BLActivityItemView *)piVar4)->initTitle((ActivityData*)piVar1);
      pcVar8 = *(code **)(*piVar4 + 0x4c);
      0 /* ctorZero */;
      (*pcVar8)(piVar4,auStack_28);
      piVar1 = (int *)((BLActivityView *)*(undefined4 *)(((int)this) + 0x18))->getcontainerLayer();
      (**(code **)(*piVar1 + 200))(piVar1,piVar4);
      ((cocos2d::CCArray *)*(undefined4 *)(((int)this) + 0x1c))->addObject((cocos2d::CCObject*)piVar4);
      iVar5 = (**(code **)(*piVar4 + 0x8c))(piVar4);
      uVar9 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x + _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(*(undefined4 *)(iVar5 + 4)),(int)(g_004f1198)))));
      uStack_40 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x + _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uStack_40),(int)(uVar9)))));
      puVar6 = (undefined4 *)(**(code **)(*piVar4 + 0x8c))(piVar4);
      uVar9 = (undefined4)(*puVar6);
    }
  }
  piVar1 = (int *)((BLActivityView *)*(undefined4 *)(((int)this) + 0x18))->getScrollview();
  pcVar8 = *(code **)(*piVar1 + 0x88);
  0 /* ctorZero */;
  (*pcVar8)(piVar1,auStack_28);
  piVar1 = (int *)((BLActivityView *)*(undefined4 *)(((int)this) + 0x18))->getcontainerLayer();
  pcVar8 = *(code **)(*piVar1 + 0x4c);
  piVar4 = (int *)((BLActivityView *)*(undefined4 *)(((int)this) + 0x18))->getScrollview();
  (**(code **)(*piVar4 + 0x1f8))(auStack_30,piVar4);
  uVar9 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x - _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uStack_2c),(int)(uStack_40)))));
  0 /* ctorZero */;
  (*pcVar8)(piVar1,auStack_28);
  for (iVar5 = 0; iVar5 < iVar2; iVar5 = iVar5 + 1) {
    piVar1 = (int *)((BLActivityManager *)this)->share();
    uVar9 = (undefined4)((**(code **)(*piVar1 + 0x18))());
    piVar1 = (int *)((cocos2d::CCArray *)uVar9)->objectAtIndex((unsigned int)iVar5);
    piVar4 = (int *)((BLActivityView *)*(undefined4 *)(((int)this) + 0x18))->getcontainerLayer();
    pcVar8 = *(code **)(*piVar4 + 0xd4);
    uVar9 = (undefined4)((**(code **)(*piVar1 + 0x20))(piVar1));
    iVar7 = (*pcVar8)(piVar4,uVar9);
    if (iVar7 != 0) {
      ((BLActivityItemView *)iVar7)->addContent((ActivityItemData*)piVar1);
    }
  }
  return 1;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
BLActivityPresenter::BLActivityPresenter()
{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_24 [4];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  0 /* ctorZero */;
  iVar3 = (undefined4)(intptr_t)(*(int *)((unsigned char *)((char *)&g_004f0ee4 + (intptr_t)(g_004f0f78))));
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x3c;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x40)))());
  ((cocos2d::CCTouchDispatcher *)(uVar2))->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 1);
  ((UIManager *)this)->shareManager();
  ((UIManager *)this)->pushCurScrollViewUnEnable();
  iVar3 = (undefined4)(intptr_t)(cocos2d::CCArray::create());
  *(int *)((int)this + 4*(7)) = iVar3;
  if (iVar3 != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(auStack_24,(unsigned char *)((char *)&g_004f0f26 + (intptr_t)(g_004f0f7c)),&uStack_20);
  ((BLLeakUtils *)(uVar2))->addClass((std::string)(char*)auStack_24);
  func_0079e2bc(auStack_24);
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  uStack_1c = (undefined4)(0);
  uStack_20 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_004f0f52 + (intptr_t)(g_004f0f80))));
  ((cocos2d::CCNotificationCenter *)(((int)this)))->addObserver((cocos2d::CCObject*)uStack_20, 0, (char const*)(unsigned char *)((char *)&g_004f0f56 + (intptr_t)(g_004f0f84)), 0);
  return;
}
