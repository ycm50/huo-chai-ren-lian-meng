#include "BackPackData.h"
#include "CCString.h"
#include "CCNotificationCenter.h"
#include "CCObject.h"
#include "DebrisComposeData.h"
#include "SuitEquipUserItemData.h"
#include "CCArray.h"
#include "CCDictionary.h"
#include "BLAchievementManager.h"
#include "BLDebug.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BackPackItemData.h"
#include "DBUtil.h"
#include "DataCacheManager.h"
#include "DataManager.h"
#include "ImmortalsRoleData.h"
#include "ItemData.h"
#include "PetUserData.h"
#include "Toast.h"
#include "UserData.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
using namespace cocos2d;
// 兜底声明
extern "C" unsigned long LAB_00485a38;

template <class T, class... A> std::string ConvertToString(A...);
extern "C" long long software_udf(...);

extern "C" long long func_0042f3fc(...);
extern "C" long long func_00442068(...);
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2dc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4bc(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e69c(...);
extern "C" long long func_0079e6c0(...);
extern "C" long long func_0079e734(...);
extern "C" long long func_0079e784(...);
extern "C" long long func_0079e874(...);
extern "C" long long func_0079e8a4(...);
extern "C" long long func_0079e8b4(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long _DAT_00483b80;
extern "C" unsigned long _DAT_00483b84;
extern "C" unsigned long _DAT_00483d14;
extern "C" unsigned long _DAT_00483d18;
extern "C" unsigned long _DAT_00483df0;
extern "C" unsigned long _DAT_00483df4;
extern "C" unsigned long _DAT_00483df8;
extern "C" unsigned long _DAT_00483dfc;
extern "C" unsigned long _DAT_00483ee4;
extern "C" unsigned long _DAT_00483ee8;
extern "C" unsigned long _DAT_00483eec;
extern "C" unsigned long _DAT_00483ef0;
extern "C" unsigned long _DAT_00483ef4;
extern "C" unsigned long _DAT_00483ef8;
extern "C" unsigned long _DAT_00483efc;
extern "C" unsigned long _DAT_00483fcc;
extern "C" unsigned long _DAT_00483fd0;
extern "C" unsigned long _DAT_004840d4;
extern "C" unsigned long _DAT_004840d8;
extern "C" unsigned long _DAT_004841dc;
extern "C" unsigned long _DAT_004841e0;
extern "C" unsigned long _DAT_004842e4;
extern "C" unsigned long _DAT_004842e8;
extern "C" unsigned long _DAT_00484530;
extern "C" unsigned long _DAT_00484534;
extern "C" unsigned long _DAT_00484538;
extern "C" unsigned long _DAT_0048453c;
extern "C" unsigned long _DAT_00484540;
extern "C" unsigned long _DAT_00484544;
extern "C" unsigned long _DAT_00484548;
extern "C" unsigned long _DAT_0048454c;
extern "C" unsigned long _DAT_00484798;
extern "C" unsigned long _DAT_0048479c;
extern "C" unsigned long _DAT_004847a0;
extern "C" unsigned long _DAT_004847a4;
extern "C" unsigned long _DAT_004847a8;
extern "C" unsigned long _DAT_004847ac;
extern "C" unsigned long _DAT_004847b0;
extern "C" unsigned long _DAT_004847b4;
extern "C" unsigned long _DAT_004847b8;
extern "C" unsigned long _DAT_004847bc;
extern "C" unsigned long _DAT_004847c0;
extern "C" unsigned long _DAT_004847c4;
extern "C" unsigned long _DAT_004847c8;
extern "C" unsigned long _DAT_004848f0;
extern "C" unsigned long _DAT_004848f4;
extern "C" unsigned long _DAT_004848f8;
extern "C" unsigned long _DAT_004848fc;
extern "C" unsigned long _DAT_00484900;
extern "C" unsigned long _DAT_00484a1c;
extern "C" unsigned long _DAT_00484a20;
extern "C" unsigned long _DAT_00484a24;
extern "C" unsigned long _DAT_00484a28;
extern "C" unsigned long _DAT_00484a2c;
extern "C" unsigned long _DAT_00484bb8;
extern "C" unsigned long _DAT_00484bbc;
extern "C" unsigned long _DAT_00484bc0;
extern "C" unsigned long _DAT_00484bc4;
extern "C" unsigned long _DAT_00484bc8;
extern "C" unsigned long _DAT_00484bcc;
extern "C" unsigned long _DAT_00484bd0;
extern "C" unsigned long _DAT_00484bd4;
extern "C" unsigned long _DAT_00484d94;
extern "C" unsigned long _DAT_00484d98;
extern "C" unsigned long _DAT_00484d9c;
extern "C" unsigned long _DAT_00484da0;
extern "C" unsigned long _DAT_00484da4;
extern "C" unsigned long _DAT_00484da8;
extern "C" unsigned long _DAT_00484dac;
extern "C" unsigned long _DAT_00484db0;
extern "C" unsigned long _DAT_00484db4;
extern "C" unsigned long _DAT_0048500c;
extern "C" unsigned long _DAT_00485010;
extern "C" unsigned long _DAT_00485014;
extern "C" unsigned long _DAT_00485018;
extern "C" unsigned long _DAT_0048501c;
extern "C" unsigned long _DAT_00485020;
extern "C" unsigned long _DAT_00485024;
extern "C" unsigned long _DAT_00485028;
extern "C" unsigned long _DAT_0048502c;
extern "C" unsigned long _DAT_00485030;
extern "C" unsigned long _DAT_00485034;
extern "C" unsigned long _DAT_00485348;
extern "C" unsigned long _DAT_0048534c;
extern "C" unsigned long _DAT_00485350;
extern "C" unsigned long _DAT_004854ec;
extern "C" unsigned long _DAT_004854f0;
extern "C" unsigned long _DAT_004854f4;
extern "C" unsigned long _DAT_004854f8;
extern "C" unsigned long _DAT_004854fc;
extern "C" unsigned long _DAT_00485500;
extern "C" unsigned long _DAT_00485504;
extern "C" unsigned long _DAT_00485508;
extern "C" unsigned long _DAT_004858f0;
extern "C" unsigned long _DAT_004858f4;
extern "C" unsigned long _DAT_004858f8;
extern "C" unsigned long _DAT_004858fc;
extern "C" unsigned long _DAT_00485900;
extern "C" unsigned long _DAT_00485904;
extern "C" unsigned long _DAT_00485908;
extern "C" unsigned long _DAT_0048590c;
extern "C" unsigned long _DAT_00485910;
extern "C" unsigned long _DAT_00485914;
extern "C" unsigned long _DAT_00485918;
extern "C" unsigned long _DAT_0048591c;
extern "C" unsigned long _DAT_00485920;
extern "C" unsigned long _DAT_00485924;
extern "C" unsigned long _DAT_00485928;
extern "C" unsigned long _DAT_0048592c;
extern "C" unsigned long _DAT_00485930;
extern "C" unsigned long _DAT_00485a50;
extern "C" unsigned long _DAT_00485a54;
extern "C" unsigned long _DAT_00485e64;
extern "C" unsigned long _DAT_00485e68;
extern "C" unsigned long _DAT_00485e6c;
extern "C" unsigned long _DAT_00485e70;
extern "C" unsigned long _DAT_00485e74;
extern "C" unsigned long _DAT_00485e78;
extern "C" unsigned long _DAT_00485e7c;
extern "C" unsigned long _DAT_00485e80;
extern "C" unsigned long _DAT_00485e84;
extern "C" unsigned long _DAT_00485e88;
extern "C" unsigned long _DAT_00485e8c;
extern "C" unsigned long _DAT_00485e90;
extern "C" unsigned long _DAT_00485e94;
extern "C" unsigned long _DAT_00485e98;
extern "C" unsigned long _DAT_00485e9c;
extern "C" unsigned long _DAT_00485ea0;
extern "C" unsigned long _DAT_00485ea4;
extern "C" unsigned long _DAT_00485ea8;
extern "C" unsigned long _DAT_00485eac;
extern "C" unsigned long _DAT_00485eb0;
extern "C" unsigned long _DAT_00485eb4;
extern "C" unsigned long _DAT_00485eb8;
extern "C" unsigned long _DAT_00486278;
extern "C" unsigned long _DAT_0048627c;
extern "C" unsigned long _DAT_00486280;
extern "C" unsigned long _DAT_00486284;
extern "C" unsigned long _DAT_00486288;
extern "C" unsigned long _DAT_0048628c;
extern "C" unsigned long _DAT_00486290;
extern "C" unsigned long _DAT_00486294;
extern "C" unsigned long _DAT_00486298;
extern "C" unsigned long _DAT_0048629c;
extern "C" unsigned long _DAT_004862a0;
extern "C" unsigned long _DAT_004862a4;
extern "C" unsigned long _DAT_004862a8;
extern "C" unsigned long _DAT_004862ac;
extern "C" unsigned long _DAT_004862b0;
extern "C" unsigned long _DAT_004862b4;
extern "C" unsigned long _DAT_004862b8;
extern "C" unsigned long _DAT_004862bc;
extern "C" unsigned long _DAT_00486608;
extern "C" unsigned long _DAT_0048660c;
extern "C" unsigned long _DAT_00486610;
extern "C" unsigned long _DAT_00486614;
extern "C" unsigned long _DAT_00486618;
extern "C" unsigned long _DAT_0048661c;
extern "C" unsigned long _DAT_004867e0;
extern "C" unsigned long _DAT_004867e4;
extern "C" unsigned long _DAT_004867e8;
extern "C" unsigned long _DAT_004867ec;
extern "C" unsigned long _DAT_004867f0;
extern "C" unsigned long _DAT_004867f4;
extern "C" unsigned long _DAT_004869a0;
extern "C" unsigned long _DAT_004869a4;
extern "C" unsigned long _DAT_004869a8;
extern "C" unsigned long _DAT_004869ac;
extern "C" unsigned long _DAT_004869b0;
extern "C" unsigned long _DAT_004869b4;
extern "C" unsigned long _DAT_00486a74;
extern "C" unsigned long _DAT_00486a78;
extern "C" unsigned long _DAT_00486a7c;
extern "C" unsigned long _DAT_00486a80;
extern "C" unsigned long _DAT_00486ae4;
extern "C" unsigned long _DAT_00486ae8;
extern "C" unsigned long _DAT_00486aec;
extern "C" unsigned long _DAT_00486b88;
extern "C" unsigned long _DAT_00486b8c;
extern "C" unsigned long _DAT_00486fa0;
extern "C" unsigned long _DAT_00486fa4;
extern "C" unsigned long _DAT_00486fa8;
extern "C" unsigned long _DAT_00486fac;
extern "C" unsigned long _DAT_00486fb0;
extern "C" unsigned long _DAT_00486fb4;
extern "C" unsigned long _DAT_00486fb8;
extern "C" unsigned long _DAT_00486fbc;
extern "C" unsigned long _DAT_00486fc0;
extern "C" unsigned long _DAT_00486fc4;
extern "C" unsigned long _DAT_00486fc8;
extern "C" unsigned long _DAT_00486fcc;
extern "C" unsigned long _DAT_00486fd0;
extern "C" unsigned long _DAT_00486fd4;
extern "C" unsigned long _DAT_00486fd8;
extern "C" unsigned long _DAT_00486fdc;
extern "C" unsigned long _DAT_00486fe0;
extern "C" unsigned long _DAT_00486fe4;
extern "C" unsigned long _DAT_00486fe8;
extern "C" unsigned long _DAT_00486fec;
extern "C" unsigned long _DAT_00487374;
extern "C" unsigned long _DAT_00487378;
extern "C" unsigned long _DAT_0048737c;
extern "C" unsigned long _DAT_00487380;
extern "C" unsigned long _DAT_00487384;
extern "C" unsigned long _DAT_00487388;
extern "C" unsigned long _DAT_0048738c;
extern "C" unsigned long _DAT_0048766c;
extern "C" unsigned long _DAT_00487670;
extern "C" unsigned long _DAT_00487674;
extern "C" unsigned long _DAT_00487678;
extern "C" unsigned long _DAT_0048767c;
extern "C" unsigned long _DAT_00487680;
extern "C" unsigned long _DAT_00487684;
extern "C" unsigned long _DAT_00487688;
extern "C" unsigned long _DAT_0048768c;
extern "C" unsigned long _DAT_00487690;
extern "C" unsigned long _DAT_00487694;
extern "C" unsigned long _DAT_00487698;
extern "C" unsigned long _DAT_0048769c;
extern "C" unsigned long _DAT_004876a0;
extern "C" unsigned long _DAT_004876a4;
extern "C" unsigned long _DAT_004876a8;
extern "C" unsigned long _DAT_004879ec;
extern "C" unsigned long _DAT_004879f0;
extern "C" unsigned long _DAT_004879f4;
extern "C" unsigned long _DAT_004879f8;
extern "C" unsigned long _DAT_004879fc;
extern "C" unsigned long _DAT_00487a00;
extern "C" unsigned long _DAT_00487a04;
extern "C" unsigned long _DAT_00487a08;
extern "C" unsigned long _DAT_00487a0c;
extern "C" unsigned long _DAT_00487a10;
extern "C" unsigned long extraout_r1;
extern "C" unsigned long extraout_r3;
extern "C" unsigned long unaff_r4;
extern "C" unsigned long unaff_r7;
extern "C" unsigned long g_00483b80;
extern "C" unsigned long g_00483b84;
extern "C" unsigned long g_00483d14;
extern "C" unsigned long g_00483d18;
extern "C" unsigned long g_00483df0;
extern "C" unsigned long g_00483df4;
extern "C" unsigned long g_00483df8;
extern "C" unsigned long g_00483dfc;
extern "C" unsigned long g_00483ee4;
extern "C" unsigned long g_00483ee8;
extern "C" unsigned long g_00483eec;
extern "C" unsigned long g_00483ef0;
extern "C" unsigned long g_00483ef4;
extern "C" unsigned long g_00483ef8;
extern "C" unsigned long g_00483efc;
extern "C" unsigned long g_00483fcc;
extern "C" unsigned long g_00483fd0;
extern "C" unsigned long g_004840d4;
extern "C" unsigned long g_004840d8;
extern "C" unsigned long g_004841dc;
extern "C" unsigned long g_004841e0;
extern "C" unsigned long g_004842e4;
extern "C" unsigned long g_004842e8;
extern "C" unsigned long g_00484530;
extern "C" unsigned long g_00484534;
extern "C" unsigned long g_00484538;
extern "C" unsigned long g_0048453c;
extern "C" unsigned long g_00484540;
extern "C" unsigned long g_00484544;
extern "C" unsigned long g_00484548;
extern "C" unsigned long g_0048454c;
extern "C" unsigned long g_00484798;
extern "C" unsigned long g_0048479c;
extern "C" unsigned long g_004847a0;
extern "C" unsigned long g_004847a4;
extern "C" unsigned long g_004847a8;
extern "C" unsigned long g_004847ac;
extern "C" unsigned long g_004847b0;
extern "C" unsigned long g_004847b4;
extern "C" unsigned long g_004847b8;
extern "C" unsigned long g_004847bc;
extern "C" unsigned long g_004847c0;
extern "C" unsigned long g_004847c4;
extern "C" unsigned long g_004847c8;
extern "C" unsigned long g_004848f0;
extern "C" unsigned long g_004848f4;
extern "C" unsigned long g_004848f8;
extern "C" unsigned long g_004848fc;
extern "C" unsigned long g_00484900;
extern "C" unsigned long g_00484a1c;
extern "C" unsigned long g_00484a20;
extern "C" unsigned long g_00484a24;
extern "C" unsigned long g_00484a28;
extern "C" unsigned long g_00484a2c;
extern "C" unsigned long g_00484bb8;
extern "C" unsigned long g_00484bbc;
extern "C" unsigned long g_00484bc0;
extern "C" unsigned long g_00484bc4;
extern "C" unsigned long g_00484bc8;
extern "C" unsigned long g_00484bcc;
extern "C" unsigned long g_00484bd0;
extern "C" unsigned long g_00484bd4;
extern "C" unsigned long g_00484d94;
extern "C" unsigned long g_00484d98;
extern "C" unsigned long g_00484d9c;
extern "C" unsigned long g_00484da0;
extern "C" unsigned long g_00484da4;
extern "C" unsigned long g_00484da8;
extern "C" unsigned long g_00484dac;
extern "C" unsigned long g_00484db0;
extern "C" unsigned long g_00484db4;
extern "C" unsigned long g_0048500c;
extern "C" unsigned long g_00485010;
extern "C" unsigned long g_00485014;
extern "C" unsigned long g_00485018;
extern "C" unsigned long g_0048501c;
extern "C" unsigned long g_00485020;
extern "C" unsigned long g_00485024;
extern "C" unsigned long g_00485028;
extern "C" unsigned long g_0048502c;
extern "C" unsigned long g_00485030;
extern "C" unsigned long g_00485034;
extern "C" unsigned long g_00485348;
extern "C" unsigned long g_0048534c;
extern "C" unsigned long g_00485350;
extern "C" unsigned long g_004854ec;
extern "C" unsigned long g_004854f0;
extern "C" unsigned long g_004854f4;
extern "C" unsigned long g_004854f8;
extern "C" unsigned long g_004854fc;
extern "C" unsigned long g_00485500;
extern "C" unsigned long g_00485504;
extern "C" unsigned long g_00485508;
extern "C" unsigned long g_004858f0;
extern "C" unsigned long g_004858f4;
extern "C" unsigned long g_004858f8;
extern "C" unsigned long g_004858fc;
extern "C" unsigned long g_00485900;
extern "C" unsigned long g_00485904;
extern "C" unsigned long g_00485908;
extern "C" unsigned long g_0048590c;
extern "C" unsigned long g_00485910;
extern "C" unsigned long g_00485914;
extern "C" unsigned long g_00485918;
extern "C" unsigned long g_0048591c;
extern "C" unsigned long g_00485920;
extern "C" unsigned long g_00485924;
extern "C" unsigned long g_00485928;
extern "C" unsigned long g_0048592c;
extern "C" unsigned long g_00485930;
extern "C" unsigned long g_00485a50;
extern "C" unsigned long g_00485a54;
extern "C" unsigned long g_00485e64;
extern "C" unsigned long g_00485e68;
extern "C" unsigned long g_00485e6c;
extern "C" unsigned long g_00485e70;
extern "C" unsigned long g_00485e74;
extern "C" unsigned long g_00485e78;
extern "C" unsigned long g_00485e7c;
extern "C" unsigned long g_00485e80;
extern "C" unsigned long g_00485e84;
extern "C" unsigned long g_00485e88;
extern "C" unsigned long g_00485e8c;
extern "C" unsigned long g_00485e90;
extern "C" unsigned long g_00485e94;
extern "C" unsigned long g_00485e98;
extern "C" unsigned long g_00485e9c;
extern "C" unsigned long g_00485ea0;
extern "C" unsigned long g_00485ea4;
extern "C" unsigned long g_00485ea8;
extern "C" unsigned long g_00485eac;
extern "C" unsigned long g_00485eb0;
extern "C" unsigned long g_00485eb4;
extern "C" unsigned long g_00485eb8;
extern "C" unsigned long g_00486278;
extern "C" unsigned long g_0048627c;
extern "C" unsigned long g_00486280;
extern "C" unsigned long g_00486284;
extern "C" unsigned long g_00486288;
extern "C" unsigned long g_0048628c;
extern "C" unsigned long g_00486290;
extern "C" unsigned long g_00486294;
extern "C" unsigned long g_00486298;
extern "C" unsigned long g_0048629c;
extern "C" unsigned long g_004862a0;
extern "C" unsigned long g_004862a4;
extern "C" unsigned long g_004862a8;
extern "C" unsigned long g_004862ac;
extern "C" unsigned long g_004862b0;
extern "C" unsigned long g_004862b4;
extern "C" unsigned long g_004862b8;
extern "C" unsigned long g_004862bc;
extern "C" unsigned long g_00486608;
extern "C" unsigned long g_0048660c;
extern "C" unsigned long g_00486610;
extern "C" unsigned long g_00486614;
extern "C" unsigned long g_00486618;
extern "C" unsigned long g_0048661c;
extern "C" unsigned long g_004867e0;
extern "C" unsigned long g_004867e4;
extern "C" unsigned long g_004867e8;
extern "C" unsigned long g_004867ec;
extern "C" unsigned long g_004867f0;
extern "C" unsigned long g_004867f4;
extern "C" unsigned long g_004869a0;
extern "C" unsigned long g_004869a4;
extern "C" unsigned long g_004869a8;
extern "C" unsigned long g_004869ac;
extern "C" unsigned long g_004869b0;
extern "C" unsigned long g_004869b4;
extern "C" unsigned long g_00486a74;
extern "C" unsigned long g_00486a78;
extern "C" unsigned long g_00486a7c;
extern "C" unsigned long g_00486a80;
extern "C" unsigned long g_00486ae4;
extern "C" unsigned long g_00486ae8;
extern "C" unsigned long g_00486aec;
extern "C" unsigned long g_00486b88;
extern "C" unsigned long g_00486b8c;
extern "C" unsigned long g_00486fa0;
extern "C" unsigned long g_00486fa4;
extern "C" unsigned long g_00486fa8;
extern "C" unsigned long g_00486fac;
extern "C" unsigned long g_00486fb0;
extern "C" unsigned long g_00486fb4;
extern "C" unsigned long g_00486fb8;
extern "C" unsigned long g_00486fbc;
extern "C" unsigned long g_00486fc0;
extern "C" unsigned long g_00486fc4;
extern "C" unsigned long g_00486fc8;
extern "C" unsigned long g_00486fcc;
extern "C" unsigned long g_00486fd0;
extern "C" unsigned long g_00486fd4;
extern "C" unsigned long g_00486fd8;
extern "C" unsigned long g_00486fdc;
extern "C" unsigned long g_00486fe0;
extern "C" unsigned long g_00486fe4;
extern "C" unsigned long g_00486fe8;
extern "C" unsigned long g_00486fec;
extern "C" unsigned long g_00487374;
extern "C" unsigned long g_00487378;
extern "C" unsigned long g_0048737c;
extern "C" unsigned long g_00487380;
extern "C" unsigned long g_00487384;
extern "C" unsigned long g_00487388;
extern "C" unsigned long g_0048738c;
extern "C" unsigned long g_0048766c;
extern "C" unsigned long g_00487670;
extern "C" unsigned long g_00487674;
extern "C" unsigned long g_00487678;
extern "C" unsigned long g_0048767c;
extern "C" unsigned long g_00487680;
extern "C" unsigned long g_00487684;
extern "C" unsigned long g_00487688;
extern "C" unsigned long g_0048768c;
extern "C" unsigned long g_00487690;
extern "C" unsigned long g_00487694;
extern "C" unsigned long g_00487698;
extern "C" unsigned long g_0048769c;
extern "C" unsigned long g_004876a0;
extern "C" unsigned long g_004876a4;
extern "C" unsigned long g_004876a8;
extern "C" unsigned long g_004879ec;
extern "C" unsigned long g_004879f0;
extern "C" unsigned long g_004879f4;
extern "C" unsigned long g_004879f8;
extern "C" unsigned long g_004879fc;
extern "C" unsigned long g_00487a00;
extern "C" unsigned long g_00487a04;
extern "C" unsigned long g_00487a08;
extern "C" unsigned long g_00487a0c;
extern "C" unsigned long g_00487a10;
cocos2d::CCDictionary* BackPackData::getDicPackItems() const
{
  return (cocos2d::CCDictionary*)(*(undefined4 *)(((int)this) + 0x14));
}

void BackPackData::setDicPackItems(cocos2d::CCDictionary* p1)
{
  *(undefined4 *)(((int)this) + 0x14) = (undefined4)(intptr_t)p1;
  return;
}

BackPackData::~BackPackData()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int *piStack_18;
  undefined4 uStack_14;
  
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  if (*(int *)((int)this + 4*(5)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(5)) = 0;
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BackPackData"),&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

// ===== 修复: 补回被误删的函数占位 (24) =====
BackPackData::BackPackData()
{
  undefined4 p2 = 0;

  int iVar1;
  undefined4 uVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  iVar1 = (undefined4)(intptr_t)(cocos2d::CCDictionary::create());
  *(int *)((int)this + 4*(5)) = iVar1;
  if (iVar1 != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BackPackData"),&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

bool BackPackData::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void BackPackData::removeItemWithMainKey(int p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

undefined4 BackPackData::sortByLv(cocos2d::CCArray* p1)
{
  code *pcVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  
  uVar2 = (undefined4)(cocos2d::CCArray::create());
  uVar3 = (undefined4)(((cocos2d::CCArray *)p1)->count());
  uVar10 = (undefined4)(0);
  if (1 < uVar3) {
    while( true ) {
      iVar4 = (undefined4)(intptr_t)(((cocos2d::CCArray *)p1)->count());
      if (iVar4 - 1U <= uVar10) break;
      uVar3 = (undefined4)(0);
      while( true ) {
        iVar4 = (undefined4)(intptr_t)(((cocos2d::CCArray *)p1)->count());
        if (iVar4 + ~uVar10 <= uVar3) break;
        iVar4 = (undefined4)(intptr_t)(((cocos2d::CCArray *)p1)->objectAtIndex((unsigned int)uVar3));
        uVar9 = (undefined4)(*(undefined4 *)(g_00483fcc + 0x483f50));
        uVar8 = (undefined4)(*(undefined4 *)(g_00483fd0 + 0x483f52));
        piVar5 = (int *)0x0;
        if (iVar4 != 0) {
          piVar5 = (int *)func_0079e55c(iVar4,uVar9,uVar8,0);
        }
        uVar3 = (undefined4)(uVar3 + 1);
        iVar4 = (undefined4)(intptr_t)(((cocos2d::CCArray *)p1)->objectAtIndex((unsigned int)uVar3));
        if (iVar4 == 0) {
          (**(code **)(*(int *)(piVar5) + (0x30)))(piVar5);
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x483fba);
          (*pcVar1)();
        }
        piVar6 = (int *)func_0079e55c(iVar4,uVar9,uVar8,0,uVar3,uVar10,iVar4);
        iVar4 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar5) + (0x30)))(piVar5));
        iVar7 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar6) + (0x30)))(piVar6));
        if (iVar4 < iVar7) {
          ((cocos2d::CCArray *)p1)->exchangeObject((cocos2d::CCObject*)piVar5, (cocos2d::CCObject*)piVar6);
        }
      }
      uVar10 = (undefined4)(uVar10 + 1);
    }
  }
  ((cocos2d::CCArray *)uVar2)->addObjectsFromArray((cocos2d::CCArray*)p1);
  return uVar2;
}

