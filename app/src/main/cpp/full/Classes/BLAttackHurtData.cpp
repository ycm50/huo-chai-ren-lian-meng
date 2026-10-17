#include "BLAttackHurtData.h"
#include "CCDictionary.h"
#include "CCObject.h"
#include "DataManager.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
using namespace cocos2d;
// 兜底声明
struct sqlite3;
extern "C" {
  int  sqlite3_open(...);
  int  sqlite3_close(...);
  int  sqlite3_get_table(...);
  void sqlite3_free_table(...);
  int  sqlite3_rekey(...);
  long long sqlite3_last_insert_rowid(...);
}
extern "C" long long func_0079e814(...);
extern "C" long long func_0079e4bc(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e5fc(...);
extern "C" unsigned long g_00439674;
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2dc(...);
extern "C" long long func_0079e2ec(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e69c(...);
extern "C" long long func_0079e6c0(...);
extern "C" long long func_0079e7e4(...);
extern "C" long long func_0079e824(...);
extern "C" long long func_0079e874(...);
extern "C" unsigned long _DAT_00439de0;
extern "C" unsigned long _DAT_0043a194;
extern "C" unsigned long _DAT_0043a198;
extern "C" unsigned long _DAT_0043a19c;
extern "C" unsigned long _DAT_0043a1a0;
extern "C" unsigned long _DAT_0043a1a4;
extern "C" unsigned long _DAT_0043a1a8;
extern "C" unsigned long _DAT_0043a1ac;
extern "C" unsigned long _DAT_0043a1b0;
extern "C" unsigned long _DAT_0043a1b4;
extern "C" unsigned long _DAT_0043a1b8;
extern "C" unsigned long _DAT_0043a1bc;
extern "C" unsigned long _DAT_0043a1c0;
extern "C" unsigned long _DAT_0043a310;
extern "C" unsigned long _DAT_0043a314;
extern "C" unsigned long _DAT_0043a318;
extern "C" unsigned long _DAT_0043a31c;
extern "C" unsigned long _DAT_0043a320;
extern "C" unsigned long _DAT_0043a324;
extern "C" unsigned long _DAT_0043a328;
extern "C" unsigned long _DAT_0043a32c;
extern "C" unsigned long _DAT_0043a330;
extern "C" unsigned long g_00439de0;
extern "C" unsigned long g_0043a194;
extern "C" unsigned long g_0043a198;
extern "C" unsigned long g_0043a19c;
extern "C" unsigned long g_0043a1a0;
extern "C" unsigned long g_0043a1a4;
extern "C" unsigned long g_0043a1a8;
extern "C" unsigned long g_0043a1ac;
extern "C" unsigned long g_0043a1b0;
extern "C" unsigned long g_0043a1b4;
extern "C" unsigned long g_0043a1b8;
extern "C" unsigned long g_0043a1bc;
extern "C" unsigned long g_0043a1c0;
extern "C" unsigned long g_0043a310;
extern "C" unsigned long g_0043a314;
extern "C" unsigned long g_0043a318;
extern "C" unsigned long g_0043a31c;
extern "C" unsigned long g_0043a320;
extern "C" unsigned long g_0043a324;
extern "C" unsigned long g_0043a328;
extern "C" unsigned long g_0043a32c;
extern "C" unsigned long g_0043a330;
int BLAttackHurtData::getValueType() const
{
  return *(undefined4 *)(((int)this) + 0x28);
}

void BLAttackHurtData::setValueType(int p1)
{
  *(undefined4 *)(((int)this) + 0x28) = p1;
  return;
}

int BLAttackHurtData::getSkillBase() const
{
  return *(undefined4 *)(((int)this) + 0x2c);
}

void BLAttackHurtData::setSkillBase(int p1)
{
  *(undefined4 *)(((int)this) + 0x2c) = p1;
  return;
}

int BLAttackHurtData::getSkillAdd() const
{
  return *(undefined4 *)(((int)this) + 0x30);
}

void BLAttackHurtData::setSkillAdd(int p1)
{
  *(undefined4 *)(((int)this) + 0x30) = p1;
  return;
}

int BLAttackHurtData::getBasePrice() const
{
  return *(undefined4 *)(((int)this) + 0x34);
}

void BLAttackHurtData::setBasePrice(int p1)
{
  *(undefined4 *)(((int)this) + 0x34) = p1;
  return;
}

int BLAttackHurtData::getAddPrice() const
{
  return *(undefined4 *)(((int)this) + 0x38);
}

void BLAttackHurtData::setAddPrice(int p1)
{
  *(undefined4 *)(((int)this) + 0x38) = p1;
  return;
}

int BLAttackHurtData::getAttackType() const
{
  return *(undefined4 *)(((int)this) + 0x48);
}

void BLAttackHurtData::setAttackType(int p1)
{
  *(undefined4 *)(((int)this) + 0x48) = p1;
  return;
}

float BLAttackHurtData::getAttackDistance() const
{
  return *(undefined4 *)(((int)this) + 0x4c);
}

void BLAttackHurtData::setAttackDistance(float p1)
{
  *(undefined4 *)(((int)this) + 0x4c) = p1;
  return;
}

float BLAttackHurtData::getAttackDistanceMin() const
{
  return *(undefined4 *)(((int)this) + 0x5c);
}

void BLAttackHurtData::setAttackDistanceMin(float p1)
{
  *(undefined4 *)(((int)this) + 0x5c) = p1;
  return;
}

int BLAttackHurtData::getUnLockLv() const
{
  return *(undefined4 *)(((int)this) + 0x60);
}

void BLAttackHurtData::setUnLockLv(int p1)
{
  *(undefined4 *)(((int)this) + 0x60) = p1;
  return;
}

float BLAttackHurtData::getBaseAttr() const
{
  return *(undefined4 *)(((int)this) + 100);
}

void BLAttackHurtData::setBaseAttr(float p1)
{
  *(undefined4 *)(((int)this) + 100) = p1;
  return;
}

void BLAttackHurtData::setName(std::string p1)
{
  func_0079e52c(((int)this) + 0x68);
  return;
}

void BLAttackHurtData::setEffect(std::string p1)
{
  func_0079e52c(((int)this) + 0x24);
  return;
}

void BLAttackHurtData::setDes(std::string p1)
{
  func_0079e52c(((int)this) + 0x20);
  return;
}

void BLAttackHurtData::setIcon(std::string p1)
{
  func_0079e52c(((int)this) + 0x1c);
  return;
}

void BLAttackHurtData::setAttackName(std::string p1)
{
  func_0079e52c(((int)this) + 0x18);
  return;
}

void BLAttackHurtData::setRoleID(std::string p1)
{
  func_0079e52c(((int)this) + 0x14);
  return;
}

std::string BLAttackHurtData::getAttackName() const
{ return *(std::string *)(((int)this) + 0x18); }

std::string BLAttackHurtData::getName() const
{ return *(std::string *)(((int)this) + 0x68); }

std::string BLAttackHurtData::getEffect() const
{ return *(std::string *)(((int)this) + 0x24); }

std::string BLAttackHurtData::getDes() const
{ return *(std::string *)(((int)this) + 0x20); }

std::string BLAttackHurtData::getIcon() const
{ return *(std::string *)(((int)this) + 0x1c); }

std::string BLAttackHurtData::getRoleID() const
{ return *(std::string *)(((int)this) + 0x14); }

BLAttackHurtData::~BLAttackHurtData()
{
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  func_0079e2bc(((int)this) + 0x1a);
  ((std::vector<float, std::allocator<float>> *)((int)this) + 0x14)->~vector();
  ((std::vector<float, std::allocator<float>> *)((int)this) + 0xf)->~vector();
  func_0079e2bc(((int)this) + 9);
  func_0079e2bc(((int)this) + 8);
  func_0079e2bc(((int)this) + 7);
  func_0079e2bc(((int)this) + 6);
  func_0079e2bc(((int)this) + 5);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

// ===== 修复: 补回被误删的函数占位 (7) =====
void BLAttackHurtData::getValueBySkillLV(long p1, int p2, float p3)
{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_1c [8];
  
  func_0079e814(auStack_1c,((int)this) + 0x18,0,1);
  iVar1 = (undefined4)(intptr_t)(func_0079e4bc(auStack_1c,g_00439674 + 0x439628));
  func_0079e2bc(auStack_1c);
  if (iVar1 != 0) {
    iVar1 = (undefined4)(intptr_t)(*(int *)(((int)this) + 0x30));
    iVar3 = (undefined4)(intptr_t)(*(int *)(((int)this) + 0x2c));
    uVar2 = (undefined4)(func_0079e2ec(p1));
    func_0079e4fc(uVar2,*(undefined4 *)(((int)this) + 100));
    p1 = func_0079e5fc();
    p1 = (p2 + -1) * iVar1 + iVar3 + p1;
  }
  uVar2 = (undefined4)(func_0079e2ec(p1));
  func_0079e4fc(uVar2,p3);
  return;
}

int BLAttackHurtData::getSkillCDTimes() const
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

int BLAttackHurtData::getPercentage() const
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void BLAttackHurtData::setSkillCDTimes(std::vector<float, std::allocator<float>> p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLAttackHurtData::setPercentage(std::vector<float, std::allocator<float>> p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLAttackHurtData::initWith(char** p1, int& p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

undefined4 BLAttackHurtData::getRoleSkillsData(std::string p1)
{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_38 [4];
  undefined4 uStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined1 auStack_24 [4];
  undefined4 uStack_20;
  undefined1 auStack_1c [8];
  
  uVar2 = (undefined4)(cocos2d::CCDictionary::create());
  func_0079e45c(auStack_38,g_0043a194 + 0x439fc6,auStack_1c);
  uStack_34 = (undefined4)(0);
  func_0079e45c(&uStack_28," select * from ",auStack_1c);
  func_0079e69c(&uStack_28,"attack");
  func_0079e69c(&uStack_28," where ");
  func_0079e69c(&uStack_28,"roleid");
  func_0079e69c(&uStack_28," = ");
  func_0079e53c(auStack_24,((int)this));
  0 /* ctorZero */;
  func_0079e874(&uStack_28,&uStack_20);
  func_0079e2bc(&uStack_20);
  func_0079e2bc(auStack_24);
  piVar3 = (int *)((DataManager *)this)->shareDataManager();
  uVar4 = (undefined4)((**(code **)(*(int *)(piVar3) + (0x18)))());
  iVar5 = (undefined4)(intptr_t)(sqlite3_get_table(uVar4,uStack_28,&uStack_34,&iStack_30,&uStack_2c,0));
  if (iVar5 == 0) {
    uStack_20 = (undefined4)(uStack_2c);
    for (iVar5 = 0; iVar5 < iStack_30; iVar5 = iVar5 + 1) {
      piVar3 = (int *)func_0079e2fc(0x6c);
      0 /* ctorZero */;
      *piVar3 = *(int *)(g_0043a1ac + 0x43a072) + 8;
      iVar1 = (undefined4)(intptr_t)(g_0043a1b4);
      iVar6 = (undefined4)(intptr_t)(g_0043a1b0);
      piVar3[0xf] = 0;
      iVar6 = (undefined4)(intptr_t)(*(int *)(iVar6 + 0x43a082));
      piVar3[0x10] = 0;
      piVar3[0x11] = 0;
      iVar6 = (undefined4)(intptr_t)(iVar6 + 0xc);
      piVar3[5] = iVar6;
      piVar3[6] = iVar6;
      piVar3[7] = iVar6;
      piVar3[8] = iVar6;
      piVar3[9] = iVar6;
      piVar3[0x1a] = iVar6;
      piVar3[0x14] = 0;
      piVar3[0x15] = 0;
      piVar3[0x16] = 0;
      func_0079e2dc(piVar3 + 6,iVar1 + 0x43a0a4);
      func_0079e2dc(piVar3 + 5,g_0043a1b8 + 0x43a0b2);
      piVar3[10] = 1;
      piVar3[0x18] = 1;
      iVar6 = (undefined4)(intptr_t)(g_0043a1bc);
      piVar3[0x12] = 0;
      piVar3[0x13] = iVar6;
      iVar6 = (undefined4)(intptr_t)(g_0043a1c0);
      piVar3[0x19] = 0x3f800000;
      piVar3[0xb] = 0;
      piVar3[0x17] = iVar6;
      piVar3[0xc] = 0;
      piVar3[0xd] = 0;
      piVar3[0xe] = 0;
      ((cocos2d::CCObject *)(piVar3))->autorelease();
      ((BLAttackHurtData *)(piVar3))->initWith((char**)uStack_34, *(int*)&uStack_20);
      (**(code **)(*(int *)(piVar3) + (0x20)))(auStack_1c,piVar3);
      ((cocos2d::CCDictionary *)(uVar2))->setObject((cocos2d::CCObject*)piVar3, (char const *)auStack_1c);
      func_0079e2bc(auStack_1c);
    }
  }
  sqlite3_free_table(uStack_34);
  func_0079e2bc(&uStack_28);
  func_0079e2bc(auStack_38);
  return uVar2;
}
