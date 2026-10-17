#include "ChallengeHttpUtil.h"
#include "CCObject.h"
#include "HttpResponse.h"
#include "HttpClient.h"
#include "CCString.h"
#include "CCFileUtils.h"
#include "BLGameScene.h"
#include "BLLanguage.h"
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
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e54c(...);
extern "C" long long func_0079e65c(...);
extern "C" long long func_0079e66c(...);
extern "C" long long func_0079e67c(...);
extern "C" unsigned long UNK_00505962;
extern "C" unsigned long UNK_00505a24;
extern "C" unsigned long UNK_00505a48;
extern "C" unsigned long UNK_00505a98;
extern "C" unsigned long UNK_00505aa8;
extern "C" unsigned long UNK_00505ad2;
extern "C" unsigned long UNK_00505b04;
extern "C" unsigned long UNK_00505b10;
extern "C" unsigned long UNK_00505b38;
extern "C" unsigned long UNK_00505bb8;
extern "C" unsigned long UNK_00505bca;
extern "C" unsigned long UNK_00505bda;
extern "C" unsigned long UNK_00505c20;
extern "C" unsigned long UNK_00505c30;
extern "C" unsigned long UNK_00505c5a;
extern "C" unsigned long UNK_00505c8c;
extern "C" unsigned long UNK_00505c98;
extern "C" unsigned long UNK_00505cd2;
extern "C" unsigned long UNK_00505d86;
extern "C" unsigned long UNK_00505d92;
extern "C" unsigned long UNK_00505de2;
extern "C" unsigned long UNK_00505df4;
extern "C" unsigned long UNK_00505e02;
extern "C" unsigned long UNK_00505e10;
extern "C" unsigned long UNK_00505e30;
extern "C" unsigned long UNK_00505e3e;
extern "C" unsigned long UNK_00505e4c;
extern "C" unsigned long UNK_00505e5c;
extern "C" unsigned long UNK_00505e94;
extern "C" unsigned long UNK_00505ec2;
extern "C" unsigned long UNK_00505ed8;
extern "C" unsigned long UNK_00505f3c;
extern "C" unsigned long UNK_00505f48;
extern "C" unsigned long UNK_00505f94;
extern "C" unsigned long UNK_00505fa6;
extern "C" unsigned long UNK_00505fb8;
extern "C" unsigned long UNK_00505fca;
extern "C" unsigned long UNK_00505fd8;
extern "C" unsigned long UNK_0050600e;
extern "C" unsigned long UNK_0050603c;
extern "C" unsigned long UNK_0050608a;
extern "C" unsigned long UNK_005060e0;
extern "C" unsigned long UNK_005060f2;
extern "C" unsigned long UNK_00506106;
extern "C" unsigned long UNK_00506116;
extern "C" unsigned long UNK_00506128;
extern "C" unsigned long UNK_0050619e;
extern "C" unsigned long UNK_005061a8;
extern "C" unsigned long UNK_005061b6;
extern "C" unsigned long UNK_00506220;
extern "C" unsigned long UNK_00506272;
extern "C" unsigned long UNK_00506284;
extern "C" unsigned long UNK_00506294;
extern "C" unsigned long UNK_005062a6;
extern "C" unsigned long UNK_005062be;
extern "C" unsigned long _DAT_005059d0;
extern "C" unsigned long _DAT_005059d4;
extern "C" unsigned long _DAT_00505a08;
extern "C" unsigned long _UNK_00505990;
extern "C" unsigned long _UNK_00505a84;
extern "C" unsigned long _UNK_00505a88;
extern "C" unsigned long _UNK_00505b94;
extern "C" unsigned long _UNK_00505b98;
extern "C" unsigned long _UNK_00505b9c;
extern "C" unsigned long _UNK_00505ba0;
extern "C" unsigned long _UNK_00505ba4;
extern "C" unsigned long _UNK_00505ba8;
extern "C" unsigned long _UNK_00505c08;
extern "C" unsigned long _UNK_00505c0c;
extern "C" unsigned long _UNK_00505c10;
extern "C" unsigned long _UNK_00505d40;
extern "C" unsigned long _UNK_00505d44;
extern "C" unsigned long _UNK_00505d48;
extern "C" unsigned long _UNK_00505d4c;
extern "C" unsigned long _UNK_00505d50;
extern "C" unsigned long _UNK_00505d54;
extern "C" unsigned long _UNK_00505ee0;
extern "C" unsigned long _UNK_00505ee4;
extern "C" unsigned long _UNK_00505ee8;
extern "C" unsigned long _UNK_00505eec;
extern "C" unsigned long _UNK_00505ef0;
extern "C" unsigned long _UNK_00505ef4;
extern "C" unsigned long _UNK_00505ef8;
extern "C" unsigned long _UNK_00505efc;
extern "C" unsigned long _UNK_00505f00;
extern "C" unsigned long _UNK_00505f04;
extern "C" unsigned long _UNK_00505f08;
extern "C" unsigned long _UNK_00505f0c;
extern "C" unsigned long _UNK_00505f10;
extern "C" unsigned long _UNK_0050604c;
extern "C" unsigned long _UNK_00506050;
extern "C" unsigned long _UNK_00506054;
extern "C" unsigned long _UNK_00506058;
extern "C" unsigned long _UNK_0050605c;
extern "C" unsigned long _UNK_00506060;
extern "C" unsigned long _UNK_00506064;
extern "C" unsigned long _UNK_00506068;
extern "C" unsigned long _UNK_0050606c;
extern "C" unsigned long _UNK_005061e4;
extern "C" unsigned long _UNK_005061e8;
extern "C" unsigned long _UNK_005061ec;
extern "C" unsigned long _UNK_005061f0;
extern "C" unsigned long _UNK_005061f4;
extern "C" unsigned long _UNK_005061f8;
extern "C" unsigned long _UNK_005061fc;
extern "C" unsigned long _UNK_00506200;
extern "C" unsigned long _UNK_00506204;
extern "C" unsigned long _UNK_005062e4;
extern "C" unsigned long _UNK_005062e8;
extern "C" unsigned long _UNK_005062ec;
extern "C" unsigned long _UNK_005062f0;
extern "C" unsigned long _UNK_005062f4;
extern "C" unsigned long _UNK_005062f8;
extern "C" unsigned long g_00505962;
extern "C" unsigned long g_00505990;
extern "C" unsigned long g_005059d0;
extern "C" unsigned long g_005059d4;
extern "C" unsigned long g_00505a08;
extern "C" unsigned long g_00505a24;
extern "C" unsigned long g_00505a48;
extern "C" unsigned long g_00505a84;
extern "C" unsigned long g_00505a88;
extern "C" unsigned long g_00505a98;
extern "C" unsigned long g_00505aa8;
extern "C" unsigned long g_00505ad2;
extern "C" unsigned long g_00505b04;
extern "C" unsigned long g_00505b10;
extern "C" unsigned long g_00505b38;
extern "C" unsigned long g_00505b94;
extern "C" unsigned long g_00505b98;
extern "C" unsigned long g_00505b9c;
extern "C" unsigned long g_00505ba0;
extern "C" unsigned long g_00505ba4;
extern "C" unsigned long g_00505ba8;
extern "C" unsigned long g_00505bb8;
extern "C" unsigned long g_00505bca;
extern "C" unsigned long g_00505bda;
extern "C" unsigned long g_00505c08;
extern "C" unsigned long g_00505c0c;
extern "C" unsigned long g_00505c10;
extern "C" unsigned long g_00505c20;
extern "C" unsigned long g_00505c30;
extern "C" unsigned long g_00505c5a;
extern "C" unsigned long g_00505c8c;
extern "C" unsigned long g_00505c98;
extern "C" unsigned long g_00505cd2;
extern "C" unsigned long g_00505d40;
extern "C" unsigned long g_00505d44;
extern "C" unsigned long g_00505d48;
extern "C" unsigned long g_00505d4c;
extern "C" unsigned long g_00505d50;
extern "C" unsigned long g_00505d54;
extern "C" unsigned long g_00505d86;
extern "C" unsigned long g_00505d92;
extern "C" unsigned long g_00505de2;
extern "C" unsigned long g_00505df4;
extern "C" unsigned long g_00505e02;
extern "C" unsigned long g_00505e10;
extern "C" unsigned long g_00505e30;
extern "C" unsigned long g_00505e3e;
extern "C" unsigned long g_00505e4c;
extern "C" unsigned long g_00505e5c;
extern "C" unsigned long g_00505e94;
extern "C" unsigned long g_00505ec2;
extern "C" unsigned long g_00505ed8;
extern "C" unsigned long g_00505ee0;
extern "C" unsigned long g_00505ee4;
extern "C" unsigned long g_00505ee8;
extern "C" unsigned long g_00505eec;
extern "C" unsigned long g_00505ef0;
extern "C" unsigned long g_00505ef4;
extern "C" unsigned long g_00505ef8;
extern "C" unsigned long g_00505efc;
extern "C" unsigned long g_00505f00;
extern "C" unsigned long g_00505f04;
extern "C" unsigned long g_00505f08;
extern "C" unsigned long g_00505f0c;
extern "C" unsigned long g_00505f10;
extern "C" unsigned long g_00505f3c;
extern "C" unsigned long g_00505f48;
extern "C" unsigned long g_00505f94;
extern "C" unsigned long g_00505fa6;
extern "C" unsigned long g_00505fb8;
extern "C" unsigned long g_00505fca;
extern "C" unsigned long g_00505fd8;
extern "C" unsigned long g_0050600e;
extern "C" unsigned long g_0050603c;
extern "C" unsigned long g_0050604c;
extern "C" unsigned long g_00506050;
extern "C" unsigned long g_00506054;
extern "C" unsigned long g_00506058;
extern "C" unsigned long g_0050605c;
extern "C" unsigned long g_00506060;
extern "C" unsigned long g_00506064;
extern "C" unsigned long g_00506068;
extern "C" unsigned long g_0050606c;
extern "C" unsigned long g_0050608a;
extern "C" unsigned long g_005060e0;
extern "C" unsigned long g_005060f2;
extern "C" unsigned long g_00506106;
extern "C" unsigned long g_00506116;
extern "C" unsigned long g_00506128;
extern "C" unsigned long g_0050619e;
extern "C" unsigned long g_005061a8;
extern "C" unsigned long g_005061b6;
extern "C" unsigned long g_005061e4;
extern "C" unsigned long g_005061e8;
extern "C" unsigned long g_005061ec;
extern "C" unsigned long g_005061f0;
extern "C" unsigned long g_005061f4;
extern "C" unsigned long g_005061f8;
extern "C" unsigned long g_005061fc;
extern "C" unsigned long g_00506200;
extern "C" unsigned long g_00506204;
extern "C" unsigned long g_00506220;
extern "C" unsigned long g_00506272;
extern "C" unsigned long g_00506284;
extern "C" unsigned long g_00506294;
extern "C" unsigned long g_005062a6;
extern "C" unsigned long g_005062be;
extern "C" unsigned long g_005062e4;
extern "C" unsigned long g_005062e8;
extern "C" unsigned long g_005062ec;
extern "C" unsigned long g_005062f0;
extern "C" unsigned long g_005062f4;
extern "C" unsigned long g_005062f8;
ChallengeHttpUtil::~ChallengeHttpUtil()
{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)((int)this + 4*(9));
  iVar2 = *(int *)((int)this + 4*(10));
  /* VPTR_FIX(R87): vptr=(&g_A+g_B)+8 ?? g_ ?? 0 ?? -> ???? SEGV?????? vptr???? */;
  for (; iVar1 != iVar2; iVar1 = iVar1 + 4) {
    func_0079e2bc(iVar1);
  }
  if (*(int *)((int)this + 4*(9)) != 0) {
    (void)(::operator delete((void *)(*(int *)((int)this + 4*(9)))));
  }
  func_0079e2bc(((int)this) + 5);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

