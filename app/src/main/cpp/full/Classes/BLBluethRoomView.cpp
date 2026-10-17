#include "BLBluethRoomView.h"
#include "BLBluethRoomPresenter.h"
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
extern "C" unsigned long UNK_004fb204;
extern "C" unsigned long UNK_004fb256;
extern "C" unsigned long UNK_004fb29c;
extern "C" unsigned long UNK_004fb2c4;
extern "C" unsigned long UNK_004fb47e;
extern "C" unsigned long UNK_004fb560;
extern "C" unsigned long UNK_004fb65c;
extern "C" unsigned long UNK_004fb688;
extern "C" unsigned long UNK_004fb764;
extern "C" unsigned long UNK_004fb792;
extern "C" unsigned long UNK_004fb8a2;
extern "C" unsigned long UNK_004fb8cc;
extern "C" unsigned long UNK_004fb984;
extern "C" unsigned long UNK_004fb9b8;
extern "C" unsigned long UNK_004fba6e;
extern "C" unsigned long UNK_004fba98;
extern "C" unsigned long UNK_004fbb4e;
extern "C" unsigned long UNK_004fbb78;
extern "C" unsigned long UNK_004fbc3a;
extern "C" unsigned long UNK_004fbc64;
extern "C" unsigned long UNK_004fbd7a;
extern "C" unsigned long UNK_004fbda4;
extern "C" unsigned long _DAT_004fb37c;
extern "C" unsigned long _DAT_004fb380;
extern "C" unsigned long _UNK_004fb288;
extern "C" unsigned long _UNK_004fb28c;
extern "C" unsigned long _UNK_004fb2a0;
extern "C" unsigned long _UNK_004fb2c8;
extern "C" unsigned long _UNK_004fb85c;
extern "C" unsigned long _UNK_004fb860;
extern "C" unsigned long _UNK_004fb864;
extern "C" unsigned long _UNK_004fb868;
extern "C" unsigned long _UNK_004fb86c;
extern "C" unsigned long _UNK_004fb870;
extern "C" unsigned long _UNK_004fb874;
extern "C" unsigned long _UNK_004fb878;
extern "C" unsigned long _UNK_004fb87c;
extern "C" unsigned long _UNK_004fb880;
extern "C" unsigned long _UNK_004fb884;
extern "C" unsigned long _UNK_004fb888;
extern "C" unsigned long _UNK_004fb88c;
extern "C" unsigned long _UNK_004fb890;
extern "C" unsigned long _UNK_004fb894;
extern "C" unsigned long _UNK_004fbc80;
extern "C" unsigned long _UNK_004fbc84;
extern "C" unsigned long _UNK_004fbc88;
extern "C" unsigned long _UNK_004fbc8c;
extern "C" unsigned long _UNK_004fbc90;
extern "C" unsigned long _UNK_004fbc94;
extern "C" unsigned long _UNK_004fbc98;
extern "C" unsigned long _UNK_004fbc9c;
extern "C" unsigned long _UNK_004fbca0;
extern "C" unsigned long _UNK_004fbca4;
extern "C" unsigned long _UNK_004fbca8;
extern "C" unsigned long _UNK_004fbcac;
extern "C" unsigned long _UNK_004fbcb0;
extern "C" unsigned long _UNK_004fbcb4;
extern "C" unsigned long _UNK_004fbcb8;
extern "C" unsigned long _UNK_004fbcbc;
extern "C" unsigned long _UNK_004fbf44;
extern "C" unsigned long _UNK_004fbf48;
extern "C" unsigned long _UNK_004fbf4c;
extern "C" unsigned long _UNK_004fbf50;
extern "C" unsigned long _UNK_004fbf54;
extern "C" unsigned long _UNK_004fbf58;
extern "C" unsigned long _UNK_004fbf5c;
extern "C" unsigned long _UNK_004fbf60;
extern "C" unsigned long _UNK_004fbf64;
extern "C" unsigned long _UNK_004fbf68;
extern "C" unsigned long _UNK_004fbf6c;
extern "C" unsigned long g_004fb204;
extern "C" unsigned long g_004fb256;
extern "C" unsigned long g_004fb288;
extern "C" unsigned long g_004fb28c;
extern "C" unsigned long g_004fb29c;
extern "C" unsigned long g_004fb2a0;
extern "C" unsigned long g_004fb2c4;
extern "C" unsigned long g_004fb2c8;
extern "C" unsigned long g_004fb37c;
extern "C" unsigned long g_004fb380;
extern "C" unsigned long g_004fb47e;
extern "C" unsigned long g_004fb560;
extern "C" unsigned long g_004fb65c;
extern "C" unsigned long g_004fb688;
extern "C" unsigned long g_004fb764;
extern "C" unsigned long g_004fb792;
extern "C" unsigned long g_004fb85c;
extern "C" unsigned long g_004fb860;
extern "C" unsigned long g_004fb864;
extern "C" unsigned long g_004fb868;
extern "C" unsigned long g_004fb86c;
extern "C" unsigned long g_004fb870;
extern "C" unsigned long g_004fb874;
extern "C" unsigned long g_004fb878;
extern "C" unsigned long g_004fb87c;
extern "C" unsigned long g_004fb880;
extern "C" unsigned long g_004fb884;
extern "C" unsigned long g_004fb888;
extern "C" unsigned long g_004fb88c;
extern "C" unsigned long g_004fb890;
extern "C" unsigned long g_004fb894;
extern "C" unsigned long g_004fb8a2;
extern "C" unsigned long g_004fb8cc;
extern "C" unsigned long g_004fb984;
extern "C" unsigned long g_004fb9b8;
extern "C" unsigned long g_004fba6e;
extern "C" unsigned long g_004fba98;
extern "C" unsigned long g_004fbb4e;
extern "C" unsigned long g_004fbb78;
extern "C" unsigned long g_004fbc3a;
extern "C" unsigned long g_004fbc64;
extern "C" unsigned long g_004fbc80;
extern "C" unsigned long g_004fbc84;
extern "C" unsigned long g_004fbc88;
extern "C" unsigned long g_004fbc8c;
extern "C" unsigned long g_004fbc90;
extern "C" unsigned long g_004fbc94;
extern "C" unsigned long g_004fbc98;
extern "C" unsigned long g_004fbc9c;
extern "C" unsigned long g_004fbca0;
extern "C" unsigned long g_004fbca4;
extern "C" unsigned long g_004fbca8;
extern "C" unsigned long g_004fbcac;
extern "C" unsigned long g_004fbcb0;
extern "C" unsigned long g_004fbcb4;
extern "C" unsigned long g_004fbcb8;
extern "C" unsigned long g_004fbcbc;
extern "C" unsigned long g_004fbd7a;
extern "C" unsigned long g_004fbda4;
extern "C" unsigned long g_004fbf44;
extern "C" unsigned long g_004fbf48;
extern "C" unsigned long g_004fbf4c;
extern "C" unsigned long g_004fbf50;
extern "C" unsigned long g_004fbf54;
extern "C" unsigned long g_004fbf58;
extern "C" unsigned long g_004fbf5c;
extern "C" unsigned long g_004fbf60;
extern "C" unsigned long g_004fbf64;
extern "C" unsigned long g_004fbf68;
extern "C" unsigned long g_004fbf6c;
BLBluethRoomView::~BLBluethRoomView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_004fb204 + g_004fb288);
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
  if (*(int *)((int)this + 4*(0x43)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x43)) = 0;
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_004fb256 + g_004fb28c,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}


int * BLBluethRoomView::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x124)));
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

undefined4 BLBluethRoomView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 BLBluethRoomView::getBackGround()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

undefined4 BLBluethRoomView::getTabBg()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

undefined4 BLBluethRoomView::getBtnCreate()
{
  return *(undefined4 *)(((int)this) + 0x118);
}

undefined4 BLBluethRoomView::getBtnJoin()
{
  return *(undefined4 *)(((int)this) + 0x11c);
}

undefined4 BLBluethRoomView::getBtnClose()
{
  return *(undefined4 *)(((int)this) + 0x120);
}

void BLBluethRoomView::onEnter()
{
  ((BLBluethRoomPresenter *)*(undefined4 *)(((int)this) + 0x10c))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLBluethRoomView::onExit()
{
  ((BLBluethRoomPresenter *)*(undefined4 *)(((int)this) + 0x10c))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (2) =====
BLBluethRoomView::BLBluethRoomView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = (undefined4)(intptr_t)(*(int *)(g_004fb37c + 0x4fb30c));
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
  func_0079e45c(&uStack_14,((intptr_t)"BLBluethRoomView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

bool BLBluethRoomView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
