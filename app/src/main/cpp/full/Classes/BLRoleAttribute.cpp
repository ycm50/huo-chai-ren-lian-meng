#include "BLRoleAttribute.h"
#include "CCArray.h"
#include "ImmortalsAttr.h"
#include "CCObject.h"
#include "BLHit.h"
#include "BLRole.h"
#include "CCString.h"
#include "CCInteger.h"
#include "CCDictionary.h"
#include "BLAttackHurtData.h"
#include "BLAttrGroupData.h"
#include "BLGameScene.h"
#include "BLLeakUtils.h"
#include "BLMission.h"
#include "ChallengePlayerData.h"
#include "DataCacheManager.h"
#include "DataManager.h"
#include "EquipBaseData.h"
#include "ImmortalsRoleData.h"
#include "ImmortalsRoleItemData.h"
#include "PetBuffItemData.h"
#include "PetUserData.h"
#include "RoleRenascenceData.h"
#include "RoleRenascenceItemData.h"
#include "SuitEquipBuffData.h"
#include "SuitEquipEquipData.h"
#include "SuitEquipEquipItemData.h"
#include "SuitEquipUserData.h"
#include "TreasureDataManager.h"
#include "TreasureHeroData.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <new>   // ghost_fix.js 自动补齐
using namespace cocos2d;
// 兜底声明
template <class T, class... A> std::string ConvertToString(A...);
extern "C" long long mz_SteqIcEN9__gnu_cxx11__enable_ifIXsrSt9__is_charIT_E7__valueEbE6__typeERKSbIS3_St11char_traitsIS3_ESaIS3_EESC_(...);

