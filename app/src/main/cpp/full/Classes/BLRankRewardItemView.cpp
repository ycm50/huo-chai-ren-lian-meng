#include "BLRankRewardItemView.h"
#include "CCGeometry.h"
#include "CCLayer.h"
#include "CCObject.h"
#include "CCControlButton.h"
#include "CCLabelTTF.h"
#include "CCSprite.h"
#include "CCDirector.h"
#include "BLLeakUtils.h"
#include "BLRankRewardItemPresenter.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include "BLRankRewardItemNumItem.h"   /* ALLOC+CTOR_FIX(R120): ???????? placement new */
using namespace cocos2d;
// 兜底声明
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_00642360;
extern "C" unsigned long UNK_006423a4;
extern "C" unsigned long UNK_006423e8;
extern "C" unsigned long UNK_00642410;
extern "C" unsigned long UNK_006424c0;
extern "C" unsigned long UNK_006424ee;
extern "C" unsigned long UNK_00642806;
extern "C" unsigned long UNK_0064281a;
extern "C" unsigned long UNK_0064298a;
extern "C" unsigned long UNK_0064298e;
extern "C" unsigned long UNK_00642a30;
extern "C" unsigned long UNK_00642a40;
extern "C" unsigned long UNK_00642b10;
extern "C" unsigned long UNK_00642bba;
extern "C" unsigned long UNK_00642c94;
extern "C" unsigned long UNK_00642d52;
extern "C" unsigned long UNK_00642d54;
extern "C" unsigned long UNK_00642d7e;
extern "C" unsigned long UNK_00642df0;
extern "C" unsigned long UNK_00642f1a;
extern "C" unsigned long UNK_00642fde;
extern "C" unsigned long UNK_00642fe0;
extern "C" unsigned long UNK_00643006;
extern "C" unsigned long _UNK_006423d4;
extern "C" unsigned long _UNK_006423d8;
extern "C" unsigned long _UNK_006423ec;
extern "C" unsigned long _UNK_00642414;
extern "C" unsigned long _UNK_00642518;
extern "C" unsigned long _UNK_0064251c;
extern "C" unsigned long _UNK_00642810;
extern "C" unsigned long _UNK_00642bfc;
extern "C" unsigned long _UNK_00642c00;
extern "C" unsigned long _UNK_00642c04;
extern "C" unsigned long _UNK_00642c08;
extern "C" unsigned long _UNK_00642c0c;
extern "C" unsigned long _UNK_00642c10;
extern "C" unsigned long _UNK_00642c14;
extern "C" unsigned long _UNK_00642c18;
extern "C" unsigned long _UNK_00642c1c;
extern "C" unsigned long _UNK_00642c20;
extern "C" unsigned long _UNK_00642c24;
extern "C" unsigned long _UNK_00642c28;
extern "C" unsigned long _UNK_00642c2c;
extern "C" unsigned long _UNK_00642c30;
extern "C" unsigned long _UNK_00642c34;
extern "C" unsigned long _UNK_00642d24;
extern "C" unsigned long _UNK_00642d28;
extern "C" unsigned long _UNK_00642d2c;
extern "C" unsigned long _UNK_00642d30;
extern "C" unsigned long _UNK_00642d34;
extern "C" unsigned long _UNK_006430a0;
extern "C" unsigned long _UNK_006430a4;
extern "C" unsigned long _UNK_006430a8;
extern "C" unsigned long _UNK_006430ac;
extern "C" unsigned long _UNK_006430b0;
extern "C" unsigned long _UNK_006430b4;
extern "C" unsigned long _UNK_006430b8;
extern "C" unsigned long _UNK_006430bc;
extern "C" unsigned long _UNK_006430c0;
extern "C" unsigned long _UNK_006430c4;
extern "C" unsigned long _UNK_006430c8;
extern "C" unsigned long _UNK_006430cc;
extern "C" unsigned long _UNK_006430d0;
extern "C" unsigned long _UNK_006430d4;
extern "C" unsigned long _UNK_006430d8;
extern "C" unsigned long _UNK_006430dc;
extern "C" unsigned long g_00642360;
extern "C" unsigned long g_006423a4;
extern "C" unsigned long g_006423d4;
extern "C" unsigned long g_006423d8;
extern "C" unsigned long g_006423e8;
extern "C" unsigned long g_006423ec;
extern "C" unsigned long g_00642410;
extern "C" unsigned long g_00642414;
extern "C" unsigned long g_006424c0;
extern "C" unsigned long g_006424ee;
extern "C" unsigned long g_00642518;
extern "C" unsigned long g_0064251c;
extern "C" unsigned long g_00642806;
extern "C" unsigned long g_00642810;
extern "C" unsigned long g_0064281a;
extern "C" unsigned long g_0064298a;
extern "C" unsigned long g_0064298e;
extern "C" unsigned long g_00642a30;
extern "C" unsigned long g_00642a40;
extern "C" unsigned long g_00642b10;
extern "C" unsigned long g_00642bba;
extern "C" unsigned long g_00642bfc;
extern "C" unsigned long g_00642c00;
extern "C" unsigned long g_00642c04;
extern "C" unsigned long g_00642c08;
extern "C" unsigned long g_00642c0c;
extern "C" unsigned long g_00642c10;
extern "C" unsigned long g_00642c14;
extern "C" unsigned long g_00642c18;
extern "C" unsigned long g_00642c1c;
extern "C" unsigned long g_00642c20;
extern "C" unsigned long g_00642c24;
extern "C" unsigned long g_00642c28;
extern "C" unsigned long g_00642c2c;
extern "C" unsigned long g_00642c30;
extern "C" unsigned long g_00642c34;
extern "C" unsigned long g_00642c94;
extern "C" unsigned long g_00642d24;
extern "C" unsigned long g_00642d28;
extern "C" unsigned long g_00642d2c;
extern "C" unsigned long g_00642d30;
extern "C" unsigned long g_00642d34;
extern "C" unsigned long g_00642d52;
extern "C" unsigned long g_00642d54;
extern "C" unsigned long g_00642d7e;
extern "C" unsigned long g_00642df0;
extern "C" unsigned long g_00642f1a;
extern "C" unsigned long g_00642fde;
extern "C" unsigned long g_00642fe0;
extern "C" unsigned long g_00643006;
extern "C" unsigned long g_006430a0;
extern "C" unsigned long g_006430a4;
extern "C" unsigned long g_006430a8;
extern "C" unsigned long g_006430ac;
extern "C" unsigned long g_006430b0;
extern "C" unsigned long g_006430b4;
extern "C" unsigned long g_006430b8;
extern "C" unsigned long g_006430bc;
extern "C" unsigned long g_006430c0;
extern "C" unsigned long g_006430c4;
extern "C" unsigned long g_006430c8;
extern "C" unsigned long g_006430cc;
extern "C" unsigned long g_006430d0;
extern "C" unsigned long g_006430d4;
extern "C" unsigned long g_006430d8;
extern "C" unsigned long g_006430dc;
BLRankRewardItemView::~BLRankRewardItemView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_00642360 + g_006423d4);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  if (*(int *)((int)this + 4*(0x42)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x42)) = 0;
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_006423a4 + g_006423d8,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLRankRewardItemView::BLRankRewardItemView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_006424c0 + g_00642518);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_006424ee + g_0064251c,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}


