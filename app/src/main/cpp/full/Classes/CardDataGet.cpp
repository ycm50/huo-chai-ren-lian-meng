#include "CardDataGet.h"
#include "BLGameScene.h"
#include "CardData.h"
#include "DataManager.h"
#include "LivenessUserData.h"
#include "MissionSweepData.h"
#include "PlatformHelp.h"
#include "StringJsonManager.h"
#include "Toast.h"
#include "UserData.h"
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
extern "C" long long func_0079e34c(...);
extern "C" long long func_0079e41c(...);
extern "C" long long func_0079e42c(...);
extern "C" long long func_0079e43c(...);
extern "C" long long func_0079e44c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e46c(...);
extern "C" long long func_0079e47c(...);
extern "C" long long func_0079e48c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e54c(...);
extern "C" long long func_0079e5ac(...);
extern "C" long long func_0079e65c(...);
extern "C" long long func_0079e66c(...);
extern "C" long long func_0079e67c(...);
extern "C" long long func_0079e68c(...);
extern "C" long long func_0079e954(...);
extern "C" unsigned long _DAT_0046c738;
extern "C" unsigned long _DAT_0046c83c;
extern "C" unsigned long _DAT_0046c840;
extern "C" unsigned long _DAT_0046c844;
extern "C" unsigned long _DAT_0046c848;
extern "C" unsigned long _DAT_0046c84c;
extern "C" unsigned long _DAT_0046c850;
extern "C" unsigned long _DAT_0046cd34;
extern "C" unsigned long _DAT_0046cd38;
extern "C" unsigned long _DAT_0046cd3c;
extern "C" unsigned long _DAT_0046cd40;
extern "C" unsigned long _DAT_0046cd44;
extern "C" unsigned long _DAT_0046cd48;
extern "C" unsigned long _DAT_0046cd4c;
extern "C" unsigned long _DAT_0046cd50;
extern "C" unsigned long _DAT_0046cd54;
extern "C" unsigned long _DAT_0046cd58;
extern "C" unsigned long _DAT_0046d1b0;
extern "C" unsigned long _DAT_0046d1b4;
extern "C" unsigned long _DAT_0046d1b8;
extern "C" unsigned long _DAT_0046d1bc;
extern "C" unsigned long _DAT_0046d1c0;
extern "C" unsigned long _DAT_0046d1c4;
extern "C" unsigned long _DAT_0046d1c8;
extern "C" unsigned long _DAT_0046d1cc;
extern "C" unsigned long _DAT_0046d1d0;
extern "C" unsigned long _DAT_0046d1d4;
extern "C" unsigned long _DAT_0046d1d8;
extern "C" unsigned long _DAT_0046d1dc;
extern "C" unsigned long _DAT_0046d1e0;
extern "C" unsigned long _DAT_0046d1e4;
extern "C" unsigned long _DAT_0046d1ec;
extern "C" unsigned long _DAT_0046d1f0;
extern "C" unsigned long _DAT_0046d5b4;
extern "C" unsigned long _DAT_0046d5b8;
extern "C" unsigned long _DAT_0046d5bc;
extern "C" unsigned long _DAT_0046d5c0;
extern "C" unsigned long _DAT_0046d5c4;
extern "C" unsigned long _DAT_0046d5c8;
extern "C" unsigned long _DAT_0046d5cc;
extern "C" unsigned long _DAT_0046d5d0;
extern "C" unsigned long _DAT_0046d5d4;
extern "C" unsigned long _DAT_0046d5d8;
extern "C" unsigned long _DAT_0046d5dc;
extern "C" unsigned long _DAT_0046d5e0;
extern "C" unsigned long _DAT_0046d5e4;
extern "C" unsigned long _DAT_0046d5e8;
extern "C" unsigned long _DAT_0046d5ec;
extern "C" unsigned long g_0046c738;
extern "C" unsigned long g_0046c83c;
extern "C" unsigned long g_0046c840;
extern "C" unsigned long g_0046c844;
extern "C" unsigned long g_0046c848;
extern "C" unsigned long g_0046c84c;
extern "C" unsigned long g_0046c850;
extern "C" unsigned long g_0046cd34;
extern "C" unsigned long g_0046cd38;
extern "C" unsigned long g_0046cd3c;
extern "C" unsigned long g_0046cd40;
extern "C" unsigned long g_0046cd44;
extern "C" unsigned long g_0046cd48;
extern "C" unsigned long g_0046cd4c;
extern "C" unsigned long g_0046cd50;
extern "C" unsigned long g_0046cd54;
extern "C" unsigned long g_0046cd58;
extern "C" unsigned long g_0046d1b0;
extern "C" unsigned long g_0046d1b4;
extern "C" unsigned long g_0046d1b8;
extern "C" unsigned long g_0046d1bc;
extern "C" unsigned long g_0046d1c0;
extern "C" unsigned long g_0046d1c4;
extern "C" unsigned long g_0046d1c8;
extern "C" unsigned long g_0046d1cc;
extern "C" unsigned long g_0046d1d0;
extern "C" unsigned long g_0046d1d4;
extern "C" unsigned long g_0046d1d8;
extern "C" unsigned long g_0046d1dc;
extern "C" unsigned long g_0046d1e0;
extern "C" unsigned long g_0046d1e4;
extern "C" unsigned long g_0046d1ec;
extern "C" unsigned long g_0046d1f0;
extern "C" unsigned long g_0046d5b4;
extern "C" unsigned long g_0046d5b8;
extern "C" unsigned long g_0046d5bc;
extern "C" unsigned long g_0046d5c0;
extern "C" unsigned long g_0046d5c4;
extern "C" unsigned long g_0046d5c8;
extern "C" unsigned long g_0046d5cc;
extern "C" unsigned long g_0046d5d0;
extern "C" unsigned long g_0046d5d4;
extern "C" unsigned long g_0046d5d8;
extern "C" unsigned long g_0046d5dc;
extern "C" unsigned long g_0046d5e0;
extern "C" unsigned long g_0046d5e4;
extern "C" unsigned long g_0046d5e8;
extern "C" unsigned long g_0046d5ec;
CardDataGet::~CardDataGet()
{
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  func_0079e2bc(((int)this) + 7);
  func_0079e2bc(((int)this) + 6);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

bool CardDataGet::GetPutTemplate()
{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int aiStack_1c [2];
  
  iStack_28 = *(int *)(g_0046c83c + 0x46c760) + 0xc;
  uVar1 = (undefined4)(cocos2d::CCUserDefault::sharedUserDefault());
  uVar1 = (undefined4)(((cocos2d::CCUserDefault *)uVar1)->getIntegerForKey((char const*)((intptr_t)"user_card_leftdays")));
  func_0079e45c(&uStack_24,((intptr_t)"json/card/cardtemplateput.json"),aiStack_1c);
  0 /* ctorZero */;
  piVar2 = (int *)cocos2d::CCFileUtils::sharedFileUtils();
  (**(code **)(*piVar2 + 0x18))(&uStack_20,piVar2,uStack_24);
  aiStack_1c[0] = 0;
  piVar2 = (int *)cocos2d::CCFileUtils::sharedFileUtils();
  iVar3 = (**(code **)(*piVar2 + 0x10))(piVar2,uStack_20,((intptr_t)"rb"),aiStack_1c);
  if (iVar3 == 0) {
    0 /* ctorZero */;
  }
  else {
    func_0079e65c(&iStack_28,aiStack_1c[0] + 1,0);
    func_0079e66c(&iStack_28);
    (void)(((long long)::memcpy((void *)(iStack_28),(const void *)(iVar3),(size_t)(aiStack_1c[0]))));
    (void)(::operator delete[]((void *)(iVar3)));
    cocos2d::CCString::createWithFormat((char const*)iStack_28, uVar1);
    uVar1 = (undefined4)(((cocos2d::CCString *)this)->getCString());
    func_0079e2dc(((int)this) + 0x1c,uVar1);
  }
  func_0079e2bc(&uStack_20);
  func_0079e2bc(&uStack_24);
  func_0079e2bc(&iStack_28);
  return iVar3 != 0;
}

// ===== 修复: 补回被误删的函数占位 (3) =====
bool CardDataGet::init(URL_CARD p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void CardDataGet::onPutCardData(cocos2d::extension::CCHttpClient* p1, cocos2d::extension::CCHttpResponse* p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void CardDataGet::onGetCardData(cocos2d::extension::CCHttpClient* p1, cocos2d::extension::CCHttpResponse* p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
