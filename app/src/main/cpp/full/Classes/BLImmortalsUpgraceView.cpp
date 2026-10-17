#include "BLImmortalsUpgraceView.h"
#include "CCLayer.h"
#include "CCObject.h"
#include "CCDirector.h"
#include "BLImmortalsUpgracePresenter.h"
#include "BLLeakUtils.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include "BLImmortalsUpgraceCostView.h"   /* ALLOC+CTOR_FIX(R120): ???????? placement new */
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
extern "C" unsigned long UNK_00574798;
extern "C" unsigned long UNK_005747ca;
extern "C" unsigned long UNK_00574824;
extern "C" unsigned long UNK_0057484c;
extern "C" unsigned long UNK_00575064;
extern "C" unsigned long UNK_00575092;
extern "C" unsigned long _UNK_00574810;
extern "C" unsigned long _UNK_00574814;
extern "C" unsigned long _UNK_00574828;
extern "C" unsigned long _UNK_00574850;
extern "C" unsigned long _UNK_005750bc;
extern "C" unsigned long _UNK_005750c0;
extern "C" unsigned long _UNK_0057535c;
extern "C" unsigned long _UNK_00575360;
extern "C" unsigned long _UNK_00575364;
extern "C" unsigned long _UNK_00575368;
extern "C" unsigned long g_00574798;
extern "C" unsigned long g_005747ca;
extern "C" unsigned long g_00574810;
extern "C" unsigned long g_00574814;
extern "C" unsigned long g_00574824;
extern "C" unsigned long g_00574828;
extern "C" unsigned long g_0057484c;
extern "C" unsigned long g_00574850;
extern "C" unsigned long g_00575064;
extern "C" unsigned long g_00575092;
extern "C" unsigned long g_005750bc;
extern "C" unsigned long g_005750c0;
extern "C" unsigned long g_0057535c;
extern "C" unsigned long g_00575360;
extern "C" unsigned long g_00575364;
extern "C" unsigned long g_00575368;
BLImmortalsUpgraceView::~BLImmortalsUpgraceView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_00574798 + g_00574810);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005747ca + g_00574814,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  if (*(int *)((int)this + 4*(0x42)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x42)) = 0;
  }
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLImmortalsUpgraceView::BLImmortalsUpgraceView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_00575064 + g_005750bc);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00575092 + g_005750c0,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}


bool BLImmortalsUpgraceView::init()
{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = ((cocos2d::CCLayer *)this)->init();
  if (iVar1 != 0) {
    uVar2 = (undefined4)(((BLImmortalsUpgracePresenter *)this)->create());
    *(undefined4 *)(((int)this) + 0x108) = uVar2;
    ((cocos2d::CCObject *)this)->retain();
    BLImmortalsUpgraceView::initView();
    ((BLImmortalsUpgracePresenter *)*(undefined4 *)(((int)this) + 0x108))->initWithView((BLImmortalsUpgraceView*)((int)this));
  }
  return iVar1;
}

