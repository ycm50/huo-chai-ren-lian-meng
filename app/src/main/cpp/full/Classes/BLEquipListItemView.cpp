#include "BLEquipListItemView.h"
#include "BLEquipListItemPresenter.h"
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
extern "C" unsigned long UNK_00678a3c;
extern "C" unsigned long UNK_00678a80;
extern "C" unsigned long UNK_00678ac4;
extern "C" unsigned long UNK_00678aec;
extern "C" unsigned long UNK_00678b04;
extern "C" unsigned long UNK_00678b32;
extern "C" unsigned long UNK_00678c6e;
extern "C" unsigned long UNK_00678d0c;
extern "C" unsigned long UNK_00678dbc;
extern "C" unsigned long UNK_00678de6;
extern "C" unsigned long UNK_00678ea0;
extern "C" unsigned long UNK_00678ed6;
extern "C" unsigned long UNK_00678f96;
extern "C" unsigned long UNK_00678fc2;
extern "C" unsigned long UNK_006790be;
extern "C" unsigned long UNK_006790ea;
extern "C" unsigned long UNK_006791aa;
extern "C" unsigned long UNK_006791d6;
extern "C" unsigned long UNK_00679286;
extern "C" unsigned long UNK_00679374;
extern "C" unsigned long UNK_0067945a;
extern "C" unsigned long UNK_0067959c;
extern "C" unsigned long UNK_006795c6;
extern "C" unsigned long UNK_0067969c;
extern "C" unsigned long UNK_006796c6;
extern "C" unsigned long UNK_00679788;
extern "C" unsigned long UNK_006797b2;
extern "C" unsigned long UNK_00679942;
extern "C" unsigned long UNK_00679976;
extern "C" unsigned long UNK_006799be;
extern "C" unsigned long UNK_006799e8;
extern "C" unsigned long UNK_00679aa0;
extern "C" unsigned long UNK_00679b92;
extern "C" unsigned long UNK_00679bbe;
extern "C" unsigned long UNK_00679c86;
extern "C" unsigned long UNK_00679cb0;
extern "C" unsigned long _UNK_00678ab0;
extern "C" unsigned long _UNK_00678ab4;
extern "C" unsigned long _UNK_00678ac8;
extern "C" unsigned long _UNK_00678af0;
extern "C" unsigned long _UNK_00678b5c;
extern "C" unsigned long _UNK_00678b60;
extern "C" unsigned long _UNK_00679050;
extern "C" unsigned long _UNK_00679054;
extern "C" unsigned long _UNK_00679058;
extern "C" unsigned long _UNK_0067905c;
extern "C" unsigned long _UNK_00679060;
extern "C" unsigned long _UNK_00679064;
extern "C" unsigned long _UNK_00679068;
extern "C" unsigned long _UNK_0067906c;
extern "C" unsigned long _UNK_00679070;
extern "C" unsigned long _UNK_00679074;
extern "C" unsigned long _UNK_00679078;
extern "C" unsigned long _UNK_0067907c;
extern "C" unsigned long _UNK_00679080;
extern "C" unsigned long _UNK_00679084;
extern "C" unsigned long _UNK_00679088;
extern "C" unsigned long _UNK_006794a0;
extern "C" unsigned long _UNK_006794a4;
extern "C" unsigned long _UNK_006794a8;
extern "C" unsigned long _UNK_006794ac;
extern "C" unsigned long _UNK_006794b0;
extern "C" unsigned long _UNK_006794b4;
extern "C" unsigned long _UNK_006794b8;
extern "C" unsigned long _UNK_006794bc;
extern "C" unsigned long _UNK_006794c0;
extern "C" unsigned long _UNK_006794c4;
extern "C" unsigned long _UNK_006794c8;
extern "C" unsigned long _UNK_006794cc;
extern "C" unsigned long _UNK_006794d0;
extern "C" unsigned long _UNK_006794d4;
extern "C" unsigned long _UNK_006794d8;
extern "C" unsigned long _UNK_006798cc;
extern "C" unsigned long _UNK_006798d0;
extern "C" unsigned long _UNK_006798d4;
extern "C" unsigned long _UNK_006798d8;
extern "C" unsigned long _UNK_006798dc;
extern "C" unsigned long _UNK_006798e0;
extern "C" unsigned long _UNK_006798e4;
extern "C" unsigned long _UNK_006798e8;
extern "C" unsigned long _UNK_006798ec;
extern "C" unsigned long _UNK_006798f0;
extern "C" unsigned long _UNK_006798f4;
extern "C" unsigned long _UNK_006798f8;
extern "C" unsigned long _UNK_006798fc;
extern "C" unsigned long _UNK_00679900;
extern "C" unsigned long _UNK_0067995c;
extern "C" unsigned long _UNK_00679d54;
extern "C" unsigned long _UNK_00679d58;
extern "C" unsigned long _UNK_00679d5c;
extern "C" unsigned long _UNK_00679d60;
extern "C" unsigned long _UNK_00679d64;
extern "C" unsigned long _UNK_00679d68;
extern "C" unsigned long _UNK_00679d6c;
extern "C" unsigned long _UNK_00679d70;
extern "C" unsigned long _UNK_00679d74;
extern "C" unsigned long _UNK_00679d78;
extern "C" unsigned long _UNK_00679d7c;
extern "C" unsigned long _UNK_00679d80;
extern "C" unsigned long _UNK_00679d84;
extern "C" unsigned long _UNK_00679d88;
extern "C" unsigned long _UNK_00679d8c;
extern "C" unsigned long _UNK_00679d90;
extern "C" unsigned long _UNK_00679d94;
extern "C" unsigned long _UNK_00679e7c;
extern "C" unsigned long _UNK_00679e80;
extern "C" unsigned long g_00678a3c;
extern "C" unsigned long g_00678a80;
extern "C" unsigned long g_00678ab0;
extern "C" unsigned long g_00678ab4;
extern "C" unsigned long g_00678ac4;
extern "C" unsigned long g_00678ac8;
extern "C" unsigned long g_00678aec;
extern "C" unsigned long g_00678af0;
extern "C" unsigned long g_00678b04;
extern "C" unsigned long g_00678b32;
extern "C" unsigned long g_00678b5c;
extern "C" unsigned long g_00678b60;
extern "C" unsigned long g_00678c6e;
extern "C" unsigned long g_00678d0c;
extern "C" unsigned long g_00678dbc;
extern "C" unsigned long g_00678de6;
extern "C" unsigned long g_00678ea0;
extern "C" unsigned long g_00678ed6;
extern "C" unsigned long g_00678f96;
extern "C" unsigned long g_00678fc2;
extern "C" unsigned long g_00679050;
extern "C" unsigned long g_00679054;
extern "C" unsigned long g_00679058;
extern "C" unsigned long g_0067905c;
extern "C" unsigned long g_00679060;
extern "C" unsigned long g_00679064;
extern "C" unsigned long g_00679068;
extern "C" unsigned long g_0067906c;
extern "C" unsigned long g_00679070;
extern "C" unsigned long g_00679074;
extern "C" unsigned long g_00679078;
extern "C" unsigned long g_0067907c;
extern "C" unsigned long g_00679080;
extern "C" unsigned long g_00679084;
extern "C" unsigned long g_00679088;
extern "C" unsigned long g_006790be;
extern "C" unsigned long g_006790ea;
extern "C" unsigned long g_006791aa;
extern "C" unsigned long g_006791d6;
extern "C" unsigned long g_00679286;
extern "C" unsigned long g_00679374;
extern "C" unsigned long g_0067945a;
extern "C" unsigned long g_006794a0;
extern "C" unsigned long g_006794a4;
extern "C" unsigned long g_006794a8;
extern "C" unsigned long g_006794ac;
extern "C" unsigned long g_006794b0;
extern "C" unsigned long g_006794b4;
extern "C" unsigned long g_006794b8;
extern "C" unsigned long g_006794bc;
extern "C" unsigned long g_006794c0;
extern "C" unsigned long g_006794c4;
extern "C" unsigned long g_006794c8;
extern "C" unsigned long g_006794cc;
extern "C" unsigned long g_006794d0;
extern "C" unsigned long g_006794d4;
extern "C" unsigned long g_006794d8;
extern "C" unsigned long g_0067959c;
extern "C" unsigned long g_006795c6;
extern "C" unsigned long g_0067969c;
extern "C" unsigned long g_006796c6;
extern "C" unsigned long g_00679788;
extern "C" unsigned long g_006797b2;
extern "C" unsigned long g_006798cc;
extern "C" unsigned long g_006798d0;
extern "C" unsigned long g_006798d4;
extern "C" unsigned long g_006798d8;
extern "C" unsigned long g_006798dc;
extern "C" unsigned long g_006798e0;
extern "C" unsigned long g_006798e4;
extern "C" unsigned long g_006798e8;
extern "C" unsigned long g_006798ec;
extern "C" unsigned long g_006798f0;
extern "C" unsigned long g_006798f4;
extern "C" unsigned long g_006798f8;
extern "C" unsigned long g_006798fc;
extern "C" unsigned long g_00679900;
extern "C" unsigned long g_00679942;
extern "C" unsigned long g_0067995c;
extern "C" unsigned long g_00679976;
extern "C" unsigned long g_006799be;
extern "C" unsigned long g_006799e8;
extern "C" unsigned long g_00679aa0;
extern "C" unsigned long g_00679b92;
extern "C" unsigned long g_00679bbe;
extern "C" unsigned long g_00679c86;
extern "C" unsigned long g_00679cb0;
extern "C" unsigned long g_00679d54;
extern "C" unsigned long g_00679d58;
extern "C" unsigned long g_00679d5c;
extern "C" unsigned long g_00679d60;
extern "C" unsigned long g_00679d64;
extern "C" unsigned long g_00679d68;
extern "C" unsigned long g_00679d6c;
extern "C" unsigned long g_00679d70;
extern "C" unsigned long g_00679d74;
extern "C" unsigned long g_00679d78;
extern "C" unsigned long g_00679d7c;
extern "C" unsigned long g_00679d80;
extern "C" unsigned long g_00679d84;
extern "C" unsigned long g_00679d88;
extern "C" unsigned long g_00679d8c;
extern "C" unsigned long g_00679d90;
extern "C" unsigned long g_00679d94;
extern "C" unsigned long g_00679e7c;
extern "C" unsigned long g_00679e80;
BLEquipListItemView::~BLEquipListItemView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_00678a3c + g_00678ab0);
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
  func_0079e45c(&uStack_14,&g_00678a80 + g_00678ab4,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLEquipListItemView::BLEquipListItemView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_00678b04 + g_00678b5c);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00678b32 + g_00678b60,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * BLEquipListItemView::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x150)));
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

