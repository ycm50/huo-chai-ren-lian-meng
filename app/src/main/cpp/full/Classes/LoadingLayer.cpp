#include "LoadingLayer.h"
#include "BLDebug.h"
#include "BLGameScene.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLProgressBar.h"
#include "DataCacheManager.h"
#include "UIManager.h"
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
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long func_0079e5fc(...);
extern "C" long long func_0079e794(...);
extern "C" long long func_0079e8a4(...);
extern "C" long long func_0079e8b4(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_004dc860;
extern "C" unsigned long UNK_004dc878;
extern "C" unsigned long UNK_004dc890;
extern "C" unsigned long UNK_004dc8a8;
extern "C" unsigned long UNK_004dc9d0;
extern "C" unsigned long UNK_004dca20;
extern "C" unsigned long UNK_004dca70;
extern "C" unsigned long UNK_004dca98;
extern "C" unsigned long UNK_004dcac2;
extern "C" unsigned long UNK_004dcb2c;
extern "C" unsigned long UNK_004dcb52;
extern "C" unsigned long UNK_004dcb94;
extern "C" unsigned long UNK_004dcbb0;
extern "C" unsigned long UNK_004dcbba;
extern "C" unsigned long UNK_004dcc00;
extern "C" unsigned long UNK_004dce88;
extern "C" unsigned long UNK_004dcea0;
extern "C" unsigned long UNK_004dcea2;
extern "C" unsigned long UNK_004dcf04;
extern "C" unsigned long UNK_004dcf84;
extern "C" unsigned long UNK_004dcfc0;
extern "C" unsigned long UNK_004dd0cc;
extern "C" unsigned long UNK_004dd0ce;
extern "C" unsigned long UNK_004dd100;
extern "C" unsigned long _DAT_004dc9c0;
extern "C" unsigned long _DAT_004dc9c4;
extern "C" unsigned long _DAT_004dcd7c;
extern "C" unsigned long _DAT_004dcd80;
extern "C" unsigned long _DAT_004dcd84;
extern "C" unsigned long _UNK_004dc864;
extern "C" unsigned long _UNK_004dc87c;
extern "C" unsigned long _UNK_004dc894;
extern "C" unsigned long _UNK_004dc8ac;
extern "C" unsigned long _UNK_004dca5c;
extern "C" unsigned long _UNK_004dca60;
extern "C" unsigned long _UNK_004dca74;
extern "C" unsigned long _UNK_004dca9c;
extern "C" unsigned long _UNK_004dcc54;
extern "C" unsigned long _UNK_004dcc58;
extern "C" unsigned long _UNK_004dcc5c;
extern "C" unsigned long _UNK_004dcc60;
extern "C" unsigned long _UNK_004dcc64;
extern "C" unsigned long _UNK_004dcc68;
extern "C" unsigned long _UNK_004dcc6c;
extern "C" unsigned long _UNK_004dce24;
extern "C" unsigned long _UNK_004dd18c;
extern "C" unsigned long _UNK_004dd190;
extern "C" unsigned long _UNK_004dd194;
extern "C" unsigned long _UNK_004dd198;
extern "C" unsigned long _UNK_004dd19c;
extern "C" unsigned long _UNK_004dd1a0;
extern "C" unsigned long _UNK_004dd1a4;
extern "C" unsigned long _UNK_004dd1a8;
extern "C" unsigned long _UNK_004dd1ac;
extern "C" unsigned long _UNK_004dd1b0;
extern "C" unsigned long _UNK_004dd1b4;
extern "C" unsigned long _UNK_004dd1b8;
extern "C" unsigned long _UNK_004dd1bc;
extern "C" unsigned long _UNK_004dd1c0;
extern "C" unsigned long _UNK_004dd1c4;
extern "C" unsigned long _UNK_004dd1c8;
extern "C" unsigned long extraout_r1;
extern "C" unsigned long g_004dc860;
extern "C" unsigned long g_004dc864;
extern "C" unsigned long g_004dc878;
extern "C" unsigned long g_004dc87c;
extern "C" unsigned long g_004dc890;
extern "C" unsigned long g_004dc894;
extern "C" unsigned long g_004dc8a8;
extern "C" unsigned long g_004dc8ac;
extern "C" unsigned long g_004dc9c0;
extern "C" unsigned long g_004dc9c4;
extern "C" unsigned long g_004dc9d0;
extern "C" unsigned long g_004dca20;
extern "C" unsigned long g_004dca5c;
extern "C" unsigned long g_004dca60;
extern "C" unsigned long g_004dca70;
extern "C" unsigned long g_004dca74;
extern "C" unsigned long g_004dca98;
extern "C" unsigned long g_004dca9c;
extern "C" unsigned long g_004dcac2;
extern "C" unsigned long g_004dcb2c;
extern "C" unsigned long g_004dcb52;
extern "C" unsigned long g_004dcb94;
extern "C" unsigned long g_004dcbb0;
extern "C" unsigned long g_004dcbba;
extern "C" unsigned long g_004dcc00;
extern "C" unsigned long g_004dcc54;
extern "C" unsigned long g_004dcc58;
extern "C" unsigned long g_004dcc5c;
extern "C" unsigned long g_004dcc60;
extern "C" unsigned long g_004dcc64;
extern "C" unsigned long g_004dcc68;
extern "C" unsigned long g_004dcc6c;
extern "C" unsigned long g_004dcd7c;
extern "C" unsigned long g_004dcd80;
extern "C" unsigned long g_004dcd84;
extern "C" unsigned long g_004dce24;
extern "C" unsigned long g_004dce88;
extern "C" unsigned long g_004dcea0;
extern "C" unsigned long g_004dcea2;
extern "C" unsigned long g_004dcf04;
extern "C" unsigned long g_004dcf84;
extern "C" unsigned long g_004dcfc0;
extern "C" unsigned long g_004dd0cc;
extern "C" unsigned long g_004dd0ce;
extern "C" unsigned long g_004dd100;
extern "C" unsigned long g_004dd18c;
extern "C" unsigned long g_004dd190;
extern "C" unsigned long g_004dd194;
extern "C" unsigned long g_004dd198;
extern "C" unsigned long g_004dd19c;
extern "C" unsigned long g_004dd1a0;
extern "C" unsigned long g_004dd1a4;
extern "C" unsigned long g_004dd1a8;
extern "C" unsigned long g_004dd1ac;
extern "C" unsigned long g_004dd1b0;
extern "C" unsigned long g_004dd1b4;
extern "C" unsigned long g_004dd1b8;
extern "C" unsigned long g_004dd1bc;
extern "C" unsigned long g_004dd1c0;
extern "C" unsigned long g_004dd1c4;
extern "C" unsigned long g_004dd1c8;
bool LoadingLayer::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void LoadingLayer::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void LoadingLayer::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void LoadingLayer::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void LoadingLayer::loadResEnd()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(2);
  ((BLGameScene *)this)->shareGameScene();
  ((BLGameScene *)this)->loadingEnd();
  return;
}


