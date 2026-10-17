#include "BLSuitUpGraceItemView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLSuitUpGraceItemPresenter.h"
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
extern "C" long long func_0079e4dc(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e57c(...);
extern "C" long long ghidra_CONCAT13(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0069b404;
extern "C" unsigned long UNK_0069b448;
extern "C" unsigned long UNK_0069b48c;
extern "C" unsigned long UNK_0069b67c;
extern "C" unsigned long UNK_0069b70c;
extern "C" unsigned long UNK_0069b73a;
extern "C" unsigned long UNK_0069b7c6;
extern "C" unsigned long UNK_0069b808;
extern "C" unsigned long UNK_0069b908;
extern "C" unsigned long UNK_0069b934;
extern "C" unsigned long UNK_0069ba02;
extern "C" unsigned long _UNK_0069b478;
extern "C" unsigned long _UNK_0069b47c;
extern "C" unsigned long _UNK_0069b490;
extern "C" unsigned long _UNK_0069b680;
extern "C" unsigned long _UNK_0069b764;
extern "C" unsigned long _UNK_0069b768;
extern "C" unsigned long _UNK_0069ba80;
extern "C" unsigned long _UNK_0069ba84;
extern "C" unsigned long _UNK_0069ba88;
extern "C" unsigned long _UNK_0069ba8c;
extern "C" unsigned long _UNK_0069ba90;
extern "C" unsigned long _UNK_0069ba94;
extern "C" unsigned long _UNK_0069ba98;
extern "C" unsigned long _UNK_0069ba9c;
extern "C" unsigned long _UNK_0069baa0;
extern "C" unsigned long _UNK_0069baa4;
extern "C" unsigned long g_0069b404;
extern "C" unsigned long g_0069b448;
extern "C" unsigned long g_0069b478;
extern "C" unsigned long g_0069b47c;
extern "C" unsigned long g_0069b48c;
extern "C" unsigned long g_0069b490;
extern "C" unsigned long g_0069b67c;
extern "C" unsigned long g_0069b680;
extern "C" unsigned long g_0069b70c;
extern "C" unsigned long g_0069b73a;
extern "C" unsigned long g_0069b764;
extern "C" unsigned long g_0069b768;
extern "C" unsigned long g_0069b7c6;
extern "C" unsigned long g_0069b808;
extern "C" unsigned long g_0069b908;
extern "C" unsigned long g_0069b934;
extern "C" unsigned long g_0069ba02;
extern "C" unsigned long g_0069ba80;
extern "C" unsigned long g_0069ba84;
extern "C" unsigned long g_0069ba88;
extern "C" unsigned long g_0069ba8c;
extern "C" unsigned long g_0069ba90;
extern "C" unsigned long g_0069ba94;
extern "C" unsigned long g_0069ba98;
extern "C" unsigned long g_0069ba9c;
extern "C" unsigned long g_0069baa0;
extern "C" unsigned long g_0069baa4;
BLSuitUpGraceItemView::~BLSuitUpGraceItemView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0069b404 + g_0069b478);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  if (*(int *)((int)this + 4*(0x42)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x42)) = 0;
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0069b448 + g_0069b47c,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLSuitUpGraceItemView::BLSuitUpGraceItemView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_0069b70c + g_0069b764);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0069b73a + g_0069b768,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * BLSuitUpGraceItemView::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x11c)));
  0 /* ctorZero */;
  iVar2 = (**(code **)(*piVar1 + 0x18))(piVar1);
  if (iVar2 == 0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    piVar1 = (int *)0x0;
  }
  else {
    ((cocos2d::CCObject *)piVar1)->autorelease();
  }
  return (int *)(piVar1);
}


bool BLSuitUpGraceItemView::init()
{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = ((cocos2d::CCLayer *)this)->init();
  if (iVar1 != 0) {
    uVar2 = (undefined4)(((BLSuitUpGraceItemPresenter *)this)->create());
    *(undefined4 *)(((int)this) + 0x108) = uVar2;
    ((cocos2d::CCObject *)this)->retain();
    BLSuitUpGraceItemView::initView();
    ((BLSuitUpGraceItemPresenter *)*(undefined4 *)(((int)this) + 0x108))->initWithView((BLSuitUpGraceItemView*)((int)this));
  }
  return iVar1;
}

void BLSuitUpGraceItemView::onEnter()
{
  ((BLSuitUpGraceItemPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLSuitUpGraceItemView::onExit()
{
  ((BLSuitUpGraceItemPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
void BLSuitUpGraceItemView::initView()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
