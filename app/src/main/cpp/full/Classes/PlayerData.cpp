#include "PlayerData.h"
#include "CCNotificationCenter.h"
#include "CCInteger.h"
#include "CCObject.h"
#include "CCDictionary.h"
#include "CCArray.h"
#include "RoleInfoItemData.h"
#include "RoleData.h"
#include "BLAttackHurtData.h"
#include "BLLeakUtils.h"
#include "BLMonsterData.h"
#include "BLRoleAttribute.h"
#include "DataCacheManager.h"
#include "DataManager.h"
#include "EquipPageData.h"
#include "ImmortalsRoleData.h"
#include "RoleInfoData.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <new>   // ghost_fix.js 自动补齐
using namespace cocos2d;
// 兜底声明
extern "C" long long mz_SteqIcEN9__gnu_cxx11__enable_ifIXsrSt9__is_charIT_E7__valueEbE6__typeERKSbIS3_St11char_traitsIS3_ESaIS3_EESC_(...);

extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e31c(...);
extern "C" long long func_0079e34c(...);
extern "C" long long func_0079e3cc(...);
extern "C" long long func_0079e3dc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4bc(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long func_0079e4ec(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e62c(...);
extern "C" long long func_0079e724(...);
extern "C" long long func_0079e734(...);
extern "C" long long func_0079e744(...);
extern "C" long long func_0079e784(...);
extern "C" long long func_0079e814(...);
extern "C" long long func_0079e8c4(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long _DAT_004a6960;
extern "C" unsigned long _DAT_004a6964;
extern "C" unsigned long _DAT_004a6968;
extern "C" unsigned long _DAT_004a696c;
extern "C" unsigned long _DAT_004a6970;
extern "C" unsigned long _DAT_004a6974;
extern "C" unsigned long _DAT_004a6978;
extern "C" unsigned long _DAT_004a697c;
extern "C" unsigned long _DAT_004a6980;
extern "C" unsigned long _DAT_004a6984;
extern "C" unsigned long _DAT_004a6988;
extern "C" unsigned long _DAT_004a698c;
extern "C" unsigned long _DAT_004a6990;
extern "C" unsigned long _DAT_004a6994;
extern "C" unsigned long _DAT_004a6998;
extern "C" unsigned long _DAT_004a699c;
extern "C" unsigned long _DAT_004a69a0;
extern "C" unsigned long _DAT_004a69a4;
extern "C" unsigned long _DAT_004a69a8;
extern "C" unsigned long _DAT_004a69ac;
extern "C" unsigned long _DAT_004a69b0;
extern "C" unsigned long _DAT_004a69b4;
extern "C" unsigned long _DAT_004a69b8;
extern "C" unsigned long _DAT_004a69bc;
extern "C" unsigned long _DAT_004a69c0;
extern "C" unsigned long _DAT_004a69c4;
extern "C" unsigned long _DAT_004a6c70;
extern "C" unsigned long _DAT_004a6c74;
extern "C" unsigned long _DAT_004a6c78;
extern "C" unsigned long _DAT_004a6e24;
extern "C" unsigned long _DAT_004a6e28;
extern "C" unsigned long _DAT_004a6e2c;
extern "C" unsigned long _DAT_004a6f80;
extern "C" unsigned long _DAT_004a6f84;
extern "C" unsigned long _DAT_004a7058;
extern "C" unsigned long _DAT_004a705c;
extern "C" unsigned long _DAT_004a7270;
extern "C" unsigned long _DAT_004a7274;
extern "C" unsigned long _DAT_004a7278;
extern "C" unsigned long _DAT_004a727c;
extern "C" unsigned long _DAT_004a7280;
extern "C" unsigned long _DAT_004a7284;
extern "C" unsigned long _DAT_004a7288;
extern "C" unsigned long _DAT_004a728c;
extern "C" unsigned long _DAT_004a7290;
extern "C" unsigned long _DAT_004a7294;
extern "C" unsigned long _DAT_004a7298;
extern "C" unsigned long _DAT_004a729c;
extern "C" unsigned long _DAT_004a72a0;
extern "C" unsigned long _DAT_004a72a4;
extern "C" unsigned long _DAT_004a72a8;
extern "C" unsigned long _DAT_004a72ac;
extern "C" unsigned long _DAT_004a72b0;
extern "C" unsigned long _DAT_004a72b4;
extern "C" unsigned long _DAT_004a72b8;
extern "C" unsigned long _DAT_004a72bc;
extern "C" unsigned long g_004a6960;
extern "C" unsigned long g_004a6964;
extern "C" unsigned long g_004a6968;
extern "C" unsigned long g_004a696c;
extern "C" unsigned long g_004a6970;
extern "C" unsigned long g_004a6974;
extern "C" unsigned long g_004a6978;
extern "C" unsigned long g_004a697c;
extern "C" unsigned long g_004a6980;
extern "C" unsigned long g_004a6984;
extern "C" unsigned long g_004a6988;
extern "C" unsigned long g_004a698c;
extern "C" unsigned long g_004a6990;
extern "C" unsigned long g_004a6994;
extern "C" unsigned long g_004a6998;
extern "C" unsigned long g_004a699c;
extern "C" unsigned long g_004a69a0;
extern "C" unsigned long g_004a69a4;
extern "C" unsigned long g_004a69a8;
extern "C" unsigned long g_004a69ac;
extern "C" unsigned long g_004a69b0;
extern "C" unsigned long g_004a69b4;
extern "C" unsigned long g_004a69b8;
extern "C" unsigned long g_004a69bc;
extern "C" unsigned long g_004a69c0;
extern "C" unsigned long g_004a69c4;
extern "C" unsigned long g_004a6c70;
extern "C" unsigned long g_004a6c74;
extern "C" unsigned long g_004a6c78;
extern "C" unsigned long g_004a6e24;
extern "C" unsigned long g_004a6e28;
extern "C" unsigned long g_004a6e2c;
extern "C" unsigned long g_004a6f80;
extern "C" unsigned long g_004a6f84;
extern "C" unsigned long g_004a7058;
extern "C" unsigned long g_004a705c;
extern "C" unsigned long g_004a7270;
extern "C" unsigned long g_004a7274;
extern "C" unsigned long g_004a7278;
extern "C" unsigned long g_004a727c;
extern "C" unsigned long g_004a7280;
extern "C" unsigned long g_004a7284;
extern "C" unsigned long g_004a7288;
extern "C" unsigned long g_004a728c;
extern "C" unsigned long g_004a7290;
extern "C" unsigned long g_004a7294;
extern "C" unsigned long g_004a7298;
extern "C" unsigned long g_004a729c;
extern "C" unsigned long g_004a72a0;
extern "C" unsigned long g_004a72a4;
extern "C" unsigned long g_004a72a8;
extern "C" unsigned long g_004a72ac;
extern "C" unsigned long g_004a72b0;
extern "C" unsigned long g_004a72b4;
extern "C" unsigned long g_004a72b8;
extern "C" unsigned long g_004a72bc;
int * PlayerData::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x50)));
  0 /* ctorZero */;
  iVar2 = ((PlayerData *)piVar1)->init();
  if (iVar2 == 0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    piVar1 = (int *)0x0;
  }
  else {
    ((cocos2d::CCObject *)piVar1)->autorelease();
  }
  return (int *)(piVar1);
}

