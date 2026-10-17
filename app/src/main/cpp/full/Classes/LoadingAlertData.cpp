#include "LoadingAlertData.h"
#include "GnuString.h"
#include "CCObject.h"
#include "CCArray.h"
#include "BLLeakUtils.h"
#include "DataManager.h"
#include "LoadingAlertItemData.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
using namespace cocos2d;
// 兜底声明
struct sqlite3;
extern "C" {
  int  sqlite3_open(...);
  int  sqlite3_close(...);
  int  sqlite3_get_table(...);
  void sqlite3_free_table(...);
  int  sqlite3_rekey(...);
  long long sqlite3_last_insert_rowid(...);
}
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long _DAT_0049d2e0;
extern "C" unsigned long _DAT_0049d2e4;
extern "C" unsigned long _DAT_0049d3ac;
extern "C" unsigned long _DAT_0049d3b0;
extern "C" unsigned long _DAT_0049d490;
extern "C" unsigned long _DAT_0049d494;
extern "C" unsigned long g_0049d2e0;
extern "C" unsigned long g_0049d2e4;
extern "C" unsigned long g_0049d3ac;
extern "C" unsigned long g_0049d3b0;
extern "C" unsigned long g_0049d490;
extern "C" unsigned long g_0049d494;
cocos2d::CCArray* LoadingAlertData::getArrayAlerts() const
{
  return (cocos2d::CCArray*)(*(undefined4 *)(((int)this) + 0x14));
}

void LoadingAlertData::setArrayAlerts(cocos2d::CCArray* p1)
{
  *(undefined4 *)(((int)this) + 0x14) = (undefined4)(intptr_t)p1;
  return;
}

LoadingAlertData::~LoadingAlertData()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int *piStack_18;
  undefined4 uStack_14;
  
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  if (*(int *)((int)this + 4*(5)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(5)) = 0;
  }
  /* STUB_STR_FIX (R73)：gnustl string 桩原为空实现；即便现在桩已实现为 GnuString，
     这里`(GnuString)(char*)uStack_14` 仍是**另一次拷贝构造**（多一次分配/泄漏）。
     原版语义就是"把字面量包成字符串传给 removeClass"，故直接用具名 libstdc++/libc++ 字符串。 */
  BLLeakUtils *pLeakUtils = (BLLeakUtils *)(intptr_t)((BLLeakUtils *)this)->share();
  pLeakUtils->removeClass(std::string("LoadingAlertData"));
  /* 原为显式调用基类析构 `->~CCObject();` —— 编译器会自动调，显式再调 = 双重析构，故略过。 */
  return;
}

// ===== 修复: 补回被误删的函数占位 (2) =====
LoadingAlertData::LoadingAlertData()
{
  undefined4 p2 = 0;

  int iVar1;
  undefined4 uVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  iVar1 = (undefined4)(intptr_t)(cocos2d::CCArray::create());
  *(int *)((int)this + 4*(5)) = iVar1;
  if (iVar1 != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  /* STUB_STR_FIX (R73)：同上，改为具名字符串 */
  BLLeakUtils *pLeakUtils = (BLLeakUtils *)(intptr_t)((BLLeakUtils *)this)->share();
  pLeakUtils->addClass(std::string("LoadingAlertData"));
  return;
}

bool LoadingAlertData::init()
{
  /* PLACEHOLDER_FIX (R73)：原先只有 TODO 注释、**没有 return** —— `bool` 函数缺 return 是 UB，
     -O2 下会"掉进"紧随其后的代码/字面量池 -> 真机 SIGILL(ILL_ILLOPC)
     （tombstone: LoadingAlertData::init()+4 ← DataCacheManager::DataCacheManager()+58）。
     按本项目占位惯例补上确定返回值。 */
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return false;
}
