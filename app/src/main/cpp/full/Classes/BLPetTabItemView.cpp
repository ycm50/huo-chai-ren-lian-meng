#include "BLPetTabItemView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLPetTabItemPresenter.h"
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
extern "C" long long ghidra_CONCAT13(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0060ed8c;
extern "C" unsigned long UNK_0060edde;
extern "C" unsigned long UNK_0060ee24;
extern "C" unsigned long UNK_0060ee4c;
extern "C" unsigned long UNK_0060ee94;
extern "C" unsigned long UNK_0060eed0;
extern "C" unsigned long UNK_0060effc;
extern "C" unsigned long UNK_0060f0e6;
extern "C" unsigned long UNK_0060f112;
extern "C" unsigned long UNK_0060f1d2;
extern "C" unsigned long UNK_0060f206;
extern "C" unsigned long UNK_0060f2c4;
extern "C" unsigned long UNK_0060f2ee;
extern "C" unsigned long _UNK_0060ee10;
extern "C" unsigned long _UNK_0060ee14;
extern "C" unsigned long _UNK_0060ee28;
extern "C" unsigned long _UNK_0060ee50;
extern "C" unsigned long _UNK_0060ef04;
extern "C" unsigned long _UNK_0060ef08;
extern "C" unsigned long _UNK_0060f3dc;
extern "C" unsigned long _UNK_0060f3e0;
extern "C" unsigned long _UNK_0060f3e4;
extern "C" unsigned long _UNK_0060f3e8;
extern "C" unsigned long _UNK_0060f3ec;
extern "C" unsigned long _UNK_0060f3f0;
extern "C" unsigned long _UNK_0060f3f4;
extern "C" unsigned long _UNK_0060f3f8;
extern "C" unsigned long _UNK_0060f3fc;
extern "C" unsigned long _UNK_0060f400;
extern "C" unsigned long _UNK_0060f404;
extern "C" unsigned long _UNK_0060f408;
extern "C" unsigned long _UNK_0060f40c;
extern "C" unsigned long _UNK_0060f410;
extern "C" unsigned long _UNK_0060f414;
extern "C" unsigned long _UNK_0060f418;
extern "C" unsigned long g_0060ed8c;
extern "C" unsigned long g_0060edde;
extern "C" unsigned long g_0060ee10;
extern "C" unsigned long g_0060ee14;
extern "C" unsigned long g_0060ee24;
extern "C" unsigned long g_0060ee28;
extern "C" unsigned long g_0060ee4c;
extern "C" unsigned long g_0060ee50;
extern "C" unsigned long g_0060ee94;
extern "C" unsigned long g_0060eed0;
extern "C" unsigned long g_0060ef04;
extern "C" unsigned long g_0060ef08;
extern "C" unsigned long g_0060effc;
extern "C" unsigned long g_0060f0e6;
extern "C" unsigned long g_0060f112;
extern "C" unsigned long g_0060f1d2;
extern "C" unsigned long g_0060f206;
extern "C" unsigned long g_0060f2c4;
extern "C" unsigned long g_0060f2ee;
extern "C" unsigned long g_0060f3dc;
extern "C" unsigned long g_0060f3e0;
extern "C" unsigned long g_0060f3e4;
extern "C" unsigned long g_0060f3e8;
extern "C" unsigned long g_0060f3ec;
extern "C" unsigned long g_0060f3f0;
extern "C" unsigned long g_0060f3f4;
extern "C" unsigned long g_0060f3f8;
extern "C" unsigned long g_0060f3fc;
extern "C" unsigned long g_0060f400;
extern "C" unsigned long g_0060f404;
extern "C" unsigned long g_0060f408;
extern "C" unsigned long g_0060f40c;
extern "C" unsigned long g_0060f410;
extern "C" unsigned long g_0060f414;
extern "C" unsigned long g_0060f418;
BLPetTabItemView::~BLPetTabItemView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0060ed8c + g_0060ee10);
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
  if (*(int *)((int)this + 4*(0x43)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x43)) = 0;
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0060edde + g_0060ee14,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLPetTabItemView::BLPetTabItemView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = (undefined4)(intptr_t)(*(int *)((unsigned char *)((char *)&g_0060ee94 + (intptr_t)(g_0060ef04))));
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  iVar2 = (undefined4)(intptr_t)(cocos2d::CCArray::create());
  *(int *)((int)this + 4*(0x42)) = iVar2;
  if (iVar2 != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,(unsigned char *)((char *)&g_0060eed0 + (intptr_t)(g_0060ef08)),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * BLPetTabItemView::create()
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

undefined4 BLPetTabItemView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 BLPetTabItemView::getssp_TabBG123()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

undefined4 BLPetTabItemView::getLabName()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

undefined4 BLPetTabItemView::getLabLV()
{
  return *(undefined4 *)(((int)this) + 0x118);
}

undefined4 BLPetTabItemView::getLabAlert()
{
  return *(undefined4 *)(((int)this) + 0x11c);
}

void BLPetTabItemView::onEnter()
{
  ((BLPetTabItemPresenter *)*(undefined4 *)(((int)this) + 0x10c))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLPetTabItemView::onExit()
{
  ((BLPetTabItemPresenter *)*(undefined4 *)(((int)this) + 0x10c))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

bool BLPetTabItemView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