RoleData* PlayerData::getRoleData() const
{
  return (RoleData*)(*(undefined4 *)(((int)this) + 0x14));
}

void PlayerData::setRoleData(RoleData* p1)
{
  *(undefined4 *)(((int)this) + 0x14) = (undefined4)(intptr_t)p1;
  return;
}

RoleInfoItemData* PlayerData::getRoleInfoData() const
{
  return (RoleInfoItemData*)(*(undefined4 *)(((int)this) + 0x18));
}

cocos2d::CCArray* PlayerData::getArrayEquipPage() const
{
  return (cocos2d::CCArray*)(*(undefined4 *)(((int)this) + 0x1c));
}

void PlayerData::setArrayEquipPage(cocos2d::CCArray* p1)
{
  *(undefined4 *)(((int)this) + 0x1c) = (undefined4)(intptr_t)p1;
  return;
}

cocos2d::CCArray* PlayerData::getArrayRunePage() const
{
  return (cocos2d::CCArray*)(*(undefined4 *)(((int)this) + 0x20));
}

void PlayerData::setArrayRunePage(cocos2d::CCArray* p1)
{
  *(undefined4 *)(((int)this) + 0x20) = (undefined4)(intptr_t)p1;
  return;
}

cocos2d::CCArray* PlayerData::getArraySuitPage() const
{
  return (cocos2d::CCArray*)(*(undefined4 *)(((int)this) + 0x24));
}

void PlayerData::setArraySuitPage(cocos2d::CCArray* p1)
{
  *(undefined4 *)(((int)this) + 0x24) = (undefined4)(intptr_t)p1;
  return;
}

BLRoleAttribute* PlayerData::getRoleAttribute() const
{
  return (BLRoleAttribute*)(*(undefined4 *)(((int)this) + 0x28));
}

void PlayerData::setRoleAttribute(BLRoleAttribute* p1)
{
  *(undefined4 *)(((int)this) + 0x28) = (undefined4)(intptr_t)p1;
  return;
}

