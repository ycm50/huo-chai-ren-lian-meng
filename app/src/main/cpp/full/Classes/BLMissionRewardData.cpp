#include "BLMissionRewardData.h"
#include "GateStatusData.h"
#include "CCObject.h"
#include "BLLeakUtils.h"
#include "DataManager.h"
#include "FestivalHttpUtil.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <new>   // ghost_fix.js 自动补齐
#include "BLForwards.h"

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
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2dc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4bc(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e69c(...);
extern "C" long long func_0079e6c0(...);
extern "C" long long func_0079e804(...);
extern "C" long long func_0079e814(...);
extern "C" long long func_0079e874(...);
extern "C" long long func_0079ea04(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long _DAT_00458d14;
extern "C" unsigned long _DAT_00458d18;
extern "C" unsigned long _DAT_00458dc0;
extern "C" unsigned long _DAT_00458dc4;
extern "C" unsigned long _DAT_00458dc8;
extern "C" unsigned long _DAT_00458f90;
extern "C" unsigned long _DAT_00458f94;
extern "C" unsigned long _DAT_00458f98;
extern "C" unsigned long _DAT_00458f9c;
extern "C" unsigned long _DAT_00459234;
extern "C" unsigned long _DAT_00459238;
extern "C" unsigned long _DAT_0045923c;
extern "C" unsigned long _DAT_00459240;
extern "C" unsigned long _DAT_00459244;
extern "C" unsigned long _DAT_00459248;
extern "C" unsigned long _DAT_0045924c;
extern "C" unsigned long _DAT_00459250;
extern "C" unsigned long g_00458d14;
extern "C" unsigned long g_00458d18;
extern "C" unsigned long g_00458dc0;
extern "C" unsigned long g_00458dc4;
extern "C" unsigned long g_00458dc8;
extern "C" unsigned long g_00458f90;
extern "C" unsigned long g_00458f94;
extern "C" unsigned long g_00458f98;
extern "C" unsigned long g_00458f9c;
extern "C" unsigned long g_00459234;
extern "C" unsigned long g_00459238;
extern "C" unsigned long g_0045923c;
extern "C" unsigned long g_00459240;
extern "C" unsigned long g_00459244;
extern "C" unsigned long g_00459248;
extern "C" unsigned long g_0045924c;
extern "C" unsigned long g_00459250;
int BLMissionRewardData::getExp() const
{
  return *(undefined4 *)(((int)this) + 0x1c);
}

void BLMissionRewardData::setExp(int p1)
{
  *(undefined4 *)(((int)this) + 0x1c) = p1;
  return;
}

long long BLMissionRewardData::getCopper() const
{
  return *(undefined8 *)(((int)this) + 0x20);
}

long long BLMissionRewardData::getDiamond() const
{
  return *(undefined8 *)(((int)this) + 0x28);
}

int BLMissionRewardData::getProbabily() const
{
  return *(undefined4 *)(((int)this) + 0x34);
}

void BLMissionRewardData::setProbabily(int p1)
{
  *(undefined4 *)(((int)this) + 0x34) = p1;
  return;
}

int BLMissionRewardData::getFesitems() const
{
  return *(undefined4 *)(((int)this) + 0x38);
}

void BLMissionRewardData::setFesitems(int p1)
{
  *(undefined4 *)(((int)this) + 0x38) = p1;
  return;
}

int BLMissionRewardData::getFesprobability() const
{
  return *(undefined4 *)(((int)this) + 0x3c);
}

void BLMissionRewardData::setFesprobability(int p1)
{
  *(undefined4 *)(((int)this) + 0x3c) = p1;
  return;
}

void BLMissionRewardData::setItems(std::string * p1)
{
  func_0079e52c(((int)this) + 0x30);
  return;
}

void BLMissionRewardData::setName(std::string * p1)
{
  func_0079e52c(((int)this) + 0x18);
  return;
}

void BLMissionRewardData::setID(std::string * p1)
{
  func_0079e52c(((int)this) + 0x14);
  return;
}

std::string BLMissionRewardData::getItems() const
{ return *(std::string *)(((int)this) + 0x30); }

std::string BLMissionRewardData::getName() const
{ return *(std::string *)(((int)this) + 0x18); }

std::string BLMissionRewardData::getID() const
{ return *(std::string *)(((int)this) + 0x14); }

BLMissionRewardData::~BLMissionRewardData()
{
  undefined4 uVar1;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [8];
  
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(auStack_1c,((intptr_t)"BLMissionRewardData"),auStack_20);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)auStack_1c);
  func_0079e2bc(auStack_1c);
  if (*(int *)((int)this + 4*(0x10)) != 0) {
    (void)(::operator delete((void *)(*(int *)((int)this + 4*(0x10)))));
  }
  func_0079e2bc(((int)this) + 0xc);
  func_0079e2bc(((int)this) + 6);
  func_0079e2bc(((int)this) + 5);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLMissionRewardData::BLMissionRewardData()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  iVar2 = *(int *)(g_00458dc4 + 0x458d48) + 0xc;
  *(int *)((int)this + 4*(5)) = iVar2;
  *(int *)((int)this + 4*(6)) = iVar2;
  *(int *)((int)this + 4*(0xc)) = iVar2;
  *(int *)((int)this + 4*(0x10)) = 0;
  *(int *)((int)this + 4*(0x11)) = 0;
  *(int *)((int)this + 4*(0x12)) = 0;
  *(int *)((int)this + 4*(7)) = 0;
  *(int *)((int)this + 4*(8)) = 0;
  *(int *)((int)this + 4*(9)) = 0;
  *(int *)((int)this + 4*(10)) = 0;
  *(int *)((int)this + 4*(0xb)) = 0;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLMissionRewardData"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

bool BLMissionRewardData::init()
{
  return 1;
}



int * BLMissionRewardData::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x50)));
  0 /* ctorZero */;
  iVar2 = ((BLMissionRewardData *)piVar1)->init();
  if (iVar2 == 0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    piVar1 = (int *)0x0;
  }
  else {
    ((cocos2d::CCObject *)piVar1)->autorelease();
  }
  return (int *)(piVar1);
}

