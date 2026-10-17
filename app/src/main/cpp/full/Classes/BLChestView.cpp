#include "BLChestView.h"
#include "BLChestPresenter.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLPageLayer.h"
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
extern "C" unsigned long UNK_0051d1a0;
extern "C" unsigned long UNK_0051d1f2;
extern "C" unsigned long UNK_0051d238;
extern "C" unsigned long UNK_0051d260;
extern "C" unsigned long UNK_0051d424;
extern "C" unsigned long UNK_0051d536;
extern "C" unsigned long UNK_0051d5ce;
extern "C" unsigned long UNK_0051d6ba;
extern "C" unsigned long UNK_0051d6e6;
extern "C" unsigned long UNK_0051d7ae;
extern "C" unsigned long UNK_0051d7de;
extern "C" unsigned long UNK_0051d8f2;
extern "C" unsigned long UNK_0051d992;
extern "C" unsigned long _DAT_0051d318;
extern "C" unsigned long _DAT_0051d31c;
extern "C" unsigned long _UNK_0051d224;
extern "C" unsigned long _UNK_0051d228;
extern "C" unsigned long _UNK_0051d23c;
extern "C" unsigned long _UNK_0051d264;
extern "C" unsigned long _UNK_0051d808;
extern "C" unsigned long _UNK_0051d80c;
extern "C" unsigned long _UNK_0051d810;
extern "C" unsigned long _UNK_0051d814;
extern "C" unsigned long _UNK_0051d818;
extern "C" unsigned long _UNK_0051d81c;
extern "C" unsigned long _UNK_0051d820;
extern "C" unsigned long _UNK_0051d824;
extern "C" unsigned long _UNK_0051d828;
extern "C" unsigned long _UNK_0051d82c;
extern "C" unsigned long _UNK_0051d830;
extern "C" unsigned long _UNK_0051d834;
extern "C" unsigned long _UNK_0051d838;
extern "C" unsigned long _UNK_0051d83c;
extern "C" unsigned long _UNK_0051d840;
extern "C" unsigned long _UNK_0051d844;
extern "C" unsigned long _UNK_0051d848;
extern "C" unsigned long _UNK_0051dac0;
extern "C" unsigned long _UNK_0051dac4;
extern "C" unsigned long _UNK_0051dac8;
extern "C" unsigned long _UNK_0051dacc;
extern "C" unsigned long _UNK_0051dad0;
extern "C" unsigned long _UNK_0051dad4;
extern "C" unsigned long _UNK_0051dad8;
extern "C" unsigned long _UNK_0051dadc;
extern "C" unsigned long _UNK_0051dae0;
extern "C" unsigned long _UNK_0051dae4;
extern "C" unsigned long g_0051d1a0;
extern "C" unsigned long g_0051d1f2;
extern "C" unsigned long g_0051d224;
extern "C" unsigned long g_0051d228;
extern "C" unsigned long g_0051d238;
extern "C" unsigned long g_0051d23c;
extern "C" unsigned long g_0051d260;
extern "C" unsigned long g_0051d264;
extern "C" unsigned long g_0051d318;
extern "C" unsigned long g_0051d31c;
extern "C" unsigned long g_0051d424;
extern "C" unsigned long g_0051d536;
extern "C" unsigned long g_0051d5ce;
extern "C" unsigned long g_0051d6ba;
extern "C" unsigned long g_0051d6e6;
extern "C" unsigned long g_0051d7ae;
extern "C" unsigned long g_0051d7de;
extern "C" unsigned long g_0051d808;
extern "C" unsigned long g_0051d80c;
extern "C" unsigned long g_0051d810;
extern "C" unsigned long g_0051d814;
extern "C" unsigned long g_0051d818;
extern "C" unsigned long g_0051d81c;
extern "C" unsigned long g_0051d820;
extern "C" unsigned long g_0051d824;
extern "C" unsigned long g_0051d828;
extern "C" unsigned long g_0051d82c;
extern "C" unsigned long g_0051d830;
extern "C" unsigned long g_0051d834;
extern "C" unsigned long g_0051d838;
extern "C" unsigned long g_0051d83c;
extern "C" unsigned long g_0051d840;
extern "C" unsigned long g_0051d844;
extern "C" unsigned long g_0051d848;
extern "C" unsigned long g_0051d8f2;
extern "C" unsigned long g_0051d992;
extern "C" unsigned long g_0051dac0;
extern "C" unsigned long g_0051dac4;
extern "C" unsigned long g_0051dac8;
extern "C" unsigned long g_0051dacc;
extern "C" unsigned long g_0051dad0;
extern "C" unsigned long g_0051dad4;
extern "C" unsigned long g_0051dad8;
extern "C" unsigned long g_0051dadc;
extern "C" unsigned long g_0051dae0;
extern "C" unsigned long g_0051dae4;
BLChestView::~BLChestView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0051d1a0 + g_0051d224);
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
  func_0079e45c(&uStack_14,&g_0051d1f2 + g_0051d228,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}


int * BLChestView::create()
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

undefined4 BLChestView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 BLChestView::getBackGround()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

undefined4 BLChestView::Chest()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

undefined4 BLChestView::getTabBg()
{
  return *(undefined4 *)(((int)this) + 0x118);
}

undefined4 BLChestView::getLabTitle()
{
  return *(undefined4 *)(((int)this) + 0x11c);
}

undefined4 BLChestView::getBtnClose()
{
  return *(undefined4 *)(((int)this) + 0x120);
}

undefined4 BLChestView::getSprRight()
{
  return *(undefined4 *)(((int)this) + 0x124);
}

undefined4 BLChestView::getSprLeft()
{
  return *(undefined4 *)(((int)this) + 0x128);
}

void BLChestView::onEnter()
{
  ((BLChestPresenter *)*(undefined4 *)(((int)this) + 0x10c))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLChestView::onExit()
{
  ((BLChestPresenter *)*(undefined4 *)(((int)this) + 0x10c))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (2) =====
BLChestView::BLChestView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = (undefined4)(intptr_t)(*(int *)(g_0051d318 + 0x51d2a8));
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
  func_0079e45c(&uStack_14,((intptr_t)"BLChestView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

bool BLChestView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
