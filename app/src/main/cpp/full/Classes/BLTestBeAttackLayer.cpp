#include "BLTestBeAttackLayer.h"
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
extern "C" long long func_0079e2ec(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e57c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_004e0714;
extern "C" unsigned long UNK_004e072c;
extern "C" unsigned long UNK_004e0744;
extern "C" unsigned long UNK_004e07b8;
extern "C" unsigned long UNK_004e07ea;
extern "C" unsigned long UNK_004e0830;
extern "C" unsigned long UNK_004e0858;
extern "C" unsigned long UNK_004e0872;
extern "C" unsigned long UNK_004e0874;
extern "C" unsigned long UNK_004e0944;
extern "C" unsigned long UNK_004e0962;
extern "C" unsigned long UNK_004e09cc;
extern "C" unsigned long UNK_004e0a4c;
extern "C" unsigned long UNK_004e0a58;
extern "C" unsigned long UNK_004e0aa4;
extern "C" unsigned long UNK_004e0b36;
extern "C" unsigned long _DAT_004e0920;
extern "C" unsigned long _DAT_004e0924;
extern "C" unsigned long _UNK_004e0718;
extern "C" unsigned long _UNK_004e0730;
extern "C" unsigned long _UNK_004e0748;
extern "C" unsigned long _UNK_004e081c;
extern "C" unsigned long _UNK_004e0820;
extern "C" unsigned long _UNK_004e0834;
extern "C" unsigned long _UNK_004e085c;
extern "C" unsigned long _UNK_004e0890;
extern "C" unsigned long _UNK_004e0894;
extern "C" unsigned long _UNK_004e0ad4;
extern "C" unsigned long _UNK_004e0ad8;
extern "C" unsigned long _UNK_004e0adc;
extern "C" unsigned long _UNK_004e0ae0;
extern "C" unsigned long _UNK_004e0ae4;
extern "C" unsigned long _UNK_004e0ae8;
extern "C" unsigned long _UNK_004e0aec;
extern "C" unsigned long _UNK_004e0af0;
extern "C" unsigned long _UNK_004e0af4;
extern "C" unsigned long _UNK_004e0af8;
extern "C" unsigned long _UNK_004e0afc;
extern "C" unsigned long _UNK_004e0b74;
extern "C" unsigned long _UNK_004e0b78;
extern "C" unsigned long g_004e0714;
extern "C" unsigned long g_004e0718;
extern "C" unsigned long g_004e072c;
extern "C" unsigned long g_004e0730;
extern "C" unsigned long g_004e0744;
extern "C" unsigned long g_004e0748;
extern "C" unsigned long g_004e07b8;
extern "C" unsigned long g_004e07ea;
extern "C" unsigned long g_004e081c;
extern "C" unsigned long g_004e0820;
extern "C" unsigned long g_004e0830;
extern "C" unsigned long g_004e0834;
extern "C" unsigned long g_004e0858;
extern "C" unsigned long g_004e085c;
extern "C" unsigned long g_004e0872;
extern "C" unsigned long g_004e0874;
extern "C" unsigned long g_004e0890;
extern "C" unsigned long g_004e0894;
extern "C" unsigned long g_004e0920;
extern "C" unsigned long g_004e0924;
extern "C" unsigned long g_004e0944;
extern "C" unsigned long g_004e0962;
extern "C" unsigned long g_004e09cc;
extern "C" unsigned long g_004e0a4c;
extern "C" unsigned long g_004e0a58;
extern "C" unsigned long g_004e0aa4;
extern "C" unsigned long g_004e0ad4;
extern "C" unsigned long g_004e0ad8;
extern "C" unsigned long g_004e0adc;
extern "C" unsigned long g_004e0ae0;
extern "C" unsigned long g_004e0ae4;
extern "C" unsigned long g_004e0ae8;
extern "C" unsigned long g_004e0aec;
extern "C" unsigned long g_004e0af0;
extern "C" unsigned long g_004e0af4;
extern "C" unsigned long g_004e0af8;
extern "C" unsigned long g_004e0afc;
extern "C" unsigned long g_004e0b36;
extern "C" unsigned long g_004e0b74;
extern "C" unsigned long g_004e0b78;
bool BLTestBeAttackLayer::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLTestBeAttackLayer::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLTestBeAttackLayer::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLTestBeAttackLayer::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLTestBeAttackLayer::onBeAttackCallBack(cocos2d::CCObject* p1, unsigned int p2)
{
  return;
}

BLTestBeAttackLayer::~BLTestBeAttackLayer()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_004e07b8 + g_004e081c);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_004e07ea + g_004e0820,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLTestBeAttackLayer::onTestSelectCallBack(cocos2d::CCObject* p1, unsigned int p2)
{
  int *piVar1;
  undefined4 uVar2;
  
  if ((p1 != 0) &&
     (piVar1 = (int *)func_0079e55c(p1,*(undefined4 *)(&g_004e0872 + g_004e0894),
                                      *(undefined4 *)(&g_004e0874 + g_004e0890),0),
     piVar1 != (int *)0x0)) {
    uVar2 = (undefined4)((**(code **)(*piVar1 + 0x118))());
    *(undefined4 *)(((int)this) + 0x108) = uVar2;
  }
  return;
}

