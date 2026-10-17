#include "BLRole.h"
#include "CCDirector.h"
#include "BLDebug.h"
#include "TalentUserData.h"
#include "BLMonsterData.h"
#include "BLAchievementManager.h"
#include "BLRiyan.h"
#include "SuitEquipBuffData.h"
#include "DataCacheManager.h"
#include "SuitEquipUserData.h"
#include "CCActionInterval.h"
#include "CCActionInstant.h"
#include "CCLabelAtlas.h"
#include "BLDataAnimate.h"
#include "CCNotificationCenter.h"
#include "CCSprite.h"
#include "CCArray.h"
#include "CCObject.h"
#include "CCAction.h"
#include "CCGeometry.h"
#include "CCNode.h"
#include "CCString.h"
#include "CCDictionary.h"
#include "CCShaderCache.h"
#include "SkillCDItem.h"
using namespace cocos2d;
using namespace cocos2d;
#include "BluetoothHelper.h"
#include "BLProgressBar.h"
#include "PetBuffItemData.h"
#include "PetUserData.h"
#include "BLMission.h"
#include "BLRoleAttribute.h"
#include "BLRoleDrop.h"
#include "DataManager.h"
#include "AnimationStatusManager.h"
#include "BLAnimateFrameData.h"
#include "ItemData.h"
#include "BLHit.h"
#include "BLRoleBase.h"
#include "BLLeakUtils.h"
#include "BLAIController.h"
#include <new>   // ghost_fix.js 自动补齐
// 兜底声明
extern "C" unsigned long g_0044a344;
extern "C" long long func_0079e4ec(...);
extern "C" long long func_0079e7e4(...);
extern "C" unsigned long g_00449a04;
extern "C" unsigned long g_00449a08;
extern "C" unsigned long g_00449a0c;
extern "C" unsigned long g_00449840;
extern "C" unsigned long g_0044978c;
extern "C" unsigned long g_00449790;
extern "C" unsigned long g_00449794;
extern "C" unsigned long g_004497b8;
extern "C" unsigned long g_00449798;
extern "C" unsigned long g_0044979c;
extern "C" unsigned long g_004497a0;
extern "C" unsigned long g_004497a4;
extern "C" unsigned long g_004497a8;
extern "C" unsigned long g_004497ac;
extern "C" unsigned long g_004497b0;
extern "C" unsigned long g_004497b4;
extern "C" unsigned long g_00448ba0;
extern "C" unsigned long g_00448ba4;
extern "C" unsigned long g_00448ba8;
extern "C" unsigned long g_00448bac;
extern "C" unsigned long g_00448bb0;
extern "C" unsigned long g_00448bb4;
extern "C" unsigned long g_00448bb8;
extern "C" unsigned long g_00448bbc;
extern "C" long long func_0079e7b4(...);
extern "C" unsigned long g_00448970;
extern "C" unsigned long g_00448974;
extern "C" unsigned long g_00448870;
extern "C" unsigned long g_00448874;
extern "C" unsigned long g_00448878;
extern "C" unsigned long g_0044887c;
extern "C" unsigned long g_00448880;
extern "C" unsigned long g_00448884;
extern "C" unsigned long g_00448888;
extern "C" unsigned long g_0044888c;
extern "C" unsigned long g_00448890;
extern "C" unsigned long g_00448620;
extern "C" unsigned long g_00448624;
extern "C" unsigned long g_00448628;
extern "C" unsigned long g_0044862c;
extern "C" unsigned long g_00448630;
extern "C" unsigned long g_00448634;
extern "C" unsigned long g_00448638;
extern "C" unsigned long g_0044863c;
extern "C" unsigned long g_00448428;
extern "C" unsigned long g_0044842c;
extern "C" unsigned long g_00448430;
extern "C" unsigned long g_00448434;
extern "C" unsigned long g_00448438;
extern "C" unsigned long g_0044843c;
extern "C" unsigned long g_00448440;
extern "C" unsigned long g_00448444;
extern "C" unsigned long g_00447f10;
extern "C" unsigned long g_00447f14;
extern "C" long long software_udf(...);

