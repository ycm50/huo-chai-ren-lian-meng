#include "BLMissionManager.h"
#include "BLMissionManager_shims.h"
#include "BLDebug.h"
#include "BLDropSprite.h"
#include "BLGameScene.h"
#include "BLLeakUtils.h"
#include "BLMap.h"
#include "BLMapScene.h"
#include "BLMission.h"
#include "BLMissionPlayerInfoPresenter.h"
#include "BLPoPSalePresenter.h"
#include "BLPoPSaleView.h"
#include "BLResultManager.h"
#include "BLRole.h"
#include "BLRoleAttribute.h"
#include "BLRoleBase.h"
#include "BackPackItemData.h"
#include "BluetoothHelper.h"
#include "ChallengeHttpData.h"
#include "ChallengePlayerData.h"
#include "DataCacheManager.h"
#include "DataManager.h"
#include "DebugLocalSys.h"
#include "FightControlLayer.h"
#include "PlatformHelp.h"
#include "RoleInfoData.h"
#include "UIManager.h"
#include "UserData.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <new>   // ghost_fix.js 自动补齐
using namespace cocos2d;
static inline undefined4 hw_fbits(float f) { undefined4 r; __builtin_memcpy(&r, &f, 4); return r; }
// 兜底声明
extern "C" long long func_00442068(...);
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2ec(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e34c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4ac(...);
extern "C" long long func_0079e4bc(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long func_0079e4ec(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e50c(...);
extern "C" long long func_0079e51c(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e58c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long func_0079e5dc(...);
extern "C" long long func_0079e5ec(...);
extern "C" long long func_0079e5fc(...);
extern "C" long long func_0079e69c(...);
extern "C" long long func_0079e6c0(...);
extern "C" long long func_0079e6d0(...);
extern "C" long long func_0079e734(...);
extern "C" long long func_0079e784(...);
extern "C" long long func_0079e7b4(...);
extern "C" long long func_0079e7c4(...);
extern "C" long long func_0079e854(...);
extern "C" long long func_0079e8b4(...);
extern "C" long long func_0079e964(...);
extern "C" long long func_0079e974(...);
extern "C" long long func_0079e984(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long _DAT_00440848;
extern "C" unsigned long _DAT_004408b8;
extern "C" unsigned long _DAT_004408bc;
extern "C" unsigned long _DAT_004408c0;
extern "C" unsigned long _DAT_004408c4;
extern "C" unsigned long _DAT_004408c8;
extern "C" unsigned long _DAT_00440938;
extern "C" unsigned long _DAT_00440a44;
extern "C" unsigned long _DAT_00440a48;
extern "C" unsigned long _DAT_00440a4c;
extern "C" unsigned long _DAT_00440a50;
extern "C" unsigned long _DAT_00440a54;
extern "C" unsigned long _DAT_00440a58;
extern "C" unsigned long _DAT_00440ab0;
extern "C" unsigned long _DAT_00440ab4;
extern "C" unsigned long _DAT_00440ab8;
extern "C" unsigned long _DAT_00440abc;
extern "C" unsigned long _DAT_00440ac0;
extern "C" unsigned long _DAT_00440ac4;
extern "C" unsigned long _DAT_00440c90;
extern "C" unsigned long _DAT_00440c94;
extern "C" unsigned long _DAT_00440c98;
extern "C" unsigned long _DAT_00440c9c;
extern "C" unsigned long _DAT_00440d40;
extern "C" unsigned long _DAT_00440d44;
extern "C" unsigned long _DAT_00440d48;
extern "C" unsigned long _DAT_00440dac;
extern "C" unsigned long _DAT_00440db0;
extern "C" unsigned long _DAT_00440e5c;
extern "C" unsigned long _DAT_00440e60;
extern "C" unsigned long _DAT_00440e64;
extern "C" unsigned long _DAT_00440f68;
extern "C" unsigned long _DAT_00440f6c;
extern "C" unsigned long _DAT_00441038;
extern "C" unsigned long _DAT_0044103c;
extern "C" unsigned long _DAT_00441040;
extern "C" unsigned long _DAT_004410c0;
extern "C" unsigned long _DAT_004410c4;
extern "C" unsigned long _DAT_004410c8;
extern "C" unsigned long _DAT_004410cc;
extern "C" unsigned long _DAT_0044122c;
extern "C" unsigned long _DAT_00441230;
extern "C" unsigned long _DAT_00441234;
extern "C" unsigned long _DAT_00441238;
extern "C" unsigned long _DAT_0044123c;
extern "C" unsigned long _DAT_00441240;
extern "C" unsigned long _DAT_004412a8;
extern "C" unsigned long _DAT_004412ac;
extern "C" unsigned long _DAT_004412b0;
extern "C" unsigned long _DAT_004412b4;
extern "C" unsigned long _DAT_00441348;
extern "C" unsigned long _DAT_004415dc;
extern "C" unsigned long _DAT_004415e0;
extern "C" unsigned long _DAT_004415e4;
extern "C" unsigned long _DAT_004415e8;
extern "C" unsigned long _DAT_004415ec;
extern "C" unsigned long _DAT_004415f0;
extern "C" unsigned long _DAT_004416ec;
extern "C" unsigned long _DAT_004416f0;
extern "C" unsigned long _DAT_0044187c;
extern "C" unsigned long _DAT_00441880;
extern "C" unsigned long _DAT_00441884;
extern "C" unsigned long _DAT_00441888;
extern "C" unsigned long _DAT_0044188c;
extern "C" unsigned long _DAT_00441890;
extern "C" unsigned long _DAT_00441894;
extern "C" unsigned long _DAT_004419b4;
extern "C" unsigned long _DAT_004419b8;
extern "C" unsigned long _DAT_004419bc;
extern "C" unsigned long _DAT_00441a34;
extern "C" unsigned long _DAT_00441a38;
extern "C" unsigned long _DAT_00441ab4;
extern "C" unsigned long _DAT_00441ab8;
extern "C" unsigned long _DAT_00441b80;
extern "C" unsigned long _DAT_00441b84;
extern "C" unsigned long _DAT_00441c30;
extern "C" unsigned long _DAT_00441c34;
extern "C" unsigned long _DAT_00441c38;
extern "C" unsigned long _DAT_00441ce4;
extern "C" unsigned long _DAT_00441ce8;
extern "C" unsigned long _DAT_00441cec;
extern "C" unsigned long _DAT_00441d84;
extern "C" unsigned long _DAT_00441d88;
extern "C" unsigned long _DAT_00441d8c;
extern "C" unsigned long _DAT_00441e50;
extern "C" unsigned long _DAT_00441e54;
extern "C" unsigned long _DAT_00441ed0;
extern "C" unsigned long _DAT_00441ed4;
extern "C" unsigned long _DAT_00441ed8;
extern "C" unsigned long _DAT_00441edc;
extern "C" unsigned long _DAT_00442060;
extern "C" unsigned long _DAT_00442064;
extern "C" unsigned long _DAT_00442518;
extern "C" unsigned long _DAT_0044251c;
extern "C" unsigned long _DAT_00442520;
extern "C" unsigned long _DAT_00442524;
extern "C" unsigned long _DAT_00442528;
extern "C" unsigned long _DAT_0044252c;
extern "C" unsigned long _DAT_00442600;
extern "C" unsigned long _DAT_00442604;
extern "C" unsigned long _DAT_004428c8;
extern "C" unsigned long _DAT_004428cc;
extern "C" unsigned long _DAT_004428d0;
extern "C" unsigned long _DAT_00442a90;
extern "C" unsigned long _DAT_00442a94;
extern "C" unsigned long _DAT_00442e80;
extern "C" unsigned long _DAT_00442e84;
extern "C" unsigned long _DAT_00442e88;
extern "C" unsigned long _DAT_00442e8c;
extern "C" unsigned long _DAT_00442e90;
extern "C" unsigned long _DAT_00442e94;
extern "C" unsigned long _DAT_00442e98;
extern "C" unsigned long _DAT_00442e9c;
extern "C" unsigned long _DAT_00442ea0;
extern "C" unsigned long _DAT_00442ea4;
extern "C" unsigned long _DAT_00442ea8;
extern "C" unsigned long _DAT_00442eac;
extern "C" unsigned long _DAT_00442eb0;
extern "C" unsigned long _DAT_00442eb4;
extern "C" unsigned long _DAT_00442eb8;
extern "C" unsigned long _DAT_00443208;
extern "C" unsigned long _DAT_0044320c;
extern "C" unsigned long _DAT_00443210;
extern "C" unsigned long _DAT_00443214;
extern "C" unsigned long _DAT_00443218;
extern "C" unsigned long _DAT_0044321c;
extern "C" unsigned long _DAT_00443220;
extern "C" unsigned long _DAT_00443224;
extern "C" unsigned long _DAT_00443228;
extern "C" unsigned long _DAT_0044322c;
extern "C" unsigned long _DAT_00443230;
extern "C" unsigned long _DAT_00443234;
extern "C" unsigned long _DAT_00443238;
extern "C" unsigned long _DAT_0044323c;
extern "C" unsigned long _DAT_00443240;
extern "C" unsigned long _DAT_00443244;
extern "C" unsigned long _DAT_00443334;
extern "C" unsigned long _DAT_00443338;
extern "C" unsigned long _DAT_004433c4;
extern "C" unsigned long _DAT_004433c8;
extern "C" unsigned long _DAT_004433cc;
extern "C" unsigned long _DAT_004433d0;
extern "C" unsigned long _DAT_00443d14;
extern "C" unsigned long _DAT_00443d18;
extern "C" unsigned long _DAT_00443e74;
extern "C" unsigned long _DAT_00443e78;
extern "C" unsigned long _DAT_00444344;
extern "C" unsigned long _DAT_00444348;
extern "C" unsigned long _DAT_00444350;
extern "C" unsigned long _DAT_00444354;
extern "C" unsigned long _DAT_00444358;
extern "C" unsigned long _DAT_00444360;
extern "C" unsigned long _DAT_00444364;
extern "C" unsigned long _DAT_00444728;
extern "C" unsigned long _DAT_0044472c;
extern "C" unsigned long _DAT_00444730;
extern "C" unsigned long _DAT_00444734;
extern "C" unsigned long _DAT_00444738;
extern "C" unsigned long _DAT_0044473c;
extern "C" unsigned long _DAT_00444740;
extern "C" unsigned long _DAT_00444744;
extern "C" unsigned long _DAT_00444748;
extern "C" unsigned long _DAT_0044474c;
extern "C" unsigned long _DAT_00444750;
extern "C" unsigned long _DAT_00444864;
extern "C" unsigned long _DAT_00444868;
extern "C" unsigned long _DAT_0044486c;
extern "C" unsigned long _DAT_00444a78;
extern "C" unsigned long _DAT_00444a7c;
extern "C" unsigned long _DAT_00444a80;
extern "C" unsigned long _DAT_00444a84;
extern "C" unsigned long _DAT_00444a88;
extern "C" unsigned long _DAT_00444a8c;
extern "C" unsigned long _DAT_00444d90;
extern "C" unsigned long _DAT_00444d94;
extern "C" unsigned long _DAT_00444d98;
extern "C" unsigned long extraout_r1;
extern "C" unsigned long extraout_r1_00;
extern "C" unsigned long extraout_r3;
extern "C" unsigned long g_00440848;
extern "C" unsigned long g_004408b8;
extern "C" unsigned long g_004408bc;
extern "C" unsigned long g_004408c0;
extern "C" unsigned long g_004408c4;
extern "C" unsigned long g_004408c8;
extern "C" unsigned long g_00440938;
extern "C" unsigned long g_00440a44;
extern "C" unsigned long g_00440a48;
extern "C" unsigned long g_00440a4c;
extern "C" unsigned long g_00440a50;
extern "C" unsigned long g_00440a54;
extern "C" unsigned long g_00440a58;
extern "C" unsigned long g_00440ab0;
extern "C" unsigned long g_00440ab4;
extern "C" unsigned long g_00440ab8;
extern "C" unsigned long g_00440abc;
extern "C" unsigned long g_00440ac0;
extern "C" unsigned long g_00440ac4;
extern "C" unsigned long g_00440c90;
extern "C" unsigned long g_00440c94;
extern "C" unsigned long g_00440c98;
extern "C" unsigned long g_00440c9c;
extern "C" unsigned long g_00440d40;
extern "C" unsigned long g_00440d44;
extern "C" unsigned long g_00440d48;
extern "C" unsigned long g_00440dac;
extern "C" unsigned long g_00440db0;
extern "C" unsigned long g_00440e5c;
extern "C" unsigned long g_00440e60;
extern "C" unsigned long g_00440e64;
extern "C" unsigned long g_00440f68;
extern "C" unsigned long g_00440f6c;
extern "C" unsigned long g_00441038;
extern "C" unsigned long g_0044103c;
extern "C" unsigned long g_00441040;
extern "C" unsigned long g_004410c0;
extern "C" unsigned long g_004410c4;
extern "C" unsigned long g_004410c8;
extern "C" unsigned long g_004410cc;
extern "C" unsigned long g_0044122c;
extern "C" unsigned long g_00441230;
extern "C" unsigned long g_00441234;
extern "C" unsigned long g_00441238;
extern "C" unsigned long g_0044123c;
extern "C" unsigned long g_00441240;
extern "C" unsigned long g_004412a8;
extern "C" unsigned long g_004412ac;
extern "C" unsigned long g_004412b0;
extern "C" unsigned long g_004412b4;
extern "C" unsigned long g_00441348;
extern "C" unsigned long g_004415dc;
extern "C" unsigned long g_004415e0;
extern "C" unsigned long g_004415e4;
extern "C" unsigned long g_004415e8;
extern "C" unsigned long g_004415ec;
extern "C" unsigned long g_004415f0;
extern "C" unsigned long g_004416ec;
extern "C" unsigned long g_004416f0;
extern "C" unsigned long g_0044187c;
extern "C" unsigned long g_00441880;
extern "C" unsigned long g_00441884;
extern "C" unsigned long g_00441888;
extern "C" unsigned long g_0044188c;
extern "C" unsigned long g_00441890;
extern "C" unsigned long g_00441894;
extern "C" unsigned long g_004419b4;
extern "C" unsigned long g_004419b8;
extern "C" unsigned long g_004419bc;
extern "C" unsigned long g_00441a34;
extern "C" unsigned long g_00441a38;
extern "C" unsigned long g_00441ab4;
extern "C" unsigned long g_00441ab8;
extern "C" unsigned long g_00441b80;
extern "C" unsigned long g_00441b84;
extern "C" unsigned long g_00441c30;
extern "C" unsigned long g_00441c34;
extern "C" unsigned long g_00441c38;
extern "C" unsigned long g_00441ce4;
extern "C" unsigned long g_00441ce8;
extern "C" unsigned long g_00441cec;
extern "C" unsigned long g_00441d84;
extern "C" unsigned long g_00441d88;
extern "C" unsigned long g_00441d8c;
extern "C" unsigned long g_00441e50;
extern "C" unsigned long g_00441e54;
extern "C" unsigned long g_00441ed0;
extern "C" unsigned long g_00441ed4;
extern "C" unsigned long g_00441ed8;
extern "C" unsigned long g_00441edc;
extern "C" unsigned long g_00442060;
extern "C" unsigned long g_00442064;
extern "C" unsigned long g_00442518;
extern "C" unsigned long g_0044251c;
extern "C" unsigned long g_00442520;
extern "C" unsigned long g_00442524;
extern "C" unsigned long g_00442528;
extern "C" unsigned long g_0044252c;
extern "C" unsigned long g_00442600;
extern "C" unsigned long g_00442604;
extern "C" unsigned long g_004428c8;
extern "C" unsigned long g_004428cc;
extern "C" unsigned long g_004428d0;
extern "C" unsigned long g_00442a90;
extern "C" unsigned long g_00442a94;
extern "C" unsigned long g_00442e80;
extern "C" unsigned long g_00442e84;
extern "C" unsigned long g_00442e88;
extern "C" unsigned long g_00442e8c;
extern "C" unsigned long g_00442e90;
extern "C" unsigned long g_00442e94;
extern "C" unsigned long g_00442e98;
extern "C" unsigned long g_00442e9c;
extern "C" unsigned long g_00442ea0;
extern "C" unsigned long g_00442ea4;
extern "C" unsigned long g_00442ea8;
extern "C" unsigned long g_00442eac;
extern "C" unsigned long g_00442eb0;
extern "C" unsigned long g_00442eb4;
extern "C" unsigned long g_00442eb8;
extern "C" unsigned long g_00443208;
extern "C" unsigned long g_0044320c;
extern "C" unsigned long g_00443210;
extern "C" unsigned long g_00443214;
extern "C" unsigned long g_00443218;
extern "C" unsigned long g_0044321c;
extern "C" unsigned long g_00443220;
extern "C" unsigned long g_00443224;
extern "C" unsigned long g_00443228;
extern "C" unsigned long g_0044322c;
extern "C" unsigned long g_00443230;
extern "C" unsigned long g_00443234;
extern "C" unsigned long g_00443238;
extern "C" unsigned long g_0044323c;
extern "C" unsigned long g_00443240;
extern "C" unsigned long g_00443244;
extern "C" unsigned long g_00443334;
extern "C" unsigned long g_00443338;
extern "C" unsigned long g_004433c4;
extern "C" unsigned long g_004433c8;
extern "C" unsigned long g_004433cc;
extern "C" unsigned long g_004433d0;
extern "C" unsigned long g_00443d14;
extern "C" unsigned long g_00443d18;
extern "C" unsigned long g_00443e74;
extern "C" unsigned long g_00443e78;
extern "C" unsigned long g_00444344;
extern "C" unsigned long g_00444348;
extern "C" unsigned long g_00444350;
extern "C" unsigned long g_00444354;
extern "C" unsigned long g_00444358;
extern "C" unsigned long g_00444360;
extern "C" unsigned long g_00444364;
extern "C" unsigned long g_00444728;
extern "C" unsigned long g_0044472c;
extern "C" unsigned long g_00444730;
extern "C" unsigned long g_00444734;
extern "C" unsigned long g_00444738;
extern "C" unsigned long g_0044473c;
extern "C" unsigned long g_00444740;
extern "C" unsigned long g_00444744;
extern "C" unsigned long g_00444748;
extern "C" unsigned long g_0044474c;
extern "C" unsigned long g_00444750;
extern "C" unsigned long g_00444864;
extern "C" unsigned long g_00444868;
extern "C" unsigned long g_0044486c;
extern "C" unsigned long g_00444a78;
extern "C" unsigned long g_00444a7c;
extern "C" unsigned long g_00444a80;
extern "C" unsigned long g_00444a84;
extern "C" unsigned long g_00444a88;
extern "C" unsigned long g_00444a8c;
extern "C" unsigned long g_00444d90;
extern "C" unsigned long g_00444d94;
extern "C" unsigned long g_00444d98;
cocos2d::CCArray* BLMissionManager::getArrayRoles() const
{
  return (cocos2d::CCArray*)(*(undefined4 *)(((int)this) + 0x18));
}

cocos2d::CCArray* BLMissionManager::getArrayPartner() const
{
  return (cocos2d::CCArray*)(*(undefined4 *)(((int)this) + 0x1c));
}

cocos2d::CCArray* BLMissionManager::getArrayPet() const
{
  return (cocos2d::CCArray*)(*(undefined4 *)(((int)this) + 0x20));
}

cocos2d::CCArray* BLMissionManager::getArrayEnemy() const
{
  return (cocos2d::CCArray*)(*(undefined4 *)(((int)this) + 0x24));
}

cocos2d::CCArray* BLMissionManager::getArrayRiyan() const
{
  return (cocos2d::CCArray*)(*(undefined4 *)(((int)this) + 0x28));
}

cocos2d::CCArray* BLMissionManager::getArrayRemote() const
{
  return (cocos2d::CCArray*)(*(undefined4 *)(((int)this) + 0x2c));
}

void BLMissionManager::setArrayRemote(cocos2d::CCArray* p1)
{
  *(undefined4 *)(((int)this) + 0x2c) = (int)(intptr_t)p1;
  return;
}

cocos2d::CCArray* BLMissionManager::getArrayObstacles() const
{
  return (cocos2d::CCArray*)(*(undefined4 *)(((int)this) + 0x30));
}

void BLMissionManager::setArrayObstacles(cocos2d::CCArray* p1)
{
  *(undefined4 *)(((int)this) + 0x30) = (int)(intptr_t)p1;
  return;
}

cocos2d::CCArray* BLMissionManager::getArrayDropItems() const
{
  return (cocos2d::CCArray*)(*(undefined4 *)(((int)this) + 0x34));
}

void BLMissionManager::setArrayDropItems(cocos2d::CCArray* p1)
{
  *(undefined4 *)(((int)this) + 0x34) = (int)(intptr_t)p1;
  return;
}

float BLMissionManager::getBrushLeft() const
{
  return *(undefined4 *)(((int)this) + 0x38);
}

void BLMissionManager::setBrushLeft(float p1)
{
  *(undefined4 *)(((int)this) + 0x38) = (int)(intptr_t)p1;
  return;
}

float BLMissionManager::getBrushRight() const
{
  return *(undefined4 *)(((int)this) + 0x3c);
}

void BLMissionManager::setBrushRight(float p1)
{
  *(undefined4 *)(((int)this) + 0x3c) = (int)(intptr_t)p1;
  return;
}

cocos2d::CCArray* BLMissionManager::getArrayPartnerRemove() const
{
  return (cocos2d::CCArray*)(*(undefined4 *)(((int)this) + 0x40));
}

cocos2d::CCArray* BLMissionManager::getArrayEnemyRemove() const
{
  return (cocos2d::CCArray*)(*(undefined4 *)(((int)this) + 0x44));
}

void BLMissionManager::setArrayEnemyRemove(cocos2d::CCArray* p1)
{
  *(undefined4 *)(((int)this) + 0x44) = (int)(intptr_t)p1;
  return;
}

cocos2d::CCArray* BLMissionManager::getArrayRiyanRemove() const
{
  return (cocos2d::CCArray*)(*(undefined4 *)(((int)this) + 0x48));
}

void BLMissionManager::setArrayRiyanRemove(cocos2d::CCArray* p1)
{
  *(undefined4 *)(((int)this) + 0x48) = (int)(intptr_t)p1;
  return;
}

cocos2d::CCArray* BLMissionManager::getArrayRemoteRemove() const
{
  return (cocos2d::CCArray*)(*(undefined4 *)(((int)this) + 0x4c));
}

void BLMissionManager::setArrayRemoteRemove(cocos2d::CCArray* p1)
{
  *(undefined4 *)(((int)this) + 0x4c) = (int)(intptr_t)p1;
  return;
}

cocos2d::CCArray* BLMissionManager::getArrayObstaclesRemove() const
{
  return (cocos2d::CCArray*)(*(undefined4 *)(((int)this) + 0x50));
}

BLRole* BLMissionManager::getBluetoothHero() const
{
  return (BLRole*)(*(undefined4 *)(((int)this) + 0x58));
}

BLMap* BLMissionManager::getMap() const
{
  return (BLMap*)(*(undefined4 *)(((int)this) + 0x5c));
}

void BLMissionManager::setMap(BLMap* p1)
{
  *(undefined4 *)(((int)this) + 0x5c) = (int)(intptr_t)p1;
  return;
}

BLMissionData* BLMissionManager::getMissionData() const
{
  return (BLMissionData*)(*(undefined4 *)(((int)this) + 0x60));
}

BLMonsterGroupData* BLMissionManager::getCurrentMonsterGroup() const
{
  return (BLMonsterGroupData*)(*(undefined4 *)(((int)this) + 100));
}

BLTriggerData* BLMissionManager::getCurrentTrigger() const
{
  return (BLTriggerData*)(*(undefined4 *)(((int)this) + 0x68));
}

void BLMissionManager::setCurrentTrigger(BLTriggerData* p1)
{
  *(undefined4 *)(((int)this) + 0x68) = (int)(intptr_t)p1;
  return;
}

cocos2d::CCDictionary* BLMissionManager::getDicCurrentSounds() const
{
  return (cocos2d::CCDictionary*)(*(undefined4 *)(((int)this) + 0x6c));
}

cocos2d::CCDictionary* BLMissionManager::getDicDropItems() const
{
  return (cocos2d::CCDictionary*)(*(undefined4 *)(((int)this) + 0x70));
}

cocos2d::CCDictionary* BLMissionManager::getDicRoleBatch() const
{
  return (cocos2d::CCDictionary*)(*(undefined4 *)(((int)this) + 0x74));
}

cocos2d::CCDictionary* BLMissionManager::getDicEffectUpBatch() const
{
  return (cocos2d::CCDictionary*)(*(undefined4 *)(((int)this) + 0x78));
}

cocos2d::CCDictionary* BLMissionManager::getDicEffectDownBatch() const
{
  return (cocos2d::CCDictionary*)(*(undefined4 *)(((int)this) + 0x7c));
}

cocos2d::CCSpriteBatchNode* BLMissionManager::getDicBatchNode() const
{
  return (cocos2d::CCSpriteBatchNode*)(*(undefined4 *)(((int)this) + 0x80));
}

bool BLMissionManager::getISFighting() const
{
  return *(undefined1 *)(((int)this) + 0x84);
}

void BLMissionManager::setISFighting(bool p1)
{
  *(undefined1 *)(((int)this) + 0x84) = (int)(intptr_t)p1;
  return;
}

bool BLMissionManager::getISMissionEnd() const
{
  return *(undefined1 *)(((int)this) + 0x85);
}

void BLMissionManager::setISMissionEnd(bool p1)
{
  *(undefined1 *)(((int)this) + 0x85) = (int)(intptr_t)p1;
  return;
}

cocos2d::CCDictionary* BLMissionManager::getDicRelifeAttr() const
{
  return (cocos2d::CCDictionary*)(*(undefined4 *)(((int)this) + 0x90));
}

int BLMissionManager::getAttackCount() const
{
  return *(undefined4 *)(((int)this) + 0x94);
}

void BLMissionManager::setAttackCount(int p1)
{
  *(undefined4 *)(((int)this) + 0x94) = (int)(intptr_t)p1;
  return;
}

float BLMissionManager::getAttackTime() const
{
  return *(undefined4 *)(((int)this) + 0x98);
}

void BLMissionManager::setAttackTime(float p1)
{
  *(undefined4 *)(((int)this) + 0x98) = (int)(intptr_t)p1;
  return;
}

undefined1 BLMissionManager::getAutoOpen() const
{
  return *(undefined1 *)(((int)this) + 0xb0);
}

int BLMissionManager::getChallengerLife() const
{
  return *(undefined4 *)(((int)this) + 0xb4);
}

void BLMissionManager::setChallengerLife(int p1)
{
  *(undefined4 *)(((int)this) + 0xb4) = (int)(intptr_t)p1;
  return;
}

int BLMissionManager::getBeChallengerLife() const
{
  return *(undefined4 *)(((int)this) + 0xb8);
}

void BLMissionManager::setBeChallengerLife(int p1)
{
  *(undefined4 *)(((int)this) + 0xb8) = (int)(intptr_t)p1;
  return;
}

bool BLMissionManager::getIsChallengeMode() const
{
  return *(undefined1 *)(((int)this) + 0xbc);
}

void BLMissionManager::setIsChallengeMode(bool p1)
{
  *(undefined1 *)(((int)this) + 0xbc) = (int)(intptr_t)p1;
  return;
}

void BLMissionManager::setMissionData(BLMissionData* p1)
{
  if (*(int *)(((int)this) + 0x60) != (int)(intptr_t)p1) {
    if (p1 != 0) {
      ((cocos2d::CCObject *)p1)->retain();
    }
    if (*(int *)(((int)this) + 0x60) != 0) {
      ((cocos2d::CCObject *)this)->release();
    }
    *(int *)(((int)this) + 0x60) = (int)(intptr_t)p1;
  }
  return;
}

void BLMissionManager::setBluetoothHero(BLRole* p1)
{
  if (*(int *)(((int)this) + 0x58) != (int)(intptr_t)p1) {
    if (p1 != 0) {
      ((cocos2d::CCObject *)p1)->retain();
    }
    if (*(int *)(((int)this) + 0x58) != 0) {
      ((cocos2d::CCObject *)this)->release();
    }
    *(int *)(((int)this) + 0x58) = (int)(intptr_t)p1;
  }
  return;
}

void BLMissionManager::setArrayRiyan(cocos2d::CCArray* p1)
{
  if (*(int *)(((int)this) + 0x28) != (int)(intptr_t)p1) {
    if (p1 != 0) {
      ((cocos2d::CCObject *)p1)->retain();
    }
    if (*(int *)(((int)this) + 0x28) != 0) {
      ((cocos2d::CCObject *)this)->release();
    }
    *(int *)(((int)this) + 0x28) = (int)(intptr_t)p1;
  }
  return;
}

void BLMissionManager::setArrayEnemy(cocos2d::CCArray* p1)
{
  if (*(int *)(((int)this) + 0x24) != (int)(intptr_t)p1) {
    if (p1 != 0) {
      ((cocos2d::CCObject *)p1)->retain();
    }
    if (*(int *)(((int)this) + 0x24) != 0) {
      ((cocos2d::CCObject *)this)->release();
    }
    *(int *)(((int)this) + 0x24) = (int)(intptr_t)p1;
  }
  return;
}

void BLMissionManager::setArrayPet(cocos2d::CCArray* p1)
{
  if (*(int *)(((int)this) + 0x20) != (int)(intptr_t)p1) {
    if (p1 != 0) {
      ((cocos2d::CCObject *)p1)->retain();
    }
    if (*(int *)(((int)this) + 0x20) != 0) {
      ((cocos2d::CCObject *)this)->release();
    }
    *(int *)(((int)this) + 0x20) = (int)(intptr_t)p1;
  }
  return;
}

void BLMissionManager::setArrayPartner(cocos2d::CCArray* p1)
{
  if (*(int *)(((int)this) + 0x1c) != (int)(intptr_t)p1) {
    if (p1 != 0) {
      ((cocos2d::CCObject *)p1)->retain();
    }
    if (*(int *)(((int)this) + 0x1c) != 0) {
      ((cocos2d::CCObject *)this)->release();
    }
    *(int *)(((int)this) + 0x1c) = (int)(intptr_t)p1;
  }
  return;
}

void BLMissionManager::setArrayRoles(cocos2d::CCArray* p1)
{
  if (*(int *)(((int)this) + 0x18) != (int)(intptr_t)p1) {
    if (p1 != 0) {
      ((cocos2d::CCObject *)p1)->retain();
    }
    if (*(int *)(((int)this) + 0x18) != 0) {
      ((cocos2d::CCObject *)this)->release();
    }
    *(int *)(((int)this) + 0x18) = (int)(intptr_t)p1;
  }
  return;
}

cocos2d::CCPoint BLMissionManager::getCamera() const
{
    return *(cocos2d::CCPoint *)(((int)this) + 0x88);
}

void BLMissionManager::setCamera(cocos2d::CCPoint * p1)
{
  *(cocos2d::CCPoint *)(((int)this) + 0x88) = *p1;
  return;
}

void BLMissionManager::setRandomBursh(std::vector<std::string, std::allocator<std::string>> * p1)
{
  *(std::vector<std::string, std::allocator<std::string>> *)(((int)this) + 0x9c) = *p1;
  return;
}

BLRole* BLMissionManager::getHero()
{
  return (BLRole*)(*(undefined4 *)(((int)this) + 0x54));
}

undefined8 BLMissionManager::onCamerScaleEnd()
{
  undefined4 p2 = 0;

  code *pcVar1;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)(this);
  uStack_14 = (undefined4)(p2);
  ((code)(*(int *)*(int *)((int)this + 4*(0x17)) + 0x40))((int *)*(int *)((int)this + 4*(0x17)),0x3f800000);
  pcVar1 = *(code **)(*(int *)this + 0x10c);
  0 /* ctorZero */;
  (*pcVar1)(((int)this),&piStack_18);
  return ghidra_CONCAT44(uStack_14,piStack_18);
}

int BLMissionManager::onFpsChangeEnd(float p1)
{
  undefined4 p3 = 0;
  undefined4 p4 = 0;

  int *piVar1;
  undefined4 uVar2;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_18 = (undefined4)this;
  uStack_14 = (undefined4)(p1);
  uStack_10 = (undefined4)(p3);
  uStack_c = (undefined4)(p4);
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  ((_vfn(piVar1)[0x30/4]))();
  uStack_10 = (undefined4)(*(undefined4 *)(g_004408c0 + 0x440868));
  uStack_c = (undefined4)(0);
  ;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  ((_vfn(piVar1)[0x20/4]))(piVar1,(_vfn(piVar1)+(0x20/4)),g_004408b8,g_004408bc);
  func_0079e45c(&uStack_14,((intptr_t)"items"),&uStack_18);
  func_0079e69c(&uStack_14,".plist");
  uVar2 = (undefined4)(cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache());
  ((cocos2d::CCSpriteFrameCache *)uVar2)->addSpriteFramesWithFile((char const*)uStack_14);
  func_0079e2bc(&uStack_14);
  return ghidra_CONCAT44(uStack_14,uStack_18);
}

undefined4 BLMissionManager::onDelayMissionFailed(float p1)
{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  ((_vfn(piVar1)[0x30/4]))();
  uVar4 = (undefined4)(*(undefined4 *)(g_00440938 + 0x4408e8));
  ;
  piVar1 = (int *)((BluetoothHelper *)this)->share();
  iVar2 = ((_vfn(piVar1)[0x68/4]))();
  if (iVar2 != 0) {
    ((BluetoothHelper *)this)->share();
    ((BluetoothHelper *)this)->writeVideoRecord();
  }
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  iVar2 = ((_vfn(piVar1)[0x50/4]))();
  if (iVar2 == 0) {
    piVar1 = (int *)((DataManager *)this)->shareDataManager();
    ((_vfn(piVar1)[0x28/4]))();
    ((UserData *)this)->updateExpToDataBase();
    ((BLResultManager *)this)->shareManager();
    ((BLResultManager *)this)->showFailed();
  }
  else {
    uVar3 = (undefined4)(((UIManager *)this)->shareManager());
    ((UIManager *)uVar3)->showUIById(0x50);
  }
  return uVar4;
}

int BLMissionManager::onCamerPauseEnd()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;
  undefined4 p4 = 0;

  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uVar3 = (undefined4)(*(undefined4 *)(((int)this) + 0xa8));
  uVar2 = (undefined4)(*(undefined4 *)(((int)this) + 0x5c));
  iStack_20 = (int)this;
  uStack_1c = (undefined4)(p2);
  uStack_18 = (undefined4)(p3);
  uStack_14 = (undefined4)(p4);
  uVar1 = (undefined4)(cocos2d::CCDirector::sharedDirector());
  { cocos2d::CCSize _ws = ((cocos2d::CCDirector *)uVar1)->getWinSize(); iStack_20 = hw_fbits(_ws.width); uStack_1c = hw_fbits(_ws.height); }
  uVar1 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uStack_1c),(int)(0x3f000000)))));
  0 /* ctorZero */;
  uVar1 = (undefined4)(cocos2d::CCMoveTo::create(0x3f800000, *(cocos2d::CCPoint *)&uStack_18));
  ((cocos2d::CCNode *)uVar2)->runAction((cocos2d::CCAction*)uVar1);
  return ghidra_CONCAT44(uStack_1c,iStack_20);
}

