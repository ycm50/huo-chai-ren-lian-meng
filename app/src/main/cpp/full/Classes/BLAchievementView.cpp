#include "BLAchievementView.h"
#include "BLAchievementPresenter.h"
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
extern "C" unsigned long UNK_004ef6ac;
extern "C" unsigned long UNK_004ef6fe;
extern "C" unsigned long UNK_004ef744;
extern "C" unsigned long UNK_004ef76c;
extern "C" unsigned long UNK_004ef924;
extern "C" unsigned long UNK_004efa08;
extern "C" unsigned long UNK_004efaf6;
extern "C" unsigned long UNK_004efb20;
extern "C" unsigned long UNK_004efbe6;
extern "C" unsigned long UNK_004efc16;
extern "C" unsigned long _DAT_004ef824;
extern "C" unsigned long _DAT_004ef828;
extern "C" unsigned long _UNK_004ef730;
extern "C" unsigned long _UNK_004ef734;
extern "C" unsigned long _UNK_004ef748;
extern "C" unsigned long _UNK_004ef770;
extern "C" unsigned long _UNK_004efd04;
extern "C" unsigned long _UNK_004efd08;
extern "C" unsigned long _UNK_004efd0c;
extern "C" unsigned long _UNK_004efd10;
extern "C" unsigned long _UNK_004efd14;
extern "C" unsigned long _UNK_004efd18;
extern "C" unsigned long _UNK_004efd1c;
extern "C" unsigned long _UNK_004efd20;
extern "C" unsigned long _UNK_004efd24;
extern "C" unsigned long _UNK_004efd28;
extern "C" unsigned long _UNK_004efd2c;
extern "C" unsigned long _UNK_004efd30;
extern "C" unsigned long _UNK_004efd34;
extern "C" unsigned long _UNK_004efd38;
extern "C" unsigned long _UNK_004efd3c;
extern "C" unsigned long _UNK_004efd40;
extern "C" unsigned long _UNK_004efe9c;
extern "C" unsigned long _UNK_004efea0;
extern "C" unsigned long _UNK_004efea4;
extern "C" unsigned long _UNK_004efea8;
extern "C" unsigned long _UNK_004efeac;
extern "C" unsigned long _UNK_004efeb0;
extern "C" unsigned long g_004ef6ac;
extern "C" unsigned long g_004ef6fe;
extern "C" unsigned long g_004ef730;
extern "C" unsigned long g_004ef734;
extern "C" unsigned long g_004ef744;
extern "C" unsigned long g_004ef748;
extern "C" unsigned long g_004ef76c;
extern "C" unsigned long g_004ef770;
extern "C" unsigned long g_004ef824;
extern "C" unsigned long g_004ef828;
extern "C" unsigned long g_004ef924;
extern "C" unsigned long g_004efa08;
extern "C" unsigned long g_004efaf6;
extern "C" unsigned long g_004efb20;
extern "C" unsigned long g_004efbe6;
extern "C" unsigned long g_004efc16;
extern "C" unsigned long g_004efd04;
extern "C" unsigned long g_004efd08;
extern "C" unsigned long g_004efd0c;
extern "C" unsigned long g_004efd10;
extern "C" unsigned long g_004efd14;
extern "C" unsigned long g_004efd18;
extern "C" unsigned long g_004efd1c;
extern "C" unsigned long g_004efd20;
extern "C" unsigned long g_004efd24;
extern "C" unsigned long g_004efd28;
extern "C" unsigned long g_004efd2c;
extern "C" unsigned long g_004efd30;
extern "C" unsigned long g_004efd34;
extern "C" unsigned long g_004efd38;
extern "C" unsigned long g_004efd3c;
extern "C" unsigned long g_004efd40;
extern "C" unsigned long g_004efe9c;
extern "C" unsigned long g_004efea0;
extern "C" unsigned long g_004efea4;
extern "C" unsigned long g_004efea8;
extern "C" unsigned long g_004efeac;
extern "C" unsigned long g_004efeb0;
BLAchievementView::~BLAchievementView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_004ef6ac + g_004ef730);
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
  func_0079e45c(&uStack_14,&g_004ef6fe + g_004ef734,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}


int * BLAchievementView::create()
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

undefined4 BLAchievementView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 BLAchievementView::getBackGround()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

undefined4 BLAchievementView::getTabBg()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

undefined4 BLAchievementView::getLabTitle()
{
  return *(undefined4 *)(((int)this) + 0x118);
}

undefined4 BLAchievementView::getBtnClose()
{
  return *(undefined4 *)(((int)this) + 0x11c);
}

undefined4 BLAchievementView::getTableViewTableView()
{
  return *(undefined4 *)(((int)this) + 0x120);
}

void BLAchievementView::onEnter()
{
  ((BLAchievementPresenter *)*(undefined4 *)(((int)this) + 0x10c))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLAchievementView::onExit()
{
  ((BLAchievementPresenter *)*(undefined4 *)(((int)this) + 0x10c))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (2) =====
BLAchievementView::BLAchievementView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = (undefined4)(intptr_t)(*(int *)(g_004ef824 + 0x4ef7b4));
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
  func_0079e45c(&uStack_14,((intptr_t)"BLAchievementView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

bool BLAchievementView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
