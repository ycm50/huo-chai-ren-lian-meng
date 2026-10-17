#include "BLPageLayer.h"
#include "CCObject.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "CCNode.h"
#include "CCGeometry.h"
#include "CCTouch.h"
#include "CCLayer.h"
#include "CCDictionary.h"
#include "CCDirector.h"
#include "BLPageLayerDelegate.h"
#include "BLLeakUtils.h"
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
extern "C" long long func_0079e4dc(...);
extern "C" long long func_0079e4ec(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e51c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e62c(...);
extern "C" long long func_0079e7b4(...);
extern "C" long long func_0079e7e4(...);
extern "C" long long func_0079e924(...);
extern "C" long long func_0079ec44(...);
extern "C" long long func_0079ec54(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_00520e28;
extern "C" unsigned long UNK_00520f00;
extern "C" unsigned long UNK_00520f18;
extern "C" unsigned long UNK_00520fba;
extern "C" unsigned long UNK_00520fc4;
extern "C" unsigned long UNK_00521032;
extern "C" unsigned long UNK_00521034;
extern "C" unsigned long UNK_0052105c;
extern "C" unsigned long UNK_005210ac;
extern "C" unsigned long UNK_005210f0;
extern "C" unsigned long UNK_00521118;
extern "C" unsigned long UNK_005211ca;
extern "C" unsigned long UNK_005211ce;
extern "C" unsigned long UNK_005211e2;
extern "C" unsigned long UNK_005212b0;
extern "C" unsigned long UNK_005212ec;
extern "C" unsigned long UNK_00521358;
extern "C" unsigned long UNK_00521388;
extern "C" unsigned long UNK_005213e2;
extern "C" unsigned long UNK_005213ec;
extern "C" unsigned long UNK_0052147c;
extern "C" unsigned long UNK_005214aa;
extern "C" unsigned long UNK_00521554;
extern "C" unsigned long UNK_0052157e;
extern "C" unsigned long UNK_0052167c;
extern "C" unsigned long UNK_00521744;
extern "C" unsigned long UNK_005217c4;
extern "C" unsigned long UNK_00521834;
extern "C" unsigned long UNK_005218b8;
extern "C" unsigned long _UNK_00520e2c;
extern "C" unsigned long _UNK_00520f04;
extern "C" unsigned long _UNK_00520fe4;
extern "C" unsigned long _UNK_00520fe8;
extern "C" unsigned long _UNK_00520fec;
extern "C" unsigned long _UNK_00520ff0;
extern "C" unsigned long _UNK_0052104c;
extern "C" unsigned long _UNK_00521050;
extern "C" unsigned long _UNK_005210dc;
extern "C" unsigned long _UNK_005210e0;
extern "C" unsigned long _UNK_005210f4;
extern "C" unsigned long _UNK_0052111c;
extern "C" unsigned long _UNK_00521200;
extern "C" unsigned long _UNK_00521204;
extern "C" unsigned long _UNK_00521208;
extern "C" unsigned long _UNK_005212d8;
extern "C" unsigned long _UNK_005212dc;
extern "C" unsigned long _UNK_005212f0;
extern "C" unsigned long _UNK_0052159c;
extern "C" unsigned long _UNK_005215a0;
extern "C" unsigned long _UNK_005215a4;
extern "C" unsigned long _UNK_005215a8;
extern "C" unsigned long _UNK_005215ac;
extern "C" unsigned long _UNK_005215b0;
extern "C" unsigned long _UNK_005215b4;
extern "C" unsigned long _UNK_005215b8;
extern "C" unsigned long _UNK_005215bc;
extern "C" unsigned long _UNK_005215c0;
extern "C" unsigned long _UNK_005216a0;
extern "C" unsigned long _UNK_005216a4;
extern "C" unsigned long _UNK_005216a8;
extern "C" unsigned long _UNK_005216ac;
extern "C" unsigned long _UNK_005216b0;
extern "C" unsigned long _UNK_00521748;
extern "C" unsigned long _UNK_005217c8;
extern "C" unsigned long _UNK_00521838;
extern "C" unsigned long _UNK_005218bc;
extern "C" unsigned long _UNK_00521a1c;
extern "C" unsigned long extraout_r2;
extern "C" unsigned long g_00520e28;
extern "C" unsigned long g_00520e2c;
extern "C" unsigned long g_00520f00;
extern "C" unsigned long g_00520f04;
extern "C" unsigned long g_00520f18;
extern "C" unsigned long g_00520fba;
extern "C" unsigned long g_00520fc4;
extern "C" unsigned long g_00520fe4;
extern "C" unsigned long g_00520fe8;
extern "C" unsigned long g_00520fec;
extern "C" unsigned long g_00520ff0;
extern "C" unsigned long g_00521032;
extern "C" unsigned long g_00521034;
extern "C" unsigned long g_0052104c;
extern "C" unsigned long g_00521050;
extern "C" unsigned long g_0052105c;
extern "C" unsigned long g_005210ac;
extern "C" unsigned long g_005210dc;
extern "C" unsigned long g_005210e0;
extern "C" unsigned long g_005210f0;
extern "C" unsigned long g_005210f4;
extern "C" unsigned long g_00521118;
extern "C" unsigned long g_0052111c;
extern "C" unsigned long g_005211ca;
extern "C" unsigned long g_005211ce;
extern "C" unsigned long g_005211e2;
extern "C" unsigned long g_00521200;
extern "C" unsigned long g_00521204;
extern "C" unsigned long g_00521208;
extern "C" unsigned long g_005212b0;
extern "C" unsigned long g_005212d8;
extern "C" unsigned long g_005212dc;
extern "C" unsigned long g_005212ec;
extern "C" unsigned long g_005212f0;
extern "C" unsigned long g_00521358;
extern "C" unsigned long g_00521388;
extern "C" unsigned long g_005213e2;
extern "C" unsigned long g_005213ec;
extern "C" unsigned long g_0052147c;
extern "C" unsigned long g_005214aa;
extern "C" unsigned long g_00521554;
extern "C" unsigned long g_0052157e;
extern "C" unsigned long g_0052159c;
extern "C" unsigned long g_005215a0;
extern "C" unsigned long g_005215a4;
extern "C" unsigned long g_005215a8;
extern "C" unsigned long g_005215ac;
extern "C" unsigned long g_005215b0;
extern "C" unsigned long g_005215b4;
extern "C" unsigned long g_005215b8;
extern "C" unsigned long g_005215bc;
extern "C" unsigned long g_005215c0;
extern "C" unsigned long g_0052167c;
extern "C" unsigned long g_005216a0;
extern "C" unsigned long g_005216a4;
extern "C" unsigned long g_005216a8;
extern "C" unsigned long g_005216ac;
extern "C" unsigned long g_005216b0;
extern "C" unsigned long g_00521744;
extern "C" unsigned long g_00521748;
extern "C" unsigned long g_005217c4;
extern "C" unsigned long g_005217c8;
extern "C" unsigned long g_00521834;
extern "C" unsigned long g_00521838;
extern "C" unsigned long g_005218b8;
extern "C" unsigned long g_005218bc;
extern "C" unsigned long g_00521a1c;
bool BLPageLayer::getISMaxThreePages() const
{
  return *(undefined1 *)(((int)this) + 0x10c);
}

void BLPageLayer::setISMaxThreePages(bool p1)
{
  *(undefined1 *)(((int)this) + 0x10c) = p1;
  return;
}

float BLPageLayer::getResponseDistance() const
{
  return *(undefined4 *)(((int)this) + 0x110);
}

void BLPageLayer::setResponseDistance(float p1)
{
  *(undefined4 *)(((int)this) + 0x110) = p1;
  return;
}

BLPageLayerDelegate* BLPageLayer::getDelegate() const
{
  return (BLPageLayerDelegate*)(*(undefined4 *)(((int)this) + 0x114));
}

void BLPageLayer::setDelegate(BLPageLayerDelegate* p1)
{
  *(undefined4 *)(((int)this) + 0x114) = (undefined4)(intptr_t)p1;
  return;
}

bool BLPageLayer::getIsViewSize() const
{
  return *(undefined1 *)(((int)this) + 0x118);
}

void BLPageLayer::setIsViewSize(bool p1)
{
  *(undefined1 *)(((int)this) + 0x118) = p1;
  return;
}

bool BLPageLayer::getISCache() const
{
  return *(undefined1 *)(((int)this) + 0x119);
}

void BLPageLayer::setISCache(bool p1)
{
  *(undefined1 *)(((int)this) + 0x119) = p1;
  return;
}

cocos2d::CCLayer* BLPageLayer::getContainer() const
{
  return (cocos2d::CCLayer*)(*(undefined4 *)(((int)this) + 0x11c));
}

void BLPageLayer::setContainer(cocos2d::CCLayer* p1)
{
  *(undefined4 *)(((int)this) + 0x11c) = (undefined4)(intptr_t)p1;
  return;
}


void BLPageLayer::registerWithTouchDispatcher()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0xe4, 0, 0);
  return;
}



