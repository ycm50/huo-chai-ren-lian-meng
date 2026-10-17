#include "ChallengeHttpData.h"
#include "BLGameScene.h"
#include "ChallengePlayerData.h"
#include "DataManager.h"
#include "Toast.h"
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
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e43c(...);
extern "C" long long func_0079e44c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e46c(...);
extern "C" long long func_0079e47c(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e54c(...);
extern "C" long long func_0079e69c(...);
extern "C" unsigned long UNK_0046e1ba;
extern "C" unsigned long _DAT_0046de8c;
extern "C" unsigned long _DAT_0046dec4;
extern "C" unsigned long _DAT_0046def8;
extern "C" unsigned long _DAT_0046df84;
extern "C" unsigned long _DAT_0046df88;
extern "C" unsigned long _DAT_0046df8c;
extern "C" unsigned long _DAT_0046e014;
extern "C" unsigned long _DAT_0046e018;
extern "C" unsigned long _DAT_0046e01c;
extern "C" unsigned long _DAT_0046e0a4;
extern "C" unsigned long _DAT_0046e0a8;
extern "C" unsigned long _DAT_0046e0ac;
extern "C" unsigned long _DAT_0046e1c8;
extern "C" unsigned long _DAT_0046e1cc;
extern "C" unsigned long _DAT_0046e1d0;
extern "C" unsigned long _DAT_0046e1d4;
extern "C" unsigned long _DAT_0046e1d8;
extern "C" unsigned long _DAT_0046e1dc;
extern "C" unsigned long _DAT_0046e1e0;
extern "C" unsigned long _DAT_0046e310;
extern "C" unsigned long _DAT_0046e314;
extern "C" unsigned long _DAT_0046e318;
extern "C" unsigned long _DAT_0046e31c;
extern "C" unsigned long _DAT_0046e320;
extern "C" unsigned long _DAT_0046e324;
extern "C" unsigned long _DAT_0046e5c4;
extern "C" unsigned long _DAT_0046e5c8;
extern "C" unsigned long _DAT_0046e5cc;
extern "C" unsigned long _DAT_0046e5d0;
extern "C" unsigned long _DAT_0046e5d4;
extern "C" unsigned long _DAT_0046e5d8;
extern "C" unsigned long _DAT_0046e5dc;
extern "C" unsigned long _DAT_0046e5e0;
extern "C" unsigned long _DAT_0046e5e4;
extern "C" unsigned long _DAT_0046e5e8;
extern "C" unsigned long _DAT_0046e5ec;
extern "C" unsigned long _DAT_0046e5f0;
extern "C" unsigned long _DAT_0046e5f4;
extern "C" unsigned long _DAT_0046e5f8;
extern "C" unsigned long _DAT_0046e5fc;
extern "C" unsigned long _DAT_0046e600;
extern "C" unsigned long _DAT_0046e604;
extern "C" unsigned long _DAT_0046e608;
extern "C" unsigned long _DAT_0046e60c;
extern "C" unsigned long _DAT_0046e610;
extern "C" unsigned long _DAT_0046e614;
extern "C" unsigned long _DAT_0046e618;
extern "C" unsigned long _DAT_0046e61c;
extern "C" unsigned long _DAT_0046e620;
extern "C" unsigned long _DAT_0046e624;
extern "C" unsigned long _DAT_0046e628;
extern "C" unsigned long _DAT_0046e62c;
extern "C" unsigned long _DAT_0046e7d8;
extern "C" unsigned long _DAT_0046e7dc;
extern "C" unsigned long _DAT_0046e7e0;
extern "C" unsigned long _DAT_0046e7e4;
extern "C" unsigned long _DAT_0046e7e8;
extern "C" unsigned long _DAT_0046e7ec;
extern "C" unsigned long _DAT_0046e7f0;
extern "C" unsigned long _DAT_0046e7f4;
extern "C" unsigned long _DAT_0046e7f8;
extern "C" unsigned long _DAT_0046e7fc;
extern "C" unsigned long _DAT_0046e800;
extern "C" unsigned long _DAT_0046e804;
extern "C" unsigned long _DAT_0046e808;
extern "C" unsigned long _DAT_0046e80c;
extern "C" unsigned long _DAT_0046e810;
extern "C" unsigned long g_0046de8c;
extern "C" unsigned long g_0046dec4;
extern "C" unsigned long g_0046def8;
extern "C" unsigned long g_0046df84;
extern "C" unsigned long g_0046df88;
extern "C" unsigned long g_0046df8c;
extern "C" unsigned long g_0046e014;
extern "C" unsigned long g_0046e018;
extern "C" unsigned long g_0046e01c;
extern "C" unsigned long g_0046e0a4;
extern "C" unsigned long g_0046e0a8;
extern "C" unsigned long g_0046e0ac;
extern "C" unsigned long g_0046e1ba;
extern "C" unsigned long g_0046e1c8;
extern "C" unsigned long g_0046e1cc;
extern "C" unsigned long g_0046e1d0;
extern "C" unsigned long g_0046e1d4;
extern "C" unsigned long g_0046e1d8;
extern "C" unsigned long g_0046e1dc;
extern "C" unsigned long g_0046e1e0;
extern "C" unsigned long g_0046e310;
extern "C" unsigned long g_0046e314;
extern "C" unsigned long g_0046e318;
extern "C" unsigned long g_0046e31c;
extern "C" unsigned long g_0046e320;
extern "C" unsigned long g_0046e324;
extern "C" unsigned long g_0046e5c4;
extern "C" unsigned long g_0046e5c8;
extern "C" unsigned long g_0046e5cc;
extern "C" unsigned long g_0046e5d0;
extern "C" unsigned long g_0046e5d4;
extern "C" unsigned long g_0046e5d8;
extern "C" unsigned long g_0046e5dc;
extern "C" unsigned long g_0046e5e0;
extern "C" unsigned long g_0046e5e4;
extern "C" unsigned long g_0046e5e8;
extern "C" unsigned long g_0046e5ec;
extern "C" unsigned long g_0046e5f0;
extern "C" unsigned long g_0046e5f4;
extern "C" unsigned long g_0046e5f8;
extern "C" unsigned long g_0046e5fc;
extern "C" unsigned long g_0046e600;
extern "C" unsigned long g_0046e604;
extern "C" unsigned long g_0046e608;
extern "C" unsigned long g_0046e60c;
extern "C" unsigned long g_0046e610;
extern "C" unsigned long g_0046e614;
extern "C" unsigned long g_0046e618;
extern "C" unsigned long g_0046e61c;
extern "C" unsigned long g_0046e620;
extern "C" unsigned long g_0046e624;
extern "C" unsigned long g_0046e628;
extern "C" unsigned long g_0046e62c;
extern "C" unsigned long g_0046e7d8;
extern "C" unsigned long g_0046e7dc;
extern "C" unsigned long g_0046e7e0;
extern "C" unsigned long g_0046e7e4;
extern "C" unsigned long g_0046e7e8;
extern "C" unsigned long g_0046e7ec;
extern "C" unsigned long g_0046e7f0;
extern "C" unsigned long g_0046e7f4;
extern "C" unsigned long g_0046e7f8;
extern "C" unsigned long g_0046e7fc;
extern "C" unsigned long g_0046e800;
extern "C" unsigned long g_0046e804;
extern "C" unsigned long g_0046e808;
extern "C" unsigned long g_0046e80c;
extern "C" unsigned long g_0046e810;
ChallengeHttpData::~ChallengeHttpData()
{
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

ChallengeHttpData::ChallengeHttpData()
{
  0 /* ctorZero */;
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  return;
}

int ChallengeHttpData::getInstance()
{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)(g_0046def8 + 0x46ded0);
  if (*piVar2 == 0) {
    iVar1 = ((long long)::operator new((size_t)(0x14)));
    0 /* ctorZero */;
    *piVar2 = iVar1;
  }
  return *piVar2;
}

void ChallengeHttpData::startChallenge()
{
  int *piVar1;
  int iVar2;
  undefined1 auStack_34 [4];
  undefined1 auStack_30 [4];
  undefined4 uStack_2c;
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [16];
  
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  iVar2 = (**(code **)(*piVar1 + 0x1a0))();
  func_0079e53c(&uStack_2c,iVar2 + 0x18);
  func_0079e45c(auStack_28,((intptr_t)"url_challenge_startchallenge"),auStack_34);
  func_0079e45c(auStack_24,g_0046df88 + 0x46df34,auStack_30);
  0 /* ctorZero */;
  func_0079e2bc(auStack_24);
  func_0079e2bc(auStack_28);
  func_0079e2bc(&uStack_2c);
  return;
}

void ChallengeHttpData::winGame()
{
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  ((BLGameScene *)this)->shareGameScene();
  ((BLGameScene *)this)->showShieldLayer();
  func_0079e45c(auStack_2c,((intptr_t)"{ \"status\":1 }"),&uStack_20);
  func_0079e45c(auStack_28,((intptr_t)"url_challenge_result"),auStack_30);
  func_0079e53c(auStack_24,auStack_2c);
  uStack_1c = (undefined4)(0);
  uStack_20 = (undefined4)(*(undefined4 *)(g_0046e01c + 0x46dfd2));
  0 /* ctorZero */;
  func_0079e2bc(auStack_24);
  func_0079e2bc(auStack_28);
  func_0079e2bc(auStack_2c);
  return;
}

void ChallengeHttpData::loseGame()
{
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  ((BLGameScene *)this)->shareGameScene();
  ((BLGameScene *)this)->showShieldLayer();
  func_0079e45c(auStack_2c,((intptr_t)"{ \"status\":0 }"),&uStack_20);
  func_0079e45c(auStack_28,((intptr_t)"url_challenge_result"),auStack_30);
  func_0079e53c(auStack_24,auStack_2c);
  uStack_1c = (undefined4)(0);
  uStack_20 = (undefined4)(*(undefined4 *)(g_0046e0ac + 0x46e062));
  0 /* ctorZero */;
  func_0079e2bc(auStack_24);
  func_0079e2bc(auStack_28);
  func_0079e2bc(auStack_2c);
  return;
}

// ===== 修复: 补回被误删的函数占位 (3) =====
void ChallengeHttpData::onWinGameResponse(cocos2d::extension::CCHttpClient* p1, cocos2d::extension::CCHttpResponse* p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void ChallengeHttpData::onLoseGameResponse(cocos2d::extension::CCHttpClient* p1, cocos2d::extension::CCHttpResponse* p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void ChallengeHttpData::onStartChallengeResponse(cocos2d::extension::CCHttpClient* p1, cocos2d::extension::CCHttpResponse* p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
