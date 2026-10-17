#include "BLMissionRewardView.h"
#include "BLLeakUtils.h"
#include "BLMissionRewardPresenter.h"
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
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long func_0079e62c(...);
extern "C" long long func_0079e724(...);
extern "C" long long func_0079e744(...);
extern "C" long long func_0079e7e4(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_005bf4a8;
extern "C" unsigned long UNK_005bf4de;
extern "C" unsigned long UNK_005bf54c;
extern "C" unsigned long UNK_005bf574;
extern "C" unsigned long UNK_005bfd84;
extern "C" unsigned long UNK_005bfdc2;
extern "C" unsigned long UNK_005bff36;
extern "C" unsigned long UNK_005bfffc;
extern "C" unsigned long UNK_005bfffe;
extern "C" unsigned long UNK_005c0018;
extern "C" unsigned long UNK_005c0068;
extern "C" unsigned long UNK_005c00ea;
extern "C" unsigned long UNK_005c0178;
extern "C" unsigned long UNK_005c0186;
extern "C" unsigned long UNK_005c019a;
extern "C" unsigned long UNK_005c01ac;
extern "C" unsigned long UNK_005c01ba;
extern "C" unsigned long UNK_005c01cc;
extern "C" unsigned long _UNK_005bf538;
extern "C" unsigned long _UNK_005bf53c;
extern "C" unsigned long _UNK_005bf550;
extern "C" unsigned long _UNK_005bf578;
extern "C" unsigned long _UNK_005bfdf8;
extern "C" unsigned long _UNK_005bfdfc;
extern "C" unsigned long _UNK_005c01f8;
extern "C" unsigned long _UNK_005c01fc;
extern "C" unsigned long _UNK_005c0200;
extern "C" unsigned long _UNK_005c0204;
extern "C" unsigned long _UNK_005c0208;
extern "C" unsigned long _UNK_005c020c;
extern "C" unsigned long _UNK_005c0210;
extern "C" unsigned long _UNK_005c0214;
extern "C" unsigned long _UNK_005c0218;
extern "C" unsigned long _UNK_005c021c;
extern "C" unsigned long _UNK_005c0220;
extern "C" unsigned long _UNK_005c0224;
extern "C" unsigned long _UNK_005c0228;
extern "C" unsigned long _UNK_005c022c;
extern "C" unsigned long _UNK_005c0230;
extern "C" unsigned long _UNK_005c0234;
extern "C" unsigned long _UNK_005c0238;
extern "C" unsigned long _UNK_005c023c;
extern "C" unsigned long _UNK_005c0240;
extern "C" unsigned long _UNK_005c0244;
extern "C" unsigned long g_005bf4a8;
extern "C" unsigned long g_005bf4de;
extern "C" unsigned long g_005bf538;
extern "C" unsigned long g_005bf53c;
extern "C" unsigned long g_005bf54c;
extern "C" unsigned long g_005bf550;
extern "C" unsigned long g_005bf574;
extern "C" unsigned long g_005bf578;
extern "C" unsigned long g_005bfd84;
extern "C" unsigned long g_005bfdc2;
extern "C" unsigned long g_005bfdf8;
extern "C" unsigned long g_005bfdfc;
extern "C" unsigned long g_005bff36;
extern "C" unsigned long g_005bfffc;
extern "C" unsigned long g_005bfffe;
extern "C" unsigned long g_005c0018;
extern "C" unsigned long g_005c0068;
extern "C" unsigned long g_005c00ea;
extern "C" unsigned long g_005c0178;
extern "C" unsigned long g_005c0186;
extern "C" unsigned long g_005c019a;
extern "C" unsigned long g_005c01ac;
extern "C" unsigned long g_005c01ba;
extern "C" unsigned long g_005c01cc;
extern "C" unsigned long g_005c01f8;
extern "C" unsigned long g_005c01fc;
extern "C" unsigned long g_005c0200;
extern "C" unsigned long g_005c0204;
extern "C" unsigned long g_005c0208;
extern "C" unsigned long g_005c020c;
extern "C" unsigned long g_005c0210;
extern "C" unsigned long g_005c0214;
extern "C" unsigned long g_005c0218;
extern "C" unsigned long g_005c021c;
extern "C" unsigned long g_005c0220;
extern "C" unsigned long g_005c0224;
extern "C" unsigned long g_005c0228;
extern "C" unsigned long g_005c022c;
extern "C" unsigned long g_005c0230;
extern "C" unsigned long g_005c0234;
extern "C" unsigned long g_005c0238;
extern "C" unsigned long g_005c023c;
extern "C" unsigned long g_005c0240;
extern "C" unsigned long g_005c0244;
BLMissionRewardView::~BLMissionRewardView()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  iVar2 = *(int *)(&g_005bf4a8 + g_005bf538);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  piStack_20 = (int *)((int)this);
  uStack_1c = (undefined4)(p2);
  uStack_18 = (undefined4)(p3);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_1c,&g_005bf4de + g_005bf53c,&piStack_20);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_1c);
  func_0079e2bc(&uStack_1c);
  if (*(int *)((int)this + 4*(0x42)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x42)) = 0;
  }
  if (*(int *)((int)this + 4*(0x45)) != 0) {
    (void)(::operator delete((void *)(*(int *)((int)this + 4*(0x45)))));
  }
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLMissionRewardView::BLMissionRewardView()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  piStack_20 = (int *)((int)this);
  uStack_1c = (undefined4)(p2);
  uStack_18 = (undefined4)(p3);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_005bfd84 + g_005bfdf8);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  *(int *)((int)this + 4*(0x45)) = 0;
  *(int *)((int)this + 4*(0x46)) = 0;
  *(int *)((int)this + 4*(0x47)) = 0;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_1c,&g_005bfdc2 + g_005bfdfc,&piStack_20);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_1c);
  func_0079e2bc(&uStack_1c);
  return;
}


bool BLMissionRewardView::init()
{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = ((cocos2d::CCLayer *)this)->init();
  if (iVar1 != 0) {
    uVar2 = (undefined4)(((BLMissionRewardPresenter *)this)->create());
    *(undefined4 *)(((int)this) + 0x108) = uVar2;
    ((cocos2d::CCObject *)this)->retain();
    BLMissionRewardView::initView();
    ((BLMissionRewardPresenter *)*(undefined4 *)(((int)this) + 0x108))->initWithView((BLMissionRewardView*)((int)this));
  }
  return iVar1;
}

void BLMissionRewardView::onEnter()
{
  ((BLMissionRewardPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLMissionRewardView::onExit()
{
  ((BLMissionRewardPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
void BLMissionRewardView::initView()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
