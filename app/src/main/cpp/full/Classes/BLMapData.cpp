#include "BLMapData.h"
#include "CCString.h"
#include "CCObject.h"
#include "CCFileUtils.h"
#include "CCDictionary.h"
#include "BLLeakUtils.h"
#include "BLMapSceneData.h"
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
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2dc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e69c(...);
extern "C" long long func_0079e854(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long _DAT_00456c74;
extern "C" unsigned long _DAT_00456c78;
extern "C" unsigned long _DAT_00456d28;
extern "C" unsigned long _DAT_00456d2c;
extern "C" unsigned long _DAT_00456d30;
extern "C" unsigned long _DAT_00456e84;
extern "C" unsigned long _DAT_00456e88;
extern "C" unsigned long _DAT_00456e8c;
extern "C" unsigned long _DAT_00456e90;
extern "C" unsigned long _DAT_00456f80;
extern "C" unsigned long _DAT_00456f84;
extern "C" unsigned long _DAT_00456f88;
extern "C" unsigned long _DAT_00456f8c;
extern "C" unsigned long _DAT_00456f90;
extern "C" unsigned long _DAT_00456f94;
extern "C" unsigned long _DAT_00456f98;
extern "C" unsigned long _DAT_00456f9c;
extern "C" unsigned long g_00456c74;
extern "C" unsigned long g_00456c78;
extern "C" unsigned long g_00456d28;
extern "C" unsigned long g_00456d2c;
extern "C" unsigned long g_00456d30;
extern "C" unsigned long g_00456e84;
extern "C" unsigned long g_00456e88;
extern "C" unsigned long g_00456e8c;
extern "C" unsigned long g_00456e90;
extern "C" unsigned long g_00456f80;
extern "C" unsigned long g_00456f84;
extern "C" unsigned long g_00456f88;
extern "C" unsigned long g_00456f8c;
extern "C" unsigned long g_00456f90;
extern "C" unsigned long g_00456f94;
extern "C" unsigned long g_00456f98;
extern "C" unsigned long g_00456f9c;
int BLMapData::getID() const
{
  return *(undefined4 *)(((int)this) + 0x14);
}

void BLMapData::setID(int p1)
{
  *(undefined4 *)(((int)this) + 0x14) = p1;
  return;
}

cocos2d::CCDictionary* BLMapData::getDicScenData() const
{
  return (cocos2d::CCDictionary*)(*(undefined4 *)(((int)this) + 0x20));
}

void BLMapData::setDicScenData(cocos2d::CCDictionary* p1)
{
  *(undefined4 *)(((int)this) + 0x20) = (undefined4)(intptr_t)p1;
  return;
}

void BLMapData::setRes(std::string p1)
{
  func_0079e52c(((int)this) + 0x1c);
  return;
}

void BLMapData::setMapName(std::string p1)
{
  func_0079e52c(((int)this) + 0x18);
  return;
}

BLMapData::~BLMapData()
{
  undefined4 uVar1;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [8];
  
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(auStack_1c,((intptr_t)"BLMapData"),auStack_20);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)auStack_1c);
  func_0079e2bc(auStack_1c);
  if (*(int *)((int)this + 4*(8)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(8)) = 0;
  }
  func_0079e2bc(((int)this) + 7);
  func_0079e2bc(((int)this) + 6);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

std::string BLMapData::getRes() const
{ return *(std::string *)(((int)this) + 0x1c); }

std::string BLMapData::getMapName() const
{ return *(std::string *)(((int)this) + 0x18); }


bool BLMapData::init()
{
  return 1;
}

