#include "ChallengeStataView.h"
#include "CCGeometry.h"
#include "CCLayer.h"
#include "CCObject.h"
#include "CCLabelTTF.h"
#include "CCDirector.h"
#include "BLLeakUtils.h"
#include "ChallengeStataPresenter.h"
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
extern "C" long long func_0079e4dc(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0050ff10;
extern "C" unsigned long UNK_0050ff54;
extern "C" unsigned long UNK_0050ff98;
extern "C" unsigned long UNK_0050ffc0;
extern "C" unsigned long UNK_0050ffd8;
extern "C" unsigned long UNK_00510006;
extern "C" unsigned long UNK_005100a8;
extern "C" unsigned long UNK_00510162;
extern "C" unsigned long UNK_005102cc;
extern "C" unsigned long UNK_005102ce;
extern "C" unsigned long UNK_005102e0;
extern "C" unsigned long UNK_0051030e;
extern "C" unsigned long UNK_0051038c;
extern "C" unsigned long UNK_0051040c;
extern "C" unsigned long UNK_0051050c;
extern "C" unsigned long UNK_005105a2;
extern "C" unsigned long UNK_00510636;
extern "C" unsigned long _UNK_0050ff84;
extern "C" unsigned long _UNK_0050ff88;
extern "C" unsigned long _UNK_0050ff9c;
extern "C" unsigned long _UNK_0050ffc4;
extern "C" unsigned long _UNK_00510030;
extern "C" unsigned long _UNK_00510034;
extern "C" unsigned long _UNK_00510488;
extern "C" unsigned long _UNK_0051048c;
extern "C" unsigned long _UNK_00510490;
extern "C" unsigned long _UNK_00510494;
extern "C" unsigned long _UNK_00510498;
extern "C" unsigned long _UNK_0051049c;
extern "C" unsigned long _UNK_005104a0;
extern "C" unsigned long _UNK_005104a4;
extern "C" unsigned long _UNK_005104a8;
extern "C" unsigned long _UNK_005104ac;
extern "C" unsigned long _UNK_005104b0;
extern "C" unsigned long _UNK_005104b4;
extern "C" unsigned long _UNK_005104b8;
extern "C" unsigned long _UNK_005106f4;
extern "C" unsigned long _UNK_005106f8;
extern "C" unsigned long _UNK_005106fc;
extern "C" unsigned long _UNK_00510700;
extern "C" unsigned long g_0050ff10;
extern "C" unsigned long g_0050ff54;
extern "C" unsigned long g_0050ff84;
extern "C" unsigned long g_0050ff88;
extern "C" unsigned long g_0050ff98;
extern "C" unsigned long g_0050ff9c;
extern "C" unsigned long g_0050ffc0;
extern "C" unsigned long g_0050ffc4;
extern "C" unsigned long g_0050ffd8;
extern "C" unsigned long g_00510006;
extern "C" unsigned long g_00510030;
extern "C" unsigned long g_00510034;
extern "C" unsigned long g_005100a8;
extern "C" unsigned long g_00510162;
extern "C" unsigned long g_005102cc;
extern "C" unsigned long g_005102ce;
extern "C" unsigned long g_005102e0;
extern "C" unsigned long g_0051030e;
extern "C" unsigned long g_0051038c;
extern "C" unsigned long g_0051040c;
extern "C" unsigned long g_00510488;
extern "C" unsigned long g_0051048c;
extern "C" unsigned long g_00510490;
extern "C" unsigned long g_00510494;
extern "C" unsigned long g_00510498;
extern "C" unsigned long g_0051049c;
extern "C" unsigned long g_005104a0;
extern "C" unsigned long g_005104a4;
extern "C" unsigned long g_005104a8;
extern "C" unsigned long g_005104ac;
extern "C" unsigned long g_005104b0;
extern "C" unsigned long g_005104b4;
extern "C" unsigned long g_005104b8;
extern "C" unsigned long g_0051050c;
extern "C" unsigned long g_005105a2;
extern "C" unsigned long g_00510636;
extern "C" unsigned long g_005106f4;
extern "C" unsigned long g_005106f8;
extern "C" unsigned long g_005106fc;
extern "C" unsigned long g_00510700;
ChallengeStataView::~ChallengeStataView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0050ff10 + g_0050ff84);
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
  func_0079e45c(&uStack_14,&g_0050ff54 + g_0050ff88,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

ChallengeStataView::ChallengeStataView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_0050ffd8 + g_00510030);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00510006 + g_00510034,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * ChallengeStataView::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x11c)));
  0 /* ctorZero */;
  iVar2 = (**(code **)(*piVar1 + 0x18))(piVar1);
  if (iVar2 == 0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    piVar1 = (int *)0x0;
  }
  else {
    ((cocos2d::CCObject *)piVar1)->autorelease();
  }
  return (int *)(piVar1);
}


