#include "BLChestItemInfoView.h"
#include "BLChestItemInfoPresenter.h"
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
extern "C" unsigned long UNK_005191c8;
extern "C" unsigned long UNK_0051920c;
extern "C" unsigned long UNK_00519250;
extern "C" unsigned long UNK_00519278;
extern "C" unsigned long UNK_0051942a;
extern "C" unsigned long UNK_00519718;
extern "C" unsigned long UNK_00519746;
extern "C" unsigned long UNK_00519846;
extern "C" unsigned long UNK_0051987a;
extern "C" unsigned long UNK_0051993a;
extern "C" unsigned long UNK_0051996c;
extern "C" unsigned long UNK_00519a40;
extern "C" unsigned long UNK_00519a6c;
extern "C" unsigned long UNK_00519aa2;
extern "C" unsigned long _DAT_00519318;
extern "C" unsigned long _DAT_0051931c;
extern "C" unsigned long _UNK_0051923c;
extern "C" unsigned long _UNK_00519240;
extern "C" unsigned long _UNK_00519254;
extern "C" unsigned long _UNK_0051927c;
extern "C" unsigned long _UNK_00519760;
extern "C" unsigned long _UNK_00519764;
extern "C" unsigned long _UNK_00519768;
extern "C" unsigned long _UNK_0051976c;
extern "C" unsigned long _UNK_00519770;
extern "C" unsigned long _UNK_00519774;
extern "C" unsigned long _UNK_00519778;
extern "C" unsigned long _UNK_00519b7c;
extern "C" unsigned long _UNK_00519b80;
extern "C" unsigned long _UNK_00519b84;
extern "C" unsigned long _UNK_00519b88;
extern "C" unsigned long _UNK_00519b8c;
extern "C" unsigned long _UNK_00519b90;
extern "C" unsigned long _UNK_00519b94;
extern "C" unsigned long _UNK_00519b98;
extern "C" unsigned long _UNK_00519b9c;
extern "C" unsigned long _UNK_00519ba0;
extern "C" unsigned long _UNK_00519ba4;
extern "C" unsigned long _UNK_00519ba8;
extern "C" unsigned long _UNK_00519bac;
extern "C" unsigned long _UNK_00519bb0;
extern "C" unsigned long _UNK_00519bb4;
extern "C" unsigned long _UNK_00519bb8;
extern "C" unsigned long _UNK_00519bbc;
extern "C" unsigned long g_005191c8;
extern "C" unsigned long g_0051920c;
extern "C" unsigned long g_0051923c;
extern "C" unsigned long g_00519240;
extern "C" unsigned long g_00519250;
extern "C" unsigned long g_00519254;
extern "C" unsigned long g_00519278;
extern "C" unsigned long g_0051927c;
extern "C" unsigned long g_00519318;
extern "C" unsigned long g_0051931c;
extern "C" unsigned long g_0051942a;
extern "C" unsigned long g_00519718;
extern "C" unsigned long g_00519746;
extern "C" unsigned long g_00519760;
extern "C" unsigned long g_00519764;
extern "C" unsigned long g_00519768;
extern "C" unsigned long g_0051976c;
extern "C" unsigned long g_00519770;
extern "C" unsigned long g_00519774;
extern "C" unsigned long g_00519778;
extern "C" unsigned long g_00519846;
extern "C" unsigned long g_0051987a;
extern "C" unsigned long g_0051993a;
extern "C" unsigned long g_0051996c;
extern "C" unsigned long g_00519a40;
extern "C" unsigned long g_00519a6c;
extern "C" unsigned long g_00519aa2;
extern "C" unsigned long g_00519b7c;
extern "C" unsigned long g_00519b80;
extern "C" unsigned long g_00519b84;
extern "C" unsigned long g_00519b88;
extern "C" unsigned long g_00519b8c;
extern "C" unsigned long g_00519b90;
extern "C" unsigned long g_00519b94;
extern "C" unsigned long g_00519b98;
extern "C" unsigned long g_00519b9c;
extern "C" unsigned long g_00519ba0;
extern "C" unsigned long g_00519ba4;
extern "C" unsigned long g_00519ba8;
extern "C" unsigned long g_00519bac;
extern "C" unsigned long g_00519bb0;
extern "C" unsigned long g_00519bb4;
extern "C" unsigned long g_00519bb8;
extern "C" unsigned long g_00519bbc;
BLChestItemInfoView::~BLChestItemInfoView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_005191c8 + g_0051923c);
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
  func_0079e45c(&uStack_14,&g_0051920c + g_00519240,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLChestItemInfoView::BLChestItemInfoView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(g_00519318 + 0x5192c0);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLChestItemInfoView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * BLChestItemInfoView::create()
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

undefined4 BLChestItemInfoView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x108);
}

undefined4 BLChestItemInfoView::getBackGround()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 BLChestItemInfoView::ItemInfoDown()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

undefined4 BLChestItemInfoView::DebrisItemInfoDown()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

undefined4 BLChestItemInfoView::OtherItemInfoDown()
{
  return *(undefined4 *)(((int)this) + 0x118);
}

undefined4 BLChestItemInfoView::ItemInfoUp()
{
  return *(undefined4 *)(((int)this) + 0x11c);
}

undefined4 BLChestItemInfoView::getBtnUnequip()
{
  return *(undefined4 *)(((int)this) + 0x120);
}

undefined4 BLChestItemInfoView::getBtnObtain()
{
  return *(undefined4 *)(((int)this) + 0x128);
}

undefined4 BLChestItemInfoView::getLabUnequip()
{
  return *(undefined4 *)(((int)this) + 0x124);
}

void BLChestItemInfoView::onEnter()
{
  ((BLChestItemInfoPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLChestItemInfoView::onExit()
{
  ((BLChestItemInfoPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
bool BLChestItemInfoView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
