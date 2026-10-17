#include "BLLuckyDrawResultView.h"
#include "BLLuckyDrawItemView.h"
#include "BLLuckyDrawResultPresenter.h"
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
extern "C" unsigned long UNK_005888ae;
extern "C" unsigned long UNK_00588908;
extern "C" unsigned long UNK_00588930;
extern "C" unsigned long UNK_005889b2;
extern "C" unsigned long UNK_00588a9a;
extern "C" unsigned long UNK_00588afc;
extern "C" unsigned long UNK_00588b00;
extern "C" unsigned long UNK_00588b44;
extern "C" unsigned long UNK_00588b72;
extern "C" unsigned long UNK_00588bea;
extern "C" unsigned long UNK_00588c52;
extern "C" unsigned long UNK_00588c56;
extern "C" unsigned long UNK_00588c9c;
extern "C" unsigned long UNK_00588cce;
extern "C" unsigned long UNK_00588d40;
extern "C" unsigned long UNK_00588d76;
extern "C" unsigned long _DAT_0058897c;
extern "C" unsigned long _UNK_005888f8;
extern "C" unsigned long _UNK_0058890c;
extern "C" unsigned long _UNK_00588934;
extern "C" unsigned long _UNK_00588d8c;
extern "C" unsigned long _UNK_00588d90;
extern "C" unsigned long _UNK_00588d94;
extern "C" unsigned long _UNK_00588d98;
extern "C" unsigned long _UNK_00588d9c;
extern "C" unsigned long _UNK_00588da0;
extern "C" unsigned long _UNK_00588da4;
extern "C" unsigned long _UNK_00588da8;
extern "C" unsigned long _UNK_00588dac;
extern "C" unsigned long _UNK_00588db0;
extern "C" unsigned long _UNK_00588db4;
extern "C" unsigned long _UNK_00588db8;
extern "C" unsigned long _UNK_00588dbc;
extern "C" unsigned long _UNK_00588dc0;
extern "C" unsigned long _UNK_00588dc4;
extern "C" unsigned long _UNK_00588dc8;
extern "C" unsigned long _UNK_00588dcc;
extern "C" unsigned long _UNK_00588dd0;
extern "C" unsigned long _UNK_00588dd4;
extern "C" unsigned long _UNK_00588dd8;
extern "C" unsigned long _UNK_00588ddc;
extern "C" unsigned long _UNK_00588de0;
extern "C" unsigned long _UNK_00588f24;
extern "C" unsigned long _UNK_00588f28;
extern "C" unsigned long _UNK_00588f2c;
extern "C" unsigned long _UNK_00588f30;
extern "C" unsigned long _UNK_00588f34;
extern "C" unsigned long _UNK_00588f38;
extern "C" unsigned long _UNK_00588f3c;
extern "C" unsigned long _UNK_00588f40;
extern "C" unsigned long _UNK_00588f44;
extern "C" unsigned long _UNK_00588f48;
extern "C" unsigned long _UNK_00588f4c;
extern "C" unsigned long _UNK_00588f50;
extern "C" unsigned long g_005888ae;
extern "C" unsigned long g_005888f8;
extern "C" unsigned long g_00588908;
extern "C" unsigned long g_0058890c;
extern "C" unsigned long g_00588930;
extern "C" unsigned long g_00588934;
extern "C" unsigned long g_0058897c;
extern "C" unsigned long g_005889b2;
extern "C" unsigned long g_00588a9a;
extern "C" unsigned long g_00588afc;
extern "C" unsigned long g_00588b00;
extern "C" unsigned long g_00588b44;
extern "C" unsigned long g_00588b72;
extern "C" unsigned long g_00588bea;
extern "C" unsigned long g_00588c52;
extern "C" unsigned long g_00588c56;
extern "C" unsigned long g_00588c9c;
extern "C" unsigned long g_00588cce;
extern "C" unsigned long g_00588d40;
extern "C" unsigned long g_00588d76;
extern "C" unsigned long g_00588d8c;
extern "C" unsigned long g_00588d90;
extern "C" unsigned long g_00588d94;
extern "C" unsigned long g_00588d98;
extern "C" unsigned long g_00588d9c;
extern "C" unsigned long g_00588da0;
extern "C" unsigned long g_00588da4;
extern "C" unsigned long g_00588da8;
extern "C" unsigned long g_00588dac;
extern "C" unsigned long g_00588db0;
extern "C" unsigned long g_00588db4;
extern "C" unsigned long g_00588db8;
extern "C" unsigned long g_00588dbc;
extern "C" unsigned long g_00588dc0;
extern "C" unsigned long g_00588dc4;
extern "C" unsigned long g_00588dc8;
extern "C" unsigned long g_00588dcc;
extern "C" unsigned long g_00588dd0;
extern "C" unsigned long g_00588dd4;
extern "C" unsigned long g_00588dd8;
extern "C" unsigned long g_00588ddc;
extern "C" unsigned long g_00588de0;
extern "C" unsigned long g_00588f24;
extern "C" unsigned long g_00588f28;
extern "C" unsigned long g_00588f2c;
extern "C" unsigned long g_00588f30;
extern "C" unsigned long g_00588f34;
extern "C" unsigned long g_00588f38;
extern "C" unsigned long g_00588f3c;
extern "C" unsigned long g_00588f40;
extern "C" unsigned long g_00588f44;
extern "C" unsigned long g_00588f48;
extern "C" unsigned long g_00588f4c;
extern "C" unsigned long g_00588f50;
BLLuckyDrawResultView::~BLLuckyDrawResultView()
{
  int iVar1;
  
  iVar1 = *(int *)(&g_005888ae + g_005888f8);
  *(int *)this = iVar1 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar1 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar1 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar1 + 0x244;
  if (*(int *)((int)this + 4*(0x42)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x42)) = 0;
  }
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLLuckyDrawResultView::BLLuckyDrawResultView()
{
  int iVar1;
  
  0 /* ctorZero */;
  iVar1 = *(int *)(g_0058897c + 0x588948);
  *(int *)this = iVar1 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar1 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar1 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar1 + 0x244;
  *(int *)((int)this + 4*(0x42)) = 0;
  *(int *)((int)this + 4*(0x43)) = 0;
  *(int *)((int)this + 4*(0x44)) = 0;
  *(int *)((int)this + 4*(0x45)) = 0;
  return;
}


void BLLuckyDrawResultView::onEnter()
{
  ((cocos2d::CCLayer *)this)->onEnter();
  return;
}

void BLLuckyDrawResultView::onExit()
{
  ((cocos2d::CCLayer *)this)->onExit();
  if (*(int *)(((int)this) + 0x108) != 0) {
    ((BLLuckyDrawResultPresenter *)this)->onExit();
  }
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
bool BLLuckyDrawResultView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
