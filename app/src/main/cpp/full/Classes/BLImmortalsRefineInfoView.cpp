#include "BLImmortalsRefineInfoView.h"
#include "BLImmortalsRefineInfoPresenter.h"
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
extern "C" long long func_0079e2ec(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long func_0079e62c(...);
extern "C" long long func_0079e724(...);
extern "C" long long func_0079e744(...);
extern "C" long long func_0079e7e4(...);
extern "C" long long func_0079e8d4(...);
extern "C" unsigned long UNK_00572554;
extern "C" unsigned long UNK_00572590;
extern "C" unsigned long UNK_00572614;
extern "C" unsigned long UNK_0057263c;
extern "C" unsigned long UNK_00572cca;
extern "C" unsigned long UNK_00572d14;
extern "C" unsigned long UNK_00573c7c;
extern "C" unsigned long UNK_00573cba;
extern "C" unsigned long UNK_00573cbe;
extern "C" unsigned long UNK_00573cf4;
extern "C" unsigned long UNK_00573d96;
extern "C" unsigned long UNK_00573e2a;
extern "C" unsigned long UNK_00573ee4;
extern "C" unsigned long UNK_00573f52;
extern "C" unsigned long UNK_00574504;
extern "C" unsigned long UNK_00574506;
extern "C" unsigned long UNK_00574518;
extern "C" unsigned long _UNK_00572600;
extern "C" unsigned long _UNK_00572604;
extern "C" unsigned long _UNK_00572618;
extern "C" unsigned long _UNK_00572640;
extern "C" unsigned long _UNK_00572d58;
extern "C" unsigned long _UNK_00572d5c;
extern "C" unsigned long _UNK_00574008;
extern "C" unsigned long _UNK_0057400c;
extern "C" unsigned long _UNK_00574010;
extern "C" unsigned long _UNK_00574014;
extern "C" unsigned long _UNK_00574018;
extern "C" unsigned long _UNK_0057401c;
extern "C" unsigned long _UNK_00574020;
extern "C" unsigned long _UNK_00574024;
extern "C" unsigned long _UNK_00574028;
extern "C" unsigned long _UNK_0057402c;
extern "C" unsigned long _UNK_00574030;
extern "C" unsigned long _UNK_00574034;
extern "C" unsigned long _UNK_00574038;
extern "C" unsigned long _UNK_0057403c;
extern "C" unsigned long _UNK_00574040;
extern "C" unsigned long _UNK_00574044;
extern "C" unsigned long _UNK_005742bc;
extern "C" unsigned long _UNK_005742c0;
extern "C" unsigned long _UNK_005742c4;
extern "C" unsigned long _UNK_005742c8;
extern "C" unsigned long _UNK_005742cc;
extern "C" unsigned long _UNK_005745c0;
extern "C" unsigned long _UNK_005745c4;
extern "C" unsigned long _UNK_005745c8;
extern "C" unsigned long _UNK_005745cc;
extern "C" unsigned long _UNK_005745d0;
extern "C" unsigned long _UNK_005745d4;
extern "C" unsigned long _UNK_005745d8;
extern "C" unsigned long _UNK_005745dc;
extern "C" unsigned long _UNK_005745e0;
extern "C" unsigned long _UNK_005745e4;
extern "C" unsigned long _UNK_005745e8;
extern "C" unsigned long g_00572554;
extern "C" unsigned long g_00572590;
extern "C" unsigned long g_00572600;
extern "C" unsigned long g_00572604;
extern "C" unsigned long g_00572614;
extern "C" unsigned long g_00572618;
extern "C" unsigned long g_0057263c;
extern "C" unsigned long g_00572640;
extern "C" unsigned long g_00572cca;
extern "C" unsigned long g_00572d14;
extern "C" unsigned long g_00572d58;
extern "C" unsigned long g_00572d5c;
extern "C" unsigned long g_00573c7c;
extern "C" unsigned long g_00573cba;
extern "C" unsigned long g_00573cbe;
extern "C" unsigned long g_00573cf4;
extern "C" unsigned long g_00573d96;
extern "C" unsigned long g_00573e2a;
extern "C" unsigned long g_00573ee4;
extern "C" unsigned long g_00573f52;
extern "C" unsigned long g_00574008;
extern "C" unsigned long g_0057400c;
extern "C" unsigned long g_00574010;
extern "C" unsigned long g_00574014;
extern "C" unsigned long g_00574018;
extern "C" unsigned long g_0057401c;
extern "C" unsigned long g_00574020;
extern "C" unsigned long g_00574024;
extern "C" unsigned long g_00574028;
extern "C" unsigned long g_0057402c;
extern "C" unsigned long g_00574030;
extern "C" unsigned long g_00574034;
extern "C" unsigned long g_00574038;
extern "C" unsigned long g_0057403c;
extern "C" unsigned long g_00574040;
extern "C" unsigned long g_00574044;
extern "C" unsigned long g_005742bc;
extern "C" unsigned long g_005742c0;
extern "C" unsigned long g_005742c4;
extern "C" unsigned long g_005742c8;
extern "C" unsigned long g_005742cc;
extern "C" unsigned long g_00574504;
extern "C" unsigned long g_00574506;
extern "C" unsigned long g_00574518;
extern "C" unsigned long g_005745c0;
extern "C" unsigned long g_005745c4;
extern "C" unsigned long g_005745c8;
extern "C" unsigned long g_005745cc;
extern "C" unsigned long g_005745d0;
extern "C" unsigned long g_005745d4;
extern "C" unsigned long g_005745d8;
extern "C" unsigned long g_005745dc;
extern "C" unsigned long g_005745e0;
extern "C" unsigned long g_005745e4;
extern "C" unsigned long g_005745e8;
void BLImmortalsRefineInfoView::onEnter()
{
  ((BLImmortalsRefineInfoPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLImmortalsRefineInfoView::onExit()
{
  ((BLImmortalsRefineInfoPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

BLImmortalsRefineInfoView::~BLImmortalsRefineInfoView()
{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [8];
  
  iVar2 = *(int *)(&g_00572554 + g_00572600);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(auStack_1c,&g_00572590 + g_00572604,auStack_20);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)auStack_1c);
  func_0079e2bc(auStack_1c);
  if (*(int *)((int)this + 4*(0x42)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x42)) = 0;
  }
  if (*(int *)((int)this + 4*(0x4b)) != 0) {
    (void)(::operator delete((void *)(*(int *)((int)this + 4*(0x4b)))));
  }
  if (*(int *)((int)this + 4*(0x48)) != 0) {
    (void)(::operator delete((void *)(*(int *)((int)this + 4*(0x48)))));
  }
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLImmortalsRefineInfoView::BLImmortalsRefineInfoView()
{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [8];
  
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_00572cca + g_00572d58);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  *(int *)((int)this + 4*(0x48)) = 0;
  *(int *)((int)this + 4*(0x49)) = 0;
  *(int *)((int)this + 4*(0x4a)) = 0;
  *(int *)((int)this + 4*(0x4b)) = 0;
  *(int *)((int)this + 4*(0x4c)) = 0;
  *(int *)((int)this + 4*(0x4d)) = 0;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(auStack_1c,&g_00572d14 + g_00572d5c,auStack_20);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)auStack_1c);
  func_0079e2bc(auStack_1c);
  return;
}


bool BLImmortalsRefineInfoView::init()
{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = ((cocos2d::CCLayer *)this)->init();
  if (iVar1 != 0) {
    uVar2 = (undefined4)(((BLImmortalsRefineInfoPresenter *)this)->create());
    *(undefined4 *)(((int)this) + 0x108) = uVar2;
    ((cocos2d::CCObject *)this)->retain();
    BLImmortalsRefineInfoView::initView();
    ((BLImmortalsRefineInfoPresenter *)*(undefined4 *)(((int)this) + 0x108))->initWithView((BLImmortalsRefineInfoView*)((int)this));
  }
  return iVar1;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
void BLImmortalsRefineInfoView::initView()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
