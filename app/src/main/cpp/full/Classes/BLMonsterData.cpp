#include "BLMonsterData.h"
#include "BLDebug.h"
#include "BLLeakUtils.h"
#include "BLMonsterResData.h"
#include "BLRoleData.h"
#include "DataCacheManager.h"
#include "DataManager.h"
#include "LoadingLayer.h"
#include "UIManager.h"
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
extern "C" long long func_0079e4bc(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e69c(...);
extern "C" long long func_0079e6c0(...);
extern "C" long long func_0079e7e4(...);
extern "C" long long func_0079e824(...);
extern "C" long long func_0079e854(...);
extern "C" long long func_0079e874(...);
extern "C" unsigned long _DAT_004593b8;
extern "C" unsigned long _DAT_004593bc;
extern "C" unsigned long _DAT_00459510;
extern "C" unsigned long _DAT_00459514;
extern "C" unsigned long _DAT_00459518;
extern "C" unsigned long _DAT_0045951c;
extern "C" unsigned long _DAT_00459520;
extern "C" unsigned long _DAT_00459524;
extern "C" unsigned long _DAT_00459528;
extern "C" unsigned long _DAT_00459860;
extern "C" unsigned long _DAT_00459864;
extern "C" unsigned long _DAT_00459868;
extern "C" unsigned long _DAT_0045986c;
extern "C" unsigned long _DAT_00459870;
extern "C" unsigned long _DAT_00459874;
extern "C" unsigned long _DAT_00459878;
extern "C" unsigned long _DAT_0045987c;
extern "C" unsigned long _DAT_00459880;
extern "C" unsigned long _DAT_00459884;
extern "C" unsigned long _DAT_00459888;
extern "C" unsigned long _DAT_0045988c;
extern "C" unsigned long _DAT_00459890;
extern "C" unsigned long _DAT_00459894;
extern "C" unsigned long _DAT_00459898;
extern "C" unsigned long _DAT_0045989c;
extern "C" unsigned long _DAT_00459aac;
extern "C" unsigned long _DAT_00459ab0;
extern "C" unsigned long _DAT_00459ab4;
extern "C" unsigned long _DAT_00459ab8;
extern "C" unsigned long _DAT_00459abc;
extern "C" unsigned long _DAT_00459c9c;
extern "C" unsigned long _DAT_00459ca0;
extern "C" unsigned long _DAT_00459ca4;
extern "C" unsigned long _DAT_00459ca8;
extern "C" unsigned long _DAT_00459cac;
extern "C" unsigned long _DAT_00459cb0;
extern "C" unsigned long g_004593b8;
extern "C" unsigned long g_004593bc;
extern "C" unsigned long g_00459510;
extern "C" unsigned long g_00459514;
extern "C" unsigned long g_00459518;
extern "C" unsigned long g_0045951c;
extern "C" unsigned long g_00459520;
extern "C" unsigned long g_00459524;
extern "C" unsigned long g_00459528;
extern "C" unsigned long g_00459860;
extern "C" unsigned long g_00459864;
extern "C" unsigned long g_00459868;
extern "C" unsigned long g_0045986c;
extern "C" unsigned long g_00459870;
extern "C" unsigned long g_00459874;
extern "C" unsigned long g_00459878;
extern "C" unsigned long g_0045987c;
extern "C" unsigned long g_00459880;
extern "C" unsigned long g_00459884;
extern "C" unsigned long g_00459888;
extern "C" unsigned long g_0045988c;
extern "C" unsigned long g_00459890;
extern "C" unsigned long g_00459894;
extern "C" unsigned long g_00459898;
extern "C" unsigned long g_0045989c;
extern "C" unsigned long g_00459aac;
extern "C" unsigned long g_00459ab0;
extern "C" unsigned long g_00459ab4;
extern "C" unsigned long g_00459ab8;
extern "C" unsigned long g_00459abc;
extern "C" unsigned long g_00459c9c;
extern "C" unsigned long g_00459ca0;
extern "C" unsigned long g_00459ca4;
extern "C" unsigned long g_00459ca8;
extern "C" unsigned long g_00459cac;
extern "C" unsigned long g_00459cb0;
int * BLMonsterData::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x4c)));
  0 /* ctorZero */;
  iVar2 = ((BLMonsterData *)piVar1)->init();
  if (iVar2 == 0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    piVar1 = (int *)0x0;
  }
  else {
    ((cocos2d::CCObject *)piVar1)->autorelease();
  }
  return (int *)(piVar1);
}

float BLMonsterData::getRoleScale() const
{
  return *(undefined4 *)(((int)this) + 0x14);
}

void BLMonsterData::setRoleScale(float p1)
{
  *(undefined4 *)(((int)this) + 0x14) = p1;
  return;
}

int BLMonsterData::getAI() const
{
  return *(undefined4 *)(((int)this) + 0x20);
}

void BLMonsterData::setAI(int p1)
{
  *(undefined4 *)(((int)this) + 0x20) = p1;
  return;
}

int BLMonsterData::getDrop() const
{
  return *(undefined4 *)(((int)this) + 0x28);
}

void BLMonsterData::setDrop(int p1)
{
  *(undefined4 *)(((int)this) + 0x28) = p1;
  return;
}