extern "C" long long func_0044f804(...);
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2dc(...);
extern "C" long long func_0079e2ec(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e31c(...);
extern "C" long long func_0079e34c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4ac(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e50c(...);
extern "C" long long func_0079e51c(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e58c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long func_0079e5bc(...);
extern "C" long long func_0079e5fc(...);
extern "C" long long func_0079e62c(...);
extern "C" long long func_0079e63c(...);
extern "C" long long func_0079e68c(...);
extern "C" long long func_0079e6c0(...);
extern "C" long long func_0079e6d0(...);
extern "C" long long func_0079e724(...);
extern "C" long long func_0079e734(...);
extern "C" long long func_0079e744(...);
extern "C" long long func_0079e7e4(...);
extern "C" long long func_0079e814(...);
extern "C" long long func_0079e824(...);
extern "C" long long func_0079e834(...);
extern "C" long long func_0079e8a4(...);
extern "C" long long func_0079e8b4(...);
extern "C" long long func_0079e8c4(...);
extern "C" long long func_0079e8d4(...);
extern "C" long long func_0079e924(...);
extern "C" long long func_0079e964(...);
extern "C" long long func_0079e9d4(...);
extern "C" long long func_0079e9e4(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long _DAT_0044e52c;
extern "C" unsigned long _DAT_0044e530;
extern "C" unsigned long _DAT_0044e6f0;
extern "C" unsigned long _DAT_0044e6f4;
extern "C" unsigned long _DAT_0044e6f8;
extern "C" unsigned long _DAT_0044e6fc;
extern "C" unsigned long _DAT_0044e700;
extern "C" unsigned long _DAT_0044e704;
extern "C" unsigned long _DAT_0044e708;
extern "C" unsigned long _DAT_0044e70c;
extern "C" unsigned long _DAT_0044e710;
extern "C" unsigned long _DAT_0044e714;
extern "C" unsigned long _DAT_0044e814;
extern "C" unsigned long _DAT_0044e818;
extern "C" unsigned long _DAT_0044e82c;
extern "C" unsigned long _DAT_0044e830;
extern "C" unsigned long _DAT_0044e8f4;
extern "C" unsigned long _DAT_0044e8f8;
extern "C" unsigned long _DAT_0044e8fc;
extern "C" unsigned long _DAT_0044e9a0;
extern "C" unsigned long _DAT_0044e9a4;
extern "C" unsigned long _DAT_0044e9a8;
extern "C" unsigned long _DAT_0044eb90;
extern "C" unsigned long _DAT_0044ecd0;
extern "C" unsigned long _DAT_0044ecd4;
extern "C" unsigned long _DAT_0044ecd8;
extern "C" unsigned long _DAT_0044ecdc;
extern "C" unsigned long _DAT_0044ed54;
extern "C" unsigned long _DAT_0044edc8;
extern "C" unsigned long _DAT_0044edcc;
extern "C" unsigned long _DAT_0044edfc;
extern "C" unsigned long _DAT_0044ee00;
extern "C" unsigned long _DAT_0044ee30;
extern "C" unsigned long _DAT_0044ee34;
extern "C" unsigned long _DAT_0044ee64;
extern "C" unsigned long _DAT_0044ee68;
extern "C" unsigned long _DAT_0044ee98;
extern "C" unsigned long _DAT_0044ee9c;
extern "C" unsigned long _DAT_0044eecc;
extern "C" unsigned long _DAT_0044eed0;
extern "C" unsigned long _DAT_0044ef88;
extern "C" unsigned long _DAT_0044ef8c;
extern "C" unsigned long _DAT_0044ef90;
extern "C" unsigned long _DAT_0044eff8;
extern "C" unsigned long _DAT_0044effc;
extern "C" unsigned long _DAT_0044f3b8;
extern "C" unsigned long _DAT_0044f3bc;
extern "C" unsigned long _DAT_0044f3c0;
extern "C" unsigned long _DAT_0044f3c4;
extern "C" unsigned long _DAT_0044f3c8;
extern "C" unsigned long _DAT_0044f3cc;
extern "C" unsigned long _DAT_0044f3d0;
extern "C" unsigned long _DAT_0044f3d4;
extern "C" unsigned long _DAT_0044f3d8;
extern "C" unsigned long _DAT_0044f3dc;
extern "C" unsigned long _DAT_0044f7d8;
extern "C" unsigned long _DAT_0044f7dc;
extern "C" unsigned long _DAT_0044f7e0;
extern "C" unsigned long _DAT_0044f7e4;
extern "C" unsigned long _DAT_0044f7e8;
extern "C" unsigned long _DAT_0044f7ec;
extern "C" unsigned long _DAT_0044f7f0;
extern "C" unsigned long _DAT_0044f7f4;
extern "C" unsigned long _DAT_0044f7f8;
extern "C" unsigned long _DAT_0044f7fc;
extern "C" unsigned long _DAT_0044f800;
extern "C" unsigned long _DAT_0044f930;
extern "C" unsigned long _DAT_0044f934;
extern "C" unsigned long _DAT_0044f938;
extern "C" unsigned long _DAT_0044f93c;
extern "C" unsigned long _DAT_0044f940;
extern "C" unsigned long _DAT_0044f944;
extern "C" unsigned long _DAT_0044f948;
extern "C" unsigned long _DAT_0044f94c;
extern "C" unsigned long _DAT_0044f950;
extern "C" unsigned long _DAT_0044fa58;
extern "C" unsigned long _DAT_0044fa5c;
extern "C" unsigned long _DAT_0044fa60;
extern "C" unsigned long _DAT_0044fb60;
extern "C" unsigned long _DAT_0044fb64;
extern "C" unsigned long _DAT_0044fc60;
extern "C" unsigned long _DAT_0044fc64;
extern "C" unsigned long _DAT_0044fe54;
extern "C" unsigned long _DAT_0044fe58;
extern "C" unsigned long _DAT_0044fe5c;
extern "C" unsigned long _DAT_004502c8;
extern "C" unsigned long _DAT_004502cc;
extern "C" unsigned long _DAT_004502d0;
extern "C" unsigned long _DAT_004502d4;
extern "C" unsigned long _DAT_004502d8;
extern "C" unsigned long _DAT_004502dc;
extern "C" unsigned long _DAT_004502e0;
extern "C" unsigned long _DAT_004502e4;
extern "C" unsigned long _DAT_004502e8;
extern "C" unsigned long _DAT_004502ec;
extern "C" unsigned long _DAT_00450680;
extern "C" unsigned long _DAT_00450684;
extern "C" unsigned long _DAT_00450688;
extern "C" unsigned long _DAT_0045068c;
extern "C" unsigned long _DAT_00450690;
extern "C" unsigned long _DAT_00450694;
extern "C" unsigned long _DAT_00450698;
extern "C" unsigned long _DAT_0045069c;
extern "C" unsigned long _DAT_004506a0;
extern "C" unsigned long _DAT_00450734;
extern "C" unsigned long _DAT_00450738;
extern "C" unsigned long extraout_r1;
extern "C" unsigned long extraout_r1_00;
extern "C" unsigned long extraout_r2;
extern "C" unsigned long g_0044e52c;
extern "C" unsigned long g_0044e530;
extern "C" unsigned long g_0044e6f0;
extern "C" unsigned long g_0044e6f4;
extern "C" unsigned long g_0044e6f8;
extern "C" unsigned long g_0044e6fc;
extern "C" unsigned long g_0044e700;
extern "C" unsigned long g_0044e704;
extern "C" unsigned long g_0044e708;
extern "C" unsigned long g_0044e70c;
extern "C" unsigned long g_0044e710;
extern "C" unsigned long g_0044e714;
extern "C" unsigned long g_0044e814;
extern "C" unsigned long g_0044e818;
extern "C" unsigned long g_0044e82c;
extern "C" unsigned long g_0044e830;
extern "C" unsigned long g_0044e8f4;
extern "C" unsigned long g_0044e8f8;
extern "C" unsigned long g_0044e8fc;
extern "C" unsigned long g_0044e9a0;
extern "C" unsigned long g_0044e9a4;
extern "C" unsigned long g_0044e9a8;
extern "C" unsigned long g_0044eb90;
extern "C" unsigned long g_0044ecd0;
extern "C" unsigned long g_0044ecd4;
extern "C" unsigned long g_0044ecd8;
extern "C" unsigned long g_0044ecdc;
extern "C" unsigned long g_0044ed54;
extern "C" unsigned long g_0044edc8;
extern "C" unsigned long g_0044edcc;
extern "C" unsigned long g_0044edfc;
extern "C" unsigned long g_0044ee00;
extern "C" unsigned long g_0044ee30;
extern "C" unsigned long g_0044ee34;
extern "C" unsigned long g_0044ee64;
extern "C" unsigned long g_0044ee68;
extern "C" unsigned long g_0044ee98;
extern "C" unsigned long g_0044ee9c;
extern "C" unsigned long g_0044eecc;
extern "C" unsigned long g_0044eed0;
extern "C" unsigned long g_0044ef88;
extern "C" unsigned long g_0044ef8c;
extern "C" unsigned long g_0044ef90;
extern "C" unsigned long g_0044eff8;
extern "C" unsigned long g_0044effc;
extern "C" unsigned long g_0044f3b8;
extern "C" unsigned long g_0044f3bc;
extern "C" unsigned long g_0044f3c0;
extern "C" unsigned long g_0044f3c4;
extern "C" unsigned long g_0044f3c8;
extern "C" unsigned long g_0044f3cc;
extern "C" unsigned long g_0044f3d0;
extern "C" unsigned long g_0044f3d4;
extern "C" unsigned long g_0044f3d8;
extern "C" unsigned long g_0044f3dc;
extern "C" unsigned long g_0044f7d8;
extern "C" unsigned long g_0044f7dc;
extern "C" unsigned long g_0044f7e0;
extern "C" unsigned long g_0044f7e4;
extern "C" unsigned long g_0044f7e8;
extern "C" unsigned long g_0044f7ec;
extern "C" unsigned long g_0044f7f0;
extern "C" unsigned long g_0044f7f4;
extern "C" unsigned long g_0044f7f8;
extern "C" unsigned long g_0044f7fc;
extern "C" unsigned long g_0044f800;
extern "C" unsigned long g_0044f930;
extern "C" unsigned long g_0044f934;
extern "C" unsigned long g_0044f938;
extern "C" unsigned long g_0044f93c;
extern "C" unsigned long g_0044f940;
extern "C" unsigned long g_0044f944;
extern "C" unsigned long g_0044f948;
extern "C" unsigned long g_0044f94c;
extern "C" unsigned long g_0044f950;
extern "C" unsigned long g_0044fa58;
extern "C" unsigned long g_0044fa5c;
extern "C" unsigned long g_0044fa60;
extern "C" unsigned long g_0044fb60;
extern "C" unsigned long g_0044fb64;
extern "C" unsigned long g_0044fc60;
extern "C" unsigned long g_0044fc64;
extern "C" unsigned long g_0044fe54;
extern "C" unsigned long g_0044fe58;
extern "C" unsigned long g_0044fe5c;
extern "C" unsigned long g_004502c8;
extern "C" unsigned long g_004502cc;
extern "C" unsigned long g_004502d0;
extern "C" unsigned long g_004502d4;
extern "C" unsigned long g_004502d8;
extern "C" unsigned long g_004502dc;
extern "C" unsigned long g_004502e0;
extern "C" unsigned long g_004502e4;
extern "C" unsigned long g_004502e8;
extern "C" unsigned long g_004502ec;
extern "C" unsigned long g_00450680;
extern "C" unsigned long g_00450684;
extern "C" unsigned long g_00450688;
extern "C" unsigned long g_0045068c;
extern "C" unsigned long g_00450690;
extern "C" unsigned long g_00450694;
extern "C" unsigned long g_00450698;
extern "C" unsigned long g_0045069c;
extern "C" unsigned long g_004506a0;
extern "C" unsigned long g_00450734;
extern "C" unsigned long g_00450738;
int BLRoleAttribute::getLV() const
{
  return *(undefined4 *)(((int)this) + 4);
}

void BLRoleAttribute::setLV(int p1)
{
  *(undefined4 *)(((int)this) + 4) = p1;
  return;
}

float BLRoleAttribute::getMissionModulus() const
{
  return *(undefined4 *)(((int)this) + 8);
}

void BLRoleAttribute::setMissionModulus(float p1)
{
  *(undefined4 *)(((int)this) + 8) = p1;
  return;
}

BLAttrGroupData* BLRoleAttribute::getAttrGroupData() const
{
  return (BLAttrGroupData*)(*(undefined4 *)(((int)this) + 0xc));
}

void BLRoleAttribute::setAttrGroupData(BLAttrGroupData* p1)
{
  *(undefined4 *)(((int)this) + 0xc) = (undefined4)(intptr_t)p1;
  return;
}

int BLRoleAttribute::getAttrAttack() const
{
  return *(undefined4 *)(((int)this) + 0x10);
}

void BLRoleAttribute::setAttrAttack(int p1)
{
  *(undefined4 *)(((int)this) + 0x10) = p1;
  return;
}

int BLRoleAttribute::getAttrDefense() const
{
  return *(undefined4 *)(((int)this) + 0x14);
}

void BLRoleAttribute::setAttrDefense(int p1)
{
  *(undefined4 *)(((int)this) + 0x14) = p1;
  return;
}

int BLRoleAttribute::getAttrLife() const
{
  return *(undefined4 *)(((int)this) + 0x18);
}

void BLRoleAttribute::setAttrLife(int p1)
{
  *(undefined4 *)(((int)this) + 0x18) = p1;
  return;
}

int BLRoleAttribute::getAttrAttackPer() const
{
  return *(undefined4 *)(((int)this) + 0x1c);
}

void BLRoleAttribute::setAttrAttackPer(int p1)
{
  *(undefined4 *)(((int)this) + 0x1c) = p1;
  return;
}

int BLRoleAttribute::getAttrLifePer() const
{
  return *(undefined4 *)(((int)this) + 0x20);
}

void BLRoleAttribute::setAttrLifePer(int p1)
{
  *(undefined4 *)(((int)this) + 0x20) = p1;
  return;
}

int BLRoleAttribute::getAttrDefensePer() const
{
  return *(undefined4 *)(((int)this) + 0x24);
}

void BLRoleAttribute::setAttrDefensePer(int p1)
{
  *(undefined4 *)(((int)this) + 0x24) = p1;
  return;
}

int BLRoleAttribute::getAttrCrit() const
{
  return *(undefined4 *)(((int)this) + 0x28);
}

void BLRoleAttribute::setAttrCrit(int p1)
{
  *(undefined4 *)(((int)this) + 0x28) = p1;
  return;
}

cocos2d::CCDictionary* BLRoleAttribute::getDicBuffs() const
{
  return (cocos2d::CCDictionary*)(*(undefined4 *)(((int)this) + 0x30));
}

void BLRoleAttribute::setDicBuffs(cocos2d::CCDictionary* p1)
{
  *(undefined4 *)(((int)this) + 0x30) = (undefined4)(intptr_t)p1;
  return;
}

cocos2d::CCDictionary* BLRoleAttribute::getDicEqiups() const
{
  return (cocos2d::CCDictionary*)(*(undefined4 *)(((int)this) + 0x34));
}

void BLRoleAttribute::setDicEqiups(cocos2d::CCDictionary* p1)
{
  *(undefined4 *)(((int)this) + 0x34) = (undefined4)(intptr_t)p1;
  return;
}

cocos2d::CCDictionary* BLRoleAttribute::getDicRunes() const
{
  return (cocos2d::CCDictionary*)(*(undefined4 *)(((int)this) + 0x38));
}

void BLRoleAttribute::setDicRunes(cocos2d::CCDictionary* p1)
{
  *(undefined4 *)(((int)this) + 0x38) = (undefined4)(intptr_t)p1;
  return;
}

cocos2d::CCDictionary* BLRoleAttribute::getDicSuits() const
{
  return (cocos2d::CCDictionary*)(*(undefined4 *)(((int)this) + 0x3c));
}

void BLRoleAttribute::setDicSuits(cocos2d::CCDictionary* p1)
{
  *(undefined4 *)(((int)this) + 0x3c) = (undefined4)(intptr_t)p1;
  return;
}

cocos2d::CCDictionary* BLRoleAttribute::getDicRenascence() const
{
  return (cocos2d::CCDictionary*)(*(undefined4 *)(((int)this) + 0x40));
}

cocos2d::CCDictionary* BLRoleAttribute::getDicImmortals() const
{
  return (cocos2d::CCDictionary*)(*(undefined4 *)(((int)this) + 0x44));
}

void BLRoleAttribute::setDicImmortals(cocos2d::CCDictionary* p1)
{
  *(undefined4 *)(((int)this) + 0x44) = (undefined4)(intptr_t)p1;
  return;
}

bool BLRoleAttribute::getISCrit() const
{
  return *(undefined1 *)(((int)this) + 0x48);
}

void BLRoleAttribute::setISCrit(bool p1)
{
  *(undefined1 *)(((int)this) + 0x48) = p1;
  return;
}

float BLRoleAttribute::getAttrCritDamage() const
{
  return *(undefined4 *)(((int)this) + 0x4c);
}

void BLRoleAttribute::setAttrCritDamage(float p1)
{
  *(undefined4 *)(((int)this) + 0x4c) = p1;
  return;
}

bool BLRoleAttribute::getNeedCheckPetShield() const
{
  return *(undefined1 *)(((int)this) + 0x58);
}

void BLRoleAttribute::setNeedCheckPetShield(bool p1)
{
  *(undefined1 *)(((int)this) + 0x58) = p1;
  return;
}

std::string BLRoleAttribute::getRoleID() const
{ return *(std::string *)(((int)this) + 0x2c); }

void BLRoleAttribute::setRoleID(std::string * p1)
{
  func_0079e834(((int)this) + 0x2c);
  return;
}

void BLRoleAttribute::setLife(long p1)
{
  *(undefined4 *)(((int)this) + 0x50) = p1;
  return;
}

void BLRoleAttribute::hurtValueAction(long p1, bool p2, bool p3)
{
  return;
}

void BLRoleAttribute::usePetShield(long p1)
{
  return;
}

BLRoleAttribute::~BLRoleAttribute()
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
  if (*(int *)((int)this + 4*(3)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(3)) = 0;
  }
  if (*(int *)((int)this + 4*(0xc)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0xc)) = 0;
  }
  if (*(int *)((int)this + 4*(0xd)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0xd)) = 0;
  }
  if (*(int *)((int)this + 4*(0xe)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0xe)) = 0;
  }
  if (*(int *)((int)this + 4*(0xf)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0xf)) = 0;
  }
  if (*(int *)((int)this + 4*(0x10)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x10)) = 0;
  }
  if (*(int *)((int)this + 4*(0x11)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x11)) = 0;
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_1c,((intptr_t)"BLRoleAttribute"),&piStack_20);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_1c);
  func_0079e2bc(&uStack_1c);
  func_0079e2bc(((int)this) + 0xb);
  return;
}


