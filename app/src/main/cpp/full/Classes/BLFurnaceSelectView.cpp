#include "BLFurnaceSelectView.h"
#include "BLFurnaceSelectPresenter.h"
#include "BLItemDataInfoDownView.h"
#include "BLItemDataInfoUpView.h"
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
extern "C" long long ghidra_CONCAT13(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0053b1c0;
extern "C" unsigned long UNK_0053b204;
extern "C" unsigned long UNK_0053b248;
extern "C" unsigned long UNK_0053b270;
extern "C" unsigned long UNK_0053b422;
extern "C" unsigned long UNK_0053b710;
extern "C" unsigned long UNK_0053b73e;
extern "C" unsigned long UNK_0053b83e;
extern "C" unsigned long UNK_0053b872;
extern "C" unsigned long UNK_0053b932;
extern "C" unsigned long UNK_0053b964;
extern "C" unsigned long UNK_0053ba38;
extern "C" unsigned long UNK_0053ba64;
extern "C" unsigned long UNK_0053ba9a;
extern "C" unsigned long _DAT_0053b310;
extern "C" unsigned long _DAT_0053b314;
extern "C" unsigned long _UNK_0053b234;
extern "C" unsigned long _UNK_0053b238;
extern "C" unsigned long _UNK_0053b24c;
extern "C" unsigned long _UNK_0053b274;
extern "C" unsigned long _UNK_0053b758;
extern "C" unsigned long _UNK_0053b75c;
extern "C" unsigned long _UNK_0053b760;
extern "C" unsigned long _UNK_0053b764;
extern "C" unsigned long _UNK_0053b768;
extern "C" unsigned long _UNK_0053b76c;
extern "C" unsigned long _UNK_0053b770;
extern "C" unsigned long _UNK_0053bb74;
extern "C" unsigned long _UNK_0053bb78;
extern "C" unsigned long _UNK_0053bb7c;
extern "C" unsigned long _UNK_0053bb80;
extern "C" unsigned long _UNK_0053bb84;
extern "C" unsigned long _UNK_0053bb88;
extern "C" unsigned long _UNK_0053bb8c;
extern "C" unsigned long _UNK_0053bb90;
extern "C" unsigned long _UNK_0053bb94;
extern "C" unsigned long _UNK_0053bb98;
extern "C" unsigned long _UNK_0053bb9c;
extern "C" unsigned long _UNK_0053bba0;
extern "C" unsigned long _UNK_0053bba4;
extern "C" unsigned long _UNK_0053bba8;
extern "C" unsigned long _UNK_0053bbac;
extern "C" unsigned long _UNK_0053bbb0;
extern "C" unsigned long _UNK_0053bbb4;
extern "C" unsigned long g_0053b1c0;
extern "C" unsigned long g_0053b204;
extern "C" unsigned long g_0053b234;
extern "C" unsigned long g_0053b238;
extern "C" unsigned long g_0053b248;
extern "C" unsigned long g_0053b24c;
extern "C" unsigned long g_0053b270;
extern "C" unsigned long g_0053b274;
extern "C" unsigned long g_0053b310;
extern "C" unsigned long g_0053b314;
extern "C" unsigned long g_0053b422;
extern "C" unsigned long g_0053b710;
extern "C" unsigned long g_0053b73e;
extern "C" unsigned long g_0053b758;
extern "C" unsigned long g_0053b75c;
extern "C" unsigned long g_0053b760;
extern "C" unsigned long g_0053b764;
extern "C" unsigned long g_0053b768;
extern "C" unsigned long g_0053b76c;
extern "C" unsigned long g_0053b770;
extern "C" unsigned long g_0053b83e;
extern "C" unsigned long g_0053b872;
extern "C" unsigned long g_0053b932;
extern "C" unsigned long g_0053b964;
extern "C" unsigned long g_0053ba38;
extern "C" unsigned long g_0053ba64;
extern "C" unsigned long g_0053ba9a;
extern "C" unsigned long g_0053bb74;
extern "C" unsigned long g_0053bb78;
extern "C" unsigned long g_0053bb7c;
extern "C" unsigned long g_0053bb80;
extern "C" unsigned long g_0053bb84;
extern "C" unsigned long g_0053bb88;
extern "C" unsigned long g_0053bb8c;
extern "C" unsigned long g_0053bb90;
extern "C" unsigned long g_0053bb94;
extern "C" unsigned long g_0053bb98;
extern "C" unsigned long g_0053bb9c;
extern "C" unsigned long g_0053bba0;
extern "C" unsigned long g_0053bba4;
extern "C" unsigned long g_0053bba8;
extern "C" unsigned long g_0053bbac;
extern "C" unsigned long g_0053bbb0;
extern "C" unsigned long g_0053bbb4;
BLFurnaceSelectView::~BLFurnaceSelectView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0053b1c0 + g_0053b234);
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
  func_0079e45c(&uStack_14,&g_0053b204 + g_0053b238,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLFurnaceSelectView::BLFurnaceSelectView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(g_0053b310 + 0x53b2b8);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLFurnaceSelectView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * BLFurnaceSelectView::create()
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

undefined4 BLFurnaceSelectView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x108);
}

undefined4 BLFurnaceSelectView::getBackGround()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 BLFurnaceSelectView::ItemInfoDown()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

undefined4 BLFurnaceSelectView::DebrisItemInfoDown()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

undefined4 BLFurnaceSelectView::OtherItemInfoDown()
{
  return *(undefined4 *)(((int)this) + 0x118);
}

undefined4 BLFurnaceSelectView::ItemInfoUp()
{
  return *(undefined4 *)(((int)this) + 0x11c);
}

undefined4 BLFurnaceSelectView::getBtnUnequip()
{
  return *(undefined4 *)(((int)this) + 0x120);
}

undefined4 BLFurnaceSelectView::getBtnObtain()
{
  return *(undefined4 *)(((int)this) + 0x128);
}

undefined4 BLFurnaceSelectView::getLabUnequip()
{
  return *(undefined4 *)(((int)this) + 0x124);
}

void BLFurnaceSelectView::onEnter()
{
  ((BLFurnaceSelectPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLFurnaceSelectView::onExit()
{
  ((BLFurnaceSelectPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
bool BLFurnaceSelectView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
