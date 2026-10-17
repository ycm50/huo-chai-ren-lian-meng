#include "TimeLimitedHeroData.h"
#include "HttpRequest.h"
#include "CCObject.h"
#include "HttpClient.h"
#include "BLGameScene.h"
#include "GiftItemData.h"
#include "HEROGIFTITEM.h"
#include "StringJsonManager.h"
#include "Toast.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <new>   // ghost_fix.js 自动补齐
#include "BLForwards.h"

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
extern "C" long long func_0079e5ac(...);
extern "C" long long func_0079e774(...);
extern "C" unsigned long _DAT_0047cee8;
extern "C" unsigned long _DAT_0047ceec;
extern "C" unsigned long _DAT_0047cef0;
extern "C" unsigned long _DAT_0047d058;
extern "C" unsigned long _DAT_0047d064;
extern "C" unsigned long _DAT_0047d068;
extern "C" unsigned long _DAT_0047d06c;
extern "C" unsigned long _DAT_0047d070;
extern "C" unsigned long _DAT_0047d278;
extern "C" unsigned long _DAT_0047d27c;
extern "C" unsigned long _DAT_0047d280;
extern "C" unsigned long _DAT_0047d284;
extern "C" unsigned long _DAT_0047d288;
extern "C" unsigned long _DAT_0047d28c;
extern "C" unsigned long _DAT_0047d580;
extern "C" unsigned long _DAT_0047d584;
extern "C" unsigned long _DAT_0047d588;
extern "C" unsigned long _DAT_0047d58c;
extern "C" unsigned long _DAT_0047d590;
extern "C" unsigned long _DAT_0047d594;
extern "C" unsigned long _DAT_0047d598;
extern "C" unsigned long _DAT_0047d59c;
extern "C" unsigned long _DAT_0047d5a0;
extern "C" unsigned long _DAT_0047d5a4;
extern "C" unsigned long _DAT_0047d5a8;
extern "C" unsigned long _DAT_0047d5ac;
extern "C" unsigned long _DAT_0047d5b0;
extern "C" unsigned long _DAT_0047d5b4;
extern "C" unsigned long _DAT_0047d5b8;
extern "C" unsigned long _DAT_0047d5bc;
extern "C" unsigned long _DAT_0047d5c0;
extern "C" unsigned long _DAT_0047d5c4;
extern "C" unsigned long _DAT_0047d5c8;
extern "C" unsigned long g_0047cee8;
extern "C" unsigned long g_0047ceec;
extern "C" unsigned long g_0047cef0;
extern "C" unsigned long g_0047d058;
extern "C" unsigned long g_0047d064;
extern "C" unsigned long g_0047d068;
extern "C" unsigned long g_0047d06c;
extern "C" unsigned long g_0047d070;
extern "C" unsigned long g_0047d278;
extern "C" unsigned long g_0047d27c;
extern "C" unsigned long g_0047d280;
extern "C" unsigned long g_0047d284;
extern "C" unsigned long g_0047d288;
extern "C" unsigned long g_0047d28c;
extern "C" unsigned long g_0047d580;
extern "C" unsigned long g_0047d584;
extern "C" unsigned long g_0047d588;
extern "C" unsigned long g_0047d58c;
extern "C" unsigned long g_0047d590;
extern "C" unsigned long g_0047d594;
extern "C" unsigned long g_0047d598;
extern "C" unsigned long g_0047d59c;
extern "C" unsigned long g_0047d5a0;
extern "C" unsigned long g_0047d5a4;
extern "C" unsigned long g_0047d5a8;
extern "C" unsigned long g_0047d5ac;
extern "C" unsigned long g_0047d5b0;
extern "C" unsigned long g_0047d5b4;
extern "C" unsigned long g_0047d5b8;
extern "C" unsigned long g_0047d5bc;
extern "C" unsigned long g_0047d5c0;
extern "C" unsigned long g_0047d5c4;
extern "C" unsigned long g_0047d5c8;
TimeLimitedHeroData::~TimeLimitedHeroData()
{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar1 = g_0047cef0;
  iVar2 = g_0047ceec;
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  iVar2 = *(int *)(iVar2 + 0x47cec6);
  puVar3 = *(undefined4 **)(iVar1 + 0x47cec8);
  ((cocos2d::CCObject *)*(int *)((int)this + 4*(8)))->release();
  *(int *)this = iVar2 + 8;
  *puVar3 = 0;
  return;
}

