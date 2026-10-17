#include "TreasureMapItemBase.h"
#include "TreasureDataManager.h"
#include "TreasureMapDynamicData.h"
#include "TreasureWeightData.h"
#include "TreasureWeightItemData.h"
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
extern "C" long long func_0079e43c(...);
extern "C" long long func_0079e44c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e46c(...);
extern "C" long long func_0079e47c(...);
extern "C" long long func_0079e4bc(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e6d0(...);
extern "C" long long func_0079e874(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long _DAT_004b8588;
extern "C" unsigned long _DAT_004b88fc;
extern "C" unsigned long _DAT_004b9658;
extern "C" unsigned long _DAT_004b965c;
extern "C" unsigned long _DAT_004b9660;
extern "C" unsigned long _DAT_004b9664;
extern "C" unsigned long _DAT_004b9668;
extern "C" unsigned long _DAT_004b966c;
extern "C" unsigned long _DAT_004b9670;
extern "C" unsigned long _DAT_004b9674;
extern "C" unsigned long _DAT_004b9678;
extern "C" unsigned long _DAT_004b967c;
extern "C" unsigned long _DAT_004b9680;
extern "C" unsigned long _DAT_004b9684;
extern "C" unsigned long _DAT_004b9688;
extern "C" unsigned long _DAT_004b9798;
extern "C" unsigned long g_004b8588;
extern "C" unsigned long g_004b88fc;
extern "C" unsigned long g_004b9658;
extern "C" unsigned long g_004b965c;
extern "C" unsigned long g_004b9660;
extern "C" unsigned long g_004b9664;
extern "C" unsigned long g_004b9668;
extern "C" unsigned long g_004b966c;
extern "C" unsigned long g_004b9670;
extern "C" unsigned long g_004b9674;
extern "C" unsigned long g_004b9678;
extern "C" unsigned long g_004b967c;
extern "C" unsigned long g_004b9680;
extern "C" unsigned long g_004b9684;
extern "C" unsigned long g_004b9688;
extern "C" unsigned long g_004b9798;
void TreasureMapItemBase::beforeTrigger()
{
  return;
}

void TreasureMapItemBase::triggerEnd()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;

  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  uStack_1c = (undefined4)(p2);
  if ((char)*(int *)((int)this + 4*(8)) == '\0') {
    uStack_18 = (undefined4)(p3);
    iVar1 = ((TreasureDataManager *)this)->getInstance();
    uVar2 = (undefined4)(*(undefined4 *)(iVar1 + 0x68));
    iVar1 = *(int *)((int)this + 4*(5));
    (**(code **)(*(int *)this + 8))(&uStack_1c,((int)this));
    ((TreasureMapDynamicData *)uVar2)->updateMapData(iVar1, (std::string)(char*)uStack_1c);
    func_0079e2bc(&uStack_1c);
  }
  return;
}

TreasureMapItemBase::TreasureMapItemBase()
{
  int iVar1;
  
  iVar1 = *(int *)(g_004b8588 + 0x4b856c);
  *(int *)((int)this + 4*(1)) = -1;
  *(int *)this = iVar1 + 8;
  *(int *)((int)this + 4*(4)) = -1;
  *(undefined1 *)(((int)this) + 3) = 0;
  *(undefined1 *)((int)((int)this) + 0xd) = 0;
  *(undefined1 *)(((int)this) + 6) = 0;
  *(int *)((int)this + 4*(7)) = 0;
  *(int *)((int)this + 4*(2)) = 0;
  *(undefined1 *)(((int)this) + 8) = 0;
  return;
}

TreasureMapItemBase::~TreasureMapItemBase()
{
  return;
}

undefined8 TreasureMapItemBase::disposeTips(std::string * p1)
{
  undefined4 uStack_c;
  
  uStack_c = (undefined4)(p1);
  func_0079e53c(&uStack_c);
  0 /* ctorZero */;
  func_0079e2bc(&uStack_c);
  return ghidra_CONCAT44(uStack_c,((int)this));
}

// ===== 修复: 补回被误删的函数占位 (3) =====
void TreasureMapItemBase::checkTriggerable()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void TreasureMapItemBase::formatDesc(std::vector<std::string, std::allocator<std::string>>& p1, std::vector<cocos2d::_ccColor3B, std::allocator<cocos2d::_ccColor3B>>& p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void TreasureMapItemBase::eventDesc(TreasureType * p1, TreasureDescType p2, int p3)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
