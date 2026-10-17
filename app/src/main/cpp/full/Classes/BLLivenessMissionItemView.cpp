#include "BLLivenessMissionItemView.h"
#include "CCLayer.h"
#include "CCObject.h"
#include "CCLabelTTF.h"
#include "CCDirector.h"
#include "BLLeakUtils.h"
#include "BLLivenessMissionItemPresenter.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
using namespace cocos2d;
// 兜底声明
extern "C" long long software_udf(...);

extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_005807f8;
extern "C" unsigned long UNK_0058082a;
extern "C" unsigned long UNK_00580884;
extern "C" unsigned long UNK_00580924;
extern "C" unsigned long UNK_00580fd4;
extern "C" unsigned long UNK_00581002;
extern "C" unsigned long UNK_0058108e;
extern "C" unsigned long UNK_005811a4;
extern "C" unsigned long UNK_005811aa;
extern "C" unsigned long UNK_00581228;
extern "C" unsigned long UNK_0058136c;
extern "C" unsigned long UNK_00581372;
extern "C" unsigned long UNK_005813be;
extern "C" unsigned long UNK_0058142e;
extern "C" unsigned long _UNK_00580870;
extern "C" unsigned long _UNK_00580874;
extern "C" unsigned long _UNK_00580888;
extern "C" unsigned long _UNK_00580928;
extern "C" unsigned long _UNK_0058102c;
extern "C" unsigned long _UNK_00581030;
extern "C" unsigned long _UNK_005812d0;
extern "C" unsigned long _UNK_005812d4;
extern "C" unsigned long _UNK_005812d8;
extern "C" unsigned long _UNK_005812dc;
extern "C" unsigned long _UNK_005812e0;
extern "C" unsigned long _UNK_005812e4;
extern "C" unsigned long _UNK_005812e8;
extern "C" unsigned long _UNK_005812ec;
extern "C" unsigned long _UNK_005812f0;
extern "C" unsigned long _UNK_005812f4;
extern "C" unsigned long _UNK_00581540;
extern "C" unsigned long _UNK_00581544;
extern "C" unsigned long _UNK_00581548;
extern "C" unsigned long _UNK_0058154c;
extern "C" unsigned long _UNK_00581550;
extern "C" unsigned long _UNK_00581554;
extern "C" unsigned long _UNK_00581558;
extern "C" unsigned long g_005807f8;
extern "C" unsigned long g_0058082a;
extern "C" unsigned long g_00580870;
extern "C" unsigned long g_00580874;
extern "C" unsigned long g_00580884;
extern "C" unsigned long g_00580888;
extern "C" unsigned long g_00580924;
extern "C" unsigned long g_00580928;
extern "C" unsigned long g_00580fd4;
extern "C" unsigned long g_00581002;
extern "C" unsigned long g_0058102c;
extern "C" unsigned long g_00581030;
extern "C" unsigned long g_0058108e;
extern "C" unsigned long g_005811a4;
extern "C" unsigned long g_005811aa;
extern "C" unsigned long g_00581228;
extern "C" unsigned long g_005812d0;
extern "C" unsigned long g_005812d4;
extern "C" unsigned long g_005812d8;
extern "C" unsigned long g_005812dc;
extern "C" unsigned long g_005812e0;
extern "C" unsigned long g_005812e4;
extern "C" unsigned long g_005812e8;
extern "C" unsigned long g_005812ec;
extern "C" unsigned long g_005812f0;
extern "C" unsigned long g_005812f4;
extern "C" unsigned long g_0058136c;
extern "C" unsigned long g_00581372;
extern "C" unsigned long g_005813be;
extern "C" unsigned long g_0058142e;
extern "C" unsigned long g_00581540;
extern "C" unsigned long g_00581544;
extern "C" unsigned long g_00581548;
extern "C" unsigned long g_0058154c;
extern "C" unsigned long g_00581550;
extern "C" unsigned long g_00581554;
extern "C" unsigned long g_00581558;
BLLivenessMissionItemView::~BLLivenessMissionItemView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_005807f8 + g_00580870);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0058082a + g_00580874,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  if (*(int *)((int)this + 4*(0x42)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x42)) = 0;
  }
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLLivenessMissionItemView::BLLivenessMissionItemView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_00580fd4 + g_0058102c);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00581002 + g_00581030,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}


