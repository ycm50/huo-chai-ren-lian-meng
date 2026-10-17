#include "BLActivityManager.h"
#include "ActivityData.h"
#include "ActivityItemData.h"
#include "BLLeakUtils.h"
#include "DataManager.h"
#include "PlatformHelp.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <new>   // ghost_fix.js 自动补齐
static BLActivityManager *s_singleton_1 = 0;   /* SINGLETON_BATCH(R73): 原为裸地址单例 */

using namespace cocos2d;
// 兜底声明
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e69c(...);
extern "C" long long func_0079e6c0(...);
extern "C" long long func_0079e874(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_004eff14;
extern "C" unsigned long UNK_004eff44;
extern "C" unsigned long UNK_004f0418;
extern "C" unsigned long _DAT_004f0000;
extern "C" unsigned long _DAT_004f0004;
extern "C" unsigned long _DAT_004f0044;
extern "C" unsigned long _DAT_004f0048;
extern "C" unsigned long _DAT_004f004c;
extern "C" unsigned long _DAT_004f036c;
extern "C" unsigned long _DAT_004f0370;
extern "C" unsigned long _DAT_004f0374;
extern "C" unsigned long _DAT_004f0378;
extern "C" unsigned long _DAT_004f037c;
extern "C" unsigned long _DAT_004f0380;
extern "C" unsigned long _DAT_004f0384;
extern "C" unsigned long _DAT_004f0388;
extern "C" unsigned long _DAT_004f038c;
extern "C" unsigned long _UNK_004eff74;
extern "C" unsigned long _UNK_004eff78;
extern "C" unsigned long _UNK_004f0424;
extern "C" unsigned long _UNK_004f0428;
extern "C" unsigned long _UNK_004f046c;
extern "C" unsigned long g_004eff14;
extern "C" unsigned long g_004eff44;
extern "C" unsigned long g_004eff74;
extern "C" unsigned long g_004eff78;
extern "C" unsigned long g_004f0000;
extern "C" unsigned long g_004f0004;
extern "C" unsigned long g_004f0044;
extern "C" unsigned long g_004f0048;
extern "C" unsigned long g_004f004c;
extern "C" unsigned long g_004f036c;
extern "C" unsigned long g_004f0370;
extern "C" unsigned long g_004f0374;
extern "C" unsigned long g_004f0378;
extern "C" unsigned long g_004f037c;
extern "C" unsigned long g_004f0380;
extern "C" unsigned long g_004f0384;
extern "C" unsigned long g_004f0388;
extern "C" unsigned long g_004f038c;
extern "C" unsigned long g_004f0418;
extern "C" unsigned long g_004f0424;
extern "C" unsigned long g_004f0428;
extern "C" unsigned long g_004f046c;
cocos2d::CCArray* BLActivityManager::getContents() const
{
  return (cocos2d::CCArray*)(*(undefined4 *)(((int)this) + 0x18));
}

void BLActivityManager::setContents(cocos2d::CCArray* p1)
{
  *(undefined4 *)(((int)this) + 0x18) = (undefined4)(intptr_t)p1;
  return;
}

cocos2d::CCArray* BLActivityManager::getTitles() const
{
  return (cocos2d::CCArray*)(*(undefined4 *)(((int)this) + 0x1c));
}

void BLActivityManager::setTitles(cocos2d::CCArray* p1)
{
  *(undefined4 *)(((int)this) + 0x1c) = (undefined4)(intptr_t)p1;
  return;
}

BLActivityManager::~BLActivityManager()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int *piStack_18;
  undefined4 uStack_14;
  
  /* VPTR_FIX(R87): vptr=(&g_A+g_B)+8 ?? g_ ?? 0 ?? -> ???? SEGV?????? vptr???? */;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  if (*(int *)((int)this + 4*(6)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(6)) = 0;
  }
  if (*(int *)((int)this + 4*(7)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(7)) = 0;
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_004eff44 + g_004eff78,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}


bool BLActivityManager::init()
{
  return 1;
}

undefined4 BLActivityManager::share()
{
  undefined4 uVar1;
  
  if (s_singleton_1 == 0) {
    s_singleton_1 = new BLActivityManager();
    s_singleton_1->init();
  }
  return (undefined4)(intptr_t)s_singleton_1;
}


void BLActivityManager::addContentNum(ACTIVITY_COUNT_TYPE p1, int p2)
{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined4 *puVar8;
  
  if (*(int *)(((int)this) + 0x18) != 0) {
    piVar7 = *(int **)(*(int *)(((int)this) + 0x18) + 0x14);
    iVar5 = (int)*(int *)&(*piVar7);
    if (iVar5 != 0) {
      puVar8 = (undefined4 *)piVar7[2];
      puVar6 = puVar8 + iVar5 + g_004f0424;
      for (; (puVar8 <= puVar6 && (piVar7 = (int *)*puVar8, piVar7 != (int *)0x0));
          puVar8 = puVar8 + 1) {
        iVar5 = (**(code **)(*piVar7 + 0x30))(piVar7);
        if (iVar5 == p1) {
          iVar5 = (**(code **)(*piVar7 + 0x58))(piVar7);
          iVar1 = (**(code **)(*piVar7 + 0x28))(piVar7);
          ((ActivityItemData *)piVar7)->updateRealNum(p2);
          iVar2 = (**(code **)(*piVar7 + 0x58))(piVar7);
          iVar3 = (**(code **)(*piVar7 + 0x28))(piVar7);
          if ((iVar5 < iVar1) && (iVar3 <= iVar2)) {
            *(int *)(((int)this) + 0x14) = *(int *)(((int)this) + 0x14) + 1;
            uVar4 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
            ((cocos2d::CCNotificationCenter *)uVar4)->postNotification((char const*)&g_004f0418 + g_004f0428);
          }
        }
      }
    }
  }
  return;
}

int * BLActivityManager::getContentByID(int p1)
{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  piVar1 = (int *)0x0;
  if (*(int *)(((int)this) + 0x18) != 0) {
    piVar2 = *(int **)(*(int *)(((int)this) + 0x18) + 0x14);
    iVar3 = (int)*(int *)&(*piVar2);
    piVar1 = (int *)0x0;
    if (iVar3 != 0) {
      puVar5 = (undefined4 *)piVar2[2];
      puVar4 = puVar5 + iVar3 + g_004f046c;
      while (((puVar5 <= puVar4 && (piVar2 = (int *)*puVar5, piVar2 != (int *)0x0)) &&
             (iVar3 = (**(code **)(*piVar2 + 0x18))(piVar2), piVar1 = piVar2, iVar3 != p1))) {
        puVar5 = puVar5 + 1;
      }
    }
  }
  return (int *)(piVar1);
}

void BLActivityManager::updateDataToDB()
{
  return;
}

// ===== 修复: 补回被误删的函数占位 (2) =====
BLActivityManager::BLActivityManager()
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
  *(int *)((int)this + 4*(6)) = iVar1;
  if (iVar1 != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  iVar1 = (undefined4)(intptr_t)(cocos2d::CCArray::create());
  *(int *)((int)this + 4*(7)) = iVar1;
  if (iVar1 != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  *(int *)((int)this + 4*(5)) = 0;
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLActivityManager"),&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

void BLActivityManager::initData()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
