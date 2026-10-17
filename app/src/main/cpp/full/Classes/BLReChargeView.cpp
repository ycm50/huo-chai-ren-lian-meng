#include "BLReChargeView.h"
#include "BLLeakUtils.h"
#include "BLReChargePresenter.h"
#include "DebugLocalSys.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <new>   // ghost_fix.js 自动补齐
using namespace cocos2d;
// 兜底声明
extern "C" long long func_006476a2(...);
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_00646a90;
extern "C" unsigned long UNK_00646ad4;
extern "C" unsigned long UNK_00646b18;
extern "C" unsigned long UNK_00646b40;
extern "C" unsigned long UNK_00646ce0;
extern "C" unsigned long UNK_00646d14;
extern "C" unsigned long UNK_00646ef4;
extern "C" unsigned long UNK_00646f26;
extern "C" unsigned long UNK_00647034;
extern "C" unsigned long UNK_00647044;
extern "C" unsigned long UNK_00647080;
extern "C" unsigned long UNK_006470aa;
extern "C" unsigned long UNK_0064718e;
extern "C" unsigned long UNK_00647190;
extern "C" unsigned long UNK_00647260;
extern "C" unsigned long UNK_0064729a;
extern "C" unsigned long UNK_006472a6;
extern "C" unsigned long UNK_006472d6;
extern "C" unsigned long UNK_006472e8;
extern "C" unsigned long UNK_00647306;
extern "C" unsigned long UNK_0064733e;
extern "C" unsigned long UNK_00647396;
extern "C" unsigned long UNK_006473b6;
extern "C" unsigned long UNK_006473e0;
extern "C" unsigned long UNK_006474b6;
extern "C" unsigned long UNK_006474c4;
extern "C" unsigned long UNK_006474ea;
extern "C" unsigned long UNK_006474f6;
extern "C" unsigned long _DAT_00646be0;
extern "C" unsigned long _DAT_00646be4;
extern "C" unsigned long _UNK_00646b04;
extern "C" unsigned long _UNK_00646b08;
extern "C" unsigned long _UNK_00646b1c;
extern "C" unsigned long _UNK_00646b44;
extern "C" unsigned long _UNK_00646f3c;
extern "C" unsigned long _UNK_00646f40;
extern "C" unsigned long _UNK_00646f44;
extern "C" unsigned long _UNK_00646f48;
extern "C" unsigned long _UNK_00646f4c;
extern "C" unsigned long _UNK_00646f50;
extern "C" unsigned long _UNK_00646f54;
extern "C" unsigned long _UNK_00646f58;
extern "C" unsigned long _UNK_00646f5c;
extern "C" unsigned long _UNK_00646f60;
extern "C" unsigned long _UNK_00646f64;
extern "C" unsigned long _UNK_00646f68;
extern "C" unsigned long _UNK_00647340;
extern "C" unsigned long _UNK_00647344;
extern "C" unsigned long _UNK_00647348;
extern "C" unsigned long _UNK_0064734c;
extern "C" unsigned long _UNK_00647350;
extern "C" unsigned long _UNK_00647354;
extern "C" unsigned long _UNK_00647358;
extern "C" unsigned long _UNK_0064735c;
extern "C" unsigned long _UNK_00647360;
extern "C" unsigned long _UNK_00647364;
extern "C" unsigned long _UNK_00647368;
extern "C" unsigned long _UNK_0064736c;
extern "C" unsigned long _UNK_00647370;
extern "C" unsigned long _UNK_00647374;
extern "C" unsigned long _UNK_00647378;
extern "C" unsigned long _UNK_0064737c;
extern "C" unsigned long _UNK_00647380;
extern "C" unsigned long _UNK_00647384;
extern "C" unsigned long _UNK_00647388;
extern "C" unsigned long _UNK_0064738c;
extern "C" unsigned long _UNK_006476b4;
extern "C" unsigned long _UNK_006476b8;
extern "C" unsigned long _UNK_006476bc;
extern "C" unsigned long _UNK_006476c0;
extern "C" unsigned long _UNK_006476c4;
extern "C" unsigned long _UNK_006476c8;
extern "C" unsigned long _UNK_006476cc;
extern "C" unsigned long _UNK_006476d0;
extern "C" unsigned long _UNK_006476d4;
extern "C" unsigned long _UNK_006476d8;
extern "C" unsigned long _UNK_006476dc;
extern "C" unsigned long _UNK_006476e0;
extern "C" unsigned long _UNK_006476e4;
extern "C" unsigned long _UNK_006476e8;
extern "C" unsigned long _UNK_006476ec;
extern "C" unsigned long _UNK_006476f0;
extern "C" unsigned long g_00646a90;
extern "C" unsigned long g_00646ad4;
extern "C" unsigned long g_00646b04;
extern "C" unsigned long g_00646b08;
extern "C" unsigned long g_00646b18;
extern "C" unsigned long g_00646b1c;
extern "C" unsigned long g_00646b40;
extern "C" unsigned long g_00646b44;
extern "C" unsigned long g_00646be0;
extern "C" unsigned long g_00646be4;
extern "C" unsigned long g_00646ce0;
extern "C" unsigned long g_00646d14;
extern "C" unsigned long g_00646ef4;
extern "C" unsigned long g_00646f26;
extern "C" unsigned long g_00646f3c;
extern "C" unsigned long g_00646f40;
extern "C" unsigned long g_00646f44;
extern "C" unsigned long g_00646f48;
extern "C" unsigned long g_00646f4c;
extern "C" unsigned long g_00646f50;
extern "C" unsigned long g_00646f54;
extern "C" unsigned long g_00646f58;
extern "C" unsigned long g_00646f5c;
extern "C" unsigned long g_00646f60;
extern "C" unsigned long g_00646f64;
extern "C" unsigned long g_00646f68;
extern "C" unsigned long g_00647034;
extern "C" unsigned long g_00647044;
extern "C" unsigned long g_00647080;
extern "C" unsigned long g_006470aa;
extern "C" unsigned long g_0064718e;
extern "C" unsigned long g_00647190;
extern "C" unsigned long g_00647260;
extern "C" unsigned long g_0064729a;
extern "C" unsigned long g_006472a6;
extern "C" unsigned long g_006472d6;
extern "C" unsigned long g_006472e8;
extern "C" unsigned long g_00647306;
extern "C" unsigned long g_0064733e;
extern "C" unsigned long g_00647340;
extern "C" unsigned long g_00647344;
extern "C" unsigned long g_00647348;
extern "C" unsigned long g_0064734c;
extern "C" unsigned long g_00647350;
extern "C" unsigned long g_00647354;
extern "C" unsigned long g_00647358;
extern "C" unsigned long g_0064735c;
extern "C" unsigned long g_00647360;
extern "C" unsigned long g_00647364;
extern "C" unsigned long g_00647368;
extern "C" unsigned long g_0064736c;
extern "C" unsigned long g_00647370;
extern "C" unsigned long g_00647374;
extern "C" unsigned long g_00647378;
extern "C" unsigned long g_0064737c;
extern "C" unsigned long g_00647380;
extern "C" unsigned long g_00647384;
extern "C" unsigned long g_00647388;
extern "C" unsigned long g_0064738c;
extern "C" unsigned long g_00647396;
extern "C" unsigned long g_006473b6;
extern "C" unsigned long g_006473e0;
extern "C" unsigned long g_006474b6;
extern "C" unsigned long g_006474c4;
extern "C" unsigned long g_006474ea;
extern "C" unsigned long g_006474f6;
extern "C" unsigned long g_006476b4;
extern "C" unsigned long g_006476b8;
extern "C" unsigned long g_006476bc;
extern "C" unsigned long g_006476c0;
extern "C" unsigned long g_006476c4;
extern "C" unsigned long g_006476c8;
extern "C" unsigned long g_006476cc;
extern "C" unsigned long g_006476d0;
extern "C" unsigned long g_006476d4;
extern "C" unsigned long g_006476d8;
extern "C" unsigned long g_006476dc;
extern "C" unsigned long g_006476e0;
extern "C" unsigned long g_006476e4;
extern "C" unsigned long g_006476e8;
extern "C" unsigned long g_006476ec;
extern "C" unsigned long g_006476f0;
BLReChargeView::~BLReChargeView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_00646a90 + g_00646b04);
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
  func_0079e45c(&uStack_14,&g_00646ad4 + g_00646b08,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLReChargeView::BLReChargeView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(g_00646be0 + 0x646b88);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLReChargeView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * BLReChargeView::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x120)));
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

undefined4 BLReChargeView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x108);
}

undefined4 BLReChargeView::getTableViewReCharge()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 BLReChargeView::getBtnClose()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

undefined4 BLReChargeView::getBtbSanPay()
{
  return *(undefined4 *)(((int)this) + 0x118);
}

undefined4 BLReChargeView::getBtnDuanPay()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

undefined4 BLReChargeView::getBtnExchange()
{
  return *(undefined4 *)(((int)this) + 0x11c);
}

void BLReChargeView::onEnter()
{
  ((BLReChargePresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLReChargeView::onExit()
{
  ((BLReChargePresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
bool BLReChargeView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
