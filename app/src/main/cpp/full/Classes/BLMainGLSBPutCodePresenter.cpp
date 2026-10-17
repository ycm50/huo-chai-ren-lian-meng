#include "BLMainGLSBPutCodePresenter.h"
#include "CCEditBox.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "CCObject.h"
#include "CCTouch.h"
#include "CCDirector.h"
#include "BLForwards.h"
#include "BLLeakUtils.h"
#include "BLMainGLSBPutCodeView.h"
#include "MainGLSBData.h"
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
extern "C" unsigned long UNK_0058d798;
extern "C" unsigned long UNK_0058d7b2;
extern "C" unsigned long UNK_0058d7f8;
extern "C" unsigned long UNK_0058d820;
extern "C" unsigned long UNK_0058d846;
extern "C" unsigned long UNK_0058d874;
extern "C" unsigned long UNK_0058d902;
extern "C" unsigned long UNK_0058d922;
extern "C" unsigned long _UNK_0058d7e4;
extern "C" unsigned long _UNK_0058d7e8;
extern "C" unsigned long _UNK_0058d7fc;
extern "C" unsigned long _UNK_0058d824;
extern "C" unsigned long _UNK_0058d8a0;
extern "C" unsigned long _UNK_0058d8a4;
extern "C" unsigned long _UNK_0058d930;
extern "C" unsigned long _UNK_0058d934;
extern "C" unsigned long g_0058d798;
extern "C" unsigned long g_0058d7b2;
extern "C" unsigned long g_0058d7e4;
extern "C" unsigned long g_0058d7e8;
extern "C" unsigned long g_0058d7f8;
extern "C" unsigned long g_0058d7fc;
extern "C" unsigned long g_0058d820;
extern "C" unsigned long g_0058d824;
extern "C" unsigned long g_0058d846;
extern "C" unsigned long g_0058d874;
extern "C" unsigned long g_0058d8a0;
extern "C" unsigned long g_0058d8a4;
extern "C" unsigned long g_0058d902;
extern "C" unsigned long g_0058d922;
extern "C" unsigned long g_0058d930;
extern "C" unsigned long g_0058d934;
bool BLMainGLSBPutCodePresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLMainGLSBPutCodePresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLMainGLSBPutCodePresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLMainGLSBPutCodePresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLMainGLSBPutCodePresenter::tick(float p1)
{
  return;
}

BLMainGLSBPutCodePresenter::~BLMainGLSBPutCodePresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0058d798 + g_0058d7e4);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x3c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0058d7b2 + g_0058d7e8,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLMainGLSBPutCodePresenter::onClose(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(0xc3);
  return;
}

BLMainGLSBPutCodePresenter::BLMainGLSBPutCodePresenter()
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
  iVar3 = *(int *)(&g_0058d846 + g_0058d8a0);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x3c;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 1);
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0058d874 + g_0058d8a4,&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

undefined4 BLMainGLSBPutCodePresenter::create(BLMainGLSBPutCodeView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x1c))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLMainGLSBPutCodePresenter::onEnter()
{
  return;
}

void BLMainGLSBPutCodePresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  return;
}

void BLMainGLSBPutCodePresenter::initWithView(BLMainGLSBPutCodeView* p1)
{
  int *piVar1;
  
  *(undefined4 *)(((int)this) + 0x18) = (undefined4)(intptr_t)p1;
  piVar1 = (int *)((BLMainGLSBPutCodeView *)p1)->getBtnClose();
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)(&g_0058d902 + g_0058d930),0,0x20);
  piVar1 = (int *)((BLMainGLSBPutCodeView *)*(undefined4 *)(((int)this) + 0x18))->getBtnOK();
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)(&g_0058d922 + g_0058d934),0,0x20);
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
void BLMainGLSBPutCodePresenter::onOK(cocos2d::CCObject* p1, unsigned int p2)
{
  int *piVar1;
  undefined4 uVar2;
  code *pcVar3;
  int iStack_18;
  undefined4 uStack_14;
  
  iStack_18 = (undefined4)(intptr_t)((int *)((int)this));
  uStack_14 = (undefined4)(p1);
  piVar1 = (int *)((sir::singleton<MainGLSBData, 0> *)this)->instance();
  pcVar3 = *(code **)(*piVar1 + 0xc);
  ((BLMainGLSBPutCodeView *)*(undefined4 *)(((int)this) + 0x18))->getEditContent();
  uVar2 = (undefined4)(((cocos2d::extension::CCEditBox *)this)->getText());
  func_0079e45c(&uStack_14,uVar2,&iStack_18);
  (*pcVar3)(piVar1,&uStack_14);
  func_0079e2bc(&uStack_14);
  uVar2 = (undefined4)(((sir::singleton<MainGLSBData, 0> *)this)->instance());
  ((MainGLSBData *)uVar2)->GetDataFromNet((URL_GLSB)1, 1);
  return;
}