int BLMonsterData::getPosX() const
{
  return *(undefined4 *)(((int)this) + 0x2c);
}

void BLMonsterData::setPosX(int p1)
{
  *(undefined4 *)(((int)this) + 0x2c) = p1;
  return;
}

int BLMonsterData::getPosY() const
{
  return *(undefined4 *)(((int)this) + 0x30);
}

void BLMonsterData::setPosY(int p1)
{
  *(undefined4 *)(((int)this) + 0x30) = p1;
  return;
}

BLMonsterResData* BLMonsterData::getMonsterResData() const
{
  return (BLMonsterResData*)(*(undefined4 *)(((int)this) + 0x34));
}

void BLMonsterData::setMonsterResData(BLMonsterResData* p1)
{
  *(undefined4 *)(((int)this) + 0x34) = (undefined4)(intptr_t)p1;
  return;
}

int BLMonsterData::getAttrLV() const
{
  return *(undefined4 *)(((int)this) + 0x38);
}

void BLMonsterData::setAttrLV(int p1)
{
  *(undefined4 *)(((int)this) + 0x38) = p1;
  return;
}

int BLMonsterData::getPaBody() const
{
  return *(undefined4 *)(((int)this) + 0x3c);
}

void BLMonsterData::setPaBody(int p1)
{
  *(undefined4 *)(((int)this) + 0x3c) = p1;
  return;
}

int BLMonsterData::getEnemyType() const
{
  return *(undefined4 *)(((int)this) + 0x40);
}

void BLMonsterData::setEnemyType(int p1)
{
  *(undefined4 *)(((int)this) + 0x40) = p1;
  return;
}

int BLMonsterData::getBaseY() const
{
  return *(undefined4 *)(((int)this) + 0x44);
}

void BLMonsterData::setBaseY(int p1)
{
  *(undefined4 *)(((int)this) + 0x44) = p1;
  return;
}

void BLMonsterData::setRoleName(std::string p1)
{
  func_0079e52c(((int)this) + 0x48);
  return;
}

void BLMonsterData::setAttribute(std::string p1)
{
  func_0079e52c(((int)this) + 0x24);
  return;
}

void BLMonsterData::setResID(std::string p1)
{
  func_0079e52c(((int)this) + 0x1c);
  return;
}

void BLMonsterData::setID(std::string p1)
{
  func_0079e52c(((int)this) + 0x18);
  return;
}

BLMonsterData::~BLMonsterData()
{
  undefined4 uVar1;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [8];
  
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(auStack_1c,((intptr_t)"BLMonsterData"),auStack_20);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)auStack_1c);
  func_0079e2bc(auStack_1c);
  if (*(int *)((int)this + 4*(0xd)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0xd)) = 0;
  }
  func_0079e2bc(((int)this) + 0x12);
  func_0079e2bc(((int)this) + 9);
  func_0079e2bc(((int)this) + 7);
  func_0079e2bc(((int)this) + 6);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

std::string BLMonsterData::getRoleName() const
{ return *(std::string *)(((int)this) + 0x48); }

std::string BLMonsterData::getAttribute() const
{ return *(std::string *)(((int)this) + 0x24); }

std::string BLMonsterData::getResID() const
{ return *(std::string *)(((int)this) + 0x1c); }

std::string BLMonsterData::getID() const
{ return *(std::string *)(((int)this) + 0x18); }

BLMonsterData::BLMonsterData()
{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [8];
  
  0 /* ctorZero */;
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  iVar2 = g_00459518 + 0x45946a;
  iVar3 = *(int *)(g_00459514 + 0x459466) + 0xc;
  *(int *)((int)this + 4*(6)) = iVar3;
  *(int *)((int)this + 4*(7)) = iVar3;
  *(int *)((int)this + 4*(9)) = iVar3;
  *(int *)((int)this + 4*(0x12)) = iVar3;
  func_0079e2dc(((int)this) + 6,iVar2);
  func_0079e2dc(((int)this) + 7,g_0045951c + 0x45948c);
  iVar2 = g_00459520;
  *(int *)((int)this + 4*(8)) = 0;
  func_0079e2dc(((int)this) + 9,iVar2 + 0x45949a);
  *(int *)((int)this + 4*(5)) = 0x3f800000;
  iVar2 = g_00459524;
  *(int *)((int)this + 4*(10)) = 0;
  *(int *)((int)this + 4*(0xb)) = 0;
  *(int *)((int)this + 4*(0xc)) = 0;
  *(int *)((int)this + 4*(0xe)) = 0;
  *(int *)((int)this + 4*(0xf)) = 0;
  *(int *)((int)this + 4*(0xd)) = 0;
  *(int *)((int)this + 4*(0x10)) = 1;
  *(int *)((int)this + 4*(0x11)) = 0;
  func_0079e2dc(((int)this) + 0x12,iVar2 + 0x4594bc);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(auStack_1c,((intptr_t)"BLMonsterData"),auStack_20);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)auStack_1c);
  func_0079e2bc(auStack_1c);
  return;
}

bool BLMonsterData::init()
{
  return 1;
}

// ===== 修复: 补回被误删的函数占位 (2) =====
void BLMonsterData::preLoadResData()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMonsterData::initWith(std::string p1, bool p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
