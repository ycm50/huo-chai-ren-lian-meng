#include "BLLuckyDrawResultPresenter.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "CCObject.h"
#include "CCTouch.h"
#include "CCDirector.h"
#include "BLLuckyDrawResultView.h"
#include "BLLuckyDrawPresenter.h"
#include "UIManager.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
using namespace cocos2d;
// 兜底声明
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e55c(...);
extern "C" unsigned long UNK_00588116;
extern "C" unsigned long UNK_00588134;
extern "C" unsigned long UNK_0058815c;
extern "C" unsigned long UNK_005881a2;
extern "C" unsigned long UNK_005881a4;
extern "C" unsigned long UNK_005881be;
extern "C" unsigned long UNK_005881c0;
extern "C" unsigned long UNK_0058822e;
extern "C" unsigned long UNK_00588230;
extern "C" unsigned long UNK_0058824a;
extern "C" unsigned long UNK_0058824c;
extern "C" unsigned long UNK_005882aa;
extern "C" unsigned long UNK_005882fa;
extern "C" unsigned long UNK_0058831a;
extern "C" unsigned long UNK_00588338;
extern "C" unsigned long UNK_0058839e;
extern "C" unsigned long _UNK_00588124;
extern "C" unsigned long _UNK_00588138;
extern "C" unsigned long _UNK_00588160;
extern "C" unsigned long _UNK_00588180;
extern "C" unsigned long _UNK_005881f8;
extern "C" unsigned long _UNK_005881fc;
extern "C" unsigned long _UNK_00588200;
extern "C" unsigned long _UNK_00588204;
extern "C" unsigned long _UNK_00588208;
extern "C" unsigned long _UNK_0058820c;
extern "C" unsigned long _UNK_00588284;
extern "C" unsigned long _UNK_00588288;
extern "C" unsigned long _UNK_0058828c;
extern "C" unsigned long _UNK_00588290;
extern "C" unsigned long _UNK_00588294;
extern "C" unsigned long _UNK_00588298;
extern "C" unsigned long _UNK_005882dc;
extern "C" unsigned long _UNK_00588348;
extern "C" unsigned long _UNK_0058834c;
extern "C" unsigned long _UNK_00588350;
extern "C" unsigned long _UNK_005883b4;
extern "C" unsigned long g_00588116;
extern "C" unsigned long g_00588124;
extern "C" unsigned long g_00588134;
extern "C" unsigned long g_00588138;
extern "C" unsigned long g_0058815c;
extern "C" unsigned long g_00588160;
extern "C" unsigned long g_00588180;
extern "C" unsigned long g_005881a2;
extern "C" unsigned long g_005881a4;
extern "C" unsigned long g_005881be;
extern "C" unsigned long g_005881c0;
extern "C" unsigned long g_005881f8;
extern "C" unsigned long g_005881fc;
extern "C" unsigned long g_00588200;
extern "C" unsigned long g_00588204;
extern "C" unsigned long g_00588208;
extern "C" unsigned long g_0058820c;
extern "C" unsigned long g_0058822e;
extern "C" unsigned long g_00588230;
extern "C" unsigned long g_0058824a;
extern "C" unsigned long g_0058824c;
extern "C" unsigned long g_00588284;
extern "C" unsigned long g_00588288;
extern "C" unsigned long g_0058828c;
extern "C" unsigned long g_00588290;
extern "C" unsigned long g_00588294;
extern "C" unsigned long g_00588298;
extern "C" unsigned long g_005882aa;
extern "C" unsigned long g_005882dc;
extern "C" unsigned long g_005882fa;
extern "C" unsigned long g_0058831a;
extern "C" unsigned long g_00588338;
extern "C" unsigned long g_00588348;
extern "C" unsigned long g_0058834c;
extern "C" unsigned long g_00588350;
extern "C" unsigned long g_0058839e;
extern "C" unsigned long g_005883b4;
bool BLLuckyDrawResultPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLLuckyDrawResultPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLLuckyDrawResultPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLLuckyDrawResultPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

BLLuckyDrawResultPresenter::~BLLuckyDrawResultPresenter()
{
  /* VPTR_FIX(R87): vptr=(&g_A+g_B)+8 ?? g_ ?? 0 ?? -> ???? SEGV?????? vptr???? */;
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}




BLLuckyDrawResultPresenter::BLLuckyDrawResultPresenter()
{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  0 /* ctorZero */;
  iVar3 = *(int *)(&g_005882aa + g_005882dc);
  *(int *)((int)this + 4*(5)) = iVar3 + 0x38;
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(6)) = 0;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 1);
  return;
}



void BLLuckyDrawResultPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  cocos2d::CCLog((char const*)&g_0058839e + g_005883b4);
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  return;
}

// ===== 修复: 补回被误删的函数占位 (5) =====
void BLLuckyDrawResultPresenter::onSure(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  iVar2 = (undefined4)((void)(((UIManager *)(uVar1))->getUIObject(g_00588180)),(intptr_t)0);
  if (iVar2 != 0) {
    uVar1 = (undefined4)(((UIManager *)this)->shareManager());
    ((UIManager *)(uVar1))->removeUIByID(g_00588180);
  }
  return;
}

