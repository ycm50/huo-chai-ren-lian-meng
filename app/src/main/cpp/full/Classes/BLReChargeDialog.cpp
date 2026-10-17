#include "BLReChargeDialog.h"
#include "BLLeakUtils.h"
#include "BLPoPSalePresenter.h"
#include "BLPoPSaleView.h"
#include "DebugLocalSys.h"
#include "PlatformHelp.h"
#include "UIManager.h"
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
extern "C" long long func_0079e55c(...);
extern "C" long long ghidra_CONCAT13(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_00645238;
extern "C" unsigned long UNK_00645282;
extern "C" unsigned long UNK_006452d4;
extern "C" unsigned long UNK_006452fc;
extern "C" unsigned long UNK_0064543e;
extern "C" unsigned long UNK_0064548e;
extern "C" unsigned long UNK_00645498;
extern "C" unsigned long UNK_006454d6;
extern "C" unsigned long UNK_006454f0;
extern "C" unsigned long UNK_006454fc;
extern "C" unsigned long UNK_00645524;
extern "C" unsigned long UNK_00645586;
extern "C" unsigned long UNK_00645634;
extern "C" unsigned long UNK_0064571a;
extern "C" unsigned long UNK_00645814;
extern "C" unsigned long UNK_00645818;
extern "C" unsigned long UNK_006458d2;
extern "C" unsigned long UNK_00645978;
extern "C" unsigned long UNK_006459be;
extern "C" unsigned long UNK_00645aba;
extern "C" unsigned long UNK_00645abc;
extern "C" unsigned long UNK_00645b08;
extern "C" unsigned long _DAT_006453cc;
extern "C" unsigned long _DAT_006453d0;
extern "C" unsigned long _DAT_006453d4;
extern "C" unsigned long _UNK_006452c0;
extern "C" unsigned long _UNK_006452c4;
extern "C" unsigned long _UNK_006452d8;
extern "C" unsigned long _UNK_00645300;
extern "C" unsigned long _UNK_006455c8;
extern "C" unsigned long _UNK_006455cc;
extern "C" unsigned long _UNK_006455d0;
extern "C" unsigned long _UNK_006455d4;
extern "C" unsigned long _UNK_006455d8;
extern "C" unsigned long _UNK_006455dc;
extern "C" unsigned long _UNK_006455e0;
extern "C" unsigned long _UNK_006455e4;
extern "C" unsigned long _UNK_006455e8;
extern "C" unsigned long _UNK_006455ec;
extern "C" unsigned long _UNK_006455f0;
extern "C" unsigned long _UNK_006455f4;
extern "C" unsigned long _UNK_006455f8;
extern "C" unsigned long _UNK_006455fc;
extern "C" unsigned long _UNK_00645600;
extern "C" unsigned long _UNK_00645604;
extern "C" unsigned long _UNK_00645a18;
extern "C" unsigned long _UNK_00645a1c;
extern "C" unsigned long _UNK_00645a20;
extern "C" unsigned long _UNK_00645a24;
extern "C" unsigned long _UNK_00645a28;
extern "C" unsigned long _UNK_00645a2c;
extern "C" unsigned long _UNK_00645a30;
extern "C" unsigned long _UNK_00645a34;
extern "C" unsigned long _UNK_00645a38;
extern "C" unsigned long _UNK_00645a3c;
extern "C" unsigned long _UNK_00645a40;
extern "C" unsigned long _UNK_00645a44;
extern "C" unsigned long _UNK_00645a48;
extern "C" unsigned long _UNK_00645a4c;
extern "C" unsigned long _UNK_00645a50;
extern "C" unsigned long _UNK_00645a54;
extern "C" unsigned long _UNK_00645c84;
extern "C" unsigned long _UNK_00645c88;
extern "C" unsigned long _UNK_00645c8c;
extern "C" unsigned long _UNK_00645c90;
extern "C" unsigned long _UNK_00645c94;
extern "C" unsigned long _UNK_00645c98;
extern "C" unsigned long _UNK_00645c9c;
extern "C" unsigned long _UNK_00645ca0;
extern "C" unsigned long _UNK_00645ca4;
extern "C" unsigned long _UNK_00645ca8;
extern "C" unsigned long _UNK_00645cac;
extern "C" unsigned long _UNK_00645cb0;
extern "C" unsigned long _UNK_00645cb4;
extern "C" unsigned long g_00645238;
extern "C" unsigned long g_00645282;
extern "C" unsigned long g_006452c0;
extern "C" unsigned long g_006452c4;
extern "C" unsigned long g_006452d4;
extern "C" unsigned long g_006452d8;
extern "C" unsigned long g_006452fc;
extern "C" unsigned long g_00645300;
extern "C" unsigned long g_006453cc;
extern "C" unsigned long g_006453d0;
extern "C" unsigned long g_006453d4;
extern "C" unsigned long g_0064543e;
extern "C" unsigned long g_0064548e;
extern "C" unsigned long g_00645498;
extern "C" unsigned long g_006454d6;
extern "C" unsigned long g_006454f0;
extern "C" unsigned long g_006454fc;
extern "C" unsigned long g_00645524;
extern "C" unsigned long g_00645586;
extern "C" unsigned long g_006455c8;
extern "C" unsigned long g_006455cc;
extern "C" unsigned long g_006455d0;
extern "C" unsigned long g_006455d4;
extern "C" unsigned long g_006455d8;
extern "C" unsigned long g_006455dc;
extern "C" unsigned long g_006455e0;
extern "C" unsigned long g_006455e4;
extern "C" unsigned long g_006455e8;
extern "C" unsigned long g_006455ec;
extern "C" unsigned long g_006455f0;
extern "C" unsigned long g_006455f4;
extern "C" unsigned long g_006455f8;
extern "C" unsigned long g_006455fc;
extern "C" unsigned long g_00645600;
extern "C" unsigned long g_00645604;
extern "C" unsigned long g_00645634;
extern "C" unsigned long g_0064571a;
extern "C" unsigned long g_00645814;
extern "C" unsigned long g_00645818;
extern "C" unsigned long g_006458d2;
extern "C" unsigned long g_00645978;
extern "C" unsigned long g_006459be;
extern "C" unsigned long g_00645a18;
extern "C" unsigned long g_00645a1c;
extern "C" unsigned long g_00645a20;
extern "C" unsigned long g_00645a24;
extern "C" unsigned long g_00645a28;
extern "C" unsigned long g_00645a2c;
extern "C" unsigned long g_00645a30;
extern "C" unsigned long g_00645a34;
extern "C" unsigned long g_00645a38;
extern "C" unsigned long g_00645a3c;
extern "C" unsigned long g_00645a40;
extern "C" unsigned long g_00645a44;
extern "C" unsigned long g_00645a48;
extern "C" unsigned long g_00645a4c;
extern "C" unsigned long g_00645a50;
extern "C" unsigned long g_00645a54;
extern "C" unsigned long g_00645aba;
extern "C" unsigned long g_00645abc;
extern "C" unsigned long g_00645b08;
extern "C" unsigned long g_00645c84;
extern "C" unsigned long g_00645c88;
extern "C" unsigned long g_00645c8c;
extern "C" unsigned long g_00645c90;
extern "C" unsigned long g_00645c94;
extern "C" unsigned long g_00645c98;
extern "C" unsigned long g_00645c9c;
extern "C" unsigned long g_00645ca0;
extern "C" unsigned long g_00645ca4;
extern "C" unsigned long g_00645ca8;
extern "C" unsigned long g_00645cac;
extern "C" unsigned long g_00645cb0;
extern "C" unsigned long g_00645cb4;
BLReChargeDialog::~BLReChargeDialog()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  iVar2 = *(int *)(&g_00645238 + g_006452c0);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  piStack_20 = (int *)((int)this);
  uStack_1c = (undefined4)(p2);
  uStack_18 = (undefined4)(p3);
  if (*(int *)((int)this + 4*(0x42)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x42)) = 0;
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_1c,&g_00645282 + g_006452c4,&piStack_20);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_1c);
  func_0079e2bc(&uStack_1c);
  func_0079e2bc(((int)this) + 0x4a);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}


int * BLReChargeDialog::create()
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

undefined4 BLReChargeDialog::getBackGround()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 BLReChargeDialog::getTableViewReCharge()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

undefined4 BLReChargeDialog::getTabBg()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

undefined4 BLReChargeDialog::getLabTitle()
{
  return *(undefined4 *)(((int)this) + 0x118);
}

undefined4 BLReChargeDialog::getBtnClose()
{
  return *(undefined4 *)(((int)this) + 0x120);
}


void BLReChargeDialog::onEnter()
{
  ((cocos2d::CCLayer *)this)->onEnter();
  return;
}

void BLReChargeDialog::onExit()
{
  ((cocos2d::CCLayer *)this)->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (3) =====
BLReChargeDialog::BLReChargeDialog()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = (undefined4)(intptr_t)(*(int *)(g_006453cc + 0x645344));
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  *(int *)((int)this + 4*(0x4a)) = *(int *)(g_006453d0 + 0x64536e) + 0xc;
  iVar2 = (undefined4)(intptr_t)(cocos2d::CCArray::create());
  *(int *)((int)this + 4*(0x42)) = iVar2;
  if (iVar2 != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLReChargeDialog"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

void BLReChargeDialog::onBtnClick(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

bool BLReChargeDialog::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
