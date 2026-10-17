#include "RoleData.h"
#include "BLLeakUtils.h"
#include "DBUtil.h"
#include "DataCacheManager.h"
#include "DataManager.h"
#include "RenascenceBaseData.h"
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
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e69c(...);
extern "C" long long func_0079e6c0(...);
extern "C" long long func_0079e874(...);
extern "C" long long func_0079ea54(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long _DAT_004a76ac;
extern "C" unsigned long _DAT_004a76b0;
extern "C" unsigned long _DAT_004a775c;
extern "C" unsigned long _DAT_004a7760;
extern "C" unsigned long _DAT_004a7764;
extern "C" unsigned long _DAT_004a7768;
extern "C" unsigned long _DAT_004a77f4;
extern "C" unsigned long _DAT_004a78b0;
extern "C" unsigned long _DAT_004a78b4;
extern "C" unsigned long _DAT_004a7c8c;
extern "C" unsigned long _DAT_004a7c90;
extern "C" unsigned long _DAT_004a7c94;
extern "C" unsigned long _DAT_004a7c98;
extern "C" unsigned long _DAT_004a7c9c;
extern "C" unsigned long _DAT_004a7ca0;
extern "C" unsigned long _DAT_004a7ca4;
extern "C" unsigned long _DAT_004a7ca8;
extern "C" unsigned long _DAT_004a7cac;
extern "C" unsigned long _DAT_004a7cb0;
extern "C" unsigned long _DAT_004a7cb4;
extern "C" unsigned long _DAT_004a7cb8;
extern "C" unsigned long _DAT_004a7cbc;
extern "C" unsigned long _DAT_004a7cc0;
extern "C" unsigned long _DAT_004a7cc4;
extern "C" unsigned long _DAT_004a7cc8;
extern "C" unsigned long _DAT_004a7ccc;
extern "C" unsigned long _DAT_004a7cd0;
extern "C" unsigned long _DAT_004a7cd4;
extern "C" unsigned long _DAT_004a7cd8;
extern "C" unsigned long _DAT_004a7cdc;
extern "C" unsigned long _DAT_004a7ce0;
extern "C" unsigned long _DAT_004a7ce4;
extern "C" unsigned long _DAT_004a7f4c;
extern "C" unsigned long _DAT_004a7f50;
extern "C" unsigned long _DAT_004a7f54;
extern "C" unsigned long _DAT_004a7f58;
extern "C" unsigned long _DAT_004a7f5c;
extern "C" unsigned long _DAT_004a7f60;
extern "C" unsigned long _DAT_004a7f64;
extern "C" unsigned long g_004a76ac;
extern "C" unsigned long g_004a76b0;
extern "C" unsigned long g_004a775c;
extern "C" unsigned long g_004a7760;
extern "C" unsigned long g_004a7764;
extern "C" unsigned long g_004a7768;
extern "C" unsigned long g_004a77f4;
extern "C" unsigned long g_004a78b0;
extern "C" unsigned long g_004a78b4;
extern "C" unsigned long g_004a7c8c;
extern "C" unsigned long g_004a7c90;
extern "C" unsigned long g_004a7c94;
extern "C" unsigned long g_004a7c98;
extern "C" unsigned long g_004a7c9c;
extern "C" unsigned long g_004a7ca0;
extern "C" unsigned long g_004a7ca4;
extern "C" unsigned long g_004a7ca8;
extern "C" unsigned long g_004a7cac;
extern "C" unsigned long g_004a7cb0;
extern "C" unsigned long g_004a7cb4;
extern "C" unsigned long g_004a7cb8;
extern "C" unsigned long g_004a7cbc;
extern "C" unsigned long g_004a7cc0;
extern "C" unsigned long g_004a7cc4;
extern "C" unsigned long g_004a7cc8;
extern "C" unsigned long g_004a7ccc;
extern "C" unsigned long g_004a7cd0;
extern "C" unsigned long g_004a7cd4;
extern "C" unsigned long g_004a7cd8;
extern "C" unsigned long g_004a7cdc;
extern "C" unsigned long g_004a7ce0;
extern "C" unsigned long g_004a7ce4;
extern "C" unsigned long g_004a7f4c;
extern "C" unsigned long g_004a7f50;
extern "C" unsigned long g_004a7f54;
extern "C" unsigned long g_004a7f58;
extern "C" unsigned long g_004a7f5c;
extern "C" unsigned long g_004a7f60;
extern "C" unsigned long g_004a7f64;
int * RoleData::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x4c)));
  0 /* ctorZero */;
  iVar2 = ((RoleData *)piVar1)->init();
  if (iVar2 == 0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    piVar1 = (int *)0x0;
  }
  else {
    ((cocos2d::CCObject *)piVar1)->autorelease();
  }
  return (int *)(piVar1);
}

int RoleData::getLV() const
{
  return *(undefined4 *)(((int)this) + 0x18);
}

void RoleData::setLV(int p1)
{
  *(undefined4 *)(((int)this) + 0x18) = p1;
  return;
}

long RoleData::getExp() const
{
  return *(undefined4 *)(((int)this) + 0x1c);
}

void RoleData::setExp(long p1)
{
  *(undefined4 *)(((int)this) + 0x1c) = p1;
  return;
}

