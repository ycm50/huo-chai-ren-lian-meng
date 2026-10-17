#include "BLRankRewardItemNumItem.h"
#include "CCDirector.h"
#include "BLLeakUtils.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
using namespace cocos2d;
// 兜底声明
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e30c(...);
extern "C" long long func_0079e34c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long func_0079e4ec(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e59c(...);
extern "C" long long func_0079e66c(...);
extern "C" long long func_0079e904(...);
extern "C" long long func_0079e914(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_00642420;
extern "C" unsigned long UNK_00642434;
extern "C" unsigned long UNK_006425ee;
extern "C" unsigned long UNK_00642600;
extern "C" unsigned long UNK_0064263c;
extern "C" unsigned long UNK_00642688;
extern "C" unsigned long _UNK_00642464;
extern "C" unsigned long _UNK_00642468;
extern "C" unsigned long _UNK_0064262c;
extern "C" unsigned long _UNK_00642630;
extern "C" unsigned long _UNK_0064278c;
extern "C" unsigned long _UNK_00642790;
extern "C" unsigned long g_00642420;
extern "C" unsigned long g_00642434;
extern "C" unsigned long g_00642464;
extern "C" unsigned long g_00642468;
extern "C" unsigned long g_006425ee;
extern "C" unsigned long g_00642600;
extern "C" unsigned long g_0064262c;
extern "C" unsigned long g_00642630;
extern "C" unsigned long g_0064263c;
extern "C" unsigned long g_00642688;
extern "C" unsigned long g_0064278c;
extern "C" unsigned long g_00642790;
float BLRankRewardItemNumItem::getWidth() const
{
  return *(undefined4 *)(((int)this) + 0xe4);
}

void BLRankRewardItemNumItem::setWidth(float p1)
{
  *(undefined4 *)(((int)this) + 0xe4) = p1;
  return;
}

BLRankRewardItemNumItem::~BLRankRewardItemNumItem()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int *piStack_18;
  undefined4 uStack_14;
  
  /* VPTR_FIX(R87): vptr=(&g_A+g_B)+8 ?? g_ ?? 0 ?? -> ???? SEGV?????? vptr???? */;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00642434 + g_00642468,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCNode(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLRankRewardItemNumItem::BLRankRewardItemNumItem()
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
  func_0079e45c(&uStack_14,&g_00642600 + g_00642630,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}


void BLRankRewardItemNumItem::onEnter()
{
  ((cocos2d::CCNode *)this)->onEnter();
  return;
}

void BLRankRewardItemNumItem::onExit()
{
  ((cocos2d::CCNode *)this)->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
void BLRankRewardItemNumItem::updateData(std::string * p1)
{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  code *pcVar10;
  undefined4 uStack_60;
  uint uStack_5c;
  undefined4 auStack_48 [2];
  undefined1 auStack_40 [4];
  undefined4 uStack_3c;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [20];
  int iStack_1c;
  
  piVar8 = *(int **)((unsigned char *)((char *)&g_0064263c + (intptr_t)(g_0064278c)));
  iStack_1c = (int)*(int *)&(*piVar8);
  uStack_5c = (undefined4)(0);
  uStack_60 = (undefined4)(0);
  while( true ) {
    if (*(uint *)(*(int *)p1 + -0xc) <= uStack_5c) break;
    func_0079e66c(p1);
    cVar1 = (undefined4)(intptr_t)(*(char *)(*(int *)p1 + uStack_5c));
    if (cVar1 != '\0') {
      func_0079e34c(auStack_30,0,0x14);
      func_0079e904(auStack_30,(unsigned char *)((char *)&g_00642688 + (intptr_t)(g_00642790)),cVar1);
      func_0079e45c(auStack_38,auStack_30,auStack_40);
      piVar2 = (int *)0 /* ctorZero */;
      func_0079e2bc(auStack_38);
      pcVar10 = *(code **)(*piVar2 + 0x7c);
      0 /* ctorZero */;
      (*pcVar10)(piVar2,auStack_38);
      pcVar10 = *(code **)(*piVar2 + 0x4c);
      0 /* ctorZero */;
      uVar5 = (undefined4)(auStack_48[0]);
      cocos2d::CCDirector::sharedDirector();
      uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
      uVar3 = (undefined4)(func_0079e4dc(uVar5,uVar3));
      0 /* ctorZero */;
      uVar5 = (undefined4)(uStack_3c);
      cocos2d::CCDirector::sharedDirector();
      uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
      uVar5 = (undefined4)(func_0079e4dc(uVar5,uVar4));
      0 /* ctorZero */;
      (*pcVar10)(piVar2,auStack_38);
      puVar6 = (undefined4 *)(**(code **)(*(int *)(piVar2) + (0x8c)))(piVar2);
      uStack_60 = (undefined4)(func_0079e59c(uStack_60,*puVar6));
      (**(code **)(*(int *)this + 200))(((int)this),piVar2);
    }
    uStack_5c = (undefined4)(uStack_5c + 1);
  }
  iVar9 = (undefined4)(intptr_t)(*(int *)((int)this + 4*(0x39)));
  iVar7 = (undefined4)(intptr_t)(func_0079e4ec(uStack_60,iVar9));
  if (iVar7 == 0) {
    uVar5 = (undefined4)(0x3f800000);
  }
  else {
    uVar5 = (undefined4)(func_0079e4dc(iVar9,uStack_60));
    (**(code **)(*(int *)this + 0x40))(((int)this),uVar5);
  }
  iVar7 = (undefined4)(intptr_t)(func_0079e4fc(uStack_60,uVar5));
  *(int *)((int)this + 4*(0x39)) = iVar7;
  if (iStack_1c != *piVar8) {
    func_0079e914();
    func_0079e2bc(uVar5);
    func_0079e30c();
  }
  return;
}
