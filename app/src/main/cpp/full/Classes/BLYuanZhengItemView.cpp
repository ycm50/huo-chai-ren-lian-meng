#include "BLYuanZhengItemView.h"
#include "BLLeakUtils.h"
#include "BLYuanZhengItemPresenter.h"
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
extern "C" unsigned long UNK_006b788c;
extern "C" unsigned long UNK_006b78d0;
extern "C" unsigned long UNK_006b7914;
extern "C" unsigned long UNK_006b793c;
extern "C" unsigned long UNK_006b79ec;
extern "C" unsigned long UNK_006b7a1a;
extern "C" unsigned long UNK_006b7d88;
extern "C" unsigned long UNK_006b7e96;
extern "C" unsigned long UNK_006b7f4e;
extern "C" unsigned long UNK_006b7f52;
extern "C" unsigned long UNK_006b7fee;
extern "C" unsigned long UNK_006b806e;
extern "C" unsigned long UNK_006b809c;
extern "C" unsigned long UNK_006b8166;
extern "C" unsigned long _UNK_006b7900;
extern "C" unsigned long _UNK_006b7904;
extern "C" unsigned long _UNK_006b7918;
extern "C" unsigned long _UNK_006b7940;
extern "C" unsigned long _UNK_006b7a44;
extern "C" unsigned long _UNK_006b7a48;
extern "C" unsigned long _UNK_006b8168;
extern "C" unsigned long _UNK_006b816c;
extern "C" unsigned long _UNK_006b8170;
extern "C" unsigned long _UNK_006b8174;
extern "C" unsigned long _UNK_006b8178;
extern "C" unsigned long _UNK_006b817c;
extern "C" unsigned long _UNK_006b8180;
extern "C" unsigned long _UNK_006b8184;
extern "C" unsigned long _UNK_006b8188;
extern "C" unsigned long _UNK_006b818c;
extern "C" unsigned long _UNK_006b8190;
extern "C" unsigned long _UNK_006b8194;
extern "C" unsigned long _UNK_006b8198;
extern "C" unsigned long _UNK_006b819c;
extern "C" unsigned long _UNK_006b81a0;
extern "C" unsigned long _UNK_006b81a4;
extern "C" unsigned long _UNK_006b81a8;
extern "C" unsigned long _UNK_006b81ac;
extern "C" unsigned long _UNK_006b81b0;
extern "C" unsigned long _UNK_006b8314;
extern "C" unsigned long _UNK_006b8318;
extern "C" unsigned long _UNK_006b831c;
extern "C" unsigned long _UNK_006b8320;
extern "C" unsigned long g_006b788c;
extern "C" unsigned long g_006b78d0;
extern "C" unsigned long g_006b7900;
extern "C" unsigned long g_006b7904;
extern "C" unsigned long g_006b7914;
extern "C" unsigned long g_006b7918;
extern "C" unsigned long g_006b793c;
extern "C" unsigned long g_006b7940;
extern "C" unsigned long g_006b79ec;
extern "C" unsigned long g_006b7a1a;
extern "C" unsigned long g_006b7a44;
extern "C" unsigned long g_006b7a48;
extern "C" unsigned long g_006b7d88;
extern "C" unsigned long g_006b7e96;
extern "C" unsigned long g_006b7f4e;
extern "C" unsigned long g_006b7f52;
extern "C" unsigned long g_006b7fee;
extern "C" unsigned long g_006b806e;
extern "C" unsigned long g_006b809c;
extern "C" unsigned long g_006b8166;
extern "C" unsigned long g_006b8168;
extern "C" unsigned long g_006b816c;
extern "C" unsigned long g_006b8170;
extern "C" unsigned long g_006b8174;
extern "C" unsigned long g_006b8178;
extern "C" unsigned long g_006b817c;
extern "C" unsigned long g_006b8180;
extern "C" unsigned long g_006b8184;
extern "C" unsigned long g_006b8188;
extern "C" unsigned long g_006b818c;
extern "C" unsigned long g_006b8190;
extern "C" unsigned long g_006b8194;
extern "C" unsigned long g_006b8198;
extern "C" unsigned long g_006b819c;
extern "C" unsigned long g_006b81a0;
extern "C" unsigned long g_006b81a4;
extern "C" unsigned long g_006b81a8;
extern "C" unsigned long g_006b81ac;
extern "C" unsigned long g_006b81b0;
extern "C" unsigned long g_006b8314;
extern "C" unsigned long g_006b8318;
extern "C" unsigned long g_006b831c;
extern "C" unsigned long g_006b8320;
int BLYuanZhengItemView::getIndex() const
{
  return *(undefined4 *)(((int)this) + 0x108);
}

void BLYuanZhengItemView::setIndex(int p1)
{
  *(undefined4 *)(((int)this) + 0x108) = p1;
  return;
}

