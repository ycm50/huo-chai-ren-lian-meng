#include "MainPauseCheckData.h"
#include "CCObject.h"
#include "BLLanguage.h"
#include "MainPauseCheckDataGet.h"
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
extern "C" unsigned long _DAT_0048e7c0;
extern "C" unsigned long _DAT_0048e7c4;
extern "C" unsigned long _DAT_0048e7c8;
extern "C" unsigned long _DAT_0048ec98;
extern "C" unsigned long _DAT_0048ec9c;
extern "C" unsigned long g_0048e7c0;
extern "C" unsigned long g_0048e7c4;
extern "C" unsigned long g_0048e7c8;
extern "C" unsigned long g_0048ec98;
extern "C" unsigned long g_0048ec9c;
MainPauseCheckData::~MainPauseCheckData()
{
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  func_0079e2bc(((int)this) + 2);
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  **(undefined4 **)(g_0048e7c8 + 0x48e7bc) = 0;
  return;
}

// ===== 修复: 补回被误删的函数占位 (4) =====
void MainPauseCheckData::setCheckDelegate(CEMainPauseCheckDataDelegate* p1)
{
  *(undefined4 *)(((int)this) + 4) = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  return;
}

void MainPauseCheckData::CheckSuccess()
{
  undefined4 p3 = 0;
  undefined4 p4 = 0;

  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(((int)this) + 4);
  if (puVar1 != 0) {
    (**(code **)*puVar1)(puVar1,((int)this),p3,*(code **)*puVar1,p4);
  }
  return;
}

void MainPauseCheckData::CheckFailed()
{
  undefined4 p3 = 0;
  undefined4 p4 = 0;

  int *piVar1;
  
  piVar1 = *(int **)(((int)this) + 4);
  if (piVar1 != 0) {
    (**(code **)(*(int *)(piVar1) + (4)))(piVar1,((int)this),p3,*(code **)(*piVar1 + 4),p4);
  }
  return;
}

void MainPauseCheckData::GetDataFromNet(bool p1)
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
    iVar1 = (undefined4)(intptr_t)(g_0048ec9c);
    *(char *)(piVar4 + 5) = (char)p1;
    *piVar4 = *(int *)(iVar1 + 0x48ec56) + 8;
    iVar1 = (undefined4)(intptr_t)(((MainPauseCheckDataGet *)(piVar4))->init());
    if (iVar1 == 0) {
      (**(code **)(*(int *)(piVar4) + (8)))(piVar4);
    }
    else {
      ((cocos2d::CCObject *)(piVar4))->autorelease();
    }
  }
  return;
}
