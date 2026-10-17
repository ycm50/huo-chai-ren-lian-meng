#include "NoticeData.h"
#include "CCObject.h"
#include "NoticeDataGet.h"
#include "UIManager.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
using namespace cocos2d;
// 兜底声明
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2fc(...);
extern "C" unsigned long _DAT_00424e60;
extern "C" unsigned long _DAT_00424e64;
extern "C" unsigned long _DAT_0049a0a8;
extern "C" unsigned long g_00424e60;
extern "C" unsigned long g_00424e64;
extern "C" unsigned long g_0049a0a8;
NoticeData::~NoticeData()
{
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  **(undefined4 **)(g_00424e64 + 0x424e5a) = 0;
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
void NoticeData::GetDataFromNet(bool p1)
{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  
  ((UIManager *)this)->shareManager();
  ((UIManager *)this)->removeGongGaoArrayItem();
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  iVar2 = (undefined4)((void)(((UIManager *)(uVar1))->getUIObject(0x8e)),(intptr_t)0);
  if (iVar2 == 0) {
    uVar1 = (undefined4)(((UIManager *)this)->shareManager());
    ((UIManager *)(uVar1))->showUIById(0x8e);
  }
  piVar3 = (int *)func_0079e2fc(0x18);
  0 /* ctorZero */;
  iVar2 = (undefined4)(intptr_t)(g_0049a0a8);
  *(undefined1 *)(piVar3 + 5) = p1;
  *piVar3 = *(int *)(iVar2 + 0x49a07e) + 8;
  iVar2 = (undefined4)(intptr_t)(((NoticeDataGet *)(piVar3))->init());
  if (iVar2 == 0) {
    (**(code **)(*(int *)(piVar3) + (8)))(piVar3);
  }
  else {
    ((cocos2d::CCObject *)(piVar3))->autorelease();
  }
  return;
}