extern "C" long long func_0079e5ec(...);
extern "C" unsigned long g_0044cd9c;
extern "C" unsigned long g_0044cda0;
extern "C" unsigned long g_0044cda4;
extern "C" unsigned long g_0044cda8;
extern "C" unsigned long g_0044cdac;
extern "C" unsigned long g_0044cdb4;
extern "C" unsigned long g_0044cdb0;
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e62c(...);
extern "C" long long func_0079e724(...);
extern "C" long long func_0079e8c4(...);
extern "C" unsigned long g_00448ce8;
extern "C" unsigned long g_00448ce0;
extern "C" unsigned long g_00448ce4;
extern "C" unsigned long g_00448cec;
extern "C" long long func_0079e58c(...);
extern "C" long long func_0079e964(...);
extern "C" long long func_0079e59c(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e4bc(...);
extern "C" unsigned long g_00447100;
extern "C" unsigned long g_00447104;
extern "C" unsigned long g_00447108;
extern "C" unsigned long g_0044710c;
extern "C" unsigned long g_00447110;
extern "C" unsigned long g_00447114;
extern "C" unsigned long g_00447118;
extern "C" unsigned long g_0044711c;
extern "C" unsigned long g_00447120;
extern "C" long long ghidra_CONCAT44(...);
extern "C" long long mz_SteqIcEN9__gnu_cxx11__enable_ifIXsrSt9__is_charIT_E7__valueEbE6__typeERKSbIS3_St11char_traitsIS3_ESaIS3_EESC_(...);

extern "C" long long func_0079e55c(...);
extern "C" unsigned long g_0044b23c;
extern "C" unsigned long g_0044b240;
extern "C" long long func_0079e2dc(...);
extern "C" long long func_0079e52c(...);
extern "C" unsigned long g_00448270;
extern "C" unsigned long g_00448274;
extern "C" unsigned long g_0044dabc;
extern "C" long long func_0079e4dc(...);
extern "C" unsigned long g_0044a488;
extern "C" unsigned long g_0044a3f8;
extern "C" unsigned long g_0044a3fc;
extern "C" unsigned long g_004472f0;
extern "C" unsigned long g_004472f4;
extern "C" unsigned long g_004472f8;
extern "C" unsigned long g_004472fc;
extern "C" unsigned long g_00447300;
extern "C" unsigned long g_00447304;
extern "C" unsigned long g_00447308;
extern "C" unsigned long g_0044730c;
extern "C" unsigned long g_00447310;
extern "C" unsigned long g_00447314;
extern "C" unsigned long g_00447318;
extern "C" unsigned long g_0044731c;
extern "C" unsigned long g_00447320;
extern "C" unsigned long g_00447324;
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e2bc(...);
extern "C" unsigned long g_004469e0;
extern "C" unsigned long g_004469e4;
extern "C" unsigned long g_004469e8;
extern "C" unsigned long g_004469ec;
extern "C" unsigned long g_0044ce18;
extern "C" unsigned long g_0044a430;
extern "C" unsigned long g_0044a328;
extern "C" unsigned long g_00448478;
extern "C" unsigned long g_00448470;
extern "C" unsigned long g_00448474;
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e8a4(...);
extern "C" long long func_0079e8b4(...);
extern "C" long long func_0079e2ec(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e5fc(...);
extern "C" unsigned long g_00449c8c;
extern "C" unsigned long g_00446c30;
extern "C" unsigned long g_00438df8;
extern "C" unsigned long g_00438dec;

// R14: 重置为纯占位形态(原恢复体存在编译错误, 待后续逐函数修复)

cocos2d::CCDictionary* BLRole::getDicActionSeque() const
{
  return (cocos2d::CCDictionary*)(*(undefined4 *)(((int)this) + 0x33c));
}

void BLRole::setDicActionSeque(cocos2d::CCDictionary* p1)
{
  *(undefined4 *)(((int)this) + 0x33c) = (undefined4)(intptr_t)p1;
  return;
}

cocos2d::CCDictionary* BLRole::getDicSkillCD() const
{
  return (cocos2d::CCDictionary*)(*(undefined4 *)(((int)this) + 0x340));
}

void BLRole::setDicSkillCD(cocos2d::CCDictionary* p1)
{
  *(undefined4 *)(((int)this) + 0x340) = (undefined4)(intptr_t)p1;
  return;
}

BLAIController* BLRole::getAIController() const
{
  return (BLAIController*)(*(undefined4 *)(((int)this) + 0x344));
}

void BLRole::setAIController(BLAIController* p1)
{
  *(undefined4 *)(((int)this) + 0x344) = (undefined4)(intptr_t)p1;
  return;
}

int BLRole::getBeAttackLV() const
{
  return *(undefined4 *)(((int)this) + 0x348);
}

void BLRole::setBeAttackLV(int p1)
{
  *(undefined4 *)(((int)this) + 0x348) = p1;
  return;
}

int BLRole::getRoleBeAttackLV() const
{
  return *(undefined4 *)(((int)this) + 0x34c);
}

void BLRole::setRoleBeAttackLV(int p1)
{
  *(undefined4 *)(((int)this) + 0x34c) = p1;
  return;
}

bool BLRole::getISShowLifeBar() const
{
  return *(undefined1 *)(((int)this) + 0x350);
}

void BLRole::setISShowLifeBar(bool p1)
{
  *(undefined1 *)(((int)this) + 0x350) = p1;
  return;
}

bool BLRole::getAutoGo() const
{
  return *(undefined1 *)(((int)this) + g_00438dec);
}

bool BLRole::getAutoFight() const
{
  return *(undefined1 *)(((int)this) + g_00438df8);
}

void BLRole::delayStarAI()
{
  int *piVar1;
  
  piVar1 = *(int **)(((int)this) + 0x278);
  if (piVar1 != 0) {
    (**(code **)(*piVar1 + 0x90))(piVar1,1);
  }
  piVar1 = *(int **)(((int)this) + 0x27c);
  if (piVar1 != 0) {
    (**(code **)(*piVar1 + 0x90))(piVar1,1);
  }
  piVar1 = *(int **)(((int)this) + 0x280);
  if (piVar1 != 0) {
    (**(code **)(*piVar1 + 0x90))(piVar1,1);
  }
  piVar1 = *(int **)(((int)this) + 0x32c);
  if (piVar1 != 0) {
    (**(code **)(*piVar1 + 0x90))(piVar1,1);
  }
  return;
}

void BLRole::onExpActionEnd(cocos2d::CCNode* p1)
{
  undefined4 p3 = 0;
  undefined4 p4 = 0;

  if ((int)(intptr_t)(int)(intptr_t)p1 != 0) {
    (**(code **)(*(int *)(p1) + (0xec)))(p1,1,p3,*(code **)(*(int *)p1 + 0xec),p4);
  }
  return;
}

BLRole::~BLRole()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = (undefined4)(intptr_t)(*(int *)(g_004469e0 + 0x446964));
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x3f0;
  *(int *)((int)this + 4*(0x3d)) = iVar2 + 0x430;
  *(int *)((int)this + 4*(0x71)) = iVar2 + 0x448;
  *(int *)((int)this + 4*(0x8b)) = iVar2 + g_004469e4;
  *(int *)((int)this + 4*(0x8c)) = iVar2 + g_004469e8;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLRole"),&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  BLRoleBase::~BLRoleBase();
  return;
}

void BLRole::onLevelUpActionEnd(cocos2d::CCNode* p1)
{
  undefined4 p4 = 0;

  undefined4 extraout_r2;
  code *pcVar1;
  
  if (*(int *)(((int)this) + 0x354) != 0) {
    ((BLRoleBase *)*(int *)(((int)this) + 0x354))->removeNodeInMaps();
    pcVar1 = *(code **)(**(int **)(((int)this) + 0x354) + 0xec);
    (*pcVar1)(*(int **)(((int)this) + 0x354),1,extraout_r2,pcVar1,p4);
    *(undefined4 *)(((int)this) + 0x354) = 0;
  }
  return;
}

void BLRole::onLevelUpTextActionEnd(cocos2d::CCNode* p1, void* p2)
{
  if ((int)(intptr_t)(int)(intptr_t)p2 != 0) {
    ((BLRoleBase *)(p2))->removeNodeInMaps();
    (**(code **)(*(int *)(p2) + (0xec)))(p2,1);
  }
  return;
}

void BLRole::onWudiEnd()
{
  undefined4 p4 = 0;

  undefined4 extraout_r2;
  code *pcVar1;
  
  if (*(int *)(((int)this) + 0x35c) != 0) {
    ((BLRoleBase *)*(int *)(((int)this) + 0x35c))->removeNodeInMaps();
    pcVar1 = *(code **)(**(int **)(((int)this) + 0x35c) + 0xec);
    (*pcVar1)(*(int **)(((int)this) + 0x35c),1,extraout_r2,pcVar1,p4);
    *(undefined4 *)(((int)this) + 0x35c) = 0;
  }
  return;
}

void BLRole::onBatiEnd()
{
  undefined4 p4 = 0;

  undefined4 extraout_r2;
  code *pcVar1;
  
  if (*(int *)(((int)this) + 0x360) != 0) {
    ((BLRoleBase *)*(int *)(((int)this) + 0x360))->removeNodeInMaps();
    pcVar1 = *(code **)(**(int **)(((int)this) + 0x360) + 0xec);
    (*pcVar1)(*(int **)(((int)this) + 0x360),1,extraout_r2,pcVar1,p4);
    *(undefined4 *)(((int)this) + 0x360) = 0;
  }
  return;
}

void BLRole::onCritActionEnd(cocos2d::CCNode* p1, void* p2)
{
  if ((int)(intptr_t)(int)(intptr_t)p2 != 0) {
    ((BLRoleBase *)(p2))->removeNodeInMaps();
    (**(code **)(*(int *)(p2) + (0xec)))(p2,1);
  }
  return;
}

void BLRole::onBeAttackRedCallBack()
{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (undefined4)(intptr_t)(((intptr_t)"ShaderCustomActorReset"));
  uVar1 = (undefined4)(cocos2d::CCShaderCache::sharedShaderCache());
  iVar2 = (undefined4)(intptr_t)(((cocos2d::CCShaderCache *)uVar1)->programForKey((char const*)iVar4));
  if ((iVar2 == 0) && (iVar3 = 0 /* ctorZero */, iVar3 != 0)) {
    uVar1 = (undefined4)(cocos2d::CCShaderCache::sharedShaderCache());
    iVar2 = (undefined4)(intptr_t)(((cocos2d::CCShaderCache *)uVar1)->programForKey((char const*)iVar4));
  }
  (**(code **)(**(int **)(((int)this) + 0x278) + 0x134))(*(int **)(((int)this) + 0x278),iVar2);
  return;
}

void BLRole::hurtValueAction(long p1, bool p2, bool p3)
{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 extraout_r1_02;
  code *pcVar8;
  undefined4 uStack_30;
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [12];
  undefined4 uStack_1c;
  
  uVar1 = (undefined4)(((BluetoothHelper *)this)->share());
  uVar2 = (undefined4)((**(code **)(*(int *)this + 0x250))(((int)this)));
  uVar3 = (undefined4)((**(code **)(*(int *)((int)this + 4*(0x71)) + 0x38))(((int)this) + 0x71));
  uVar4 = (undefined4)(((BLRoleAttribute *)(((int)this) + 0x71))->getLife());
  ((BluetoothHelper *)(uVar1))->setRoleLife(uVar2, uVar3, uVar4, p1, p2, p3);
  func_0079e45c(&uStack_30,"num_monsterhit.png",auStack_28);
  if (*(int *)((int)this + 4*(0x90)) == 0) {
    func_0079e2dc(&uStack_30,"num_herohit.png");
  }
  if (p3 == 0) {
    func_0079e2dc(&uStack_30,"num_green.png");
  }
  piVar5 = (int *)cocos2d::CCLabelAtlas::create((char const*)g_0044710c + 0x446f36, (char const*)uStack_30, (unsigned int)0xe, (unsigned int)0x13, (unsigned int)0x30);
  piVar6 = (int *)((BLMission *)this)->currentMission();
  piVar6 = (int *)(**(code **)(*(int *)(piVar6) + (0x208)))();
  piVar6 = (int *)(**(code **)(*(int *)(piVar6) + (0xa8)))();
  piVar6 = (int *)(**(code **)(*(int *)(piVar6) + (0x248)))();
  piVar6 = (int *)(**(code **)(*(int *)(piVar6) + (600)))();
  (**(code **)(*(int *)(piVar6) + (0xcc)))(piVar6,piVar5,0x66);
  iVar7 = (undefined4)(intptr_t)(func_0079e58c());
  pcVar8 = *(code **)(*piVar5 + 0x5c);
  if (iVar7 << 0x1f < 0) {
    uVar1 = (undefined4)((**(code **)(*(int *)this + 0x60))(((int)this)));
    uVar2 = (undefined4)(func_0079e58c());
    func_0079e964(uVar2,0x14);
    uVar2 = (undefined4)(func_0079e2ec(extraout_r1));
    uVar1 = (undefined4)(func_0079e59c(uVar1,uVar2));
  }
  else {
    uVar1 = (undefined4)((**(code **)(*(int *)this + 0x60))(((int)this)));
    uVar2 = (undefined4)(func_0079e58c());
    func_0079e964(uVar2,0x14);
    uVar2 = (undefined4)(func_0079e2ec(extraout_r1_00));
    uVar1 = (undefined4)(func_0079e57c(uVar1,uVar2));
  }
  (*pcVar8)(piVar5,uVar1);
  uVar1 = (undefined4)((**(code **)(*(int *)this + 0x68))(((int)this)));
  BLRoleBase::getRCBeingAttack(auStack_28);
  uVar2 = (undefined4)(func_0079e4fc(uStack_1c,0x3f000000));
  uVar1 = (undefined4)(func_0079e59c(uVar1,uVar2));
  piVar6 = (int *)(**(code **)(*(int *)this + 0x378))(((int)this));
  (**(code **)(*(int *)(piVar6) + (0x20)))(auStack_2c,piVar6);
  iVar7 = (undefined4)(intptr_t)(func_0079e4bc(auStack_2c,"2800"));
  func_0079e2bc(auStack_2c);
  if (iVar7 == 0) {
    uVar1 = (undefined4)(func_0079e57c(uVar1,g_00447114));
  }
  iVar7 = (undefined4)(intptr_t)(func_0079e58c());
  pcVar8 = *(code **)(*piVar5 + 100);
  if (iVar7 << 0x1f < 0) {
    uVar2 = (undefined4)(func_0079e58c());
    func_0079e964(uVar2,0x14);
    uVar2 = (undefined4)(func_0079e2ec(extraout_r1_01));
    uVar1 = (undefined4)(func_0079e59c(uVar1,uVar2));
  }
  else {
    uVar2 = (undefined4)(func_0079e58c());
    func_0079e964(uVar2,0x14);
    uVar2 = (undefined4)(func_0079e2ec(extraout_r1_02));
    uVar1 = (undefined4)(func_0079e57c(uVar1,uVar2));
  }
  (*pcVar8)(piVar5,uVar1);
  pcVar8 = *(code **)(*piVar5 + 0x1f0);
  cocos2d::CCString::createWithFormat((char const*)"%ld", p1);
  uVar1 = (undefined4)(((cocos2d::CCString *)this)->getCString());
  (*pcVar8)(piVar5,uVar1);
  piVar6 = (int *)((BLDataAnimate *)this)->create();
  uVar1 = (undefined4)((**(code **)(*(int *)(piVar5) + (0x50)))(piVar5));
  0 /* ctorZero */;
  ((BLDataAnimate *)(piVar6))->initWith(1, *(cocos2d::CCPoint *)(void *)&auStack_28);
  uVar1 = (undefined4)(cocos2d::CCRemoveSelf::create(1));
  uVar1 = (undefined4)(cocos2d::CCSequence::create((cocos2d::CCFiniteTimeAction*)piVar6, uVar1, 0));
  ((cocos2d::CCNode *)(piVar5))->runAction((cocos2d::CCAction*)uVar1);
  (**(code **)(*(int *)(piVar6) + (0x58)))(piVar6,g_0044711c);
  if (p2 != 0) {
    (**(code **)(*(int *)(piVar6) + (0x58)))(piVar6,g_00447120);
  }
  func_0079e2bc(&uStack_30);
  return;
}

BLRole::BLRole()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = (undefined4)(intptr_t)(*(int *)(g_004472f0 + 0x4471bc));
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x3f0;
  *(int *)((int)this + 4*(0x3d)) = iVar2 + 0x430;
  *(int *)((int)this + 4*(0x71)) = iVar2 + 0x448;
  *(int *)((int)this + 4*(0x8b)) = iVar2 + g_004472f4;
  *(int *)((int)this + 4*(0x8c)) = iVar2 + g_004472f8;
  *(int *)((int)this + 4*(0x90)) = 0;
  *(int *)((int)this + 4*(0x94)) = 3;
  *(int *)((int)this + 4*(0xcf)) = 0;
  iVar2 = (undefined4)(intptr_t)(cocos2d::CCDictionary::create());
  *(int *)((int)this + 4*(0xcf)) = iVar2;
  if (iVar2 != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  iVar2 = (undefined4)(intptr_t)(cocos2d::CCDictionary::create());
  *(int *)((int)this + 4*(0xd0)) = iVar2;
  if (iVar2 != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  *(int *)((int)this + 4*(0xd5)) = 0;
  *(int *)((int)this + 4*(0xd6)) = 0;
  *(int *)((int)this + 4*(0xd7)) = 0;
  *(int *)((int)this + 4*(0xd8)) = 0;
  *(int *)((int)this + 4*(0xb5)) = g_004472fc;
  *(int *)((int)this + 4*(0xd3)) = 0;
  *(int *)((int)this + 4*(0xd2)) = 0;
  *(int *)((int)this + 4*(0xd1)) = 0;
  *(int *)((int)this + 4*(0xac)) = g_00447300;
  *(undefined1 *)(((int)this) + 0xd4) = 0;
  *(int *)((int)this + 4*(0x6f)) = -1;
  *(int *)((int)this + 4*(0xd9)) = 0;
  *(undefined1 *)((int)((int)this) + g_00447304) = 0;
  *(undefined1 *)((int)((int)this) + g_00447308) = 0;
  *(undefined1 *)(((int)this) + 0xda) = 0;
  *(undefined1 *)((int)((int)this) + g_0044730c) = 1;
  *(undefined1 *)((int)((int)this) + g_00447310) = 1;
  *(undefined1 *)((int)((int)this) + g_00447314) = 1;
  *(undefined1 *)(((int)this) + 0xdb) = 1;
  *(undefined1 *)((int)((int)this) + g_00447318) = 1;
  *(undefined1 *)((int)((int)this) + g_0044731c) = 1;
  *(undefined1 *)((int)((int)this) + g_00447320) = 1;
  *(undefined1 *)(((int)this) + 0xdc) = 1;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLRole"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * BLRole::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x378)));
  0 /* ctorZero */;
  iVar2 = (undefined4)(intptr_t)((**(code **)(*piVar1 + 0x18))(piVar1));
  if (iVar2 == 0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    piVar1 = (int *)0x0;
  }
  else {
    ((cocos2d::CCObject *)piVar1)->autorelease();
  }
  return (int *)(piVar1);
}

void BLRole::addBluetoothSpr(int p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

int BLRole::fixPos(cocos2d::CCPoint * p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void BLRole::roleMove(cocos2d::CCPoint * p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLRole::startAI()
{
  if (*(int *)(((int)this) + 0x344) != 0) {
    ((BLAIController *)this)->startAI();
  }
  return;
}

void BLRole::stopAI()
{
  if (*(int *)(((int)this) + 0x344) != 0) {
    ((BLAIController *)this)->stopAI();
  }
  return;
}

void BLRole::moveCommob()
{
  int iVar1;
  
  if (*(int *)((int)this + 4*(0x94)) == 4) {
    iVar1 = (undefined4)(intptr_t)((**(code **)(*(int *)this + 0x2b8))());
    *(int *)((int)this + 4*(0x9b)) = iVar1;
    iVar1 = (undefined4)(intptr_t)(((cocos2d::CCSprite *)((int)this))->isFlipX());
    if (iVar1 != 0) {
      iVar1 = (undefined4)(intptr_t)((**(code **)(*(int *)this + 0x2b8))(((int)this)));
      *(int *)((int)this + 4*(0x9b)) = iVar1 + -0x80000000;
    }
  }
  return;
}

void BLRole::switchHero()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((AnimationStatusManager *)this)->shareStatus());
  ((AnimationStatusManager *)uVar1)->isNewStatus(*(undefined4 *)(((int)this) + 0x250), 0x18);
  return;
}

void BLRole::playNewActionAndStatus(char const* p1, int p2, cocos2d::CCAction* p3, bool p4, char const* p5)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

undefined8 BLRole::standOn(bool p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void BLRole::attackEnd(cocos2d::CCObject* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLRole::skillAttackEnd(cocos2d::CCObject* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLRole::onRunAppearActionEnd(cocos2d::CCNode* p1, void* p2)
{
  int iVar1;
  
  if ((int)(intptr_t)(int)(intptr_t)p2 != 0) {
    ((BLRoleBase *)(p2))->removeNodeInMaps();
    (**(code **)(*(int *)(p2) + (0xec)))(p2,1);
    *(undefined4 *)(((int)this) + 0x358) = 0;
  }
  ((BluetoothHelper *)this)->share();
  iVar1 = (undefined4)(intptr_t)(((BluetoothHelper *)this)->isBlueFight());
  if (iVar1 != 0) {
    ((BluetoothHelper *)this)->share();
    iVar1 = (undefined4)(intptr_t)(((BluetoothHelper *)this)->isHost());
    if (iVar1 == 0) {
      return;
    }
  }
  ((BLRole *)(((int)this)))->standOn(0);
  ((BLRole *)(((int)this)))->startAI();
  return;
}

void BLRole::onMoveToEnd()
{
  BLRole::standOn(0);
  if (*(int *)(((int)this) + 0x344) != 0) {
    ((BLAIController *)this)->patrolEnd();
  }
  return;
}

undefined8 BLRole::move()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void BLRole::goLeft()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLRole::goRight()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLRole::dieBoom()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLRole::addDieSprite()
{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (*(int *)((int)this + 4*(0x90)) == 1) {
    piVar1 = (int *)((DataManager *)this)->shareDataManager();
    iVar2 = (undefined4)(intptr_t)((**(code **)(*piVar1 + 0x118))());
    if (iVar2 != 3) {
      piVar1 = (int *)((DataManager *)this)->shareDataManager();
      iVar2 = (undefined4)(intptr_t)((**(code **)(*piVar1 + 0x118))());
      if (iVar2 != 4) {
        piVar1 = (int *)((DataManager *)this)->shareDataManager();
        iVar2 = (undefined4)(intptr_t)((**(code **)(*piVar1 + 0x118))());
        if (iVar2 != 10) {
          piVar1 = (int *)((DataManager *)this)->shareDataManager();
          iVar2 = (undefined4)(intptr_t)((**(code **)(*piVar1 + 0x118))());
          if (iVar2 != 5) {
            piVar1 = (int *)((DataManager *)this)->shareDataManager();
            iVar2 = (undefined4)(intptr_t)((**(code **)(*piVar1 + 0x118))());
            if (iVar2 != 0xd) {
              piVar1 = (int *)((DataManager *)this)->shareDataManager();
              iVar2 = (undefined4)(intptr_t)((**(code **)(*piVar1 + 0x118))());
              if (iVar2 != 0xe) {
                piVar1 = (int *)(**(code **)(*(int *)this + 0x378))(((int)this));
                uVar3 = (undefined4)((**(code **)(*piVar1 + 0x70))());
                ((BLRoleDrop *)((int)this) + 0x8c)->drop(uVar3);
              }
            }
          }
        }
      }
    }
  }
  BLRole::dieBoom();
  return;
}

undefined4 BLRole::die()
{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined1 auStack_24 [4];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  iVar1 = (undefined4)(intptr_t)((**(code **)(*(int *)this + 0x2b0))());
  if (iVar1 == 0x15) {
    uVar2 = (undefined4)(0);
  }
  else {
    if (*(int *)((int)this + 4*(0xd6)) != 0) {
      BLRoleBase::removeNodeInMaps();
      (**(code **)(*(int *)*(int *)((int)this + 4*(0xd6)) + 0xec))((int *)*(int *)((int)this + 4*(0xd6)),1);
      *(int *)((int)this + 4*(0xd6)) = 0;
    }
    if (*(int *)((int)this + 4*(0xcd)) != 0) {
      BLRoleBase::removeNodeInMaps();
      (**(code **)(*(int *)*(int *)((int)this + 4*(0xcd)) + 0xec))((int *)*(int *)((int)this + 4*(0xcd)),1);
      *(int *)((int)this + 4*(0xcd)) = 0;
    }
    ((BLRole *)(((int)this)))->onBatiEnd();
    ((cocos2d::CCNode *)(*(int *)((int)this + 4*(0x9e))))->stopAllActions();
    ((BLRole *)(((int)this)))->stopAI();
    uStack_20 = (undefined4)(*(undefined4 *)(g_00447f10 + 0x447e78));
    uStack_1c = (undefined4)(0);
    uVar2 = (undefined4)(cocos2d::CCCallFunc::create((cocos2d::CCObject*)((int)this), 0 /*memptr*/));
    ((BLRole *)(((int)this)))->playNewActionAndStatus((char const*)"die", 0x15, (cocos2d::CCAction*)uVar2, 0, 0);
    ((BLRole *)(((int)this)))->addDieSprite();
    uVar2 = (undefined4)(((BLAchievementManager *)this)->share());
    piVar3 = (int *)(**(code **)(*(int *)this + 0x378))(((int)this));
    piVar3 = (int *)(**(code **)(*(int *)(piVar3) + (0x58)))();
    (**(code **)(*(int *)(piVar3) + (0x18)))(auStack_24,piVar3);
    ((BLAchievementManager *)(uVar2))->updateKillMonster((std::string)(char*)auStack_24, 1);
    func_0079e2bc(auStack_24);
    uVar2 = (undefined4)(((BLAchievementManager *)this)->share());
    piVar3 = (int *)(**(code **)(*(int *)this + 0x378))(((int)this));
    (**(code **)(*(int *)(piVar3) + (0x20)))(auStack_24,piVar3);
    ((BLAchievementManager *)(uVar2))->updateKillBoss((std::string)(char*)auStack_24, 1);
    func_0079e2bc(auStack_24);
    uVar2 = (undefined4)(1);
  }
  return uVar2;
}

void BLRole::onGetUpEnd()
{
  int iVar1;
  
  if (*(int *)(((int)this) + 0x344) != 0) {
    ((BLAIController *)this)->beAttackEnd();
  }
  iVar1 = (undefined4)(intptr_t)(((BLRoleAttribute *)((int)this) + 0x1c4)->getLife());
  if (iVar1 < 1) {
    BLRole::die();
  }
  else {
    BLRole::standOn(0);
  }
  return;
}

void BLRole::removeSelf()
{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  code *pcVar4;
  
  BLRoleBase::removeNodeInMaps();
  if (*(int *)(((int)this) + 0x240) == 1) {
    if (*(int *)(((int)this) + 0x244) == 0x65) {
      piVar1 = (int *)((BLMission *)this)->currentMission();
      piVar1 = (int *)(**(code **)(*piVar1 + 0x208))();
      uVar2 = (undefined4)((**(code **)(*piVar1 + 0x90))());
      iVar3 = (undefined4)(intptr_t)(((cocos2d::CCArray *)uVar2)->containsObject((cocos2d::CCObject*)((int)this)));
      if (iVar3 != 0) {
        return;
      }
      piVar1 = (int *)((BLMission *)this)->currentMission();
      piVar1 = (int *)(**(code **)(*piVar1 + 0x208))();
      pcVar4 = *(code **)(*piVar1 + 0x90);
    }
    else {
      piVar1 = (int *)((BLMission *)this)->currentMission();
      piVar1 = (int *)(**(code **)(*piVar1 + 0x208))();
      uVar2 = (undefined4)((**(code **)(*piVar1 + 0x78))());
      iVar3 = (undefined4)(intptr_t)(((cocos2d::CCArray *)uVar2)->containsObject((cocos2d::CCObject*)((int)this)));
      if (iVar3 != 0) {
        return;
      }
      piVar1 = (int *)((BLMission *)this)->currentMission();
      piVar1 = (int *)(**(code **)(*piVar1 + 0x208))();
      pcVar4 = *(code **)(*piVar1 + 0x78);
    }
  }
  else {
    piVar1 = (int *)((BLMission *)this)->currentMission();
    piVar1 = (int *)(**(code **)(*piVar1 + 0x208))();
    uVar2 = (undefined4)((**(code **)(*piVar1 + 0x70))());
    iVar3 = (undefined4)(intptr_t)(((cocos2d::CCArray *)uVar2)->containsObject((cocos2d::CCObject*)((int)this)));
    if (iVar3 != 0) {
      return;
    }
    piVar1 = (int *)((BLMission *)this)->currentMission();
    piVar1 = (int *)(**(code **)(*piVar1 + 0x208))();
    pcVar4 = *(code **)(*piVar1 + 0x70);
  }
  uVar2 = (undefined4)((*pcVar4)());
  ((cocos2d::CCArray *)uVar2)->addObject((cocos2d::CCObject*)((int)this));
  return;
}

void BLRole::dieFadeto()
{
  BLRole::removeSelf();
  return;
}

void BLRole::onDieEnd()
{
  BLRole::dieFadeto();
  return;
}

void BLRole::onDieFadetoEnd()
{
  BLRole::removeSelf();
  return;
}

int BLRole::attack()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

longlong BLRole::isSkillCDing(std::string * p1)
{ return longlong(); }

void BLRole::setTalentSkillCD(int p1, float p2)
{
  int iVar1;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [8];
  
  iVar1 = (undefined4)(intptr_t)(((SkillCDItem *)this)->create());
  func_0079e45c(auStack_1c,g_00448270 + 0x448224,auStack_20);
  if (p1 == 0x6a) {
    func_0079e2dc(auStack_1c,g_00448274 + 0x448248);
  }
  *(undefined4 *)(iVar1 + 0x14) = p2;
  *(undefined4 *)(iVar1 + 0x18) = 0;
  func_0079e52c(iVar1 + 0x1c,auStack_1c);
  ((cocos2d::CCDictionary *)*(undefined4 *)(((int)this) + 0x340))->setObject((cocos2d::CCObject*)iVar1, (char const *)auStack_1c);
  func_0079e2bc(auStack_1c);
  return;
}

void BLRole::beingAttack()
{
  return;
}

void BLRole::attackFly()
{
  return;
}

void BLRole::levelUpAction()
{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  code *pcVar6;
  undefined1 auStack_24 [4];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  piVar1 = (int *)((DataCacheManager *)this)->shareManager();
  uVar2 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x30)))());
  func_0079e45c(&uStack_20,"levelup",auStack_24);
  iVar3 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)(uVar2))->objectForKey(*(std::string const*)&uStack_20));
  iVar4 = 0;
  if (iVar3 != 0) {
    iVar4 = func_0079e55c(iVar3,*(undefined4 *)(g_0044842c + 0x4482b2),
                            *(undefined4 *)(g_00448430 + 0x4482b4),0);
  }
  func_0079e2bc(&uStack_20);
  if (iVar4 != 0) {
    piVar1 = (int *)BLRole::create();
    (**(code **)(*(int *)(piVar1) + (0x3d4)))(piVar1,0);
    pcVar6 = *(code **)(*piVar1 + 0x28c);
    uVar2 = (undefined4)((**(code **)(*(int *)this + 0x288))(((int)this)));
    (*pcVar6)(piVar1,uVar2);
    (**(code **)(*(int *)(piVar1) + (0x1c)))(piVar1,0x43);
    pcVar6 = *(code **)(*piVar1 + 0x344);
    uVar2 = (undefined4)((**(code **)(*(int *)this + 0x340))(((int)this)));
    (*pcVar6)(piVar1,uVar2);
    uVar2 = (undefined4)(((BLMonsterData *)this)->create());
    func_0079e45c(&uStack_20,"levelup",auStack_24);
    ((BLMonsterData *)(uVar2))->initWith((std::string)(char*)uStack_20, 1);
    func_0079e2bc(&uStack_20);
    (**(code **)(*(int *)(piVar1) + (0x37c)))(piVar1,uVar2);
    pcVar6 = *(code **)(*piVar1 + 0x238);
    func_0079e45c(&uStack_20,"levelup",auStack_24);
    (*pcVar6)(piVar1,&uStack_20);
    func_0079e2bc(&uStack_20);
    pcVar6 = *(code **)(*piVar1 + 0x4c);
    uVar2 = (undefined4)((**(code **)(*(int *)this + 0x50))(((int)this)));
    (*pcVar6)(piVar1,uVar2);
    (**(code **)(*(int *)(piVar1) + (0x1c)))(piVar1,0x43);
    (**(code **)(*(int *)(piVar1) + (0x294)))(piVar1,1);
    pcVar6 = *(code **)(*piVar1 + 0x34c);
    uVar2 = (undefined4)((**(code **)(*(int *)this + 0x348))(((int)this)));
    (*pcVar6)(piVar1,uVar2);
    pcVar6 = *(code **)(*piVar1 + 600);
    uVar2 = (undefined4)((**(code **)(*(int *)this + 800))(((int)this)));
    (*pcVar6)(piVar1,((int)this),uVar2);
    (**(code **)(*(int *)(piVar1) + (0x29c)))(piVar1,100);
    piVar5 = (int *)(**(code **)(*(int *)this + 0xe4))(((int)this));
    (**(code **)(*(int *)(piVar5) + (0xcc)))(piVar5,piVar1,g_0044843c);
    uStack_20 = (undefined4)(*(undefined4 *)("UjC"));
    uStack_1c = (undefined4)(0);
    uVar2 = (undefined4)(cocos2d::CCCallFuncN::create((cocos2d::CCObject*)((int)this), 0 /*memptr*/));
    ((BLRoleBase *)(piVar1))->runNewAction((char const*)"stand", (cocos2d::CCAction*)uVar2, 0);
    *(int *)((int)this + 4*(0xd5)) = (int)piVar1;
  }
  return;
}

