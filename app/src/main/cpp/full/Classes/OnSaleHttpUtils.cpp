#include "OnSaleHttpUtils.h"
#include "CCString.h"
#include "BLGameScene.h"
#include "StringJsonManager.h"
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
extern "C" long long func_0079e5ac(...);
extern "C" long long func_0079e5cc(...);
extern "C" long long func_0079e61c(...);
extern "C" long long func_0079e68c(...);
extern "C" long long func_0079e954(...);
extern "C" long long func_0079eb64(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long _DAT_0049a608;
extern "C" unsigned long _DAT_0049a668;
extern "C" unsigned long _DAT_0049a990;
extern "C" unsigned long _DAT_0049a994;
extern "C" unsigned long _DAT_0049a998;
extern "C" unsigned long g_0049a608;
extern "C" unsigned long g_0049a668;
extern "C" unsigned long g_0049a990;
extern "C" unsigned long g_0049a994;
extern "C" unsigned long g_0049a998;
OnSaleHttpUtils::OnSaleHttpUtils()
{
  return;
}

OnSaleHttpUtils::~OnSaleHttpUtils()
{
  return;
}

int OnSaleHttpUtils::getInstance()
{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)(g_0049a608 + 0x49a5e0);
  if (*piVar2 == 0) {
    iVar1 = ((long long)::operator new((size_t)(1)));
    0 /* ctorZero */;
    *piVar2 = iVar1;
  }
  return *piVar2;
}


int OnSaleHttpUtils::getDataFromNet()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
void OnSaleHttpUtils::initWithFormatAndValist(char const* p1, __builtin_va_list * p2)
{
  int iVar1;
  int iVar2;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  uStack_20 = (undefined4)((int *)((int)this));
  uStack_1c = (undefined4)(p1);
  uStack_18 = (undefined4)(p2);
  func_0079e45c(&uStack_1c,g_0049a668 + 0x49a61c,&uStack_20);
  iVar1 = (undefined4)(intptr_t)(cocos2d::CCString::create(*(std::string const*)&uStack_1c));
  func_0079e2bc(&uStack_1c);
  iVar2 = (undefined4)(intptr_t)(func_0079e61c(0x19000));
  if (iVar2 != 0) {
    func_0079eb64(iVar2,0x19000,p1,p2);
    func_0079e2dc(iVar1 + 0x14,iVar2);
    func_0079e5cc(iVar2);
  }
  return;
}
