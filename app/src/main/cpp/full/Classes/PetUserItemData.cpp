#include "PetUserItemData.h"
#include "DBUtil.h"
#include "DataCacheManager.h"
#include "DataManager.h"
#include "PetData.h"
#include "PetItemData.h"
#include "PetSkillData.h"
#include "PetSkillItemData.h"
#include "SkillUserData.h"
#include "Toast.h"
#include "UserData.h"
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
extern "C" long long func_0079e2dc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e6c0(...);
extern "C" long long func_0079e734(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long _DAT_004a0668;
extern "C" unsigned long _DAT_004a072c;
extern "C" unsigned long _DAT_004a0730;
extern "C" unsigned long _DAT_004a0814;
extern "C" unsigned long _DAT_004a0818;
extern "C" unsigned long _DAT_004a081c;
extern "C" unsigned long _DAT_004a0820;
extern "C" unsigned long _DAT_004a0904;
extern "C" unsigned long _DAT_004a0908;
extern "C" unsigned long _DAT_004a0a34;
extern "C" unsigned long _DAT_004a0a38;
extern "C" unsigned long _DAT_004a0a3c;
extern "C" unsigned long _DAT_004a0a98;
extern "C" unsigned long _DAT_004a0b80;
extern "C" unsigned long _DAT_004a0b84;
extern "C" unsigned long _DAT_004a0cc0;
extern "C" unsigned long _DAT_004a0cc4;
extern "C" unsigned long g_004a0668;
extern "C" unsigned long g_004a072c;
extern "C" unsigned long g_004a0730;
extern "C" unsigned long g_004a0814;
extern "C" unsigned long g_004a0818;
extern "C" unsigned long g_004a081c;
extern "C" unsigned long g_004a0820;
extern "C" unsigned long g_004a0904;
extern "C" unsigned long g_004a0908;
extern "C" unsigned long g_004a0a34;
extern "C" unsigned long g_004a0a38;
extern "C" unsigned long g_004a0a3c;
extern "C" unsigned long g_004a0a98;
extern "C" unsigned long g_004a0b80;
extern "C" unsigned long g_004a0b84;
extern "C" unsigned long g_004a0cc0;
extern "C" unsigned long g_004a0cc4;
PetUserItemData::PetUserItemData()
{
  undefined4 p2 = 0;

  undefined4 uStack_c;
  
  uStack_c = (undefined4)(p2);
  func_0079e45c(((int)this),g_004a0668 + 0x4a0650,&uStack_c);
  *(undefined4 *)(((int)this) + 4) = 1;
  *(undefined4 *)(((int)this) + 8) = 0;
  *(undefined1 *)(((int)this) + 0xc) = 0;
  *(undefined4 *)(((int)this) + 0x10) = 0;
  *(undefined4 *)(((int)this) + 0x14) = 0;
  *(undefined4 *)(((int)this) + 0x18) = 0;
  return;
}

PetUserItemData::~PetUserItemData()
{
  int *piVar1;
  int iVar2;
  
  for (piVar1 = *(int **)(((int)this) + 0x10); piVar1 != *(int **)(((int)this) + 0x14); piVar1 = piVar1 + 1)
  {
    iVar2 = (int)*(int *)&(*piVar1);
    if (iVar2 != 0) {
      ((SkillUserData *)iVar2)->~SkillUserData();
      (void)(::operator delete((void *)(iVar2)));
    }
    *piVar1 = 0;
  }
  *(int *)(((int)this) + 0x14) = *(int *)(((int)this) + 0x10);
  if (*(int *)(((int)this) + 0x10) != 0) {
    (void)(::operator delete((void *)(*(int *)(((int)this) + 0x10))));
  }
  func_0079e2bc(((int)this));
  return;
}

int PetUserItemData::checkSkillUpgraceable(int p1)
{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  
  piVar4 = *(int **)(((int)this) + 0x10);
  while( true ) {
    if (piVar4 == *(int **)(((int)this) + 0x14)) {
      return 0;
    }
    piVar3 = (int *)*piVar4;
    if ((piVar3 != 0) && (*piVar3 == p1)) break;
    piVar4 = piVar4 + 1;
  }
  iVar5 = piVar3[1];
  if (*(int *)(((int)this) + 4) <= iVar5) {
    uVar1 = (undefined4)(((Toast *)this)->sharedToast());
    ((Toast *)uVar1)->showToast((char const*)"技能已经到达最高等级");
    return 0;
  }
  piVar4 = (int *)((DataCacheManager *)this)->shareManager();
  uVar1 = (undefined4)((**(code **)(*piVar4 + 0x100))());
  uVar1 = (undefined4)(((PetSkillData *)uVar1)->getItemData(p1));
  uVar1 = (undefined4)(((PetSkillItemData *)uVar1)->getUpgraceCost(iVar5 + 1));
  uVar2 = (undefined4)(((DataManager *)this)->shareDataManager());
  iVar5 = ((DataManager *)uVar2)->isEnoughVirNumber(1, uVar1, 1);
  if (iVar5 == 0) {
    uVar1 = (undefined4)(((Toast *)this)->sharedToast());
    ((Toast *)uVar1)->showToast((char const*)"铜币不足");
    return 0;
  }
  return iVar5;
}

// ===== 修复: 补回被误删的函数占位 (8) =====
void PetUserItemData::updateDB(std::string p1, std::string * p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void PetUserItemData::levelUp()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void PetUserItemData::addExp(int p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

undefined1 PetUserItemData::updateSelect()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void PetUserItemData::resetSkill(PetSkillIndex p1, int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void PetUserItemData::upgraceSkill(int p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

undefined8 PetUserItemData::initSkillNull()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  undefined4 uStack_14;
  
  iVar2 = 2;
  *(undefined4 *)(((int)this) + 0x14) = *(undefined4 *)(((int)this) + 0x10);
  uStack_14 = (undefined4)(p2);
  while( true ) {
    uVar1 = (undefined4)(func_0079e2fc(0xc));
    0 /* ctorZero */;
    uStack_14 = (undefined4)(uVar1);
    ((std::vector<SkillUserData*, std::allocator<SkillUserData*>> *)(((int)this) + 0x10))->push_back(*(SkillUserData* const*)&uStack_14);
    if (iVar2 == 1) break;
    iVar2 = 1;
  }
  return ghidra_CONCAT44(uStack_14,((int)this));
}

void PetUserItemData::initWithData(char** p1, int& p2)
{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_30 [4];
  undefined4 uStack_2c;
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  undefined4 uStack_20;
  undefined1 auStack_1c [8];
  
  iVar2 = (int)*(int *)&(*(int *)p2);
  *(int *)p2 = iVar2 + 1;
  func_0079e2dc(((int)this),*(undefined4 *)((iVar2 + 1) * 4 + p1));
  iVar2 = (int)*(int *)&(*(int *)p2);
  *(int *)p2 = iVar2 + 1;
  uVar1 = (undefined4)(func_0079e6c0(*(undefined4 *)((iVar2 + 1) * 4 + p1)));
  *(undefined4 *)(((int)this) + 4) = uVar1;
  iVar2 = (int)*(int *)&(*(int *)p2);
  *(int *)p2 = iVar2 + 1;
  uVar1 = (undefined4)(func_0079e6c0(*(undefined4 *)((iVar2 + 1) * 4 + p1)));
  *(undefined4 *)(((int)this) + 8) = uVar1;
  iVar2 = (int)*(int *)&(*(int *)p2);
  *(int *)p2 = iVar2 + 1;
  iVar2 = (undefined4)(intptr_t)(func_0079e6c0(*(undefined4 *)((iVar2 + 1) * 4 + p1)));
  *(char *)(((int)this) + 0xc) = '\x01' - (iVar2 == 0);
  iVar2 = (int)*(int *)&(*(int *)p2);
  *(int *)p2 = iVar2 + 1;
  func_0079e45c(auStack_30,*(undefined4 *)((iVar2 + 1) * 4 + p1),auStack_1c);
  *(int *)p2 = *(int *)p2 + 1;
  uVar1 = (undefined4)(func_0079e2fc(0xc));
  0 /* ctorZero */;
  uStack_2c = (undefined4)(uVar1);
  func_0079e53c(auStack_28,auStack_30);
  ((SkillUserData *)(uVar1))->initWithData((std::string *)(char *)auStack_28);
  func_0079e2bc(auStack_28);
  ((std::vector<SkillUserData*, std::allocator<SkillUserData*>> *)(((int)this) + 0x10))->push_back(*(SkillUserData* const*)&uStack_2c);
  func_0079e45c(auStack_24,*(undefined4 *)(*(int *)p2 * 4 + p1),auStack_1c);
  *(int *)p2 = *(int *)p2 + 1;
  uVar1 = (undefined4)(func_0079e2fc(0xc));
  0 /* ctorZero */;
  uStack_20 = (undefined4)(uVar1);
  func_0079e53c(auStack_1c,auStack_24);
  ((SkillUserData *)(uVar1))->initWithData((std::string *)(char *)auStack_1c);
  func_0079e2bc(auStack_1c);
  ((std::vector<SkillUserData*, std::allocator<SkillUserData*>> *)(((int)this) + 0x10))->push_back(*(SkillUserData* const*)&uStack_20);
  func_0079e2bc(auStack_24);
  func_0079e2bc(auStack_30);
  return;
}
