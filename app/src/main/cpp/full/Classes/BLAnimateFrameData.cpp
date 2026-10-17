#include "BLAnimateFrameData.h"
#include "CCString.h"
#include "CCDictionary.h"
#include "CCObject.h"
#include "BLLeakUtils.h"
#include "DataCacheManager.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
using namespace cocos2d;
// 兜底声明
extern "C" long long func_0042f3fc(...);
extern "C" long long func_00453e9c(...);
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2dc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e5dc(...);
extern "C" long long func_0079e63c(...);
extern "C" long long func_0079e724(...);
extern "C" long long func_0079e7e4(...);
extern "C" long long func_0079e804(...);
extern "C" long long func_0079e814(...);
extern "C" long long func_0079e8c4(...);
extern "C" long long func_0079e8d4(...);
extern "C" long long func_0079e934(...);
extern "C" long long func_0079e944(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long _DAT_00453df0;
extern "C" unsigned long _DAT_00453df4;
extern "C" unsigned long _DAT_0045405c;
extern "C" unsigned long _DAT_00454060;
extern "C" unsigned long _DAT_00454064;
extern "C" unsigned long _DAT_00454068;
extern "C" unsigned long _DAT_0045406c;
extern "C" unsigned long _DAT_00454070;
extern "C" unsigned long _DAT_00454074;
extern "C" unsigned long _DAT_00454078;
extern "C" unsigned long _DAT_0045407c;
extern "C" unsigned long _DAT_00454080;
extern "C" unsigned long _DAT_00454084;
extern "C" unsigned long _DAT_00454088;
extern "C" unsigned long _DAT_0045408c;
extern "C" unsigned long _DAT_00454154;
extern "C" unsigned long _DAT_00454158;
extern "C" unsigned long _DAT_0045415c;
extern "C" unsigned long _DAT_00454160;
extern "C" unsigned long _DAT_00454164;
extern "C" unsigned long _DAT_004541fc;
extern "C" unsigned long _DAT_00454200;
extern "C" unsigned long _DAT_00454204;
extern "C" unsigned long _DAT_004542b0;
extern "C" unsigned long _DAT_004542b4;
extern "C" unsigned long _DAT_004542b8;
extern "C" unsigned long _DAT_004542bc;
extern "C" unsigned long _DAT_004542c0;
extern "C" unsigned long _DAT_004542c4;
extern "C" unsigned long _DAT_004542c8;
extern "C" unsigned long _DAT_00454370;
extern "C" unsigned long _DAT_00454374;
extern "C" unsigned long _DAT_00454378;
extern "C" unsigned long _DAT_0045437c;
extern "C" unsigned long _DAT_00454380;
extern "C" unsigned long _DAT_004544e0;
extern "C" unsigned long _DAT_004544e4;
extern "C" unsigned long _DAT_004544e8;
extern "C" unsigned long _DAT_004544ec;
extern "C" unsigned long _DAT_004544f0;
extern "C" unsigned long _DAT_004544f4;
extern "C" unsigned long _DAT_004544f8;
extern "C" unsigned long _DAT_00454698;
extern "C" unsigned long _DAT_0045469c;
extern "C" unsigned long _DAT_004546a0;
extern "C" unsigned long _DAT_004546a4;
extern "C" unsigned long _DAT_004546a8;
extern "C" unsigned long _DAT_004546ac;
extern "C" unsigned long _DAT_004547a8;
extern "C" unsigned long _DAT_004547ac;
extern "C" unsigned long _DAT_004547b0;
extern "C" unsigned long _DAT_004547b4;
extern "C" unsigned long _DAT_004547b8;
extern "C" unsigned long _DAT_004547bc;
extern "C" unsigned long _DAT_00454a28;
extern "C" unsigned long _DAT_00454a2c;
extern "C" unsigned long _DAT_00454a30;
extern "C" unsigned long _DAT_00454a34;
extern "C" unsigned long _DAT_00454a38;
extern "C" unsigned long _DAT_00454a3c;
extern "C" unsigned long _DAT_00454a40;
extern "C" unsigned long _DAT_00454a44;
extern "C" unsigned long _DAT_00454a48;
extern "C" unsigned long _DAT_00454a4c;
extern "C" unsigned long _DAT_00454a50;
extern "C" unsigned long _DAT_00454a54;
extern "C" unsigned long _DAT_00454a58;
extern "C" unsigned long _DAT_00454a5c;
extern "C" unsigned long _DAT_00454cf4;
extern "C" unsigned long _DAT_00454cf8;
extern "C" unsigned long _DAT_00454cfc;
extern "C" unsigned long _DAT_00454d00;
extern "C" unsigned long _DAT_00454d04;
extern "C" unsigned long _DAT_00454d08;
extern "C" unsigned long _DAT_00454d0c;
extern "C" unsigned long _DAT_00454d10;
extern "C" unsigned long _DAT_00454d14;
extern "C" unsigned long _DAT_00454d18;
extern "C" unsigned long _DAT_00454d1c;
extern "C" unsigned long g_00453df0;
extern "C" unsigned long g_00453df4;
extern "C" unsigned long g_0045405c;
extern "C" unsigned long g_00454060;
extern "C" unsigned long g_00454064;
extern "C" unsigned long g_00454068;
extern "C" unsigned long g_0045406c;
extern "C" unsigned long g_00454070;
extern "C" unsigned long g_00454074;
extern "C" unsigned long g_00454078;
extern "C" unsigned long g_0045407c;
extern "C" unsigned long g_00454080;
extern "C" unsigned long g_00454084;
extern "C" unsigned long g_00454088;
extern "C" unsigned long g_0045408c;
extern "C" unsigned long g_00454154;
extern "C" unsigned long g_00454158;
extern "C" unsigned long g_0045415c;
extern "C" unsigned long g_00454160;
extern "C" unsigned long g_00454164;
extern "C" unsigned long g_004541fc;
extern "C" unsigned long g_00454200;
extern "C" unsigned long g_00454204;
extern "C" unsigned long g_004542b0;
extern "C" unsigned long g_004542b4;
extern "C" unsigned long g_004542b8;
extern "C" unsigned long g_004542bc;
extern "C" unsigned long g_004542c0;
extern "C" unsigned long g_004542c4;
extern "C" unsigned long g_004542c8;
extern "C" unsigned long g_00454370;
extern "C" unsigned long g_00454374;
extern "C" unsigned long g_00454378;
extern "C" unsigned long g_0045437c;
extern "C" unsigned long g_00454380;
extern "C" unsigned long g_004544e0;
extern "C" unsigned long g_004544e4;
extern "C" unsigned long g_004544e8;
extern "C" unsigned long g_004544ec;
extern "C" unsigned long g_004544f0;
extern "C" unsigned long g_004544f4;
extern "C" unsigned long g_004544f8;
extern "C" unsigned long g_00454698;
extern "C" unsigned long g_0045469c;
extern "C" unsigned long g_004546a0;
extern "C" unsigned long g_004546a4;
extern "C" unsigned long g_004546a8;
extern "C" unsigned long g_004546ac;
extern "C" unsigned long g_004547a8;
extern "C" unsigned long g_004547ac;
extern "C" unsigned long g_004547b0;
extern "C" unsigned long g_004547b4;
extern "C" unsigned long g_004547b8;
extern "C" unsigned long g_004547bc;
extern "C" unsigned long g_00454a28;
extern "C" unsigned long g_00454a2c;
extern "C" unsigned long g_00454a30;
extern "C" unsigned long g_00454a34;
extern "C" unsigned long g_00454a38;
extern "C" unsigned long g_00454a3c;
extern "C" unsigned long g_00454a40;
extern "C" unsigned long g_00454a44;
extern "C" unsigned long g_00454a48;
extern "C" unsigned long g_00454a4c;
extern "C" unsigned long g_00454a50;
extern "C" unsigned long g_00454a54;
extern "C" unsigned long g_00454a58;
extern "C" unsigned long g_00454a5c;
extern "C" unsigned long g_00454cf4;
extern "C" unsigned long g_00454cf8;
extern "C" unsigned long g_00454cfc;
extern "C" unsigned long g_00454d00;
extern "C" unsigned long g_00454d04;
extern "C" unsigned long g_00454d08;
extern "C" unsigned long g_00454d0c;
extern "C" unsigned long g_00454d10;
extern "C" unsigned long g_00454d14;
extern "C" unsigned long g_00454d18;
extern "C" unsigned long g_00454d1c;
cocos2d::CCObject* BLAnimateFrameData::getAnimateData() const
{
  return (cocos2d::CCObject*)(*(undefined4 *)(((int)this) + 0xa0));
}

void BLAnimateFrameData::setAnimateData(cocos2d::CCObject* p1)
{
  *(undefined4 *)(((int)this) + 0xa0) = (undefined4)(intptr_t)p1;
  return;
}

BLAnimateFrameData::~BLAnimateFrameData()
{
  undefined4 uVar1;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [8];
  
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  if (*(int *)((int)this + 4*(0x1d)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x1d)) = 0;
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(auStack_1c,((intptr_t)"BLAnimateFrameData"),auStack_20);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)auStack_1c);
  func_0079e2bc(auStack_1c);
  func_0079e2bc(((int)this) + 0x23);
  func_0079e2bc(((int)this) + 0x22);
  func_0079e2bc(((int)this) + 0x21);
  func_0079e2bc(((int)this) + 0x1e);
  func_0079e2bc(((int)this) + 0x1c);
  func_0079e2bc(((int)this) + 9);
  func_0079e2bc(((int)this) + 8);
  func_0079e2bc(((int)this) + 7);
  func_0079e2bc(((int)this) + 6);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}


