#include "BLSubmitView.h"
#include "BLLeakUtils.h"
#include "BLSubmitPresenter.h"
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
extern "C" unsigned long UNK_004fdc78;
extern "C" unsigned long UNK_004fdcbc;
extern "C" unsigned long UNK_004fdd00;
extern "C" unsigned long UNK_004fdd28;
extern "C" unsigned long UNK_004fde8a;
extern "C" unsigned long UNK_004fdebe;
extern "C" unsigned long UNK_004fdf06;
extern "C" unsigned long UNK_004fe0c6;
extern "C" unsigned long UNK_004fe0ca;
extern "C" unsigned long UNK_004fe212;
extern "C" unsigned long UNK_004fe39e;
extern "C" unsigned long UNK_004fe4ea;
extern "C" unsigned long _DAT_004fddc8;
extern "C" unsigned long _DAT_004fddcc;
extern "C" unsigned long _UNK_004fdcec;
extern "C" unsigned long _UNK_004fdcf0;
extern "C" unsigned long _UNK_004fdd04;
extern "C" unsigned long _UNK_004fdd2c;
extern "C" unsigned long _UNK_004fe274;
extern "C" unsigned long _UNK_004fe278;
extern "C" unsigned long _UNK_004fe27c;
extern "C" unsigned long _UNK_004fe280;
extern "C" unsigned long _UNK_004fe284;
extern "C" unsigned long _UNK_004fe288;
extern "C" unsigned long _UNK_004fe28c;
extern "C" unsigned long _UNK_004fe290;
extern "C" unsigned long _UNK_004fe294;
extern "C" unsigned long _UNK_004fe298;
extern "C" unsigned long _UNK_004fe29c;
extern "C" unsigned long _UNK_004fe2a0;
extern "C" unsigned long _UNK_004fe638;
extern "C" unsigned long _UNK_004fe63c;
extern "C" unsigned long _UNK_004fe640;
extern "C" unsigned long _UNK_004fe644;
extern "C" unsigned long _UNK_004fe648;
extern "C" unsigned long _UNK_004fe64c;
extern "C" unsigned long _UNK_004fe650;
extern "C" unsigned long g_004fdc78;
extern "C" unsigned long g_004fdcbc;
extern "C" unsigned long g_004fdcec;
extern "C" unsigned long g_004fdcf0;
extern "C" unsigned long g_004fdd00;
extern "C" unsigned long g_004fdd04;
extern "C" unsigned long g_004fdd28;
extern "C" unsigned long g_004fdd2c;
extern "C" unsigned long g_004fddc8;
extern "C" unsigned long g_004fddcc;
extern "C" unsigned long g_004fde8a;
extern "C" unsigned long g_004fdebe;
extern "C" unsigned long g_004fdf06;
extern "C" unsigned long g_004fe0c6;
extern "C" unsigned long g_004fe0ca;
extern "C" unsigned long g_004fe212;
extern "C" unsigned long g_004fe274;
extern "C" unsigned long g_004fe278;
extern "C" unsigned long g_004fe27c;
extern "C" unsigned long g_004fe280;
extern "C" unsigned long g_004fe284;
extern "C" unsigned long g_004fe288;
extern "C" unsigned long g_004fe28c;
extern "C" unsigned long g_004fe290;
extern "C" unsigned long g_004fe294;
extern "C" unsigned long g_004fe298;
extern "C" unsigned long g_004fe29c;
extern "C" unsigned long g_004fe2a0;
extern "C" unsigned long g_004fe39e;
extern "C" unsigned long g_004fe4ea;
extern "C" unsigned long g_004fe638;
extern "C" unsigned long g_004fe63c;
extern "C" unsigned long g_004fe640;
extern "C" unsigned long g_004fe644;
extern "C" unsigned long g_004fe648;
extern "C" unsigned long g_004fe64c;
extern "C" unsigned long g_004fe650;
BLSubmitView::~BLSubmitView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_004fdc78 + g_004fdcec);
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
  func_0079e45c(&uStack_14,&g_004fdcbc + g_004fdcf0,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLSubmitView::BLSubmitView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)("`Ŭ");
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLSubmitView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * BLSubmitView::create()
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

undefined4 BLSubmitView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x108);
}

undefined4 BLSubmitView::getSpritebg()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 BLSubmitView::getSpriteframe()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

undefined4 BLSubmitView::getBtnclose()
{
  return *(undefined4 *)(((int)this) + 0x114);
}


void BLSubmitView::onEnter()
{
  ((BLSubmitPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLSubmitView::onExit()
{
  ((BLSubmitPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
bool BLSubmitView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