void BLPageLayer::cleanupNodes()
{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(((int)this) + 0x120) != 0) {
    iVar2 = *(int *)(*(int *)(((int)this) + 0x120) + 0x14);
    iVar3 = iVar2;
    if (iVar2 != 0) {
      iVar3 = *(int *)(iVar2 + 0x110);
    }
    while (iVar2 != 0) {
      if ((*(int *)(iVar2 + 0x104) != 0) &&
         (piVar1 = (int *)func_0079e55c(*(int *)(iVar2 + 0x104),
                                          *(undefined4 *)(&g_00521032 + g_0052104c),
                                          *(undefined4 *)(&g_00521034 + g_00521050),0),
         piVar1 != 0)) {
        (**(code **)(*piVar1 + 0x158))();
      }
      iVar2 = iVar3;
      if (iVar3 != 0) {
        iVar3 = *(int *)(iVar3 + 0x110);
      }
    }
  }
  return;
}

BLPageLayer::~BLPageLayer()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0052105c + g_005210dc);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x23c;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x26c;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x278;
  *(int *)((int)this + 4*(0x42)) = iVar2 + 0x288;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  BLPageLayer::cleanupNodes();
  if (*(int *)((int)this + 4*(0x48)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x48)) = 0;
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005210ac + g_005210e0,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

