#include "BLJJSDataInfoView.h"
#include "BLJJSDataInfoPresenter.h"
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
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long ghidra_CONCAT13(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_00601010;
extern "C" unsigned long UNK_00601054;
extern "C" unsigned long UNK_00601098;
extern "C" unsigned long UNK_006010c0;
extern "C" unsigned long UNK_00601272;
extern "C" unsigned long UNK_00601356;
extern "C" unsigned long UNK_00601444;
extern "C" unsigned long UNK_0060146e;
extern "C" unsigned long UNK_00601538;
extern "C" unsigned long UNK_00601570;
extern "C" unsigned long UNK_0060163a;
extern "C" unsigned long UNK_0060171e;
extern "C" unsigned long UNK_006017ae;
extern "C" unsigned long UNK_00601854;
extern "C" unsigned long UNK_00601856;
extern "C" unsigned long UNK_006018f0;
extern "C" unsigned long UNK_0060191a;
extern "C" unsigned long UNK_006019d6;
extern "C" unsigned long UNK_00601b10;
extern "C" unsigned long UNK_00601bf8;
extern "C" unsigned long UNK_00601bfa;
extern "C" unsigned long UNK_00601cac;
extern "C" unsigned long UNK_00601cd2;
extern "C" unsigned long UNK_00601cfa;
extern "C" unsigned long UNK_00601dd8;
extern "C" unsigned long UNK_00601dee;
extern "C" unsigned long _DAT_00601160;
extern "C" unsigned long _DAT_00601164;
extern "C" unsigned long _UNK_00601084;
extern "C" unsigned long _UNK_00601088;
extern "C" unsigned long _UNK_0060109c;
extern "C" unsigned long _UNK_006010c4;
extern "C" unsigned long _UNK_00601654;
extern "C" unsigned long _UNK_00601658;
extern "C" unsigned long _UNK_0060165c;
extern "C" unsigned long _UNK_00601660;
extern "C" unsigned long _UNK_00601664;
extern "C" unsigned long _UNK_00601668;
extern "C" unsigned long _UNK_0060166c;
extern "C" unsigned long _UNK_00601670;
extern "C" unsigned long _UNK_00601674;
extern "C" unsigned long _UNK_00601678;
extern "C" unsigned long _UNK_0060167c;
extern "C" unsigned long _UNK_00601680;
extern "C" unsigned long _UNK_00601684;
extern "C" unsigned long _UNK_00601688;
extern "C" unsigned long _UNK_0060168c;
extern "C" unsigned long _UNK_00601ab0;
extern "C" unsigned long _UNK_00601ab4;
extern "C" unsigned long _UNK_00601ab8;
extern "C" unsigned long _UNK_00601abc;
extern "C" unsigned long _UNK_00601ac0;
extern "C" unsigned long _UNK_00601ac4;
extern "C" unsigned long _UNK_00601ac8;
extern "C" unsigned long _UNK_00601acc;
extern "C" unsigned long _UNK_00601ad0;
extern "C" unsigned long _UNK_00601ad4;
extern "C" unsigned long _UNK_00601ad8;
extern "C" unsigned long _UNK_00601adc;
extern "C" unsigned long _UNK_00601ae0;
extern "C" unsigned long _UNK_00601ae4;
extern "C" unsigned long _UNK_00601ae8;
extern "C" unsigned long _UNK_00601aec;
extern "C" unsigned long _UNK_00601ee4;
extern "C" unsigned long _UNK_00601ee8;
extern "C" unsigned long _UNK_00601eec;
extern "C" unsigned long _UNK_00601ef0;
extern "C" unsigned long _UNK_00601ef4;
extern "C" unsigned long _UNK_00601ef8;
extern "C" unsigned long _UNK_00601efc;
extern "C" unsigned long _UNK_00601f00;
extern "C" unsigned long _UNK_00601f04;
extern "C" unsigned long _UNK_00601f08;
extern "C" unsigned long _UNK_00601f0c;
extern "C" unsigned long _UNK_00601f10;
extern "C" unsigned long _UNK_00601f14;
extern "C" unsigned long _UNK_00601f18;
extern "C" unsigned long _UNK_00601f1c;
extern "C" unsigned long _UNK_00601f20;
extern "C" unsigned long _UNK_00601f24;
extern "C" unsigned long _UNK_00601f28;
extern "C" unsigned long g_00601010;
extern "C" unsigned long g_00601054;
extern "C" unsigned long g_00601084;
extern "C" unsigned long g_00601088;
extern "C" unsigned long g_00601098;
extern "C" unsigned long g_0060109c;
extern "C" unsigned long g_006010c0;
extern "C" unsigned long g_006010c4;
extern "C" unsigned long g_00601160;
extern "C" unsigned long g_00601164;
extern "C" unsigned long g_00601272;
extern "C" unsigned long g_00601356;
extern "C" unsigned long g_00601444;
extern "C" unsigned long g_0060146e;
extern "C" unsigned long g_00601538;
extern "C" unsigned long g_00601570;
extern "C" unsigned long g_0060163a;
extern "C" unsigned long g_00601654;
extern "C" unsigned long g_00601658;
extern "C" unsigned long g_0060165c;
extern "C" unsigned long g_00601660;
extern "C" unsigned long g_00601664;
extern "C" unsigned long g_00601668;
extern "C" unsigned long g_0060166c;
extern "C" unsigned long g_00601670;
extern "C" unsigned long g_00601674;
extern "C" unsigned long g_00601678;
extern "C" unsigned long g_0060167c;
extern "C" unsigned long g_00601680;
extern "C" unsigned long g_00601684;
extern "C" unsigned long g_00601688;
extern "C" unsigned long g_0060168c;
extern "C" unsigned long g_0060171e;
extern "C" unsigned long g_006017ae;
extern "C" unsigned long g_00601854;
extern "C" unsigned long g_00601856;
extern "C" unsigned long g_006018f0;
extern "C" unsigned long g_0060191a;
extern "C" unsigned long g_006019d6;
extern "C" unsigned long g_00601ab0;
extern "C" unsigned long g_00601ab4;
extern "C" unsigned long g_00601ab8;
extern "C" unsigned long g_00601abc;
extern "C" unsigned long g_00601ac0;
extern "C" unsigned long g_00601ac4;
extern "C" unsigned long g_00601ac8;
extern "C" unsigned long g_00601acc;
extern "C" unsigned long g_00601ad0;
extern "C" unsigned long g_00601ad4;
extern "C" unsigned long g_00601ad8;
extern "C" unsigned long g_00601adc;
extern "C" unsigned long g_00601ae0;
extern "C" unsigned long g_00601ae4;
extern "C" unsigned long g_00601ae8;
extern "C" unsigned long g_00601aec;
extern "C" unsigned long g_00601b10;
extern "C" unsigned long g_00601bf8;
extern "C" unsigned long g_00601bfa;
extern "C" unsigned long g_00601cac;
extern "C" unsigned long g_00601cd2;
extern "C" unsigned long g_00601cfa;
extern "C" unsigned long g_00601dd8;
extern "C" unsigned long g_00601dee;
extern "C" unsigned long g_00601ee4;
extern "C" unsigned long g_00601ee8;
extern "C" unsigned long g_00601eec;
extern "C" unsigned long g_00601ef0;
extern "C" unsigned long g_00601ef4;
extern "C" unsigned long g_00601ef8;
extern "C" unsigned long g_00601efc;
extern "C" unsigned long g_00601f00;
extern "C" unsigned long g_00601f04;
extern "C" unsigned long g_00601f08;
extern "C" unsigned long g_00601f0c;
extern "C" unsigned long g_00601f10;
extern "C" unsigned long g_00601f14;
extern "C" unsigned long g_00601f18;
extern "C" unsigned long g_00601f1c;
extern "C" unsigned long g_00601f20;
extern "C" unsigned long g_00601f24;
extern "C" unsigned long g_00601f28;
BLJJSDataInfoView::~BLJJSDataInfoView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = (undefined4)(intptr_t)(*(int *)((unsigned char *)((char *)&g_00601010 + (intptr_t)(g_00601084))));
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
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,(unsigned char *)((char *)&g_00601054 + (intptr_t)(g_00601088)),&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLJJSDataInfoView::BLJJSDataInfoView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = (undefined4)(intptr_t)(*(int *)(g_00601160 + 0x601108));
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLJJSDataInfoView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * BLJJSDataInfoView::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x134)));
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

undefined4 BLJJSDataInfoView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x108);
}

undefined4 BLJJSDataInfoView::getBtnClose()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

undefined4 BLJJSDataInfoView::getLabTitle()
{
  return *(undefined4 *)(((int)this) + 0x118);
}

undefined4 BLJJSDataInfoView::getSpriteItem()
{
  return *(undefined4 *)(((int)this) + 0x11c);
}

undefined4 BLJJSDataInfoView::getLabContent()
{
  return *(undefined4 *)(((int)this) + 0x120);
}

undefined4 BLJJSDataInfoView::getLabJiFen()
{
  return *(undefined4 *)(((int)this) + 0x128);
}

undefined4 BLJJSDataInfoView::getLabItemNum()
{
  return *(undefined4 *)(((int)this) + 0x124);
}

undefined4 BLJJSDataInfoView::getBtnBuy()
{
  return *(undefined4 *)(((int)this) + 300);
}

undefined4 BLJJSDataInfoView::getSpriteDebris()
{
  return *(undefined4 *)(((int)this) + 0x130);
}

void BLJJSDataInfoView::onEnter()
{
  ((BLJJSDataInfoPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLJJSDataInfoView::onExit()
{
  ((BLJJSDataInfoPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
bool BLJJSDataInfoView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