cocos2d::CCDictionary* PlayerData::getDicSkills() const
{
  return (cocos2d::CCDictionary*)(*(undefined4 *)(((int)this) + 0x2c));
}

void PlayerData::setDicSkills(cocos2d::CCDictionary* p1)
{
  *(undefined4 *)(((int)this) + 0x2c) = (undefined4)(intptr_t)p1;
  return;
}

int PlayerData::getCombat() const
{
  return *(undefined4 *)(((int)this) + 0x34);
}

void PlayerData::setCombat(int p1)
{
  *(undefined4 *)(((int)this) + 0x34) = p1;
  return;
}

void PlayerData::setAttribute(std::string p1)
{
  func_0079e52c(((int)this) + 0x30);
  return;
}

void PlayerData::setRoleInfoData(RoleInfoItemData* p1)
{
  if (*(int *)(((int)this) + 0x18) != (int)(intptr_t)p1) {
    if ((int)(intptr_t)p1 != 0) {
      ((cocos2d::CCObject *)p1)->retain();
    }
    if (*(int *)(((int)this) + 0x18) != 0) {
      ((cocos2d::CCObject *)this)->release();
    }
    *(int *)(((int)this) + 0x18) = (undefined4)(intptr_t)p1;
  }
  return;
}

std::string PlayerData::getAttribute() const
{ return *(std::string *)(((int)this) + 0x30); }




bool PlayerData::init()
{
  return 1;
}


int PlayerData::getImmortalsData()
{
  return ((int)this) + 0x38;
}




PlayerData::~PlayerData()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

PlayerData::PlayerData()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

