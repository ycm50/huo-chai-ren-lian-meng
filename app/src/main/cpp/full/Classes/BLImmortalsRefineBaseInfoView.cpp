#include "BLImmortalsRefineBaseInfoView.h"
#include "BLImmortalsRefineBaseInfoPresenter.h"
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
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_00572478;
extern "C" unsigned long UNK_005724ae;
extern "C" unsigned long UNK_0057251c;
extern "C" unsigned long UNK_00572544;
extern "C" unsigned long UNK_00572654;
extern "C" unsigned long UNK_00572690;
extern "C" unsigned long UNK_0057374a;
extern "C" unsigned long UNK_0057385a;
extern "C" unsigned long UNK_00573860;
extern "C" unsigned long UNK_00573872;
extern "C" unsigned long UNK_00573918;
extern "C" unsigned long UNK_005739b0;
extern "C" unsigned long UNK_005739b2;
extern "C" unsigned long UNK_005739c4;
extern "C" unsigned long _UNK_00572508;
extern "C" unsigned long _UNK_0057250c;
extern "C" unsigned long _UNK_00572520;
extern "C" unsigned long _UNK_00572548;
extern "C" unsigned long _UNK_005726cc;
extern "C" unsigned long _UNK_005726d0;
extern "C" unsigned long _UNK_00573a74;
extern "C" unsigned long _UNK_00573a78;
extern "C" unsigned long _UNK_00573a7c;
extern "C" unsigned long _UNK_00573a80;
extern "C" unsigned long _UNK_00573a84;
extern "C" unsigned long _UNK_00573a88;
extern "C" unsigned long _UNK_00573a8c;
extern "C" unsigned long _UNK_00573a90;
extern "C" unsigned long _UNK_00573a94;
extern "C" unsigned long _UNK_00573a98;
extern "C" unsigned long _UNK_00573a9c;
extern "C" unsigned long _UNK_00573aa0;
extern "C" unsigned long _UNK_00573aa4;
extern "C" unsigned long _UNK_00573aa8;
extern "C" unsigned long _UNK_00573aac;
extern "C" unsigned long g_00572478;
extern "C" unsigned long g_005724ae;
extern "C" unsigned long g_00572508;
extern "C" unsigned long g_0057250c;
extern "C" unsigned long g_0057251c;
extern "C" unsigned long g_00572520;
extern "C" unsigned long g_00572544;
extern "C" unsigned long g_00572548;
extern "C" unsigned long g_00572654;
extern "C" unsigned long g_00572690;
extern "C" unsigned long g_005726cc;
extern "C" unsigned long g_005726d0;
extern "C" unsigned long g_0057374a;
extern "C" unsigned long g_0057385a;
extern "C" unsigned long g_00573860;
extern "C" unsigned long g_00573872;
extern "C" unsigned long g_00573918;
extern "C" unsigned long g_005739b0;
extern "C" unsigned long g_005739b2;
extern "C" unsigned long g_005739c4;
extern "C" unsigned long g_00573a74;
extern "C" unsigned long g_00573a78;
extern "C" unsigned long g_00573a7c;
extern "C" unsigned long g_00573a80;
extern "C" unsigned long g_00573a84;
extern "C" unsigned long g_00573a88;
extern "C" unsigned long g_00573a8c;
extern "C" unsigned long g_00573a90;
extern "C" unsigned long g_00573a94;
extern "C" unsigned long g_00573a98;
extern "C" unsigned long g_00573a9c;
extern "C" unsigned long g_00573aa0;
extern "C" unsigned long g_00573aa4;
extern "C" unsigned long g_00573aa8;
extern "C" unsigned long g_00573aac;
BLImmortalsRefineBaseInfoView::~BLImmortalsRefineBaseInfoView()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  iVar2 = *(int *)(&g_00572478 + g_00572508);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  piStack_20 = (int *)((int)this);
  uStack_1c = (undefined4)(p2);
  uStack_18 = (undefined4)(p3);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_1c,&g_005724ae + g_0057250c,&piStack_20);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_1c);
  func_0079e2bc(&uStack_1c);
  if (*(int *)((int)this + 4*(0x42)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x42)) = 0;
  }
  *(int *)((int)this + 4*(0x47)) = *(int *)((int)this + 4*(0x46));
  if (*(int *)((int)this + 4*(0x46)) != 0) {
    (void)(::operator delete((void *)(*(int *)((int)this + 4*(0x46)))));
  }
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLImmortalsRefineBaseInfoView::BLImmortalsRefineBaseInfoView()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  piStack_20 = (int *)((int)this);
  uStack_1c = (undefined4)(p2);
  uStack_18 = (undefined4)(p3);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_00572654 + g_005726cc);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  *(int *)((int)this + 4*(0x46)) = 0;
  *(int *)((int)this + 4*(0x47)) = 0;
  *(int *)((int)this + 4*(0x48)) = 0;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_1c,&g_00572690 + g_005726d0,&piStack_20);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_1c);
  func_0079e2bc(&uStack_1c);
  *(int *)((int)this + 4*(0x47)) = *(int *)((int)this + 4*(0x46));
  return;
}


bool BLImmortalsRefineBaseInfoView::init()
{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = ((cocos2d::CCLayer *)this)->init();
  if (iVar1 != 0) {
    uVar2 = (undefined4)(((BLImmortalsRefineBaseInfoPresenter *)this)->create());
    *(undefined4 *)(((int)this) + 0x108) = uVar2;
    ((cocos2d::CCObject *)this)->retain();
    BLImmortalsRefineBaseInfoView::initView();
    ((BLImmortalsRefineBaseInfoPresenter *)*(undefined4 *)(((int)this) + 0x108))->initWithView((BLImmortalsRefineBaseInfoView*)((int)this));
  }
  return iVar1;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
void BLImmortalsRefineBaseInfoView::initView()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
