#include "BLRoleListView.h"
#include "BLLeakUtils.h"
#include "BLRoleListPresenter.h"
#include "BLTableView.h"
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
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_00652904;
extern "C" unsigned long UNK_00652916;
extern "C" unsigned long UNK_00652946;
extern "C" unsigned long UNK_0065299c;
extern "C" unsigned long UNK_006529ca;
extern "C" unsigned long UNK_006529f6;
extern "C" unsigned long _UNK_00652908;
extern "C" unsigned long _UNK_00652988;
extern "C" unsigned long _UNK_0065298c;
extern "C" unsigned long _UNK_006529a0;
extern "C" unsigned long _UNK_00652a20;
extern "C" unsigned long _UNK_00652a24;
extern "C" unsigned long _UNK_00652b04;
extern "C" unsigned long _UNK_00652b08;
extern "C" unsigned long g_00652904;
extern "C" unsigned long g_00652908;
extern "C" unsigned long g_00652916;
extern "C" unsigned long g_00652946;
extern "C" unsigned long g_00652988;
extern "C" unsigned long g_0065298c;
extern "C" unsigned long g_0065299c;
extern "C" unsigned long g_006529a0;
extern "C" unsigned long g_006529ca;
extern "C" unsigned long g_006529f6;
extern "C" unsigned long g_00652a20;
extern "C" unsigned long g_00652a24;
extern "C" unsigned long g_00652b04;
extern "C" unsigned long g_00652b08;
void BLRoleListView::onExit()
{
  ((BLRoleListPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

void BLRoleListView::onEnter()
{
  ((BLRoleListPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

BLRoleListView::~BLRoleListView()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  iVar2 = *(int *)(&g_00652916 + g_00652988);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uStack_10 = (undefined4)(p3);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00652946 + g_0065298c,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  if (*(int *)((int)this + 4*(0x42)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x42)) = 0;
  }
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLRoleListView::BLRoleListView()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uStack_10 = (undefined4)(p3);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_006529ca + g_00652a20);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_006529f6 + g_00652a24,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

void BLRoleListView::initView()
{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 uVar4;
  code *pcVar5;
  undefined1 auStack_48 [8];
  undefined4 auStack_40 [2];
  undefined1 auStack_38 [4];
  undefined4 uStack_34;
  undefined4 auStack_30 [2];
  undefined1 auStack_28 [4];
  undefined4 uStack_24;
  undefined1 auStack_20 [12];
  
  uVar4 = (undefined4)(g_00652b04);
  0 /* ctorZero */;
  cocos2d::CCDirector::sharedDirector();
  uVar1 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar1 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(auStack_40[0]),(int)(uVar1)))));
  0 /* ctorZero */;
  cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uStack_34),(int)(uVar2)))));
  0 /* ctorZero */;
  piVar3 = (int *)((BLTableView *)this)->create();
  *(int *)((int)this + 4*(0x43)) = (int)piVar3;
  pcVar5 = *(code **)(*piVar3 + 0x234);
  0 /* ctorZero */;
  cocos2d::CCDirector::sharedDirector();
  uVar1 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar1 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(auStack_30[0]),(int)(uVar1)))));
  0 /* ctorZero */;
  cocos2d::CCDirector::sharedDirector();
  uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar4 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uStack_24),(int)(uVar4)))));
  0 /* ctorZero */;
  (*pcVar5)(piVar3,auStack_20);
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x43)) + 0x22c))((int *)*(int *)((int)this + 4*(0x43)),1);
  (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x43)));
  (**(code **)(*(int *)this + 0x88))(((int)this),auStack_48);
  return;
}

bool BLRoleListView::init()
{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = ((cocos2d::CCLayer *)this)->init();
  if (iVar1 != 0) {
    uVar2 = (undefined4)(((BLRoleListPresenter *)this)->create());
    *(undefined4 *)(((int)this) + 0x108) = uVar2;
    ((cocos2d::CCObject *)this)->retain();
    BLRoleListView::initView();
    ((BLRoleListPresenter *)*(undefined4 *)(((int)this) + 0x108))->initWithView((BLRoleListView*)((int)this));
  }
  return iVar1 != 0;
}