void BLMissionManager::onEnter()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ;
  uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ;
  uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ;
  return;
}

void BLMissionManager::onExit()
{
  undefined4 uVar1;
  int *piVar2;
  
  uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar1)->removeObserver((cocos2d::CCObject*)((int)this), (char const*)((intptr_t)"EVENT_ALERTUI_SURE"));
  uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar1)->removeObserver((cocos2d::CCObject*)((int)this), (char const*)((intptr_t)"EVENT_IAP_CALLBACK"));
  uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar1)->removeObserver((cocos2d::CCObject*)((int)this), (char const*)((intptr_t)"MSG_CHALLENGE_RESULT_WIN"));
  uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar1)->removeObserver((cocos2d::CCObject*)((int)this), (char const*)((intptr_t)"MSG_CHALLENGE_RESULT_FAILED"));
  piVar2 = (int *)cocos2d::CCDirector::sharedDirector();
  ((_vfn(piVar2)[0x20/4]))(piVar2,(_vfn(piVar2)+(0x20/4)),g_00440ab0,g_00440ab4);
  return;
}

bool BLMissionManager::init()
{
  return 1;
}

bool BLMissionManager::judageTouchDropItems()
{
  /* [BM-STUB] 保签名桩化：反编译体无法通过语法检查 */
  return (bool)0;
}

