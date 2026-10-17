#include "BLMissionPlayerInfoView.h"
#include "BLLeakUtils.h"
#include "BLMissionPlayerInfoPresenter.h"
#include "BLMissionPlayerStatusItemView.h"
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
extern "C" long long func_0079e59c(...);
extern "C" unsigned long UNK_005bea08;
extern "C" unsigned long UNK_005bea48;
extern "C" unsigned long UNK_005beacc;
extern "C" unsigned long UNK_005beaf4;
extern "C" unsigned long UNK_005becd2;
extern "C" unsigned long UNK_005becd6;
extern "C" unsigned long UNK_005becec;
extern "C" unsigned long UNK_005bed56;
extern "C" unsigned long UNK_005bedd0;
extern "C" unsigned long UNK_005bee70;
extern "C" unsigned long UNK_005bee72;
extern "C" unsigned long UNK_005bee82;
extern "C" unsigned long UNK_005bef76;
extern "C" unsigned long UNK_005bef7a;
extern "C" unsigned long UNK_005bef8a;
extern "C" unsigned long UNK_005beff4;
extern "C" unsigned long UNK_005bf070;
extern "C" unsigned long UNK_005bf160;
extern "C" unsigned long UNK_005bf162;
extern "C" unsigned long UNK_005bf172;
extern "C" unsigned long _DAT_005beba4;
extern "C" unsigned long _DAT_005beba8;
extern "C" unsigned long _UNK_005beab8;
extern "C" unsigned long _UNK_005beabc;
extern "C" unsigned long _UNK_005bead0;
extern "C" unsigned long _UNK_005beaf8;
extern "C" unsigned long _UNK_005bf0a4;
extern "C" unsigned long _UNK_005bf0a8;
extern "C" unsigned long _UNK_005bf0ac;
extern "C" unsigned long _UNK_005bf0b0;
extern "C" unsigned long _UNK_005bf0b4;
extern "C" unsigned long _UNK_005bf0b8;
extern "C" unsigned long _UNK_005bf0bc;
extern "C" unsigned long _UNK_005bf0c0;
extern "C" unsigned long _UNK_005bf0c4;
extern "C" unsigned long _UNK_005bf0c8;
extern "C" unsigned long _UNK_005bf0cc;
extern "C" unsigned long _UNK_005bf0d0;
extern "C" unsigned long _UNK_005bf0d4;
extern "C" unsigned long _UNK_005bf0d8;
extern "C" unsigned long _UNK_005bf0dc;
extern "C" unsigned long _UNK_005bf0e0;
extern "C" unsigned long _UNK_005bf0e4;
extern "C" unsigned long _UNK_005bf0e8;
extern "C" unsigned long _UNK_005bf248;
extern "C" unsigned long _UNK_005bf24c;
extern "C" unsigned long _UNK_005bf250;
extern "C" unsigned long _UNK_005bf254;
extern "C" unsigned long _UNK_005bf258;
extern "C" unsigned long _UNK_005bf25c;
extern "C" unsigned long _UNK_005bf260;
extern "C" unsigned long g_005bea08;
extern "C" unsigned long g_005bea48;
extern "C" unsigned long g_005beab8;
extern "C" unsigned long g_005beabc;
extern "C" unsigned long g_005beacc;
extern "C" unsigned long g_005bead0;
extern "C" unsigned long g_005beaf4;
extern "C" unsigned long g_005beaf8;
extern "C" unsigned long g_005beba4;
extern "C" unsigned long g_005beba8;
extern "C" unsigned long g_005becd2;
extern "C" unsigned long g_005becd6;
extern "C" unsigned long g_005becec;
extern "C" unsigned long g_005bed56;
extern "C" unsigned long g_005bedd0;
extern "C" unsigned long g_005bee70;
extern "C" unsigned long g_005bee72;
extern "C" unsigned long g_005bee82;
extern "C" unsigned long g_005bef76;
extern "C" unsigned long g_005bef7a;
extern "C" unsigned long g_005bef8a;
extern "C" unsigned long g_005beff4;
extern "C" unsigned long g_005bf070;
extern "C" unsigned long g_005bf0a4;
extern "C" unsigned long g_005bf0a8;
extern "C" unsigned long g_005bf0ac;
extern "C" unsigned long g_005bf0b0;
extern "C" unsigned long g_005bf0b4;
extern "C" unsigned long g_005bf0b8;
extern "C" unsigned long g_005bf0bc;
extern "C" unsigned long g_005bf0c0;
extern "C" unsigned long g_005bf0c4;
extern "C" unsigned long g_005bf0c8;
extern "C" unsigned long g_005bf0cc;
extern "C" unsigned long g_005bf0d0;
extern "C" unsigned long g_005bf0d4;
extern "C" unsigned long g_005bf0d8;
extern "C" unsigned long g_005bf0dc;
extern "C" unsigned long g_005bf0e0;
extern "C" unsigned long g_005bf0e4;
extern "C" unsigned long g_005bf0e8;
extern "C" unsigned long g_005bf160;
extern "C" unsigned long g_005bf162;
extern "C" unsigned long g_005bf172;
extern "C" unsigned long g_005bf248;
extern "C" unsigned long g_005bf24c;
extern "C" unsigned long g_005bf250;
extern "C" unsigned long g_005bf254;
extern "C" unsigned long g_005bf258;
extern "C" unsigned long g_005bf25c;
extern "C" unsigned long g_005bf260;
BLMissionPlayerInfoView::~BLMissionPlayerInfoView()
{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [8];
  
  iVar2 = *(int *)(&g_005bea08 + g_005beab8);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(auStack_1c,&g_005bea48 + g_005beabc,auStack_20);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)auStack_1c);
  func_0079e2bc(auStack_1c);
  if (*(int *)((int)this + 4*(0x42)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x42)) = 0;
  }
  *(int *)((int)this + 4*(0x4a)) = *(int *)((int)this + 4*(0x49));
  *(int *)((int)this + 4*(0x4d)) = *(int *)((int)this + 4*(0x4c));
  ((std::vector<BLMissionPlayerStatusItemView*, std::allocator<BLMissionPlayerStatusItemView*>> *)((int)this) + 0x4c)->~vector();
  ((std::vector<BLMissionPlayerStatusItemView*, std::allocator<BLMissionPlayerStatusItemView*>> *)((int)this) + 0x49)->~vector();
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLMissionPlayerInfoView::BLMissionPlayerInfoView()
{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [8];
  
  0 /* ctorZero */;
  iVar2 = *(int *)(g_005beba4 + 0x5beb0e);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  *(int *)((int)this + 4*(0x49)) = 0;
  *(int *)((int)this + 4*(0x4a)) = 0;
  *(int *)((int)this + 4*(0x4b)) = 0;
  *(int *)((int)this + 4*(0x4c)) = 0;
  *(int *)((int)this + 4*(0x4d)) = 0;
  *(int *)((int)this + 4*(0x4e)) = 0;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(auStack_1c,((intptr_t)"BLMissionPlayerInfoView"),auStack_20);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)auStack_1c);
  func_0079e2bc(auStack_1c);
  *(int *)((int)this + 4*(0x4a)) = *(int *)((int)this + 4*(0x49));
  *(int *)((int)this + 4*(0x4d)) = *(int *)((int)this + 4*(0x4c));
  return;
}


bool BLMissionPlayerInfoView::init()
{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = ((cocos2d::CCLayer *)this)->init();
  if (iVar1 != 0) {
    uVar2 = (undefined4)(((BLMissionPlayerInfoPresenter *)this)->create());
    *(undefined4 *)(((int)this) + 0x108) = uVar2;
    ((cocos2d::CCObject *)this)->retain();
    BLMissionPlayerInfoView::initView();
    ((BLMissionPlayerInfoPresenter *)*(undefined4 *)(((int)this) + 0x108))->initWithView((BLMissionPlayerInfoView*)((int)this));
  }
  return iVar1;
}

void BLMissionPlayerInfoView::onEnter()
{
  ((BLMissionPlayerInfoPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLMissionPlayerInfoView::onExit()
{
  ((BLMissionPlayerInfoPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
void BLMissionPlayerInfoView::initView()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
