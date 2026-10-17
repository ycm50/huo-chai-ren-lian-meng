#include "BLSuitUpGraceListView.h"
#include "CCLayer.h"
#include "CCObject.h"
#include "CCDirector.h"
#include "BLLeakUtils.h"
#include "BLSuitUpGraceItemView.h"
#include "BLSuitUpGraceListPresenter.h"
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
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long func_0079e784(...);
extern "C" unsigned long UNK_0069bfd6;
extern "C" unsigned long UNK_0069c014;
extern "C" unsigned long UNK_0069c060;
extern "C" unsigned long UNK_0069c0ac;
extern "C" unsigned long UNK_0069c108;
extern "C" unsigned long UNK_0069c130;
extern "C" unsigned long UNK_0069c73a;
extern "C" unsigned long UNK_0069c8a6;
extern "C" unsigned long UNK_0069c8c0;
extern "C" unsigned long _UNK_0069c050;
extern "C" unsigned long _UNK_0069c054;
extern "C" unsigned long _UNK_0069c0f4;
extern "C" unsigned long _UNK_0069c0f8;
extern "C" unsigned long _UNK_0069c10c;
extern "C" unsigned long _UNK_0069c134;
extern "C" unsigned long _UNK_0069c980;
extern "C" unsigned long _UNK_0069c984;
extern "C" unsigned long _UNK_0069c988;
extern "C" unsigned long _UNK_0069c98c;
extern "C" unsigned long _UNK_0069c990;
extern "C" unsigned long _UNK_0069c994;
extern "C" unsigned long _UNK_0069c998;
extern "C" unsigned long _UNK_0069c99c;
extern "C" unsigned long _UNK_0069c9a0;
extern "C" unsigned long _UNK_0069c9a4;
extern "C" unsigned long extraout_r3;
extern "C" unsigned long g_0069bfd6;
extern "C" unsigned long g_0069c014;
extern "C" unsigned long g_0069c050;
extern "C" unsigned long g_0069c054;
extern "C" unsigned long g_0069c060;
extern "C" unsigned long g_0069c0ac;
extern "C" unsigned long g_0069c0f4;
extern "C" unsigned long g_0069c0f8;
extern "C" unsigned long g_0069c108;
extern "C" unsigned long g_0069c10c;
extern "C" unsigned long g_0069c130;
extern "C" unsigned long g_0069c134;
extern "C" unsigned long g_0069c73a;
extern "C" unsigned long g_0069c8a6;
extern "C" unsigned long g_0069c8c0;
extern "C" unsigned long g_0069c980;
extern "C" unsigned long g_0069c984;
extern "C" unsigned long g_0069c988;
extern "C" unsigned long g_0069c98c;
extern "C" unsigned long g_0069c990;
extern "C" unsigned long g_0069c994;
extern "C" unsigned long g_0069c998;
extern "C" unsigned long g_0069c99c;
extern "C" unsigned long g_0069c9a0;
extern "C" unsigned long g_0069c9a4;
BLSuitUpGraceListView::BLSuitUpGraceListView()
{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [8];
  
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_0069bfd6 + g_0069c050);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  *(int *)((int)this + 4*(0x43)) = 0;
  *(int *)((int)this + 4*(0x44)) = 0;
  *(int *)((int)this + 4*(0x45)) = 0;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(auStack_1c,&g_0069c014 + g_0069c054,auStack_20);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)auStack_1c);
  func_0079e2bc(auStack_1c);
  *(int *)((int)this + 4*(0x44)) = *(int *)((int)this + 4*(0x43));
  return;
}

