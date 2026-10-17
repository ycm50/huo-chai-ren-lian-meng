#include "BLGMEndlessItemView.h"
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
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0055de60;
extern "C" unsigned long UNK_0055de92;
extern "C" unsigned long UNK_0055ded8;
extern "C" unsigned long UNK_0055df00;
extern "C" unsigned long UNK_0055df18;
extern "C" unsigned long UNK_0055df46;
extern "C" unsigned long UNK_0055dfba;
extern "C" unsigned long UNK_0055dfbe;
extern "C" unsigned long UNK_0055e004;
extern "C" unsigned long _UNK_0055dec4;
extern "C" unsigned long _UNK_0055dec8;
extern "C" unsigned long _UNK_0055dedc;
extern "C" unsigned long _UNK_0055df04;
extern "C" unsigned long _UNK_0055df70;
extern "C" unsigned long _UNK_0055df74;
extern "C" unsigned long _UNK_0055e030;
extern "C" unsigned long _UNK_0055e034;
extern "C" unsigned long _UNK_0055e038;
extern "C" unsigned long _UNK_0055e03c;
extern "C" unsigned long _UNK_0055e040;
extern "C" unsigned long _UNK_0055e044;
extern "C" unsigned long g_0055de60;
extern "C" unsigned long g_0055de92;
extern "C" unsigned long g_0055dec4;
extern "C" unsigned long g_0055dec8;
extern "C" unsigned long g_0055ded8;
extern "C" unsigned long g_0055dedc;
extern "C" unsigned long g_0055df00;
extern "C" unsigned long g_0055df04;
extern "C" unsigned long g_0055df18;
extern "C" unsigned long g_0055df46;
extern "C" unsigned long g_0055df70;
extern "C" unsigned long g_0055df74;
extern "C" unsigned long g_0055dfba;
extern "C" unsigned long g_0055dfbe;
extern "C" unsigned long g_0055e004;
extern "C" unsigned long g_0055e030;
extern "C" unsigned long g_0055e034;
extern "C" unsigned long g_0055e038;
extern "C" unsigned long g_0055e03c;
extern "C" unsigned long g_0055e040;
extern "C" unsigned long g_0055e044;
BLGMEndlessItemView::~BLGMEndlessItemView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0055de60 + g_0055dec4);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0055de92 + g_0055dec8,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLGMEndlessItemView::BLGMEndlessItemView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_0055df18 + g_0055df70);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0055df46 + g_0055df74,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

undefined4 BLGMEndlessItemView::getlabEndless()
{
  return *(undefined4 *)(((int)this) + 0x108);
}

void BLGMEndlessItemView::onEnter()
{
  ((cocos2d::CCLayer *)this)->onEnter();
  return;
}

void BLGMEndlessItemView::onExit()
{
  ((cocos2d::CCLayer *)this)->onExit();
  return;
}

bool BLGMEndlessItemView::init()
{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  code *pcVar4;
  undefined1 auStack_20 [12];
  
  iVar1 = ((cocos2d::CCLayer *)this)->init();
  if (iVar1 != 0) {
    cocos2d::CCDirector::sharedDirector();
    uVar2 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(g_0055e030),(int)(uVar2)))));
    piVar3 = (int *)cocos2d::CCLabelTTF::create((char const*)&g_0055dfbe + g_0055e038, (char const*)&g_0055dfba + g_0055e034, uVar2);
    *(int *)((int)this + 4*(0x42)) = (int)piVar3;
    pcVar4 = *(code **)(*piVar3 + 0x4c);
    0 /* ctorZero */;
    (*pcVar4)(piVar3,auStack_20);
    piVar3 = (int *)*(int *)((int)this + 4*(0x42));
    pcVar4 = *(code **)(*piVar3 + 0x7c);
    0 /* ctorZero */;
    (*pcVar4)(piVar3,auStack_20);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x42)) + 0x1b4))((int *)*(int *)((int)this + 4*(0x42)),&g_0055e004 + g_0055e03c)
    ;
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x42)),3);
    pcVar4 = *(code **)(*(int *)this + 0x88);
    0 /* ctorZero */;
    (*pcVar4)(((int)this),auStack_20);
  }
  return iVar1;
}