LoadingLayer::~LoadingLayer()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  iVar2 = *(int *)(&g_004dc9d0 + g_004dca5c);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  piStack_20 = (int *)((int)this);
  uStack_1c = (undefined4)(p2);
  uStack_18 = (undefined4)(p3);
  ((cocos2d::CCDictionary *)*(int *)((int)this + 4*(0x4d)))->removeAllObjects();
  if (*(int *)((int)this + 4*(0x4d)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x4d)) = 0;
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_1c,&g_004dca20 + g_004dca60,&piStack_20);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_1c);
  func_0079e2bc(&uStack_1c);
  ((std::vector<std::string, std::allocator<std::string>> *)((int)this) + 0x42)->~vector();
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}



void LoadingLayer::startLoading()
{
  undefined8 uVar1;
  
  *(undefined4 *)(((int)this) + 0x114) = 0;
  uVar1 = 0 /* ctorZero */;
  *(undefined8 *)(((int)this) + 0x120) = uVar1;
  LoadingLayer::ansyLoading();
  return;
}

undefined8 LoadingLayer::onAddImageCallBack(cocos2d::CCObject* p1)
{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  
  iVar3 = *(int *)(((int)this) + 0x128) + 1;
  uVar4 = (undefined4)(*(int *)(((int)this) + 0x114) + 1);
  *(uint *)(((int)this) + 0x114) = uVar4;
  *(int *)(((int)this) + 0x128) = iVar3;
  if (uVar4 < (uint)(*(int *)(((int)this) + 0x10c) - *(int *)(((int)this) + 0x108) >> 2)) {
    if (9 < iVar3) {
      *(uint *)(((int)this) + 300) = uVar4;
      *(undefined4 *)(((int)this) + 0x128) = 0;
      LoadingLayer::ansyLoading();
    }
  }
  else {
    LoadingLayer::loadPlist();
  }
  uVar1 = (undefined4)(((long long)([](int _a){float _f;__builtin_memcpy(&_f,&_a,4);float _r=(float)(int)_a;int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(*(undefined4 *)(((int)this) + 0x114))))));
  uVar5 = (undefined4)(*(undefined4 *)(((int)this) + 0x130));
  uVar2 = (undefined4)(((long long)([](int _a){float _f;__builtin_memcpy(&_f,&_a,4);float _r=(float)(unsigned)_a;int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(*(int *)(((int)this) + 0x10c) - *(int *)(((int)this) + 0x108) >> 2)))));
  uVar1 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar1),(int)(uVar2)))));
  (void)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar1),(int)(g_004dce24)))));
  iVar3 = ((long long)([](int _a){float _f;__builtin_memcpy(&_f,&_a,4);return (int)_f;}((int)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar1),(int)(g_004dce24))))))));
  uVar1 = (undefined4)(((long long)([](int _a){float _f;__builtin_memcpy(&_f,&_a,4);float _r=(float)(int)_a;int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(100 - iVar3)))));
  ((BLProgressBar *)uVar5)->setPercentage(uVar1);
  return ghidra_CONCAT44(0x108,((int)this));
}



void LoadingLayer::onEnter()
{
  ((cocos2d::CCLayer *)this)->onEnter();
  return;
}

void LoadingLayer::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0xe4);
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (5) =====
LoadingLayer::LoadingLayer()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;

  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int *piStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  piStack_20 = (int *)((int)this);
  uStack_1c = (undefined4)(p2);
  uStack_18 = (undefined4)(p3);
  0 /* ctorZero */;
  iVar3 = (undefined4)(intptr_t)(*(int *)(g_004dc9c0 + 0x4dc920));
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar3 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar3 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar3 + 0x244;
  *(int *)((int)this + 4*(0x42)) = 0;
  *(int *)((int)this + 4*(0x43)) = 0;
  *(int *)((int)this + 4*(0x44)) = 0;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x39, 1, 0);
  *(int *)((int)this + 4*(0x4a)) = 0;
  *(int *)((int)this + 4*(0x4b)) = 0;
  iVar3 = (undefined4)(intptr_t)(cocos2d::CCDictionary::create());
  *(int *)((int)this + 4*(0x4d)) = iVar3;
  if (iVar3 != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_1c,((intptr_t)"LoadingLayer"),&piStack_20);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_1c);
  func_0079e2bc(&uStack_1c);
  return;
}

void LoadingLayer::loadPlist()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void LoadingLayer::ansyLoading()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void LoadingLayer::pushImageRes(std::string p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

bool LoadingLayer::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
