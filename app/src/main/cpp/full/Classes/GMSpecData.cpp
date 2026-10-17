#include "GMSpecData.h"
#include "CCObject.h"
#include "BLGameScene.h"
#include "BLLanguage.h"
#include "DataManager.h"
#include "GMSpecDataGet.h"
#include "PlatformHelp.h"
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
extern "C" long long func_0079e2dc(...);
extern "C" unsigned long g_0047eda8;
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e43c(...);
extern "C" long long func_0079e44c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e46c(...);
extern "C" long long func_0079e47c(...);
extern "C" long long func_0079e4bc(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e6c0(...);
extern "C" unsigned long _DAT_0047ea50;
extern "C" unsigned long _DAT_0047ea54;
extern "C" unsigned long _DAT_0047ea58;
extern "C" unsigned long _DAT_00480284;
extern "C" unsigned long _DAT_00480288;
extern "C" unsigned long _DAT_00480428;
extern "C" unsigned long _DAT_0048042c;
extern "C" unsigned long _DAT_00480430;
extern "C" unsigned long _DAT_00480434;
extern "C" unsigned long _DAT_00480438;
extern "C" unsigned long _DAT_0048043c;
extern "C" unsigned long _DAT_00480440;
extern "C" unsigned long _DAT_00480444;
extern "C" unsigned long extraout_r2;
extern "C" unsigned long g_0047ea50;
extern "C" unsigned long g_0047ea54;
extern "C" unsigned long g_0047ea58;
extern "C" unsigned long g_00480284;
extern "C" unsigned long g_00480288;
extern "C" unsigned long g_00480428;
extern "C" unsigned long g_0048042c;
extern "C" unsigned long g_00480430;
extern "C" unsigned long g_00480434;
extern "C" unsigned long g_00480438;
extern "C" unsigned long g_0048043c;
extern "C" unsigned long g_00480440;
extern "C" unsigned long g_00480444;
GMSpecData::~GMSpecData()
{
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  func_0079e2bc(((int)this) + 3);
  func_0079e2bc(((int)this) + 2);
  func_0079e2bc(((int)this) + 1);
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  **(undefined4 **)(g_0047ea58 + 0x47ea4a) = 0;
  return;
}

void GMSpecData::Setgmscene(GMSPEC_SCENESTATUS p1)
{
  undefined4 p4 = 0;

  undefined4 *puVar1;
  undefined4 extraout_r2;
  
  GMSpecData::Clearinput();
  puVar1 = *(undefined4 **)(((int)this) + 0x14);
  *(undefined4 *)(((int)this) + 0x10) = p1;
  if (puVar1 != 0) {
    (**(code **)*puVar1)(puVar1,((int)this),extraout_r2,*(code **)*puVar1,p4);
  }
  return;
}

void GMSpecData::Setinput1(std::string p1)
{
  func_0079e52c(((int)this) + 4);
  return;
}

void GMSpecData::Setinput2(std::string p1)
{
  func_0079e52c(((int)this) + 8);
  return;
}

// ===== 修复: 补回被误删的函数占位 (3) =====
void GMSpecData::Clearinput()
{
  undefined4 p3 = 0;
  undefined4 p4 = 0;

  int iVar1;
  
  iVar1 = (undefined4)(intptr_t)(g_0047eda8 + 0x47ed98);
  func_0079e2dc(((int)this) + 4,iVar1,p3,p4,p4);
  func_0079e2dc(((int)this) + 8,iVar1);
  return;
}

void GMSpecData::GetDataFromNet(bool p1, int p2)
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
    iVar1 = (undefined4)(intptr_t)(g_00480288);
    *(char *)(piVar4 + 5) = (char)p1;
    piVar4[6] = p2;
    *piVar4 = *(int *)(iVar1 + 0x480240) + 8;
    iVar1 = (undefined4)(intptr_t)(((GMSpecDataGet *)(piVar4))->init());
    if (iVar1 == 0) {
      (**(code **)(*(int *)(piVar4) + (8)))(piVar4);
    }
    else {
      ((cocos2d::CCObject *)(piVar4))->autorelease();
    }
  }
  return;
}

void GMSpecData::Handle()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
