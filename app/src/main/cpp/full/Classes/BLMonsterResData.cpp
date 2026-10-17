#include "BLMonsterResData.h"
#include "BLLeakUtils.h"
#include "DataManager.h"
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
extern "C" long long func_0079e2dc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e69c(...);
extern "C" long long func_0079e7e4(...);
extern "C" long long func_0079e824(...);
extern "C" long long func_0079e874(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long _DAT_0045a328;
extern "C" unsigned long _DAT_0045a32c;
extern "C" unsigned long _DAT_0045a3e8;
extern "C" unsigned long _DAT_0045a3ec;
extern "C" unsigned long _DAT_0045a3f0;
extern "C" unsigned long _DAT_0045a3f4;
extern "C" unsigned long _DAT_0045a3f8;
extern "C" unsigned long _DAT_0045a3fc;
extern "C" unsigned long _DAT_0045a5e4;
extern "C" unsigned long _DAT_0045a5e8;
extern "C" unsigned long _DAT_0045a5ec;
extern "C" unsigned long _DAT_0045a5f0;
extern "C" unsigned long _DAT_0045a5f4;
extern "C" unsigned long _DAT_0045a5f8;
extern "C" unsigned long g_0045a328;
extern "C" unsigned long g_0045a32c;
extern "C" unsigned long g_0045a3e8;
extern "C" unsigned long g_0045a3ec;
extern "C" unsigned long g_0045a3f0;
extern "C" unsigned long g_0045a3f4;
extern "C" unsigned long g_0045a3f8;
extern "C" unsigned long g_0045a3fc;
extern "C" unsigned long g_0045a5e4;
extern "C" unsigned long g_0045a5e8;
extern "C" unsigned long g_0045a5ec;
extern "C" unsigned long g_0045a5f0;
extern "C" unsigned long g_0045a5f4;
extern "C" unsigned long g_0045a5f8;
float BLMonsterResData::getSpeed() const
{
  return *(undefined4 *)(((int)this) + 0x3c);
}

void BLMonsterResData::setSpeed(float p1)
{
  *(undefined4 *)(((int)this) + 0x3c) = p1;
  return;
}

float BLMonsterResData::getAIDistance() const
{
  return *(undefined4 *)(((int)this) + 0x40);
}

void BLMonsterResData::setAIDistance(float p1)
{
  *(undefined4 *)(((int)this) + 0x40) = p1;
  return;
}

float BLMonsterResData::getSpriteScale() const
{
  return *(undefined4 *)(((int)this) + 0x44);
}

void BLMonsterResData::setSpriteScale(float p1)
{
  *(undefined4 *)(((int)this) + 0x44) = p1;
  return;
}

void BLMonsterResData::setResID(std::string p1)
{
  func_0079e52c(((int)this) + 0x14);
  return;
}

std::string BLMonsterResData::getResID() const
{ return *(std::string *)(((int)this) + 0x14); }

bool BLMonsterResData::init()
{
  return 1;
}

BLMonsterResData::~BLMonsterResData()
{
  undefined4 uVar1;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [8];
  
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(auStack_1c,((intptr_t)"BLMonsterResData"),auStack_20);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)auStack_1c);
  func_0079e2bc(auStack_1c);
  ((std::vector<std::string, std::allocator<std::string>> *)((int)this) + 0xc)->~vector();
  ((std::vector<std::string, std::allocator<std::string>> *)((int)this) + 9)->~vector();
  ((std::vector<std::string, std::allocator<std::string>> *)((int)this) + 6)->~vector();
  func_0079e2bc(((int)this) + 5);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLMonsterResData::BLMonsterResData()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;

  int iVar1;
  undefined4 uVar2;
  int *piStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  piStack_20 = (int *)((int)this);
  uStack_1c = (undefined4)(p2);
  uStack_18 = (undefined4)(p3);
  0 /* ctorZero */;
  iVar1 = g_0045a3ec;
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  *(int *)((int)this + 4*(5)) = *(int *)(g_0045a3f0 + 0x45a364) + 0xc;
  *(int *)((int)this + 4*(6)) = 0;
  *(int *)((int)this + 4*(7)) = 0;
  *(int *)((int)this + 4*(8)) = 0;
  *(int *)((int)this + 4*(9)) = 0;
  *(int *)((int)this + 4*(10)) = 0;
  *(int *)((int)this + 4*(0xb)) = 0;
  *(int *)((int)this + 4*(0xc)) = 0;
  *(int *)((int)this + 4*(0xd)) = 0;
  *(int *)((int)this + 4*(0xe)) = 0;
  func_0079e2dc(((int)this) + 5,iVar1 + 0x45a368);
  *(int *)((int)this + 4*(0xf)) = g_0045a3f4;
  *(int *)((int)this + 4*(0x10)) = g_0045a3f8;
  *(int *)((int)this + 4*(0x11)) = 0x3f800000;
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_1c,((intptr_t)"BLMonsterResData"),&piStack_20);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_1c);
  func_0079e2bc(&uStack_1c);
  return;
}

// ===== 修复: 补回被误删的函数占位 (7) =====
void BLMonsterResData::initWith(std::string p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMonsterResData::setThrowRes(std::vector<std::string, std::allocator<std::string>> p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMonsterResData::setImgRes(std::vector<std::string, std::allocator<std::string>> p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMonsterResData::setDataRes(std::vector<std::string, std::allocator<std::string>> p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

int BLMonsterResData::getThrowRes() const
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

int BLMonsterResData::getImgRes() const
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

int BLMonsterResData::getDataRes() const
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
