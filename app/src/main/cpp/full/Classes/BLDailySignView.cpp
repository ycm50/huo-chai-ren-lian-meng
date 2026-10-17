#include "BLDailySignView.h"
#include "BLDailySignPresenter.h"
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
extern "C" unsigned long UNK_00525a3c;
extern "C" unsigned long UNK_00525a80;
extern "C" unsigned long UNK_00525ac4;
extern "C" unsigned long UNK_00525aec;
extern "C" unsigned long UNK_00525ccc;
extern "C" unsigned long UNK_00525db2;
extern "C" unsigned long UNK_00525eac;
extern "C" unsigned long UNK_00525eda;
extern "C" unsigned long UNK_00525f9c;
extern "C" unsigned long UNK_00525fb6;
extern "C" unsigned long UNK_005260f8;
extern "C" unsigned long UNK_00526122;
extern "C" unsigned long _DAT_00525b8c;
extern "C" unsigned long _DAT_00525b90;
extern "C" unsigned long _UNK_00525ab0;
extern "C" unsigned long _UNK_00525ab4;
extern "C" unsigned long _UNK_00525ac8;
extern "C" unsigned long _UNK_00525af0;
extern "C" unsigned long _UNK_005260b0;
extern "C" unsigned long _UNK_005260b4;
extern "C" unsigned long _UNK_005260b8;
extern "C" unsigned long _UNK_005260bc;
extern "C" unsigned long _UNK_005260c0;
extern "C" unsigned long _UNK_005260c4;
extern "C" unsigned long _UNK_005260c8;
extern "C" unsigned long _UNK_005260cc;
extern "C" unsigned long _UNK_005260d0;
extern "C" unsigned long _UNK_005260d4;
extern "C" unsigned long _UNK_005260d8;
extern "C" unsigned long _UNK_005260dc;
extern "C" unsigned long _UNK_005260e0;
extern "C" unsigned long _UNK_005260e4;
extern "C" unsigned long _UNK_005260e8;
extern "C" unsigned long _UNK_005260ec;
extern "C" unsigned long _UNK_005260f0;
extern "C" unsigned long _UNK_00526358;
extern "C" unsigned long _UNK_0052635c;
extern "C" unsigned long _UNK_00526360;
extern "C" unsigned long _UNK_00526364;
extern "C" unsigned long _UNK_00526368;
extern "C" unsigned long _UNK_0052636c;
extern "C" unsigned long _UNK_00526370;
extern "C" unsigned long _UNK_00526374;
extern "C" unsigned long _UNK_00526378;
extern "C" unsigned long _UNK_0052637c;
extern "C" unsigned long g_00525a3c;
extern "C" unsigned long g_00525a80;
extern "C" unsigned long g_00525ab0;
extern "C" unsigned long g_00525ab4;
extern "C" unsigned long g_00525ac4;
extern "C" unsigned long g_00525ac8;
extern "C" unsigned long g_00525aec;
extern "C" unsigned long g_00525af0;
extern "C" unsigned long g_00525b8c;
extern "C" unsigned long g_00525b90;
extern "C" unsigned long g_00525ccc;
extern "C" unsigned long g_00525db2;
extern "C" unsigned long g_00525eac;
extern "C" unsigned long g_00525eda;
extern "C" unsigned long g_00525f9c;
extern "C" unsigned long g_00525fb6;
extern "C" unsigned long g_005260b0;
extern "C" unsigned long g_005260b4;
extern "C" unsigned long g_005260b8;
extern "C" unsigned long g_005260bc;
extern "C" unsigned long g_005260c0;
extern "C" unsigned long g_005260c4;
extern "C" unsigned long g_005260c8;
extern "C" unsigned long g_005260cc;
extern "C" unsigned long g_005260d0;
extern "C" unsigned long g_005260d4;
extern "C" unsigned long g_005260d8;
extern "C" unsigned long g_005260dc;
extern "C" unsigned long g_005260e0;
extern "C" unsigned long g_005260e4;
extern "C" unsigned long g_005260e8;
extern "C" unsigned long g_005260ec;
extern "C" unsigned long g_005260f0;
extern "C" unsigned long g_005260f8;
extern "C" unsigned long g_00526122;
extern "C" unsigned long g_00526358;
extern "C" unsigned long g_0052635c;
extern "C" unsigned long g_00526360;
extern "C" unsigned long g_00526364;
extern "C" unsigned long g_00526368;
extern "C" unsigned long g_0052636c;
extern "C" unsigned long g_00526370;
extern "C" unsigned long g_00526374;
extern "C" unsigned long g_00526378;
extern "C" unsigned long g_0052637c;
BLDailySignView::~BLDailySignView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_00525a3c + g_00525ab0);
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
  func_0079e45c(&uStack_14,&g_00525a80 + g_00525ab4,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLDailySignView::BLDailySignView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(g_00525b8c + 0x525b34);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLDailySignView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * BLDailySignView::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x150)));
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

undefined4 BLDailySignView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x108);
}

undefined4 BLDailySignView::getBackGround()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 BLDailySignView::getSprBg()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

undefined4 BLDailySignView::getbtnRight()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

undefined4 BLDailySignView::getBtnLeft()
{
  return *(undefined4 *)(((int)this) + 0x118);
}

undefined4 BLDailySignView::getTableView()
{
  return *(undefined4 *)(((int)this) + 0x11c);
}

undefined4 BLDailySignView::getTabBg()
{
  return *(undefined4 *)(((int)this) + 0x120);
}

undefined4 BLDailySignView::getLabTitle()
{
  return *(undefined4 *)(((int)this) + 0x124);
}

undefined4 BLDailySignView::getBtnClose()
{
  return *(undefined4 *)(((int)this) + 0x128);
}

undefined4 BLDailySignView::getLabRoleLimit()
{
  return *(undefined4 *)(((int)this) + 300);
}

undefined4 BLDailySignView::getBtnCancle()
{
  return *(undefined4 *)(((int)this) + 0x130);
}

undefined4 BLDailySignView::getLabCancle()
{
  return *(undefined4 *)(((int)this) + 0x134);
}

undefined4 BLDailySignView::getBtnSure()
{
  return *(undefined4 *)(((int)this) + 0x138);
}

undefined4 BLDailySignView::getLabSure()
{
  return *(undefined4 *)(((int)this) + 0x13c);
}

undefined4 BLDailySignView::getm_pleft()
{
  return *(undefined4 *)(((int)this) + 0x148);
}

undefined4 BLDailySignView::getm_pright()
{
  return *(undefined4 *)(((int)this) + 0x14c);
}

undefined4 BLDailySignView::getLabPlayTitle()
{
  return *(undefined4 *)(((int)this) + 0x140);
}

void BLDailySignView::onEnter()
{
  ((BLDailySignPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLDailySignView::onExit()
{
  ((BLDailySignPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
bool BLDailySignView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