undefined8 BLMissionManager::getFarestHero()
{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  
  iVar1 = ((code)(*(int *)this + 0x28))();
  if ((iVar1 == 0) || (iVar1 = ((code)(*(int *)this + 0x28))(((int)this)), **(int **)(iVar1 + 0x14) == 0)) {
    piVar6 = (int *)0x0;
  }
  else {
    iVar1 = ((code)(*(int *)this + 0x28))(((int)this));
    piVar8 = *(int **)(*(int *)(iVar1 + 0x14) + 8);
    iVar1 = ((code)(*(int *)this + 0x28))(((int)this));
    iVar7 = *(int *)(*(int *)(iVar1 + 0x14) + 8);
    piVar6 = (int *)0x0;
    iVar1 = ((code)(*(int *)this + 0x28))(((int)this));
    iVar1 = **(int **)(iVar1 + 0x14) + g_00440d40;
    for (; (piVar8 <= (int *)(iVar7 + iVar1 * 4) && (*piVar8 != 0)); piVar8 = piVar8 + 1) {
      piVar2 = (int *)func_0079e55c(*piVar8,*(undefined4 *)(g_00440d44 + 0x440d08), *(undefined4 *)(g_00440d48 + 0x440d0a),0);
      if (piVar6 != (int *)0x0) {
        uVar3 = (undefined4)(((_vfn(piVar2)[0x60/4]))(piVar2));
        uVar4 = (undefined4)(((_vfn(piVar6)[0x60/4]))(piVar6));
        iVar5 = ((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);return ((_x > _y)?1:0);}((int)(uVar3),(int)(uVar4))));
        if (iVar5 == 0) {
          piVar2 = piVar6;
        }
      }
      piVar6 = piVar2;
    }
  }
  return ghidra_CONCAT44(((int)this),piVar6);
}

