#include "BLItemDataInfoDownView.h"
#include "BLItemDataInfoDownPresenter.h"
#include "BLLanguage.h"
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
extern "C" long long ghidra_CONCAT13(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_005fdd6c;
extern "C" unsigned long UNK_005fddbe;
extern "C" unsigned long UNK_005fde04;
extern "C" unsigned long UNK_005fde2c;
extern "C" unsigned long UNK_005fde74;
extern "C" unsigned long UNK_005fdeb0;
extern "C" unsigned long UNK_005fe0ba;
extern "C" unsigned long UNK_005fe176;
extern "C" unsigned long UNK_005fe26a;
extern "C" unsigned long UNK_005fe29c;
extern "C" unsigned long UNK_005fe36e;
extern "C" unsigned long UNK_005fe3a2;
extern "C" unsigned long UNK_005fe46e;
extern "C" unsigned long UNK_005fe4a0;
extern "C" unsigned long UNK_005fe5b4;
extern "C" unsigned long UNK_005fe5de;
extern "C" unsigned long UNK_005fe6a6;
extern "C" unsigned long UNK_005fe6d4;
extern "C" unsigned long UNK_005fe7ac;
extern "C" unsigned long UNK_005fe7d4;
extern "C" unsigned long UNK_005fe8ac;
extern "C" unsigned long UNK_005fe8d4;
extern "C" unsigned long UNK_005fe9ec;
extern "C" unsigned long UNK_005fea16;
extern "C" unsigned long UNK_005fead2;
extern "C" unsigned long UNK_005feafc;
extern "C" unsigned long UNK_005febc0;
extern "C" unsigned long UNK_005febea;
extern "C" unsigned long UNK_005fecaa;
extern "C" unsigned long UNK_005fecd4;
extern "C" unsigned long UNK_005fed90;
extern "C" unsigned long _UNK_005fddf0;
extern "C" unsigned long _UNK_005fddf4;
extern "C" unsigned long _UNK_005fde08;
extern "C" unsigned long _UNK_005fde30;
extern "C" unsigned long _UNK_005fdee4;
extern "C" unsigned long _UNK_005fdee8;
extern "C" unsigned long _UNK_005fe0c0;
extern "C" unsigned long _UNK_005fe0c4;
extern "C" unsigned long _UNK_005fe558;
extern "C" unsigned long _UNK_005fe55c;
extern "C" unsigned long _UNK_005fe560;
extern "C" unsigned long _UNK_005fe564;
extern "C" unsigned long _UNK_005fe568;
extern "C" unsigned long _UNK_005fe56c;
extern "C" unsigned long _UNK_005fe570;
extern "C" unsigned long _UNK_005fe574;
extern "C" unsigned long _UNK_005fe578;
extern "C" unsigned long _UNK_005fe57c;
extern "C" unsigned long _UNK_005fe580;
extern "C" unsigned long _UNK_005fe584;
extern "C" unsigned long _UNK_005fe588;
extern "C" unsigned long _UNK_005fe58c;
extern "C" unsigned long _UNK_005fe590;
extern "C" unsigned long _UNK_005fe594;
extern "C" unsigned long _UNK_005fe994;
extern "C" unsigned long _UNK_005fe998;
extern "C" unsigned long _UNK_005fe99c;
extern "C" unsigned long _UNK_005fe9a0;
extern "C" unsigned long _UNK_005fe9a4;
extern "C" unsigned long _UNK_005fe9a8;
extern "C" unsigned long _UNK_005fe9ac;
extern "C" unsigned long _UNK_005fe9b0;
extern "C" unsigned long _UNK_005fe9b4;
extern "C" unsigned long _UNK_005fe9b8;
extern "C" unsigned long _UNK_005fe9bc;
extern "C" unsigned long _UNK_005fe9c0;
extern "C" unsigned long _UNK_005fe9c4;
extern "C" unsigned long _UNK_005fe9c8;
extern "C" unsigned long _UNK_005fe9cc;
extern "C" unsigned long _UNK_005fe9d0;
extern "C" unsigned long _UNK_005fe9d4;
extern "C" unsigned long _UNK_005fedcc;
extern "C" unsigned long _UNK_005fedd0;
extern "C" unsigned long _UNK_005fedd4;
extern "C" unsigned long _UNK_005fedd8;
extern "C" unsigned long _UNK_005feddc;
extern "C" unsigned long _UNK_005fede0;
extern "C" unsigned long _UNK_005fede4;
extern "C" unsigned long _UNK_005fede8;
extern "C" unsigned long _UNK_005fedec;
extern "C" unsigned long _UNK_005fedf0;
extern "C" unsigned long _UNK_005fedf4;
extern "C" unsigned long _UNK_005fedf8;
extern "C" unsigned long _UNK_005fedfc;
extern "C" unsigned long _UNK_005fee00;
extern "C" unsigned long _UNK_005fee04;
extern "C" unsigned long _UNK_005fee08;
extern "C" unsigned long _UNK_005fee0c;
extern "C" unsigned long _UNK_005fee10;
extern "C" unsigned long _UNK_005fee14;
extern "C" unsigned long _UNK_005fee18;
extern "C" unsigned long _UNK_005fef78;
extern "C" unsigned long _UNK_005fef7c;
extern "C" unsigned long _UNK_005fef80;
extern "C" unsigned long _UNK_005fef84;
extern "C" unsigned long g_005fdd6c;
extern "C" unsigned long g_005fddbe;
extern "C" unsigned long g_005fddf0;
extern "C" unsigned long g_005fddf4;
extern "C" unsigned long g_005fde04;
extern "C" unsigned long g_005fde08;
extern "C" unsigned long g_005fde2c;
extern "C" unsigned long g_005fde30;
extern "C" unsigned long g_005fde74;
extern "C" unsigned long g_005fdeb0;
extern "C" unsigned long g_005fdee4;
extern "C" unsigned long g_005fdee8;
extern "C" unsigned long g_005fe0ba;
extern "C" unsigned long g_005fe0c0;
extern "C" unsigned long g_005fe0c4;
extern "C" unsigned long g_005fe176;
extern "C" unsigned long g_005fe26a;
extern "C" unsigned long g_005fe29c;
extern "C" unsigned long g_005fe36e;
extern "C" unsigned long g_005fe3a2;
extern "C" unsigned long g_005fe46e;
extern "C" unsigned long g_005fe4a0;
extern "C" unsigned long g_005fe558;
extern "C" unsigned long g_005fe55c;
extern "C" unsigned long g_005fe560;
extern "C" unsigned long g_005fe564;
extern "C" unsigned long g_005fe568;
extern "C" unsigned long g_005fe56c;
extern "C" unsigned long g_005fe570;
extern "C" unsigned long g_005fe574;
extern "C" unsigned long g_005fe578;
extern "C" unsigned long g_005fe57c;
extern "C" unsigned long g_005fe580;
extern "C" unsigned long g_005fe584;
extern "C" unsigned long g_005fe588;
extern "C" unsigned long g_005fe58c;
extern "C" unsigned long g_005fe590;
extern "C" unsigned long g_005fe594;
extern "C" unsigned long g_005fe5b4;
extern "C" unsigned long g_005fe5de;
extern "C" unsigned long g_005fe6a6;
extern "C" unsigned long g_005fe6d4;
extern "C" unsigned long g_005fe7ac;
extern "C" unsigned long g_005fe7d4;
extern "C" unsigned long g_005fe8ac;
extern "C" unsigned long g_005fe8d4;
extern "C" unsigned long g_005fe994;
extern "C" unsigned long g_005fe998;
extern "C" unsigned long g_005fe99c;
extern "C" unsigned long g_005fe9a0;
extern "C" unsigned long g_005fe9a4;
extern "C" unsigned long g_005fe9a8;
extern "C" unsigned long g_005fe9ac;
extern "C" unsigned long g_005fe9b0;
extern "C" unsigned long g_005fe9b4;
extern "C" unsigned long g_005fe9b8;
extern "C" unsigned long g_005fe9bc;
extern "C" unsigned long g_005fe9c0;
extern "C" unsigned long g_005fe9c4;
extern "C" unsigned long g_005fe9c8;
extern "C" unsigned long g_005fe9cc;
extern "C" unsigned long g_005fe9d0;
extern "C" unsigned long g_005fe9d4;
extern "C" unsigned long g_005fe9ec;
extern "C" unsigned long g_005fea16;
extern "C" unsigned long g_005fead2;
extern "C" unsigned long g_005feafc;
extern "C" unsigned long g_005febc0;
extern "C" unsigned long g_005febea;
extern "C" unsigned long g_005fecaa;
extern "C" unsigned long g_005fecd4;
extern "C" unsigned long g_005fed90;
extern "C" unsigned long g_005fedcc;
extern "C" unsigned long g_005fedd0;
extern "C" unsigned long g_005fedd4;
extern "C" unsigned long g_005fedd8;
extern "C" unsigned long g_005feddc;
extern "C" unsigned long g_005fede0;
extern "C" unsigned long g_005fede4;
extern "C" unsigned long g_005fede8;
extern "C" unsigned long g_005fedec;
extern "C" unsigned long g_005fedf0;
extern "C" unsigned long g_005fedf4;
extern "C" unsigned long g_005fedf8;
extern "C" unsigned long g_005fedfc;
extern "C" unsigned long g_005fee00;
extern "C" unsigned long g_005fee04;
extern "C" unsigned long g_005fee08;
extern "C" unsigned long g_005fee0c;
extern "C" unsigned long g_005fee10;
extern "C" unsigned long g_005fee14;
extern "C" unsigned long g_005fee18;
extern "C" unsigned long g_005fef78;
extern "C" unsigned long g_005fef7c;
extern "C" unsigned long g_005fef80;
extern "C" unsigned long g_005fef84;
BLItemDataInfoDownView::~BLItemDataInfoDownView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_005fdd6c + g_005fddf0);
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
  func_0079e45c(&uStack_14,&g_005fddbe + g_005fddf4,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLItemDataInfoDownView::BLItemDataInfoDownView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = (undefined4)(intptr_t)(*(int *)((unsigned char *)((char *)&g_005fde74 + (intptr_t)(g_005fdee4))));
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
  func_0079e45c(&uStack_14,(unsigned char *)((char *)&g_005fdeb0 + (intptr_t)(g_005fdee8)),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * BLItemDataInfoDownView::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x144)));
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