void BLLuckyDrawResultPresenter::onTurnOnce(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 p4 = 0;

  undefined4 uVar1;
  int iVar2;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  iVar2 = (undefined4)((void)(((UIManager *)(uVar1))->getUIObject(g_005881f8)),(intptr_t)0);
  if ((((iVar2 != 0) &&
       (iVar2 = func_0079e55c(iVar2,*(undefined4 *)((unsigned char *)((char *)&g_005881a2 + (intptr_t)(g_005881fc))),
                                *(undefined4 *)((unsigned char *)((char *)&g_005881a4 + (intptr_t)(g_00588200))),0,p4),
       iVar2 != 0)) && (*(int *)(iVar2 + 0x24) != 0)) &&
     ((iVar2 = func_0079e55c(*(int *)(iVar2 + 0x24),*(undefined4 *)((unsigned char *)((char *)&g_005881be + (intptr_t)(g_00588204)))
                               ,*(undefined4 *)((unsigned char *)((char *)&g_005881c0 + (intptr_t)(g_00588208))),0,p4),
      iVar2 != 0 && (*(int *)(iVar2 + 0x108) != 0)))) {
    ((BLLuckyDrawPresenter *)(*(int *)(iVar2 + 0x108)))->onTurnOnce((cocos2d::CCObject*)p1, (unsigned int)p2);
  }
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  iVar2 = (undefined4)((void)(((UIManager *)(uVar1))->getUIObject(g_0058820c)),(intptr_t)0);
  if (iVar2 != 0) {
    uVar1 = (undefined4)(((UIManager *)this)->shareManager());
    ((UIManager *)(uVar1))->removeUIByID(g_0058820c);
  }
  return;
}

void BLLuckyDrawResultPresenter::onTurnFive(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 p4 = 0;

  undefined4 uVar1;
  int iVar2;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  iVar2 = (undefined4)((void)(((UIManager *)(uVar1))->getUIObject(g_00588284)),(intptr_t)0);
  if ((((iVar2 != 0) &&
       (iVar2 = func_0079e55c(iVar2,*(undefined4 *)((unsigned char *)((char *)&g_0058822e + (intptr_t)(g_00588288))),
                                *(undefined4 *)((unsigned char *)((char *)&g_00588230 + (intptr_t)(g_0058828c))),0,p4),
       iVar2 != 0)) && (*(int *)(iVar2 + 0x24) != 0)) &&
     ((iVar2 = func_0079e55c(*(int *)(iVar2 + 0x24),*(undefined4 *)((unsigned char *)((char *)&g_0058824a + (intptr_t)(g_00588290)))
                               ,*(undefined4 *)((unsigned char *)((char *)&g_0058824c + (intptr_t)(g_00588294))),0,p4),
      iVar2 != 0 && (*(int *)(iVar2 + 0x108) != 0)))) {
    ((BLLuckyDrawPresenter *)(*(int *)(iVar2 + 0x108)))->onTurnFive((cocos2d::CCObject*)p1, (unsigned int)p2);
  }
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  iVar2 = (undefined4)((void)(((UIManager *)(uVar1))->getUIObject(g_00588298)),(intptr_t)0);
  if (iVar2 != 0) {
    uVar1 = (undefined4)(((UIManager *)this)->shareManager());
    ((UIManager *)(uVar1))->removeUIByID(g_00588298);
  }
  return;
}

void BLLuckyDrawResultPresenter::initWithView(BLLuckyDrawResultView* p1)
{
  int *piVar1;
  
  *(int *)(((int)this) + 0x18) = (undefined4)(intptr_t)p1;
  (**(code **)(**(int **)(p1 + 0x10c) + 0x254))
            (*(int **)(p1 + 0x10c),((int)this),*(undefined4 *)((unsigned char *)((char *)&g_005882fa + (intptr_t)(g_00588348))),0,
             0x20);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x18) + 0x110);
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)((unsigned char *)((char *)&g_0058831a + (intptr_t)(g_0058834c))),0,0x20);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x18) + 0x114);
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)((unsigned char *)((char *)&g_00588338 + (intptr_t)(g_00588350))),0,0x20);
  return;
}

int * BLLuckyDrawResultPresenter::create(BLLuckyDrawResultView* p1)
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)::operator new(0x1c);
  ::new ((void *)piVar1) BLLuckyDrawResultPresenter();   /* ALLOC+CTOR_FIX(R123): 类名由 llvm-cxxfilt 反修饰 + (函数,尺寸) 对齐 取得 */
  iVar2 = (undefined4)((void)(((BLLuckyDrawResultPresenter *)(piVar1))->initWithView((BLLuckyDrawResultView*)((int)this))),(intptr_t)0);
  if (iVar2 == 0) {
    (**(code **)(*(int *)(piVar1) + (8)))(piVar1);
    piVar1 = (int *)0x0;
  }
  else {
    ((cocos2d::CCObject *)(piVar1))->autorelease();
  }
  return (int *)(piVar1);
}
