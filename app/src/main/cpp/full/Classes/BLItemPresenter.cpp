#include "BLItemPresenter.h"
#include "CCObject.h"
#include "BLItemView.h"
#include "BLItemDataInfoPresenter.h"
#include "BLItemDataInfoView.h"
#include "BLLeakUtils.h"
#include "DataCacheManager.h"
#include "UIManager.h"
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
extern "C" long long func_0079e2dc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_005e1cd4;
extern "C" unsigned long UNK_005e1ce8;
extern "C" unsigned long UNK_005e208e;
extern "C" unsigned long UNK_005e20a0;
extern "C" unsigned long UNK_005e211e;
extern "C" unsigned long UNK_005e2baa;
extern "C" unsigned long UNK_005e2c3a;
extern "C" unsigned long _UNK_005e1d18;
extern "C" unsigned long _UNK_005e1d1c;
extern "C" unsigned long _UNK_005e20d0;
extern "C" unsigned long _UNK_005e20d4;
extern "C" unsigned long _UNK_005e2128;
extern "C" unsigned long _UNK_005e2cdc;
extern "C" unsigned long _UNK_005e2ce0;
extern "C" unsigned long _UNK_005e2ce4;
extern "C" unsigned long _UNK_005e2ce8;
extern "C" unsigned long _UNK_005e2cec;
extern "C" unsigned long _UNK_005e2cf0;
extern "C" unsigned long _UNK_005e2cf4;
extern "C" unsigned long g_005e1cd4;
extern "C" unsigned long g_005e1ce8;
extern "C" unsigned long g_005e1d18;
extern "C" unsigned long g_005e1d1c;
extern "C" unsigned long g_005e208e;
extern "C" unsigned long g_005e20a0;
extern "C" unsigned long g_005e20d0;
extern "C" unsigned long g_005e20d4;
extern "C" unsigned long g_005e211e;
extern "C" unsigned long g_005e2128;
extern "C" unsigned long g_005e2baa;
extern "C" unsigned long g_005e2c3a;
extern "C" unsigned long g_005e2cdc;
extern "C" unsigned long g_005e2ce0;
extern "C" unsigned long g_005e2ce4;
extern "C" unsigned long g_005e2ce8;
extern "C" unsigned long g_005e2cec;
extern "C" unsigned long g_005e2cf0;
extern "C" unsigned long g_005e2cf4;
BLItemPresenter::~BLItemPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int *piStack_18;
  undefined4 uStack_14;
  
  /* VPTR_FIX(R87): vptr=(&g_A+g_B)+8 ?? g_ ?? 0 ?? -> ???? SEGV?????? vptr???? */;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005e1ce8 + g_005e1d1c,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLItemPresenter::BLItemPresenter()
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
  func_0079e45c(&uStack_14,&g_005e20a0 + g_005e20d4,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  *(int *)((int)this + 4*(6)) = 0;
  return;
}

undefined4 BLItemPresenter::create()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x1c))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}


void BLItemPresenter::onEnter()
{
  return;
}

void BLItemPresenter::onExit()
{
  return;
}

// ===== 修复: 补回被误删的函数占位 (3) =====
void BLItemPresenter::initWithView(BLItemView* p1)
{
  *(int *)(((int)this) + 0x14) = (undefined4)(intptr_t)p1;
  (**(code **)(**(int **)(p1 + 0x114) + 0x254))
            (*(int **)(p1 + 0x114),((int)this),*(undefined4 *)((unsigned char *)((char *)&g_005e211e + (intptr_t)(g_005e2128))),0,
             0x20);
  return;
}

undefined8 BLItemPresenter::updateWithData(int p1)
{
  undefined4 uVar1;
  int *piVar2;
  int *piVar3;
  code *pcVar4;
  undefined4 uStack_14;
  
  uStack_14 = (undefined4)(p1);
  uVar1 = (undefined4)(((DataCacheManager *)this)->shareManager());
  piVar2 = ((void)((DataCacheManager *)(uVar1))->getItemDataByID(p1),(int *)0);
  if (piVar2 != (int *)0x0) {
    *(undefined4 *)(((int)this) + 0x18) = p1;
    piVar3 = *(int **)(*(int *)(((int)this) + 0x14) + 0x10c);
    pcVar4 = *(code **)(*piVar3 + 0x20c);
    (**(code **)(*(int *)(piVar2) + (0x58)))(&uStack_14);
    piVar2 = (int *)0 /* ctorZero */;
    uVar1 = (undefined4)((**(code **)(*(int *)(piVar2) + (0x214)))());
    (*pcVar4)(piVar3,uVar1);
    func_0079e2bc(&uStack_14);
  }
  return ghidra_CONCAT44(uStack_14,((int)this));
}

void BLItemPresenter::onClick(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