undefined4 BLItemDataInfoDownView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

void BLItemDataInfoDownView::hideNumberBar()
{
  (**(code **)(**(int **)(((int)this) + 0x110) + 0x90))(*(int **)(((int)this) + 0x110),0);
  (**(code **)(**(int **)(((int)this) + 0x124) + 0x90))(*(int **)(((int)this) + 0x124),0);
  (**(code **)(**(int **)(((int)this) + 0x128) + 0x90))(*(int **)(((int)this) + 0x128),0);
  (**(code **)(**(int **)(((int)this) + 300) + 0x90))(*(int **)(((int)this) + 300),0);
  (**(code **)(**(int **)(((int)this) + 0x130) + 0x90))(*(int **)(((int)this) + 0x130),0);
  (**(code **)(**(int **)(((int)this) + 0x134) + 0x90))(*(int **)(((int)this) + 0x134),0);
  (**(code **)(**(int **)(((int)this) + 0x138) + 0x90))(*(int **)(((int)this) + 0x138),0);
  (**(code **)(**(int **)(((int)this) + 0x13c) + 0x90))(*(int **)(((int)this) + 0x13c),0);
  (**(code **)(**(int **)(((int)this) + 0x140) + 0x90))(*(int **)(((int)this) + 0x140),0);
  return;
}