ChallengeHttpUtil::ChallengeHttpUtil()
{
  0 /* ctorZero */;
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  *(int *)((int)this + 4*(5)) = *(int *)(g_005059d4 + 0x5059c2) + 0xc;
  *(int *)((int)this + 4*(9)) = 0;
  *(int *)((int)this + 4*(0xb)) = 0;
  *(int *)((int)this + 4*(10)) = 0;
  return;
}

int ChallengeHttpUtil::getInstance()
{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)(g_00505a08 + 0x5059e0);
  if (*piVar2 == 0) {
    iVar1 = ((long long)::operator new((size_t)(0x30)));
    0 /* ctorZero */;
    *piVar2 = iVar1;
  }
  return *piVar2;
}

void ChallengeHttpUtil::getChallengeDate()
{
  undefined1 auStack_34 [4];
  undefined1 auStack_30 [4];
  undefined4 uStack_2c;
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [16];
  
  ((BLGameScene *)this)->shareGameScene();
  ((BLGameScene *)this)->showShieldLayer();
  func_0079e45c(auStack_28,&g_00505a24 + g_00505a84,auStack_34);
  ((PlatformHelp *)&uStack_2c)->getDeviceID();
  func_0079e45c(auStack_24,uStack_2c,auStack_30);
  0 /* ctorZero */;
  func_0079e2bc(auStack_24);
  func_0079e2bc(&uStack_2c);
  func_0079e2bc(auStack_28);
  return;
}

