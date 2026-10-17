#include "BLArenaMainView.h"
#include "CCNotificationCenter.h"
#include "CCLayer.h"
#include "CCObject.h"
#include "CCArray.h"
#include "BLArenaMainPresenter.h"
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
extern "C" long long func_0079e2ec(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long func_0079e62c(...);
extern "C" long long func_0079e724(...);
extern "C" long long func_0079e7e4(...);
extern "C" long long ghidra_CONCAT13(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_004c5b08;
extern "C" unsigned long UNK_004c5b5a;
extern "C" unsigned long UNK_004c5ba0;
extern "C" unsigned long UNK_004c5bc8;
extern "C" unsigned long UNK_004c5e46;
extern "C" unsigned long UNK_004c5ef8;
extern "C" unsigned long UNK_004c5f30;
extern "C" unsigned long UNK_004c5f36;
extern "C" unsigned long UNK_004c5f3c;
extern "C" unsigned long UNK_004c5f62;
extern "C" unsigned long UNK_004c5f9c;
extern "C" unsigned long UNK_004c6098;
extern "C" unsigned long UNK_004c613e;
extern "C" unsigned long UNK_004c61e0;
extern "C" unsigned long UNK_004c61f6;
extern "C" unsigned long UNK_004c62e8;
extern "C" unsigned long UNK_004c6316;
extern "C" unsigned long UNK_004c6426;
extern "C" unsigned long UNK_004c64b4;
extern "C" unsigned long UNK_004c64b6;
extern "C" unsigned long UNK_004c6522;
extern "C" unsigned long UNK_004c65a4;
extern "C" unsigned long UNK_004c65ba;
extern "C" unsigned long UNK_004c66ba;
extern "C" unsigned long UNK_004c6738;
extern "C" unsigned long UNK_004c6862;
extern "C" unsigned long UNK_004c688c;
extern "C" unsigned long UNK_004c68f2;
extern "C" unsigned long _DAT_004c5d28;
extern "C" unsigned long _DAT_004c5d2c;
extern "C" unsigned long _DAT_004c5d30;
extern "C" unsigned long _DAT_004c5d34;
extern "C" unsigned long _UNK_004c5b8c;
extern "C" unsigned long _UNK_004c5b90;
extern "C" unsigned long _UNK_004c5ba4;
extern "C" unsigned long _UNK_004c5bcc;
extern "C" unsigned long _UNK_004c5c4c;
extern "C" unsigned long _UNK_004c5c50;
extern "C" unsigned long _UNK_004c5c54;
extern "C" unsigned long _UNK_004c5c58;
extern "C" unsigned long _UNK_004c6210;
extern "C" unsigned long _UNK_004c6214;
extern "C" unsigned long _UNK_004c6218;
extern "C" unsigned long _UNK_004c621c;
extern "C" unsigned long _UNK_004c6220;
extern "C" unsigned long _UNK_004c6224;
extern "C" unsigned long _UNK_004c6228;
extern "C" unsigned long _UNK_004c622c;
extern "C" unsigned long _UNK_004c6230;
extern "C" unsigned long _UNK_004c6234;
extern "C" unsigned long _UNK_004c6238;
extern "C" unsigned long _UNK_004c623c;
extern "C" unsigned long _UNK_004c6240;
extern "C" unsigned long _UNK_004c6244;
extern "C" unsigned long _UNK_004c6248;
extern "C" unsigned long _UNK_004c624c;
extern "C" unsigned long _UNK_004c6250;
extern "C" unsigned long _UNK_004c62b8;
extern "C" unsigned long _UNK_004c62bc;
extern "C" unsigned long _UNK_004c66c0;
extern "C" unsigned long _UNK_004c66c4;
extern "C" unsigned long _UNK_004c66c8;
extern "C" unsigned long _UNK_004c66cc;
extern "C" unsigned long _UNK_004c66d0;
extern "C" unsigned long _UNK_004c66d4;
extern "C" unsigned long _UNK_004c66d8;
extern "C" unsigned long _UNK_004c66dc;
extern "C" unsigned long _UNK_004c66e0;
extern "C" unsigned long _UNK_004c66e4;
extern "C" unsigned long _UNK_004c66e8;
extern "C" unsigned long _UNK_004c66ec;
extern "C" unsigned long _UNK_004c66f0;
extern "C" unsigned long _UNK_004c66f4;
extern "C" unsigned long _UNK_004c66f8;
extern "C" unsigned long _UNK_004c66fc;
extern "C" unsigned long _UNK_004c6700;
extern "C" unsigned long _UNK_004c6704;
extern "C" unsigned long _UNK_004c6708;
extern "C" unsigned long _UNK_004c69b4;
extern "C" unsigned long _UNK_004c69b8;
extern "C" unsigned long _UNK_004c69bc;
extern "C" unsigned long _UNK_004c69c0;
extern "C" unsigned long _UNK_004c69c4;
extern "C" unsigned long _UNK_004c69c8;
extern "C" unsigned long _UNK_004c69cc;
extern "C" unsigned long _UNK_004c69d0;
extern "C" unsigned long _UNK_004c69d4;
extern "C" unsigned long g_004c5b08;
extern "C" unsigned long g_004c5b5a;
extern "C" unsigned long g_004c5b8c;
extern "C" unsigned long g_004c5b90;
extern "C" unsigned long g_004c5ba0;
extern "C" unsigned long g_004c5ba4;
extern "C" unsigned long g_004c5bc8;
extern "C" unsigned long g_004c5bcc;
extern "C" unsigned long g_004c5c4c;
extern "C" unsigned long g_004c5c50;
extern "C" unsigned long g_004c5c54;
extern "C" unsigned long g_004c5c58;
extern "C" unsigned long g_004c5d28;
extern "C" unsigned long g_004c5d2c;
extern "C" unsigned long g_004c5d30;
extern "C" unsigned long g_004c5d34;
extern "C" unsigned long g_004c5e46;
extern "C" unsigned long g_004c5ef8;
extern "C" unsigned long g_004c5f30;
extern "C" unsigned long g_004c5f36;
extern "C" unsigned long g_004c5f3c;
extern "C" unsigned long g_004c5f62;
extern "C" unsigned long g_004c5f9c;
extern "C" unsigned long g_004c6098;
extern "C" unsigned long g_004c613e;
extern "C" unsigned long g_004c61e0;
extern "C" unsigned long g_004c61f6;
extern "C" unsigned long g_004c6210;
extern "C" unsigned long g_004c6214;
extern "C" unsigned long g_004c6218;
extern "C" unsigned long g_004c621c;
extern "C" unsigned long g_004c6220;
extern "C" unsigned long g_004c6224;
extern "C" unsigned long g_004c6228;
extern "C" unsigned long g_004c622c;
extern "C" unsigned long g_004c6230;
extern "C" unsigned long g_004c6234;
extern "C" unsigned long g_004c6238;
extern "C" unsigned long g_004c623c;
extern "C" unsigned long g_004c6240;
extern "C" unsigned long g_004c6244;
extern "C" unsigned long g_004c6248;
extern "C" unsigned long g_004c624c;
extern "C" unsigned long g_004c6250;
extern "C" unsigned long g_004c62b8;
extern "C" unsigned long g_004c62bc;
extern "C" unsigned long g_004c62e8;
extern "C" unsigned long g_004c6316;
extern "C" unsigned long g_004c6426;
extern "C" unsigned long g_004c64b4;
extern "C" unsigned long g_004c64b6;
extern "C" unsigned long g_004c6522;
extern "C" unsigned long g_004c65a4;
extern "C" unsigned long g_004c65ba;
extern "C" unsigned long g_004c66ba;
extern "C" unsigned long g_004c66c0;
extern "C" unsigned long g_004c66c4;
extern "C" unsigned long g_004c66c8;
extern "C" unsigned long g_004c66cc;
extern "C" unsigned long g_004c66d0;
extern "C" unsigned long g_004c66d4;
extern "C" unsigned long g_004c66d8;
extern "C" unsigned long g_004c66dc;
extern "C" unsigned long g_004c66e0;
extern "C" unsigned long g_004c66e4;
extern "C" unsigned long g_004c66e8;
extern "C" unsigned long g_004c66ec;
extern "C" unsigned long g_004c66f0;
extern "C" unsigned long g_004c66f4;
extern "C" unsigned long g_004c66f8;
extern "C" unsigned long g_004c66fc;
extern "C" unsigned long g_004c6700;
extern "C" unsigned long g_004c6704;
extern "C" unsigned long g_004c6708;
extern "C" unsigned long g_004c6738;
extern "C" unsigned long g_004c6862;
extern "C" unsigned long g_004c688c;
extern "C" unsigned long g_004c68f2;
extern "C" unsigned long g_004c69b4;
extern "C" unsigned long g_004c69b8;
extern "C" unsigned long g_004c69bc;
extern "C" unsigned long g_004c69c0;
extern "C" unsigned long g_004c69c4;
extern "C" unsigned long g_004c69c8;
extern "C" unsigned long g_004c69cc;
extern "C" unsigned long g_004c69d0;
extern "C" unsigned long g_004c69d4;
cocos2d::CCArray* BLArenaMainView::getArrayItem() const
{
  return (cocos2d::CCArray*)(*(undefined4 *)(((int)this) + 0x120));
}

void BLArenaMainView::setArrayItem(cocos2d::CCArray* p1)
{
  *(undefined4 *)(((int)this) + 0x120) = (undefined4)(intptr_t)p1;
  return;
}

BLArenaMainView::~BLArenaMainView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_004c5b08 + g_004c5b8c);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x210;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x240;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x24c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  if (*(int *)((int)this + 4*(0x42)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x42)) = 0;
  }
  if (*(int *)((int)this + 4*(0x48)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x48)) = 0;
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_004c5b5a + g_004c5b90,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}



