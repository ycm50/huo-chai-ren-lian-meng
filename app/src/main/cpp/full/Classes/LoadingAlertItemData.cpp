#include "LoadingAlertItemData.h"
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
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" unsigned long _DAT_0049d26c;
extern "C" unsigned long _DAT_0049d328;
extern "C" unsigned long _DAT_0049d32c;
extern "C" unsigned long g_0049d26c;
extern "C" unsigned long g_0049d328;
extern "C" unsigned long g_0049d32c;
void LoadingAlertItemData::setAlert(std::string p1)
{
  func_0079e52c(((int)this) + 0x14);
  return;
}

LoadingAlertItemData::~LoadingAlertItemData()
{
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  func_0079e2bc(((int)this) + 5);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

std::string LoadingAlertItemData::getAlert() const
{ return *(std::string *)(((int)this) + 0x14); }

LoadingAlertItemData::LoadingAlertItemData()
{
  0 /* ctorZero */;
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  *(int *)((int)this + 4*(5)) = *(int *)(g_0049d32c + 0x49d322) + 0xc;
  return;
}

bool LoadingAlertItemData::init()
{
  return 1;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
void LoadingAlertItemData::initWith(char** p1, int& p2)
{
  int iVar1;
  
  iVar1 = (int)*(int *)&(*(int *)p2);
  *(int *)p2 = iVar1 + 1;
  func_0079e2dc(((int)this) + 0x14,*(undefined4 *)((iVar1 + 1) * 4 + p1));
  *(int *)p2 = *(int *)p2 + 1;
  return;
}
