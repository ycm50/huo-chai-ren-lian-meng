#include "CircusShopDataGet.h"
#include "BLGameScene.h"
#include "CircusShopData.h"
#include "CircusShopItem.h"
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
extern "C" unsigned long _DAT_00476f08;
extern "C" unsigned long _DAT_00477038;
extern "C" unsigned long _DAT_0047703c;
extern "C" unsigned long _DAT_00477040;
extern "C" unsigned long _DAT_00477044;
extern "C" unsigned long _DAT_00477048;
extern "C" unsigned long _DAT_00477a38;
extern "C" unsigned long _DAT_00477a3c;
extern "C" unsigned long _DAT_00477a40;
extern "C" unsigned long _DAT_00477a44;
extern "C" unsigned long _DAT_00477a48;
extern "C" unsigned long _DAT_00477a4c;
extern "C" unsigned long _DAT_00477a50;
extern "C" unsigned long _DAT_00477a54;
extern "C" unsigned long _DAT_00477a58;
extern "C" unsigned long _DAT_00477a5c;
extern "C" unsigned long _DAT_00477a60;
extern "C" unsigned long _DAT_00477a64;
extern "C" unsigned long _DAT_00477a68;
extern "C" unsigned long _DAT_00477a6c;
extern "C" unsigned long _DAT_00477a70;
extern "C" unsigned long _DAT_00477a74;
extern "C" unsigned long _DAT_00477a78;
extern "C" unsigned long _DAT_00477a7c;
extern "C" unsigned long _DAT_00477d84;
extern "C" unsigned long _DAT_00477d88;
extern "C" unsigned long _DAT_00477d8c;
extern "C" unsigned long _DAT_00477d90;
extern "C" unsigned long _DAT_00477d94;
extern "C" unsigned long _DAT_00477d98;
extern "C" unsigned long _DAT_00477d9c;
extern "C" unsigned long _DAT_00477da0;
extern "C" unsigned long _DAT_00478acc;
extern "C" unsigned long _DAT_00478ad0;
extern "C" unsigned long _DAT_00478ad4;
extern "C" unsigned long _DAT_00478ad8;
extern "C" unsigned long _DAT_00478adc;
extern "C" unsigned long _DAT_00478ae0;
extern "C" unsigned long _DAT_00478c78;
extern "C" unsigned long _DAT_00478c7c;
extern "C" unsigned long _DAT_00478c80;
extern "C" unsigned long _DAT_00478c84;
extern "C" unsigned long _DAT_00478c88;
extern "C" unsigned long _DAT_00478c8c;
extern "C" unsigned long _DAT_00478c90;
extern "C" unsigned long _DAT_00478c94;
extern "C" unsigned long _DAT_00478c98;
extern "C" unsigned long g_00476f08;
extern "C" unsigned long g_00477038;
extern "C" unsigned long g_0047703c;
extern "C" unsigned long g_00477040;
extern "C" unsigned long g_00477044;
extern "C" unsigned long g_00477048;
extern "C" unsigned long g_00477a38;
extern "C" unsigned long g_00477a3c;
extern "C" unsigned long g_00477a40;
extern "C" unsigned long g_00477a44;
extern "C" unsigned long g_00477a48;
extern "C" unsigned long g_00477a4c;
extern "C" unsigned long g_00477a50;
extern "C" unsigned long g_00477a54;
extern "C" unsigned long g_00477a58;
extern "C" unsigned long g_00477a5c;
extern "C" unsigned long g_00477a60;
extern "C" unsigned long g_00477a64;
extern "C" unsigned long g_00477a68;
extern "C" unsigned long g_00477a6c;
extern "C" unsigned long g_00477a70;
extern "C" unsigned long g_00477a74;
extern "C" unsigned long g_00477a78;
extern "C" unsigned long g_00477a7c;
extern "C" unsigned long g_00477d84;
extern "C" unsigned long g_00477d88;
extern "C" unsigned long g_00477d8c;
extern "C" unsigned long g_00477d90;
extern "C" unsigned long g_00477d94;
extern "C" unsigned long g_00477d98;
extern "C" unsigned long g_00477d9c;
extern "C" unsigned long g_00477da0;
extern "C" unsigned long g_00478acc;
extern "C" unsigned long g_00478ad0;
extern "C" unsigned long g_00478ad4;
extern "C" unsigned long g_00478ad8;
extern "C" unsigned long g_00478adc;
extern "C" unsigned long g_00478ae0;
extern "C" unsigned long g_00478c78;
extern "C" unsigned long g_00478c7c;
extern "C" unsigned long g_00478c80;
extern "C" unsigned long g_00478c84;
extern "C" unsigned long g_00478c88;
extern "C" unsigned long g_00478c8c;
extern "C" unsigned long g_00478c90;
extern "C" unsigned long g_00478c94;
extern "C" unsigned long g_00478c98;
CircusShopDataGet::~CircusShopDataGet()
{
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  func_0079e2bc(((int)this) + 7);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

bool CircusShopDataGet::GetPutTemplate(int p1)
{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int aiStack_1c [2];
  
  iStack_28 = *(int *)(g_00477038 + 0x476f66) + 0xc;
  func_0079e45c(&uStack_24,((intptr_t)"json/circusshop/circusshoptemplateput.json"),aiStack_1c);
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
void CircusShopDataGet::SysCircusShopDataJson(rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> const& p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

bool CircusShopDataGet::init(URL_CIRCUSSHOP p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void CircusShopDataGet::onGetCircusShopData(cocos2d::extension::CCHttpClient* p1, cocos2d::extension::CCHttpResponse* p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void CircusShopDataGet::onPutCircusShopData(cocos2d::extension::CCHttpClient* p1, cocos2d::extension::CCHttpResponse* p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