undefined4 BLMissionManager::isTriggerOver()
{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar2 = ((code)(**(int **)(((int)this) + 0x60) + 0x78))();
  if (iVar2 != 0) {
    iVar2 = *(int *)(iVar2 + 0x14);
    iVar4 = iVar2;
    if (iVar2 != 0) {
      iVar4 = *(int *)(iVar2 + 0x110);
    }
    while (iVar2 != 0) {
      if (*(int *)(iVar2 + 0x104) == 0) {

  return 0;
      }
      piVar3 = (int *)func_0079e55c(*(int *)(iVar2 + 0x104), *(undefined4 *)(g_00440dac + 0x440d7e), *(undefined4 *)(g_00440db0 + 0x440d80),0);
      iVar2 = ((_vfn(piVar3)[0x28/4]))();
      if (iVar2 == 0) {
        return 0;
      }
      iVar2 = iVar4;
      if (iVar4 != 0) {
        iVar4 = *(int *)(iVar4 + 0x110);
      }
    }
  }
  return 1;
}

int BLMissionManager::isMissionEnd()
{
  undefined4 p4 = 0;

  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  
  piVar4 = *(int **)(((int)this) + 0x68);
  if ((piVar4 != (int *)0x0) && (iVar1 = ((_vfn(piVar4)[0x38/4]))(piVar4), iVar1 != 0)) {
    iVar5 = **(int **)(iVar1 + 0x14);
    if (iVar5 != 0) {
      piVar6 = (int *)(*(int **)(iVar1 + 0x14))[2];
      piVar4 = piVar6 + iVar5 + g_00440e5c;
      for (; (piVar6 <= piVar4 && (*piVar6 != 0)); piVar6 = piVar6 + 1) {
        iVar1 = func_0079e55c(*piVar6,*(undefined4 *)(g_00440e60 + 0x440df4), *(undefined4 *)(g_00440e64 + 0x440df6),0,p4);
        if ((iVar1 != 0) && (((*(int *)(((int)this) + 100) != 0 && (uVar2 = ((cocos2d::CCArray *)*(undefined4 *)(((int)this) + 0x24))->count(), uVar2 < 2)) && (*(int *)(((int)this) + 0xa0) - *(int *)(((int)this) + 0x9c) >> 2 == 0)))) {
          uVar3 = (undefined4)(((code)(**(int **)(((int)this) + 0x68) + 0x38))());
          iVar1 = ((cocos2d::CCArray *)uVar3)->indexOfObject((cocos2d::CCObject*)*(undefined4 *)(((int)this) + 100));
          ((code)(**(int **)(((int)this) + 0x68) + 0x38))();
          uVar2 = (undefined4)(((cocos2d::CCArray *)this)->count());
          if (((uVar2 <= iVar1 + 1U) && (uVar2 = ((cocos2d::CCArray *)*(undefined4 *)(((int)this) + 0x24))->count(), uVar2 < 2)) && (iVar1 = BLMissionManager::isTriggerOver(), iVar1 != 0)) {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}

void BLMissionManager::setCamerScale(cocos2d::CCPoint * p1, float p2, float p3)
{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  code *pcVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined1 auStack_48 [8];
  undefined4 auStack_40 [2];
  undefined1 auStack_38 [8];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  0 /* ctorZero */;
  uVar1 = (undefined4)(((code)(**(int **)(((int)this) + 0x5c) + 0x248))());
  *(CCPoint *)auStack_40 = ((cocos2d::CCNode *)uVar1)->convertToWorldSpace(*p1);
  *(cocos2d::CCPoint *)(((int)this) + 0xa8) = *(cocos2d::CCPoint *)auStack_40;
  uVar1 = (undefined4)(((code)(**(int **)(((int)this) + 0x5c) + 0x8c))());
  0 /* ctorZero */;
  uVar1 = (undefined4)(cocos2d::CCDirector::sharedDirector());
  { cocos2d::CCSize _ws = ((cocos2d::CCDirector *)uVar1)->getWinSize(); uStack_30 = hw_fbits(_ws.width); uStack_2c = hw_fbits(_ws.height); }
  piVar8 = *(int **)(((int)this) + 0x5c);
  pcVar5 = (_vfn(piVar8)+(0x7c/4));
  uVar1 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(auStack_40[0]),(int)(uStack_30)))));
  0 /* ctorZero */;
  (*pcVar5)(piVar8,&uStack_20);
  ((code)(**(int **)(((int)this) + 0x5c) + 0x5c))(*(int **)(((int)this) + 0x5c),auStack_40[0]);
  piVar8 = *(int **)(((int)this) + 0x5c);
  iVar6 = (int)*(int *)&(*piVar8);
  uVar1 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uStack_2c),(int)(0x3f000000)))));
  ((code)(iVar6 + 100))(piVar8,uVar1);
  ((code)(**(int **)(((int)this) + 0x5c) + 0x40))(*(int **)(((int)this) + 0x5c),0x3fc00000);
  uVar7 = (undefined4)(*(undefined4 *)(((int)this) + 0x5c));
  uVar1 = (undefined4)(cocos2d::CCDelayTime::create(0x3f800000));
  uVar2 = (undefined4)(cocos2d::CCCallFunc::create((cocos2d::CCObject*)((int)this), (cocos2d::SEL_CallFunc)0));
  uVar3 = (undefined4)(cocos2d::CCScaleTo::create(0x3f800000, 0x3f800000));
  uStack_20 = (undefined4)(*(undefined4 *)(g_00440f6c + 0x440f40));
  uStack_1c = (undefined4)(0);
  uVar4 = (undefined4)(cocos2d::CCCallFunc::create((cocos2d::CCObject*)((int)this), (cocos2d::SEL_CallFunc)0));
  uVar1 = (undefined4)(cocos2d::CCSequence::create((cocos2d::CCFiniteTimeAction*)uVar1, uVar2, uVar3, uVar4, 0));
  ((cocos2d::CCNode *)uVar7)->runAction((cocos2d::CCAction*)uVar1);
  return;
}

void BLMissionManager::whiteAction()
{
  undefined4 uVar1;
  int *piVar2;
  undefined4 uVar3;
  code *pcVar4;
  int iStack_28;
  int iStack_24;
  undefined1 auStack_20 [12];
  
  uVar1 = (undefined4)(((code)(**(int **)(((int)this) + 0x5c) + 0x8c))());
  0 /* ctorZero */;
  piVar2 = (int *)cocos2d::CCLayerColor::create();
  pcVar4 = (_vfn(piVar2)+(0x88/4));
  uVar1 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(iStack_28),(int)(0x40800000)))));
  uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(iStack_24),(int)(0x40800000)))));
  0 /* ctorZero */;
  (*pcVar4)(piVar2,auStack_20);
  ((_vfn(piVar2)[0x200/4]))(piVar2,0xff);
  ((_vfn(piVar2)[0x218/4]))(piVar2,g_00441038 + 0x440fe0);
  pcVar4 = (_vfn(piVar2)+(0x4c/4));
  0 /* ctorZero */;
  (*pcVar4)(piVar2,auStack_20);
  ((code)(**(int **)(((int)this) + 0x5c) + 0xcc))(*(int **)(((int)this) + 0x5c),piVar2,g_0044103c);
  uVar1 = (undefined4)(cocos2d::CCFadeTo::create(0x3f800000, 0));
  ((cocos2d::CCNode *)piVar2)->runAction((cocos2d::CCAction*)uVar1);
  uVar1 = (undefined4)(((CocosDenshion::SimpleAudioEngine *)this)->sharedEngine());
  ((CocosDenshion::SimpleAudioEngine *)uVar1)->playEffect((char const*)((intptr_t)"dieeffect.mp3"), 0);
  return;
}

int BLMissionManager::onWinEffect()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;
  undefined4 p4 = 0;

  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iVar3 = (int)this;
  uStack_18 = (undefined4)(p3);
  uStack_14 = (undefined4)(p4);
  uVar1 = (undefined4)(((BluetoothHelper *)this)->share());
  ((BluetoothHelper *)uVar1)->setGameEffect(1);
  0 /* ctorZero */;
  this->setCamerScale((cocos2d::CCPoint *)&uStack_18,0x3fc00000,0x3f800000);
  BLMissionManager::whiteAction();
  piVar2 = (int *)cocos2d::CCDirector::sharedDirector();
  ((_vfn(piVar2)[0x20/4]))(piVar2,(_vfn(piVar2)+(0x20/4)),g_004410c0,g_004410c4);
  uVar1 = (undefined4)(((BLGameScene *)this)->shareGameScene());
  ((BLGameScene *)uVar1)->runWorldFpsChange(10, g_004410c8, 0x40000000);
  piVar2 = (int *)cocos2d::CCDirector::sharedDirector();
  ((_vfn(piVar2)[0x30/4]))();
  uStack_14 = (undefined4)(0);
  uStack_18 = (undefined4)(*(undefined4 *)(g_004410cc + 0x4410ae));
  uVar1 = (undefined4)(0x40000000);
  uVar4 = (undefined4)(0);
  ;
  return ghidra_CONCAT44(uVar4,uVar1);
}

void BLMissionManager::missionWin()
{
  /* [BM-STUB] 保签名桩化：反编译体无法通过语法检查 */
}

void BLMissionManager::onChallengeResultWin()
{
  BLMissionManager::missionWin();
  return;
}

void BLMissionManager::onFailedEffect()
{
  undefined4 uVar1;
  int *piVar2;
  
  uVar1 = (undefined4)(((BluetoothHelper *)this)->share());
  ((BluetoothHelper *)uVar1)->setGameEffect(2);
  BLMissionManager::whiteAction();
  piVar2 = (int *)cocos2d::CCDirector::sharedDirector();
  ((_vfn(piVar2)[0x20/4]))(piVar2,(_vfn(piVar2)+(0x20/4)),g_004412a8,g_004412ac);
  uVar1 = (undefined4)(((BLGameScene *)this)->shareGameScene());
  ((BLGameScene *)uVar1)->runWorldFpsChange(10, g_004412b0, 0x40000000);
  piVar2 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar1 = (undefined4)(((_vfn(piVar2)[0x30/4]))());
  ;
  return;
}

void BLMissionManager::missionFailed()
{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  *(undefined1 *)(((int)this) + 0x33) = 0;
  *(int *)((int)this + 4*(0x32)) = 0;
  if (*(char *)((int)((int)this) + 0x85) == '\0') {
    piVar1 = (int *)((DataManager *)this)->shareDataManager();
    iVar2 = ((_vfn(piVar1)[0x118/4]))();
    if (iVar2 != 0xd) {
      ((code)(*(int *)this + 0x9c))(((int)this),0);
      BLMissionManager::onFailedEffect();
      0 /* ctorZero */;
      BLMissionManager::setCamerScale((cocos2d::CCPoint *)&uStack_20, 0x3fc00000, 0x3f800000);
    }
    *(char *)((int)((int)this) + 0x85) = '\x01';
    *(undefined1 *)(((int)this) + 0x21) = 0;
    piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((_vfn(piVar1)[0x30/4]))());
    uStack_1c = (undefined4)(0);
    uStack_20 = (undefined4)(*(undefined4 *)(g_00441348 + 0x441336));
    ;
  }
  return;
}

void BLMissionManager::onChallengeResultFailed()
{
  BLMissionManager::missionFailed();
  return;
}

void BLMissionManager::nodeTick(float p1)
{
  /* [BM-STUB] 保签名桩化：反编译体无法通过语法检查 */
}

bool BLMissionManager::roleArraySort(cocos2d::CCArray* p1, BLRoleBase* p2)
{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  uVar2 = (undefined4)(((cocos2d::CCArray *)p1)->count());
  uStack_28 = (undefined4)(0);
  if (1 < uVar2) {
    for (; iVar3 = ((cocos2d::CCArray *)p1)->count(), uStack_28 < iVar3 - 1U; uStack_28 = uStack_28 + 1) {
      uStack_2c = (undefined4)(0);
      while( true ) {
        iVar3 = ((cocos2d::CCArray *)p1)->count();
        if (iVar3 + ~uStack_28 <= uStack_2c) break;
        iVar3 =(int)(intptr_t)( ((cocos2d::CCArray *)p1)->objectAtIndex((unsigned int)uStack_2c));
        uVar10 = (undefined4)(*(undefined4 *)(g_004416ec + 0x441640));
        uVar9 = (undefined4)(*(undefined4 *)(g_004416f0 + 0x441642));
        piVar4 = (int *)0x0;
        if (iVar3 != 0) {
          piVar4 = (int *)func_0079e55c(iVar3,uVar10,uVar9,0);
        }
        uStack_2c = (undefined4)(uStack_2c + 1);
        iVar3 =(int)(intptr_t)( ((cocos2d::CCArray *)p1)->objectAtIndex((unsigned int)uStack_2c));
        if (iVar3 == 0) {
          ((_vfn(piVar4)[0x60/4]))(piVar4);
          ((_vfn(p2)[0x60/4]))(p2);

  return 0;
        }
        piVar5 = (int *)func_0079e55c(iVar3,uVar10,uVar9,0);
        uVar9 = (undefined4)(((_vfn(piVar4)[0x60/4]))(piVar4));
        uVar10 = (undefined4)(((_vfn(p2)[0x60/4]))(p2));
        uVar6 = (undefined4)(((_vfn(piVar5)[0x60/4]))(piVar5));
        uVar7 = (undefined4)(((_vfn(p2)[0x60/4]))(p2));
        uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x - _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar9),(int)(uVar10)))));
        uVar8 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x - _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar6),(int)(uVar7)))));
        iVar3 = ((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);return ((_x < _y)?1:0);}((int)(uVar2 & 0x7fffffff),(int)(uVar8 & 0x7fffffff))));
        if (iVar3 != 0) {
          ((cocos2d::CCArray *)p1)->exchangeObject((cocos2d::CCObject*)piVar4, (cocos2d::CCObject*)piVar5);
        }
      }
    }
  }
  return *(( bool *)0);
}