undefined4 BackPackData::sortByOrder(cocos2d::CCArray* p1)
{
  code *pcVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  uVar2 = (undefined4)(cocos2d::CCArray::create());
  uVar3 = (undefined4)(((cocos2d::CCArray *)(p1))->count());
  uStack_28 = (undefined4)(0);
  if (1 < uVar3) {
    while( true ) {
      iVar4 = (undefined4)(intptr_t)(((cocos2d::CCArray *)(p1))->count());
      if (iVar4 - 1U <= uStack_28) break;
      uStack_2c = (undefined4)(0);
      while( true ) {
        iVar4 = (undefined4)(intptr_t)(((cocos2d::CCArray *)(p1))->count());
        if (iVar4 + ~uStack_28 <= uStack_2c) break;
        iVar4 = (undefined4)(intptr_t)(((cocos2d::CCArray *)(p1))->objectAtIndex((unsigned int)uStack_2c));
        if (iVar4 == 0) {
          ((DataCacheManager *)this)->shareManager();
LAB_004840c2:
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x4840c2);
          (*pcVar1)();
        }
        uVar13 = (undefined4)(*(undefined4 *)(g_004840d4 + 0x484028));
        uVar12 = (undefined4)(*(undefined4 *)(g_004840d8 + 0x48402a));
        piVar5 = (int *)func_0079e55c(iVar4,uVar13,uVar12,0);
        uVar6 = (undefined4)(((DataCacheManager *)this)->shareManager());
        uVar7 = (undefined4)((**(code **)(*(int *)(piVar5) + (0x20)))(piVar5));
        piVar8 = ((void)((DataCacheManager *)(uVar6))->getItemDataByID(uVar7),(int *)0);
        uStack_2c = (undefined4)(uStack_2c + 1);
        iVar4 = (undefined4)(intptr_t)(((cocos2d::CCArray *)(p1))->objectAtIndex((unsigned int)uStack_2c));
        if (iVar4 == 0) {
          ((DataCacheManager *)this)->shareManager();
          goto LAB_004840c2;
        }
        piVar9 = (int *)func_0079e55c(iVar4,uVar13,uVar12,0);
        uVar6 = (undefined4)(((DataCacheManager *)this)->shareManager());
        uVar7 = (undefined4)((**(code **)(*(int *)(piVar9) + (0x20)))(piVar9));
        piVar10 = ((void)((DataCacheManager *)(uVar6))->getItemDataByID(uVar7),(int *)0);
        iVar4 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar8) + (0x18)))(piVar8));
        iVar11 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar10) + (0x18)))(piVar10));
        if (iVar4 < iVar11) {
          ((cocos2d::CCArray *)(p1))->exchangeObject((cocos2d::CCObject*)piVar5, (cocos2d::CCObject*)piVar9);
        }
      }
      uStack_28 = (undefined4)(uStack_28 + 1);
    }
  }
  ((cocos2d::CCArray *)(uVar2))->addObjectsFromArray((cocos2d::CCArray*)p1);
  return uVar2;
}

