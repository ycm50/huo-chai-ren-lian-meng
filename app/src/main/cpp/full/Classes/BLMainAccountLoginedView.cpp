#include "BLMainAccountLoginedView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLMainAccountLoginedPresenter.h"
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
extern "C" long long ghidra_CONCAT13(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_00590338;
extern "C" unsigned long UNK_0059038a;
extern "C" unsigned long UNK_005903d0;
extern "C" unsigned long UNK_005903f8;
extern "C" unsigned long UNK_0059059c;
extern "C" unsigned long UNK_00590680;
extern "C" unsigned long UNK_0059076e;
extern "C" unsigned long UNK_00590798;
extern "C" unsigned long UNK_00590860;
extern "C" unsigned long UNK_00590898;
extern "C" unsigned long UNK_00590970;
extern "C" unsigned long UNK_005909c6;
extern "C" unsigned long UNK_005909f0;
extern "C" unsigned long UNK_00590aa2;
extern "C" unsigned long UNK_00590ace;
extern "C" unsigned long UNK_00590b94;
extern "C" unsigned long UNK_00590bbe;
extern "C" unsigned long _DAT_005904b0;
extern "C" unsigned long _DAT_005904b4;
extern "C" unsigned long _UNK_005903bc;
extern "C" unsigned long _UNK_005903c0;
extern "C" unsigned long _UNK_005903d4;
extern "C" unsigned long _UNK_005903fc;
extern "C" unsigned long _UNK_0059097c;
extern "C" unsigned long _UNK_00590980;
extern "C" unsigned long _UNK_00590984;
extern "C" unsigned long _UNK_00590988;
extern "C" unsigned long _UNK_0059098c;
extern "C" unsigned long _UNK_00590990;
extern "C" unsigned long _UNK_00590994;
extern "C" unsigned long _UNK_00590998;
extern "C" unsigned long _UNK_0059099c;
extern "C" unsigned long _UNK_005909a0;
extern "C" unsigned long _UNK_005909a4;
extern "C" unsigned long _UNK_005909a8;
extern "C" unsigned long _UNK_005909ac;
extern "C" unsigned long _UNK_005909b0;
extern "C" unsigned long _UNK_005909b4;
extern "C" unsigned long _UNK_00590cf8;
extern "C" unsigned long _UNK_00590cfc;
extern "C" unsigned long _UNK_00590d00;
extern "C" unsigned long _UNK_00590d04;
extern "C" unsigned long _UNK_00590d08;
extern "C" unsigned long _UNK_00590d0c;
extern "C" unsigned long _UNK_00590d10;
extern "C" unsigned long _UNK_00590d14;
extern "C" unsigned long _UNK_00590d18;
extern "C" unsigned long _UNK_00590d1c;
extern "C" unsigned long _UNK_00590d20;
extern "C" unsigned long _UNK_00590d24;
extern "C" unsigned long g_00590338;
extern "C" unsigned long g_0059038a;
extern "C" unsigned long g_005903bc;
extern "C" unsigned long g_005903c0;
extern "C" unsigned long g_005903d0;
extern "C" unsigned long g_005903d4;
extern "C" unsigned long g_005903f8;
extern "C" unsigned long g_005903fc;
extern "C" unsigned long g_005904b0;
extern "C" unsigned long g_005904b4;
extern "C" unsigned long g_0059059c;
extern "C" unsigned long g_00590680;
extern "C" unsigned long g_0059076e;
extern "C" unsigned long g_00590798;
extern "C" unsigned long g_00590860;
extern "C" unsigned long g_00590898;
extern "C" unsigned long g_00590970;
extern "C" unsigned long g_0059097c;
extern "C" unsigned long g_00590980;
extern "C" unsigned long g_00590984;
extern "C" unsigned long g_00590988;
extern "C" unsigned long g_0059098c;
extern "C" unsigned long g_00590990;
extern "C" unsigned long g_00590994;
extern "C" unsigned long g_00590998;
extern "C" unsigned long g_0059099c;
extern "C" unsigned long g_005909a0;
extern "C" unsigned long g_005909a4;
extern "C" unsigned long g_005909a8;
extern "C" unsigned long g_005909ac;
extern "C" unsigned long g_005909b0;
extern "C" unsigned long g_005909b4;
extern "C" unsigned long g_005909c6;
extern "C" unsigned long g_005909f0;
extern "C" unsigned long g_00590aa2;
extern "C" unsigned long g_00590ace;
extern "C" unsigned long g_00590b94;
extern "C" unsigned long g_00590bbe;
extern "C" unsigned long g_00590cf8;
extern "C" unsigned long g_00590cfc;
extern "C" unsigned long g_00590d00;
extern "C" unsigned long g_00590d04;
extern "C" unsigned long g_00590d08;
extern "C" unsigned long g_00590d0c;
extern "C" unsigned long g_00590d10;
extern "C" unsigned long g_00590d14;
extern "C" unsigned long g_00590d18;
extern "C" unsigned long g_00590d1c;
extern "C" unsigned long g_00590d20;
extern "C" unsigned long g_00590d24;
BLMainAccountLoginedView::~BLMainAccountLoginedView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_00590338 + g_005903bc);
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
  func_0079e45c(&uStack_14,&g_0059038a + g_005903c0,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}


int * BLMainAccountLoginedView::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(300)));
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

undefined4 BLMainAccountLoginedView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 BLMainAccountLoginedView::getBtnClose()
{
  return *(undefined4 *)(((int)this) + 0x128);
}

undefined4 BLMainAccountLoginedView::getBtnAccountQuite()
{
  return *(undefined4 *)(((int)this) + 0x120);
}

void BLMainAccountLoginedView::onEnter()
{
  ((BLMainAccountLoginedPresenter *)*(undefined4 *)(((int)this) + 0x10c))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLMainAccountLoginedView::onExit()
{
  ((BLMainAccountLoginedPresenter *)*(undefined4 *)(((int)this) + 0x10c))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (2) =====
BLMainAccountLoginedView::BLMainAccountLoginedView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = (undefined4)(intptr_t)(*(int *)(g_005904b0 + 0x590440));
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
  func_0079e45c(&uStack_14,((intptr_t)"BLMainAccountLoginedView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

bool BLMainAccountLoginedView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
