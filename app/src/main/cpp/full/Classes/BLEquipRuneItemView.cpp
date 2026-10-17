#include "BLEquipRuneItemView.h"
#include "BLEquipRuneItemPresenter.h"
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
extern "C" unsigned long UNK_0067abac;
extern "C" unsigned long UNK_0067abde;
extern "C" unsigned long UNK_0067ac24;
extern "C" unsigned long UNK_0067ac4c;
extern "C" unsigned long UNK_0067ac94;
extern "C" unsigned long UNK_0067acc2;
extern "C" unsigned long UNK_0067ae1c;
extern "C" unsigned long UNK_0067aeba;
extern "C" unsigned long UNK_0067af6a;
extern "C" unsigned long UNK_0067af94;
extern "C" unsigned long UNK_0067b04e;
extern "C" unsigned long UNK_0067b084;
extern "C" unsigned long UNK_0067b144;
extern "C" unsigned long UNK_0067b170;
extern "C" unsigned long UNK_0067b26a;
extern "C" unsigned long UNK_0067b296;
extern "C" unsigned long UNK_0067b356;
extern "C" unsigned long UNK_0067b382;
extern "C" unsigned long UNK_0067b43e;
extern "C" unsigned long UNK_0067b46a;
extern "C" unsigned long UNK_0067b52a;
extern "C" unsigned long UNK_0067b556;
extern "C" unsigned long UNK_0067b612;
extern "C" unsigned long UNK_0067b63e;
extern "C" unsigned long UNK_0067b6b4;
extern "C" unsigned long UNK_0067b708;
extern "C" unsigned long UNK_0067b7f2;
extern "C" unsigned long UNK_0067b8dc;
extern "C" unsigned long UNK_0067b9dc;
extern "C" unsigned long UNK_0067ba0c;
extern "C" unsigned long UNK_0067bb20;
extern "C" unsigned long UNK_0067bb54;
extern "C" unsigned long UNK_0067bbd0;
extern "C" unsigned long UNK_0067bc04;
extern "C" unsigned long UNK_0067bc8e;
extern "C" unsigned long UNK_0067bcb8;
extern "C" unsigned long UNK_0067bd7e;
extern "C" unsigned long UNK_0067bda8;
extern "C" unsigned long UNK_0067beb4;
extern "C" unsigned long UNK_0067bf24;
extern "C" unsigned long UNK_0067bf6e;
extern "C" unsigned long UNK_0067bf98;
extern "C" unsigned long UNK_0067c04a;
extern "C" unsigned long UNK_0067c136;
extern "C" unsigned long UNK_0067c162;
extern "C" unsigned long UNK_0067c226;
extern "C" unsigned long UNK_0067c250;
extern "C" unsigned long _UNK_0067ac10;
extern "C" unsigned long _UNK_0067ac14;
extern "C" unsigned long _UNK_0067ac28;
extern "C" unsigned long _UNK_0067ac50;
extern "C" unsigned long _UNK_0067acec;
extern "C" unsigned long _UNK_0067acf0;
extern "C" unsigned long _UNK_0067b1fc;
extern "C" unsigned long _UNK_0067b200;
extern "C" unsigned long _UNK_0067b204;
extern "C" unsigned long _UNK_0067b208;
extern "C" unsigned long _UNK_0067b20c;
extern "C" unsigned long _UNK_0067b210;
extern "C" unsigned long _UNK_0067b214;
extern "C" unsigned long _UNK_0067b218;
extern "C" unsigned long _UNK_0067b21c;
extern "C" unsigned long _UNK_0067b220;
extern "C" unsigned long _UNK_0067b224;
extern "C" unsigned long _UNK_0067b228;
extern "C" unsigned long _UNK_0067b22c;
extern "C" unsigned long _UNK_0067b230;
extern "C" unsigned long _UNK_0067b234;
extern "C" unsigned long _UNK_0067b648;
extern "C" unsigned long _UNK_0067b64c;
extern "C" unsigned long _UNK_0067b650;
extern "C" unsigned long _UNK_0067b654;
extern "C" unsigned long _UNK_0067b658;
extern "C" unsigned long _UNK_0067b65c;
extern "C" unsigned long _UNK_0067b660;
extern "C" unsigned long _UNK_0067b664;
extern "C" unsigned long _UNK_0067b668;
extern "C" unsigned long _UNK_0067b66c;
extern "C" unsigned long _UNK_0067b670;
extern "C" unsigned long _UNK_0067b674;
extern "C" unsigned long _UNK_0067b678;
extern "C" unsigned long _UNK_0067ba98;
extern "C" unsigned long _UNK_0067ba9c;
extern "C" unsigned long _UNK_0067baa0;
extern "C" unsigned long _UNK_0067baa4;
extern "C" unsigned long _UNK_0067baa8;
extern "C" unsigned long _UNK_0067baac;
extern "C" unsigned long _UNK_0067bab0;
extern "C" unsigned long _UNK_0067bab4;
extern "C" unsigned long _UNK_0067bab8;
extern "C" unsigned long _UNK_0067babc;
extern "C" unsigned long _UNK_0067bac0;
extern "C" unsigned long _UNK_0067bac4;
extern "C" unsigned long _UNK_0067bac8;
extern "C" unsigned long _UNK_0067bacc;
extern "C" unsigned long _UNK_0067bad0;
extern "C" unsigned long _UNK_0067bad4;
extern "C" unsigned long _UNK_0067becc;
extern "C" unsigned long _UNK_0067bed0;
extern "C" unsigned long _UNK_0067bed4;
extern "C" unsigned long _UNK_0067bed8;
extern "C" unsigned long _UNK_0067bedc;
extern "C" unsigned long _UNK_0067bee0;
extern "C" unsigned long _UNK_0067bee4;
extern "C" unsigned long _UNK_0067bee8;
extern "C" unsigned long _UNK_0067beec;
extern "C" unsigned long _UNK_0067bef0;
extern "C" unsigned long _UNK_0067bef4;
extern "C" unsigned long _UNK_0067bef8;
extern "C" unsigned long _UNK_0067befc;
extern "C" unsigned long _UNK_0067bf00;
extern "C" unsigned long _UNK_0067bf04;
extern "C" unsigned long _UNK_0067bf08;
extern "C" unsigned long _UNK_0067c304;
extern "C" unsigned long _UNK_0067c308;
extern "C" unsigned long _UNK_0067c30c;
extern "C" unsigned long _UNK_0067c310;
extern "C" unsigned long _UNK_0067c314;
extern "C" unsigned long _UNK_0067c318;
extern "C" unsigned long _UNK_0067c31c;
extern "C" unsigned long _UNK_0067c320;
extern "C" unsigned long _UNK_0067c324;
extern "C" unsigned long _UNK_0067c328;
extern "C" unsigned long _UNK_0067c32c;
extern "C" unsigned long _UNK_0067c330;
extern "C" unsigned long _UNK_0067c334;
extern "C" unsigned long _UNK_0067c338;
extern "C" unsigned long _UNK_0067c33c;
extern "C" unsigned long _UNK_0067c340;
extern "C" unsigned long _UNK_0067c344;
extern "C" unsigned long _UNK_0067c43c;
extern "C" unsigned long _UNK_0067c440;
extern "C" unsigned long g_0067abac;
extern "C" unsigned long g_0067abde;
extern "C" unsigned long g_0067ac10;
extern "C" unsigned long g_0067ac14;
extern "C" unsigned long g_0067ac24;
extern "C" unsigned long g_0067ac28;
extern "C" unsigned long g_0067ac4c;
extern "C" unsigned long g_0067ac50;
extern "C" unsigned long g_0067ac94;
extern "C" unsigned long g_0067acc2;
extern "C" unsigned long g_0067acec;
extern "C" unsigned long g_0067acf0;
extern "C" unsigned long g_0067ae1c;
extern "C" unsigned long g_0067aeba;
extern "C" unsigned long g_0067af6a;
extern "C" unsigned long g_0067af94;
extern "C" unsigned long g_0067b04e;
extern "C" unsigned long g_0067b084;
extern "C" unsigned long g_0067b144;
extern "C" unsigned long g_0067b170;
extern "C" unsigned long g_0067b1fc;
extern "C" unsigned long g_0067b200;
extern "C" unsigned long g_0067b204;
extern "C" unsigned long g_0067b208;
extern "C" unsigned long g_0067b20c;
extern "C" unsigned long g_0067b210;
extern "C" unsigned long g_0067b214;
extern "C" unsigned long g_0067b218;
extern "C" unsigned long g_0067b21c;
extern "C" unsigned long g_0067b220;
extern "C" unsigned long g_0067b224;
extern "C" unsigned long g_0067b228;
extern "C" unsigned long g_0067b22c;
extern "C" unsigned long g_0067b230;
extern "C" unsigned long g_0067b234;
extern "C" unsigned long g_0067b26a;
extern "C" unsigned long g_0067b296;
extern "C" unsigned long g_0067b356;
extern "C" unsigned long g_0067b382;
extern "C" unsigned long g_0067b43e;
extern "C" unsigned long g_0067b46a;
extern "C" unsigned long g_0067b52a;
extern "C" unsigned long g_0067b556;
extern "C" unsigned long g_0067b612;
extern "C" unsigned long g_0067b63e;
extern "C" unsigned long g_0067b648;
extern "C" unsigned long g_0067b64c;
extern "C" unsigned long g_0067b650;
extern "C" unsigned long g_0067b654;
extern "C" unsigned long g_0067b658;
extern "C" unsigned long g_0067b65c;
extern "C" unsigned long g_0067b660;
extern "C" unsigned long g_0067b664;
extern "C" unsigned long g_0067b668;
extern "C" unsigned long g_0067b66c;
extern "C" unsigned long g_0067b670;
extern "C" unsigned long g_0067b674;
extern "C" unsigned long g_0067b678;
extern "C" unsigned long g_0067b6b4;
extern "C" unsigned long g_0067b708;
extern "C" unsigned long g_0067b7f2;
extern "C" unsigned long g_0067b8dc;
extern "C" unsigned long g_0067b9dc;
extern "C" unsigned long g_0067ba0c;
extern "C" unsigned long g_0067ba98;
extern "C" unsigned long g_0067ba9c;
extern "C" unsigned long g_0067baa0;
extern "C" unsigned long g_0067baa4;
extern "C" unsigned long g_0067baa8;
extern "C" unsigned long g_0067baac;
extern "C" unsigned long g_0067bab0;
extern "C" unsigned long g_0067bab4;
extern "C" unsigned long g_0067bab8;
extern "C" unsigned long g_0067babc;
extern "C" unsigned long g_0067bac0;
extern "C" unsigned long g_0067bac4;
extern "C" unsigned long g_0067bac8;
extern "C" unsigned long g_0067bacc;
extern "C" unsigned long g_0067bad0;
extern "C" unsigned long g_0067bad4;
extern "C" unsigned long g_0067bb20;
extern "C" unsigned long g_0067bb54;
extern "C" unsigned long g_0067bbd0;
extern "C" unsigned long g_0067bc04;
extern "C" unsigned long g_0067bc8e;
extern "C" unsigned long g_0067bcb8;
extern "C" unsigned long g_0067bd7e;
extern "C" unsigned long g_0067bda8;
extern "C" unsigned long g_0067beb4;
extern "C" unsigned long g_0067becc;
extern "C" unsigned long g_0067bed0;
extern "C" unsigned long g_0067bed4;
extern "C" unsigned long g_0067bed8;
extern "C" unsigned long g_0067bedc;
extern "C" unsigned long g_0067bee0;
extern "C" unsigned long g_0067bee4;
extern "C" unsigned long g_0067bee8;
extern "C" unsigned long g_0067beec;
extern "C" unsigned long g_0067bef0;
extern "C" unsigned long g_0067bef4;
extern "C" unsigned long g_0067bef8;
extern "C" unsigned long g_0067befc;
extern "C" unsigned long g_0067bf00;
extern "C" unsigned long g_0067bf04;
extern "C" unsigned long g_0067bf08;
extern "C" unsigned long g_0067bf24;
extern "C" unsigned long g_0067bf6e;
extern "C" unsigned long g_0067bf98;
extern "C" unsigned long g_0067c04a;
extern "C" unsigned long g_0067c136;
extern "C" unsigned long g_0067c162;
extern "C" unsigned long g_0067c226;
extern "C" unsigned long g_0067c250;
extern "C" unsigned long g_0067c304;
extern "C" unsigned long g_0067c308;
extern "C" unsigned long g_0067c30c;
extern "C" unsigned long g_0067c310;
extern "C" unsigned long g_0067c314;
extern "C" unsigned long g_0067c318;
extern "C" unsigned long g_0067c31c;
extern "C" unsigned long g_0067c320;
extern "C" unsigned long g_0067c324;
extern "C" unsigned long g_0067c328;
extern "C" unsigned long g_0067c32c;
extern "C" unsigned long g_0067c330;
extern "C" unsigned long g_0067c334;
extern "C" unsigned long g_0067c338;
extern "C" unsigned long g_0067c33c;
extern "C" unsigned long g_0067c340;
extern "C" unsigned long g_0067c344;
extern "C" unsigned long g_0067c43c;
extern "C" unsigned long g_0067c440;
BLEquipRuneItemView::~BLEquipRuneItemView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0067abac + g_0067ac10);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0067abde + g_0067ac14,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLEquipRuneItemView::BLEquipRuneItemView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_0067ac94 + g_0067acec);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0067acc2 + g_0067acf0,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * BLEquipRuneItemView::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x168)));
  0 /* ctorZero */;
  iVar2 = (**(code **)(*piVar1 + 0x18))(piVar1);
  if (iVar2 == 0) {
    ((cocos2d::CCObject *)piVar1)->release();
    piVar1 = (int *)0x0;
  }
  else {
    ((cocos2d::CCObject *)piVar1)->autorelease();
  }
  return (int *)(piVar1);
}

