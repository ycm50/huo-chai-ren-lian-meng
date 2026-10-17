#include "RenascenceBaseData.h"
#include "DataManager.h"
#include "RenascenceBaseItemData.h"
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
extern "C" long long func_0079e31c(...);
extern "C" long long func_0079e34c(...);
extern "C" long long func_0079e3cc(...);
extern "C" long long func_0079e3dc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e69c(...);
extern "C" long long func_0079e864(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long _DAT_004a547c;
extern "C" unsigned long _DAT_004a5480;
extern "C" unsigned long _DAT_004a5604;
extern "C" unsigned long _DAT_004a5608;
extern "C" unsigned long _DAT_004a560c;
extern "C" unsigned long _DAT_004a5610;
extern "C" unsigned long _DAT_004a5614;
extern "C" unsigned long _DAT_004a5618;
extern "C" unsigned long _DAT_004a5680;
extern "C" unsigned long _DAT_004a5684;
extern "C" unsigned long _DAT_004a5688;
extern "C" unsigned long _DAT_004a568c;
extern "C" unsigned long _DAT_004a5690;
extern "C" unsigned long g_004a547c;
extern "C" unsigned long g_004a5480;
extern "C" unsigned long g_004a5604;
extern "C" unsigned long g_004a5608;
extern "C" unsigned long g_004a560c;
extern "C" unsigned long g_004a5610;
extern "C" unsigned long g_004a5614;
extern "C" unsigned long g_004a5618;
extern "C" unsigned long g_004a5680;
extern "C" unsigned long g_004a5684;
extern "C" unsigned long g_004a5688;
extern "C" unsigned long g_004a568c;
extern "C" unsigned long g_004a5690;
void RenascenceBaseData::initData()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

RenascenceBaseData::RenascenceBaseData()
{
  int iVar1;
  
  iVar1 = ((int)this) + 4;
  (void)(((long long)::memset((void *)(iVar1),(int)(0),(size_t)(0x10))));
  *(undefined4 *)(((int)this) + 0x14) = 0;
  *(int *)(((int)this) + 0xc) = iVar1;
  *(int *)(((int)this) + 0x10) = iVar1;
  *(undefined4 *)(((int)this) + 0x18) = 0;
  *(undefined4 *)(((int)this) + 0x1c) = 0;
  *(undefined4 *)(((int)this) + 0x20) = 0;
  ((std::map<int, RenascenceBaseItemData*, std::less<int>, std::allocator<std::pair<int const, RenascenceBaseItemData*>>> *)((int)this))->erase(0);
  *(int *)(((int)this) + 0xc) = iVar1;
  *(undefined4 *)(((int)this) + 8) = 0;
  *(int *)(((int)this) + 0x10) = iVar1;
  *(undefined4 *)(((int)this) + 0x14) = 0;
  *(undefined4 *)(((int)this) + 0x1c) = *(undefined4 *)(((int)this) + 0x18);
  RenascenceBaseData::initData();
  return;
}

RenascenceBaseData::~RenascenceBaseData()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

undefined8 RenascenceBaseData::checkRenascenceable(int p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

undefined4 RenascenceBaseData::getItemData(int p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

int RenascenceBaseData::getTotalRaiseLvBound(int p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