int * BLPageLayer::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x148)));
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

void BLPageLayer::setCurrentPage(int p1)
{
  *(undefined4 *)(((int)this) + 0x124) = p1;
  return;
}

int BLPageLayer::getCurrentPage()
{
  return *(undefined4 *)(((int)this) + 0x124);
}


void BLPageLayer::setDataSource(BLPageLayerDataSource* p1)
{
  *(undefined4 *)(((int)this) + 0x128) = (undefined4)(intptr_t)p1;
  return;
}





void BLPageLayer::reloadData()
{
  undefined4 p4 = 0;

  undefined4 *puVar1;
  
  BLPageLayer::cleanupNodes();
  ((cocos2d::CCDictionary *)*(undefined4 *)(((int)this) + 0x120))->removeAllObjects();
  BLPageLayer::initNewNode();
  puVar1 = *(undefined4 **)(((int)this) + 0x114);
  if (puVar1 != 0) {
    (**(code **)*puVar1)(puVar1,((int)this),*(undefined4 *)(((int)this) + 0x124),*(code **)*puVar1,p4);
    (**(code **)(**(int **)(((int)this) + 0x114) + 4))(*(int **)(((int)this) + 0x114),((int)this));
  }
  return;
}

void BLPageLayer::onMoveToComplete()
{
  *(undefined1 *)(((int)this) + 0x145) = 0;
  BLPageLayer::initNewNode();
  return;
}







void BLPageLayer::onExit()
{
  *(undefined4 *)(((int)this) + 0x114) = 0;
  ((cocos2d::CCLayer *)this)->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (15) =====
cocos2d::CCSize BLPageLayer::getViewSize()
{ return cocos2d::CCSize(); }

bool BLPageLayer::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

BLPageLayer::BLPageLayer()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  piStack_20 = (int *)((int)this);
  uStack_1c = (undefined4)(p2);
  uStack_18 = (undefined4)(p3);
  0 /* ctorZero */;
  iVar2 = (undefined4)(intptr_t)(*(int *)((unsigned char *)((char *)&g_00520f18 + (intptr_t)(g_00520fe4))));
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x23c;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x26c;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x278;
  *(int *)((int)this + 4*(0x42)) = iVar2 + 0x288;
  0 /* ctorZero */;
  0 /* ctorZero */;
  0 /* ctorZero */;
  *(int *)((int)this + 4*(0x4a)) = 0;
  *(int *)((int)this + 4*(0x49)) = 0;
  iVar2 = (undefined4)(intptr_t)(cocos2d::CCDictionary::create());
  *(int *)((int)this + 4*(0x48)) = iVar2;
  if (iVar2 != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  *(undefined1 *)(((int)this) + 0x46) = 1;
  *(undefined1 *)(((int)this) + 0x51) = 0;
  iVar2 = (undefined4)(intptr_t)(g_00520fe8);
  *(int *)((int)this + 4*(0x47)) = 0;
  *(int *)((int)this + 4*(0x44)) = iVar2;
  *(undefined1 *)((int)((int)this) + 0x145) = 0;
  ((cocos2d::CCNode *)(((int)this)))->setAnchorPoint(*(cocos2d::CCPoint const*)(unsigned char *)((char *)&g_00520fc4 + (intptr_t)(g_00520fec)));
  *(undefined1 *)((int)((int)this) + 0x119) = 1;
  *(int *)((int)this + 4*(0x45)) = 0;
  *(int *)((int)this + 4*(0x4a)) = 0;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_1c,(unsigned char *)((char *)&g_00520fba + (intptr_t)(g_00520ff0)),&piStack_20);
  ((BLLeakUtils *)(uVar1))->addClass((std::string)(char*)uStack_1c);
  func_0079e2bc(&uStack_1c);
  return;
}

