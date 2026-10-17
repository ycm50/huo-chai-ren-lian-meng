#include "BLMissionData.h"
#include "BLDropData.h"
#include "BLLeakUtils.h"
#include "BLMonsterGroupData.h"
#include "BLTriggerData.h"
#include "DataManager.h"
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
extern "C" long long func_0079e49c(...);
extern "C" long long func_0079e4bc(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e5bc(...);
extern "C" long long func_0079e5ec(...);
extern "C" long long func_0079e69c(...);
extern "C" long long func_0079e6c0(...);
extern "C" long long func_0079e784(...);
extern "C" long long func_0079e7e4(...);
extern "C" long long func_0079e824(...);
extern "C" long long func_0079e874(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_004583ce;
extern "C" unsigned long _DAT_00458194;
extern "C" unsigned long _DAT_00458198;
extern "C" unsigned long _DAT_004583f4;
extern "C" unsigned long _DAT_004583f8;
extern "C" unsigned long _DAT_004583fc;
extern "C" unsigned long _DAT_00458400;
extern "C" unsigned long _DAT_00458404;
extern "C" unsigned long _DAT_00458408;
extern "C" unsigned long _DAT_00458588;
extern "C" unsigned long _DAT_0045858c;
extern "C" unsigned long _DAT_00458590;
extern "C" unsigned long _DAT_00458594;
extern "C" unsigned long _DAT_00458598;
extern "C" unsigned long _DAT_0045859c;
extern "C" unsigned long _DAT_004585a0;
extern "C" unsigned long _DAT_004585a4;
extern "C" unsigned long _DAT_004585a8;
extern "C" unsigned long _DAT_004585ac;
extern "C" unsigned long _DAT_004585b0;
extern "C" unsigned long _DAT_00458670;
extern "C" unsigned long _DAT_004589ec;
extern "C" unsigned long _DAT_004589f0;
extern "C" unsigned long _DAT_004589f4;
extern "C" unsigned long _DAT_004589f8;
extern "C" unsigned long _DAT_004589fc;
extern "C" unsigned long _DAT_00458a00;
extern "C" unsigned long _DAT_00458a04;
extern "C" unsigned long _DAT_00458a4c;
extern "C" unsigned long extraout_r1;
extern "C" unsigned long unaff_r5;
extern "C" unsigned long g_00458194;
extern "C" unsigned long g_00458198;
extern "C" unsigned long g_004583ce;
extern "C" unsigned long g_004583f4;
extern "C" unsigned long g_004583f8;
extern "C" unsigned long g_004583fc;
extern "C" unsigned long g_00458400;
extern "C" unsigned long g_00458404;
extern "C" unsigned long g_00458408;
extern "C" unsigned long g_00458588;
extern "C" unsigned long g_0045858c;
extern "C" unsigned long g_00458590;
extern "C" unsigned long g_00458594;
extern "C" unsigned long g_00458598;
extern "C" unsigned long g_0045859c;
extern "C" unsigned long g_004585a0;
extern "C" unsigned long g_004585a4;
extern "C" unsigned long g_004585a8;
extern "C" unsigned long g_004585ac;
extern "C" unsigned long g_004585b0;
extern "C" unsigned long g_00458670;
extern "C" unsigned long g_004589ec;
extern "C" unsigned long g_004589f0;
extern "C" unsigned long g_004589f4;
extern "C" unsigned long g_004589f8;
extern "C" unsigned long g_004589fc;
extern "C" unsigned long g_00458a00;
extern "C" unsigned long g_00458a04;
extern "C" unsigned long g_00458a4c;
int * BLMissionData::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x90)));
  0 /* ctorZero */;
  iVar2 = ((BLMissionData *)piVar1)->init();
  if (iVar2 == 0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    piVar1 = (int *)0x0;
  }
  else {
    ((cocos2d::CCObject *)piVar1)->autorelease();
  }
  return (int *)(piVar1);
}

