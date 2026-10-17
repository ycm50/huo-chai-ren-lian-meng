#include "RedPackData.h"
#include "CCObject.h"
#include "RedPackInfo.h"
#include "RedPackReward.h"
#include "BLLanguage.h"
#include "PlatformHelp.h"
#include "RedPackDataGet.h"
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
extern "C" long long func_0079e31c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e53c(...);
extern "C" unsigned long _DAT_0048b434;
extern "C" unsigned long _DAT_0048b438;
extern "C" unsigned long _DAT_0048b43c;
extern "C" unsigned long _DAT_004a3b68;
extern "C" unsigned long _DAT_004a3b6c;
extern "C" unsigned long _DAT_004a3b70;
extern "C" unsigned long _DAT_004a3b74;
extern "C" unsigned long _DAT_004a3b78;
extern "C" unsigned long _DAT_004a3b7c;
extern "C" unsigned long _DAT_004a3b80;
extern "C" unsigned long _DAT_004a3b84;
extern "C" unsigned long _DAT_004a3b88;
extern "C" unsigned long _DAT_004a3fc4;
extern "C" unsigned long _DAT_004a3fc8;
extern "C" unsigned long _DAT_004a3fcc;
extern "C" unsigned long _DAT_004a41f0;
extern "C" unsigned long _DAT_004a41f4;
extern "C" unsigned long _DAT_004a41f8;
extern "C" unsigned long _DAT_004a41fc;
extern "C" unsigned long _DAT_004a4200;
extern "C" unsigned long _DAT_004a4204;
extern "C" unsigned long _DAT_004a4208;
extern "C" unsigned long _DAT_004a420c;
extern "C" unsigned long _DAT_004a4210;
extern "C" unsigned long _DAT_004a4214;
extern "C" unsigned long _DAT_004a4218;
extern "C" unsigned long _DAT_004a421c;
extern "C" unsigned long _DAT_004a4220;
extern "C" unsigned long _DAT_004a4224;
extern "C" unsigned long _DAT_004a4228;
extern "C" unsigned long extraout_r1;
extern "C" unsigned long extraout_r1_00;
extern "C" unsigned long extraout_r1_01;
extern "C" unsigned long extraout_r1_02;
extern "C" unsigned long extraout_r1_03;
extern "C" unsigned long extraout_r1_04;
extern "C" unsigned long extraout_r1_05;
extern "C" unsigned long extraout_r1_06;
extern "C" unsigned long extraout_r1_07;
extern "C" unsigned long extraout_r1_08;
extern "C" unsigned long g_0048b434;
extern "C" unsigned long g_0048b438;
extern "C" unsigned long g_0048b43c;
extern "C" unsigned long g_004a3b68;
extern "C" unsigned long g_004a3b6c;
extern "C" unsigned long g_004a3b70;
extern "C" unsigned long g_004a3b74;
extern "C" unsigned long g_004a3b78;
extern "C" unsigned long g_004a3b7c;
extern "C" unsigned long g_004a3b80;
extern "C" unsigned long g_004a3b84;
extern "C" unsigned long g_004a3b88;
extern "C" unsigned long g_004a3fc4;
extern "C" unsigned long g_004a3fc8;
extern "C" unsigned long g_004a3fcc;
extern "C" unsigned long g_004a41f0;
extern "C" unsigned long g_004a41f4;
extern "C" unsigned long g_004a41f8;
extern "C" unsigned long g_004a41fc;
extern "C" unsigned long g_004a4200;
extern "C" unsigned long g_004a4204;
extern "C" unsigned long g_004a4208;
extern "C" unsigned long g_004a420c;
extern "C" unsigned long g_004a4210;
extern "C" unsigned long g_004a4214;
extern "C" unsigned long g_004a4218;
extern "C" unsigned long g_004a421c;
extern "C" unsigned long g_004a4220;
extern "C" unsigned long g_004a4224;
extern "C" unsigned long g_004a4228;
RedPackData::~RedPackData()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void RedPackData::PrintRedPackWardifo(RedPackReward * p1) const
{
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 extraout_r1_02;
  undefined4 extraout_r1_03;
  undefined4 extraout_r1_04;
  
  0 /* ctorZero */;
  0 /* ctorZero */;
  0 /* ctorZero */;
  0 /* ctorZero */;
  0 /* ctorZero */;
  0 /* ctorZero */;
  0 /* ctorZero */;
  0 /* ctorZero */;
  0 /* ctorZero */;
  return;
}

// ===== 修复: 补回被误删的函数占位 (2) =====
void RedPackData::GetDataFromNet(URL_REDPACK * p1, int p2, long long p3, bool p4)
{
  undefined4 p7 = 0;

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
    if (p7 != '\0') {
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
    piVar4 = (int *)func_0079e2fc(0x30);
    0 /* ctorZero */;
    iVar1 = (undefined4)(intptr_t)(g_004a3fc8);
    *(char *)(piVar4 + 5) = p7;
    piVar4[6] = (undefined4)(intptr_t)p1;
    *piVar4 = *(int *)(iVar1 + 0x4a3f70) + 8;
    piVar4[7] = *(int *)(g_004a3fcc + 0x4a3f7e) + 0xc;
    iVar1 = (undefined4)(intptr_t)(((RedPackDataGet *)(piVar4))->init(p2, p4));
    if (iVar1 == 0) {
      (**(code **)(*(int *)(piVar4) + (8)))(piVar4);
    }
    else {
      ((cocos2d::CCObject *)(piVar4))->autorelease();
    }
  }
  return;
}

void RedPackData::PrintRedPackDatainfo(RedPackInfo * p1) const
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
