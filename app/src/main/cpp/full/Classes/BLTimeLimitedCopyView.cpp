#include "BLTimeLimitedCopyView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLTimeLimitedCopyPresenter.h"
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
extern "C" long long ghidra_CONCAT13(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_005c8e34;
extern "C" unsigned long UNK_005c8e86;
extern "C" unsigned long UNK_005c8ecc;
extern "C" unsigned long UNK_005c8ef4;
extern "C" unsigned long UNK_005c9096;
extern "C" unsigned long UNK_005c9178;
extern "C" unsigned long UNK_005c925a;
extern "C" unsigned long UNK_005c9284;
extern "C" unsigned long UNK_005c9356;
extern "C" unsigned long UNK_005c9392;
extern "C" unsigned long UNK_005c943c;
extern "C" unsigned long UNK_005c957c;
extern "C" unsigned long UNK_005c95a6;
extern "C" unsigned long UNK_005c9670;
extern "C" unsigned long UNK_005c969a;
extern "C" unsigned long UNK_005c974e;
extern "C" unsigned long UNK_005c9778;
extern "C" unsigned long UNK_005c9832;
extern "C" unsigned long UNK_005c985e;
extern "C" unsigned long UNK_005c9962;
extern "C" unsigned long UNK_005c998e;
extern "C" unsigned long UNK_005c9a42;
extern "C" unsigned long UNK_005c9a6e;
extern "C" unsigned long UNK_005c9b22;
extern "C" unsigned long UNK_005c9b4c;
extern "C" unsigned long UNK_005c9b70;
extern "C" unsigned long UNK_005c9bd6;
extern "C" unsigned long UNK_005c9c16;
extern "C" unsigned long UNK_005c9cc2;
extern "C" unsigned long UNK_005c9d6a;
extern "C" unsigned long UNK_005c9d92;
extern "C" unsigned long UNK_005c9e18;
extern "C" unsigned long UNK_005c9e48;
extern "C" unsigned long UNK_005c9eee;
extern "C" unsigned long UNK_005c9f3c;
extern "C" unsigned long UNK_005c9f64;
extern "C" unsigned long UNK_005c9fea;
extern "C" unsigned long UNK_005ca01a;
extern "C" unsigned long UNK_005ca0ca;
extern "C" unsigned long UNK_005ca0f6;
extern "C" unsigned long UNK_005ca11b;
extern "C" unsigned long UNK_005ca280;
extern "C" unsigned long UNK_005ca2ac;
extern "C" unsigned long UNK_005ca380;
extern "C" unsigned long UNK_005ca382;
extern "C" unsigned long _DAT_005c8fac;
extern "C" unsigned long _DAT_005c8fb0;
extern "C" unsigned long _UNK_005c8eb8;
extern "C" unsigned long _UNK_005c8ebc;
extern "C" unsigned long _UNK_005c8ed0;
extern "C" unsigned long _UNK_005c8ef8;
extern "C" unsigned long _UNK_005c9478;
extern "C" unsigned long _UNK_005c947c;
extern "C" unsigned long _UNK_005c9480;
extern "C" unsigned long _UNK_005c9484;
extern "C" unsigned long _UNK_005c9488;
extern "C" unsigned long _UNK_005c948c;
extern "C" unsigned long _UNK_005c9490;
extern "C" unsigned long _UNK_005c9494;
extern "C" unsigned long _UNK_005c9498;
extern "C" unsigned long _UNK_005c949c;
extern "C" unsigned long _UNK_005c94a0;
extern "C" unsigned long _UNK_005c94a4;
extern "C" unsigned long _UNK_005c94a8;
extern "C" unsigned long _UNK_005c94ac;
extern "C" unsigned long _UNK_005c94b0;
extern "C" unsigned long _UNK_005c94b4;
extern "C" unsigned long _UNK_005c94b8;
extern "C" unsigned long _UNK_005c94bc;
extern "C" unsigned long _UNK_005c98b4;
extern "C" unsigned long _UNK_005c98b8;
extern "C" unsigned long _UNK_005c98bc;
extern "C" unsigned long _UNK_005c98c0;
extern "C" unsigned long _UNK_005c98c4;
extern "C" unsigned long _UNK_005c98c8;
extern "C" unsigned long _UNK_005c98cc;
extern "C" unsigned long _UNK_005c98d0;
extern "C" unsigned long _UNK_005c98d4;
extern "C" unsigned long _UNK_005c98d8;
extern "C" unsigned long _UNK_005c98dc;
extern "C" unsigned long _UNK_005c98e0;
extern "C" unsigned long _UNK_005c98e4;
extern "C" unsigned long _UNK_005c98e8;
extern "C" unsigned long _UNK_005c98ec;
extern "C" unsigned long _UNK_005c98f0;
extern "C" unsigned long _UNK_005c98f4;
extern "C" unsigned long _UNK_005c98f8;
extern "C" unsigned long _UNK_005c98fc;
extern "C" unsigned long _UNK_005c9cf4;
extern "C" unsigned long _UNK_005c9cf8;
extern "C" unsigned long _UNK_005c9cfc;
extern "C" unsigned long _UNK_005c9d00;
extern "C" unsigned long _UNK_005c9d04;
extern "C" unsigned long _UNK_005c9d08;
extern "C" unsigned long _UNK_005c9d0c;
extern "C" unsigned long _UNK_005c9d10;
extern "C" unsigned long _UNK_005c9d14;
extern "C" unsigned long _UNK_005c9d18;
extern "C" unsigned long _UNK_005c9d1c;
extern "C" unsigned long _UNK_005c9d20;
extern "C" unsigned long _UNK_005c9d24;
extern "C" unsigned long _UNK_005c9d28;
extern "C" unsigned long _UNK_005c9d2c;
extern "C" unsigned long _UNK_005c9d30;
extern "C" unsigned long _UNK_005c9d34;
extern "C" unsigned long _UNK_005c9d38;
extern "C" unsigned long _UNK_005c9d3c;
extern "C" unsigned long _UNK_005c9d40;
extern "C" unsigned long _UNK_005ca144;
extern "C" unsigned long _UNK_005ca148;
extern "C" unsigned long _UNK_005ca14c;
extern "C" unsigned long _UNK_005ca150;
extern "C" unsigned long _UNK_005ca154;
extern "C" unsigned long _UNK_005ca158;
extern "C" unsigned long _UNK_005ca15c;
extern "C" unsigned long _UNK_005ca160;
extern "C" unsigned long _UNK_005ca164;
extern "C" unsigned long _UNK_005ca168;
extern "C" unsigned long _UNK_005ca16c;
extern "C" unsigned long _UNK_005ca170;
extern "C" unsigned long _UNK_005ca174;
extern "C" unsigned long _UNK_005ca178;
extern "C" unsigned long _UNK_005ca17c;
extern "C" unsigned long _UNK_005ca180;
extern "C" unsigned long _UNK_005ca184;
extern "C" unsigned long _UNK_005ca188;
extern "C" unsigned long _UNK_005ca18c;
extern "C" unsigned long _UNK_005ca190;
extern "C" unsigned long _UNK_005ca194;
extern "C" unsigned long _UNK_005ca198;
extern "C" unsigned long _UNK_005ca19c;
extern "C" unsigned long _UNK_005ca46c;
extern "C" unsigned long _UNK_005ca470;
extern "C" unsigned long _UNK_005ca474;
extern "C" unsigned long _UNK_005ca478;
extern "C" unsigned long _UNK_005ca47c;
extern "C" unsigned long _UNK_005ca480;
extern "C" unsigned long _UNK_005ca484;
extern "C" unsigned long _UNK_005ca488;
extern "C" unsigned long _UNK_005ca48c;
extern "C" unsigned long _UNK_005ca490;
extern "C" unsigned long _UNK_005ca494;
extern "C" unsigned long g_005c8e34;
extern "C" unsigned long g_005c8e86;
extern "C" unsigned long g_005c8eb8;
extern "C" unsigned long g_005c8ebc;
extern "C" unsigned long g_005c8ecc;
extern "C" unsigned long g_005c8ed0;
extern "C" unsigned long g_005c8ef4;
extern "C" unsigned long g_005c8ef8;
extern "C" unsigned long g_005c8fac;
extern "C" unsigned long g_005c8fb0;
extern "C" unsigned long g_005c9096;
extern "C" unsigned long g_005c9178;
extern "C" unsigned long g_005c925a;
extern "C" unsigned long g_005c9284;
extern "C" unsigned long g_005c9356;
extern "C" unsigned long g_005c9392;
extern "C" unsigned long g_005c943c;
extern "C" unsigned long g_005c9478;
extern "C" unsigned long g_005c947c;
extern "C" unsigned long g_005c9480;
extern "C" unsigned long g_005c9484;
extern "C" unsigned long g_005c9488;
extern "C" unsigned long g_005c948c;
extern "C" unsigned long g_005c9490;
extern "C" unsigned long g_005c9494;
extern "C" unsigned long g_005c9498;
extern "C" unsigned long g_005c949c;
extern "C" unsigned long g_005c94a0;
extern "C" unsigned long g_005c94a4;
extern "C" unsigned long g_005c94a8;
extern "C" unsigned long g_005c94ac;
extern "C" unsigned long g_005c94b0;
extern "C" unsigned long g_005c94b4;
extern "C" unsigned long g_005c94b8;
extern "C" unsigned long g_005c94bc;
extern "C" unsigned long g_005c957c;
extern "C" unsigned long g_005c95a6;
extern "C" unsigned long g_005c9670;
extern "C" unsigned long g_005c969a;
extern "C" unsigned long g_005c974e;
extern "C" unsigned long g_005c9778;
extern "C" unsigned long g_005c9832;
extern "C" unsigned long g_005c985e;
extern "C" unsigned long g_005c98b4;
extern "C" unsigned long g_005c98b8;
extern "C" unsigned long g_005c98bc;
extern "C" unsigned long g_005c98c0;
extern "C" unsigned long g_005c98c4;
extern "C" unsigned long g_005c98c8;
extern "C" unsigned long g_005c98cc;
extern "C" unsigned long g_005c98d0;
extern "C" unsigned long g_005c98d4;
extern "C" unsigned long g_005c98d8;
extern "C" unsigned long g_005c98dc;
extern "C" unsigned long g_005c98e0;
extern "C" unsigned long g_005c98e4;
extern "C" unsigned long g_005c98e8;
extern "C" unsigned long g_005c98ec;
extern "C" unsigned long g_005c98f0;
extern "C" unsigned long g_005c98f4;
extern "C" unsigned long g_005c98f8;
extern "C" unsigned long g_005c98fc;
extern "C" unsigned long g_005c9962;
extern "C" unsigned long g_005c998e;
extern "C" unsigned long g_005c9a42;
extern "C" unsigned long g_005c9a6e;
extern "C" unsigned long g_005c9b22;
extern "C" unsigned long g_005c9b4c;
extern "C" unsigned long g_005c9b70;
extern "C" unsigned long g_005c9bd6;
extern "C" unsigned long g_005c9c16;
extern "C" unsigned long g_005c9cc2;
extern "C" unsigned long g_005c9cf4;
extern "C" unsigned long g_005c9cf8;
extern "C" unsigned long g_005c9cfc;
extern "C" unsigned long g_005c9d00;
extern "C" unsigned long g_005c9d04;
extern "C" unsigned long g_005c9d08;
extern "C" unsigned long g_005c9d0c;
extern "C" unsigned long g_005c9d10;
extern "C" unsigned long g_005c9d14;
extern "C" unsigned long g_005c9d18;
extern "C" unsigned long g_005c9d1c;
extern "C" unsigned long g_005c9d20;
extern "C" unsigned long g_005c9d24;
extern "C" unsigned long g_005c9d28;
extern "C" unsigned long g_005c9d2c;
extern "C" unsigned long g_005c9d30;
extern "C" unsigned long g_005c9d34;
extern "C" unsigned long g_005c9d38;
extern "C" unsigned long g_005c9d3c;
extern "C" unsigned long g_005c9d40;
extern "C" unsigned long g_005c9d6a;
extern "C" unsigned long g_005c9d92;
extern "C" unsigned long g_005c9e18;
extern "C" unsigned long g_005c9e48;
extern "C" unsigned long g_005c9eee;
extern "C" unsigned long g_005c9f3c;
extern "C" unsigned long g_005c9f64;
extern "C" unsigned long g_005c9fea;
extern "C" unsigned long g_005ca01a;
extern "C" unsigned long g_005ca0ca;
extern "C" unsigned long g_005ca0f6;
extern "C" unsigned long g_005ca11b;
extern "C" unsigned long g_005ca144;
extern "C" unsigned long g_005ca148;
extern "C" unsigned long g_005ca14c;
extern "C" unsigned long g_005ca150;
extern "C" unsigned long g_005ca154;
extern "C" unsigned long g_005ca158;
extern "C" unsigned long g_005ca15c;
extern "C" unsigned long g_005ca160;
extern "C" unsigned long g_005ca164;
extern "C" unsigned long g_005ca168;
extern "C" unsigned long g_005ca16c;
extern "C" unsigned long g_005ca170;
extern "C" unsigned long g_005ca174;
extern "C" unsigned long g_005ca178;
extern "C" unsigned long g_005ca17c;
extern "C" unsigned long g_005ca180;
extern "C" unsigned long g_005ca184;
extern "C" unsigned long g_005ca188;
extern "C" unsigned long g_005ca18c;
extern "C" unsigned long g_005ca190;
extern "C" unsigned long g_005ca194;
extern "C" unsigned long g_005ca198;
extern "C" unsigned long g_005ca19c;
extern "C" unsigned long g_005ca280;
extern "C" unsigned long g_005ca2ac;
extern "C" unsigned long g_005ca380;
extern "C" unsigned long g_005ca382;
extern "C" unsigned long g_005ca46c;
extern "C" unsigned long g_005ca470;
extern "C" unsigned long g_005ca474;
extern "C" unsigned long g_005ca478;
extern "C" unsigned long g_005ca47c;
extern "C" unsigned long g_005ca480;
extern "C" unsigned long g_005ca484;
extern "C" unsigned long g_005ca488;
extern "C" unsigned long g_005ca48c;
extern "C" unsigned long g_005ca490;
extern "C" unsigned long g_005ca494;
BLTimeLimitedCopyView::~BLTimeLimitedCopyView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_005c8e34 + g_005c8eb8);
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
  func_0079e45c(&uStack_14,&g_005c8e86 + g_005c8ebc,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}


int * BLTimeLimitedCopyView::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x15c)));
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

undefined4 BLTimeLimitedCopyView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 BLTimeLimitedCopyView::getBackGround()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

void BLTimeLimitedCopyView::onEnter()
{
  ((BLTimeLimitedCopyPresenter *)*(undefined4 *)(((int)this) + 0x10c))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLTimeLimitedCopyView::onExit()
{
  ((BLTimeLimitedCopyPresenter *)*(undefined4 *)(((int)this) + 0x10c))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (2) =====
BLTimeLimitedCopyView::BLTimeLimitedCopyView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = (undefined4)(intptr_t)(*(int *)(g_005c8fac + 0x5c8f3c));
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
  func_0079e45c(&uStack_14,((intptr_t)"BLTimeLimitedCopyView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

bool BLTimeLimitedCopyView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
