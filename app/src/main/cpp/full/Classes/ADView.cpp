#include "ADView.h"
#include "ADPresenter.h"
#include "BLLeakUtils.h"
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
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_004f4a04;
extern "C" unsigned long UNK_004f4a48;
extern "C" unsigned long UNK_004f4a8c;
extern "C" unsigned long UNK_004f4ab4;
extern "C" unsigned long UNK_004f4c54;
extern "C" unsigned long UNK_004f4d36;
extern "C" unsigned long UNK_004f4e20;
extern "C" unsigned long UNK_004f4ec6;
extern "C" unsigned long UNK_004f4ec8;
extern "C" unsigned long _DAT_004f4b54;
extern "C" unsigned long _DAT_004f4b58;
extern "C" unsigned long _UNK_004f4a78;
extern "C" unsigned long _UNK_004f4a7c;
extern "C" unsigned long _UNK_004f4a90;
extern "C" unsigned long _UNK_004f4ab8;
extern "C" unsigned long _UNK_004f5018;
extern "C" unsigned long _UNK_004f501c;
extern "C" unsigned long _UNK_004f5020;
extern "C" unsigned long _UNK_004f5024;
extern "C" unsigned long _UNK_004f5028;
extern "C" unsigned long _UNK_004f502c;
extern "C" unsigned long _UNK_004f5030;
extern "C" unsigned long _UNK_004f5034;
extern "C" unsigned long _UNK_004f5038;
extern "C" unsigned long _UNK_004f503c;
extern "C" unsigned long _UNK_004f5040;
extern "C" unsigned long g_004f4a04;
extern "C" unsigned long g_004f4a48;
extern "C" unsigned long g_004f4a78;
extern "C" unsigned long g_004f4a7c;
extern "C" unsigned long g_004f4a8c;
extern "C" unsigned long g_004f4a90;
extern "C" unsigned long g_004f4ab4;
extern "C" unsigned long g_004f4ab8;
extern "C" unsigned long g_004f4b54;
extern "C" unsigned long g_004f4b58;
extern "C" unsigned long g_004f4c54;
extern "C" unsigned long g_004f4d36;
extern "C" unsigned long g_004f4e20;
extern "C" unsigned long g_004f4ec6;
extern "C" unsigned long g_004f4ec8;
extern "C" unsigned long g_004f5018;
extern "C" unsigned long g_004f501c;
extern "C" unsigned long g_004f5020;
extern "C" unsigned long g_004f5024;
extern "C" unsigned long g_004f5028;
extern "C" unsigned long g_004f502c;
extern "C" unsigned long g_004f5030;
extern "C" unsigned long g_004f5034;
extern "C" unsigned long g_004f5038;
extern "C" unsigned long g_004f503c;
extern "C" unsigned long g_004f5040;
ADView::~ADView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_004f4a04 + g_004f4a78);
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
  func_0079e45c(&uStack_14,&g_004f4a48 + g_004f4a7c,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

ADView::ADView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(g_004f4b54 + 0x4f4afc);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"ADView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * ADView::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x120)));
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

undefined4 ADView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x108);
}

undefined4 ADView::getBackGround()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

undefined4 ADView::getTabBg()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 ADView::getLabTitle()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

undefined4 ADView::getBtnClose()
{
  return *(undefined4 *)(((int)this) + 0x118);
}

undefined4 ADView::getScrollview()
{
  return *(undefined4 *)(((int)this) + 0x11c);
}