void BackPackData::sortByOrderInDesc(cocos2d::CCArray* p1)
{
  code *pcVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  uVar2 = (undefined4)(cocos2d::CCArray::create());
  uVar3 = (undefined4)(((cocos2d::CCArray *)(p1))->count());
  uStack_28 = (undefined4)(0);
  if (1 < uVar3) {
    while( true ) {
      iVar4 = (undefined4)(intptr_t)(((cocos2d::CCArray *)(p1))->count());
      if (iVar4 - 1U <= uStack_28) break;
      uStack_2c = (undefined4)(0);
      while( true ) {
        iVar4 = (undefined4)(intptr_t)(((cocos2d::CCArray *)(p1))->count());
        if (iVar4 + ~uStack_28 <= uStack_2c) break;
        iVar4 = (undefined4)(intptr_t)(((cocos2d::CCArray *)(p1))->objectAtIndex((unsigned int)uStack_2c));
        if (iVar4 == 0) {
          ((DataCacheManager *)this)->shareManager();
LAB_004841ca:
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x4841ca);
          (*pcVar1)();
        }
        uVar13 = (undefined4)(*(undefined4 *)(g_004841dc + 0x484130));
        uVar12 = (undefined4)(*(undefined4 *)(g_004841e0 + 0x484132));
        piVar5 = (int *)func_0079e55c(iVar4,uVar13,uVar12,0);
        uVar6 = (undefined4)(((DataCacheManager *)this)->shareManager());
        uVar7 = (undefined4)((**(code **)(*(int *)(piVar5) + (0x20)))(piVar5));
        piVar8 = ((void)((DataCacheManager *)(uVar6))->getItemDataByID(uVar7),(int *)0);
        uStack_2c = (undefined4)(uStack_2c + 1);
        iVar4 = (undefined4)(intptr_t)(((cocos2d::CCArray *)(p1))->objectAtIndex((unsigned int)uStack_2c));
        if (iVar4 == 0) {
          ((DataCacheManager *)this)->shareManager();
          goto LAB_004841ca;
        }
        piVar9 = (int *)func_0079e55c(iVar4,uVar13,uVar12,0);
        uVar6 = (undefined4)(((DataCacheManager *)this)->shareManager());
        uVar7 = (undefined4)((**(code **)(*(int *)(piVar9) + (0x20)))(piVar9));
        piVar10 = ((void)((DataCacheManager *)(uVar6))->getItemDataByID(uVar7),(int *)0);
        iVar4 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar8) + (0x18)))(piVar8));
        iVar11 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar10) + (0x18)))(piVar10));
        if (iVar11 < iVar4) {
          ((cocos2d::CCArray *)(p1))->exchangeObject((cocos2d::CCObject*)piVar5, (cocos2d::CCObject*)piVar9);
        }
      }
      uStack_28 = (undefined4)(uStack_28 + 1);
    }
  }
  ((cocos2d::CCArray *)(uVar2))->addObjectsFromArray((cocos2d::CCArray*)p1);
  return;
}

