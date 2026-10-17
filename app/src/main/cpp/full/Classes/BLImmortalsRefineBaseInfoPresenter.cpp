#include "BLImmortalsRefineBaseInfoPresenter.h"
#include "BLImmortalsItemPresenter.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "DataCacheManager.h"
#include "ImmortalsInfoData.h"
#include "ImmortalsInfoItemData.h"
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
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e5dc(...);
extern "C" long long func_0079e63c(...);
extern "C" long long func_0079e69c(...);
extern "C" long long func_0079e724(...);
extern "C" long long func_0079e734(...);
extern "C" long long func_0079e854(...);
extern "C" long long func_0079e874(...);
extern "C" long long func_0079e934(...);
extern "C" long long func_0079e944(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0056cb5c;
extern "C" unsigned long UNK_0056cb70;
extern "C" unsigned long UNK_0056ce0a;
extern "C" unsigned long UNK_0056ce1c;
extern "C" unsigned long UNK_0056d926;
extern "C" unsigned long UNK_0056d93e;
extern "C" unsigned long UNK_0056d9b8;
extern "C" unsigned long UNK_0056da34;
extern "C" unsigned long UNK_0056da5a;
extern "C" unsigned long UNK_0056da96;
extern "C" unsigned long _UNK_0056cba0;
extern "C" unsigned long _UNK_0056cba4;
extern "C" unsigned long _UNK_0056ce48;
extern "C" unsigned long _UNK_0056ce4c;
extern "C" unsigned long _UNK_0056daf8;
extern "C" unsigned long _UNK_0056dafc;
extern "C" unsigned long _UNK_0056db00;
extern "C" unsigned long _UNK_0056db04;
extern "C" unsigned long _UNK_0056db08;
extern "C" unsigned long _UNK_0056db0c;
extern "C" unsigned long _UNK_0056db10;
extern "C" unsigned long _UNK_0056db14;
extern "C" unsigned long _UNK_0056db18;
extern "C" unsigned long _UNK_0056db1c;
extern "C" unsigned long g_0056cb5c;
extern "C" unsigned long g_0056cb70;
extern "C" unsigned long g_0056cba0;
extern "C" unsigned long g_0056cba4;
extern "C" unsigned long g_0056ce0a;
extern "C" unsigned long g_0056ce1c;
extern "C" unsigned long g_0056ce48;
extern "C" unsigned long g_0056ce4c;
extern "C" unsigned long g_0056d926;
extern "C" unsigned long g_0056d93e;
extern "C" unsigned long g_0056d9b8;
extern "C" unsigned long g_0056da34;
extern "C" unsigned long g_0056da5a;
extern "C" unsigned long g_0056da96;
extern "C" unsigned long g_0056daf8;
extern "C" unsigned long g_0056dafc;
extern "C" unsigned long g_0056db00;
extern "C" unsigned long g_0056db04;
extern "C" unsigned long g_0056db08;
extern "C" unsigned long g_0056db0c;
extern "C" unsigned long g_0056db10;
extern "C" unsigned long g_0056db14;
extern "C" unsigned long g_0056db18;
extern "C" unsigned long g_0056db1c;
BLImmortalsRefineBaseInfoPresenter::~BLImmortalsRefineBaseInfoPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int *piStack_18;
  undefined4 uStack_14;
  
  /* VPTR_FIX(R87): vptr=(&g_A+g_B)+8 ?? g_ ?? 0 ?? -> ???? SEGV?????? vptr???? */;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0056cb70 + g_0056cba4,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLImmortalsRefineBaseInfoPresenter::BLImmortalsRefineBaseInfoPresenter()
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
  func_0079e45c(&uStack_14,&g_0056ce1c + g_0056ce4c,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

undefined4 BLImmortalsRefineBaseInfoPresenter::create()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x1c))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

// ===== 修复: 补回被误删的函数占位 (2) =====

void BLImmortalsRefineBaseInfoPresenter::updateWithData(ImmortalsRoleItemData* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