void BLItemDataInfoDownView::adjustForFurnace()
{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  code *pcVar4;
  int *piVar5;
  undefined4 auStack_30 [2];
  undefined1 auStack_28 [4];
  undefined4 uStack_24;
  undefined1 auStack_20 [12];
  
  (**(code **)(**(int **)(((int)this) + 0x118) + 0x90))(*(int **)(((int)this) + 0x118),0);
  (**(code **)(**(int **)(((int)this) + 0x114) + 0x90))(*(int **)(((int)this) + 0x114),0);
  piVar5 = *(int **)(((int)this) + 0x11c);
  pcVar4 = *(code **)(*piVar5 + 0x4c);
  0 /* ctorZero */;
  uVar3 = (undefined4)(auStack_30[0]);
  cocos2d::CCDirector::sharedDirector();
  uVar1 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar1 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar3),(int)(uVar1)))));
  0 /* ctorZero */;
  uVar3 = (undefined4)(uStack_24);
  cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar3),(int)(uVar2)))));
  0 /* ctorZero */;
  (*pcVar4)(piVar5,auStack_20);
  piVar5 = *(int **)(((int)this) + 0x120);
  pcVar4 = *(code **)(*piVar5 + 0x4c);
  0 /* ctorZero */;
  cocos2d::CCDirector::sharedDirector();
  uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(auStack_30[0]),(int)(uVar3)))));
  0 /* ctorZero */;
  cocos2d::CCDirector::sharedDirector();
  uVar1 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar1 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uStack_24),(int)(uVar1)))));
  0 /* ctorZero */;
  (*pcVar4)(piVar5,auStack_20);
  (**(code **)(**(int **)(((int)this) + 0x120) + 0x234))
            (*(int **)(((int)this) + 0x120),&g_005fe0ba + g_005fe0c4);
  return;
}

