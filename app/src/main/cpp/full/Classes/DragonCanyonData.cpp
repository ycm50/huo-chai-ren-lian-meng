#include "DragonCanyonData.h"
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
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e69c(...);
extern "C" long long func_0079e874(...);
extern "C" unsigned long _DAT_0043d19c;
extern "C" unsigned long _DAT_0043d1a0;
extern "C" unsigned long _DAT_0043d1a4;
extern "C" unsigned long _DAT_004794ec;
extern "C" unsigned long _DAT_004794f0;
extern "C" unsigned long _DAT_004794f4;
extern "C" unsigned long _DAT_004794f8;
extern "C" unsigned long _DAT_004794fc;
extern "C" unsigned long _DAT_00479500;
extern "C" unsigned long _DAT_00479960;
extern "C" unsigned long _DAT_00479964;
extern "C" unsigned long _DAT_00479968;
extern "C" unsigned long _DAT_0047996c;
extern "C" unsigned long _DAT_00479970;
extern "C" unsigned long g_0043d19c;
extern "C" unsigned long g_0043d1a0;
extern "C" unsigned long g_0043d1a4;
extern "C" unsigned long g_004794ec;
extern "C" unsigned long g_004794f0;
extern "C" unsigned long g_004794f4;
extern "C" unsigned long g_004794f8;
extern "C" unsigned long g_004794fc;
extern "C" unsigned long g_00479500;
extern "C" unsigned long g_00479960;
extern "C" unsigned long g_00479964;
extern "C" unsigned long g_00479968;
extern "C" unsigned long g_0047996c;
extern "C" unsigned long g_00479970;
void DragonCanyonData::setReward(std::string p1)
{
  func_0079e52c(((int)this) + 0x18);
  return;
}

void DragonCanyonData::setMissionName(std::string p1)
{
  func_0079e52c(((int)this) + 0x14);
  return;
}

void DragonCanyonData::setMissionID(std::string p1)
{
  func_0079e52c(((int)this) + 0x10);
  return;
}

std::string DragonCanyonData::getReward() const
{ return *(std::string *)(((int)this) + 0x18); }

std::string DragonCanyonData::getMissionName() const
{ return *(std::string *)(((int)this) + 0x14); }

std::string DragonCanyonData::getMissionID() const
{ return *(std::string *)(((int)this) + 0x10); }

DragonCanyonData::~DragonCanyonData()
{
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  func_0079e2bc(((int)this) + 6);
  func_0079e2bc(((int)this) + 5);
  func_0079e2bc(((int)this) + 4);
  ((std::vector<DragonCanyonItem, std::allocator<DragonCanyonItem>> *)((int)this) + 1)->~vector();
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  **(undefined4 **)(g_0043d1a4 + 0x43d196) = 0;
  return;
}

// ===== 修复: 补回被误删的函数占位 (3) =====
void DragonCanyonData::initWith(std::string p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void DragonCanyonData::setbossherolist(DragonCanyonItem p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void DragonCanyonData::getRewardIDandNum(std::string p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