undefined8 BLMissionManager::switchHero()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;

  int iVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  
  iVar8 = g_0044187c + 0x441700;
  piVar7 =(int *)(intptr_t)( (int)this);
  iVar1 = ((cocos2d::CCArray *)*(int *)((int)this + 4*(7)))->count();
  if (iVar1 != 0) {
    uVar2 = (undefined4)(((cocos2d::CCArray *)*(int *)((int)this + 4*(7)))->indexOfObject((cocos2d::CCObject*)*(int *)((int)this + 4*(0x15))));
    iVar1 = ((cocos2d::CCArray *)*(int *)((int)this + 4*(7)))->count();
    iVar6 = 0;
    if (uVar2 < iVar1 - 1U) {
      iVar6 = uVar2 + 1;
    }
    iVar1 =(int)(intptr_t)( ((cocos2d::CCArray *)*(int *)((int)this + 4*(7)))->objectAtIndex((unsigned int)iVar6));
    piVar3 = (int *)0x0;
    if (iVar1 != 0) {
      p2 = *(undefined4 *)(iVar8 + g_00441884);
      piVar3 = (int *)func_0079e55c(iVar1,*(undefined4 *)(iVar8 + g_00441880),p2,0, *(undefined4 *)(iVar8 + g_00441880),p2,p3);
    }
    piVar7 = (int *)(uint)*(byte *)(((int)this) + 0x2c);
    if (piVar7 == (int *)0x0) {
      ((BLRole *)this)->startAI();
      ((BLRole *)piVar3)->stopAI();
      iVar1 = ((code)(*(int *)*(int *)((int)this + 4*(0x15)) + 0x3b8))();
      if (iVar1 != 0) {
        piVar4 = (int *)((code)(*(int *)*(int *)((int)this + 4*(0x15)) + 0x3b8))();
        iVar1 = ((_vfn(piVar4)[0x38/4]))();
        if (iVar1 != 0) {
          piVar4 = (int *)((code)(*(int *)*(int *)((int)this + 4*(0x15)) + 0x3b8))();
          ((_vfn(piVar4)[0x3c/4]))(piVar4,piVar7);
          iVar1 = ((_vfn(piVar3)[0x3b8/4]))(piVar3);
          if (iVar1 != 0) {
            piVar4 = (int *)((_vfn(piVar3)[0x3b8/4]))(piVar3);
            ((_vfn(piVar4)[0x3c/4]))(piVar4,1);
          }
        }
      }
    }
    else {
      iVar1 = ((code)(*(int *)*(int *)((int)this + 4*(0x15)) + 0x3b8))();
      if (iVar1 != 0) {
        piVar4 = (int *)((code)(*(int *)*(int *)((int)this + 4*(0x15)) + 0x3b8))();
        iVar1 =(int)(intptr_t)( ((_vfn(piVar4)[0x38/4]))());
        if (iVar1 != 0) {
          piVar4 = (int *)((code)(*(int *)*(int *)((int)this + 4*(0x15)) + 0x3b8))();
          ((_vfn(piVar4)[0x3c/4]))(piVar4,0);
          iVar1 = ((_vfn(piVar3)[0x3b8/4]))(piVar3);
          if (iVar1 != 0) {
            piVar4 = (int *)((_vfn(piVar3)[0x3b8/4]))(piVar3);
            ((_vfn(piVar4)[0x3c/4]))(piVar4,1);
          }
        }
      }
      ((BLRole *)*(int *)((int)this + 4*(0x15)))->setAutoFight(1);
      ((BLRole *)piVar3)->setAutoFight(1);
      ((BLRole *)*(int *)((int)this + 4*(0x15)))->setAutoGo(0);
      ((BLRole *)piVar3)->setAutoGo(1);
    }
    ((code)(*(int *)this + 0x9c))(((int)this),piVar3);
    uVar5 = (undefined4)(((UIManager *)this)->shareManager());
    iVar1 = 0; // stub getUIObject
    if (iVar1 != 0) {
      piVar7 = *(int **)(iVar8 + g_00441888);
      p2 = *(undefined4 *)(iVar8 + g_0044188c);
      iVar1 = func_0079e55c(iVar1,piVar7,p2,0);
      if ((iVar1 != 0) && (*(int *)(iVar1 + 0x24) != 0)) {
        piVar7 = *(int **)(iVar8 + g_00441890);
        p2 = *(undefined4 *)(iVar8 + g_00441894);
        iVar1 = func_0079e55c(*(int *)(iVar1 + 0x24),piVar7,p2,0);
        if (iVar1 != 0) {
          ((FightControlLayer *)this)->updateSkillInfo();
          ((FightControlLayer *)iVar1)->onUpdateExp(0);
        }
      }
    }
  }
  return ghidra_CONCAT44(p2,piVar7);
}

int BLMissionManager::nearestRole(BLRole* p1, int p2, bool p3)
{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  code *pcVar7;
  uint uStack_28;
  int *piStack_24;
  uint uStack_20;
  
  uVar1 = (undefined4)(cocos2d::CCArray::create());
  if (p2 == 0) {
    pcVar7 = *(code **)(*(int *)this + 0x28);
  }
  else {
    uVar2 = (undefined4)(((code)(*(int *)this + 0x50))(((int)this)));
    ((cocos2d::CCArray *)uVar1)->addObjectsFromArray((cocos2d::CCArray*)uVar2);
    pcVar7 = *(code **)(*(int *)this + 0x38);
  }
  uVar2 = (undefined4)((*pcVar7)(((int)this)));
  ((cocos2d::CCArray *)uVar1)->addObjectsFromArray((cocos2d::CCArray*)uVar2);
  uStack_28 = (undefined4)(0);
  uStack_20 = (undefined4)(g_004419b4);
  piStack_24 = (int *)0x0;
  do {
    uVar3 = (undefined4)(((cocos2d::CCArray *)uVar1)->count());
    if (uVar3 <= uStack_28) {
      return (int)piStack_24;
    }
    iVar4 =(int)(intptr_t)( ((cocos2d::CCArray *)uVar1)->objectAtIndex((unsigned int)uStack_28));
    if (((iVar4 != 0) && (piVar5 = (int *)func_0079e55c(iVar4,*(undefined4 *)(g_004419b8 + 0x441900), *(undefined4 *)(g_004419bc + 0x441902),0), piVar5 != (int *)0x0)) && (piVar5 != (int *)p1)) {
      if (p3 != 0) {
        iVar4 = ((cocos2d::CCSprite *)p1)->isFlipX();
        if (iVar4 == 0) {
          uVar2 = (undefined4)(((_vfn(piVar5)[0x60/4]))(piVar5));
          uVar6 = (undefined4)(((_vfn(p1)[0x60/4]))(p1));
          iVar4 = ((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);return ((_x < _y)?1:0);}((int)(uVar2),(int)(uVar6))));
          if (iVar4 != 0) goto LAB_004419a6;
        }
        iVar4 = ((cocos2d::CCSprite *)p1)->isFlipX();
        if (iVar4 != 0) {
          uVar2 = (undefined4)(((_vfn(piVar5)[0x60/4]))(piVar5));
          uVar6 = (undefined4)(((_vfn(p1)[0x60/4]))(p1));
          iVar4 = ((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);return ((_x > _y)?1:0);}((int)(uVar2),(int)(uVar6))));
          if (iVar4 != 0) goto LAB_004419a6;
        }
      }
      iVar4 = ((BLRoleAttribute *)piVar5 + 0x71)->getLife();
      if (0 < iVar4) {
        uVar2 = (undefined4)(((_vfn(piVar5)[0x60/4]))(piVar5));
        uVar6 = (undefined4)(((_vfn(p1)[0x60/4]))(p1));
        uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x - _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar2),(int)(uVar6)))));
        iVar4 = ((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);return ((_x < _y)?1:0);}((int)(uVar3 & 0x7fffffff),(int)(uStack_20))));
        if (iVar4 != 0) {
          piStack_24 = piVar5;
          uStack_20 = (undefined4)(uVar3 & 0x7fffffff);
        }
      }
    }
LAB_004419a6:
    uStack_28 = (undefined4)(uStack_28 + 1);
  } while( true );
}

undefined4 BLMissionManager::randomRole(int p1)
{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  code *pcVar5;
  
  uVar1 = (undefined4)(cocos2d::CCArray::create());
  if (p1 == 0) {
    pcVar5 = *(code **)(*(int *)this + 0x28);
  }
  else {
    uVar2 = (undefined4)(((code)(*(int *)this + 0x50))(((int)this)));
    ((cocos2d::CCArray *)uVar1)->addObjectsFromArray((cocos2d::CCArray*)uVar2);
    pcVar5 = *(code **)(*(int *)this + 0x38);
  }
  uVar2 = (undefined4)((*pcVar5)(((int)this)));
  ((cocos2d::CCArray *)uVar1)->addObjectsFromArray((cocos2d::CCArray*)uVar2);
  iVar3 = ((cocos2d::CCArray *)uVar1)->count();
  if (iVar3 != 0) {
    uVar2 = (undefined4)(((long long)::lrand48()));
    uVar4 = (undefined4)(((cocos2d::CCArray *)uVar1)->count());
    (void)(((long long)((unsigned)(uVar2) / (unsigned)(uVar4))));
    iVar3 = (int)((cocos2d::CCArray *)uVar1); // stub
    if (iVar3 != 0) {
      uVar1 = func_0079e55c(iVar3,*(undefined4 *)(g_00441a34 + 0x441a2a), *(undefined4 *)(g_00441a38 + 0x441a2c),0);
      return uVar1;
    }
  }
  return 0;
}

undefined8 BLMissionManager::lifeLeastRole(int p1)
{
  undefined4 p3 = 0;

  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  code *pcVar7;
  uint uVar8;
  undefined4 uVar9;
  
  iVar6 = *(int *)this;
  if (p1 == 0) {
    pcVar7 = *(code **)(iVar6 + 0x28);
  }
  else if (p1 == 0x65) {
    pcVar7 = *(code **)(iVar6 + 0x50);
  }
  else {
    pcVar7 = *(code **)(iVar6 + 0x38);
  }
  uVar1 = (undefined4)((*pcVar7)());
  uVar9 = (undefined4)(0);
  iVar6 = 0;
  for (uVar8 = 0; uVar2 = ((cocos2d::CCArray *)uVar1)->count(), uVar8 < uVar2; uVar8 = uVar8 + 1) {
    iVar3 =(int)(intptr_t)( ((cocos2d::CCArray *)uVar1)->objectAtIndex((unsigned int)uVar8));
    if ((iVar3 != 0) && (iVar3 = func_0079e55c(iVar3,*(undefined4 *)(g_00441ab4 + 0x441a7e), *(undefined4 *)(g_00441ab8 + 0x441a80),0,iVar6,uVar9,p3), iVar3 != 0)) {
      ((BLRoleAttribute *)iVar3 + 0x1c4)->getLife();
      uVar4 = (undefined4)(func_0079e2ec());
      iVar5 = ((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);return ((_x < _y)?1:0);}((int)(uVar4),(int)(uVar9))));
      if ((iVar5 != 0) || (uVar8 == 0)) {
        iVar6 = iVar3;
        uVar9 = (undefined4)(uVar4);
      }
    }
  }
  return ghidra_CONCAT44(iVar6,iVar6);
}

