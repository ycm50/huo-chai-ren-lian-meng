#include "MainGLSBData.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
using namespace cocos2d;
// 兜底声明
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079eab4(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long _DAT_0048dc58;
extern "C" unsigned long _DAT_0048dc5c;
extern "C" unsigned long _DAT_0048dc60;
extern "C" unsigned long _DAT_0048ddf4;
extern "C" unsigned long _DAT_0048ddf8;
extern "C" unsigned long _DAT_0048ddfc;
extern "C" unsigned long _DAT_0048de00;
extern "C" unsigned long _DAT_0048de04;
extern "C" unsigned long _DAT_0048e2d8;
extern "C" unsigned long _DAT_0048e2dc;
extern "C" unsigned long g_0048dc58;
extern "C" unsigned long g_0048dc5c;
extern "C" unsigned long g_0048dc60;
extern "C" unsigned long g_0048ddf4;
extern "C" unsigned long g_0048ddf8;
extern "C" unsigned long g_0048ddfc;
extern "C" unsigned long g_0048de00;
extern "C" unsigned long g_0048de04;
extern "C" unsigned long g_0048e2d8;
extern "C" unsigned long g_0048e2dc;
void MainGLSBData::setUID(std::string p1)
{
  func_0079e52c(((int)this) + 8);
  return;
}

void MainGLSBData::setToken(std::string p1)
{
  func_0079e52c(((int)this) + 0xc);
  return;
}

void MainGLSBData::setEmail(std::string p1)
{
  func_0079e52c(((int)this) + 0x10);
  return;
}

void MainGLSBData::setDeviceId(std::string p1)
{
  func_0079e52c(((int)this) + 4);
  return;
}

MainGLSBData::~MainGLSBData()
{
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  func_0079e2bc(((int)this) + 4);
  func_0079e2bc(((int)this) + 3);
  func_0079e2bc(((int)this) + 2);
  func_0079e2bc(((int)this) + 1);
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  **(undefined4 **)(g_0048dc60 + 0x48dc52) = 0;
  return;
}

std::string MainGLSBData::getEmail() const
{ return *(std::string *)(((int)this) + 0x10); }

std::string MainGLSBData::getToken() const
{ return *(std::string *)(((int)this) + 0xc); }

std::string MainGLSBData::getUID() const
{ return *(std::string *)(((int)this) + 8); }

std::string MainGLSBData::getDeviceId() const
{ return *(std::string *)(((int)this) + 4); }

void MainGLSBData::clearData()
{
  return;
}

undefined8 MainGLSBData::PrintGLSBInfo()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;

  undefined4 uStack_14;
  undefined4 uStack_10;
  
  uStack_14 = (undefined4)(p2);
  uStack_10 = (undefined4)(p3);
  0 /* ctorZero */;
  (**(code **)(*(int *)this + 8))(&uStack_14,((int)this));
  0 /* ctorZero */;
  func_0079e2bc(&uStack_14);
  (**(code **)(*(int *)this + 0x20))(&uStack_14,((int)this));
  0 /* ctorZero */;
  func_0079e2bc(&uStack_14);
  (**(code **)(*(int *)this + 0x18))(&uStack_14,((int)this));
  0 /* ctorZero */;
  func_0079e2bc(&uStack_14);
  (**(code **)(*(int *)this + 0x10))(&uStack_14,((int)this));
  0 /* ctorZero */;
  func_0079e2bc(&uStack_14);
  return ghidra_CONCAT44(uStack_14,((int)this));
}

// ===== 修复: 补回被误删的函数占位 (1) =====
void MainGLSBData::GetDataFromNet(URL_GLSB p1, bool p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
