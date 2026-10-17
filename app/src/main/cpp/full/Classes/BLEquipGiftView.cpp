#include "BLEquipGiftView.h"
#include "BLEquipGiftPresenter.h"
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
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long ghidra_CONCAT13(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0054f800;
extern "C" unsigned long UNK_0054f844;
extern "C" unsigned long UNK_0054f888;
extern "C" unsigned long UNK_0054f8b0;
extern "C" unsigned long UNK_0054fa6a;
extern "C" unsigned long UNK_0054fb68;
extern "C" unsigned long UNK_0054fba2;
extern "C" unsigned long UNK_0054fc50;
extern "C" unsigned long UNK_0054fc84;
extern "C" unsigned long UNK_0054fd56;
extern "C" unsigned long UNK_0054fd8a;
extern "C" unsigned long UNK_0054fefc;
extern "C" unsigned long UNK_0054ff26;
extern "C" unsigned long UNK_005500a0;
extern "C" unsigned long UNK_005500f4;
extern "C" unsigned long UNK_00550148;
extern "C" unsigned long UNK_00550204;
extern "C" unsigned long UNK_0055024a;
extern "C" unsigned long UNK_0055027a;
extern "C" unsigned long _DAT_0054f950;
extern "C" unsigned long _DAT_0054f954;
extern "C" unsigned long _UNK_0054f874;
extern "C" unsigned long _UNK_0054f878;
extern "C" unsigned long _UNK_0054f88c;
extern "C" unsigned long _UNK_0054f8b4;
extern "C" unsigned long _UNK_0054fe4c;
extern "C" unsigned long _UNK_0054fe50;
extern "C" unsigned long _UNK_0054fe54;
extern "C" unsigned long _UNK_0054fe58;
extern "C" unsigned long _UNK_0054fe5c;
extern "C" unsigned long _UNK_0054fe60;
extern "C" unsigned long _UNK_0054fe64;
extern "C" unsigned long _UNK_0054fe68;
extern "C" unsigned long _UNK_0054fe6c;
extern "C" unsigned long _UNK_0054fe70;
extern "C" unsigned long _UNK_0054fe74;
extern "C" unsigned long _UNK_0054fe78;
extern "C" unsigned long _UNK_0054fe7c;
extern "C" unsigned long _UNK_0054fe80;
extern "C" unsigned long _UNK_0054fe84;
extern "C" unsigned long _UNK_0054fe88;
extern "C" unsigned long _UNK_0054fe8c;
extern "C" unsigned long _UNK_0054fe90;
extern "C" unsigned long _UNK_0054fe94;
extern "C" unsigned long _UNK_0054fe98;
extern "C" unsigned long _UNK_0055010c;
extern "C" unsigned long _UNK_00550110;
extern "C" unsigned long _UNK_00550114;
extern "C" unsigned long _UNK_00550118;
extern "C" unsigned long _UNK_0055011c;
extern "C" unsigned long _UNK_00550120;
extern "C" unsigned long _UNK_00550124;
extern "C" unsigned long _UNK_00550128;
extern "C" unsigned long _UNK_005503d4;
extern "C" unsigned long _UNK_005503d8;
extern "C" unsigned long _UNK_005503dc;
extern "C" unsigned long _UNK_005503e0;
extern "C" unsigned long _UNK_005503e4;
extern "C" unsigned long _UNK_005503e8;
extern "C" unsigned long _UNK_005503ec;
extern "C" unsigned long _UNK_005503f0;
extern "C" unsigned long _UNK_005503f4;
extern "C" unsigned long _UNK_005503f8;
extern "C" unsigned long _UNK_005503fc;
extern "C" unsigned long _UNK_00550400;
extern "C" unsigned long g_0054f800;
extern "C" unsigned long g_0054f844;
extern "C" unsigned long g_0054f874;
extern "C" unsigned long g_0054f878;
extern "C" unsigned long g_0054f888;
extern "C" unsigned long g_0054f88c;
extern "C" unsigned long g_0054f8b0;
extern "C" unsigned long g_0054f8b4;
extern "C" unsigned long g_0054f950;
extern "C" unsigned long g_0054f954;
extern "C" unsigned long g_0054fa6a;
extern "C" unsigned long g_0054fb68;
extern "C" unsigned long g_0054fba2;
extern "C" unsigned long g_0054fc50;
extern "C" unsigned long g_0054fc84;
extern "C" unsigned long g_0054fd56;
extern "C" unsigned long g_0054fd8a;
extern "C" unsigned long g_0054fe4c;
extern "C" unsigned long g_0054fe50;
extern "C" unsigned long g_0054fe54;
extern "C" unsigned long g_0054fe58;
extern "C" unsigned long g_0054fe5c;
extern "C" unsigned long g_0054fe60;
extern "C" unsigned long g_0054fe64;
extern "C" unsigned long g_0054fe68;
extern "C" unsigned long g_0054fe6c;
extern "C" unsigned long g_0054fe70;
extern "C" unsigned long g_0054fe74;
extern "C" unsigned long g_0054fe78;
extern "C" unsigned long g_0054fe7c;
extern "C" unsigned long g_0054fe80;
extern "C" unsigned long g_0054fe84;
extern "C" unsigned long g_0054fe88;
extern "C" unsigned long g_0054fe8c;
extern "C" unsigned long g_0054fe90;
extern "C" unsigned long g_0054fe94;
extern "C" unsigned long g_0054fe98;
extern "C" unsigned long g_0054fefc;
extern "C" unsigned long g_0054ff26;
extern "C" unsigned long g_005500a0;
extern "C" unsigned long g_005500f4;
extern "C" unsigned long g_0055010c;
extern "C" unsigned long g_00550110;
extern "C" unsigned long g_00550114;
extern "C" unsigned long g_00550118;
extern "C" unsigned long g_0055011c;
extern "C" unsigned long g_00550120;
extern "C" unsigned long g_00550124;
extern "C" unsigned long g_00550128;
extern "C" unsigned long g_00550148;
extern "C" unsigned long g_00550204;
extern "C" unsigned long g_0055024a;
extern "C" unsigned long g_0055027a;
extern "C" unsigned long g_005503d4;
extern "C" unsigned long g_005503d8;
extern "C" unsigned long g_005503dc;
extern "C" unsigned long g_005503e0;
extern "C" unsigned long g_005503e4;
extern "C" unsigned long g_005503e8;
extern "C" unsigned long g_005503ec;
extern "C" unsigned long g_005503f0;
extern "C" unsigned long g_005503f4;
extern "C" unsigned long g_005503f8;
extern "C" unsigned long g_005503fc;
extern "C" unsigned long g_00550400;
BLEquipGiftView::~BLEquipGiftView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0054f800 + g_0054f874);
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
  func_0079e45c(&uStack_14,&g_0054f844 + g_0054f878,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLEquipGiftView::BLEquipGiftView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(g_0054f950 + 0x54f8f8);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLEquipGiftView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * BLEquipGiftView::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x130)));
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

undefined4 BLEquipGiftView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x108);
}

undefined4 BLEquipGiftView::getBackGround()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 BLEquipGiftView::getTabBg()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

undefined4 BLEquipGiftView::getBtnClose()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

undefined4 BLEquipGiftView::getLabTitle()
{
  return *(undefined4 *)(((int)this) + 0x118);
}

undefined4 BLEquipGiftView::getBtnGet()
{
  return *(undefined4 *)(((int)this) + 0x11c);
}

undefined4 BLEquipGiftView::getLabName()
{
  return *(undefined4 *)(((int)this) + 0x120);
}

undefined4 BLEquipGiftView::getGridViewItemList()
{
  return *(undefined4 *)(((int)this) + 0x124);
}

undefined4 BLEquipGiftView::getLabPrice()
{
  return *(undefined4 *)(((int)this) + 0x128);
}

undefined4 BLEquipGiftView::getLabPriceNow()
{
  return *(undefined4 *)(((int)this) + 300);
}

void BLEquipGiftView::onEnter()
{
  ((BLEquipGiftPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLEquipGiftView::onExit()
{
  ((BLEquipGiftPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
bool BLEquipGiftView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