// ===== 修复: 补回被误删的函数占位 (9) =====
void PlayerData::onCalculateCombat(cocos2d::CCObject* p1)
{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  code *pcVar9;
  undefined4 uVar10;
  int iVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  int iStack_50;
  undefined4 uStack_4c;
  undefined1 auStack_34 [4];
  undefined4 *puStack_30;
  int iStack_2c;
  undefined4 *puStack_24;
  int iStack_20;
  
  uVar1 = (undefined4)(((BLRoleAttribute *)(*(int *)((int)this + 4*(10))))->getFightAttrValueByType(0));
  uVar2 = (undefined4)(((BLRoleAttribute *)(*(int *)((int)this + 4*(10))))->getFightAttrValueByType(1));
  uVar3 = (undefined4)(((BLRoleAttribute *)(*(int *)((int)this + 4*(10))))->getFightAttrValueByType(2));
  (**(code **)(*(int *)*(int *)((int)this + 4*(10)) + 0x60))(&puStack_24);
  iVar4 = (undefined4)(intptr_t)(func_0079e4bc(&puStack_24,"1001"));
  func_0079e2bc(&puStack_24);
  if (iVar4 == 0) {
    cocos2d::CCLog((char const*)"==2222=m_nCombat===%d", *(int *)((int)this + 4*(0xd)));
  }
  if (*(int *)((int)this + 4*(0xb)) == 0) {
    uStack_4c = (undefined4)(0);
  }
  else {
    iVar4 = (undefined4)(intptr_t)(*(int *)(*(int *)((int)this + 4*(0xb)) + 0x14));
    iStack_50 = (undefined4)(intptr_t)(iVar4);
    if (iVar4 != 0) {
      iStack_50 = (undefined4)(intptr_t)(*(int *)(iVar4 + 0x110));
    }
    uStack_4c = (undefined4)(0);
    while (iVar4 != 0) {
      if ((*(int *)(iVar4 + 0x104) != 0) &&
         (piVar5 = (int *)func_0079e55c(*(int *)(iVar4 + 0x104),
                                          *(undefined4 *)(g_004a6988 + 0x4a668e),
                                          *(undefined4 *)(g_004a698c + 0x4a6690),0),
         piVar5 != 0)) {
        (**(code **)(*(int *)(piVar5) + (0x20)))(&puStack_24,piVar5);
        func_0079e814(auStack_34,&puStack_24,0,1);
        func_0079e2bc(&puStack_24);
        iVar4 = (undefined4)(intptr_t)(func_0079e4bc(auStack_34,g_004a6990 + 0x4a66c4));
        if (iVar4 == 0) {
          piVar6 = (int *)(**(code **)(*(int *)this + 0x18))(((int)this));
          pcVar9 = *(code **)(*piVar6 + 0x48);
LAB_004a672e:
          uVar7 = (undefined4)((*pcVar9)());
        }
        else {
          iVar4 = (undefined4)(intptr_t)(func_0079e4bc(auStack_34,g_004a6994 + 0x4a66e2));
          if (iVar4 == 0) {
            piVar6 = (int *)(**(code **)(*(int *)this + 0x18))(((int)this));
            pcVar9 = *(code **)(*piVar6 + 0x50);
            goto LAB_004a672e;
          }
          iVar4 = (undefined4)(intptr_t)(func_0079e4bc(auStack_34,g_004a6998 + 0x4a66fe));
          if (iVar4 == 0) {
            piVar6 = (int *)(**(code **)(*(int *)this + 0x18))(((int)this));
            pcVar9 = *(code **)(*piVar6 + 0x58);
            goto LAB_004a672e;
          }
          iVar4 = (undefined4)(intptr_t)(func_0079e4bc(auStack_34,g_004a699c + 0x4a671a));
          uVar7 = (undefined4)(1);
          if (iVar4 == 0) {
            piVar6 = (int *)(**(code **)(*(int *)this + 0x18))(((int)this));
            pcVar9 = *(code **)(*piVar6 + 0x60);
            goto LAB_004a672e;
          }
        }
        piVar6 = (int *)((DataManager *)this)->shareDataManager();
        iVar4 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar6) + (0x118)))());
        if (iVar4 == 0xe) {
          uVar7 = (undefined4)(10);
        }
        (**(code **)(*(int *)(piVar5) + (0x80)))(&puStack_30,piVar5);
        puVar8 = puStack_30;
        if (iStack_2c - (int)puStack_30 >> 2 == 0) {
          puVar8 = (undefined4 *)func_0079e784("vector::_M_range_check: __n (which is %zu) >= this->size() (which is %zu)",0);
        }
        uVar10 = (undefined4)(*puVar8);
        func_0079e2cc();
        iVar4 = (undefined4)(intptr_t)(func_0079e4ec(uVar10,0));
        if (iVar4 != 0) {
          uVar7 = ((void)(((BLAttackHurtData *)(piVar5))->getValueBySkillLV(0, uVar7, 0x3f800000)),(undefined4)0);
          (**(code **)(*(int *)(piVar5) + (0x80)))(&puStack_24,piVar5);
          puVar8 = puStack_24;
          if (iStack_20 - (int)puStack_24 >> 2 == 0) {
            func_0079e784("vector::_M_range_check: __n (which is %zu) >= this->size() (which is %zu)",0);
          }
          uVar12 = (undefined4)(intptr_t)(func_0079e734(uStack_4c));
          func_0079e4dc(uVar7,*puVar8);
          uVar13 = (undefined4)(intptr_t)(func_0079e62c());
          uVar13 = func_0079e724((int)uVar13,(int)((ulonglong)uVar13 >> 0x20),g_004a6960,
                                   g_004a6964);
          func_0079e744((int)uVar12,(int)((ulonglong)uVar12 >> 0x20),(int)uVar13,
                          (int)((ulonglong)uVar13 >> 0x20));
          uStack_4c = (undefined4)(func_0079e8c4());
          func_0079e2cc(puVar8);
        }
        func_0079e2bc(auStack_34);
      }
      iVar4 = (undefined4)(intptr_t)(iStack_50);
      if (iStack_50 != 0) {
        iStack_50 = (undefined4)(intptr_t)(*(int *)(iStack_50 + 0x110));
      }
    }
  }
  iVar11 = (undefined4)(intptr_t)(*(int *)((int)this + 4*(0xd)));
  (**(code **)(*(int *)*(int *)((int)this + 4*(10)) + 0x60))(&puStack_24);
  iVar4 = (undefined4)(intptr_t)(func_0079e4bc(&puStack_24,"1001"));
  func_0079e2bc(&puStack_24);
  if (iVar4 == 0) {
    cocos2d::CCLog((char const*)"==2=m_nCombat===%d", *(int *)((int)this + 4*(0xd)));
  }
  uVar12 = (undefined4)(intptr_t)(func_0079e734(uVar1));
  uVar12 = (undefined4)(intptr_t)(func_0079e724((int)uVar12,(int)((ulonglong)uVar12 >> 0x20),g_004a6968,g_004a696c));
  uVar13 = (undefined4)(intptr_t)(func_0079e734(uVar2));
  uVar13 = (undefined4)(intptr_t)(func_0079e724((int)uVar13,(int)((ulonglong)uVar13 >> 0x20),g_004a6970,g_004a6974));
  uVar12 = func_0079e744((int)uVar12,(int)((ulonglong)uVar12 >> 0x20),(int)uVar13,
                           (int)((ulonglong)uVar13 >> 0x20));
  uVar13 = (undefined4)(intptr_t)(func_0079e734(uVar3));
  uVar13 = (undefined4)(intptr_t)(func_0079e724((int)uVar13,(int)((ulonglong)uVar13 >> 0x20),g_004a6978,g_004a697c));
  uVar12 = func_0079e744((int)uVar12,(int)((ulonglong)uVar12 >> 0x20),(int)uVar13,
                           (int)((ulonglong)uVar13 >> 0x20));
  uVar13 = (undefined4)(intptr_t)(func_0079e734(uStack_4c));
  func_0079e744((int)uVar12,(int)((ulonglong)uVar12 >> 0x20),(int)uVar13,
                  (int)((ulonglong)uVar13 >> 0x20));
  iVar4 = (undefined4)(intptr_t)(func_0079e8c4());
  *(int *)((int)this + 4*(0xd)) = iVar4;
  (**(code **)(*(int *)*(int *)((int)this + 4*(10)) + 0x60))(&puStack_24);
  iVar4 = (undefined4)(intptr_t)(func_0079e4bc(&puStack_24,"1001"));
  func_0079e2bc(&puStack_24);
  if (iVar4 == 0) {
    cocos2d::CCLog((char const*)"===m_nCombat=%d=nAttack=%d===nDefense=%d=nLife=%d==", *(int *)((int)this + 4*(0xd)), uVar1, uVar2, uVar3);
  }
  uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)(uVar1))->postNotification((char const*)"EVENT_COMBAT_CHANGE");
  if ((iVar11 != 0) && (iVar11 != *(int *)((int)this + 4*(0xd)))) {
    uVar1 = (undefined4)(cocos2d::CCDictionary::create());
    uVar2 = (undefined4)(cocos2d::CCInteger::create(iVar11));
    func_0079e45c(&puStack_24,"LAST",&puStack_30);
    ((cocos2d::CCDictionary *)(uVar1))->setObject((cocos2d::CCObject*)uVar2, *(std::string const*)&puStack_24);
    func_0079e2bc(&puStack_24);
    uVar2 = (undefined4)(cocos2d::CCInteger::create(*(int *)((int)this + 4*(0xd))));
    func_0079e45c(&puStack_24,"NOW",&puStack_30);
    ((cocos2d::CCDictionary *)(uVar1))->setObject((cocos2d::CCObject*)uVar2, *(std::string const*)&puStack_24);
    func_0079e2bc(&puStack_24);
    uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
    ((cocos2d::CCNotificationCenter *)(uVar2))->postNotification((char const*)"EVENT_COMBAT_WORD", (cocos2d::CCObject*)uVar1);
  }
  return;
}