void BLRole::reLife()
{
  undefined4 p2 = 0;
  undefined4 p4 = 0;

  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = (undefined4)(*(undefined4 *)(((int)this) + 500));
  uVar1 = (undefined4)(cocos2d::CCString::createWithFormat((char const*)((intptr_t)"%f"), p2, g_00448470, g_00448474, p4));
  ((cocos2d::CCDictionary *)uVar2)->setObject((cocos2d::CCObject*)uVar1, 1);
  BLRole::levelUpAction();
  return;
}

void BLRole::levelUpTextAction()
{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  code *pcVar6;
  undefined1 auStack_24 [4];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  piVar1 = (int *)((DataCacheManager *)this)->shareManager();
  uVar2 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x30)))());
  func_0079e45c(&uStack_20,"leveluptext",auStack_24);
  iVar3 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)(uVar2))->objectForKey(*(std::string const*)&uStack_20));
  iVar4 = 0;
  if (iVar3 != 0) {
    iVar4 = func_0079e55c(iVar3,*(undefined4 *)(g_00448624 + 0x4484b6),
                            *(undefined4 *)(g_00448628 + 0x4484b8),0);
  }
  func_0079e2bc(&uStack_20);
  if (iVar4 != 0) {
    piVar1 = (int *)BLRole::create();
    (**(code **)(*(int *)(piVar1) + (0x3d4)))(piVar1,0);
    pcVar6 = *(code **)(*piVar1 + 0x28c);
    uVar2 = (undefined4)((**(code **)(*(int *)this + 0x288))(((int)this)));
    (*pcVar6)(piVar1,uVar2);
    (**(code **)(*(int *)(piVar1) + (0x1c)))(piVar1,0x43);
    (**(code **)(*(int *)(piVar1) + (0x344)))(piVar1,0x3f800000);
    uVar2 = (undefined4)(((BLMonsterData *)this)->create());
    func_0079e45c(&uStack_20,"leveluptext",auStack_24);
    ((BLMonsterData *)(uVar2))->initWith((std::string)(char*)uStack_20, 1);
    func_0079e2bc(&uStack_20);
    (**(code **)(*(int *)(piVar1) + (0x37c)))(piVar1,uVar2);
    pcVar6 = *(code **)(*piVar1 + 0x238);
    func_0079e45c(&uStack_20,"leveluptext",auStack_24);
    (*pcVar6)(piVar1,&uStack_20);
    func_0079e2bc(&uStack_20);
    pcVar6 = *(code **)(*piVar1 + 0x4c);
    uVar2 = (undefined4)((**(code **)(*(int *)this + 0x50))(((int)this)));
    (*pcVar6)(piVar1,uVar2);
    (**(code **)(*(int *)(piVar1) + (0x1c)))(piVar1,0x43);
    (**(code **)(*(int *)(piVar1) + (0x294)))(piVar1,1);
    pcVar6 = *(code **)(*piVar1 + 0x34c);
    uVar2 = (undefined4)((**(code **)(*(int *)this + 0x348))(((int)this)));
    (*pcVar6)(piVar1,uVar2);
    pcVar6 = *(code **)(*piVar1 + 600);
    uVar2 = (undefined4)((**(code **)(*(int *)this + 800))(((int)this)));
    (*pcVar6)(piVar1,((int)this),uVar2);
    (**(code **)(*(int *)(piVar1) + (0x29c)))(piVar1,100);
    piVar5 = (int *)(**(code **)(*(int *)this + 0xe4))(((int)this));
    (**(code **)(*(int *)(piVar5) + (0xcc)))(piVar5,piVar1,g_00448634);
    uStack_20 = (undefined4)(*(undefined4 *)("{jC"));
    uStack_1c = (undefined4)(0);
    uVar2 = (undefined4)(cocos2d::CCCallFuncND::create((cocos2d::CCObject*)((int)this), 0 /*memptr*/, 0));
    ((BLRoleBase *)(piVar1))->runNewAction((char const*)"stand", (cocos2d::CCAction*)uVar2, 0);
  }
  return;
}

