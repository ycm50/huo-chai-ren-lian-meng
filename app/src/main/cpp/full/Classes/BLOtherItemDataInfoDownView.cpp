#include "BLOtherItemDataInfoDownView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLOtherItemDataInfoDownPresenter.h"
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
extern "C" long long func_0079e4dc(...);
extern "C" long long ghidra_CONCAT13(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_00604960;
extern "C" unsigned long UNK_006049a4;
extern "C" unsigned long UNK_006049e8;
extern "C" unsigned long UNK_00604a10;
extern "C" unsigned long UNK_00604a58;
extern "C" unsigned long UNK_00604a86;
extern "C" unsigned long UNK_00604b74;
extern "C" unsigned long UNK_00604c68;
extern "C" unsigned long UNK_00604c9a;
extern "C" unsigned long UNK_00604d78;
extern "C" unsigned long UNK_00604dac;
extern "C" unsigned long UNK_00604e84;
extern "C" unsigned long UNK_00604eb6;
extern "C" unsigned long UNK_00604fc6;
extern "C" unsigned long UNK_00604ff0;
extern "C" unsigned long UNK_006050b8;
extern "C" unsigned long UNK_006050e6;
extern "C" unsigned long UNK_006051be;
extern "C" unsigned long UNK_006051e6;
extern "C" unsigned long UNK_006052be;
extern "C" unsigned long UNK_006052e6;
extern "C" unsigned long UNK_006053fc;
extern "C" unsigned long UNK_00605426;
extern "C" unsigned long UNK_006054e2;
extern "C" unsigned long UNK_0060550c;
extern "C" unsigned long UNK_006055d0;
extern "C" unsigned long UNK_006055fa;
extern "C" unsigned long UNK_006056ba;
extern "C" unsigned long UNK_006056e4;
extern "C" unsigned long UNK_006057a0;
extern "C" unsigned long _UNK_006049d4;
extern "C" unsigned long _UNK_006049d8;
extern "C" unsigned long _UNK_006049ec;
extern "C" unsigned long _UNK_00604a14;
extern "C" unsigned long _UNK_00604ab0;
extern "C" unsigned long _UNK_00604ab4;
extern "C" unsigned long _UNK_00604f58;
extern "C" unsigned long _UNK_00604f5c;
extern "C" unsigned long _UNK_00604f60;
extern "C" unsigned long _UNK_00604f64;
extern "C" unsigned long _UNK_00604f68;
extern "C" unsigned long _UNK_00604f6c;
extern "C" unsigned long _UNK_00604f70;
extern "C" unsigned long _UNK_00604f74;
extern "C" unsigned long _UNK_00604f78;
extern "C" unsigned long _UNK_00604f7c;
extern "C" unsigned long _UNK_00604f80;
extern "C" unsigned long _UNK_00604f84;
extern "C" unsigned long _UNK_00604f88;
extern "C" unsigned long _UNK_00604f8c;
extern "C" unsigned long _UNK_00604f90;
extern "C" unsigned long _UNK_006053a8;
extern "C" unsigned long _UNK_006053ac;
extern "C" unsigned long _UNK_006053b0;
extern "C" unsigned long _UNK_006053b4;
extern "C" unsigned long _UNK_006053b8;
extern "C" unsigned long _UNK_006053bc;
extern "C" unsigned long _UNK_006053c0;
extern "C" unsigned long _UNK_006053c4;
extern "C" unsigned long _UNK_006053c8;
extern "C" unsigned long _UNK_006053cc;
extern "C" unsigned long _UNK_006053d0;
extern "C" unsigned long _UNK_006053d4;
extern "C" unsigned long _UNK_006053d8;
extern "C" unsigned long _UNK_006053dc;
extern "C" unsigned long _UNK_006053e0;
extern "C" unsigned long _UNK_006053e4;
extern "C" unsigned long _UNK_006057dc;
extern "C" unsigned long _UNK_006057e0;
extern "C" unsigned long _UNK_006057e4;
extern "C" unsigned long _UNK_006057e8;
extern "C" unsigned long _UNK_006057ec;
extern "C" unsigned long _UNK_006057f0;
extern "C" unsigned long _UNK_006057f4;
extern "C" unsigned long _UNK_006057f8;
extern "C" unsigned long _UNK_006057fc;
extern "C" unsigned long _UNK_00605800;
extern "C" unsigned long _UNK_00605804;
extern "C" unsigned long _UNK_00605808;
extern "C" unsigned long _UNK_0060580c;
extern "C" unsigned long _UNK_00605810;
extern "C" unsigned long _UNK_00605814;
extern "C" unsigned long _UNK_00605818;
extern "C" unsigned long _UNK_0060581c;
extern "C" unsigned long _UNK_00605820;
extern "C" unsigned long _UNK_00605824;
extern "C" unsigned long _UNK_00605828;
extern "C" unsigned long _UNK_00605988;
extern "C" unsigned long _UNK_0060598c;
extern "C" unsigned long _UNK_00605990;
extern "C" unsigned long _UNK_00605994;
extern "C" unsigned long g_00604960;
extern "C" unsigned long g_006049a4;
extern "C" unsigned long g_006049d4;
extern "C" unsigned long g_006049d8;
extern "C" unsigned long g_006049e8;
extern "C" unsigned long g_006049ec;
extern "C" unsigned long g_00604a10;
extern "C" unsigned long g_00604a14;
extern "C" unsigned long g_00604a58;
extern "C" unsigned long g_00604a86;
extern "C" unsigned long g_00604ab0;
extern "C" unsigned long g_00604ab4;
extern "C" unsigned long g_00604b74;
extern "C" unsigned long g_00604c68;
extern "C" unsigned long g_00604c9a;
extern "C" unsigned long g_00604d78;
extern "C" unsigned long g_00604dac;
extern "C" unsigned long g_00604e84;
extern "C" unsigned long g_00604eb6;
extern "C" unsigned long g_00604f58;
extern "C" unsigned long g_00604f5c;
extern "C" unsigned long g_00604f60;
extern "C" unsigned long g_00604f64;
extern "C" unsigned long g_00604f68;
extern "C" unsigned long g_00604f6c;
extern "C" unsigned long g_00604f70;
extern "C" unsigned long g_00604f74;
extern "C" unsigned long g_00604f78;
extern "C" unsigned long g_00604f7c;
extern "C" unsigned long g_00604f80;
extern "C" unsigned long g_00604f84;
extern "C" unsigned long g_00604f88;
extern "C" unsigned long g_00604f8c;
extern "C" unsigned long g_00604f90;
extern "C" unsigned long g_00604fc6;
extern "C" unsigned long g_00604ff0;
extern "C" unsigned long g_006050b8;
extern "C" unsigned long g_006050e6;
extern "C" unsigned long g_006051be;
extern "C" unsigned long g_006051e6;
extern "C" unsigned long g_006052be;
extern "C" unsigned long g_006052e6;
extern "C" unsigned long g_006053a8;
extern "C" unsigned long g_006053ac;
extern "C" unsigned long g_006053b0;
extern "C" unsigned long g_006053b4;
extern "C" unsigned long g_006053b8;
extern "C" unsigned long g_006053bc;
extern "C" unsigned long g_006053c0;
extern "C" unsigned long g_006053c4;
extern "C" unsigned long g_006053c8;
extern "C" unsigned long g_006053cc;
extern "C" unsigned long g_006053d0;
extern "C" unsigned long g_006053d4;
extern "C" unsigned long g_006053d8;
extern "C" unsigned long g_006053dc;
extern "C" unsigned long g_006053e0;
extern "C" unsigned long g_006053e4;
extern "C" unsigned long g_006053fc;
extern "C" unsigned long g_00605426;
extern "C" unsigned long g_006054e2;
extern "C" unsigned long g_0060550c;
extern "C" unsigned long g_006055d0;
extern "C" unsigned long g_006055fa;
extern "C" unsigned long g_006056ba;
extern "C" unsigned long g_006056e4;
extern "C" unsigned long g_006057a0;
extern "C" unsigned long g_006057dc;
extern "C" unsigned long g_006057e0;
extern "C" unsigned long g_006057e4;
extern "C" unsigned long g_006057e8;
extern "C" unsigned long g_006057ec;
extern "C" unsigned long g_006057f0;
extern "C" unsigned long g_006057f4;
extern "C" unsigned long g_006057f8;
extern "C" unsigned long g_006057fc;
extern "C" unsigned long g_00605800;
extern "C" unsigned long g_00605804;
extern "C" unsigned long g_00605808;
extern "C" unsigned long g_0060580c;
extern "C" unsigned long g_00605810;
extern "C" unsigned long g_00605814;
extern "C" unsigned long g_00605818;
extern "C" unsigned long g_0060581c;
extern "C" unsigned long g_00605820;
extern "C" unsigned long g_00605824;
extern "C" unsigned long g_00605828;
extern "C" unsigned long g_00605988;
extern "C" unsigned long g_0060598c;
extern "C" unsigned long g_00605990;
extern "C" unsigned long g_00605994;
BLOtherItemDataInfoDownView::~BLOtherItemDataInfoDownView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_00604960 + g_006049d4);
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
  func_0079e45c(&uStack_14,&g_006049a4 + g_006049d8,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLOtherItemDataInfoDownView::BLOtherItemDataInfoDownView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_00604a58 + g_00604ab0);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00604a86 + g_00604ab4,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

