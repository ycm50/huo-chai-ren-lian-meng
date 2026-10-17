#include "BLJianShengSkinView.h"
#include "BLJianShengSkinPresenter.h"
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
extern "C" unsigned long UNK_0055156c;
extern "C" unsigned long UNK_0055159e;
extern "C" unsigned long UNK_005515e4;
extern "C" unsigned long UNK_0055160c;
extern "C" unsigned long UNK_005517b2;
extern "C" unsigned long UNK_005518b2;
extern "C" unsigned long UNK_005518e8;
extern "C" unsigned long UNK_00551996;
extern "C" unsigned long UNK_005519ca;
extern "C" unsigned long UNK_00551a98;
extern "C" unsigned long UNK_00551ac8;
extern "C" unsigned long UNK_00551c3c;
extern "C" unsigned long UNK_00551c66;
extern "C" unsigned long UNK_00551d84;
extern "C" unsigned long UNK_00551e36;
extern "C" unsigned long UNK_00551e38;
extern "C" unsigned long UNK_00551ec2;
extern "C" unsigned long UNK_00551ed2;
extern "C" unsigned long UNK_00551fc2;
extern "C" unsigned long UNK_00551fc6;
extern "C" unsigned long UNK_0055214c;
extern "C" unsigned long UNK_00552170;
extern "C" unsigned long UNK_00552246;
extern "C" unsigned long UNK_00552310;
extern "C" unsigned long UNK_0055233a;
extern "C" unsigned long UNK_005523e2;
extern "C" unsigned long UNK_0055242a;
extern "C" unsigned long UNK_00552456;
extern "C" unsigned long _DAT_005516ac;
extern "C" unsigned long _DAT_005516b0;
extern "C" unsigned long _UNK_005515d0;
extern "C" unsigned long _UNK_005515d4;
extern "C" unsigned long _UNK_005515e8;
extern "C" unsigned long _UNK_00551610;
extern "C" unsigned long _UNK_00551b94;
extern "C" unsigned long _UNK_00551b98;
extern "C" unsigned long _UNK_00551b9c;
extern "C" unsigned long _UNK_00551ba0;
extern "C" unsigned long _UNK_00551ba4;
extern "C" unsigned long _UNK_00551ba8;
extern "C" unsigned long _UNK_00551bac;
extern "C" unsigned long _UNK_00551bb0;
extern "C" unsigned long _UNK_00551bb4;
extern "C" unsigned long _UNK_00551bb8;
extern "C" unsigned long _UNK_00551bbc;
extern "C" unsigned long _UNK_00551bc0;
extern "C" unsigned long _UNK_00551bc4;
extern "C" unsigned long _UNK_00551bc8;
extern "C" unsigned long _UNK_00551bcc;
extern "C" unsigned long _UNK_00551bd0;
extern "C" unsigned long _UNK_00551bd4;
extern "C" unsigned long _UNK_00551bd8;
extern "C" unsigned long _UNK_00551bdc;
extern "C" unsigned long _UNK_00551be0;
extern "C" unsigned long _UNK_00551fcc;
extern "C" unsigned long _UNK_00551fd0;
extern "C" unsigned long _UNK_00551fd4;
extern "C" unsigned long _UNK_00551fd8;
extern "C" unsigned long _UNK_00551fdc;
extern "C" unsigned long _UNK_00551fe0;
extern "C" unsigned long _UNK_00551fe4;
extern "C" unsigned long _UNK_00551fe8;
extern "C" unsigned long _UNK_00551fec;
extern "C" unsigned long _UNK_00551ff0;
extern "C" unsigned long _UNK_00551ff4;
extern "C" unsigned long _UNK_00551ff8;
extern "C" unsigned long _UNK_00551ffc;
extern "C" unsigned long _UNK_00552000;
extern "C" unsigned long _UNK_00552004;
extern "C" unsigned long _UNK_00552008;
extern "C" unsigned long _UNK_0055200c;
extern "C" unsigned long _UNK_00552010;
extern "C" unsigned long _UNK_00552014;
extern "C" unsigned long _UNK_0055245c;
extern "C" unsigned long _UNK_00552460;
extern "C" unsigned long _UNK_00552464;
extern "C" unsigned long _UNK_00552468;
extern "C" unsigned long _UNK_0055246c;
extern "C" unsigned long _UNK_00552470;
extern "C" unsigned long _UNK_00552474;
extern "C" unsigned long _UNK_00552478;
extern "C" unsigned long _UNK_0055247c;
extern "C" unsigned long _UNK_00552480;
extern "C" unsigned long _UNK_00552484;
extern "C" unsigned long _UNK_00552488;
extern "C" unsigned long _UNK_0055248c;
extern "C" unsigned long _UNK_00552490;
extern "C" unsigned long _UNK_00552494;
extern "C" unsigned long _UNK_005525e8;
extern "C" unsigned long _UNK_005525ec;
extern "C" unsigned long _UNK_005525f0;
extern "C" unsigned long g_0055156c;
extern "C" unsigned long g_0055159e;
extern "C" unsigned long g_005515d0;
extern "C" unsigned long g_005515d4;
extern "C" unsigned long g_005515e4;
extern "C" unsigned long g_005515e8;
extern "C" unsigned long g_0055160c;
extern "C" unsigned long g_00551610;
extern "C" unsigned long g_005516ac;
extern "C" unsigned long g_005516b0;
extern "C" unsigned long g_005517b2;
extern "C" unsigned long g_005518b2;
extern "C" unsigned long g_005518e8;
extern "C" unsigned long g_00551996;
extern "C" unsigned long g_005519ca;
extern "C" unsigned long g_00551a98;
extern "C" unsigned long g_00551ac8;
extern "C" unsigned long g_00551b94;
extern "C" unsigned long g_00551b98;
extern "C" unsigned long g_00551b9c;
extern "C" unsigned long g_00551ba0;
extern "C" unsigned long g_00551ba4;
extern "C" unsigned long g_00551ba8;
extern "C" unsigned long g_00551bac;
extern "C" unsigned long g_00551bb0;
extern "C" unsigned long g_00551bb4;
extern "C" unsigned long g_00551bb8;
extern "C" unsigned long g_00551bbc;
extern "C" unsigned long g_00551bc0;
extern "C" unsigned long g_00551bc4;
extern "C" unsigned long g_00551bc8;
extern "C" unsigned long g_00551bcc;
extern "C" unsigned long g_00551bd0;
extern "C" unsigned long g_00551bd4;
extern "C" unsigned long g_00551bd8;
extern "C" unsigned long g_00551bdc;
extern "C" unsigned long g_00551be0;
extern "C" unsigned long g_00551c3c;
extern "C" unsigned long g_00551c66;
extern "C" unsigned long g_00551d84;
extern "C" unsigned long g_00551e36;
extern "C" unsigned long g_00551e38;
extern "C" unsigned long g_00551ec2;
extern "C" unsigned long g_00551ed2;
extern "C" unsigned long g_00551fc2;
extern "C" unsigned long g_00551fc6;
extern "C" unsigned long g_00551fcc;
extern "C" unsigned long g_00551fd0;
extern "C" unsigned long g_00551fd4;
extern "C" unsigned long g_00551fd8;
extern "C" unsigned long g_00551fdc;
extern "C" unsigned long g_00551fe0;
extern "C" unsigned long g_00551fe4;
extern "C" unsigned long g_00551fe8;
extern "C" unsigned long g_00551fec;
extern "C" unsigned long g_00551ff0;
extern "C" unsigned long g_00551ff4;
extern "C" unsigned long g_00551ff8;
extern "C" unsigned long g_00551ffc;
extern "C" unsigned long g_00552000;
extern "C" unsigned long g_00552004;
extern "C" unsigned long g_00552008;
extern "C" unsigned long g_0055200c;
extern "C" unsigned long g_00552010;
extern "C" unsigned long g_00552014;
extern "C" unsigned long g_0055214c;
extern "C" unsigned long g_00552170;
extern "C" unsigned long g_00552246;
extern "C" unsigned long g_00552310;
extern "C" unsigned long g_0055233a;
extern "C" unsigned long g_005523e2;
extern "C" unsigned long g_0055242a;
extern "C" unsigned long g_00552456;
extern "C" unsigned long g_0055245c;
extern "C" unsigned long g_00552460;
extern "C" unsigned long g_00552464;
extern "C" unsigned long g_00552468;
extern "C" unsigned long g_0055246c;
extern "C" unsigned long g_00552470;
extern "C" unsigned long g_00552474;
extern "C" unsigned long g_00552478;
extern "C" unsigned long g_0055247c;
extern "C" unsigned long g_00552480;
extern "C" unsigned long g_00552484;
extern "C" unsigned long g_00552488;
extern "C" unsigned long g_0055248c;
extern "C" unsigned long g_00552490;
extern "C" unsigned long g_00552494;
extern "C" unsigned long g_005525e8;
extern "C" unsigned long g_005525ec;
extern "C" unsigned long g_005525f0;
BLJianShengSkinView::~BLJianShengSkinView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = (undefined4)(intptr_t)(*(int *)((unsigned char *)((char *)&g_0055156c + (intptr_t)(g_005515d0))));
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,(unsigned char *)((char *)&g_0055159e + (intptr_t)(g_005515d4)),&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLJianShengSkinView::BLJianShengSkinView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = (undefined4)(intptr_t)(*(int *)(g_005516ac + 0x551654));
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLJianShengSkinView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * BLJianShengSkinView::create()
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

undefined4 BLJianShengSkinView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x108);
}

undefined4 BLJianShengSkinView::getBackGround()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 BLJianShengSkinView::getTabBg()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

undefined4 BLJianShengSkinView::getBtnClose()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

undefined4 BLJianShengSkinView::getLabTitle()
{
  return *(undefined4 *)(((int)this) + 0x118);
}

undefined4 BLJianShengSkinView::getBtnGet()
{
  return *(undefined4 *)(((int)this) + 0x11c);
}

undefined4 BLJianShengSkinView::getLabName()
{
  return *(undefined4 *)(((int)this) + 0x120);
}

void BLJianShengSkinView::onEnter()
{
  ((BLJianShengSkinPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLJianShengSkinView::onExit()
{
  ((BLJianShengSkinPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
bool BLJianShengSkinView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
