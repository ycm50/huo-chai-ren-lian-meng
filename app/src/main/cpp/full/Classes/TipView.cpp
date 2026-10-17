#include "TipView.h"
#include "BLLeakUtils.h"
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
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0061f7a0;
extern "C" unsigned long UNK_0061f7ca;
extern "C" unsigned long UNK_0061f828;
extern "C" unsigned long UNK_0061f856;
extern "C" unsigned long UNK_0061f9d0;
extern "C" unsigned long UNK_0061f9d2;
extern "C" unsigned long UNK_0061f9f6;
extern "C" unsigned long UNK_0061fa10;
extern "C" unsigned long _UNK_0061f7fc;
extern "C" unsigned long _UNK_0061f800;
extern "C" unsigned long _UNK_0061f880;
extern "C" unsigned long _UNK_0061f884;
extern "C" unsigned long _UNK_0061f9a4;
extern "C" unsigned long _UNK_0061fa40;
extern "C" unsigned long _UNK_0061fa44;
extern "C" unsigned long _UNK_0061fa48;
extern "C" unsigned long _UNK_0061fa4c;
extern "C" unsigned long g_0061f7a0;
extern "C" unsigned long g_0061f7ca;
extern "C" unsigned long g_0061f7fc;
extern "C" unsigned long g_0061f800;
extern "C" unsigned long g_0061f828;
extern "C" unsigned long g_0061f856;
extern "C" unsigned long g_0061f880;
extern "C" unsigned long g_0061f884;
extern "C" unsigned long g_0061f9a4;
extern "C" unsigned long g_0061f9d0;
extern "C" unsigned long g_0061f9d2;
extern "C" unsigned long g_0061f9f6;
extern "C" unsigned long g_0061fa10;
extern "C" unsigned long g_0061fa40;
extern "C" unsigned long g_0061fa44;
extern "C" unsigned long g_0061fa48;
extern "C" unsigned long g_0061fa4c;
cocos2d::extension::CCScale9Sprite* TipView::getSpriteBg() const
{
  return (cocos2d::extension::CCScale9Sprite*)(*(undefined4 *)(((int)this) + 0x1b4));
}

void TipView::setSpriteBg(cocos2d::extension::CCScale9Sprite* p1)
{
  *(undefined4 *)(((int)this) + 0x1b4) = (undefined4)(intptr_t)p1;
  return;
}

cocos2d::CCLabelTTF* TipView::getLabeDesc() const
{
  return (cocos2d::CCLabelTTF*)(*(undefined4 *)(((int)this) + 0x1b8));
}

void TipView::setLabeDesc(cocos2d::CCLabelTTF* p1)
{
  *(undefined4 *)(((int)this) + 0x1b8) = (undefined4)(intptr_t)p1;
  return;
}

TipView::~TipView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0061f7a0 + g_0061f7fc);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x254;
  *(int *)((int)this + 4*(0x3d)) = iVar2 + 0x294;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0061f7ca + g_0061f800,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCSprite(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

TipView::TipView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_0061f828 + g_0061f880);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x254;
  *(int *)((int)this + 4*(0x3d)) = iVar2 + 0x294;
  *(undefined1 *)(((int)this) + 0x6f) = 0;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0061f856 + g_0061f884,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

void TipView::setData(char const* p1)
{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  code *pcVar5;
  int *piVar6;
  undefined1 auStack_20 [12];
  
  (**(code **)(**(int **)(((int)this) + 0x1b8) + 0x234))();
  piVar6 = *(int **)(((int)this) + 0x1b4);
  pcVar5 = *(code **)(*piVar6 + 0x1d4);
  puVar1 = (undefined4 *)(**(code **)(**(int **)(((int)this) + 0x1b8) + 0x8c))();
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x + _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(*puVar1),(int)(0x40800000)))));
  iVar3 = (**(code **)(**(int **)(((int)this) + 0x1b8) + 0x8c))();
  uVar4 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x + _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(*(undefined4 *)(iVar3 + 4)),(int)(0x40800000)))));
  0 /* ctorZero */;
  (*pcVar5)(piVar6,auStack_20);
  return;
}

void TipView::onEnter()
{
  ((cocos2d::CCNode *)this)->onEnter();
  return;
}

void TipView::onExit()
{
  ((cocos2d::CCNode *)this)->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
bool TipView::init()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;

  int iVar1;
  int iVar2;
  int *piStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  piStack_20 = (int *)((int)this);
  uStack_1c = (undefined4)(p2);
  uStack_18 = (undefined4)(p3);
  iVar1 = (undefined4)(intptr_t)(((cocos2d::CCSprite *)this)->init());
  if (iVar1 != 0) {
    iVar2 = (undefined4)(intptr_t)(cocos2d::CCLabelTTF::create((char const*)(unsigned char *)((char *)&g_0061f9d0 + (intptr_t)(g_0061fa40)), (char const*)(unsigned char *)((char *)&g_0061f9d2 + (intptr_t)(g_0061fa44)), 0x41800000));
    *(int *)((int)this + 4*(0x6e)) = iVar2;
    ((cocos2d::CCLabelTTF *)iVar2)->setHorizontalAlignment((cocos2d::CCTextAlignment)1);
    ((cocos2d::CCLabelTTF *)*(int *)((int)this + 4*(0x6e)))->setVerticalAlignment((cocos2d::CCVerticalTextAlignment)1);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x6e)) + 0x1b4))((int *)*(int *)((int)this + 4*(0x6e)),(unsigned char *)((char *)&g_0061f9f6 + (intptr_t)(g_0061fa48)))
    ;
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x6e)),2);
    func_0079e45c(&uStack_1c,(unsigned char *)((char *)&g_0061fa10 + (intptr_t)(g_0061fa4c)),&piStack_20);
    iVar2 = (undefined4)(intptr_t)(0 /* ctorZero */);
    *(int *)((int)this + 4*(0x6d)) = iVar2;
    func_0079e2bc(&uStack_1c);
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x6d)),1);
  }
  return ghidra_CONCAT44(piStack_20,iVar1);
}