long BLRoleAttribute::getLife()
{
  return *(undefined4 *)(((int)this) + 0x50);
}




undefined4 BLRoleAttribute::getFightAttrValueByType(int p1)
{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (p1 < 8) {
    iVar1 = func_0079e6d0(p1);
    piVar4 = (int *)(iVar1 - ((int)this));
    piVar2 = (int *)((BLGameScene *)this)->shareGameScene();
    iVar1 = (**(code **)(*piVar2 + 0x208))();
    if (iVar1 == 5) {
      uVar3 = (undefined4)((**(code **)(*piVar4 + 0x28))(piVar4));
      piVar2 = (int *)((DataManager *)this)->shareDataManager();
      piVar2 = (int *)(**(code **)(*piVar2 + 0x28))();
      uVar5 = (**(code **)(*piVar2 + 0x148))();
      uVar6 = ((long long)([](int _a){double _d=(double)(int)_a;long long _o;__builtin_memcpy(&_o,&_d,8);return _o;}((int)(uVar3))));
      (void)(((long long)([](long long _a,long long _b){double _x,_y;__builtin_memcpy(&_x,&_a,8);__builtin_memcpy(&_y,&_b,8);double _r=(_x * _y);long long _o;__builtin_memcpy(&_o,&_r,8);return _o;}((((long long)(unsigned)((int)uVar6))|(((long long)(unsigned)((int)((ulonglong)uVar6 >> 0x20)))<<32)),(((long long)(unsigned)((int)uVar5))|(((long long)(unsigned)((int)((ulonglong)uVar5 >> 0x20)))<<32))))));
      uVar3 = (undefined4)(func_0079e8c4());
    }
    else {
      uVar3 = (undefined4)((**(code **)(*piVar4 + 0x28))(piVar4));
    }
  }
  else {
    uVar3 = (undefined4)(0);
  }
  return uVar3;
}


















void BLRoleAttribute::addRenascenceAttr()
{
  BLRoleAttribute::initRenascenceAttr();
  return;
}

// ===== 修复: 补回被误删的函数占位 (26) =====
void BLRoleAttribute::setDicRenascence(cocos2d::CCDictionary* p1)
{
  *(undefined4 *)(((int)this) + 0x40) = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  return;
}

