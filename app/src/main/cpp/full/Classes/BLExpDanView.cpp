#include "BLExpDanView.h"
#include "BLExpDanPresenter.h"
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
extern "C" unsigned long UNK_005f8e78;
extern "C" unsigned long UNK_005f8eca;
extern "C" unsigned long UNK_005f8f10;
extern "C" unsigned long UNK_005f8f38;
extern "C" unsigned long UNK_005f912e;
extern "C" unsigned long UNK_005f9212;
extern "C" unsigned long UNK_005f9304;
extern "C" unsigned long UNK_005f9334;
extern "C" unsigned long UNK_005f9400;
extern "C" unsigned long UNK_005f94b6;
extern "C" unsigned long UNK_005f954e;
extern "C" unsigned long UNK_005f9552;
extern "C" unsigned long UNK_005f9567;
extern "C" unsigned long UNK_005f95ae;
extern "C" unsigned long UNK_005f9630;
extern "C" unsigned long UNK_005f96fa;
extern "C" unsigned long UNK_005f9756;
extern "C" unsigned long UNK_005f975a;
extern "C" unsigned long UNK_005f976d;
extern "C" unsigned long UNK_005f97b4;
extern "C" unsigned long UNK_005f9832;
extern "C" unsigned long UNK_005f98f2;
extern "C" unsigned long UNK_005f999e;
extern "C" unsigned long UNK_005f99a2;
extern "C" unsigned long UNK_005f99b7;
extern "C" unsigned long UNK_005f99fc;
extern "C" unsigned long UNK_005f9a7e;
extern "C" unsigned long UNK_005f9b1e;
extern "C" unsigned long UNK_005f9c0e;
extern "C" unsigned long UNK_005f9c3c;
extern "C" unsigned long UNK_005f9d12;
extern "C" unsigned long UNK_005f9d42;
extern "C" unsigned long UNK_005f9e6c;
extern "C" unsigned long UNK_005f9e9c;
extern "C" unsigned long UNK_005f9f6e;
extern "C" unsigned long UNK_005f9f96;
extern "C" unsigned long UNK_005fa058;
extern "C" unsigned long UNK_005fa080;
extern "C" unsigned long UNK_005fa152;
extern "C" unsigned long UNK_005fa17a;
extern "C" unsigned long UNK_005fa28c;
extern "C" unsigned long UNK_005fa2b4;
extern "C" unsigned long UNK_005fa37e;
extern "C" unsigned long UNK_005fa3aa;
extern "C" unsigned long UNK_005fa450;
extern "C" unsigned long UNK_005fa452;
extern "C" unsigned long _DAT_005f8ff0;
extern "C" unsigned long _DAT_005f8ff4;
extern "C" unsigned long _UNK_005f8efc;
extern "C" unsigned long _UNK_005f8f00;
extern "C" unsigned long _UNK_005f8f14;
extern "C" unsigned long _UNK_005f8f3c;
extern "C" unsigned long _UNK_005f9510;
extern "C" unsigned long _UNK_005f9514;
extern "C" unsigned long _UNK_005f9518;
extern "C" unsigned long _UNK_005f951c;
extern "C" unsigned long _UNK_005f9520;
extern "C" unsigned long _UNK_005f9524;
extern "C" unsigned long _UNK_005f9528;
extern "C" unsigned long _UNK_005f952c;
extern "C" unsigned long _UNK_005f9530;
extern "C" unsigned long _UNK_005f9534;
extern "C" unsigned long _UNK_005f9538;
extern "C" unsigned long _UNK_005f953c;
extern "C" unsigned long _UNK_005f9540;
extern "C" unsigned long _UNK_005f9928;
extern "C" unsigned long _UNK_005f992c;
extern "C" unsigned long _UNK_005f9930;
extern "C" unsigned long _UNK_005f9934;
extern "C" unsigned long _UNK_005f9938;
extern "C" unsigned long _UNK_005f993c;
extern "C" unsigned long _UNK_005f9940;
extern "C" unsigned long _UNK_005f9944;
extern "C" unsigned long _UNK_005f9948;
extern "C" unsigned long _UNK_005f994c;
extern "C" unsigned long _UNK_005f9950;
extern "C" unsigned long _UNK_005f9954;
extern "C" unsigned long _UNK_005f9958;
extern "C" unsigned long _UNK_005f995c;
extern "C" unsigned long _UNK_005f9960;
extern "C" unsigned long _UNK_005f9964;
extern "C" unsigned long _UNK_005f9968;
extern "C" unsigned long _UNK_005f996c;
extern "C" unsigned long _UNK_005f9970;
extern "C" unsigned long _UNK_005f9d7c;
extern "C" unsigned long _UNK_005f9d80;
extern "C" unsigned long _UNK_005f9d84;
extern "C" unsigned long _UNK_005f9d88;
extern "C" unsigned long _UNK_005f9d8c;
extern "C" unsigned long _UNK_005f9d90;
extern "C" unsigned long _UNK_005f9d94;
extern "C" unsigned long _UNK_005f9d98;
extern "C" unsigned long _UNK_005f9d9c;
extern "C" unsigned long _UNK_005f9da0;
extern "C" unsigned long _UNK_005f9da4;
extern "C" unsigned long _UNK_005f9da8;
extern "C" unsigned long _UNK_005f9dac;
extern "C" unsigned long _UNK_005f9db0;
extern "C" unsigned long _UNK_005f9db4;
extern "C" unsigned long _UNK_005f9db8;
extern "C" unsigned long _UNK_005f9dbc;
extern "C" unsigned long _UNK_005f9dc0;
extern "C" unsigned long _UNK_005f9dc4;
extern "C" unsigned long _UNK_005f9dc8;
extern "C" unsigned long _UNK_005fa1d8;
extern "C" unsigned long _UNK_005fa1dc;
extern "C" unsigned long _UNK_005fa1e0;
extern "C" unsigned long _UNK_005fa1e4;
extern "C" unsigned long _UNK_005fa1e8;
extern "C" unsigned long _UNK_005fa1ec;
extern "C" unsigned long _UNK_005fa1f0;
extern "C" unsigned long _UNK_005fa1f4;
extern "C" unsigned long _UNK_005fa1f8;
extern "C" unsigned long _UNK_005fa1fc;
extern "C" unsigned long _UNK_005fa200;
extern "C" unsigned long _UNK_005fa204;
extern "C" unsigned long _UNK_005fa208;
extern "C" unsigned long _UNK_005fa20c;
extern "C" unsigned long _UNK_005fa210;
extern "C" unsigned long _UNK_005fa214;
extern "C" unsigned long _UNK_005fa218;
extern "C" unsigned long _UNK_005fa21c;
extern "C" unsigned long _UNK_005fa560;
extern "C" unsigned long _UNK_005fa564;
extern "C" unsigned long _UNK_005fa568;
extern "C" unsigned long _UNK_005fa56c;
extern "C" unsigned long _UNK_005fa570;
extern "C" unsigned long _UNK_005fa574;
extern "C" unsigned long _UNK_005fa578;
extern "C" unsigned long _UNK_005fa57c;
extern "C" unsigned long _UNK_005fa580;
extern "C" unsigned long _UNK_005fa584;
extern "C" unsigned long _UNK_005fa588;
extern "C" unsigned long _UNK_005fa58c;
extern "C" unsigned long _UNK_005fa590;
extern "C" unsigned long _UNK_005fa594;
extern "C" unsigned long _UNK_005fa598;
extern "C" unsigned long _UNK_005fa59c;
extern "C" unsigned long g_005f8e78;
extern "C" unsigned long g_005f8eca;
extern "C" unsigned long g_005f8efc;
extern "C" unsigned long g_005f8f00;
extern "C" unsigned long g_005f8f10;
extern "C" unsigned long g_005f8f14;
extern "C" unsigned long g_005f8f38;
extern "C" unsigned long g_005f8f3c;
extern "C" unsigned long g_005f8ff0;
extern "C" unsigned long g_005f8ff4;
extern "C" unsigned long g_005f912e;
extern "C" unsigned long g_005f9212;
extern "C" unsigned long g_005f9304;
extern "C" unsigned long g_005f9334;
extern "C" unsigned long g_005f9400;
extern "C" unsigned long g_005f94b6;
extern "C" unsigned long g_005f9510;
extern "C" unsigned long g_005f9514;
extern "C" unsigned long g_005f9518;
extern "C" unsigned long g_005f951c;
extern "C" unsigned long g_005f9520;
extern "C" unsigned long g_005f9524;
extern "C" unsigned long g_005f9528;
extern "C" unsigned long g_005f952c;
extern "C" unsigned long g_005f9530;
extern "C" unsigned long g_005f9534;
extern "C" unsigned long g_005f9538;
extern "C" unsigned long g_005f953c;
extern "C" unsigned long g_005f9540;
extern "C" unsigned long g_005f954e;
extern "C" unsigned long g_005f9552;
extern "C" unsigned long g_005f9567;
extern "C" unsigned long g_005f95ae;
extern "C" unsigned long g_005f9630;
extern "C" unsigned long g_005f96fa;
extern "C" unsigned long g_005f9756;
extern "C" unsigned long g_005f975a;
extern "C" unsigned long g_005f976d;
extern "C" unsigned long g_005f97b4;
extern "C" unsigned long g_005f9832;
extern "C" unsigned long g_005f98f2;
extern "C" unsigned long g_005f9928;
extern "C" unsigned long g_005f992c;
extern "C" unsigned long g_005f9930;
extern "C" unsigned long g_005f9934;
extern "C" unsigned long g_005f9938;
extern "C" unsigned long g_005f993c;
extern "C" unsigned long g_005f9940;
extern "C" unsigned long g_005f9944;
extern "C" unsigned long g_005f9948;
extern "C" unsigned long g_005f994c;
extern "C" unsigned long g_005f9950;
extern "C" unsigned long g_005f9954;
extern "C" unsigned long g_005f9958;
extern "C" unsigned long g_005f995c;
extern "C" unsigned long g_005f9960;
extern "C" unsigned long g_005f9964;
extern "C" unsigned long g_005f9968;
extern "C" unsigned long g_005f996c;
extern "C" unsigned long g_005f9970;
extern "C" unsigned long g_005f999e;
extern "C" unsigned long g_005f99a2;
extern "C" unsigned long g_005f99b7;
extern "C" unsigned long g_005f99fc;
extern "C" unsigned long g_005f9a7e;
extern "C" unsigned long g_005f9b1e;
extern "C" unsigned long g_005f9c0e;
extern "C" unsigned long g_005f9c3c;
extern "C" unsigned long g_005f9d12;
extern "C" unsigned long g_005f9d42;
extern "C" unsigned long g_005f9d7c;
extern "C" unsigned long g_005f9d80;
extern "C" unsigned long g_005f9d84;
extern "C" unsigned long g_005f9d88;
extern "C" unsigned long g_005f9d8c;
extern "C" unsigned long g_005f9d90;
extern "C" unsigned long g_005f9d94;
extern "C" unsigned long g_005f9d98;
extern "C" unsigned long g_005f9d9c;
extern "C" unsigned long g_005f9da0;
extern "C" unsigned long g_005f9da4;
extern "C" unsigned long g_005f9da8;
extern "C" unsigned long g_005f9dac;
extern "C" unsigned long g_005f9db0;
extern "C" unsigned long g_005f9db4;
extern "C" unsigned long g_005f9db8;
extern "C" unsigned long g_005f9dbc;
extern "C" unsigned long g_005f9dc0;
extern "C" unsigned long g_005f9dc4;
extern "C" unsigned long g_005f9dc8;
extern "C" unsigned long g_005f9e6c;
extern "C" unsigned long g_005f9e9c;
extern "C" unsigned long g_005f9f6e;
extern "C" unsigned long g_005f9f96;
extern "C" unsigned long g_005fa058;
extern "C" unsigned long g_005fa080;
extern "C" unsigned long g_005fa152;
extern "C" unsigned long g_005fa17a;
extern "C" unsigned long g_005fa1d8;
extern "C" unsigned long g_005fa1dc;
extern "C" unsigned long g_005fa1e0;
extern "C" unsigned long g_005fa1e4;
extern "C" unsigned long g_005fa1e8;
extern "C" unsigned long g_005fa1ec;
extern "C" unsigned long g_005fa1f0;
extern "C" unsigned long g_005fa1f4;
extern "C" unsigned long g_005fa1f8;
extern "C" unsigned long g_005fa1fc;
extern "C" unsigned long g_005fa200;
extern "C" unsigned long g_005fa204;
extern "C" unsigned long g_005fa208;
extern "C" unsigned long g_005fa20c;
extern "C" unsigned long g_005fa210;
extern "C" unsigned long g_005fa214;
extern "C" unsigned long g_005fa218;
extern "C" unsigned long g_005fa21c;
extern "C" unsigned long g_005fa28c;
extern "C" unsigned long g_005fa2b4;
extern "C" unsigned long g_005fa37e;
extern "C" unsigned long g_005fa3aa;
extern "C" unsigned long g_005fa450;
extern "C" unsigned long g_005fa452;
extern "C" unsigned long g_005fa560;
extern "C" unsigned long g_005fa564;
extern "C" unsigned long g_005fa568;
extern "C" unsigned long g_005fa56c;
extern "C" unsigned long g_005fa570;
extern "C" unsigned long g_005fa574;
extern "C" unsigned long g_005fa578;
extern "C" unsigned long g_005fa57c;
extern "C" unsigned long g_005fa580;
extern "C" unsigned long g_005fa584;
extern "C" unsigned long g_005fa588;
extern "C" unsigned long g_005fa58c;
extern "C" unsigned long g_005fa590;
extern "C" unsigned long g_005fa594;
extern "C" unsigned long g_005fa598;
extern "C" unsigned long g_005fa59c;
BLExpDanView::~BLExpDanView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_005f8e78 + g_005f8efc);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  if (*(int *)((int)this + 4*(0x43)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x43)) = 0;
  }
  if (*(int *)((int)this + 4*(0x42)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x42)) = 0;
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005f8eca + g_005f8f00,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}


