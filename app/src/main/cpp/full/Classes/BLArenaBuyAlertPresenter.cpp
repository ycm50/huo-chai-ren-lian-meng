#include "BLArenaBuyAlertPresenter.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "CCNotificationCenter.h"
#include "CCArray.h"
#include "CCObject.h"
#include "CCTouch.h"
#include "CCDirector.h"
#include "CCInteger.h"
#include "BLArenaBuyAlertView.h"
#include "BLGameScene.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLRichText.h"
#include "BluetoothHelper.h"
#include "DataManager.h"
#include "Toast.h"
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
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e5bc(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_004be94c;
extern "C" unsigned long UNK_004be96a;
extern "C" unsigned long UNK_004be9bc;
extern "C" unsigned long UNK_004be9e4;
extern "C" unsigned long UNK_004bea12;
extern "C" unsigned long UNK_004bea3e;
extern "C" unsigned long UNK_004bea62;
extern "C" unsigned long UNK_004bea72;
extern "C" unsigned long UNK_004bea9a;
extern "C" unsigned long UNK_004beb32;
extern "C" unsigned long UNK_004beb52;
extern "C" unsigned long UNK_004bed68;
extern "C" unsigned long _UNK_004be9a8;
extern "C" unsigned long _UNK_004be9ac;
extern "C" unsigned long _UNK_004be9c0;
extern "C" unsigned long _UNK_004be9e8;
extern "C" unsigned long _UNK_004bea24;
extern "C" unsigned long _UNK_004bea50;
extern "C" unsigned long _UNK_004beacc;
extern "C" unsigned long _UNK_004bead0;
extern "C" unsigned long _UNK_004bead4;
extern "C" unsigned long _UNK_004beb60;
extern "C" unsigned long _UNK_004beb64;
extern "C" unsigned long _UNK_004bebc4;
extern "C" unsigned long _UNK_004beda0;
extern "C" unsigned long _UNK_004beda4;
extern "C" unsigned long g_004be94c;
extern "C" unsigned long g_004be96a;
extern "C" unsigned long g_004be9a8;
extern "C" unsigned long g_004be9ac;
extern "C" unsigned long g_004be9bc;
extern "C" unsigned long g_004be9c0;
extern "C" unsigned long g_004be9e4;
extern "C" unsigned long g_004be9e8;
extern "C" unsigned long g_004bea12;
extern "C" unsigned long g_004bea24;
extern "C" unsigned long g_004bea3e;
extern "C" unsigned long g_004bea50;
extern "C" unsigned long g_004bea62;
extern "C" unsigned long g_004bea72;
extern "C" unsigned long g_004bea9a;
extern "C" unsigned long g_004beacc;
extern "C" unsigned long g_004bead0;
extern "C" unsigned long g_004bead4;
extern "C" unsigned long g_004beb32;
extern "C" unsigned long g_004beb52;
extern "C" unsigned long g_004beb60;
extern "C" unsigned long g_004beb64;
extern "C" unsigned long g_004bebc4;
extern "C" unsigned long g_004bed68;
extern "C" unsigned long g_004beda0;
extern "C" unsigned long g_004beda4;
void BLArenaBuyAlertPresenter::tick(float p1)
{
  return;
}

bool BLArenaBuyAlertPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLArenaBuyAlertPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLArenaBuyAlertPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLArenaBuyAlertPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLArenaBuyAlertPresenter::setRoleID(std::string p1)
{
  func_0079e52c(((int)this) + 0x18);
  return;
}

BLArenaBuyAlertPresenter::~BLArenaBuyAlertPresenter()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  iVar2 = *(int *)(&g_004be94c + g_004be9a8);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x44;
  piStack_20 = (int *)((int)this);
  uStack_1c = (undefined4)(p2);
  uStack_18 = (undefined4)(p3);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_1c,&g_004be96a + g_004be9ac,&piStack_20);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_1c);
  func_0079e2bc(&uStack_1c);
  func_0079e2bc(((int)this) + 6);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

std::string BLArenaBuyAlertPresenter::getRoleID() const
{ return *(std::string *)(((int)this) + 0x18); }

void BLArenaBuyAlertPresenter::onSure(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  uVar2 = (undefined4)(cocos2d::CCInteger::create(1));
  ((cocos2d::CCNotificationCenter *)uVar1)->postNotification((char const*)&g_004bea12 + g_004bea24, (cocos2d::CCObject*)uVar2);
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(0x96);
  return;
}

void BLArenaBuyAlertPresenter::onCancle(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  uVar2 = (undefined4)(cocos2d::CCInteger::create(0));
  ((cocos2d::CCNotificationCenter *)uVar1)->postNotification((char const*)&g_004bea3e + g_004bea50, (cocos2d::CCObject*)uVar2);
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(0x96);
  return;
}

BLArenaBuyAlertPresenter::BLArenaBuyAlertPresenter()
{
  undefined4 p2 = 0;

  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar4 = *(int *)(&g_004bea62 + g_004beacc);
  *(int *)((int)this + 4*(5)) = iVar4 + 0x44;
  iVar1 = g_004bead0;
  *(int *)this = iVar4 + 8;
  *(int *)((int)this + 4*(6)) = *(int *)(&g_004bea72 + iVar1) + 0xc;
  piVar2 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar3 = (undefined4)((**(code **)(*piVar2 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar3)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 0);
  uVar3 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_004bea9a + g_004bead4,&piStack_18);
  ((BLLeakUtils *)uVar3)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

void BLArenaBuyAlertPresenter::onEnter()
{
  return;
}

void BLArenaBuyAlertPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  return;
}

undefined4 BLArenaBuyAlertPresenter::create(BLArenaBuyAlertView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x20))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

// ===== 修复: 补回被误删的函数占位 (3) =====
void BLArenaBuyAlertPresenter::initWithView(BLArenaBuyAlertView* p1)
{
  int *piVar1;
  
  *(undefined4 *)(((int)this) + 0x1c) = (undefined4)(intptr_t)p1;
  piVar1 = (int *)((BLArenaBuyAlertView *)p1)->getBtnSure();
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)(&g_004beb32 + g_004beb60),0,0x20);
  piVar1 = (int *)((BLArenaBuyAlertView *)*(undefined4 *)(((int)this) + 0x1c))->getBtnCancle();
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)(&g_004beb52 + g_004beb64),0,0x20);
  return;
}

void BLArenaBuyAlertPresenter::initWithRichData(cocos2d::CCArray* p1)
{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  code *pcVar4;
  
  piVar1 = ((void)((BLRichText *)this)->create((cocos2d::CCArray*)p1, 0x118, 0x14),(int *)0);
  (**(code **)(**(int **)(((int)this) + 0x1c) + 0xcc))(*(int **)(((int)this) + 0x1c),piVar1,g_004bebc4);
  pcVar4 = *(code **)(*piVar1 + 0x5c);
  piVar2 = (int *)(**(code **)(*(int *)(piVar1) + (0x8c)))(piVar1);
  uVar3 = (undefined4)(func_0079e4fc(*piVar2 + -0x80000000,0x3f000000));
  (*pcVar4)(piVar1,uVar3);
  pcVar4 = *(code **)(*piVar1 + 100);
  piVar2 = (int *)((BLArenaBuyAlertView *)(*(undefined4 *)(((int)this) + 0x1c)))->getLabTitle();
  uVar3 = (undefined4)((**(code **)(*(int *)(piVar2) + (0x68)))());
  (*pcVar4)(piVar1,uVar3);
  return;
}

void BLArenaBuyAlertPresenter::onPlay(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