void BLRole::onWudi(int p1)
{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  piVar1 = (int *)(**(code **)(*(int *)(piVar1) + (0x28)))();
  uVar2 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x168)))());
  ((TalentUserData *)(uVar2))->getActiveTalentAttribute(1);
  ((BLRole *)(((int)this)))->setTalentSkillCD(p1, uStack_30);
  ((BLRole *)(((int)this)))->onWudiEnd();
  ((BLRole *)(((int)this)))->levelUpAction();
  piVar1 = (int *)((DataCacheManager *)this)->shareManager();
  uVar2 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x30)))());
  func_0079e45c(&uStack_20,"wudi",&uStack_28);
  iVar3 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)(uVar2))->objectForKey(*(std::string const*)&uStack_20));
  iVar4 = 0;
  if (iVar3 != 0) {
    iVar4 = func_0079e55c(iVar3,*(undefined4 *)(g_00448874 + 0x4486b0),
                            *(undefined4 *)(g_00448878 + 0x4486b2),0);
  }
  func_0079e2bc(&uStack_20);
  if (iVar4 != 0) {
    piVar1 = (int *)BLRole::create();
    (**(code **)(*(int *)(piVar1) + (0x3d4)))(piVar1,0);
    pcVar7 = *(code **)(*piVar1 + 0x28c);
    uVar2 = (undefined4)((**(code **)(*(int *)this + 0x288))(((int)this)));
    (*pcVar7)(piVar1,uVar2);
    (**(code **)(*(int *)(piVar1) + (0x344)))(piVar1,0x3f800000);
    uVar2 = (undefined4)(((BLMonsterData *)this)->create());
    func_0079e45c(&uStack_20,"wudi",&uStack_28);
    ((BLMonsterData *)(uVar2))->initWith((std::string)(char*)uStack_20, 1);
    func_0079e2bc(&uStack_20);
    (**(code **)(*(int *)(piVar1) + (0x37c)))(piVar1,uVar2);
    pcVar7 = *(code **)(*piVar1 + 0x238);
    func_0079e45c(&uStack_20,"wudi",&uStack_28);
    (*pcVar7)(piVar1,&uStack_20);
    func_0079e2bc(&uStack_20);
    pcVar7 = *(code **)(*piVar1 + 0x4c);
    uVar2 = (undefined4)((**(code **)(*(int *)this + 0x50))(((int)this)));
    (*pcVar7)(piVar1,uVar2);
    (**(code **)(*(int *)(piVar1) + (0x1c)))(piVar1,0x43);
    (**(code **)(*(int *)(piVar1) + (0x294)))(piVar1,1);
    pcVar7 = *(code **)(*piVar1 + 0x34c);
    uVar2 = (undefined4)((**(code **)(*(int *)this + 0x348))(((int)this)));
    uVar2 = (undefined4)(func_0079e4fc(uVar2,0x3fc00000));
    (*pcVar7)(piVar1,uVar2);
    pcVar7 = *(code **)(*piVar1 + 600);
    uVar2 = (undefined4)((**(code **)(*(int *)this + 800))(((int)this)));
    (*pcVar7)(piVar1,((int)this),uVar2);
    (**(code **)(*(int *)(piVar1) + (0x29c)))(piVar1,100);
    piVar5 = (int *)(**(code **)(*(int *)this + 0xe4))(((int)this));
    (**(code **)(*(int *)(piVar5) + (0xcc)))(piVar5,piVar1,g_00448884);
    uStack_28 = (undefined4)(0);
    uStack_24 = (undefined4)(0);
    uVar2 = (undefined4)(cocos2d::CCCallFuncND::create((cocos2d::CCObject*)((int)this), 0, 0));
    ((BLRoleBase *)(piVar1))->runNewAction((char const*)"stand", (cocos2d::CCAction*)uVar2, 1);
    *(int *)((int)this + 4*(0xd7)) = (int)piVar1;
    iVar4 = (undefined4)(intptr_t)(*(int *)((int)this + 4*(0x7d)));
    uVar8 = (undefined4)(intptr_t)(func_0079e62c(uStack_2c));
    uVar2 = (undefined4)((undefined4)((ulonglong)uVar8 >> 0x20));
    uVar2 = (undefined4)(cocos2d::CCString::createWithFormat((char const*)"%f", uVar2, (int)uVar8, uVar2));
    ((cocos2d::CCDictionary *)(iVar4))->setObject((cocos2d::CCObject*)uVar2, 1);
    uVar2 = (undefined4)(cocos2d::CCDelayTime::create(uStack_2c));
    uStack_20 = (undefined4)(*(undefined4 *)(g_00448890 + 0x44883c));
    uStack_1c = (undefined4)(0);
    uVar6 = (undefined4)(cocos2d::CCCallFunc::create((cocos2d::CCObject*)((int)this), 0 /*memptr*/));
    uVar2 = (undefined4)(cocos2d::CCSequence::create((cocos2d::CCFiniteTimeAction*)uVar2, uVar6, 0));
    ((cocos2d::CCNode *)(((int)this)))->runAction((cocos2d::CCAction*)uVar2);
  }
  return;
}