undefined4 BLEquipRuneItemView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 BLEquipRuneItemView::getSprItemIcon()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

undefined4 BLEquipRuneItemView::getLabEquiped()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

undefined4 BLEquipRuneItemView::getLabPro1()
{
  return *(undefined4 *)(((int)this) + 0x118);
}

undefined4 BLEquipRuneItemView::getLabPro2()
{
  return *(undefined4 *)(((int)this) + 0x11c);
}

undefined4 BLEquipRuneItemView::getLabPro3()
{
  return *(undefined4 *)(((int)this) + 0x120);
}

undefined4 BLEquipRuneItemView::getLabPro4()
{
  return *(undefined4 *)(((int)this) + 0x124);
}

undefined4 BLEquipRuneItemView::getLabPro5()
{
  return *(undefined4 *)(((int)this) + 0x128);
}

undefined4 BLEquipRuneItemView::getLineDown()
{
  return *(undefined4 *)(((int)this) + 300);
}

undefined4 BLEquipRuneItemView::getLineUp()
{
  return *(undefined4 *)(((int)this) + 0x130);
}

undefined4 BLEquipRuneItemView::getLineMiddle()
{
  return *(undefined4 *)(((int)this) + 0x134);
}

undefined4 BLEquipRuneItemView::getBtnEquip()
{
  return *(undefined4 *)(((int)this) + 0x138);
}

