#include "UIObject.h"
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
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_004c5068;
extern "C" unsigned long UNK_004c5094;
extern "C" unsigned long UNK_004e1d80;
extern "C" unsigned long _DAT_004e1d90;
extern "C" unsigned long _DAT_004e1d94;
extern "C" unsigned long _DAT_004e1d98;
extern "C" unsigned long _UNK_004c50c4;
extern "C" unsigned long _UNK_004c50c8;
extern "C" unsigned long g_004c5068;
extern "C" unsigned long g_004c5094;
extern "C" unsigned long g_004c50c4;
extern "C" unsigned long g_004c50c8;
extern "C" unsigned long g_004e1d80;
extern "C" unsigned long g_004e1d90;
extern "C" unsigned long g_004e1d94;
extern "C" unsigned long g_004e1d98;
unsigned int UIObject::getUiId() const
{
  return *(undefined4 *)(((int)this) + 0x14);
}

void UIObject::setUiId(unsigned int p1)
{
  *(undefined4 *)(((int)this) + 0x14) = p1;
  return;
}

cocos2d::CCLayer* UIObject::getLayer() const
{
  return (cocos2d::CCLayer*)(*(undefined4 *)(((int)this) + 0x18));
}

void UIObject::setLayer(cocos2d::CCLayer* p1)
{
  *(undefined4 *)(((int)this) + 0x18) = (undefined4)(intptr_t)p1;
  return;
}

int UIObject::getHideCount() const
{
  return *(undefined4 *)(((int)this) + 0x1c);
}

void UIObject::setHideCount(int p1)
{
  *(undefined4 *)(((int)this) + 0x1c) = p1;
  return;
}

cocos2d::extension::CCInvocation* UIObject::getOnCloseListener() const
{
  return (cocos2d::extension::CCInvocation*)(*(undefined4 *)(((int)this) + 0x20));
}

bool UIObject::init()
{
  return 1;
}

void UIObject::refreshUi()
{
  return;
}

void UIObject::setOnCloseListener(cocos2d::extension::CCInvocation* p1)
{
  if (*(int *)(((int)this) + 0x20) != (int)(intptr_t)p1) {
    if ((int)(intptr_t)p1 != 0) {
      ((cocos2d::CCObject *)p1)->retain();
    }
    if (*(int *)(((int)this) + 0x20) != 0) {
      ((cocos2d::CCObject *)this)->release();
    }
    *(int *)(((int)this) + 0x20) = (undefined4)(intptr_t)p1;
  }
  return;
}


UIObject::~UIObject()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int *piStack_18;
  undefined4 uStack_14;
  
  /* VPTR_FIX(R87): vptr=(&g_A+g_B)+8 ?? g_ ?? 0 ?? -> ???? SEGV?????? vptr???? */;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  if (*(int *)((int)this + 4*(6)) != 0) {
    ((cocos2d::CCObject *)this)->release();
  }
  if (*(int *)((int)this + 4*(8)) != 0) {
    ((cocos2d::CCObject *)this)->release();
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_004c5094 + g_004c50c8,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

UIObject::UIObject()
{
  undefined4 uVar1;
  int *piVar2;
  code *pcVar3;
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [12];
  
  0 /* ctorZero */;
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  *(int *)((int)this + 4*(6)) = 0;
  *(int *)((int)this + 4*(7)) = 0;
  *(int *)((int)this + 4*(8)) = 0;
  uVar1 = (undefined4)(cocos2d::CCDirector::sharedDirector());
  *(CCSize *)auStack_28 = ((cocos2d::CCDirector *)uVar1)->getWinSize();
  piVar2 = (int *)cocos2d::CCLayer::create();
  *(int *)((int)this + 4*(6)) = (int)piVar2;
  (**(code **)(*piVar2 + 0x88))(piVar2,auStack_28);
  if (*(int *)((int)this + 4*(6)) != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  piVar2 = (int *)*(int *)((int)this + 4*(6));
  pcVar3 = *(code **)(*piVar2 + 0x7c);
  0 /* ctorZero */;
  (*pcVar3)(piVar2,auStack_20);
  (**(code **)(*(int *)*(int *)((int)this + 4*(6)) + 0x4c))((int *)*(int *)((int)this + 4*(6)),&g_004e1d80 + g_004e1d94);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(auStack_20,((intptr_t)"UIObject"),auStack_2c);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)auStack_20);
  func_0079e2bc(auStack_20);
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
void UIObject::onCloseUi()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
