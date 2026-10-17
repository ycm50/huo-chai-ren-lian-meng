#include "FeedBackDataGet.h"
#include "CCNotificationCenter.h"
#include "CCObject.h"
#include "HttpResponse.h"
#include "HttpClient.h"
#include "BLGameScene.h"
#include "PlatformHelp.h"
#include "StringJsonManager.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include "Json.h"

using namespace cocos2d;
// 兜底声明
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2dc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e54c(...);
extern "C" long long func_0079e5ac(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long _DAT_004799d4;
extern "C" unsigned long _DAT_00479a88;
extern "C" unsigned long _DAT_00479a8c;
extern "C" unsigned long _DAT_00479a90;
extern "C" unsigned long _DAT_00479a94;
extern "C" unsigned long _DAT_00479a98;
extern "C" unsigned long _DAT_00479a9c;
extern "C" unsigned long _DAT_00479bec;
extern "C" unsigned long _DAT_00479bf0;
extern "C" unsigned long _DAT_00479bf4;
extern "C" unsigned long _DAT_00479bf8;
extern "C" unsigned long _DAT_00479bfc;
extern "C" unsigned long g_004799d4;
extern "C" unsigned long g_00479a88;
extern "C" unsigned long g_00479a8c;
extern "C" unsigned long g_00479a90;
extern "C" unsigned long g_00479a94;
extern "C" unsigned long g_00479a98;
extern "C" unsigned long g_00479a9c;
extern "C" unsigned long g_00479bec;
extern "C" unsigned long g_00479bf0;
extern "C" unsigned long g_00479bf4;
extern "C" unsigned long g_00479bf8;
extern "C" unsigned long g_00479bfc;
FeedBackDataGet::~FeedBackDataGet()
{
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

// ===== 修复: 补回被误删的函数占位 (2) =====
void FeedBackDataGet::onGetFeedbackData(cocos2d::extension::CCHttpClient* p1, cocos2d::extension::CCHttpResponse* p2)
{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
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
  if ((int)(intptr_t)(int)(intptr_t)p2 != 0) {
    if (*(char *)(p2 + 0x18) == '\0') {
      cocos2d::CCLog((char const*)"response failed");
      cocos2d::CCLog((char const*)"error buffer: %s", *(undefined4 *)(p2 + 0x38));
    }
    else {
      func_0079e54c(&uStack_14,*(int *)(p2 + 0x1c),
                      *(int *)(p2 + 0x20) - *(int *)(p2 + 0x1c),&iStack_18);
      iVar1 = (undefined4)(intptr_t)(cocos2d::extension::Json_create((char const*)uStack_14));
      if (iVar1 != 0) {
        iVar2 = (undefined4)(intptr_t)(cocos2d::extension::Json_getInt((cocos2d::extension::Json*)iVar1, (char const*)"status", 0));
        if (iVar2 == 200) {
          uVar3 = (undefined4)(intptr_t)(cocos2d::extension::Json_getItem((cocos2d::extension::Json*)iVar1, (char const*)"data"));
          iVar2 = (undefined4)(intptr_t)(cocos2d::extension::Json_getInt((cocos2d::extension::Json*)uVar3, (char const*)"hasNotify", 0));
          if (iVar2 == 1) {
            uVar3 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
            ((cocos2d::CCNotificationCenter *)(uVar3))->postNotification((char const*)"DAILYSIGN_SHEZHI_FANKUINUM");
          }
        }
        cocos2d::extension::Json_dispose((cocos2d::extension::Json*)iVar1);
      }
      func_0079e2bc(&uStack_14);
    }
  }
  return;
}

bool FeedBackDataGet::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