undefined4 BackPackData::sortByQuity(cocos2d::CCArray* p1)
{
  code *pcVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  uVar2 = (undefined4)(cocos2d::CCArray::create());
  uVar3 = (undefined4)(((cocos2d::CCArray *)(p1))->count());
  uStack_28 = (undefined4)(0);
  if (1 < uVar3) {
    while( true ) {
      iVar4 = (undefined4)(intptr_t)(((cocos2d::CCArray *)(p1))->count());
      if (iVar4 - 1U <= uStack_28) break;
      uStack_2c = (undefined4)(0);
      while( true ) {
        iVar4 = (undefined4)(intptr_t)(((cocos2d::CCArray *)(p1))->count());
        if (iVar4 + ~uStack_28 <= uStack_2c) break;
        iVar4 = (undefined4)(intptr_t)(((cocos2d::CCArray *)(p1))->objectAtIndex((unsigned int)uStack_2c));
        if (iVar4 == 0) {
          ((DataCacheManager *)this)->shareManager();
LAB_004842d2:
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x4842d2);
          (*pcVar1)();
        }
        uVar13 = (undefined4)(*(undefined4 *)(g_004842e4 + 0x484238));
        uVar12 = (undefined4)(*(undefined4 *)(g_004842e8 + 0x48423a));
        piVar5 = (int *)func_0079e55c(iVar4,uVar13,uVar12,0);
        uVar6 = (undefined4)(((DataCacheManager *)this)->shareManager());
        uVar7 = (undefined4)((**(code **)(*(int *)(piVar5) + (0x20)))(piVar5));
        piVar8 = ((void)((DataCacheManager *)(uVar6))->getItemDataByID(uVar7),(int *)0);
        uStack_2c = (undefined4)(uStack_2c + 1);
        iVar4 = (undefined4)(intptr_t)(((cocos2d::CCArray *)(p1))->objectAtIndex((unsigned int)uStack_2c));
        if (iVar4 == 0) {
          ((DataCacheManager *)this)->shareManager();
          goto LAB_004842d2;
        }
        piVar9 = (int *)func_0079e55c(iVar4,uVar13,uVar12,0);
        uVar6 = (undefined4)(((DataCacheManager *)this)->shareManager());
        uVar7 = (undefined4)((**(code **)(*(int *)(piVar9) + (0x20)))(piVar9));
        piVar10 = ((void)((DataCacheManager *)(uVar6))->getItemDataByID(uVar7),(int *)0);
        iVar4 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar8) + (0x50)))(piVar8));
        iVar11 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar10) + (0x50)))(piVar10));
        if (iVar4 < iVar11) {
          ((cocos2d::CCArray *)(p1))->exchangeObject((cocos2d::CCObject*)piVar5, (cocos2d::CCObject*)piVar9);
        }
      }
      uStack_28 = (undefined4)(uStack_28 + 1);
    }
  }
  ((cocos2d::CCArray *)(uVar2))->addObjectsFromArray((cocos2d::CCArray*)p1);
  return uVar2;
}

