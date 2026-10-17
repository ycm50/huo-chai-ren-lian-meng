#include "PairingDownPngGet.h"
#include "CCObject.h"
#include "HttpResponse.h"
#include "HttpClient.h"
#include "BLForwards.h"
#include "DownPngInfo.h"
#include "PairingDownPng.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <pthread.h>   // ghost_fix.js 自动补齐
using namespace cocos2d;
// 兜底声明
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2dc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e32c(...);
extern "C" long long func_0079e35c(...);
extern "C" long long func_0079e36c(...);
extern "C" long long func_0079e37c(...);
extern "C" long long func_0079e41c(...);
extern "C" long long func_0079e42c(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e54c(...);
extern "C" long long func_0079e5ac(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long _DAT_0049d9a4;
extern "C" unsigned long _DAT_0049dc94;
extern "C" unsigned long _DAT_0049dc98;
extern "C" unsigned long _DAT_0049dc9c;
extern "C" unsigned long _DAT_0049dca0;
extern "C" unsigned long _DAT_0049dca4;
extern "C" unsigned long _DAT_0049e2bc;
extern "C" unsigned long _DAT_0049e2c0;
extern "C" unsigned long g_0049d9a4;
extern "C" unsigned long g_0049dc94;
extern "C" unsigned long g_0049dc98;
extern "C" unsigned long g_0049dc9c;
extern "C" unsigned long g_0049dca0;
extern "C" unsigned long g_0049dca4;
extern "C" unsigned long g_0049e2bc;
extern "C" unsigned long g_0049e2c0;
PairingDownPngGet::~PairingDownPngGet()
{
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  func_0079e2bc(((int)this) + 6);
  (void)(((long long)::pthread_mutex_destroy((pthread_mutex_t *)(((int)this) + 5))));
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

// ===== 修复: 补回被误删的函数占位 (2) =====
void PairingDownPngGet::create(std::string p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void PairingDownPngGet::onGetDownPngData(cocos2d::extension::CCHttpClient* p1, cocos2d::extension::CCHttpResponse* p2)
{
  undefined4 uVar1;
  undefined1 auStack_34 [4];
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  undefined1 auStack_24 [16];
  
  func_0079e41c();
  if (((int)(intptr_t)(int)(intptr_t)p2 != 0) &&
     (0 /* ctorZero */,
     *(char *)(p2 + 0x18) != '\0')) {
    func_0079e54c(auStack_34,*(undefined4 *)(p2 + 0x1c),
                    *(int *)(p2 + 0x20) - *(int *)(p2 + 0x1c),auStack_24);
    iStack_30 = (undefined4)(intptr_t)(*(int *)(g_0049e2c0 + 0x49e244) + 0xc);
    iStack_2c = (undefined4)(intptr_t)(iStack_30);
    uVar1 = (undefined4)(0 /* ctorZero */);
    func_0079e2dc(&iStack_30,uVar1);
    func_0079e52c(&iStack_2c,auStack_34);
    iStack_28 = (undefined4)(intptr_t)(*(int *)(p2 + 0x20) - *(int *)(p2 + 0x1c));
    uVar1 = (undefined4)(((sir::singleton<PairingDownPng, 0> *)this)->instance());
    0 /* ctorZero */;
    ((PairingDownPng *)(uVar1))->AddQueueInfo(*(DownPngInfo *)(void *)&auStack_24);
    ((DownPngInfo *)(auStack_24))->~DownPngInfo();
    ((DownPngInfo *)(&iStack_30))->~DownPngInfo();
    func_0079e2bc(auStack_34);
  }
  func_0079e42c(((int)this) + 0x14);
  return;
}
