#include "BLMainQuiteSaveDataView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLMainQuiteSaveDataPresenter.h"
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
extern "C" unsigned long UNK_00603d98;
extern "C" unsigned long UNK_00603dea;
extern "C" unsigned long UNK_00603e30;
extern "C" unsigned long UNK_00603e58;
extern "C" unsigned long UNK_00604006;
extern "C" unsigned long UNK_006040ea;
extern "C" unsigned long UNK_006041d8;
extern "C" unsigned long UNK_00604202;
extern "C" unsigned long UNK_006042c6;
extern "C" unsigned long UNK_006042fc;
extern "C" unsigned long UNK_006043ce;
extern "C" unsigned long UNK_00604440;
extern "C" unsigned long UNK_006044e0;
extern "C" unsigned long UNK_0060450c;
extern "C" unsigned long UNK_006045de;
extern "C" unsigned long UNK_00604608;
extern "C" unsigned long UNK_006046aa;
extern "C" unsigned long UNK_006046d6;
extern "C" unsigned long UNK_006047a8;
extern "C" unsigned long UNK_006047d2;
extern "C" unsigned long _DAT_00603f10;
extern "C" unsigned long _DAT_00603f14;
extern "C" unsigned long _UNK_00603e1c;
extern "C" unsigned long _UNK_00603e20;
extern "C" unsigned long _UNK_00603e34;
extern "C" unsigned long _UNK_00603e5c;
extern "C" unsigned long _UNK_006043e8;
extern "C" unsigned long _UNK_006043ec;
extern "C" unsigned long _UNK_006043f0;
extern "C" unsigned long _UNK_006043f4;
extern "C" unsigned long _UNK_006043f8;
extern "C" unsigned long _UNK_006043fc;
extern "C" unsigned long _UNK_00604400;
extern "C" unsigned long _UNK_00604404;
extern "C" unsigned long _UNK_00604408;
extern "C" unsigned long _UNK_0060440c;
extern "C" unsigned long _UNK_00604410;
extern "C" unsigned long _UNK_00604414;
extern "C" unsigned long _UNK_00604418;
extern "C" unsigned long _UNK_0060441c;
extern "C" unsigned long _UNK_00604420;
extern "C" unsigned long _UNK_00604818;
extern "C" unsigned long _UNK_0060481c;
extern "C" unsigned long _UNK_00604820;
extern "C" unsigned long _UNK_00604824;
extern "C" unsigned long _UNK_00604828;
extern "C" unsigned long _UNK_0060482c;
extern "C" unsigned long _UNK_00604830;
extern "C" unsigned long _UNK_00604834;
extern "C" unsigned long _UNK_00604838;
extern "C" unsigned long _UNK_0060483c;
extern "C" unsigned long _UNK_00604840;
extern "C" unsigned long _UNK_00604844;
extern "C" unsigned long _UNK_00604848;
extern "C" unsigned long _UNK_0060484c;
extern "C" unsigned long _UNK_00604850;
extern "C" unsigned long _UNK_00604948;
extern "C" unsigned long _UNK_0060494c;
extern "C" unsigned long _UNK_00604950;
extern "C" unsigned long _UNK_00604954;
extern "C" unsigned long g_00603d98;
extern "C" unsigned long g_00603dea;
extern "C" unsigned long g_00603e1c;
extern "C" unsigned long g_00603e20;
extern "C" unsigned long g_00603e30;
extern "C" unsigned long g_00603e34;
extern "C" unsigned long g_00603e58;
extern "C" unsigned long g_00603e5c;
extern "C" unsigned long g_00603f10;
extern "C" unsigned long g_00603f14;
extern "C" unsigned long g_00604006;
extern "C" unsigned long g_006040ea;
extern "C" unsigned long g_006041d8;
extern "C" unsigned long g_00604202;
extern "C" unsigned long g_006042c6;
extern "C" unsigned long g_006042fc;
extern "C" unsigned long g_006043ce;
extern "C" unsigned long g_006043e8;
extern "C" unsigned long g_006043ec;
extern "C" unsigned long g_006043f0;
extern "C" unsigned long g_006043f4;
extern "C" unsigned long g_006043f8;
extern "C" unsigned long g_006043fc;
extern "C" unsigned long g_00604400;
extern "C" unsigned long g_00604404;
extern "C" unsigned long g_00604408;
extern "C" unsigned long g_0060440c;
extern "C" unsigned long g_00604410;
extern "C" unsigned long g_00604414;
extern "C" unsigned long g_00604418;
extern "C" unsigned long g_0060441c;
extern "C" unsigned long g_00604420;
extern "C" unsigned long g_00604440;
extern "C" unsigned long g_006044e0;
extern "C" unsigned long g_0060450c;
extern "C" unsigned long g_006045de;
extern "C" unsigned long g_00604608;
extern "C" unsigned long g_006046aa;
extern "C" unsigned long g_006046d6;
extern "C" unsigned long g_006047a8;
extern "C" unsigned long g_006047d2;
extern "C" unsigned long g_00604818;
extern "C" unsigned long g_0060481c;
extern "C" unsigned long g_00604820;
extern "C" unsigned long g_00604824;
extern "C" unsigned long g_00604828;
extern "C" unsigned long g_0060482c;
extern "C" unsigned long g_00604830;
extern "C" unsigned long g_00604834;
extern "C" unsigned long g_00604838;
extern "C" unsigned long g_0060483c;
extern "C" unsigned long g_00604840;
extern "C" unsigned long g_00604844;
extern "C" unsigned long g_00604848;
extern "C" unsigned long g_0060484c;
extern "C" unsigned long g_00604850;
extern "C" unsigned long g_00604948;
extern "C" unsigned long g_0060494c;
extern "C" unsigned long g_00604950;
extern "C" unsigned long g_00604954;
BLMainQuiteSaveDataView::~BLMainQuiteSaveDataView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_00603d98 + g_00603e1c);
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
  func_0079e45c(&uStack_14,&g_00603dea + g_00603e20,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}


int * BLMainQuiteSaveDataView::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x134)));
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

undefined4 BLMainQuiteSaveDataView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 BLMainQuiteSaveDataView::getBtnClose()
{
  return *(undefined4 *)(((int)this) + 0x11c);
}

undefined4 BLMainQuiteSaveDataView::getBtnOK()
{
  return *(undefined4 *)(((int)this) + 0x120);
}

undefined4 BLMainQuiteSaveDataView::getBtnCancel()
{
  return *(undefined4 *)(((int)this) + 0x124);
}

void BLMainQuiteSaveDataView::onEnter()
{
  ((BLMainQuiteSaveDataPresenter *)*(undefined4 *)(((int)this) + 0x10c))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLMainQuiteSaveDataView::onExit()
{
  ((BLMainQuiteSaveDataPresenter *)*(undefined4 *)(((int)this) + 0x10c))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (2) =====
BLMainQuiteSaveDataView::BLMainQuiteSaveDataView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = (undefined4)(intptr_t)(*(int *)(g_00603f10 + 0x603ea0));
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
  func_0079e45c(&uStack_14,((intptr_t)"BLMainQuiteSaveDataView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

bool BLMainQuiteSaveDataView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
