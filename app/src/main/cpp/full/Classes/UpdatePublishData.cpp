#include "UpdatePublishData.h"
#include "BLGameScene.h"
#include "BLLeakUtils.h"
#include "PlatformHelp.h"
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
extern "C" long long func_0079e34c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4bc(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e54c(...);
extern "C" long long func_0079e5ac(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long _DAT_0049f02c;
extern "C" unsigned long _DAT_0049f030;
extern "C" unsigned long _DAT_0049f0fc;
extern "C" unsigned long _DAT_0049f100;
extern "C" unsigned long _DAT_0049f104;
extern "C" unsigned long _DAT_0049f138;
extern "C" unsigned long _DAT_0049f2c4;
extern "C" unsigned long _DAT_0049f2c8;
extern "C" unsigned long _DAT_0049f2cc;
extern "C" unsigned long _DAT_0049f2d0;
extern "C" unsigned long _DAT_0049f5c0;
extern "C" unsigned long _DAT_0049f5c4;
extern "C" unsigned long _DAT_0049f5c8;
extern "C" unsigned long _DAT_0049f5cc;
extern "C" unsigned long _DAT_0049f5d0;
extern "C" unsigned long _DAT_0049f5d4;
extern "C" unsigned long _DAT_0049f5d8;
extern "C" unsigned long _DAT_0049f5dc;
extern "C" unsigned long _DAT_0049f5e0;
extern "C" unsigned long _DAT_0049f5e4;
extern "C" unsigned long _DAT_0049f5e8;
extern "C" unsigned long _DAT_0049f5ec;
extern "C" unsigned long _DAT_0049f5f0;
extern "C" unsigned long _DAT_0049f5f4;
extern "C" unsigned long _DAT_0049f5f8;
extern "C" unsigned long _DAT_0049f5fc;
extern "C" unsigned long _DAT_0049f600;
extern "C" unsigned long _DAT_0049f604;
extern "C" unsigned long _DAT_0049f608;
extern "C" unsigned long g_0049f02c;
extern "C" unsigned long g_0049f030;
extern "C" unsigned long g_0049f0fc;
extern "C" unsigned long g_0049f100;
extern "C" unsigned long g_0049f104;
extern "C" unsigned long g_0049f138;
extern "C" unsigned long g_0049f2c4;
extern "C" unsigned long g_0049f2c8;
extern "C" unsigned long g_0049f2cc;
extern "C" unsigned long g_0049f2d0;
extern "C" unsigned long g_0049f5c0;
extern "C" unsigned long g_0049f5c4;
extern "C" unsigned long g_0049f5c8;
extern "C" unsigned long g_0049f5cc;
extern "C" unsigned long g_0049f5d0;
extern "C" unsigned long g_0049f5d4;
extern "C" unsigned long g_0049f5d8;
extern "C" unsigned long g_0049f5dc;
extern "C" unsigned long g_0049f5e0;
extern "C" unsigned long g_0049f5e4;
extern "C" unsigned long g_0049f5e8;
extern "C" unsigned long g_0049f5ec;
extern "C" unsigned long g_0049f5f0;
extern "C" unsigned long g_0049f5f4;
extern "C" unsigned long g_0049f5f8;
extern "C" unsigned long g_0049f5fc;
extern "C" unsigned long g_0049f600;
extern "C" unsigned long g_0049f604;
extern "C" unsigned long g_0049f608;
void UpdatePublishData::setBug(std::string p1)
{
  func_0079e52c(((int)this) + 0x20);
  return;
}

void UpdatePublishData::setOptimization(std::string p1)
{
  func_0079e52c(((int)this) + 0x1c);
  return;
}

void UpdatePublishData::setPlay(std::string p1)
{
  func_0079e52c(((int)this) + 0x18);
  return;
}

void UpdatePublishData::setUpdateDate(std::string p1)
{
  func_0079e52c(((int)this) + 0x14);
  return;
}

UpdatePublishData::~UpdatePublishData()
{
  undefined4 uVar1;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [8];
  
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(auStack_1c,((intptr_t)"UpdatePublishData"),auStack_20);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)auStack_1c);
  func_0079e2bc(auStack_1c);
  func_0079e2bc(((int)this) + 8);
  func_0079e2bc(((int)this) + 7);
  func_0079e2bc(((int)this) + 6);
  func_0079e2bc(((int)this) + 5);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

std::string UpdatePublishData::getBug() const
{ return *(std::string *)(((int)this) + 0x20); }

std::string UpdatePublishData::getOptimization() const
{ return *(std::string *)(((int)this) + 0x1c); }

std::string UpdatePublishData::getPlay() const
{ return *(std::string *)(((int)this) + 0x18); }

std::string UpdatePublishData::getUpdateDate() const
{ return *(std::string *)(((int)this) + 0x14); }

UpdatePublishData::UpdatePublishData()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  iVar2 = *(int *)(g_0049f100 + 0x49f098) + 0xc;
  *(int *)((int)this + 4*(5)) = iVar2;
  *(int *)((int)this + 4*(6)) = iVar2;
  *(int *)((int)this + 4*(7)) = iVar2;
  *(int *)((int)this + 4*(8)) = iVar2;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"UpdatePublishData"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int UpdatePublishData::getInstance()
{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)(g_0049f138 + 0x49f110);
  if (*piVar2 == 0) {
    iVar1 = ((long long)::operator new((size_t)(0x28)));
    0 /* ctorZero */;
    *piVar2 = iVar1;
  }
  return *piVar2;
}

// ===== 修复: 补回被误删的函数占位 (2) =====
void UpdatePublishData::getDataFromNet()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void UpdatePublishData::onGetPublishData(cocos2d::extension::CCHttpClient* p1, cocos2d::extension::CCHttpResponse* p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