undefined4 BackPackData::sortItems()
{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  int iStack_40;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [8];
  
  lVar11 = (undefined4)(intptr_t)(0 /* ctorZero */);
  uVar1 = (undefined4)(cocos2d::CCArray::create());
  iStack_40 = 5;
  iVar9 = (undefined4)(intptr_t)(g_00484530 + 0x48430a);
  do {
    uVar2 = (undefined4)(cocos2d::CCArray::create());
    if (*(int *)(((int)this) + 0x14) != 0) {
      iVar7 = (undefined4)(intptr_t)(*(int *)(*(int *)(((int)this) + 0x14) + 0x14));
      iVar10 = (undefined4)(intptr_t)(iVar7);
      if (iVar7 != 0) {
        iVar10 = (undefined4)(intptr_t)(*(int *)(iVar7 + 0x110));
      }
      while (iVar7 != 0) {
        if (*(int *)(iVar7 + 0x104) != 0) {
          uVar8 = (undefined4)(*(undefined4 *)(iVar9 + g_00484534));
          piVar3 = (int *)func_0079e55c(*(int *)(iVar7 + 0x104),uVar8,
                                          *(undefined4 *)(iVar9 + g_00484538),0);
          if (piVar3 != 0) {
            (**(code **)(*(int *)(piVar3) + (0x38)))(auStack_1c,piVar3);
            iVar7 = (undefined4)(intptr_t)(func_0079e4bc(auStack_1c,g_0048453c + 0x484396));
            func_0079e2bc(auStack_1c);
            if (iVar7 == 0) {
              piVar4 = (int *)((DataCacheManager *)this)->shareManager();
              uVar5 = (undefined4)((**(code **)(*(int *)(piVar4) + (0x68)))());
              uVar6 = (undefined4)((**(code **)(*(int *)(piVar3) + (0x20)))(piVar3));
              iVar7 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)(uVar5))->objectForKey(uVar6));
              if (((iVar7 != 0) &&
                  (piVar4 = (int *)func_0079e55c(iVar7,uVar8,
                                                   *(undefined4 *)(iVar9 + g_00484540),0),
                  piVar4 != 0)) &&
                 (iVar7 = (**(code **)(*(int *)(piVar4) + (0x30)))(), iVar7 == iStack_40)) {
                ((cocos2d::CCArray *)(uVar2))->addObject((cocos2d::CCObject*)piVar3);
              }
            }
          }
        }
        iVar7 = (undefined4)(intptr_t)(iVar10);
        if (iVar10 != 0) {
          iVar10 = (undefined4)(intptr_t)(*(int *)(iVar10 + 0x110));
        }
      }
    }
    uVar2 = (undefined4)(((BackPackData *)(((int)this)))->sortByLv((cocos2d::CCArray*)uVar2));
    uVar2 = (undefined4)(((BackPackData *)(((int)this)))->sortByOrder((cocos2d::CCArray*)uVar2));
    ((cocos2d::CCArray *)(uVar1))->addObjectsFromArray((cocos2d::CCArray*)uVar2);
    iStack_40 = (undefined4)(intptr_t)(iStack_40 + -1);
  } while (iStack_40 != 0);
  uVar2 = (undefined4)(cocos2d::CCArray::create());
  if (*(int *)(((int)this) + 0x14) != 0) {
    iVar7 = (undefined4)(intptr_t)(*(int *)(*(int *)(((int)this) + 0x14) + 0x14));
    iVar10 = 0;
    if (iVar7 != 0) {
      iVar10 = (undefined4)(intptr_t)(*(int *)(iVar7 + 0x110));
    }
    while (iVar7 != 0) {
      if (*(int *)(iVar7 + 0x104) != 0) {
        uVar8 = (undefined4)(*(undefined4 *)(iVar9 + g_00484534));
        piVar3 = (int *)func_0079e55c(*(int *)(iVar7 + 0x104),uVar8,
                                        *(undefined4 *)(iVar9 + g_00484538),0);
        if (piVar3 != 0) {
          (**(code **)(*(int *)(piVar3) + (0x38)))(auStack_1c,piVar3);
          iVar7 = (undefined4)(intptr_t)(func_0079e4bc(auStack_1c,g_00484548 + 0x4844d4));
          func_0079e2bc(auStack_1c);
          if (iVar7 == 0) {
            piVar4 = (int *)((DataCacheManager *)this)->shareManager();
            uVar5 = (undefined4)((**(code **)(*(int *)(piVar4) + (0x60)))());
            uVar6 = (undefined4)((**(code **)(*(int *)(piVar3) + (0x20)))(piVar3));
            iVar7 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)(uVar5))->objectForKey(uVar6));
            if (((iVar7 != 0) &&
                (piVar4 = (int *)func_0079e55c(iVar7,uVar8,*(undefined4 *)(iVar9 + g_0048454c),
                                                 0), piVar4 != 0)) &&
               (iVar7 = (**(code **)(*(int *)(piVar4) + (0x30)))(), iVar7 == 8)) {
              ((cocos2d::CCArray *)(uVar2))->addObject((cocos2d::CCObject*)piVar3);
            }
          }
        }
      }
      iVar7 = (undefined4)(intptr_t)(iVar10);
      if (iVar10 != 0) {
        iVar10 = (undefined4)(intptr_t)(*(int *)(iVar10 + 0x110));
      }
    }
  }
  uVar2 = (undefined4)(((BackPackData *)(((int)this)))->sortByLv((cocos2d::CCArray*)uVar2));
  uVar2 = ((void)(((BackPackData *)(((int)this)))->sortByOrderInDesc((cocos2d::CCArray*)uVar2)),(undefined4)0);
  ((cocos2d::CCArray *)(uVar1))->addObjectsFromArray((cocos2d::CCArray*)uVar2);
  lVar12 = (undefined4)(intptr_t)(0 /* ctorZero */);
  cocos2d::CCString::createWithFormat((char const*)"===背包整理花的时间=======%lld", (int)((ulonglong)lVar11 >> 0x20),(int)(lVar12 - lVar11),
             (int)((ulonglong)(lVar12 - lVar11) >> 0x20));
  uVar2 = (undefined4)(((cocos2d::CCString *)this)->getCString());
  func_0079e45c(auStack_1c,uVar2,auStack_20);
  ((BLDebug *)this)->LogTime((std::string)(char*)auStack_1c);
  func_0079e2bc(auStack_1c);
  uVar2 = (undefined4)(cocos2d::CCArray::create());
  uVar1 = (undefined4)(((BackPackData *)(((int)this)))->sortByQuity((cocos2d::CCArray*)uVar1));
  ((cocos2d::CCArray *)(uVar2))->addObjectsFromArray((cocos2d::CCArray*)uVar1);
  return uVar2;
}

