#include "HeroLineUpView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "HeroLineUpPresenter.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <new>   // ghost_fix.js 自动补齐
using namespace cocos2d;
// 兜底声明
extern "C" long long func_00512484(...);
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long ghidra_CONCAT13(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_005112f0;
extern "C" unsigned long UNK_00511342;
extern "C" unsigned long UNK_00511388;
extern "C" unsigned long UNK_005113b0;
extern "C" unsigned long UNK_0051159e;
extern "C" unsigned long UNK_00511680;
extern "C" unsigned long UNK_00511736;
extern "C" unsigned long UNK_00511762;
extern "C" unsigned long UNK_0051184a;
extern "C" unsigned long UNK_00511878;
extern "C" unsigned long UNK_00511a6e;
extern "C" unsigned long UNK_00511b60;
extern "C" unsigned long UNK_00511bba;
extern "C" unsigned long UNK_00511c80;
extern "C" unsigned long UNK_00511cb2;
extern "C" unsigned long UNK_00511d84;
extern "C" unsigned long UNK_00511dae;
extern "C" unsigned long UNK_00511e74;
extern "C" unsigned long UNK_00511ea2;
extern "C" unsigned long UNK_00511f74;
extern "C" unsigned long UNK_00511ff0;
extern "C" unsigned long UNK_005120b6;
extern "C" unsigned long UNK_005120e4;
extern "C" unsigned long UNK_005121b6;
extern "C" unsigned long UNK_005121e0;
extern "C" unsigned long UNK_005122a0;
extern "C" unsigned long UNK_005122ca;
extern "C" unsigned long _DAT_00511468;
extern "C" unsigned long _DAT_0051146c;
extern "C" unsigned long _UNK_00511374;
extern "C" unsigned long _UNK_00511378;
extern "C" unsigned long _UNK_0051138c;
extern "C" unsigned long _UNK_005113b4;
extern "C" unsigned long _UNK_00511980;
extern "C" unsigned long _UNK_00511984;
extern "C" unsigned long _UNK_00511988;
extern "C" unsigned long _UNK_0051198c;
extern "C" unsigned long _UNK_00511990;
extern "C" unsigned long _UNK_00511994;
extern "C" unsigned long _UNK_00511998;
extern "C" unsigned long _UNK_0051199c;
extern "C" unsigned long _UNK_005119a0;
extern "C" unsigned long _UNK_005119a4;
extern "C" unsigned long _UNK_005119a8;
extern "C" unsigned long _UNK_005119ac;
extern "C" unsigned long _UNK_005119b0;
extern "C" unsigned long _UNK_005119b4;
extern "C" unsigned long _UNK_005119b8;
extern "C" unsigned long _UNK_005119bc;
extern "C" unsigned long _UNK_00511b78;
extern "C" unsigned long _UNK_00511b7c;
extern "C" unsigned long _UNK_00511b80;
extern "C" unsigned long _UNK_00511b84;
extern "C" unsigned long _UNK_00511b88;
extern "C" unsigned long _UNK_00511b8c;
extern "C" unsigned long _UNK_00511b90;
extern "C" unsigned long _UNK_00511b94;
extern "C" unsigned long _UNK_00511b98;
extern "C" unsigned long _UNK_00511f90;
extern "C" unsigned long _UNK_00511f94;
extern "C" unsigned long _UNK_00511f98;
extern "C" unsigned long _UNK_00511f9c;
extern "C" unsigned long _UNK_00511fa0;
extern "C" unsigned long _UNK_00511fa4;
extern "C" unsigned long _UNK_00511fa8;
extern "C" unsigned long _UNK_00511fac;
extern "C" unsigned long _UNK_00511fb0;
extern "C" unsigned long _UNK_00511fb4;
extern "C" unsigned long _UNK_00511fb8;
extern "C" unsigned long _UNK_00511fbc;
extern "C" unsigned long _UNK_00511fc0;
extern "C" unsigned long _UNK_00511fc4;
extern "C" unsigned long _UNK_00511fc8;
extern "C" unsigned long _UNK_00511fcc;
extern "C" unsigned long _UNK_00511fd0;
extern "C" unsigned long _UNK_00511fd4;
extern "C" unsigned long _UNK_00511fd8;
extern "C" unsigned long _UNK_00511fdc;
extern "C" unsigned long _UNK_005123cc;
extern "C" unsigned long _UNK_005123d0;
extern "C" unsigned long _UNK_005123d4;
extern "C" unsigned long _UNK_005123d8;
extern "C" unsigned long _UNK_005123dc;
extern "C" unsigned long _UNK_005123e0;
extern "C" unsigned long _UNK_005123e4;
extern "C" unsigned long _UNK_005123e8;
extern "C" unsigned long _UNK_005123ec;
extern "C" unsigned long _UNK_005123f0;
extern "C" unsigned long _UNK_005123f4;
extern "C" unsigned long _UNK_005123f8;
extern "C" unsigned long _UNK_005123fc;
extern "C" unsigned long _UNK_00512400;
extern "C" unsigned long _UNK_00512404;
extern "C" unsigned long _UNK_00512408;
extern "C" unsigned long g_005112f0;
extern "C" unsigned long g_00511342;
extern "C" unsigned long g_00511374;
extern "C" unsigned long g_00511378;
extern "C" unsigned long g_00511388;
extern "C" unsigned long g_0051138c;
extern "C" unsigned long g_005113b0;
extern "C" unsigned long g_005113b4;
extern "C" unsigned long g_00511468;
extern "C" unsigned long g_0051146c;
extern "C" unsigned long g_0051159e;
extern "C" unsigned long g_00511680;
extern "C" unsigned long g_00511736;
extern "C" unsigned long g_00511762;
extern "C" unsigned long g_0051184a;
extern "C" unsigned long g_00511878;
extern "C" unsigned long g_00511980;
extern "C" unsigned long g_00511984;
extern "C" unsigned long g_00511988;
extern "C" unsigned long g_0051198c;
extern "C" unsigned long g_00511990;
extern "C" unsigned long g_00511994;
extern "C" unsigned long g_00511998;
extern "C" unsigned long g_0051199c;
extern "C" unsigned long g_005119a0;
extern "C" unsigned long g_005119a4;
extern "C" unsigned long g_005119a8;
extern "C" unsigned long g_005119ac;
extern "C" unsigned long g_005119b0;
extern "C" unsigned long g_005119b4;
extern "C" unsigned long g_005119b8;
extern "C" unsigned long g_005119bc;
extern "C" unsigned long g_00511a6e;
extern "C" unsigned long g_00511b60;
extern "C" unsigned long g_00511b78;
extern "C" unsigned long g_00511b7c;
extern "C" unsigned long g_00511b80;
extern "C" unsigned long g_00511b84;
extern "C" unsigned long g_00511b88;
extern "C" unsigned long g_00511b8c;
extern "C" unsigned long g_00511b90;
extern "C" unsigned long g_00511b94;
extern "C" unsigned long g_00511b98;
extern "C" unsigned long g_00511bba;
extern "C" unsigned long g_00511c80;
extern "C" unsigned long g_00511cb2;
extern "C" unsigned long g_00511d84;
extern "C" unsigned long g_00511dae;
extern "C" unsigned long g_00511e74;
extern "C" unsigned long g_00511ea2;
extern "C" unsigned long g_00511f74;
extern "C" unsigned long g_00511f90;
extern "C" unsigned long g_00511f94;
extern "C" unsigned long g_00511f98;
extern "C" unsigned long g_00511f9c;
extern "C" unsigned long g_00511fa0;
extern "C" unsigned long g_00511fa4;
extern "C" unsigned long g_00511fa8;
extern "C" unsigned long g_00511fac;
extern "C" unsigned long g_00511fb0;
extern "C" unsigned long g_00511fb4;
extern "C" unsigned long g_00511fb8;
extern "C" unsigned long g_00511fbc;
extern "C" unsigned long g_00511fc0;
extern "C" unsigned long g_00511fc4;
extern "C" unsigned long g_00511fc8;
extern "C" unsigned long g_00511fcc;
extern "C" unsigned long g_00511fd0;
extern "C" unsigned long g_00511fd4;
extern "C" unsigned long g_00511fd8;
extern "C" unsigned long g_00511fdc;
extern "C" unsigned long g_00511ff0;
extern "C" unsigned long g_005120b6;
extern "C" unsigned long g_005120e4;
extern "C" unsigned long g_005121b6;
extern "C" unsigned long g_005121e0;
extern "C" unsigned long g_005122a0;
extern "C" unsigned long g_005122ca;
extern "C" unsigned long g_005123cc;
extern "C" unsigned long g_005123d0;
extern "C" unsigned long g_005123d4;
extern "C" unsigned long g_005123d8;
extern "C" unsigned long g_005123dc;
extern "C" unsigned long g_005123e0;
extern "C" unsigned long g_005123e4;
extern "C" unsigned long g_005123e8;
extern "C" unsigned long g_005123ec;
extern "C" unsigned long g_005123f0;
extern "C" unsigned long g_005123f4;
extern "C" unsigned long g_005123f8;
extern "C" unsigned long g_005123fc;
extern "C" unsigned long g_00512400;
extern "C" unsigned long g_00512404;
extern "C" unsigned long g_00512408;
HeroLineUpView::~HeroLineUpView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_005112f0 + g_00511374);
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
  func_0079e45c(&uStack_14,&g_00511342 + g_00511378,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}


