#include "BLGridView.h"
#include "CCGeometry.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "CCObject.h"
#include "CCNode.h"
#include "CCTouch.h"
#include "CCLayer.h"
#include "CCDirector.h"
#include "CCArray.h"
#include "BLGridViewDelegate.h"
#include "BLLeakUtils.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
using namespace cocos2d;
static inline undefined4 hw_fbits(float f) { undefined4 r; __builtin_memcpy(&r, &f, 4); return r; }
// 兜底声明
extern "C" long long software_udf(...);

extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2ec(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long func_0079e4ec(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long func_0079e5fc(...);
extern "C" long long func_0079e864(...);
extern "C" long long func_0079eb44(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0051f0f0;
extern "C" unsigned long UNK_0051f108;
extern "C" unsigned long UNK_0051f160;
extern "C" unsigned long UNK_0051f1a4;
extern "C" unsigned long UNK_0051f1e8;
extern "C" unsigned long UNK_0051f210;
extern "C" unsigned long UNK_0051f300;
extern "C" unsigned long UNK_0051f302;
extern "C" unsigned long UNK_0051f334;
extern "C" unsigned long UNK_0051f370;
extern "C" unsigned long UNK_0051f566;
extern "C" unsigned long UNK_0051f568;
extern "C" unsigned long UNK_0051f63c;
extern "C" unsigned long UNK_0051f9c7;
extern "C" unsigned long UNK_0051f9fa;
extern "C" unsigned long _DAT_0051f520;
extern "C" unsigned long _DAT_0051f524;
extern "C" unsigned long _DAT_0051f668;
extern "C" unsigned long _DAT_0051f7f8;
extern "C" unsigned long _DAT_0051f7fc;
extern "C" unsigned long _DAT_0051f96c;
extern "C" unsigned long _DAT_0051f970;
extern "C" unsigned long _DAT_0051f974;
extern "C" unsigned long _DAT_0051f978;
extern "C" unsigned long _DAT_0051f97c;
extern "C" unsigned long _DAT_0051f980;
extern "C" unsigned long _DAT_0051f984;
extern "C" unsigned long _DAT_0051f988;
extern "C" unsigned long _UNK_0051f0f4;
extern "C" unsigned long _UNK_0051f10c;
extern "C" unsigned long _UNK_0051f1d4;
extern "C" unsigned long _UNK_0051f1d8;
extern "C" unsigned long _UNK_0051f1ec;
extern "C" unsigned long _UNK_0051f214;
extern "C" unsigned long _UNK_0051f320;
extern "C" unsigned long _UNK_0051f324;
extern "C" unsigned long _UNK_0051f338;
extern "C" unsigned long _UNK_0051f488;
extern "C" unsigned long _UNK_0051f5bc;
extern "C" unsigned long _UNK_0051f5c0;
extern "C" unsigned long _UNK_0051f640;
extern "C" unsigned long _UNK_0051f9e0;
extern "C" unsigned long _UNK_0051f9e4;
extern "C" unsigned long g_0051f0f0;
extern "C" unsigned long g_0051f0f4;
extern "C" unsigned long g_0051f108;
extern "C" unsigned long g_0051f10c;
extern "C" unsigned long g_0051f160;
extern "C" unsigned long g_0051f1a4;
extern "C" unsigned long g_0051f1d4;
extern "C" unsigned long g_0051f1d8;
extern "C" unsigned long g_0051f1e8;
extern "C" unsigned long g_0051f1ec;
extern "C" unsigned long g_0051f210;
extern "C" unsigned long g_0051f214;
extern "C" unsigned long g_0051f300;
extern "C" unsigned long g_0051f302;
extern "C" unsigned long g_0051f320;
extern "C" unsigned long g_0051f324;
extern "C" unsigned long g_0051f334;
extern "C" unsigned long g_0051f338;
extern "C" unsigned long g_0051f370;
extern "C" unsigned long g_0051f488;
extern "C" unsigned long g_0051f520;
extern "C" unsigned long g_0051f524;
extern "C" unsigned long g_0051f566;
extern "C" unsigned long g_0051f568;
extern "C" unsigned long g_0051f5bc;
extern "C" unsigned long g_0051f5c0;
extern "C" unsigned long g_0051f63c;
extern "C" unsigned long g_0051f640;
extern "C" unsigned long g_0051f668;
extern "C" unsigned long g_0051f7f8;
extern "C" unsigned long g_0051f7fc;
extern "C" unsigned long g_0051f96c;
extern "C" unsigned long g_0051f970;
extern "C" unsigned long g_0051f974;
extern "C" unsigned long g_0051f978;
extern "C" unsigned long g_0051f97c;
extern "C" unsigned long g_0051f980;
extern "C" unsigned long g_0051f984;
extern "C" unsigned long g_0051f988;
extern "C" unsigned long g_0051f9c7;
extern "C" unsigned long g_0051f9e0;
extern "C" unsigned long g_0051f9e4;
extern "C" unsigned long g_0051f9fa;
int * BLGridView::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)func_0079e2fc(300);
  0 /* ctorZero */;
  iVar2 = (**(code **)(*piVar1 + 0x18))(piVar1);
  if (iVar2 == 0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    piVar1 = (int *)0x0;
  }
  else {
    ((cocos2d::CCObject *)piVar1)->autorelease();
  }
  return (int *)(piVar1);
}

BLGridViewDataSource* BLGridView::getDataSource() const
{
  return (BLGridViewDataSource*)(*(undefined4 *)(((int)this) + 0x108));
}

void BLGridView::setDataSource(BLGridViewDataSource* p1)
{
  *(undefined4 *)(((int)this) + 0x108) = (undefined4)(intptr_t)p1;
  return;
}

BLGridViewDelegate* BLGridView::getDelegate() const
{
  return (BLGridViewDelegate*)(*(undefined4 *)(((int)this) + 0x10c));
}

void BLGridView::setDelegate(BLGridViewDelegate* p1)
{
  *(undefined4 *)(((int)this) + 0x10c) = (undefined4)(intptr_t)p1;
  return;
}

cocos2d::CCArray* BLGridView::getArrayGridItems() const
{
  return (cocos2d::CCArray*)(*(undefined4 *)(((int)this) + 0x110));
}

void BLGridView::setArrayGridItems(cocos2d::CCArray* p1)
{
  *(undefined4 *)(((int)this) + 0x110) = (undefined4)(intptr_t)p1;
  return;
}

void BLGridView::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  *(undefined1 *)(((int)this) + 0x11c) = 1;
  return;
}

