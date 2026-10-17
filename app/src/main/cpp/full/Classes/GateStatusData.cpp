#include "GateStatusData.h"
#include "CCObject.h"
#include "BLForwards.h"
#include "BLLanguage.h"
#include "GateStatusDataGet.h"
#include "GemDrawData.h"
#include "PlatformHelp.h"
#include "Toast.h"
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
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e48c(...);
extern "C" unsigned long _DAT_00424e20;
extern "C" unsigned long _DAT_00424e24;
extern "C" unsigned long _DAT_00479d5c;
extern "C" unsigned long _DAT_00479d60;
extern "C" unsigned long _DAT_00479d64;
extern "C" unsigned long _DAT_00479d68;
extern "C" unsigned long _DAT_00479d6c;
extern "C" unsigned long _DAT_00479d70;
extern "C" unsigned long _DAT_0047a10c;
extern "C" unsigned long _DAT_0047a110;
extern "C" unsigned long extraout_r1;
extern "C" unsigned long g_00424e20;
extern "C" unsigned long g_00424e24;
extern "C" unsigned long g_00479d5c;
extern "C" unsigned long g_00479d60;
extern "C" unsigned long g_00479d64;
extern "C" unsigned long g_00479d68;
extern "C" unsigned long g_00479d6c;
extern "C" unsigned long g_00479d70;
extern "C" unsigned long g_0047a10c;
extern "C" unsigned long g_0047a110;
GateStatusData::~GateStatusData()
{
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  **(undefined4 **)(g_00424e24 + 0x424e1a) = 0;
  return;
}

void GateStatusData::PrintGateStatusInfo(GateStatusInfo p1)
{
  code *UNRECOVERED_JUMPTABLE;
  
  0 /* ctorZero */;
  0 /* ctorZero */;
  0 /* ctorZero */;
  0 /* ctorZero */;
  0 /* ctorZero */;
  0 /* ctorZero */;
                    /* WARNING: Could not recover jumptable at 0x00479d58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

// ===== 修复: 补回被误删的函数占位 (3) =====
void GateStatusData::GetDataFromNet(bool p1)
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
    piVar4 = (int *)func_0079e2fc(0x18);
    0 /* ctorZero */;
    iVar1 = (undefined4)(intptr_t)(g_0047a110);
    *(char *)(piVar4 + 5) = (char)p1;
    *piVar4 = *(int *)(iVar1 + 0x47a0ca) + 8;
    iVar1 = (undefined4)(intptr_t)(((GateStatusDataGet *)(piVar4))->init());
    if (iVar1 == 0) {
      (**(code **)(*(int *)(piVar4) + (8)))(piVar4);
    }
    else {
      ((cocos2d::CCObject *)(piVar4))->autorelease();
    }
  }
  return;
}

void GateStatusData::HandOutData()
{
  undefined4 uVar1;
  
  if (-1 < *(int *)(((int)this) + 8)) {
    uVar1 = (undefined4)(((sir::singleton<GemDrawData, 0> *)this)->instance());
    ((GemDrawData *)uVar1)->Setviewstatus(0);
  }
  if (-1 < *(int *)(((int)this) + 0xc)) {
    uVar1 = (undefined4)(((sir::singleton<GemDrawData, 0> *)this)->instance());
    ((GemDrawData *)uVar1)->Setviewstatus(1);
  }
  return;
}

void GateStatusData::SetGateStatusInfo(GateStatusInfo p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
