#include "BLItemDataInfoUpPresenter.h"
#include "CCLabelTTF.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "CCObject.h"
#include "CCTouch.h"
#include "CCDirector.h"
#include "CommonUseData.h"
#include "BackPackItemData.h"
#include "BLItemDataInfoUpView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "DataCacheManager.h"
#include "DataManager.h"
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
extern "C" long long func_0079e34c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e904(...);
extern "C" long long func_0079e914(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_005f0e9c;
extern "C" unsigned long UNK_005f0eb6;
extern "C" unsigned long UNK_005f0efc;
extern "C" unsigned long UNK_005f0f24;
extern "C" unsigned long UNK_005f0f6e;
extern "C" unsigned long UNK_005f0f9c;
extern "C" unsigned long UNK_005f1068;
extern "C" unsigned long UNK_005f1080;
extern "C" unsigned long UNK_005f109a;
extern "C" unsigned long UNK_005f10be;
extern "C" unsigned long UNK_005f10ec;
extern "C" unsigned long UNK_005f111e;
extern "C" unsigned long UNK_005f1122;
extern "C" unsigned long UNK_005f11a8;
extern "C" unsigned long UNK_005f1230;
extern "C" unsigned long UNK_005f12de;
extern "C" unsigned long UNK_005f12fe;
extern "C" unsigned long UNK_005f1342;
extern "C" unsigned long UNK_005f135a;
extern "C" unsigned long UNK_005f1472;
extern "C" unsigned long UNK_005f149a;
extern "C" unsigned long UNK_005f14ba;
extern "C" unsigned long UNK_005f1588;
extern "C" unsigned long UNK_005f15b6;
extern "C" unsigned long UNK_005f15ba;
extern "C" unsigned long UNK_005f1640;
extern "C" unsigned long UNK_005f16c8;
extern "C" unsigned long UNK_005f176a;
extern "C" unsigned long UNK_005f178a;
extern "C" unsigned long UNK_005f17ce;
extern "C" unsigned long UNK_005f17e6;
extern "C" unsigned long UNK_005f18fe;
extern "C" unsigned long UNK_005f192a;
extern "C" unsigned long UNK_005f1946;
extern "C" unsigned long _UNK_005f0ee8;
extern "C" unsigned long _UNK_005f0eec;
extern "C" unsigned long _UNK_005f0f00;
extern "C" unsigned long _UNK_005f0f28;
extern "C" unsigned long _UNK_005f0fc8;
extern "C" unsigned long _UNK_005f0fcc;
extern "C" unsigned long _UNK_005f10d0;
extern "C" unsigned long _UNK_005f10d4;
extern "C" unsigned long _UNK_005f10d8;
extern "C" unsigned long _UNK_005f10dc;
extern "C" unsigned long _UNK_005f1424;
extern "C" unsigned long _UNK_005f1428;
extern "C" unsigned long _UNK_005f142c;
extern "C" unsigned long _UNK_005f1430;
extern "C" unsigned long _UNK_005f1434;
extern "C" unsigned long _UNK_005f1438;
extern "C" unsigned long _UNK_005f143c;
extern "C" unsigned long _UNK_005f1440;
extern "C" unsigned long _UNK_005f1444;
extern "C" unsigned long _UNK_005f1570;
extern "C" unsigned long _UNK_005f1574;
extern "C" unsigned long _UNK_005f1578;
extern "C" unsigned long _UNK_005f18b0;
extern "C" unsigned long _UNK_005f18b4;
extern "C" unsigned long _UNK_005f18b8;
extern "C" unsigned long _UNK_005f18bc;
extern "C" unsigned long _UNK_005f18c0;
extern "C" unsigned long _UNK_005f18c4;
extern "C" unsigned long _UNK_005f18c8;
extern "C" unsigned long _UNK_005f18cc;
extern "C" unsigned long _UNK_005f18d0;
extern "C" unsigned long _UNK_005f19fc;
extern "C" unsigned long _UNK_005f1a00;
extern "C" unsigned long _UNK_005f1a04;
extern "C" unsigned long g_005f0e9c;
extern "C" unsigned long g_005f0eb6;
extern "C" unsigned long g_005f0ee8;
extern "C" unsigned long g_005f0eec;
extern "C" unsigned long g_005f0efc;
extern "C" unsigned long g_005f0f00;
extern "C" unsigned long g_005f0f24;
extern "C" unsigned long g_005f0f28;
extern "C" unsigned long g_005f0f6e;
extern "C" unsigned long g_005f0f9c;
extern "C" unsigned long g_005f0fc8;
extern "C" unsigned long g_005f0fcc;
extern "C" unsigned long g_005f1068;
extern "C" unsigned long g_005f1080;
extern "C" unsigned long g_005f109a;
extern "C" unsigned long g_005f10be;
extern "C" unsigned long g_005f10d0;
extern "C" unsigned long g_005f10d4;
extern "C" unsigned long g_005f10d8;
extern "C" unsigned long g_005f10dc;
extern "C" unsigned long g_005f10ec;
extern "C" unsigned long g_005f111e;
extern "C" unsigned long g_005f1122;
extern "C" unsigned long g_005f11a8;
extern "C" unsigned long g_005f1230;
extern "C" unsigned long g_005f12de;
extern "C" unsigned long g_005f12fe;
extern "C" unsigned long g_005f1342;
extern "C" unsigned long g_005f135a;
extern "C" unsigned long g_005f1424;
extern "C" unsigned long g_005f1428;
extern "C" unsigned long g_005f142c;
extern "C" unsigned long g_005f1430;
extern "C" unsigned long g_005f1434;
extern "C" unsigned long g_005f1438;
extern "C" unsigned long g_005f143c;
extern "C" unsigned long g_005f1440;
extern "C" unsigned long g_005f1444;
extern "C" unsigned long g_005f1472;
extern "C" unsigned long g_005f149a;
extern "C" unsigned long g_005f14ba;
extern "C" unsigned long g_005f1570;
extern "C" unsigned long g_005f1574;
extern "C" unsigned long g_005f1578;
extern "C" unsigned long g_005f1588;
extern "C" unsigned long g_005f15b6;
extern "C" unsigned long g_005f15ba;
extern "C" unsigned long g_005f1640;
extern "C" unsigned long g_005f16c8;
extern "C" unsigned long g_005f176a;
extern "C" unsigned long g_005f178a;
extern "C" unsigned long g_005f17ce;
extern "C" unsigned long g_005f17e6;
extern "C" unsigned long g_005f18b0;
extern "C" unsigned long g_005f18b4;
extern "C" unsigned long g_005f18b8;
extern "C" unsigned long g_005f18bc;
extern "C" unsigned long g_005f18c0;
extern "C" unsigned long g_005f18c4;
extern "C" unsigned long g_005f18c8;
extern "C" unsigned long g_005f18cc;
extern "C" unsigned long g_005f18d0;
extern "C" unsigned long g_005f18fe;
extern "C" unsigned long g_005f192a;
extern "C" unsigned long g_005f1946;
extern "C" unsigned long g_005f19fc;
extern "C" unsigned long g_005f1a00;
extern "C" unsigned long g_005f1a04;
BackPackItemData* BLItemDataInfoUpPresenter::getPackItemData() const
{
  return (BackPackItemData*)(*(undefined4 *)(((int)this) + 0x18));
}

bool BLItemDataInfoUpPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLItemDataInfoUpPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLItemDataInfoUpPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLItemDataInfoUpPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLItemDataInfoUpPresenter::tick(float p1)
{
  return;
}

BLItemDataInfoUpPresenter::~BLItemDataInfoUpPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_005f0e9c + g_005f0ee8);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x44;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005f0eb6 + g_005f0eec,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLItemDataInfoUpPresenter::onClose(cocos2d::CCObject* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(0x1f);
  return;
}