void BLGridView::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

BLGridView::~BLGridView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = (undefined4)(intptr_t)(*(int *)((unsigned char *)((char *)&g_0051f160 + (intptr_t)(g_0051f1d4))));
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x220;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x250;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x25c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  if (*(int *)((int)this + 4*(0x44)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x44)) = 0;
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,(unsigned char *)((char *)&g_0051f1a4 + (intptr_t)(g_0051f1d8)),&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}



BLGridView::BLGridView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = (undefined4)(intptr_t)(*(int *)(g_0051f520 + 0x51f49c));
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x220;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x250;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x25c;
  0 /* ctorZero */;
  *(int *)((int)this + 4*(0x48)) = 0;
  *(int *)((int)this + 4*(0x42)) = 0;
  *(int *)((int)this + 4*(0x43)) = 0;
  *(int *)((int)this + 4*(0x49)) = 0;
  iVar2 = (undefined4)(intptr_t)(cocos2d::CCArray::create());
  *(int *)((int)this + 4*(0x44)) = iVar2;
  if (iVar2 != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLGridView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}








void BLGridView::onEnter()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0xe4, 1, 0);
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLGridView::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0xe4);
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (10) =====
void BLGridView::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  if (((*(char *)(((int)this) + 0x11c) == '\0') || (*(int *)(((int)this) + 0x108) != 0)) ||
     (*(int *)(((int)this) + 0x10c) != 0)) {
    ((cocos2d::CCTouch *)(&uStack_30))->getLocation();
    uVar1 = (undefined4)(func_0079e57c(uStack_30,*(undefined4 *)(((int)this) + 0x114)));
    iVar2 = (undefined4)(intptr_t)(func_0079e4ec(uVar1 & 0x7fffffff,0x41000000));
    if (iVar2 == 0) {
      uVar1 = (undefined4)(func_0079e57c(uStack_2c,*(undefined4 *)(((int)this) + 0x118)));
      iVar2 = (undefined4)(intptr_t)(func_0079e4ec(uVar1 & 0x7fffffff,0x41000000));
      if (iVar2 == 0) {
        { cocos2d::CCPoint _ws = ((cocos2d::CCNode *)(((int)this)))->convertToNodeSpace(*(cocos2d::CCPoint const*)&uStack_30); uStack_28 = hw_fbits(_ws.x); uStack_24 = hw_fbits(_ws.y); }
        (**(code **)(**(int **)(((int)this) + 0x108) + 8))
                  (&uStack_20,*(int **)(((int)this) + 0x108),((int)this));
        func_0079e4dc(uStack_24,uStack_1c);
        func_0079eb44();
        iVar2 = (undefined4)(intptr_t)(func_0079e5fc());
        (**(code **)(**(int **)(((int)this) + 0x108) + 8))
                  (&uStack_20,*(int **)(((int)this) + 0x108),((int)this));
        func_0079e4dc(uStack_28,uStack_20);
        func_0079eb44();
        iVar3 = (undefined4)(intptr_t)(func_0079e5fc());
        iVar4 = (undefined4)(intptr_t)((**(code **)(**(int **)(((int)this) + 0x108) + 4))(*(int **)(((int)this) + 0x108),((int)this)));
        iVar5 = (**(code **)**(undefined4 **)(((int)this) + 0x108))
                          (*(undefined4 **)(((int)this) + 0x108),((int)this));
        uVar7 = (undefined4)((iVar5 * (iVar4 - iVar2) + iVar3) - 1);
        uVar1 = (undefined4)(((cocos2d::CCArray *)(*(undefined4 *)(((int)this) + 0x110)))->count());
        if (uVar7 < uVar1) {
          iVar2 = (undefined4)(intptr_t)(((cocos2d::CCArray *)(*(undefined4 *)(((int)this) + 0x110)))->objectAtIndex((unsigned int)uVar7));
          uVar6 = (undefined4)(0);
          if (iVar2 != 0) {
            uVar6 = func_0079e55c(iVar2,*(undefined4 *)((unsigned char *)((char *)&g_0051f300 + (intptr_t)(g_0051f320))),
                                    *(undefined4 *)((unsigned char *)((char *)&g_0051f302 + (intptr_t)(g_0051f324))),0);
          }
          (**(code **)**(undefined4 **)(((int)this) + 0x10c))
                    (*(undefined4 **)(((int)this) + 0x10c),((int)this),uVar6,uVar7);
        }
      }
    }
  }
  return;
}

