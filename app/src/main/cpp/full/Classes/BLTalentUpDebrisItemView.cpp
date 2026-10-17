#include "BLTalentUpDebrisItemView.h"
#include "BLLeakUtils.h"
#include "BLTalentUpDebrisItemPresenter.h"
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
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e57c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_006a3b88;
extern "C" unsigned long UNK_006a3bba;
extern "C" unsigned long UNK_006a3c14;
extern "C" unsigned long UNK_006a3cd4;
extern "C" unsigned long UNK_006a3d14;
extern "C" unsigned long UNK_006a3d42;
extern "C" unsigned long UNK_006a3d9e;
extern "C" unsigned long UNK_006a3e08;
extern "C" unsigned long UNK_006a3e56;
extern "C" unsigned long UNK_006a3eca;
extern "C" unsigned long UNK_006a3ece;
extern "C" unsigned long UNK_006a3f4e;
extern "C" unsigned long UNK_006a3f78;
extern "C" unsigned long _UNK_006a3c00;
extern "C" unsigned long _UNK_006a3c04;
extern "C" unsigned long _UNK_006a3c18;
extern "C" unsigned long _UNK_006a3cd8;
extern "C" unsigned long _UNK_006a3d6c;
extern "C" unsigned long _UNK_006a3d70;
extern "C" unsigned long _UNK_006a3fd0;
extern "C" unsigned long _UNK_006a3fd4;
extern "C" unsigned long _UNK_006a3fd8;
extern "C" unsigned long _UNK_006a3fdc;
extern "C" unsigned long _UNK_006a3fe0;
extern "C" unsigned long _UNK_006a3fe4;
extern "C" unsigned long _UNK_006a3fe8;
extern "C" unsigned long _UNK_006a3fec;
extern "C" unsigned long _UNK_006a3ff0;
extern "C" unsigned long g_006a3b88;
extern "C" unsigned long g_006a3bba;
extern "C" unsigned long g_006a3c00;
extern "C" unsigned long g_006a3c04;
extern "C" unsigned long g_006a3c14;
extern "C" unsigned long g_006a3c18;
extern "C" unsigned long g_006a3cd4;
extern "C" unsigned long g_006a3cd8;
extern "C" unsigned long g_006a3d14;
extern "C" unsigned long g_006a3d42;
extern "C" unsigned long g_006a3d6c;
extern "C" unsigned long g_006a3d70;
extern "C" unsigned long g_006a3d9e;
extern "C" unsigned long g_006a3e08;
extern "C" unsigned long g_006a3e56;
extern "C" unsigned long g_006a3eca;
extern "C" unsigned long g_006a3ece;
extern "C" unsigned long g_006a3f4e;
extern "C" unsigned long g_006a3f78;
extern "C" unsigned long g_006a3fd0;
extern "C" unsigned long g_006a3fd4;
extern "C" unsigned long g_006a3fd8;
extern "C" unsigned long g_006a3fdc;
extern "C" unsigned long g_006a3fe0;
extern "C" unsigned long g_006a3fe4;
extern "C" unsigned long g_006a3fe8;
extern "C" unsigned long g_006a3fec;
extern "C" unsigned long g_006a3ff0;
BLTalentUpDebrisItemView::~BLTalentUpDebrisItemView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_006a3b88 + g_006a3c00);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_006a3bba + g_006a3c04,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  if (*(int *)((int)this + 4*(0x42)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x42)) = 0;
  }
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLTalentUpDebrisItemView::BLTalentUpDebrisItemView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_006a3d14 + g_006a3d6c);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_006a3d42 + g_006a3d70,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}


undefined4 BLTalentUpDebrisItemView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x108);
}

undefined4 BLTalentUpDebrisItemView::getSpIcon()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 BLTalentUpDebrisItemView::getBtn()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

undefined4 BLTalentUpDebrisItemView::getLabCur()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

undefined4 BLTalentUpDebrisItemView::getLabNeed()
{
  return *(undefined4 *)(((int)this) + 0x118);
}

bool BLTalentUpDebrisItemView::init()
{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = ((cocos2d::CCLayer *)this)->init();
  if (iVar1 != 0) {
    uVar2 = (undefined4)(((BLTalentUpDebrisItemPresenter *)this)->create());
    *(undefined4 *)(((int)this) + 0x108) = uVar2;
    ((cocos2d::CCObject *)this)->retain();
    BLTalentUpDebrisItemView::initView();
    ((BLTalentUpDebrisItemPresenter *)*(undefined4 *)(((int)this) + 0x108))->initWithView((BLTalentUpDebrisItemView*)((int)this));
  }
  return iVar1;
}

