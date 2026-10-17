#include "BLTimeHeroItemPresenter.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLTimeHeroItemView.h"
#include "DataCacheManager.h"
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
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e5dc(...);
extern "C" long long func_0079e874(...);
extern "C" long long func_0079e934(...);
extern "C" long long func_0079e944(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0054a6fc;
extern "C" unsigned long UNK_0054a710;
extern "C" unsigned long UNK_0054a86a;
extern "C" unsigned long UNK_0054a87c;
extern "C" unsigned long UNK_0054a9f6;
extern "C" unsigned long UNK_0054aa0e;
extern "C" unsigned long UNK_0054aab0;
extern "C" unsigned long UNK_0054aac4;
extern "C" unsigned long UNK_0054aade;
extern "C" unsigned long _UNK_0054a740;
extern "C" unsigned long _UNK_0054a744;
extern "C" unsigned long _UNK_0054a8a8;
extern "C" unsigned long _UNK_0054a8ac;
extern "C" unsigned long _UNK_0054ac04;
extern "C" unsigned long _UNK_0054ac08;
extern "C" unsigned long _UNK_0054ac0c;
extern "C" unsigned long _UNK_0054ac10;
extern "C" unsigned long _UNK_0054ac14;
extern "C" unsigned long _UNK_0054ac18;
extern "C" unsigned long _UNK_0054ac1c;
extern "C" unsigned long g_0054a6fc;
extern "C" unsigned long g_0054a710;
extern "C" unsigned long g_0054a740;
extern "C" unsigned long g_0054a744;
extern "C" unsigned long g_0054a86a;
extern "C" unsigned long g_0054a87c;
extern "C" unsigned long g_0054a8a8;
extern "C" unsigned long g_0054a8ac;
extern "C" unsigned long g_0054a9f6;
extern "C" unsigned long g_0054aa0e;
extern "C" unsigned long g_0054aab0;
extern "C" unsigned long g_0054aac4;
extern "C" unsigned long g_0054aade;
extern "C" unsigned long g_0054ac04;
extern "C" unsigned long g_0054ac08;
extern "C" unsigned long g_0054ac0c;
extern "C" unsigned long g_0054ac10;
extern "C" unsigned long g_0054ac14;
extern "C" unsigned long g_0054ac18;
extern "C" unsigned long g_0054ac1c;
void BLTimeHeroItemPresenter::tick(float p1)
{
  return;
}

BLTimeHeroItemPresenter::~BLTimeHeroItemPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int *piStack_18;
  undefined4 uStack_14;
  
  /* VPTR_FIX(R87): vptr=(&g_A+g_B)+8 ?? g_ ?? 0 ?? -> ???? SEGV?????? vptr???? */;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0054a710 + g_0054a744,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLTimeHeroItemPresenter::BLTimeHeroItemPresenter()
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
  func_0079e45c(&uStack_14,&g_0054a87c + g_0054a8ac,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

undefined4 BLTimeHeroItemPresenter::create(BLTimeHeroItemView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x18))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLTimeHeroItemPresenter::onExit()
{
  return;
}

void BLTimeHeroItemPresenter::onEnter()
{
  return;
}

void BLTimeHeroItemPresenter::initWithView(BLTimeHeroItemView* p1)
{
  *(undefined4 *)(((int)this) + 0x14) = (undefined4)(intptr_t)p1;
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
void BLTimeHeroItemPresenter::initWith(int p1, int p2, bool p3)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