int * BLExpDanView::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x158)));
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

undefined4 BLExpDanView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 BLExpDanView::getBackGround()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

undefined4 BLExpDanView::getSprBg()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

undefined4 BLExpDanView::getBtnClose()
{
  return *(undefined4 *)(((int)this) + 0x118);
}

undefined4 BLExpDanView::getBtnUse()
{
  return *(undefined4 *)(((int)this) + 0x11c);
}

undefined4 BLExpDanView::getSpGuang()
{
  return *(undefined4 *)(((int)this) + 0x148);
}

undefined4 BLExpDanView::getSpExpDan1_kuang()
{
  return *(undefined4 *)(((int)this) + 0x150);
}

undefined4 BLExpDanView::getSpExpDan2_kuang()
{
  return *(undefined4 *)(((int)this) + 0x14c);
}

undefined4 BLExpDanView::getSpExpDan3_kuang()
{
  return *(undefined4 *)(((int)this) + 0x154);
}

undefined4 BLExpDanView::getLabelNum1()
{
  return *(undefined4 *)(((int)this) + 0x13c);
}

undefined4 BLExpDanView::getLabelNum2()
{
  return *(undefined4 *)(((int)this) + 0x140);
}

undefined4 BLExpDanView::getLabelNum3()
{
  return *(undefined4 *)(((int)this) + 0x144);
}

undefined4 BLExpDanView::getBtnReduce()
{
  return *(undefined4 *)(((int)this) + 0x120);
}

undefined4 BLExpDanView::getBtnAdd()
{
  return *(undefined4 *)(((int)this) + 0x124);
}

undefined4 BLExpDanView::getBtnMax()
{
  return *(undefined4 *)(((int)this) + 0x128);
}

undefined4 BLExpDanView::getLabNum()
{
  return *(undefined4 *)(((int)this) + 300);
}

void BLExpDanView::onEnter()
{
  ((BLExpDanPresenter *)*(undefined4 *)(((int)this) + 0x10c))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLExpDanView::onExit()
{
  ((BLExpDanPresenter *)*(undefined4 *)(((int)this) + 0x10c))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (2) =====
BLExpDanView::BLExpDanView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = (undefined4)(intptr_t)(*(int *)(g_005f8ff0 + 0x5f8f80));
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
  func_0079e45c(&uStack_14,((intptr_t)"BLExpDanView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

bool BLExpDanView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
