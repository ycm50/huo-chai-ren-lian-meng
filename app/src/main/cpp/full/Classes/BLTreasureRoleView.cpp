#include "BLTreasureRoleView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLTreasureRolePresenter.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <new>   // ghost_fix.js 自动补齐
using namespace cocos2d;
// 兜底声明
extern "C" long long func_006b2480(...);
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
extern "C" unsigned long UNK_006b1474;
extern "C" unsigned long UNK_006b14b8;
extern "C" unsigned long UNK_006b14fc;
extern "C" unsigned long UNK_006b1524;
extern "C" unsigned long UNK_006b188a;
extern "C" unsigned long UNK_006b1926;
extern "C" unsigned long UNK_006b19e4;
extern "C" unsigned long UNK_006b1a1e;
extern "C" unsigned long UNK_006b1b40;
extern "C" unsigned long UNK_006b1b72;
extern "C" unsigned long UNK_006b1d1c;
extern "C" unsigned long UNK_006b1d7c;
extern "C" unsigned long UNK_006b1e80;
extern "C" unsigned long UNK_006b1eac;
extern "C" unsigned long UNK_006b1f6c;
extern "C" unsigned long UNK_006b1f96;
extern "C" unsigned long UNK_006b206a;
extern "C" unsigned long UNK_006b209e;
extern "C" unsigned long UNK_006b214e;
extern "C" unsigned long UNK_006b21c4;
extern "C" unsigned long UNK_006b2270;
extern "C" unsigned long UNK_006b22fc;
extern "C" unsigned long UNK_006b2328;
extern "C" unsigned long UNK_006b23d8;
extern "C" unsigned long _DAT_006b15c4;
extern "C" unsigned long _DAT_006b15c8;
extern "C" unsigned long _UNK_006b14e8;
extern "C" unsigned long _UNK_006b14ec;
extern "C" unsigned long _UNK_006b1500;
extern "C" unsigned long _UNK_006b1528;
extern "C" unsigned long _UNK_006b1ab4;
extern "C" unsigned long _UNK_006b1ab8;
extern "C" unsigned long _UNK_006b1abc;
extern "C" unsigned long _UNK_006b1ac0;
extern "C" unsigned long _UNK_006b1ac4;
extern "C" unsigned long _UNK_006b1ac8;
extern "C" unsigned long _UNK_006b1acc;
extern "C" unsigned long _UNK_006b1ad0;
extern "C" unsigned long _UNK_006b1ad4;
extern "C" unsigned long _UNK_006b1ad8;
extern "C" unsigned long _UNK_006b1adc;
extern "C" unsigned long _UNK_006b1ae0;
extern "C" unsigned long _UNK_006b1ae4;
extern "C" unsigned long _UNK_006b1ae8;
extern "C" unsigned long _UNK_006b1aec;
extern "C" unsigned long _UNK_006b1d34;
extern "C" unsigned long _UNK_006b1d38;
extern "C" unsigned long _UNK_006b1d3c;
extern "C" unsigned long _UNK_006b1d40;
extern "C" unsigned long _UNK_006b1d44;
extern "C" unsigned long _UNK_006b1d48;
extern "C" unsigned long _UNK_006b1d4c;
extern "C" unsigned long _UNK_006b1d50;
extern "C" unsigned long _UNK_006b1d54;
extern "C" unsigned long _UNK_006b1d58;
extern "C" unsigned long _UNK_006b1d5c;
extern "C" unsigned long _UNK_006b2154;
extern "C" unsigned long _UNK_006b2158;
extern "C" unsigned long _UNK_006b215c;
extern "C" unsigned long _UNK_006b2160;
extern "C" unsigned long _UNK_006b2164;
extern "C" unsigned long _UNK_006b2168;
extern "C" unsigned long _UNK_006b216c;
extern "C" unsigned long _UNK_006b2170;
extern "C" unsigned long _UNK_006b2174;
extern "C" unsigned long _UNK_006b2178;
extern "C" unsigned long _UNK_006b217c;
extern "C" unsigned long _UNK_006b2180;
extern "C" unsigned long _UNK_006b2184;
extern "C" unsigned long _UNK_006b2188;
extern "C" unsigned long _UNK_006b218c;
extern "C" unsigned long _UNK_006b2190;
extern "C" unsigned long _UNK_006b2194;
extern "C" unsigned long _UNK_006b2198;
extern "C" unsigned long _UNK_006b2494;
extern "C" unsigned long _UNK_006b2498;
extern "C" unsigned long _UNK_006b249c;
extern "C" unsigned long _UNK_006b24a0;
extern "C" unsigned long _UNK_006b24a4;
extern "C" unsigned long _UNK_006b24a8;
extern "C" unsigned long _UNK_006b24ac;
extern "C" unsigned long _UNK_006b24b0;
extern "C" unsigned long _UNK_006b24b4;
extern "C" unsigned long _UNK_006b24b8;
extern "C" unsigned long _UNK_006b24bc;
extern "C" unsigned long _UNK_006b24c0;
extern "C" unsigned long _UNK_006b24c4;
extern "C" unsigned long g_006b1474;
extern "C" unsigned long g_006b14b8;
extern "C" unsigned long g_006b14e8;
extern "C" unsigned long g_006b14ec;
extern "C" unsigned long g_006b14fc;
extern "C" unsigned long g_006b1500;
extern "C" unsigned long g_006b1524;
extern "C" unsigned long g_006b1528;
extern "C" unsigned long g_006b15c4;
extern "C" unsigned long g_006b15c8;
extern "C" unsigned long g_006b188a;
extern "C" unsigned long g_006b1926;
extern "C" unsigned long g_006b19e4;
extern "C" unsigned long g_006b1a1e;
extern "C" unsigned long g_006b1ab4;
extern "C" unsigned long g_006b1ab8;
extern "C" unsigned long g_006b1abc;
extern "C" unsigned long g_006b1ac0;
extern "C" unsigned long g_006b1ac4;
extern "C" unsigned long g_006b1ac8;
extern "C" unsigned long g_006b1acc;
extern "C" unsigned long g_006b1ad0;
extern "C" unsigned long g_006b1ad4;
extern "C" unsigned long g_006b1ad8;
extern "C" unsigned long g_006b1adc;
extern "C" unsigned long g_006b1ae0;
extern "C" unsigned long g_006b1ae4;
extern "C" unsigned long g_006b1ae8;
extern "C" unsigned long g_006b1aec;
extern "C" unsigned long g_006b1b40;
extern "C" unsigned long g_006b1b72;
extern "C" unsigned long g_006b1d1c;
extern "C" unsigned long g_006b1d34;
extern "C" unsigned long g_006b1d38;
extern "C" unsigned long g_006b1d3c;
extern "C" unsigned long g_006b1d40;
extern "C" unsigned long g_006b1d44;
extern "C" unsigned long g_006b1d48;
extern "C" unsigned long g_006b1d4c;
extern "C" unsigned long g_006b1d50;
extern "C" unsigned long g_006b1d54;
extern "C" unsigned long g_006b1d58;
extern "C" unsigned long g_006b1d5c;
extern "C" unsigned long g_006b1d7c;
extern "C" unsigned long g_006b1e80;
extern "C" unsigned long g_006b1eac;
extern "C" unsigned long g_006b1f6c;
extern "C" unsigned long g_006b1f96;
extern "C" unsigned long g_006b206a;
extern "C" unsigned long g_006b209e;
extern "C" unsigned long g_006b214e;
extern "C" unsigned long g_006b2154;
extern "C" unsigned long g_006b2158;
extern "C" unsigned long g_006b215c;
extern "C" unsigned long g_006b2160;
extern "C" unsigned long g_006b2164;
extern "C" unsigned long g_006b2168;
extern "C" unsigned long g_006b216c;
extern "C" unsigned long g_006b2170;
extern "C" unsigned long g_006b2174;
extern "C" unsigned long g_006b2178;
extern "C" unsigned long g_006b217c;
extern "C" unsigned long g_006b2180;
extern "C" unsigned long g_006b2184;
extern "C" unsigned long g_006b2188;
extern "C" unsigned long g_006b218c;
extern "C" unsigned long g_006b2190;
extern "C" unsigned long g_006b2194;
extern "C" unsigned long g_006b2198;
extern "C" unsigned long g_006b21c4;
extern "C" unsigned long g_006b2270;
extern "C" unsigned long g_006b22fc;
extern "C" unsigned long g_006b2328;
extern "C" unsigned long g_006b23d8;
extern "C" unsigned long g_006b2494;
extern "C" unsigned long g_006b2498;
extern "C" unsigned long g_006b249c;
extern "C" unsigned long g_006b24a0;
extern "C" unsigned long g_006b24a4;
extern "C" unsigned long g_006b24a8;
extern "C" unsigned long g_006b24ac;
extern "C" unsigned long g_006b24b0;
extern "C" unsigned long g_006b24b4;
extern "C" unsigned long g_006b24b8;
extern "C" unsigned long g_006b24bc;
extern "C" unsigned long g_006b24c0;
extern "C" unsigned long g_006b24c4;
BLTreasureRoleView::~BLTreasureRoleView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_006b1474 + g_006b14e8);
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
  func_0079e45c(&uStack_14,&g_006b14b8 + g_006b14ec,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLTreasureRoleView::BLTreasureRoleView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(g_006b15c4 + 0x6b156c);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLTreasureRoleView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * BLTreasureRoleView::create()
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

undefined4 BLTreasureRoleView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x108);
}

void BLTreasureRoleView::onEnter()
{
  ((BLTreasureRolePresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLTreasureRoleView::onExit()
{
  ((BLTreasureRolePresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
bool BLTreasureRoleView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