int * HeroLineUpView::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x148)));
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

undefined4 HeroLineUpView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 HeroLineUpView::getBackGround()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

undefined4 HeroLineUpView::getSprBg()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

undefined4 HeroLineUpView::getbtnRight()
{
  return *(undefined4 *)(((int)this) + 0x118);
}

undefined4 HeroLineUpView::getBtnLeft()
{
  return *(undefined4 *)(((int)this) + 0x11c);
}

undefined4 HeroLineUpView::getTableViewRoles()
{
  return *(undefined4 *)(((int)this) + 0x120);
}

undefined4 HeroLineUpView::getTabBg()
{
  return *(undefined4 *)(((int)this) + 0x124);
}

undefined4 HeroLineUpView::getLabTitle()
{
  return *(undefined4 *)(((int)this) + 0x128);
}

undefined4 HeroLineUpView::getBtnClose()
{
  return *(undefined4 *)(((int)this) + 300);
}

undefined4 HeroLineUpView::getLabRoleLimit()
{
  return *(undefined4 *)(((int)this) + 0x130);
}

undefined4 HeroLineUpView::getBtnCancle()
{
  return *(undefined4 *)(((int)this) + 0x134);
}

undefined4 HeroLineUpView::getLabCancle()
{
  return *(undefined4 *)(((int)this) + 0x138);
}

undefined4 HeroLineUpView::getBtnSure()
{
  return *(undefined4 *)(((int)this) + 0x13c);
}

undefined4 HeroLineUpView::getLabSure()
{
  return *(undefined4 *)(((int)this) + 0x140);
}

undefined4 HeroLineUpView::getLabPlayTitle()
{
  return *(undefined4 *)(((int)this) + 0x144);
}

void HeroLineUpView::onEnter()
{
  ((HeroLineUpPresenter *)*(undefined4 *)(((int)this) + 0x10c))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void HeroLineUpView::onExit()
{
  ((HeroLineUpPresenter *)*(undefined4 *)(((int)this) + 0x10c))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (2) =====
HeroLineUpView::HeroLineUpView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = (undefined4)(intptr_t)(*(int *)(g_00511468 + 0x5113f8));
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
  func_0079e45c(&uStack_14,((intptr_t)"HeroLineUpView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

bool HeroLineUpView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
