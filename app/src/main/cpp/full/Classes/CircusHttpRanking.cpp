#include "CircusHttpRanking.h"
#include "CCObject.h"
#include "HttpResponse.h"
#include "HttpClient.h"
#include "CCString.h"
#include "CCFileUtils.h"
#include "BLGameScene.h"
#include "CircusData.h"
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
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e48c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e54c(...);
extern "C" long long func_0079e65c(...);
extern "C" long long func_0079e66c(...);
extern "C" long long func_0079e67c(...);
extern "C" long long func_0079e954(...);
extern "C" unsigned long _DAT_00470dec;
extern "C" unsigned long _DAT_00473074;
extern "C" unsigned long _DAT_00473078;
extern "C" unsigned long _DAT_0047307c;
extern "C" unsigned long _DAT_00473080;
extern "C" unsigned long _DAT_00473084;
extern "C" unsigned long _DAT_00473088;
extern "C" unsigned long _DAT_00473c90;
extern "C" unsigned long _DAT_00473c94;
extern "C" unsigned long _DAT_00474414;
extern "C" unsigned long _DAT_00474418;
extern "C" unsigned long _DAT_0047441c;
extern "C" unsigned long _DAT_00474420;
extern "C" unsigned long _DAT_00474424;
extern "C" unsigned long _DAT_00474428;
extern "C" unsigned long _DAT_0047442c;
extern "C" unsigned long _DAT_00474430;
extern "C" unsigned long _DAT_00474434;
extern "C" unsigned long _DAT_00474438;
extern "C" unsigned long g_00470dec;
extern "C" unsigned long g_00473074;
extern "C" unsigned long g_00473078;
extern "C" unsigned long g_0047307c;
extern "C" unsigned long g_00473080;
extern "C" unsigned long g_00473084;
extern "C" unsigned long g_00473088;
extern "C" unsigned long g_00473c90;
extern "C" unsigned long g_00473c94;
extern "C" unsigned long g_00474414;
extern "C" unsigned long g_00474418;
extern "C" unsigned long g_0047441c;
extern "C" unsigned long g_00474420;
extern "C" unsigned long g_00474424;
extern "C" unsigned long g_00474428;
extern "C" unsigned long g_0047442c;
extern "C" unsigned long g_00474430;
extern "C" unsigned long g_00474434;
extern "C" unsigned long g_00474438;
CircusHttpRanking::~CircusHttpRanking()
{
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  func_0079e2bc(((int)this) + 6);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

// ===== 修复: 补回被误删的函数占位 (3) =====
bool CircusHttpRanking::GetRankingTemplate()
{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  int iStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int aiStack_1c [2];
  
  iStack_28 = (undefined4)(intptr_t)(*(int *)(g_00473074 + 0x472f88) + 0xc);
  func_0079e45c(&uStack_24,"json/circus/circustemplateranking.json",aiStack_1c);
  piVar2 = (int *)cocos2d::CCFileUtils::sharedFileUtils();
  (**(code **)(*(int *)(piVar2) + (0x18)))(&uStack_20,piVar2,uStack_24);
  aiStack_1c[0] = 0;
  piVar2 = (int *)cocos2d::CCFileUtils::sharedFileUtils();
  iVar3 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar2) + (0x10)))(piVar2,uStack_20,"rb",aiStack_1c));
  if (iVar3 == 0) {
    0 /* ctorZero */;
  }
  else {
    func_0079e65c(&iStack_28,aiStack_1c[0] + 1,0);
    func_0079e66c(&iStack_28);
    func_0079e48c(iStack_28,iVar3,aiStack_1c[0]);
    func_0079e67c(iVar3);
    iVar1 = (undefined4)(intptr_t)(iStack_28);
    ((CircusData *)this)->getMe();
    uVar5 = (undefined4)((void)(((CircusData *)this)->GetRankingPoint()),(intptr_t)0);
    uVar4 = (undefined4)((undefined4)((ulonglong)uVar5 >> 0x20));
    cocos2d::CCString::createWithFormat((char const*)"%llu", uVar4, (int)uVar5, uVar4);
    uVar4 = (undefined4)(((cocos2d::CCString *)this)->getCString());
    cocos2d::CCString::createWithFormat((char const*)iVar1, uVar4);
    uVar4 = (undefined4)(((cocos2d::CCString *)this)->getCString());
    func_0079e2dc(((int)this) + 0x18,uVar4);
    0 /* ctorZero */;
  }
  func_0079e2bc(&uStack_20);
  func_0079e2bc(&uStack_24);
  func_0079e2bc(&iStack_28);
  return iVar3 != 0;
}

bool CircusHttpRanking::init(std::string * p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void CircusHttpRanking::onGetRankingData(cocos2d::extension::CCHttpClient* p1, cocos2d::extension::CCHttpResponse* p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
