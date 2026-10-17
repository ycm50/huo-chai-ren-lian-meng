#include "CircusHttpName.h"
#include "BLGameScene.h"
#include "CircusData.h"
#include "CircusPlayerinfo.h"
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
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e54c(...);
extern "C" long long func_0079e65c(...);
extern "C" long long func_0079e66c(...);
extern "C" long long func_0079e67c(...);
extern "C" unsigned long _DAT_00470e5c;
extern "C" unsigned long _DAT_00473594;
extern "C" unsigned long _DAT_00473598;
extern "C" unsigned long _DAT_0047359c;
extern "C" unsigned long _DAT_004735a0;
extern "C" unsigned long _DAT_004735a4;
extern "C" unsigned long _DAT_00473f88;
extern "C" unsigned long _DAT_00473f8c;
extern "C" unsigned long _DAT_004747dc;
extern "C" unsigned long _DAT_004747e0;
extern "C" unsigned long _DAT_004747e4;
extern "C" unsigned long _DAT_004747e8;
extern "C" unsigned long _DAT_004747ec;
extern "C" unsigned long _DAT_004747f0;
extern "C" unsigned long _DAT_004747f4;
extern "C" unsigned long _DAT_004747f8;
extern "C" unsigned long _DAT_004747fc;
extern "C" unsigned long _DAT_00474800;
extern "C" unsigned long _DAT_00474804;
extern "C" unsigned long g_00470e5c;
extern "C" unsigned long g_00473594;
extern "C" unsigned long g_00473598;
extern "C" unsigned long g_0047359c;
extern "C" unsigned long g_004735a0;
extern "C" unsigned long g_004735a4;
extern "C" unsigned long g_00473f88;
extern "C" unsigned long g_00473f8c;
extern "C" unsigned long g_004747dc;
extern "C" unsigned long g_004747e0;
extern "C" unsigned long g_004747e4;
extern "C" unsigned long g_004747e8;
extern "C" unsigned long g_004747ec;
extern "C" unsigned long g_004747f0;
extern "C" unsigned long g_004747f4;
extern "C" unsigned long g_004747f8;
extern "C" unsigned long g_004747fc;
extern "C" unsigned long g_00474800;
extern "C" unsigned long g_00474804;
CircusHttpName::~CircusHttpName()
{
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  func_0079e2bc(((int)this) + 6);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

bool CircusHttpName::GetNameTemplate()
{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  int iStack_74;
  undefined1 auStack_70 [48];
  undefined4 uStack_40;
  
  iStack_80 = *(int *)(g_00473594 + 0x4734a4) + 0xc;
  func_0079e45c(&uStack_7c,((intptr_t)"json/circus/circustemplatename.json"),auStack_70);
  piVar2 = (int *)cocos2d::CCFileUtils::sharedFileUtils();
  (**(code **)(*piVar2 + 0x18))(&uStack_78,piVar2,uStack_7c);
  iStack_74 = 0;
  piVar2 = (int *)cocos2d::CCFileUtils::sharedFileUtils();
  iVar3 = (**(code **)(*piVar2 + 0x10))(piVar2,uStack_78,((intptr_t)"rb"),&iStack_74);
  if (iVar3 == 0) {
    0 /* ctorZero */;
  }
  else {
    func_0079e65c(&iStack_80,iStack_74 + 1,0);
    func_0079e66c(&iStack_80);
    (void)(((long long)::memcpy((void *)(iStack_80),(const void *)(iVar3),(size_t)(iStack_74))));
    (void)(::operator delete[]((void *)(iVar3)));
    iVar1 = iStack_80;
    iVar4 = ((CircusData *)this)->getMe();
    0 /* ctorZero */;
    cocos2d::CCString::createWithFormat((char const*)iVar1, uStack_40);
    uVar5 = (undefined4)(((cocos2d::CCString *)this)->getCString());
    func_0079e2dc(((int)this) + 0x18,uVar5);
    ((CircusPlayerinfo *)auStack_70)->~CircusPlayerinfo();
    0 /* ctorZero */;
  }
  func_0079e2bc(&uStack_78);
  func_0079e2bc(&uStack_7c);
  func_0079e2bc(&iStack_80);
  return iVar3 != 0;
}

// ===== 修复: 补回被误删的函数占位 (2) =====
bool CircusHttpName::init(std::string * p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void CircusHttpName::onGetUpNameData(cocos2d::extension::CCHttpClient* p1, cocos2d::extension::CCHttpResponse* p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
