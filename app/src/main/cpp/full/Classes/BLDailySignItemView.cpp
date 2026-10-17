#include "BLDailySignItemView.h"
#include "BLDailySignItemPresenter.h"
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
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e62c(...);
extern "C" long long ghidra_CONCAT13(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_00524bd0;
extern "C" unsigned long UNK_00524c14;
extern "C" unsigned long UNK_00524c58;
extern "C" unsigned long UNK_00524c80;
extern "C" unsigned long UNK_00524cc8;
extern "C" unsigned long UNK_00524cf6;
extern "C" unsigned long UNK_00524e2c;
extern "C" unsigned long UNK_00524e7e;
extern "C" unsigned long UNK_00524eaa;
extern "C" unsigned long UNK_00524ed6;
extern "C" unsigned long UNK_00524f0a;
extern "C" unsigned long UNK_00524f36;
extern "C" unsigned long UNK_00524f64;
extern "C" unsigned long UNK_00524f72;
extern "C" unsigned long UNK_00524f8a;
extern "C" unsigned long UNK_00524fb6;
extern "C" unsigned long UNK_00524fe4;
extern "C" unsigned long UNK_00524ff2;
extern "C" unsigned long UNK_005250e0;
extern "C" unsigned long UNK_0052510c;
extern "C" unsigned long UNK_005251c0;
extern "C" unsigned long UNK_005252ae;
extern "C" unsigned long UNK_005253a6;
extern "C" unsigned long UNK_005253d6;
extern "C" unsigned long UNK_005254ae;
extern "C" unsigned long UNK_005254b4;
extern "C" unsigned long UNK_00525592;
extern "C" unsigned long UNK_00525596;
extern "C" unsigned long UNK_00525626;
extern "C" unsigned long UNK_005256ca;
extern "C" unsigned long UNK_0052576a;
extern "C" unsigned long UNK_00525794;
extern "C" unsigned long UNK_00525872;
extern "C" unsigned long UNK_00525874;
extern "C" unsigned long UNK_005258a0;
extern "C" unsigned long _UNK_00524c44;
extern "C" unsigned long _UNK_00524c48;
extern "C" unsigned long _UNK_00524c5c;
extern "C" unsigned long _UNK_00524c84;
extern "C" unsigned long _UNK_00524d20;
extern "C" unsigned long _UNK_00524d24;
extern "C" unsigned long _UNK_00524e58;
extern "C" unsigned long _UNK_00525018;
extern "C" unsigned long _UNK_0052501c;
extern "C" unsigned long _UNK_00525020;
extern "C" unsigned long _UNK_00525024;
extern "C" unsigned long _UNK_00525028;
extern "C" unsigned long _UNK_0052502c;
extern "C" unsigned long _UNK_00525030;
extern "C" unsigned long _UNK_00525034;
extern "C" unsigned long _UNK_00525038;
extern "C" unsigned long _UNK_0052503c;
extern "C" unsigned long _UNK_00525040;
extern "C" unsigned long _UNK_00525044;
extern "C" unsigned long _UNK_00525048;
extern "C" unsigned long _UNK_005254c0;
extern "C" unsigned long _UNK_005254c4;
extern "C" unsigned long _UNK_005254c8;
extern "C" unsigned long _UNK_005254cc;
extern "C" unsigned long _UNK_005254d0;
extern "C" unsigned long _UNK_005254d4;
extern "C" unsigned long _UNK_005254d8;
extern "C" unsigned long _UNK_005254dc;
extern "C" unsigned long _UNK_005254e0;
extern "C" unsigned long _UNK_005254e4;
extern "C" unsigned long _UNK_005254e8;
extern "C" unsigned long _UNK_005254ec;
extern "C" unsigned long _UNK_005254f0;
extern "C" unsigned long _UNK_005254f4;
extern "C" unsigned long _UNK_005258f8;
extern "C" unsigned long _UNK_005258fc;
extern "C" unsigned long _UNK_00525900;
extern "C" unsigned long _UNK_00525904;
extern "C" unsigned long _UNK_00525908;
extern "C" unsigned long _UNK_0052590c;
extern "C" unsigned long _UNK_00525910;
extern "C" unsigned long _UNK_00525914;
extern "C" unsigned long _UNK_00525918;
extern "C" unsigned long _UNK_0052591c;
extern "C" unsigned long _UNK_00525920;
extern "C" unsigned long _UNK_00525924;
extern "C" unsigned long _UNK_00525928;
extern "C" unsigned long _UNK_0052592c;
extern "C" unsigned long _UNK_00525930;
extern "C" unsigned long _UNK_00525934;
extern "C" unsigned long _UNK_00525938;
extern "C" unsigned long _UNK_0052593c;
extern "C" unsigned long _UNK_00525940;
extern "C" unsigned long _UNK_00525944;
extern "C" unsigned long _UNK_00525948;
extern "C" unsigned long _UNK_0052594c;
extern "C" unsigned long _UNK_005259e4;
extern "C" unsigned long _UNK_005259e8;
extern "C" unsigned long g_00524bd0;
extern "C" unsigned long g_00524c14;
extern "C" unsigned long g_00524c44;
extern "C" unsigned long g_00524c48;
extern "C" unsigned long g_00524c58;
extern "C" unsigned long g_00524c5c;
extern "C" unsigned long g_00524c80;
extern "C" unsigned long g_00524c84;
extern "C" unsigned long g_00524cc8;
extern "C" unsigned long g_00524cf6;
extern "C" unsigned long g_00524d20;
extern "C" unsigned long g_00524d24;
extern "C" unsigned long g_00524e2c;
extern "C" unsigned long g_00524e58;
extern "C" unsigned long g_00524e7e;
extern "C" unsigned long g_00524eaa;
extern "C" unsigned long g_00524ed6;
extern "C" unsigned long g_00524f0a;
extern "C" unsigned long g_00524f36;
extern "C" unsigned long g_00524f64;
extern "C" unsigned long g_00524f72;
extern "C" unsigned long g_00524f8a;
extern "C" unsigned long g_00524fb6;
extern "C" unsigned long g_00524fe4;
extern "C" unsigned long g_00524ff2;
extern "C" unsigned long g_00525018;
extern "C" unsigned long g_0052501c;
extern "C" unsigned long g_00525020;
extern "C" unsigned long g_00525024;
extern "C" unsigned long g_00525028;
extern "C" unsigned long g_0052502c;
extern "C" unsigned long g_00525030;
extern "C" unsigned long g_00525034;
extern "C" unsigned long g_00525038;
extern "C" unsigned long g_0052503c;
extern "C" unsigned long g_00525040;
extern "C" unsigned long g_00525044;
extern "C" unsigned long g_00525048;
extern "C" unsigned long g_005250e0;
extern "C" unsigned long g_0052510c;
extern "C" unsigned long g_005251c0;
extern "C" unsigned long g_005252ae;
extern "C" unsigned long g_005253a6;
extern "C" unsigned long g_005253d6;
extern "C" unsigned long g_005254ae;
extern "C" unsigned long g_005254b4;
extern "C" unsigned long g_005254c0;
extern "C" unsigned long g_005254c4;
extern "C" unsigned long g_005254c8;
extern "C" unsigned long g_005254cc;
extern "C" unsigned long g_005254d0;
extern "C" unsigned long g_005254d4;
extern "C" unsigned long g_005254d8;
extern "C" unsigned long g_005254dc;
extern "C" unsigned long g_005254e0;
extern "C" unsigned long g_005254e4;
extern "C" unsigned long g_005254e8;
extern "C" unsigned long g_005254ec;
extern "C" unsigned long g_005254f0;
extern "C" unsigned long g_005254f4;
extern "C" unsigned long g_00525592;
extern "C" unsigned long g_00525596;
extern "C" unsigned long g_00525626;
extern "C" unsigned long g_005256ca;
extern "C" unsigned long g_0052576a;
extern "C" unsigned long g_00525794;
extern "C" unsigned long g_00525872;
extern "C" unsigned long g_00525874;
extern "C" unsigned long g_005258a0;
extern "C" unsigned long g_005258f8;
extern "C" unsigned long g_005258fc;
extern "C" unsigned long g_00525900;
extern "C" unsigned long g_00525904;
extern "C" unsigned long g_00525908;
extern "C" unsigned long g_0052590c;
extern "C" unsigned long g_00525910;
extern "C" unsigned long g_00525914;
extern "C" unsigned long g_00525918;
extern "C" unsigned long g_0052591c;
extern "C" unsigned long g_00525920;
extern "C" unsigned long g_00525924;
extern "C" unsigned long g_00525928;
extern "C" unsigned long g_0052592c;
extern "C" unsigned long g_00525930;
extern "C" unsigned long g_00525934;
extern "C" unsigned long g_00525938;
extern "C" unsigned long g_0052593c;
extern "C" unsigned long g_00525940;
extern "C" unsigned long g_00525944;
extern "C" unsigned long g_00525948;
extern "C" unsigned long g_0052594c;
extern "C" unsigned long g_005259e4;
extern "C" unsigned long g_005259e8;
BLDailySignItemView::~BLDailySignItemView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_00524bd0 + g_00524c44);
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
  func_0079e45c(&uStack_14,&g_00524c14 + g_00524c48,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLDailySignItemView::BLDailySignItemView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_00524cc8 + g_00524d20);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00524cf6 + g_00524d24,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * BLDailySignItemView::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x138)));
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