bool BLLivenessMissionItemView::init()
{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = ((cocos2d::CCLayer *)this)->init();
  if (iVar1 != 0) {
    uVar2 = (undefined4)(((BLLivenessMissionItemPresenter *)this)->create());
    *(undefined4 *)(((int)this) + 0x108) = uVar2;
    ((cocos2d::CCObject *)this)->retain();
    BLLivenessMissionItemView::initView();
    ((BLLivenessMissionItemPresenter *)*(undefined4 *)(((int)this) + 0x108))->initWithView((BLLivenessMissionItemView*)((int)this));
  }
  return iVar1;
}

void BLLivenessMissionItemView::onEnter()
{
  ((BLLivenessMissionItemPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLLivenessMissionItemView::onExit()
{
  ((BLLivenessMissionItemPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
void BLLivenessMissionItemView::initView()
{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  code *pcVar8;
  undefined *puVar9;
  undefined4 uVar10;
  int iStack_30;
  int iStack_2c;
  undefined4 auStack_28 [2];
  undefined1 uStack_20;
  undefined1 uStack_1f;
  undefined1 uStack_1e;
  undefined4 uStack_1c;
  
  0 /* ctorZero */;
  cocos2d::CCDirector::sharedDirector();
  uVar1 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar1 = (undefined4)(func_0079e4dc(auStack_28[0],uVar1));
  0 /* ctorZero */;
  cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar2 = (undefined4)(func_0079e4dc(uStack_1c,uVar2));
  0 /* ctorZero */;
  func_0079e45c(&uStack_20,(unsigned char *)((char *)&g_0058108e + (intptr_t)(g_005812d8)),auStack_28);
  piVar3 = (int *)0 /* ctorZero */;
  func_0079e2bc(&uStack_20);
  pcVar8 = *(code **)(*piVar3 + 0x1d4);
  0 /* ctorZero */;
  (*pcVar8)(piVar3,&uStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),piVar3);
  uVar1 = (undefined4)(func_0079e4fc(iStack_30 + -0x80000000,0x3f000000));
  uVar1 = (undefined4)(func_0079e59c(uVar1,0x40800000));
  piVar3 = (int *)::operator new(0x110);
  ::new ((void *)piVar3) cocos2d::CCObject();   /* ALLOC+CTOR_FIX(R115): 原为裸 new + ctorZero 占位；生成器丢了 cocos2d::CCObject 的构造函数 -> vptr 垃圾 */
  iVar4 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar3) + (0x18)))(piVar3));
  if (iVar4 == 0) {
    (**(code **)(*(int *)(piVar3) + (8)))(piVar3);
    piVar3 = (int *)0x0;
  }
  else {
    ((cocos2d::CCObject *)piVar3)->autorelease();
  }
  *(int *)((int)this + 4*(0x43)) = (int)piVar3;
  puVar5 = (undefined4 *)(**(code **)(*(int *)(piVar3) + (0x8c)))();
  uVar2 = (undefined4)(func_0079e4fc(*puVar5,0x3f000000));
  uVar1 = (undefined4)(func_0079e59c(uVar1,uVar2));
  piVar3 = (int *)*(int *)((int)this + 4*(0x43));
  pcVar8 = *(code **)(*piVar3 + 0x4c);
  0 /* ctorZero */;
  (*pcVar8)(piVar3,&uStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x43)));
  puVar5 = (undefined4 *)(**(code **)(*(int *)*(int *)((int)this + 4*(0x43)) + 0x8c))();
  uVar2 = (undefined4)(func_0079e4fc(*puVar5,0x3f000000));
  uVar2 = (undefined4)(func_0079e59c(uVar2,g_005812dc));
  uVar1 = (undefined4)(func_0079e59c(uVar1,uVar2));
  uVar2 = (undefined4)(func_0079e4fc(iStack_2c,0x3f000000));
  cocos2d::CCDirector::sharedDirector();
  uVar6 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar6 = (undefined4)(func_0079e4dc(g_005812e0,uVar6));
  uVar2 = (undefined4)(func_0079e57c(uVar2,uVar6));
  puVar9 = (unsigned char *)((char *)&g_005811a4 + (intptr_t)(g_005812e4));
  piVar3 = (int *)cocos2d::CCLabelTTF::create((char const*)(unsigned char *)((char *)&g_005811aa + (intptr_t)(g_005812e8)), (char const*)puVar9, g_005812ec);
  *(int *)((int)this + 4*(0x44)) = (int)piVar3;
  pcVar8 = *(code **)(*piVar3 + 0x7c);
  0 /* ctorZero */;
  (*pcVar8)(piVar3,&uStack_20);
  uStack_20 = 0;
  uStack_1f = 0xff;
  uStack_1e = 0x1a;
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x44)) + 0x1b4))((int *)*(int *)((int)this + 4*(0x44)),&uStack_20);
  piVar3 = (int *)*(int *)((int)this + 4*(0x44));
  pcVar8 = *(code **)(*piVar3 + 0x4c);
  0 /* ctorZero */;
  (*pcVar8)(piVar3,&uStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x44)));
  uVar6 = (undefined4)(func_0079e4dc(iStack_2c + -0x80000000,g_005812dc));
  piVar3 = (int *)cocos2d::CCLabelTTF::create((char const*)(unsigned char *)((char *)&g_00581228 + (intptr_t)(g_005812f0)), (char const*)puVar9, g_005812f4);
  *(int *)((int)this + 4*(0x47)) = (int)piVar3;
  pcVar8 = *(code **)(*piVar3 + 0x7c);
  0 /* ctorZero */;
  (*pcVar8)(piVar3,&uStack_20);
  uStack_20 = 0xff;
  uStack_1f = 0xdd;
  uStack_1e = 0;
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x47)) + 0x1b4))((int *)*(int *)((int)this + 4*(0x47)),&uStack_20);
  piVar3 = (int *)*(int *)((int)this + 4*(0x47));
  pcVar8 = *(code **)(*piVar3 + 0x4c);
  0 /* ctorZero */;
  (*pcVar8)(piVar3,&uStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x47)));
  puVar5 = (undefined4 *)(**(code **)(*(int *)*(int *)((int)this + 4*(0x47)) + 0x8c))();
  uVar10 = (undefined4)(*puVar5);
  cocos2d::CCDirector::sharedDirector();
  uVar7 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar7 = (undefined4)(func_0079e4dc(g_005812f4,uVar7));
  uVar7 = (undefined4)(func_0079e59c(uVar10,uVar7));
  uVar1 = (undefined4)(func_0079e59c(uVar1,uVar7));
  piVar3 = (int *)::operator new(0x118);
  ::new ((void *)piVar3) cocos2d::CCObject();   /* ALLOC+CTOR_FIX(R115): 原为裸 new + ctorZero 占位；生成器丢了 cocos2d::CCObject 的构造函数 -> vptr 垃圾 */
  iVar4 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar3) + (0x18)))(piVar3));
  if (iVar4 == 0) {
    (**(code **)(*(int *)(piVar3) + (8)))(piVar3);
    piVar3 = (int *)0x0;
  }
  else {
    ((cocos2d::CCObject *)piVar3)->autorelease();
  }
  *(int *)((int)this + 4*(0x49)) = (int)piVar3;
  puVar5 = (undefined4 *)(**(code **)(*(int *)(piVar3) + (0x8c)))();
  piVar3 = (int *)*(int *)((int)this + 4*(0x49));
  pcVar8 = *(code **)(*piVar3 + 0x4c);
  uVar7 = (undefined4)(func_0079e4fc(*puVar5,0x3f000000));
  uVar1 = (undefined4)(func_0079e59c(uVar1,uVar7));
  0 /* ctorZero */;
  (*pcVar8)(piVar3,&uStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x49)));
  cocos2d::CCDirector::sharedDirector();
  uVar1 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar1 = (undefined4)(func_0079e4dc(g_00581540,uVar1));
  puVar9 = (unsigned char *)((char *)&g_0058136c + (intptr_t)(g_00581544));
  piVar3 = (int *)cocos2d::CCLabelTTF::create((char const*)(unsigned char *)((char *)&g_00581372 + (intptr_t)(g_00581548)), (char const*)puVar9, g_0058154c);
  *(int *)((int)this + 4*(0x45)) = (int)piVar3;
  uStack_20 = 0;
  uStack_1f = 0xff;
  uStack_1e = 0x1a;
  (**(code **)(*(int *)(piVar3) + (0x1b4)))(piVar3,&uStack_20);
  piVar3 = (int *)*(int *)((int)this + 4*(0x45));
  pcVar8 = *(code **)(*piVar3 + 0x4c);
  0 /* ctorZero */;
  (*pcVar8)(piVar3,&uStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x45)));
  piVar3 = (int *)cocos2d::CCLabelTTF::create((char const*)(unsigned char *)((char *)&g_005813be + (intptr_t)(g_00581550)), (char const*)puVar9, g_0058154c);
  *(int *)((int)this + 4*(0x48)) = (int)piVar3;
  uStack_20 = 0xff;
  uStack_1f = 0xdd;
  uStack_1e = 0;
  (**(code **)(*(int *)(piVar3) + (0x1b4)))(piVar3,&uStack_20);
  piVar3 = (int *)*(int *)((int)this + 4*(0x48));
  pcVar8 = *(code **)(*piVar3 + 0x4c);
  0 /* ctorZero */;
  (*pcVar8)(piVar3,&uStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x48)));
  uVar1 = (undefined4)(func_0079e4fc(iStack_30,0x3f000000));
  cocos2d::CCDirector::sharedDirector();
  uVar7 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar7 = (undefined4)(func_0079e4dc(g_00581554,uVar7));
  uVar1 = (undefined4)(func_0079e57c(uVar1,uVar7));
  piVar3 = (int *)cocos2d::CCLabelTTF::create((char const*)(unsigned char *)((char *)&g_0058142e + (intptr_t)(g_00581558)), (char const*)puVar9, g_0058154c);
  *(int *)((int)this + 4*(0x46)) = (int)piVar3;
  uStack_20 = 0xff;
  uStack_1f = 0x62;
  uStack_1e = 0;
  (**(code **)(*(int *)(piVar3) + (0x1b4)))(piVar3,&uStack_20);
  piVar3 = (int *)*(int *)((int)this + 4*(0x46));
  pcVar8 = *(code **)(*piVar3 + 0x7c);
  0 /* ctorZero */;
  (*pcVar8)(piVar3,&uStack_20);
  piVar3 = (int *)*(int *)((int)this + 4*(0x46));
  pcVar8 = *(code **)(*piVar3 + 0x4c);
  0 /* ctorZero */;
  (*pcVar8)(piVar3,&uStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x46)));
  piVar3 = (int *)::operator new(0x118);
  ::new ((void *)piVar3) cocos2d::CCObject();   /* ALLOC+CTOR_FIX(R115): 原为裸 new + ctorZero 占位；生成器丢了 cocos2d::CCObject 的构造函数 -> vptr 垃圾 */
  iVar4 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar3) + (0x18)))(piVar3));
  if (iVar4 == 0) {
    (**(code **)(*(int *)(piVar3) + (8)))(piVar3);
    *(int *)((int)this + 4*(0x4a)) = 0;
                    /* WARNING: Does not return */
    pcVar8 = (code *)software_udf(0xff,0x5814c2);
    (*pcVar8)();
  }
  ((cocos2d::CCObject *)piVar3)->autorelease();
  *(int *)((int)this + 4*(0x4a)) = (int)piVar3;
  pcVar8 = *(code **)(*piVar3 + 0x4c);
  puVar5 = (undefined4 *)(**(code **)(*(int *)(piVar3) + (0x8c)))(piVar3);
  uVar2 = (undefined4)(func_0079e4fc(*puVar5,0x3f000000));
  uVar1 = (undefined4)(func_0079e59c(uVar1,uVar2));
  0 /* ctorZero */;
  (*pcVar8)(piVar3,&uStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x4a)));
  (**(code **)(*(int *)this + 0x88))(((int)this),&iStack_30);
  return;
}
