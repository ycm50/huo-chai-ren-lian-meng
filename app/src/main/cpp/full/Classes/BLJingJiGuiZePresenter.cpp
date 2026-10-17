#include "BLJingJiGuiZePresenter.h"
#include "BLJingJiGuiZeView.h"
#include "BLLeakUtils.h"
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
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0062658c;
extern "C" unsigned long UNK_006265a4;
extern "C" unsigned long UNK_006265bc;
extern "C" unsigned long UNK_0062662c;
extern "C" unsigned long UNK_00626646;
extern "C" unsigned long UNK_0062668c;
extern "C" unsigned long UNK_006266b4;
extern "C" unsigned long UNK_006266de;
extern "C" unsigned long UNK_0062670c;
extern "C" unsigned long UNK_006267a0;
extern "C" unsigned long _UNK_00626590;
extern "C" unsigned long _UNK_006265a8;
extern "C" unsigned long _UNK_006265c0;
extern "C" unsigned long _UNK_00626678;
extern "C" unsigned long _UNK_0062667c;
extern "C" unsigned long _UNK_00626690;
extern "C" unsigned long _UNK_006266b8;
extern "C" unsigned long _UNK_006266cc;
extern "C" unsigned long _UNK_00626738;
extern "C" unsigned long _UNK_0062673c;
extern "C" unsigned long _UNK_006267a8;
extern "C" unsigned long g_0062658c;
extern "C" unsigned long g_00626590;
extern "C" unsigned long g_006265a4;
extern "C" unsigned long g_006265a8;
extern "C" unsigned long g_006265bc;
extern "C" unsigned long g_006265c0;
extern "C" unsigned long g_0062662c;
extern "C" unsigned long g_00626646;
extern "C" unsigned long g_00626678;
extern "C" unsigned long g_0062667c;
extern "C" unsigned long g_0062668c;
extern "C" unsigned long g_00626690;
extern "C" unsigned long g_006266b4;
extern "C" unsigned long g_006266b8;
extern "C" unsigned long g_006266cc;
extern "C" unsigned long g_006266de;
extern "C" unsigned long g_0062670c;
extern "C" unsigned long g_00626738;
extern "C" unsigned long g_0062673c;
extern "C" unsigned long g_006267a0;
extern "C" unsigned long g_006267a8;
void BLJingJiGuiZePresenter::tick(float p1)
{
  return;
}

bool BLJingJiGuiZePresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLJingJiGuiZePresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLJingJiGuiZePresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLJingJiGuiZePresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

BLJingJiGuiZePresenter::~BLJingJiGuiZePresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)((unsigned char *)((char *)&g_0062662c + (intptr_t)(g_00626678)));
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x3c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,(unsigned char *)((char *)&g_00626646 + (intptr_t)(g_0062667c)),&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLJingJiGuiZePresenter::onClose(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(g_006266cc);
  return;
}

BLJingJiGuiZePresenter::BLJingJiGuiZePresenter()
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
  iVar3 = *(int *)((unsigned char *)((char *)&g_006266de + (intptr_t)(g_00626738)));
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x3c;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 1);
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,(unsigned char *)((char *)&g_0062670c + (intptr_t)(g_0062673c)),&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

void BLJingJiGuiZePresenter::onEnter()
{
  return;
}

void BLJingJiGuiZePresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  return;
}

undefined4 BLJingJiGuiZePresenter::create(BLJingJiGuiZeView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x1c))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}


void BLJingJiGuiZePresenter::setGuize(char const* p1)
{
  int *piVar1;
  
  piVar1 = (int *)((BLJingJiGuiZeView *)*(undefined4 *)(((int)this) + 0x18))->getLabGuize();
  (**(code **)(*piVar1 + 0x234))(piVar1,p1);
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
void BLJingJiGuiZePresenter::initWithView(BLJingJiGuiZeView* p1)
{
  int *piVar1;
  
  *(undefined4 *)(((int)this) + 0x18) = (undefined4)(intptr_t)p1;
  piVar1 = (int *)((BLJingJiGuiZeView *)p1)->getBtnClose();
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)((unsigned char *)((char *)&g_006267a0 + (intptr_t)(g_006267a8))),0,0x20);
  return;
}
