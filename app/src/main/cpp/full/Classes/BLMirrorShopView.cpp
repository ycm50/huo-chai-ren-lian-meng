#include "BLMirrorShopView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLMirrorShopPresenter.h"
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
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long ghidra_CONCAT13(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_005ce650;
extern "C" unsigned long UNK_005ce682;
extern "C" unsigned long UNK_005ce6dc;
extern "C" unsigned long UNK_005ce72c;
extern "C" unsigned long UNK_005cec9c;
extern "C" unsigned long UNK_005cecd6;
extern "C" unsigned long UNK_005ced18;
extern "C" unsigned long UNK_005ced58;
extern "C" unsigned long UNK_005cedd2;
extern "C" unsigned long UNK_005cedec;
extern "C" unsigned long UNK_005cee5a;
extern "C" unsigned long UNK_005cee84;
extern "C" unsigned long UNK_005cef30;
extern "C" unsigned long UNK_005cef5c;
extern "C" unsigned long UNK_005ceffe;
extern "C" unsigned long UNK_005cf002;
extern "C" unsigned long _DAT_005cec74;
extern "C" unsigned long _DAT_005cec78;
extern "C" unsigned long _UNK_005ce6c8;
extern "C" unsigned long _UNK_005ce6cc;
extern "C" unsigned long _UNK_005ce6e0;
extern "C" unsigned long _UNK_005ce730;
extern "C" unsigned long _UNK_005cf060;
extern "C" unsigned long _UNK_005cf064;
extern "C" unsigned long _UNK_005cf068;
extern "C" unsigned long _UNK_005cf06c;
extern "C" unsigned long _UNK_005cf070;
extern "C" unsigned long _UNK_005cf074;
extern "C" unsigned long _UNK_005cf078;
extern "C" unsigned long _UNK_005cf07c;
extern "C" unsigned long _UNK_005cf080;
extern "C" unsigned long _UNK_005cf084;
extern "C" unsigned long _UNK_005cf088;
extern "C" unsigned long _UNK_005cf08c;
extern "C" unsigned long _UNK_005cf090;
extern "C" unsigned long _UNK_005cf094;
extern "C" unsigned long _UNK_005cf098;
extern "C" unsigned long _UNK_005cf09c;
extern "C" unsigned long _UNK_005cf0a0;
extern "C" unsigned long _UNK_005cf0a4;
extern "C" unsigned long _UNK_005cf0a8;
extern "C" unsigned long _UNK_005cf0ac;
extern "C" unsigned long _UNK_005cf0b0;
extern "C" unsigned long _UNK_005cf0b4;
extern "C" unsigned long _UNK_005cf0b8;
extern "C" unsigned long _UNK_005cf0bc;
extern "C" unsigned long _UNK_005cf0c0;
extern "C" unsigned long _UNK_005cf258;
extern "C" unsigned long _UNK_005cf25c;
extern "C" unsigned long _UNK_005cf260;
extern "C" unsigned long _UNK_005cf264;
extern "C" unsigned long g_005ce650;
extern "C" unsigned long g_005ce682;
extern "C" unsigned long g_005ce6c8;
extern "C" unsigned long g_005ce6cc;
extern "C" unsigned long g_005ce6dc;
extern "C" unsigned long g_005ce6e0;
extern "C" unsigned long g_005ce72c;
extern "C" unsigned long g_005ce730;
extern "C" unsigned long g_005cec74;
extern "C" unsigned long g_005cec78;
extern "C" unsigned long g_005cec9c;
extern "C" unsigned long g_005cecd6;
extern "C" unsigned long g_005ced18;
extern "C" unsigned long g_005ced58;
extern "C" unsigned long g_005cedd2;
extern "C" unsigned long g_005cedec;
extern "C" unsigned long g_005cee5a;
extern "C" unsigned long g_005cee84;
extern "C" unsigned long g_005cef30;
extern "C" unsigned long g_005cef5c;
extern "C" unsigned long g_005ceffe;
extern "C" unsigned long g_005cf002;
extern "C" unsigned long g_005cf060;
extern "C" unsigned long g_005cf064;
extern "C" unsigned long g_005cf068;
extern "C" unsigned long g_005cf06c;
extern "C" unsigned long g_005cf070;
extern "C" unsigned long g_005cf074;
extern "C" unsigned long g_005cf078;
extern "C" unsigned long g_005cf07c;
extern "C" unsigned long g_005cf080;
extern "C" unsigned long g_005cf084;
extern "C" unsigned long g_005cf088;
extern "C" unsigned long g_005cf08c;
extern "C" unsigned long g_005cf090;
extern "C" unsigned long g_005cf094;
extern "C" unsigned long g_005cf098;
extern "C" unsigned long g_005cf09c;
extern "C" unsigned long g_005cf0a0;
extern "C" unsigned long g_005cf0a4;
extern "C" unsigned long g_005cf0a8;
extern "C" unsigned long g_005cf0ac;
extern "C" unsigned long g_005cf0b0;
extern "C" unsigned long g_005cf0b4;
extern "C" unsigned long g_005cf0b8;
extern "C" unsigned long g_005cf0bc;
extern "C" unsigned long g_005cf0c0;
extern "C" unsigned long g_005cf258;
extern "C" unsigned long g_005cf25c;
extern "C" unsigned long g_005cf260;
extern "C" unsigned long g_005cf264;
BLMirrorShopView::~BLMirrorShopView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_005ce650 + g_005ce6c8);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005ce682 + g_005ce6cc,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  if (*(int *)((int)this + 4*(0x42)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x42)) = 0;
  }
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLMirrorShopView::BLMirrorShopView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(g_005cec74 + 0x5cec1c);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLMirrorShopView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}


bool BLMirrorShopView::init()
{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = ((cocos2d::CCLayer *)this)->init();
  if (iVar1 != 0) {
    uVar2 = (undefined4)(((BLMirrorShopPresenter *)this)->create());
    *(undefined4 *)(((int)this) + 0x108) = uVar2;
    ((cocos2d::CCObject *)this)->retain();
    BLMirrorShopView::initView();
    ((BLMirrorShopPresenter *)*(undefined4 *)(((int)this) + 0x108))->initWithView((BLMirrorShopView*)((int)this));
  }
  return iVar1;
}

void BLMirrorShopView::onEnter()
{
  ((BLMirrorShopPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLMirrorShopView::onExit()
{
  ((BLMirrorShopPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
void BLMirrorShopView::initView()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