undefined4 BLRankRewardItemView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x108);
}

undefined4 BLRankRewardItemView::getBtnGet()
{
  return *(undefined4 *)(((int)this) + 0x134);
}

undefined4 BLRankRewardItemView::getLabGet()
{
  return *(undefined4 *)(((int)this) + 0x138);
}

undefined4 BLRankRewardItemView::getLabReward()
{
  return *(undefined4 *)(((int)this) + 0x124);
}

undefined4 BLRankRewardItemView::getLabNext()
{
  return *(undefined4 *)(((int)this) + 300);
}

undefined4 BLRankRewardItemView::getLabTime()
{
  return *(undefined4 *)(((int)this) + 0x130);
}

undefined4 BLRankRewardItemView::getSprRank()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

undefined4 BLRankRewardItemView::getLabYesterdayRank()
{
  return *(undefined4 *)(((int)this) + 0x120);
}

undefined4 BLRankRewardItemView::getRankItem()
{
  return *(undefined4 *)(((int)this) + 0x118);
}

undefined4 BLRankRewardItemView::getSprIcon()
{
  return *(undefined4 *)(((int)this) + 0x128);
}

void BLRankRewardItemView::onEnter()
{
  (**(code **)(**(int **)(((int)this) + 0x108) + 0x148))();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLRankRewardItemView::onExit()
{
  (**(code **)(**(int **)(((int)this) + 0x108) + 0x150))();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (2) =====
int * BLRankRewardItemView::create(bool p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return nullptr;
}

bool BLRankRewardItemView::init()
{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined *puVar7;
  code *pcVar8;
  int *piVar9;
  undefined *puVar10;
  undefined4 auStack_30 [2];
  undefined1 auStack_28 [4];
  undefined4 uStack_24;
  undefined1 auStack_20 [12];
  
  iVar1 = (undefined4)(intptr_t)(((cocos2d::CCLayer *)this)->init());
  if (iVar1 != 0) {
    iVar2 = (undefined4)(intptr_t)(((BLRankRewardItemPresenter *)this)->create((BLRankRewardItemView*)((int)this)));
    *(int *)((int)this + 4*(0x42)) = iVar2;
    if (iVar2 != 0) {
      ((cocos2d::CCObject *)this)->retain();
    }
    if ((char)*(int *)((int)this + 4*(0x43)) == '\0') {
      func_0079e45c(auStack_20,(unsigned char *)((char *)&g_0064281a + (intptr_t)(g_00642bfc)),auStack_28);
      iVar2 = (undefined4)(intptr_t)(0 /* ctorZero */);
    }
    else {
      func_0079e45c(auStack_20,(unsigned char *)((char *)&g_00642806 + (intptr_t)(g_00642810)),auStack_28);
      iVar2 = (undefined4)(intptr_t)(0 /* ctorZero */);
    }
    *(int *)((int)this + 4*(0x44)) = iVar2;
    func_0079e2bc(auStack_20);
    piVar9 = (int *)*(int *)((int)this + 4*(0x44));
    pcVar8 = *(code **)(*piVar9 + 0x88);
    0 /* ctorZero */;
    uVar5 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(func_0079e4dc(uVar5,uVar3));
    0 /* ctorZero */;
    uVar5 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(uVar5,uVar4));
    0 /* ctorZero */;
    (*pcVar8)(piVar9,auStack_20);
    piVar9 = (int *)*(int *)((int)this + 4*(0x44));
    pcVar8 = *(code **)(*piVar9 + 0x4c);
    0 /* ctorZero */;
    uVar5 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(func_0079e4dc(uVar5,uVar3));
    0 /* ctorZero */;
    uVar5 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(uVar5,uVar4));
    0 /* ctorZero */;
    (*pcVar8)(piVar9,auStack_20);
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x44)),1);
    piVar9 = (int *)cocos2d::CCSprite::create();
    *(int *)((int)this + 4*(0x45)) = (int)piVar9;
    pcVar8 = *(code **)(*piVar9 + 0x4c);
    0 /* ctorZero */;
    uVar5 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(func_0079e4dc(uVar5,uVar3));
    0 /* ctorZero */;
    uVar5 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(uVar5,uVar4));
    0 /* ctorZero */;
    (*pcVar8)(piVar9,auStack_20);
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x45)),2);
    if ((char)*(int *)((int)this + 4*(0x43)) == '\0') {
      cocos2d::CCDirector::sharedDirector();
      uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
      uVar5 = (undefined4)(func_0079e4dc(g_006430a0,uVar5));
      piVar9 = (int *)cocos2d::CCLabelTTF::create((char const*)(unsigned char *)((char *)&g_00642d54 + (intptr_t)(g_006430a8)), (char const*)(unsigned char *)((char *)&g_00642d52 + (intptr_t)(g_006430a4)), uVar5);
      *(int *)((int)this + 4*(0x49)) = (int)piVar9;
      pcVar8 = *(code **)(*piVar9 + 0x7c);
      0 /* ctorZero */;
      (*pcVar8)(piVar9,auStack_20);
      (**(code **)(*(int *)*(int *)((int)this + 4*(0x49)) + 0x1b4))
                ((int *)*(int *)((int)this + 4*(0x49)),(unsigned char *)((char *)&g_00642d7e + (intptr_t)(g_006430ac)));
      piVar9 = (int *)*(int *)((int)this + 4*(0x49));
      pcVar8 = *(code **)(*piVar9 + 0x4c);
      0 /* ctorZero */;
      uVar5 = (undefined4)(auStack_30[0]);
      cocos2d::CCDirector::sharedDirector();
      uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
      uVar3 = (undefined4)(func_0079e4dc(uVar5,uVar3));
      0 /* ctorZero */;
      uVar5 = (undefined4)(uStack_24);
      cocos2d::CCDirector::sharedDirector();
      uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
      uVar5 = (undefined4)(func_0079e4dc(uVar5,uVar4));
      0 /* ctorZero */;
      (*pcVar8)(piVar9,auStack_20);
      uVar5 = (undefined4)(2);
      iVar2 = (undefined4)(intptr_t)(*(int *)((int)this + 4*(0x49)));
      pcVar8 = *(code **)(*(int *)this + 0xcc);
    }
    else {
      cocos2d::CCDirector::sharedDirector();
      uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
      uVar5 = (undefined4)(func_0079e4dc(g_00642c0c,uVar5));
      puVar10 = (unsigned char *)((char *)&g_0064298a + (intptr_t)(g_00642c10));
      piVar9 = (int *)cocos2d::CCLabelTTF::create((char const*)(unsigned char *)((char *)&g_0064298e + (intptr_t)(g_00642c14)), (char const*)puVar10, uVar5);
      *(int *)((int)this + 4*(0x47)) = (int)piVar9;
      pcVar8 = *(code **)(*piVar9 + 0x7c);
      0 /* ctorZero */;
      (*pcVar8)(piVar9,auStack_20);
      piVar9 = (int *)*(int *)((int)this + 4*(0x47));
      pcVar8 = *(code **)(*piVar9 + 0x4c);
      0 /* ctorZero */;
      uVar5 = (undefined4)(auStack_30[0]);
      cocos2d::CCDirector::sharedDirector();
      uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
      uVar3 = (undefined4)(func_0079e4dc(uVar5,uVar3));
      0 /* ctorZero */;
      uVar5 = (undefined4)(uStack_24);
      cocos2d::CCDirector::sharedDirector();
      uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
      uVar5 = (undefined4)(func_0079e4dc(uVar5,uVar4));
      0 /* ctorZero */;
      (*pcVar8)(piVar9,auStack_20);
      (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x47)),2);
      cocos2d::CCDirector::sharedDirector();
      uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
      uVar5 = (undefined4)(func_0079e4dc(g_00642c0c,uVar5));
      piVar9 = (int *)cocos2d::CCLabelTTF::create((char const*)(unsigned char *)((char *)&g_00642a30 + (intptr_t)(g_00642c1c)), (char const*)puVar10, uVar5);
      *(int *)((int)this + 4*(0x48)) = (int)piVar9;
      puVar7 = (unsigned char *)((char *)&g_00642a40 + (intptr_t)(g_00642c20));
      (**(code **)(*(int *)(piVar9) + (0x1b4)))(piVar9,puVar7);
      piVar9 = (int *)*(int *)((int)this + 4*(0x48));
      pcVar8 = *(code **)(*piVar9 + 0x7c);
      0 /* ctorZero */;
      (*pcVar8)(piVar9,auStack_20);
      piVar9 = (int *)*(int *)((int)this + 4*(0x48));
      pcVar8 = *(code **)(*piVar9 + 0x4c);
      puVar6 = (undefined4 *)(**(code **)(*(int *)*(int *)((int)this + 4*(0x47)) + 0x8c))();
      uVar5 = (undefined4)(func_0079e57c(*puVar6,g_00642c24));
      uVar5 = (undefined4)(func_0079e59c(uVar5,g_00642c28));
      0 /* ctorZero */;
      uVar5 = (undefined4)(auStack_30[0]);
      cocos2d::CCDirector::sharedDirector();
      uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
      uVar3 = (undefined4)(func_0079e4dc(uVar5,uVar3));
      puVar6 = (undefined4 *)(**(code **)(*(int *)*(int *)((int)this + 4*(0x47)) + 0x8c))();
      uVar5 = (undefined4)(func_0079e57c(*puVar6,g_00642c24));
      uVar5 = (undefined4)(func_0079e59c(uVar5,g_00642c28));
      0 /* ctorZero */;
      uVar5 = (undefined4)(uStack_24);
      cocos2d::CCDirector::sharedDirector();
      uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
      uVar5 = (undefined4)(func_0079e4dc(uVar5,uVar4));
      0 /* ctorZero */;
      (*pcVar8)(piVar9,auStack_20);
      (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x48)),3);
      cocos2d::CCDirector::sharedDirector();
      uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
      uVar5 = (undefined4)(func_0079e4dc(g_00642c0c,uVar5));
      piVar9 = (int *)cocos2d::CCLabelTTF::create((char const*)(unsigned char *)((char *)&g_00642b10 + (intptr_t)(g_00642c2c)), (char const*)puVar10, uVar5);
      *(int *)((int)this + 4*(0x49)) = (int)piVar9;
      pcVar8 = *(code **)(*piVar9 + 0x7c);
      0 /* ctorZero */;
      (*pcVar8)(piVar9,auStack_20);
      (**(code **)(*(int *)*(int *)((int)this + 4*(0x49)) + 0x1b4))((int *)*(int *)((int)this + 4*(0x49)),puVar7);
      piVar9 = (int *)*(int *)((int)this + 4*(0x49));
      pcVar8 = *(code **)(*piVar9 + 0x4c);
      0 /* ctorZero */;
      uVar5 = (undefined4)(auStack_30[0]);
      cocos2d::CCDirector::sharedDirector();
      uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
      uVar3 = (undefined4)(func_0079e4dc(uVar5,uVar3));
      0 /* ctorZero */;
      uVar5 = (undefined4)(uStack_24);
      cocos2d::CCDirector::sharedDirector();
      uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
      uVar5 = (undefined4)(func_0079e4dc(uVar5,uVar4));
      0 /* ctorZero */;
      (*pcVar8)(piVar9,auStack_20);
      (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x49)),3);
      cocos2d::CCDirector::sharedDirector();
      uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
      uVar5 = (undefined4)(func_0079e4dc(g_00642c0c,uVar5));
      piVar9 = (int *)cocos2d::CCLabelTTF::create((char const*)(unsigned char *)((char *)&g_00642bba + (intptr_t)(g_00642c34)), (char const*)puVar10, uVar5);
      *(int *)((int)this + 4*(0x4b)) = (int)piVar9;
      pcVar8 = *(code **)(*piVar9 + 0x7c);
      0 /* ctorZero */;
      (*pcVar8)(piVar9,auStack_20);
      piVar9 = (int *)*(int *)((int)this + 4*(0x4b));
      pcVar8 = *(code **)(*piVar9 + 0x4c);
      0 /* ctorZero */;
      uVar5 = (undefined4)(auStack_30[0]);
      cocos2d::CCDirector::sharedDirector();
      uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
      uVar3 = (undefined4)(func_0079e4dc(uVar5,uVar3));
      0 /* ctorZero */;
      uVar5 = (undefined4)(uStack_24);
      cocos2d::CCDirector::sharedDirector();
      uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
      uVar5 = (undefined4)(func_0079e4dc(uVar5,uVar4));
      0 /* ctorZero */;
      (*pcVar8)(piVar9,auStack_20);
      (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x4b)),4);
      cocos2d::CCDirector::sharedDirector();
      uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
      uVar5 = (undefined4)(func_0079e4dc(g_00642d2c,uVar5));
      piVar9 = (int *)cocos2d::CCLabelTTF::create((char const*)(unsigned char *)((char *)&g_00642c94 + (intptr_t)(g_00642d30)), (char const*)puVar10, uVar5);
      *(int *)((int)this + 4*(0x4c)) = (int)piVar9;
      pcVar8 = *(code **)(*piVar9 + 0x7c);
      0 /* ctorZero */;
      (*pcVar8)(piVar9,auStack_20);
      piVar9 = (int *)*(int *)((int)this + 4*(0x4c));
      pcVar8 = *(code **)(*piVar9 + 0x4c);
      0 /* ctorZero */;
      uVar5 = (undefined4)(auStack_30[0]);
      cocos2d::CCDirector::sharedDirector();
      uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
      uVar3 = (undefined4)(func_0079e4dc(uVar5,uVar3));
      0 /* ctorZero */;
      uVar5 = (undefined4)(uStack_24);
      cocos2d::CCDirector::sharedDirector();
      uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
      uVar5 = (undefined4)(func_0079e4dc(uVar5,uVar4));
      0 /* ctorZero */;
      (*pcVar8)(piVar9,auStack_20);
      (**(code **)(*(int *)*(int *)((int)this + 4*(0x4c)) + 0x1b4))((int *)*(int *)((int)this + 4*(0x4c)),puVar7);
      iVar2 = (undefined4)(intptr_t)(*(int *)((int)this + 4*(0x4c)));
      pcVar8 = *(code **)(*(int *)this + 0xcc);
      uVar5 = (undefined4)(5);
    }
    (*pcVar8)(((int)this),iVar2,uVar5);
    func_0079e45c(auStack_20,(unsigned char *)((char *)&g_00642df0 + (intptr_t)(g_006430b4)),auStack_28);
    iVar2 = (undefined4)(intptr_t)(0 /* ctorZero */);
    *(int *)((int)this + 4*(0x4a)) = iVar2;
    func_0079e2bc(auStack_20);
    piVar9 = (int *)*(int *)((int)this + 4*(0x4a));
    pcVar8 = *(code **)(*piVar9 + 0x7c);
    0 /* ctorZero */;
    (*pcVar8)(piVar9,auStack_20);
    piVar9 = (int *)*(int *)((int)this + 4*(0x4a));
    pcVar8 = *(code **)(*piVar9 + 0x4c);
    uVar5 = (undefined4)((**(code **)(*(int *)*(int *)((int)this + 4*(0x49)) + 0x50))());
    0 /* ctorZero */;
    ((cocos2d::CCPoint *)(uVar5))->operator+(*(const CCPoint *)(void *)auStack_28);
    (*pcVar8)(piVar9,auStack_20);
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x4a)),3);
    piVar9 = (int *)::operator new(0xe8);
    ::new ((void *)piVar9) BLRankRewardItemNumItem();   /* ALLOC+CTOR_FIX(R120): 类名取自原版 dump（函数+尺寸对齐）*/
    iVar2 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar9) + (0x18)))(piVar9));
    if (iVar2 == 0) {
      (**(code **)(*(int *)(piVar9) + (8)))(piVar9);
      piVar9 = (int *)0x0;
    }
    else {
      ((cocos2d::CCObject *)(piVar9))->autorelease();
    }
    *(int *)((int)this + 4*(0x46)) = (int)piVar9;
    (**(code **)(*(int *)(piVar9) + (0x198)))(piVar9,g_006430b8);
    piVar9 = (int *)*(int *)((int)this + 4*(0x46));
    pcVar8 = *(code **)(*piVar9 + 0x4c);
    0 /* ctorZero */;
    uVar5 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(func_0079e4dc(uVar5,uVar3));
    0 /* ctorZero */;
    uVar5 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(uVar5,uVar4));
    0 /* ctorZero */;
    (*pcVar8)(piVar9,auStack_20);
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x46)),5);
    piVar9 = (int *)cocos2d::extension::CCControlButton::create();
    *(int *)((int)this + 4*(0x4d)) = (int)piVar9;
    (**(code **)(*(int *)(piVar9) + (0x294)))(piVar9,0);
    func_0079e45c(auStack_20,(unsigned char *)((char *)&g_00642f1a + (intptr_t)(g_006430c0)),auStack_28);
    uVar5 = (undefined4)(0 /* ctorZero */);
    func_0079e2bc(auStack_20);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x4d)) + 0x30c))((int *)*(int *)((int)this + 4*(0x4d)),uVar5,1);
    piVar9 = (int *)*(int *)((int)this + 4*(0x4d));
    pcVar8 = *(code **)(*piVar9 + 0x28c);
    0 /* ctorZero */;
    (*pcVar8)(piVar9,auStack_20);
    piVar9 = (int *)*(int *)((int)this + 4*(0x4d));
    pcVar8 = *(code **)(*piVar9 + 0x4c);
    0 /* ctorZero */;
    uVar5 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(func_0079e4dc(uVar5,uVar3));
    0 /* ctorZero */;
    uVar5 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(uVar5,uVar4));
    0 /* ctorZero */;
    (*pcVar8)(piVar9,auStack_20);
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x4d)),6);
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(g_006430a0,uVar5));
    piVar9 = (int *)cocos2d::CCLabelTTF::create((char const*)(unsigned char *)((char *)&g_00642fe0 + (intptr_t)(g_006430d0)), (char const*)(unsigned char *)((char *)&g_00642fde + (intptr_t)(g_006430cc)), uVar5);
    *(int *)((int)this + 4*(0x4e)) = (int)piVar9;
    pcVar8 = *(code **)(*piVar9 + 0x4c);
    uVar5 = (undefined4)((**(code **)(*(int *)*(int *)((int)this + 4*(0x4d)) + 0x50))());
    (*pcVar8)(piVar9,uVar5);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x4e)) + 0x1b4))((int *)*(int *)((int)this + 4*(0x4e)),(unsigned char *)((char *)&g_00643006 + (intptr_t)(g_006430d4)))
    ;
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x4e)),7);
    pcVar8 = *(code **)(*(int *)this + 0x88);
    0 /* ctorZero */;
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(auStack_30[0],uVar5));
    0 /* ctorZero */;
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(func_0079e4dc(uStack_24,uVar3));
    0 /* ctorZero */;
    (*pcVar8)(((int)this),auStack_20);
    ((BLRankRewardItemPresenter *)(*(int *)((int)this + 4*(0x42))))->initWithView((BLRankRewardItemView*)((int)this));
  }
  return iVar1;
}