undefined4 BLOtherItemDataInfoDownView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x108);
}

undefined4 BLOtherItemDataInfoDownView::getNumBG()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 BLOtherItemDataInfoDownView::getBtnSell()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

undefined4 BLOtherItemDataInfoDownView::getLabSell()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

undefined4 BLOtherItemDataInfoDownView::getBtnCompose()
{
  return *(undefined4 *)(((int)this) + 0x118);
}

undefined4 BLOtherItemDataInfoDownView::getLabCompose()
{
  return *(undefined4 *)(((int)this) + 0x11c);
}

undefined4 BLOtherItemDataInfoDownView::getBtnReduce()
{
  return *(undefined4 *)(((int)this) + 0x120);
}

undefined4 BLOtherItemDataInfoDownView::getBtnAdd()
{
  return *(undefined4 *)(((int)this) + 0x124);
}

undefined4 BLOtherItemDataInfoDownView::getBtnMax()
{
  return *(undefined4 *)(((int)this) + 0x128);
}

undefined4 BLOtherItemDataInfoDownView::getLabNum()
{
  return *(undefined4 *)(((int)this) + 300);
}

undefined4 BLOtherItemDataInfoDownView::getLabReduce()
{
  return *(undefined4 *)(((int)this) + 0x130);
}

undefined4 BLOtherItemDataInfoDownView::getLabAdd()
{
  return *(undefined4 *)(((int)this) + 0x134);
}

undefined4 BLOtherItemDataInfoDownView::getLabMax()
{
  return *(undefined4 *)(((int)this) + 0x138);
}

undefined4 BLOtherItemDataInfoDownView::getLine()
{
  return *(undefined4 *)(((int)this) + 0x13c);
}


void BLOtherItemDataInfoDownView::onEnter()
{
  ((BLOtherItemDataInfoDownPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLOtherItemDataInfoDownView::onExit()
{
  ((BLOtherItemDataInfoDownPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
bool BLOtherItemDataInfoDownView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