void BLRole::onShuaxin(int p1)
{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  piVar1 = (int *)(**(code **)(*(int *)(piVar1) + (0x28)))();
  uVar2 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x168)))());
  ((TalentUserData *)(uVar2))->getActiveTalentAttribute(2);
  ((BLRole *)(((int)this)))->levelUpAction();
  if (*(int *)(((int)this) + 0x340) != 0) {
    iVar5 = (undefined4)(intptr_t)(*(int *)(*(int *)(((int)this) + 0x340) + 0x14));
    iVar7 = (undefined4)(intptr_t)(iVar5);
    if (iVar5 != 0) {
      iVar7 = (undefined4)(intptr_t)(*(int *)(iVar5 + 0x110));
    }
    while (iVar5 != 0) {
      if ((*(int *)(iVar5 + 0x104) != 0) &&
         (iVar3 = func_0079e55c(*(int *)(iVar5 + 0x104),*(undefined4 *)(g_00448970 + 0x448916),
                                  *(undefined4 *)(g_00448974 + 0x448918),0), iVar3 != 0)) {
        uVar2 = (undefined4)(*(undefined4 *)(iVar3 + 0x18));
        iVar4 = (undefined4)(intptr_t)(func_0079e7b4(uVar2,*(undefined4 *)(iVar3 + 0x14)));
        if (iVar4 == 0) {
          uVar6 = (undefined4)(*(undefined4 *)(((int)this) + 0x340));
          uVar2 = (undefined4)(((cocos2d::CCDictElement *)(iVar5))->getStrKey());
          func_0079e45c(auStack_24,uVar2,auStack_28);
          ((cocos2d::CCDictionary *)(uVar6))->removeObjectForKey((char const *)auStack_24);
          func_0079e2bc(auStack_24);
        }
        else {
          uVar2 = (undefined4)(func_0079e59c(uVar2,uStack_1c));
          *(undefined4 *)(iVar3 + 0x18) = uVar2;
        }
      }
      iVar5 = (undefined4)(intptr_t)(iVar7);
      if (iVar7 != 0) {
        iVar7 = (undefined4)(intptr_t)(*(int *)(iVar7 + 0x110));
      }
    }
  }
  ((BLRole *)(((int)this)))->setTalentSkillCD(p1, uStack_20);
  return;
}

void BLRole::onBati(int p1)
{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  piVar1 = (int *)(**(code **)(*(int *)(piVar1) + (0x28)))();
  uVar2 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x168)))());
  ((TalentUserData *)(uVar2))->getActiveTalentAttribute(3);
  ((BLRole *)(((int)this)))->setTalentSkillCD(p1, uStack_30);
  ((BLRole *)(((int)this)))->onBatiEnd();
  ((BLRole *)(((int)this)))->levelUpAction();
  piVar1 = (int *)((DataCacheManager *)this)->shareManager();
  uVar2 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x30)))());
  func_0079e45c(&uStack_20,"bati",&uStack_28);
  iVar3 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)(uVar2))->objectForKey(*(std::string const*)&uStack_20));
  iVar4 = 0;
  if (iVar3 != 0) {
    iVar4 = func_0079e55c(iVar3,*(undefined4 *)(g_00448ba4 + 0x4489e8),
                            *(undefined4 *)(g_00448ba8 + 0x4489ea),0);
  }
  func_0079e2bc(&uStack_20);
  if (iVar4 != 0) {
    piVar1 = (int *)BLRole::create();
    (**(code **)(*(int *)(piVar1) + (0x3d4)))(piVar1,0);
    pcVar7 = *(code **)(*piVar1 + 0x28c);
    uVar2 = (undefined4)((**(code **)(*(int *)this + 0x288))(((int)this)));
    (*pcVar7)(piVar1,uVar2);
    (**(code **)(*(int *)(piVar1) + (0x344)))(piVar1,0x3f800000);
    uVar2 = (undefined4)(((BLMonsterData *)this)->create());
    func_0079e45c(&uStack_20,"bati",&uStack_28);
    ((BLMonsterData *)(uVar2))->initWith((std::string)(char*)uStack_20, 1);
    func_0079e2bc(&uStack_20);
    (**(code **)(*(int *)(piVar1) + (0x37c)))(piVar1,uVar2);
    pcVar7 = *(code **)(*piVar1 + 0x238);
    func_0079e45c(&uStack_20,"bati",&uStack_28);
    (*pcVar7)(piVar1,&uStack_20);
    func_0079e2bc(&uStack_20);
    pcVar7 = *(code **)(*piVar1 + 0x4c);
    uVar2 = (undefined4)((**(code **)(*(int *)this + 0x50))(((int)this)));
    (*pcVar7)(piVar1,uVar2);
    (**(code **)(*(int *)(piVar1) + (0x1c)))(piVar1,0x43);
    (**(code **)(*(int *)(piVar1) + (0x294)))(piVar1,1);
    pcVar7 = *(code **)(*piVar1 + 0x34c);
    uVar2 = (undefined4)((**(code **)(*(int *)this + 0x348))(((int)this)));
    (*pcVar7)(piVar1,uVar2);
    pcVar7 = *(code **)(*piVar1 + 600);
    uVar2 = (undefined4)((**(code **)(*(int *)this + 800))(((int)this)));
    (*pcVar7)(piVar1,((int)this),uVar2);
    (**(code **)(*(int *)(piVar1) + (0x29c)))(piVar1,100);
    piVar5 = (int *)(**(code **)(*(int *)this + 0xe4))(((int)this));
    (**(code **)(*(int *)(piVar5) + (200)))(piVar5,piVar1);
    uStack_28 = (undefined4)(0);
    uStack_24 = (undefined4)(0);
    uVar2 = (undefined4)(cocos2d::CCCallFuncND::create((cocos2d::CCObject*)((int)this), 0, 0));
    ((BLRoleBase *)(piVar1))->runNewAction((char const*)"stand", (cocos2d::CCAction*)uVar2, 1);
    *(int *)((int)this + 4*(0xd8)) = (int)piVar1;
    iVar4 = (undefined4)(intptr_t)(*(int *)((int)this + 4*(0x7d)));
    uVar8 = (undefined4)(intptr_t)(func_0079e62c(uStack_2c));
    uVar2 = (undefined4)((undefined4)((ulonglong)uVar8 >> 0x20));
    uVar2 = (undefined4)(cocos2d::CCString::createWithFormat((char const*)"%f", uVar2, (int)uVar8, uVar2));
    ((cocos2d::CCDictionary *)(iVar4))->setObject((cocos2d::CCObject*)uVar2, 2);
    uVar2 = (undefined4)(cocos2d::CCDelayTime::create(uStack_2c));
    uStack_20 = (undefined4)(*(undefined4 *)(g_00448bbc + 0x448b6a));
    uStack_1c = (undefined4)(0);
    uVar6 = (undefined4)(cocos2d::CCCallFunc::create((cocos2d::CCObject*)((int)this), 0 /*memptr*/));
    uVar2 = (undefined4)(cocos2d::CCSequence::create((cocos2d::CCFiniteTimeAction*)uVar2, uVar6, 0));
    ((cocos2d::CCNode *)(((int)this)))->runAction((cocos2d::CCAction*)uVar2);
  }
  return;
}

void BLRole::onRiyan()
{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined1 auStack_1c [8];
  
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  uVar2 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x198)))());
  func_0079e53c(auStack_1c,((int)this) + 0x1f0);
  iVar3 = (undefined4)(intptr_t)(((SuitEquipUserData *)(uVar2))->checkBuffByBuffId((std::string)(char*)auStack_1c, g_00448ce8));
  func_0079e2bc(auStack_1c);
  if (iVar3 != 0) {
    piVar1 = (int *)::operator new(0x358);
    ::new ((void *)piVar1) BLRiyan();   /* ALLOC+CTOR_FIX(R116): ??->? ? dump ????? BLRiyan */
    iVar3 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar1) + (0x18)))(piVar1));
    if (iVar3 == 0) {
      (**(code **)(*(int *)(piVar1) + (8)))(piVar1);
      piVar1 = (int *)0x0;
    }
    else {
      ((cocos2d::CCObject *)(piVar1))->autorelease();
    }
    piVar4 = (int *)((DataManager *)this)->shareDataManager();
    uVar2 = (undefined4)((**(code **)(*(int *)(piVar4) + (0x198)))());
    func_0079e53c(auStack_1c,((int)this) + 0x1f0);
    uVar2 = (undefined4)(((SuitEquipUserData *)(uVar2))->getBuffLv((std::string)(char*)auStack_1c, g_00448ce8));
    func_0079e2bc(auStack_1c);
    piVar4 = (int *)((DataCacheManager *)this)->shareManager();
    uVar5 = (undefined4)((**(code **)(*(int *)(piVar4) + (0xb8)))());
    iVar3 = (undefined4)((void)(((SuitEquipBuffData *)(uVar5))->getItemByIdAndLv(g_00448ce8, uVar2)),(intptr_t)0);
    uVar5 = (undefined4)(*(undefined4 *)(iVar3 + 0xc));
    (**(code **)(*(int *)(((int)this) + 0x1c4) + 0x38))(((int)this) + 0x1c4);
    uVar2 = (undefined4)(func_0079e2ec());
    func_0079e4fc(uVar5,uVar2);
    uVar6 = (undefined4)(intptr_t)(func_0079e62c());
    func_0079e724((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),g_00448ce0,g_00448ce4);
    uVar2 = (undefined4)(func_0079e8c4());
    ((BLRiyan *)(piVar1))->initWithRole((BLRole*)((int)this), uVar2, 0x3f800000, g_00448cec);
    piVar4 = (int *)((BLMission *)this)->currentMission();
    piVar4 = (int *)(**(code **)(*(int *)(piVar4) + (0x208)))();
    uVar2 = (undefined4)((**(code **)(*(int *)(piVar4) + (0x40)))());
    ((cocos2d::CCArray *)(uVar2))->addObject((cocos2d::CCObject*)piVar1);
  }
  return;
}

