#include "BLInviteFillInCodeView.h"
#include "CCLayer.h"
#include "CCObject.h"
#include "CCEditBox.h"
#include "BLInviteFillInCodePresenter.h"
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
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0062ef78;
extern "C" unsigned long UNK_0062ef88;
extern "C" unsigned long UNK_0062efd4;
extern "C" unsigned long UNK_0062f018;
extern "C" unsigned long UNK_0062f02c;
extern "C" unsigned long UNK_0062f054;
extern "C" unsigned long UNK_0062f068;
extern "C" unsigned long UNK_0062f220;
extern "C" unsigned long UNK_0062f302;
extern "C" unsigned long UNK_0062f3ea;
extern "C" unsigned long UNK_0062f492;
extern "C" unsigned long UNK_0062f496;
extern "C" unsigned long UNK_0062f57a;
extern "C" unsigned long UNK_0062f692;
extern "C" unsigned long UNK_0062f7d0;
extern "C" unsigned long UNK_0062f810;
extern "C" unsigned long UNK_0062f8c6;
extern "C" unsigned long UNK_0062f8c8;
extern "C" unsigned long _DAT_0062f110;
extern "C" unsigned long _DAT_0062f114;
extern "C" unsigned long _UNK_0062ef7c;
extern "C" unsigned long _UNK_0062f004;
extern "C" unsigned long _UNK_0062f008;
extern "C" unsigned long _UNK_0062f01c;
extern "C" unsigned long _UNK_0062f030;
extern "C" unsigned long _UNK_0062f058;
extern "C" unsigned long _UNK_0062f06c;
extern "C" unsigned long _UNK_0062f604;
extern "C" unsigned long _UNK_0062f608;
extern "C" unsigned long _UNK_0062f60c;
extern "C" unsigned long _UNK_0062f610;
extern "C" unsigned long _UNK_0062f614;
extern "C" unsigned long _UNK_0062f618;
extern "C" unsigned long _UNK_0062f61c;
extern "C" unsigned long _UNK_0062f620;
extern "C" unsigned long _UNK_0062f624;
extern "C" unsigned long _UNK_0062f628;
extern "C" unsigned long _UNK_0062f62c;
extern "C" unsigned long _UNK_0062f630;
extern "C" unsigned long _UNK_0062f634;
extern "C" unsigned long _UNK_0062f638;
extern "C" unsigned long _UNK_0062f96c;
extern "C" unsigned long _UNK_0062f970;
extern "C" unsigned long _UNK_0062f974;
extern "C" unsigned long _UNK_0062f978;
extern "C" unsigned long _UNK_0062f97c;
extern "C" unsigned long _UNK_0062f980;
extern "C" unsigned long _UNK_0062f984;
extern "C" unsigned long _UNK_0062f988;
extern "C" unsigned long _UNK_0062f98c;
extern "C" unsigned long _UNK_0062f990;
extern "C" unsigned long g_0062ef78;
extern "C" unsigned long g_0062ef7c;
extern "C" unsigned long g_0062ef88;
extern "C" unsigned long g_0062efd4;
extern "C" unsigned long g_0062f004;
extern "C" unsigned long g_0062f008;
extern "C" unsigned long g_0062f018;
extern "C" unsigned long g_0062f01c;
extern "C" unsigned long g_0062f02c;
extern "C" unsigned long g_0062f030;
extern "C" unsigned long g_0062f054;
extern "C" unsigned long g_0062f058;
extern "C" unsigned long g_0062f068;
extern "C" unsigned long g_0062f06c;
extern "C" unsigned long g_0062f110;
extern "C" unsigned long g_0062f114;
extern "C" unsigned long g_0062f220;
extern "C" unsigned long g_0062f302;
extern "C" unsigned long g_0062f3ea;
extern "C" unsigned long g_0062f492;
extern "C" unsigned long g_0062f496;
extern "C" unsigned long g_0062f57a;
extern "C" unsigned long g_0062f604;
extern "C" unsigned long g_0062f608;
extern "C" unsigned long g_0062f60c;
extern "C" unsigned long g_0062f610;
extern "C" unsigned long g_0062f614;
extern "C" unsigned long g_0062f618;
extern "C" unsigned long g_0062f61c;
extern "C" unsigned long g_0062f620;
extern "C" unsigned long g_0062f624;
extern "C" unsigned long g_0062f628;
extern "C" unsigned long g_0062f62c;
extern "C" unsigned long g_0062f630;
extern "C" unsigned long g_0062f634;
extern "C" unsigned long g_0062f638;
extern "C" unsigned long g_0062f692;
extern "C" unsigned long g_0062f7d0;
extern "C" unsigned long g_0062f810;
extern "C" unsigned long g_0062f8c6;
extern "C" unsigned long g_0062f8c8;
extern "C" unsigned long g_0062f96c;
extern "C" unsigned long g_0062f970;
extern "C" unsigned long g_0062f974;
extern "C" unsigned long g_0062f978;
extern "C" unsigned long g_0062f97c;
extern "C" unsigned long g_0062f980;
extern "C" unsigned long g_0062f984;
extern "C" unsigned long g_0062f988;
extern "C" unsigned long g_0062f98c;
extern "C" unsigned long g_0062f990;
void BLInviteFillInCodeView::editBoxEditingDidBegin(cocos2d::extension::CCEditBox* p1)
{
  return;
}

