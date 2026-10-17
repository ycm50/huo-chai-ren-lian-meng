#include "BLLivenessView.h"
#include "CCLayer.h"
#include "CCObject.h"
#include "CCControlButton.h"
#include "CCLabelTTF.h"
#include "CCDirector.h"
#include "BLLeakUtils.h"
#include "BLLivenessPresenter.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include "BLLivenessDegreeView.h"   /* ALLOC+CTOR_FIX(R120): ???????? placement new */
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
extern "C" unsigned long UNK_005819e4;
extern "C" unsigned long UNK_00581a16;
extern "C" unsigned long UNK_00581a70;
extern "C" unsigned long UNK_00581a98;
extern "C" unsigned long UNK_00581b96;
extern "C" unsigned long UNK_00581c1a;
extern "C" unsigned long UNK_00581cda;
extern "C" unsigned long UNK_00581cdc;
extern "C" unsigned long UNK_00581d7c;
extern "C" unsigned long _DAT_00581b38;
extern "C" unsigned long _DAT_00581b3c;
extern "C" unsigned long _UNK_00581a5c;
extern "C" unsigned long _UNK_00581a60;
extern "C" unsigned long _UNK_00581a74;
extern "C" unsigned long _UNK_00581a9c;
extern "C" unsigned long _UNK_00581f1c;
extern "C" unsigned long _UNK_00581f20;
extern "C" unsigned long _UNK_00581f24;
extern "C" unsigned long _UNK_00581f28;
extern "C" unsigned long _UNK_00581f2c;
extern "C" unsigned long _UNK_00581f30;
extern "C" unsigned long _UNK_00581f34;
extern "C" unsigned long _UNK_00581f38;
extern "C" unsigned long _UNK_00581f3c;
extern "C" unsigned long _UNK_00581f40;
extern "C" unsigned long _UNK_00581f44;
extern "C" unsigned long _UNK_00581fe8;
extern "C" unsigned long g_005819e4;
extern "C" unsigned long g_00581a16;
extern "C" unsigned long g_00581a5c;
extern "C" unsigned long g_00581a60;
extern "C" unsigned long g_00581a70;
extern "C" unsigned long g_00581a74;
extern "C" unsigned long g_00581a98;
extern "C" unsigned long g_00581a9c;
extern "C" unsigned long g_00581b38;
extern "C" unsigned long g_00581b3c;
extern "C" unsigned long g_00581b96;
extern "C" unsigned long g_00581c1a;
extern "C" unsigned long g_00581cda;
extern "C" unsigned long g_00581cdc;
extern "C" unsigned long g_00581d7c;
extern "C" unsigned long g_00581f1c;
extern "C" unsigned long g_00581f20;
extern "C" unsigned long g_00581f24;
extern "C" unsigned long g_00581f28;
extern "C" unsigned long g_00581f2c;
extern "C" unsigned long g_00581f30;
extern "C" unsigned long g_00581f34;
extern "C" unsigned long g_00581f38;
extern "C" unsigned long g_00581f3c;
extern "C" unsigned long g_00581f40;
extern "C" unsigned long g_00581f44;
extern "C" unsigned long g_00581fe8;
BLLivenessView::~BLLivenessView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_005819e4 + g_00581a5c);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00581a16 + g_00581a60,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  if (*(int *)((int)this + 4*(0x42)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x42)) = 0;
  }
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLLivenessView::BLLivenessView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(g_00581b38 + 0x581ae0);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLLivenessView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}


bool BLLivenessView::init()
{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = ((cocos2d::CCLayer *)this)->init();
  if (iVar1 != 0) {
    uVar2 = (undefined4)(((BLLivenessPresenter *)this)->create());
    *(undefined4 *)(((int)this) + 0x108) = uVar2;
    ((cocos2d::CCObject *)this)->retain();
    BLLivenessView::initView();
    ((BLLivenessPresenter *)*(undefined4 *)(((int)this) + 0x108))->initWithView((BLLivenessView*)((int)this));
  }
  return iVar1;
}

