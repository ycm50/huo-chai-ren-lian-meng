#include "PKResultView.h"
#include "CCObject.h"
#include "CCLayer.h"
#include "CCDirector.h"
#include "PKResultPresenter.h"
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
extern "C" unsigned long UNK_0061f138;
extern "C" unsigned long UNK_0061f174;
extern "C" unsigned long UNK_0061f19c;
extern "C" unsigned long UNK_0061f26e;
extern "C" unsigned long UNK_0061f320;
extern "C" unsigned long UNK_0061f332;
extern "C" unsigned long UNK_0061f3e2;
extern "C" unsigned long UNK_0061f4be;
extern "C" unsigned long UNK_0061f55a;
extern "C" unsigned long UNK_0061f5fa;
extern "C" unsigned long _DAT_0061f208;
extern "C" unsigned long _UNK_0061f164;
extern "C" unsigned long _UNK_0061f178;
extern "C" unsigned long _UNK_0061f1a0;
extern "C" unsigned long _UNK_0061f3b4;
extern "C" unsigned long _UNK_0061f3b8;
extern "C" unsigned long _UNK_0061f3bc;
extern "C" unsigned long _UNK_0061f3c0;
extern "C" unsigned long _UNK_0061f3c4;
extern "C" unsigned long _UNK_0061f3c8;
extern "C" unsigned long _UNK_0061f3cc;
extern "C" unsigned long _UNK_0061f3d0;
extern "C" unsigned long _UNK_0061f6e4;
extern "C" unsigned long _UNK_0061f6e8;
extern "C" unsigned long _UNK_0061f6ec;
extern "C" unsigned long _UNK_0061f6f0;
extern "C" unsigned long _UNK_0061f6f4;
extern "C" unsigned long _UNK_0061f6f8;
extern "C" unsigned long _UNK_0061f6fc;
extern "C" unsigned long _UNK_0061f700;
extern "C" unsigned long extraout_r2;
extern "C" unsigned long g_0061f138;
extern "C" unsigned long g_0061f164;
extern "C" unsigned long g_0061f174;
extern "C" unsigned long g_0061f178;
extern "C" unsigned long g_0061f19c;
extern "C" unsigned long g_0061f1a0;
extern "C" unsigned long g_0061f208;
extern "C" unsigned long g_0061f26e;
extern "C" unsigned long g_0061f320;
extern "C" unsigned long g_0061f332;
extern "C" unsigned long g_0061f3b4;
extern "C" unsigned long g_0061f3b8;
extern "C" unsigned long g_0061f3bc;
extern "C" unsigned long g_0061f3c0;
extern "C" unsigned long g_0061f3c4;
extern "C" unsigned long g_0061f3c8;
extern "C" unsigned long g_0061f3cc;
extern "C" unsigned long g_0061f3d0;
extern "C" unsigned long g_0061f3e2;
extern "C" unsigned long g_0061f4be;
extern "C" unsigned long g_0061f55a;
extern "C" unsigned long g_0061f5fa;
extern "C" unsigned long g_0061f6e4;
extern "C" unsigned long g_0061f6e8;
extern "C" unsigned long g_0061f6ec;
extern "C" unsigned long g_0061f6f0;
extern "C" unsigned long g_0061f6f4;
extern "C" unsigned long g_0061f6f8;
extern "C" unsigned long g_0061f6fc;
extern "C" unsigned long g_0061f700;
PKResultView::~PKResultView()
{
  int iVar1;
  
  iVar1 = *(int *)(&g_0061f138 + g_0061f164);
  *(int *)this = iVar1 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar1 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar1 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar1 + 0x244;
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

PKResultView::PKResultView()
{
  int iVar1;
  
  0 /* ctorZero */;
  iVar1 = *(int *)(g_0061f208 + 0x61f1e4);
  *(int *)this = iVar1 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar1 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar1 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar1 + 0x244;
  return;
}

int * PKResultView::create()
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



void PKResultView::setResult(bool p1)
{
  undefined4 p4 = 0;

  undefined4 extraout_r2;
  code *pcVar1;
  
  (**(code **)(**(int **)(((int)this) + 0x118) + 0x90))();
  pcVar1 = *(code **)(**(int **)(((int)this) + 0x11c) + 0x90);
  (*pcVar1)(*(int **)(((int)this) + 0x11c),p1 ^ 1,extraout_r2,pcVar1,p4);
  return;
}

void PKResultView::onEnter()
{
  ((PKResultPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void PKResultView::onExit()
{
  ((PKResultPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (3) =====
int * PKResultView::newBtn(std::string * p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return nullptr;
}

void PKResultView::initUI()
{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  code *pcVar5;
  int *piVar6;
  undefined4 auStack_30 [2];
  undefined1 auStack_28 [4];
  undefined4 uStack_24;
  undefined1 auStack_20 [12];
  
  func_0079e45c(auStack_20,(unsigned char *)((char *)&g_0061f3e2 + (intptr_t)(g_0061f6e4)),auStack_28);
  iVar1 = (undefined4)(intptr_t)(0 /* ctorZero */);
  *(int *)((int)this + 4*(0x45)) = iVar1;
  func_0079e2bc(auStack_20);
  piVar6 = (int *)*(int *)((int)this + 4*(0x45));
  pcVar5 = *(code **)(*piVar6 + 0x88);
  0 /* ctorZero */;
  uVar4 = (undefined4)(auStack_30[0]);
  cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar2 = (undefined4)(func_0079e4dc(uVar4,uVar2));
  0 /* ctorZero */;
  uVar4 = (undefined4)(uStack_24);
  cocos2d::CCDirector::sharedDirector();
  uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar4 = (undefined4)(func_0079e4dc(uVar4,uVar3));
  0 /* ctorZero */;
  (*pcVar5)(piVar6,auStack_20);
  piVar6 = (int *)*(int *)((int)this + 4*(0x45));
  pcVar5 = *(code **)(*piVar6 + 0x4c);
  0 /* ctorZero */;
  uVar4 = (undefined4)(auStack_30[0]);
  cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar2 = (undefined4)(func_0079e4dc(uVar4,uVar2));
  0 /* ctorZero */;
  uVar4 = (undefined4)(uStack_24);
  cocos2d::CCDirector::sharedDirector();
  uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar4 = (undefined4)(func_0079e4dc(uVar4,uVar3));
  0 /* ctorZero */;
  (*pcVar5)(piVar6,auStack_20);
  func_0079e45c(auStack_20,(unsigned char *)((char *)&g_0061f4be + (intptr_t)(g_0061f6f0)),auStack_28);
  iVar1 = (undefined4)(intptr_t)(0 /* ctorZero */);
  *(int *)((int)this + 4*(0x46)) = iVar1;
  func_0079e2bc(auStack_20);
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x46)) + 0x30))((int *)*(int *)((int)this + 4*(0x46)),0x3f800000);
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x46)) + 0x38))((int *)*(int *)((int)this + 4*(0x46)),0x3f800000);
  piVar6 = (int *)*(int *)((int)this + 4*(0x46));
  pcVar5 = *(code **)(*piVar6 + 0x4c);
  0 /* ctorZero */;
  uVar4 = (undefined4)(auStack_30[0]);
  cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar2 = (undefined4)(func_0079e4dc(uVar4,uVar2));
  0 /* ctorZero */;
  uVar4 = (undefined4)(uStack_24);
  cocos2d::CCDirector::sharedDirector();
  uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar4 = (undefined4)(func_0079e4dc(uVar4,uVar3));
  0 /* ctorZero */;
  (*pcVar5)(piVar6,auStack_20);
  (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x46)),2);
  func_0079e45c(auStack_20,(unsigned char *)((char *)&g_0061f55a + (intptr_t)(g_0061f6f8)),auStack_28);
  iVar1 = (undefined4)(intptr_t)(0 /* ctorZero */);
  *(int *)((int)this + 4*(0x47)) = iVar1;
  func_0079e2bc(auStack_20);
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x47)) + 0x30))((int *)*(int *)((int)this + 4*(0x47)),0x3f800000);
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x47)) + 0x38))((int *)*(int *)((int)this + 4*(0x47)),0x3f800000);
  piVar6 = (int *)*(int *)((int)this + 4*(0x47));
  pcVar5 = *(code **)(*piVar6 + 0x4c);
  0 /* ctorZero */;
  uVar4 = (undefined4)(auStack_30[0]);
  cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar2 = (undefined4)(func_0079e4dc(uVar4,uVar2));
  0 /* ctorZero */;
  uVar4 = (undefined4)(uStack_24);
  cocos2d::CCDirector::sharedDirector();
  uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar4 = (undefined4)(func_0079e4dc(uVar4,uVar3));
  0 /* ctorZero */;
  (*pcVar5)(piVar6,auStack_20);
  (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x47)),3);
  func_0079e45c(auStack_20,(unsigned char *)((char *)&g_0061f5fa + (intptr_t)(g_0061f6fc)),auStack_28);
  iVar1 = (undefined4)(intptr_t)(PKResultView::newBtn((std::string *)(char *)auStack_20));
  *(int *)((int)this + 4*(0x44)) = iVar1;
  func_0079e2bc(auStack_20);
  piVar6 = (int *)*(int *)((int)this + 4*(0x44));
  pcVar5 = *(code **)(*piVar6 + 0x4c);
  0 /* ctorZero */;
  uVar4 = (undefined4)(auStack_30[0]);
  cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar2 = (undefined4)(func_0079e4dc(uVar4,uVar2));
  0 /* ctorZero */;
  uVar4 = (undefined4)(uStack_24);
  cocos2d::CCDirector::sharedDirector();
  uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar4 = (undefined4)(func_0079e4dc(uVar4,uVar3));
  0 /* ctorZero */;
  (*pcVar5)(piVar6,auStack_20);
  (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x44)),4);
  pcVar5 = *(code **)(*(int *)this + 0x88);
  0 /* ctorZero */;
  cocos2d::CCDirector::sharedDirector();
  uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar4 = (undefined4)(func_0079e4fc(auStack_30[0],uVar4));
  0 /* ctorZero */;
  cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar2 = (undefined4)(func_0079e4fc(uStack_24,uVar2));
  0 /* ctorZero */;
  (*pcVar5)(((int)this),auStack_20);
  return;
}

bool PKResultView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
