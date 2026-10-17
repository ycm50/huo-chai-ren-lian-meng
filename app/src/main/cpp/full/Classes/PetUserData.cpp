#include "PetUserData.h"
#include "DBUtil.h"
#include "DataCacheManager.h"
#include "DataManager.h"
#include "PetBuffItemData.h"
#include "PetUserItemData.h"
#include "SkillUserData.h"
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
extern "C" long long func_0079e30c(...);
extern "C" long long func_0079e43c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e46c(...);
extern "C" long long func_0079e47c(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e69c(...);
extern "C" long long func_0079e784(...);
extern "C" long long func_0079eac4(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long _DAT_004a1284;
extern "C" unsigned long _DAT_004a15e4;
extern "C" unsigned long _DAT_004a15e8;
extern "C" unsigned long _DAT_004a15ec;
extern "C" unsigned long _DAT_004a15f0;
extern "C" unsigned long _DAT_004a15f4;
extern "C" unsigned long _DAT_004a15f8;
extern "C" unsigned long _DAT_004a15fc;
extern "C" unsigned long _DAT_004a1600;
extern "C" unsigned long _DAT_004a1604;
extern "C" unsigned long _DAT_004a1804;
extern "C" unsigned long _DAT_004a1808;
extern "C" unsigned long _DAT_004a180c;
extern "C" unsigned long unaff_r5;
extern "C" unsigned long g_004a1284;
extern "C" unsigned long g_004a15e4;
extern "C" unsigned long g_004a15e8;
extern "C" unsigned long g_004a15ec;
extern "C" unsigned long g_004a15f0;
extern "C" unsigned long g_004a15f4;
extern "C" unsigned long g_004a15f8;
extern "C" unsigned long g_004a15fc;
extern "C" unsigned long g_004a1600;
extern "C" unsigned long g_004a1604;
extern "C" unsigned long g_004a1804;
extern "C" unsigned long g_004a1808;
extern "C" unsigned long g_004a180c;
undefined4 PetUserData::checkIsSkillInUse(int p1)
{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)(((int)this) + 0x18);
  do {
    if (*(int **)(((int)this) + 0x1c) == piVar2) {
      return 0;
    }
    iVar1 = (int)*(int *)&(*piVar2);
    piVar2 = piVar2 + 1;
  } while (iVar1 != p1);
  return 1;
}

int PetUserData::getPetWithSkill(int p1)
{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  piVar3 = (int *)*(int *)this;
  do {
    if (piVar3 == (int *)*(int *)((int)this + 4*(1))) {
      return 0;
    }
    iVar1 = (int)*(int *)&(*piVar3);
    if (iVar1 != 0) {
      for (piVar2 = *(int **)(iVar1 + 0x10); piVar2 != *(int **)(iVar1 + 0x14); piVar2 = piVar2 + 1)
      {
        if (((int *)*piVar2 != (int *)0x0) && (*(int *)*piVar2 == p1)) {
          return iVar1;
        }
      }
    }
    piVar3 = piVar3 + 1;
  } while( true );
}

int PetUserData::getUsedSkillData(int p1)
{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  piVar1 = (int *)*(int *)this;
  do {
    if (piVar1 == (int *)*(int *)((int)this + 4*(1))) {
      return 0;
    }
    iVar2 = (int)*(int *)&(*piVar1);
    if (iVar2 != 0) {
      for (piVar4 = *(int **)(iVar2 + 0x10); piVar4 != *(int **)(iVar2 + 0x14); piVar4 = piVar4 + 1)
      {
        piVar3 = (int *)*piVar4;
        if ((piVar3 != (int *)0x0) && (*piVar3 == p1)) {
          ((PetBuffItemData *)piVar3[2])->updateAttrByLv(piVar3[1]);
          return *piVar4;
        }
      }
    }
    piVar1 = piVar1 + 1;
  } while( true );
}




PetUserData::~PetUserData()
/* DESTROYAUX_V1: 1 处降级 */
{
  int *piVar1;
  int iVar2;
  
  for (piVar1 = (int *)*(int *)this; piVar1 != (int *)*(int *)((int)this + 4*(1)); piVar1 = piVar1 + 1) {
    iVar2 = (int)*(int *)&(*piVar1);
    if (iVar2 != 0) {
      ((PetUserItemData *)(iVar2))->~PetUserItemData();
      func_0079e2cc(iVar2);
    }
    *piVar1 = 0;
  }
  iVar2 = (undefined4)(intptr_t)(*(int *)((int)this + 4*(3)));
  *(int *)((int)this + 4*(1)) = *(int *)this;
  (void)0; /* DESTROYAUX 降级 */
  *(int *)((int)this + 4*(4)) = iVar2;
  *(int *)((int)this + 4*(7)) = *(int *)((int)this + 4*(6));
  if (*(int *)((int)this + 4*(6)) != 0) {
    func_0079e2cc();
  }
  ((std::vector<std::string, std::allocator<std::string>> *)(((int)this) + 3))->~vector();
  if (*(int *)this != 0) {
    func_0079e2cc();
  }
  return;
}






PetUserData::PetUserData()
/* DESTROYAUX_V1: 1 处降级 */
{
  *(int *)this = 0;
  *(int *)((int)this + 4*(1)) = 0;
  *(int *)((int)this + 4*(2)) = 0;
  *(int *)((int)this + 4*(3)) = 0;
  *(int *)((int)this + 4*(4)) = 0;
  *(int *)((int)this + 4*(5)) = 0;
  *(int *)((int)this + 4*(6)) = 0;
  *(int *)((int)this + 4*(7)) = 0;
  *(int *)((int)this + 4*(8)) = 0;
  (void)0; /* DESTROYAUX 降级 */
  *(int *)((int)this + 4*(4)) = 0;
  *(int *)((int)this + 4*(7)) = *(int *)((int)this + 4*(6));
  ((PetUserData *)(((int)this)))->init();
  return;
}

// ===== 修复: 补回被误删的函数占位 (8) =====
int PetUserData::getItemData(std::string p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

undefined8 PetUserData::insertSkillInUse(int p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

undefined8 PetUserData::updateSkillInUse()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;

  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  iVar3 = *(int *)(((int)this) + 0xc);
  *(undefined4 *)(((int)this) + 0x1c) = *(undefined4 *)(((int)this) + 0x18);
  uStack_1c = (undefined4)(p2);
  uStack_18 = (undefined4)(p3);
  for (; iVar3 != *(int *)(((int)this) + 0x10); iVar3 = iVar3 + 4) {
    func_0079e53c(&uStack_1c,iVar3);
    iVar1 = PetUserData::getItemData((std::string)(char*)uStack_1c);
    func_0079e2bc(&uStack_1c);
    if (iVar1 != 0) {
      for (puVar2 = *(undefined4 **)(iVar1 + 0x10); puVar2 != *(undefined4 **)(iVar1 + 0x14);
          puVar2 = puVar2 + 1) {
        if ((undefined4 *)*puVar2 != (undefined4 *)0x0) {
          PetUserData::insertSkillInUse(*(undefined4 *)*puVar2);
        }
      }
    }
  }
  return ghidra_CONCAT44(uStack_1c,((int)this));
}

int PetUserData::isPetFree(std::string p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

undefined4 PetUserData::updateSelectStatus(std::string p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void PetUserData::insertNewPet(std::string p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

undefined8 PetUserData::addPet(std::string p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

bool PetUserData::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
