#include "BLSuitItemDataInfoView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLOtherItemDataInfoDownView.h"
#include "BLSuitItemDataInfoPresenter.h"
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
extern "C" unsigned long UNK_00634da0;
extern "C" unsigned long UNK_00634de4;
extern "C" unsigned long UNK_00634e28;
extern "C" unsigned long UNK_00634e50;
extern "C" unsigned long UNK_00635032;
extern "C" unsigned long UNK_00635128;
extern "C" unsigned long UNK_00635158;
extern "C" unsigned long UNK_006351b4;
extern "C" unsigned long UNK_0063528e;
extern "C" unsigned long UNK_00635328;
extern "C" unsigned long UNK_006353d4;
extern "C" unsigned long UNK_006353fe;
extern "C" unsigned long UNK_00635508;
extern "C" unsigned long UNK_0063553e;
extern "C" unsigned long UNK_006355fe;
extern "C" unsigned long UNK_0063562a;
extern "C" unsigned long UNK_006356e6;
extern "C" unsigned long UNK_00635712;
extern "C" unsigned long UNK_006357d2;
extern "C" unsigned long UNK_006357fe;
extern "C" unsigned long UNK_006358f8;
extern "C" unsigned long UNK_00635922;
extern "C" unsigned long UNK_006359ca;
extern "C" unsigned long UNK_00635aaa;
extern "C" unsigned long UNK_00635b8a;
extern "C" unsigned long UNK_00635c2e;
extern "C" unsigned long UNK_00635c5c;
extern "C" unsigned long UNK_00635d56;
extern "C" unsigned long UNK_00635d82;
extern "C" unsigned long UNK_00635e44;
extern "C" unsigned long UNK_00635e7a;
extern "C" unsigned long UNK_00635f3a;
extern "C" unsigned long UNK_00635f66;
extern "C" unsigned long UNK_00636048;
extern "C" unsigned long UNK_0063607a;
extern "C" unsigned long UNK_006361fe;
extern "C" unsigned long UNK_006362f6;
extern "C" unsigned long UNK_00636320;
extern "C" unsigned long _DAT_00634ef0;
extern "C" unsigned long _DAT_00634ef4;
extern "C" unsigned long _UNK_00634e14;
extern "C" unsigned long _UNK_00634e18;
extern "C" unsigned long _UNK_00634e2c;
extern "C" unsigned long _UNK_00634e54;
extern "C" unsigned long _UNK_00635410;
extern "C" unsigned long _UNK_00635414;
extern "C" unsigned long _UNK_00635418;
extern "C" unsigned long _UNK_0063541c;
extern "C" unsigned long _UNK_00635420;
extern "C" unsigned long _UNK_00635424;
extern "C" unsigned long _UNK_00635428;
extern "C" unsigned long _UNK_0063542c;
extern "C" unsigned long _UNK_00635430;
extern "C" unsigned long _UNK_00635434;
extern "C" unsigned long _UNK_00635438;
extern "C" unsigned long _UNK_0063543c;
extern "C" unsigned long _UNK_00635440;
extern "C" unsigned long _UNK_00635444;
extern "C" unsigned long _UNK_00635448;
extern "C" unsigned long _UNK_0063544c;
extern "C" unsigned long _UNK_00635450;
extern "C" unsigned long _UNK_00635454;
extern "C" unsigned long _UNK_00635458;
extern "C" unsigned long _UNK_00635878;
extern "C" unsigned long _UNK_0063587c;
extern "C" unsigned long _UNK_00635880;
extern "C" unsigned long _UNK_00635884;
extern "C" unsigned long _UNK_00635888;
extern "C" unsigned long _UNK_0063588c;
extern "C" unsigned long _UNK_00635890;
extern "C" unsigned long _UNK_00635894;
extern "C" unsigned long _UNK_00635898;
extern "C" unsigned long _UNK_0063589c;
extern "C" unsigned long _UNK_006358a0;
extern "C" unsigned long _UNK_006358a4;
extern "C" unsigned long _UNK_006358a8;
extern "C" unsigned long _UNK_00635cdc;
extern "C" unsigned long _UNK_00635ce0;
extern "C" unsigned long _UNK_00635ce4;
extern "C" unsigned long _UNK_00635ce8;
extern "C" unsigned long _UNK_00635cec;
extern "C" unsigned long _UNK_00635cf0;
extern "C" unsigned long _UNK_00635cf4;
extern "C" unsigned long _UNK_00635cf8;
extern "C" unsigned long _UNK_00635cfc;
extern "C" unsigned long _UNK_00635d00;
extern "C" unsigned long _UNK_00635d04;
extern "C" unsigned long _UNK_00635d08;
extern "C" unsigned long _UNK_00635d0c;
extern "C" unsigned long _UNK_00635d10;
extern "C" unsigned long _UNK_00635d14;
extern "C" unsigned long _UNK_00635d18;
extern "C" unsigned long _UNK_00635d1c;
extern "C" unsigned long _UNK_00636138;
extern "C" unsigned long _UNK_0063613c;
extern "C" unsigned long _UNK_00636140;
extern "C" unsigned long _UNK_00636144;
extern "C" unsigned long _UNK_00636148;
extern "C" unsigned long _UNK_0063614c;
extern "C" unsigned long _UNK_00636150;
extern "C" unsigned long _UNK_00636154;
extern "C" unsigned long _UNK_00636158;
extern "C" unsigned long _UNK_0063615c;
extern "C" unsigned long _UNK_00636160;
extern "C" unsigned long _UNK_00636164;
extern "C" unsigned long _UNK_00636168;
extern "C" unsigned long _UNK_0063616c;
extern "C" unsigned long _UNK_00636170;
extern "C" unsigned long _UNK_00636174;
extern "C" unsigned long _UNK_00636558;
extern "C" unsigned long _UNK_0063655c;
extern "C" unsigned long _UNK_00636560;
extern "C" unsigned long _UNK_00636564;
extern "C" unsigned long _UNK_00636568;
extern "C" unsigned long _UNK_0063656c;
extern "C" unsigned long _UNK_00636570;
extern "C" unsigned long _UNK_00636574;
extern "C" unsigned long _UNK_00636578;
extern "C" unsigned long _UNK_0063657c;
extern "C" unsigned long _UNK_00636580;
extern "C" unsigned long g_00634da0;
extern "C" unsigned long g_00634de4;
extern "C" unsigned long g_00634e14;
extern "C" unsigned long g_00634e18;
extern "C" unsigned long g_00634e28;
extern "C" unsigned long g_00634e2c;
extern "C" unsigned long g_00634e50;
extern "C" unsigned long g_00634e54;
extern "C" unsigned long g_00634ef0;
extern "C" unsigned long g_00634ef4;
extern "C" unsigned long g_00635032;
extern "C" unsigned long g_00635128;
extern "C" unsigned long g_00635158;
extern "C" unsigned long g_006351b4;
extern "C" unsigned long g_0063528e;
extern "C" unsigned long g_00635328;
extern "C" unsigned long g_006353d4;
extern "C" unsigned long g_006353fe;
extern "C" unsigned long g_00635410;
extern "C" unsigned long g_00635414;
extern "C" unsigned long g_00635418;
extern "C" unsigned long g_0063541c;
extern "C" unsigned long g_00635420;
extern "C" unsigned long g_00635424;
extern "C" unsigned long g_00635428;
extern "C" unsigned long g_0063542c;
extern "C" unsigned long g_00635430;
extern "C" unsigned long g_00635434;
extern "C" unsigned long g_00635438;
extern "C" unsigned long g_0063543c;
extern "C" unsigned long g_00635440;
extern "C" unsigned long g_00635444;
extern "C" unsigned long g_00635448;
extern "C" unsigned long g_0063544c;
extern "C" unsigned long g_00635450;
extern "C" unsigned long g_00635454;
extern "C" unsigned long g_00635458;
extern "C" unsigned long g_00635508;
extern "C" unsigned long g_0063553e;
extern "C" unsigned long g_006355fe;
extern "C" unsigned long g_0063562a;
extern "C" unsigned long g_006356e6;
extern "C" unsigned long g_00635712;
extern "C" unsigned long g_006357d2;
extern "C" unsigned long g_006357fe;
extern "C" unsigned long g_00635878;
extern "C" unsigned long g_0063587c;
extern "C" unsigned long g_00635880;
extern "C" unsigned long g_00635884;
extern "C" unsigned long g_00635888;
extern "C" unsigned long g_0063588c;
extern "C" unsigned long g_00635890;
extern "C" unsigned long g_00635894;
extern "C" unsigned long g_00635898;
extern "C" unsigned long g_0063589c;
extern "C" unsigned long g_006358a0;
extern "C" unsigned long g_006358a4;
extern "C" unsigned long g_006358a8;
extern "C" unsigned long g_006358f8;
extern "C" unsigned long g_00635922;
extern "C" unsigned long g_006359ca;
extern "C" unsigned long g_00635aaa;
extern "C" unsigned long g_00635b8a;
extern "C" unsigned long g_00635c2e;
extern "C" unsigned long g_00635c5c;
extern "C" unsigned long g_00635cdc;
extern "C" unsigned long g_00635ce0;
extern "C" unsigned long g_00635ce4;
extern "C" unsigned long g_00635ce8;
extern "C" unsigned long g_00635cec;
extern "C" unsigned long g_00635cf0;
extern "C" unsigned long g_00635cf4;
extern "C" unsigned long g_00635cf8;
extern "C" unsigned long g_00635cfc;
extern "C" unsigned long g_00635d00;
extern "C" unsigned long g_00635d04;
extern "C" unsigned long g_00635d08;
extern "C" unsigned long g_00635d0c;
extern "C" unsigned long g_00635d10;
extern "C" unsigned long g_00635d14;
extern "C" unsigned long g_00635d18;
extern "C" unsigned long g_00635d1c;
extern "C" unsigned long g_00635d56;
extern "C" unsigned long g_00635d82;
extern "C" unsigned long g_00635e44;
extern "C" unsigned long g_00635e7a;
extern "C" unsigned long g_00635f3a;
extern "C" unsigned long g_00635f66;
extern "C" unsigned long g_00636048;
extern "C" unsigned long g_0063607a;
extern "C" unsigned long g_00636138;
extern "C" unsigned long g_0063613c;
extern "C" unsigned long g_00636140;
extern "C" unsigned long g_00636144;
extern "C" unsigned long g_00636148;
extern "C" unsigned long g_0063614c;
extern "C" unsigned long g_00636150;
extern "C" unsigned long g_00636154;
extern "C" unsigned long g_00636158;
extern "C" unsigned long g_0063615c;
extern "C" unsigned long g_00636160;
extern "C" unsigned long g_00636164;
extern "C" unsigned long g_00636168;
extern "C" unsigned long g_0063616c;
extern "C" unsigned long g_00636170;
extern "C" unsigned long g_00636174;
extern "C" unsigned long g_006361fe;
extern "C" unsigned long g_006362f6;
extern "C" unsigned long g_00636320;
extern "C" unsigned long g_00636558;
extern "C" unsigned long g_0063655c;
extern "C" unsigned long g_00636560;
extern "C" unsigned long g_00636564;
extern "C" unsigned long g_00636568;
extern "C" unsigned long g_0063656c;
extern "C" unsigned long g_00636570;
extern "C" unsigned long g_00636574;
extern "C" unsigned long g_00636578;
extern "C" unsigned long g_0063657c;
extern "C" unsigned long g_00636580;
BLSuitItemDataInfoView::~BLSuitItemDataInfoView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_00634da0 + g_00634e14);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  if (*(int *)((int)this + 4*(0x43)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x43)) = 0;
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00634de4 + g_00634e18,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLSuitItemDataInfoView::BLSuitItemDataInfoView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)("P¯");
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLSuitItemDataInfoView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * BLSuitItemDataInfoView::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x14c)));
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