void BLLivenessView::onEnter()
{
  ((BLLivenessPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLLivenessView::onExit()
{
  ((BLLivenessPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
void BLLivenessView::initView()
{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  code *pcVar8;
  int *piVar9;
  int iVar10;
  int iStack_38;
  int iStack_34;
  undefined4 auStack_30 [2];
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined1 uStack_20;
  undefined1 uStack_1f;
  undefined1 uStack_1e;
  undefined4 uStack_1c;
  
  0 /* ctorZero */;
  cocos2d::CCDirector::sharedDirector();
  uVar1 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar1 = (undefined4)(func_0079e4dc(uStack_28,uVar1));
  0 /* ctorZero */;
  cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar2 = (undefined4)(func_0079e4dc(uStack_1c,uVar2));
  0 /* ctorZero */;
  func_0079e45c(&uStack_20,(unsigned char *)((char *)&g_00581b96 + (intptr_t)(g_00581f24)),&uStack_28);
  piVar3 = (int *)0 /* ctorZero */;
  func_0079e2bc(&uStack_20);
  pcVar8 = *(code **)(*piVar3 + 0x1d4);
  0 /* ctorZero */;
  uVar1 = (undefined4)(auStack_30[0]);
  cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar2 = (undefined4)(func_0079e4dc(uVar1,uVar2));
  0 /* ctorZero */;
  uVar1 = (undefined4)(uStack_24);
  cocos2d::CCDirector::sharedDirector();
  uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar1 = (undefined4)(func_0079e4dc(uVar1,uVar4));
  0 /* ctorZero */;
  (*pcVar8)(piVar3,&uStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),piVar3);
  func_0079e45c(&uStack_20,(unsigned char *)((char *)&g_00581c1a + (intptr_t)(g_00581f28)),&uStack_28);
  piVar3 = (int *)0 /* ctorZero */;
  func_0079e2bc(&uStack_20);
  pcVar8 = *(code **)(*piVar3 + 0x1d4);
  0 /* ctorZero */;
  cocos2d::CCDirector::sharedDirector();
  uVar1 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar1 = (undefined4)(func_0079e4dc(auStack_30[0],uVar1));
  0 /* ctorZero */;
  cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar2 = (undefined4)(func_0079e4dc(uStack_24,uVar2));
  0 /* ctorZero */;
  (*pcVar8)(piVar3,&uStack_20);
  iVar10 = (int)*(int *)&(*piVar3);
  pcVar8 = *(code **)(iVar10 + 0x4c);
  uVar1 = (undefined4)(func_0079e4fc(iStack_34,0x3f000000));
  iVar10 = (undefined4)(intptr_t)((**(code **)(iVar10 + 0x8c))(piVar3));
  uVar2 = (undefined4)(func_0079e4fc(*(undefined4 *)(iVar10 + 4),0x3f000000));
  uVar1 = (undefined4)(func_0079e59c(uVar1,uVar2));
  0 /* ctorZero */;
  (*pcVar8)(piVar3,&uStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),piVar3);
  piVar5 = (int *)cocos2d::CCLabelTTF::create((char const*)(unsigned char *)((char *)&g_00581cda + (intptr_t)(g_00581f30)), (char const*)(unsigned char *)((char *)&g_00581cdc + (intptr_t)(g_00581f34)), g_00581f38);
  uStack_20 = 0xb4;
  uStack_1f = 0xb4;
  uStack_1e = 0xb4;
  (**(code **)(*(int *)(piVar5) + (0x1b4)))(piVar5,&uStack_20);
  iVar10 = (int)*(int *)&(*piVar5);
  pcVar8 = *(code **)(iVar10 + 0x4c);
  uVar1 = (undefined4)(func_0079e4fc(iStack_38 + -0x80000000,0x3f000000));
  puVar6 = (undefined4 *)(**(code **)(iVar10 + 0x8c))(piVar5);
  uVar2 = (undefined4)(func_0079e4fc(*puVar6,0x3f000000));
  uVar1 = (undefined4)(func_0079e59c(uVar1,uVar2));
  cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar2 = (undefined4)(func_0079e4dc(g_00581f3c,uVar2));
  uVar1 = (undefined4)(func_0079e59c(uVar1,uVar2));
  uVar2 = (undefined4)((**(code **)(*(int *)(piVar3) + (0x68)))(piVar3));
  0 /* ctorZero */;
  (*pcVar8)(piVar5,&uStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),piVar5);
  iVar7 = (undefined4)(intptr_t)(cocos2d::extension::CCControlButton::create());
  iVar10 = (undefined4)(intptr_t)(g_00581f40);
  *(int *)((int)this + 4*(0x43)) = iVar7;
  func_0079e45c(&uStack_20,&g_00581d7c + iVar10,&uStack_28);
  piVar5 = (int *)0 /* ctorZero */;
  func_0079e2bc(&uStack_20);
  piVar9 = (int *)*(int *)((int)this + 4*(0x43));
  pcVar8 = *(code **)(*piVar9 + 0x28c);
  (**(code **)(*(int *)(piVar5) + (0x1cc)))(&uStack_20,piVar5);
  (*pcVar8)(piVar9,&uStack_20);
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x43)) + 0x30c))((int *)*(int *)((int)this + 4*(0x43)),piVar5,1);
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x43)) + 0x294))((int *)*(int *)((int)this + 4*(0x43)),0);
  piVar5 = (int *)*(int *)((int)this + 4*(0x43));
  iVar10 = (int)*(int *)&(*piVar5);
  pcVar8 = *(code **)(iVar10 + 0x4c);
  uVar1 = (undefined4)(func_0079e4fc(iStack_38,0x3f000000));
  puVar6 = (undefined4 *)(**(code **)(iVar10 + 0x8c))(piVar5);
  uVar2 = (undefined4)(func_0079e4fc(*puVar6,0x3f000000));
  uVar1 = (undefined4)(func_0079e57c(uVar1,uVar2));
  cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar2 = (undefined4)(func_0079e4dc(g_00581f3c,uVar2));
  uVar1 = (undefined4)(func_0079e59c(uVar1,uVar2));
  uVar2 = (undefined4)((**(code **)(*(int *)(piVar3) + (0x68)))(piVar3));
  0 /* ctorZero */;
  (*pcVar8)(piVar5,&uStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x43)));
  piVar3 = (int *)::operator new(0x110);
  ::new ((void *)piVar3) cocos2d::CCObject();   /* ALLOC+CTOR_FIX(R115): 原为裸 new + ctorZero 占位；生成器丢了 cocos2d::CCObject 的构造函数 -> vptr 垃圾 */
  iVar10 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar3) + (0x18)))(piVar3));
  if (iVar10 == 0) {
    (**(code **)(*(int *)(piVar3) + (8)))(piVar3);
    piVar3 = (int *)0x0;
  }
  else {
    ((cocos2d::CCObject *)piVar3)->autorelease();
  }
  *(int *)((int)this + 4*(0x44)) = (int)piVar3;
  uVar1 = (undefined4)(func_0079e4fc(iStack_34 + -0x80000000,0x3f000000));
  iVar10 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar3) + (0x8c)))(piVar3));
  uVar2 = (undefined4)(func_0079e4fc(*(undefined4 *)(iVar10 + 4),0x3f000000));
  uVar1 = (undefined4)(func_0079e59c(uVar1,uVar2));
  cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  piVar3 = (int *)*(int *)((int)this + 4*(0x44));
  pcVar8 = *(code **)(*piVar3 + 0x4c);
  uVar2 = (undefined4)(func_0079e4dc(g_00581f44,uVar2));
  uVar1 = (undefined4)(func_0079e59c(uVar1,uVar2));
  0 /* ctorZero */;
  (*pcVar8)(piVar3,&uStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x44)));
  piVar3 = (int *)::operator new(0x120);
  ::new ((void *)piVar3) BLLivenessDegreeView();   /* ALLOC+CTOR_FIX(R120): 类名取自原版 dump（函数+尺寸对齐）*/
  iVar10 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar3) + (0x18)))(piVar3));
  if (iVar10 == 0) {
    (**(code **)(*(int *)(piVar3) + (8)))(piVar3);
    *(int *)((int)this + 4*(0x45)) = 0;
                    /* WARNING: Does not return */
    pcVar8 = (code *)software_udf(0xff,0x581f0c);
    (*pcVar8)();
  }
  ((cocos2d::CCObject *)piVar3)->autorelease();
  *(int *)((int)this + 4*(0x45)) = (int)piVar3;
  uVar1 = (undefined4)(func_0079e4fc(iStack_34,0x3f000000));
  iVar10 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar3) + (0x8c)))(piVar3));
  uVar2 = (undefined4)(func_0079e4fc(*(undefined4 *)(iVar10 + 4),0x3f000000));
  uVar1 = (undefined4)(func_0079e57c(uVar1,uVar2));
  cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  piVar3 = (int *)*(int *)((int)this + 4*(0x45));
  pcVar8 = *(code **)(*piVar3 + 0x4c);
  uVar2 = (undefined4)(func_0079e4dc(g_00581fe8,uVar2));
  uVar1 = (undefined4)(func_0079e57c(uVar1,uVar2));
  0 /* ctorZero */;
  (*pcVar8)(piVar3,&uStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x45)));
  (**(code **)(*(int *)this + 0x88))(((int)this),&iStack_38);
  return;
}
