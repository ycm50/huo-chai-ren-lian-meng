#include "BLMainAccountShuoMingView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLMainAccountShuoMingPresenter.h"
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
extern "C" long long func_0079e804(...);
extern "C" long long func_0079eb94(...);
extern "C" long long ghidra_CONCAT13(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_00592038;
extern "C" unsigned long UNK_0059208a;
extern "C" unsigned long UNK_005920d0;
extern "C" unsigned long UNK_005920f8;
extern "C" unsigned long UNK_005922b2;
extern "C" unsigned long UNK_00592394;
extern "C" unsigned long UNK_00592480;
extern "C" unsigned long UNK_005924aa;
extern "C" unsigned long UNK_00592570;
extern "C" unsigned long UNK_005925a6;
extern "C" unsigned long UNK_00592670;
extern "C" unsigned long UNK_0059267c;
extern "C" unsigned long UNK_0059268c;
extern "C" unsigned long UNK_005926e4;
extern "C" unsigned long UNK_005926f4;
extern "C" unsigned long UNK_00592700;
extern "C" unsigned long UNK_00592710;
extern "C" unsigned long UNK_0059271a;
extern "C" unsigned long UNK_0059272a;
extern "C" unsigned long UNK_0059273a;
extern "C" unsigned long UNK_00592744;
extern "C" unsigned long UNK_00592754;
extern "C" unsigned long UNK_00592764;
extern "C" unsigned long UNK_0059278c;
extern "C" unsigned long UNK_00592858;
extern "C" unsigned long UNK_00592884;
extern "C" unsigned long UNK_00592954;
extern "C" unsigned long UNK_0059296e;
extern "C" unsigned long _DAT_005921b0;
extern "C" unsigned long _DAT_005921b4;
extern "C" unsigned long _UNK_005920bc;
extern "C" unsigned long _UNK_005920c0;
extern "C" unsigned long _UNK_005920d4;
extern "C" unsigned long _UNK_005920fc;
extern "C" unsigned long _UNK_0059268c;
extern "C" unsigned long _UNK_00592690;
extern "C" unsigned long _UNK_00592694;
extern "C" unsigned long _UNK_00592698;
extern "C" unsigned long _UNK_0059269c;
extern "C" unsigned long _UNK_005926a0;
extern "C" unsigned long _UNK_005926a4;
extern "C" unsigned long _UNK_005926a8;
extern "C" unsigned long _UNK_005926ac;
extern "C" unsigned long _UNK_005926b0;
extern "C" unsigned long _UNK_005926b4;
extern "C" unsigned long _UNK_005926b8;
extern "C" unsigned long _UNK_005926bc;
extern "C" unsigned long _UNK_005926c0;
extern "C" unsigned long _UNK_005926c4;
extern "C" unsigned long _UNK_005926c8;
extern "C" unsigned long _UNK_005926cc;
extern "C" unsigned long _UNK_00592a9c;
extern "C" unsigned long _UNK_00592aa0;
extern "C" unsigned long _UNK_00592aa4;
extern "C" unsigned long _UNK_00592aa8;
extern "C" unsigned long _UNK_00592aac;
extern "C" unsigned long _UNK_00592ab0;
extern "C" unsigned long _UNK_00592ab4;
extern "C" unsigned long _UNK_00592ab8;
extern "C" unsigned long _UNK_00592abc;
extern "C" unsigned long _UNK_00592ac0;
extern "C" unsigned long _UNK_00592ac4;
extern "C" unsigned long _UNK_00592ac8;
extern "C" unsigned long _UNK_00592acc;
extern "C" unsigned long _UNK_00592ad0;
extern "C" unsigned long _UNK_00592ad4;
extern "C" unsigned long _UNK_00592ad8;
extern "C" unsigned long _UNK_00592adc;
extern "C" unsigned long _UNK_00592ae0;
extern "C" unsigned long _UNK_00592ae4;
extern "C" unsigned long _UNK_00592ae8;
extern "C" unsigned long _UNK_00592aec;
extern "C" unsigned long _UNK_00592af0;
extern "C" unsigned long _UNK_00592af4;
extern "C" unsigned long _UNK_00592af8;
extern "C" unsigned long g_00592038;
extern "C" unsigned long g_0059208a;
extern "C" unsigned long g_005920bc;
extern "C" unsigned long g_005920c0;
extern "C" unsigned long g_005920d0;
extern "C" unsigned long g_005920d4;
extern "C" unsigned long g_005920f8;
extern "C" unsigned long g_005920fc;
extern "C" unsigned long g_005921b0;
extern "C" unsigned long g_005921b4;
extern "C" unsigned long g_005922b2;
extern "C" unsigned long g_00592394;
extern "C" unsigned long g_00592480;
extern "C" unsigned long g_005924aa;
extern "C" unsigned long g_00592570;
extern "C" unsigned long g_005925a6;
extern "C" unsigned long g_00592670;
extern "C" unsigned long g_0059267c;
extern "C" unsigned long g_0059268c;
extern "C" unsigned long g_00592690;
extern "C" unsigned long g_00592694;
extern "C" unsigned long g_00592698;
extern "C" unsigned long g_0059269c;
extern "C" unsigned long g_005926a0;
extern "C" unsigned long g_005926a4;
extern "C" unsigned long g_005926a8;
extern "C" unsigned long g_005926ac;
extern "C" unsigned long g_005926b0;
extern "C" unsigned long g_005926b4;
extern "C" unsigned long g_005926b8;
extern "C" unsigned long g_005926bc;
extern "C" unsigned long g_005926c0;
extern "C" unsigned long g_005926c4;
extern "C" unsigned long g_005926c8;
extern "C" unsigned long g_005926cc;
extern "C" unsigned long g_005926e4;
extern "C" unsigned long g_005926f4;
extern "C" unsigned long g_00592700;
extern "C" unsigned long g_00592710;
extern "C" unsigned long g_0059271a;
extern "C" unsigned long g_0059272a;
extern "C" unsigned long g_0059273a;
extern "C" unsigned long g_00592744;
extern "C" unsigned long g_00592754;
extern "C" unsigned long g_00592764;
extern "C" unsigned long g_0059278c;
extern "C" unsigned long g_00592858;
extern "C" unsigned long g_00592884;
extern "C" unsigned long g_00592954;
extern "C" unsigned long g_0059296e;
extern "C" unsigned long g_00592a9c;
extern "C" unsigned long g_00592aa0;
extern "C" unsigned long g_00592aa4;
extern "C" unsigned long g_00592aa8;
extern "C" unsigned long g_00592aac;
extern "C" unsigned long g_00592ab0;
extern "C" unsigned long g_00592ab4;
extern "C" unsigned long g_00592ab8;
extern "C" unsigned long g_00592abc;
extern "C" unsigned long g_00592ac0;
extern "C" unsigned long g_00592ac4;
extern "C" unsigned long g_00592ac8;
extern "C" unsigned long g_00592acc;
extern "C" unsigned long g_00592ad0;
extern "C" unsigned long g_00592ad4;
extern "C" unsigned long g_00592ad8;
extern "C" unsigned long g_00592adc;
extern "C" unsigned long g_00592ae0;
extern "C" unsigned long g_00592ae4;
extern "C" unsigned long g_00592ae8;
extern "C" unsigned long g_00592aec;
extern "C" unsigned long g_00592af0;
extern "C" unsigned long g_00592af4;
extern "C" unsigned long g_00592af8;
BLMainAccountShuoMingView::~BLMainAccountShuoMingView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_00592038 + g_005920bc);
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
  if (*(int *)((int)this + 4*(0x43)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x43)) = 0;
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0059208a + g_005920c0,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}