undefined4 BLItemDataInfoDownView::getNumBG()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

undefined4 BLItemDataInfoDownView::getBtnSell()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

undefined4 BLItemDataInfoDownView::getLabSell()
{
  return *(undefined4 *)(((int)this) + 0x118);
}

undefined4 BLItemDataInfoDownView::getBtnUse()
{
  return *(undefined4 *)(((int)this) + 0x11c);
}

undefined4 BLItemDataInfoDownView::getLabUse()
{
  return *(undefined4 *)(((int)this) + 0x120);
}

undefined4 BLItemDataInfoDownView::getBtnReduce()
{
  return *(undefined4 *)(((int)this) + 0x124);
}

undefined4 BLItemDataInfoDownView::getBtnAdd()
{
  return *(undefined4 *)(((int)this) + 0x128);
}

undefined4 BLItemDataInfoDownView::getBtnMax()
{
  return *(undefined4 *)(((int)this) + 300);
}

undefined4 BLItemDataInfoDownView::getLabNum()
{
  return *(undefined4 *)(((int)this) + 0x130);
}

undefined4 BLItemDataInfoDownView::getLabReduce()
{
  return *(undefined4 *)(((int)this) + 0x134);
}

undefined4 BLItemDataInfoDownView::getLabAdd()
{
  return *(undefined4 *)(((int)this) + 0x138);
}

undefined4 BLItemDataInfoDownView::getLabMax()
{
  return *(undefined4 *)(((int)this) + 0x13c);
}

undefined4 BLItemDataInfoDownView::getLine()
{
  return *(undefined4 *)(((int)this) + 0x140);
}

void BLItemDataInfoDownView::onEnter()
{
  ((BLItemDataInfoDownPresenter *)*(undefined4 *)(((int)this) + 0x10c))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLItemDataInfoDownView::onExit()
{
  ((BLItemDataInfoDownPresenter *)*(undefined4 *)(((int)this) + 0x10c))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
bool BLItemDataInfoDownView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
