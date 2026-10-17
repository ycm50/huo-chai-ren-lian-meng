#include "BLSuitComposeInfoBasePresenter.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "DataCacheManager.h"
#include "SuitEquipEquipData.h"
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
extern "C" long long func_0079e43c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e46c(...);
extern "C" long long func_0079e47c(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long func_0079e4ec(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long func_0079e5bc(...);
extern "C" long long func_0079e5dc(...);
extern "C" long long func_0079e62c(...);
extern "C" long long func_0079e63c(...);
extern "C" long long func_0079e68c(...);
extern "C" long long func_0079e724(...);
extern "C" long long func_0079e884(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0068a688;
extern "C" unsigned long UNK_0068a69c;
extern "C" unsigned long UNK_0068ac8a;
extern "C" unsigned long UNK_0068ac9c;
extern "C" unsigned long UNK_0068b3ac;
extern "C" unsigned long UNK_0068b3ea;
extern "C" unsigned long UNK_0068b3ec;
extern "C" unsigned long UNK_0068b424;
extern "C" unsigned long UNK_0068b45c;
extern "C" unsigned long UNK_0068b482;
extern "C" unsigned long UNK_0068b4a6;
extern "C" unsigned long UNK_0068b4e2;
extern "C" unsigned long UNK_0068b500;
extern "C" unsigned long _UNK_0068a6cc;
extern "C" unsigned long _UNK_0068a6d0;
extern "C" unsigned long _UNK_0068acc8;
extern "C" unsigned long _UNK_0068accc;
extern "C" unsigned long _UNK_0068b5e0;
extern "C" unsigned long _UNK_0068b5e4;
extern "C" unsigned long _UNK_0068b5e8;
extern "C" unsigned long _UNK_0068b5ec;
extern "C" unsigned long _UNK_0068b5f0;
extern "C" unsigned long _UNK_0068b5f4;
extern "C" unsigned long _UNK_0068b5f8;
extern "C" unsigned long _UNK_0068b5fc;
extern "C" unsigned long _UNK_0068b600;
extern "C" unsigned long _UNK_0068b604;
extern "C" unsigned long _UNK_0068b608;
extern "C" unsigned long _UNK_0068b60c;
extern "C" unsigned long _UNK_0068b610;
extern "C" unsigned long _UNK_0068b614;
extern "C" unsigned long _UNK_0068b618;
extern "C" unsigned long _UNK_0068b61c;
extern "C" unsigned long g_0068a688;
extern "C" unsigned long g_0068a69c;
extern "C" unsigned long g_0068a6cc;
extern "C" unsigned long g_0068a6d0;
extern "C" unsigned long g_0068ac8a;
extern "C" unsigned long g_0068ac9c;
extern "C" unsigned long g_0068acc8;
extern "C" unsigned long g_0068accc;
extern "C" unsigned long g_0068b3ac;
extern "C" unsigned long g_0068b3ea;
extern "C" unsigned long g_0068b3ec;
extern "C" unsigned long g_0068b424;
extern "C" unsigned long g_0068b45c;
extern "C" unsigned long g_0068b482;
extern "C" unsigned long g_0068b4a6;
extern "C" unsigned long g_0068b4e2;
extern "C" unsigned long g_0068b500;
extern "C" unsigned long g_0068b5e0;
extern "C" unsigned long g_0068b5e4;
extern "C" unsigned long g_0068b5e8;
extern "C" unsigned long g_0068b5ec;
extern "C" unsigned long g_0068b5f0;
extern "C" unsigned long g_0068b5f4;
extern "C" unsigned long g_0068b5f8;
extern "C" unsigned long g_0068b5fc;
extern "C" unsigned long g_0068b600;
extern "C" unsigned long g_0068b604;
extern "C" unsigned long g_0068b608;
extern "C" unsigned long g_0068b60c;
extern "C" unsigned long g_0068b610;
extern "C" unsigned long g_0068b614;
extern "C" unsigned long g_0068b618;
extern "C" unsigned long g_0068b61c;
BLSuitComposeInfoBasePresenter::~BLSuitComposeInfoBasePresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int *piStack_18;
  undefined4 uStack_14;
  
  /* VPTR_FIX(R87): vptr=(&g_A+g_B)+8 ?? g_ ?? 0 ?? -> ???? SEGV?????? vptr???? */;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0068a69c + g_0068a6d0,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLSuitComposeInfoBasePresenter::BLSuitComposeInfoBasePresenter()
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
  func_0079e45c(&uStack_14,&g_0068ac9c + g_0068accc,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

undefined4 BLSuitComposeInfoBasePresenter::create()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x1c))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLSuitComposeInfoBasePresenter::initWithView(BLSuitComposeInfoBaseView* p1)
{
  undefined4 uVar1;
  
  *(undefined4 *)(((int)this) + 0x14) = (undefined4)(intptr_t)p1;
  uVar1 = (undefined4)(cocos2d::CCLayer::create());
  *(undefined4 *)(((int)this) + 0x18) = uVar1;
  (**(code **)(**(int **)(((int)this) + 0x14) + 200))(*(int **)(((int)this) + 0x14),uVar1);
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
void BLSuitComposeInfoBasePresenter::initWithData(int p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
