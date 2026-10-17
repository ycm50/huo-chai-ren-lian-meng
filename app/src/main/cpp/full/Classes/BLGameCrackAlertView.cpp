#include "BLGameCrackAlertView.h"
#include "BLGameCrackAlertPresenter.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
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
extern "C" long long ghidra_CONCAT13(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_005fbc94;
extern "C" unsigned long UNK_005fbce6;
extern "C" unsigned long UNK_005fbd2c;
extern "C" unsigned long UNK_005fbd54;
extern "C" unsigned long UNK_005fbf0c;
extern "C" unsigned long UNK_005fbfee;
extern "C" unsigned long UNK_005fc0ea;
extern "C" unsigned long UNK_005fc114;
extern "C" unsigned long UNK_005fc1e6;
extern "C" unsigned long UNK_005fc210;
extern "C" unsigned long UNK_005fc2ce;
extern "C" unsigned long UNK_005fc346;
extern "C" unsigned long _DAT_005fbe0c;
extern "C" unsigned long _DAT_005fbe10;
extern "C" unsigned long _UNK_005fbd18;
extern "C" unsigned long _UNK_005fbd1c;
extern "C" unsigned long _UNK_005fbd30;
extern "C" unsigned long _UNK_005fbd58;
extern "C" unsigned long _UNK_005fc2f0;
extern "C" unsigned long _UNK_005fc2f4;
extern "C" unsigned long _UNK_005fc2f8;
extern "C" unsigned long _UNK_005fc2fc;
extern "C" unsigned long _UNK_005fc300;
extern "C" unsigned long _UNK_005fc304;
extern "C" unsigned long _UNK_005fc308;
extern "C" unsigned long _UNK_005fc30c;
extern "C" unsigned long _UNK_005fc310;
extern "C" unsigned long _UNK_005fc314;
extern "C" unsigned long _UNK_005fc318;
extern "C" unsigned long _UNK_005fc31c;
extern "C" unsigned long _UNK_005fc320;
extern "C" unsigned long _UNK_005fc324;
extern "C" unsigned long _UNK_005fc328;
extern "C" unsigned long _UNK_005fc32c;
extern "C" unsigned long _UNK_005fc4e4;
extern "C" unsigned long _UNK_005fc4e8;
extern "C" unsigned long _UNK_005fc4ec;
extern "C" unsigned long _UNK_005fc4f0;
extern "C" unsigned long _UNK_005fc4f4;
extern "C" unsigned long _UNK_005fc4f8;
extern "C" unsigned long _UNK_005fc4fc;
extern "C" unsigned long _UNK_005fc500;
extern "C" unsigned long g_005fbc94;
extern "C" unsigned long g_005fbce6;
extern "C" unsigned long g_005fbd18;
extern "C" unsigned long g_005fbd1c;
extern "C" unsigned long g_005fbd2c;
extern "C" unsigned long g_005fbd30;
extern "C" unsigned long g_005fbd54;
extern "C" unsigned long g_005fbd58;
extern "C" unsigned long g_005fbe0c;
extern "C" unsigned long g_005fbe10;
extern "C" unsigned long g_005fbf0c;
extern "C" unsigned long g_005fbfee;
extern "C" unsigned long g_005fc0ea;
extern "C" unsigned long g_005fc114;
extern "C" unsigned long g_005fc1e6;
extern "C" unsigned long g_005fc210;
extern "C" unsigned long g_005fc2ce;
extern "C" unsigned long g_005fc2f0;
extern "C" unsigned long g_005fc2f4;
extern "C" unsigned long g_005fc2f8;
extern "C" unsigned long g_005fc2fc;
extern "C" unsigned long g_005fc300;
extern "C" unsigned long g_005fc304;
extern "C" unsigned long g_005fc308;
extern "C" unsigned long g_005fc30c;
extern "C" unsigned long g_005fc310;
extern "C" unsigned long g_005fc314;
extern "C" unsigned long g_005fc318;
extern "C" unsigned long g_005fc31c;
extern "C" unsigned long g_005fc320;
extern "C" unsigned long g_005fc324;
extern "C" unsigned long g_005fc328;
extern "C" unsigned long g_005fc32c;
extern "C" unsigned long g_005fc346;
extern "C" unsigned long g_005fc4e4;
extern "C" unsigned long g_005fc4e8;
extern "C" unsigned long g_005fc4ec;
extern "C" unsigned long g_005fc4f0;
extern "C" unsigned long g_005fc4f4;
extern "C" unsigned long g_005fc4f8;
extern "C" unsigned long g_005fc4fc;
extern "C" unsigned long g_005fc500;
BLGameCrackAlertView::~BLGameCrackAlertView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_005fbc94 + g_005fbd18);
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
  if (*(int *)((int)this + 4*(0x43)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x43)) = 0;
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005fbce6 + g_005fbd1c,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLGameCrackAlertView::BLGameCrackAlertView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = (undefined4)(intptr_t)(*(int *)(g_005fbe0c + 0x5fbd9c));
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  iVar2 = (undefined4)(intptr_t)(cocos2d::CCArray::create());
  *(int *)((int)this + 4*(0x42)) = iVar2;
  if (iVar2 != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLGameCrackAlertView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * BLGameCrackAlertView::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x124)));
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

undefined4 BLGameCrackAlertView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 BLGameCrackAlertView::getBackGround()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

undefined4 BLGameCrackAlertView::getTabBg()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

undefined4 BLGameCrackAlertView::getBtnSure()
{
  return *(undefined4 *)(((int)this) + 0x118);
}

undefined4 BLGameCrackAlertView::getLabSure()
{
  return *(undefined4 *)(((int)this) + 0x11c);
}

undefined4 BLGameCrackAlertView::getLabTitle()
{
  return *(undefined4 *)(((int)this) + 0x120);
}

void BLGameCrackAlertView::onEnter()
{
  ((BLGameCrackAlertPresenter *)*(undefined4 *)(((int)this) + 0x10c))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLGameCrackAlertView::onExit()
{
  ((BLGameCrackAlertPresenter *)*(undefined4 *)(((int)this) + 0x10c))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
bool BLGameCrackAlertView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
