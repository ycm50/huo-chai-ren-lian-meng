#include "BLEquipListView.h"
#include "BLEquipListPresenter.h"
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
extern "C" unsigned long UNK_00679ed4;
extern "C" unsigned long UNK_00679f18;
extern "C" unsigned long UNK_00679f5c;
extern "C" unsigned long UNK_00679f84;
extern "C" unsigned long UNK_00679f9c;
extern "C" unsigned long UNK_00679fca;
extern "C" unsigned long UNK_0067a0c0;
extern "C" unsigned long UNK_0067a1a2;
extern "C" unsigned long UNK_0067a284;
extern "C" unsigned long UNK_0067a2b0;
extern "C" unsigned long UNK_0067a456;
extern "C" unsigned long UNK_0067a548;
extern "C" unsigned long UNK_0067a610;
extern "C" unsigned long UNK_0067a640;
extern "C" unsigned long _UNK_00679f48;
extern "C" unsigned long _UNK_00679f4c;
extern "C" unsigned long _UNK_00679f60;
extern "C" unsigned long _UNK_00679f88;
extern "C" unsigned long _UNK_00679ff4;
extern "C" unsigned long _UNK_00679ff8;
extern "C" unsigned long _UNK_0067a4a0;
extern "C" unsigned long _UNK_0067a4a4;
extern "C" unsigned long _UNK_0067a4a8;
extern "C" unsigned long _UNK_0067a4ac;
extern "C" unsigned long _UNK_0067a4b0;
extern "C" unsigned long _UNK_0067a4b4;
extern "C" unsigned long _UNK_0067a4b8;
extern "C" unsigned long _UNK_0067a4bc;
extern "C" unsigned long _UNK_0067a4c0;
extern "C" unsigned long _UNK_0067a4c4;
extern "C" unsigned long _UNK_0067a4c8;
extern "C" unsigned long _UNK_0067a4cc;
extern "C" unsigned long _UNK_0067a4d0;
extern "C" unsigned long _UNK_0067a4d4;
extern "C" unsigned long _UNK_0067a4d8;
extern "C" unsigned long _UNK_0067a4dc;
extern "C" unsigned long _UNK_0067a4e0;
extern "C" unsigned long _UNK_0067a798;
extern "C" unsigned long _UNK_0067a79c;
extern "C" unsigned long _UNK_0067a7a0;
extern "C" unsigned long _UNK_0067a7a4;
extern "C" unsigned long _UNK_0067a7a8;
extern "C" unsigned long _UNK_0067a7ac;
extern "C" unsigned long _UNK_0067a7b0;
extern "C" unsigned long _UNK_0067a7b4;
extern "C" unsigned long _UNK_0067a7b8;
extern "C" unsigned long _UNK_0067a7bc;
extern "C" unsigned long _UNK_0067a7c0;
extern "C" unsigned long _UNK_0067a7c4;
extern "C" unsigned long g_00679ed4;
extern "C" unsigned long g_00679f18;
extern "C" unsigned long g_00679f48;
extern "C" unsigned long g_00679f4c;
extern "C" unsigned long g_00679f5c;
extern "C" unsigned long g_00679f60;
extern "C" unsigned long g_00679f84;
extern "C" unsigned long g_00679f88;
extern "C" unsigned long g_00679f9c;
extern "C" unsigned long g_00679fca;
extern "C" unsigned long g_00679ff4;
extern "C" unsigned long g_00679ff8;
extern "C" unsigned long g_0067a0c0;
extern "C" unsigned long g_0067a1a2;
extern "C" unsigned long g_0067a284;
extern "C" unsigned long g_0067a2b0;
extern "C" unsigned long g_0067a456;
extern "C" unsigned long g_0067a4a0;
extern "C" unsigned long g_0067a4a4;
extern "C" unsigned long g_0067a4a8;
extern "C" unsigned long g_0067a4ac;
extern "C" unsigned long g_0067a4b0;
extern "C" unsigned long g_0067a4b4;
extern "C" unsigned long g_0067a4b8;
extern "C" unsigned long g_0067a4bc;
extern "C" unsigned long g_0067a4c0;
extern "C" unsigned long g_0067a4c4;
extern "C" unsigned long g_0067a4c8;
extern "C" unsigned long g_0067a4cc;
extern "C" unsigned long g_0067a4d0;
extern "C" unsigned long g_0067a4d4;
extern "C" unsigned long g_0067a4d8;
extern "C" unsigned long g_0067a4dc;
extern "C" unsigned long g_0067a4e0;
extern "C" unsigned long g_0067a548;
extern "C" unsigned long g_0067a610;
extern "C" unsigned long g_0067a640;
extern "C" unsigned long g_0067a798;
extern "C" unsigned long g_0067a79c;
extern "C" unsigned long g_0067a7a0;
extern "C" unsigned long g_0067a7a4;
extern "C" unsigned long g_0067a7a8;
extern "C" unsigned long g_0067a7ac;
extern "C" unsigned long g_0067a7b0;
extern "C" unsigned long g_0067a7b4;
extern "C" unsigned long g_0067a7b8;
extern "C" unsigned long g_0067a7bc;
extern "C" unsigned long g_0067a7c0;
extern "C" unsigned long g_0067a7c4;
BLEquipListView::~BLEquipListView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_00679ed4 + g_00679f48);
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
  func_0079e45c(&uStack_14,&g_00679f18 + g_00679f4c,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLEquipListView::BLEquipListView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_00679f9c + g_00679ff4);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00679fca + g_00679ff8,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * BLEquipListView::create()
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

undefined4 BLEquipListView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x108);
}

undefined4 BLEquipListView::SspBG()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 BLEquipListView::getLabTitle()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

undefined4 BLEquipListView::getTableViewtbvEquip()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

undefined4 BLEquipListView::getSprUp()
{
  return *(undefined4 *)(((int)this) + 0x118);
}

undefined4 BLEquipListView::getSprDown()
{
  return *(undefined4 *)(((int)this) + 0x11c);
}

undefined4 BLEquipListView::getBtnClose()
{
  return *(undefined4 *)(((int)this) + 0x120);
}

void BLEquipListView::onEnter()
{
  ((BLEquipListPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLEquipListView::onExit()
{
  ((BLEquipListPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
bool BLEquipListView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