void ChallengeHttpUtil::putChallengeStata(int p1)
{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_40 [4];
  undefined1 auStack_3c [4];
  int iStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  iStack_38 = *(int *)(&g_00505a98 + g_00505b94) + 0xc;
  func_0079e45c(&uStack_34,&g_00505aa8 + g_00505b98,&uStack_20);
  piVar1 = (int *)cocos2d::CCFileUtils::sharedFileUtils();
  (**(code **)(*piVar1 + 0x18))(&uStack_30,piVar1,uStack_34);
  iStack_2c = 0;
  piVar1 = (int *)cocos2d::CCFileUtils::sharedFileUtils();
  iVar2 = (**(code **)(*piVar1 + 0x10))(piVar1,uStack_30,&g_00505ad2 + g_00505b9c,&iStack_2c);
  if (iVar2 == 0) {
    0 /* ctorZero */;
  }
  else {
    func_0079e65c(&iStack_38,iStack_2c + 1,0);
    func_0079e66c(&iStack_38);
    (void)(((long long)::memcpy((void *)(iStack_38),(const void *)(iVar2),(size_t)(iStack_2c))));
    (void)(::operator delete[]((void *)(iVar2)));
  }
  func_0079e45c(auStack_28,&g_00505b10 + g_00505ba4,auStack_40);
  cocos2d::CCString::createWithFormat((char const*)iStack_38, p1);
  uVar3 = (undefined4)(((cocos2d::CCString *)this)->getCString());
  func_0079e45c(auStack_24,uVar3,auStack_3c);
  uStack_1c = (undefined4)(0);
  uStack_20 = (undefined4)(*(undefined4 *)(&g_00505b38 + g_00505ba8));
  0 /* ctorZero */;
  func_0079e2bc(auStack_24);
  func_0079e2bc(auStack_28);
  func_0079e2bc(&uStack_30);
  func_0079e2bc(&uStack_34);
  func_0079e2bc(&iStack_38);
  return;
}