void BLTalentUpDebrisItemView::onEnter()
{
  ((BLTalentUpDebrisItemPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLTalentUpDebrisItemView::onExit()
{
  ((BLTalentUpDebrisItemPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
void BLTalentUpDebrisItemView::initView()
{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  undefined *puVar6;
  int *piVar7;
  undefined1 auStack_34 [4];
  undefined1 auStack_30 [4];
  undefined4 uStack_2c;
  undefined1 auStack_28 [4];
  int iStack_24;
  undefined1 uStack_20;
  undefined1 uStack_1f;
  undefined1 uStack_1e;
  
  0 /* ctorZero */;
  0 /* ctorZero */;
  func_0079e45c(&uStack_20,(unsigned char *)((char *)&g_006a3d9e + (intptr_t)(g_006a3fd8)),auStack_34);
  piVar1 = (int *)0 /* ctorZero */;
  func_0079e2bc(&uStack_20);
  pcVar5 = *(code **)(*piVar1 + 0x1d4);
  0 /* ctorZero */;
  (*pcVar5)(piVar1,&uStack_20);
  pcVar5 = *(code **)(*piVar1 + 0x4c);
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x - _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uStack_2c),(int)(iStack_24)))));
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar2),(int)(0x3f000000)))));
  0 /* ctorZero */;
  (*pcVar5)(piVar1,&uStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),piVar1);
  func_0079e45c(&uStack_20,(unsigned char *)((char *)&g_006a3e08 + (intptr_t)(g_006a3fdc)),auStack_34);
  iVar3 = (undefined4)(intptr_t)(0 /* ctorZero */);
  *(int *)((int)this + 4*(0x43)) = iVar3;
  func_0079e2bc(&uStack_20);
  piVar7 = (int *)*(int *)((int)this + 4*(0x43));
  pcVar5 = *(code **)(*piVar7 + 0x4c);
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x50))(piVar1));
  (*pcVar5)(piVar7,uVar2);
  (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x43)));
  iVar4 = (undefined4)(intptr_t)(cocos2d::extension::CCControlButton::create());
  iVar3 = (undefined4)(intptr_t)(g_006a3fe0);
  *(int *)((int)this + 4*(0x44)) = iVar4;
  func_0079e45c(&uStack_20,&g_006a3e56 + iVar3,auStack_34);
  uVar2 = (undefined4)(0 /* ctorZero */);
  func_0079e2bc(&uStack_20);
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x44)) + 0x30c))((int *)*(int *)((int)this + 4*(0x44)),uVar2,1);
  piVar7 = (int *)*(int *)((int)this + 4*(0x44));
  pcVar5 = *(code **)(*piVar7 + 0x28c);
  0 /* ctorZero */;
  (*pcVar5)(piVar7,&uStack_20);
  piVar7 = (int *)*(int *)((int)this + 4*(0x44));
  pcVar5 = *(code **)(*piVar7 + 0x4c);
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x50))(piVar1));
  (*pcVar5)(piVar7,uVar2);
  (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x44)));
  puVar6 = (unsigned char *)((char *)&g_006a3eca + (intptr_t)(g_006a3fe4));
  piVar1 = (int *)cocos2d::CCLabelTTF::create((char const*)(unsigned char *)((char *)&g_006a3ece + (intptr_t)(g_006a3fe8)), (char const*)puVar6, 0x41800000);
  *(int *)((int)this + 4*(0x45)) = (int)piVar1;
  pcVar5 = *(code **)(*piVar1 + 0x7c);
  0 /* ctorZero */;
  (*pcVar5)(piVar1,&uStack_20);
  uStack_20 = 0x11;
  uStack_1f = 0xab;
  uStack_1e = 0;
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x45)) + 0x1b4))();
  piVar1 = (int *)*(int *)((int)this + 4*(0x45));
  pcVar5 = *(code **)(*piVar1 + 0x4c);
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(iStack_24 + -0x80000000),(int)(0x3f000000)))));
  0 /* ctorZero */;
  (*pcVar5)(piVar1,&uStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x45)));
  piVar1 = (int *)cocos2d::CCLabelTTF::create((char const*)(unsigned char *)((char *)&g_006a3f4e + (intptr_t)(g_006a3fec)), (char const*)puVar6, 0x41800000);
  *(int *)((int)this + 4*(0x46)) = (int)piVar1;
  pcVar5 = *(code **)(*piVar1 + 0x7c);
  0 /* ctorZero */;
  (*pcVar5)(piVar1,&uStack_20);
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x46)) + 0x1b4))((int *)*(int *)((int)this + 4*(0x46)),(unsigned char *)((char *)&g_006a3f78 + (intptr_t)(g_006a3ff0)));
  piVar1 = (int *)*(int *)((int)this + 4*(0x46));
  pcVar5 = *(code **)(*piVar1 + 0x4c);
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(iStack_24 + -0x80000000),(int)(0x3f000000)))));
  0 /* ctorZero */;
  (*pcVar5)(piVar1,&uStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x46)));
  (**(code **)(*(int *)this + 0x88))(((int)this),auStack_30);
  return;
}
