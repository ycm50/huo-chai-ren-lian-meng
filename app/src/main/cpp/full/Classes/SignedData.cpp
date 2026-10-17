#include "SignedData.h"
#include "CCObject.h"
#include "SignedInfo.h"
#include "BLLanguage.h"
#include "DataManager.h"
#include "ItemData.h"
#include "PlatformHelp.h"
#include "SignedDataGet.h"
#include "Toast.h"
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
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e784(...);
extern "C" unsigned long _DAT_00425698;
extern "C" unsigned long _DAT_0042569c;
extern "C" unsigned long _DAT_004256a0;
extern "C" unsigned long _DAT_004a879c;
extern "C" unsigned long _DAT_004a87a0;
extern "C" unsigned long _DAT_004a87a4;
extern "C" unsigned long _DAT_004a87a8;
extern "C" unsigned long _DAT_004a87ac;
extern "C" unsigned long _DAT_004a87b0;
extern "C" unsigned long _DAT_004a87b4;
extern "C" unsigned long _DAT_004a88b0;
extern "C" unsigned long _DAT_004a88b4;
extern "C" unsigned long _DAT_004a88b8;
extern "C" unsigned long _DAT_004a8d58;
extern "C" unsigned long _DAT_004a8d5c;
extern "C" unsigned long extraout_r3;
extern "C" unsigned long g_00425698;
extern "C" unsigned long g_0042569c;
extern "C" unsigned long g_004256a0;
extern "C" unsigned long g_004a879c;
extern "C" unsigned long g_004a87a0;
extern "C" unsigned long g_004a87a4;
extern "C" unsigned long g_004a87a8;
extern "C" unsigned long g_004a87ac;
extern "C" unsigned long g_004a87b0;
extern "C" unsigned long g_004a87b4;
extern "C" unsigned long g_004a88b0;
extern "C" unsigned long g_004a88b4;
extern "C" unsigned long g_004a88b8;
extern "C" unsigned long g_004a8d58;
extern "C" unsigned long g_004a8d5c;
SignedData::~SignedData()
{
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  if (*(int *)((int)this + 4*(3)) != 0) {
    (void)(::operator delete((void *)(*(int *)((int)this + 4*(3)))));
  }
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  **(undefined4 **)(g_004256a0 + 0x425694) = 0;
  return;
}

// ===== 修复: 补回被误删的函数占位 (3) =====
void SignedData::PrintSignedDatainfo(SignedInfo * p1) const
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

undefined4 SignedData::getDimandReplaceHero()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void SignedData::GetDataFromNet(URL_SIGNED * p1, bool p2)
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
    if (p2 != 0) {
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
    iVar1 = (undefined4)(intptr_t)(g_004a8d5c);
    *(char *)(piVar4 + 5) = (char)p2;
    piVar4[6] = (undefined4)(intptr_t)p1;
    *piVar4 = *(int *)(iVar1 + 0x4a8d14) + 8;
    iVar1 = (undefined4)(intptr_t)(((SignedDataGet *)(piVar4))->init());
    if (iVar1 == 0) {
      (**(code **)(*(int *)(piVar4) + (8)))(piVar4);
    }
    else {
      ((cocos2d::CCObject *)(piVar4))->autorelease();
    }
  }
  return;
}
