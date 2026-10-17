#include "BLMissionChapterItemData.h"
#include "BLLeakUtils.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <new>   // ghost_fix.js 自动补齐
using namespace cocos2d;
// 兜底声明
extern "C" long long func_0045789e(...);
extern "C" long long func_004578d0(...);
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2dc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e5bc(...);
extern "C" long long func_0079e68c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long _DAT_00457964;
extern "C" unsigned long _DAT_00457a70;
extern "C" unsigned long _DAT_00457a74;
extern "C" unsigned long _DAT_00457b10;
extern "C" unsigned long _DAT_00457b14;
extern "C" unsigned long _DAT_00457b18;
extern "C" unsigned long _DAT_00457b68;
extern "C" unsigned long _DAT_00457ce8;
extern "C" unsigned long g_00457964;
extern "C" unsigned long g_00457a70;
extern "C" unsigned long g_00457a74;
extern "C" unsigned long g_00457b10;
extern "C" unsigned long g_00457b14;
extern "C" unsigned long g_00457b18;
extern "C" unsigned long g_00457b68;
extern "C" unsigned long g_00457ce8;
void BLMissionChapterItemData::setName(std::string * p1)
{
  func_0079e52c(((int)this) + 0x18);
  return;
}

void BLMissionChapterItemData::setID(std::string * p1)
{
  func_0079e52c(((int)this) + 0x14);
  return;
}

std::string BLMissionChapterItemData::getName() const
{ return *(std::string *)(((int)this) + 0x18); }

std::string BLMissionChapterItemData::getID() const
{ return *(std::string *)(((int)this) + 0x14); }

int BLMissionChapterItemData::getMissions() const
{
  undefined4 p2 = 0;

  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(p2 + 0x20) - *(int *)(p2 + 0x1c);
  *(int *)this = 0;
  *(int *)((int)this + 4*(1)) = 0;
  *(int *)((int)this + 4*(2)) = 0;
  iVar1 = 0;
  if (iVar2 >> 2 != 0) {
    if (g_00457964 < (uint)(iVar2 >> 2)) {
      func_0079e5bc();
    }
    iVar1 = ((long long)::operator new((size_t)(iVar2)));
  }
  *(int *)this = iVar1;
  *(int *)((int)this + 4*(1)) = iVar1;
  *(int *)((int)this + 4*(2)) = iVar1 + iVar2;
  iVar1 = func_004578d0(*(undefined4 *)(p2 + 0x1c),*(undefined4 *)(p2 + 0x20));
  *(int *)((int)this + 4*(1)) = iVar1;
  return ((int)this);
}

bool BLMissionChapterItemData::init()
{
  return 1;
}


BLMissionChapterItemData::~BLMissionChapterItemData()
{
  undefined4 uVar1;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [8];
  
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(auStack_1c,((intptr_t)"BLMissionChapterItemData"),auStack_20);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)auStack_1c);
  func_0079e2bc(auStack_1c);
  ((std::vector<cocos2d::CCPoint, std::allocator<cocos2d::CCPoint>> *)((int)this) + 10)->~vector();
  ((std::vector<std::string, std::allocator<std::string>> *)((int)this) + 7)->~vector();
  func_0079e2bc(((int)this) + 6);
  func_0079e2bc(((int)this) + 5);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLMissionChapterItemData::BLMissionChapterItemData()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  iVar2 = *(int *)(g_00457b14 + 0x457aa4) + 0xc;
  *(int *)((int)this + 4*(5)) = iVar2;
  *(int *)((int)this + 4*(6)) = iVar2;
  *(int *)((int)this + 4*(7)) = 0;
  *(int *)((int)this + 4*(8)) = 0;
  *(int *)((int)this + 4*(9)) = 0;
  *(int *)((int)this + 4*(10)) = 0;
  *(int *)((int)this + 4*(0xb)) = 0;
  *(int *)((int)this + 4*(0xc)) = 0;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLMissionChapterItemData"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int BLMissionChapterItemData::getPositions() const
{
  undefined4 p2 = 0;

  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(p2 + 0x2c) - *(int *)(p2 + 0x28);
  *(int *)this = 0;
  *(int *)((int)this + 4*(1)) = 0;
  *(int *)((int)this + 4*(2)) = 0;
  iVar1 = 0;
  if (iVar2 >> 3 != 0) {
    if (g_00457b68 < (uint)(iVar2 >> 3)) {
      func_0079e5bc();
    }
    iVar1 = ((long long)::operator new((size_t)(iVar2)));
  }
  *(int *)this = iVar1;
  *(int *)((int)this + 4*(1)) = iVar1;
  *(int *)((int)this + 4*(2)) = iVar1 + iVar2;
  iVar1 = func_0045789e(*(undefined4 *)(p2 + 0x28),*(undefined4 *)(p2 + 0x2c));
  *(int *)((int)this + 4*(1)) = iVar1;
  return ((int)this);
}

// ===== 修复: 补回被误删的函数占位 (4) =====
void BLMissionChapterItemData::setMissions(std::vector<std::string, std::allocator<std::string>> * p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMissionChapterItemData::setPositions(std::vector<cocos2d::CCPoint, std::allocator<cocos2d::CCPoint>> * p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMissionChapterItemData::initPosition(std::vector<float, std::allocator<float>> * p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMissionChapterItemData::initWith(char** p1, int& p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
