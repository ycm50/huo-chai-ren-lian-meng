#include "BLLivenessMissionView.h"
#include "CCLayer.h"
#include "CCObject.h"
#include "CCDirector.h"
#include "BLLeakUtils.h"
#include "BLLivenessMissionPresenter.h"
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
extern "C" unsigned long UNK_005816c4;
extern "C" unsigned long UNK_005816f6;
extern "C" unsigned long UNK_00581750;
extern "C" unsigned long UNK_00581778;
extern "C" unsigned long UNK_00581790;
extern "C" unsigned long UNK_005817be;
extern "C" unsigned long UNK_0058184a;
extern "C" unsigned long _UNK_0058173c;
extern "C" unsigned long _UNK_00581740;
extern "C" unsigned long _UNK_00581754;
extern "C" unsigned long _UNK_0058177c;
extern "C" unsigned long _UNK_005817e8;
extern "C" unsigned long _UNK_005817ec;
extern "C" unsigned long _UNK_00581968;
extern "C" unsigned long _UNK_0058196c;
extern "C" unsigned long _UNK_00581970;
extern "C" unsigned long g_005816c4;
extern "C" unsigned long g_005816f6;
extern "C" unsigned long g_0058173c;
extern "C" unsigned long g_00581740;
extern "C" unsigned long g_00581750;
extern "C" unsigned long g_00581754;
extern "C" unsigned long g_00581778;
extern "C" unsigned long g_0058177c;
extern "C" unsigned long g_00581790;
extern "C" unsigned long g_005817be;
extern "C" unsigned long g_005817e8;
extern "C" unsigned long g_005817ec;
extern "C" unsigned long g_0058184a;
extern "C" unsigned long g_00581968;
extern "C" unsigned long g_0058196c;
extern "C" unsigned long g_00581970;
BLLivenessMissionView::~BLLivenessMissionView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_005816c4 + g_0058173c);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005816f6 + g_00581740,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  if (*(int *)((int)this + 4*(0x42)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x42)) = 0;
  }
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLLivenessMissionView::BLLivenessMissionView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_00581790 + g_005817e8);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005817be + g_005817ec,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}


undefined4 BLLivenessMissionView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x108);
}

undefined4 BLLivenessMissionView::getTableView()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

bool BLLivenessMissionView::init()
{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = ((cocos2d::CCLayer *)this)->init();
  if (iVar1 != 0) {
    uVar2 = (undefined4)(((BLLivenessMissionPresenter *)this)->create());
    *(undefined4 *)(((int)this) + 0x108) = uVar2;
    ((cocos2d::CCObject *)this)->retain();
    BLLivenessMissionView::initView();
    ((BLLivenessMissionPresenter *)*(undefined4 *)(((int)this) + 0x108))->initWithView((BLLivenessMissionView*)((int)this));
  }
  return iVar1;
}

void BLLivenessMissionView::onEnter()
{
  ((BLLivenessMissionPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLLivenessMissionView::onExit()
{
  ((BLLivenessMissionPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
void BLLivenessMissionView::initView()
{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  code *pcVar5;
  int iStack_30;
  int iStack_2c;
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
  func_0079e45c(auStack_20,(unsigned char *)((char *)&g_0058184a + (intptr_t)(g_00581970)),auStack_28);
  piVar3 = (int *)0 /* ctorZero */;
  func_0079e2bc(auStack_20);
  pcVar5 = *(code **)(*piVar3 + 0x1d4);
  0 /* ctorZero */;
  (*pcVar5)(piVar3,auStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),piVar3);
  piVar3 = (int *)::operator new(0x134);
  ::new ((void *)piVar3) cocos2d::CCObject();   /* ALLOC+CTOR_FIX(R115): 原为裸 new + ctorZero 占位；生成器丢了 cocos2d::CCObject 的构造函数 -> vptr 垃圾 */
  iVar4 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar3) + (0x18)))(piVar3));
  if (iVar4 != 0) {
    ((cocos2d::CCObject *)piVar3)->autorelease();
    *(int *)((int)this + 4*(0x43)) = (int)piVar3;
    (**(code **)(*(int *)(piVar3) + (0x22c)))(piVar3,1);
    iVar4 = (undefined4)(intptr_t)(iStack_30);
    piVar3 = (int *)*(int *)((int)this + 4*(0x43));
    pcVar5 = *(code **)(*piVar3 + 0x234);
    uVar1 = (undefined4)(func_0079e57c(iStack_2c,0x41000000));
    0 /* ctorZero */;
    (*pcVar5)(piVar3,auStack_20);
    piVar3 = (int *)*(int *)((int)this + 4*(0x43));
    pcVar5 = *(code **)(*piVar3 + 0x4c);
    uVar1 = (undefined4)(func_0079e4fc(iStack_30 + -0x80000000,0x3f000000));
    uVar2 = (undefined4)(func_0079e4fc(iStack_2c + -0x80000000,0x3f000000));
    uVar2 = (undefined4)(func_0079e59c(uVar2,0x40800000));
    0 /* ctorZero */;
    (*pcVar5)(piVar3,auStack_20);
    (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x43)));
    (**(code **)(*(int *)this + 0x88))(((int)this),&iStack_30);
    return;
  }
  (**(code **)(*(int *)(piVar3) + (8)))(piVar3);
  *(int *)((int)this + 4*(0x43)) = 0;
                    /* WARNING: Does not return */
  pcVar5 = (code *)software_udf(0xff,0x581964);
  (*pcVar5)();
}