BLRoleAttribute::BLRoleAttribute()
{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [8];
  
  iVar4 = (undefined4)(intptr_t)(g_0044e6f0 + 0x44e5b8);
  *(int *)this = *(int *)(iVar4 + g_0044e6f4) + 8;
  iVar2 = (undefined4)(intptr_t)(g_0044e6fc);
  *(int *)((int)this + 4*(0xb)) = *(int *)(iVar4 + g_0044e6f8) + 0xc;
  *(int *)((int)this + 4*(4)) = 0;
  *(int *)((int)this + 4*(5)) = 0;
  *(int *)((int)this + 4*(6)) = 0;
  *(int *)((int)this + 4*(10)) = 0;
  *(int *)((int)this + 4*(1)) = 1;
  func_0079e2dc(((int)this) + 0xb,iVar2 + 0x44e5e2);
  *(int *)((int)this + 4*(2)) = 0x3f800000;
  *(int *)((int)this + 4*(3)) = 0;
  *(undefined1 *)(((int)this) + 0x12) = 0;
  *(undefined1 *)(((int)this) + 0x16) = 0;
  *(undefined1 *)((int)((int)this) + 0x59) = 0;
  *(int *)((int)this + 4*(0x17)) = 0;
  *(int *)((int)this + 4*(0x18)) = 0;
  *(int *)((int)this + 4*(0x19)) = 0;
  piVar1 = (int *)((long long)::operator new((size_t)(0x40)));
  0 /* ctorZero */;
  iVar2 = (undefined4)(intptr_t)(((BLAttrGroupData *)piVar1)->init());
  if (iVar2 == 0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    piVar1 = (int *)0x0;
  }
  else {
    ((cocos2d::CCObject *)piVar1)->autorelease();
  }
  *(int *)((int)this + 4*(3)) = (int)piVar1;
  if (piVar1 != (int *)0x0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  iVar2 = (undefined4)(intptr_t)(cocos2d::CCDictionary::create());
  *(int *)((int)this + 4*(0xc)) = iVar2;
  if (iVar2 != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  iVar2 = (undefined4)(intptr_t)(cocos2d::CCDictionary::create());
  *(int *)((int)this + 4*(0xd)) = iVar2;
  if (iVar2 != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  iVar2 = (undefined4)(intptr_t)(cocos2d::CCDictionary::create());
  *(int *)((int)this + 4*(0xe)) = iVar2;
  if (iVar2 != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  iVar2 = (undefined4)(intptr_t)(cocos2d::CCDictionary::create());
  *(int *)((int)this + 4*(0xf)) = iVar2;
  if (iVar2 != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  iVar2 = (undefined4)(intptr_t)(cocos2d::CCDictionary::create());
  *(int *)((int)this + 4*(0x10)) = iVar2;
  if (iVar2 != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  iVar2 = (undefined4)(intptr_t)(cocos2d::CCDictionary::create());
  *(int *)((int)this + 4*(0x11)) = iVar2;
  if (iVar2 != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  **(undefined4 **)(iVar4 + g_0044e700) = 0;
  **(undefined4 **)(iVar4 + g_0044e704) = 0;
  **(undefined4 **)(iVar4 + g_0044e708) = 0;
  **(undefined4 **)(iVar4 + g_0044e70c) = 0;
  **(undefined4 **)(iVar4 + g_0044e710) = 0;
  uVar3 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(auStack_1c,((intptr_t)"BLRoleAttribute"),auStack_20);
  ((BLLeakUtils *)uVar3)->addClass((std::string)(char*)auStack_1c);
  func_0079e2bc(auStack_1c);
  return;
}

void BLRoleAttribute::addEquipAttr(EquipBaseData* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLRoleAttribute::addRuneAttr(EquipBaseData* p1)
{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uStack_24;
  
  iVar8 = (undefined4)(intptr_t)(g_0044e8f4 + 0x44e848);
  iVar1 = (undefined4)(intptr_t)((**(code **)(*(int *)(p1) + (0x88)))(p1));
  if (iVar1 != 0) {
    iVar1 = (undefined4)(intptr_t)(*(int *)(iVar1 + 0x14));
    iVar7 = (undefined4)(intptr_t)(iVar1);
    if (iVar1 != 0) {
      iVar7 = (undefined4)(intptr_t)(*(int *)(iVar1 + 0x110));
    }
    while (iVar1 != 0) {
      uVar5 = (undefined4)(*(undefined4 *)(((int)this) + 0x38));
      uVar2 = (undefined4)(((cocos2d::CCDictElement *)iVar1)->getIntKey());
      uStack_24 = (undefined4)(((cocos2d::CCDictionary *)uVar5)->objectForKey(uVar2));
      if (uStack_24 != 0) {
        iVar6 = func_0079e55c(uStack_24,*(undefined4 *)(iVar8 + g_0044e8f8),
                                *(undefined4 *)(iVar8 + g_0044e8fc),0);
        uStack_24 = (undefined4)(0);
        if (iVar6 != 0) {
          uStack_24 = (undefined4)(*(int *)(iVar6 + 0x14));
        }
      }
      iVar6 = 0;
      if (*(int *)(iVar1 + 0x104) != 0) {
        iVar3 = func_0079e55c(*(int *)(iVar1 + 0x104),*(undefined4 *)(iVar8 + g_0044e8f8),
                                *(undefined4 *)(iVar8 + g_0044e8fc),0);
        iVar6 = 0;
        if (iVar3 != 0) {
          iVar6 = (undefined4)(intptr_t)(*(int *)(iVar3 + 0x14));
        }
      }
      uVar4 = (undefined4)(*(undefined4 *)(((int)this) + 0x38));
      uVar2 = (undefined4)(cocos2d::CCInteger::create(iVar6 + uStack_24));
      uVar5 = (undefined4)(((cocos2d::CCDictElement *)iVar1)->getIntKey());
      ((cocos2d::CCDictionary *)uVar4)->setObject((cocos2d::CCObject*)uVar2, uVar5);
      iVar1 = (undefined4)(intptr_t)(iVar7);
      if (iVar7 != 0) {
        iVar7 = (undefined4)(intptr_t)(*(int *)(iVar7 + 0x110));
      }
    }
  }
  return;
}

void BLRoleAttribute::addSuitAttr(SuitEquipEquipItemData* p1)
{
  undefined4 p3 = 0;

  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  uVar6 = (undefined4)(*(int *)(p1 + 0x58) - *(int *)(p1 + 0x54) >> 2);
  iVar1 = 0;
  iVar3 = (undefined4)(intptr_t)(p1);
  if (uVar6 != 0) {
    if (g_0044e9a0 < uVar6) {
      func_0079e5bc();
    }
    iVar1 = (undefined4)(intptr_t)(func_0079e2fc());
  }
  iVar5 = (undefined4)(intptr_t)(*(int *)(p1 + 0x58) - *(int *)(p1 + 0x54) >> 2);
  if (iVar5 != 0) {
    func_0079e68c(iVar1);
  }
  for (iVar7 = 0; iVar7 != iVar5; iVar7 = iVar7 + 1) {
    iVar2 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)*(undefined4 *)(((int)this) + 0x3c))->objectForKey(iVar7));
    iVar8 = 0;
    if (iVar2 != 0) {
      iVar3 = func_0079e55c(iVar2,*(undefined4 *)(g_0044e9a4 + 0x44e950),
                              *(undefined4 *)(g_0044e9a8 + 0x44e952),0,iVar5,iVar3,p3);
      iVar8 = 0;
      if (iVar3 != 0) {
        iVar8 = (undefined4)(intptr_t)(*(int *)(iVar3 + 0x14));
      }
    }
    iVar3 = (undefined4)(intptr_t)(*(int *)(((int)this) + 0x3c));
    iVar2 = (undefined4)(intptr_t)(((long long)([](int _a){float _f;__builtin_memcpy(&_f,&_a,4);return (int)_f;}((int)(*(undefined4 *)(iVar1 + iVar7 * 4))))));
    uVar4 = (undefined4)(cocos2d::CCInteger::create(iVar2 + iVar8));
    ((cocos2d::CCDictionary *)iVar3)->setObject((cocos2d::CCObject*)uVar4, iVar7);
  }
  if (iVar1 != 0) {
    (void)(::operator delete((void *)(iVar1)));
  }
  return;
}

void BLRoleAttribute::hitValue(BLRole* p1, BLHit* p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

int BLRoleAttribute::getAttrValueByType(int p1)
{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uStack_24;
  
  iVar1 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)this)->objectForKey(*(undefined4 *)(*(int *)(((int)this) + 0xc) + 0x14)));
  iVar6 = (undefined4)(intptr_t)(g_0044ecd0 + 0x44ebac);
  iVar7 = 0;
  if (iVar1 != 0) {
    iVar1 = func_0079e55c(iVar1,*(undefined4 *)(iVar6 + g_0044ecd4),
                            *(undefined4 *)(iVar6 + g_0044ecd8),0,
                            *(undefined4 *)(iVar6 + g_0044ecd4),
                            *(undefined4 *)(iVar6 + g_0044ecd8));
    iVar7 = 0;
    if (iVar1 != 0) {
      iVar7 = (undefined4)(intptr_t)(*(int *)(iVar1 + 0x20));
    }
  }
  iVar2 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)*(undefined4 *)(((int)this) + 0x34))->objectForKey(p1));
  iVar1 = 0;
  if (iVar2 != 0) {
    iVar2 = func_0079e55c(iVar2,*(undefined4 *)(iVar6 + g_0044ecd4),
                            *(undefined4 *)(iVar6 + g_0044ecdc),0,iVar7,
                            *(undefined4 *)(iVar6 + g_0044ecd4),
                            *(undefined4 *)(iVar6 + g_0044ecdc));
    iVar1 = 0;
    if (iVar2 != 0) {
      iVar1 = (undefined4)(intptr_t)(*(int *)(iVar2 + 0x14));
    }
  }
  iVar3 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)*(undefined4 *)(((int)this) + 0x38))->objectForKey(p1));
  iVar2 = 0;
  if (iVar3 != 0) {
    iVar3 = func_0079e55c(iVar3,*(undefined4 *)(iVar6 + g_0044ecd4),
                            *(undefined4 *)(iVar6 + g_0044ecdc),0);
    iVar2 = 0;
    if (iVar3 != 0) {
      iVar2 = (undefined4)(intptr_t)(*(int *)(iVar3 + 0x14));
    }
  }
  uStack_24 = (undefined4)(((cocos2d::CCDictionary *)*(undefined4 *)(((int)this) + 0x3c))->objectForKey(p1));
  if (uStack_24 != 0) {
    iVar3 = func_0079e55c(uStack_24,*(undefined4 *)(iVar6 + g_0044ecd4),
                            *(undefined4 *)(iVar6 + g_0044ecdc),0);
    uStack_24 = (undefined4)(0);
    if (iVar3 != 0) {
      uStack_24 = (undefined4)(*(int *)(iVar3 + 0x14));
    }
  }
  iVar4 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)*(undefined4 *)(((int)this) + 0x40))->objectForKey(p1));
  iVar3 = 0;
  if (iVar4 != 0) {
    iVar3 = 0;
    iVar4 = func_0079e55c(iVar4,*(undefined4 *)(iVar6 + g_0044ecd4),
                            *(undefined4 *)(iVar6 + g_0044ecdc),0);
    if (iVar4 != 0) {
      iVar3 = (undefined4)(intptr_t)(*(int *)(iVar4 + 0x14));
    }
  }
  iVar5 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)*(undefined4 *)(((int)this) + 0x44))->objectForKey(p1));
  iVar4 = 0;
  if (iVar5 != 0) {
    iVar6 = func_0079e55c(iVar5,*(undefined4 *)(iVar6 + g_0044ecd4),
                            *(undefined4 *)(iVar6 + g_0044ecdc),0);
    iVar4 = 0;
    if (iVar6 != 0) {
      iVar4 = (undefined4)(intptr_t)(*(int *)(iVar6 + 0x14));
    }
  }
  return iVar7 + iVar1 + iVar2 + uStack_24 + iVar3 + iVar4;
}

