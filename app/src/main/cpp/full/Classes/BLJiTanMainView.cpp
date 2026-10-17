#include "BLJiTanMainView.h"
#include "BLJiTanMainPresenter.h"
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
extern "C" long long func_0057d5ae(...);
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long func_0079e62c(...);
extern "C" long long func_0079e724(...);
extern "C" long long func_0079e744(...);
extern "C" long long func_0079e7e4(...);
extern "C" long long ghidra_CONCAT13(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0057b878;
extern "C" unsigned long UNK_0057b8aa;
extern "C" unsigned long UNK_0057b8f0;
extern "C" unsigned long UNK_0057b918;
extern "C" unsigned long UNK_0057bb72;
extern "C" unsigned long UNK_0057bc68;
extern "C" unsigned long UNK_0057bd68;
extern "C" unsigned long UNK_0057bda0;
extern "C" unsigned long UNK_0057beb0;
extern "C" unsigned long UNK_0057bf98;
extern "C" unsigned long UNK_0057c07c;
extern "C" unsigned long UNK_0057c07e;
extern "C" unsigned long UNK_0057c093;
extern "C" unsigned long UNK_0057c100;
extern "C" unsigned long UNK_0057c116;
extern "C" unsigned long UNK_0057c1aa;
extern "C" unsigned long UNK_0057c1d8;
extern "C" unsigned long UNK_0057c3b8;
extern "C" unsigned long UNK_0057c3f4;
extern "C" unsigned long UNK_0057c4a6;
extern "C" unsigned long UNK_0057c558;
extern "C" unsigned long UNK_0057c55a;
extern "C" unsigned long UNK_0057c7a2;
extern "C" unsigned long UNK_0057c7f8;
extern "C" unsigned long UNK_0057c8dc;
extern "C" unsigned long UNK_0057c8e0;
extern "C" unsigned long UNK_0057c8f1;
extern "C" unsigned long UNK_0057c8f4;
extern "C" unsigned long UNK_0057c9bc;
extern "C" unsigned long UNK_0057ca4a;
extern "C" unsigned long UNK_0057cad0;
extern "C" unsigned long UNK_0057cb5a;
extern "C" unsigned long UNK_0057cbf4;
extern "C" unsigned long UNK_0057ccd4;
extern "C" unsigned long UNK_0057cde4;
extern "C" unsigned long UNK_0057cde6;
extern "C" unsigned long UNK_0057cdfd;
extern "C" unsigned long UNK_0057ce36;
extern "C" unsigned long UNK_0057cf1a;
extern "C" unsigned long UNK_0057cf1c;
extern "C" unsigned long UNK_0057cf33;
extern "C" unsigned long UNK_0057cf80;
extern "C" unsigned long UNK_0057d004;
extern "C" unsigned long UNK_0057d11c;
extern "C" unsigned long UNK_0057d120;
extern "C" unsigned long UNK_0057d131;
extern "C" unsigned long UNK_0057d137;
extern "C" unsigned long UNK_0057d1ce;
extern "C" unsigned long UNK_0057d24c;
extern "C" unsigned long UNK_0057d2fe;
extern "C" unsigned long UNK_0057d3ba;
extern "C" unsigned long UNK_0057d3be;
extern "C" unsigned long UNK_0057d3cf;
extern "C" unsigned long UNK_0057d3d5;
extern "C" unsigned long UNK_0057d46c;
extern "C" unsigned long _DAT_0057b9b8;
extern "C" unsigned long _DAT_0057b9bc;
extern "C" unsigned long _UNK_0057b8dc;
extern "C" unsigned long _UNK_0057b8e0;
extern "C" unsigned long _UNK_0057b8f4;
extern "C" unsigned long _UNK_0057b91c;
extern "C" unsigned long _UNK_0057bed0;
extern "C" unsigned long _UNK_0057bed4;
extern "C" unsigned long _UNK_0057bed8;
extern "C" unsigned long _UNK_0057bedc;
extern "C" unsigned long _UNK_0057bee0;
extern "C" unsigned long _UNK_0057bee4;
extern "C" unsigned long _UNK_0057bee8;
extern "C" unsigned long _UNK_0057beec;
extern "C" unsigned long _UNK_0057bef0;
extern "C" unsigned long _UNK_0057bef4;
extern "C" unsigned long _UNK_0057bef8;
extern "C" unsigned long _UNK_0057c2d8;
extern "C" unsigned long _UNK_0057c2dc;
extern "C" unsigned long _UNK_0057c2e0;
extern "C" unsigned long _UNK_0057c2e4;
extern "C" unsigned long _UNK_0057c2e8;
extern "C" unsigned long _UNK_0057c2ec;
extern "C" unsigned long _UNK_0057c2f0;
extern "C" unsigned long _UNK_0057c2f4;
extern "C" unsigned long _UNK_0057c2f8;
extern "C" unsigned long _UNK_0057c2fc;
extern "C" unsigned long _UNK_0057c300;
extern "C" unsigned long _UNK_0057c304;
extern "C" unsigned long _UNK_0057c308;
extern "C" unsigned long _UNK_0057c30c;
extern "C" unsigned long _UNK_0057c310;
extern "C" unsigned long _UNK_0057c314;
extern "C" unsigned long _UNK_0057c318;
extern "C" unsigned long _UNK_0057c31c;
extern "C" unsigned long _UNK_0057c320;
extern "C" unsigned long _UNK_0057c324;
extern "C" unsigned long _UNK_0057c328;
extern "C" unsigned long _UNK_0057c32c;
extern "C" unsigned long _UNK_0057c330;
extern "C" unsigned long _UNK_0057c750;
extern "C" unsigned long _UNK_0057c754;
extern "C" unsigned long _UNK_0057c758;
extern "C" unsigned long _UNK_0057c75c;
extern "C" unsigned long _UNK_0057c760;
extern "C" unsigned long _UNK_0057c764;
extern "C" unsigned long _UNK_0057c768;
extern "C" unsigned long _UNK_0057c76c;
extern "C" unsigned long _UNK_0057c770;
extern "C" unsigned long _UNK_0057c774;
extern "C" unsigned long _UNK_0057c778;
extern "C" unsigned long _UNK_0057c77c;
extern "C" unsigned long _UNK_0057c780;
extern "C" unsigned long _UNK_0057c784;
extern "C" unsigned long _UNK_0057c788;
extern "C" unsigned long _UNK_0057c810;
extern "C" unsigned long _UNK_0057c814;
extern "C" unsigned long _UNK_0057c818;
extern "C" unsigned long _UNK_0057c81c;
extern "C" unsigned long _UNK_0057cc4c;
extern "C" unsigned long _UNK_0057cc50;
extern "C" unsigned long _UNK_0057cc54;
extern "C" unsigned long _UNK_0057cc58;
extern "C" unsigned long _UNK_0057cc5c;
extern "C" unsigned long _UNK_0057cc60;
extern "C" unsigned long _UNK_0057cc64;
extern "C" unsigned long _UNK_0057cc68;
extern "C" unsigned long _UNK_0057cc6c;
extern "C" unsigned long _UNK_0057cc70;
extern "C" unsigned long _UNK_0057cc74;
extern "C" unsigned long _UNK_0057cc78;
extern "C" unsigned long _UNK_0057cc7c;
extern "C" unsigned long _UNK_0057cc80;
extern "C" unsigned long _UNK_0057cc84;
extern "C" unsigned long _UNK_0057d0a0;
extern "C" unsigned long _UNK_0057d0a4;
extern "C" unsigned long _UNK_0057d0a8;
extern "C" unsigned long _UNK_0057d0ac;
extern "C" unsigned long _UNK_0057d0b0;
extern "C" unsigned long _UNK_0057d0b4;
extern "C" unsigned long _UNK_0057d0b8;
extern "C" unsigned long _UNK_0057d0bc;
extern "C" unsigned long _UNK_0057d0c0;
extern "C" unsigned long _UNK_0057d0c4;
extern "C" unsigned long _UNK_0057d0c8;
extern "C" unsigned long _UNK_0057d0cc;
extern "C" unsigned long _UNK_0057d0d0;
extern "C" unsigned long _UNK_0057d0d4;
extern "C" unsigned long _UNK_0057d0d8;
extern "C" unsigned long _UNK_0057d0dc;
extern "C" unsigned long _UNK_0057d0e0;
extern "C" unsigned long _UNK_0057d0e4;
extern "C" unsigned long _UNK_0057d0e8;
extern "C" unsigned long _UNK_0057d0ec;
extern "C" unsigned long _UNK_0057d0f0;
extern "C" unsigned long _UNK_0057d4d0;
extern "C" unsigned long _UNK_0057d4d4;
extern "C" unsigned long _UNK_0057d4d8;
extern "C" unsigned long _UNK_0057d4dc;
extern "C" unsigned long _UNK_0057d4e0;
extern "C" unsigned long _UNK_0057d4e4;
extern "C" unsigned long _UNK_0057d4e8;
extern "C" unsigned long _UNK_0057d4ec;
extern "C" unsigned long _UNK_0057d4f0;
extern "C" unsigned long _UNK_0057d4f4;
extern "C" unsigned long _UNK_0057d4f8;
extern "C" unsigned long _UNK_0057d4fc;
extern "C" unsigned long _UNK_0057d500;
extern "C" unsigned long _UNK_0057d504;
extern "C" unsigned long _UNK_0057d508;
extern "C" unsigned long _UNK_0057d50c;
extern "C" unsigned long _UNK_0057d510;
extern "C" unsigned long _UNK_0057d514;
extern "C" unsigned long _UNK_0057d518;
extern "C" unsigned long _UNK_0057d51c;
extern "C" unsigned long _UNK_0057d520;
extern "C" unsigned long _UNK_0057d524;
extern "C" unsigned long _UNK_0057d528;
extern "C" unsigned long _UNK_0057d52c;
extern "C" unsigned long _UNK_0057d530;
extern "C" unsigned long g_0057b878;
extern "C" unsigned long g_0057b8aa;
extern "C" unsigned long g_0057b8dc;
extern "C" unsigned long g_0057b8e0;
extern "C" unsigned long g_0057b8f0;
extern "C" unsigned long g_0057b8f4;
extern "C" unsigned long g_0057b918;
extern "C" unsigned long g_0057b91c;
extern "C" unsigned long g_0057b9b8;
extern "C" unsigned long g_0057b9bc;
extern "C" unsigned long g_0057bb72;
extern "C" unsigned long g_0057bc68;
extern "C" unsigned long g_0057bd68;
extern "C" unsigned long g_0057bda0;
extern "C" unsigned long g_0057beb0;
extern "C" unsigned long g_0057bed0;
extern "C" unsigned long g_0057bed4;
extern "C" unsigned long g_0057bed8;
extern "C" unsigned long g_0057bedc;
extern "C" unsigned long g_0057bee0;
extern "C" unsigned long g_0057bee4;
extern "C" unsigned long g_0057bee8;
extern "C" unsigned long g_0057beec;
extern "C" unsigned long g_0057bef0;
extern "C" unsigned long g_0057bef4;
extern "C" unsigned long g_0057bef8;
extern "C" unsigned long g_0057bf98;
extern "C" unsigned long g_0057c07c;
extern "C" unsigned long g_0057c07e;
extern "C" unsigned long g_0057c093;
extern "C" unsigned long g_0057c100;
extern "C" unsigned long g_0057c116;
extern "C" unsigned long g_0057c1aa;
extern "C" unsigned long g_0057c1d8;
extern "C" unsigned long g_0057c2d8;
extern "C" unsigned long g_0057c2dc;
extern "C" unsigned long g_0057c2e0;
extern "C" unsigned long g_0057c2e4;
extern "C" unsigned long g_0057c2e8;
extern "C" unsigned long g_0057c2ec;
extern "C" unsigned long g_0057c2f0;
extern "C" unsigned long g_0057c2f4;
extern "C" unsigned long g_0057c2f8;
extern "C" unsigned long g_0057c2fc;
extern "C" unsigned long g_0057c300;
extern "C" unsigned long g_0057c304;
extern "C" unsigned long g_0057c308;
extern "C" unsigned long g_0057c30c;
extern "C" unsigned long g_0057c310;
extern "C" unsigned long g_0057c314;
extern "C" unsigned long g_0057c318;
extern "C" unsigned long g_0057c31c;
extern "C" unsigned long g_0057c320;
extern "C" unsigned long g_0057c324;
extern "C" unsigned long g_0057c328;
extern "C" unsigned long g_0057c32c;
extern "C" unsigned long g_0057c330;
extern "C" unsigned long g_0057c3b8;
extern "C" unsigned long g_0057c3f4;
extern "C" unsigned long g_0057c4a6;
extern "C" unsigned long g_0057c558;
extern "C" unsigned long g_0057c55a;
extern "C" unsigned long g_0057c750;
extern "C" unsigned long g_0057c754;
extern "C" unsigned long g_0057c758;
extern "C" unsigned long g_0057c75c;
extern "C" unsigned long g_0057c760;
extern "C" unsigned long g_0057c764;
extern "C" unsigned long g_0057c768;
extern "C" unsigned long g_0057c76c;
extern "C" unsigned long g_0057c770;
extern "C" unsigned long g_0057c774;
extern "C" unsigned long g_0057c778;
extern "C" unsigned long g_0057c77c;
extern "C" unsigned long g_0057c780;
extern "C" unsigned long g_0057c784;
extern "C" unsigned long g_0057c788;
extern "C" unsigned long g_0057c7a2;
extern "C" unsigned long g_0057c7f8;
extern "C" unsigned long g_0057c810;
extern "C" unsigned long g_0057c814;
extern "C" unsigned long g_0057c818;
extern "C" unsigned long g_0057c81c;
extern "C" unsigned long g_0057c8dc;
extern "C" unsigned long g_0057c8e0;
extern "C" unsigned long g_0057c8f1;
extern "C" unsigned long g_0057c8f4;
extern "C" unsigned long g_0057c9bc;
extern "C" unsigned long g_0057ca4a;
extern "C" unsigned long g_0057cad0;
extern "C" unsigned long g_0057cb5a;
extern "C" unsigned long g_0057cbf4;
extern "C" unsigned long g_0057cc4c;
extern "C" unsigned long g_0057cc50;
extern "C" unsigned long g_0057cc54;
extern "C" unsigned long g_0057cc58;
extern "C" unsigned long g_0057cc5c;
extern "C" unsigned long g_0057cc60;
extern "C" unsigned long g_0057cc64;
extern "C" unsigned long g_0057cc68;
extern "C" unsigned long g_0057cc6c;
extern "C" unsigned long g_0057cc70;
extern "C" unsigned long g_0057cc74;
extern "C" unsigned long g_0057cc78;
extern "C" unsigned long g_0057cc7c;
extern "C" unsigned long g_0057cc80;
extern "C" unsigned long g_0057cc84;
extern "C" unsigned long g_0057ccd4;
extern "C" unsigned long g_0057cde4;
extern "C" unsigned long g_0057cde6;
extern "C" unsigned long g_0057cdfd;
extern "C" unsigned long g_0057ce36;
extern "C" unsigned long g_0057cf1a;
extern "C" unsigned long g_0057cf1c;
extern "C" unsigned long g_0057cf33;
extern "C" unsigned long g_0057cf80;
extern "C" unsigned long g_0057d004;
extern "C" unsigned long g_0057d0a0;
extern "C" unsigned long g_0057d0a4;
extern "C" unsigned long g_0057d0a8;
extern "C" unsigned long g_0057d0ac;
extern "C" unsigned long g_0057d0b0;
extern "C" unsigned long g_0057d0b4;
extern "C" unsigned long g_0057d0b8;
extern "C" unsigned long g_0057d0bc;
extern "C" unsigned long g_0057d0c0;
extern "C" unsigned long g_0057d0c4;
extern "C" unsigned long g_0057d0c8;
extern "C" unsigned long g_0057d0cc;
extern "C" unsigned long g_0057d0d0;
extern "C" unsigned long g_0057d0d4;
extern "C" unsigned long g_0057d0d8;
extern "C" unsigned long g_0057d0dc;
extern "C" unsigned long g_0057d0e0;
extern "C" unsigned long g_0057d0e4;
extern "C" unsigned long g_0057d0e8;
extern "C" unsigned long g_0057d0ec;
extern "C" unsigned long g_0057d0f0;
extern "C" unsigned long g_0057d11c;
extern "C" unsigned long g_0057d120;
extern "C" unsigned long g_0057d131;
extern "C" unsigned long g_0057d137;
extern "C" unsigned long g_0057d1ce;
extern "C" unsigned long g_0057d24c;
extern "C" unsigned long g_0057d2fe;
extern "C" unsigned long g_0057d3ba;
extern "C" unsigned long g_0057d3be;
extern "C" unsigned long g_0057d3cf;
extern "C" unsigned long g_0057d3d5;
extern "C" unsigned long g_0057d46c;
extern "C" unsigned long g_0057d4d0;
extern "C" unsigned long g_0057d4d4;
extern "C" unsigned long g_0057d4d8;
extern "C" unsigned long g_0057d4dc;
extern "C" unsigned long g_0057d4e0;
extern "C" unsigned long g_0057d4e4;
extern "C" unsigned long g_0057d4e8;
extern "C" unsigned long g_0057d4ec;
extern "C" unsigned long g_0057d4f0;
extern "C" unsigned long g_0057d4f4;
extern "C" unsigned long g_0057d4f8;
extern "C" unsigned long g_0057d4fc;
extern "C" unsigned long g_0057d500;
extern "C" unsigned long g_0057d504;
extern "C" unsigned long g_0057d508;
extern "C" unsigned long g_0057d50c;
extern "C" unsigned long g_0057d510;
extern "C" unsigned long g_0057d514;
extern "C" unsigned long g_0057d518;
extern "C" unsigned long g_0057d51c;
extern "C" unsigned long g_0057d520;
extern "C" unsigned long g_0057d524;
extern "C" unsigned long g_0057d528;
extern "C" unsigned long g_0057d52c;
extern "C" unsigned long g_0057d530;
BLJiTanMainView::~BLJiTanMainView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = (undefined4)(intptr_t)(*(int *)((unsigned char *)((char *)&g_0057b878 + (intptr_t)(g_0057b8dc))));
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,(unsigned char *)((char *)&g_0057b8aa + (intptr_t)(g_0057b8e0)),&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLJiTanMainView::BLJiTanMainView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = (undefined4)(intptr_t)(*(int *)(g_0057b9b8 + 0x57b960));
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLJiTanMainView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * BLJiTanMainView::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x13c)));
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

