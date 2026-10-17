#include "BLBluethRoomPresenter.h"
#include "BLBluethRoomView.h"
#include "BLLeakUtils.h"
#include "BluetoothHelper.h"
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
extern "C" unsigned long UNK_004fa49c;
extern "C" unsigned long UNK_004fa4b4;
extern "C" unsigned long UNK_004fa4cc;
extern "C" unsigned long UNK_004fa540;
extern "C" unsigned long UNK_004fa55a;
extern "C" unsigned long UNK_004fa5a0;
extern "C" unsigned long UNK_004fa5c8;
extern "C" unsigned long UNK_004fa626;
extern "C" unsigned long UNK_004fa628;
extern "C" unsigned long UNK_004fa62a;
extern "C" unsigned long UNK_004fa656;
extern "C" unsigned long UNK_004fa684;
extern "C" unsigned long UNK_004fa710;
extern "C" unsigned long UNK_004fa712;
extern "C" unsigned long UNK_004fa742;
extern "C" unsigned long UNK_004fa774;
extern "C" unsigned long UNK_004fa7a4;
extern "C" unsigned long _UNK_004fa4a0;
extern "C" unsigned long _UNK_004fa4b8;
extern "C" unsigned long _UNK_004fa4d0;
extern "C" unsigned long _UNK_004fa58c;
extern "C" unsigned long _UNK_004fa590;
extern "C" unsigned long _UNK_004fa5a4;
extern "C" unsigned long _UNK_004fa5cc;
extern "C" unsigned long _UNK_004fa63c;
extern "C" unsigned long _UNK_004fa640;
extern "C" unsigned long _UNK_004fa644;
extern "C" unsigned long _UNK_004fa6b0;
extern "C" unsigned long _UNK_004fa6b4;
extern "C" unsigned long _UNK_004fa71c;
extern "C" unsigned long _UNK_004fa720;
extern "C" unsigned long _UNK_004fa800;
extern "C" unsigned long _UNK_004fa804;
extern "C" unsigned long _UNK_004fa808;
extern "C" unsigned long g_004fa49c;
extern "C" unsigned long g_004fa4a0;
extern "C" unsigned long g_004fa4b4;
extern "C" unsigned long g_004fa4b8;
extern "C" unsigned long g_004fa4cc;
extern "C" unsigned long g_004fa4d0;
extern "C" unsigned long g_004fa540;
extern "C" unsigned long g_004fa55a;
extern "C" unsigned long g_004fa58c;
extern "C" unsigned long g_004fa590;
extern "C" unsigned long g_004fa5a0;
extern "C" unsigned long g_004fa5a4;
extern "C" unsigned long g_004fa5c8;
extern "C" unsigned long g_004fa5cc;
extern "C" unsigned long g_004fa626;
extern "C" unsigned long g_004fa628;
extern "C" unsigned long g_004fa62a;
extern "C" unsigned long g_004fa63c;
extern "C" unsigned long g_004fa640;
extern "C" unsigned long g_004fa644;
extern "C" unsigned long g_004fa656;
extern "C" unsigned long g_004fa684;
extern "C" unsigned long g_004fa6b0;
extern "C" unsigned long g_004fa6b4;
extern "C" unsigned long g_004fa710;
extern "C" unsigned long g_004fa712;
extern "C" unsigned long g_004fa71c;
extern "C" unsigned long g_004fa720;
extern "C" unsigned long g_004fa742;
extern "C" unsigned long g_004fa774;
extern "C" unsigned long g_004fa7a4;
extern "C" unsigned long g_004fa800;
extern "C" unsigned long g_004fa804;
extern "C" unsigned long g_004fa808;
bool BLBluethRoomPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLBluethRoomPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLBluethRoomPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLBluethRoomPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLBluethRoomPresenter::tick(float p1)
{
  return;
}

BLBluethRoomPresenter::~BLBluethRoomPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_004fa540 + g_004fa58c);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x3c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_004fa55a + g_004fa590,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLBluethRoomPresenter::onConnectSuccess(cocos2d::CCObject* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(0x6e);
  return;
}

void BLBluethRoomPresenter::onCreate(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  ((BluetoothHelper *)this)->share();
  ((BluetoothHelper *)this)->bluetoothHost();
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(0x6e);
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->showUIById(0x6f);
  return;
}

