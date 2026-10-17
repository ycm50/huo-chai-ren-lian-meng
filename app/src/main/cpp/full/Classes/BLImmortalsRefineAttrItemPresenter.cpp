#include "BLImmortalsRefineAttrItemPresenter.h"
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
extern "C" long long func_0079e2ec(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long func_0079e63c(...);
extern "C" long long func_0079e69c(...);
extern "C" long long func_0079e724(...);
extern "C" long long func_0079e734(...);
extern "C" long long func_0079e854(...);
extern "C" long long func_0079e874(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0056cbb0;
extern "C" unsigned long UNK_0056cbc4;
extern "C" unsigned long UNK_0056ce86;
extern "C" unsigned long UNK_0056ce98;
extern "C" unsigned long UNK_0056db6a;
extern "C" unsigned long UNK_0056db8c;
extern "C" unsigned long UNK_0056dbae;
extern "C" unsigned long UNK_0056dbba;
extern "C" unsigned long UNK_0056dbe8;
extern "C" unsigned long UNK_0056dc16;
extern "C" unsigned long UNK_0056dc62;
extern "C" unsigned long UNK_0056dd12;
extern "C" unsigned long _UNK_0056cbf4;
extern "C" unsigned long _UNK_0056cbf8;
extern "C" unsigned long _UNK_0056cec4;
extern "C" unsigned long _UNK_0056cec8;
extern "C" unsigned long _UNK_0056ddf0;
extern "C" unsigned long _UNK_0056ddf4;
extern "C" unsigned long _UNK_0056ddf8;
extern "C" unsigned long _UNK_0056ddfc;
extern "C" unsigned long _UNK_0056de00;
extern "C" unsigned long _UNK_0056de04;
extern "C" unsigned long _UNK_0056de08;
extern "C" unsigned long _UNK_0056de0c;
extern "C" unsigned long _UNK_0056de10;
extern "C" unsigned long _UNK_0056de14;
extern "C" unsigned long _UNK_0056de18;
extern "C" unsigned long _UNK_0056de1c;
extern "C" unsigned long _UNK_0056de20;
extern "C" unsigned long g_0056cbb0;
extern "C" unsigned long g_0056cbc4;
extern "C" unsigned long g_0056cbf4;
extern "C" unsigned long g_0056cbf8;
extern "C" unsigned long g_0056ce86;
extern "C" unsigned long g_0056ce98;
extern "C" unsigned long g_0056cec4;
extern "C" unsigned long g_0056cec8;
extern "C" unsigned long g_0056db6a;
extern "C" unsigned long g_0056db8c;
extern "C" unsigned long g_0056dbae;
extern "C" unsigned long g_0056dbba;
extern "C" unsigned long g_0056dbe8;
extern "C" unsigned long g_0056dc16;
extern "C" unsigned long g_0056dc62;
extern "C" unsigned long g_0056dd12;
extern "C" unsigned long g_0056ddf0;
extern "C" unsigned long g_0056ddf4;
extern "C" unsigned long g_0056ddf8;
extern "C" unsigned long g_0056ddfc;
extern "C" unsigned long g_0056de00;
extern "C" unsigned long g_0056de04;
extern "C" unsigned long g_0056de08;
extern "C" unsigned long g_0056de0c;
extern "C" unsigned long g_0056de10;
extern "C" unsigned long g_0056de14;
extern "C" unsigned long g_0056de18;
extern "C" unsigned long g_0056de1c;
extern "C" unsigned long g_0056de20;
BLImmortalsRefineAttrItemPresenter::~BLImmortalsRefineAttrItemPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int *piStack_18;
  undefined4 uStack_14;
  
  /* VPTR_FIX(R87): vptr=(&g_A+g_B)+8 ?? g_ ?? 0 ?? -> ???? SEGV?????? vptr???? */;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0056cbc4 + g_0056cbf8,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLImmortalsRefineAttrItemPresenter::BLImmortalsRefineAttrItemPresenter()
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
  func_0079e45c(&uStack_14,&g_0056ce98 + g_0056cec8,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

undefined4 BLImmortalsRefineAttrItemPresenter::create()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x18))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

// ===== 修复: 补回被误删的函数占位 (2) =====

void BLImmortalsRefineAttrItemPresenter::updateWithData(ImmortalsRoleItemData* p1, int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