void BLPageLayer::setViewSize(cocos2d::CCSize * p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLPageLayer::isChildIsScrollview(cocos2d::CCNode* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLPageLayer::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

undefined4 BLPageLayer::getRealScale(cocos2d::CCNode* p1)
{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (((int)(intptr_t)(int)(intptr_t)p1 == 0) || (iVar1 = (**(code **)(*(int *)(p1) + (0xe4)))(p1), iVar1 == 0)) {
    uVar2 = (undefined4)(0x3f800000);
  }
  else {
    uVar2 = (undefined4)((**(code **)(*(int *)(p1) + (0x44)))(p1));
    uVar3 = (undefined4)((**(code **)(*(int *)(p1) + (0xe4)))(p1));
    uVar3 = (undefined4)(((BLPageLayer *)(((int)this)))->getRealScale((cocos2d::CCNode*)uVar3));
    uVar2 = (undefined4)(func_0079e4fc(uVar2,uVar3));
  }
  return uVar2;
}

void BLPageLayer::initNewNode()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLPageLayer::moveTo(cocos2d::CCPoint * p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLPageLayer::nextPage()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLPageLayer::frontPage()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLPageLayer::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iStack_18;
  undefined4 uStack_14;
  
  iStack_18 = (undefined4)(intptr_t)((int *)((int)this));
  uStack_14 = (undefined4)(p1);
  ((cocos2d::CCTouch *)(&iStack_18))->getLocation();
  ((cocos2d::CCPoint *)(((int)this) + 0x13c))->operator=(*(cocos2d::CCPoint const*)&iStack_18);
  if (*(char *)(((int)this) + 0x144) != '\0') {
    uVar1 = (undefined4)(func_0079e57c(*(undefined4 *)(((int)this) + 0x13c),*(undefined4 *)(((int)this) + 0x134)));
    iVar3 = (undefined4)(intptr_t)(*(int *)(((int)this) + 0x110));
    iVar2 = (undefined4)(intptr_t)(func_0079e4ec(uVar1,iVar3));
    if (iVar2 == 0) {
      iVar2 = (undefined4)(intptr_t)(func_0079e7b4(uVar1,iVar3 + -0x80000000));
      if (iVar2 != 0) {
        ((BLPageLayer *)(((int)this)))->nextPage();
      }
    }
    else {
      ((BLPageLayer *)(((int)this)))->frontPage();
    }
  }
  return;
}

void BLPageLayer::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

bool BLPageLayer::init()
{
  undefined4 p4 = 0;

  int iVar1;
  int iVar2;
  code *pcVar3;
  
  iVar1 = (undefined4)(intptr_t)(((cocos2d::CCLayer *)this)->init());
  if (iVar1 != 0) {
    pcVar3 = *(code **)(*(int *)this + 0x1c8);
    (*pcVar3)(((int)this),1,*(int *)this,pcVar3,p4);
    iVar2 = (undefined4)(intptr_t)(cocos2d::CCLayer::create());
    *(int *)((int)this + 4*(0x47)) = iVar2;
    (**(code **)(*(int *)this + 200))(((int)this),iVar2);
  }
  return iVar1;
}

void BLPageLayer::visit()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
