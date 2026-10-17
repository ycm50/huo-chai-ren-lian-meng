#include "CircusHttpSys.h"
#include "CCNotificationCenter.h"
#include "CCString.h"
#include "CCFileUtils.h"
#include "rapidjson.h"
#include "document.h"
#include "CCObject.h"
#include "HttpResponse.h"
#include "HttpClient.h"
#include "BLGameScene.h"
#include "CircusData.h"
#include "CircusPlayerinfo.h"
#include "DataManager.h"
#include "PlatformHelp.h"
#include "StringJsonManager.h"
#include "Toast.h"
#include "UIManager.h"
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
extern "C" long long func_0079e2ec(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e48c(...);
extern "C" long long func_0079e4ac(...);
extern "C" long long func_0079e50c(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e54c(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e5ac(...);
extern "C" long long func_0079e5dc(...);
extern "C" long long func_0079e69c(...);
extern "C" long long func_0079e774(...);
extern "C" long long func_0079e964(...);
extern "C" long long func_0079ea24(...);
extern "C" long long func_0079ead4(...);
extern "C" long long func_0079eae4(...);
extern "C" long long func_0079eaf4(...);
extern "C" long long ghidra_CARRY4(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long _DAT_00470d44;
extern "C" unsigned long _DAT_0047489c;
extern "C" unsigned long _DAT_00474a0c;
extern "C" unsigned long _DAT_00474a10;
extern "C" unsigned long _DAT_00474a14;
extern "C" unsigned long _DAT_00474a18;
extern "C" unsigned long _DAT_00474a1c;
extern "C" unsigned long _DAT_00474a20;
extern "C" unsigned long _DAT_00474dc0;
extern "C" unsigned long _DAT_00474dc4;
extern "C" unsigned long _DAT_00474dc8;
extern "C" unsigned long _DAT_00474dcc;
extern "C" unsigned long _DAT_00474dd0;
extern "C" unsigned long _DAT_00474dd4;
extern "C" unsigned long _DAT_00474dd8;
extern "C" unsigned long _DAT_00474ddc;
extern "C" unsigned long _DAT_00474de0;
extern "C" unsigned long _DAT_00474de4;
extern "C" unsigned long _DAT_00474de8;
extern "C" unsigned long _DAT_00474dec;
extern "C" unsigned long _DAT_00474df0;
extern "C" unsigned long _DAT_00474df4;
extern "C" unsigned long _DAT_00474df8;
extern "C" unsigned long _DAT_00474dfc;
extern "C" unsigned long _DAT_00474e00;
extern "C" unsigned long _DAT_00474e04;
extern "C" unsigned long _DAT_00474e08;
extern "C" unsigned long _DAT_00474e0c;
extern "C" unsigned long _DAT_00474e10;
extern "C" unsigned long _DAT_00474e14;
extern "C" unsigned long _DAT_00474e18;
extern "C" unsigned long _DAT_00474e1c;
extern "C" unsigned long _DAT_00474e20;
extern "C" unsigned long _DAT_00474f60;
extern "C" unsigned long _DAT_00474f64;
extern "C" unsigned long _DAT_00474f68;
extern "C" unsigned long _DAT_004752f0;
extern "C" unsigned long _DAT_004752f4;
extern "C" unsigned long _DAT_004752f8;
extern "C" unsigned long _DAT_004752fc;
extern "C" unsigned long _DAT_00475300;
extern "C" unsigned long _DAT_00475304;
extern "C" unsigned long _DAT_00475308;
extern "C" unsigned long _DAT_0047530c;
extern "C" unsigned long _DAT_00475310;
extern "C" unsigned long _DAT_00475314;
extern "C" unsigned long _DAT_00475318;
extern "C" unsigned long _DAT_0047531c;
extern "C" unsigned long _DAT_00475320;
extern "C" unsigned long _DAT_00475324;
extern "C" unsigned long _DAT_00475328;
extern "C" unsigned long _DAT_0047532c;
extern "C" unsigned long _DAT_00475330;
extern "C" unsigned long _DAT_00475334;
extern "C" unsigned long _DAT_00475338;
extern "C" unsigned long _DAT_00475470;
extern "C" unsigned long _DAT_00475474;
extern "C" unsigned long _DAT_00475478;
extern "C" unsigned long _DAT_0047547c;
extern "C" unsigned long _DAT_00475480;
extern "C" unsigned long _DAT_00475484;
extern "C" unsigned long _DAT_00475968;
extern "C" unsigned long _DAT_0047596c;
extern "C" unsigned long _DAT_00475970;
extern "C" unsigned long _DAT_00475974;
extern "C" unsigned long _DAT_00475978;
extern "C" unsigned long _DAT_0047597c;
extern "C" unsigned long _DAT_00475980;
extern "C" unsigned long _DAT_00475984;
extern "C" unsigned long _DAT_00475988;
extern "C" unsigned long _DAT_0047598c;
extern "C" unsigned long _DAT_00475990;
extern "C" unsigned long _DAT_00475994;
extern "C" unsigned long _DAT_00475998;
extern "C" unsigned long _DAT_0047599c;
extern "C" unsigned long _DAT_004759a0;
extern "C" unsigned long _DAT_004759a4;
extern "C" unsigned long _DAT_004759a8;
extern "C" unsigned long _DAT_004759ac;
extern "C" unsigned long _DAT_004759b0;
extern "C" unsigned long _DAT_004759b4;
extern "C" unsigned long _DAT_00475b64;
extern "C" unsigned long _DAT_00475b68;
extern "C" unsigned long _DAT_00475b6c;
extern "C" unsigned long _DAT_00475b70;
extern "C" unsigned long _DAT_00475b74;
extern "C" unsigned long _DAT_00475b78;
extern "C" unsigned long _DAT_00475b7c;
extern "C" unsigned long _DAT_00475e28;
extern "C" unsigned long _DAT_00475e2c;
extern "C" unsigned long _DAT_00475e30;
extern "C" unsigned long _DAT_00475e34;
extern "C" unsigned long _DAT_00475e38;
extern "C" unsigned long _DAT_00475e3c;
extern "C" unsigned long _DAT_00475e40;
extern "C" unsigned long _DAT_00475e44;
extern "C" unsigned long _DAT_00475e48;
extern "C" unsigned long _DAT_00475e4c;
extern "C" unsigned long _DAT_00475e50;
extern "C" unsigned long _DAT_00475fcc;
extern "C" unsigned long _DAT_00475fd0;
extern "C" unsigned long _DAT_00475fd4;
extern "C" unsigned long _DAT_00475fd8;
extern "C" unsigned long _DAT_00475fdc;
extern "C" unsigned long _DAT_00476250;
extern "C" unsigned long _DAT_00476254;
extern "C" unsigned long _DAT_00476258;
extern "C" unsigned long _DAT_0047625c;
extern "C" unsigned long _DAT_00476260;
extern "C" unsigned long _DAT_00476264;
extern "C" unsigned long _DAT_00476268;
extern "C" unsigned long _DAT_0047626c;
extern "C" unsigned long _DAT_00476270;
extern "C" unsigned long _DAT_00476274;
extern "C" unsigned long _DAT_00476278;
extern "C" unsigned long _DAT_0047627c;
extern "C" unsigned long _DAT_00476280;
extern "C" unsigned long _DAT_00476284;
extern "C" unsigned long _DAT_00476288;
extern "C" unsigned long _DAT_0047628c;
extern "C" unsigned long _DAT_00476290;
extern "C" unsigned long _DAT_00476480;
extern "C" unsigned long _DAT_00476484;
extern "C" unsigned long _DAT_00476488;
extern "C" unsigned long _DAT_0047648c;
extern "C" unsigned long _DAT_00476490;
extern "C" unsigned long _DAT_00476494;
extern "C" unsigned long _DAT_00476498;
extern "C" unsigned long _DAT_0047649c;
extern "C" unsigned long _DAT_004764a0;
extern "C" unsigned long _DAT_004764a4;
extern "C" unsigned long _DAT_004764a8;
extern "C" unsigned long _DAT_004764ac;
extern "C" unsigned long _DAT_004764b0;
extern "C" unsigned long _DAT_004764b4;
extern "C" unsigned long _DAT_004764b8;
extern "C" unsigned long _DAT_004764bc;
extern "C" unsigned long extraout_r1;
extern "C" unsigned long extraout_r2;
extern "C" unsigned long extraout_r3;
extern "C" unsigned long g_00470d44;
extern "C" unsigned long g_0047489c;
extern "C" unsigned long g_00474a0c;
extern "C" unsigned long g_00474a10;
extern "C" unsigned long g_00474a14;
extern "C" unsigned long g_00474a18;
extern "C" unsigned long g_00474a1c;
extern "C" unsigned long g_00474a20;
extern "C" unsigned long g_00474dc0;
extern "C" unsigned long g_00474dc4;
extern "C" unsigned long g_00474dc8;
extern "C" unsigned long g_00474dcc;
extern "C" unsigned long g_00474dd0;
extern "C" unsigned long g_00474dd4;
extern "C" unsigned long g_00474dd8;
extern "C" unsigned long g_00474ddc;
extern "C" unsigned long g_00474de0;
extern "C" unsigned long g_00474de4;
extern "C" unsigned long g_00474de8;
extern "C" unsigned long g_00474dec;
extern "C" unsigned long g_00474df0;
extern "C" unsigned long g_00474df4;
extern "C" unsigned long g_00474df8;
extern "C" unsigned long g_00474dfc;
extern "C" unsigned long g_00474e00;
extern "C" unsigned long g_00474e04;
extern "C" unsigned long g_00474e08;
extern "C" unsigned long g_00474e0c;
extern "C" unsigned long g_00474e10;
extern "C" unsigned long g_00474e14;
extern "C" unsigned long g_00474e18;
extern "C" unsigned long g_00474e1c;
extern "C" unsigned long g_00474e20;
extern "C" unsigned long g_00474f60;
extern "C" unsigned long g_00474f64;
extern "C" unsigned long g_00474f68;
extern "C" unsigned long g_004752f0;
extern "C" unsigned long g_004752f4;
extern "C" unsigned long g_004752f8;
extern "C" unsigned long g_004752fc;
extern "C" unsigned long g_00475300;
extern "C" unsigned long g_00475304;
extern "C" unsigned long g_00475308;
extern "C" unsigned long g_0047530c;
extern "C" unsigned long g_00475310;
extern "C" unsigned long g_00475314;
extern "C" unsigned long g_00475318;
extern "C" unsigned long g_0047531c;
extern "C" unsigned long g_00475320;
extern "C" unsigned long g_00475324;
extern "C" unsigned long g_00475328;
extern "C" unsigned long g_0047532c;
extern "C" unsigned long g_00475330;
extern "C" unsigned long g_00475334;
extern "C" unsigned long g_00475338;
extern "C" unsigned long g_00475470;
extern "C" unsigned long g_00475474;
extern "C" unsigned long g_00475478;
extern "C" unsigned long g_0047547c;
extern "C" unsigned long g_00475480;
extern "C" unsigned long g_00475484;
extern "C" unsigned long g_00475968;
extern "C" unsigned long g_0047596c;
extern "C" unsigned long g_00475970;
extern "C" unsigned long g_00475974;
extern "C" unsigned long g_00475978;
extern "C" unsigned long g_0047597c;
extern "C" unsigned long g_00475980;
extern "C" unsigned long g_00475984;
extern "C" unsigned long g_00475988;
extern "C" unsigned long g_0047598c;
extern "C" unsigned long g_00475990;
extern "C" unsigned long g_00475994;
extern "C" unsigned long g_00475998;
extern "C" unsigned long g_0047599c;
extern "C" unsigned long g_004759a0;
extern "C" unsigned long g_004759a4;
extern "C" unsigned long g_004759a8;
extern "C" unsigned long g_004759ac;
extern "C" unsigned long g_004759b0;
extern "C" unsigned long g_004759b4;
extern "C" unsigned long g_00475b64;
extern "C" unsigned long g_00475b68;
extern "C" unsigned long g_00475b6c;
extern "C" unsigned long g_00475b70;
extern "C" unsigned long g_00475b74;
extern "C" unsigned long g_00475b78;
extern "C" unsigned long g_00475b7c;
extern "C" unsigned long g_00475e28;
extern "C" unsigned long g_00475e2c;
extern "C" unsigned long g_00475e30;
extern "C" unsigned long g_00475e34;
extern "C" unsigned long g_00475e38;
extern "C" unsigned long g_00475e3c;
extern "C" unsigned long g_00475e40;
extern "C" unsigned long g_00475e44;
extern "C" unsigned long g_00475e48;
extern "C" unsigned long g_00475e4c;
extern "C" unsigned long g_00475e50;
extern "C" unsigned long g_00475fcc;
extern "C" unsigned long g_00475fd0;
extern "C" unsigned long g_00475fd4;
extern "C" unsigned long g_00475fd8;
extern "C" unsigned long g_00475fdc;
extern "C" unsigned long g_00476250;
extern "C" unsigned long g_00476254;
extern "C" unsigned long g_00476258;
extern "C" unsigned long g_0047625c;
extern "C" unsigned long g_00476260;
extern "C" unsigned long g_00476264;
extern "C" unsigned long g_00476268;
extern "C" unsigned long g_0047626c;
extern "C" unsigned long g_00476270;
extern "C" unsigned long g_00476274;
extern "C" unsigned long g_00476278;
extern "C" unsigned long g_0047627c;
extern "C" unsigned long g_00476280;
extern "C" unsigned long g_00476284;
extern "C" unsigned long g_00476288;
extern "C" unsigned long g_0047628c;
extern "C" unsigned long g_00476290;
extern "C" unsigned long g_00476480;
extern "C" unsigned long g_00476484;
extern "C" unsigned long g_00476488;
extern "C" unsigned long g_0047648c;
extern "C" unsigned long g_00476490;
extern "C" unsigned long g_00476494;
extern "C" unsigned long g_00476498;
extern "C" unsigned long g_0047649c;
extern "C" unsigned long g_004764a0;
extern "C" unsigned long g_004764a4;
extern "C" unsigned long g_004764a8;
extern "C" unsigned long g_004764ac;
extern "C" unsigned long g_004764b0;
extern "C" unsigned long g_004764b4;
extern "C" unsigned long g_004764b8;
extern "C" unsigned long g_004764bc;
CircusHttpSys::~CircusHttpSys()
{
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

// ===== 修复: 补回被误删的函数占位 (11) =====
void CircusHttpSys::onGetOpponentData(cocos2d::extension::CCHttpClient* p1, cocos2d::extension::CCHttpResponse* p2)
{
  undefined4 uVar1;
  int iStack_18;
  undefined4 uStack_14;
  int iStack_10;
  
  iStack_18 = (undefined4)(intptr_t)((int *)((int)this));
  uStack_14 = (undefined4)(p1);
  iStack_10 = (undefined4)(intptr_t) (undefined4)(intptr_t)p2;
  if (*(char *)(((int)this) + 0x14) != '\0') {
    ((BLGameScene *)this)->shareGameScene();
    ((BLGameScene *)this)->closeShieldLayer();
  }
  if (((int)(intptr_t)(int)(intptr_t)p2 != 0) && (*(char *)(p2 + 0x18) == '\0')) {
    uVar1 = (undefined4)(((Toast *)this)->sharedToast());
    func_0079e45c(&uStack_14,"网络连接超时",&iStack_18);
    ((Toast *)uVar1)->showSystemRemind((std::string *)(char *)uStack_14);
    func_0079e2bc(&uStack_14);
  }
  return;
}

void CircusHttpSys::onGetDownZipData(cocos2d::extension::CCHttpClient* p1, cocos2d::extension::CCHttpResponse* p2)
{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  char **ppcVar5;
  undefined1 auStack_34 [4];
  char *pcStack_30;
  undefined1 auStack_2c [4];
  undefined4 uStack_28;
  undefined1 auStack_24 [4];
  undefined4 uStack_20;
  char *apcStack_1c [2];
  
  if (*(char *)(((int)this) + 0x14) != '\0') {
    ((BLGameScene *)this)->shareGameScene();
    ((BLGameScene *)this)->closeShieldLayer();
  }
  if ((int)(intptr_t)(int)(intptr_t)p2 != 0) {
    if (*(char *)(p2 + 0x18) == '\0') {
      uVar1 = (undefined4)(((Toast *)this)->sharedToast());
      func_0079e45c(apcStack_1c,"网络连接超时",&uStack_20);
      ((Toast *)(uVar1))->showSystemRemind((std::string *)(char *)apcStack_1c);
      ppcVar5 = apcStack_1c;
    }
    else {
      ppcVar5 = &pcStack_30;
      func_0079e54c(ppcVar5,*(undefined4 *)(p2 + 0x1c),
                      *(int *)(p2 + 0x20) - *(int *)(p2 + 0x1c),apcStack_1c);
      0 /* ctorZero */;
      if (*pcStack_30 == '\0') {
        uVar1 = (undefined4)(((Toast *)this)->sharedToast());
        ((Toast *)(uVar1))->showToast((char const*)"数据下载,网络异常！");
      }
      else {
        func_0079e45c(auStack_2c,*(undefined4 *)(*(int *)(p2 + 0x14) + 0x28),apcStack_1c);
        func_0079e69c(auStack_2c,".zip");
        piVar2 = (int *)cocos2d::CCFileUtils::sharedFileUtils();
        (**(code **)(*(int *)(piVar2) + (0x44)))(auStack_24,piVar2);
        func_0079e53c(&uStack_28,auStack_24);
        func_0079e5dc(&uStack_28,auStack_2c);
        func_0079e2bc(auStack_24);
        iVar3 = (undefined4)(intptr_t)(func_0079ead4(uStack_28,"wb"));
        if (iVar3 != 0) {
          func_0079eae4(pcStack_30,1,*(int *)(p2 + 0x20) - *(int *)(p2 + 0x1c),iVar3);
          func_0079eaf4(iVar3);
        }
        func_0079e45c(&uStack_20,*(undefined4 *)(*(int *)(p2 + 0x14) + 0x28),auStack_34);
        func_0079e45c(apcStack_1c,uStack_20,auStack_24);
        uVar1 = (undefined4)(cocos2d::CCString::create(*(const std::string *)(void *)apcStack_1c));
        func_0079e2bc(apcStack_1c);
        func_0079e2bc(&uStack_20);
        uVar4 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
        ((cocos2d::CCNotificationCenter *)(uVar4))->postNotification((char const*)"MSG_DOWNZIPSUCCESS", (cocos2d::CCObject*)uVar1);
        func_0079e2bc(&uStack_28);
        func_0079e2bc(auStack_2c);
      }
    }
    func_0079e2bc(ppcVar5);
  }
  return;
}

void CircusHttpSys::SysChallengeJson(rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> const& p1, bool p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void CircusHttpSys::SysRankingJson(rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> const& p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

bool CircusHttpSys::init(std::string * p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void CircusHttpSys::onGetChallData(cocos2d::extension::CCHttpClient* p1, cocos2d::extension::CCHttpResponse* p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void CircusHttpSys::onGetOwnerData(cocos2d::extension::CCHttpClient* p1, cocos2d::extension::CCHttpResponse* p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void CircusHttpSys::onGetPvpRecordData(cocos2d::extension::CCHttpClient* p1, cocos2d::extension::CCHttpResponse* p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void CircusHttpSys::onGetHeroRecordData(cocos2d::extension::CCHttpClient* p1, cocos2d::extension::CCHttpResponse* p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void CircusHttpSys::onGetDownRankingData(cocos2d::extension::CCHttpClient* p1, cocos2d::extension::CCHttpResponse* p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void CircusHttpSys::onGetRankingTimeData(cocos2d::extension::CCHttpClient* p1, cocos2d::extension::CCHttpResponse* p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
