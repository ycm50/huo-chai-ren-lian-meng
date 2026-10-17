#include "CircusData.h"
#include "CCObject.h"
#include "CCNotificationCenter.h"
#include "BLLanguage.h"
#include "BLRoleAttribute.h"
#include "CircusHttpModify.h"
#include "CircusHttpName.h"
#include "CircusHttpRanking.h"
#include "CircusHttpRevenge.h"
#include "CircusHttpSys.h"
#include "CircusHttpUpZip.h"
#include "CircusLocalZip.h"
#include "CircusPlayerinfo.h"
#include "CircusResultinfo.h"
#include "DataManager.h"
#include "PlatformHelp.h"
#include "StringJsonManager.h"
#include "Toast.h"
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
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e31c(...);
extern "C" long long func_0079e33c(...);
extern "C" long long func_0079e34c(...);
extern "C" long long func_0079e38c(...);
extern "C" long long func_0079e39c(...);
extern "C" long long func_0079e3cc(...);
extern "C" long long func_0079e3dc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e48c(...);
extern "C" long long func_0079e49c(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long ghidra_CARRY4(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long DAT_00471dc0;
extern "C" unsigned long UNK_00471c42;
extern "C" unsigned long UNK_00471c5a;
extern "C" unsigned long UNK_00471cfe;
extern "C" unsigned long UNK_00471dc6;
extern "C" unsigned long _DAT_004711f0;
extern "C" unsigned long _DAT_004711f4;
extern "C" unsigned long _DAT_004711f8;
extern "C" unsigned long _DAT_004711fc;
extern "C" unsigned long _DAT_00471200;
extern "C" unsigned long _DAT_00471204;
extern "C" unsigned long _DAT_00471208;
extern "C" unsigned long _DAT_0047120c;
extern "C" unsigned long _DAT_00471210;
extern "C" unsigned long _DAT_00471214;
extern "C" unsigned long _DAT_00471218;
extern "C" unsigned long _DAT_00471350;
extern "C" unsigned long _DAT_00471354;
extern "C" unsigned long _DAT_00471358;
extern "C" unsigned long _DAT_0047135c;
extern "C" unsigned long _DAT_00471360;
extern "C" unsigned long _DAT_00471364;
extern "C" unsigned long _DAT_00471368;
extern "C" unsigned long _DAT_0047136c;
extern "C" unsigned long _DAT_00471370;
extern "C" unsigned long _DAT_00471374;
extern "C" unsigned long _DAT_00471378;
extern "C" unsigned long _DAT_0047137c;
extern "C" unsigned long _DAT_00471380;
extern "C" unsigned long _DAT_00471384;
extern "C" unsigned long _DAT_00471388;
extern "C" unsigned long _DAT_0047138c;
extern "C" unsigned long _DAT_00471390;
extern "C" unsigned long _DAT_00471394;
extern "C" unsigned long _DAT_00471398;
extern "C" unsigned long _DAT_0047139c;
extern "C" unsigned long _DAT_004713a0;
extern "C" unsigned long _DAT_00471578;
extern "C" unsigned long _DAT_00471b80;
extern "C" unsigned long _DAT_00471b84;
extern "C" unsigned long _DAT_00471c58;
extern "C" unsigned long _DAT_00471c5c;
extern "C" unsigned long _DAT_00471c60;
extern "C" unsigned long _DAT_00471c64;
extern "C" unsigned long _DAT_00471c68;
extern "C" unsigned long _DAT_00471c6c;
extern "C" unsigned long _DAT_00471c70;
extern "C" unsigned long _DAT_00471c74;
extern "C" unsigned long _DAT_00471d08;
extern "C" unsigned long _DAT_00471d0c;
extern "C" unsigned long _DAT_00471d10;
extern "C" unsigned long _DAT_00471d14;
extern "C" unsigned long _DAT_00471d18;
extern "C" unsigned long _DAT_00471d1c;
extern "C" unsigned long _DAT_00471d20;
extern "C" unsigned long _DAT_00471db8;
extern "C" unsigned long _DAT_00471dbc;
extern "C" unsigned long _DAT_00471dc0;
extern "C" unsigned long _DAT_00471dc4;
extern "C" unsigned long _DAT_00471dc8;
extern "C" unsigned long _DAT_00471dcc;
extern "C" unsigned long _DAT_00471dd0;
extern "C" unsigned long _DAT_00471dd4;
extern "C" unsigned long _DAT_00471ef0;
extern "C" unsigned long _DAT_00471ef4;
extern "C" unsigned long _DAT_00471ef8;
extern "C" unsigned long _DAT_00471efc;
extern "C" unsigned long _DAT_00471f00;
extern "C" unsigned long _DAT_00471f04;
extern "C" unsigned long _DAT_00471f08;
extern "C" unsigned long _DAT_00471f0c;
extern "C" unsigned long _DAT_00472284;
extern "C" unsigned long _DAT_00472288;
extern "C" unsigned long _DAT_0047228c;
extern "C" unsigned long _DAT_00472290;
extern "C" unsigned long _DAT_00472294;
extern "C" unsigned long _DAT_0047278c;
extern "C" unsigned long _DAT_00472790;
extern "C" unsigned long _DAT_00472794;
extern "C" unsigned long _DAT_00472798;
extern "C" unsigned long _DAT_0047279c;
extern "C" unsigned long _DAT_004727a0;
extern "C" unsigned long _DAT_004727a4;
extern "C" unsigned long _DAT_004727a8;
extern "C" unsigned long _DAT_004727ac;
extern "C" unsigned long _DAT_004727b0;
extern "C" unsigned long _DAT_004727b4;
extern "C" unsigned long _DAT_004727b8;
extern "C" unsigned long _DAT_004727bc;
extern "C" unsigned long _DAT_00472b10;
extern "C" unsigned long _DAT_00472b14;
extern "C" unsigned long _DAT_00472b18;
extern "C" unsigned long _DAT_00472b1c;
extern "C" unsigned long _DAT_00472b20;
extern "C" unsigned long _DAT_00472b24;
extern "C" unsigned long _DAT_00472da0;
extern "C" unsigned long _DAT_00472da4;
extern "C" unsigned long _DAT_00472da8;
extern "C" unsigned long _DAT_00472dac;
extern "C" unsigned long extraout_r1;
extern "C" unsigned long extraout_r1_00;
extern "C" unsigned long extraout_r1_01;
extern "C" unsigned long extraout_r1_02;
extern "C" unsigned long extraout_r1_03;
extern "C" unsigned long extraout_r1_04;
extern "C" unsigned long extraout_r1_05;
extern "C" unsigned long extraout_r1_06;
extern "C" unsigned long extraout_r1_07;
extern "C" unsigned long g_004711f0;
extern "C" unsigned long g_004711f4;
extern "C" unsigned long g_004711f8;
extern "C" unsigned long g_004711fc;
extern "C" unsigned long g_00471200;
extern "C" unsigned long g_00471204;
extern "C" unsigned long g_00471208;
extern "C" unsigned long g_0047120c;
extern "C" unsigned long g_00471210;
extern "C" unsigned long g_00471214;
extern "C" unsigned long g_00471218;
extern "C" unsigned long g_00471350;
extern "C" unsigned long g_00471354;
extern "C" unsigned long g_00471358;
extern "C" unsigned long g_0047135c;
extern "C" unsigned long g_00471360;
extern "C" unsigned long g_00471364;
extern "C" unsigned long g_00471368;
extern "C" unsigned long g_0047136c;
extern "C" unsigned long g_00471370;
extern "C" unsigned long g_00471374;
extern "C" unsigned long g_00471378;
extern "C" unsigned long g_0047137c;
extern "C" unsigned long g_00471380;
extern "C" unsigned long g_00471384;
extern "C" unsigned long g_00471388;
extern "C" unsigned long g_0047138c;
extern "C" unsigned long g_00471390;
extern "C" unsigned long g_00471394;
extern "C" unsigned long g_00471398;
extern "C" unsigned long g_0047139c;
extern "C" unsigned long g_004713a0;
extern "C" unsigned long g_00471578;
extern "C" unsigned long g_00471b80;
extern "C" unsigned long g_00471b84;
extern "C" unsigned long g_00471c42;
extern "C" unsigned long g_00471c58;
extern "C" unsigned long g_00471c5a;
extern "C" unsigned long g_00471c5c;
extern "C" unsigned long g_00471c60;
extern "C" unsigned long g_00471c64;
extern "C" unsigned long g_00471c68;
extern "C" unsigned long g_00471c6c;
extern "C" unsigned long g_00471c70;
extern "C" unsigned long g_00471c74;
extern "C" unsigned long g_00471cfe;
extern "C" unsigned long g_00471d08;
extern "C" unsigned long g_00471d0c;
extern "C" unsigned long g_00471d10;
extern "C" unsigned long g_00471d14;
extern "C" unsigned long g_00471d18;
extern "C" unsigned long g_00471d1c;
extern "C" unsigned long g_00471d20;
extern "C" unsigned long g_00471db8;
extern "C" unsigned long g_00471dbc;
extern "C" unsigned long g_00471dc0;
extern "C" unsigned long g_00471dc4;
extern "C" unsigned long g_00471dc6;
extern "C" unsigned long g_00471dc8;
extern "C" unsigned long g_00471dcc;
extern "C" unsigned long g_00471dd0;
extern "C" unsigned long g_00471dd4;
extern "C" unsigned long g_00471ef0;
extern "C" unsigned long g_00471ef4;
extern "C" unsigned long g_00471ef8;
extern "C" unsigned long g_00471efc;
extern "C" unsigned long g_00471f00;
extern "C" unsigned long g_00471f04;
extern "C" unsigned long g_00471f08;
extern "C" unsigned long g_00471f0c;
extern "C" unsigned long g_00472284;
extern "C" unsigned long g_00472288;
extern "C" unsigned long g_0047228c;
extern "C" unsigned long g_00472290;
extern "C" unsigned long g_00472294;
extern "C" unsigned long g_0047278c;
extern "C" unsigned long g_00472790;
extern "C" unsigned long g_00472794;
extern "C" unsigned long g_00472798;
extern "C" unsigned long g_0047279c;
extern "C" unsigned long g_004727a0;
extern "C" unsigned long g_004727a4;
extern "C" unsigned long g_004727a8;
extern "C" unsigned long g_004727ac;
extern "C" unsigned long g_004727b0;
extern "C" unsigned long g_004727b4;
extern "C" unsigned long g_004727b8;
extern "C" unsigned long g_004727bc;
extern "C" unsigned long g_00472b10;
extern "C" unsigned long g_00472b14;
extern "C" unsigned long g_00472b18;
extern "C" unsigned long g_00472b1c;
extern "C" unsigned long g_00472b20;
extern "C" unsigned long g_00472b24;
extern "C" unsigned long g_00472da0;
extern "C" unsigned long g_00472da4;
extern "C" unsigned long g_00472da8;
extern "C" unsigned long g_00472dac;
















CircusData::CircusData()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}


undefined4 CircusData::getMe()
{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  piVar1 = *(int **)(g_00472da0 + 0x472d5c);
  uVar3 = (undefined4)(*(undefined4 *)(g_00472da4 + 0x472d64));
  if ((-1 < *piVar1 << 0x1f) && (iVar2 = func_0079e33c(), iVar2 != 0)) {
    0 /* ctorZero */;
    func_0079e38c(piVar1);
    func_0079e39c(uVar3,*(undefined4 *)(((intptr_t)"u:F")),g_00472dac + 0x472d8c);
  }
  return uVar3;
}

CircusData::~CircusData()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

// ===== 修复: 补回被误删的函数占位 (17) =====
void CircusData::GetDataFromNet(int p1, bool p2)
{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined1 auStack_1c [8];
  
  iVar7 = (undefined4)(intptr_t)(g_004711f0 + 0x470eb4);
  iVar1 = (undefined4)(intptr_t)(((PlatformHelp *)this)->CheckNet());
  if (iVar1 == 0) {
    uVar2 = (undefined4)(((Toast *)this)->sharedToast());
    uVar3 = (undefined4)(((BLLanguage *)this)->share());
    func_0079e45c(&uStack_24,"当前网络连接异常，请检查连接",auStack_2c);
    ((BLLanguage *)this)->getString(*(std::string *)(void *)&uStack_20);
    func_0079e45c(auStack_1c,uStack_20,auStack_28);
    ((Toast *)(uVar2))->showSystemRemind((std::string *)(char *)auStack_1c);
    func_0079e2bc(auStack_1c);
    func_0079e2bc(&uStack_20);
    func_0079e2bc(&uStack_24);
    if (p1 == 0) {
      uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
      ((cocos2d::CCNotificationCenter *)(uVar2))->postNotification((char const*)"MSG_FIGHTRESULTBACK");
    }
  }
  else {
    iVar1 = (undefined4)(intptr_t)(((int)this) + 0x1b8);
    iVar4 = (undefined4)(intptr_t)(*(int *)(((int)this) + 0x1bc));
    while (iVar4 != 0) {
      if (*(int *)(iVar4 + 0x10) < p1) {
        iVar4 = (undefined4)(intptr_t)(*(int *)(iVar4 + 0xc));
      }
      else {
        iVar1 = (undefined4)(intptr_t)(iVar4);
        iVar4 = (undefined4)(intptr_t)(*(int *)(iVar4 + 8));
      }
    }
    puVar6 = &uStack_20;
    if ((iVar1 == ((int)this) + 0x1b8) || (p1 < *(int *)(iVar1 + 0x10))) {
      uVar2 = (undefined4)(((Toast *)this)->sharedToast());
      uVar3 = (undefined4)(((BLLanguage *)this)->share());
      func_0079e45c(&uStack_24,"传入网址错误",auStack_2c);
      ((BLLanguage *)this)->getString(*(std::string *)(void *)puVar6);
      func_0079e45c(auStack_1c,uStack_20,auStack_28);
      ((Toast *)(uVar2))->showSystemRemind((std::string *)(char *)auStack_1c);
      func_0079e2bc(auStack_1c);
      func_0079e2bc(puVar6);
      puVar6 = &uStack_24;
    }
    else {
      iVar1 = (undefined4)(intptr_t)(iVar1 + 0x14);
      if (p1 == 5) {
        func_0079e53c(puVar6,iVar1);
        piVar5 = (int *)func_0079e2fc(0x1c);
        0 /* ctorZero */;
        *piVar5 = *(int *)(iVar7 + g_00471200) + 8;
        piVar5[6] = *(int *)(iVar7 + g_00471204) + 0xc;
        *(undefined1 *)(piVar5 + 5) = p2;
        func_0079e53c(auStack_1c,puVar6);
        iVar1 = (undefined4)(intptr_t)(((CircusHttpModify *)(piVar5))->init((std::string *)(char *)auStack_1c));
        func_0079e2bc(auStack_1c);
        if (iVar1 == 0) {
          (**(code **)(*(int *)(piVar5) + (8)))(piVar5);
        }
        else {
          ((cocos2d::CCObject *)(piVar5))->autorelease();
        }
      }
      else if (p1 == 6) {
        func_0079e53c(puVar6,iVar1);
        piVar5 = (int *)func_0079e2fc(0x1c);
        0 /* ctorZero */;
        *piVar5 = *(int *)(iVar7 + g_00471208) + 8;
        piVar5[6] = *(int *)(iVar7 + g_00471204) + 0xc;
        *(undefined1 *)(piVar5 + 5) = p2;
        func_0079e53c(auStack_1c,puVar6);
        iVar1 = (undefined4)(intptr_t)(((CircusHttpRevenge *)(piVar5))->init((std::string *)(char *)auStack_1c));
        func_0079e2bc(auStack_1c);
        if (iVar1 == 0) {
          (**(code **)(*(int *)(piVar5) + (8)))(piVar5);
        }
        else {
          ((cocos2d::CCObject *)(piVar5))->autorelease();
        }
      }
      else if (p1 == 8) {
        func_0079e53c(puVar6,iVar1);
        piVar5 = (int *)func_0079e2fc(0x1c);
        0 /* ctorZero */;
        *piVar5 = *(int *)(iVar7 + g_0047120c) + 8;
        piVar5[6] = *(int *)(iVar7 + g_00471204) + 0xc;
        *(undefined1 *)(piVar5 + 5) = p2;
        func_0079e53c(auStack_1c,puVar6);
        iVar1 = (undefined4)(intptr_t)(((CircusHttpRanking *)(piVar5))->init((std::string *)(char *)auStack_1c));
        func_0079e2bc(auStack_1c);
        if (iVar1 == 0) {
          (**(code **)(*(int *)(piVar5) + (8)))(piVar5);
        }
        else {
          ((cocos2d::CCObject *)(piVar5))->autorelease();
        }
      }
      else if (p1 == 0xb) {
        func_0079e53c(puVar6,iVar1);
        piVar5 = (int *)func_0079e2fc(0x1c);
        0 /* ctorZero */;
        *piVar5 = *(int *)(iVar7 + g_00471210) + 8;
        piVar5[6] = *(int *)(iVar7 + g_00471204) + 0xc;
        *(undefined1 *)(piVar5 + 5) = p2;
        func_0079e53c(auStack_1c,puVar6);
        iVar1 = (undefined4)(intptr_t)(((CircusHttpUpZip *)(piVar5))->init((std::string *)(char *)auStack_1c));
        func_0079e2bc(auStack_1c);
        if (iVar1 == 0) {
          (**(code **)(*(int *)(piVar5) + (8)))(piVar5);
        }
        else {
          ((cocos2d::CCObject *)(piVar5))->autorelease();
        }
      }
      else if (p1 == 0xc) {
        func_0079e53c(puVar6,iVar1);
        piVar5 = (int *)func_0079e2fc(0x1c);
        0 /* ctorZero */;
        *piVar5 = *(int *)(iVar7 + g_00471214) + 8;
        piVar5[6] = *(int *)(iVar7 + g_00471204) + 0xc;
        *(undefined1 *)(piVar5 + 5) = p2;
        func_0079e53c(auStack_1c,puVar6);
        iVar1 = (undefined4)(intptr_t)(((CircusHttpName *)(piVar5))->init((std::string *)(char *)auStack_1c));
        func_0079e2bc(auStack_1c);
        if (iVar1 == 0) {
          (**(code **)(*(int *)(piVar5) + (8)))(piVar5);
        }
        else {
          ((cocos2d::CCObject *)(piVar5))->autorelease();
        }
      }
      else {
        func_0079e53c(puVar6,iVar1);
        piVar5 = (int *)func_0079e2fc(0x18);
        0 /* ctorZero */;
        *piVar5 = *(int *)(iVar7 + g_00471218) + 8;
        *(undefined1 *)(piVar5 + 5) = p2;
        func_0079e53c(auStack_1c,puVar6);
        iVar1 = (undefined4)(intptr_t)(((CircusHttpSys *)(piVar5))->init((std::string *)(char *)auStack_1c));
        func_0079e2bc(auStack_1c);
        if (iVar1 == 0) {
          (**(code **)(*(int *)(piVar5) + (8)))(piVar5);
        }
        else {
          ((cocos2d::CCObject *)(piVar5))->autorelease();
        }
      }
    }
    func_0079e2bc(puVar6);
  }
  return;
}

void CircusData::refreshchallenge()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void CircusData::PrintCircusPlayerinfo(CircusPlayerinfo * p1, std::string * p2) const
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void CircusData::GetRankingStatus()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void CircusData::GetRankingPoint()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void CircusData::Setmychallinfo(CircusPlayerinfo * p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void CircusData::setmychallmodifyheroinfo(CircusPlayerinfo * p1, bool p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

undefined8 CircusData::GetChalInfoById(std::string * p1) const
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

undefined8 CircusData::GetPvpInfoById(std::string * p1) const
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

undefined8 CircusData::GetHeroInfoById(std::string * p1) const
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

int CircusData::GetPvpSimpleInfoById(std::string * p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

undefined4 * CircusData::GetcircusHreaders()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return nullptr;
}

void CircusData::Setchallengermap(CircusPlayerinfo * p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

undefined8 CircusData::Setpvpmap(CircusPlayerinfo * p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void CircusData::Setherorecordmap(CircusPlayerinfo * p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void CircusData::initurlmap()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

undefined4 CircusData::CheckSocket(int p1, bool p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
