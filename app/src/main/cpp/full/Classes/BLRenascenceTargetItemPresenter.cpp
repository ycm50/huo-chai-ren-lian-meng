#include "BLRenascenceTargetItemPresenter.h"
#include "CCObject.h"
#include "BLRenascenceTargetItemView.h"
#include "CCString.h"
#include "BLLeakUtils.h"
#include "BackPackData.h"
#include "DataCacheManager.h"
#include "DataManager.h"
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
extern "C" long long func_0079e864(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0064d8c4;
extern "C" unsigned long UNK_0064d8d8;
extern "C" unsigned long UNK_0064daca;
extern "C" unsigned long UNK_0064dadc;
extern "C" unsigned long UNK_0064dbb4;
extern "C" unsigned long UNK_0064dbe6;
extern "C" unsigned long UNK_0064dc10;
extern "C" unsigned long UNK_0064dc16;
extern "C" unsigned long UNK_0064dcd2;
extern "C" unsigned long UNK_0064dcde;
extern "C" unsigned long UNK_0064dcea;
extern "C" unsigned long UNK_0064dcec;
extern "C" unsigned long UNK_0064dcee;
extern "C" unsigned long UNK_0064dd06;
extern "C" unsigned long UNK_0064dd5e;
extern "C" unsigned long UNK_0064dd8c;
extern "C" unsigned long UNK_0064dd92;
extern "C" unsigned long _UNK_0064d908;
extern "C" unsigned long _UNK_0064d90c;
extern "C" unsigned long _UNK_0064db08;
extern "C" unsigned long _UNK_0064db0c;
extern "C" unsigned long _UNK_0064dca0;
extern "C" unsigned long _UNK_0064dca4;
extern "C" unsigned long _UNK_0064dca8;
extern "C" unsigned long _UNK_0064dcac;
extern "C" unsigned long _UNK_0064de20;
extern "C" unsigned long _UNK_0064de24;
extern "C" unsigned long _UNK_0064de28;
extern "C" unsigned long _UNK_0064de2c;
extern "C" unsigned long _UNK_0064de30;
extern "C" unsigned long _UNK_0064de34;
extern "C" unsigned long _UNK_0064de38;
extern "C" unsigned long _UNK_0064de3c;
extern "C" unsigned long _UNK_0064de40;
extern "C" unsigned long g_0064d8c4;
extern "C" unsigned long g_0064d8d8;
extern "C" unsigned long g_0064d908;
extern "C" unsigned long g_0064d90c;
extern "C" unsigned long g_0064daca;
extern "C" unsigned long g_0064dadc;
extern "C" unsigned long g_0064db08;
extern "C" unsigned long g_0064db0c;
extern "C" unsigned long g_0064dbb4;
extern "C" unsigned long g_0064dbe6;
extern "C" unsigned long g_0064dc10;
extern "C" unsigned long g_0064dc16;
extern "C" unsigned long g_0064dca0;
extern "C" unsigned long g_0064dca4;
extern "C" unsigned long g_0064dca8;
extern "C" unsigned long g_0064dcac;
extern "C" unsigned long g_0064dcd2;
extern "C" unsigned long g_0064dcde;
extern "C" unsigned long g_0064dcea;
extern "C" unsigned long g_0064dcec;
extern "C" unsigned long g_0064dcee;
extern "C" unsigned long g_0064dd06;
extern "C" unsigned long g_0064dd5e;
extern "C" unsigned long g_0064dd8c;
extern "C" unsigned long g_0064dd92;
extern "C" unsigned long g_0064de20;
extern "C" unsigned long g_0064de24;
extern "C" unsigned long g_0064de28;
extern "C" unsigned long g_0064de2c;
extern "C" unsigned long g_0064de30;
extern "C" unsigned long g_0064de34;
extern "C" unsigned long g_0064de38;
extern "C" unsigned long g_0064de3c;
extern "C" unsigned long g_0064de40;
BLRenascenceTargetItemPresenter::~BLRenascenceTargetItemPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int *piStack_18;
  undefined4 uStack_14;
  
  /* VPTR_FIX(R87): vptr=(&g_A+g_B)+8 ?? g_ ?? 0 ?? -> ???? SEGV?????? vptr???? */;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0064d8d8 + g_0064d90c,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLRenascenceTargetItemPresenter::BLRenascenceTargetItemPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  /* VPTR_FIX(R87): vptr=(&g_A+g_B)+8 ?? g_ ?? 0 ?? -> ???? SEGV?????? vptr???? */;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0064dadc + g_0064db0c,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

undefined4 BLRenascenceTargetItemPresenter::create()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x18))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLRenascenceTargetItemPresenter::onEnter()
{
  return;
}

