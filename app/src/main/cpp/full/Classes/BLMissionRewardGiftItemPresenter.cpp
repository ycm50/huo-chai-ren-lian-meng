#include "BLMissionRewardGiftItemPresenter.h"
#include "BLLeakUtils.h"
#include "BLMissionRewardInfoPresenter.h"
#include "DataCacheManager.h"
#include "DataManager.h"
#include "MissionStarRewardData.h"
#include "MissionStarRewardUserData.h"
#include "MissionStarRewardUserItemData.h"
#include "UIManager.h"
#include "UserData.h"
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
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e5bc(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_005b7d84;
extern "C" unsigned long UNK_005b7d98;
extern "C" unsigned long UNK_005b806a;
extern "C" unsigned long UNK_005b807c;
extern "C" unsigned long UNK_005b8164;
extern "C" unsigned long UNK_005b81a0;
extern "C" unsigned long UNK_005b87de;
extern "C" unsigned long UNK_005b87e0;
extern "C" unsigned long UNK_005b87fa;
extern "C" unsigned long UNK_005b87fc;
extern "C" unsigned long _UNK_005b7dc8;
extern "C" unsigned long _UNK_005b7dcc;
extern "C" unsigned long _UNK_005b80b0;
extern "C" unsigned long _UNK_005b80b4;
extern "C" unsigned long _UNK_005b81ec;
extern "C" unsigned long _UNK_005b81f0;
extern "C" unsigned long _UNK_005b88e4;
extern "C" unsigned long _UNK_005b88e8;
extern "C" unsigned long _UNK_005b88ec;
extern "C" unsigned long _UNK_005b88f0;
extern "C" unsigned long _UNK_005b88f4;
extern "C" unsigned long _UNK_005b88f8;
extern "C" unsigned long _UNK_005b88fc;
extern "C" unsigned long _UNK_005b8900;
extern "C" unsigned long g_005b7d84;
extern "C" unsigned long g_005b7d98;
extern "C" unsigned long g_005b7dc8;
extern "C" unsigned long g_005b7dcc;
extern "C" unsigned long g_005b806a;
extern "C" unsigned long g_005b807c;
extern "C" unsigned long g_005b80b0;
extern "C" unsigned long g_005b80b4;
extern "C" unsigned long g_005b8164;
extern "C" unsigned long g_005b81a0;
extern "C" unsigned long g_005b81ec;
extern "C" unsigned long g_005b81f0;
extern "C" unsigned long g_005b87de;
extern "C" unsigned long g_005b87e0;
extern "C" unsigned long g_005b87fa;
extern "C" unsigned long g_005b87fc;
extern "C" unsigned long g_005b88e4;
extern "C" unsigned long g_005b88e8;
extern "C" unsigned long g_005b88ec;
extern "C" unsigned long g_005b88f0;
extern "C" unsigned long g_005b88f4;
extern "C" unsigned long g_005b88f8;
extern "C" unsigned long g_005b88fc;
extern "C" unsigned long g_005b8900;
BLMissionRewardGiftItemPresenter::~BLMissionRewardGiftItemPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int *piStack_18;
  undefined4 uStack_14;
  
  /* VPTR_FIX(R87): vptr=(&g_A+g_B)+8 ?? g_ ?? 0 ?? -> ???? SEGV?????? vptr???? */;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005b7d98 + g_005b7dcc,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLMissionRewardGiftItemPresenter::BLMissionRewardGiftItemPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  /* VPTR_FIX(R87): vptr=(&g_A+g_B)+8 ?? g_ ?? 0 ?? -> ???? SEGV?????? vptr???? */;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005b807c + g_005b80b4,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  *(int *)((int)this + 4*(6)) = 0;
  *(int *)((int)this + 4*(7)) = 1;
  return;
}

undefined4 BLMissionRewardGiftItemPresenter::create()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x20))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLMissionRewardGiftItemPresenter::onEnter()
{
  return;
}

void BLMissionRewardGiftItemPresenter::onExit()
{
  return;
}

void BLMissionRewardGiftItemPresenter::updateWithData(int p1, int p2)
{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  code *pcVar6;
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  int aiStack_24 [4];
  
  aiStack_24[0] = 5;
  aiStack_24[1] = 10;
  *(undefined4 *)(((int)this) + 0x1c) = p1;
  aiStack_24[2] = 0xf;
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  piVar1 = (int *)(**(code **)(*piVar1 + 0x28))();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x198))());
  uVar2 = (undefined4)(((MissionStarRewardUserData *)uVar2)->getItemData(*(undefined4 *)(((int)this) + 0x1c)));
  iVar3 = ((MissionStarRewardUserItemData *)uVar2)->isAcceptable(*(undefined4 *)(((int)this) + 0x18));
  iVar4 = *(int *)(((int)this) + 0x14);
  if (iVar3 == 0) {
    piVar5 = *(int **)(iVar4 + 0x110);
    pcVar6 = *(code **)(*piVar5 + 0x20c);
    func_0079e45c(auStack_28,&g_005b8164 + g_005b81ec,auStack_2c);
    piVar1 = (int *)0 /* ctorZero */;
    uVar2 = (undefined4)((**(code **)(*piVar1 + 0x214))());
    (*pcVar6)(piVar5,uVar2);
  }
  else {
    if (p2 < aiStack_24[*(int *)(((int)this) + 0x18)]) {
      uVar2 = (undefined4)(0);
      piVar1 = *(int **)(iVar4 + 0x110);
      pcVar6 = *(code **)(*piVar1 + 0x90);
      goto code_r0x005b81da;
    }
    piVar5 = *(int **)(iVar4 + 0x110);
    pcVar6 = *(code **)(*piVar5 + 0x20c);
    func_0079e45c(auStack_28,&g_005b81a0 + g_005b81f0,auStack_2c);
    piVar1 = (int *)0 /* ctorZero */;
    uVar2 = (undefined4)((**(code **)(*piVar1 + 0x214))());
    (*pcVar6)(piVar5,uVar2);
  }
  func_0079e2bc(auStack_28);
  uVar2 = (undefined4)(1);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x14) + 0x110);
  pcVar6 = *(code **)(*piVar1 + 0x90);
code_r0x005b81da:
  (*pcVar6)(piVar1,uVar2);
  return;
}

// ===== 修复: 补回被误删的函数占位 (2) =====

void BLMissionRewardGiftItemPresenter::onClick(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