undefined4 BLMissionManager::rolesByType(int p1)
{
  undefined4 uVar1;
  undefined4 uVar2;
  code *pcVar3;
  
  uVar1 = (undefined4)(cocos2d::CCArray::create());
  if (p1 == 0) {
    pcVar3 = *(code **)(*(int *)this + 0x28);
  }
  else {
    uVar2 = (undefined4)(((code)(*(int *)this + 0x38))(((int)this)));
    ((cocos2d::CCArray *)uVar1)->addObjectsFromArray((cocos2d::CCArray*)uVar2);
    pcVar3 = *(code **)(*(int *)this + 0x50);
  }
  uVar2 = (undefined4)((*pcVar3)(((int)this)));
  ((cocos2d::CCArray *)uVar1)->addObjectsFromArray((cocos2d::CCArray*)uVar2);
  return uVar1;
}

void BLMissionManager::runWorldFpsChange(float p1, float p2)
{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar1 = (undefined4)(cocos2d::CCArray::create());
  uVar2 = (undefined4)(((code)(*(int *)this + 0x20))(((int)this)));
  ((cocos2d::CCArray *)uVar1)->addObjectsFromArray((cocos2d::CCArray*)uVar2);
  uVar2 = (undefined4)(((code)(*(int *)this + 0x38))(((int)this)));
  ((cocos2d::CCArray *)uVar1)->addObjectsFromArray((cocos2d::CCArray*)uVar2);
  uVar2 = (undefined4)(((code)(*(int *)this + 0x50))(((int)this)));
  ((cocos2d::CCArray *)uVar1)->addObjectsFromArray((cocos2d::CCArray*)uVar2);
  uVar2 = (undefined4)(((code)(*(int *)this + 0x48))(((int)this)));
  ((cocos2d::CCArray *)uVar1)->addObjectsFromArray((cocos2d::CCArray*)uVar2);
  for (uVar5 = 0; uVar3 = ((cocos2d::CCArray *)uVar1)->count(), uVar5 < uVar3; uVar5 = uVar5 + 1) {
    iVar4 =(int)(intptr_t)( ((cocos2d::CCArray *)uVar1)->objectAtIndex((unsigned int)uVar5));
    if ((iVar4 != 0) && (iVar4 = func_0079e55c(iVar4,*(undefined4 *)(g_00441b80 + 0x441b64), *(undefined4 *)(g_00441b84 + 0x441b66),0), iVar4 != 0)) {
      ((BLRoleBase *)iVar4)->changeFps(p1, p2, 1);
    }
  }
  return;
}

void BLMissionManager::addEffectUp(cocos2d::CCNode* p1, std::string * p2)
{
  /* [BM-STUB] 保签名桩化：反编译体无法通过语法检查 */
}

void BLMissionManager::addEffectDown(cocos2d::CCNode* p1, std::string * p2)
{
  /* [BM-STUB] 保签名桩化：反编译体无法通过语法检查 */
}

void BLMissionManager::addRole(cocos2d::CCNode* p1, std::string * p2)
{
  /* [BM-STUB] 保签名桩化：反编译体无法通过语法检查 */
}

bool BLMissionManager::addDropItem(ItemData* p1)
{
  undefined4 p4 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  code *pcVar6;
  
  uVar5 = (undefined4)(*(undefined4 *)(((int)this) + 0x70));
  uVar1 = (undefined4)(((_vfn(p1)[0x18/4]))(p1));
  iVar2 =(int)(intptr_t)( ((cocos2d::CCDictionary *)uVar5)->objectForKey(uVar1));
  if ((iVar2 == 0) || (piVar3 = (int *)func_0079e55c(iVar2,*(undefined4 *)(g_00441e50 + 0x441db6), *(undefined4 *)(g_00441e54 + 0x441db8),0,p4), piVar3 == (int *)0x0)) {
    piVar3 = (int *)((long long)::operator new((size_t)(0x30)));
    0 /* ctorZero */;
    iVar2 = ((BackPackItemData *)piVar3)->init();
    if (iVar2 == 0) {
      ((_vfn(piVar3)[8/4]))(piVar3);

  return 0;
    }
    ((cocos2d::CCObject *)piVar3)->autorelease();
    pcVar6 = (_vfn(piVar3)+(0x24/4));
    uVar1 = (undefined4)(((_vfn(p1)[0x18/4]))(p1));
    (*pcVar6)(piVar3,uVar1);
    pcVar6 = (_vfn(piVar3)+(0x2c/4));
    uVar1 = (undefined4)(((_vfn(p1)[0x98/4]))(p1));
    (*pcVar6)(piVar3,uVar1);
    uVar5 = (undefined4)(*(undefined4 *)(((int)this) + 0x70));
    uVar1 = (undefined4)(((_vfn(p1)[0x18/4]))(p1));
    ((cocos2d::CCDictionary *)uVar5)->setObject((cocos2d::CCObject*)piVar3, uVar1);
  }
  else {
    pcVar6 = (_vfn(piVar3)+(0x2c/4));
    iVar2 = ((_vfn(piVar3)[0x28/4]))();
    iVar4 = ((_vfn(p1)[0x98/4]))(p1);
    (*pcVar6)(piVar3,iVar2 + iVar4);
  }
  return *(( bool *)0);
}

void BLMissionManager::exitMission()
{
  /* [BM-STUB] 保签名桩化：反编译体无法通过语法检查 */
}

void BLMissionManager::changeAutoState()
{
  byte *pbVar1;
  
  pbVar1 = (byte *)(((int)this) + 0xb0);
  *pbVar1 = *pbVar1 ^ 1;
  ((BLRole *)this)->setAutoFight(*(undefined4 *)(((int)this) + 0x54));
  ((BLRole *)*(undefined4 *)(((int)this) + 0x54))->setAutoGo(*pbVar1);
  return;
}

undefined8 BLMissionManager::setHero(BLRole* p1)
{
  undefined4 p3 = 0;

  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iStack_14;
  undefined4 uStack_10;
  
  iStack_14 = (int)(intptr_t)p1;
  if (p1 != 0) {
    uStack_10 = (undefined4)(p3);
    ((cocos2d::CCObject *)p1)->retain();
    if (*(int *)(((int)this) + 0x54) != 0) {
      ((cocos2d::CCObject *)this)->release();
    }
    *(int *)(((int)this) + 0x54) = (int)(intptr_t)p1;
    piVar1 = (int *)((DataManager *)this)->shareDataManager();
    iVar2 = ((_vfn(piVar1)[0x118/4]))();
    if (iVar2 == 3) {
      ((BluetoothHelper *)this)->share();
      iVar2 = ((BluetoothHelper *)this)->isHost();
      if (iVar2 != 0) {
        ((BluetoothHelper *)this)->share();
        iVar2 = ((BluetoothHelper *)this)->isBlueFight();
        if (iVar2 != 0) {
          uVar3 = (undefined4)(((BluetoothHelper *)this)->share());
          uVar4 = (undefined4)(((code)(**(int **)(((int)this) + 0x54) + 0x250))());
  ; /* 垃圾桩化 ConvertToString */
          ((BluetoothHelper *)uVar3)->setHero((*reinterpret_cast<std::string *>((void *)(&iStack_14))));
          func_0079e2bc(&iStack_14);
        }
      }
    }
  }
  return ghidra_CONCAT44(iStack_14,((int)this));
}

undefined8 BLMissionManager::switchEnemy()
{
  undefined4 p2 = 0;

  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  undefined4 uStack_14;
  
  uStack_14 = (undefined4)(p2);
  ((code)(*(int *)this + 0x38))();
  iVar1 = ((cocos2d::CCArray *)this)->count();
  if (iVar1 != 0) {
    uVar2 = (undefined4)(((code)(*(int *)this + 0x38))(((int)this)));
    uVar3 = (undefined4)(((code)(*(int *)this + 0xa0))(((int)this)));
    uVar4 = (undefined4)(((cocos2d::CCArray *)uVar2)->indexOfObject((cocos2d::CCObject*)uVar3));
    ((code)(*(int *)this + 0x38))(((int)this));
    iVar1 = ((cocos2d::CCArray *)this)->count();
    iVar6 = 0;
    if (uVar4 < iVar1 - 1U) {
      iVar6 = uVar4 + 1;
    }
    uVar2 = (undefined4)(((code)(*(int *)this + 0x38))(((int)this)));
    iVar1 =(int)(intptr_t)( ((cocos2d::CCArray *)uVar2)->objectAtIndex((unsigned int)iVar6));
    piVar5 = (int *)0x0;
    if (iVar1 != 0) {
      piVar5 = (int *)func_0079e55c(iVar1,*(undefined4 *)(g_00442060 + 0x441fe2), *(undefined4 *)(g_00442064 + 0x441fe4),0);
    }
    ((code)(*(int *)this + 0xa0))(((int)this));
    ((BLRole *)this)->startAI();
    ((BLRole *)piVar5)->stopAI();
    ((code)(*(int *)this + 0xa4))(((int)this),piVar5);
    ((BluetoothHelper *)this)->share();
    iVar1 = ((BluetoothHelper *)this)->isHost();
    if (iVar1 != 0) {
      ((BluetoothHelper *)this)->share();
      iVar1 = ((BluetoothHelper *)this)->isBlueFight();
      if (iVar1 != 0) {
        uVar2 = (undefined4)(((BluetoothHelper *)this)->share());
        uVar3 = (undefined4)(((_vfn(piVar5)[0x250/4]))(piVar5));
  ; /* 垃圾桩化 ConvertToString */
        ((BluetoothHelper *)uVar2)->setHero((*reinterpret_cast<std::string *>((void *)(&uStack_14))));
        func_0079e2bc(&uStack_14);
      }
    }
  }
  return ghidra_CONCAT44(uStack_14,((int)this));
}

int BLMissionManager::isAttack(BLRoleBase* p1, BLRole* p2)
{
  /* [BM-STUB] 保签名桩化：反编译体无法通过语法检查 */
  return (int)0;
}

int BLMissionManager::hit(BLRoleBase* p1, BLHit* p2, bool& p3, cocos2d::CCArray* p4)
{
  /* [BM-STUB] 保签名桩化：反编译体无法通过语法检查 */
  return (int)0;
}

