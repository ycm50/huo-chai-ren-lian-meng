#include "PracticeData.h"
#include "CCObject.h"
#include "BLLanguage.h"
#include "DBUtil.h"
#include "DataManager.h"
#include "PlatformHelp.h"
#include "PracDataItem.h"
#include "PracticeDataGet.h"
#include "PracticeTime.h"
#include "RoleData.h"
#include "StringEx.h"
#include "Toast.h"
#include "UserData.h"
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
extern "C" long long func_0079e34c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4ac(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e69c(...);
extern "C" long long func_0079e6c0(...);
extern "C" long long func_0079e724(...);
extern "C" long long func_0079e734(...);
extern "C" long long func_0079e874(...);
extern "C" long long func_0079e8c4(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long _DAT_0042a7c0;
extern "C" unsigned long _DAT_0042a7c4;
extern "C" unsigned long _DAT_0042a7c8;
extern "C" unsigned long _DAT_0042ac58;
extern "C" unsigned long _DAT_0042ac5c;
extern "C" unsigned long _DAT_004a19d8;
extern "C" unsigned long _DAT_004a19dc;
extern "C" unsigned long _DAT_004a19e0;
extern "C" unsigned long _DAT_004a19e4;
extern "C" unsigned long _DAT_004a1b94;
extern "C" unsigned long _DAT_004a1b98;
extern "C" unsigned long _DAT_004a1b9c;
extern "C" unsigned long _DAT_004a1ba0;
extern "C" unsigned long _DAT_004a1ba4;
extern "C" unsigned long _DAT_004a1ba8;
extern "C" unsigned long _DAT_004a1c90;
extern "C" unsigned long _DAT_004a1c94;
extern "C" unsigned long _DAT_004a1c98;
extern "C" unsigned long _DAT_004a1c9c;
extern "C" unsigned long _DAT_004a1f90;
extern "C" unsigned long _DAT_004a1f94;
extern "C" unsigned long _DAT_004a1f98;
extern "C" unsigned long _DAT_004a1f9c;
extern "C" unsigned long _DAT_004a1fa0;
extern "C" unsigned long _DAT_004a1fa4;
extern "C" unsigned long _DAT_004a1fa8;
extern "C" unsigned long _DAT_004a1fac;
extern "C" unsigned long _DAT_004a2084;
extern "C" unsigned long _DAT_004a2340;
extern "C" unsigned long _DAT_004a2344;
extern "C" unsigned long _DAT_004a2704;
extern "C" unsigned long _DAT_004a2708;
extern "C" unsigned long _DAT_004a270c;
extern "C" unsigned long _DAT_004a2710;
extern "C" unsigned long _DAT_004a2a90;
extern "C" unsigned long _DAT_004a2a94;
extern "C" unsigned long _DAT_004a2a98;
extern "C" unsigned long _DAT_004a2a9c;
extern "C" unsigned long _DAT_004a2aa0;
extern "C" unsigned long _DAT_004a2aa4;
extern "C" unsigned long _DAT_004a2aa8;
extern "C" unsigned long _DAT_004a2aac;
extern "C" unsigned long _DAT_004a2ab0;
extern "C" unsigned long _DAT_004a2ab4;
extern "C" unsigned long _DAT_004a2ab8;
extern "C" unsigned long _DAT_004a2abc;
extern "C" unsigned long _DAT_004a2ac0;
extern "C" unsigned long _DAT_004a2ac4;
extern "C" unsigned long _DAT_004a2ac8;
extern "C" unsigned long _DAT_004a2acc;
extern "C" unsigned long _DAT_004a2ad0;
extern "C" unsigned long _DAT_004a2ad4;
extern "C" unsigned long _DAT_004a2ad8;
extern "C" unsigned long _DAT_004a2adc;
extern "C" unsigned long _DAT_004a2ae0;
extern "C" unsigned long _DAT_004a2b90;
extern "C" unsigned long g_0042a7c0;
extern "C" unsigned long g_0042a7c4;
extern "C" unsigned long g_0042a7c8;
extern "C" unsigned long g_0042ac58;
extern "C" unsigned long g_0042ac5c;
extern "C" unsigned long g_004a19d8;
extern "C" unsigned long g_004a19dc;
extern "C" unsigned long g_004a19e0;
extern "C" unsigned long g_004a19e4;
extern "C" unsigned long g_004a1b94;
extern "C" unsigned long g_004a1b98;
extern "C" unsigned long g_004a1b9c;
extern "C" unsigned long g_004a1ba0;
extern "C" unsigned long g_004a1ba4;
extern "C" unsigned long g_004a1ba8;
extern "C" unsigned long g_004a1c90;
extern "C" unsigned long g_004a1c94;
extern "C" unsigned long g_004a1c98;
extern "C" unsigned long g_004a1c9c;
extern "C" unsigned long g_004a1f90;
extern "C" unsigned long g_004a1f94;
extern "C" unsigned long g_004a1f98;
extern "C" unsigned long g_004a1f9c;
extern "C" unsigned long g_004a1fa0;
extern "C" unsigned long g_004a1fa4;
extern "C" unsigned long g_004a1fa8;
extern "C" unsigned long g_004a1fac;
extern "C" unsigned long g_004a2084;
extern "C" unsigned long g_004a2340;
extern "C" unsigned long g_004a2344;
extern "C" unsigned long g_004a2704;
extern "C" unsigned long g_004a2708;
extern "C" unsigned long g_004a270c;
extern "C" unsigned long g_004a2710;
extern "C" unsigned long g_004a2a90;
extern "C" unsigned long g_004a2a94;
extern "C" unsigned long g_004a2a98;
extern "C" unsigned long g_004a2a9c;
extern "C" unsigned long g_004a2aa0;
extern "C" unsigned long g_004a2aa4;
extern "C" unsigned long g_004a2aa8;
extern "C" unsigned long g_004a2aac;
extern "C" unsigned long g_004a2ab0;
extern "C" unsigned long g_004a2ab4;
extern "C" unsigned long g_004a2ab8;
extern "C" unsigned long g_004a2abc;
extern "C" unsigned long g_004a2ac0;
extern "C" unsigned long g_004a2ac4;
extern "C" unsigned long g_004a2ac8;
extern "C" unsigned long g_004a2acc;
extern "C" unsigned long g_004a2ad0;
extern "C" unsigned long g_004a2ad4;
extern "C" unsigned long g_004a2ad8;
extern "C" unsigned long g_004a2adc;
extern "C" unsigned long g_004a2ae0;
extern "C" unsigned long g_004a2b90;
PracticeData::~PracticeData()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

PracticeData::PracticeData()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

// ===== 修复: 补回被误删的函数占位 (12) =====
undefined4 PracticeData::Getotheritem(PracticeOtherEnum * p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void PracticeData::deleteDBData(int p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void PracticeData::getPerMExp(int p1, int p2, std::string p3)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

int PracticeData::GetHeroHttpExp(int p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void PracticeData::addDBData(PracHeroItem * p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

undefined8 PracticeData::SetDbTime()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void PracticeData::GetDataFromNet(bool p1, int p2)
{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  undefined4 uStack_20;
  undefined1 auStack_1c [8];
  
  if ((*(char *)(((int)this) + 0x78) == '\0') || (p2 != 0)) {
    iVar1 = (undefined4)(intptr_t)(((PlatformHelp *)this)->CheckNet());
    if (iVar1 == 0) {
      if (p1 != 0) {
        uVar2 = (undefined4)(((Toast *)this)->sharedToast());
        uVar3 = (undefined4)(((BLLanguage *)this)->share());
        func_0079e45c(auStack_24,"当前网络连接异常，请检查连接",auStack_2c);
        ((BLLanguage *)this)->getString(*(std::string *)(void *)&uStack_20);
        func_0079e45c(auStack_1c,uStack_20,auStack_28);
        ((Toast *)(uVar2))->showSystemRemind((std::string *)(char *)auStack_1c);
        func_0079e2bc(auStack_1c);
        func_0079e2bc(&uStack_20);
        func_0079e2bc(auStack_24);
      }
    }
    else {
      piVar4 = (int *)func_0079e2fc(0x1c);
      0 /* ctorZero */;
      iVar1 = (undefined4)(intptr_t)(g_004a2344);
      *(char *)(piVar4 + 5) = (char)p1;
      piVar4[6] = p2;
      *piVar4 = *(int *)(iVar1 + 0x4a22fc) + 8;
      iVar1 = (undefined4)(intptr_t)(((PracticeDataGet *)(piVar4))->init());
      if (iVar1 == 0) {
        (**(code **)(*(int *)(piVar4) + (8)))(piVar4);
      }
      else {
        ((cocos2d::CCObject *)(piVar4))->autorelease();
      }
    }
  }
  return;
}

undefined8 PracticeData::Setotheritem(int p1, int p2)
{
  undefined4 *puVar1;
  undefined4 uStack_c;
  
  uStack_c = (undefined4)(p1);
  puVar1 = (undefined4 *)
           ((std::map<PracticeOtherEnum, int, std::less<PracticeOtherEnum>, std::allocator<std::pair<PracticeOtherEnum const, int>>> *)(((int)this) + 0x7c))->operator[](*(PracticeOtherEnum const*)&uStack_c);
  *puVar1 = p2;
  return ghidra_CONCAT44(uStack_c,((int)this));
}

void PracticeData::serachDBData()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void PracticeData::modifyDBData(PracHeroItem * p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void PracticeData::SetDbData()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void PracticeData::SetItem(PracDataItem * p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
