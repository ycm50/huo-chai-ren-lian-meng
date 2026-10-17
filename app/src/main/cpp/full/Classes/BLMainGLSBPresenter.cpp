#include "BLMainGLSBPresenter.h"
#include "CCNotificationCenter.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "CCObject.h"
#include "CCTouch.h"
#include "CCDirector.h"
#include "BLLeakUtils.h"
#include "BLMainGLSBView.h"
#include "BLUpAndDownUtils.h"
#include "DataManager.h"
#include "MainGLSBData.h"
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
extern "C" long long func_0079e45c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0058d2ec;
extern "C" unsigned long UNK_0058d304;
extern "C" unsigned long UNK_0058d31c;
extern "C" unsigned long UNK_0058d334;
extern "C" unsigned long UNK_0058d390;
extern "C" unsigned long UNK_0058d3aa;
extern "C" unsigned long UNK_0058d3f0;
extern "C" unsigned long UNK_0058d418;
extern "C" unsigned long UNK_0058d45c;
extern "C" unsigned long UNK_0058d48c;
extern "C" unsigned long UNK_0058d4b0;
extern "C" unsigned long UNK_0058d4b2;
extern "C" unsigned long UNK_0058d4ca;
extern "C" unsigned long UNK_0058d4ce;
extern "C" unsigned long UNK_0058d56e;
extern "C" unsigned long UNK_0058d58e;
extern "C" unsigned long UNK_0058d5ac;
extern "C" unsigned long UNK_0058d668;
extern "C" unsigned long UNK_0058d6a6;
extern "C" unsigned long _UNK_0058d2f0;
extern "C" unsigned long _UNK_0058d308;
extern "C" unsigned long _UNK_0058d320;
extern "C" unsigned long _UNK_0058d338;
extern "C" unsigned long _UNK_0058d3dc;
extern "C" unsigned long _UNK_0058d3e0;
extern "C" unsigned long _UNK_0058d3f4;
extern "C" unsigned long _UNK_0058d41c;
extern "C" unsigned long _UNK_0058d4f0;
extern "C" unsigned long _UNK_0058d4f4;
extern "C" unsigned long _UNK_0058d4f8;
extern "C" unsigned long _UNK_0058d4fc;
extern "C" unsigned long _UNK_0058d500;
extern "C" unsigned long _UNK_0058d504;
extern "C" unsigned long _UNK_0058d5bc;
extern "C" unsigned long _UNK_0058d5c0;
extern "C" unsigned long _UNK_0058d5c4;
extern "C" unsigned long _UNK_0058d6dc;
extern "C" unsigned long _UNK_0058d6e0;
extern "C" unsigned long g_0058d2ec;
extern "C" unsigned long g_0058d2f0;
extern "C" unsigned long g_0058d304;
extern "C" unsigned long g_0058d308;
extern "C" unsigned long g_0058d31c;
extern "C" unsigned long g_0058d320;
extern "C" unsigned long g_0058d334;
extern "C" unsigned long g_0058d338;
extern "C" unsigned long g_0058d390;
extern "C" unsigned long g_0058d3aa;
extern "C" unsigned long g_0058d3dc;
extern "C" unsigned long g_0058d3e0;
extern "C" unsigned long g_0058d3f0;
extern "C" unsigned long g_0058d3f4;
extern "C" unsigned long g_0058d418;
extern "C" unsigned long g_0058d41c;
extern "C" unsigned long g_0058d45c;
extern "C" unsigned long g_0058d48c;
extern "C" unsigned long g_0058d4b0;
extern "C" unsigned long g_0058d4b2;
extern "C" unsigned long g_0058d4ca;
extern "C" unsigned long g_0058d4ce;
extern "C" unsigned long g_0058d4f0;
extern "C" unsigned long g_0058d4f4;
extern "C" unsigned long g_0058d4f8;
extern "C" unsigned long g_0058d4fc;
extern "C" unsigned long g_0058d500;
extern "C" unsigned long g_0058d504;
extern "C" unsigned long g_0058d56e;
extern "C" unsigned long g_0058d58e;
extern "C" unsigned long g_0058d5ac;
extern "C" unsigned long g_0058d5bc;
extern "C" unsigned long g_0058d5c0;
extern "C" unsigned long g_0058d5c4;
extern "C" unsigned long g_0058d668;
extern "C" unsigned long g_0058d6a6;
extern "C" unsigned long g_0058d6dc;
extern "C" unsigned long g_0058d6e0;
bool BLMainGLSBPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLMainGLSBPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLMainGLSBPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLMainGLSBPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLMainGLSBPresenter::tick(float p1)
{
  return;
}

