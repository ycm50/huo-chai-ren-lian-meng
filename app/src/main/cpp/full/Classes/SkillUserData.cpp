#include "SkillUserData.h"
#include "DataCacheManager.h"
#include "PetBuffItemData.h"
#include "PetSkillData.h"
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
extern "C" long long func_0079e34c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4bc(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e6c0(...);
extern "C" long long func_0079e904(...);
extern "C" long long func_0079e914(...);
extern "C" unsigned long _DAT_004a063c;
extern "C" unsigned long _DAT_004a0640;
extern "C" unsigned long _DAT_004a1070;
extern "C" unsigned long _DAT_004a1074;
extern "C" unsigned long g_004a063c;
extern "C" unsigned long g_004a0640;
extern "C" unsigned long g_004a1070;
extern "C" unsigned long g_004a1074;
SkillUserData::SkillUserData()
{
  *(int *)this = 0;
  *(int *)((int)this + 4*(1)) = 1;
  *(int *)((int)this + 4*(2)) = 0;
  return;
}

SkillUserData::~SkillUserData()
{
  int iVar1;
  
  iVar1 = *(int *)(((int)this) + 8);
  if (iVar1 != 0) {
    ((PetBuffItemData *)iVar1)->~PetBuffItemData();
    (void)(::operator delete((void *)(iVar1)));
  }
  return;
}

void SkillUserData::resetSkill(int p1)
{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4*(2));
  *(int *)this = p1;
  *(int *)((int)this + 4*(1)) = 1;
  if (iVar3 != 0) {
    ((PetBuffItemData *)iVar3)->~PetBuffItemData();
    (void)(::operator delete((void *)(iVar3)));
  }
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x34))));
  0 /* ctorZero */;
  *(int *)((int)this + 4*(2)) = uVar1;
  piVar2 = (int *)((DataCacheManager *)this)->shareManager();
  uVar1 = (undefined4)((**(code **)(*piVar2 + 0x100))());
  iVar3 = ((PetSkillData *)uVar1)->getItemData(*(int *)this);
  if (iVar3 != 0) {
    ((PetBuffItemData *)*(int *)((int)this + 4*(2)))->initWithId(*(undefined4 *)(iVar3 + 0xc));
  }
  return;
}

void SkillUserData::upgraceLV()
{
  *(int *)(((int)this) + 4) = *(int *)(((int)this) + 4) + 1;
  PetBuffItemData::updateAttrByLv(*(undefined4 *)(((int)this) + 8));
  return;
}

// ===== 修复: 补回被误删的函数占位 (2) =====
void SkillUserData::toString()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void SkillUserData::initWithData(std::string * p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