BLTestBeAttackLayer::BLTestBeAttackLayer()
{
  undefined4 p2 = 0;

  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar3 = *(int *)(g_004e0920 + 0x4e08a8);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar3 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar3 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar3 + 0x244;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x39, 1, 0);
  *(int *)((int)this + 4*(0x42)) = 1;
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLTestBeAttackLayer"),&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}


bool BLTestBeAttackLayer::init()
{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  code *pcVar4;
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [12];
  
  iVar1 = ((cocos2d::CCLayer *)this)->init();
  if (iVar1 != 0) {
    pcVar4 = *(code **)(*(int *)this + 0x88);
    uVar2 = (undefined4)(cocos2d::CCDirector::sharedDirector());
    *(CCSize *)auStack_20 = ((cocos2d::CCDirector *)uVar2)->getWinSize();
    (*pcVar4)(((int)this),auStack_20);
    BLTestBeAttackLayer::creaTestBeAttackLayer();
    func_0079e45c(auStack_20,&g_004e0b36 + g_004e0b74,auStack_24);
    piVar3 = (int *)0 /* ctorZero */;
    func_0079e2bc(auStack_20);
    (**(code **)(*(int *)this + 0xcc))(((int)this),piVar3,10);
    (**(code **)(*piVar3 + 0x40))(piVar3,g_004e0b78);
  }
  return iVar1;
}

void BLTestBeAttackLayer::onEnter()
{
  ((cocos2d::CCLayer *)this)->onEnter();
  return;
}

void BLTestBeAttackLayer::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0xe4);
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
void BLTestBeAttackLayer::creaTestBeAttackLayer()
{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  code *pcVar5;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  undefined1 auStack_30 [4];
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  iStack_40 = 0x32;
  iStack_44 = 1;
  do {
    iStack_3c = 0;
    do {
      iVar1 = (undefined4)(intptr_t)(cocos2d::CCString::createWithFormat((char const*)(unsigned char *)((char *)&g_004e0944 + (intptr_t)(g_004e0ad4)), iStack_44));
      func_0079e53c(&uStack_2c,iVar1 + 0x14);
      func_0079e45c(&uStack_20,uStack_2c,auStack_30);
      piVar2 = (int *)cocos2d::extension::CCControlButton::create((std::string)(char*)uStack_20, (char const*)(unsigned char *)((char *)&g_004e0962 + (intptr_t)(g_004e0ad8)), g_004e0adc);
      func_0079e2bc(&uStack_20);
      uVar3 = (undefined4)(((long long)([](int _a){float _f;__builtin_memcpy(&_f,&_a,4);float _r=(float)(int)_a;int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(iStack_3c)))));
      (**(code **)(*piVar2 + 0x5c))(piVar2,uVar3);
      pcVar5 = *(code **)(*piVar2 + 100);
      iVar1 = (undefined4)(intptr_t)((**(code **)(*(int *)this + 0x8c))(((int)this)));
      uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x - _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(*(undefined4 *)(iVar1 + 4)),(int)(g_004e0ae0)))));
      uVar4 = (undefined4)(((long long)([](int _a){float _f;__builtin_memcpy(&_f,&_a,4);float _r=(float)(int)_a;int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(iStack_40)))));
      uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x - _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar3),(int)(uVar4)))));
      (*pcVar5)(piVar2,uVar3);
      (**(code **)(*piVar2 + 0x11c))(piVar2,iStack_44);
      uStack_28 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_004e09cc + (intptr_t)(g_004e0ae4))));
      uStack_24 = (undefined4)(0);
      (**(code **)(*piVar2 + 0x254))(piVar2,((int)this),uStack_28,0,0x20);
      (**(code **)(*(int *)this + 200))(((int)this),piVar2);
      pcVar5 = *(code **)(*piVar2 + 0x28c);
      0 /* ctorZero */;
      (*pcVar5)(piVar2,&uStack_20);
      pcVar5 = *(code **)(*piVar2 + 0x7c);
      0 /* ctorZero */;
      (*pcVar5)(piVar2,&uStack_20);
      iStack_44 = iStack_44 + 1;
      func_0079e2bc(&uStack_2c);
      iStack_3c = iStack_3c + 0x78;
    } while (iStack_3c != 600);
    iStack_40 = iStack_40 + 0x32;
  } while (iStack_40 != 200);
  func_0079e45c(&uStack_20,(unsigned char *)((char *)&g_004e0a4c + (intptr_t)(g_004e0aec)),&uStack_2c);
  piVar2 = (int *)cocos2d::extension::CCControlButton::create((std::string)(char*)uStack_20, (char const*)(unsigned char *)((char *)&g_004e0a58 + (intptr_t)(g_004e0af0)), g_004e0adc);
  func_0079e2bc(&uStack_20);
  (**(code **)(*piVar2 + 0x5c))(piVar2,g_004e0af4);
  pcVar5 = *(code **)(*piVar2 + 100);
  iVar1 = (undefined4)(intptr_t)((**(code **)(*(int *)this + 0x8c))(((int)this)));
  uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x - _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(*(undefined4 *)(iVar1 + 4)),(int)(g_004e0ae0)))));
  uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x - _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar3),(int)(g_004e0af8)))));
  (*pcVar5)(piVar2,uVar3);
  uStack_1c = (undefined4)(0);
  uStack_20 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_004e0aa4 + (intptr_t)(g_004e0afc))));
  (**(code **)(*piVar2 + 0x254))(piVar2,((int)this),uStack_20,0,0x20);
  (**(code **)(*(int *)this + 200))(((int)this),piVar2);
  return;
}
