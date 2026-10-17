#include "BLMineSnatchView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLMineSnatchPresenter.h"
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
extern "C" long long ghidra_CONCAT13(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_005a9398;
extern "C" unsigned long UNK_005a93dc;
extern "C" unsigned long UNK_005a9420;
extern "C" unsigned long UNK_005a9448;
extern "C" unsigned long UNK_005a9460;
extern "C" unsigned long UNK_005a948e;
extern "C" unsigned long UNK_005a9564;
extern "C" unsigned long UNK_005a9590;
extern "C" unsigned long UNK_005a95cd;
extern "C" unsigned long UNK_005a9656;
extern "C" unsigned long UNK_005a968a;
extern "C" unsigned long UNK_005a9747;
extern "C" unsigned long UNK_005a976e;
extern "C" unsigned long UNK_005a97a4;
extern "C" unsigned long UNK_005a9858;
extern "C" unsigned long UNK_005a9884;
extern "C" unsigned long UNK_005a9997;
extern "C" unsigned long UNK_005a99ba;
extern "C" unsigned long UNK_005a99e8;
extern "C" unsigned long UNK_005a9a9c;
extern "C" unsigned long UNK_005a9ac6;
extern "C" unsigned long UNK_005a9b85;
extern "C" unsigned long UNK_005a9ba8;
extern "C" unsigned long UNK_005a9bd6;
extern "C" unsigned long UNK_005a9c8a;
extern "C" unsigned long UNK_005a9cb6;
extern "C" unsigned long UNK_005a9d71;
extern "C" unsigned long UNK_005a9d92;
extern "C" unsigned long UNK_005a9e0e;
extern "C" unsigned long UNK_005a9ec2;
extern "C" unsigned long UNK_005a9eec;
extern "C" unsigned long UNK_005a9fab;
extern "C" unsigned long UNK_005a9fd2;
extern "C" unsigned long UNK_005aa00e;
extern "C" unsigned long UNK_005aa0c2;
extern "C" unsigned long UNK_005aa0ee;
extern "C" unsigned long UNK_005aa1ad;
extern "C" unsigned long UNK_005aa1d0;
extern "C" unsigned long UNK_005aa240;
extern "C" unsigned long UNK_005aa324;
extern "C" unsigned long UNK_005aa354;
extern "C" unsigned long UNK_005aa40a;
extern "C" unsigned long UNK_005aa434;
extern "C" unsigned long UNK_005aa4e9;
extern "C" unsigned long UNK_005aa514;
extern "C" unsigned long UNK_005aa540;
extern "C" unsigned long UNK_005aa5f4;
extern "C" unsigned long UNK_005aa662;
extern "C" unsigned long UNK_005aa713;
extern "C" unsigned long UNK_005aa73c;
extern "C" unsigned long UNK_005aa76a;
extern "C" unsigned long UNK_005aa81e;
extern "C" unsigned long UNK_005aa848;
extern "C" unsigned long UNK_005aa8fd;
extern "C" unsigned long UNK_005aa914;
extern "C" unsigned long UNK_005aa940;
extern "C" unsigned long _UNK_005a940c;
extern "C" unsigned long _UNK_005a9410;
extern "C" unsigned long _UNK_005a9424;
extern "C" unsigned long _UNK_005a944c;
extern "C" unsigned long _UNK_005a94b8;
extern "C" unsigned long _UNK_005a94bc;
extern "C" unsigned long _UNK_005a9940;
extern "C" unsigned long _UNK_005a9944;
extern "C" unsigned long _UNK_005a9948;
extern "C" unsigned long _UNK_005a994c;
extern "C" unsigned long _UNK_005a9950;
extern "C" unsigned long _UNK_005a9954;
extern "C" unsigned long _UNK_005a9958;
extern "C" unsigned long _UNK_005a995c;
extern "C" unsigned long _UNK_005a9960;
extern "C" unsigned long _UNK_005a9964;
extern "C" unsigned long _UNK_005a9968;
extern "C" unsigned long _UNK_005a996c;
extern "C" unsigned long _UNK_005a9970;
extern "C" unsigned long _UNK_005a9974;
extern "C" unsigned long _UNK_005a9978;
extern "C" unsigned long _UNK_005a997c;
extern "C" unsigned long _UNK_005a9980;
extern "C" unsigned long _UNK_005a9984;
extern "C" unsigned long _UNK_005a9988;
extern "C" unsigned long _UNK_005a998c;
extern "C" unsigned long _UNK_005a9d94;
extern "C" unsigned long _UNK_005a9d98;
extern "C" unsigned long _UNK_005a9d9c;
extern "C" unsigned long _UNK_005a9da0;
extern "C" unsigned long _UNK_005a9da4;
extern "C" unsigned long _UNK_005a9da8;
extern "C" unsigned long _UNK_005a9dac;
extern "C" unsigned long _UNK_005a9db0;
extern "C" unsigned long _UNK_005a9db4;
extern "C" unsigned long _UNK_005a9db8;
extern "C" unsigned long _UNK_005a9dbc;
extern "C" unsigned long _UNK_005a9dc0;
extern "C" unsigned long _UNK_005a9dc4;
extern "C" unsigned long _UNK_005a9dc8;
extern "C" unsigned long _UNK_005a9dcc;
extern "C" unsigned long _UNK_005a9dd0;
extern "C" unsigned long _UNK_005a9dd4;
extern "C" unsigned long _UNK_005a9dd8;
extern "C" unsigned long _UNK_005aa1e8;
extern "C" unsigned long _UNK_005aa1ec;
extern "C" unsigned long _UNK_005aa1f0;
extern "C" unsigned long _UNK_005aa1f4;
extern "C" unsigned long _UNK_005aa1f8;
extern "C" unsigned long _UNK_005aa1fc;
extern "C" unsigned long _UNK_005aa200;
extern "C" unsigned long _UNK_005aa204;
extern "C" unsigned long _UNK_005aa208;
extern "C" unsigned long _UNK_005aa20c;
extern "C" unsigned long _UNK_005aa210;
extern "C" unsigned long _UNK_005aa214;
extern "C" unsigned long _UNK_005aa218;
extern "C" unsigned long _UNK_005aa21c;
extern "C" unsigned long _UNK_005aa220;
extern "C" unsigned long _UNK_005aa224;
extern "C" unsigned long _UNK_005aa618;
extern "C" unsigned long _UNK_005aa61c;
extern "C" unsigned long _UNK_005aa620;
extern "C" unsigned long _UNK_005aa624;
extern "C" unsigned long _UNK_005aa628;
extern "C" unsigned long _UNK_005aa62c;
extern "C" unsigned long _UNK_005aa630;
extern "C" unsigned long _UNK_005aa634;
extern "C" unsigned long _UNK_005aa638;
extern "C" unsigned long _UNK_005aa63c;
extern "C" unsigned long _UNK_005aa640;
extern "C" unsigned long _UNK_005aa644;
extern "C" unsigned long _UNK_005aa648;
extern "C" unsigned long _UNK_005aa64c;
extern "C" unsigned long _UNK_005aa650;
extern "C" unsigned long _UNK_005aa654;
extern "C" unsigned long _UNK_005aaa40;
extern "C" unsigned long _UNK_005aaa44;
extern "C" unsigned long _UNK_005aaa48;
extern "C" unsigned long _UNK_005aaa4c;
extern "C" unsigned long _UNK_005aaa50;
extern "C" unsigned long _UNK_005aaa54;
extern "C" unsigned long _UNK_005aaa58;
extern "C" unsigned long _UNK_005aaa5c;
extern "C" unsigned long _UNK_005aaa60;
extern "C" unsigned long _UNK_005aaa64;
extern "C" unsigned long _UNK_005aaa68;
extern "C" unsigned long _UNK_005aaa6c;
extern "C" unsigned long _UNK_005aaa70;
extern "C" unsigned long _UNK_005aaa74;
extern "C" unsigned long g_005a9398;
extern "C" unsigned long g_005a93dc;
extern "C" unsigned long g_005a940c;
extern "C" unsigned long g_005a9410;
extern "C" unsigned long g_005a9420;
extern "C" unsigned long g_005a9424;
extern "C" unsigned long g_005a9448;
extern "C" unsigned long g_005a944c;
extern "C" unsigned long g_005a9460;
extern "C" unsigned long g_005a948e;
extern "C" unsigned long g_005a94b8;
extern "C" unsigned long g_005a94bc;
extern "C" unsigned long g_005a9564;
extern "C" unsigned long g_005a9590;
extern "C" unsigned long g_005a95cd;
extern "C" unsigned long g_005a9656;
extern "C" unsigned long g_005a968a;
extern "C" unsigned long g_005a9747;
extern "C" unsigned long g_005a976e;
extern "C" unsigned long g_005a97a4;
extern "C" unsigned long g_005a9858;
extern "C" unsigned long g_005a9884;
extern "C" unsigned long g_005a9940;
extern "C" unsigned long g_005a9944;
extern "C" unsigned long g_005a9948;
extern "C" unsigned long g_005a994c;
extern "C" unsigned long g_005a9950;
extern "C" unsigned long g_005a9954;
extern "C" unsigned long g_005a9958;
extern "C" unsigned long g_005a995c;
extern "C" unsigned long g_005a9960;
extern "C" unsigned long g_005a9964;
extern "C" unsigned long g_005a9968;
extern "C" unsigned long g_005a996c;
extern "C" unsigned long g_005a9970;
extern "C" unsigned long g_005a9974;
extern "C" unsigned long g_005a9978;
extern "C" unsigned long g_005a997c;
extern "C" unsigned long g_005a9980;
extern "C" unsigned long g_005a9984;
extern "C" unsigned long g_005a9988;
extern "C" unsigned long g_005a998c;
extern "C" unsigned long g_005a9997;
extern "C" unsigned long g_005a99ba;
extern "C" unsigned long g_005a99e8;
extern "C" unsigned long g_005a9a9c;
extern "C" unsigned long g_005a9ac6;
extern "C" unsigned long g_005a9b85;
extern "C" unsigned long g_005a9ba8;
extern "C" unsigned long g_005a9bd6;
extern "C" unsigned long g_005a9c8a;
extern "C" unsigned long g_005a9cb6;
extern "C" unsigned long g_005a9d71;
extern "C" unsigned long g_005a9d92;
extern "C" unsigned long g_005a9d94;
extern "C" unsigned long g_005a9d98;
extern "C" unsigned long g_005a9d9c;
extern "C" unsigned long g_005a9da0;
extern "C" unsigned long g_005a9da4;
extern "C" unsigned long g_005a9da8;
extern "C" unsigned long g_005a9dac;
extern "C" unsigned long g_005a9db0;
extern "C" unsigned long g_005a9db4;
extern "C" unsigned long g_005a9db8;
extern "C" unsigned long g_005a9dbc;
extern "C" unsigned long g_005a9dc0;
extern "C" unsigned long g_005a9dc4;
extern "C" unsigned long g_005a9dc8;
extern "C" unsigned long g_005a9dcc;
extern "C" unsigned long g_005a9dd0;
extern "C" unsigned long g_005a9dd4;
extern "C" unsigned long g_005a9dd8;
extern "C" unsigned long g_005a9e0e;
extern "C" unsigned long g_005a9ec2;
extern "C" unsigned long g_005a9eec;
extern "C" unsigned long g_005a9fab;
extern "C" unsigned long g_005a9fd2;
extern "C" unsigned long g_005aa00e;
extern "C" unsigned long g_005aa0c2;
extern "C" unsigned long g_005aa0ee;
extern "C" unsigned long g_005aa1ad;
extern "C" unsigned long g_005aa1d0;
extern "C" unsigned long g_005aa1e8;
extern "C" unsigned long g_005aa1ec;
extern "C" unsigned long g_005aa1f0;
extern "C" unsigned long g_005aa1f4;
extern "C" unsigned long g_005aa1f8;
extern "C" unsigned long g_005aa1fc;
extern "C" unsigned long g_005aa200;
extern "C" unsigned long g_005aa204;
extern "C" unsigned long g_005aa208;
extern "C" unsigned long g_005aa20c;
extern "C" unsigned long g_005aa210;
extern "C" unsigned long g_005aa214;
extern "C" unsigned long g_005aa218;
extern "C" unsigned long g_005aa21c;
extern "C" unsigned long g_005aa220;
extern "C" unsigned long g_005aa224;
extern "C" unsigned long g_005aa240;
extern "C" unsigned long g_005aa324;
extern "C" unsigned long g_005aa354;
extern "C" unsigned long g_005aa40a;
extern "C" unsigned long g_005aa434;
extern "C" unsigned long g_005aa4e9;
extern "C" unsigned long g_005aa514;
extern "C" unsigned long g_005aa540;
extern "C" unsigned long g_005aa5f4;
extern "C" unsigned long g_005aa618;
extern "C" unsigned long g_005aa61c;
extern "C" unsigned long g_005aa620;
extern "C" unsigned long g_005aa624;
extern "C" unsigned long g_005aa628;
extern "C" unsigned long g_005aa62c;
extern "C" unsigned long g_005aa630;
extern "C" unsigned long g_005aa634;
extern "C" unsigned long g_005aa638;
extern "C" unsigned long g_005aa63c;
extern "C" unsigned long g_005aa640;
extern "C" unsigned long g_005aa644;
extern "C" unsigned long g_005aa648;
extern "C" unsigned long g_005aa64c;
extern "C" unsigned long g_005aa650;
extern "C" unsigned long g_005aa654;
extern "C" unsigned long g_005aa662;
extern "C" unsigned long g_005aa713;
extern "C" unsigned long g_005aa73c;
extern "C" unsigned long g_005aa76a;
extern "C" unsigned long g_005aa81e;
extern "C" unsigned long g_005aa848;
extern "C" unsigned long g_005aa8fd;
extern "C" unsigned long g_005aa914;
extern "C" unsigned long g_005aa940;
extern "C" unsigned long g_005aaa40;
extern "C" unsigned long g_005aaa44;
extern "C" unsigned long g_005aaa48;
extern "C" unsigned long g_005aaa4c;
extern "C" unsigned long g_005aaa50;
extern "C" unsigned long g_005aaa54;
extern "C" unsigned long g_005aaa58;
extern "C" unsigned long g_005aaa5c;
extern "C" unsigned long g_005aaa60;
extern "C" unsigned long g_005aaa64;
extern "C" unsigned long g_005aaa68;
extern "C" unsigned long g_005aaa6c;
extern "C" unsigned long g_005aaa70;
extern "C" unsigned long g_005aaa74;
BLMineSnatchView::~BLMineSnatchView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_005a9398 + g_005a940c);
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
  func_0079e45c(&uStack_14,&g_005a93dc + g_005a9410,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLMineSnatchView::BLMineSnatchView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_005a9460 + g_005a94b8);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005a948e + g_005a94bc,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * BLMineSnatchView::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x150)));
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

undefined4 BLMineSnatchView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x108);
}

void BLMineSnatchView::onExit()
{
  ((BLMineSnatchPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

void BLMineSnatchView::onEnter()
{
  ((cocos2d::CCLayer *)this)->onEnter();
  ((BLMineSnatchPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
bool BLMineSnatchView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