int BLMissionData::getType() const
{
  return *(undefined4 *)(((int)this) + 0x1c);
}

void BLMissionData::setType(int p1)
{
  *(undefined4 *)(((int)this) + 0x1c) = p1;
  return;
}

int BLMissionData::getMap() const
{
  return *(undefined4 *)(((int)this) + 0x20);
}

void BLMissionData::setMap(int p1)
{
  *(undefined4 *)(((int)this) + 0x20) = p1;
  return;
}

BLMonsterGroupData* BLMissionData::getObstacle() const
{
  return (BLMonsterGroupData*)(*(undefined4 *)(((int)this) + 0x34));
}

void BLMissionData::setObstacle(BLMonsterGroupData* p1)
{
  *(undefined4 *)(((int)this) + 0x34) = (undefined4)(intptr_t)p1;
  return;
}

cocos2d::CCDictionary* BLMissionData::getDicTriggers() const
{
  return (cocos2d::CCDictionary*)(*(undefined4 *)(((int)this) + 0x5c));
}

void BLMissionData::setDicTriggers(cocos2d::CCDictionary* p1)
{
  *(undefined4 *)(((int)this) + 0x5c) = (undefined4)(intptr_t)p1;
  return;
}

float BLMissionData::getAttrLV() const
{
  return *(undefined4 *)(((int)this) + 0x60);
}

void BLMissionData::setAttrLV(float p1)
{
  *(undefined4 *)(((int)this) + 0x60) = p1;
  return;
}

float BLMissionData::getAttrPer() const
{
  return *(undefined4 *)(((int)this) + 100);
}

void BLMissionData::setAttrPer(float p1)
{
  *(undefined4 *)(((int)this) + 100) = p1;
  return;
}

int BLMissionData::getMaxHeros() const
{
  return *(undefined4 *)(((int)this) + 0x74);
}

void BLMissionData::setMaxHeros(int p1)
{
  *(undefined4 *)(((int)this) + 0x74) = p1;
  return;
}

BLDropData* BLMissionData::getDropData() const
{
  return (BLDropData*)(*(undefined4 *)(((int)this) + 0x78));
}

void BLMissionData::setDropData(BLDropData* p1)
{
  *(undefined4 *)(((int)this) + 0x78) = (undefined4)(intptr_t)p1;
  return;
}

BLDropData* BLMissionData::getDropEliteData() const
{
  return (BLDropData*)(*(undefined4 *)(((int)this) + 0x7c));
}

void BLMissionData::setDropEliteData(BLDropData* p1)
{
  *(undefined4 *)(((int)this) + 0x7c) = (undefined4)(intptr_t)p1;
  return;
}

BLDropData* BLMissionData::getDropBossData() const
{
  return (BLDropData*)(*(undefined4 *)(((int)this) + 0x80));
}

void BLMissionData::setDropBossData(BLDropData* p1)
{
  *(undefined4 *)(((int)this) + 0x80) = (undefined4)(intptr_t)p1;
  return;
}

int BLMissionData::getRecomandLV() const
{
  return *(undefined4 *)(((int)this) + 0x84);
}

void BLMissionData::setRecomandLV(int p1)
{
  *(undefined4 *)(((int)this) + 0x84) = p1;
  return;
}

int BLMissionData::getMinHeros() const
{
  return *(undefined4 *)(((int)this) + 0x8c);
}

void BLMissionData::setMinHeros(int p1)
{
  *(undefined4 *)(((int)this) + 0x8c) = p1;
  return;
}

void BLMissionData::setRecomand(std::string * p1)
{
  func_0079e52c(((int)this) + 0x88);
  return;
}

void BLMissionData::setDropBossID(std::string * p1)
{
  func_0079e52c(((int)this) + 0x70);
  return;
}

void BLMissionData::setDropEliteID(std::string * p1)
{
  func_0079e52c(((int)this) + 0x6c);
  return;
}