void PlayerData::initRenascenceData(cocos2d::CCObject* p1)
{
  undefined4 p3 = 0;

  undefined4 uVar1;
  undefined4 uVar2;
  int iStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  uVar2 = (undefined4)(*(undefined4 *)(((int)this) + 0x28));
  iStack_20 = (undefined4)(intptr_t)((int *)((int)this));
  uStack_1c = (undefined4)(p1);
  uStack_18 = (undefined4)(p3);
  (**(code **)(**(int **)(((int)this) + 0x14) + 0x18))(&iStack_20);
  func_0079e53c(&uStack_1c,((int)this) + 0x30);
  uVar1 = (undefined4)((**(code **)(**(int **)(((int)this) + 0x14) + 0x20))());
  ((BLRoleAttribute *)uVar2)->initWith((std::string *)(char *)iStack_20, (std::string *)(char *)uStack_1c, uVar1);
  func_0079e2bc(&uStack_1c);
  func_0079e2bc(&iStack_20);
  PlayerData::onCalculateCombat(0);
  return;
}

void PlayerData::onLvChange(cocos2d::CCObject* p1)
{
  undefined4 p3 = 0;

  undefined4 uVar1;
  undefined4 uVar2;
  int iStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  uVar2 = (undefined4)(*(undefined4 *)(((int)this) + 0x28));
  iStack_20 = (undefined4)(intptr_t)((int *)((int)this));
  uStack_1c = (undefined4)(p1);
  uStack_18 = (undefined4)(p3);
  (**(code **)(**(int **)(((int)this) + 0x14) + 0x18))(&iStack_20);
  func_0079e53c(&uStack_1c,((int)this) + 0x30);
  uVar1 = (undefined4)((**(code **)(**(int **)(((int)this) + 0x14) + 0x20))());
  ((BLRoleAttribute *)uVar2)->initWith((std::string *)(char *)iStack_20, (std::string *)(char *)uStack_1c, uVar1);
  func_0079e2bc(&uStack_1c);
  func_0079e2bc(&iStack_20);
  PlayerData::onCalculateCombat(0);
  return;
}