void BLRole::attackEffect(std::string * p1, int p2, float p3, cocos2d::CCPoint p4)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLRole::runBeAttackEffect(BLRole* p1, BLHit* p2, cocos2d::CCRect p3)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLRole::runCritAction(BLRole* p1, BLHit* p2, cocos2d::CCRect p3)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

undefined8 BLRole::runBlackAction(BLRole* p1, BLHit* p2, cocos2d::CCRect p3)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void BLRole::onBlackActionEnd(cocos2d::CCNode* p1, void* p2)
{
  if ((int)(intptr_t)(int)(intptr_t)p2 != 0) {
    ((BLRoleBase *)(p2))->removeNodeInMaps();
    (**(code **)(*(int *)(p2) + (0xec)))(p2,1);
  }
  return;
}

void BLRole::runAppearAction()
{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  code *pcVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  int iStack_40;
  undefined4 uStack_3c;
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [4];
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [4];
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  lVar9 = (undefined4)(intptr_t)(0 /* ctorZero */);
  iVar8 = (undefined4)(intptr_t)(g_0044978c + 0x449496);
  iStack_40 = (undefined4)(intptr_t)(*(int *)(iVar8 + g_00449790) + 0xc);
  func_0079e45c(&uStack_3c,"monsterout",&uStack_20);
  iVar1 = (undefined4)(intptr_t)((**(code **)(*(int *)this + 0x378))(((int)this)));
  if (iVar1 != 0) {
    piVar2 = (int *)(**(code **)(*(int *)this + 0x378))(((int)this));
    iVar1 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar2) + (0x70)))());
    if (iVar1 == 3) {
      func_0079e2dc(&uStack_3c,"Bossout");
    }
  }
  if (*(int *)((int)this + 4*(0xd6)) != 0) {
    BLRoleBase::removeNodeInMaps();
    (**(code **)(*(int *)*(int *)((int)this + 4*(0xd6)) + 0xec))((int *)*(int *)((int)this + 4*(0xd6)),1);
    *(int *)((int)this + 4*(0xd6)) = 0;
  }
  piVar2 = (int *)((DataCacheManager *)this)->shareManager();
  uVar3 = (undefined4)((**(code **)(*(int *)(piVar2) + (0x30)))());
  func_0079e45c(auStack_38,uStack_3c,&uStack_20);
  iVar4 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)(uVar3))->objectForKey((char const *)auStack_38));
  iVar1 = 0;
  if (iVar4 != 0) {
    iVar1 = func_0079e55c(iVar4,*(undefined4 *)(iVar8 + g_00449798),
                            *(undefined4 *)(iVar8 + g_0044979c),0);
  }
  func_0079e2bc(auStack_38);
  if (iVar1 != 0) {
    piVar2 = (int *)BLRole::create();
    (**(code **)(*(int *)(piVar2) + (0x3d4)))(piVar2,0);
    pcVar7 = *(code **)(*piVar2 + 0x28c);
    uVar3 = (undefined4)((**(code **)(*(int *)this + 0x288))(((int)this)));
    (*pcVar7)(piVar2,uVar3);
    (**(code **)(*(int *)(piVar2) + (0x1c)))(piVar2,0x43);
    pcVar7 = *(code **)(*piVar2 + 0x344);
    uVar3 = (undefined4)((**(code **)(*(int *)this + 0x340))(((int)this)));
    (*pcVar7)(piVar2,uVar3);
    uVar3 = (undefined4)(((BLMonsterData *)this)->create());
    func_0079e45c(auStack_34,uStack_3c,&uStack_20);
    ((BLMonsterData *)(uVar3))->initWith((std::string)(char*)auStack_34, 1);
    func_0079e2bc(auStack_34);
    (**(code **)(*(int *)(piVar2) + (0x37c)))(piVar2,uVar3);
    pcVar7 = *(code **)(*piVar2 + 0x238);
    func_0079e45c(auStack_30,uStack_3c,&uStack_20);
    (*pcVar7)(piVar2,auStack_30);
    func_0079e2bc(auStack_30);
    pcVar7 = *(code **)(*piVar2 + 0x4c);
    uVar3 = (undefined4)((**(code **)(*(int *)this + 0x50))(((int)this)));
    (*pcVar7)(piVar2,uVar3);
    (**(code **)(*(int *)(piVar2) + (0x1c)))(piVar2,0x43);
    (**(code **)(*(int *)(piVar2) + (0x294)))(piVar2,1);
    pcVar7 = *(code **)(*piVar2 + 0x34c);
    uVar3 = (undefined4)((**(code **)(*(int *)this + 0x348))(((int)this)));
    (*pcVar7)(piVar2,uVar3);
    pcVar7 = *(code **)(*piVar2 + 600);
    uVar3 = (undefined4)((**(code **)(*(int *)this + 800))(((int)this)));
    (*pcVar7)(piVar2,((int)this),uVar3);
    (**(code **)(*(int *)(piVar2) + (0x29c)))(piVar2,100);
    piVar5 = (int *)(**(code **)(*(int *)this + 0xe4))(((int)this));
    (**(code **)(*(int *)(piVar5) + (0xcc)))(piVar5,piVar2,g_004497a0);
    uStack_28 = (undefined4)(*(undefined4 *)(iVar8 + g_004497a4));
    uStack_24 = (undefined4)(0);
    uVar3 = (undefined4)(cocos2d::CCCallFuncND::create((cocos2d::CCObject*)((int)this), 0 /*memptr*/, 0));
    ((BLRoleBase *)(piVar2))->runNewAction((char const*)"stand", (cocos2d::CCAction*)uVar3, 0);
    *(int *)((int)this + 4*(0xd6)) = (int)piVar2;
  }
  piVar2 = (int *)*(int *)((int)this + 4*(0x9e));
  if (piVar2 != (int *)0x0) {
    (**(code **)(*(int *)(piVar2) + (0x90)))(piVar2,0);
  }
  piVar2 = (int *)*(int *)((int)this + 4*(0x9f));
  if (piVar2 != (int *)0x0) {
    (**(code **)(*(int *)(piVar2) + (0x90)))(piVar2,0);
  }
  piVar2 = (int *)*(int *)((int)this + 4*(0xa0));
  if (piVar2 != (int *)0x0) {
    (**(code **)(*(int *)(piVar2) + (0x90)))(piVar2,0);
  }
  piVar2 = (int *)*(int *)((int)this + 4*(0xcb));
  if (piVar2 != (int *)0x0) {
    (**(code **)(*(int *)(piVar2) + (0x90)))(piVar2,0);
  }
  uVar3 = (undefined4)(cocos2d::CCDelayTime::create(g_004497ac));
  uStack_20 = (undefined4)(*(undefined4 *)(iVar8 + g_004497b0));
  uStack_1c = (undefined4)(0);
  uVar6 = (undefined4)(cocos2d::CCCallFunc::create((cocos2d::CCObject*)((int)this), 0 /*memptr*/));
  uVar3 = (undefined4)(cocos2d::CCSequence::create((cocos2d::CCFiniteTimeAction*)uVar3, uVar6, 0));
  ((cocos2d::CCNode *)(((int)this)))->runAction((cocos2d::CCAction*)uVar3);
  (**(code **)(*(int *)this + 0x2b4))(((int)this),0x19);
  lVar10 = (undefined4)(intptr_t)(0 /* ctorZero */);
  cocos2d::CCString::createWithFormat((char const*)"=====加载一个出场特效的时间====%lld", (int)((ulonglong)lVar9 >> 0x20),(int)(lVar10 - lVar9),
             (int)((ulonglong)(lVar10 - lVar9) >> 0x20));
  uVar3 = (undefined4)(((cocos2d::CCString *)this)->getCString());
  func_0079e45c(auStack_2c,uVar3,auStack_30);
  ((BLDebug *)this)->LogTime((std::string)(char*)auStack_2c);
  func_0079e2bc(auStack_2c);
  func_0079e2bc(&uStack_3c);
  func_0079e2bc(&iStack_40);
  return;
}

void BLRole::setPeltPosition(BLRole* p1, BLHit* p2)
{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [8];
  uint auStack_28 [2];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  ((BLRoleBase *)(p1))->getRCThrrow(1);
  iVar1 = (undefined4)(intptr_t)(func_0079e5ec(auStack_28[0] & 0x7fffffff,g_00449840));
  if (iVar1 == 0) {
    *(CCPoint *)(auStack_40) = ((cocos2d::CCNode *)(p1))->convertToWorldSpace(*(const CCPoint *)(void *)auStack_28);
    uVar2 = (undefined4)(func_0079e4fc(uStack_20,0x3f000000));
    uVar3 = (undefined4)(func_0079e4fc(uStack_1c,0x3f000000));
    0 /* ctorZero */;
    ((cocos2d::CCPoint *)(auStack_40))->operator+(*(const CCPoint *)(void *)auStack_30);
    uVar2 = (undefined4)((**(code **)(*(int *)this + 0xe4))(((int)this)));
    *(CCPoint *)(auStack_30) = ((cocos2d::CCNode *)(uVar2))->convertToNodeSpace(*(const CCPoint *)(void *)auStack_38);
    (**(code **)(*(int *)this + 0x4c))(((int)this),auStack_30);
    ((BLRoleBase *)(((int)this)))->updateEffectPosition();
  }
  return;
}

void BLRole::runBeAttackActionTest(std::string * p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

bool BLRole::fall()
{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  uVar2 = (undefined4)(*(undefined4 *)(((int)this) + 0x1c0));
  func_0079e45c(&uStack_20,"fall",auStack_24);
  iVar1 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)(uVar2))->objectForKey(*(std::string const*)&uStack_20));
  func_0079e2bc(&uStack_20);
  if (iVar1 != 0) {
    uStack_20 = (undefined4)(*(undefined4 *)(g_00449a08 + 0x4499ae));
    uStack_1c = (undefined4)(0);
    uVar2 = (undefined4)(cocos2d::CCCallFunc::create((cocos2d::CCObject*)((int)this), 0 /*memptr*/));
    iVar3 = (undefined4)(intptr_t)("fall");
    ((BLRole *)(((int)this)))->playNewActionAndStatus((char const*)iVar3, 0x10, (cocos2d::CCAction*)uVar2, 0, 0);
    uVar2 = (undefined4)(*(undefined4 *)(((int)this) + 0x1c0));
    func_0079e45c(auStack_24,iVar3,auStack_28);
    ((cocos2d::CCDictionary *)(uVar2))->removeObjectForKey((char const *)auStack_24);
    func_0079e2bc(auStack_24);
  }
  return iVar1 != 0;
}