int * BLMainAccountShuoMingView::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(300)));
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

undefined4 BLMainAccountShuoMingView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 BLMainAccountShuoMingView::getBackGround()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

undefined4 BLMainAccountShuoMingView::getTabBg()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

undefined4 BLMainAccountShuoMingView::getLabTitle()
{
  return *(undefined4 *)(((int)this) + 0x118);
}

undefined4 BLMainAccountShuoMingView::getBtnOK()
{
  return *(undefined4 *)(((int)this) + 0x11c);
}

undefined4 BLMainAccountShuoMingView::getBtnClose()
{
  return *(undefined4 *)(((int)this) + 0x128);
}

void BLMainAccountShuoMingView::onEnter()
{
  ((BLMainAccountShuoMingPresenter *)*(undefined4 *)(((int)this) + 0x10c))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLMainAccountShuoMingView::onExit()
{
  ((BLMainAccountShuoMingPresenter *)*(undefined4 *)(((int)this) + 0x10c))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (2) =====
BLMainAccountShuoMingView::BLMainAccountShuoMingView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = (undefined4)(intptr_t)(*(int *)(g_005921b0 + 0x592140));
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  iVar2 = (undefined4)(intptr_t)(cocos2d::CCArray::create());
  *(int *)((int)this + 4*(0x42)) = iVar2;
  if (iVar2 != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLMainAccountShuoMingView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

bool BLMainAccountShuoMingView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