undefined8 PlayerData::onUpdateCombat()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;

  undefined4 uVar1;
  undefined4 uVar2;
  int iStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  uVar2 = (undefined4)(*(undefined4 *)(((int)this) + 0x28));
  iStack_20 = (undefined4)(intptr_t)((int *)((int)this));
  uStack_1c = (undefined4)(p2);
  uStack_18 = (undefined4)(p3);
  (**(code **)(**(int **)(((int)this) + 0x14) + 0x18))(&iStack_20);
  func_0079e53c(&uStack_1c,((int)this) + 0x30);
  uVar1 = (undefined4)((**(code **)(**(int **)(((int)this) + 0x14) + 0x20))());
  ((BLRoleAttribute *)uVar2)->initWith((std::string *)(char *)iStack_20, (std::string *)(char *)uStack_1c, uVar1);
  func_0079e2bc(&uStack_1c);
  func_0079e2bc(&iStack_20);
  PlayerData::onCalculateCombat(0);
  return ghidra_CONCAT44(uStack_1c,iStack_20);
}

void PlayerData::initRunesData(cocos2d::CCObject* p1)
{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  int *piVar7;
  undefined4 uVar8;
  int iVar9;
  int iStack_34;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [8];
  
  ((cocos2d::CCArray *)(*(undefined4 *)(((int)this) + 0x20)))->removeAllObjects();
  iStack_34 = 1;
  do {
    piVar1 = (int *)((EquipPageData *)this)->create();
    ((cocos2d::CCArray *)(*(undefined4 *)(((int)this) + 0x20)))->addObject((cocos2d::CCObject*)piVar1);
    piVar2 = (int *)((DataManager *)this)->shareDataManager();
    piVar2 = (int *)(**(code **)(*(int *)(piVar2) + (0x28)))();
    piVar2 = (int *)(**(code **)(*(int *)(piVar2) + (0x50)))();
    iVar3 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar2) + (0x18)))());
    if (iVar3 != 0) {
      iVar3 = (undefined4)(intptr_t)(*(int *)(iVar3 + 0x14));
      iVar9 = (undefined4)(intptr_t)(iVar3);
      if (iVar3 != 0) {
        iVar9 = (undefined4)(intptr_t)(*(int *)(iVar3 + 0x110));
      }
      while (iVar3 != 0) {
        if (*(int *)(iVar3 + 0x104) != 0) {
          uVar8 = (undefined4)(*(undefined4 *)(g_004a6c70 + 0x4a6b9a));
          piVar2 = (int *)func_0079e55c(*(int *)(iVar3 + 0x104),uVar8,
                                          *(undefined4 *)(g_004a6c74 + 0x4a6b9e),0);
          if (piVar2 != 0) {
            (**(code **)(*(int *)(piVar2) + (0x38)))(auStack_20,piVar2);
            (**(code **)(**(int **)(((int)this) + 0x14) + 0x18))(auStack_1c);
            iVar3 = mz_SteqIcEN9__gnu_cxx11__enable_ifIXsrSt9__is_charIT_E7__valueEbE6__typeERKSbIS3_St11char_traitsIS3_ESaIS3_EESC_
                              (auStack_20,auStack_1c);
            func_0079e2bc(auStack_1c);
            func_0079e2bc(auStack_20);
            if (iVar3 != 0) {
              uVar4 = (undefined4)(((DataCacheManager *)this)->shareManager());
              uVar5 = (undefined4)((**(code **)(*(int *)(piVar2) + (0x20)))(piVar2));
              piVar6 = ((void)((DataCacheManager *)(uVar4))->getItemDataByID(uVar5),(int *)0);
              piVar7 = (int *)((DataCacheManager *)this)->shareManager();
              uVar4 = (undefined4)((**(code **)(*(int *)(piVar7) + (0x68)))());
              uVar5 = (undefined4)((**(code **)(*(int *)(piVar2) + (0x20)))(piVar2));
              iVar3 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)(uVar4))->objectForKey(uVar5));
              if ((((iVar3 != 0) &&
                   (piVar7 = (int *)func_0079e55c(iVar3,uVar8,
                                                    *(undefined4 *)(g_004a6c78 + 0x4a6c2e),0),
                   piVar7 != 0)) &&
                  (iVar3 = (**(code **)(*(int *)(piVar7) + (0x30)))(), iVar3 == iStack_34)) &&
                 (iVar3 = (**(code **)(*(int *)(piVar6) + (0x30)))(piVar6), iVar3 == 4)) {
                uVar8 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x18)))(piVar1));
                uVar4 = (undefined4)((**(code **)(*(int *)(piVar2) + (0x40)))(piVar2));
                ((cocos2d::CCDictionary *)(uVar8))->setObject((cocos2d::CCObject*)piVar2, uVar4);
              }
            }
          }
        }
        iVar3 = (undefined4)(intptr_t)(iVar9);
        if (iVar9 != 0) {
          iVar9 = (undefined4)(intptr_t)(*(int *)(iVar9 + 0x110));
        }
      }
    }
    iStack_34 = (undefined4)(intptr_t)(iStack_34 + 1);
  } while (iStack_34 != 6);
  return;
}

