#include "BLAttrGroupData.h"
#include "BLLeakUtils.h"
#include "DataManager.h"
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
extern "C" long long func_0079e2ec(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4bc(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long func_0079e5bc(...);
extern "C" long long func_0079e5fc(...);
extern "C" long long func_0079e69c(...);
extern "C" long long func_0079e784(...);
extern "C" long long func_0079e874(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0045552c;
extern "C" unsigned long _DAT_0045559c;
extern "C" unsigned long _DAT_004555a0;
extern "C" unsigned long _DAT_004555a4;
extern "C" unsigned long _DAT_004555a8;
extern "C" unsigned long _DAT_004555ac;
extern "C" unsigned long _DAT_004555b0;
extern "C" unsigned long _DAT_00455654;
extern "C" unsigned long _DAT_00455658;
extern "C" unsigned long _DAT_0045570c;
extern "C" unsigned long _DAT_00455710;
extern "C" unsigned long _DAT_00455714;
extern "C" unsigned long _DAT_00455958;
extern "C" unsigned long _DAT_0045595c;
extern "C" unsigned long _DAT_00455960;
extern "C" unsigned long _DAT_00455964;
extern "C" unsigned long _DAT_00455968;
extern "C" unsigned long _DAT_0045596c;
extern "C" unsigned long _DAT_00455970;
extern "C" unsigned long extraout_r3;
extern "C" unsigned long g_0045552c;
extern "C" unsigned long g_0045559c;
extern "C" unsigned long g_004555a0;
extern "C" unsigned long g_004555a4;
extern "C" unsigned long g_004555a8;
extern "C" unsigned long g_004555ac;
extern "C" unsigned long g_004555b0;
extern "C" unsigned long g_00455654;
extern "C" unsigned long g_00455658;
extern "C" unsigned long g_0045570c;
extern "C" unsigned long g_00455710;
extern "C" unsigned long g_00455714;
extern "C" unsigned long g_00455958;
extern "C" unsigned long g_0045595c;
extern "C" unsigned long g_00455960;
extern "C" unsigned long g_00455964;
extern "C" unsigned long g_00455968;
extern "C" unsigned long g_0045596c;
extern "C" unsigned long g_00455970;
void BLAttrGroupData::setID(std::string p1)
{
  func_0079e52c(((int)this) + 0x18);
  return;
}

std::string BLAttrGroupData::getID() const
{ return *(std::string *)(((int)this) + 0x18); }

bool BLAttrGroupData::init()
{
  return 1;
}

undefined8 BLAttrGroupData::updateWithLV(int p1, float p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

BLAttrGroupData::~BLAttrGroupData()
{
  undefined4 uVar1;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [8];
  
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  if (*(int *)((int)this + 4*(5)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(5)) = 0;
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(auStack_1c,((intptr_t)"BLAttrGroupData"),auStack_20);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)auStack_1c);
  func_0079e2bc(auStack_1c);
  ((std::vector<float, std::allocator<float>> *)((int)this) + 0xd)->~vector();
  ((std::vector<float, std::allocator<float>> *)((int)this) + 10)->~vector();
  ((std::vector<int, std::allocator<int>> *)((int)this) + 7)->~vector();
  func_0079e2bc(((int)this) + 6);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLAttrGroupData::BLAttrGroupData()
{
  undefined4 p2 = 0;

  int iVar1;
  undefined4 uVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  *(int *)((int)this + 4*(6)) = *(int *)(g_00455710 + 0x455688) + 0xc;
  *(int *)((int)this + 4*(7)) = 0;
  *(int *)((int)this + 4*(8)) = 0;
  *(int *)((int)this + 4*(9)) = 0;
  *(int *)((int)this + 4*(10)) = 0;
  *(int *)((int)this + 4*(0xb)) = 0;
  *(int *)((int)this + 4*(0xc)) = 0;
  *(int *)((int)this + 4*(0xd)) = 0;
  *(int *)((int)this + 4*(0xe)) = 0;
  *(int *)((int)this + 4*(0xf)) = 0;
  *(int *)((int)this + 4*(5)) = 0;
  iVar1 = (undefined4)(intptr_t)(cocos2d::CCDictionary::create());
  *(int *)((int)this + 4*(5)) = iVar1;
  if (iVar1 != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLAttrGroupData"),&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

void BLAttrGroupData::initWith(std::string p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