BLYuanZhengItemView::~BLYuanZhengItemView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_006b788c + g_006b7900);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x210;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x240;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x24c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  if (*(int *)((int)this + 4*(0x43)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x43)) = 0;
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_006b78d0 + g_006b7904,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass(*(std::string *)&uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLYuanZhengItemView::BLYuanZhengItemView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_006b79ec + g_006b7a44);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x210;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x240;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x24c;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_006b7a1a + g_006b7a48,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass(*(std::string *)&uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * BLYuanZhengItemView::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(300)));
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

undefined4 BLYuanZhengItemView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 BLYuanZhengItemView::getSprBG()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

undefined4 BLYuanZhengItemView::getSpNum()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

undefined4 BLYuanZhengItemView::getLabName()
{
  return *(undefined4 *)(((int)this) + 0x118);
}

undefined4 BLYuanZhengItemView::getLabFight()
{
  return *(undefined4 *)(((int)this) + 0x11c);
}

undefined4 BLYuanZhengItemView::getBtnInfo()
{
  return *(undefined4 *)(((int)this) + 0x120);
}

undefined4 BLYuanZhengItemView::getSprSel()
{
  return *(undefined4 *)(((int)this) + 0x124);
}

undefined4 BLYuanZhengItemView::getSprimg_icon()
{
  return *(undefined4 *)(((int)this) + 0x128);
}