BLMissionManager::BLMissionManager()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;

  int iVar1;
  undefined4 uVar2;
  int *piStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  piStack_20 =(int *)(intptr_t)( (int)this);
  uStack_1c = (undefined4)(p2);
  uStack_18 = (undefined4)(p3);
  0 /* ctorZero */;
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  0 /* ctorZero */;
  *(int *)((int)this + 4*(0x27)) =(int)(intptr_t)( 0);
  *(int *)((int)this + 4*(0x28)) = 0;
  *(int *)((int)this + 4*(0x29)) = 0;
  0 /* ctorZero */;
  iVar1 = g_004428cc;
  *(int *)((int)this + 4*(0x15)) = 0;
  *(int *)((int)this + 4*(0x16)) = 0;
  *(int *)((int)this + 4*(0x17)) = 0;
  *(int *)((int)this + 4*(0x18)) = 0;
  *(int *)((int)this + 4*(0x1a)) = 0;
  *(int *)((int)this + 4*(0x19)) = 0;
  _set_assign(((cocos2d::CCPoint *)((int)this) + 0x22),(iVar1 + 0x442746));
  *(int *)((int)this + 4*(0x25)) = 0;
  *(int *)((int)this + 4*(0x26)) = 0;
  *(int *)((int)this + 4*(0xe)) = 0;
  *(int *)((int)this + 4*(0xf)) = 0;
  *(int *)((int)this + 4*(0x2e)) = 0;
  *(int *)((int)this + 4*(0x2d)) = 0;
  iVar1 =(int)(intptr_t)( cocos2d::CCArray::create());
  *(int *)((int)this + 4*(7)) = iVar1;
  if (iVar1 != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  iVar1 =(int)(intptr_t)( cocos2d::CCArray::create());
  *(int *)((int)this + 4*(9)) = iVar1;
  if (iVar1 != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  iVar1 =(int)(intptr_t)( cocos2d::CCArray::create());
  *(int *)((int)this + 4*(0xb)) =(int)(intptr_t)( iVar1);
  if (iVar1 != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  iVar1 =(int)(intptr_t)( cocos2d::CCArray::create());
  *(int *)((int)this + 4*(10)) = iVar1;
  if (iVar1 != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  iVar1 =(int)(intptr_t)( cocos2d::CCArray::create());
  *(int *)((int)this + 4*(0x12)) = iVar1;
  if (iVar1 != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  iVar1 =(int)(intptr_t)( cocos2d::CCArray::create());
  ; /* 垃圾桩化 返回函数类型 */
  if (iVar1 != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  iVar1 =(int)(intptr_t)( cocos2d::CCArray::create());
  *(int *)((int)this + 4*(0x11)) = iVar1;
  if (iVar1 != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  iVar1 =(int)(intptr_t)( cocos2d::CCArray::create());
  *(int *)((int)this + 4*(0x13)) = iVar1;
  if (iVar1 != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  iVar1 =(int)(intptr_t)( cocos2d::CCArray::create());
  *(int *)((int)this + 4*(0xc)) = iVar1;
  if (iVar1 != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  iVar1 =(int)(intptr_t)( cocos2d::CCArray::create());
  *(int *)((int)this + 4*(0x14)) = iVar1;
  if (iVar1 != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  *(undefined1 *)(((int)this) + 0x21) = 0;
  iVar1 =(int)(intptr_t)( cocos2d::CCDictionary::create());
  *(int *)((int)this + 4*(0x1d)) = iVar1;
  if (iVar1 != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  iVar1 =(int)(intptr_t)( cocos2d::CCDictionary::create());
  *(int *)((int)this + 4*(0x1e)) = iVar1;
  if (iVar1 != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  iVar1 =(int)(intptr_t)( cocos2d::CCDictionary::create());
  *(int *)((int)this + 4*(0x1f)) = iVar1;
  if (iVar1 != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  iVar1 =(int)(intptr_t)( cocos2d::CCDictionary::create());
  *(int *)((int)this + 4*(0x1b)) = iVar1;
  if (iVar1 != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  iVar1 =(int)(intptr_t)( cocos2d::CCArray::create());
  *(int *)((int)this + 4*(0xd)) = iVar1;
  if (iVar1 != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  iVar1 =(int)(intptr_t)( cocos2d::CCDictionary::create());
  *(int *)((int)this + 4*(0x1c)) = iVar1;
  if (iVar1 != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  iVar1 =(int)(intptr_t)( cocos2d::CCArray::create());
  *(int *)((int)this + 4*(6)) = iVar1;
  if (iVar1 != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  iVar1 =(int)(intptr_t)( cocos2d::CCArray::create());
  *(int *)((int)this + 4*(8)) = iVar1;
  if (iVar1 != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  *(undefined1 *)((int)((int)this) + 0x85) = 0;
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_1c,((intptr_t)"BLMissionManager"),&piStack_20);
  ((BLLeakUtils *)uVar2)->addClass((*reinterpret_cast<std::string *>((void *)(&uStack_1c))));
  func_0079e2bc(&uStack_1c);
  *(int *)((int)this + 4*(5)) = 1;
  iVar1 =(int)(intptr_t)( cocos2d::CCDictionary::create());
  *(int *)((int)this + 4*(0x24)) = iVar1;
  if (iVar1 != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  *(int *)((int)this + 4*(0x30)) = 0;
  *(undefined1 *)(((int)this) + 0x31) = 0;
  *(int *)((int)this + 4*(0x32)) = 0;
  *(undefined1 *)(((int)this) + 0x33) = 0;
  *(int *)((int)this + 4*(0x34)) = 0;
  *(undefined1 *)(((int)this) + 0x2c) = 0;
  *(undefined1 *)(((int)this) + 0x2f) = 0;
  return;
}

undefined4 BLMissionManager::create()
{
  undefined4 uVar1;
  
  uVar1 =(int)(intptr_t)( (undefined4)(((long long)::operator new((size_t)(0xd4)))));
  0 /* ctorZero */;
  ((BLMissionManager *)uVar1)->init();
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

BLMissionManager::~BLMissionManager()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;

  undefined4 uVar1;
  int *piStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  piStack_20 =(int *)(intptr_t)( (int)this);
  uStack_1c = (undefined4)(p2);
  uStack_18 = (undefined4)(p3);
  if (*(int *)((int)this + 4*(0x18)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x18)) = 0;
  }
  if (*(int *)((int)this + 4*(7)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(7)) = 0;
  }
  if (*(int *)((int)this + 4*(9)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(9)) = 0;
  }
  if (*(int *)((int)this + 4*(0xb)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0xb)) = 0;
  }
  if (*(int *)((int)this + 4*(0x10)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x10)) = 0;
  }
  if (*(int *)((int)this + 4*(0x11)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x11)) = 0;
  }
  if (*(int *)((int)this + 4*(0x13)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x13)) = 0;
  }
  if (*(int *)((int)this + 4*(0xc)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0xc)) = 0;
  }
  if (*(int *)((int)this + 4*(0x14)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x14)) = 0;
  }
  if (*(int *)((int)this + 4*(0x1d)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x1d)) = 0;
  }
  if (*(int *)((int)this + 4*(0x1e)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x1e)) = 0;
  }
  if (*(int *)((int)this + 4*(0x1f)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x1f)) = 0;
  }
  if (*(int *)((int)this + 4*(0x1b)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x1b)) = 0;
  }
  if (*(int *)((int)this + 4*(0x15)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x15)) = 0;
  }
  if (*(int *)((int)this + 4*(0x16)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x16)) = 0;
  }
  if (*(int *)((int)this + 4*(0xd)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0xd)) = 0;
  }
  if (*(int *)((int)this + 4*(0x1c)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x1c)) = 0;
  }
  if (*(int *)((int)this + 4*(6)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(6)) = 0;
  }
  if (*(int *)((int)this + 4*(8)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(8)) = 0;
  }
  if (*(int *)((int)this + 4*(0x24)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x24)) = 0;
  }
  if (*(int *)((int)this + 4*(10)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(10)) = 0;
  }
  if (*(int *)((int)this + 4*(0x12)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x12)) = 0;
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_1c,((intptr_t)"BLMissionManager"),&piStack_20);
  ((BLLeakUtils *)uVar1)->removeClass((*reinterpret_cast<std::string *>((void *)(&uStack_1c))));
  func_0079e2bc(&uStack_1c);
  ((std::vector<std::string, std::allocator<std::string>> *)((int)this) + 0x27)->~vector();
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLMissionManager::onSureBuyHero(cocos2d::CCObject* p1)
{
  /* [BM-STUB] 保签名桩化：反编译体无法通过语法检查 */
}

void BLMissionManager::onDelayMissionWin(float p1)
{
  /* [BM-STUB] 保签名桩化：反编译体无法通过语法检查 */
}

int BLMissionManager::onBuyHeroComplete(cocos2d::CCObject* p1)
{
  /* [BM-STUB] 保签名桩化：反编译体无法通过语法检查 */
  return (int)0;
}

int BLMissionManager::addMonster(std::string * p1, cocos2d::CCPoint * p2, int p3, bool p4)
{
  /* [BM-STUB] 保签名桩化：反编译体无法通过语法检查 */
  return (int)0;
}

void BLMissionManager::onRandomBrush(float p1)
{
  /* [BM-STUB] 保签名桩化：反编译体无法通过语法检查 */
}

void BLMissionManager::brushLeft(std::string * p1)
{
  /* [BM-STUB] 保签名桩化：反编译体无法通过语法检查 */
}

void BLMissionManager::brushRight(std::string * p1)
{
  /* [BM-STUB] 保签名桩化：反编译体无法通过语法检查 */
}

void BLMissionManager::brushPosition(std::string * p1, cocos2d::CCPoint * p2)
{
  /* [BM-STUB] 保签名桩化：反编译体无法通过语法检查 */
}

void BLMissionManager::brushMonster(BLMonsterGroupData* p1)
{
  /* [BM-STUB] 保签名桩化：反编译体无法通过语法检查 */
}

void BLMissionManager::judageNextGourp()
{
  /* [BM-STUB] 保签名桩化：反编译体无法通过语法检查 */
}

undefined8 BLMissionManager::judageTrigger()
{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  code *pcVar9;
  undefined4 uStack_20;
  
  piVar1 = (int *)BLMissionManager::getFarestHero();
  if (piVar1 == (int *)0x0) {
    uStack_20 = (undefined4)(0);
  }
  else {
    uStack_20 = (undefined4)(((_vfn(piVar1)[0x60/4]))());
  }
  piVar1 =(int *)(intptr_t)( ((int)this) + 0x21);
  if (((char)*piVar1 == '\0') && (iVar2 = ((code)(*(int *)*(int *)((int)this + 4*(0x18)) + 0x78))(), iVar2 != 0) ) {
    iVar2 = *(int *)(iVar2 + 0x14);
    iVar7 = iVar2;
    if (iVar2 != 0) {
      iVar7 = *(int *)(iVar2 + 0x110);
    }
    while (iVar2 != 0) {
      piVar8 =(int *)(intptr_t)( ((int)this) + 0x34);
      if (*piVar8 == 1) {
        piVar3 = (int *)((DataManager *)this)->shareDataManager();
        iVar4 = ((_vfn(piVar3)[0x118/4]))();
        if (iVar4 == 6) {
          BLMissionManager::missionWin();
          break;
        }
      }
      if (((*(int *)(iVar2 + 0x104) != 0) && (piVar3 = (int *)func_0079e55c(*(int *)(iVar2 + 0x104), *(undefined4 *)(g_00444864 + 0x4447b0), *(undefined4 *)(g_00444868 + 0x4447b2),0), piVar3 != (int *)0x0)) && (iVar2 = ((_vfn(piVar3)[0x28/4]))(), iVar2 == 0)) {
        uVar5 = (undefined4)(((_vfn(piVar3)[0x20/4]))(piVar3));
        iVar2 = ((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);return ((_x <= _y)?1:0);}((int)(uVar5),(int)(uStack_20))));
        if (iVar2 != 0) {
          *piVar8 = *piVar8 + 1;
          *(char *)piVar1 = '\x01';
          ((_vfn(piVar3)[0x2c/4]))(piVar3);
          ((code)(*(int *)this + 0xc4))(((int)this),piVar3);
          BLMissionManager::judageNextGourp();
          piVar8 = (int *)*(int *)((int)this + 4*(0x17));
          pcVar9 = (_vfn(piVar8)+(0x274/4));
          uVar5 = (undefined4)(((_vfn(piVar3)[0x20/4]))(piVar3));
          uVar5 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x + _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar5),(int)(g_0044486c)))));
          (*pcVar9)(piVar8,uVar5);
          uVar5 = (undefined4)(((BluetoothHelper *)this)->share());
          uVar6 = (undefined4)(((code)(*(int *)*(int *)((int)this + 4*(0x17)) + 0x270))());
          ((BluetoothHelper *)uVar5)->setLockWidth(uVar6);
          break;
        }
      }
      iVar2 = iVar7;
      if (iVar7 != 0) {
        iVar7 = *(int *)(iVar7 + 0x110);
      }
    }
  }
  return ghidra_CONCAT44(piVar1,uStack_20);
}