undefined4 BLDailySignItemView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x108);
}


void BLDailySignItemView::setGetBtnState(BLDailySignItemView::GetBtnState p1)
{
  undefined4 uVar1;
  int *piVar2;
  code *pcVar3;
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [12];
  
  if (p1 == 1) {
    func_0079e45c(auStack_20,&g_00524f0a + g_0052502c,auStack_24);
    uVar1 = (undefined4)(0 /* ctorZero */);
    func_0079e2bc(auStack_20);
    (**(code **)(**(int **)(((int)this) + 0x124) + 0x30c))(*(int **)(((int)this) + 0x124),uVar1,2);
    func_0079e45c(auStack_20,&g_00524f36 + g_00525030,auStack_24);
    uVar1 = (undefined4)(0 /* ctorZero */);
    func_0079e2bc(auStack_20);
    (**(code **)(**(int **)(((int)this) + 0x124) + 0x30c))(*(int **)(((int)this) + 0x124),uVar1,1);
    (**(code **)(**(int **)(((int)this) + 0x128) + 0x1b4))
              (*(int **)(((int)this) + 0x128),&g_00524f64 + g_00525034);
    (**(code **)(**(int **)(((int)this) + 0x128) + 0x234))
              (*(int **)(((int)this) + 0x128),&g_00524f72 + g_00525038);
    piVar2 = *(int **)(((int)this) + 0x124);
    uVar1 = (undefined4)(1);
    pcVar3 = *(code **)(*piVar2 + 0x234);
  }
  else {
    if (p1 == 0) {
      func_0079e45c(auStack_20,&g_00524e7e + g_00525018,auStack_24);
      uVar1 = (undefined4)(0 /* ctorZero */);
      func_0079e2bc(auStack_20);
      (**(code **)(**(int **)(((int)this) + 0x124) + 0x30c))(*(int **)(((int)this) + 0x124),uVar1,2);
      func_0079e45c(auStack_20,&g_00524eaa + g_0052501c,auStack_24);
      uVar1 = (undefined4)(0 /* ctorZero */);
      func_0079e2bc(auStack_20);
      (**(code **)(**(int **)(((int)this) + 0x124) + 0x30c))(*(int **)(((int)this) + 0x124),uVar1,1);
      (**(code **)(**(int **)(((int)this) + 0x128) + 0x234))
                (*(int **)(((int)this) + 0x128),&g_00524ed6 + g_00525020);
      piVar2 = *(int **)(((int)this) + 0x124);
      pcVar3 = *(code **)(*piVar2 + 0x28c);
      0 /* ctorZero */;
      (*pcVar3)(piVar2,auStack_20);
      piVar2 = *(int **)(((int)this) + 0x124);
      pcVar3 = *(code **)(*piVar2 + 0x234);
    }
    else {
      if (p1 != 2) {
        return;
      }
      func_0079e45c(auStack_20,&g_00524f8a + g_0052503c,auStack_24);
      uVar1 = (undefined4)(0 /* ctorZero */);
      func_0079e2bc(auStack_20);
      (**(code **)(**(int **)(((int)this) + 0x124) + 0x30c))(*(int **)(((int)this) + 0x124),uVar1,2);
      func_0079e45c(auStack_20,&g_00524fb6 + g_00525040,auStack_24);
      uVar1 = (undefined4)(0 /* ctorZero */);
      func_0079e2bc(auStack_20);
      (**(code **)(**(int **)(((int)this) + 0x124) + 0x30c))(*(int **)(((int)this) + 0x124),uVar1,1);
      (**(code **)(**(int **)(((int)this) + 0x128) + 0x1b4))
                (*(int **)(((int)this) + 0x128),&g_00524fe4 + g_00525044);
      (**(code **)(**(int **)(((int)this) + 0x128) + 0x234))
                (*(int **)(((int)this) + 0x128),&g_00524ff2 + g_00525048);
      piVar2 = *(int **)(((int)this) + 0x124);
      pcVar3 = *(code **)(*piVar2 + 0x234);
    }
    uVar1 = (undefined4)(0);
  }
  (*pcVar3)(piVar2,uVar1);
  return;
}

undefined4 BLDailySignItemView::getLabName()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 BLDailySignItemView::getSprIcon()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

undefined4 BLDailySignItemView::getLabValue()
{
  return *(undefined4 *)(((int)this) + 0x11c);
}

undefined4 BLDailySignItemView::getLabDate()
{
  return *(undefined4 *)(((int)this) + 0x120);
}

undefined4 BLDailySignItemView::getBtnget()
{
  return *(undefined4 *)(((int)this) + 0x124);
}

undefined4 BLDailySignItemView::getLabValueText()
{
  return *(undefined4 *)(((int)this) + 0x130);
}

undefined4 BLDailySignItemView::getLabValueUnit()
{
  return *(undefined4 *)(((int)this) + 300);
}

undefined4 BLDailySignItemView::getIconBtn()
{
  return *(undefined4 *)(((int)this) + 0x134);
}

void BLDailySignItemView::onEnter()
{
  ((BLDailySignItemPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLDailySignItemView::onExit()
{
  ((BLDailySignItemPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (2) =====
void BLDailySignItemView::setIconBtnImage(std::string p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

bool BLDailySignItemView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