void BackPackData::removeItem(BackPackItemData* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BackPackData::upgraceEquip(BackPackItemData* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BackPackData::updateUpGraceTime(BackPackItemData* p1, int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

undefined4 BackPackData::getItemDataForCost(ItemData* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void BackPackData::getSuitItemData(SuitEquipUserItemData* p1, std::string * p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

undefined4 BackPackData::getItemData(ItemData* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

int * BackPackData::insertItemData(ItemData* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return nullptr;
}

void BackPackData::equip(BackPackItemData* p1, std::string * p2, int p3)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BackPackData::addItemData(ItemData* p1, bool p2)
{
  BackPackData::addItemData((ItemData*)0, (bool)0, (int)0);
  return;
}

void BackPackData::compose(int p1, BackPackItemData* p2)
{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iStack_34;
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [4];
  undefined4 auStack_1c [2];
  
  piVar1 = (int *)((DataCacheManager *)this)->shareManager();
  uVar2 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x68)))());
  uVar3 = (undefined4)((**(code **)(*(int *)(p2) + (0x20)))(p2));
  iVar4 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)uVar2)->objectForKey(uVar3));
  if (iVar4 != 0) {
    uVar2 = (undefined4)(*(undefined4 *)(g_00486608 + 0x4864f2));
    piVar1 = (int *)func_0079e55c(iVar4,uVar2,*(undefined4 *)(g_0048660c + 0x4864f6),0);
    if ((piVar1 != 0) && (iVar4 = (**(code **)(*(int *)(piVar1) + (0x30)))(), iVar4 != 5)) {
      iVar4 = (undefined4)(intptr_t)((**(code **)(*(int *)(p2) + (0x20)))(p2));
      piVar1 = (int *)((DataCacheManager *)this)->shareManager();
      uVar3 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x60)))());
      iStack_34 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)uVar3)->objectForKey(iVar4 + 1000));
      if (iStack_34 != 0) {
        iStack_34 = (undefined4)(intptr_t)(func_0079e55c(iStack_34,uVar2,*(undefined4 *)(g_00486610 + 0x48653a),0));
      }
      func_0079e45c(auStack_24,"itemid",auStack_1c);
      iVar5 = (undefined4)(intptr_t)((**(code **)(*(int *)(p2) + (0x28)))(p2));
      BackPackData::removeItem((BackPackItemData*)p2);
      if (p1 < iVar5) {
        piVar1 = (int *)((ItemData *)this)->create();
        ((ItemData *)piVar1)->initWith(iVar4);
        (**(code **)(*(int *)(piVar1) + (0x9c)))(piVar1,iVar5 - p1);
        BackPackData::addItemData((ItemData*)piVar1, 1);
      }
      BackPackData::addItemData((ItemData*)iStack_34, 1);
      uVar2 = (undefined4)(((Toast *)this)->sharedToast());
      uVar3 = (undefined4)(((BLLanguage *)this)->share());
      func_0079e45c(auStack_20,"符文升级成功",auStack_28);
      (((BLLanguage *)this))->getString(*(std::string *)auStack_1c);
      ((Toast *)uVar2)->showToast((char const*)auStack_1c[0]);
      func_0079e2bc(auStack_1c);
      func_0079e2bc(auStack_20);
      uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
      ((cocos2d::CCNotificationCenter *)uVar2)->postNotification((char const*)"EVENT_EQUIP_CHANGE");
      func_0079e2bc(auStack_24);
    }
  }
  return;
}

