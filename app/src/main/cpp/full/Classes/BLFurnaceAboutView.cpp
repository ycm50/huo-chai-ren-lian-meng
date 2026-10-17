#include "BLFurnaceAboutView.h"
#include "BLFurnaceAboutPresenter.h"
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
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_00531028;
extern "C" unsigned long UNK_0053107a;
extern "C" unsigned long UNK_005310c0;
extern "C" unsigned long UNK_005310e8;
extern "C" unsigned long UNK_0053128c;
extern "C" unsigned long UNK_0053136e;
extern "C" unsigned long UNK_00531462;
extern "C" unsigned long UNK_0053148c;
extern "C" unsigned long UNK_0053156a;
extern "C" unsigned long UNK_0053156e;
extern "C" unsigned long UNK_00531630;
extern "C" unsigned long UNK_00531642;
extern "C" unsigned long UNK_005316cc;
extern "C" unsigned long _DAT_005311a0;
extern "C" unsigned long _DAT_005311a4;
extern "C" unsigned long _UNK_005310ac;
extern "C" unsigned long _UNK_005310b0;
extern "C" unsigned long _UNK_005310c4;
extern "C" unsigned long _UNK_005310ec;
extern "C" unsigned long _UNK_0053166c;
extern "C" unsigned long _UNK_00531670;
extern "C" unsigned long _UNK_00531674;
extern "C" unsigned long _UNK_00531678;
extern "C" unsigned long _UNK_0053167c;
extern "C" unsigned long _UNK_00531680;
extern "C" unsigned long _UNK_00531684;
extern "C" unsigned long _UNK_00531688;
extern "C" unsigned long _UNK_0053168c;
extern "C" unsigned long _UNK_00531690;
extern "C" unsigned long _UNK_00531694;
extern "C" unsigned long _UNK_00531698;
extern "C" unsigned long _UNK_0053169c;
extern "C" unsigned long _UNK_005316a0;
extern "C" unsigned long _UNK_005316a4;
extern "C" unsigned long _UNK_005316a8;
extern "C" unsigned long _UNK_005316ac;
extern "C" unsigned long _UNK_005316b0;
extern "C" unsigned long _UNK_00531764;
extern "C" unsigned long _UNK_00531768;
extern "C" unsigned long _UNK_0053176c;
extern "C" unsigned long g_00531028;
extern "C" unsigned long g_0053107a;
extern "C" unsigned long g_005310ac;
extern "C" unsigned long g_005310b0;
extern "C" unsigned long g_005310c0;
extern "C" unsigned long g_005310c4;
extern "C" unsigned long g_005310e8;
extern "C" unsigned long g_005310ec;
extern "C" unsigned long g_005311a0;
extern "C" unsigned long g_005311a4;
extern "C" unsigned long g_0053128c;
extern "C" unsigned long g_0053136e;
extern "C" unsigned long g_00531462;
extern "C" unsigned long g_0053148c;
extern "C" unsigned long g_0053156a;
extern "C" unsigned long g_0053156e;
extern "C" unsigned long g_00531630;
extern "C" unsigned long g_00531642;
extern "C" unsigned long g_0053166c;
extern "C" unsigned long g_00531670;
extern "C" unsigned long g_00531674;
extern "C" unsigned long g_00531678;
extern "C" unsigned long g_0053167c;
extern "C" unsigned long g_00531680;
extern "C" unsigned long g_00531684;
extern "C" unsigned long g_00531688;
extern "C" unsigned long g_0053168c;
extern "C" unsigned long g_00531690;
extern "C" unsigned long g_00531694;
extern "C" unsigned long g_00531698;
extern "C" unsigned long g_0053169c;
extern "C" unsigned long g_005316a0;
extern "C" unsigned long g_005316a4;
extern "C" unsigned long g_005316a8;
extern "C" unsigned long g_005316ac;
extern "C" unsigned long g_005316b0;
extern "C" unsigned long g_005316cc;
extern "C" unsigned long g_00531764;
extern "C" unsigned long g_00531768;
extern "C" unsigned long g_0053176c;
BLFurnaceAboutView::~BLFurnaceAboutView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_00531028 + g_005310ac);
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
  func_0079e45c(&uStack_14,&g_0053107a + g_005310b0,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLFurnaceAboutView::BLFurnaceAboutView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = (undefined4)(intptr_t)(*(int *)(g_005311a0 + 0x531130));
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
  func_0079e45c(&uStack_14,((intptr_t)"BLFurnaceAboutView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * BLFurnaceAboutView::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x120)));
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

undefined4 BLFurnaceAboutView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 BLFurnaceAboutView::getBackGround()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

undefined4 BLFurnaceAboutView::getSprBg()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

void BLFurnaceAboutView::onEnter()
{
  ((BLFurnaceAboutPresenter *)*(undefined4 *)(((int)this) + 0x10c))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLFurnaceAboutView::onExit()
{
  ((BLFurnaceAboutPresenter *)*(undefined4 *)(((int)this) + 0x10c))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
bool BLFurnaceAboutView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
