#include "BLWeekGiftView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLWeekGiftPresenter.h"
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
extern "C" long long func_0079e30c(...);
extern "C" long long func_0079e34c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long func_0079e904(...);
extern "C" long long func_0079e914(...);
extern "C" long long ghidra_CONCAT11(...);
extern "C" long long ghidra_CONCAT12(...);
extern "C" long long ghidra_CONCAT13(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" long long ghidra_SUB41(...);
extern "C" unsigned long UNK_0055a934;
extern "C" unsigned long UNK_0055a966;
extern "C" unsigned long UNK_0055a9ac;
extern "C" unsigned long UNK_0055a9d4;
extern "C" unsigned long UNK_0055ab60;
extern "C" unsigned long UNK_0055ab92;
extern "C" unsigned long UNK_0055ac90;
extern "C" unsigned long UNK_0055acc8;
extern "C" unsigned long UNK_0055ad78;
extern "C" unsigned long UNK_0055adaa;
extern "C" unsigned long UNK_0055ae7a;
extern "C" unsigned long UNK_0055aeaa;
extern "C" unsigned long UNK_0055b020;
extern "C" unsigned long UNK_0055b048;
extern "C" unsigned long UNK_0055b150;
extern "C" unsigned long UNK_0055b166;
extern "C" unsigned long UNK_0055b182;
extern "C" unsigned long UNK_0055b19e;
extern "C" unsigned long UNK_0055b1ba;
extern "C" unsigned long UNK_0055b1e0;
extern "C" unsigned long UNK_0055b1fc;
extern "C" unsigned long UNK_0055b218;
extern "C" unsigned long UNK_0055b234;
extern "C" unsigned long UNK_0055b258;
extern "C" unsigned long UNK_0055b492;
extern "C" unsigned long UNK_0055b5a4;
extern "C" unsigned long UNK_0055b6d4;
extern "C" unsigned long UNK_0055b7da;
extern "C" unsigned long UNK_0055b7e0;
extern "C" unsigned long UNK_0055b926;
extern "C" unsigned long UNK_0055ba54;
extern "C" unsigned long UNK_0055ba80;
extern "C" unsigned long UNK_0055bb3c;
extern "C" unsigned long UNK_0055bb82;
extern "C" unsigned long UNK_0055bbae;
extern "C" unsigned long _DAT_0055aa74;
extern "C" unsigned long _DAT_0055aa78;
extern "C" unsigned long _UNK_0055a998;
extern "C" unsigned long _UNK_0055a99c;
extern "C" unsigned long _UNK_0055a9b0;
extern "C" unsigned long _UNK_0055a9d8;
extern "C" unsigned long _UNK_0055af3c;
extern "C" unsigned long _UNK_0055af40;
extern "C" unsigned long _UNK_0055af44;
extern "C" unsigned long _UNK_0055af48;
extern "C" unsigned long _UNK_0055af4c;
extern "C" unsigned long _UNK_0055af50;
extern "C" unsigned long _UNK_0055af54;
extern "C" unsigned long _UNK_0055af58;
extern "C" unsigned long _UNK_0055af5c;
extern "C" unsigned long _UNK_0055af60;
extern "C" unsigned long _UNK_0055af64;
extern "C" unsigned long _UNK_0055af68;
extern "C" unsigned long _UNK_0055af6c;
extern "C" unsigned long _UNK_0055af70;
extern "C" unsigned long _UNK_0055af74;
extern "C" unsigned long _UNK_0055af78;
extern "C" unsigned long _UNK_0055af7c;
extern "C" unsigned long _UNK_0055af80;
extern "C" unsigned long _UNK_0055af84;
extern "C" unsigned long _UNK_0055af88;
extern "C" unsigned long _UNK_0055af8c;
extern "C" unsigned long _UNK_0055b314;
extern "C" unsigned long _UNK_0055b318;
extern "C" unsigned long _UNK_0055b31c;
extern "C" unsigned long _UNK_0055b320;
extern "C" unsigned long _UNK_0055b324;
extern "C" unsigned long _UNK_0055b328;
extern "C" unsigned long _UNK_0055b32c;
extern "C" unsigned long _UNK_0055b330;
extern "C" unsigned long _UNK_0055b334;
extern "C" unsigned long _UNK_0055b338;
extern "C" unsigned long _UNK_0055b33c;
extern "C" unsigned long _UNK_0055b340;
extern "C" unsigned long _UNK_0055b344;
extern "C" unsigned long _UNK_0055b348;
extern "C" unsigned long _UNK_0055b34c;
extern "C" unsigned long _UNK_0055b350;
extern "C" unsigned long _UNK_0055b354;
extern "C" unsigned long _UNK_0055b358;
extern "C" unsigned long _UNK_0055b35c;
extern "C" unsigned long _UNK_0055b360;
extern "C" unsigned long _UNK_0055b364;
extern "C" unsigned long _UNK_0055b65c;
extern "C" unsigned long _UNK_0055b660;
extern "C" unsigned long _UNK_0055b664;
extern "C" unsigned long _UNK_0055b668;
extern "C" unsigned long _UNK_0055b66c;
extern "C" unsigned long _UNK_0055b670;
extern "C" unsigned long _UNK_0055b674;
extern "C" unsigned long _UNK_0055b678;
extern "C" unsigned long _UNK_0055b67c;
extern "C" unsigned long _UNK_0055b680;
extern "C" unsigned long _UNK_0055b684;
extern "C" unsigned long _UNK_0055b9cc;
extern "C" unsigned long _UNK_0055b9d0;
extern "C" unsigned long _UNK_0055b9d4;
extern "C" unsigned long _UNK_0055b9d8;
extern "C" unsigned long _UNK_0055b9dc;
extern "C" unsigned long _UNK_0055b9e0;
extern "C" unsigned long _UNK_0055b9e4;
extern "C" unsigned long _UNK_0055b9e8;
extern "C" unsigned long _UNK_0055b9ec;
extern "C" unsigned long _UNK_0055b9f0;
extern "C" unsigned long _UNK_0055b9f4;
extern "C" unsigned long _UNK_0055b9f8;
extern "C" unsigned long _UNK_0055b9fc;
extern "C" unsigned long _UNK_0055ba00;
extern "C" unsigned long _UNK_0055ba04;
extern "C" unsigned long _UNK_0055bd74;
extern "C" unsigned long _UNK_0055bd78;
extern "C" unsigned long _UNK_0055bd7c;
extern "C" unsigned long _UNK_0055bd80;
extern "C" unsigned long _UNK_0055bd84;
extern "C" unsigned long _UNK_0055bd88;
extern "C" unsigned long _UNK_0055bd8c;
extern "C" unsigned long _UNK_0055bd90;
extern "C" unsigned long _UNK_0055bd94;
extern "C" unsigned long _UNK_0055bd98;
extern "C" unsigned long _UNK_0055bd9c;
extern "C" unsigned long _UNK_0055bda0;
extern "C" unsigned long _UNK_0055bda4;
extern "C" unsigned long unaff_r7;
extern "C" unsigned long g_0055a934;
extern "C" unsigned long g_0055a966;
extern "C" unsigned long g_0055a998;
extern "C" unsigned long g_0055a99c;
extern "C" unsigned long g_0055a9ac;
extern "C" unsigned long g_0055a9b0;
extern "C" unsigned long g_0055a9d4;
extern "C" unsigned long g_0055a9d8;
extern "C" unsigned long g_0055aa74;
extern "C" unsigned long g_0055aa78;
extern "C" unsigned long g_0055ab60;
extern "C" unsigned long g_0055ab92;
extern "C" unsigned long g_0055ac90;
extern "C" unsigned long g_0055acc8;
extern "C" unsigned long g_0055ad78;
extern "C" unsigned long g_0055adaa;
extern "C" unsigned long g_0055ae7a;
extern "C" unsigned long g_0055aeaa;
extern "C" unsigned long g_0055af3c;
extern "C" unsigned long g_0055af40;
extern "C" unsigned long g_0055af44;
extern "C" unsigned long g_0055af48;
extern "C" unsigned long g_0055af4c;
extern "C" unsigned long g_0055af50;
extern "C" unsigned long g_0055af54;
extern "C" unsigned long g_0055af58;
extern "C" unsigned long g_0055af5c;
extern "C" unsigned long g_0055af60;
extern "C" unsigned long g_0055af64;
extern "C" unsigned long g_0055af68;
extern "C" unsigned long g_0055af6c;
extern "C" unsigned long g_0055af70;
extern "C" unsigned long g_0055af74;
extern "C" unsigned long g_0055af78;
extern "C" unsigned long g_0055af7c;
extern "C" unsigned long g_0055af80;
extern "C" unsigned long g_0055af84;
extern "C" unsigned long g_0055af88;
extern "C" unsigned long g_0055af8c;
extern "C" unsigned long g_0055b020;
extern "C" unsigned long g_0055b048;
extern "C" unsigned long g_0055b150;
extern "C" unsigned long g_0055b166;
extern "C" unsigned long g_0055b182;
extern "C" unsigned long g_0055b19e;
extern "C" unsigned long g_0055b1ba;
extern "C" unsigned long g_0055b1e0;
extern "C" unsigned long g_0055b1fc;
extern "C" unsigned long g_0055b218;
extern "C" unsigned long g_0055b234;
extern "C" unsigned long g_0055b258;
extern "C" unsigned long g_0055b314;
extern "C" unsigned long g_0055b318;
extern "C" unsigned long g_0055b31c;
extern "C" unsigned long g_0055b320;
extern "C" unsigned long g_0055b324;
extern "C" unsigned long g_0055b328;
extern "C" unsigned long g_0055b32c;
extern "C" unsigned long g_0055b330;
extern "C" unsigned long g_0055b334;
extern "C" unsigned long g_0055b338;
extern "C" unsigned long g_0055b33c;
extern "C" unsigned long g_0055b340;
extern "C" unsigned long g_0055b344;
extern "C" unsigned long g_0055b348;
extern "C" unsigned long g_0055b34c;
extern "C" unsigned long g_0055b350;
extern "C" unsigned long g_0055b354;
extern "C" unsigned long g_0055b358;
extern "C" unsigned long g_0055b35c;
extern "C" unsigned long g_0055b360;
extern "C" unsigned long g_0055b364;
extern "C" unsigned long g_0055b492;
extern "C" unsigned long g_0055b5a4;
extern "C" unsigned long g_0055b65c;
extern "C" unsigned long g_0055b660;
extern "C" unsigned long g_0055b664;
extern "C" unsigned long g_0055b668;
extern "C" unsigned long g_0055b66c;
extern "C" unsigned long g_0055b670;
extern "C" unsigned long g_0055b674;
extern "C" unsigned long g_0055b678;
extern "C" unsigned long g_0055b67c;
extern "C" unsigned long g_0055b680;
extern "C" unsigned long g_0055b684;
extern "C" unsigned long g_0055b6d4;
extern "C" unsigned long g_0055b7da;
extern "C" unsigned long g_0055b7e0;
extern "C" unsigned long g_0055b926;
extern "C" unsigned long g_0055b9cc;
extern "C" unsigned long g_0055b9d0;
extern "C" unsigned long g_0055b9d4;
extern "C" unsigned long g_0055b9d8;
extern "C" unsigned long g_0055b9dc;
extern "C" unsigned long g_0055b9e0;
extern "C" unsigned long g_0055b9e4;
extern "C" unsigned long g_0055b9e8;
extern "C" unsigned long g_0055b9ec;
extern "C" unsigned long g_0055b9f0;
extern "C" unsigned long g_0055b9f4;
extern "C" unsigned long g_0055b9f8;
extern "C" unsigned long g_0055b9fc;
extern "C" unsigned long g_0055ba00;
extern "C" unsigned long g_0055ba04;
extern "C" unsigned long g_0055ba54;
extern "C" unsigned long g_0055ba80;
extern "C" unsigned long g_0055bb3c;
extern "C" unsigned long g_0055bb82;
extern "C" unsigned long g_0055bbae;
extern "C" unsigned long g_0055bd74;
extern "C" unsigned long g_0055bd78;
extern "C" unsigned long g_0055bd7c;
extern "C" unsigned long g_0055bd80;
extern "C" unsigned long g_0055bd84;
extern "C" unsigned long g_0055bd88;
extern "C" unsigned long g_0055bd8c;
extern "C" unsigned long g_0055bd90;
extern "C" unsigned long g_0055bd94;
extern "C" unsigned long g_0055bd98;
extern "C" unsigned long g_0055bd9c;
extern "C" unsigned long g_0055bda0;
extern "C" unsigned long g_0055bda4;
BLWeekGiftView::~BLWeekGiftView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0055a934 + g_0055a998);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0055a966 + g_0055a99c,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLWeekGiftView::BLWeekGiftView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(g_0055aa74 + 0x55aa1c);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLWeekGiftView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * BLWeekGiftView::create()
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

undefined4 BLWeekGiftView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x108);
}

undefined4 BLWeekGiftView::getBackGround()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 BLWeekGiftView::getTabBg()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

undefined4 BLWeekGiftView::getBtnClose()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

undefined4 BLWeekGiftView::getLabTitle()
{
  return *(undefined4 *)(((int)this) + 0x118);
}

undefined4 BLWeekGiftView::getBtnGet()
{
  return *(undefined4 *)(((int)this) + 0x11c);
}

undefined4 BLWeekGiftView::getLabName()
{
  return *(undefined4 *)(((int)this) + 0x120);
}

undefined4 BLWeekGiftView::getLabPrice()
{
  return *(undefined4 *)(((int)this) + 0x124);
}

undefined4 BLWeekGiftView::getLabPriceNow()
{
  return *(undefined4 *)(((int)this) + 0x128);
}

void BLWeekGiftView::onEnter()
{
  ((BLWeekGiftPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLWeekGiftView::onExit()
{
  ((BLWeekGiftPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
bool BLWeekGiftView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