void BLMissionData::setDropID(std::string * p1)
{
  func_0079e52c(((int)this) + 0x68);
  return;
}

void BLMissionData::setObstacleGroup(std::string * p1)
{
  func_0079e52c(((int)this) + 0x30);
  return;
}

void BLMissionData::setSound(std::string * p1)
{
  func_0079e52c(((int)this) + 0x2c);
  return;
}

void BLMissionData::setDes(std::string * p1)
{
  func_0079e52c(((int)this) + 0x28);
  return;
}

void BLMissionData::setIcon(std::string * p1)
{
  func_0079e52c(((int)this) + 0x24);
  return;
}

void BLMissionData::setName(std::string * p1)
{
  func_0079e52c(((int)this) + 0x18);
  return;
}

void BLMissionData::setMissionID(std::string * p1)
{
  func_0079e52c(((int)this) + 0x14);
  return;
}

std::string BLMissionData::getRecomand() const
{ return *(std::string *)(((int)this) + 0x88); }

std::string BLMissionData::getDropBossID() const
{ return *(std::string *)(((int)this) + 0x70); }

std::string BLMissionData::getDropEliteID() const
{ return *(std::string *)(((int)this) + 0x6c); }

std::string BLMissionData::getDropID() const
{ return *(std::string *)(((int)this) + 0x68); }

std::string BLMissionData::getObstacleGroup() const
{ return *(std::string *)(((int)this) + 0x30); }

std::string BLMissionData::getSound() const
{ return *(std::string *)(((int)this) + 0x2c); }

std::string BLMissionData::getDes() const
{ return *(std::string *)(((int)this) + 0x28); }

std::string BLMissionData::getIcon() const
{ return *(std::string *)(((int)this) + 0x24); }

std::string BLMissionData::getName() const
{ return *(std::string *)(((int)this) + 0x18); }

std::string BLMissionData::getMissionID() const
{ return *(std::string *)(((int)this) + 0x14); }

bool BLMissionData::init()
{
  return 1;
}

BLMissionData::~BLMissionData()
{
  undefined4 uVar1;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [8];
  
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  if (*(int *)((int)this + 4*(0x17)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x17)) = 0;
  }
  if (*(int *)((int)this + 4*(0xd)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0xd)) = 0;
  }
  if (*(int *)((int)this + 4*(0x20)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x20)) = 0;
  }
  if (*(int *)((int)this + 4*(0x1e)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x1e)) = 0;
  }
  if (*(int *)((int)this + 4*(0x1f)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x1f)) = 0;
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(auStack_1c,((intptr_t)"BLMissionData"),auStack_20);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)auStack_1c);
  func_0079e2bc(auStack_1c);
  func_0079e2bc(((int)this) + 0x22);
  func_0079e2bc(((int)this) + 0x1c);
  func_0079e2bc(((int)this) + 0x1b);
  func_0079e2bc(((int)this) + 0x1a);
  ((std::vector<std::string, std::allocator<std::string>> *)((int)this) + 0x14)->~vector();
  if (*(int *)((int)this + 4*(0x11)) != 0) {
    (void)(::operator delete((void *)(*(int *)((int)this + 4*(0x11)))));
  }
  ((std::vector<std::string, std::allocator<std::string>> *)((int)this) + 0xe)->~vector();
  func_0079e2bc(((int)this) + 0xc);
  func_0079e2bc(((int)this) + 0xb);
  func_0079e2bc(((int)this) + 10);
  func_0079e2bc(((int)this) + 9);
  func_0079e2bc(((int)this) + 6);
  func_0079e2bc(((int)this) + 5);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

// ===== 修复: 补回被误删的函数占位 (9) =====
void BLMissionData::initMonsterGroupData()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