// ===== 修复: 补回被误删的函数占位 (4) =====
void BLMissionRewardData::setCopper(long long p1)
{
  undefined4 p3 = 0;
  undefined4 p4 = 0;

  *(undefined4 *)(((int)this) + 0x20) = p3;
  *(undefined4 *)(((int)this) + 0x24) = p4;
  return;
}

void BLMissionRewardData::setDiamond(long long p1)
{
  undefined4 p3 = 0;
  undefined4 p4 = 0;

  *(undefined4 *)(((int)this) + 0x28) = p3;
  *(undefined4 *)(((int)this) + 0x2c) = p4;
  return;
}

void BLMissionRewardData::initItems(std::string& p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMissionRewardData::initWitID(std::string * p1)
{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined1 auStack_44 [4];
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  undefined4 uStack_34;
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [4];
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined1 auStack_1c [8];
  
  func_0079e52c(((int)this) + 0x14);
  func_0079e45c(auStack_44,g_00459234 + 0x45905c,auStack_1c);
  iStack_40 = 0;
  func_0079e45c(&uStack_34," select * from ",auStack_1c);
  func_0079e69c(&uStack_34,"mission_reward");
  func_0079e69c(&uStack_34," where ");
  func_0079e69c(&uStack_34,"id");
  func_0079e69c(&uStack_34," = ");
  func_0079e53c(auStack_30,((int)this) + 0x14);
  0 /* ctorZero */;
  func_0079e874(&uStack_34,auStack_2c);
  func_0079e2bc(auStack_2c);
  func_0079e2bc(auStack_30);
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  uVar2 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x18)))());
  iVar3 = (undefined4)(intptr_t)(sqlite3_get_table(uVar2,uStack_34,&iStack_40,&iStack_3c,&iStack_38,0));
  if ((iVar3 == 0) && (0 < iStack_3c)) {
    iVar4 = (undefined4)(intptr_t)((iStack_38 + 2) * 4);
    func_0079e2dc(((int)this) + 0x18,*(undefined4 *)(iStack_40 + iVar4));
    uVar2 = (undefined4)(func_0079ea04(*(undefined4 *)(iStack_40 + iVar4 + 4)));
    *(undefined4 *)(((int)this) + 0x1c) = uVar2;
    iVar3 = (undefined4)(intptr_t)(func_0079ea04(*(undefined4 *)(iStack_40 + iVar4 + 8)));
    *(int *)(((int)this) + 0x20) = iVar3;
    *(int *)(((int)this) + 0x24) = iVar3 >> 0x1f;
    iVar3 = (undefined4)(intptr_t)(func_0079e6c0(*(undefined4 *)(iStack_40 + iVar4 + 0xc)));
    *(int *)(((int)this) + 0x28) = iVar3;
    *(int *)(((int)this) + 0x2c) = iVar3 >> 0x1f;
    func_0079e2dc(((int)this) + 0x30,*(undefined4 *)(iStack_40 + iVar4 + 0x10));
    uVar2 = (undefined4)(func_0079e6c0(*(undefined4 *)(iStack_40 + iVar4 + 0x14)));
    *(undefined4 *)(((int)this) + 0x38) = 0;
    *(undefined4 *)(((int)this) + 0x34) = uVar2;
    uVar2 = (undefined4)(func_0079e6c0(*(undefined4 *)(iStack_40 + iVar4 + 0x1c)));
    *(undefined4 *)(((int)this) + 0x3c) = uVar2;
  }
  iVar3 = (undefined4)(intptr_t)(((sir::singleton<GateStatusData, 0> *)this)->instance());
  if (*(int *)(iVar3 + 0x38) != -1) {
    piVar1 = (int *)((FestivalHttpUtil *)this)->getInstance();
    (**(code **)(*(int *)(piVar1) + (0x20)))(&uStack_28,piVar1);
    iVar3 = (undefined4)(intptr_t)(func_0079e6c0(uStack_28));
    func_0079e2bc(&uStack_28);
    if (iVar3 == 0) {
      ((FestivalHttpUtil *)this)->getInstance();
      ((FestivalHttpUtil *)this)->getFestivalDate();
      piVar1 = (int *)((FestivalHttpUtil *)this)->getInstance();
      puVar5 = &uStack_20;
      (**(code **)(*(int *)(piVar1) + (0x20)))(puVar5,piVar1);
      uStack_24 = (undefined4)(uStack_20);
    }
    else {
      piVar1 = (int *)((FestivalHttpUtil *)this)->getInstance();
      puVar5 = &uStack_24;
      (**(code **)(*(int *)(piVar1) + (0x20)))(puVar5,piVar1);
    }
    uVar2 = (undefined4)(func_0079e6c0(uStack_24));
    *(undefined4 *)(((int)this) + 0x38) = uVar2;
    func_0079e2bc(puVar5);
  }
  func_0079e53c(auStack_1c,((int)this) + 0x30);
  *(undefined4 *)(((int)this) + 0x44) = *(undefined4 *)(((int)this) + 0x40);
  while ((iVar3 = func_0079e4bc(auStack_1c,g_0045924c + 0x4591d4), iVar3 != 0 &&
         (iVar3 = func_0079e4bc(auStack_1c,g_00459250 + 0x4591e2), iVar3 != 0))) {
    (((BLMissionRewardData *)(((int)this))))->initItems(*(std::string *)auStack_1c);
  }
  sqlite3_free_table(iStack_40);
  func_0079e2bc(auStack_1c);
  func_0079e2bc(&uStack_34);
  func_0079e2bc(auStack_44);
  return;
}
