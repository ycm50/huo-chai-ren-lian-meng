#include "BuyCountView.h"
#include "BLLeakUtils.h"
#include "BuyCountPresenter.h"
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
extern "C" unsigned long UNK_006c1894;
extern "C" unsigned long UNK_006c18d8;
extern "C" unsigned long UNK_006c191c;
extern "C" unsigned long UNK_006c1944;
extern "C" unsigned long UNK_006c1ae8;
extern "C" unsigned long UNK_006c1bdc;
extern "C" unsigned long UNK_006c1bde;
extern "C" unsigned long UNK_006c1cae;
extern "C" unsigned long UNK_006c1d4a;
extern "C" unsigned long UNK_006c1e4a;
extern "C" unsigned long UNK_006c1e4e;
extern "C" unsigned long UNK_006c1f60;
extern "C" unsigned long UNK_006c2052;
extern "C" unsigned long UNK_006c2192;
extern "C" unsigned long UNK_006c2194;
extern "C" unsigned long UNK_006c232a;
extern "C" unsigned long UNK_006c2356;
extern "C" unsigned long UNK_006c2490;
extern "C" unsigned long UNK_006c2492;
extern "C" unsigned long _DAT_006c19e4;
extern "C" unsigned long _DAT_006c19e8;
extern "C" unsigned long _UNK_006c1908;
extern "C" unsigned long _UNK_006c190c;
extern "C" unsigned long _UNK_006c1920;
extern "C" unsigned long _UNK_006c1948;
extern "C" unsigned long _UNK_006c1ec8;
extern "C" unsigned long _UNK_006c1ecc;
extern "C" unsigned long _UNK_006c1ed0;
extern "C" unsigned long _UNK_006c1ed4;
extern "C" unsigned long _UNK_006c1ed8;
extern "C" unsigned long _UNK_006c1edc;
extern "C" unsigned long _UNK_006c1ee0;
extern "C" unsigned long _UNK_006c1ee4;
extern "C" unsigned long _UNK_006c1ee8;
extern "C" unsigned long _UNK_006c1eec;
extern "C" unsigned long _UNK_006c1ef0;
extern "C" unsigned long _UNK_006c1ef4;
extern "C" unsigned long _UNK_006c1ef8;
extern "C" unsigned long _UNK_006c1efc;
extern "C" unsigned long _UNK_006c1f00;
extern "C" unsigned long _UNK_006c22fc;
extern "C" unsigned long _UNK_006c2300;
extern "C" unsigned long _UNK_006c2304;
extern "C" unsigned long _UNK_006c2308;
extern "C" unsigned long _UNK_006c230c;
extern "C" unsigned long _UNK_006c2310;
extern "C" unsigned long _UNK_006c2314;
extern "C" unsigned long _UNK_006c2318;
extern "C" unsigned long _UNK_006c25a4;
extern "C" unsigned long _UNK_006c25a8;
extern "C" unsigned long _UNK_006c25ac;
extern "C" unsigned long _UNK_006c25b0;
extern "C" unsigned long _UNK_006c25b4;
extern "C" unsigned long _UNK_006c25b8;
extern "C" unsigned long _UNK_006c25bc;
extern "C" unsigned long g_006c1894;
extern "C" unsigned long g_006c18d8;
extern "C" unsigned long g_006c1908;
extern "C" unsigned long g_006c190c;
extern "C" unsigned long g_006c191c;
extern "C" unsigned long g_006c1920;
extern "C" unsigned long g_006c1944;
extern "C" unsigned long g_006c1948;
extern "C" unsigned long g_006c19e4;
extern "C" unsigned long g_006c19e8;
extern "C" unsigned long g_006c1ae8;
extern "C" unsigned long g_006c1bdc;
extern "C" unsigned long g_006c1bde;
extern "C" unsigned long g_006c1cae;
extern "C" unsigned long g_006c1d4a;
extern "C" unsigned long g_006c1e4a;
extern "C" unsigned long g_006c1e4e;
extern "C" unsigned long g_006c1ec8;
extern "C" unsigned long g_006c1ecc;
extern "C" unsigned long g_006c1ed0;
extern "C" unsigned long g_006c1ed4;
extern "C" unsigned long g_006c1ed8;
extern "C" unsigned long g_006c1edc;
extern "C" unsigned long g_006c1ee0;
extern "C" unsigned long g_006c1ee4;
extern "C" unsigned long g_006c1ee8;
extern "C" unsigned long g_006c1eec;
extern "C" unsigned long g_006c1ef0;
extern "C" unsigned long g_006c1ef4;
extern "C" unsigned long g_006c1ef8;
extern "C" unsigned long g_006c1efc;
extern "C" unsigned long g_006c1f00;
extern "C" unsigned long g_006c1f60;
extern "C" unsigned long g_006c2052;
extern "C" unsigned long g_006c2192;
extern "C" unsigned long g_006c2194;
extern "C" unsigned long g_006c22fc;
extern "C" unsigned long g_006c2300;
extern "C" unsigned long g_006c2304;
extern "C" unsigned long g_006c2308;
extern "C" unsigned long g_006c230c;
extern "C" unsigned long g_006c2310;
extern "C" unsigned long g_006c2314;
extern "C" unsigned long g_006c2318;
extern "C" unsigned long g_006c232a;
extern "C" unsigned long g_006c2356;
extern "C" unsigned long g_006c2490;
extern "C" unsigned long g_006c2492;
extern "C" unsigned long g_006c25a4;
extern "C" unsigned long g_006c25a8;
extern "C" unsigned long g_006c25ac;
extern "C" unsigned long g_006c25b0;
extern "C" unsigned long g_006c25b4;
extern "C" unsigned long g_006c25b8;
extern "C" unsigned long g_006c25bc;
BuyCountView::~BuyCountView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_006c1894 + g_006c1908);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  if (*(int *)((int)this + 4*(0x4a)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x4a)) = 0;
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_006c18d8 + g_006c190c,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BuyCountView::BuyCountView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(g_006c19e4 + 0x6c198c);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLMainPauseView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * BuyCountView::create()
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

undefined4 BuyCountView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x128);
}

undefined4 BuyCountView::getBtnOK()
{
  return *(undefined4 *)(((int)this) + 0x130);
}

undefined4 BuyCountView::getBtnClose()
{
  return *(undefined4 *)(((int)this) + 300);
}

undefined4 BuyCountView::getLabTitle()
{
  return *(undefined4 *)(((int)this) + 0x108);
}

undefined4 BuyCountView::getLab_1()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 BuyCountView::getLab_2()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

undefined4 BuyCountView::getLab_3()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

undefined4 BuyCountView::getLabBtnOK()
{
  return *(undefined4 *)(((int)this) + 0x118);
}

undefined4 BuyCountView::getSPBackGround()
{
  return *(undefined4 *)(((int)this) + 0x124);
}

undefined4 BuyCountView::getSPTabBg()
{
  return *(undefined4 *)(((int)this) + 0x120);
}

undefined4 BuyCountView::getSPZuanshi()
{
  return *(undefined4 *)(((int)this) + 0x11c);
}


void BuyCountView::onEnter()
{
  ((BuyCountPresenter *)*(undefined4 *)(((int)this) + 0x128))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BuyCountView::onExit()
{
  ((BuyCountPresenter *)*(undefined4 *)(((int)this) + 0x128))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
bool BuyCountView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