void BLRoleAttribute::UpdateHeroProperty(int p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLRoleAttribute::onLvChange(cocos2d::CCObject* p1)
{
  undefined4 p4 = 0;

  undefined4 uVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  
  iVar3 = (undefined4)(intptr_t)(*(int *)((int)this + 4*(1)));
  iVar2 = (undefined4)(intptr_t)(iVar3 + 1);
  *(int *)((int)this + 4*(1)) = iVar2;
  BLAttrGroupData::updateWithLV(*(int *)((int)this + 4*(3)), iVar2);
  iVar2 = (undefined4)(intptr_t)(BLRoleAttribute::getLife());
  if (0 < iVar2) {
    pcVar4 = *(code **)(*(int *)this + 0x3c);
    uVar1 = (undefined4)(BLRoleAttribute::getAttrValueByType(2));
    (*pcVar4)(((int)this),uVar1);
    pcVar4 = *(code **)(*(int *)this + 8);
    uVar1 = (undefined4)(BLRoleAttribute::getAttrValueByType(2));
    (*pcVar4)(((int)this),uVar1);
  }
  return;
}

void BLRoleAttribute::getEquipAttrValueByType(int p1)
{
  undefined4 p4 = 0;

  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)this)->objectForKey(*(undefined4 *)(((int)this) + 0x34)));
  uVar2 = (undefined4)(0);
  if (iVar1 != 0) {
    iVar1 = func_0079e55c(iVar1,*(undefined4 *)(g_0044edc8 + 0x44edb2),
                            *(undefined4 *)(g_0044edcc + 0x44edb4),0,p4);
    uVar2 = (undefined4)(0);
    if (iVar1 != 0) {
      uVar2 = (undefined4)(*(undefined4 *)(iVar1 + 0x14));
    }
  }
  return;
}

void BLRoleAttribute::getRuneAttrValueByType(int p1)
{
  undefined4 p4 = 0;

  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)this)->objectForKey(*(undefined4 *)(((int)this) + 0x38)));
  uVar2 = (undefined4)(0);
  if (iVar1 != 0) {
    iVar1 = func_0079e55c(iVar1,*(undefined4 *)(g_0044edfc + 0x44ede6),
                            *(undefined4 *)(g_0044ee00 + 0x44ede8),0,p4);
    uVar2 = (undefined4)(0);
    if (iVar1 != 0) {
      uVar2 = (undefined4)(*(undefined4 *)(iVar1 + 0x14));
    }
  }
  return;
}

void BLRoleAttribute::getSuitAttrValueByType(int p1)
{
  undefined4 p4 = 0;

  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)this)->objectForKey(*(undefined4 *)(((int)this) + 0x3c)));
  uVar2 = (undefined4)(0);
  if (iVar1 != 0) {
    iVar1 = func_0079e55c(iVar1,*(undefined4 *)(g_0044ee30 + 0x44ee1a),
                            *(undefined4 *)(g_0044ee34 + 0x44ee1c),0,p4);
    uVar2 = (undefined4)(0);
    if (iVar1 != 0) {
      uVar2 = (undefined4)(*(undefined4 *)(iVar1 + 0x14));
    }
  }
  return;
}