void BLImmortalsUpgraceView::onEnter()
{
  ((BLImmortalsUpgracePresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLImmortalsUpgraceView::onExit()
{
  ((BLImmortalsUpgracePresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
void BLImmortalsUpgraceView::initView()
{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  code *pcVar7;
  int iStack_30;
  undefined4 uStack_2c;
  undefined4 auStack_28 [2];
  undefined1 auStack_20 [4];
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
  piVar3 = (int *)::operator new(0x114);
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
  pcVar7 = *(code **)(*piVar3 + 0x4c);
  uVar1 = (undefined4)(func_0079e4fc(uStack_2c,0x3f000000));
  uVar1 = (undefined4)(func_0079e57c(uVar1,g_00575364));
  0 /* ctorZero */;
  (*pcVar7)(piVar3,auStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x43)));
  uVar1 = (undefined4)((**(code **)(*(int *)*(int *)((int)this + 4*(0x43)) + 0x68))());
  iVar4 = (undefined4)(intptr_t)((**(code **)(*(int *)*(int *)((int)this + 4*(0x43)) + 0x8c))());
  uVar2 = (undefined4)(func_0079e4fc(*(undefined4 *)(iVar4 + 4),0x3f000000));
  uVar1 = (undefined4)(func_0079e57c(uVar1,uVar2));
  cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar2 = (undefined4)(func_0079e4dc(g_00575368,uVar2));
  uVar1 = (undefined4)(func_0079e57c(uVar1,uVar2));
  piVar3 = (int *)::operator new(0x120);
  ::new ((void *)piVar3) cocos2d::CCObject();   /* ALLOC+CTOR_FIX(R115): 原为裸 new + ctorZero 占位；生成器丢了 cocos2d::CCObject 的构造函数 -> vptr 垃圾 */
  iVar4 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar3) + (0x18)))(piVar3));
  if (iVar4 == 0) {
    (**(code **)(*(int *)(piVar3) + (8)))(piVar3);
    piVar3 = (int *)0x0;
  }
  else {
    ((cocos2d::CCObject *)piVar3)->autorelease();
  }
  *(int *)((int)this + 4*(0x44)) = (int)piVar3;
  iVar4 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar3) + (0x8c)))());
  uVar2 = (undefined4)(func_0079e4fc(*(undefined4 *)(iVar4 + 4),0x3f000000));
  uVar1 = (undefined4)(func_0079e57c(uVar1,uVar2));
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x44)) + 100))((int *)*(int *)((int)this + 4*(0x44)),uVar1);
  (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x44)));
  piVar3 = (int *)::operator new(0x124);
  ::new ((void *)piVar3) BLImmortalsUpgraceCostView();   /* ALLOC+CTOR_FIX(R120): 类名取自原版 dump（函数+尺寸对齐）*/
  iVar4 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar3) + (0x18)))(piVar3));
  if (iVar4 == 0) {
    (**(code **)(*(int *)(piVar3) + (8)))(piVar3);
    *(int *)((int)this + 4*(0x45)) = 0;
                    /* WARNING: Does not return */
    pcVar7 = (code *)software_udf(0xff,0x57535a);
    (*pcVar7)();
  }
  ((cocos2d::CCObject *)piVar3)->autorelease();
  *(int *)((int)this + 4*(0x45)) = (int)piVar3;
  (**(code **)(*(int *)(piVar3) + (100)))(piVar3,uVar1);
  (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x45)));
  iVar4 = (undefined4)(intptr_t)(iStack_30);
  puVar5 = (undefined4 *)(**(code **)(*(int *)*(int *)((int)this + 4*(0x44)) + 0x8c))();
  uVar1 = (undefined4)(func_0079e57c(iVar4,*puVar5));
  puVar5 = (undefined4 *)(**(code **)(*(int *)*(int *)((int)this + 4*(0x45)) + 0x8c))();
  uVar1 = (undefined4)(func_0079e57c(uVar1,*puVar5));
  uVar1 = (undefined4)(func_0079e4fc(uVar1,0x3e800000));
  uVar2 = (undefined4)(func_0079e4fc(iStack_30 + -0x80000000,0x3f000000));
  uVar2 = (undefined4)(func_0079e59c(uVar2,uVar1));
  puVar5 = (undefined4 *)(**(code **)(*(int *)*(int *)((int)this + 4*(0x44)) + 0x8c))();
  uVar6 = (undefined4)(func_0079e4fc(*puVar5,0x3f000000));
  uVar2 = (undefined4)(func_0079e59c(uVar2,uVar6));
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x44)) + 0x5c))((int *)*(int *)((int)this + 4*(0x44)),uVar2);
  puVar5 = (undefined4 *)(**(code **)(*(int *)*(int *)((int)this + 4*(0x44)) + 0x8c))();
  uVar6 = (undefined4)(func_0079e4fc(*puVar5,0x3f000000));
  uVar1 = (undefined4)(func_0079e59c(uVar1,uVar1));
  uVar1 = (undefined4)(func_0079e59c(uVar6,uVar1));
  puVar5 = (undefined4 *)(**(code **)(*(int *)*(int *)((int)this + 4*(0x45)) + 0x8c))();
  uVar6 = (undefined4)(func_0079e4fc(*puVar5,0x3f000000));
  uVar1 = (undefined4)(func_0079e59c(uVar1,uVar6));
  uVar1 = (undefined4)(func_0079e59c(uVar2,uVar1));
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x45)) + 0x5c))((int *)*(int *)((int)this + 4*(0x45)),uVar1);
  (**(code **)(*(int *)this + 0x88))(((int)this),&iStack_30);
  return;
}
