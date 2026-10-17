#include "BLTalentInfoItemPresenter.h"
#include "BLLeakUtils.h"
#include "BLTalentInfoItemView.h"
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
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0069f29c;
extern "C" unsigned long UNK_0069f2b0;
extern "C" unsigned long UNK_0069f436;
extern "C" unsigned long UNK_0069f448;
extern "C" unsigned long UNK_0069f4b8;
extern "C" unsigned long UNK_0069f4c8;
extern "C" unsigned long _UNK_0069f2e0;
extern "C" unsigned long _UNK_0069f2e4;
extern "C" unsigned long _UNK_0069f474;
extern "C" unsigned long _UNK_0069f478;
extern "C" unsigned long _UNK_0069f504;
extern "C" unsigned long _UNK_0069f508;
extern "C" unsigned long g_0069f29c;
extern "C" unsigned long g_0069f2b0;
extern "C" unsigned long g_0069f2e0;
extern "C" unsigned long g_0069f2e4;
extern "C" unsigned long g_0069f436;
extern "C" unsigned long g_0069f448;
extern "C" unsigned long g_0069f474;
extern "C" unsigned long g_0069f478;
extern "C" unsigned long g_0069f4b8;
extern "C" unsigned long g_0069f4c8;
extern "C" unsigned long g_0069f504;
extern "C" unsigned long g_0069f508;
BLTalentInfoItemPresenter::~BLTalentInfoItemPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int *piStack_18;
  undefined4 uStack_14;
  
  /* VPTR_FIX(R87): vptr=(&g_A+g_B)+8 ?? g_ ?? 0 ?? -> ???? SEGV?????? vptr???? */;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0069f2b0 + g_0069f2e4,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLTalentInfoItemPresenter::BLTalentInfoItemPresenter()
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
  func_0079e45c(&uStack_14,&g_0069f448 + g_0069f478,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

undefined4 BLTalentInfoItemPresenter::create()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x18))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLTalentInfoItemPresenter::initWithView(BLTalentInfoItemView* p1)
{
  *(undefined4 *)(((int)this) + 0x14) = (undefined4)(intptr_t)p1;
  return;
}


void BLTalentInfoItemPresenter::onEnter()
{
  return;
}

void BLTalentInfoItemPresenter::onExit()
{
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
void BLTalentInfoItemPresenter::initWithData(mcondition p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
