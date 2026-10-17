#include "BLHeroRankView.h"
#include "BLHeroRankPresenter.h"
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
extern "C" unsigned long UNK_00568a0c;
extern "C" unsigned long UNK_00568a50;
extern "C" unsigned long UNK_00568a94;
extern "C" unsigned long UNK_00568abc;
extern "C" unsigned long UNK_00568c54;
extern "C" unsigned long UNK_00568cde;
extern "C" unsigned long UNK_00568dc4;
extern "C" unsigned long UNK_00568ea6;
extern "C" unsigned long UNK_00568f4a;
extern "C" unsigned long UNK_00568f60;
extern "C" unsigned long UNK_00568fd2;
extern "C" unsigned long UNK_00569006;
extern "C" unsigned long UNK_0056911a;
extern "C" unsigned long UNK_00569146;
extern "C" unsigned long _DAT_00568b5c;
extern "C" unsigned long _DAT_00568b60;
extern "C" unsigned long _UNK_00568a80;
extern "C" unsigned long _UNK_00568a84;
extern "C" unsigned long _UNK_00568a98;
extern "C" unsigned long _UNK_00568ac0;
extern "C" unsigned long _UNK_00569034;
extern "C" unsigned long _UNK_00569038;
extern "C" unsigned long _UNK_0056903c;
extern "C" unsigned long _UNK_00569040;
extern "C" unsigned long _UNK_00569044;
extern "C" unsigned long _UNK_00569048;
extern "C" unsigned long _UNK_0056904c;
extern "C" unsigned long _UNK_00569050;
extern "C" unsigned long _UNK_00569054;
extern "C" unsigned long _UNK_00569058;
extern "C" unsigned long _UNK_0056905c;
extern "C" unsigned long _UNK_00569060;
extern "C" unsigned long _UNK_00569064;
extern "C" unsigned long _UNK_00569068;
extern "C" unsigned long _UNK_0056906c;
extern "C" unsigned long _UNK_00569070;
extern "C" unsigned long _UNK_00569074;
extern "C" unsigned long _UNK_00569078;
extern "C" unsigned long _UNK_00569394;
extern "C" unsigned long _UNK_00569398;
extern "C" unsigned long _UNK_0056939c;
extern "C" unsigned long _UNK_005693a0;
extern "C" unsigned long _UNK_005693a4;
extern "C" unsigned long _UNK_005693a8;
extern "C" unsigned long _UNK_005693ac;
extern "C" unsigned long _UNK_005693b0;
extern "C" unsigned long _UNK_005693b4;
extern "C" unsigned long _UNK_005693b8;
extern "C" unsigned long _UNK_005693bc;
extern "C" unsigned long _UNK_005693c0;
extern "C" unsigned long g_00568a0c;
extern "C" unsigned long g_00568a50;
extern "C" unsigned long g_00568a80;
extern "C" unsigned long g_00568a84;
extern "C" unsigned long g_00568a94;
extern "C" unsigned long g_00568a98;
extern "C" unsigned long g_00568abc;
extern "C" unsigned long g_00568ac0;
extern "C" unsigned long g_00568b5c;
extern "C" unsigned long g_00568b60;
extern "C" unsigned long g_00568c54;
extern "C" unsigned long g_00568cde;
extern "C" unsigned long g_00568dc4;
extern "C" unsigned long g_00568ea6;
extern "C" unsigned long g_00568f4a;
extern "C" unsigned long g_00568f60;
extern "C" unsigned long g_00568fd2;
extern "C" unsigned long g_00569006;
extern "C" unsigned long g_00569034;
extern "C" unsigned long g_00569038;
extern "C" unsigned long g_0056903c;
extern "C" unsigned long g_00569040;
extern "C" unsigned long g_00569044;
extern "C" unsigned long g_00569048;
extern "C" unsigned long g_0056904c;
extern "C" unsigned long g_00569050;
extern "C" unsigned long g_00569054;
extern "C" unsigned long g_00569058;
extern "C" unsigned long g_0056905c;
extern "C" unsigned long g_00569060;
extern "C" unsigned long g_00569064;
extern "C" unsigned long g_00569068;
extern "C" unsigned long g_0056906c;
extern "C" unsigned long g_00569070;
extern "C" unsigned long g_00569074;
extern "C" unsigned long g_00569078;
extern "C" unsigned long g_0056911a;
extern "C" unsigned long g_00569146;
extern "C" unsigned long g_00569394;
extern "C" unsigned long g_00569398;
extern "C" unsigned long g_0056939c;
extern "C" unsigned long g_005693a0;
extern "C" unsigned long g_005693a4;
extern "C" unsigned long g_005693a8;
extern "C" unsigned long g_005693ac;
extern "C" unsigned long g_005693b0;
extern "C" unsigned long g_005693b4;
extern "C" unsigned long g_005693b8;
extern "C" unsigned long g_005693bc;
extern "C" unsigned long g_005693c0;
BLHeroRankView::~BLHeroRankView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_00568a0c + g_00568a80);
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
  func_0079e45c(&uStack_14,&g_00568a50 + g_00568a84,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLHeroRankView::BLHeroRankView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(g_00568b5c + 0x568b04);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLHeroRankView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * BLHeroRankView::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x120)));
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

undefined4 BLHeroRankView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x108);
}

undefined4 BLHeroRankView::getBackGround()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 BLHeroRankView::getLabTitle()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

undefined4 BLHeroRankView::getBtnClose()
{
  return *(undefined4 *)(((int)this) + 0x118);
}

undefined4 BLHeroRankView::getTableViewTableView()
{
  return *(undefined4 *)(((int)this) + 0x11c);
}

void BLHeroRankView::onExit()
{
  ((BLHeroRankPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

void BLHeroRankView::onEnter()
{
  ((BLHeroRankPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
bool BLHeroRankView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
