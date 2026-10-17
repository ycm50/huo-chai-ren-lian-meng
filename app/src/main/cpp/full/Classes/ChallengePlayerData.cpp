#include "ChallengePlayerData.h"
#include "BLHero.h"
#include "BLMonsterData.h"
#include "BLRole.h"
#include "BLRoleAttribute.h"
#include "ChallengePlayerItemData.h"
#include "DataManager.h"
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
extern "C" long long func_0079e2ec(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e5fc(...);
extern "C" long long func_0079e69c(...);
extern "C" long long func_0079e874(...);
extern "C" unsigned long _DAT_0046eac0;
extern "C" unsigned long _DAT_0046eac4;
extern "C" unsigned long _DAT_0046ec80;
extern "C" unsigned long _DAT_0046ece0;
extern "C" unsigned long _DAT_0046ece4;
extern "C" unsigned long _DAT_0046ece8;
extern "C" unsigned long _DAT_0046f068;
extern "C" unsigned long _DAT_0046f06c;
extern "C" unsigned long _DAT_0046f070;
extern "C" unsigned long _DAT_0046f164;
extern "C" unsigned long _DAT_0046f168;
extern "C" unsigned long g_0046eac0;
extern "C" unsigned long g_0046eac4;
extern "C" unsigned long g_0046ec80;
extern "C" unsigned long g_0046ece0;
extern "C" unsigned long g_0046ece4;
extern "C" unsigned long g_0046ece8;
extern "C" unsigned long g_0046f068;
extern "C" unsigned long g_0046f06c;
extern "C" unsigned long g_0046f070;
extern "C" unsigned long g_0046f164;
extern "C" unsigned long g_0046f168;
bool ChallengePlayerData::checkHavePartner()
{
  return *(int *)(((int)this) + 0x24) < *(int *)(((int)this) + 0x10) - *(int *)(((int)this) + 0xc) >> 2;
}

bool ChallengePlayerData::checkHaveEnemy()
{
  return *(int *)((int)this + 4*(8)) < *(int *)((int)this + 4*(1)) - *(int *)this >> 2;
}

void ChallengePlayerData::getHeroInfo(std::string * p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

ChallengePlayerData::~ChallengePlayerData()
{
  int *piVar1;
  int iVar2;
  
  for (piVar1 = (int *)*(int *)this; piVar1 != (int *)*(int *)((int)this + 4*(1)); piVar1 = piVar1 + 1) {
    iVar2 = (int)*(int *)&(*piVar1);
    if (iVar2 != 0) {
      ((ChallengePlayerItemData *)iVar2)->~ChallengePlayerItemData();
      (void)(::operator delete((void *)(iVar2)));
    }
    *piVar1 = 0;
  }
  piVar1 = (int *)*(int *)((int)this + 4*(3));
  *(int *)((int)this + 4*(1)) = *(int *)this;
  for (; iVar2 = (undefined4)(intptr_t)(g_0046ec80, piVar1 != (int *)*(int *)((int)this + 4*(4))); piVar1 = piVar1 + 1) {
    iVar2 = (int)*(int *)&(*piVar1);
    if (iVar2 != 0) {
      ((ChallengePlayerItemData *)iVar2)->~ChallengePlayerItemData();
      (void)(::operator delete((void *)(iVar2)));
    }
    *piVar1 = 0;
  }
  *(int *)((int)this + 4*(4)) = *(int *)((int)this + 4*(3));
  func_0079e2dc(((int)this) + 6,iVar2 + 0x46ec3c);
  func_0079e2bc(((int)this) + 7);
  func_0079e2bc(((int)this) + 6);
  ((std::vector<ChallengePlayerItemData*, std::allocator<ChallengePlayerItemData*>> *)((int)this) + 3)->~vector();
  ((std::vector<ChallengePlayerItemData*, std::allocator<ChallengePlayerItemData*>> *)((int)this))->~vector();
  return;
}

ChallengePlayerData::ChallengePlayerData()
{
  int iVar1;
  int iVar2;
  
  *(int *)this = 0;
  *(int *)((int)this + 4*(1)) = 0;
  *(int *)((int)this + 4*(2)) = 0;
  *(int *)((int)this + 4*(3)) = 0;
  *(int *)((int)this + 4*(4)) = 0;
  *(int *)((int)this + 4*(5)) = 0;
  iVar1 = g_0046ece4;
  iVar2 = *(int *)(g_0046ece0 + 0x46eca2) + 0xc;
  *(int *)((int)this + 4*(6)) = iVar2;
  *(int *)((int)this + 4*(7)) = iVar2;
  func_0079e2dc(((int)this) + 6,iVar1 + 0x46ecae);
  func_0079e2dc(((int)this) + 7,"崔二狗");
  return;
}

void ChallengePlayerData::initPartnerData(std::vector<std::string, std::allocator<std::string>> * p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void ChallengePlayerData::initEnemyData(std::string * p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

// ===== 修复: 补回被误删的函数占位 (4) =====
void ChallengePlayerData::getNextEnemy()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void ChallengePlayerData::getCurPartner()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void ChallengePlayerData::getCurEnemy()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void ChallengePlayerData::getNextPartner()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