void ChallengeHttpUtil::getChallengeMostUser()
{
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [16];
  
  func_0079e45c(auStack_28,&g_00505bb8 + g_00505c08,auStack_30);
  func_0079e45c(auStack_24,&g_00505bca + g_00505c0c,auStack_2c);
  0 /* ctorZero */;
  func_0079e2bc(auStack_24);
  func_0079e2bc(auStack_28);
  return;
}

// ===== 修复: 补回被误删的函数占位 (5) =====
void ChallengeHttpUtil::getChallengeRename(std::string * p1)
{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_44 [4];
  undefined1 auStack_40 [4];
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  iStack_3c = (undefined4)(intptr_t)(*(int *)((unsigned char *)((char *)&g_00505c20 + (intptr_t)(g_00505d40))) + 0xc);
  func_0079e45c(&uStack_38,(unsigned char *)((char *)&g_00505c30 + (intptr_t)(g_00505d44)),&uStack_20);
  piVar1 = (int *)cocos2d::CCFileUtils::sharedFileUtils();
  (**(code **)(*(int *)(piVar1) + (0x18)))(&uStack_34,piVar1,uStack_38);
  iStack_30 = 0;
  piVar1 = (int *)cocos2d::CCFileUtils::sharedFileUtils();
  iVar2 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar1) + (0x10)))(piVar1,uStack_34,(unsigned char *)((char *)&g_00505c5a + (intptr_t)(g_00505d48)),&iStack_30));
  if (iVar2 == 0) {
    0 /* ctorZero */;
  }
  else {
    func_0079e65c(&iStack_3c,iStack_30 + 1,0);
    func_0079e66c(&iStack_3c);
    func_0079e48c(iStack_3c,iVar2,iStack_30);
    func_0079e67c(iVar2);
  }
  func_0079e45c(auStack_28,(unsigned char *)((char *)&g_00505c98 + (intptr_t)(g_00505d50)),auStack_44);
  iVar2 = (undefined4)(intptr_t)(iStack_3c);
  ((PlatformHelp *)&uStack_2c)->getDeviceID();
  cocos2d::CCString::createWithFormat((char const*)iVar2, uStack_2c, *(int *)p1);
  uVar3 = (undefined4)(((cocos2d::CCString *)this)->getCString());
  func_0079e45c(auStack_24,uVar3,auStack_40);
  uStack_1c = (undefined4)(0);
  uStack_20 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_00505cd2 + (intptr_t)(g_00505d54))));
  0 /* ctorZero */;
  func_0079e2bc(auStack_24);
  func_0079e2bc(&uStack_2c);
  func_0079e2bc(auStack_28);
  func_0079e2bc(&uStack_34);
  func_0079e2bc(&uStack_38);
  func_0079e2bc(&iStack_3c);
  return;
}

void ChallengeHttpUtil::onGetChallengeDateCallback(cocos2d::extension::CCHttpClient* p1, cocos2d::extension::CCHttpResponse* p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void ChallengeHttpUtil::onPutChallengeStataCallback(cocos2d::extension::CCHttpClient* p1, cocos2d::extension::CCHttpResponse* p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void ChallengeHttpUtil::onGetChallengeMostUserCallback(cocos2d::extension::CCHttpClient* p1, cocos2d::extension::CCHttpResponse* p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void ChallengeHttpUtil::onGetChallengeReNameCallback(cocos2d::extension::CCHttpClient* p1, cocos2d::extension::CCHttpResponse* p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
