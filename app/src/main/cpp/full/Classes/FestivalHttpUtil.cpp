#include "FestivalHttpUtil.h"
#include "FestivalsDate.h"
#include "CCObject.h"
#include "HttpResponse.h"
#include "HttpClient.h"
#include "BLGameScene.h"
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
extern "C" long long func_0079e5bc(...);
extern "C" long long func_0079e65c(...);
extern "C" long long func_0079e66c(...);
extern "C" long long func_0079e67c(...);
extern "C" long long func_0079e68c(...);
extern "C" long long func_0079e954(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0052657a;
extern "C" unsigned long UNK_00526aae;
extern "C" unsigned long UNK_00526ac0;
extern "C" unsigned long UNK_00526b02;
extern "C" unsigned long UNK_00526b6a;
extern "C" unsigned long UNK_00526b98;
extern "C" unsigned long UNK_00526bca;
extern "C" unsigned long UNK_00526c60;
extern "C" unsigned long UNK_00526d1c;
extern "C" unsigned long UNK_00526d7e;
extern "C" unsigned long UNK_00526d86;
extern "C" unsigned long UNK_00526d98;
extern "C" unsigned long UNK_00526db0;
extern "C" unsigned long UNK_00526db8;
extern "C" unsigned long UNK_00526dca;
extern "C" unsigned long UNK_00526dda;
extern "C" unsigned long UNK_00526de8;
extern "C" unsigned long UNK_00526df6;
extern "C" unsigned long UNK_00526e04;
extern "C" unsigned long UNK_00526e12;
extern "C" unsigned long UNK_00526e20;
extern "C" unsigned long UNK_00526e2e;
extern "C" unsigned long UNK_00526e3c;
extern "C" unsigned long UNK_00526e4a;
extern "C" unsigned long UNK_00526e58;
extern "C" unsigned long UNK_00526e66;
extern "C" unsigned long UNK_00526e76;
extern "C" unsigned long UNK_00526eb0;
extern "C" unsigned long UNK_00526ec4;
extern "C" unsigned long UNK_00526ed8;
extern "C" unsigned long UNK_00526eec;
extern "C" unsigned long UNK_00526f06;
extern "C" unsigned long UNK_00526f1c;
extern "C" unsigned long UNK_00526f32;
extern "C" unsigned long UNK_00526f48;
extern "C" unsigned long UNK_00526f5e;
extern "C" unsigned long UNK_00526f74;
extern "C" unsigned long UNK_00526f8a;
extern "C" unsigned long UNK_00526f9e;
extern "C" unsigned long UNK_00526fbe;
extern "C" unsigned long UNK_00526fc2;
extern "C" unsigned long UNK_00526fe2;
extern "C" unsigned long UNK_00526fee;
extern "C" unsigned long UNK_00526ffe;
extern "C" unsigned long UNK_0052700c;
extern "C" unsigned long UNK_0052711a;
extern "C" unsigned long UNK_0052716c;
extern "C" unsigned long UNK_0052717e;
extern "C" unsigned long UNK_0052718e;
extern "C" unsigned long UNK_005271a0;
extern "C" unsigned long UNK_005271b8;
extern "C" unsigned long UNK_005271c6;
extern "C" unsigned long _DAT_00526480;
extern "C" unsigned long _DAT_00526484;
extern "C" unsigned long _DAT_00526488;
extern "C" unsigned long _DAT_00526678;
extern "C" unsigned long _DAT_0052667c;
extern "C" unsigned long _DAT_00526680;
extern "C" unsigned long _DAT_00526684;
extern "C" unsigned long _DAT_00526688;
extern "C" unsigned long _DAT_005266bc;
extern "C" unsigned long _UNK_00526568;
extern "C" unsigned long _UNK_0052656c;
extern "C" unsigned long _UNK_005265bc;
extern "C" unsigned long _UNK_00526a3c;
extern "C" unsigned long _UNK_00526a84;
extern "C" unsigned long _UNK_00526cdc;
extern "C" unsigned long _UNK_00526ce0;
extern "C" unsigned long _UNK_00526ce4;
extern "C" unsigned long _UNK_00526ce8;
extern "C" unsigned long _UNK_00526cec;
extern "C" unsigned long _UNK_00526cf0;
extern "C" unsigned long _UNK_00526cf4;
extern "C" unsigned long _UNK_00527058;
extern "C" unsigned long _UNK_0052705c;
extern "C" unsigned long _UNK_00527060;
extern "C" unsigned long _UNK_00527064;
extern "C" unsigned long _UNK_00527068;
extern "C" unsigned long _UNK_0052706c;
extern "C" unsigned long _UNK_00527070;
extern "C" unsigned long _UNK_00527074;
extern "C" unsigned long _UNK_00527078;
extern "C" unsigned long _UNK_0052707c;
extern "C" unsigned long _UNK_00527080;
extern "C" unsigned long _UNK_00527084;
extern "C" unsigned long _UNK_00527088;
extern "C" unsigned long _UNK_0052708c;
extern "C" unsigned long _UNK_00527090;
extern "C" unsigned long _UNK_00527094;
extern "C" unsigned long _UNK_00527098;
extern "C" unsigned long _UNK_0052709c;
extern "C" unsigned long _UNK_005270a0;
extern "C" unsigned long _UNK_005270a4;
extern "C" unsigned long _UNK_005270a8;
extern "C" unsigned long _UNK_005270ac;
extern "C" unsigned long _UNK_005270b0;
extern "C" unsigned long _UNK_005270b4;
extern "C" unsigned long _UNK_005270b8;
extern "C" unsigned long _UNK_005270bc;
extern "C" unsigned long _UNK_005270c0;
extern "C" unsigned long _UNK_005270c4;
extern "C" unsigned long _UNK_005270c8;
extern "C" unsigned long _UNK_005270cc;
extern "C" unsigned long _UNK_005270d0;
extern "C" unsigned long _UNK_005270d4;
extern "C" unsigned long _UNK_005270d8;
extern "C" unsigned long _UNK_005270dc;
extern "C" unsigned long _UNK_005270e0;
extern "C" unsigned long _UNK_005270e4;
extern "C" unsigned long _UNK_005270e8;
extern "C" unsigned long _UNK_005271ec;
extern "C" unsigned long _UNK_005271f0;
extern "C" unsigned long _UNK_005271f4;
extern "C" unsigned long _UNK_005271f8;
extern "C" unsigned long _UNK_005271fc;
extern "C" unsigned long _UNK_00527200;
extern "C" unsigned long _UNK_00527204;
extern "C" unsigned long extraout_r2;
extern "C" unsigned long g_00526480;
extern "C" unsigned long g_00526484;
extern "C" unsigned long g_00526488;
extern "C" unsigned long g_00526568;
extern "C" unsigned long g_0052656c;
extern "C" unsigned long g_0052657a;
extern "C" unsigned long g_005265bc;
extern "C" unsigned long g_00526678;
extern "C" unsigned long g_0052667c;
extern "C" unsigned long g_00526680;
extern "C" unsigned long g_00526684;
extern "C" unsigned long g_00526688;
extern "C" unsigned long g_005266bc;
extern "C" unsigned long g_00526a3c;
extern "C" unsigned long g_00526a84;
extern "C" unsigned long g_00526aae;
extern "C" unsigned long g_00526ac0;
extern "C" unsigned long g_00526b02;
extern "C" unsigned long g_00526b6a;
extern "C" unsigned long g_00526b98;
extern "C" unsigned long g_00526bca;
extern "C" unsigned long g_00526c60;
extern "C" unsigned long g_00526cdc;
extern "C" unsigned long g_00526ce0;
extern "C" unsigned long g_00526ce4;
extern "C" unsigned long g_00526ce8;
extern "C" unsigned long g_00526cec;
extern "C" unsigned long g_00526cf0;
extern "C" unsigned long g_00526cf4;
extern "C" unsigned long g_00526d1c;
extern "C" unsigned long g_00526d7e;
extern "C" unsigned long g_00526d86;
extern "C" unsigned long g_00526d98;
extern "C" unsigned long g_00526db0;
extern "C" unsigned long g_00526db8;
extern "C" unsigned long g_00526dca;
extern "C" unsigned long g_00526dda;
extern "C" unsigned long g_00526de8;
extern "C" unsigned long g_00526df6;
extern "C" unsigned long g_00526e04;
extern "C" unsigned long g_00526e12;
extern "C" unsigned long g_00526e20;
extern "C" unsigned long g_00526e2e;
extern "C" unsigned long g_00526e3c;
extern "C" unsigned long g_00526e4a;
extern "C" unsigned long g_00526e58;
extern "C" unsigned long g_00526e66;
extern "C" unsigned long g_00526e76;
extern "C" unsigned long g_00526eb0;
extern "C" unsigned long g_00526ec4;
extern "C" unsigned long g_00526ed8;
extern "C" unsigned long g_00526eec;
extern "C" unsigned long g_00526f06;
extern "C" unsigned long g_00526f1c;
extern "C" unsigned long g_00526f32;
extern "C" unsigned long g_00526f48;
extern "C" unsigned long g_00526f5e;
extern "C" unsigned long g_00526f74;
extern "C" unsigned long g_00526f8a;
extern "C" unsigned long g_00526f9e;
extern "C" unsigned long g_00526fbe;
extern "C" unsigned long g_00526fc2;
extern "C" unsigned long g_00526fe2;
extern "C" unsigned long g_00526fee;
extern "C" unsigned long g_00526ffe;
extern "C" unsigned long g_0052700c;
extern "C" unsigned long g_00527058;
extern "C" unsigned long g_0052705c;
extern "C" unsigned long g_00527060;
extern "C" unsigned long g_00527064;
extern "C" unsigned long g_00527068;
extern "C" unsigned long g_0052706c;
extern "C" unsigned long g_00527070;
extern "C" unsigned long g_00527074;
extern "C" unsigned long g_00527078;
extern "C" unsigned long g_0052707c;
extern "C" unsigned long g_00527080;
extern "C" unsigned long g_00527084;
extern "C" unsigned long g_00527088;
extern "C" unsigned long g_0052708c;
extern "C" unsigned long g_00527090;
extern "C" unsigned long g_00527094;
extern "C" unsigned long g_00527098;
extern "C" unsigned long g_0052709c;
extern "C" unsigned long g_005270a0;
extern "C" unsigned long g_005270a4;
extern "C" unsigned long g_005270a8;
extern "C" unsigned long g_005270ac;
extern "C" unsigned long g_005270b0;
extern "C" unsigned long g_005270b4;
extern "C" unsigned long g_005270b8;
extern "C" unsigned long g_005270bc;
extern "C" unsigned long g_005270c0;
extern "C" unsigned long g_005270c4;
extern "C" unsigned long g_005270c8;
extern "C" unsigned long g_005270cc;
extern "C" unsigned long g_005270d0;
extern "C" unsigned long g_005270d4;
extern "C" unsigned long g_005270d8;
extern "C" unsigned long g_005270dc;
extern "C" unsigned long g_005270e0;
extern "C" unsigned long g_005270e4;
extern "C" unsigned long g_005270e8;
extern "C" unsigned long g_0052711a;
extern "C" unsigned long g_0052716c;
extern "C" unsigned long g_0052717e;
extern "C" unsigned long g_0052718e;
extern "C" unsigned long g_005271a0;
extern "C" unsigned long g_005271b8;
extern "C" unsigned long g_005271c6;
extern "C" unsigned long g_005271ec;
extern "C" unsigned long g_005271f0;
extern "C" unsigned long g_005271f4;
extern "C" unsigned long g_005271f8;
extern "C" unsigned long g_005271fc;
extern "C" unsigned long g_00527200;
extern "C" unsigned long g_00527204;
void FestivalHttpUtil::setStartTime(std::string * p1)
{
  func_0079e52c(((int)this) + 0x28);
  return;
}

void FestivalHttpUtil::setEndTime(std::string * p1)
{
  func_0079e52c(((int)this) + 0x24);
  return;
}

void FestivalHttpUtil::setFestivalID(std::string * p1)
{
  func_0079e52c(((int)this) + 0x20);
  return;
}

std::string FestivalHttpUtil::getStartTime() const
{ return *(std::string *)(((int)this) + 0x28); }

std::string FestivalHttpUtil::getEndTime() const
{ return *(std::string *)(((int)this) + 0x24); }

std::string FestivalHttpUtil::getFestivalID() const
{ return *(std::string *)(((int)this) + 0x20); }

void FestivalHttpUtil::getFestivalDate()
{
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [16];
  
  ((BLGameScene *)this)->shareGameScene();
  ((BLGameScene *)this)->showShieldLayer();
  func_0079e45c(auStack_28,((intptr_t)"url_festival_new"),auStack_30);
  func_0079e45c(auStack_24,g_00526484 + 0x526442,auStack_2c);
  0 /* ctorZero */;
  func_0079e2bc(auStack_24);
  func_0079e2bc(auStack_28);
  return;
}


FestivalHttpUtil::~FestivalHttpUtil()
/* DESTROYAUX_V1: 1 处降级 */
{
  *(int *)this = *(int *)((unsigned char *)((char *)&g_0052657a + (intptr_t)(g_005265bc))) + 8;
  (void)0; /* DESTROYAUX 降级 */
  if (*(int *)((int)this + 4*(0xb)) != 0) {
    func_0079e2cc();
  }
  func_0079e2bc(((int)this) + 10);
  func_0079e2bc(((int)this) + 9);
  func_0079e2bc(((int)this) + 8);
  if (*(int *)((int)this + 4*(5)) != 0) {
    func_0079e2cc();
  }
  ((cocos2d::CCObject *)(((int)this)))->~CCObject();
  return;
}

FestivalHttpUtil::FestivalHttpUtil()
/* DESTROYAUX_V1: 1 处降级 */
{
  undefined4 extraout_r2;
  int iVar1;
  
  0 /* ctorZero */;
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  iVar1 = (undefined4)(intptr_t)(g_0052667c);
  *(int *)((int)this + 4*(5)) = 0;
  *(int *)((int)this + 4*(6)) = 0;
  iVar1 = (undefined4)(intptr_t)(*(int *)(iVar1 + 0x5265f6));
  *(int *)((int)this + 4*(7)) = 0;
  *(int *)((int)this + 4*(0xb)) = 0;
  iVar1 = (undefined4)(intptr_t)(iVar1 + 0xc);
  *(int *)((int)this + 4*(8)) = iVar1;
  *(int *)((int)this + 4*(9)) = iVar1;
  *(int *)((int)this + 4*(10)) = iVar1;
  *(int *)((int)this + 4*(0xc)) = 0;
  *(int *)((int)this + 4*(0xd)) = 0;
  (void)0; /* DESTROYAUX 降级 */
  *(int *)((int)this + 4*(0xc)) = 0;
  iVar1 = (undefined4)(intptr_t)(g_00526680);
  *(int *)((int)this + 4*(6)) = *(int *)((int)this + 4*(5));
  func_0079e2dc(((int)this) + 8,iVar1 + 0x526620);
  func_0079e2dc(((int)this) + 9,g_00526684 + 0x52662e);
  func_0079e2dc(((int)this) + 10,g_00526688 + 0x526638);
  return;
}

int FestivalHttpUtil::getInstance()
{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)("X̴");
  if (*piVar2 == 0) {
    iVar1 = ((long long)::operator new((size_t)(0x38)));
    0 /* ctorZero */;
    *piVar2 = iVar1;
  }
  return *piVar2;
}

// ===== 修复: 补回被误删的函数占位 (7) =====
int FestivalHttpUtil::getRewardDate() const
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void FestivalHttpUtil::setRewardDate(std::vector<FestivalsDate, std::allocator<FestivalsDate>> * p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

undefined8 FestivalHttpUtil::setUserBuyNumber(std::vector<int, std::allocator<int>> * p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

int FestivalHttpUtil::getUserBuyNumber() const
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void FestivalHttpUtil::getBuyState(int p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void FestivalHttpUtil::onGetFestivalDateCallback(cocos2d::extension::CCHttpClient* p1, cocos2d::extension::CCHttpResponse* p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void FestivalHttpUtil::onGetBuyStateCallback(cocos2d::extension::CCHttpClient* p1, cocos2d::extension::CCHttpResponse* p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
