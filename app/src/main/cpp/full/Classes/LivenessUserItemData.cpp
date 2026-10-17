#include "LivenessUserItemData.h"
#include "DBUtil.h"
#include "DataCacheManager.h"
#include "DataManager.h"
#include "LivenessData.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
using namespace cocos2d;
// 兜底声明
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e5dc(...);
extern "C" long long func_0079e6c0(...);
extern "C" long long func_0079e874(...);
extern "C" long long func_0079e934(...);
extern "C" long long func_0079e944(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long _DAT_00489e8c;
extern "C" unsigned long _DAT_00489e90;
extern "C" unsigned long _DAT_00489e94;
extern "C" unsigned long _DAT_00489e98;
extern "C" unsigned long _DAT_00489e9c;
extern "C" unsigned long _DAT_0048a110;
extern "C" unsigned long _DAT_0048a114;
extern "C" unsigned long _DAT_0048a118;
extern "C" unsigned long _DAT_0048a11c;
extern "C" unsigned long _DAT_0048a120;
extern "C" unsigned long _DAT_0048a124;
extern "C" unsigned long _DAT_0048a128;
extern "C" unsigned long _DAT_0048a12c;
extern "C" unsigned long _DAT_0048a130;
extern "C" unsigned long _DAT_0048a134;
extern "C" unsigned long _DAT_0048a138;
extern "C" unsigned long _DAT_0048a13c;
extern "C" unsigned long _DAT_0048a140;
extern "C" unsigned long _DAT_0048a144;
extern "C" unsigned long _DAT_0048a148;
extern "C" unsigned long _DAT_0048a14c;
extern "C" unsigned long _DAT_0048a150;
extern "C" unsigned long _DAT_0048a154;
extern "C" unsigned long _DAT_0048a158;
extern "C" unsigned long _DAT_0048a15c;
extern "C" unsigned long _DAT_0048a160;
extern "C" unsigned long _DAT_0048a164;
extern "C" unsigned long _DAT_0048a168;
extern "C" unsigned long _DAT_0048a16c;
extern "C" unsigned long _DAT_0048a1ac;
extern "C" unsigned long _DAT_0048a204;
extern "C" unsigned long _DAT_0048a208;
extern "C" unsigned long g_00489e8c;
extern "C" unsigned long g_00489e90;
extern "C" unsigned long g_00489e94;
extern "C" unsigned long g_00489e98;
extern "C" unsigned long g_00489e9c;
extern "C" unsigned long g_0048a110;
extern "C" unsigned long g_0048a114;
extern "C" unsigned long g_0048a118;
extern "C" unsigned long g_0048a11c;
extern "C" unsigned long g_0048a120;
extern "C" unsigned long g_0048a124;
extern "C" unsigned long g_0048a128;
extern "C" unsigned long g_0048a12c;
extern "C" unsigned long g_0048a130;
extern "C" unsigned long g_0048a134;
extern "C" unsigned long g_0048a138;
extern "C" unsigned long g_0048a13c;
extern "C" unsigned long g_0048a140;
extern "C" unsigned long g_0048a144;
extern "C" unsigned long g_0048a148;
extern "C" unsigned long g_0048a14c;
extern "C" unsigned long g_0048a150;
extern "C" unsigned long g_0048a154;
extern "C" unsigned long g_0048a158;
extern "C" unsigned long g_0048a15c;
extern "C" unsigned long g_0048a160;
extern "C" unsigned long g_0048a164;
extern "C" unsigned long g_0048a168;
extern "C" unsigned long g_0048a16c;
extern "C" unsigned long g_0048a1ac;
extern "C" unsigned long g_0048a204;
extern "C" unsigned long g_0048a208;
LivenessUserItemData::LivenessUserItemData()
{
  *(int *)this = 0;
  *(int *)((int)this + 4*(1)) = 0;
  *(int *)((int)this + 4*(2)) = 0;
  return;
}

LivenessUserItemData::~LivenessUserItemData()
{
  return;
}


void LivenessUserItemData::initWith(int p1)
{
  *(int *)this = p1;
  *(int *)((int)this + 4*(1)) = 0;
  *(int *)((int)this + 4*(2)) = 0;
  return;
}

// ===== 修复: 补回被误删的函数占位 (4) =====
void LivenessUserItemData::updateData(std::string p1, int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void LivenessUserItemData::addNum(int p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

undefined8 LivenessUserItemData::receive()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;

  int iVar1;
  int iStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  iVar1 = (undefined4)(intptr_t)(g_0048a1ac);
  iStack_18 = (undefined4)(intptr_t)((int *)((int)this));
  uStack_14 = (undefined4)(p2);
  if (*(int *)(((int)this) + 8) == 1) {
    *(undefined4 *)(((int)this) + 8) = 2;
    uStack_10 = (undefined4)(p3);
    func_0079e45c(&uStack_14,iVar1 + 0x48a186,&iStack_18);
    LivenessUserItemData::updateData((std::string)(char*)uStack_14, *(undefined4 *)(((int)this) + 8));
    func_0079e2bc(&uStack_14);
  }
  return ghidra_CONCAT44(uStack_14,iStack_18);
}

undefined8 LivenessUserItemData::clearData()
{
  undefined4 p2 = 0;

  int iVar1;
  int iStack_18;
  undefined4 uStack_14;
  
  iVar1 = (undefined4)(intptr_t)(g_0048a204);
  *(undefined4 *)(((int)this) + 4) = 0;
  *(undefined4 *)(((int)this) + 8) = 0;
  iStack_18 = (undefined4)(intptr_t)((int *)((int)this));
  uStack_14 = (undefined4)(p2);
  func_0079e45c(&uStack_14,iVar1 + 0x48a1c2,&iStack_18);
  LivenessUserItemData::updateData((std::string)(char*)uStack_14, *(undefined4 *)(((int)this) + 4));
  func_0079e2bc(&uStack_14);
  func_0079e45c(&uStack_14,((intptr_t)"status"),&iStack_18);
  LivenessUserItemData::updateData((std::string)(char*)uStack_14, *(undefined4 *)(((int)this) + 8));
  func_0079e2bc(&uStack_14);
  return ghidra_CONCAT44(uStack_14,iStack_18);
}