void BLRenascenceTargetItemPresenter::onExit()
{
  return;
}

// ===== 修复: 补回被误删的函数占位 (5) =====
void BLRenascenceTargetItemPresenter::initWithView(BLRenascenceTargetItemView* p1)
{
  *(undefined4 *)(((int)this) + 0x14) = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  return;
}

void BLRenascenceTargetItemPresenter::updateVisible(bool p1)
{
  undefined4 p4 = 0;

  int *piVar1;
  undefined4 extraout_r2;
  code *pcVar2;
  
  (**(code **)(**(int **)(*(int *)(((int)this) + 0x14) + 0x10c) + 0x90))();
  piVar1 = *(int **)(*(int *)(((int)this) + 0x14) + 0x110);
  pcVar2 = *(code **)(*piVar1 + 0x90);
  (*pcVar2)(piVar1,p1,extraout_r2,pcVar2,p4);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x14) + 0x11c);
  (**(code **)(*(int *)(piVar1) + (0x90)))(piVar1,p1);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x14) + 0x120);
  (**(code **)(*(int *)(piVar1) + (0x90)))(piVar1,p1);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x14) + 0x124);
  (**(code **)(*(int *)(piVar1) + (0x90)))(piVar1,p1 ^ 1);
  return;
}

void BLRenascenceTargetItemPresenter::updateWithTopLv()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLRenascenceTargetItemPresenter::updateWithLVData(int p1, int p2)
{
  undefined4 uVar1;
  int *piVar2;
  undefined *puVar3;
  undefined1 uStack_28;
  undefined1 uStack_27;
  undefined1 uStack_26;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 auStack_1c [2];
  
  BLRenascenceTargetItemPresenter::updateVisible(1);
  cocos2d::CCString::createWithFormat((char const*)(unsigned char *)((char *)&g_0064dbb4 + (intptr_t)(g_0064dca0)), p2);
  uVar1 = (undefined4)(((cocos2d::CCString *)this)->getCString());
  func_0079e45c(&uStack_24,uVar1,auStack_1c);
  piVar2 = *(int **)(*(int *)(((int)this) + 0x14) + 0x10c);
  (**(code **)(*piVar2 + 0x234))(piVar2,uStack_24);
  cocos2d::CCString::createWithFormat((char const*)(unsigned char *)((char *)&g_0064dbe6 + (intptr_t)(g_0064dca4)), p1, p2);
  uVar1 = (undefined4)(((cocos2d::CCString *)this)->getCString());
  func_0079e45c(&uStack_20,uVar1,auStack_1c);
  piVar2 = *(int **)(*(int *)(((int)this) + 0x14) + 0x120);
  (**(code **)(*piVar2 + 0x234))(piVar2,uStack_20);
  if (p1 < p2) {
    puVar3 = (unsigned char *)((char *)&g_0064dc10 + (intptr_t)(g_0064dca8));
  }
  else {
    puVar3 = (unsigned char *)((char *)&g_0064dc16 + (intptr_t)(g_0064dcac));
  }
  func_0079e45c(auStack_1c,puVar3,&uStack_28);
  piVar2 = *(int **)(*(int *)(((int)this) + 0x14) + 0x110);
  (**(code **)(*piVar2 + 0x234))(piVar2,auStack_1c[0]);
  if (p1 < p2) {
    uStack_27 = 0;
    uStack_28 = 0xcc;
    uStack_26 = 0;
  }
  else {
    uStack_28 = 0;
    uStack_27 = 0xe9;
    uStack_26 = 0x17;
  }
  piVar2 = *(int **)(*(int *)(((int)this) + 0x14) + 0x110);
  (**(code **)(*piVar2 + 0x1b4))(piVar2,&uStack_28);
  piVar2 = *(int **)(*(int *)(((int)this) + 0x14) + 0x120);
  (**(code **)(*piVar2 + 0x1b4))(piVar2,&uStack_28);
  func_0079e2bc(auStack_1c);
  func_0079e2bc(&uStack_20);
  func_0079e2bc(&uStack_24);
  return;
}

void BLRenascenceTargetItemPresenter::updateWithConsumeData(ConsumeItemData* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