void BLBluethRoomPresenter::onJoin(cocos2d::CCObject* p1, unsigned int p2)
{
  ((BluetoothHelper *)this)->share();
  ((BluetoothHelper *)this)->bluetoothLink();
  return;
}


BLBluethRoomPresenter::BLBluethRoomPresenter()
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
  iVar3 = *(int *)(&g_004fa656 + g_004fa6b0);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x3c;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 1);
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_004fa684 + g_004fa6b4,&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

undefined4 BLBluethRoomPresenter::create(BLBluethRoomView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x1c))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLBluethRoomPresenter::onExit()
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
void BLBluethRoomPresenter::onClose(cocos2d::CCObject* p1, unsigned int p2)
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
  ((UIManager *)uVar1)->removeUIByID(0x6e);
  iVar2 = (undefined4)(intptr_t)(cocos2d::JniHelper::getStaticMethodInfo(*(cocos2d::JniMethodInfo *)&uStack_14, (char const*)(unsigned char *)((char *)&g_004fa626 + (intptr_t)(g_004fa63c)), (char const*)(unsigned char *)((char *)&g_004fa628 + (intptr_t)(g_004fa640)), (char const*)(unsigned char *)((char *)&g_004fa62a + (intptr_t)(g_004fa644))));
  if (iVar2 != 0) {
    ((_JNIEnv *)this)->CallStaticVoidMethod((_jclass*)uStack_14, (_jmethodID*)uStack_10, uStack_c);
  }
  return;
}

void BLBluethRoomPresenter::onEnter()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLBluethRoomPresenter::initWithView(BLBluethRoomView* p1)
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
  
  *(undefined4 *)(((int)this) + 0x18) = (undefined4)(intptr_t)p1;
  piVar1 = (int *)((BLBluethRoomView *)p1)->getBtnCreate();
  uStack_30 = (undefined4)(*(undefined4 *)(&g_004fa742 + g_004fa800));
  uStack_2c = (undefined4)(0);
  (**(code **)(*piVar1 + 0x254))(piVar1,((int)this),uStack_30,0,0x20);
  piVar1 = (int *)((BLBluethRoomView *)*(undefined4 *)(((int)this) + 0x18))->getBtnCreate();
  (**(code **)(*piVar1 + 0x1d4))(piVar1,1);
  piVar1 = (int *)((BLBluethRoomView *)*(undefined4 *)(((int)this) + 0x18))->getBtnJoin();
  uStack_28 = (undefined4)(*(undefined4 *)(&g_004fa774 + g_004fa804));
  uStack_24 = (undefined4)(0);
  (**(code **)(*piVar1 + 0x254))(piVar1,((int)this),uStack_28,0,0x20);
  piVar1 = (int *)((BLBluethRoomView *)*(undefined4 *)(((int)this) + 0x18))->getBtnJoin();
  (**(code **)(*piVar1 + 0x1d4))(piVar1,1);
  piVar1 = (int *)((BLBluethRoomView *)*(undefined4 *)(((int)this) + 0x18))->getBtnClose();
  uStack_20 = (undefined4)(*(undefined4 *)(&g_004fa7a4 + g_004fa808));
  uStack_1c = (undefined4)(0);
  (**(code **)(*piVar1 + 0x254))(piVar1,((int)this),uStack_20,0,0x20);
  piVar1 = (int *)((BLBluethRoomView *)*(undefined4 *)(((int)this) + 0x18))->getBtnClose();
  (**(code **)(*piVar1 + 0x1d4))(piVar1,1);
  piVar1 = (int *)((BLBluethRoomView *)*(undefined4 *)(((int)this) + 0x18))->getBtnClose();
  pcVar3 = *(code **)(*piVar1 + 0x28c);
  piVar2 = (int *)((BLBluethRoomView *)*(undefined4 *)(((int)this) + 0x18))->getBtnClose();
  piVar2 = (int *)(**(code **)(*piVar2 + 0x308))(piVar2,1);
  (**(code **)(*piVar2 + 0x1cc))(auStack_38,piVar2);
  (*pcVar3)(piVar1,auStack_38);
  return;
}
