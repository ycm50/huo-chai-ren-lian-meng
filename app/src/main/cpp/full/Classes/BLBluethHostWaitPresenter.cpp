#include "BLBluethHostWaitPresenter.h"
#include "BLBluethHostWaitView.h"
#include "BLLeakUtils.h"
#include "UIManager.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
using namespace cocos2d;
// 兜底声明
#include "JniHelper.h"   // P1: cocos2d::JniHelper
#include <jni.h>   // P1: _JNIEnv/_jclass/_jmethodID
#include <new>   // ghost_fix.js 自动补齐
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_004fa238;
extern "C" unsigned long UNK_004fa252;
extern "C" unsigned long UNK_004fa298;
extern "C" unsigned long UNK_004fa2c0;
extern "C" unsigned long UNK_004fa30e;
extern "C" unsigned long UNK_004fa310;
extern "C" unsigned long UNK_004fa312;
extern "C" unsigned long UNK_004fa33e;
extern "C" unsigned long UNK_004fa36c;
extern "C" unsigned long UNK_004fa3f8;
extern "C" unsigned long UNK_004fa3fa;
extern "C" unsigned long UNK_004fa47a;
extern "C" unsigned long _UNK_004fa284;
extern "C" unsigned long _UNK_004fa288;
extern "C" unsigned long _UNK_004fa29c;
extern "C" unsigned long _UNK_004fa2c4;
extern "C" unsigned long _UNK_004fa324;
extern "C" unsigned long _UNK_004fa328;
extern "C" unsigned long _UNK_004fa32c;
extern "C" unsigned long _UNK_004fa398;
extern "C" unsigned long _UNK_004fa39c;
extern "C" unsigned long _UNK_004fa404;
extern "C" unsigned long _UNK_004fa408;
extern "C" unsigned long _UNK_004fa488;
extern "C" unsigned long g_004fa238;
extern "C" unsigned long g_004fa252;
extern "C" unsigned long g_004fa284;
extern "C" unsigned long g_004fa288;
extern "C" unsigned long g_004fa298;
extern "C" unsigned long g_004fa29c;
extern "C" unsigned long g_004fa2c0;
extern "C" unsigned long g_004fa2c4;
extern "C" unsigned long g_004fa30e;
extern "C" unsigned long g_004fa310;
extern "C" unsigned long g_004fa312;
extern "C" unsigned long g_004fa324;
extern "C" unsigned long g_004fa328;
extern "C" unsigned long g_004fa32c;
extern "C" unsigned long g_004fa33e;
extern "C" unsigned long g_004fa36c;
extern "C" unsigned long g_004fa398;
extern "C" unsigned long g_004fa39c;
extern "C" unsigned long g_004fa3f8;
extern "C" unsigned long g_004fa3fa;
extern "C" unsigned long g_004fa404;
extern "C" unsigned long g_004fa408;
extern "C" unsigned long g_004fa47a;
extern "C" unsigned long g_004fa488;
bool BLBluethHostWaitPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLBluethHostWaitPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLBluethHostWaitPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLBluethHostWaitPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLBluethHostWaitPresenter::tick(float p1)
{
  return;
}

BLBluethHostWaitPresenter::~BLBluethHostWaitPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_004fa238 + g_004fa284);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x3c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_004fa252 + g_004fa288,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLBluethHostWaitPresenter::onConnectSuccess(cocos2d::CCObject* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(0x6f);
  return;
}


BLBluethHostWaitPresenter::BLBluethHostWaitPresenter()
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
  iVar3 = *(int *)(&g_004fa33e + g_004fa398);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x3c;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 1);
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_004fa36c + g_004fa39c,&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

undefined4 BLBluethHostWaitPresenter::create(BLBluethHostWaitView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x1c))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLBluethHostWaitPresenter::onExit()
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

// ===== 修复: 补回被误删的函数占位 (3) =====
void BLBluethHostWaitPresenter::onClose(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 p4 = 0;

  undefined4 uVar1;
  int iVar2;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_14 = (undefined4)(p1);
  uStack_10 = (undefined4)(p2);
  uStack_c = (undefined4)(p4);
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(0x6f);
  iVar2 = (undefined4)(intptr_t)(cocos2d::JniHelper::getStaticMethodInfo(*(cocos2d::JniMethodInfo *)&uStack_14, (char const*)(unsigned char *)((char *)&g_004fa30e + (intptr_t)(g_004fa324)), (char const*)(unsigned char *)((char *)&g_004fa310 + (intptr_t)(g_004fa328)), (char const*)(unsigned char *)((char *)&g_004fa312 + (intptr_t)(g_004fa32c))));
  if (iVar2 != 0) {
    ((_JNIEnv *)this)->CallStaticVoidMethod((_jclass*)uStack_14, (_jmethodID*)uStack_10, uStack_c);
  }
  return;
}

void BLBluethHostWaitPresenter::onEnter()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLBluethHostWaitPresenter::initWithView(BLBluethHostWaitView* p1)
{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  *(undefined4 *)(((int)this) + 0x18) = (undefined4)(intptr_t)p1;
  piVar1 = (int *)((BLBluethHostWaitView *)p1)->getBtnClose();
  (**(code **)(*piVar1 + 0x1d4))(piVar1,1);
  piVar1 = (int *)((BLBluethHostWaitView *)*(undefined4 *)(((int)this) + 0x18))->getBtnClose();
  pcVar3 = *(code **)(*piVar1 + 0x28c);
  piVar2 = (int *)((BLBluethHostWaitView *)*(undefined4 *)(((int)this) + 0x18))->getBtnClose();
  piVar2 = (int *)(**(code **)(*piVar2 + 0x308))(piVar2,1);
  (**(code **)(*piVar2 + 0x1cc))(&uStack_20,piVar2);
  (*pcVar3)(piVar1,&uStack_20);
  piVar1 = (int *)((BLBluethHostWaitView *)*(undefined4 *)(((int)this) + 0x18))->getBtnClose();
  uStack_1c = (undefined4)(0);
  uStack_20 = (undefined4)(*(undefined4 *)(&g_004fa47a + g_004fa488));
  (**(code **)(*piVar1 + 0x254))(piVar1,((int)this),uStack_20,0,0x20);
  return;
}