void ChallengeStataView::onEnter()
{
  ((ChallengeStataPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void ChallengeStataView::onExit()
{
  ((ChallengeStataPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
bool ChallengeStataView::init()
{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 uVar8;
  int *piVar9;
  int *piVar10;
  undefined4 *puVar11;
  code *pcVar12;
  undefined1 auStack_40 [8];
  undefined4 auStack_38 [2];
  undefined4 auStack_30 [2];
  undefined1 auStack_28 [4];
  undefined4 uStack_24;
  undefined1 auStack_20 [12];
  
  iVar1 = (undefined4)(intptr_t)(((cocos2d::CCLayer *)this)->init());
  if (iVar1 != 0) {
    iVar2 = (undefined4)(intptr_t)(((ChallengeStataPresenter *)this)->create((ChallengeStataView*)((int)this)));
    *(int *)((int)this + 4*(0x42)) = iVar2;
    if (iVar2 != 0) {
      ((cocos2d::CCObject *)this)->retain();
    }
    func_0079e45c(auStack_20,(unsigned char *)((char *)&g_005100a8 + (intptr_t)(g_00510488)),auStack_28);
    piVar3 = (int *)0 /* ctorZero */;
    func_0079e2bc(auStack_20);
    pcVar12 = *(code **)(*piVar3 + 0x4c);
    0 /* ctorZero */;
    uVar6 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar4 = (undefined4)(func_0079e4dc(uVar6,uVar4));
    0 /* ctorZero */;
    uVar6 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar6 = (undefined4)(func_0079e4dc(uVar6,uVar5));
    0 /* ctorZero */;
    (*pcVar12)(piVar3,auStack_20);
    pcVar12 = *(code **)(*piVar3 + 0x1d4);
    (**(code **)(*(int *)(piVar3) + (0x1cc)))(auStack_30,piVar3);
    uVar6 = (undefined4)(auStack_30[0]);
    (**(code **)(*(int *)(piVar3) + (0x1cc)))(auStack_28,piVar3);
    0 /* ctorZero */;
    (*pcVar12)(piVar3,auStack_20);
    (**(code **)(*(int *)this + 200))(((int)this),piVar3);
    func_0079e45c(auStack_20,(unsigned char *)((char *)&g_00510162 + (intptr_t)(g_0051048c)),auStack_28);
    piVar7 = (int *)0 /* ctorZero */;
    func_0079e2bc(auStack_20);
    pcVar12 = *(code **)(*piVar7 + 0x4c);
    uVar6 = (undefined4)((**(code **)(*(int *)(piVar3) + (0x50)))(piVar3));
    iVar2 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar3) + (0x8c)))(piVar3));
    uVar4 = (undefined4)(func_0079e4fc(*(undefined4 *)(iVar2 + 4),0x3f000000));
    iVar2 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar7) + (0x8c)))(piVar7));
    uVar5 = (undefined4)(func_0079e4fc(*(undefined4 *)(iVar2 + 4),0x3f000000));
    uVar4 = (undefined4)(func_0079e57c(uVar4,uVar5));
    0 /* ctorZero */;
    ((cocos2d::CCPoint *)(uVar6))->operator+(*(const CCPoint *)(void *)auStack_40);
    cocos2d::CCDirector::sharedDirector();
    uVar6 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar4 = (undefined4)(func_0079e4dc(auStack_38[0],uVar6));
    uVar6 = (undefined4)((**(code **)(*(int *)(piVar3) + (0x50)))(piVar3));
    iVar2 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar3) + (0x8c)))(piVar3));
    uVar5 = (undefined4)(func_0079e4fc(*(undefined4 *)(iVar2 + 4),0x3f000000));
    iVar2 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar7) + (0x8c)))(piVar7));
    uVar8 = (undefined4)(func_0079e4fc(*(undefined4 *)(iVar2 + 4),0x3f000000));
    uVar5 = (undefined4)(func_0079e57c(uVar5,uVar8));
    0 /* ctorZero */;
    ((cocos2d::CCPoint *)(uVar6))->operator+(*(const CCPoint *)(void *)auStack_30);
    uVar6 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar6 = (undefined4)(func_0079e4dc(uVar6,uVar5));
    0 /* ctorZero */;
    (*pcVar12)(piVar7,auStack_20);
    pcVar12 = *(code **)(*piVar7 + 0x1d4);
    (**(code **)(*(int *)(piVar7) + (0x1cc)))(auStack_30,piVar7);
    uVar6 = (undefined4)(auStack_30[0]);
    (**(code **)(*(int *)(piVar7) + (0x1cc)))(auStack_28,piVar7);
    0 /* ctorZero */;
    (*pcVar12)(piVar7,auStack_20);
    (**(code **)(*(int *)this + 200))(((int)this),piVar7);
    cocos2d::CCDirector::sharedDirector();
    uVar6 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar6 = (undefined4)(func_0079e4dc(g_00510490,uVar6));
    piVar9 = (int *)cocos2d::CCLabelTTF::create((char const*)(unsigned char *)((char *)&g_005102ce + (intptr_t)(g_00510498)), (char const*)(unsigned char *)((char *)&g_005102cc + (intptr_t)(g_00510494)), uVar6);
    (**(code **)(*(int *)(piVar9) + (0x1b4)))(piVar9,(unsigned char *)((char *)&g_005102e0 + (intptr_t)(g_0051049c)));
    pcVar12 = *(code **)(*piVar9 + 0x4c);
    uVar6 = (undefined4)((**(code **)(*(int *)(piVar7) + (0x50)))(piVar7));
    (*pcVar12)(piVar9,uVar6);
    (**(code **)(*(int *)this + 200))(((int)this),piVar9);
    func_0079e45c(auStack_20,(unsigned char *)((char *)&g_0051030e + (intptr_t)(g_005104a0)),auStack_28);
    piVar7 = (int *)0 /* ctorZero */;
    func_0079e2bc(auStack_20);
    pcVar12 = *(code **)(*piVar7 + 0x4c);
    0 /* ctorZero */;
    uVar6 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar4 = (undefined4)(func_0079e4dc(uVar6,uVar4));
    0 /* ctorZero */;
    uVar6 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar6 = (undefined4)(func_0079e4dc(uVar6,uVar5));
    0 /* ctorZero */;
    (*pcVar12)(piVar7,auStack_20);
    (**(code **)(*(int *)this + 200))(((int)this),piVar7);
    func_0079e45c(auStack_20,(unsigned char *)((char *)&g_0051038c + (intptr_t)(g_005104ac)),auStack_28);
    piVar9 = (int *)0 /* ctorZero */;
    func_0079e2bc(auStack_20);
    pcVar12 = *(code **)(*piVar9 + 0x4c);
    0 /* ctorZero */;
    uVar6 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar4 = (undefined4)(func_0079e4dc(uVar6,uVar4));
    0 /* ctorZero */;
    uVar6 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar6 = (undefined4)(func_0079e4dc(uVar6,uVar5));
    0 /* ctorZero */;
    (*pcVar12)(piVar9,auStack_20);
    (**(code **)(*(int *)this + 200))(((int)this),piVar9);
    func_0079e45c(auStack_20,(unsigned char *)((char *)&g_0051040c + (intptr_t)(g_005104b4)),auStack_28);
    piVar10 = (int *)0 /* ctorZero */;
    func_0079e2bc(auStack_20);
    pcVar12 = *(code **)(*piVar10 + 0x4c);
    0 /* ctorZero */;
    uVar6 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar4 = (undefined4)(func_0079e4dc(uVar6,uVar4));
    0 /* ctorZero */;
    uVar6 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar6 = (undefined4)(func_0079e4dc(uVar6,uVar5));
    0 /* ctorZero */;
    (*pcVar12)(piVar10,auStack_20);
    pcVar12 = *(code **)(*piVar10 + 0x1d4);
    (**(code **)(*(int *)(piVar3) + (0x1cc)))(auStack_30,piVar3);
    uVar6 = (undefined4)(func_0079e57c(auStack_30[0],g_005106f4));
    (**(code **)(*(int *)(piVar10) + (0x1cc)))(auStack_28,piVar10);
    0 /* ctorZero */;
    (*pcVar12)(piVar10,auStack_20);
    (**(code **)(*(int *)this + 200))(((int)this),piVar10);
    func_0079e45c(auStack_20,(unsigned char *)((char *)&g_0051050c + (intptr_t)(g_005106f8)),auStack_28);
    iVar2 = (undefined4)(intptr_t)(0 /* ctorZero */);
    *(int *)((int)this + 4*(0x45)) = iVar2;
    func_0079e2bc(auStack_20);
    pcVar12 = *(code **)(*(int *)*(int *)((int)this + 4*(0x45)) + 0x4c);
    uVar6 = (undefined4)((**(code **)(*(int *)(piVar7) + (0x50)))(piVar7));
    puVar11 = (undefined4 *)(**(code **)(*(int *)(piVar7) + (0x8c)))(piVar7);
    uVar4 = (undefined4)(func_0079e4fc(*puVar11,0x3f000000));
    piVar3 = (int *)*(int *)((int)this + 4*(0x45));
    puVar11 = (undefined4 *)(**(code **)(*(int *)(piVar3) + (0x8c)))(piVar3);
    uVar5 = (undefined4)(func_0079e4fc(*puVar11,0x3f000000));
    uVar4 = (undefined4)(func_0079e59c(uVar4,uVar5));
    0 /* ctorZero */;
    ((cocos2d::CCPoint *)(uVar6))->operator+(*(const CCPoint *)(void *)auStack_28);
    (*pcVar12)(piVar3,auStack_20);
    (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x45)));
    func_0079e45c(auStack_20,(unsigned char *)((char *)&g_005105a2 + (intptr_t)(g_005106fc)),auStack_28);
    iVar2 = (undefined4)(intptr_t)(0 /* ctorZero */);
    *(int *)((int)this + 4*(0x43)) = iVar2;
    func_0079e2bc(auStack_20);
    pcVar12 = *(code **)(*(int *)*(int *)((int)this + 4*(0x43)) + 0x4c);
    uVar6 = (undefined4)((**(code **)(*(int *)(piVar9) + (0x50)))(piVar9));
    puVar11 = (undefined4 *)(**(code **)(*(int *)(piVar9) + (0x8c)))(piVar9);
    uVar4 = (undefined4)(func_0079e4fc(*puVar11,0x3f000000));
    piVar3 = (int *)*(int *)((int)this + 4*(0x43));
    puVar11 = (undefined4 *)(**(code **)(*(int *)(piVar3) + (0x8c)))(piVar3);
    uVar5 = (undefined4)(func_0079e4fc(*puVar11,0x3f000000));
    uVar4 = (undefined4)(func_0079e59c(uVar4,uVar5));
    0 /* ctorZero */;
    ((cocos2d::CCPoint *)(uVar6))->operator+(*(const CCPoint *)(void *)auStack_28);
    (*pcVar12)(piVar3,auStack_20);
    (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x43)));
    func_0079e45c(auStack_20,(unsigned char *)((char *)&g_00510636 + (intptr_t)(g_00510700)),auStack_28);
    iVar2 = (undefined4)(intptr_t)(0 /* ctorZero */);
    *(int *)((int)this + 4*(0x44)) = iVar2;
    func_0079e2bc(auStack_20);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x44)) + 0x90))((int *)*(int *)((int)this + 4*(0x44)),0);
    piVar3 = (int *)*(int *)((int)this + 4*(0x44));
    pcVar12 = *(code **)(*piVar3 + 0x4c);
    uVar6 = (undefined4)((**(code **)(*(int *)*(int *)((int)this + 4*(0x43)) + 0x50))());
    puVar11 = (undefined4 *)(**(code **)(*(int *)*(int *)((int)this + 4*(0x43)) + 0x8c))();
    uVar4 = (undefined4)(func_0079e4fc(*puVar11,0x3f000000));
    puVar11 = (undefined4 *)(**(code **)(*(int *)*(int *)((int)this + 4*(0x43)) + 0x8c))();
    uVar5 = (undefined4)(func_0079e4fc(*puVar11,0x3f000000));
    uVar4 = (undefined4)(func_0079e59c(uVar4,uVar5));
    0 /* ctorZero */;
    ((cocos2d::CCPoint *)(uVar6))->operator+(*(const CCPoint *)(void *)auStack_28);
    (*pcVar12)(piVar3,auStack_20);
    (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x44)));
    ((ChallengeStataPresenter *)(*(int *)((int)this + 4*(0x42))))->initWithView((ChallengeStataView*)((int)this));
  }
  return iVar1;
}