void BLRoleAttribute::getRenascenceAttrValueByType(int p1)
{
  undefined4 p4 = 0;

  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)this)->objectForKey(*(undefined4 *)(((int)this) + 0x40)));
  uVar2 = (undefined4)(0);
  if (iVar1 != 0) {
    iVar1 = func_0079e55c(iVar1,*(undefined4 *)(g_0044ee64 + 0x44ee4e),
                            *(undefined4 *)(g_0044ee68 + 0x44ee50),0,p4);
    uVar2 = (undefined4)(0);
    if (iVar1 != 0) {
      uVar2 = (undefined4)(*(undefined4 *)(iVar1 + 0x14));
    }
  }
  return;
}

void BLRoleAttribute::getImmortalsAttrValueByType(int p1)
{
  undefined4 p4 = 0;

  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)this)->objectForKey(*(undefined4 *)(((int)this) + 0x44)));
  uVar2 = (undefined4)(0);
  if (iVar1 != 0) {
    iVar1 = func_0079e55c(iVar1,*(undefined4 *)(g_0044ee98 + 0x44ee82),
                            *(undefined4 *)(g_0044ee9c + 0x44ee84),0,p4);
    uVar2 = (undefined4)(0);
    if (iVar1 != 0) {
      uVar2 = (undefined4)(*(undefined4 *)(iVar1 + 0x14));
    }
  }
  return;
}

void BLRoleAttribute::getRoleAttrValueByType(int p1)
{
  undefined4 p4 = 0;

  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)this)->objectForKey(*(undefined4 *)(*(int *)(((int)this) + 0xc) + 0x14)));
  uVar2 = (undefined4)(0);
  if (iVar1 != 0) {
    iVar1 = func_0079e55c(iVar1,*(undefined4 *)(g_0044eecc + 0x44eeb8),
                            *(undefined4 *)(g_0044eed0 + 0x44eeba),0,p4);
    uVar2 = (undefined4)(0);
    if (iVar1 != 0) {
      uVar2 = (undefined4)(*(undefined4 *)(iVar1 + 0x20));
    }
  }
  return;
}

int BLRoleAttribute::getEquipAndRuneAttrValueByType(int p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void BLRoleAttribute::updateBuffStatus(float p1)
{
  undefined4 p3 = 0;

  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  
  if (*(int *)(((int)this) + 0x30) != 0) {
    iVar4 = *(int *)(*(int *)(((int)this) + 0x30) + 0x14);
    iVar5 = iVar4;
    if (iVar4 != 0) {
      iVar5 = *(int *)(iVar4 + 0x110);
    }
    while (iVar4 != 0) {
      if (*(int *)(iVar4 + 0x104) != 0) {
        func_0079e55c(*(int *)(iVar4 + 0x104),*(undefined4 *)(g_0044ef88 + 0x44ef1a),
                        *(undefined4 *)(g_0044ef8c + 0x44ef1c),0,((int)this),p1,p3);
      }
      uVar1 = (undefined4)(((cocos2d::CCString *)this)->getCString());
      func_0079e824(uVar1,0);
      uVar1 = (undefined4)(func_0079e7e4());
      uVar1 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x - _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar1),(int)(p1)))));
      iVar2 = ((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);return ((_x <= _y)?1:0);}((int)(uVar1),(int)(0))));
      uVar6 = (undefined4)(*(undefined4 *)(((int)this) + 0x30));
      if (iVar2 == 0) {
        uVar7 = ((long long)([](int _a){float _f;__builtin_memcpy(&_f,&_a,4);double _d=(double)_f;long long _o;__builtin_memcpy(&_o,&_d,8);return _o;}((int)(uVar1))));
        uVar1 = (undefined4)((undefined4)((ulonglong)uVar7 >> 0x20));
        uVar1 = (undefined4)(cocos2d::CCString::createWithFormat((char const*)((intptr_t)"%f"), uVar1, (int)uVar7, uVar1));
        uVar3 = (undefined4)(((cocos2d::CCDictElement *)iVar4)->getIntKey());
        ((cocos2d::CCDictionary *)uVar6)->setObject((cocos2d::CCObject*)uVar1, uVar3);
      }
      else {
        ((cocos2d::CCDictionary *)uVar6)->removeObjectForElememt((cocos2d::CCDictElement*)iVar4);
      }
      iVar4 = iVar5;
      if (iVar5 != 0) {
        iVar5 = *(int *)(iVar5 + 0x110);
      }
    }
  }
  return;
}

void BLRoleAttribute::addImmortalsAttr(ImmortalsAttr* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLRoleAttribute::beHitedValue(BLRole* p1, BLHit* p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLRoleAttribute::initEquipsAttr()
{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  int iStack_2c;
  undefined1 auStack_1c [8];
  
  iVar7 = (undefined4)(intptr_t)(g_0044f930 + 0x44f814);
  **(undefined4 **)(iVar7 + g_0044f934) = 0;
  uVar1 = (undefined4)(*(undefined4 *)(((int)this) + 0x34));
  **(undefined4 **)(iVar7 + g_0044f938) = 0;
  **(undefined4 **)(iVar7 + g_0044f93c) = 0;
  **(undefined4 **)(iVar7 + g_0044f940) = 0;
  **(undefined4 **)(iVar7 + g_0044f944) = 0;
  ((cocos2d::CCDictionary *)(uVar1))->removeAllObjects();
  piVar2 = (int *)((DataManager *)this)->shareDataManager();
  piVar2 = (int *)(**(code **)(*(int *)(piVar2) + (0x28)))();
  piVar2 = (int *)(**(code **)(*(int *)(piVar2) + (0x50)))();
  if ((piVar2 != (int *)0x0) && (iVar3 = (**(code **)(*(int *)(piVar2) + (0x18)))(), iVar3 != 0)) {
    iVar3 = (undefined4)(intptr_t)(*(int *)(iVar3 + 0x14));
    iStack_2c = (undefined4)(intptr_t)(iVar3);
    if (iVar3 != 0) {
      iStack_2c = (undefined4)(intptr_t)(*(int *)(iVar3 + 0x110));
    }
    while (iVar3 != 0) {
      if (*(int *)(iVar3 + 0x104) != 0) {
        uVar1 = (undefined4)(*(undefined4 *)(iVar7 + g_0044f948));
        piVar2 = (int *)func_0079e55c(*(int *)(iVar3 + 0x104),uVar1,
                                        *(undefined4 *)(iVar7 + g_0044f94c),0);
        if (piVar2 != (int *)0x0) {
          (**(code **)(*(int *)(piVar2) + (0x38)))(auStack_1c,piVar2);
          iVar3 = mz_SteqIcEN9__gnu_cxx11__enable_ifIXsrSt9__is_charIT_E7__valueEbE6__typeERKSbIS3_St11char_traitsIS3_ESaIS3_EESC_
                            (auStack_1c,((int)this) + 0x2c);
          func_0079e2bc(auStack_1c);
          if (iVar3 != 0) {
            uVar4 = (undefined4)(((DataCacheManager *)this)->shareManager());
            uVar5 = (undefined4)((**(code **)(*(int *)(piVar2) + (0x20)))(piVar2));
            piVar6 = ((void)((DataCacheManager *)(uVar4))->getItemDataByID(uVar5),(int *)0);
            iVar3 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar6) + (0x30)))());
            if (iVar3 == 1) {
              piVar6 = (int *)((DataCacheManager *)this)->shareManager();
              uVar4 = (undefined4)((**(code **)(*(int *)(piVar6) + (0x68)))());
              uVar5 = (undefined4)((**(code **)(*(int *)(piVar2) + (0x20)))(piVar2));
              iVar3 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)(uVar4))->objectForKey(uVar5));
              if ((iVar3 != 0) &&
                 (iVar3 = func_0079e55c(iVar3,uVar1,*(undefined4 *)(iVar7 + g_0044f950),0),
                 iVar3 != 0)) {
                uVar1 = (undefined4)((**(code **)(*(int *)(piVar2) + (0x30)))(piVar2));
                ((EquipBaseData *)(iVar3))->updateAttr(uVar1);
                ((BLRoleAttribute *)(((int)this)))->addEquipAttr((EquipBaseData*)iVar3);
              }
            }
          }
        }
      }
      iVar3 = (undefined4)(intptr_t)(iStack_2c);
      if (iStack_2c != 0) {
        iStack_2c = (undefined4)(intptr_t)(*(int *)(iStack_2c + 0x110));
      }
    }
  }
  return;
}

