#include "MainFindPasswordData.h"
#include "CCObject.h"
#include "HttpResponse.h"
#include "HttpClient.h"
#include "BLLanguage.h"
#include "MainFindPasswordDataGet.h"
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
extern "C" unsigned long _DAT_0048d1d4;
extern "C" unsigned long _DAT_0048d1d8;
extern "C" unsigned long _DAT_0048d1dc;
extern "C" unsigned long _DAT_0048da08;
extern "C" unsigned long _DAT_0048da0c;
extern "C" unsigned long g_0048d1d4;
extern "C" unsigned long g_0048d1d8;
extern "C" unsigned long g_0048d1dc;
extern "C" unsigned long g_0048da08;
extern "C" unsigned long g_0048da0c;
MainFindPasswordData::~MainFindPasswordData()
{
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  func_0079e2bc(((int)this) + 1);
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  **(undefined4 **)(g_0048d1dc + 0x48d1ce) = 0;
  return;
}

void MainFindPasswordData::rePassword(std::string p1)
{
  return;
}

// ===== 修复: 补回被误删的函数占位 (5) =====
void MainFindPasswordData::rePasswordCallback(cocos2d::extension::CCHttpClient* p1, cocos2d::extension::CCHttpResponse* p2)
{
  return;
}

void MainFindPasswordData::setCheckDelegate(CEMainFindPasswordDataDelegate* p1)
{
  *(undefined4 *)(((int)this) + 8) = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  return;
}

void MainFindPasswordData::CheckSuccess()
{
  undefined4 p3 = 0;
  undefined4 p4 = 0;

  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(((int)this) + 8);
  if (puVar1 != 0) {
    (**(code **)*puVar1)(puVar1,((int)this),p3,*(code **)*puVar1,p4);
  }
  return;
}

void MainFindPasswordData::RePassWord()
{
  undefined4 p3 = 0;
  undefined4 p4 = 0;

  int *piVar1;
  
  piVar1 = *(int **)(((int)this) + 8);
  if (piVar1 != 0) {
    (**(code **)(*(int *)(piVar1) + (4)))(piVar1,((int)this),p3,*(code **)(*piVar1 + 4),p4);
  }
  return;
}

void MainFindPasswordData::GetDataFromNet(char const* p1, char const* p2, bool p3)
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
    if (p3 != 0) {
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
    piVar4 = (int *)func_0079e2fc(0x20);
    0 /* ctorZero */;
    iVar1 = (undefined4)(intptr_t)(g_0048da0c);
    *(char *)(piVar4 + 5) = (char)p3;
    piVar4[6] = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
    iVar1 = (undefined4)(intptr_t)(*(int *)(iVar1 + 0x48d9c2));
    piVar4[7] = (undefined4)(intptr_t) (undefined4)(intptr_t)p2;
    *piVar4 = iVar1 + 8;
    iVar1 = (undefined4)(intptr_t)(((MainFindPasswordDataGet *)(piVar4))->init());
    if (iVar1 == 0) {
      (**(code **)(*(int *)(piVar4) + (8)))(piVar4);
    }
    else {
      ((cocos2d::CCObject *)(piVar4))->autorelease();
    }
  }
  return;
}
