#include "BLEquipItemView.h"
#include "BLEquipItemPresenter.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLPageControl.h"
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
extern "C" unsigned long UNK_00677fc4;
extern "C" unsigned long UNK_00678016;
extern "C" unsigned long UNK_0067805c;
extern "C" unsigned long UNK_00678084;
extern "C" unsigned long UNK_006780cc;
extern "C" unsigned long UNK_00678108;
extern "C" unsigned long UNK_00678248;
extern "C" unsigned long UNK_006782e0;
extern "C" unsigned long UNK_00678388;
extern "C" unsigned long UNK_006783b6;
extern "C" unsigned long UNK_00678470;
extern "C" unsigned long UNK_00678516;
extern "C" unsigned long UNK_00678604;
extern "C" unsigned long UNK_00678666;
extern "C" unsigned long UNK_006787b6;
extern "C" unsigned long UNK_006787ea;
extern "C" unsigned long UNK_00678830;
extern "C" unsigned long UNK_0067885a;
extern "C" unsigned long _UNK_00678048;
extern "C" unsigned long _UNK_0067804c;
extern "C" unsigned long _UNK_00678060;
extern "C" unsigned long _UNK_00678088;
extern "C" unsigned long _UNK_0067813c;
extern "C" unsigned long _UNK_00678140;
extern "C" unsigned long _UNK_00678628;
extern "C" unsigned long _UNK_0067862c;
extern "C" unsigned long _UNK_00678630;
extern "C" unsigned long _UNK_00678634;
extern "C" unsigned long _UNK_00678638;
extern "C" unsigned long _UNK_0067863c;
extern "C" unsigned long _UNK_00678640;
extern "C" unsigned long _UNK_00678644;
extern "C" unsigned long _UNK_00678648;
extern "C" unsigned long _UNK_0067864c;
extern "C" unsigned long _UNK_00678650;
extern "C" unsigned long _UNK_00678654;
extern "C" unsigned long _UNK_00678658;
extern "C" unsigned long _UNK_006789b8;
extern "C" unsigned long _UNK_006789bc;
extern "C" unsigned long _UNK_006789c0;
extern "C" unsigned long _UNK_006789c4;
extern "C" unsigned long _UNK_006789c8;
extern "C" unsigned long _UNK_006789cc;
extern "C" unsigned long _UNK_006789d0;
extern "C" unsigned long _UNK_006789d4;
extern "C" unsigned long _UNK_006789d8;
extern "C" unsigned long _UNK_006789dc;
extern "C" unsigned long _UNK_006789e0;
extern "C" unsigned long _UNK_006789e4;
extern "C" unsigned long _UNK_006789e8;
extern "C" unsigned long g_00677fc4;
extern "C" unsigned long g_00678016;
extern "C" unsigned long g_00678048;
extern "C" unsigned long g_0067804c;
extern "C" unsigned long g_0067805c;
extern "C" unsigned long g_00678060;
extern "C" unsigned long g_00678084;
extern "C" unsigned long g_00678088;
extern "C" unsigned long g_006780cc;
extern "C" unsigned long g_00678108;
extern "C" unsigned long g_0067813c;
extern "C" unsigned long g_00678140;
extern "C" unsigned long g_00678248;
extern "C" unsigned long g_006782e0;
extern "C" unsigned long g_00678388;
extern "C" unsigned long g_006783b6;
extern "C" unsigned long g_00678470;
extern "C" unsigned long g_00678516;
extern "C" unsigned long g_00678604;
extern "C" unsigned long g_00678628;
extern "C" unsigned long g_0067862c;
extern "C" unsigned long g_00678630;
extern "C" unsigned long g_00678634;
extern "C" unsigned long g_00678638;
extern "C" unsigned long g_0067863c;
extern "C" unsigned long g_00678640;
extern "C" unsigned long g_00678644;
extern "C" unsigned long g_00678648;
extern "C" unsigned long g_0067864c;
extern "C" unsigned long g_00678650;
extern "C" unsigned long g_00678654;
extern "C" unsigned long g_00678658;
extern "C" unsigned long g_00678666;
extern "C" unsigned long g_006787b6;
extern "C" unsigned long g_006787ea;
extern "C" unsigned long g_00678830;
extern "C" unsigned long g_0067885a;
extern "C" unsigned long g_006789b8;
extern "C" unsigned long g_006789bc;
extern "C" unsigned long g_006789c0;
extern "C" unsigned long g_006789c4;
extern "C" unsigned long g_006789c8;
extern "C" unsigned long g_006789cc;
extern "C" unsigned long g_006789d0;
extern "C" unsigned long g_006789d4;
extern "C" unsigned long g_006789d8;
extern "C" unsigned long g_006789dc;
extern "C" unsigned long g_006789e0;
extern "C" unsigned long g_006789e4;
extern "C" unsigned long g_006789e8;
BLEquipItemView::~BLEquipItemView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_00677fc4 + g_00678048);
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
  func_0079e45c(&uStack_14,&g_00678016 + g_0067804c,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}


int * BLEquipItemView::create()
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

undefined4 BLEquipItemView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 BLEquipItemView::getSprItem()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

undefined4 BLEquipItemView::getLabCanEquip()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

undefined4 BLEquipItemView::getSprAdd()
{
  return *(undefined4 *)(((int)this) + 0x118);
}

undefined4 BLEquipItemView::getssp_UpgraceTitleBG()
{
  return *(undefined4 *)(((int)this) + 0x11c);
}

undefined4 BLEquipItemView::getLabUpgrace()
{
  return *(undefined4 *)(((int)this) + 0x120);
}

undefined4 BLEquipItemView::getPageControlStars()
{
  return *(undefined4 *)(((int)this) + 0x124);
}

undefined4 BLEquipItemView::getLabStar()
{
  return *(undefined4 *)(((int)this) + 0x128);
}

void BLEquipItemView::onEnter()
{
  ((BLEquipItemPresenter *)*(undefined4 *)(((int)this) + 0x10c))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLEquipItemView::onExit()
{
  ((BLEquipItemPresenter *)*(undefined4 *)(((int)this) + 0x10c))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (2) =====
BLEquipItemView::BLEquipItemView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = (undefined4)(intptr_t)(*(int *)((unsigned char *)((char *)&g_006780cc + (intptr_t)(g_0067813c))));
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
  func_0079e45c(&uStack_14,(unsigned char *)((char *)&g_00678108 + (intptr_t)(g_00678140)),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

bool BLEquipItemView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