void BLItemDataInfoUpPresenter::setPackItemData(BackPackItemData* p1)
{
  if (*(int *)(((int)this) + 0x18) != (int)(intptr_t)p1) {
    if ((int)(intptr_t)p1 != 0) {
      ((cocos2d::CCObject *)p1)->retain();
    }
    if (*(int *)(((int)this) + 0x18) != 0) {
      ((cocos2d::CCObject *)this)->release();
    }
    *(int *)(((int)this) + 0x18) = (undefined4)(intptr_t)p1;
  }
  return;
}

BLItemDataInfoUpPresenter::BLItemDataInfoUpPresenter()
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
  iVar3 = *(int *)(&g_005f0f6e + g_005f0fc8);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x44;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 0);
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005f0f9c + g_005f0fcc,&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

undefined4 BLItemDataInfoUpPresenter::create(BLItemDataInfoUpView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x20))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLItemDataInfoUpPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  return;
}

void BLItemDataInfoUpPresenter::onEnter()
{
  return;
}

void BLItemDataInfoUpPresenter::initWithView(BLItemDataInfoUpView* p1)
{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  code *pcVar4;
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  *(undefined4 *)(((int)this) + 0x1c) = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  piVar1 = (int *)((BLItemDataInfoUpView *)(p1))->getBtnClose();
  pcVar4 = *(code **)(*piVar1 + 0x28c);
  piVar2 = (int *)((BLItemDataInfoUpView *)(*(undefined4 *)(((int)this) + 0x1c)))->getBtnClose();
  piVar2 = (int *)(**(code **)(*(int *)(piVar2) + (0x308)))(piVar2,1);
  (**(code **)(*(int *)(piVar2) + (0x1cc)))(&uStack_20,piVar2);
  (*pcVar4)(piVar1,&uStack_20);
  piVar1 = (int *)((BLItemDataInfoUpView *)(*(undefined4 *)(((int)this) + 0x1c)))->getBtnClose();
  uStack_1c = (undefined4)(0);
  uStack_20 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_005f1068 + (intptr_t)(g_005f10d0))));
  (**(code **)(*(int *)(piVar1) + (0x254)))(piVar1,((int)this),uStack_20,0,0x20);
  uVar3 = (undefined4)(((BLItemDataInfoUpView *)(*(undefined4 *)(((int)this) + 0x1c)))->getLabItemName());
  ((cocos2d::CCLabelTTF *)(uVar3))->enableStroke(*(cocos2d::_ccColor3B const*)(unsigned char *)((char *)&g_005f1080 + (intptr_t)(g_005f10d4)), 0x3f800000, 1);
  piVar1 = (int *)((BLItemDataInfoUpView *)(*(undefined4 *)(((int)this) + 0x1c)))->getBtnClose();
  pcVar4 = *(code **)(*piVar1 + 0x26c);
  func_0079e45c(auStack_24,(unsigned char *)((char *)&g_005f109a + (intptr_t)(g_005f10d8)),auStack_28);
  (*pcVar4)(piVar1,auStack_24);
  func_0079e2bc(auStack_24);
  uVar3 = (undefined4)(((BLItemDataInfoUpView *)(*(undefined4 *)(((int)this) + 0x1c)))->getLabPrice());
  ((cocos2d::CCLabelTTF *)(uVar3))->enableStroke(*(cocos2d::_ccColor3B const*)(unsigned char *)((char *)&g_005f10be + (intptr_t)(g_005f10dc)), 0x3f800000, 1);
  return;
}

void BLItemDataInfoUpPresenter::onBackPackUpdate(cocos2d::CCObject* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLItemDataInfoUpPresenter::initCommonData(CommonUseData* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLItemDataInfoUpPresenter::initPackItemData(BackPackItemData* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(0 /* ctorZero */);
  BLItemDataInfoUpPresenter::initCommonData((CommonUseData*)uVar1);
  return;
}
