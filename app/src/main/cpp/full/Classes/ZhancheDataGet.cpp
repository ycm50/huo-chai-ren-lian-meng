#include "ZhancheDataGet.h"
#include "BLGameScene.h"
#include "DataManager.h"
#include "GetChariotInfo.h"
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
extern "C" long long func_0079e4ac(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e54c(...);
extern "C" long long func_0079e5ac(...);
extern "C" long long func_0079e65c(...);
extern "C" long long func_0079e66c(...);
extern "C" long long func_0079e67c(...);
extern "C" long long func_0079e68c(...);
extern "C" long long func_0079e954(...);
extern "C" unsigned long _DAT_004bc364;
extern "C" unsigned long _DAT_004bc90c;
extern "C" unsigned long _DAT_004bc910;
extern "C" unsigned long _DAT_004bc914;
extern "C" unsigned long _DAT_004bc918;
extern "C" unsigned long _DAT_004bcc10;
extern "C" unsigned long _DAT_004bcc14;
extern "C" unsigned long _DAT_004bcc18;
extern "C" unsigned long _DAT_004bcc1c;
extern "C" unsigned long _DAT_004bcc20;
extern "C" unsigned long _DAT_004bcc24;
extern "C" unsigned long _DAT_004bcc28;
extern "C" unsigned long _DAT_004bcc2c;
extern "C" unsigned long _DAT_004bcc30;
extern "C" unsigned long _DAT_004bcc34;
extern "C" unsigned long _DAT_004bcc38;
extern "C" unsigned long _DAT_004bcc3c;
extern "C" unsigned long _DAT_004bcc40;
extern "C" unsigned long _DAT_004bcc44;
extern "C" unsigned long _DAT_004bd1e8;
extern "C" unsigned long _DAT_004bd1ec;
extern "C" unsigned long _DAT_004bd1f0;
extern "C" unsigned long _DAT_004bd1f4;
extern "C" unsigned long _DAT_004bd1f8;
extern "C" unsigned long _DAT_004bd1fc;
extern "C" unsigned long _DAT_004bd200;
extern "C" unsigned long _DAT_004bd204;
extern "C" unsigned long _DAT_004bd208;
extern "C" unsigned long _DAT_004bd20c;
extern "C" unsigned long _DAT_004bd210;
extern "C" unsigned long _DAT_004bd214;
extern "C" unsigned long _DAT_004bd218;
extern "C" unsigned long _DAT_004bd21c;
extern "C" unsigned long _DAT_004bd220;
extern "C" unsigned long _DAT_004bd224;
extern "C" unsigned long _DAT_004bd3b8;
extern "C" unsigned long _DAT_004bd3bc;
extern "C" unsigned long _DAT_004bd3c0;
extern "C" unsigned long _DAT_004bd3c4;
extern "C" unsigned long _DAT_004bd3c8;
extern "C" unsigned long _DAT_004bd3cc;
extern "C" unsigned long _DAT_004bd3d0;
extern "C" unsigned long _DAT_004bd688;
extern "C" unsigned long _DAT_004bd68c;
extern "C" unsigned long _DAT_004bd690;
extern "C" unsigned long _DAT_004bd694;
extern "C" unsigned long _DAT_004bd698;
extern "C" unsigned long _DAT_004bd69c;
extern "C" unsigned long _DAT_004bd6a0;
extern "C" unsigned long _DAT_004bd6a4;
extern "C" unsigned long _DAT_004bd6a8;
extern "C" unsigned long _DAT_004bd6ac;
extern "C" unsigned long _DAT_004bd6b0;
extern "C" unsigned long _DAT_004bd6b4;
extern "C" unsigned long _DAT_004bd6b8;
extern "C" unsigned long _DAT_004bd6bc;
extern "C" unsigned long _DAT_004bd6c0;
extern "C" unsigned long _DAT_004bd6c4;
extern "C" unsigned long _DAT_004bd6c8;
extern "C" unsigned long _DAT_004bd974;
extern "C" unsigned long _DAT_004bd978;
extern "C" unsigned long _DAT_004bd97c;
extern "C" unsigned long _DAT_004bd980;
extern "C" unsigned long _DAT_004bd984;
extern "C" unsigned long _DAT_004bd988;
extern "C" unsigned long _DAT_004bd98c;
extern "C" unsigned long _DAT_004bd990;
extern "C" unsigned long _DAT_004bd994;
extern "C" unsigned long _DAT_004bd998;
extern "C" unsigned long _DAT_004bd99c;
extern "C" unsigned long _DAT_004bd9a0;
extern "C" unsigned long _DAT_004bd9a4;
extern "C" unsigned long _DAT_004bd9a8;
extern "C" unsigned long g_004bc364;
extern "C" unsigned long g_004bc90c;
extern "C" unsigned long g_004bc910;
extern "C" unsigned long g_004bc914;
extern "C" unsigned long g_004bc918;
extern "C" unsigned long g_004bcc10;
extern "C" unsigned long g_004bcc14;
extern "C" unsigned long g_004bcc18;
extern "C" unsigned long g_004bcc1c;
extern "C" unsigned long g_004bcc20;
extern "C" unsigned long g_004bcc24;
extern "C" unsigned long g_004bcc28;
extern "C" unsigned long g_004bcc2c;
extern "C" unsigned long g_004bcc30;
extern "C" unsigned long g_004bcc34;
extern "C" unsigned long g_004bcc38;
extern "C" unsigned long g_004bcc3c;
extern "C" unsigned long g_004bcc40;
extern "C" unsigned long g_004bcc44;
extern "C" unsigned long g_004bd1e8;
extern "C" unsigned long g_004bd1ec;
extern "C" unsigned long g_004bd1f0;
extern "C" unsigned long g_004bd1f4;
extern "C" unsigned long g_004bd1f8;
extern "C" unsigned long g_004bd1fc;
extern "C" unsigned long g_004bd200;
extern "C" unsigned long g_004bd204;
extern "C" unsigned long g_004bd208;
extern "C" unsigned long g_004bd20c;
extern "C" unsigned long g_004bd210;
extern "C" unsigned long g_004bd214;
extern "C" unsigned long g_004bd218;
extern "C" unsigned long g_004bd21c;
extern "C" unsigned long g_004bd220;
extern "C" unsigned long g_004bd224;
extern "C" unsigned long g_004bd3b8;
extern "C" unsigned long g_004bd3bc;
extern "C" unsigned long g_004bd3c0;
extern "C" unsigned long g_004bd3c4;
extern "C" unsigned long g_004bd3c8;
extern "C" unsigned long g_004bd3cc;
extern "C" unsigned long g_004bd3d0;
extern "C" unsigned long g_004bd688;
extern "C" unsigned long g_004bd68c;
extern "C" unsigned long g_004bd690;
extern "C" unsigned long g_004bd694;
extern "C" unsigned long g_004bd698;
extern "C" unsigned long g_004bd69c;
extern "C" unsigned long g_004bd6a0;
extern "C" unsigned long g_004bd6a4;
extern "C" unsigned long g_004bd6a8;
extern "C" unsigned long g_004bd6ac;
extern "C" unsigned long g_004bd6b0;
extern "C" unsigned long g_004bd6b4;
extern "C" unsigned long g_004bd6b8;
extern "C" unsigned long g_004bd6bc;
extern "C" unsigned long g_004bd6c0;
extern "C" unsigned long g_004bd6c4;
extern "C" unsigned long g_004bd6c8;
extern "C" unsigned long g_004bd974;
extern "C" unsigned long g_004bd978;
extern "C" unsigned long g_004bd97c;
extern "C" unsigned long g_004bd980;
extern "C" unsigned long g_004bd984;
extern "C" unsigned long g_004bd988;
extern "C" unsigned long g_004bd98c;
extern "C" unsigned long g_004bd990;
extern "C" unsigned long g_004bd994;
extern "C" unsigned long g_004bd998;
extern "C" unsigned long g_004bd99c;
extern "C" unsigned long g_004bd9a0;
extern "C" unsigned long g_004bd9a4;
extern "C" unsigned long g_004bd9a8;
ZhancheDataGet::~ZhancheDataGet()
{
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  func_0079e2bc(((int)this) + 7);
  func_0079e2bc(((int)this) + 6);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

// ===== 修复: 补回被误删的函数占位 (5) =====
bool ZhancheDataGet::GetPostTemplate()
{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  int iStack_bc;
  int aiStack_b8 [4];
  undefined1 auStack_a8 [4];
  int iStack_a4;
  undefined1 auStack_98 [8];
  int iStack_90;
  undefined1 auStack_88 [12];
  int iStack_7c;
  undefined1 auStack_78 [4];
  undefined4 uStack_74;
  undefined1 auStack_64 [4];
  undefined4 auStack_60 [5];
  undefined1 auStack_4c [4];
  undefined1 auStack_48 [8];
  undefined4 uStack_40;
  undefined1 auStack_34 [4];
  undefined1 auStack_30 [12];
  undefined4 uStack_24;
  undefined1 auStack_1c [8];
  
  iStack_c8 = *(int *)(g_004bc90c + 0x4bc754) + 0xc;
  piVar1 = (int *)((sir::singleton<ZhancheData, 0> *)this)->instance();
  (**(code **)(*piVar1 + 0x38))(aiStack_b8,piVar1);
  piVar1 = (int *)((sir::singleton<ZhancheData, 0> *)this)->instance();
  (**(code **)(*piVar1 + 0x38))(auStack_a8,piVar1);
  piVar1 = (int *)((sir::singleton<ZhancheData, 0> *)this)->instance();
  (**(code **)(*piVar1 + 0x38))(auStack_98,piVar1);
  piVar1 = (int *)((sir::singleton<ZhancheData, 0> *)this)->instance();
  (**(code **)(*piVar1 + 0x38))(auStack_88,piVar1);
  piVar1 = (int *)((sir::singleton<ZhancheData, 0> *)this)->instance();
  (**(code **)(*piVar1 + 0x30))(auStack_78,piVar1);
  func_0079e2bc(auStack_64);
  piVar1 = (int *)((sir::singleton<ZhancheData, 0> *)this)->instance();
  (**(code **)(*piVar1 + 0x30))(auStack_60,piVar1);
  func_0079e2bc(auStack_4c);
  piVar1 = (int *)((sir::singleton<ZhancheData, 0> *)this)->instance();
  (**(code **)(*piVar1 + 0x30))(auStack_48,piVar1);
  func_0079e2bc(auStack_34);
  piVar1 = (int *)((sir::singleton<ZhancheData, 0> *)this)->instance();
  (**(code **)(*piVar1 + 0x30))(auStack_30,piVar1);
  func_0079e2bc(auStack_1c);
  func_0079e45c(&uStack_c4,((intptr_t)"json/yuanzheng/chariotFightpost.json"),auStack_30);
  piVar1 = (int *)cocos2d::CCFileUtils::sharedFileUtils();
  (**(code **)(*piVar1 + 0x18))(&uStack_c0,piVar1,uStack_c4);
  iStack_bc = 0;
  piVar1 = (int *)cocos2d::CCFileUtils::sharedFileUtils();
  iVar2 = (undefined4)(intptr_t)((**(code **)(*piVar1 + 0x10))(piVar1,uStack_c0,((intptr_t)"rb"),&iStack_bc));
  if (iVar2 == 0) {
    0 /* ctorZero */;
  }
  else {
    func_0079e65c(&iStack_c8,iStack_bc + 1,0);
    func_0079e66c(&iStack_c8);
    (void)(((long long)::memcpy((void *)(iStack_c8),(const void *)(iVar2),(size_t)(iStack_bc))));
    (void)(::operator delete[]((void *)(iVar2)));
    iVar7 = (undefined4)(intptr_t)(iStack_7c * 1000);
    uVar3 = (undefined4)(func_0079e4ac(uStack_74,10,iVar7,1000,iVar7));
    uVar4 = (undefined4)(((long long)((int)(auStack_60[0]) / (int)(10))));
    uVar5 = (undefined4)(((long long)((int)(uStack_40) / (int)(10))));
    uVar6 = (undefined4)(((long long)((int)(uStack_24) / (int)(10))));
    cocos2d::CCString::createWithFormat((char const*)iStack_c8, aiStack_b8[0] * 1000, iStack_a4 * 1000, iStack_90 * 1000, iVar7, uVar3, uVar4, uVar5, uVar6);
    uVar3 = (undefined4)(((cocos2d::CCString *)this)->getCString());
    func_0079e2dc(((int)this) + 0x1c,uVar3);
  }
  func_0079e2bc(&uStack_c0);
  func_0079e2bc(&uStack_c4);
  func_0079e2bc(&iStack_c8);
  return iVar2 != 0;
}

bool ZhancheDataGet::init(URL_ZC p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void ZhancheDataGet::onGetChariotInfo(cocos2d::extension::CCHttpClient* p1, cocos2d::extension::CCHttpResponse* p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void ZhancheDataGet::onGetSearchInfo(cocos2d::extension::CCHttpClient* p1, cocos2d::extension::CCHttpResponse* p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void ZhancheDataGet::onGetchariotFight(cocos2d::extension::CCHttpClient* p1, cocos2d::extension::CCHttpResponse* p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
