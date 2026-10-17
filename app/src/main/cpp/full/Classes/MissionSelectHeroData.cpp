#include "MissionSelectHeroData.h"
#include "CCObject.h"
#include "CCDictionary.h"
#include "BLLeakUtils.h"
#include "DBUtil.h"
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
extern "C" long long func_0079e43c(...);
extern "C" long long func_0079e44c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e46c(...);
extern "C" long long func_0079e47c(...);
extern "C" long long func_0079e4bc(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e5dc(...);
extern "C" long long func_0079e69c(...);
extern "C" long long func_0079e874(...);
extern "C" long long func_0079e934(...);
extern "C" long long func_0079e944(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long _DAT_004966d8;
extern "C" unsigned long _DAT_004966dc;
extern "C" unsigned long _DAT_00496780;
extern "C" unsigned long _DAT_00496784;
extern "C" unsigned long _DAT_00496788;
extern "C" unsigned long _DAT_0049678c;
extern "C" unsigned long _DAT_004968e8;
extern "C" unsigned long _DAT_004968ec;
extern "C" unsigned long _DAT_004968f0;
extern "C" unsigned long _DAT_004968f4;
extern "C" unsigned long _DAT_004968f8;
extern "C" unsigned long _DAT_00496c40;
extern "C" unsigned long _DAT_00496c44;
extern "C" unsigned long _DAT_00496c48;
extern "C" unsigned long _DAT_00496c4c;
extern "C" unsigned long _DAT_00496c50;
extern "C" unsigned long _DAT_00496c54;
extern "C" unsigned long _DAT_00496c58;
extern "C" unsigned long _DAT_00496c5c;
extern "C" unsigned long _DAT_00496c60;
extern "C" unsigned long _DAT_00496c64;
extern "C" unsigned long _DAT_00496c68;
extern "C" unsigned long _DAT_00496c6c;
extern "C" unsigned long _DAT_00496c70;
extern "C" unsigned long g_004966d8;
extern "C" unsigned long g_004966dc;
extern "C" unsigned long g_00496780;
extern "C" unsigned long g_00496784;
extern "C" unsigned long g_00496788;
extern "C" unsigned long g_0049678c;
extern "C" unsigned long g_004968e8;
extern "C" unsigned long g_004968ec;
extern "C" unsigned long g_004968f0;
extern "C" unsigned long g_004968f4;
extern "C" unsigned long g_004968f8;
extern "C" unsigned long g_00496c40;
extern "C" unsigned long g_00496c44;
extern "C" unsigned long g_00496c48;
extern "C" unsigned long g_00496c4c;
extern "C" unsigned long g_00496c50;
extern "C" unsigned long g_00496c54;
extern "C" unsigned long g_00496c58;
extern "C" unsigned long g_00496c5c;
extern "C" unsigned long g_00496c60;
extern "C" unsigned long g_00496c64;
extern "C" unsigned long g_00496c68;
extern "C" unsigned long g_00496c6c;
extern "C" unsigned long g_00496c70;
int * MissionSelectHeroData::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x24)));
  0 /* ctorZero */;
  iVar2 = ((MissionSelectHeroData *)piVar1)->init();
  if (iVar2 == 0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    piVar1 = (int *)0x0;
  }
  else {
    ((cocos2d::CCObject *)piVar1)->autorelease();
  }
  return (int *)(piVar1);
}

int MissionSelectHeroData::getType() const
{
  return *(undefined4 *)(((int)this) + 0x14);
}

void MissionSelectHeroData::setType(int p1)
{
  *(undefined4 *)(((int)this) + 0x14) = p1;
  return;
}

cocos2d::CCDictionary* MissionSelectHeroData::getDicHeros() const
{
  return (cocos2d::CCDictionary*)(*(undefined4 *)(((int)this) + 0x1c));
}

void MissionSelectHeroData::setHeros(std::string p1)
{
  func_0079e52c(((int)this) + 0x18);
  return;
}

MissionSelectHeroData::~MissionSelectHeroData()
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
  if (*(int *)((int)this + 4*(7)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(7)) = 0;
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_1c,((intptr_t)"MissionSelectHeroData"),&piStack_20);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_1c);
  func_0079e2bc(&uStack_1c);
  func_0079e2bc(((int)this) + 6);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

std::string MissionSelectHeroData::getHeros() const
{ return *(std::string *)(((int)this) + 0x18); }


bool MissionSelectHeroData::init()
{
  return 1;
}

// ===== 修复: 补回被误删的函数占位 (4) =====
void MissionSelectHeroData::setDicHeros(cocos2d::CCDictionary* p1)
{
  *(undefined4 *)(((int)this) + 0x1c) = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  return;
}

MissionSelectHeroData::MissionSelectHeroData()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  piStack_20 = (int *)((int)this);
  uStack_1c = (undefined4)(p2);
  uStack_18 = (undefined4)(p3);
  0 /* ctorZero */;
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  *(int *)((int)this + 4*(6)) = *(int *)(g_00496784 + 0x49671c) + 0xc;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_1c,((intptr_t)"MissionSelectHeroData"),&piStack_20);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_1c);
  func_0079e2bc(&uStack_1c);
  iVar2 = (undefined4)(intptr_t)(cocos2d::CCDictionary::create());
  *(int *)((int)this + 4*(7)) = iVar2;
  if (iVar2 != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  func_0079e2dc(((int)this) + 6,g_0049678c + 0x496754);
  *(int *)((int)this + 4*(5)) = 0;
  *(undefined1 *)(((int)this) + 8) = 0;
  return;
}

void MissionSelectHeroData::initWithMissionType(int p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void MissionSelectHeroData::updateData()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
