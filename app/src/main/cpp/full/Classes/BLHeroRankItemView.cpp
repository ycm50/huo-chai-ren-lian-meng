#include "BLHeroRankItemView.h"
#include "BLHeroRankItemPresenter.h"
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
extern "C" unsigned long UNK_00568248;
extern "C" unsigned long UNK_0056828c;
extern "C" unsigned long UNK_005682d0;
extern "C" unsigned long UNK_005682f8;
extern "C" unsigned long UNK_00568340;
extern "C" unsigned long UNK_0056836e;
extern "C" unsigned long UNK_00568498;
extern "C" unsigned long UNK_0056857a;
extern "C" unsigned long UNK_00568628;
extern "C" unsigned long UNK_00568652;
extern "C" unsigned long UNK_00568712;
extern "C" unsigned long UNK_0056873e;
extern "C" unsigned long UNK_00568804;
extern "C" unsigned long UNK_00568830;
extern "C" unsigned long _UNK_005682bc;
extern "C" unsigned long _UNK_005682c0;
extern "C" unsigned long _UNK_005682d4;
extern "C" unsigned long _UNK_005682fc;
extern "C" unsigned long _UNK_00568398;
extern "C" unsigned long _UNK_0056839c;
extern "C" unsigned long _UNK_00568874;
extern "C" unsigned long _UNK_00568878;
extern "C" unsigned long _UNK_0056887c;
extern "C" unsigned long _UNK_00568880;
extern "C" unsigned long _UNK_00568884;
extern "C" unsigned long _UNK_00568888;
extern "C" unsigned long _UNK_0056888c;
extern "C" unsigned long _UNK_00568890;
extern "C" unsigned long _UNK_00568894;
extern "C" unsigned long _UNK_00568898;
extern "C" unsigned long _UNK_0056889c;
extern "C" unsigned long _UNK_005688a0;
extern "C" unsigned long _UNK_005688a4;
extern "C" unsigned long _UNK_005688a8;
extern "C" unsigned long _UNK_005688ac;
extern "C" unsigned long _UNK_005688b0;
extern "C" unsigned long _UNK_005688b4;
extern "C" unsigned long _UNK_005689b0;
extern "C" unsigned long _UNK_005689b4;
extern "C" unsigned long _UNK_005689b8;
extern "C" unsigned long g_00568248;
extern "C" unsigned long g_0056828c;
extern "C" unsigned long g_005682bc;
extern "C" unsigned long g_005682c0;
extern "C" unsigned long g_005682d0;
extern "C" unsigned long g_005682d4;
extern "C" unsigned long g_005682f8;
extern "C" unsigned long g_005682fc;
extern "C" unsigned long g_00568340;
extern "C" unsigned long g_0056836e;
extern "C" unsigned long g_00568398;
extern "C" unsigned long g_0056839c;
extern "C" unsigned long g_00568498;
extern "C" unsigned long g_0056857a;
extern "C" unsigned long g_00568628;
extern "C" unsigned long g_00568652;
extern "C" unsigned long g_00568712;
extern "C" unsigned long g_0056873e;
extern "C" unsigned long g_00568804;
extern "C" unsigned long g_00568830;
extern "C" unsigned long g_00568874;
extern "C" unsigned long g_00568878;
extern "C" unsigned long g_0056887c;
extern "C" unsigned long g_00568880;
extern "C" unsigned long g_00568884;
extern "C" unsigned long g_00568888;
extern "C" unsigned long g_0056888c;
extern "C" unsigned long g_00568890;
extern "C" unsigned long g_00568894;
extern "C" unsigned long g_00568898;
extern "C" unsigned long g_0056889c;
extern "C" unsigned long g_005688a0;
extern "C" unsigned long g_005688a4;
extern "C" unsigned long g_005688a8;
extern "C" unsigned long g_005688ac;
extern "C" unsigned long g_005688b0;
extern "C" unsigned long g_005688b4;
extern "C" unsigned long g_005689b0;
extern "C" unsigned long g_005689b4;
extern "C" unsigned long g_005689b8;
BLHeroRankItemView::~BLHeroRankItemView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_00568248 + g_005682bc);
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
  func_0079e45c(&uStack_14,&g_0056828c + g_005682c0,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLHeroRankItemView::BLHeroRankItemView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_00568340 + g_00568398);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0056836e + g_0056839c,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * BLHeroRankItemView::create()
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

undefined4 BLHeroRankItemView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x108);
}

undefined4 BLHeroRankItemView::getLblName()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 BLHeroRankItemView::getBtnShowDes()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

undefined4 BLHeroRankItemView::getLblZhanLi()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

undefined4 BLHeroRankItemView::getSprimg_icon()
{
  return *(undefined4 *)(((int)this) + 0x118);
}

undefined4 BLHeroRankItemView::getLblIcon()
{
  return *(undefined4 *)(((int)this) + 0x120);
}

void BLHeroRankItemView::onEnter()
{
  ((BLHeroRankItemPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLHeroRankItemView::onExit()
{
  ((BLHeroRankItemPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
bool BLHeroRankItemView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