undefined4 BLJiTanMainView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x108);
}

undefined4 BLJiTanMainView::getBtnClose()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 BLJiTanMainView::getBtnHelp()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

undefined4 BLJiTanMainView::getBtnPayHero()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

undefined4 BLJiTanMainView::getBtnZhaoMuFree()
{
  return *(undefined4 *)(((int)this) + 0x120);
}

undefined4 BLJiTanMainView::getBtnZhaoMuOne()
{
  return *(undefined4 *)(((int)this) + 0x118);
}

undefined4 BLJiTanMainView::getBtnZhaoMuTen()
{
  return *(undefined4 *)(((int)this) + 0x11c);
}

undefined4 BLJiTanMainView::getLabelHeroName()
{
  return *(undefined4 *)(((int)this) + 0x128);
}

undefined4 BLJiTanMainView::getLabelLuckValue()
{
  return *(undefined4 *)(((int)this) + 300);
}

undefined4 BLJiTanMainView::getLabelTitle()
{
  return *(undefined4 *)(((int)this) + 0x124);
}

undefined4 BLJiTanMainView::getSpHero()
{
  return *(undefined4 *)(((int)this) + 0x134);
}

undefined4 BLJiTanMainView::getTableView()
{
  return *(undefined4 *)(((int)this) + 0x138);
}

undefined4 BLJiTanMainView::getLabelHuoYan()
{
  return *(undefined4 *)(((int)this) + 0x130);
}

void BLJiTanMainView::onEnter()
{
  ((BLJiTanMainPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLJiTanMainView::onExit()
{
  ((BLJiTanMainPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
bool BLJiTanMainView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