void BLRole::onBeAttackCallBack()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLRole::getUp()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLRole::onDelayGetUpEnd()
{
  int iVar1;
  
  iVar1 = (undefined4)(intptr_t)(((BLRoleAttribute *)((int)this) + 0x71)->getLife());
  if (iVar1 < 1) {
    BLRole::die();
  }
  else {
    (**(code **)(*(int *)this + 0x2b4))(((int)this),0x11);
    BLRole::getUp();
  }
  return;
}

undefined8 BLRole::delayGetUp()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void BLRole::onFallEnd()
{
  int iVar1;
  
  iVar1 = (undefined4)(intptr_t)(((BLRoleAttribute *)((int)this) + 0x1c4)->getLife());
  if (iVar1 < 1) {
    BLRole::die();
  }
  else {
    BLRole::delayGetUp();
  }
  return;
}

void BLRole::setAttrLifeBuy()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)([](int _a){float _f;__builtin_memcpy(&_f,&_a,4);float _r=(float)(int)_a;int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(*(undefined4 *)(((int)this) + 0x1dc))))));
  (void)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar1),(int)(g_00449c8c)))));
  uVar1 = (undefined4)(((long long)([](int _a){float _f;__builtin_memcpy(&_f,&_a,4);return (int)_f;}((int)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar1),(int)(g_00449c8c)))))))));
  *(undefined4 *)(((int)this) + 0x1dc) = uVar1;
  return;
}

undefined8 BLRole::runBeAttackRed()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

int BLRole::runBlueToothBeAttackAction(BLRole* p1, BLHit* p2, cocos2d::CCRect p3, cocos2d::CCPoint p4)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void BLRole::moveToPosXAndDuration(float p1, float p2)
{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_28 [20];
  
  uVar1 = (undefined4)(((BluetoothHelper *)this)->share());
  uVar2 = (undefined4)((**(code **)(*(int *)this + 0x250))(((int)this)));
  ((BluetoothHelper *)(uVar1))->setRoleAIMoveTo(uVar2, p1, p2);
  *(int *)((int)this + 4*(0x9b)) = 0;
  (**(code **)(*(int *)this + 0x2cc))(((int)this),0);
  (**(code **)(*(int *)this + 700))(((int)this),0);
  uVar1 = (undefined4)((**(code **)(*(int *)this + 0x68))(((int)this)));
  0 /* ctorZero */;
  uVar1 = (undefined4)(cocos2d::CCMoveTo::create(p2, *(const CCPoint *)(void *)auStack_28));
  uVar2 = (undefined4)(cocos2d::CCCallFunc::create((cocos2d::CCObject*)((int)this), 0 /*memptr*/));
  iVar3 = (undefined4)(intptr_t)(cocos2d::CCSequence::create((cocos2d::CCFiniteTimeAction*)uVar1, uVar2, 0));
  *(undefined4 *)(iVar3 + 0x1c) = 0x7b;
  ((cocos2d::CCNode *)(((int)this)))->runAction((cocos2d::CCAction*)iVar3);
  return;
}

void BLRole::moveTo(float p1)
{
  undefined4 uVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined4 auStack_30 [2];
  undefined1 auStack_28 [8];
  undefined4 uStack_20;
  
  if (*(int *)((int)this + 4*(0x94)) - 3U < 2) {
    uVar1 = (undefined4)((**(code **)(*(int *)this + 0x50))());
    0 /* ctorZero */;
    ((cocos2d::CCPoint *)(uVar1))->operator+(*(const CCPoint *)(void *)auStack_28);
    piVar2 = (int *)((BLMission *)this)->currentMission();
    piVar2 = (int *)(**(code **)(*(int *)(piVar2) + (0x208)))();
    piVar2 = (int *)(**(code **)(*(int *)(piVar2) + (0xa8)))();
    uVar1 = (undefined4)((**(code **)(*(int *)(piVar2) + (0x270)))());
    piVar2 = (int *)((BLMission *)this)->currentMission();
    piVar2 = (int *)(**(code **)(*(int *)(piVar2) + (0x208)))();
    piVar2 = (int *)(**(code **)(*(int *)(piVar2) + (0xa8)))();
    uVar3 = (undefined4)((**(code **)(*(int *)(piVar2) + (0x260)))());
    iVar4 = (undefined4)(intptr_t)(func_0079e4ec(uVar1,uVar3));
    if (iVar4 == 0) {
      piVar2 = (int *)((BLMission *)this)->currentMission();
      piVar2 = (int *)(**(code **)(*(int *)(piVar2) + (0x208)))();
      piVar2 = (int *)(**(code **)(*(int *)(piVar2) + (0xa8)))();
      pcVar5 = *(code **)(*piVar2 + 0x270);
    }
    else {
      piVar2 = (int *)((BLMission *)this)->currentMission();
      piVar2 = (int *)(**(code **)(*(int *)(piVar2) + (0x208)))();
      piVar2 = (int *)(**(code **)(*(int *)(piVar2) + (0xa8)))();
      pcVar5 = *(code **)(*piVar2 + 0x260);
    }
    uVar3 = (undefined4)((*pcVar5)());
    uVar1 = (undefined4)(auStack_30[0]);
    iVar4 = (undefined4)(intptr_t)(func_0079e4ec(auStack_30[0],uVar3));
    if (iVar4 == 0) {
      ((BLRoleBase *)(((int)this)))->getRCBeingAttack(1);
      uVar3 = (undefined4)(func_0079e4fc(uStack_20,0x3f000000));
      iVar4 = (undefined4)(intptr_t)(func_0079e7b4(uVar1,uVar3));
      if (iVar4 != 0) {
        ((BLRoleBase *)(((int)this)))->getRCBeingAttack(1);
        auStack_30[0] = (undefined4)(intptr_t)(func_0079e4fc(uStack_20,0x3f000000));
      }
    }
    else {
      ((BLRoleBase *)(((int)this)))->getRCBeingAttack(1);
      uVar1 = (undefined4)(func_0079e4fc(uStack_20,0x3f000000));
      auStack_30[0] = (undefined4)(intptr_t)(func_0079e57c(uVar3,uVar1));
    }
    ((BLRole *)(((int)this)))->move();
    uVar1 = (undefined4)(func_0079e2ec(*(int *)((int)this + 4*(0xa8))));
    func_0079e4dc(p1,uVar1);
    uVar6 = (undefined4)(intptr_t)(func_0079e62c());
    uVar1 = (undefined4)(auStack_30[0]);
    iVar4 = (undefined4)(intptr_t)(cocos2d::CCDirector::sharedDirector());
    uVar6 = func_0079e724((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),*(undefined4 *)(iVar4 + 0x38)
                            ,*(undefined4 *)(iVar4 + 0x3c));
    uVar3 = (undefined4)(func_0079e7e4((int)uVar6,(uint)((ulonglong)uVar6 >> 0x20) & 0x7fffffff));
    ((BLRole *)(((int)this)))->moveToPosXAndDuration(uVar1, uVar3);
  }
  else {
    (**(code **)(*(int *)this + 0x284))();
  }
  return;
}

void BLRole::nodeAction(cocos2d::CCNode* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLRole::setRoleVisable(bool p1)
{
  undefined4 p4 = 0;

  int *piVar1;
  undefined4 extraout_r2;
  
  (**(code **)(*(int *)this + 0x90))();
  piVar1 = (int *)*(int *)((int)this + 4*(0x9f));
  if (piVar1 != 0) {
    (**(code **)(*(int *)(piVar1) + (0x90)))(piVar1,p1,extraout_r2,*(code **)(*piVar1 + 0x90),p4);
  }
  piVar1 = (int *)*(int *)((int)this + 4*(0xa0));
  if (piVar1 != 0) {
    (**(code **)(*(int *)(piVar1) + (0x90)))(piVar1,p1);
  }
  piVar1 = (int *)*(int *)((int)this + 4*(0xcb));
  if (piVar1 != 0) {
    (**(code **)(*(int *)(piVar1) + (0x90)))(piVar1,p1);
  }
  piVar1 = (int *)*(int *)((int)this + 4*(0xcc));
  if (piVar1 != 0) {
    (**(code **)(*(int *)(piVar1) + (0x90)))(piVar1,p1);
  }
  return;
}

void BLRole::getCombat()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLRole::setAutoFight(bool p1)
{
  *(char *)(((int)this) + g_0044a328) = (char)p1;
  if (p1 == 0) {
    BLRole::stopAI();
  }
  else {
    BLRole::startAI();
  }
  return;
}

void BLRole::setAutoGo(bool p1)
{
  *(undefined1 *)(((int)this) + g_0044a344) = p1;
  if (*(int *)(((int)this) + 0x344) != 0) {
    ((BLAIController *)this)->setAutoGo((bool)0);
  }
  return;
}

void BLRole::onRealHurt(BLRole* p1, int p2)
{
  undefined4 p4 = 0;

  int iVar1;
  code *pcVar2;
  
  if (*(int *)((int)this + 4*(0x94)) != 0x15) {
    iVar1 = (undefined4)(intptr_t)(((BLRoleAttribute *)((int)this) + 0x71)->getLife());
    pcVar2 = *(code **)(*(int *)this + 0x398);
    (*pcVar2)(((int)this),~(iVar1 - p2) >> 0x1f & iVar1 - p2,*(int *)this,pcVar2,p4);
    if (p2 != 0) {
      (**(code **)(*(int *)this + 0x39c))(((int)this),p2,0,1);
    }
    iVar1 = (undefined4)(intptr_t)(((BLRoleAttribute *)((int)this) + 0x71)->getLife());
    if (iVar1 < 1) {
      BLRole::die();
    }
  }
  return;
}

void BLRole::addPetShield()
{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  piVar1 = (int *)(**(code **)(*piVar1 + 0x28))();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x188))());
  iVar3 = (undefined4)(intptr_t)(((PetUserData *)uVar2)->getUsedSkillData(g_0044a3f8));
  if (iVar3 != 0) {
    uVar2 = (undefined4)(((PetBuffItemData *)*(undefined4 *)(iVar3 + 8))->getAttrByType(6));
    *(undefined4 *)(((int)this) + 0x220) = uVar2;
    *(undefined4 *)(((int)this) + 0x224) = 0;
    *(undefined4 *)(((int)this) + 0x228) = 0;
    (**(code **)(**(int **)(((int)this) + 0x338) + 0x90))(*(int **)(((int)this) + 0x338),1);
    ((BLProgressBar *)*(undefined4 *)(((int)this) + 0x338))->setPercentage(g_0044a3fc);
  }
  return;
}

void BLRole::removePetShield()
{
  (**(code **)(**(int **)(((int)this) + 0x338) + 0x90))(*(int **)(((int)this) + 0x338),0);
  *(undefined1 *)(((int)this) + g_0044a430) = 0;
  *(undefined4 *)(((int)this) + 0x224) = 0;
  *(undefined4 *)(((int)this) + 0x228) = 0;
  *(undefined4 *)(((int)this) + 0x220) = 0;
  return;
}

