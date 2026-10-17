#include "BLSuitUpGraceListPresenter.h"
#include "CCObject.h"
#include "BLSuitUpGraceListView.h"
#include "BackPackItemData.h"
#include "BLLeakUtils.h"
#include "BLSuitUpGraceItemPresenter.h"
#include "BackPackData.h"
#include "DataManager.h"
#include "SuitEquipUserData.h"
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
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_00690750;
extern "C" unsigned long UNK_00690764;
extern "C" unsigned long UNK_00690e9e;
extern "C" unsigned long UNK_00690ea8;
extern "C" unsigned long UNK_00690ec4;
extern "C" unsigned long _UNK_006907a0;
extern "C" unsigned long _UNK_006907a4;
extern "C" unsigned long _UNK_00690ef8;
extern "C" unsigned long _UNK_00690efc;
extern "C" unsigned long _UNK_00690f00;
extern "C" unsigned long g_00690750;
extern "C" unsigned long g_00690764;
extern "C" unsigned long g_006907a0;
extern "C" unsigned long g_006907a4;
extern "C" unsigned long g_00690e9e;
extern "C" unsigned long g_00690ea8;
extern "C" unsigned long g_00690ec4;
extern "C" unsigned long g_00690ef8;
extern "C" unsigned long g_00690efc;
extern "C" unsigned long g_00690f00;
BackPackItemData* BLSuitUpGraceListPresenter::getBackPackItemData() const
{
  return (BackPackItemData*)(*(undefined4 *)(((int)this) + 0x1c));
}

int BLSuitUpGraceListPresenter::getSelIndex() const
{
  return *(undefined4 *)(((int)this) + 0x20);
}

void BLSuitUpGraceListPresenter::setSelIndex(int p1)
{
  *(undefined4 *)(((int)this) + 0x20) = p1;
  return;
}

BLSuitUpGraceListPresenter::~BLSuitUpGraceListPresenter()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;

  undefined4 uVar1;
  int *piStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  /* VPTR_FIX(R87): vptr=(&g_A+g_B)+8 ?? g_ ?? 0 ?? -> ???? SEGV?????? vptr???? */;
  piStack_20 = (int *)((int)this);
  uStack_1c = (undefined4)(p2);
  uStack_18 = (undefined4)(p3);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_1c,&g_00690764 + g_006907a4,&piStack_20);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_1c);
  func_0079e2bc(&uStack_1c);
  func_0079e2bc(((int)this) + 6);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

undefined4 BLSuitUpGraceListPresenter::getRoleId() const
{
  undefined4 p2 = 0;

  func_0079e53c(((int)this),p2 + 0x18);
  return ((int)this);
}

BLSuitUpGraceListPresenter::BLSuitUpGraceListPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  /* VPTR_FIX(R87): vptr=(&g_A+g_B)+8 ?? g_ ?? 0 ?? -> ???? SEGV?????? vptr???? */;
  *(int *)((int)this + 4*(6)) = *(int *)(&g_00690ea8 + g_00690efc) + 0xc;
  *(int *)((int)this + 4*(7)) = 0;
  *(int *)((int)this + 4*(8)) = -1;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00690ec4 + g_00690f00,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

undefined4 BLSuitUpGraceListPresenter::create()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x24))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLSuitUpGraceListPresenter::onEnter()
{
  return;
}

void BLSuitUpGraceListPresenter::onExit()
{
  return;
}

// ===== 修复: 补回被误删的函数占位 (4) =====
void BLSuitUpGraceListPresenter::setBackPackItemData(BackPackItemData* p1)
{
  *(undefined4 *)(((int)this) + 0x1c) = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  return;
}

void BLSuitUpGraceListPresenter::updateSelIndes(int p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLSuitUpGraceListPresenter::initWithData(std::string p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLSuitUpGraceListPresenter::initWithView(BLSuitUpGraceListView* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