void BLGridView::addRow(float p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

undefined4 BLGridView::isTouchParentInside(cocos2d::CCTouch* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

bool BLGridView::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void BLGridView::setItemPartner(cocos2d::CCNode* p1)
{
  undefined4 p4 = 0;

  *(int *)((int)this + 4*(0x49)) = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  (**(code **)(*(int *)this + 0xcc))(((int)this),p1,1,*(code **)(*(int *)this + 0xcc),p4);
  return;
}

undefined8 BLGridView::reloadDataByTick()
{
  undefined4 p2 = 0;

  ((cocos2d::CCNode *)(*(undefined4 *)(g_0051f668 + 0x51f662)))->schedule(0);
  return ghidra_CONCAT44(p2,((int)this));
}

void BLGridView::reloadDataOneTick()
{
  code *pcVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  iVar2 = (undefined4)(intptr_t)((**(code **)(**(int **)(((int)this) + 0x108) + 4))(*(int **)(((int)this) + 0x108),((int)this)));
  iVar8 = 0;
  do {
    if (iVar2 <= iVar8) {
      piVar5 = *(int **)(((int)this) + 0x10c);
      if (piVar5 != (int *)0x0) {
        (**(code **)(*(int *)(piVar5) + (4)))(piVar5,((int)this));
      }
      return;
    }
    iVar3 = (**(code **)**(undefined4 **)(((int)this) + 0x108))
                      (*(undefined4 **)(((int)this) + 0x108),((int)this));
    uVar11 = (undefined4)(iVar3 * iVar8);
    while( true ) {
      iVar9 = (undefined4)(intptr_t)(uVar11 - iVar3 * iVar8);
      if (iVar3 <= iVar9) break;
      uVar4 = (undefined4)(((cocos2d::CCArray *)*(undefined4 *)(((int)this) + 0x110))->count());
      if (uVar11 < uVar4) {
        piVar5 = (int *)((cocos2d::CCArray *)*(undefined4 *)(((int)this) + 0x110))->objectAtIndex((unsigned int)uVar11);
        (**(code **)(**(int **)(((int)this) + 0x108) + 0xc))
                  (*(int **)(((int)this) + 0x108),((int)this),piVar5,uVar11);
      }
      else {
        piVar5 = (int *)(**(code **)(**(int **)(((int)this) + 0x108) + 0xc))
                                  (*(int **)(((int)this) + 0x108),((int)this),0,uVar11);
        if (piVar5 == (int *)0x0) {
          (**(code **)(**(int **)(((int)this) + 0x108) + 8))
                    (&uStack_20,*(int **)(((int)this) + 0x108),((int)this));
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x51f7a2);
          (*pcVar1)();
        }
        (**(code **)(**(int **)(((int)this) + 0x124) + 200))(*(int **)(((int)this) + 0x124),piVar5);
        ((cocos2d::CCArray *)*(undefined4 *)(((int)this) + 0x110))->addObject((cocos2d::CCObject*)piVar5);
      }
      (**(code **)(**(int **)(((int)this) + 0x108) + 8))(&uStack_20,*(int **)(((int)this) + 0x108),((int)this));
      uVar7 = (undefined4)(uStack_20);
      uVar11 = (undefined4)(uVar11 + 1);
      iVar10 = (int)*(int *)&(*piVar5);
      uVar6 = (undefined4)(func_0079e2ec(iVar9));
      uVar6 = (undefined4)(func_0079e4fc(uVar6,uVar7));
      uVar7 = (undefined4)(func_0079e4fc(uVar7,0x3f000000));
      uVar7 = (undefined4)(func_0079e59c(uVar6,uVar7));
      (**(code **)(iVar10 + 0x5c))(piVar5,uVar7);
      uVar7 = (undefined4)(uStack_1c);
      iVar9 = (int)*(int *)&(*piVar5);
      uVar6 = (undefined4)(func_0079e2ec((iVar2 + -1) - iVar8));
      uVar6 = (undefined4)(func_0079e4fc(uVar6,uVar7));
      uVar7 = (undefined4)(func_0079e4fc(uVar7,0x3f000000));
      uVar7 = (undefined4)(func_0079e59c(uVar6,uVar7));
      (**(code **)(iVar9 + 100))(piVar5,uVar7);
    }
    iVar8 = (undefined4)(intptr_t)(iVar8 + 1);
  } while( true );
}

void BLGridView::removeAllItems()
{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = (undefined4)(0);
  while( true ) {
    uVar1 = (undefined4)(((cocos2d::CCArray *)*(undefined4 *)(((int)this) + 0x110))->count());
    if (uVar1 <= uVar3) break;
    iVar2 = (undefined4)(intptr_t)(((cocos2d::CCArray *)*(undefined4 *)(((int)this) + 0x110))->objectAtIndex((unsigned int)uVar3));
    if ((iVar2 != 0) &&
       (iVar2 = func_0079e55c(iVar2,*(undefined4 *)(g_0051f7f8 + 0x51f7d4),
                                *(undefined4 *)(g_0051f7fc + 0x51f7d6),0), iVar2 != 0)) {
      (**(code **)(**(int **)(((int)this) + 0x124) + 0xf4))(*(int **)(((int)this) + 0x124),iVar2,1);
    }
    uVar3 = (undefined4)(uVar3 + 1);
  }
  ((cocos2d::CCArray *)*(undefined4 *)(((int)this) + 0x110))->removeAllObjects();
  return;
}

void BLGridView::reloadData(bool p1, bool p2)
{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined1 auStack_20 [12];
  
  if (*(int *)((int)this + 4*(0x42)) == 0) {
    iVar8 = (undefined4)(intptr_t)(((intptr_t)"GridView m_pDataSource null!"));
    iVar1 = (undefined4)(intptr_t)(0 /* ctorZero */);
    if (iVar1 == 0) {
      cocos2d::CCLog((char const*)((intptr_t)"Assert failed: %s"), iVar8);
    }
    if (*(int *)((int)this + 4*(0x42)) == 0) {
      func_0079e864(6,((intptr_t)"cocos2d-x assert"),((intptr_t)"%s function:%s line:%d"),((intptr_t)"jni/../../Classes/ui/control/BLGridView.cpp"),
                      ((intptr_t)"reloadData"),0x9d);
    }
  }
  if (p1 != 0) {
    BLGridView::removeAllItems();
  }
  iVar1 = (undefined4)(intptr_t)((**(code **)(*(int *)*(int *)((int)this + 4*(0x42)) + 4))((int *)*(int *)((int)this + 4*(0x42)),((int)this)));
  iVar8 = (undefined4)(intptr_t)((*(code *)**(undefined4 **)*(int *)((int)this + 4*(0x42)))((undefined4 *)*(int *)((int)this + 4*(0x42)),((int)this)));
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x42)) + 8))(&uStack_28,(int *)*(int *)((int)this + 4*(0x42)),((int)this));
  *(int *)((int)this + 4*(0x48)) = 0;
  uVar2 = (undefined4)(((cocos2d::CCArray *)*(int *)((int)this + 4*(0x44)))->count());
  uVar7 = (undefined4)(iVar1 * iVar8);
  if (uVar7 < uVar2) {
    uVar3 = (undefined4)(cocos2d::CCArray::create());
    for (; uVar2 = (undefined4)(intptr_t)(((cocos2d::CCArray *)*(int *)((int)this + 4*(0x44)))->count(), uVar7 < uVar2); uVar7 = uVar7 + 1) {
      uVar4 = (undefined4)(((cocos2d::CCArray *)*(int *)((int)this + 4*(0x44)))->objectAtIndex((unsigned int)uVar7));
      ((cocos2d::CCArray *)uVar3)->addObject((cocos2d::CCObject*)uVar4);
    }
    for (uVar2 = 0; uVar7 = (undefined4)(intptr_t)(((cocos2d::CCArray *)uVar3)->count(), uVar2 < uVar7); uVar2 = uVar2 + 1) {
      iVar5 = (undefined4)(intptr_t)(((cocos2d::CCArray *)uVar3)->objectAtIndex((unsigned int)uVar2));
      iVar6 = 0;
      if ((iVar5 != 0) &&
         (iVar6 = func_0079e55c(iVar5,*(undefined4 *)(g_0051f984 + 0x51f930),
                                  *(undefined4 *)(g_0051f988 + 0x51f932),0), iVar6 != 0)) {
        (**(code **)(*(int *)*(int *)((int)this + 4*(0x49)) + 0xf4))((int *)*(int *)((int)this + 4*(0x49)),iVar6,1);
      }
      ((cocos2d::CCArray *)*(int *)((int)this + 4*(0x44)))->removeObject((cocos2d::CCObject*)iVar6, 1);
    }
  }
  uVar3 = (undefined4)(func_0079e2ec(iVar8));
  uVar3 = (undefined4)(func_0079e4fc(uVar3,uStack_28));
  uVar4 = (undefined4)(func_0079e2ec(iVar1));
  uVar4 = (undefined4)(func_0079e4fc(uVar4,uStack_24));
  0 /* ctorZero */;
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x4a)) + 0x88))((int *)*(int *)((int)this + 4*(0x4a)),auStack_20);
  (**(code **)(*(int *)this + 0x88))(((int)this),auStack_20);
  if (p2 == 0) {
    BLGridView::reloadDataOneTick();
  }
  else {
    BLGridView::reloadDataByTick();
  }
  return;
}

bool BLGridView::init()
{
  int iVar1;
  int iVar2;
  
  iVar1 = (undefined4)(intptr_t)(((cocos2d::CCLayer *)this)->init());
  if (iVar1 != 0) {
    iVar2 = (undefined4)(intptr_t)(cocos2d::CCLayerColor::create());
    *(int *)((int)this + 4*(0x4a)) = iVar2;
    (**(code **)(*(int *)this + 200))(((int)this),iVar2);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x4a)) + 0x218))((int *)*(int *)((int)this + 4*(0x4a)),(unsigned char *)((char *)&g_0051f9c7 + (intptr_t)(g_0051f9e0)))
    ;
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x4a)) + 0x7c))((int *)*(int *)((int)this + 4*(0x4a)),(unsigned char *)((char *)&g_0051f9fa + (intptr_t)(g_0051f9e4)));
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x4a)) + 0x200))((int *)*(int *)((int)this + 4*(0x4a)),0);
  }
  return iVar1;
}