TimeLimitedHeroData::TimeLimitedHeroData()
{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [8];
  
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  *(int *)((int)this + 4*(2)) = 0;
  *(int *)((int)this + 4*(3)) = 0;
  *(int *)((int)this + 4*(4)) = 0;
  *(int *)((int)this + 4*(5)) = 0;
  *(int *)((int)this + 4*(6)) = 0;
  *(int *)((int)this + 4*(7)) = 0;
  piVar1 = (int *)((long long)::operator new((size_t)(0x54)));
  0 /* ctorZero */;
  iVar2 = ((GiftItemData *)piVar1)->init();
  if (iVar2 == 0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    piVar1 = (int *)0x0;
  }
  else {
    ((cocos2d::CCObject *)piVar1)->autorelease();
  }
  *(int *)((int)this + 4*(8)) = (int)piVar1;
  ((cocos2d::CCObject *)this)->retain();
  piVar1 = (int *)*(int *)((int)this + 4*(8));
  pcVar3 = *(code **)(*piVar1 + 0x44);
  func_0079e45c(auStack_28,"限时英雄礼包",auStack_1c);
  (*pcVar3)(piVar1,auStack_28);
  func_0079e2bc(auStack_28);
  piVar1 = (int *)*(int *)((int)this + 4*(8));
  pcVar3 = *(code **)(*piVar1 + 0x54);
  func_0079e45c(auStack_24,((intptr_t)"100"),auStack_1c);
  (*pcVar3)(piVar1,auStack_24);
  func_0079e2bc(auStack_24);
  piVar1 = (int *)*(int *)((int)this + 4*(8));
  pcVar3 = *(code **)(*piVar1 + 0x4c);
  func_0079e45c(auStack_20,((intptr_t)"25"),auStack_1c);
  (*pcVar3)(piVar1,auStack_20);
  func_0079e2bc(auStack_20);
  piVar1 = (int *)*(int *)((int)this + 4*(8));
  pcVar3 = *(code **)(*piVar1 + 0x34);
  func_0079e45c(auStack_1c,((intptr_t)"COM_LOL_GIFT_HERO"),auStack_20);
  (*pcVar3)(piVar1,auStack_1c);
  func_0079e2bc(auStack_1c);
  return;
}

void TimeLimitedHeroData::saveDataToServer(char const* p1)
{
  return;
}

undefined4 TimeLimitedHeroData::isOpened()
{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(((int)this) + 0x1c);
  if ((iVar1 < *(int *)(((int)this) + 0xc)) ||
     ((*(int *)(((int)this) + 0xc) == iVar1 && (*(uint *)(((int)this) + 0x18) < *(uint *)(((int)this) + 8))))) {
    uVar2 = (undefined4)(0);
  }
  else {
    uVar2 = (undefined4)(1);
    if ((*(int *)(((int)this) + 0x14) < iVar1) ||
       ((*(int *)(((int)this) + 0x14) == iVar1 &&
        (*(uint *)(((int)this) + 0x10) < *(uint *)(((int)this) + 0x18))))) {
      uVar2 = (undefined4)(0);
    }
  }
  return uVar2;
}

// ===== 修复: 补回被误删的函数占位 (2) =====
void TimeLimitedHeroData::getDataFromServer()
{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [16];
  
  piVar1 = (int *)func_0079e2fc(0x1c);
  0 /* ctorZero */;
  *piVar1 = *(int *)(g_0047d278 + 0x47d14a) + 8;
  piVar1[6] = 0;
  *(undefined1 *)(piVar1 + 5) = 1;
  ((BLGameScene *)this)->shareGameScene();
  ((BLGameScene *)this)->showShieldLayer();
  piVar2 = (int *)func_0079e2fc(0x48);
  0 /* ctorZero */;
  *piVar2 = *(int *)("xի") + 8;
  iVar5 = (undefined4)(intptr_t)(*(int *)(g_0047d280 + 0x47d180));
  piVar2[7] = 0;
  iVar5 = (undefined4)(intptr_t)(iVar5 + 0xc);
  piVar2[6] = iVar5;
  piVar2[10] = iVar5;
  piVar2[8] = 0;
  piVar2[9] = 0;
  piVar2[0xf] = 0;
  piVar2[0x10] = 0;
  piVar2[0x11] = 0;
  piVar2[5] = 4;
  func_0079e5ac(piVar2 + 6);
  piVar2[8] = piVar2[7];
  func_0079e5ac(piVar2 + 10);
  piVar2[0xb] = 0;
  piVar2[0xc] = 0;
  piVar2[0xd] = 0;
  piVar2[0xe] = 0;
  uVar3 = (undefined4)(((sir::singleton<StringJsonManager, 0> *)this)->instance());
  func_0079e45c(auStack_24,"url_timelimitedhero_info",auStack_28);
  puVar4 = (undefined4 *)(((StringJsonManager *)(uVar3)))->getStringUrlWithKey(*(std::string *)auStack_24);
  uVar3 = (undefined4)(*puVar4);
  func_0079e2bc(auStack_24);
  func_0079e2dc(piVar2 + 6,uVar3);
  cocos2d::CCLog((char const*)">>>TimeLmtdHeroDataHandler::init>>>url = %s", uVar3);
  piVar2[5] = 0;
  0 /* ctorZero */;
  ((std::vector<std::string, std::allocator<std::string>> *)(piVar2 + 0xf))->operator=(*(std::vector<std::string, std::allocator<std::string>> *)auStack_24);
  ((std::vector<std::string, std::allocator<std::string>> *)(auStack_24))->~vector();
  iVar5 = (undefined4)(intptr_t)(*(int *)(g_0047d28c + 0x47d20e));
  piVar2[0xb] = (int)piVar1;
  piVar2[0xc] = iVar5;
  piVar2[0xd] = 0;
  ((cocos2d::CCObject *)(piVar1))->retain();
  uVar3 = (undefined4)(cocos2d::extension::CCHttpClient::getInstance());
  ((cocos2d::extension::CCHttpClient *)(uVar3))->send((cocos2d::extension::CCHttpRequest*)piVar2);
  ((cocos2d::CCObject *)(piVar2))->release();
  ((cocos2d::CCObject *)(piVar1))->autorelease();
  return;
}

undefined4 TimeLimitedHeroData::parseInfo(char const* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
