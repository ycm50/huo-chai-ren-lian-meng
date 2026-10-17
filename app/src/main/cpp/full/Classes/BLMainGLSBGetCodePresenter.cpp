#include "BLMainGLSBGetCodePresenter.h"
#include "BLLeakUtils.h"
#include "BLMainGLSBGetCodeView.h"
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
extern "C" unsigned long UNK_0058d128;
extern "C" unsigned long UNK_0058d142;
extern "C" unsigned long UNK_0058d188;
extern "C" unsigned long UNK_0058d1b0;
extern "C" unsigned long UNK_0058d1d6;
extern "C" unsigned long UNK_0058d204;
extern "C" unsigned long UNK_0058d298;
extern "C" unsigned long _UNK_0058d174;
extern "C" unsigned long _UNK_0058d178;
extern "C" unsigned long _UNK_0058d18c;
extern "C" unsigned long _UNK_0058d1b4;
extern "C" unsigned long _UNK_0058d230;
extern "C" unsigned long _UNK_0058d234;
extern "C" unsigned long _UNK_0058d2d8;
extern "C" unsigned long g_0058d128;
extern "C" unsigned long g_0058d142;
extern "C" unsigned long g_0058d174;
extern "C" unsigned long g_0058d178;
extern "C" unsigned long g_0058d188;
extern "C" unsigned long g_0058d18c;
extern "C" unsigned long g_0058d1b0;
extern "C" unsigned long g_0058d1b4;
extern "C" unsigned long g_0058d1d6;
extern "C" unsigned long g_0058d204;
extern "C" unsigned long g_0058d230;
extern "C" unsigned long g_0058d234;
extern "C" unsigned long g_0058d298;
extern "C" unsigned long g_0058d2d8;
bool BLMainGLSBGetCodePresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLMainGLSBGetCodePresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLMainGLSBGetCodePresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLMainGLSBGetCodePresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLMainGLSBGetCodePresenter::tick(float p1)
{
  return;
}

BLMainGLSBGetCodePresenter::~BLMainGLSBGetCodePresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0058d128 + g_0058d174);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x3c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0058d142 + g_0058d178,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLMainGLSBGetCodePresenter::onClose(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(0xc2);
  return;
}

BLMainGLSBGetCodePresenter::BLMainGLSBGetCodePresenter()
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
  iVar3 = *(int *)(&g_0058d1d6 + g_0058d230);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x3c;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 1);
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0058d204 + g_0058d234,&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

undefined4 BLMainGLSBGetCodePresenter::create(BLMainGLSBGetCodeView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x1c))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLMainGLSBGetCodePresenter::onEnter()
{
  return;
}

void BLMainGLSBGetCodePresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
void BLMainGLSBGetCodePresenter::initWithView(BLMainGLSBGetCodeView* p1)
{
  int *piVar1;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  *(undefined4 *)(((int)this) + 0x18) = (undefined4)(intptr_t)p1;
  piVar1 = (int *)((BLMainGLSBGetCodeView *)p1)->getBtnClose();
  uStack_14 = (undefined4)(0);
  uStack_18 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_0058d298 + (intptr_t)(g_0058d2d8))));
  (**(code **)(*piVar1 + 0x254))(piVar1,((int)this),uStack_18,0,0x20);
  piVar1 = (int *)((sir::singleton<MainGLSBData, 0> *)this)->instance();
  (**(code **)(*piVar1 + 8))(&uStack_1c,piVar1);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x18) + 0x124);
  (**(code **)(*piVar1 + 0x234))(piVar1,uStack_1c);
  func_0079e2bc(&uStack_1c);
  return;
}