undefined4 BLEquipRuneItemView::getLabDown()
{
  return *(undefined4 *)(((int)this) + 0x13c);
}

undefined4 BLEquipRuneItemView::getLabEquip()
{
  return *(undefined4 *)(((int)this) + 0x140);
}

undefined4 BLEquipRuneItemView::getPageControlStars()
{
  return *(undefined4 *)(((int)this) + 0x144);
}

undefined4 BLEquipRuneItemView::getLabNum()
{
  return *(undefined4 *)(((int)this) + 0x148);
}

undefined4 BLEquipRuneItemView::getssp_UpgraceTitleBG()
{
  return *(undefined4 *)(((int)this) + 0x14c);
}

undefined4 BLEquipRuneItemView::getLabUpgrace()
{
  return *(undefined4 *)(((int)this) + 0x150);
}

undefined4 BLEquipRuneItemView::getLabStar()
{
  return *(undefined4 *)(((int)this) + 0x154);
}

undefined4 BLEquipRuneItemView::getBtnCompose()
{
  return *(undefined4 *)(((int)this) + 0x158);
}

undefined4 BLEquipRuneItemView::getLabCompose()
{
  return *(undefined4 *)(((int)this) + 0x15c);
}

undefined4 BLEquipRuneItemView::getLabUpTit()
{
  return *(undefined4 *)(((int)this) + 0x160);
}

undefined4 BLEquipRuneItemView::getLabUpNo()
{
  return *(undefined4 *)(((int)this) + 0x164);
}


void BLEquipRuneItemView::onEnter()
{
  ((BLEquipRuneItemPresenter *)*(undefined4 *)(((int)this) + 0x10c))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLEquipRuneItemView::onExit()
{
  ((BLEquipRuneItemPresenter *)*(undefined4 *)(((int)this) + 0x10c))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
bool BLEquipRuneItemView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
