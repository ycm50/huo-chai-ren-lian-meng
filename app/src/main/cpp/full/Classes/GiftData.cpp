#include "GiftData.h"
#include "CCArray.h"
#include "BLLeakUtils.h"
#include "DataManager.h"
#include "GiftItemData.h"
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
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e60c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long _DAT_0049c8c8;
extern "C" unsigned long _DAT_0049c8cc;
extern "C" unsigned long _DAT_0049c94c;
extern "C" unsigned long _DAT_0049c950;
extern "C" unsigned long _DAT_0049ca00;
extern "C" unsigned long _DAT_0049ca04;
extern "C" unsigned long _DAT_0049ca08;
extern "C" unsigned long _DAT_0049d19c;
extern "C" unsigned long _DAT_0049d1a0;
extern "C" unsigned long g_0049c8c8;
extern "C" unsigned long g_0049c8cc;
extern "C" unsigned long g_0049c94c;
extern "C" unsigned long g_0049c950;
extern "C" unsigned long g_0049ca00;
extern "C" unsigned long g_0049ca04;
extern "C" unsigned long g_0049ca08;
extern "C" unsigned long g_0049d19c;
extern "C" unsigned long g_0049d1a0;
cocos2d::CCArray* GiftData::getArrayGifts() const
{
  return (cocos2d::CCArray*)(*(undefined4 *)(((int)this) + 0x14));
}

void GiftData::setArrayGifts(cocos2d::CCArray* p1)
{
  *(undefined4 *)(((int)this) + 0x14) = (undefined4)(intptr_t)p1;
  return;
}

GiftData::~GiftData()
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
  func_0079e45c(&uStack_14,((intptr_t)"GiftData"),&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}




int * GiftData::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x18)));
  0 /* ctorZero */;
  iVar2 = ((GiftData *)piVar1)->init();
  if (iVar2 == 0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    piVar1 = (int *)0x0;
  }
  else {
    ((cocos2d::CCObject *)piVar1)->autorelease();
  }
  return (int *)(piVar1);
}

// ===== 修复: 补回被误删的函数占位 (3) =====
GiftData::GiftData()
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
  func_0079e45c(&uStack_14,((intptr_t)"GiftData"),&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * GiftData::getGiftItemData(std::string * p1)
{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  int aiStack_1c [2];
  
  uVar5 = (undefined4)(0);
  iVar4 = (undefined4)(intptr_t)(g_0049ca00 + 0x49c964);
  do {
    uVar1 = (undefined4)(((cocos2d::CCArray *)*(undefined4 *)(((int)this) + 0x14))->count());
    if (uVar1 <= uVar5) {
      iVar2 = (undefined4)(intptr_t)(((cocos2d::CCArray *)*(undefined4 *)(((int)this) + 0x14))->objectAtIndex(0));
      piVar3 = (int *)0x0;
      if (iVar2 != 0) {
        piVar3 = (int *)func_0079e55c(iVar2,*(undefined4 *)(iVar4 + g_0049ca04),
                                        *(undefined4 *)(iVar4 + g_0049ca08),0);
      }
      return (int *)(piVar3);
    }
    iVar2 = (undefined4)(intptr_t)(((cocos2d::CCArray *)*(undefined4 *)(((int)this) + 0x14))->objectAtIndex((unsigned int)uVar5));
    if ((iVar2 != 0) &&
       (piVar3 = (int *)func_0079e55c(iVar2,*(undefined4 *)(iVar4 + g_0049ca04),
                                        *(undefined4 *)(iVar4 + g_0049ca08),0),
       piVar3 != (int *)0x0)) {
      (**(code **)(*(int *)(piVar3) + (0x30)))(aiStack_1c,piVar3);
      bVar6 = (undefined4)(intptr_t)(false);
      if (*(int *)(aiStack_1c[0] + -0xc) == *(int *)(*(int *)p1 + -0xc)) {
        iVar2 = (undefined4)(intptr_t)(func_0079e60c());
        bVar6 = (undefined4)(intptr_t)(iVar2 == 0);
      }
      func_0079e2bc(aiStack_1c);
      if (bVar6) {
        return (int *)(piVar3);
      }
    }
    uVar5 = (undefined4)(uVar5 + 1);
  } while( true );
}

bool GiftData::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
