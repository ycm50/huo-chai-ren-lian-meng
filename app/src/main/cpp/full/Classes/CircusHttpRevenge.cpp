#include "CircusHttpRevenge.h"
#include "HttpRequest.h"
#include "CCObject.h"
#include "HttpResponse.h"
#include "HttpClient.h"
#include "CCString.h"
#include "CCFileUtils.h"
#include "BLGameScene.h"
#include "CircusData.h"
#include "CircusResultinfo.h"
#include "PlatformHelp.h"
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
extern "C" long long func_0079e2dc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e48c(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e54c(...);
extern "C" long long func_0079e65c(...);
extern "C" long long func_0079e66c(...);
extern "C" long long func_0079e67c(...);
extern "C" long long func_0079e954(...);
extern "C" unsigned long _DAT_00470db4;
extern "C" unsigned long _DAT_00472f68;
extern "C" unsigned long _DAT_00472f6c;
extern "C" unsigned long _DAT_00472f70;
extern "C" unsigned long _DAT_00472f74;
extern "C" unsigned long _DAT_00472f78;
extern "C" unsigned long _DAT_00473ec0;
extern "C" unsigned long _DAT_00473ec4;
extern "C" unsigned long _DAT_00473ec8;
extern "C" unsigned long _DAT_00473ecc;
extern "C" unsigned long _DAT_00474278;
extern "C" unsigned long _DAT_0047427c;
extern "C" unsigned long _DAT_00474280;
extern "C" unsigned long _DAT_00474284;
extern "C" unsigned long _DAT_00474288;
extern "C" unsigned long _DAT_0047428c;
extern "C" unsigned long _DAT_00474290;
extern "C" unsigned long _DAT_00474294;
extern "C" unsigned long _DAT_00474298;
extern "C" unsigned long _DAT_0047429c;
extern "C" unsigned long _DAT_004742a0;
extern "C" unsigned long _DAT_004742a4;
extern "C" unsigned long g_00470db4;
extern "C" unsigned long g_00472f68;
extern "C" unsigned long g_00472f6c;
extern "C" unsigned long g_00472f70;
extern "C" unsigned long g_00472f74;
extern "C" unsigned long g_00472f78;
extern "C" unsigned long g_00473ec0;
extern "C" unsigned long g_00473ec4;
extern "C" unsigned long g_00473ec8;
extern "C" unsigned long g_00473ecc;
extern "C" unsigned long g_00474278;
extern "C" unsigned long g_0047427c;
extern "C" unsigned long g_00474280;
extern "C" unsigned long g_00474284;
extern "C" unsigned long g_00474288;
extern "C" unsigned long g_0047428c;
extern "C" unsigned long g_00474290;
extern "C" unsigned long g_00474294;
extern "C" unsigned long g_00474298;
extern "C" unsigned long g_0047429c;
extern "C" unsigned long g_004742a0;
extern "C" unsigned long g_004742a4;
CircusHttpRevenge::~CircusHttpRevenge()
{
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  func_0079e2bc(((int)this) + 6);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

bool CircusHttpRevenge::GetRevengeTemplate()
{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  int iStack_5c;
  undefined4 auStack_58 [4];
  undefined1 auStack_48 [4];
  undefined4 uStack_44;
  undefined1 auStack_38 [8];
  undefined4 uStack_30;
  undefined1 auStack_28 [12];
  undefined4 uStack_1c;
  
  iStack_68 = *(int *)(g_00472f68 + 0x472e08) + 0xc;
  func_0079e45c(&uStack_64,((intptr_t)"json/circus/circustemplaterevenge.json"),auStack_28);
  piVar2 = (int *)cocos2d::CCFileUtils::sharedFileUtils();
  (**(code **)(*piVar2 + 0x18))(&uStack_60,piVar2,uStack_64);
  iStack_5c = 0;
  piVar2 = (int *)cocos2d::CCFileUtils::sharedFileUtils();
  iVar3 = (**(code **)(*piVar2 + 0x10))(piVar2,uStack_60,((intptr_t)"rb"),&iStack_5c);
  if (iVar3 == 0) {
    0 /* ctorZero */;
  }
  else {
    func_0079e65c(&iStack_68,iStack_5c + 1,0);
    func_0079e66c(&iStack_68);
    (void)(((long long)::memcpy((void *)(iStack_68),(const void *)(iVar3),(size_t)(iStack_5c))));
    (void)(::operator delete[]((void *)(iVar3)));
    iVar1 = iStack_68;
    iVar4 = ((CircusData *)this)->getMe();
    0 /* ctorZero */;
    iVar4 = ((CircusData *)this)->getMe();
    0 /* ctorZero */;
    iVar4 = ((CircusData *)this)->getMe();
    0 /* ctorZero */;
    iVar4 = ((CircusData *)this)->getMe();
    0 /* ctorZero */;
    cocos2d::CCString::createWithFormat((char const*)iVar1, auStack_58[0], uStack_44, uStack_30, uStack_1c);
    uVar5 = (undefined4)(((cocos2d::CCString *)this)->getCString());
    func_0079e2dc(((int)this) + 0x18,uVar5);
    ((CircusResultinfo *)auStack_28)->~CircusResultinfo();
    ((CircusResultinfo *)auStack_38)->~CircusResultinfo();
    ((CircusResultinfo *)auStack_48)->~CircusResultinfo();
    ((CircusResultinfo *)auStack_58)->~CircusResultinfo();
    0 /* ctorZero */;
  }
  func_0079e2bc(&uStack_60);
  func_0079e2bc(&uStack_64);
  func_0079e2bc(&iStack_68);
  return iVar3 != 0;
}

// ===== 修复: 补回被误删的函数占位 (2) =====
bool CircusHttpRevenge::init(std::string * p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void CircusHttpRevenge::onGetRevengeData(cocos2d::extension::CCHttpClient* p1, cocos2d::extension::CCHttpResponse* p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
