#include "BLSuitComposeListView.h"
#include "BLLeakUtils.h"
#include "BLSuitComposeListPresenter.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <new>   // ghost_fix.js 自动补齐
using namespace cocos2d;
// 兜底声明
extern "C" long long software_udf(...);

extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_006947f4;
extern "C" unsigned long UNK_00694838;
extern "C" unsigned long UNK_0069487c;
extern "C" unsigned long UNK_006948a4;
extern "C" unsigned long UNK_006948bc;
extern "C" unsigned long UNK_006948ea;
extern "C" unsigned long UNK_00694938;
extern "C" unsigned long _UNK_00694868;
extern "C" unsigned long _UNK_0069486c;
extern "C" unsigned long _UNK_00694880;
extern "C" unsigned long _UNK_006948a8;
extern "C" unsigned long _UNK_00694914;
extern "C" unsigned long _UNK_00694918;
extern "C" unsigned long _UNK_00694a68;
extern "C" unsigned long _UNK_00694a6c;
extern "C" unsigned long _UNK_00694a70;
extern "C" unsigned long _UNK_00694a74;
extern "C" unsigned long g_006947f4;
extern "C" unsigned long g_00694838;
extern "C" unsigned long g_00694868;
extern "C" unsigned long g_0069486c;
extern "C" unsigned long g_0069487c;
extern "C" unsigned long g_00694880;
extern "C" unsigned long g_006948a4;
extern "C" unsigned long g_006948a8;
extern "C" unsigned long g_006948bc;
extern "C" unsigned long g_006948ea;
extern "C" unsigned long g_00694914;
extern "C" unsigned long g_00694918;
extern "C" unsigned long g_00694938;
extern "C" unsigned long g_00694a68;
extern "C" unsigned long g_00694a6c;
extern "C" unsigned long g_00694a70;
extern "C" unsigned long g_00694a74;
BLSuitComposeListView::~BLSuitComposeListView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = (undefined4)(intptr_t)(*(int *)((unsigned char *)((char *)&g_006947f4 + (intptr_t)(g_00694868))));
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
  func_0079e45c(&uStack_14,(unsigned char *)((char *)&g_00694838 + (intptr_t)(g_0069486c)),&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLSuitComposeListView::BLSuitComposeListView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = (undefined4)(intptr_t)(*(int *)((unsigned char *)((char *)&g_006948bc + (intptr_t)(g_00694914))));
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,(unsigned char *)((char *)&g_006948ea + (intptr_t)(g_00694918)),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

void BLSuitComposeListView::initView()
{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  code *pcVar5;
  undefined1 auStack_2c [4];
  int iStack_28;
  int iStack_24;
  undefined1 auStack_20 [12];
  
  0 /* ctorZero */;
  func_0079e45c(auStack_20,(unsigned char *)((char *)&g_00694938 + (intptr_t)(g_00694a70)),auStack_2c);
  piVar1 = (int *)0 /* ctorZero */;
  func_0079e2bc(auStack_20);
  pcVar5 = *(code **)(*piVar1 + 0x1d4);
  0 /* ctorZero */;
  (*pcVar5)(piVar1,auStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),piVar1);
  piVar1 = (int *)::operator new(0x134);
  ::new ((void *)piVar1) cocos2d::CCObject();   /* ALLOC+CTOR_FIX(R115): 原为裸 new + ctorZero 占位；生成器丢了 cocos2d::CCObject 的构造函数 -> vptr 垃圾 */
  iVar2 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar1) + (0x18)))(piVar1));
  if (iVar2 != 0) {
    ((cocos2d::CCObject *)piVar1)->autorelease();
    *(int *)((int)this + 4*(0x43)) = (int)piVar1;
    (**(code **)(*(int *)(piVar1) + (0x22c)))(piVar1,1);
    piVar1 = (int *)*(int *)((int)this + 4*(0x43));
    pcVar5 = *(code **)(*piVar1 + 0x234);
    0 /* ctorZero */;
    (*pcVar5)(piVar1,auStack_20);
    piVar1 = (int *)*(int *)((int)this + 4*(0x43));
    pcVar5 = *(code **)(*piVar1 + 0x88);
    0 /* ctorZero */;
    (*pcVar5)(piVar1,auStack_20);
    piVar1 = (int *)*(int *)((int)this + 4*(0x43));
    pcVar5 = *(code **)(*piVar1 + 0x4c);
    uVar3 = (undefined4)(func_0079e4fc(iStack_28 + -0x80000000,0x3f000000));
    uVar4 = (undefined4)(func_0079e4fc(iStack_24 + -0x80000000,0x3f000000));
    0 /* ctorZero */;
    (*pcVar5)(piVar1,auStack_20);
    (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x43)));
    (**(code **)(*(int *)this + 0x88))(((int)this),&iStack_28);
    return;
  }
  (**(code **)(*(int *)(piVar1) + (8)))(piVar1);
  *(int *)((int)this + 4*(0x43)) = 0;
                    /* WARNING: Does not return */
  pcVar5 = (code *)software_udf(0xff,0x694a64);
  (*pcVar5)();
}

bool BLSuitComposeListView::init()
{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = ((cocos2d::CCLayer *)this)->init();
  if (iVar1 != 0) {
    uVar2 = (undefined4)(((BLSuitComposeListPresenter *)this)->create());
    *(undefined4 *)(((int)this) + 0x108) = uVar2;
    ((cocos2d::CCObject *)this)->retain();
    BLSuitComposeListView::initView();
    ((BLSuitComposeListPresenter *)*(undefined4 *)(((int)this) + 0x108))->initWithView((BLSuitComposeListView*)((int)this));
  }
  return iVar1;
}

void BLSuitComposeListView::onEnter()
{
  ((BLSuitComposeListPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLSuitComposeListView::onExit()
{
  ((BLSuitComposeListPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

int * BLSuitComposeListView::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x110)));
  0 /* ctorZero */;
  if (piVar1 != (int *)0x0) {
    iVar2 = (**(code **)(*piVar1 + 0x18))(piVar1);
    if (iVar2 == 0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      piVar1 = (int *)0x0;
    }
    else {
      ((cocos2d::CCObject *)piVar1)->autorelease();
    }
  }
  return (int *)(piVar1);
}