void BLInviteFillInCodeView::editBoxEditingDidEnd(cocos2d::extension::CCEditBox* p1)
{
  return;
}

void BLInviteFillInCodeView::editBoxTextChanged(cocos2d::extension::CCEditBox* p1, std::string const& p2)
{
  return;
}

void BLInviteFillInCodeView::editBoxReturn(cocos2d::extension::CCEditBox* p1)
{
  return;
}

BLInviteFillInCodeView::~BLInviteFillInCodeView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0062ef88 + g_0062f004);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x218;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x248;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x254;
  *(int *)((int)this + 4*(0x42)) = iVar2 + 0x264;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  if (*(int *)((int)this + 4*(0x44)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x44)) = 0;
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0062efd4 + g_0062f008,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLInviteFillInCodeView::BLInviteFillInCodeView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(g_0062f110 + 0x62f0b0);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x218;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x248;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x254;
  *(int *)((int)this + 4*(0x42)) = iVar2 + 0x264;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLInviteFillInCodeView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * BLInviteFillInCodeView::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x130)));
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

undefined4 BLInviteFillInCodeView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

undefined4 BLInviteFillInCodeView::getBackGround()
{
  return *(undefined4 *)(((int)this) + 0x118);
}

undefined4 BLInviteFillInCodeView::getTabBg()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

undefined4 BLInviteFillInCodeView::getLabTitle()
{
  return *(undefined4 *)(((int)this) + 0x11c);
}

undefined4 BLInviteFillInCodeView::getLabGuize()
{
  return *(undefined4 *)(((int)this) + 0x120);
}

undefined4 BLInviteFillInCodeView::getBtnClose()
{
  return *(undefined4 *)(((int)this) + 0x124);
}

undefined4 BLInviteFillInCodeView::getEditName()
{
  return *(undefined4 *)(((int)this) + 0x128);
}

undefined4 BLInviteFillInCodeView::getBtnGetReward()
{
  return *(undefined4 *)(((int)this) + 300);
}

void BLInviteFillInCodeView::onEnter()
{
  ((BLInviteFillInCodePresenter *)*(undefined4 *)(((int)this) + 0x110))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLInviteFillInCodeView::onExit()
{
  ((BLInviteFillInCodePresenter *)*(undefined4 *)(((int)this) + 0x110))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (2) =====
void BLInviteFillInCodeView::setTextDelegate(CEInputBoxDelegate1* p1)
{
  *(undefined4 *)(((int)this) + 0x10c) = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  return;
}

bool BLInviteFillInCodeView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