bool BLAnimateFrameData::init()
{
  return 1;
}

// ===== 修复: 补回被误删的函数占位 (9) =====
BLAnimateFrameData::BLAnimateFrameData()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLAnimateFrameData::getPositionByDic(cocos2d::CCDictionary* p1)
{
  undefined4 p3 = 0;

  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [8];
  
  0 /* ctorZero */;
  iVar4 = (undefined4)(intptr_t)(g_00454158);
  puVar5 = auStack_20;
  func_0079e45c(auStack_1c,g_00454154 + 0x4540ac,puVar5);
  iVar4 = (undefined4)(intptr_t)(iVar4 + 0x4540bc);
  iVar1 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)p3)->objectForKey((char const *)auStack_1c));
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = func_0079e55c(iVar1,*(undefined4 *)(iVar4 + g_0045415c),
                            *(undefined4 *)(iVar4 + g_00454160),0);
  }
  func_0079e2bc(auStack_1c);
  if (iVar2 != 0) {
    ((cocos2d::CCString *)iVar2)->getCString();
    func_00453e9c();
    uVar3 = (undefined4)(func_0079e7e4());
    *(int *)this = uVar3;
  }
  func_0079e45c(auStack_1c,g_00454164 + 0x4540fc,puVar5);
  iVar1 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)p3)->objectForKey((char const *)auStack_1c));
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = func_0079e55c(iVar1,*(undefined4 *)(iVar4 + g_0045415c),
                            *(undefined4 *)(iVar4 + g_00454160),0,
                            *(undefined4 *)(iVar4 + g_0045415c),
                            *(undefined4 *)(iVar4 + g_00454160));
  }
  func_0079e2bc(auStack_1c);
  if (iVar2 != 0) {
    ((cocos2d::CCString *)iVar2)->getCString();
    func_00453e9c();
    uVar3 = (undefined4)(func_0079e7e4());
    *(int *)((int)this + 4*(1)) = uVar3;
  }
  return;
}

