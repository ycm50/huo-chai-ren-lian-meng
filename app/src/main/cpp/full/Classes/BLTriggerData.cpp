#include "BLTriggerData.h"
#include "BLLeakUtils.h"
#include "BLMonsterGroupData.h"
#include "DataManager.h"
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
extern "C" long long func_0079e4bc(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e5bc(...);
extern "C" long long func_0079e69c(...);
extern "C" long long func_0079e7e4(...);
extern "C" long long func_0079e824(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long _DAT_0045a71c;
extern "C" unsigned long _DAT_0045a720;
extern "C" unsigned long _DAT_0045a804;
extern "C" unsigned long _DAT_0045a87c;
extern "C" unsigned long _DAT_0045a880;
extern "C" unsigned long _DAT_0045a9a0;
extern "C" unsigned long _DAT_0045a9a4;
extern "C" unsigned long _DAT_0045a9a8;
extern "C" unsigned long _DAT_0045a9ac;
extern "C" unsigned long _DAT_0045a9b0;
extern "C" unsigned long _DAT_0045a9b4;
extern "C" unsigned long _DAT_0045a9b8;
extern "C" unsigned long _DAT_0045aa18;
extern "C" unsigned long g_0045a71c;
extern "C" unsigned long g_0045a720;
extern "C" unsigned long g_0045a804;
extern "C" unsigned long g_0045a87c;
extern "C" unsigned long g_0045a880;
extern "C" unsigned long g_0045a9a0;
extern "C" unsigned long g_0045a9a4;
extern "C" unsigned long g_0045a9a8;
extern "C" unsigned long g_0045a9ac;
extern "C" unsigned long g_0045a9b0;
extern "C" unsigned long g_0045a9b4;
extern "C" unsigned long g_0045a9b8;
extern "C" unsigned long g_0045aa18;
int BLTriggerData::getID() const
{
  return *(undefined4 *)(((int)this) + 0x14);
}

void BLTriggerData::setID(int p1)
{
  *(undefined4 *)(((int)this) + 0x14) = p1;
  return;
}

float BLTriggerData::getPosX() const
{
  return *(undefined4 *)(((int)this) + 0x18);
}

void BLTriggerData::setPosX(float p1)
{
  *(undefined4 *)(((int)this) + 0x18) = p1;
  return;
}

bool BLTriggerData::getISAppear() const
{
  return *(undefined1 *)(((int)this) + 0x1c);
}

void BLTriggerData::setISAppear(bool p1)
{
  *(undefined1 *)(((int)this) + 0x1c) = p1;
  return;
}

cocos2d::CCArray* BLTriggerData::getArrayMonsterGroup() const
{
  return (cocos2d::CCArray*)(*(undefined4 *)(((int)this) + 0x2c));
}

void BLTriggerData::setArrayMonsterGroup(cocos2d::CCArray* p1)
{
  *(undefined4 *)(((int)this) + 0x2c) = (undefined4)(intptr_t)p1;
  return;
}

bool BLTriggerData::init()
{
  return 1;
}

BLTriggerData::~BLTriggerData()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;

  undefined4 uVar1;
  int *piStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  piStack_20 = (int *)((int)this);
  uStack_1c = (undefined4)(p2);
  uStack_18 = (undefined4)(p3);
  if (*(int *)((int)this + 4*(0xb)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0xb)) = 0;
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_1c,((intptr_t)"BLTriggerData"),&piStack_20);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_1c);
  func_0079e2bc(&uStack_1c);
  ((std::vector<std::string, std::allocator<std::string>> *)((int)this) + 8)->~vector();
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLTriggerData::initMonsterGroupData()
{
  int iVar1;
  int *piVar2;
  uint uVar3;
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  int iStack_24;
  int iStack_20;
  
  uVar3 = (undefined4)(0);
  while( true ) {
    if ((uint)(*(int *)(((int)this) + 0x24) - *(int *)(((int)this) + 0x20) >> 2) <= uVar3) break;
    func_0079e53c(auStack_2c,*(int *)(((int)this) + 0x20) + uVar3 * 4);
    iVar1 = func_0079e4bc(auStack_2c,g_0045a804 + 0x45a766);
    if (iVar1 != 0) {
      piVar2 = (int *)((long long)::operator new((size_t)(0x50)));
      0 /* ctorZero */;
      iVar1 = ((BLMonsterGroupData *)piVar2)->init();
      if (iVar1 == 0) {
        (**(code **)(*piVar2 + 8))(piVar2);
        piVar2 = (int *)0x0;
      }
      else {
        ((cocos2d::CCObject *)piVar2)->autorelease();
      }
      func_0079e53c(auStack_28,auStack_2c);
      ((BLMonsterGroupData *)piVar2)->initWith((std::string)(char*)auStack_28);
      func_0079e2bc(auStack_28);
      (**(code **)(*piVar2 + 0x58))(&iStack_24,piVar2);
      iVar1 = iStack_20 - iStack_24;
      ((std::vector<std::string, std::allocator<std::string>> *)&iStack_24)->~vector();
      if (iVar1 >> 2 != 0) {
        ((cocos2d::CCArray *)*(undefined4 *)(((int)this) + 0x2c))->addObject((cocos2d::CCObject*)piVar2);
      }
    }
    func_0079e2bc(auStack_2c);
    uVar3 = (undefined4)(uVar3 + 1);
  }
  return;
}

BLTriggerData::BLTriggerData()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = (undefined4)(intptr_t)(*(int *)(g_0045a87c + 0x45a818));
  *(int *)((int)this + 4*(6)) = 0;
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(8)) = 0;
  *(int *)((int)this + 4*(9)) = 0;
  *(int *)((int)this + 4*(10)) = 0;
  *(int *)((int)this + 4*(5)) = 0;
  *(undefined1 *)(((int)this) + 7) = 0;
  iVar2 = (undefined4)(intptr_t)(cocos2d::CCArray::create());
  *(int *)((int)this + 4*(0xb)) = iVar2;
  if (iVar2 != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLTriggerData"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

// ===== 修复: 补回被误删的函数占位 (3) =====
void BLTriggerData::initWith(int p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLTriggerData::setMonsterGroups(std::vector<std::string, std::allocator<std::string>> p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

int BLTriggerData::getMonsterGroups() const
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