void BLRoleAttribute::initRunesAttr()
{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  undefined1 auStack_1c [8];
  
  ((cocos2d::CCDictionary *)(*(undefined4 *)(((int)this) + 0x38)))->removeAllObjects();
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  piVar1 = (int *)(**(code **)(*(int *)(piVar1) + (0x28)))();
  piVar1 = (int *)(**(code **)(*(int *)(piVar1) + (0x50)))();
  if ((piVar1 != (int *)0x0) && (iVar2 = (**(code **)(*(int *)(piVar1) + (0x18)))(), iVar2 != 0)) {
    iVar2 = (undefined4)(intptr_t)(*(int *)(iVar2 + 0x14));
    iVar7 = (undefined4)(intptr_t)(iVar2);
    if (iVar2 != 0) {
      iVar7 = (undefined4)(intptr_t)(*(int *)(iVar2 + 0x110));
    }
    while (iVar2 != 0) {
      if (*(int *)(iVar2 + 0x104) != 0) {
        uVar6 = (undefined4)(*(undefined4 *)(g_0044fa58 + 0x44f9b2));
        piVar1 = (int *)func_0079e55c(*(int *)(iVar2 + 0x104),uVar6,
                                        *(undefined4 *)(g_0044fa5c + 0x44f9b6),0);
        if (piVar1 != (int *)0x0) {
          (**(code **)(*(int *)(piVar1) + (0x38)))(auStack_1c,piVar1);
          iVar2 = mz_SteqIcEN9__gnu_cxx11__enable_ifIXsrSt9__is_charIT_E7__valueEbE6__typeERKSbIS3_St11char_traitsIS3_ESaIS3_EESC_
                            (auStack_1c,((int)this) + 0x2c);
          func_0079e2bc(auStack_1c);
          if (iVar2 != 0) {
            uVar3 = (undefined4)(((DataCacheManager *)this)->shareManager());
            uVar4 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x20)))(piVar1));
            piVar5 = ((void)((DataCacheManager *)(uVar3))->getItemDataByID(uVar4),(int *)0);
            iVar2 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar5) + (0x30)))());
            if (iVar2 == 4) {
              piVar5 = (int *)((DataCacheManager *)this)->shareManager();
              uVar3 = (undefined4)((**(code **)(*(int *)(piVar5) + (0x68)))());
              uVar4 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x20)))(piVar1));
              iVar2 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)(uVar3))->objectForKey(uVar4));
              if ((iVar2 != 0) &&
                 (iVar2 = func_0079e55c(iVar2,uVar6,*(undefined4 *)(g_0044fa60 + 0x44fa2e),0),
                 iVar2 != 0)) {
                uVar6 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x30)))(piVar1));
                ((EquipBaseData *)(iVar2))->updateAttr(uVar6);
                ((BLRoleAttribute *)(((int)this)))->addRuneAttr((EquipBaseData*)iVar2);
              }
            }
          }
        }
      }
      iVar2 = (undefined4)(intptr_t)(iVar7);
      if (iVar7 != 0) {
        iVar7 = (undefined4)(intptr_t)(*(int *)(iVar7 + 0x110));
      }
    }
  }
  return;
}

void BLRoleAttribute::initRenascenceAttr()
{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined1 auStack_1c [8];
  
  ((cocos2d::CCDictionary *)(*(undefined4 *)(((int)this) + 0x40)))->removeAllObjects();
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  piVar1 = (int *)(**(code **)(*(int *)(piVar1) + (0x28)))();
  (**(code **)(*(int *)(piVar1) + (0x60)))();
  iVar2 = (undefined4)(intptr_t)(((cocos2d::CCArray *)this)->count());
  iVar6 = 0;
  while( true ) {
    if (iVar2 <= iVar6) break;
    piVar1 = (int *)((DataManager *)this)->shareDataManager();
    piVar1 = (int *)(**(code **)(*(int *)(piVar1) + (0x28)))();
    uVar3 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x60)))());
    iVar4 = (undefined4)(intptr_t)(((cocos2d::CCArray *)(uVar3))->objectAtIndex((unsigned int)iVar6));
    if ((iVar4 != 0) &&
       (piVar1 = (int *)func_0079e55c(iVar4,*(undefined4 *)(g_0044fb60 + 0x44fab6),
                                        *(undefined4 *)(g_0044fb64 + 0x44fab8),0),
       piVar1 != (int *)0x0)) {
      (**(code **)(*(int *)(piVar1) + (0x18)))(auStack_1c,piVar1);
      iVar4 = mz_SteqIcEN9__gnu_cxx11__enable_ifIXsrSt9__is_charIT_E7__valueEbE6__typeERKSbIS3_St11char_traitsIS3_ESaIS3_EESC_
                        (auStack_1c,((int)this) + 0x2c);
      func_0079e2bc(auStack_1c);
      if (iVar4 != 0) {
        iVar5 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar1) + (0x68)))(piVar1));
        iVar4 = 0;
        do {
          if ((iVar4 < 3) && (0 < iVar5)) {
            piVar1 = (int *)((DataCacheManager *)this)->shareManager();
            uVar3 = (undefined4)((**(code **)(*(int *)(piVar1) + (0xd8)))());
            func_0079e53c(auStack_1c,((int)this) + 0x2c);
            uVar3 = (undefined4)(((RoleRenascenceData *)(uVar3))->getItemData((std::string)(char*)auStack_1c));
            func_0079e2bc(auStack_1c);
            uVar3 = ((void)(((RoleRenascenceItemData *)(uVar3))->getTotalAddAttrByType(iVar5, iVar4)),(undefined4)0);
          }
          else {
            uVar3 = (undefined4)(0);
          }
          uVar8 = (undefined4)(*(undefined4 *)(((int)this) + 0x40));
          uVar3 = (undefined4)(cocos2d::CCInteger::create(uVar3));
          iVar7 = (undefined4)(intptr_t)(iVar4 + 1);
          ((cocos2d::CCDictionary *)(uVar8))->setObject((cocos2d::CCObject*)uVar3, iVar4);
          iVar4 = (undefined4)(intptr_t)(iVar7);
        } while (iVar7 != 7);
      }
    }
    iVar6 = (undefined4)(intptr_t)(iVar6 + 1);
  }
  return;
}

