#include "LuckShopDataGet.h"
#include "BLGameScene.h"
#include "LuckShopData.h"
#include "LuckShopItem.h"
#include "StringJsonManager.h"
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
extern "C" long long func_0079e5ac(...);
extern "C" long long func_0079e65c(...);
extern "C" long long func_0079e66c(...);
extern "C" long long func_0079e67c(...);
extern "C" long long func_0079e68c(...);
extern "C" long long func_0079e934(...);
extern "C" long long func_0079e954(...);
extern "C" long long func_0079eaa4(...);
extern "C" unsigned long _DAT_0048ac74;
extern "C" unsigned long _DAT_0048ada4;
extern "C" unsigned long _DAT_0048ada8;
extern "C" unsigned long _DAT_0048adac;
extern "C" unsigned long _DAT_0048adb0;
extern "C" unsigned long _DAT_0048adb4;
extern "C" unsigned long _DAT_0048b76c;
extern "C" unsigned long _DAT_0048b770;
extern "C" unsigned long _DAT_0048b774;
extern "C" unsigned long _DAT_0048b778;
extern "C" unsigned long _DAT_0048b77c;
extern "C" unsigned long _DAT_0048b780;
extern "C" unsigned long _DAT_0048b784;
extern "C" unsigned long _DAT_0048b788;
extern "C" unsigned long _DAT_0048b78c;
extern "C" unsigned long _DAT_0048b790;
extern "C" unsigned long _DAT_0048b794;
extern "C" unsigned long _DAT_0048b798;
extern "C" unsigned long _DAT_0048b79c;
extern "C" unsigned long _DAT_0048b7a0;
extern "C" unsigned long _DAT_0048b7a4;
extern "C" unsigned long _DAT_0048b7a8;
extern "C" unsigned long _DAT_0048b7ac;
extern "C" unsigned long _DAT_0048bc30;
extern "C" unsigned long _DAT_0048bc34;
extern "C" unsigned long _DAT_0048bc38;
extern "C" unsigned long _DAT_0048bc3c;
extern "C" unsigned long _DAT_0048bc40;
extern "C" unsigned long _DAT_0048bc44;
extern "C" unsigned long _DAT_0048bc48;
extern "C" unsigned long _DAT_0048bc4c;
extern "C" unsigned long _DAT_0048bc50;
extern "C" unsigned long _DAT_0048bc54;
extern "C" unsigned long _DAT_0048c7ac;
extern "C" unsigned long _DAT_0048c7b0;
extern "C" unsigned long _DAT_0048c7b4;
extern "C" unsigned long _DAT_0048c7b8;
extern "C" unsigned long _DAT_0048c7bc;
extern "C" unsigned long _DAT_0048c7c0;
extern "C" unsigned long _DAT_0048c970;
extern "C" unsigned long _DAT_0048c974;
extern "C" unsigned long _DAT_0048c978;
extern "C" unsigned long _DAT_0048c97c;
extern "C" unsigned long _DAT_0048c980;
extern "C" unsigned long _DAT_0048c984;
extern "C" unsigned long _DAT_0048c988;
extern "C" unsigned long _DAT_0048c98c;
extern "C" unsigned long _DAT_0048c990;
extern "C" unsigned long _DAT_0048c994;
extern "C" unsigned long g_0048ac74;
extern "C" unsigned long g_0048ada4;
extern "C" unsigned long g_0048ada8;
extern "C" unsigned long g_0048adac;
extern "C" unsigned long g_0048adb0;
extern "C" unsigned long g_0048adb4;
extern "C" unsigned long g_0048b76c;
extern "C" unsigned long g_0048b770;
extern "C" unsigned long g_0048b774;
extern "C" unsigned long g_0048b778;
extern "C" unsigned long g_0048b77c;
extern "C" unsigned long g_0048b780;
extern "C" unsigned long g_0048b784;
extern "C" unsigned long g_0048b788;
extern "C" unsigned long g_0048b78c;
extern "C" unsigned long g_0048b790;
extern "C" unsigned long g_0048b794;
extern "C" unsigned long g_0048b798;
extern "C" unsigned long g_0048b79c;
extern "C" unsigned long g_0048b7a0;
extern "C" unsigned long g_0048b7a4;
extern "C" unsigned long g_0048b7a8;
extern "C" unsigned long g_0048b7ac;
extern "C" unsigned long g_0048bc30;
extern "C" unsigned long g_0048bc34;
extern "C" unsigned long g_0048bc38;
extern "C" unsigned long g_0048bc3c;
extern "C" unsigned long g_0048bc40;
extern "C" unsigned long g_0048bc44;
extern "C" unsigned long g_0048bc48;
extern "C" unsigned long g_0048bc4c;
extern "C" unsigned long g_0048bc50;
extern "C" unsigned long g_0048bc54;
extern "C" unsigned long g_0048c7ac;
extern "C" unsigned long g_0048c7b0;
extern "C" unsigned long g_0048c7b4;
extern "C" unsigned long g_0048c7b8;
extern "C" unsigned long g_0048c7bc;
extern "C" unsigned long g_0048c7c0;
extern "C" unsigned long g_0048c970;
extern "C" unsigned long g_0048c974;
extern "C" unsigned long g_0048c978;
extern "C" unsigned long g_0048c97c;
extern "C" unsigned long g_0048c980;
extern "C" unsigned long g_0048c984;
extern "C" unsigned long g_0048c988;
extern "C" unsigned long g_0048c98c;
extern "C" unsigned long g_0048c990;
extern "C" unsigned long g_0048c994;
LuckShopDataGet::~LuckShopDataGet()
{
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  func_0079e2bc(((int)this) + 7);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

bool LuckShopDataGet::GetPutTemplate(int p1)
{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int aiStack_1c [2];
  
  iStack_28 = *(int *)(g_0048ada4 + 0x48acd2) + 0xc;
  func_0079e45c(&uStack_24,((intptr_t)"json/luckshop/luckshoptemplateput.json"),aiStack_1c);
  0 /* ctorZero */;
  piVar1 = (int *)cocos2d::CCFileUtils::sharedFileUtils();
  (**(code **)(*piVar1 + 0x18))(&uStack_20,piVar1,uStack_24);
  aiStack_1c[0] = 0;
  piVar1 = (int *)cocos2d::CCFileUtils::sharedFileUtils();
  iVar2 = (**(code **)(*piVar1 + 0x10))(piVar1,uStack_20,((intptr_t)"rb"),aiStack_1c);
  if (iVar2 == 0) {
    0 /* ctorZero */;
  }
  else {
    func_0079e65c(&iStack_28,aiStack_1c[0] + 1,0);
    func_0079e66c(&iStack_28);
    (void)(((long long)::memcpy((void *)(iStack_28),(const void *)(iVar2),(size_t)(aiStack_1c[0]))));
    (void)(::operator delete[]((void *)(iVar2)));
    cocos2d::CCString::createWithFormat((char const*)iStack_28, p1);
    uVar3 = (undefined4)(((cocos2d::CCString *)this)->getCString());
    func_0079e2dc(((int)this) + 0x1c,uVar3);
  }
  func_0079e2bc(&uStack_20);
  func_0079e2bc(&uStack_24);
  func_0079e2bc(&iStack_28);
  return iVar2 != 0;
}

// ===== 修复: 补回被误删的函数占位 (4) =====
void LuckShopDataGet::SysLuckShopDataJson(rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> const& p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

bool LuckShopDataGet::init(URL_LUCKSHOP p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void LuckShopDataGet::onGetLuckShopData(cocos2d::extension::CCHttpClient* p1, cocos2d::extension::CCHttpResponse* p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void LuckShopDataGet::onPutLuckShopData(cocos2d::extension::CCHttpClient* p1, cocos2d::extension::CCHttpResponse* p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