BLMissionData::BLMissionData()
{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [8];
  
  0 /* ctorZero */;
  iVar2 = (undefined4)(intptr_t)(g_00458588);
  *(int *)((int)this + 4*(0xe)) = 0;
  iVar2 = (undefined4)(intptr_t)(*(int *)(iVar2 + 0x458424));
  *(int *)((int)this + 4*(0xf)) = 0;
  *(int *)((int)this + 4*(0x10)) = 0;
  *(int *)this = iVar2 + 8;
  iVar2 = (undefined4)(intptr_t)(g_0045858c);
  *(int *)((int)this + 4*(0x11)) = 0;
  *(int *)((int)this + 4*(0x12)) = 0;
  iVar2 = (undefined4)(intptr_t)(*(int *)(iVar2 + 0x458436));
  *(int *)((int)this + 4*(0x13)) = 0;
  *(int *)((int)this + 4*(0x14)) = 0;
  iVar2 = (undefined4)(intptr_t)(iVar2 + 0xc);
  *(int *)((int)this + 4*(5)) = iVar2;
  *(int *)((int)this + 4*(6)) = iVar2;
  *(int *)((int)this + 4*(9)) = iVar2;
  *(int *)((int)this + 4*(10)) = iVar2;
  *(int *)((int)this + 4*(0xb)) = iVar2;
  *(int *)((int)this + 4*(0xc)) = iVar2;
  *(int *)((int)this + 4*(0x1a)) = iVar2;
  *(int *)((int)this + 4*(0x1b)) = iVar2;
  *(int *)((int)this + 4*(0x1c)) = iVar2;
  *(int *)((int)this + 4*(0x15)) = 0;
  *(int *)((int)this + 4*(0x16)) = 0;
  *(int *)((int)this + 4*(0x22)) = iVar2;
  func_0079e2dc(((int)this) + 5,g_00458590 + 0x458470);
  func_0079e2dc(((int)this) + 6,g_00458594 + 0x45847c);
  iVar2 = (undefined4)(intptr_t)(g_00458598);
  *(int *)((int)this + 4*(7)) = 0;
  *(int *)((int)this + 4*(8)) = 0;
  func_0079e2dc(((int)this) + 9,iVar2 + 0x45848c);
  func_0079e2dc(((int)this) + 10,g_0045859c + 0x458496);
  func_0079e2dc(((int)this) + 0xb,g_004585a0 + 0x4584a0);
  iVar2 = (undefined4)(intptr_t)(g_004585a4);
  *(int *)((int)this + 4*(0x18)) = 0x3f800000;
  *(int *)((int)this + 4*(0x19)) = 0x3f800000;
  func_0079e2dc(((int)this) + 0x1a,iVar2 + 0x4584b4);
  func_0079e2dc(((int)this) + 0x1b,g_004585a8 + 0x4584c0);
  func_0079e2dc(((int)this) + 0x1c,g_004585ac + 0x4584cc);
  *(int *)((int)this + 4*(0x1d)) = 1;
  iVar2 = (undefined4)(intptr_t)(cocos2d::CCDictionary::create());
  *(int *)((int)this + 4*(0x17)) = iVar2;
  if (iVar2 != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  *(int *)((int)this + 4*(0xd)) = 0;
  *(int *)((int)this + 4*(0x20)) = 0;
  *(int *)((int)this + 4*(0x1e)) = 0;
  *(int *)((int)this + 4*(0x1f)) = 0;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(auStack_1c,((intptr_t)"BLMissionData"),auStack_20);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)auStack_1c);
  func_0079e2bc(auStack_1c);
  return;
}

int BLMissionData::getTriggers() const
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

int BLMissionData::getBossIDs() const
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void BLMissionData::setTriggers(std::vector<std::string, std::allocator<std::string>> * p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMissionData::setBossIDs(std::vector<std::string, std::allocator<std::string>> * p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

undefined8 BLMissionData::setTrigersX(std::vector<float, std::allocator<float>> * p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void BLMissionData::initWith(std::string * p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

int BLMissionData::getTrigersX() const
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