BLMainGLSBPresenter::~BLMainGLSBPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0058d390 + g_0058d3dc);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x3c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0058d3aa + g_0058d3e0,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLMainGLSBPresenter::onNewEquip(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->showUIById(0xc3);
  return;
}

void BLMainGLSBPresenter::showOldEquip()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->showUIById(0xc2);
  return;
}

void BLMainGLSBPresenter::onClose(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(0xc1);
  return;
}


undefined4 BLMainGLSBPresenter::create(BLMainGLSBView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x1c))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLMainGLSBPresenter::onEnter()
{
  return;
}

void BLMainGLSBPresenter::onExit()
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

undefined4 BLMainGLSBPresenter::initWithView(BLMainGLSBView* p1)
{
  int *piVar1;
  
  *(undefined4 *)(((int)this) + 0x18) = (undefined4)(intptr_t)p1;
  piVar1 = (int *)((BLMainGLSBView *)p1)->getBtnClose();
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)(&g_0058d56e + g_0058d5bc),0,0x20);
  piVar1 = (int *)((BLMainGLSBView *)*(undefined4 *)(((int)this) + 0x18))->getBtnOldEquip();
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)(&g_0058d58e + g_0058d5c0),0,0x20);
  piVar1 = (int *)((BLMainGLSBView *)*(undefined4 *)(((int)this) + 0x18))->getBtnNewEquip();
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)(&g_0058d5ac + g_0058d5c4),0,0x20);
  return 1;
}

// ===== 修复: 补回被误删的函数占位 (3) =====
BLMainGLSBPresenter::BLMainGLSBPresenter()
{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_2c [12];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  0 /* ctorZero */;
  iVar3 = (undefined4)(intptr_t)(*(int *)((unsigned char *)((char *)&g_0058d45c + (intptr_t)(g_0058d4f0))));
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x3c;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x40)))());
  ((cocos2d::CCTouchDispatcher *)(uVar2))->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 1);
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(auStack_2c,(unsigned char *)((char *)&g_0058d48c + (intptr_t)(g_0058d4f4)),&uStack_20);
  ((BLLeakUtils *)(uVar2))->addClass((std::string)(char*)auStack_2c);
  func_0079e2bc(auStack_2c);
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)(((int)this)))->addObserver((cocos2d::CCObject*)*(undefined4 *)((unsigned char *)((char *)&g_0058d4b0 + (intptr_t)(g_0058d4f8))), 0, (char const*)(unsigned char *)((char *)&g_0058d4b2 + (intptr_t)(g_0058d4fc)), 0);
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  uStack_1c = (undefined4)(0);
  uStack_20 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_0058d4ca + (intptr_t)(g_0058d500))));
  ((cocos2d::CCNotificationCenter *)(((int)this)))->addObserver((cocos2d::CCObject*)uStack_20, 0, (char const*)(unsigned char *)((char *)&g_0058d4ce + (intptr_t)(g_0058d504)), 0);
  return;
}

void BLMainGLSBPresenter::onOldEquip(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((sir::singleton<MainGLSBData, 0> *)this)->instance());
  ((MainGLSBData *)uVar1)->GetDataFromNet(0, 1);
  return;
}

undefined8 BLMainGLSBPresenter::showNewEquip()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
