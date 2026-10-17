#include "DebugLocalSys.h"
#include "JsonFilesSystem.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include "Json.h"

using namespace cocos2d;
// 兜底声明
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long _DAT_0049c19c;
extern "C" unsigned long _DAT_0049c1a0;
extern "C" unsigned long _DAT_0049c238;
extern "C" unsigned long _DAT_0049c264;
extern "C" unsigned long _DAT_0049c268;
extern "C" unsigned long _DAT_0049c284;
extern "C" unsigned long _DAT_0049c2b0;
extern "C" unsigned long _DAT_0049c334;
extern "C" unsigned long _DAT_0049c338;
extern "C" unsigned long g_0049c19c;
extern "C" unsigned long g_0049c1a0;
extern "C" unsigned long g_0049c238;
extern "C" unsigned long g_0049c264;
extern "C" unsigned long g_0049c268;
extern "C" unsigned long g_0049c284;
extern "C" unsigned long g_0049c2b0;
extern "C" unsigned long g_0049c334;
extern "C" unsigned long g_0049c338;
DebugLocalSys::~DebugLocalSys()
{
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  **(undefined4 **)(g_0049c1a0 + 0x49c196) = 0;
  return;
}

DebugLocalSys::DebugLocalSys()
{
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  *(int *)((int)this + 4*(1)) = 0;
  return;
}

// ===== 修复: 补回被误删的函数占位 (5) =====
void DebugLocalSys::getJsonStringById(std::string * p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void DebugLocalSys::getJsonIntById(std::string * p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void DebugLocalSys::getJsonStringGetValueById(std::string * p1, std::string * p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void DebugLocalSys::getJsonIntGetValueById(std::string * p1, std::string * p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(cocos2d::extension::Json_getItem((cocos2d::extension::Json*)*(undefined4 *)(((int)this) + 4), (char const*)*(int *)p1));
  cocos2d::extension::Json_getInt((cocos2d::extension::Json*)uVar1, (char const*)*(int *)p2, 0);
  return;
}

void DebugLocalSys::ReadDebugFile()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