void BackPackData::debrisCompose(DebrisComposeData* p1, BackPackItemData* p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BackPackData::unEquip(BackPackItemData* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BackPackData::unEquipWithoutNotice(BackPackItemData* p1)
{
  undefined4 p4 = 0;

  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  code *pcVar5;
  
  piVar1 = (int *)((DataCacheManager *)this)->shareManager();
  uVar2 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x60)))());
  uVar3 = (undefined4)((**(code **)(*(int *)(p1) + (0x20)))(p1));
  iVar4 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)uVar2)->objectForKey(uVar3));
  uVar2 = (undefined4)(0);
  if (iVar4 != 0) {
    uVar2 = func_0079e55c(iVar4,*(undefined4 *)(g_00486b88 + 0x486b20),
                            *(undefined4 *)(g_00486b8c + 0x486b22),0,p4);
  }
  piVar1 = (int *)((ItemData *)this)->create();
  ((ItemData *)piVar1)->initWith((ItemData*)uVar2);
  (**(code **)(*(int *)(piVar1) + (0x9c)))(piVar1,1);
  pcVar5 = *(code **)(*piVar1 + 0xa4);
  uVar2 = (undefined4)((**(code **)(*(int *)(p1) + (0x30)))(p1));
  (*pcVar5)(piVar1,uVar2);
  pcVar5 = *(code **)(*piVar1 + 0x1c);
  uVar2 = (undefined4)((**(code **)(*(int *)(p1) + (0x20)))(p1));
  (*pcVar5)(piVar1,uVar2);
  uVar2 = (undefined4)((**(code **)(*(int *)(p1) + (0x48)))(p1));
  BackPackData::removeItem((BackPackItemData*)p1);
  BackPackData::addItemData((ItemData*)piVar1, 0, uVar2);
  return;
}

void BackPackData::addItemDataWithMainKey(ItemData* p1, int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BackPackData::arrangeItems()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BackPackData::addItemDataChestFestival(ItemData* p1, int p2, bool p3)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