int RoleData::getSoul() const
{
  return *(undefined4 *)(((int)this) + 0x20);
}

void RoleData::setSoul(int p1)
{
  *(undefined4 *)(((int)this) + 0x20) = p1;
  return;
}

bool RoleData::getISOwen() const
{
  return *(undefined1 *)(((int)this) + 0x24);
}

void RoleData::setISOwen(bool p1)
{
  *(undefined1 *)(((int)this) + 0x24) = p1;
  return;
}

int RoleData::getStar() const
{
  return *(undefined4 *)(((int)this) + 0x28);
}

void RoleData::setStar(int p1)
{
  *(undefined4 *)(((int)this) + 0x28) = p1;
  return;
}

int RoleData::getSkillQ() const
{
  return *(undefined4 *)(((int)this) + 0x2c);
}

void RoleData::setSkillQ(int p1)
{
  *(undefined4 *)(((int)this) + 0x2c) = p1;
  return;
}

int RoleData::getSkillW() const
{
  return *(undefined4 *)(((int)this) + 0x30);
}

void RoleData::setSkillW(int p1)
{
  *(undefined4 *)(((int)this) + 0x30) = p1;
  return;
}

int RoleData::getSkillE() const
{
  return *(undefined4 *)(((int)this) + 0x34);
}

void RoleData::setSkillE(int p1)
{
  *(undefined4 *)(((int)this) + 0x34) = p1;
  return;
}

int RoleData::getSkillR() const
{
  return *(undefined4 *)(((int)this) + 0x38);
}

void RoleData::setSkillR(int p1)
{
  *(undefined4 *)(((int)this) + 0x38) = p1;
  return;
}

int RoleData::getRenascenceTime() const
{
  return *(undefined4 *)(((int)this) + 0x3c);
}

void RoleData::setRenascenceTime(int p1)
{
  *(undefined4 *)(((int)this) + 0x3c) = p1;
  return;
}

int RoleData::getAttackBreakCount() const
{
  return *(undefined4 *)(((int)this) + 0x40);
}

void RoleData::setAttackBreakCount(int p1)
{
  *(undefined4 *)(((int)this) + 0x40) = p1;
  return;
}

int RoleData::getDefenceBreakCount() const
{
  return *(undefined4 *)(((int)this) + 0x44);
}

void RoleData::setDefenceBreakCount(int p1)
{
  *(undefined4 *)(((int)this) + 0x44) = p1;
  return;
}

int RoleData::getBloodBreakCount() const
{
  return *(undefined4 *)(((int)this) + 0x48);
}

void RoleData::setBloodBreakCount(int p1)
{
  *(undefined4 *)(((int)this) + 0x48) = p1;
  return;
}

void RoleData::setRoleID(std::string p1)
{
  func_0079e52c(((int)this) + 0x14);
  return;
}

RoleData::~RoleData()
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
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_1c,((intptr_t)"RoleData"),&piStack_20);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_1c);
  func_0079e2bc(&uStack_1c);
  func_0079e2bc(((int)this) + 5);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

std::string RoleData::getRoleID() const
{ return *(std::string *)(((int)this) + 0x14); }

RoleData::RoleData()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;

  int iVar1;
  undefined4 uVar2;
  int *piStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  piStack_20 = (int *)((int)this);
  uStack_1c = (undefined4)(p2);
  uStack_18 = (undefined4)(p3);
  0 /* ctorZero */;
  iVar1 = g_004a7760;
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  *(int *)((int)this + 4*(5)) = *(int *)(g_004a7764 + 0x4a76f6) + 0xc;
  func_0079e2dc(((int)this) + 5,iVar1 + 0x4a76f4);
  *(int *)((int)this + 4*(7)) = 0;
  *(int *)((int)this + 4*(6)) = 1;
  *(int *)((int)this + 4*(8)) = 0;
  *(undefined1 *)(((int)this) + 9) = 0;
  *(int *)((int)this + 4*(10)) = 0;
  *(int *)((int)this + 4*(0xb)) = 1;
  *(int *)((int)this + 4*(0xc)) = 1;
  *(int *)((int)this + 4*(0xe)) = 1;
  *(int *)((int)this + 4*(0xd)) = 1;
  *(int *)((int)this + 4*(0x11)) = 0;
  *(int *)((int)this + 4*(0x10)) = 0;
  *(int *)((int)this + 4*(0x12)) = 0;
  *(int *)((int)this + 4*(0xf)) = 0;
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_1c,((intptr_t)"RoleData"),&piStack_20);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_1c);
  func_0079e2bc(&uStack_1c);
  return;
}

bool RoleData::init()
{
  return 1;
}

void RoleData::saveData()
{
  return;
}



void RoleData::getMaxLv()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((DataCacheManager *)this)->shareManager();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0xd0))());
  ((RenascenceBaseData *)uVar2)->getTotalRaiseLvBound(*(undefined4 *)(((int)this) + 0x3c));
  return;
}

// ===== 修复: 补回被误删的函数占位 (3) =====
void RoleData::getSqlResult(std::string p1, std::string p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void RoleData::updateData(std::string p1, std::string p2, std::string p3)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void RoleData::initWihtID(std::string p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
