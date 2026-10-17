#include "MonthlySvrDataHandler.h"
#include "CCNotificationCenter.h"
#include "CCObject.h"
#include "HttpResponse.h"
#include "HttpClient.h"
#include "BLForwards.h"
#include "BLGameScene.h"
#include "MonthlyContractData.h"
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
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e54c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long _DAT_0045eae8;
extern "C" unsigned long _DAT_0045f1a4;
extern "C" unsigned long _DAT_0045fc44;
extern "C" unsigned long _DAT_0045fc48;
extern "C" unsigned long _DAT_0045fc4c;
extern "C" unsigned long _DAT_0045fc50;
extern "C" unsigned long _DAT_0045fc54;
extern "C" unsigned long _DAT_0045fc58;
extern "C" unsigned long _DAT_0045fc5c;
extern "C" unsigned long _DAT_0045fdb4;
extern "C" unsigned long _DAT_0045fdb8;
extern "C" unsigned long g_0045eae8;
extern "C" unsigned long g_0045f1a4;
extern "C" unsigned long g_0045fc44;
extern "C" unsigned long g_0045fc48;
extern "C" unsigned long g_0045fc4c;
extern "C" unsigned long g_0045fc50;
extern "C" unsigned long g_0045fc54;
extern "C" unsigned long g_0045fc58;
extern "C" unsigned long g_0045fc5c;
extern "C" unsigned long g_0045fdb4;
extern "C" unsigned long g_0045fdb8;
MonthlySvrDataHandler::~MonthlySvrDataHandler()
{
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void MonthlySvrDataHandler::onHttpRespSave(cocos2d::extension::CCHttpClient* p1, cocos2d::extension::CCHttpResponse* p2)
{
  if (*(char *)(((int)this) + 0x14) != '\0') {
    ((BLGameScene *)this)->shareGameScene();
    ((BLGameScene *)this)->closeShieldLayer();
  }
  return;
}

// ===== 修复: 补回被误删的函数占位 (4) =====
bool MonthlySvrDataHandler::init(int p1, bool p2, char const* p3)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void MonthlySvrDataHandler::create(int p1, bool p2, char const* p3)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void MonthlySvrDataHandler::onHttpReceiveTime(cocos2d::extension::CCHttpClient* p1, cocos2d::extension::CCHttpResponse* p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void MonthlySvrDataHandler::onHttpRespInfo(cocos2d::extension::CCHttpClient* p1, cocos2d::extension::CCHttpResponse* p2)
{
  undefined4 uVar1;
  int iVar2;
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
  if (((int)(intptr_t)(int)(intptr_t)p2 != 0) && (*(char *)(p2 + 0x18) != '\0')) {
    func_0079e54c(&uStack_14,*(int *)(p2 + 0x1c),
                    *(int *)(p2 + 0x20) - *(int *)(p2 + 0x1c),&iStack_18);
    cocos2d::CCLog((char const*)"onHttpRespInfo %s", uStack_14);
    uVar1 = (undefined4)(((sir::singleton<MonthlyContractData, 0> *)this)->instance());
    iVar2 = (undefined4)((void)(((MonthlyContractData *)(uVar1))->parseInfo((char const*)uStack_14)),(intptr_t)0);
    if (iVar2 != 0) {
      uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
      ((cocos2d::CCNotificationCenter *)(uVar1))->postNotification((char const*)"EVENT_MONTHLY_CONTRACT_SHOWUI");
    }
    func_0079e2bc(&uStack_14);
  }
  return;
}
