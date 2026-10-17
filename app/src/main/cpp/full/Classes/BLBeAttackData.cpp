#include "BLBeAttackData.h"
#include "CCObject.h"
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
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e69c(...);
extern "C" long long func_0079e6c0(...);
extern "C" long long func_0079e874(...);
extern "C" unsigned long _DAT_004394d0;
extern "C" unsigned long _DAT_004398e4;
extern "C" unsigned long _DAT_004398e8;
extern "C" unsigned long _DAT_004398ec;
extern "C" unsigned long _DAT_00439a34;
extern "C" unsigned long _DAT_00439a38;
extern "C" unsigned long _DAT_00439a3c;
extern "C" unsigned long _DAT_00439a40;
extern "C" unsigned long _DAT_00439a44;
extern "C" unsigned long _DAT_00439a48;
extern "C" unsigned long extraout_r2;
extern "C" unsigned long g_004394d0;
extern "C" unsigned long g_004398e4;
extern "C" unsigned long g_004398e8;
extern "C" unsigned long g_004398ec;
extern "C" unsigned long g_00439a34;
extern "C" unsigned long g_00439a38;
extern "C" unsigned long g_00439a3c;
extern "C" unsigned long g_00439a40;
extern "C" unsigned long g_00439a44;
extern "C" unsigned long g_00439a48;
int BLBeAttackData::getLV() const
{
  return *(undefined4 *)(((int)this) + 0x18);
}

void BLBeAttackData::setLV(int p1)
{
  *(undefined4 *)(((int)this) + 0x18) = p1;
  return;
}

bool BLBeAttackData::getISFlapX() const
{
  return *(undefined1 *)(((int)this) + 0x1c);
}

void BLBeAttackData::setISFlapX(bool p1)
{
  *(undefined1 *)(((int)this) + 0x1c) = p1;
  return;
}

void BLBeAttackData::setBeAttackType(std::string p1)
{
  func_0079e52c(((int)this) + 0x14);
  return;
}

std::string BLBeAttackData::getBeAttackType() const
{ return *(std::string *)(((int)this) + 0x14); }

BLBeAttackData::~BLBeAttackData()
{
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  func_0079e2bc(((int)this) + 5);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLBeAttackData::BLBeAttackData()
{
  undefined4 p4 = 0;

  int iVar1;
  undefined4 extraout_r2;
  
  0 /* ctorZero */;
  iVar1 = g_004398e8;
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  *(int *)((int)this + 4*(5)) = *(int *)(g_004398ec + 0x4398bc) + 0xc;
  *(int *)((int)this + 4*(6)) = 0;
  *(undefined1 *)(((int)this) + 7) = 1;
  func_0079e2dc(((int)this) + 5,iVar1 + 0x4398c0,extraout_r2,1,p4);
  return;
}

bool BLBeAttackData::init()
{
  return 1;
}

int * BLBeAttackData::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x20)));
  0 /* ctorZero */;
  iVar2 = ((BLBeAttackData *)piVar1)->init();
  if (iVar2 == 0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    piVar1 = (int *)0x0;
  }
  else {
    ((cocos2d::CCObject *)piVar1)->autorelease();
  }
  return (int *)(piVar1);
}

// ===== 修复: 补回被误删的函数占位 (2) =====
void BLBeAttackData::initWithName(std::string p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLBeAttackData::initWith(char** p1, int& p2)
{
  undefined4 uVar1;
  int iVar2;
  
  func_0079e2dc(((int)this) + 0x14,*(undefined4 *)(*(int *)p2 * 4 + p1));
  iVar2 = (int)*(int *)&(*(int *)p2);
  *(int *)p2 = iVar2 + 1;
  uVar1 = (undefined4)(func_0079e6c0(*(undefined4 *)((iVar2 + 1) * 4 + p1)));
  *(undefined4 *)(((int)this) + 0x18) = uVar1;
  iVar2 = (int)*(int *)&(*(int *)p2);
  *(int *)p2 = iVar2 + 1;
  iVar2 = (undefined4)(intptr_t)(func_0079e6c0(*(undefined4 *)((iVar2 + 1) * 4 + p1)));
  *(char *)(((int)this) + 0x1c) = '\x01' - (iVar2 == 0);
  *(int *)p2 = *(int *)p2 + 1;
  return;
}
