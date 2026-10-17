#include "BLSuitComposeInfoEffectPresenter.h"
#include "BLLeakUtils.h"
#include "BLRichText.h"
#include "DataCacheManager.h"
#include "RichTextData.h"
#include "SuitEquipData.h"
#include "SuitEquipEquipData.h"
#include "SuitEquipItemData.h"
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
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long func_0079e5fc(...);
extern "C" long long func_0079e62c(...);
extern "C" long long func_0079e724(...);
extern "C" long long func_0079e784(...);
extern "C" long long func_0079e7e4(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0068a6dc;
extern "C" unsigned long UNK_0068a6f0;
extern "C" unsigned long UNK_0068ad1a;
extern "C" unsigned long UNK_0068ad2c;
extern "C" unsigned long UNK_0068adf2;
extern "C" unsigned long UNK_0068b724;
extern "C" unsigned long UNK_0068b73a;
extern "C" unsigned long UNK_0068b756;
extern "C" unsigned long UNK_0068b7d4;
extern "C" unsigned long UNK_0068b86c;
extern "C" unsigned long UNK_0068b89c;
extern "C" unsigned long UNK_0068b8be;
extern "C" unsigned long UNK_0068b8da;
extern "C" unsigned long UNK_0068b944;
extern "C" unsigned long UNK_0068b9da;
extern "C" unsigned long _UNK_0068a720;
extern "C" unsigned long _UNK_0068a724;
extern "C" unsigned long _UNK_0068ad58;
extern "C" unsigned long _UNK_0068ad5c;
extern "C" unsigned long _UNK_0068ae48;
extern "C" unsigned long _UNK_0068ba78;
extern "C" unsigned long _UNK_0068ba7c;
extern "C" unsigned long _UNK_0068ba80;
extern "C" unsigned long _UNK_0068ba84;
extern "C" unsigned long _UNK_0068ba88;
extern "C" unsigned long _UNK_0068ba8c;
extern "C" unsigned long _UNK_0068ba90;
extern "C" unsigned long _UNK_0068ba94;
extern "C" unsigned long _UNK_0068ba98;
extern "C" unsigned long _UNK_0068ba9c;
extern "C" unsigned long _UNK_0068baa0;
extern "C" unsigned long _UNK_0068baa4;
extern "C" unsigned long g_0068a6dc;
extern "C" unsigned long g_0068a6f0;
extern "C" unsigned long g_0068a720;
extern "C" unsigned long g_0068a724;
extern "C" unsigned long g_0068ad1a;
extern "C" unsigned long g_0068ad2c;
extern "C" unsigned long g_0068ad58;
extern "C" unsigned long g_0068ad5c;
extern "C" unsigned long g_0068adf2;
extern "C" unsigned long g_0068ae48;
extern "C" unsigned long g_0068b724;
extern "C" unsigned long g_0068b73a;
extern "C" unsigned long g_0068b756;
extern "C" unsigned long g_0068b7d4;
extern "C" unsigned long g_0068b86c;
extern "C" unsigned long g_0068b89c;
extern "C" unsigned long g_0068b8be;
extern "C" unsigned long g_0068b8da;
extern "C" unsigned long g_0068b944;
extern "C" unsigned long g_0068b9da;
extern "C" unsigned long g_0068ba78;
extern "C" unsigned long g_0068ba7c;
extern "C" unsigned long g_0068ba80;
extern "C" unsigned long g_0068ba84;
extern "C" unsigned long g_0068ba88;
extern "C" unsigned long g_0068ba8c;
extern "C" unsigned long g_0068ba90;
extern "C" unsigned long g_0068ba94;
extern "C" unsigned long g_0068ba98;
extern "C" unsigned long g_0068ba9c;
extern "C" unsigned long g_0068baa0;
extern "C" unsigned long g_0068baa4;
BLSuitComposeInfoEffectPresenter::~BLSuitComposeInfoEffectPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int *piStack_18;
  undefined4 uStack_14;
  
  /* VPTR_FIX(R87): vptr=(&g_A+g_B)+8 ?? g_ ?? 0 ?? -> ???? SEGV?????? vptr???? */;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0068a6f0 + g_0068a724,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLSuitComposeInfoEffectPresenter::BLSuitComposeInfoEffectPresenter()
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
  func_0079e45c(&uStack_14,&g_0068ad2c + g_0068ad5c,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

undefined4 BLSuitComposeInfoEffectPresenter::create()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x1c))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLSuitComposeInfoEffectPresenter::initWithView(BLSuitComposeInfoEffectView* p1)
{
  undefined4 uVar1;
  
  *(undefined4 *)(((int)this) + 0x14) = (undefined4)(intptr_t)p1;
  uVar1 = (undefined4)(cocos2d::CCLayer::create());
  *(undefined4 *)(((int)this) + 0x18) = uVar1;
  (**(code **)(**(int **)(((int)this) + 0x14) + 200))(*(int **)(((int)this) + 0x14),uVar1);
  return;
}

// ===== 修复: 补回被误删的函数占位 (2) =====
void BLSuitComposeInfoEffectPresenter::initTitText(std::vector<std::string, std::allocator<std::string>> * p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLSuitComposeInfoEffectPresenter::initWithData(int p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
