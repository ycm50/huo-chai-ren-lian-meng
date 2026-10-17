#include "EquipBaseData.h"
#include "CCObject.h"
#include "CCDictionary.h"
#include "BLLeakUtils.h"
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
extern "C" long long func_0079e2dc(...);
extern "C" long long func_0079e2ec(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long func_0079e5ec(...);
extern "C" long long func_0079e5fc(...);
extern "C" long long func_0079e62c(...);
extern "C" long long func_0079e6c0(...);
extern "C" long long func_0079e724(...);
extern "C" long long func_0079e7e4(...);
extern "C" long long func_0079e824(...);
extern "C" long long func_0079e8c4(...);
extern "C" long long func_0079eb44(...);
extern "C" unsigned long _DAT_00487ef8;
extern "C" unsigned long _DAT_00487efc;
extern "C" unsigned long _DAT_0048814c;
extern "C" unsigned long _DAT_00488150;
extern "C" unsigned long _DAT_00488154;
extern "C" unsigned long _DAT_00488158;
extern "C" unsigned long _DAT_0048815c;
extern "C" unsigned long _DAT_00488250;
extern "C" unsigned long _DAT_00488254;
extern "C" unsigned long _DAT_00488258;
extern "C" unsigned long _DAT_0048825c;
extern "C" unsigned long _DAT_00488658;
extern "C" unsigned long _DAT_0048865c;
extern "C" unsigned long _DAT_00488660;
extern "C" unsigned long _DAT_00488664;
extern "C" unsigned long _DAT_00488668;
extern "C" unsigned long _DAT_0048866c;
extern "C" unsigned long _DAT_00488670;
extern "C" unsigned long g_00487ef8;
extern "C" unsigned long g_00487efc;
extern "C" unsigned long g_0048814c;
extern "C" unsigned long g_00488150;
extern "C" unsigned long g_00488154;
extern "C" unsigned long g_00488158;
extern "C" unsigned long g_0048815c;
extern "C" unsigned long g_00488250;
extern "C" unsigned long g_00488254;
extern "C" unsigned long g_00488258;
extern "C" unsigned long g_0048825c;
extern "C" unsigned long g_00488658;
extern "C" unsigned long g_0048865c;
extern "C" unsigned long g_00488660;
extern "C" unsigned long g_00488664;
extern "C" unsigned long g_00488668;
extern "C" unsigned long g_0048866c;
extern "C" unsigned long g_00488670;
int EquipBaseData::getMainKey() const
{
  return *(undefined4 *)(((int)this) + 0x14);
}

void EquipBaseData::setMainKey(int p1)
{
  *(undefined4 *)(((int)this) + 0x14) = p1;
  return;
}

int EquipBaseData::getID() const
{
  return *(undefined4 *)(((int)this) + 0x18);
}

void EquipBaseData::setID(int p1)
{
  *(undefined4 *)(((int)this) + 0x18) = p1;
  return;
}

int EquipBaseData::getStar() const
{
  return *(undefined4 *)(((int)this) + 0x20);
}

void EquipBaseData::setStar(int p1)
{
  *(undefined4 *)(((int)this) + 0x20) = p1;
  return;
}

int EquipBaseData::getEquipMaxLv() const
{
  return *(undefined4 *)(((int)this) + 0x24);
}

void EquipBaseData::setEquipMaxLv(int p1)
{
  *(undefined4 *)(((int)this) + 0x24) = p1;
  return;
}

float EquipBaseData::getPriceModulus() const
{
  return *(undefined4 *)(((int)this) + 0x30);
}

void EquipBaseData::setPriceModulus(float p1)
{
  *(undefined4 *)(((int)this) + 0x30) = p1;
  return;
}

int EquipBaseData::getBasePrice() const
{
  return *(undefined4 *)(((int)this) + 0x34);
}

void EquipBaseData::setBasePrice(int p1)
{
  *(undefined4 *)(((int)this) + 0x34) = p1;
  return;
}

float EquipBaseData::getCritDamage() const
{
  return *(undefined4 *)(((int)this) + 0x38);
}

void EquipBaseData::setCritDamage(float p1)
{
  *(undefined4 *)(((int)this) + 0x38) = p1;
  return;
}

float EquipBaseData::getCriteadd() const
{
  return *(undefined4 *)(((int)this) + 0x3c);
}

void EquipBaseData::setCriteadd(float p1)
{
  *(undefined4 *)(((int)this) + 0x3c) = p1;
  return;
}

cocos2d::CCDictionary* EquipBaseData::getDicEquipValues() const
{
  return (cocos2d::CCDictionary*)(*(undefined4 *)(((int)this) + 0x40));
}

void EquipBaseData::setDicEquipValues(cocos2d::CCDictionary* p1)
{
  *(undefined4 *)(((int)this) + 0x40) = (undefined4)(intptr_t)p1;
  return;
}

cocos2d::CCDictionary* EquipBaseData::getDicEquipValuesAdd() const
{
  return (cocos2d::CCDictionary*)(*(undefined4 *)(((int)this) + 0x44));
}

cocos2d::CCDictionary* EquipBaseData::getDicEquipValuesType() const
{
  return (cocos2d::CCDictionary*)(*(undefined4 *)(((int)this) + 0x48));
}

cocos2d::CCDictionary* EquipBaseData::getDicEquipValuesTotal() const
{
  return (cocos2d::CCDictionary*)(*(undefined4 *)(((int)this) + 0x4c));
}

void EquipBaseData::setValueAdd(std::string p1)
{
  func_0079e52c(((int)this) + 0x2c);
  return;
}

void EquipBaseData::setValue(std::string p1)
{
  func_0079e52c(((int)this) + 0x28);
  return;
}

void EquipBaseData::setName(std::string p1)
{
  func_0079e52c(((int)this) + 0x1c);
  return;
}

EquipBaseData::~EquipBaseData()
{
  undefined4 uVar1;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [8];
  
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
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
  if (*(int *)((int)this + 4*(0x12)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x12)) = 0;
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(auStack_1c,((intptr_t)"EquipBaseData"),auStack_20);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)auStack_1c);
  func_0079e2bc(auStack_1c);
  func_0079e2bc(((int)this) + 0xb);
  func_0079e2bc(((int)this) + 10);
  func_0079e2bc(((int)this) + 7);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