undefined4 BLSuitItemDataInfoView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 BLSuitItemDataInfoView::getBackGround()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

undefined4 BLSuitItemDataInfoView::getSprItem()
{
  return *(undefined4 *)(((int)this) + 0x120);
}

undefined4 BLSuitItemDataInfoView::getSprLine()
{
  return *(undefined4 *)(((int)this) + 0x11c);
}

undefined4 BLSuitItemDataInfoView::getBtnUnequip()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

undefined4 BLSuitItemDataInfoView::getBtnClose()
{
  return *(undefined4 *)(((int)this) + 0x124);
}

undefined4 BLSuitItemDataInfoView::getLabUnequip()
{
  return *(undefined4 *)(((int)this) + 0x118);
}

undefined4 BLSuitItemDataInfoView::OtherItemInfoDown()
{
  return *(undefined4 *)(((int)this) + 0x108);
}

undefined4 BLSuitItemDataInfoView::getLabItemName()
{
  return *(undefined4 *)(((int)this) + 0x128);
}

undefined4 BLSuitItemDataInfoView::getLabNumTitle()
{
  return *(undefined4 *)(((int)this) + 300);
}

undefined4 BLSuitItemDataInfoView::getLabNum()
{
  return *(undefined4 *)(((int)this) + 0x130);
}

undefined4 BLSuitItemDataInfoView::getLabPriceTitle()
{
  return *(undefined4 *)(((int)this) + 0x134);
}

undefined4 BLSuitItemDataInfoView::getLabPrice()
{
  return *(undefined4 *)(((int)this) + 0x138);
}

undefined4 BLSuitItemDataInfoView::getLabGFSTitle()
{
  return *(undefined4 *)(((int)this) + 0x13c);
}

undefined4 BLSuitItemDataInfoView::getLabGFS()
{
  return *(undefined4 *)(((int)this) + 0x140);
}

undefined4 BLSuitItemDataInfoView::getLabSuitTitle()
{
  return *(undefined4 *)(((int)this) + 0x144);
}

undefined4 BLSuitItemDataInfoView::getLabSuit()
{
  return *(undefined4 *)(((int)this) + 0x148);
}

void BLSuitItemDataInfoView::onEnter()
{
  ((BLSuitItemDataInfoPresenter *)*(undefined4 *)(((int)this) + 0x10c))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLSuitItemDataInfoView::onExit()
{
  ((BLSuitItemDataInfoPresenter *)*(undefined4 *)(((int)this) + 0x10c))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
bool BLSuitItemDataInfoView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