undefined4 BLEquipListItemView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x108);
}

undefined4 BLEquipListItemView::getSprItemIcon()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 BLEquipListItemView::getLabEquiped()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

undefined4 BLEquipListItemView::getLabPro1()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

undefined4 BLEquipListItemView::getLabPro2()
{
  return *(undefined4 *)(((int)this) + 0x118);
}

undefined4 BLEquipListItemView::getLabPro3()
{
  return *(undefined4 *)(((int)this) + 0x11c);
}

undefined4 BLEquipListItemView::getLabPro4()
{
  return *(undefined4 *)(((int)this) + 0x120);
}

undefined4 BLEquipListItemView::getLineDown()
{
  return *(undefined4 *)(((int)this) + 0x124);
}

undefined4 BLEquipListItemView::getLineUp()
{
  return *(undefined4 *)(((int)this) + 0x128);
}

undefined4 BLEquipListItemView::getLineMiddle()
{
  return *(undefined4 *)(((int)this) + 300);
}

undefined4 BLEquipListItemView::getBtnEquip()
{
  return *(undefined4 *)(((int)this) + 0x130);
}

undefined4 BLEquipListItemView::getLabDown()
{
  return *(undefined4 *)(((int)this) + 0x134);
}

undefined4 BLEquipListItemView::getLabEquip()
{
  return *(undefined4 *)(((int)this) + 0x138);
}

undefined4 BLEquipListItemView::getPageControlStars()
{
  return *(undefined4 *)(((int)this) + 0x13c);
}

undefined4 BLEquipListItemView::getLabNum()
{
  return *(undefined4 *)(((int)this) + 0x140);
}

undefined4 BLEquipListItemView::getssp_UpgraceTitleBG()
{
  return *(undefined4 *)(((int)this) + 0x144);
}

undefined4 BLEquipListItemView::getLabUpgrace()
{
  return *(undefined4 *)(((int)this) + 0x148);
}

undefined4 BLEquipListItemView::getLabStar()
{
  return *(undefined4 *)(((int)this) + 0x14c);
}

void BLEquipListItemView::onEnter()
{
  ((BLEquipListItemPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLEquipListItemView::onExit()
{
  ((BLEquipListItemPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
bool BLEquipListItemView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
