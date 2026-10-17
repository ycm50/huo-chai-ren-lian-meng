#include "BLArenaBuyAlertView.h"
#include "BLArenaBuyAlertPresenter.h"
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
extern "C" unsigned long UNK_004c4f88;
extern "C" unsigned long UNK_004c4fda;
extern "C" unsigned long UNK_004c5020;
extern "C" unsigned long UNK_004c5048;
extern "C" unsigned long UNK_004c529a;
extern "C" unsigned long UNK_004c537c;
extern "C" unsigned long UNK_004c5476;
extern "C" unsigned long UNK_004c54a4;
extern "C" unsigned long UNK_004c5582;
extern "C" unsigned long UNK_004c55ac;
extern "C" unsigned long UNK_004c567c;
extern "C" unsigned long UNK_004c56e8;
extern "C" unsigned long UNK_004c57a6;
extern "C" unsigned long UNK_004c57da;
extern "C" unsigned long UNK_004c58f6;
extern "C" unsigned long UNK_004c5920;
extern "C" unsigned long _DAT_004c518c;
extern "C" unsigned long _DAT_004c5190;
extern "C" unsigned long _UNK_004c500c;
extern "C" unsigned long _UNK_004c5010;
extern "C" unsigned long _UNK_004c5024;
extern "C" unsigned long _UNK_004c504c;
extern "C" unsigned long _UNK_004c567c;
extern "C" unsigned long _UNK_004c5680;
extern "C" unsigned long _UNK_004c5684;
extern "C" unsigned long _UNK_004c5688;
extern "C" unsigned long _UNK_004c568c;
extern "C" unsigned long _UNK_004c5690;
extern "C" unsigned long _UNK_004c5694;
extern "C" unsigned long _UNK_004c5698;
extern "C" unsigned long _UNK_004c569c;
extern "C" unsigned long _UNK_004c56a0;
extern "C" unsigned long _UNK_004c56a4;
extern "C" unsigned long _UNK_004c56a8;
extern "C" unsigned long _UNK_004c56ac;
extern "C" unsigned long _UNK_004c56b0;
extern "C" unsigned long _UNK_004c56b4;
extern "C" unsigned long _UNK_004c56b8;
extern "C" unsigned long _UNK_004c5a74;
extern "C" unsigned long _UNK_004c5a78;
extern "C" unsigned long _UNK_004c5a7c;
extern "C" unsigned long _UNK_004c5a80;
extern "C" unsigned long _UNK_004c5a84;
extern "C" unsigned long _UNK_004c5a88;
extern "C" unsigned long _UNK_004c5a8c;
extern "C" unsigned long _UNK_004c5a90;
extern "C" unsigned long _UNK_004c5a94;
extern "C" unsigned long _UNK_004c5a98;
extern "C" unsigned long _UNK_004c5a9c;
extern "C" unsigned long _UNK_004c5aa0;
extern "C" unsigned long _UNK_004c5aa4;
extern "C" unsigned long _UNK_004c5aa8;
extern "C" unsigned long g_004c4f88;
extern "C" unsigned long g_004c4fda;
extern "C" unsigned long g_004c500c;
extern "C" unsigned long g_004c5010;
extern "C" unsigned long g_004c5020;
extern "C" unsigned long g_004c5024;
extern "C" unsigned long g_004c5048;
extern "C" unsigned long g_004c504c;
extern "C" unsigned long g_004c518c;
extern "C" unsigned long g_004c5190;
extern "C" unsigned long g_004c529a;
extern "C" unsigned long g_004c537c;
extern "C" unsigned long g_004c5476;
extern "C" unsigned long g_004c54a4;
extern "C" unsigned long g_004c5582;
extern "C" unsigned long g_004c55ac;
extern "C" unsigned long g_004c567c;
extern "C" unsigned long g_004c5680;
extern "C" unsigned long g_004c5684;
extern "C" unsigned long g_004c5688;
extern "C" unsigned long g_004c568c;
extern "C" unsigned long g_004c5690;
extern "C" unsigned long g_004c5694;
extern "C" unsigned long g_004c5698;
extern "C" unsigned long g_004c569c;
extern "C" unsigned long g_004c56a0;
extern "C" unsigned long g_004c56a4;
extern "C" unsigned long g_004c56a8;
extern "C" unsigned long g_004c56ac;
extern "C" unsigned long g_004c56b0;
extern "C" unsigned long g_004c56b4;
extern "C" unsigned long g_004c56b8;
extern "C" unsigned long g_004c56e8;
extern "C" unsigned long g_004c57a6;
extern "C" unsigned long g_004c57da;
extern "C" unsigned long g_004c58f6;
extern "C" unsigned long g_004c5920;
extern "C" unsigned long g_004c5a74;
extern "C" unsigned long g_004c5a78;
extern "C" unsigned long g_004c5a7c;
extern "C" unsigned long g_004c5a80;
extern "C" unsigned long g_004c5a84;
extern "C" unsigned long g_004c5a88;
extern "C" unsigned long g_004c5a8c;
extern "C" unsigned long g_004c5a90;
extern "C" unsigned long g_004c5a94;
extern "C" unsigned long g_004c5a98;
extern "C" unsigned long g_004c5a9c;
extern "C" unsigned long g_004c5aa0;
extern "C" unsigned long g_004c5aa4;
extern "C" unsigned long g_004c5aa8;
BLArenaBuyAlertView::~BLArenaBuyAlertView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_004c4f88 + g_004c500c);
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
  func_0079e45c(&uStack_14,&g_004c4fda + g_004c5010,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}


int * BLArenaBuyAlertView::create()
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

undefined4 BLArenaBuyAlertView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 BLArenaBuyAlertView::getBackGround()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

undefined4 BLArenaBuyAlertView::getTabBg()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

undefined4 BLArenaBuyAlertView::getBtnSure()
{
  return *(undefined4 *)(((int)this) + 0x118);
}

undefined4 BLArenaBuyAlertView::getBtnCancle()
{
  return *(undefined4 *)(((int)this) + 0x11c);
}

undefined4 BLArenaBuyAlertView::getLabSure()
{
  return *(undefined4 *)(((int)this) + 0x120);
}

undefined4 BLArenaBuyAlertView::getLabTitle()
{
  return *(undefined4 *)(((int)this) + 0x124);
}

undefined4 BLArenaBuyAlertView::getLabCancle()
{
  return *(undefined4 *)(((int)this) + 0x128);
}

void BLArenaBuyAlertView::onEnter()
{
  ((BLArenaBuyAlertPresenter *)*(undefined4 *)(((int)this) + 0x10c))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLArenaBuyAlertView::onExit()
{
  ((BLArenaBuyAlertPresenter *)*(undefined4 *)(((int)this) + 0x10c))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (2) =====
BLArenaBuyAlertView::BLArenaBuyAlertView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = (undefined4)(intptr_t)(*(int *)(g_004c518c + 0x4c511c));
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
  func_0079e45c(&uStack_14,((intptr_t)"BLArenaBuyAlertView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

bool BLArenaBuyAlertView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