void BLYuanZhengItemView::onEnter()
{
  ((BLYuanZhengItemPresenter *)*(undefined4 *)(((int)this) + 0x10c))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLYuanZhengItemView::onExit()
{
  ((BLYuanZhengItemPresenter *)*(undefined4 *)(((int)this) + 0x10c))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

bool BLYuanZhengItemView::init()
{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  undefined *puVar7;
  int *piVar8;
  undefined4 auStack_38 [2];
  undefined4 auStack_30 [2];
  undefined1 auStack_28 [4];
  undefined4 uStack_24;
  undefined1 auStack_20 [12];
  
  iVar1 = ((cocos2d::CCLayer *)this)->init();
  if (iVar1 != 0) {
    iVar2 = ((BLYuanZhengItemPresenter *)this)->create((BLYuanZhengItemView*)((int)this));
    *(int *)((int)this + 4*(0x43)) = iVar2;
    if (iVar2 != 0) {
      ((cocos2d::CCObject *)this)->retain();
    }
    uVar3 = (undefined4)(cocos2d::CCDirector::sharedDirector());
    *(CCSize *)auStack_38 = ((cocos2d::CCDirector *)uVar3)->getWinSize();
    func_0079e45c(auStack_20,&g_006b7d88 + g_006b8168,auStack_28);
    iVar2 = 0 /* ctorZero */;
    *(int *)((int)this + 4*(0x44)) = iVar2;
    func_0079e2bc(auStack_20);
    piVar8 = (int *)*(int *)((int)this + 4*(0x44));
    pcVar6 = *(code **)(*piVar8 + 0x88);
    uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(auStack_38[0]),(int)(g_006b816c)))));
    uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar3),(int)(g_006b8170)))));
    uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x - _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar3),(int)(g_006b8174)))));
    0 /* ctorZero */;
    uVar3 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar4 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar3),(int)(uVar4)))));
    uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(auStack_38[0]),(int)(g_006b816c)))));
    uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar3),(int)(g_006b8170)))));
    uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x - _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar3),(int)(g_006b8174)))));
    0 /* ctorZero */;
    uVar3 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar3),(int)(uVar5)))));
    0 /* ctorZero */;
    (*pcVar6)(piVar8,auStack_20);
    piVar8 = (int *)*(int *)((int)this + 4*(0x44));
    pcVar6 = *(code **)(*piVar8 + 0x4c);
    0 /* ctorZero */;
    uVar3 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar4 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar3),(int)(uVar4)))));
    0 /* ctorZero */;
    uVar3 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar3),(int)(uVar5)))));
    0 /* ctorZero */;
    (*pcVar6)(piVar8,auStack_20);
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x44)),1);
    func_0079e45c(auStack_20,&g_006b7e96 + g_006b817c,auStack_28);
    iVar2 = 0 /* ctorZero */;
    *(int *)((int)this + 4*(0x4a)) = iVar2;
    func_0079e2bc(auStack_20);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x4a)) + 0x30))((int *)*(int *)((int)this + 4*(0x4a)),0x3f800000);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x4a)) + 0x38))((int *)*(int *)((int)this + 4*(0x4a)),0x3f800000);
    piVar8 = (int *)*(int *)((int)this + 4*(0x4a));
    pcVar6 = *(code **)(*piVar8 + 0x4c);
    0 /* ctorZero */;
    uVar3 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar4 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar3),(int)(uVar4)))));
    0 /* ctorZero */;
    uVar3 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar3),(int)(uVar5)))));
    0 /* ctorZero */;
    (*pcVar6)(piVar8,auStack_20);
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x4a)),1);
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(g_006b8174),(int)(uVar3)))));
    puVar7 = (undefined *)(&g_006b7f4e + g_006b8184);
    piVar8 = (int *)cocos2d::CCLabelTTF::create((char const*)&g_006b7f52 + g_006b8188, (char const*)puVar7, uVar3);
    *(int *)((int)this + 4*(0x46)) = (int)piVar8;
    pcVar6 = *(code **)(*piVar8 + 0x7c);
    0 /* ctorZero */;
    (*pcVar6)(piVar8,auStack_20);
    piVar8 = (int *)*(int *)((int)this + 4*(0x46));
    pcVar6 = *(code **)(*piVar8 + 0x4c);
    0 /* ctorZero */;
    uVar3 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar4 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar3),(int)(uVar4)))));
    0 /* ctorZero */;
    uVar3 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar3),(int)(uVar5)))));
    0 /* ctorZero */;
    (*pcVar6)(piVar8,auStack_20);
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x46)),2);
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(g_006b8174),(int)(uVar3)))));
    piVar8 = (int *)cocos2d::CCLabelTTF::create((char const*)&g_006b7fee + g_006b8194, (char const*)puVar7, uVar3);
    *(int *)((int)this + 4*(0x47)) = (int)piVar8;
    pcVar6 = *(code **)(*piVar8 + 0x7c);
    0 /* ctorZero */;
    (*pcVar6)(piVar8,auStack_20);
    piVar8 = (int *)*(int *)((int)this + 4*(0x47));
    pcVar6 = *(code **)(*piVar8 + 0x4c);
    0 /* ctorZero */;
    uVar3 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar4 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar3),(int)(uVar4)))));
    0 /* ctorZero */;
    uVar3 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar3),(int)(uVar5)))));
    0 /* ctorZero */;
    (*pcVar6)(piVar8,auStack_20);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x47)) + 0x1b4))((int *)*(int *)((int)this + 4*(0x47)),&g_006b806e + g_006b819c)
    ;
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x47)),2);
    piVar8 = (int *)cocos2d::extension::CCControlButton::create();
    *(int *)((int)this + 4*(0x48)) = (int)piVar8;
    (**(code **)(*piVar8 + 0x294))(piVar8,0);
    func_0079e45c(auStack_20,&g_006b809c + g_006b81a0,auStack_28);
    uVar3 = (undefined4)(0 /* ctorZero */);
    func_0079e2bc(auStack_20);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x48)) + 0x30c))((int *)*(int *)((int)this + 4*(0x48)),uVar3,1);
    piVar8 = (int *)*(int *)((int)this + 4*(0x48));
    pcVar6 = *(code **)(*piVar8 + 0x28c);
    0 /* ctorZero */;
    (*pcVar6)(piVar8,auStack_20);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x48)) + 0x40))((int *)*(int *)((int)this + 4*(0x48)),0x3f800000);
    piVar8 = (int *)*(int *)((int)this + 4*(0x48));
    pcVar6 = *(code **)(*piVar8 + 0x4c);
    0 /* ctorZero */;
    uVar3 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar4 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar3),(int)(uVar4)))));
    0 /* ctorZero */;
    uVar3 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar3),(int)(uVar5)))));
    0 /* ctorZero */;
    (*pcVar6)(piVar8,auStack_20);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x48)) + 0x90))((int *)*(int *)((int)this + 4*(0x48)),0);
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x48)),3);
    func_0079e45c(auStack_20,&g_006b8166 + g_006b81b0,auStack_28);
    iVar2 = 0 /* ctorZero */;
    *(int *)((int)this + 4*(0x49)) = iVar2;
    func_0079e2bc(auStack_20);
    piVar8 = (int *)*(int *)((int)this + 4*(0x49));
    pcVar6 = *(code **)(*piVar8 + 0x88);
    0 /* ctorZero */;
    uVar3 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar4 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar3),(int)(uVar4)))));
    0 /* ctorZero */;
    uVar3 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar3),(int)(uVar5)))));
    0 /* ctorZero */;
    (*pcVar6)(piVar8,auStack_20);
    piVar8 = (int *)*(int *)((int)this + 4*(0x49));
    pcVar6 = *(code **)(*piVar8 + 0x4c);
    0 /* ctorZero */;
    uVar3 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar4 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar3),(int)(uVar4)))));
    0 /* ctorZero */;
    uVar3 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar3),(int)(uVar5)))));
    0 /* ctorZero */;
    (*pcVar6)(piVar8,auStack_20);
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x49)),4);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x49)) + 0x90))((int *)*(int *)((int)this + 4*(0x49)),0);
    pcVar6 = *(code **)(*(int *)this + 0x88);
    0 /* ctorZero */;
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(auStack_30[0]),(int)(uVar3)))));
    0 /* ctorZero */;
    cocos2d::CCDirector::sharedDirector();
    uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar4 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uStack_24),(int)(uVar4)))));
    0 /* ctorZero */;
    (*pcVar6)(((int)this),auStack_20);
    ((BLYuanZhengItemPresenter *)*(int *)((int)this + 4*(0x43)))->initWithView((BLYuanZhengItemView*)((int)this));
  }
  return iVar1;
}
