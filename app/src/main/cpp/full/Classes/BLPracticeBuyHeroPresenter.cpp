#include "BLPracticeBuyHeroPresenter.h"
#include "CCNotificationCenter.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "CCArray.h"
#include "CCObject.h"
#include "CCTouch.h"
#include "CCInteger.h"
#include "CCDirector.h"
#include "BLGameScene.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLPracticeBuyHeroView.h"
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
extern "C" unsigned long UNK_006366a0;
extern "C" unsigned long UNK_006366be;
extern "C" unsigned long UNK_00636710;
extern "C" unsigned long UNK_00636738;
extern "C" unsigned long UNK_0063675e;
extern "C" unsigned long UNK_0063676e;
extern "C" unsigned long UNK_0063679e;
extern "C" unsigned long UNK_0063689e;
extern "C" unsigned long UNK_006368ac;
extern "C" unsigned long UNK_006368da;
extern "C" unsigned long UNK_00636a90;
extern "C" unsigned long _UNK_006366fc;
extern "C" unsigned long _UNK_00636700;
extern "C" unsigned long _UNK_00636714;
extern "C" unsigned long _UNK_0063673c;
extern "C" unsigned long _UNK_006367d0;
extern "C" unsigned long _UNK_006367d4;
extern "C" unsigned long _UNK_006367d8;
extern "C" unsigned long _UNK_00636884;
extern "C" unsigned long _UNK_006368bc;
extern "C" unsigned long _UNK_006368c0;
extern "C" unsigned long _UNK_006368ec;
extern "C" unsigned long _UNK_00636ac8;
extern "C" unsigned long _UNK_00636acc;
extern "C" unsigned long g_006366a0;
extern "C" unsigned long g_006366be;
extern "C" unsigned long g_006366fc;
extern "C" unsigned long g_00636700;
extern "C" unsigned long g_00636710;
extern "C" unsigned long g_00636714;
extern "C" unsigned long g_00636738;
extern "C" unsigned long g_0063673c;
extern "C" unsigned long g_0063675e;
extern "C" unsigned long g_0063676e;
extern "C" unsigned long g_0063679e;
extern "C" unsigned long g_006367d0;
extern "C" unsigned long g_006367d4;
extern "C" unsigned long g_006367d8;
extern "C" unsigned long g_00636884;
extern "C" unsigned long g_0063689e;
extern "C" unsigned long g_006368ac;
extern "C" unsigned long g_006368bc;
extern "C" unsigned long g_006368c0;
extern "C" unsigned long g_006368da;
extern "C" unsigned long g_006368ec;
extern "C" unsigned long g_00636a90;
extern "C" unsigned long g_00636ac8;
extern "C" unsigned long g_00636acc;
bool BLPracticeBuyHeroPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLPracticeBuyHeroPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLPracticeBuyHeroPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLPracticeBuyHeroPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLPracticeBuyHeroPresenter::tick(float p1)
{
  return;
}

void BLPracticeBuyHeroPresenter::setRoleID(std::string p1)
{
  func_0079e52c(((int)this) + 0x18);
  return;
}

BLPracticeBuyHeroPresenter::~BLPracticeBuyHeroPresenter()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  iVar2 = *(int *)(&g_006366a0 + g_006366fc);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x44;
  piStack_20 = (int *)((int)this);
  uStack_1c = (undefined4)(p2);
  uStack_18 = (undefined4)(p3);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_1c,&g_006366be + g_00636700,&piStack_20);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_1c);
  func_0079e2bc(&uStack_1c);
  func_0079e2bc(((int)this) + 6);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

std::string BLPracticeBuyHeroPresenter::getRoleID() const
{ return *(std::string *)(((int)this) + 0x18); }

BLPracticeBuyHeroPresenter::BLPracticeBuyHeroPresenter()
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
  iVar4 = *(int *)(&g_0063675e + g_006367d0);
  *(int *)((int)this + 4*(5)) = iVar4 + 0x44;
  iVar1 = g_006367d4;
  *(int *)this = iVar4 + 8;
  *(int *)((int)this + 4*(6)) = *(int *)(&g_0063676e + iVar1) + 0xc;
  piVar2 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar3 = (undefined4)((**(code **)(*piVar2 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar3)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 0);
  ((UIManager *)this)->shareManager();
  ((UIManager *)this)->pushCurScrollViewUnEnable();
  uVar3 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0063679e + g_006367d8,&piStack_18);
  ((BLLeakUtils *)uVar3)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

void BLPracticeBuyHeroPresenter::onEnter()
{
  return;
}

void BLPracticeBuyHeroPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  ((UIManager *)this)->shareManager();
  ((UIManager *)this)->popUnEnableScrollView();
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  return;
}

undefined4 BLPracticeBuyHeroPresenter::create(BLPracticeBuyHeroView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x20))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}


void BLPracticeBuyHeroPresenter::onSure(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  uVar2 = (undefined4)(cocos2d::CCInteger::create(1));
  ((cocos2d::CCNotificationCenter *)uVar1)->postNotification((char const*)&g_0063689e + g_006368bc, (cocos2d::CCObject*)uVar2);
  uVar1 = (undefined4)(((Toast *)this)->sharedToast());
  ((Toast *)uVar1)->showToast((char const*)&g_006368ac + g_006368c0);
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(0xe8);
  return;
}

void BLPracticeBuyHeroPresenter::onCancle(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  uVar2 = (undefined4)(cocos2d::CCInteger::create(0));
  ((cocos2d::CCNotificationCenter *)uVar1)->postNotification((char const*)&g_006368da + g_006368ec, (cocos2d::CCObject*)uVar2);
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(0xe8);
  return;
}

// ===== 修复: 补回被误删的函数占位 (3) =====
void BLPracticeBuyHeroPresenter::initWithView(BLPracticeBuyHeroView* p1)
{
  *(undefined4 *)(((int)this) + 0x1c) = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  return;
}

void BLPracticeBuyHeroPresenter::initWithRichData(cocos2d::CCArray* p1)
{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  code *pcVar4;
  
  piVar1 = ((void)((BLRichText *)this)->create((cocos2d::CCArray*)p1, 0x118, 0x14),(int *)0);
  (**(code **)(**(int **)(((int)this) + 0x1c) + 0xcc))(*(int **)(((int)this) + 0x1c),piVar1,g_00636884);
  pcVar4 = *(code **)(*piVar1 + 0x5c);
  piVar2 = (int *)(**(code **)(*(int *)(piVar1) + (0x8c)))(piVar1);
  uVar3 = (undefined4)(func_0079e4fc(*piVar2 + -0x80000000,0x3f000000));
  (*pcVar4)(piVar1,uVar3);
  pcVar4 = *(code **)(*piVar1 + 100);
  piVar2 = (int *)((BLPracticeBuyHeroView *)(*(undefined4 *)(((int)this) + 0x1c)))->getLabTitle();
  uVar3 = (undefined4)((**(code **)(*(int *)(piVar2) + (0x68)))());
  (*pcVar4)(piVar1,uVar3);
  return;
}

void BLPracticeBuyHeroPresenter::onPlay(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
