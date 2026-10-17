#include "BLSuitUpGraceInfoView.h"
#include "BLLeakUtils.h"
#include "BLSuitUpGraceInfoPresenter.h"
#include "BLSuitUpGraceInfoPropertyView.h"
#include "BLSuitUpGraceItemView.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
using namespace cocos2d;
// 兜底声明
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0069b534;
extern "C" unsigned long UNK_0069b578;
extern "C" unsigned long UNK_0069b5bc;
extern "C" unsigned long UNK_0069b6cc;
extern "C" unsigned long UNK_0069bbc8;
extern "C" unsigned long UNK_0069bbf6;
extern "C" unsigned long UNK_0069bc7e;
extern "C" unsigned long UNK_0069bdb8;
extern "C" unsigned long UNK_0069be94;
extern "C" unsigned long UNK_0069be96;
extern "C" unsigned long UNK_0069bea8;
extern "C" unsigned long _UNK_0069b5a8;
extern "C" unsigned long _UNK_0069b5ac;
extern "C" unsigned long _UNK_0069b5c0;
extern "C" unsigned long _UNK_0069b6d0;
extern "C" unsigned long _UNK_0069bc20;
extern "C" unsigned long _UNK_0069bc24;
extern "C" unsigned long _UNK_0069bf24;
extern "C" unsigned long _UNK_0069bf28;
extern "C" unsigned long _UNK_0069bf2c;
extern "C" unsigned long _UNK_0069bf30;
extern "C" unsigned long _UNK_0069bf34;
extern "C" unsigned long _UNK_0069bf38;
extern "C" unsigned long _UNK_0069bf3c;
extern "C" unsigned long _UNK_0069bf40;
extern "C" unsigned long _UNK_0069bf44;
extern "C" unsigned long _UNK_0069bf48;
extern "C" unsigned long _UNK_0069bf4c;
extern "C" unsigned long _UNK_0069bf50;
extern "C" unsigned long g_0069b534;
extern "C" unsigned long g_0069b578;
extern "C" unsigned long g_0069b5a8;
extern "C" unsigned long g_0069b5ac;
extern "C" unsigned long g_0069b5bc;
extern "C" unsigned long g_0069b5c0;
extern "C" unsigned long g_0069b6cc;
extern "C" unsigned long g_0069b6d0;
extern "C" unsigned long g_0069bbc8;
extern "C" unsigned long g_0069bbf6;
extern "C" unsigned long g_0069bc20;
extern "C" unsigned long g_0069bc24;
extern "C" unsigned long g_0069bc7e;
extern "C" unsigned long g_0069bdb8;
extern "C" unsigned long g_0069be94;
extern "C" unsigned long g_0069be96;
extern "C" unsigned long g_0069bea8;
extern "C" unsigned long g_0069bf24;
extern "C" unsigned long g_0069bf28;
extern "C" unsigned long g_0069bf2c;
extern "C" unsigned long g_0069bf30;
extern "C" unsigned long g_0069bf34;
extern "C" unsigned long g_0069bf38;
extern "C" unsigned long g_0069bf3c;
extern "C" unsigned long g_0069bf40;
extern "C" unsigned long g_0069bf44;
extern "C" unsigned long g_0069bf48;
extern "C" unsigned long g_0069bf4c;
extern "C" unsigned long g_0069bf50;
BLSuitUpGraceInfoView::~BLSuitUpGraceInfoView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0069b534 + g_0069b5a8);
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
  func_0079e45c(&uStack_14,&g_0069b578 + g_0069b5ac,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLSuitUpGraceInfoView::BLSuitUpGraceInfoView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_0069bbc8 + g_0069bc20);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0069bbf6 + g_0069bc24,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}


bool BLSuitUpGraceInfoView::init()
{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = ((cocos2d::CCLayer *)this)->init();
  if (iVar1 != 0) {
    uVar2 = (undefined4)(((BLSuitUpGraceInfoPresenter *)this)->create());
    *(undefined4 *)(((int)this) + 0x108) = uVar2;
    ((cocos2d::CCObject *)this)->retain();
    BLSuitUpGraceInfoView::initView();
    ((BLSuitUpGraceInfoPresenter *)*(undefined4 *)(((int)this) + 0x108))->initWithView((BLSuitUpGraceInfoView*)((int)this));
  }
  return iVar1;
}

void BLSuitUpGraceInfoView::onEnter()
{
  ((BLSuitUpGraceInfoPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLSuitUpGraceInfoView::onExit()
{
  ((BLSuitUpGraceInfoPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
void BLSuitUpGraceInfoView::initView()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