int BLRole::usePetShield(long p1)
{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  p1 = p1 + *(int *)(((int)this) + 0x224);
  *(int *)(((int)this) + 0x224) = p1;
  iVar4 = (undefined4)(intptr_t)(*(int *)(((int)this) + 0x220));
  if (iVar4 - p1 < 1) {
    BLRole::removePetShield();
    iVar4 = (undefined4)(intptr_t)(*(int *)(((int)this) + 0x224) - *(int *)(((int)this) + 0x220));
  }
  else {
    uVar3 = (undefined4)(*(undefined4 *)(((int)this) + 0x338));
    uVar1 = (undefined4)(((long long)([](int _a){float _f;__builtin_memcpy(&_f,&_a,4);float _r=(float)(int)_a;int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar3)))));
    uVar2 = (undefined4)(((long long)([](int _a){float _f;__builtin_memcpy(&_f,&_a,4);float _r=(float)(int)_a;int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(iVar4)))));
    uVar1 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar1),(int)(uVar2)))));
    uVar1 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar1),(int)(g_0044a488)))));
    ((BLProgressBar *)uVar3)->setPercentage(uVar1);
    iVar4 = 0;
  }
  return iVar4;
}

int BLRole::randomReward(std::vector<int, std::allocator<int>>& p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void BLRole::onTalentSkill(int p1, int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLRole::initRoleAura()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLRole::createItemAction(ItemData* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLRole::dropItem(ItemData* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

undefined8 BLRole::onLevelUp(cocos2d::CCObject* p1)
{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iStack_14;
  
  iVar1 = 0;
  iStack_14 = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  if ((int)(intptr_t)(int)(intptr_t)p1 != 0) {
    iVar1 = func_0079e55c(p1,*(undefined4 *)(g_0044b23c + 0x44b1b6),
                            *(undefined4 *)(g_0044b240 + 0x44b1ba),0);
  }
  iVar2 = (undefined4)(intptr_t)((**(code **)(*(int *)this + 0x378))(((int)this)));
  if ((iVar2 != 0) && (iVar1 != 0)) {
    piVar3 = (int *)(**(code **)(*(int *)this + 0x378))(((int)this));
    (**(code **)(*(int *)(piVar3) + (0x20)))(&iStack_14,piVar3);
    iVar1 = mz_SteqIcEN9__gnu_cxx11__enable_ifIXsrSt9__is_charIT_E7__valueEbE6__typeERKSbIS3_St11char_traitsIS3_ESaIS3_EESC_
                      (iVar1 + 0x14,&iStack_14);
    func_0079e2bc(&iStack_14);
    if (iVar1 != 0) {
      if (*(int *)((int)this + 4*(0xd5)) != 0) {
        BLRoleBase::removeNodeInMaps();
        (**(code **)(*(int *)*(int *)((int)this + 4*(0xd5)) + 0xec))((int *)*(int *)((int)this + 4*(0xd5)),1);
        *(int *)((int)this + 4*(0xd5)) = 0;
      }
      ((BLRoleAttribute *)((int)this) + 0x71)->onLvChange(0);
      BLRole::levelUpAction();
      BLRole::levelUpTextAction();
    }
  }
  return ghidra_CONCAT44(iStack_14,((int)this));
}

void BLRole::thrrow(BLAnimateFrameData* p1, cocos2d::CCArray* p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLRole::setSkillCD(std::string * p1, std::string * p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

int BLRole::skillAttack(int p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void BLRole::setSkillFrozenCD(int p1, float p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

int * BLRole::getItem(int p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return nullptr;
}

int BLRole::runBeAttackAction(BLRole* p1, BLHit* p2, cocos2d::CCRect p3, cocos2d::CCPoint p4)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

undefined4 BLRole::hit(BLHit* p1, cocos2d::CCArray* p2)
{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  bool bVar6;
  char acStack_30 [8];
  uint auStack_28 [5];
  
  uVar2 = (undefined4)(cocos2d::CCArray::create());
  iVar3 = (undefined4)(intptr_t)((**(code **)(*(int *)(p1) + (0x68)))(p1));
  if (iVar3 != 0) {
    piVar4 = (int *)func_0079e55c(iVar3,*(undefined4 *)(g_0044cd9c + 0x44cbd8),
                                    *(undefined4 *)(g_0044cda0 + 0x44cbda),0);
    iVar3 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar4) + (0x70)))());
    if (iVar3 == 1) {
      (**(code **)(*(int *)((int)this + 4*(0x71)) + 0x60))(acStack_30,((int)this) + 0x71);
      iVar3 = (undefined4)(intptr_t)(func_0079e4bc(acStack_30,"1003"));
      bVar6 = (undefined4)(intptr_t)(true);
      if (iVar3 != 0) {
        (**(code **)(*(int *)((int)this + 4*(0x71)) + 0x60))(auStack_28,((int)this) + 0x71);
        iVar3 = (undefined4)(intptr_t)(func_0079e4bc(auStack_28,"1029"));
        bVar6 = (undefined4)(intptr_t)(iVar3 == 0);
        func_0079e2bc(auStack_28);
      }
      func_0079e2bc(acStack_30);
      iVar3 = (undefined4)(intptr_t)(g_0044cdac);
      if (bVar6) {
        0 /* ctorZero */;
        0 /* ctorZero */;
        ((BLRole *)(((int)this)))->runBeAttackAction((BLRole*)((int)this), (BLHit*)p1, *(cocos2d::CCRect *)(void *)&auStack_28, *(cocos2d::CCPoint *)(void *)&acStack_30);
      }
      else {
        auStack_28[0] = auStack_28[0] & 0xffffff00;
        piVar4 = (int *)((BLMission *)this)->currentMission();
        piVar4 = (int *)(**(code **)(*(int *)(piVar4) + (0x208)))();
        uVar5 = (undefined4)((**(code **)(*(int *)(piVar4) + (0x1c)))(piVar4,((int)this),p1,auStack_28,p2));
        ((cocos2d::CCArray *)(uVar2))->addObjectsFromArray((cocos2d::CCArray*)uVar5);
      }
    }
    else {
      acStack_30[0] = '\0';
      piVar4 = (int *)((BLMission *)this)->currentMission();
      piVar4 = (int *)(**(code **)(*(int *)(piVar4) + (0x208)))();
      uVar5 = (undefined4)((**(code **)(*(int *)(piVar4) + (0x1c)))(piVar4,((int)this),p1,acStack_30,p2));
      ((cocos2d::CCArray *)(uVar2))->addObjectsFromArray((cocos2d::CCArray*)uVar5);
      iVar3 = (undefined4)(intptr_t)(((cocos2d::CCArray *)(uVar2))->count());
      if ((iVar3 != 0) && (iVar3 = (**(code **)(*(int *)this + 0x290))(((int)this)), iVar3 == 0)) {
        piVar4 = (int *)((BLMission *)this)->currentMission();
        piVar4 = (int *)(**(code **)(*(int *)(piVar4) + (0x208)))();
        iVar3 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar4) + (0x118)))());
        piVar4 = (int *)((BLMission *)this)->currentMission();
        piVar4 = (int *)(**(code **)(*(int *)(piVar4) + (0x208)))();
        (**(code **)(*(int *)(piVar4) + (0x124)))(piVar4,0);
        piVar4 = (int *)((BLMission *)this)->currentMission();
        piVar4 = (int *)(**(code **)(*(int *)(piVar4) + (0x208)))();
        (**(code **)(*(int *)(piVar4) + (0x11c)))(piVar4,iVar3 + 1);
        uVar5 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
        ((cocos2d::CCNotificationCenter *)(uVar5))->postNotification((char const*)"EVENT_UPDATE_ATTACK_COUNT");
      }
      BLRoleBase::getRCThrrow(auStack_28);
      iVar3 = (undefined4)(intptr_t)(func_0079e5ec(auStack_28[0] & 0x7fffffff,g_0044cdb0));
      if ((((iVar3 == 0) && (acStack_30[0] == '\0')) &&
          (((int)(intptr_t)(int)(intptr_t)p2 == 0 || (iVar3 = ((cocos2d::CCArray *)(p2))->count(), iVar3 == 0)))) &&
         (((BLRole *)(((int)this)))->standOn(0), *(int *)((int)this + 4*(0xd1)) != 0)) {
        ((BLAIController *)this)->delayJudageAI();
      }
    }
    return uVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xff,0x44cd92);
  (*pcVar1)();
}

void BLRole::onEnter()
{
  BLRoleBase::onEnter();
  return;
}

void BLRole::onExit()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar1)->removeObserver((cocos2d::CCObject*)((int)this), (char const*)((intptr_t)"EVENT_LV_UPDATE"));
  if (*(int *)(((int)this) + 0x344) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(undefined4 *)(((int)this) + 0x344) = 0;
  }
  if (*(int *)(((int)this) + 0x340) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(undefined4 *)(((int)this) + 0x340) = 0;
  }
  if (*(int *)(((int)this) + 0x33c) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(undefined4 *)(((int)this) + 0x33c) = 0;
  }
  ((cocos2d::CCNode *)((int)this))->stopAllActions();
  BLRoleBase::onExit();
  return;
}

bool BLRole::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

bool BLRole::setPartnerNode(cocos2d::CCNode* p1, float p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void BLRole::updateFrameData(BLAnimateFrameData* p1)
{
  BLRoleBase::updateFrameData((BLAnimateFrameData*)0);
  return;
}

void BLRole::tick(float p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLRole::setLifeAndBar(long p1)
{
  undefined4 p4 = 0;

  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 extraout_r2;
  undefined4 uVar4;
  
  ((BLRoleAttribute *)this)->setLife(((int)this) + 0x1c4);
  piVar1 = *(int **)(((int)this) + 0x32c);
  if (piVar1 != 0) {
    if (p1 == 0) {
      (**(code **)(*piVar1 + 0x90))(piVar1,0,extraout_r2,*(code **)(*piVar1 + 0x90),p4);
    }
    uVar4 = (undefined4)(*(undefined4 *)(((int)this) + 0x32c));
    uVar2 = (undefined4)(((BLRoleAttribute *)((int)this) + 0x1c4)->getFightAttrValueByType(2));
    uVar3 = (undefined4)(((long long)([](int _a){float _f;__builtin_memcpy(&_f,&_a,4);float _r=(float)(int)_a;int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(p1)))));
    uVar2 = (undefined4)(((long long)([](int _a){float _f;__builtin_memcpy(&_f,&_a,4);float _r=(float)(int)_a;int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar2)))));
    uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar3),(int)(uVar2)))));
    uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar2),(int)(g_0044dabc)))));
    ((BLProgressBar *)uVar4)->setPercentage(uVar2);
  }
  return;
}

void BLRole::setLife(long p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLRole::setRoleFilpX(bool p1, bool p2)
{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar1 = (undefined4)(intptr_t)(((cocos2d::CCSprite *)this)->isFlipX());
  BLRoleBase::setRoleFilpX(p1, p2);
  iVar2 = (undefined4)(intptr_t)(((cocos2d::CCSprite *)((int)this))->isFlipX());
  if (iVar2 != iVar1) {
    uVar3 = (undefined4)(((BluetoothHelper *)this)->share());
    uVar4 = (undefined4)((**(code **)(*(int *)this + 0x250))(((int)this)));
    ((BluetoothHelper *)uVar3)->roleisFlipX(uVar4, p1);
  }
  return;
}
