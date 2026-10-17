#include "BLMainAccoutCheckPresenter.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "CCNotificationCenter.h"
#include "CCObject.h"
#include "CCTouch.h"
#include "CCDirector.h"
#include "BLLeakUtils.h"
#include "BLMainAccoutCheckView.h"
#include "BLUpAndDownUtils.h"
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
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e854(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0058c300;
extern "C" unsigned long UNK_0058c31a;
extern "C" unsigned long UNK_0058c368;
extern "C" unsigned long UNK_0058c390;
extern "C" unsigned long UNK_0058c402;
extern "C" unsigned long UNK_0058c49c;
extern "C" unsigned long UNK_0058c4cc;
extern "C" unsigned long UNK_0058c4ce;
extern "C" unsigned long UNK_0058c4e4;
extern "C" unsigned long UNK_0058c57a;
extern "C" unsigned long UNK_0058c59a;
extern "C" unsigned long UNK_0058c5b8;
extern "C" unsigned long _UNK_0058c354;
extern "C" unsigned long _UNK_0058c358;
extern "C" unsigned long _UNK_0058c36c;
extern "C" unsigned long _UNK_0058c394;
extern "C" unsigned long _UNK_0058c46c;
extern "C" unsigned long _UNK_0058c510;
extern "C" unsigned long _UNK_0058c514;
extern "C" unsigned long _UNK_0058c518;
extern "C" unsigned long _UNK_0058c51c;
extern "C" unsigned long _UNK_0058c5c8;
extern "C" unsigned long _UNK_0058c5cc;
extern "C" unsigned long _UNK_0058c5d0;
extern "C" unsigned long g_0058c300;
extern "C" unsigned long g_0058c31a;
extern "C" unsigned long g_0058c354;
extern "C" unsigned long g_0058c358;
extern "C" unsigned long g_0058c368;
extern "C" unsigned long g_0058c36c;
extern "C" unsigned long g_0058c390;
extern "C" unsigned long g_0058c394;
extern "C" unsigned long g_0058c402;
extern "C" unsigned long g_0058c46c;
extern "C" unsigned long g_0058c49c;
extern "C" unsigned long g_0058c4cc;
extern "C" unsigned long g_0058c4ce;
extern "C" unsigned long g_0058c4e4;
extern "C" unsigned long g_0058c510;
extern "C" unsigned long g_0058c514;
extern "C" unsigned long g_0058c518;
extern "C" unsigned long g_0058c51c;
extern "C" unsigned long g_0058c57a;
extern "C" unsigned long g_0058c59a;
extern "C" unsigned long g_0058c5b8;
extern "C" unsigned long g_0058c5c8;
extern "C" unsigned long g_0058c5cc;
extern "C" unsigned long g_0058c5d0;
bool BLMainAccoutCheckPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLMainAccoutCheckPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLMainAccoutCheckPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLMainAccoutCheckPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLMainAccoutCheckPresenter::tick(float p1)
{
  return;
}

BLMainAccoutCheckPresenter::~BLMainAccoutCheckPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0058c300 + g_0058c354);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x3c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0058c31a + g_0058c358,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar1)->removeAllObservers((cocos2d::CCObject*)((int)this));
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLMainAccoutCheckPresenter::onClose(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(0x5b);
  return;
}

void BLMainAccoutCheckPresenter::getBtnNo(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(0x5b);
  return;
}




undefined4 BLMainAccoutCheckPresenter::create(BLMainAccoutCheckView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x1c))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLMainAccoutCheckPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  return;
}

void BLMainAccoutCheckPresenter::onEnter()
{
  return;
}

// ===== 修复: 补回被误删的函数占位 (4) =====
void BLMainAccoutCheckPresenter::getBtnYes(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMainAccoutCheckPresenter::CheckQuite()
{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  iVar2 = (undefined4)((void)(((UIManager *)(uVar1))->getUIObject(0x5b)),(intptr_t)0);
  if (iVar2 != 0) {
    uVar1 = (undefined4)(((UIManager *)this)->shareManager());
    ((UIManager *)(uVar1))->removeUIByID(0x5b);
  }
  return;
}

BLMainAccoutCheckPresenter::BLMainAccoutCheckPresenter()
{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [12];
  
  0 /* ctorZero */;
  iVar3 = (undefined4)(intptr_t)(*(int *)((unsigned char *)((char *)&g_0058c49c + (intptr_t)(g_0058c510))));
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x3c;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x40)))());
  ((cocos2d::CCTouchDispatcher *)(uVar2))->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 1);
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)(((int)this)))->addObserver((cocos2d::CCObject*)*(undefined4 *)((unsigned char *)((char *)&g_0058c4cc + (intptr_t)(g_0058c514))), 0, (char const*)(unsigned char *)((char *)&g_0058c4ce + (intptr_t)(g_0058c518)), 0);
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(auStack_1c,(unsigned char *)((char *)&g_0058c4e4 + (intptr_t)(g_0058c51c)),auStack_20);
  ((BLLeakUtils *)(uVar2))->addClass((std::string)(char*)auStack_1c);
  func_0079e2bc(auStack_1c);
  return;
}

void BLMainAccoutCheckPresenter::initWithView(BLMainAccoutCheckView* p1)
{
  int *piVar1;
  
  *(undefined4 *)(((int)this) + 0x18) = (undefined4)(intptr_t)p1;
  piVar1 = (int *)((BLMainAccoutCheckView *)p1)->getBtnClose();
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)(&g_0058c57a + g_0058c5c8),0,0x20);
  piVar1 = (int *)((BLMainAccoutCheckView *)*(undefined4 *)(((int)this) + 0x18))->getBtnYes();
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)(&g_0058c59a + g_0058c5cc),0,0x20);
  piVar1 = (int *)((BLMainAccoutCheckView *)*(undefined4 *)(((int)this) + 0x18))->getBtnNo();
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)(&g_0058c5b8 + g_0058c5d0),0,0x20);
  return;
}