void PlayerData::initEquipsData(cocos2d::CCObject* p1)
{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  int iStack_34;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [8];
  
  ((cocos2d::CCArray *)(*(undefined4 *)(((int)this) + 0x1c)))->removeAllObjects();
  iStack_34 = 1;
  do {
    piVar1 = (int *)((EquipPageData *)this)->create();
    ((cocos2d::CCArray *)(*(undefined4 *)(((int)this) + 0x1c)))->addObject((cocos2d::CCObject*)piVar1);
    piVar2 = (int *)((DataManager *)this)->shareDataManager();
    piVar2 = (int *)(**(code **)(*(int *)(piVar2) + (0x28)))();
    piVar2 = (int *)(**(code **)(*(int *)(piVar2) + (0x50)))();
    iVar3 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar2) + (0x18)))());
    if (iVar3 != 0) {
      iVar3 = (undefined4)(intptr_t)(*(int *)(iVar3 + 0x14));
      iVar8 = (undefined4)(intptr_t)(iVar3);
      if (iVar3 != 0) {
        iVar8 = (undefined4)(intptr_t)(*(int *)(iVar3 + 0x110));
      }
      while (iVar3 != 0) {
        if (*(int *)(iVar3 + 0x104) != 0) {
          uVar7 = (undefined4)(*(undefined4 *)(g_004a6e24 + 0x4a6cf4));
          piVar2 = (int *)func_0079e55c(*(int *)(iVar3 + 0x104),uVar7,
                                          *(undefined4 *)(g_004a6e28 + 0x4a6cf8),0);
          if (piVar2 != 0) {
            (**(code **)(*(int *)(piVar2) + (0x38)))(auStack_20,piVar2);
            (**(code **)(**(int **)(((int)this) + 0x14) + 0x18))(auStack_1c);
            iVar3 = mz_SteqIcEN9__gnu_cxx11__enable_ifIXsrSt9__is_charIT_E7__valueEbE6__typeERKSbIS3_St11char_traitsIS3_ESaIS3_EESC_
                              (auStack_20,auStack_1c);
            func_0079e2bc(auStack_1c);
            func_0079e2bc(auStack_20);
            if (iVar3 != 0) {
              uVar9 = (undefined4)(((DataCacheManager *)this)->shareManager());
              uVar4 = (undefined4)((**(code **)(*(int *)(piVar2) + (0x20)))(piVar2));
              piVar5 = ((void)((DataCacheManager *)(uVar9))->getItemDataByID(uVar4),(int *)0);
              piVar6 = (int *)((DataCacheManager *)this)->shareManager();
              uVar9 = (undefined4)((**(code **)(*(int *)(piVar6) + (0x68)))());
              uVar4 = (undefined4)((**(code **)(*(int *)(piVar2) + (0x20)))(piVar2));
              iVar3 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)(uVar9))->objectForKey(uVar4));
              if ((((iVar3 != 0) &&
                   (piVar6 = (int *)func_0079e55c(iVar3,uVar7,
                                                    *(undefined4 *)(g_004a6e2c + 0x4a6d82),0),
                   piVar6 != 0)) &&
                  (iVar3 = (**(code **)(*(int *)(piVar6) + (0x30)))(), iVar3 == iStack_34)) &&
                 (iVar3 = (**(code **)(*(int *)(piVar5) + (0x30)))(piVar5), iVar3 == 1)) {
                uVar7 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x18)))(piVar1));
                uVar9 = (undefined4)((**(code **)(*(int *)(piVar2) + (0x40)))(piVar2));
                ((cocos2d::CCDictionary *)(uVar7))->setObject((cocos2d::CCObject*)piVar2, uVar9);
              }
            }
          }
        }
        iVar3 = (undefined4)(intptr_t)(iVar8);
        if (iVar8 != 0) {
          iVar8 = (undefined4)(intptr_t)(*(int *)(iVar8 + 0x110));
        }
      }
    }
    iStack_34 = (undefined4)(intptr_t)(iStack_34 + 1);
  } while (iStack_34 != 6);
  ((PlayerData *)(((int)this)))->initRunesData(0);
  uVar9 = (undefined4)(*(undefined4 *)(((int)this) + 0x28));
  (**(code **)(**(int **)(((int)this) + 0x14) + 0x18))(auStack_20);
  func_0079e53c(auStack_1c,((int)this) + 0x30);
  uVar7 = (undefined4)((**(code **)(**(int **)(((int)this) + 0x14) + 0x20))());
  ((BLRoleAttribute *)(uVar9))->initWith((std::string *)(char *)auStack_20, (std::string *)(char *)auStack_1c, uVar7);
  func_0079e2bc(auStack_1c);
  func_0079e2bc(auStack_20);
  ((PlayerData *)(((int)this)))->onCalculateCombat(0);
  return;
}