// ===== 修复: 补回被误删的函数占位 (3) =====
BLMapData::BLMapData()
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
  iVar2 = (undefined4)(intptr_t)(*(int *)(g_00456d2c + 0x456cc4) + 0xc);
  *(int *)((int)this + 4*(6)) = iVar2;
  *(int *)((int)this + 4*(7)) = iVar2;
  *(int *)((int)this + 4*(5)) = 0;
  iVar2 = (undefined4)(intptr_t)(cocos2d::CCDictionary::create());
  *(int *)((int)this + 4*(8)) = iVar2;
  if (iVar2 != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLMapData"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

void BLMapData::initSceneData()
{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  code *pcVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 uStack_28;
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [8];
  
  func_0079e53c(&uStack_28,((int)this) + 0x18);
  func_0079e854(&uStack_28,((intptr_t)"Data.plist"));
  cocos2d::CCLog((char const*)((intptr_t)"BLMapData:%s"), uStack_28);
  piVar1 = (int *)cocos2d::CCFileUtils::sharedFileUtils();
  (**(code **)(*(int *)(piVar1) + (0x18)))(auStack_24,piVar1,uStack_28);
  func_0079e52c(&uStack_28,auStack_24);
  func_0079e2bc(auStack_24);
  iVar2 = (undefined4)(intptr_t)(cocos2d::CCDictionary::createWithContentsOfFileThreadSafe((char const*)uStack_28));
  if (iVar2 != 0) {
    iVar7 = (undefined4)(intptr_t)(*(int *)(iVar2 + 0x14));
    iVar9 = (undefined4)(intptr_t)(iVar7);
    if (iVar7 != 0) {
      iVar9 = (undefined4)(intptr_t)(*(int *)(iVar7 + 0x110));
    }
    while (iVar7 != 0) {
      if ((*(int *)(iVar7 + 0x104) != 0) &&
         (iVar3 = func_0079e55c(*(int *)(iVar7 + 0x104),*(undefined4 *)(g_00456e8c + 0x456dd6),
                                  *(undefined4 *)(g_00456e90 + 0x456dd8),0), iVar3 != 0)) {
        piVar1 = (int *)::operator new(0x28);
        ::new ((void *)piVar1) BLMapSceneData();   /* ALLOC+CTOR_FIX(R115): 原为裸 new + ctorZero 占位；生成器丢了 BLMapSceneData 的构造函数 -> vptr 垃圾 */
        iVar4 = (undefined4)(intptr_t)(((BLMapSceneData *)piVar1)->init());
        if (iVar4 == 0) {
          (**(code **)(*(int *)(piVar1) + (8)))(piVar1);
          piVar1 = (int *)0x0;
        }
        else {
          ((cocos2d::CCObject *)piVar1)->autorelease();
        }
        ((BLMapSceneData *)piVar1)->initWithDic((cocos2d::CCDictionary*)iVar3);
        pcVar6 = *(code **)(*piVar1 + 0x34);
        uVar5 = (undefined4)(((cocos2d::CCDictElement *)iVar7)->getStrKey());
        func_0079e45c(auStack_20,uVar5,auStack_1c);
        (*pcVar6)(piVar1,auStack_20);
        func_0079e2bc(auStack_20);
        uVar8 = (undefined4)(*(undefined4 *)(((int)this) + 0x20));
        uVar5 = (undefined4)(((cocos2d::CCDictElement *)iVar7)->getStrKey());
        func_0079e45c(auStack_1c,uVar5,auStack_20);
        ((cocos2d::CCDictionary *)uVar8)->setObject((cocos2d::CCObject*)piVar1, (char const *)auStack_1c);
        func_0079e2bc(auStack_1c);
      }
      iVar7 = (undefined4)(intptr_t)(iVar9);
      if (iVar9 != 0) {
        iVar9 = (undefined4)(intptr_t)(*(int *)(iVar9 + 0x110));
      }
    }
  }
  ((cocos2d::CCObject *)iVar2)->release();
  func_0079e2bc(&uStack_28);
  return;
}

void BLMapData::initWithMapID(int p1)
{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined1 auStack_2c [4];
  int iStack_28;
  int iStack_24;
  int iStack_20;
  undefined4 auStack_1c [2];
  
  iVar3 = (undefined4)(intptr_t)(g_00456f80);
  *(undefined4 *)(((int)this) + 0x14) = p1;
  cocos2d::CCLog((char const*)iVar3 + 0x456ea2);
  func_0079e45c(auStack_2c,g_00456f84 + 0x456eb0,auStack_1c);
  iStack_28 = 0;
  func_0079e45c(auStack_1c,((intptr_t)" select * from "),&iStack_20);
  func_0079e69c(auStack_1c,((intptr_t)"map"));
  func_0079e69c(auStack_1c,((intptr_t)" where "));
  func_0079e69c(auStack_1c,((intptr_t)"id"));
  func_0079e69c(auStack_1c,((intptr_t)" = "));
  cocos2d::CCString::createWithFormat((char const*)((intptr_t)"%d"), p1);
  uVar1 = (undefined4)(((cocos2d::CCString *)this)->getCString());
  func_0079e69c(auStack_1c,uVar1);
  piVar2 = (int *)((DataManager *)this)->shareDataManager();
  uVar1 = (undefined4)((**(code **)(*(int *)(piVar2) + (0x18)))());
  iVar3 = (undefined4)(intptr_t)(sqlite3_get_table(uVar1,auStack_1c[0],&iStack_28,&iStack_24,&iStack_20,0));
  if ((iVar3 == 0) && (0 < iStack_24)) {
    iVar3 = (undefined4)(intptr_t)((iStack_20 + 2) * 4);
    func_0079e2dc(((int)this) + 0x18,*(undefined4 *)(iStack_28 + iVar3));
    func_0079e2dc(((int)this) + 0x1c,*(undefined4 *)(iStack_28 + iVar3 + 4));
  }
  sqlite3_free_table(iStack_28);
  BLMapData::initSceneData();
  func_0079e2bc(auStack_1c);
  func_0079e2bc(auStack_2c);
  return;
}