undefined8 BLAnimateFrameData::initRotation(std::string& p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

undefined8 BLAnimateFrameData::initAlpha(std::string& p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void BLAnimateFrameData::initBeAttackIndex(std::string& p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLAnimateFrameData::getRectByDic(cocos2d::CCDictionary* p1)
{
  undefined4 p3 = 0;

  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [8];
  
  0 /* ctorZero */;
  iVar4 = (undefined4)(intptr_t)(g_004544e4);
  puVar5 = auStack_20;
  func_0079e45c(auStack_1c,g_004544e0 + 0x4543a0,puVar5);
  iVar4 = (undefined4)(intptr_t)(iVar4 + 0x4543b0);
  iVar1 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)p3)->objectForKey((char const *)auStack_1c));
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = func_0079e55c(iVar1,*(undefined4 *)(iVar4 + g_004544e8),
                            *(undefined4 *)(iVar4 + g_004544ec),0);
  }
  func_0079e2bc(auStack_1c);
  if (iVar2 != 0) {
    ((cocos2d::CCString *)iVar2)->getCString();
    func_00453e9c();
    uVar3 = (undefined4)(func_0079e7e4());
    *(int *)this = uVar3;
  }
  func_0079e45c(auStack_1c,g_004544f0 + 0x4543f0,puVar5);
  iVar1 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)p3)->objectForKey((char const *)auStack_1c));
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = func_0079e55c(iVar1,*(undefined4 *)(iVar4 + g_004544e8),
                            *(undefined4 *)(iVar4 + g_004544ec),0);
  }
  func_0079e2bc(auStack_1c);
  if (iVar2 != 0) {
    ((cocos2d::CCString *)iVar2)->getCString();
    func_00453e9c();
    uVar3 = (undefined4)(func_0079e7e4());
    *(int *)((int)this + 4*(1)) = uVar3;
  }
  func_0079e45c(auStack_1c,((intptr_t)"width"),puVar5);
  iVar1 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)p3)->objectForKey((char const *)auStack_1c));
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = func_0079e55c(iVar1,*(undefined4 *)(iVar4 + g_004544e8),
                            *(undefined4 *)(iVar4 + g_004544ec),0);
  }
  func_0079e2bc(auStack_1c);
  if (iVar2 != 0) {
    ((cocos2d::CCString *)iVar2)->getCString();
    func_00453e9c();
    uVar3 = (undefined4)(func_0079e7e4());
    *(int *)((int)this + 4*(2)) = uVar3;
  }
  func_0079e45c(auStack_1c,((intptr_t)"height"),puVar5);
  iVar1 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)p3)->objectForKey((char const *)auStack_1c));
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = func_0079e55c(iVar1,*(undefined4 *)(iVar4 + g_004544e8),
                            *(undefined4 *)(iVar4 + g_004544ec),0,
                            *(undefined4 *)(iVar4 + g_004544e8),
                            *(undefined4 *)(iVar4 + g_004544ec));
  }
  func_0079e2bc(auStack_1c);
  if (iVar2 != 0) {
    ((cocos2d::CCString *)iVar2)->getCString();
    func_00453e9c();
    uVar3 = (undefined4)(func_0079e7e4());
    *(int *)((int)this + 4*(3)) = uVar3;
  }
  return;
}

void BLAnimateFrameData::initSpeedData(std::string& p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLAnimateFrameData::initScale(std::string& p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLAnimateFrameData::initWith(cocos2d::CCDictionary* p1, std::string p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