void ADView::onEnter()
{
  ((ADPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void ADView::onExit()
{
  ((ADPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
bool ADView::init()
{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  code *pcVar7;
  int *piVar8;
  int *piVar9;
  undefined4 auStack_30 [2];
  undefined1 auStack_28 [4];
  undefined4 uStack_24;
  undefined1 uStack_20;
  undefined1 uStack_1f;
  undefined1 uStack_1e;
  
  iVar1 = (undefined4)(intptr_t)(((cocos2d::CCLayer *)this)->init());
  if (iVar1 != 0) {
    iVar2 = (undefined4)(intptr_t)(((ADPresenter *)this)->create((ADView*)((int)this)));
    *(int *)((int)this + 4*(0x42)) = iVar2;
    if (iVar2 != 0) {
      ((cocos2d::CCObject *)this)->retain();
    }
    func_0079e45c(&uStack_20,(unsigned char *)((char *)&g_004f4c54 + (intptr_t)(g_004f5018)),auStack_28);
    iVar2 = (undefined4)(intptr_t)(0 /* ctorZero */);
    *(int *)((int)this + 4*(0x44)) = iVar2;
    func_0079e2bc(&uStack_20);
    piVar8 = (int *)*(int *)((int)this + 4*(0x44));
    pcVar7 = *(code **)(*piVar8 + 0x88);
    0 /* ctorZero */;
    uVar5 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar5),(int)(uVar3)))));
    0 /* ctorZero */;
    uVar5 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar5),(int)(uVar4)))));
    0 /* ctorZero */;
    (*pcVar7)(piVar8,&uStack_20);
    piVar8 = (int *)*(int *)((int)this + 4*(0x44));
    pcVar7 = *(code **)(*piVar8 + 0x4c);
    0 /* ctorZero */;
    uVar5 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar5),(int)(uVar3)))));
    0 /* ctorZero */;
    uVar5 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar5),(int)(uVar4)))));
    0 /* ctorZero */;
    (*pcVar7)(piVar8,&uStack_20);
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x44)),1);
    func_0079e45c(&uStack_20,(unsigned char *)((char *)&g_004f4d36 + (intptr_t)(g_004f5024)),auStack_28);
    iVar2 = (undefined4)(intptr_t)(0 /* ctorZero */);
    *(int *)((int)this + 4*(0x43)) = iVar2;
    func_0079e2bc(&uStack_20);
    piVar8 = (int *)*(int *)((int)this + 4*(0x43));
    pcVar7 = *(code **)(*piVar8 + 0x88);
    0 /* ctorZero */;
    uVar5 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar5),(int)(uVar3)))));
    0 /* ctorZero */;
    uVar5 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar5),(int)(uVar4)))));
    0 /* ctorZero */;
    (*pcVar7)(piVar8,&uStack_20);
    piVar8 = (int *)*(int *)((int)this + 4*(0x43));
    pcVar7 = *(code **)(*piVar8 + 0x4c);
    0 /* ctorZero */;
    uVar5 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar5),(int)(uVar3)))));
    0 /* ctorZero */;
    uVar5 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar5),(int)(uVar4)))));
    0 /* ctorZero */;
    (*pcVar7)(piVar8,&uStack_20);
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x43)),2);
    func_0079e45c(&uStack_20,(unsigned char *)((char *)&g_004f4e20 + (intptr_t)(g_004f5030)),auStack_28);
    piVar8 = (int *)0 /* ctorZero */;
    func_0079e2bc(&uStack_20);
    iVar2 = (undefined4)(intptr_t)(cocos2d::extension::CCControlButton::create((cocos2d::extension::CCScale9Sprite*)piVar8));
    *(int *)((int)this + 4*(0x46)) = iVar2;
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x43)) + 0xcc))((int *)*(int *)((int)this + 4*(0x43)),iVar2,3);
    piVar9 = (int *)*(int *)((int)this + 4*(0x46));
    pcVar7 = *(code **)(*piVar9 + 0x28c);
    (**(code **)(*piVar8 + 0x1cc))(&uStack_20,piVar8);
    (*pcVar7)(piVar9,&uStack_20);
    piVar8 = (int *)*(int *)((int)this + 4*(0x46));
    pcVar7 = *(code **)(*piVar8 + 0x5c);
    puVar6 = (undefined4 *)(**(code **)(*(int *)*(int *)((int)this + 4*(0x43)) + 0x8c))();
    uVar5 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x - _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(*puVar6),(int)(g_004f5034)))));
    (*pcVar7)(piVar8,uVar5);
    piVar8 = (int *)*(int *)((int)this + 4*(0x46));
    pcVar7 = *(code **)(*piVar8 + 100);
    iVar2 = (undefined4)(intptr_t)((**(code **)(*(int *)*(int *)((int)this + 4*(0x43)) + 0x8c))());
    uVar5 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(*(undefined4 *)(iVar2 + 4)),(int)(0x3f000000)))));
    (*pcVar7)(piVar8,uVar5);
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(g_004f5038),(int)(uVar5)))));
    piVar8 = (int *)cocos2d::CCLabelTTF::create((char const*)(unsigned char *)((char *)&g_004f4ec8 + (intptr_t)(g_004f5040)), (char const*)(unsigned char *)((char *)&g_004f4ec6 + (intptr_t)(g_004f503c)), uVar5);
    *(int *)((int)this + 4*(0x45)) = (int)piVar8;
    pcVar7 = *(code **)(*piVar8 + 0x7c);
    0 /* ctorZero */;
    (*pcVar7)(piVar8,&uStack_20);
    uStack_20 = 0xff;
    uStack_1f = 0xff;
    uStack_1e = 0xff;
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x45)) + 0x1b4))((int *)*(int *)((int)this + 4*(0x45)),&uStack_20);
    piVar8 = (int *)*(int *)((int)this + 4*(0x45));
    pcVar7 = *(code **)(*piVar8 + 0x4c);
    puVar6 = (undefined4 *)(**(code **)(*(int *)*(int *)((int)this + 4*(0x43)) + 0x8c))();
    uVar5 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(*puVar6),(int)(0x3f000000)))));
    iVar2 = (undefined4)(intptr_t)((**(code **)(*(int *)*(int *)((int)this + 4*(0x43)) + 0x8c))());
    uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(*(undefined4 *)(iVar2 + 4)),(int)(0x3f000000)))));
    0 /* ctorZero */;
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(auStack_30[0]),(int)(uVar5)))));
    puVar6 = (undefined4 *)(**(code **)(*(int *)*(int *)((int)this + 4*(0x43)) + 0x8c))();
    uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(*puVar6),(int)(0x3f000000)))));
    iVar2 = (undefined4)(intptr_t)((**(code **)(*(int *)*(int *)((int)this + 4*(0x43)) + 0x8c))());
    uVar4 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(*(undefined4 *)(iVar2 + 4)),(int)(0x3f000000)))));
    0 /* ctorZero */;
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uStack_24),(int)(uVar3)))));
    0 /* ctorZero */;
    (*pcVar7)(piVar8,&uStack_20);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x43)) + 200))((int *)*(int *)((int)this + 4*(0x43)),*(int *)((int)this + 4*(0x45)));
    iVar2 = (undefined4)(intptr_t)(cocos2d::extension::CCScrollView::create());
    *(int *)((int)this + 4*(0x47)) = iVar2;
    uVar5 = (undefined4)(cocos2d::CCNode::create());
    ((cocos2d::extension::CCScrollView *)iVar2)->setContainer((cocos2d::CCNode*)uVar5);
    piVar8 = (int *)*(int *)((int)this + 4*(0x47));
    pcVar7 = *(code **)(*piVar8 + 0x7c);
    0 /* ctorZero */;
    (*pcVar7)(piVar8,&uStack_20);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x47)) + 0x1fc))((int *)*(int *)((int)this + 4*(0x47)),1);
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x47)),3);
    ((ADPresenter *)*(int *)((int)this + 4*(0x42)))->initWithView((ADView*)((int)this));
  }
  return iVar1;
}