int * BLArenaMainView::create()
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

undefined4 BLArenaMainView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x108);
}

undefined4 BLArenaMainView::getBtnClose()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 BLArenaMainView::getBtnShop()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

undefined4 BLArenaMainView::getLabVs()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

undefined4 BLArenaMainView::getbgJiFen()
{
  return *(undefined4 *)(((int)this) + 0x118);
}

undefined4 BLArenaMainView::getjifen()
{
  return *(undefined4 *)(((int)this) + 0x11c);
}

void BLArenaMainView::onEnter()
{
  ((BLArenaMainPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLArenaMainView::onExit()
{
  undefined4 uVar1;
  
  ((BLArenaMainPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar1)->removeAllObservers((cocos2d::CCObject*)((int)this));
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (3) =====
void BLArenaMainView::onUpdateVirtualItemData(cocos2d::CCObject* p1)
{
  undefined4 p3 = 0;

  undefined4 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  code *pcVar4;
  int iStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  piVar3 = *(int **)(((int)this) + 0x118);
  pcVar4 = *(code **)(*piVar3 + 0x1d4);
  iStack_20 = (undefined4)(intptr_t)((int *)((int)this));
  uStack_1c = (undefined4)(p1);
  uStack_18 = (undefined4)(p3);
  puVar1 = (undefined4 *)(**(code **)(**(int **)(((int)this) + 0x114) + 0x8c))();
  uVar2 = (undefined4)(func_0079e59c(*puVar1,g_004c5c4c));
  puVar1 = (undefined4 *)(**(code **)(**(int **)(((int)this) + 0x11c) + 0x8c))();
  uVar2 = (undefined4)(func_0079e59c(uVar2,*puVar1));
  uVar2 = (undefined4)(func_0079e59c(uVar2,0x41000000));
  uVar2 = (undefined4)(func_0079e59c(uVar2,g_004c5c50));
  0 /* ctorZero */;
  (*pcVar4)(piVar3,&iStack_20);
  piVar3 = *(int **)(((int)this) + 0x11c);
  pcVar4 = *(code **)(*piVar3 + 0x5c);
  puVar1 = (undefined4 *)(**(code **)(**(int **)(((int)this) + 0x114) + 0x8c))();
  uVar2 = (undefined4)(func_0079e59c(*puVar1,g_004c5c4c));
  uVar2 = (undefined4)(func_0079e59c(uVar2,g_004c5c58));
  (*pcVar4)(piVar3,uVar2);
  return;
}

BLArenaMainView::BLArenaMainView()
{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [12];
  
  0 /* ctorZero */;
  iVar2 = (undefined4)(intptr_t)(*(int *)(g_004c5d28 + 0x4c5c9e));
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x210;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x240;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x24c;
  iVar2 = (undefined4)(intptr_t)(cocos2d::CCArray::create());
  *(int *)((int)this + 4*(0x48)) = iVar2;
  if (iVar2 != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)(((int)this)))->addObserver((cocos2d::CCObject*)*(undefined4 *)(g_004c5d2c + 0x4c5cdc), 0, (char const*)"EVENT_VIRTUAL_UPDATE", 0);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(auStack_1c,"BLArenaMainView",auStack_20);
  ((BLLeakUtils *)(uVar1))->addClass((std::string)(char*)auStack_1c);
  func_0079e2bc(auStack_1c);
  return;
}

bool BLArenaMainView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
