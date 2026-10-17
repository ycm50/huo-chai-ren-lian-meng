#include "BLMissionChaptersData.h"
#include "CCObject.h"
#include "CCArray.h"
#include "BLLeakUtils.h"
#include "BLMissionChapterItemData.h"
#include "DataManager.h"
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
extern "C" long long func_0079e2dc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e30c(...);
extern "C" long long func_0079e34c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e69c(...);
extern "C" long long func_0079e904(...);
extern "C" long long func_0079e914(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long _DAT_00457868;
extern "C" unsigned long _DAT_0045786c;
extern "C" unsigned long _DAT_004579c4;
extern "C" unsigned long _DAT_004579c8;
extern "C" unsigned long _DAT_00457e1c;
extern "C" unsigned long _DAT_00457e20;
extern "C" unsigned long _DAT_00457e24;
extern "C" unsigned long _DAT_00457e28;
extern "C" unsigned long _DAT_00457e2c;
extern "C" unsigned long _DAT_00457e30;
extern "C" unsigned long _DAT_00457e34;
extern "C" unsigned long _DAT_00457e38;
extern "C" unsigned long _DAT_00457e3c;
extern "C" unsigned long unaff_r6;
extern "C" unsigned long g_00457868;
extern "C" unsigned long g_0045786c;
extern "C" unsigned long g_004579c4;
extern "C" unsigned long g_004579c8;
extern "C" unsigned long g_00457e1c;
extern "C" unsigned long g_00457e20;
extern "C" unsigned long g_00457e24;
extern "C" unsigned long g_00457e28;
extern "C" unsigned long g_00457e2c;
extern "C" unsigned long g_00457e30;
extern "C" unsigned long g_00457e34;
extern "C" unsigned long g_00457e38;
extern "C" unsigned long g_00457e3c;
cocos2d::CCArray* BLMissionChaptersData::getArrayChapters() const
{
  return (cocos2d::CCArray*)(*(undefined4 *)(((int)this) + 0x14));
}

BLMissionChaptersData::~BLMissionChaptersData()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int *piStack_18;
  undefined4 uStack_14;
  
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  if (*(int *)((int)this + 4*(5)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(5)) = 0;
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLMissionChaptersData"),&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLMissionChaptersData::BLMissionChaptersData()
{
  undefined4 p2 = 0;

  int iVar1;
  undefined4 uVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  iVar1 = (undefined4)(intptr_t)(cocos2d::CCArray::create());
  *(int *)((int)this + 4*(5)) = iVar1;
  if (iVar1 != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLMissionChaptersData"),&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

// ===== 修复: 补回被误删的函数占位 (2) =====
void BLMissionChaptersData::setArrayChapters(cocos2d::CCArray* p1)
{
  *(undefined4 *)(((int)this) + 0x14) = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  return;
}

bool BLMissionChaptersData::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