std::string EquipBaseData::getValueAdd() const
{ return *(std::string *)(((int)this) + 0x2c); }

std::string EquipBaseData::getValue() const
{ return *(std::string *)(((int)this) + 0x28); }

std::string EquipBaseData::getName() const
{ return *(std::string *)(((int)this) + 0x1c); }


bool EquipBaseData::init()
{
  return 1;
}

// ===== 修复: 补回被误删的函数占位 (6) =====
void EquipBaseData::setDicEquipValuesAdd(cocos2d::CCDictionary* p1)
{
  *(undefined4 *)(((int)this) + 0x44) = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  return;
}

void EquipBaseData::setDicEquipValuesType(cocos2d::CCDictionary* p1)
{
  *(undefined4 *)(((int)this) + 0x48) = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  return;
}

void EquipBaseData::setDicEquipValuesTotal(cocos2d::CCDictionary* p1)
{
  *(undefined4 *)(((int)this) + 0x4c) = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  return;
}

EquipBaseData::EquipBaseData()
{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [8];
  
  0 /* ctorZero */;
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  iVar1 = (undefined4)(intptr_t)(g_00488154);
  iVar3 = (undefined4)(intptr_t)(*(int *)(g_00488150 + 0x48809e) + 0xc);
  *(int *)((int)this + 4*(7)) = iVar3;
  *(int *)((int)this + 4*(10)) = iVar3;
  *(int *)((int)this + 4*(0xb)) = iVar3;
  *(int *)((int)this + 4*(5)) = 0;
  *(int *)((int)this + 4*(6)) = 0;
  func_0079e2dc(((int)this) + 7,iVar1 + 0x4880ae);
  *(int *)((int)this + 4*(8)) = 1;
  *(int *)((int)this + 4*(9)) = 10;
  *(int *)((int)this + 4*(0xc)) = 0;
  iVar1 = (undefined4)(intptr_t)(g_00488158);
  *(int *)((int)this + 4*(0xd)) = 0;
  func_0079e2dc(((int)this) + 10,iVar1 + 0x4880ce);
  iVar1 = (undefined4)(intptr_t)(cocos2d::CCDictionary::create());
  *(int *)((int)this + 4*(0x10)) = iVar1;
  if (iVar1 != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  iVar1 = (undefined4)(intptr_t)(cocos2d::CCDictionary::create());
  *(int *)((int)this + 4*(0x11)) = iVar1;
  if (iVar1 != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  iVar1 = (undefined4)(intptr_t)(cocos2d::CCDictionary::create());
  *(int *)((int)this + 4*(0x13)) = iVar1;
  if (iVar1 != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(auStack_1c,((intptr_t)"EquipBaseData"),auStack_20);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)auStack_1c);
  func_0079e2bc(auStack_1c);
  return;
}

void EquipBaseData::updateAttr(int p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void EquipBaseData::initWith(char** p1, int& p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
