#include "BLRenascenceView.h"
#include "BLLeakUtils.h"
#include "BLRenascencePresenter.h"
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
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_006525b4;
extern "C" unsigned long UNK_006525e6;
extern "C" unsigned long UNK_00652640;
extern "C" unsigned long UNK_00652668;
extern "C" unsigned long _DAT_00652708;
extern "C" unsigned long _DAT_0065270c;
extern "C" unsigned long _UNK_0065262c;
extern "C" unsigned long _UNK_00652630;
extern "C" unsigned long _UNK_00652644;
extern "C" unsigned long _UNK_0065266c;
extern "C" unsigned long _UNK_00652868;
extern "C" unsigned long _UNK_0065286c;
extern "C" unsigned long _UNK_00652870;
extern "C" unsigned long g_006525b4;
extern "C" unsigned long g_006525e6;
extern "C" unsigned long g_0065262c;
extern "C" unsigned long g_00652630;
extern "C" unsigned long g_00652640;
extern "C" unsigned long g_00652644;
extern "C" unsigned long g_00652668;
extern "C" unsigned long g_0065266c;
extern "C" unsigned long g_00652708;
extern "C" unsigned long g_0065270c;
extern "C" unsigned long g_00652868;
extern "C" unsigned long g_0065286c;
extern "C" unsigned long g_00652870;
BLRenascenceView::~BLRenascenceView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_006525b4 + g_0065262c);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_006525e6 + g_00652630,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  if (*(int *)((int)this + 4*(0x42)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x42)) = 0;
  }
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLRenascenceView::BLRenascenceView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(g_00652708 + 0x6526b0);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLRenascenceView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}


bool BLRenascenceView::init()
{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = ((cocos2d::CCLayer *)this)->init();
  if (iVar1 != 0) {
    uVar2 = (undefined4)(((BLRenascencePresenter *)this)->create());
    *(undefined4 *)(((int)this) + 0x108) = uVar2;
    ((cocos2d::CCObject *)this)->retain();
    BLRenascenceView::initView();
    ((BLRenascencePresenter *)*(undefined4 *)(((int)this) + 0x108))->initWithView((BLRenascenceView*)((int)this));
  }
  return iVar1;
}

void BLRenascenceView::onEnter()
{
  ((BLRenascencePresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

// ===== 修复: 补回被误删的函数占位 (2) =====
void BLRenascenceView::initView()
{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  undefined1 auStack_38 [8];
  undefined4 auStack_30 [2];
  undefined1 auStack_28 [4];
  undefined4 uStack_24;
  undefined1 auStack_20 [12];
  
  uVar1 = (undefined4)(cocos2d::CCDirector::sharedDirector());
  *(CCSize *)auStack_38 = ((cocos2d::CCDirector *)uVar1)->getWinSize();
  piVar2 = (int *)((long long)::operator new((size_t)(0x110)));
  0 /* ctorZero */;
  iVar3 = (undefined4)(intptr_t)((**(code **)(*piVar2 + 0x18))(piVar2));
  if (iVar3 == 0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    piVar2 = (int *)0x0;
  }
  else {
    ((cocos2d::CCObject *)piVar2)->autorelease();
  }
  *(int *)((int)this + 4*(0x43)) = (int)piVar2;
  pcVar6 = *(code **)(*piVar2 + 0x4c);
  0 /* ctorZero */;
  uVar1 = (undefined4)(auStack_30[0]);
  cocos2d::CCDirector::sharedDirector();
  uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar4 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar1),(int)(uVar4)))));
  0 /* ctorZero */;
  uVar1 = (undefined4)(uStack_24);
  cocos2d::CCDirector::sharedDirector();
  uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar1 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar1),(int)(uVar5)))));
  0 /* ctorZero */;
  (*pcVar6)(piVar2,auStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x43)));
  piVar2 = (int *)((long long)::operator new((size_t)(0x134)));
  0 /* ctorZero */;
  iVar3 = (undefined4)(intptr_t)((**(code **)(*piVar2 + 0x18))(piVar2));
  if (iVar3 != 0) {
    ((cocos2d::CCObject *)piVar2)->autorelease();
    *(int *)((int)this + 4*(0x44)) = (int)piVar2;
    pcVar6 = *(code **)(*piVar2 + 0x4c);
    0 /* ctorZero */;
    cocos2d::CCDirector::sharedDirector();
    uVar1 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar1 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(auStack_30[0]),(int)(uVar1)))));
    0 /* ctorZero */;
    cocos2d::CCDirector::sharedDirector();
    uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar4 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uStack_24),(int)(uVar4)))));
    0 /* ctorZero */;
    (*pcVar6)(piVar2,auStack_20);
    (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x44)));
    (**(code **)(*(int *)this + 0x88))(((int)this),auStack_38);
    return;
  }
  (**(code **)(*piVar2 + 8))(piVar2);
  *(int *)((int)this + 4*(0x44)) = 0;
                    /* WARNING: Does not return;
  (*pcVar6)();
}

void BLRenascenceView::onExit()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