void BLRoleAttribute::initSuitAttr()
{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  undefined1 auStack_1c [8];
  
  ((cocos2d::CCDictionary *)(*(undefined4 *)(((int)this) + 0x3c)))->removeAllObjects();
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  piVar1 = (int *)(**(code **)(*(int *)(piVar1) + (0x28)))();
  piVar1 = (int *)(**(code **)(*(int *)(piVar1) + (0x50)))();
  if ((piVar1 != (int *)0x0) && (iVar2 = (**(code **)(*(int *)(piVar1) + (0x18)))(), iVar2 != 0)) {
    iVar2 = (undefined4)(intptr_t)(*(int *)(iVar2 + 0x14));
    iVar6 = (undefined4)(intptr_t)(iVar2);
    if (iVar2 != 0) {
      iVar6 = (undefined4)(intptr_t)(*(int *)(iVar2 + 0x110));
    }
    while (iVar2 != 0) {
      if ((*(int *)(iVar2 + 0x104) != 0) &&
         (piVar1 = (int *)func_0079e55c(*(int *)(iVar2 + 0x104),
                                          *(undefined4 *)(g_0044fc60 + 0x44fbce),
                                          *(undefined4 *)(g_0044fc64 + 0x44fbd0),0),
         piVar1 != (int *)0x0)) {
        (**(code **)(*(int *)(piVar1) + (0x38)))(auStack_1c,piVar1);
        iVar2 = mz_SteqIcEN9__gnu_cxx11__enable_ifIXsrSt9__is_charIT_E7__valueEbE6__typeERKSbIS3_St11char_traitsIS3_ESaIS3_EESC_
                          (auStack_1c,((int)this) + 0x2c);
        func_0079e2bc(auStack_1c);
        if (iVar2 != 0) {
          uVar3 = (undefined4)(((DataCacheManager *)this)->shareManager());
          uVar4 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x20)))(piVar1));
          piVar5 = ((void)((DataCacheManager *)(uVar3))->getItemDataByID(uVar4),(int *)0);
          iVar2 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar5) + (0x30)))());
          if (iVar2 == 8) {
            piVar5 = (int *)((DataCacheManager *)this)->shareManager();
            uVar3 = (undefined4)((**(code **)(*(int *)(piVar5) + (0xb0)))());
            uVar4 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x20)))(piVar1));
            iVar2 = (undefined4)(intptr_t)(((SuitEquipEquipData *)(uVar3))->getItemById(uVar4));
            if (iVar2 != 0) {
              uVar3 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x30)))(piVar1));
              ((SuitEquipEquipItemData *)(iVar2))->updateAttr(uVar3);
              ((BLRoleAttribute *)(((int)this)))->addSuitAttr((SuitEquipEquipItemData*)iVar2);
            }
          }
        }
      }
      iVar2 = (undefined4)(intptr_t)(iVar6);
      if (iVar6 != 0) {
        iVar6 = (undefined4)(intptr_t)(*(int *)(iVar6 + 0x110));
      }
    }
  }
  return;
}

void BLRoleAttribute::ResetHeroProperty()
{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 auStack_1c [8];
  
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  iVar5 = (undefined4)(intptr_t)(g_0044fe54);
  piVar1 = (int *)(**(code **)(*(int *)(piVar1) + (0x28)))();
  iVar5 = (undefined4)(intptr_t)(iVar5 + 0x44fc7e);
  iVar2 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar1) + (0x158)))());
  if (iVar2 == 1) {
    piVar1 = (int *)((BLMission *)this)->currentMission();
    piVar1 = (int *)(**(code **)(*(int *)(piVar1) + (0x208)))();
    uVar3 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x110)))());
    iVar2 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)(uVar3))->objectForKey(0));
    if ((iVar2 == 0) ||
       (iVar2 = func_0079e55c(iVar2,*(undefined4 *)(iVar5 + g_0044fe58),
                                *(undefined4 *)(iVar5 + g_0044fe5c),0,
                                *(undefined4 *)(iVar5 + g_0044fe58),
                                *(undefined4 *)(iVar5 + g_0044fe5c)), iVar2 == 0)) {
      uVar3 = (undefined4)(0);
    }
    else {
      uVar3 = (undefined4)(((cocos2d::CCString *)this)->getCString());
      func_0079e824(uVar3,0);
      uVar3 = (undefined4)(func_0079e7e4());
    }
    piVar1 = (int *)((BLMission *)this)->currentMission();
    piVar1 = (int *)(**(code **)(*(int *)(piVar1) + (0x208)))();
    uVar4 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x110)))());
    ConvertToString<float>(auStack_1c, uVar3, 0);
    uVar3 = (undefined4)(cocos2d::CCString::create(*(const std::string *)(void *)auStack_1c));
    ((cocos2d::CCDictionary *)(uVar4))->setObject((cocos2d::CCObject*)uVar3, 0);
    func_0079e2bc(auStack_1c);
  }
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  piVar1 = (int *)(**(code **)(*(int *)(piVar1) + (0x28)))();
  iVar2 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar1) + (0x158)))());
  if (iVar2 == 2) {
    piVar1 = (int *)((BLMission *)this)->currentMission();
    piVar1 = (int *)(**(code **)(*(int *)(piVar1) + (0x208)))();
    uVar3 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x110)))());
    iVar2 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)(uVar3))->objectForKey(1));
    if ((iVar2 == 0) ||
       (iVar2 = func_0079e55c(iVar2,*(undefined4 *)(iVar5 + g_0044fe58),
                                *(undefined4 *)(iVar5 + g_0044fe5c),0,
                                *(undefined4 *)(iVar5 + g_0044fe58),
                                *(undefined4 *)(iVar5 + g_0044fe5c)), iVar2 == 0)) {
      uVar3 = (undefined4)(0);
    }
    else {
      uVar3 = (undefined4)(((cocos2d::CCString *)this)->getCString());
      func_0079e824(uVar3,0);
      uVar3 = (undefined4)(func_0079e7e4());
    }
    piVar1 = (int *)((BLMission *)this)->currentMission();
    piVar1 = (int *)(**(code **)(*(int *)(piVar1) + (0x208)))();
    uVar4 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x110)))());
    ConvertToString<float>(auStack_1c, uVar3, 0);
    uVar3 = (undefined4)(cocos2d::CCString::create(*(const std::string *)(void *)auStack_1c));
    ((cocos2d::CCDictionary *)(uVar4))->setObject((cocos2d::CCObject*)uVar3, 1);
    func_0079e2bc(auStack_1c);
  }
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  piVar1 = (int *)(**(code **)(*(int *)(piVar1) + (0x28)))();
  iVar2 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar1) + (0x158)))());
  if (iVar2 == 3) {
    piVar1 = (int *)((BLMission *)this)->currentMission();
    piVar1 = (int *)(**(code **)(*(int *)(piVar1) + (0x208)))();
    uVar3 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x110)))());
    iVar2 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)(uVar3))->objectForKey(2));
    if ((iVar2 == 0) ||
       (iVar5 = func_0079e55c(iVar2,*(undefined4 *)(iVar5 + g_0044fe58),
                                *(undefined4 *)(iVar5 + g_0044fe5c),0,
                                *(undefined4 *)(iVar5 + g_0044fe58),
                                *(undefined4 *)(iVar5 + g_0044fe5c)), iVar5 == 0)) {
      uVar3 = (undefined4)(0);
    }
    else {
      uVar3 = (undefined4)(((cocos2d::CCString *)this)->getCString());
      func_0079e824(uVar3,0);
      uVar3 = (undefined4)(func_0079e7e4());
    }
    piVar1 = (int *)((BLMission *)this)->currentMission();
    piVar1 = (int *)(**(code **)(*(int *)(piVar1) + (0x208)))();
    uVar4 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x110)))());
    ConvertToString<float>(auStack_1c, uVar3, 0);
    uVar3 = (undefined4)(cocos2d::CCString::create(*(const std::string *)(void *)auStack_1c));
    ((cocos2d::CCDictionary *)(uVar4))->setObject((cocos2d::CCObject*)uVar3, 2);
    func_0079e2bc(auStack_1c);
    return;
  }
  return;
}

void BLRoleAttribute::initImmortalsAttr()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLRoleAttribute::initWith(std::string * p1, std::string * p2, int p3)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
