#include "BLFestivalView.h"
#include "BLFestivalPresenter.h"
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
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_00528a5c;
extern "C" unsigned long UNK_00528aa0;
extern "C" unsigned long UNK_00528ae4;
extern "C" unsigned long UNK_00528b0c;
extern "C" unsigned long UNK_00528cbe;
extern "C" unsigned long UNK_00528da0;
extern "C" unsigned long UNK_00528e88;
extern "C" unsigned long UNK_00528f30;
extern "C" unsigned long UNK_00528f32;
extern "C" unsigned long UNK_00528ffa;
extern "C" unsigned long UNK_00529134;
extern "C" unsigned long UNK_0052923e;
extern "C" unsigned long UNK_00529242;
extern "C" unsigned long UNK_005292fe;
extern "C" unsigned long UNK_005293d6;
extern "C" unsigned long UNK_0052948e;
extern "C" unsigned long UNK_00529586;
extern "C" unsigned long UNK_005296ce;
extern "C" unsigned long UNK_005297ca;
extern "C" unsigned long _DAT_00528bac;
extern "C" unsigned long _DAT_00528bb0;
extern "C" unsigned long _UNK_00528ad0;
extern "C" unsigned long _UNK_00528ad4;
extern "C" unsigned long _UNK_00528ae8;
extern "C" unsigned long _UNK_00528b10;
extern "C" unsigned long _UNK_005290a4;
extern "C" unsigned long _UNK_005290a8;
extern "C" unsigned long _UNK_005290ac;
extern "C" unsigned long _UNK_005290b0;
extern "C" unsigned long _UNK_005290b4;
extern "C" unsigned long _UNK_005290b8;
extern "C" unsigned long _UNK_005290bc;
extern "C" unsigned long _UNK_005290c0;
extern "C" unsigned long _UNK_005290c4;
extern "C" unsigned long _UNK_005290c8;
extern "C" unsigned long _UNK_005290cc;
extern "C" unsigned long _UNK_005290d0;
extern "C" unsigned long _UNK_005290d4;
extern "C" unsigned long _UNK_005290d8;
extern "C" unsigned long _UNK_005290dc;
extern "C" unsigned long _UNK_005290e0;
extern "C" unsigned long _UNK_005294d8;
extern "C" unsigned long _UNK_005294dc;
extern "C" unsigned long _UNK_005294e0;
extern "C" unsigned long _UNK_005294e4;
extern "C" unsigned long _UNK_005294e8;
extern "C" unsigned long _UNK_005294ec;
extern "C" unsigned long _UNK_005294f0;
extern "C" unsigned long _UNK_005294f4;
extern "C" unsigned long _UNK_005294f8;
extern "C" unsigned long _UNK_005294fc;
extern "C" unsigned long _UNK_00529500;
extern "C" unsigned long _UNK_00529504;
extern "C" unsigned long _UNK_00529508;
extern "C" unsigned long _UNK_0052950c;
extern "C" unsigned long _UNK_00529510;
extern "C" unsigned long _UNK_00529514;
extern "C" unsigned long _UNK_00529518;
extern "C" unsigned long _UNK_0052951c;
extern "C" unsigned long _UNK_00529520;
extern "C" unsigned long _UNK_00529524;
extern "C" unsigned long _UNK_005298e4;
extern "C" unsigned long _UNK_005298e8;
extern "C" unsigned long _UNK_005298ec;
extern "C" unsigned long _UNK_005298f0;
extern "C" unsigned long _UNK_005298f4;
extern "C" unsigned long _UNK_005298f8;
extern "C" unsigned long _UNK_005298fc;
extern "C" unsigned long _UNK_00529900;
extern "C" unsigned long _UNK_00529904;
extern "C" unsigned long _UNK_00529908;
extern "C" unsigned long _UNK_0052990c;
extern "C" unsigned long _UNK_00529910;
extern "C" unsigned long _UNK_00529914;
extern "C" unsigned long g_00528a5c;
extern "C" unsigned long g_00528aa0;
extern "C" unsigned long g_00528ad0;
extern "C" unsigned long g_00528ad4;
extern "C" unsigned long g_00528ae4;
extern "C" unsigned long g_00528ae8;
extern "C" unsigned long g_00528b0c;
extern "C" unsigned long g_00528b10;
extern "C" unsigned long g_00528bac;
extern "C" unsigned long g_00528bb0;
extern "C" unsigned long g_00528cbe;
extern "C" unsigned long g_00528da0;
extern "C" unsigned long g_00528e88;
extern "C" unsigned long g_00528f30;
extern "C" unsigned long g_00528f32;
extern "C" unsigned long g_00528ffa;
extern "C" unsigned long g_005290a4;
extern "C" unsigned long g_005290a8;
extern "C" unsigned long g_005290ac;
extern "C" unsigned long g_005290b0;
extern "C" unsigned long g_005290b4;
extern "C" unsigned long g_005290b8;
extern "C" unsigned long g_005290bc;
extern "C" unsigned long g_005290c0;
extern "C" unsigned long g_005290c4;
extern "C" unsigned long g_005290c8;
extern "C" unsigned long g_005290cc;
extern "C" unsigned long g_005290d0;
extern "C" unsigned long g_005290d4;
extern "C" unsigned long g_005290d8;
extern "C" unsigned long g_005290dc;
extern "C" unsigned long g_005290e0;
extern "C" unsigned long g_00529134;
extern "C" unsigned long g_0052923e;
extern "C" unsigned long g_00529242;
extern "C" unsigned long g_005292fe;
extern "C" unsigned long g_005293d6;
extern "C" unsigned long g_0052948e;
extern "C" unsigned long g_005294d8;
extern "C" unsigned long g_005294dc;
extern "C" unsigned long g_005294e0;
extern "C" unsigned long g_005294e4;
extern "C" unsigned long g_005294e8;
extern "C" unsigned long g_005294ec;
extern "C" unsigned long g_005294f0;
extern "C" unsigned long g_005294f4;
extern "C" unsigned long g_005294f8;
extern "C" unsigned long g_005294fc;
extern "C" unsigned long g_00529500;
extern "C" unsigned long g_00529504;
extern "C" unsigned long g_00529508;
extern "C" unsigned long g_0052950c;
extern "C" unsigned long g_00529510;
extern "C" unsigned long g_00529514;
extern "C" unsigned long g_00529518;
extern "C" unsigned long g_0052951c;
extern "C" unsigned long g_00529520;
extern "C" unsigned long g_00529524;
extern "C" unsigned long g_00529586;
extern "C" unsigned long g_005296ce;
extern "C" unsigned long g_005297ca;
extern "C" unsigned long g_005298e4;
extern "C" unsigned long g_005298e8;
extern "C" unsigned long g_005298ec;
extern "C" unsigned long g_005298f0;
extern "C" unsigned long g_005298f4;
extern "C" unsigned long g_005298f8;
extern "C" unsigned long g_005298fc;
extern "C" unsigned long g_00529900;
extern "C" unsigned long g_00529904;
extern "C" unsigned long g_00529908;
extern "C" unsigned long g_0052990c;
extern "C" unsigned long g_00529910;
extern "C" unsigned long g_00529914;
BLFestivalView::~BLFestivalView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_00528a5c + g_00528ad0);
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
  func_0079e45c(&uStack_14,&g_00528aa0 + g_00528ad4,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLFestivalView::BLFestivalView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(g_00528bac + 0x528b54);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLFestivalView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * BLFestivalView::create()
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

undefined4 BLFestivalView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x108);
}

undefined4 BLFestivalView::getBackGround()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

undefined4 BLFestivalView::getTabBg()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 BLFestivalView::getLabTitle()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

undefined4 BLFestivalView::getLabGuize()
{
  return *(undefined4 *)(((int)this) + 0x118);
}

undefined4 BLFestivalView::getLabItemNum()
{
  return *(undefined4 *)(((int)this) + 0x11c);
}

undefined4 BLFestivalView::getLabItemName()
{
  return *(undefined4 *)(((int)this) + 0x120);
}

undefined4 BLFestivalView::getBtnClose()
{
  return *(undefined4 *)(((int)this) + 0x124);
}

undefined4 BLFestivalView::getScrollview()
{
  return *(undefined4 *)(((int)this) + 0x128);
}

void BLFestivalView::onEnter()
{
  ((BLFestivalPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLFestivalView::onExit()
{
  ((BLFestivalPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
bool BLFestivalView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
