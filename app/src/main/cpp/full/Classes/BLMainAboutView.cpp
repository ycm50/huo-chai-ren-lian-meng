#include "BLMainAboutView.h"
#include "GnuString.h"
#include "CCScale9Sprite.h"
#include "CCControlButton.h"
#include "CCLabelTTF.h"
#include "CCDirector.h"
#include "CCGeometry.h"
#include "CCObject.h"
#include "CCLayer.h"
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
extern "C" unsigned long UNK_00630770;
extern "C" unsigned long UNK_006307a2;
extern "C" unsigned long UNK_006307e8;
extern "C" unsigned long UNK_00630810;
extern "C" unsigned long UNK_00630828;
extern "C" unsigned long UNK_00630856;
extern "C" unsigned long UNK_00630902;
extern "C" unsigned long UNK_00630a0e;
extern "C" unsigned long UNK_00630b00;
extern "C" unsigned long UNK_00630b02;
extern "C" unsigned long UNK_00630bde;
extern "C" unsigned long UNK_00630c1e;
extern "C" unsigned long UNK_00630c54;
extern "C" unsigned long _UNK_006307d4;
extern "C" unsigned long _UNK_006307d8;
extern "C" unsigned long _UNK_006307ec;
extern "C" unsigned long _UNK_00630814;
extern "C" unsigned long _UNK_00630880;
extern "C" unsigned long _UNK_00630884;
extern "C" unsigned long _UNK_00630ca8;
extern "C" unsigned long _UNK_00630cac;
extern "C" unsigned long _UNK_00630cb0;
extern "C" unsigned long _UNK_00630cb4;
extern "C" unsigned long _UNK_00630cb8;
extern "C" unsigned long _UNK_00630cbc;
extern "C" unsigned long _UNK_00630cc0;
extern "C" unsigned long _UNK_00630cc4;
extern "C" unsigned long _UNK_00630cc8;
extern "C" unsigned long _UNK_00630ccc;
extern "C" unsigned long _UNK_00630cd0;
extern "C" unsigned long _UNK_00630cd4;
extern "C" unsigned long _UNK_00630cd8;
extern "C" unsigned long _UNK_00630cdc;
extern "C" unsigned long _UNK_00630ce0;
extern "C" unsigned long _UNK_00630ce4;
extern "C" unsigned long _UNK_00630ce8;
extern "C" unsigned long g_00630770;
extern "C" unsigned long g_006307a2;
extern "C" unsigned long g_006307d4;
extern "C" unsigned long g_006307d8;
extern "C" unsigned long g_006307e8;
extern "C" unsigned long g_006307ec;
extern "C" unsigned long g_00630810;
extern "C" unsigned long g_00630814;
extern "C" unsigned long g_00630828;
extern "C" unsigned long g_00630856;
extern "C" unsigned long g_00630880;
extern "C" unsigned long g_00630884;
extern "C" unsigned long g_00630902;
extern "C" unsigned long g_00630a0e;
extern "C" unsigned long g_00630b00;
extern "C" unsigned long g_00630b02;
extern "C" unsigned long g_00630bde;
extern "C" unsigned long g_00630c1e;
extern "C" unsigned long g_00630c54;
extern "C" unsigned long g_00630ca8;
extern "C" unsigned long g_00630cac;
extern "C" unsigned long g_00630cb0;
extern "C" unsigned long g_00630cb4;
extern "C" unsigned long g_00630cb8;
extern "C" unsigned long g_00630cbc;
extern "C" unsigned long g_00630cc0;
extern "C" unsigned long g_00630cc4;
extern "C" unsigned long g_00630cc8;
extern "C" unsigned long g_00630ccc;
extern "C" unsigned long g_00630cd0;
extern "C" unsigned long g_00630cd4;
extern "C" unsigned long g_00630cd8;
extern "C" unsigned long g_00630cdc;
extern "C" unsigned long g_00630ce0;
extern "C" unsigned long g_00630ce4;
extern "C" unsigned long g_00630ce8;
BLMainAboutView::~BLMainAboutView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_00630770 + g_006307d4);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_006307a2 + g_006307d8,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((GnuString)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLMainAboutView::BLMainAboutView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_00630828 + g_00630880);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00630856 + g_00630884,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((GnuString)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * BLMainAboutView::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x108)));
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

// ===== 修复: 补回被误删的函数占位 (2) =====
void BLMainAboutView::close()
{
  undefined4 p4 = 0;

  int *piVar1;
  undefined4 extraout_r2;
  
  piVar1 = (int *)(**(code **)(*(int *)this + 0xe4))();
  (**(code **)(*(int *)(piVar1) + (0xf8)))(piVar1,0x378,extraout_r2,*(code **)(*piVar1 + 0xf8),p4);
  return;
}

bool BLMainAboutView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
