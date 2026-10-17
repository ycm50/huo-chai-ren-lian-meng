#include "SuitEquipItemData.h"
#include "CCString.h"
#include "DataCacheManager.h"
#include "SuitEquipBuffData.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
using namespace cocos2d;
// 兜底声明
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2dc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4bc(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e62c(...);
extern "C" long long func_0079e6c0(...);
extern "C" long long func_0079e784(...);
extern "C" long long func_0079e874(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long _DAT_004aa988;
extern "C" unsigned long _DAT_004aa98c;
extern "C" unsigned long _DAT_004aa990;
extern "C" unsigned long _DAT_004aa994;
extern "C" unsigned long _DAT_004aa998;
extern "C" unsigned long _DAT_004aa99c;
extern "C" unsigned long _DAT_004aaa34;
extern "C" unsigned long _DAT_004aaa38;
extern "C" unsigned long _DAT_004aaa3c;
extern "C" unsigned long _DAT_004aaa40;
extern "C" unsigned long _DAT_004aac04;
extern "C" unsigned long _DAT_004aac08;
extern "C" unsigned long _DAT_004aac0c;
extern "C" unsigned long extraout_r3;
extern "C" unsigned long g_004aa988;
extern "C" unsigned long g_004aa98c;
extern "C" unsigned long g_004aa990;
extern "C" unsigned long g_004aa994;
extern "C" unsigned long g_004aa998;
extern "C" unsigned long g_004aa99c;
extern "C" unsigned long g_004aaa34;
extern "C" unsigned long g_004aaa38;
extern "C" unsigned long g_004aaa3c;
extern "C" unsigned long g_004aaa40;
extern "C" unsigned long g_004aac04;
extern "C" unsigned long g_004aac08;
extern "C" unsigned long g_004aac0c;
undefined4 SuitEquipItemData::isBuffOneContains(int p1)
{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)(((int)this) + 8);
  do {
    if (*(int **)(((int)this) + 0xc) == piVar2) {
      return 0;
    }
    iVar1 = (int)*(int *)&(*piVar2);
    piVar2 = piVar2 + 1;
  } while (p1 != iVar1);
  return 1;
}


SuitEquipItemData::~SuitEquipItemData()
{
  func_0079e2bc(((int)this) + 0x1c);
  func_0079e2bc(((int)this) + 0x18);
  ((std::vector<int, std::allocator<int>> *)((int)this) + 8)->~vector();
  func_0079e2bc(((int)this) + 4);
  return;
}

SuitEquipItemData::SuitEquipItemData()
{
  int iVar1;
  int iVar2;
  
  iVar1 = g_004aaa38;
  iVar2 = g_004aaa34;
  *(int *)((int)this + 4*(2)) = 0;
  iVar2 = *(int *)(iVar2 + 0x4aa9d8);
  *(int *)((int)this + 4*(3)) = 0;
  *(int *)((int)this + 4*(4)) = 0;
  iVar2 = iVar2 + 0xc;
  *(int *)((int)this + 4*(1)) = iVar2;
  *(int *)((int)this + 4*(6)) = iVar2;
  *(int *)((int)this + 4*(7)) = iVar2;
  *(int *)this = 0;
  func_0079e2dc(((int)this) + 1,iVar1 + 0x4aa9ec);
  iVar2 = g_004aaa3c;
  *(int *)((int)this + 4*(3)) = *(int *)((int)this + 4*(2));
  *(int *)((int)this + 4*(5)) = 0;
  func_0079e2dc(((int)this) + 6,iVar2 + 0x4aaa04);
  func_0079e2dc(((int)this) + 7,g_004aaa40 + 0x4aaa10);
  return;
}

// ===== 修复: 补回被误删的函数占位 (2) =====
void SuitEquipItemData::getDesc(int p1, SuitEquipActivatedType p2)
{
  undefined4 p4 = 0;

  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *extraout_r3;
  int iVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  int iStack_24;
  int iStack_20;
  
  func_0079e45c(((int)this),g_004aa988 + 0x4aa888,&iStack_24);
  if (p4 == 2) {
    uVar7 = (undefined4)(*(undefined4 *)(p1 + 0x14));
    p1 = p1 + 0x1c;
  }
  else {
    uVar7 = (undefined4)(0);
    if (p4 != 1) goto LAB_004aa8c8;
    puVar5 = *(undefined4 **)(p1 + 8);
    if (*(int *)(p1 + 0xc) - (int)puVar5 >> 2 == 0) {
      func_0079e784("vector::_M_range_check: __n (which is %zu) >= this->size() (which is %zu)",0);
      puVar5 = extraout_r3;
    }
    uVar7 = (undefined4)(*puVar5);
    p1 = p1 + 0x18;
  }
  func_0079e52c(((int)this),p1);
LAB_004aa8c8:
  piVar1 = (int *)((DataCacheManager *)this)->shareManager();
  uVar2 = (undefined4)((**(code **)(*(int *)(piVar1) + (0xb8)))());
  iVar3 = (undefined4)((void)(((SuitEquipBuffData *)(uVar2))->getItemByIdAndLv(uVar7, p2)),(intptr_t)0);
  func_0079e53c(auStack_2c,((int)this));
  func_0079e45c(auStack_28,g_004aa990 + 0x4aa8f2,auStack_30);
  0 /* ctorZero */;
  func_0079e2bc(auStack_28);
  func_0079e2bc(auStack_2c);
  func_0079e2dc(((int)this),g_004aa994 + 0x4aa914);
  for (iVar6 = (undefined4)(intptr_t)(iStack_24); iVar6 != iStack_20; iVar6 = iVar6 + 4) {
    iVar4 = (undefined4)(intptr_t)(func_0079e4bc(iVar6,"value"));
    if (iVar4 == 0) {
      uVar8 = (undefined4)(intptr_t)(func_0079e62c(*(undefined4 *)(iVar3 + 0xc)));
      uVar7 = (undefined4)((undefined4)((ulonglong)uVar8 >> 0x20));
      cocos2d::CCString::createWithFormat((char const*)"%.2f", uVar7, (int)uVar8, uVar7);
      uVar7 = (undefined4)(((cocos2d::CCString *)this)->getCString());
      func_0079e2dc(iVar6,uVar7);
    }
    func_0079e874(((int)this),iVar6);
  }
  ((std::vector<std::string, std::allocator<std::string>> *)(&iStack_24))->~vector();
  return;
}

void SuitEquipItemData::initWithData(int& p1, char** p2)
{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [4];
  int iStack_30;
  undefined1 auStack_2c [4];
  undefined4 uStack_28;
  undefined4 *puStack_24;
  undefined4 *puStack_20;
  
  iVar2 = (int)*(int *)&(*(int *)p1);
  *(int *)p1 = iVar2 + 1;
  uVar1 = (undefined4)(func_0079e6c0(*(undefined4 *)((iVar2 + 1) * 4 + p2)));
  *(int *)this = uVar1;
  iVar2 = (int)*(int *)&(*(int *)p1);
  *(int *)p1 = iVar2 + 1;
  func_0079e2dc(((int)this) + 1,*(undefined4 *)((iVar2 + 1) * 4 + p2));
  iVar2 = (int)*(int *)&(*(int *)p1);
  *(int *)p1 = iVar2 + 1;
  func_0079e45c(auStack_34,*(undefined4 *)((iVar2 + 1) * 4 + p2),&puStack_24);
  iVar2 = (int)*(int *)&(*(int *)p1);
  *(int *)p1 = iVar2 + 1;
  uVar1 = (undefined4)(func_0079e6c0(*(undefined4 *)((iVar2 + 1) * 4 + p2)));
  *(int *)((int)this + 4*(5)) = uVar1;
  iVar2 = (int)*(int *)&(*(int *)p1);
  *(int *)p1 = iVar2 + 1;
  func_0079e2dc(((int)this) + 6,*(undefined4 *)((iVar2 + 1) * 4 + p2));
  iVar2 = (int)*(int *)&(*(int *)p1);
  *(int *)p1 = iVar2 + 1;
  func_0079e2dc(((int)this) + 7,*(undefined4 *)((iVar2 + 1) * 4 + p2));
  *(int *)p1 = *(int *)p1 + 1;
  iStack_30 = (undefined4)(intptr_t)(*(int *)(g_004aac04 + 0x4aab6a) + 0xc);
  func_0079e53c(auStack_2c,auStack_34);
  func_0079e45c(&uStack_28,g_004aac08 + 0x4aab7c,auStack_38);
  0 /* ctorZero */;
  func_0079e2bc(&uStack_28);
  func_0079e2bc(auStack_2c);
  for (puVar3 = puStack_24; puVar3 != puStack_20; puVar3 = puVar3 + 1) {
    iVar2 = (undefined4)(intptr_t)(func_0079e4bc(puVar3,g_004aac0c + 0x4aaba6));
    if (iVar2 != 0) {
      uStack_28 = (undefined4)(func_0079e6c0(*puVar3));
      ((std::vector<int, std::allocator<int>> *)(((int)this) + 2))->push_back(*(int const*)&uStack_28);
    }
  }
  ((std::vector<std::string, std::allocator<std::string>> *)(&puStack_24))->~vector();
  func_0079e2bc(&iStack_30);
  func_0079e2bc(auStack_34);
  return;
}
