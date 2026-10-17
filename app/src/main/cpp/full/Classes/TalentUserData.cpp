#include "TalentUserData.h"
#include "CCDictionary.h"
#include "BLLeakUtils.h"
#include "DBUtil.h"
#include "DataCacheManager.h"
#include "DataManager.h"
#include "TalentData.h"
#include "TalentUserItemData.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
using namespace cocos2d;
// 兜底声明
extern "C" long long func_00442068(...);
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e31c(...);
extern "C" long long func_0079e34c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e69c(...);
extern "C" long long func_0079e874(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long _DAT_004b041c;
extern "C" unsigned long _DAT_004b0420;
extern "C" unsigned long _DAT_004b0424;
extern "C" unsigned long _DAT_004b0428;
extern "C" unsigned long _DAT_004b042c;
extern "C" unsigned long _DAT_004b0430;
extern "C" unsigned long _DAT_004b04d4;
extern "C" unsigned long _DAT_004b04d8;
extern "C" unsigned long _DAT_004b0574;
extern "C" unsigned long _DAT_004b0578;
extern "C" unsigned long _DAT_004b0744;
extern "C" unsigned long _DAT_004b0748;
extern "C" unsigned long _DAT_004b0908;
extern "C" unsigned long _DAT_004b090c;
extern "C" unsigned long _DAT_004b0910;
extern "C" unsigned long _DAT_004b0914;
extern "C" unsigned long _DAT_004b0918;
extern "C" unsigned long _DAT_004b091c;
extern "C" unsigned long _DAT_004b0920;
extern "C" unsigned long _DAT_004b0c64;
extern "C" unsigned long _DAT_004b0c68;
extern "C" unsigned long _DAT_004b0c6c;
extern "C" unsigned long _DAT_004b0c70;
extern "C" unsigned long _DAT_004b0c74;
extern "C" unsigned long _DAT_004b0d88;
extern "C" unsigned long _DAT_004b0d8c;
extern "C" unsigned long _DAT_004b0f10;
extern "C" unsigned long _DAT_004b0f14;
extern "C" unsigned long _DAT_004b0f18;
extern "C" unsigned long _DAT_004b0f1c;
extern "C" unsigned long _DAT_004b0f20;
extern "C" unsigned long g_004b041c;
extern "C" unsigned long g_004b0420;
extern "C" unsigned long g_004b0424;
extern "C" unsigned long g_004b0428;
extern "C" unsigned long g_004b042c;
extern "C" unsigned long g_004b0430;
extern "C" unsigned long g_004b04d4;
extern "C" unsigned long g_004b04d8;
extern "C" unsigned long g_004b0574;
extern "C" unsigned long g_004b0578;
extern "C" unsigned long g_004b0744;
extern "C" unsigned long g_004b0748;
extern "C" unsigned long g_004b0908;
extern "C" unsigned long g_004b090c;
extern "C" unsigned long g_004b0910;
extern "C" unsigned long g_004b0914;
extern "C" unsigned long g_004b0918;
extern "C" unsigned long g_004b091c;
extern "C" unsigned long g_004b0920;
extern "C" unsigned long g_004b0c64;
extern "C" unsigned long g_004b0c68;
extern "C" unsigned long g_004b0c6c;
extern "C" unsigned long g_004b0c70;
extern "C" unsigned long g_004b0c74;
extern "C" unsigned long g_004b0d88;
extern "C" unsigned long g_004b0d8c;
extern "C" unsigned long g_004b0f10;
extern "C" unsigned long g_004b0f14;
extern "C" unsigned long g_004b0f18;
extern "C" unsigned long g_004b0f1c;
extern "C" unsigned long g_004b0f20;
int TalentUserData::getTalentLimit() const
{
  return *(undefined4 *)(((int)this) + 0x14);
}

void TalentUserData::setTalentLimit(int p1)
{
  *(undefined4 *)(((int)this) + 0x14) = p1;
  return;
}


TalentUserData::TalentUserData()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

TalentUserData::~TalentUserData()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

// ===== 修复: 补回被误删的函数占位 (12) =====
void TalentUserData::upgraceLv(TalentUserItemData* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

undefined8 TalentUserData::isTalentOpen(TalentUserItemData* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void TalentUserData::isTalentSelected(TalentUserItemData* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

undefined8 TalentUserData::getItemDataById(int p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void TalentUserData::getActiveTalentAttribute(int p1)
{
  undefined4 p3 = 0;

  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  *(int *)((int)this + 4*(1)) = 0;
  *(int *)this = 0;
  if (p3 != 0) {
    piVar1 = (int *)((TalentUserData *)p1)->getItemDataById(p3);
    uVar2 = (undefined4)((**(code **)(*(int *)(piVar1) + (8)))());
    piVar1 = (int *)((DataCacheManager *)this)->shareManager();
    uVar3 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x78)))());
    iVar4 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)uVar3)->objectForKey(p3));
    if ((iVar4 != 0) &&
       (iVar4 = func_0079e55c(iVar4,*(undefined4 *)(g_004b0744 + 0x4b072c),
                                *(undefined4 *)(g_004b0748 + 0x4b072e),0), iVar4 != 0)) {
      ((TalentData *)this)->getAttributivaByLv(((int)this));
    }
  }
  return;
}

undefined8 TalentUserData::getActiveTalentId(int p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void TalentUserData::updateSelect(TalentUserItemData* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void TalentUserData::getAllTalentData()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void TalentUserData::addTalent(int p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void TalentUserData::checkTalentData()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

bool TalentUserData::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void TalentUserData::updateOpen(TalentUserItemData* p1, bool p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