BLSuitUpGraceListView::~BLSuitUpGraceListView()
{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [8];
  
  iVar2 = (undefined4)(intptr_t)(*(int *)((unsigned char *)((char *)&g_0069c060 + (intptr_t)(g_0069c0f4))));
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  if (*(int *)((int)this + 4*(0x42)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x42)) = 0;
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(auStack_1c,(unsigned char *)((char *)&g_0069c0ac + (intptr_t)(g_0069c0f8)),auStack_20);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)auStack_1c);
  func_0079e2bc(auStack_1c);
  *(int *)((int)this + 4*(0x44)) = *(int *)((int)this + 4*(0x43));
  ((std::vector<BLSuitUpGraceItemView*, std::allocator<BLSuitUpGraceItemView*>> *)((int)this) + 0x43)->~vector();
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLSuitUpGraceListView::initView()
{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  code *pcVar5;
  undefined4 *puVar6;
  undefined4 *extraout_r3;
  int *piVar7;
  int iStack_4c;
  undefined4 uStack_48;
  int iStack_38;
  int iStack_34;
  undefined4 auStack_30 [2];
  int *piStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  0 /* ctorZero */;
  piVar7 = piStack_28;
  cocos2d::CCDirector::sharedDirector();
  uVar1 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar1 = (undefined4)(func_0079e4dc(piVar7,uVar1));
  0 /* ctorZero */;
  cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar2 = (undefined4)(func_0079e4dc(uStack_1c,uVar2));
  0 /* ctorZero */;
  func_0079e45c(&uStack_20,(unsigned char *)((char *)&g_0069c73a + (intptr_t)(g_0069c988)),&piStack_28);
  iVar3 = (undefined4)(intptr_t)(0 /* ctorZero */);
  *(int *)((int)this + 4*(0x46)) = iVar3;
  func_0079e2bc(&uStack_20);
  piVar7 = (int *)*(int *)((int)this + 4*(0x46));
  pcVar5 = *(code **)(*piVar7 + 0x1d4);
  (**(code **)(*(int *)(piVar7) + (0x1cc)))(&uStack_20,piVar7);
  (*pcVar5)(piVar7,&uStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x46)));
  cocos2d::CCDirector::sharedDirector();
  uVar1 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar1 = (undefined4)(func_0079e4dc(g_0069c98c,uVar1));
  iVar3 = (undefined4)(intptr_t)(iStack_38);
  0 /* ctorZero */;
  uVar2 = (undefined4)(func_0079e4fc(uStack_20,g_0069c994));
  uVar2 = (undefined4)(func_0079e57c(iVar3,uVar2));
  uVar4 = (undefined4)(func_0079e4fc(uVar1,g_0069c998));
  uVar2 = (undefined4)(func_0079e57c(uVar2,uVar4));
  uVar2 = (undefined4)(func_0079e4fc(uVar2,0x3f000000));
  uVar4 = (undefined4)(func_0079e4fc(iStack_38 + -0x80000000,0x3f000000));
  uVar2 = (undefined4)(func_0079e59c(uVar4,uVar2));
  0 /* ctorZero */;
  uVar4 = (undefined4)(func_0079e4fc(uStack_20,0x3f000000));
  uStack_48 = (undefined4)(func_0079e59c(uVar2,uVar4));
  iStack_4c = 0;
  do {
    piVar7 = (int *)((BLSuitUpGraceItemView *)this)->create();
    pcVar5 = *(code **)(*piVar7 + 0x4c);
    piStack_28 = piVar7;
    0 /* ctorZero */;
    (*pcVar5)(piVar7,&uStack_20);
    (**(code **)(*(int *)piStack_28[0x42] + 0x24))((int *)piStack_28[0x42],0);
    (**(code **)(*(int *)piStack_28[0x42] + 0x2c))((int *)piStack_28[0x42],iStack_4c);
    0 /* ctorZero */;
    uVar2 = (undefined4)(func_0079e59c(uVar1,uStack_20));
    uStack_48 = (undefined4)(func_0079e59c(uStack_48,uVar2));
    (**(code **)(*(int *)this + 200))(((int)this),piStack_28);
    ((std::vector<BLSuitUpGraceItemView*, std::allocator<BLSuitUpGraceItemView*>> *)(((int)this) + 0x43))->push_back(*(BLSuitUpGraceItemView* const*)&piStack_28);
    iStack_4c = (undefined4)(intptr_t)(iStack_4c + 1);
  } while (iStack_4c != 6);
  piVar7 = (int *)*(int *)((int)this + 4*(0x46));
  pcVar5 = *(code **)(*piVar7 + 0x4c);
  puVar6 = (undefined4 *)*(int *)((int)this + 4*(0x43));
  if (*(int *)((int)this + 4*(0x44)) - (int)puVar6 >> 2 == 0) {
    func_0079e784((unsigned char *)((char *)&g_0069c8a6 + (intptr_t)(g_0069c99c)),0);
    puVar6 = extraout_r3;
  }
  uVar1 = (undefined4)((**(code **)(*(int *)*puVar6 + 0x50))());
  (*pcVar5)(piVar7,uVar1);
  func_0079e45c(&uStack_20,(unsigned char *)((char *)&g_0069c8c0 + (intptr_t)(g_0069c9a0)),&piStack_28);
  piVar7 = (int *)0 /* ctorZero */;
  func_0079e2bc(&uStack_20);
  pcVar5 = *(code **)(*piVar7 + 0x1d4);
  0 /* ctorZero */;
  cocos2d::CCDirector::sharedDirector();
  uVar1 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar1 = (undefined4)(func_0079e4dc(auStack_30[0],uVar1));
  0 /* ctorZero */;
  cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar2 = (undefined4)(func_0079e4dc(uStack_24,uVar2));
  0 /* ctorZero */;
  (*pcVar5)(piVar7,&uStack_20);
  pcVar5 = *(code **)(*piVar7 + 0x4c);
  uVar1 = (undefined4)(func_0079e4fc(iStack_34 + -0x80000000,0x3f000000));
  0 /* ctorZero */;
  (*pcVar5)(piVar7,&uStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),piVar7);
  (**(code **)(*(int *)this + 0x88))(((int)this),&iStack_38);
  return;
}

bool BLSuitUpGraceListView::init()
{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = ((cocos2d::CCLayer *)this)->init();
  if (iVar1 != 0) {
    uVar2 = (undefined4)(((BLSuitUpGraceListPresenter *)this)->create());
    *(undefined4 *)(((int)this) + 0x108) = uVar2;
    ((cocos2d::CCObject *)this)->retain();
    BLSuitUpGraceListView::initView();
    ((BLSuitUpGraceListPresenter *)*(undefined4 *)(((int)this) + 0x108))->initWithView((BLSuitUpGraceListView*)((int)this));
  }
  return iVar1;
}

void BLSuitUpGraceListView::onEnter()
{
  ((BLSuitUpGraceListPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLSuitUpGraceListView::onExit()
{
  ((BLSuitUpGraceListPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}
