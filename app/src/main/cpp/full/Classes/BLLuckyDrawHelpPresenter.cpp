#include "BLLuckyDrawHelpPresenter.h"
#include "BLLeakUtils.h"
#include "BLLuckyDrawHelpView.h"
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
extern "C" unsigned long UNK_00626878;
extern "C" unsigned long UNK_00626892;
extern "C" unsigned long UNK_006268d8;
extern "C" unsigned long UNK_00626900;
extern "C" unsigned long UNK_00626926;
extern "C" unsigned long UNK_0062695c;
extern "C" unsigned long UNK_006269f8;
extern "C" unsigned long _UNK_006268c4;
extern "C" unsigned long _UNK_006268c8;
extern "C" unsigned long _UNK_006268dc;
extern "C" unsigned long _UNK_00626904;
extern "C" unsigned long _UNK_00626988;
extern "C" unsigned long _UNK_0062698c;
extern "C" unsigned long _UNK_00626a00;
extern "C" unsigned long g_00626878;
extern "C" unsigned long g_00626892;
extern "C" unsigned long g_006268c4;
extern "C" unsigned long g_006268c8;
extern "C" unsigned long g_006268d8;
extern "C" unsigned long g_006268dc;
extern "C" unsigned long g_00626900;
extern "C" unsigned long g_00626904;
extern "C" unsigned long g_00626926;
extern "C" unsigned long g_0062695c;
extern "C" unsigned long g_00626988;
extern "C" unsigned long g_0062698c;
extern "C" unsigned long g_006269f8;
extern "C" unsigned long g_00626a00;
bool BLLuckyDrawHelpPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLLuckyDrawHelpPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLLuckyDrawHelpPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLLuckyDrawHelpPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLLuckyDrawHelpPresenter::tick(float p1)
{
  return;
}

BLLuckyDrawHelpPresenter::~BLLuckyDrawHelpPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_00626878 + g_006268c4);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x3c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00626892 + g_006268c8,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLLuckyDrawHelpPresenter::onClose(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(0x25c);
  return;
}

BLLuckyDrawHelpPresenter::BLLuckyDrawHelpPresenter()
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
  iVar3 = *(int *)(&g_00626926 + g_00626988);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x3c;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 1);
  ((UIManager *)this)->shareManager();
  ((UIManager *)this)->pushCurScrollViewUnEnable();
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0062695c + g_0062698c,&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

void BLLuckyDrawHelpPresenter::onEnter()
{
  return;
}

void BLLuckyDrawHelpPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  ((UIManager *)this)->shareManager();
  ((UIManager *)this)->popUnEnableScrollView();
  return;
}

undefined4 BLLuckyDrawHelpPresenter::create(BLLuckyDrawHelpView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x1c))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}


void BLLuckyDrawHelpPresenter::setGuize(char const* p1)
{
  int *piVar1;
  
  piVar1 = (int *)((BLLuckyDrawHelpView *)*(undefined4 *)(((int)this) + 0x18))->getLabGuize();
  (**(code **)(*piVar1 + 0x234))(piVar1,p1);
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
void BLLuckyDrawHelpPresenter::initWithView(BLLuckyDrawHelpView* p1)
{
  int *piVar1;
  
  *(undefined4 *)(((int)this) + 0x18) = (undefined4)(intptr_t)p1;
  piVar1 = (int *)((BLLuckyDrawHelpView *)p1)->getBtnClose();
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)(&g_006269f8 + g_00626a00),0,0x20);
  return;
}