void PlayerData::initSuitData(cocos2d::CCObject* p1)
{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [8];
  
  ((cocos2d::CCArray *)(*(undefined4 *)(((int)this) + 0x24)))->removeAllObjects();
  piVar1 = (int *)((EquipPageData *)this)->create();
  ((cocos2d::CCArray *)(*(undefined4 *)(((int)this) + 0x24)))->addObject((cocos2d::CCObject*)piVar1);
  piVar2 = (int *)((DataManager *)this)->shareDataManager();
  piVar2 = (int *)(**(code **)(*(int *)(piVar2) + (0x28)))();
  piVar2 = (int *)(**(code **)(*(int *)(piVar2) + (0x50)))();
  iVar3 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar2) + (0x18)))());
  if (iVar3 != 0) {
    iVar3 = (undefined4)(intptr_t)(*(int *)(iVar3 + 0x14));
    iVar6 = (undefined4)(intptr_t)(iVar3);
    if (iVar3 != 0) {
      iVar6 = (undefined4)(intptr_t)(*(int *)(iVar3 + 0x110));
    }
    while (iVar3 != 0) {
      if ((*(int *)(iVar3 + 0x104) != 0) &&
         (piVar2 = (int *)func_0079e55c(*(int *)(iVar3 + 0x104),
                                          *(undefined4 *)(g_004a6f80 + 0x4a6e94),
                                          *(undefined4 *)(g_004a6f84 + 0x4a6e96),0),
         piVar2 != 0)) {
        (**(code **)(*(int *)(piVar2) + (0x38)))(auStack_20,piVar2);
        (**(code **)(**(int **)(((int)this) + 0x14) + 0x18))(auStack_1c);
        iVar3 = mz_SteqIcEN9__gnu_cxx11__enable_ifIXsrSt9__is_charIT_E7__valueEbE6__typeERKSbIS3_St11char_traitsIS3_ESaIS3_EESC_
                          (auStack_20,auStack_1c);
        func_0079e2bc(auStack_1c);
        func_0079e2bc(auStack_20);
        if (iVar3 != 0) {
          uVar5 = (undefined4)(((DataCacheManager *)this)->shareManager());
          uVar7 = (undefined4)((**(code **)(*(int *)(piVar2) + (0x20)))(piVar2));
          piVar4 = ((void)((DataCacheManager *)(uVar5))->getItemDataByID(uVar7),(int *)0);
          if ((piVar4 != 0) && (iVar3 = (**(code **)(*(int *)(piVar4) + (0x30)))(), iVar3 == 8)) {
            uVar5 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x18)))(piVar1));
            uVar7 = (undefined4)((**(code **)(*(int *)(piVar2) + (0x40)))(piVar2));
            ((cocos2d::CCDictionary *)(uVar5))->setObject((cocos2d::CCObject*)piVar2, uVar7);
          }
        }
      }
      iVar3 = (undefined4)(intptr_t)(iVar6);
      if (iVar6 != 0) {
        iVar6 = (undefined4)(intptr_t)(*(int *)(iVar6 + 0x110));
      }
    }
  }
  uVar7 = (undefined4)(*(undefined4 *)(((int)this) + 0x28));
  (**(code **)(**(int **)(((int)this) + 0x14) + 0x18))(auStack_20);
  func_0079e53c(auStack_1c,((int)this) + 0x30);
  uVar5 = (undefined4)((**(code **)(**(int **)(((int)this) + 0x14) + 0x20))());
  ((BLRoleAttribute *)(uVar7))->initWith((std::string *)(char *)auStack_20, (std::string *)(char *)auStack_1c, uVar5);
  func_0079e2bc(auStack_1c);
  func_0079e2bc(auStack_20);
  ((PlayerData *)(((int)this)))->onCalculateCombat(0);
  return;
}

void PlayerData::initImmortalsData(cocos2d::CCObject* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void PlayerData::initWithRoleData(RoleData* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
