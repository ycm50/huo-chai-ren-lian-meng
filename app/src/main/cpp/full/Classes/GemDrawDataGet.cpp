#include "GemDrawDataGet.h"
#include "BLGameScene.h"
#include "GemDrawData.h"
#include "GemDrawInfo.h"
#include "GemDrawItemInfo.h"
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
extern "C" long long func_0079e954(...);
extern "C" unsigned long _DAT_0047a794;
extern "C" unsigned long _DAT_0047af9c;
extern "C" unsigned long _DAT_0047afa0;
extern "C" unsigned long _DAT_0047afa4;
extern "C" unsigned long _DAT_0047afa8;
extern "C" unsigned long _DAT_0047b234;
extern "C" unsigned long _DAT_0047b238;
extern "C" unsigned long _DAT_0047b23c;
extern "C" unsigned long _DAT_0047b240;
extern "C" unsigned long _DAT_0047b244;
extern "C" unsigned long _DAT_0047b248;
extern "C" unsigned long _DAT_0047b24c;
extern "C" unsigned long _DAT_0047b250;
extern "C" unsigned long _DAT_0047b254;
extern "C" unsigned long _DAT_0047b258;
extern "C" unsigned long _DAT_0047b25c;
extern "C" unsigned long _DAT_0047b4e8;
extern "C" unsigned long _DAT_0047b4ec;
extern "C" unsigned long _DAT_0047b4f0;
extern "C" unsigned long _DAT_0047b4f4;
extern "C" unsigned long _DAT_0047b4f8;
extern "C" unsigned long _DAT_0047b4fc;
extern "C" unsigned long _DAT_0047b500;
extern "C" unsigned long _DAT_0047b504;
extern "C" unsigned long _DAT_0047bc88;
extern "C" unsigned long _DAT_0047bc8c;
extern "C" unsigned long _DAT_0047bc90;
extern "C" unsigned long _DAT_0047bc94;
extern "C" unsigned long _DAT_0047bc98;
extern "C" unsigned long _DAT_0047bc9c;
extern "C" unsigned long _DAT_0047bca0;
extern "C" unsigned long _DAT_0047bca4;
extern "C" unsigned long _DAT_0047bca8;
extern "C" unsigned long _DAT_0047bcac;
extern "C" unsigned long _DAT_0047bcb0;
extern "C" unsigned long _DAT_0047bcb4;
extern "C" unsigned long _DAT_0047bcb8;
extern "C" unsigned long _DAT_0047bcbc;
extern "C" unsigned long _DAT_0047bcc0;
extern "C" unsigned long _DAT_0047bcc4;
extern "C" unsigned long _DAT_0047bfe4;
extern "C" unsigned long _DAT_0047bfe8;
extern "C" unsigned long _DAT_0047bfec;
extern "C" unsigned long _DAT_0047bff0;
extern "C" unsigned long _DAT_0047bff4;
extern "C" unsigned long _DAT_0047bff8;
extern "C" unsigned long _DAT_0047bffc;
extern "C" unsigned long _DAT_0047c000;
extern "C" unsigned long _DAT_0047c004;
extern "C" unsigned long _DAT_0047c008;
extern "C" unsigned long _DAT_0047c00c;
extern "C" unsigned long _DAT_0047c010;
extern "C" unsigned long _DAT_0047c014;
extern "C" unsigned long _DAT_0047c018;
extern "C" unsigned long _DAT_0047c01c;
extern "C" unsigned long _DAT_0047c020;
extern "C" unsigned long _DAT_0047c024;
extern "C" unsigned long g_0047a794;
extern "C" unsigned long g_0047af9c;
extern "C" unsigned long g_0047afa0;
extern "C" unsigned long g_0047afa4;
extern "C" unsigned long g_0047afa8;
extern "C" unsigned long g_0047b234;
extern "C" unsigned long g_0047b238;
extern "C" unsigned long g_0047b23c;
extern "C" unsigned long g_0047b240;
extern "C" unsigned long g_0047b244;
extern "C" unsigned long g_0047b248;
extern "C" unsigned long g_0047b24c;
extern "C" unsigned long g_0047b250;
extern "C" unsigned long g_0047b254;
extern "C" unsigned long g_0047b258;
extern "C" unsigned long g_0047b25c;
extern "C" unsigned long g_0047b4e8;
extern "C" unsigned long g_0047b4ec;
extern "C" unsigned long g_0047b4f0;
extern "C" unsigned long g_0047b4f4;
extern "C" unsigned long g_0047b4f8;
extern "C" unsigned long g_0047b4fc;
extern "C" unsigned long g_0047b500;
extern "C" unsigned long g_0047b504;
extern "C" unsigned long g_0047bc88;
extern "C" unsigned long g_0047bc8c;
extern "C" unsigned long g_0047bc90;
extern "C" unsigned long g_0047bc94;
extern "C" unsigned long g_0047bc98;
extern "C" unsigned long g_0047bc9c;
extern "C" unsigned long g_0047bca0;
extern "C" unsigned long g_0047bca4;
extern "C" unsigned long g_0047bca8;
extern "C" unsigned long g_0047bcac;
extern "C" unsigned long g_0047bcb0;
extern "C" unsigned long g_0047bcb4;
extern "C" unsigned long g_0047bcb8;
extern "C" unsigned long g_0047bcbc;
extern "C" unsigned long g_0047bcc0;
extern "C" unsigned long g_0047bcc4;
extern "C" unsigned long g_0047bfe4;
extern "C" unsigned long g_0047bfe8;
extern "C" unsigned long g_0047bfec;
extern "C" unsigned long g_0047bff0;
extern "C" unsigned long g_0047bff4;
extern "C" unsigned long g_0047bff8;
extern "C" unsigned long g_0047bffc;
extern "C" unsigned long g_0047c000;
extern "C" unsigned long g_0047c004;
extern "C" unsigned long g_0047c008;
extern "C" unsigned long g_0047c00c;
extern "C" unsigned long g_0047c010;
extern "C" unsigned long g_0047c014;
extern "C" unsigned long g_0047c018;
extern "C" unsigned long g_0047c01c;
extern "C" unsigned long g_0047c020;
extern "C" unsigned long g_0047c024;
GemDrawDataGet::~GemDrawDataGet()
{
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  func_0079e2bc(((int)this) + 8);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

// ===== 修复: 补回被误删的函数占位 (5) =====
bool GemDrawDataGet::GetPutTemplate()
{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int aiStack_1c [2];
  
  iStack_28 = *(int *)(g_0047af9c + 0x47aed0) + 0xc;
  func_0079e45c(&uStack_24,((intptr_t)"json/gemdraw/gemdrawtemplateput.json"),aiStack_1c);
  piVar2 = (int *)cocos2d::CCFileUtils::sharedFileUtils();
  (**(code **)(*piVar2 + 0x18))(&uStack_20,piVar2,uStack_24);
  aiStack_1c[0] = 0;
  piVar2 = (int *)cocos2d::CCFileUtils::sharedFileUtils();
  iVar3 = (undefined4)(intptr_t)((**(code **)(*piVar2 + 0x10))(piVar2,uStack_20,((intptr_t)"rb"),aiStack_1c));
  if (iVar3 == 0) {
    0 /* ctorZero */;
  }
  else {
    func_0079e65c(&iStack_28,aiStack_1c[0] + 1,0);
    func_0079e66c(&iStack_28);
    (void)(((long long)::memcpy((void *)(iStack_28),(const void *)(iVar3),(size_t)(aiStack_1c[0]))));
    (void)(::operator delete[]((void *)(iVar3)));
    iVar1 = (undefined4)(intptr_t)(iStack_28);
    iVar4 = (undefined4)(intptr_t)(((sir::singleton<GemDrawData, 0> *)this)->instance());
    cocos2d::CCString::createWithFormat((char const*)iVar1, *(undefined4 *)(iVar4 + 0x54));
    uVar5 = (undefined4)(((cocos2d::CCString *)this)->getCString());
    func_0079e2dc(((int)this) + 0x20,uVar5);
  }
  func_0079e2bc(&uStack_20);
  func_0079e2bc(&uStack_24);
  func_0079e2bc(&iStack_28);
  return iVar3 != 0;
}

bool GemDrawDataGet::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void GemDrawDataGet::SysGemDrawJson(rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> const& p1, int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void GemDrawDataGet::onPutGemDrawData(cocos2d::extension::CCHttpClient* p1, cocos2d::extension::CCHttpResponse* p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void GemDrawDataGet::onGetGemDrawData(cocos2d::extension::CCHttpClient* p1, cocos2d::extension::CCHttpResponse* p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