void BLMissionManager::clearRemoveItem()
{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  
  iVar4 = g_00444a78 + 0x44487c;
  if (*(int *)(((int)this) + 0x40) != 0) {
    piVar2 = *(int **)(*(int *)(((int)this) + 0x40) + 0x14);
    iVar6 = (int)*(int *)&(*piVar2);
    if (iVar6 != 0) {
      piVar5 = (int *)piVar2[2];
      piVar2 = piVar5 + iVar6 + g_00444a7c;
      for (; (piVar5 <= piVar2 && (*piVar5 != 0)); piVar5 = piVar5 + 1) {
        piVar1 = (int *)func_0079e55c(*piVar5,*(undefined4 *)(iVar4 + g_00444a80), *(undefined4 *)(iVar4 + g_00444a84),0,piVar2, *(undefined4 *)(iVar4 + g_00444a80), *(undefined4 *)(iVar4 + g_00444a84));
        ((_vfn(piVar1)[0xec/4]))(piVar1,1);
        ((cocos2d::CCArray *)*(undefined4 *)(((int)this) + 0x18))->removeObject((cocos2d::CCObject*)piVar1, 1);
        ((cocos2d::CCArray *)*(undefined4 *)(((int)this) + 0x1c))->removeObject((cocos2d::CCObject*)piVar1, 1);
      }
    }
  }
  ((cocos2d::CCArray *)*(undefined4 *)(((int)this) + 0x40))->removeAllObjects();
  if (*(int *)(((int)this) + 0x44) == 0) {
    iVar6 = 0;
  }
  else {
    piVar2 = *(int **)(*(int *)(((int)this) + 0x44) + 0x14);
    iVar6 = 0;
    iVar3 = (int)*(int *)&(*piVar2);
    if (iVar3 != 0) {
      piVar5 = (int *)piVar2[2];
      piVar2 = piVar5 + iVar3 + g_00444a7c;
      for (; (piVar5 <= piVar2 && (*piVar5 != 0)); piVar5 = piVar5 + 1) {
        piVar1 = (int *)func_0079e55c(*piVar5,*(undefined4 *)(iVar4 + g_00444a80), *(undefined4 *)(iVar4 + g_00444a84),0, *(undefined4 *)(iVar4 + g_00444a80),piVar2, *(undefined4 *)(iVar4 + g_00444a84));
        ((_vfn(piVar1)[0xec/4]))(piVar1,1);
        ((cocos2d::CCArray *)*(undefined4 *)(((int)this) + 0x24))->removeObject((cocos2d::CCObject*)piVar1, 1);
        iVar6 = 1;
      }
    }
  }
  ((cocos2d::CCArray *)*(undefined4 *)(((int)this) + 0x44))->removeAllObjects();
  if (*(int *)(((int)this) + 0x50) != 0) {
    piVar2 = *(int **)(*(int *)(((int)this) + 0x50) + 0x14);
    iVar3 =(int)(intptr_t)((int *)(intptr_t)( (int)*(int *)&(*piVar2)));
    if (iVar3 != 0) {
      piVar5 = (int *)piVar2[2];
      piVar2 = piVar5 + iVar3 + g_00444a7c;
      for (; (piVar5 <= piVar2 && (*piVar5 != 0)); piVar5 = piVar5 + 1) {
        piVar1 = (int *)func_0079e55c(*piVar5,*(undefined4 *)(iVar4 + g_00444a80), *(undefined4 *)(iVar4 + g_00444a84),0, *(undefined4 *)(iVar4 + g_00444a80),piVar2, *(undefined4 *)(iVar4 + g_00444a84));
        ((_vfn(piVar1)[0xec/4]))(piVar1,1);
        ((cocos2d::CCArray *)*(undefined4 *)(((int)this) + 0x30))->removeObject((cocos2d::CCObject*)piVar1, 1);
        iVar6 = 1;
      }
    }
  }
  ((cocos2d::CCArray *)*(undefined4 *)(((int)this) + 0x50))->removeAllObjects();
  if (*(int *)(((int)this) + 0x4c) != 0) {
    piVar2 = *(int **)(*(int *)(((int)this) + 0x4c) + 0x14);
    iVar3 = (int)*(int *)&(*piVar2);
    if (iVar3 != 0) {
      piVar5 = (int *)piVar2[2];
      piVar2 = piVar5 + iVar3 + g_00444a7c;
      for (; (piVar5 <= piVar2 && (*piVar5 != 0)); piVar5 = piVar5 + 1) {
        piVar1 = (int *)func_0079e55c(*piVar5,*(undefined4 *)(iVar4 + g_00444a80), *(undefined4 *)(iVar4 + g_00444a88),0);
        ((_vfn(piVar1)[0xec/4]))(piVar1,1);
        ((cocos2d::CCArray *)*(undefined4 *)(((int)this) + 0x2c))->removeObject((cocos2d::CCObject*)piVar1, 1);
      }
    }
  }
  ((cocos2d::CCArray *)*(undefined4 *)(((int)this) + 0x4c))->removeAllObjects();
  if (*(int *)(((int)this) + 0x48) != 0) {
    piVar2 = *(int **)(*(int *)(((int)this) + 0x48) + 0x14);
    iVar3 = (int)*(int *)&(*piVar2);
    if (iVar3 != 0) {
      piVar5 = (int *)piVar2[2];
      piVar2 = piVar5 + iVar3 + g_00444a7c;
      for (; (piVar5 <= piVar2 && (*piVar5 != 0)); piVar5 = piVar5 + 1) {
        piVar1 = (int *)func_0079e55c(*piVar5,*(undefined4 *)(iVar4 + g_00444a80), *(undefined4 *)(iVar4 + g_00444a8c),0);
        ((_vfn(piVar1)[0xec/4]))(piVar1,1);
        ((cocos2d::CCArray *)*(undefined4 *)(((int)this) + 0x48))->removeObject((cocos2d::CCObject*)piVar1, 1);
      }
    }
  }
  ((cocos2d::CCArray *)*(undefined4 *)(((int)this) + 0x48))->removeAllObjects();
  if (iVar6 != 0) {
    BLMissionManager::judageNextGourp();
  }
  return;
}

void BLMissionManager::tick(float p1)
{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  code *pcVar7;
  undefined1 auStack_20 [12];
  
  if ((char)*(int *)((int)this + 4*(0x31)) == '\0') {
    BLMissionManager::judageTrigger();
  }
  BLMissionManager::clearRemoveItem();
  BLMissionManager::nodeTick(p1);
  BLMissionManager::judageTouchDropItems();
  piVar6 =(int *)(intptr_t)( ((int)this) + 0x26);
  ((cocos2d::CCDictionary *)*(int *)((int)this + 4*(0x1b)))->removeAllObjects();
  iVar1 = ((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x + _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(p1),(int)(*piVar6))));
  iVar2 = ((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);return ((_x >= _y)?1:0);}((int)(iVar1),(int)(0x40000000))));
  if (iVar2 == 0) {
    *piVar6 = iVar1;
  }
  else {
    *piVar6 = 0;
    *(int *)((int)this + 4*(0x25)) = 0;
    uVar4 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
    ((cocos2d::CCNotificationCenter *)uVar4)->postNotification((char const*)((intptr_t)"EVENT_UPDATE_ATTACK_COUNT"));
  }
  piVar6 =(int *)(intptr_t)( ((int)this) + 0x2f);
  if ((char)*piVar6 == '\0') {
    iVar1 = ((cocos2d::CCArray *)*(int *)((int)this + 4*(6)))->count();
    if ((iVar1 == 0) && ((char)*(int *)((int)this + 4*(0x21)) != '\0')) {
      piVar6 = (int *)BLMissionManager::getFarestHero();
      if (piVar6 != (int *)0x0) {
        pcVar7 = *(code **)(*(int *)this + 0x10c);
        uVar4 = (undefined4)(((_vfn(piVar6)[0x50/4]))());
        0 /* ctorZero */;
        (*pcVar7)(((int)this),auStack_20);
      }
      BLMissionManager::missionFailed();
    }
    goto LAB_00444c64;
  }
  if (((char)*(int *)((int)this + 4*(0x21)) != '\0') && (iVar1 = ((cocos2d::CCArray *)*(int *)((int)this + 4*(6)))->count(), iVar1 == 0)) {
    piVar3 = (int *)((DataManager *)this)->shareDataManager();
    ((_vfn(piVar3)[0x1a0/4]))();
    iVar1 = ((ChallengePlayerData *)this)->checkHavePartner();
    if (iVar1 == 0) {
      iVar1 = ((cocos2d::CCArray *)*(int *)((int)this + 4*(9)))->count();
      if (iVar1 == 0) {
        piVar3 = (int *)((DataManager *)this)->shareDataManager();
        ((_vfn(piVar3)[0x1a0/4]))();
        iVar1 = ((ChallengePlayerData *)this)->checkHaveEnemy();
        if (iVar1 == 0) goto LAB_00444d10;
      }
      *(char *)piVar6 = '\0';
      piVar3 = (int *)((DataManager *)this)->shareDataManager();
      iVar1 = ((_vfn(piVar3)[0x1a0/4]))();
      uVar4 = (undefined4)(*(undefined4 *)(iVar1 + 0x24));
      piVar3 = (int *)((BLMission *)this)->currentMission();
      iVar1 = ((_vfn(piVar3)[0x210/4]))();
      ((BLMissionPlayerInfoPresenter *)*(undefined4 *)(iVar1 + 0x108))->updateHeroStatus(uVar4);
      piVar3 = (int *)BLMissionManager::getFarestHero();
      if (piVar3 != (int *)0x0) {
        pcVar7 = *(code **)(*(int *)this + 0x10c);
        uVar4 = (undefined4)(((_vfn(piVar3)[0x50/4]))());
        0 /* ctorZero */;
        (*pcVar7)(((int)this),auStack_20);
      }
      BLMissionManager::onFailedEffect();
      0 /* ctorZero */;
      BLMissionManager::setCamerScale((reinterpret_cast<cocos2d::CCPoint *>((void *)(&auStack_20))), 0x3fc00000, 0x3f800000);
      ((ChallengeHttpData *)this)->getInstance();
      ((ChallengeHttpData *)this)->loseGame();
    }
    else {
LAB_00444d10:
      piVar3 = (int *)((DataManager *)this)->shareDataManager();
      ((_vfn(piVar3)[0x1a0/4]))();
      iVar1 = ((ChallengePlayerData *)this)->checkHavePartner();
      if (iVar1 != 0) {
        ((BLMission *)this)->currentMission();
        ((BLMission *)this)->addChallengeHero();
      }
    }
  }
  if (((char)*(int *)((int)this + 4*(0x21)) == '\0') || (iVar1 = ((cocos2d::CCArray *)*(int *)((int)this + 4*(9)))->count(), iVar1 != 0)) goto LAB_00444c64;
  piVar3 = (int *)((DataManager *)this)->shareDataManager();
  ((_vfn(piVar3)[0x1a0/4]))();
  iVar1 = ((ChallengePlayerData *)this)->checkHaveEnemy();
  if (iVar1 == 0) {
    iVar1 = ((cocos2d::CCArray *)*(int *)((int)this + 4*(6)))->count();
    if (iVar1 == 0) {
      piVar3 = (int *)((DataManager *)this)->shareDataManager();
      ((_vfn(piVar3)[0x1a0/4]))();
      iVar1 = ((ChallengePlayerData *)this)->checkHavePartner();
      if (iVar1 == 0) goto LAB_00444d42;
    }
    *(char *)piVar6 = '\0';
    piVar6 = (int *)((DataManager *)this)->shareDataManager();
    iVar1 = ((_vfn(piVar6)[0x1a0/4]))();
    uVar4 = (undefined4)(*(undefined4 *)(iVar1 + 0x20));
    piVar6 = (int *)((BLMission *)this)->currentMission();
    iVar1 = ((_vfn(piVar6)[0x210/4]))();
    ((BLMissionPlayerInfoPresenter *)*(undefined4 *)(iVar1 + 0x108))->updateEnemyStatus(uVar4);
    piVar6 = (int *)BLMissionManager::getFarestHero();
    if (piVar6 != (int *)0x0) {
      pcVar7 = *(code **)(*(int *)this + 0x10c);
      uVar4 = (undefined4)(((_vfn(piVar6)[0x50/4]))());
      0 /* ctorZero */;
      (*pcVar7)(((int)this),auStack_20);
    }
    BLMissionManager::onWinEffect();
    ((ChallengeHttpData *)this)->getInstance();
    ((ChallengeHttpData *)this)->winGame();
  }
  else {
LAB_00444d42:
    piVar6 = (int *)((DataManager *)this)->shareDataManager();
    ((_vfn(piVar6)[0x1a0/4]))();
    iVar1 = ((ChallengePlayerData *)this)->checkHaveEnemy();
    if (iVar1 != 0) {
      ((BLMission *)this)->currentMission();
      ((BLMission *)this)->addChallengeEnemy();
    }
  }
LAB_00444c64:
  if ((char)*(int *)((int)this + 4*(0x31)) != '\0') {
    iVar1 = ((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x - _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(*(int *)((int)this + 4*(0x30))),(int)(p1))));
    *(int *)((int)this + 4*(0x30)) = iVar1;
    iVar1 = ((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);return ((_x <= _y)?1:0);}((int)(iVar1),(int)(0))));
    if (iVar1 != 0) {
      BLMissionManager::judageNextGourp();
    }
  }
  if ((char)*(int *)((int)this + 4*(0x33)) != '\0') {
    uVar4 =(int)(intptr_t)((int *)(intptr_t)( (undefined4)(((UIManager *)this)->shareManager())));
    iVar1 =0;
    if (iVar1 == 0) {
      piVar6 =(int *)(intptr_t)( ((int)this) + 0x32);
      iVar1 = ((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x - _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(*piVar6),(int)(p1))));
      *piVar6 = iVar1;
      uVar4 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
      (void)(((long long)([](int _a){float _f;__builtin_memcpy(&_f,&_a,4);return (int)_f;}((int)(iVar1)))));
      uVar5 = (undefined4)(cocos2d::CCInteger::create(0));
      ((cocos2d::CCNotificationCenter *)uVar4)->postNotification((char const*)((intptr_t)"ENDLESS_UPDATE_TIME"), (cocos2d::CCObject*)uVar5);
      iVar1 = ((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);return ((_x <= _y)?1:0);}((int)(*piVar6),(int)(0))));
      if (iVar1 != 0) {
        BLMissionManager::missionFailed();
      }
    }
    else {
      uVar4 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
      uVar5 = (undefined4)(cocos2d::CCInteger::create(0));
      ((cocos2d::CCNotificationCenter *)uVar4)->postNotification((char const*)((intptr_t)"ENDLESS_UPDATE_TIME"), (cocos2d::CCObject*)uVar5);
    }
  }
  return;
}

// ===== 修复: 补回被误删的函数占位 (11) =====
void BLMissionManager::setArrayPartnerRemove(cocos2d::CCArray* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMissionManager::setArrayObstaclesRemove(cocos2d::CCArray* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMissionManager::setCurrentMonsterGroup(BLMonsterGroupData* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMissionManager::setDicCurrentSounds(cocos2d::CCDictionary* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMissionManager::setDicDropItems(cocos2d::CCDictionary* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMissionManager::setDicRoleBatch(cocos2d::CCDictionary* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMissionManager::setDicEffectUpBatch(cocos2d::CCDictionary* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMissionManager::setDicEffectDownBatch(cocos2d::CCDictionary* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMissionManager::setDicBatchNode(cocos2d::CCSpriteBatchNode* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMissionManager::setDicRelifeAttr(cocos2d::CCDictionary* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

int BLMissionManager::getRandomBursh() const
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
