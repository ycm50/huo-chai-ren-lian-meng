#include "BLTreasureBossView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLTreasureBossPresenter.h"
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
extern "C" unsigned long UNK_005deec0;
extern "C" unsigned long UNK_005def04;
extern "C" unsigned long UNK_005def48;
extern "C" unsigned long UNK_005def70;
extern "C" unsigned long UNK_005df12a;
extern "C" unsigned long UNK_005df206;
extern "C" unsigned long UNK_005df2b4;
extern "C" unsigned long UNK_005df2ee;
extern "C" unsigned long UNK_005df3be;
extern "C" unsigned long UNK_005df3c2;
extern "C" unsigned long UNK_005df428;
extern "C" unsigned long UNK_005df43a;
extern "C" unsigned long UNK_005df4da;
extern "C" unsigned long UNK_005df56a;
extern "C" unsigned long UNK_005df614;
extern "C" unsigned long UNK_005df616;
extern "C" unsigned long UNK_005df691;
extern "C" unsigned long UNK_005df6a4;
extern "C" unsigned long UNK_005df6a6;
extern "C" unsigned long UNK_005df7be;
extern "C" unsigned long UNK_005df84e;
extern "C" unsigned long UNK_005df8f8;
extern "C" unsigned long UNK_005df8fa;
extern "C" unsigned long UNK_005df90a;
extern "C" unsigned long UNK_005df9fc;
extern "C" unsigned long UNK_005dfa2c;
extern "C" unsigned long UNK_005dfadc;
extern "C" unsigned long UNK_005dfade;
extern "C" unsigned long UNK_005dfb5b;
extern "C" unsigned long UNK_005dfb6e;
extern "C" unsigned long UNK_005dfb70;
extern "C" unsigned long UNK_005dfc88;
extern "C" unsigned long UNK_005dfd1e;
extern "C" unsigned long UNK_005dfd20;
extern "C" unsigned long UNK_005dfda1;
extern "C" unsigned long UNK_005dfda4;
extern "C" unsigned long UNK_005dfe02;
extern "C" unsigned long UNK_005dfe04;
extern "C" unsigned long UNK_005dff04;
extern "C" unsigned long UNK_005dff34;
extern "C" unsigned long UNK_005dffe6;
extern "C" unsigned long UNK_005dfffc;
extern "C" unsigned long UNK_005e0087;
extern "C" unsigned long UNK_005e009c;
extern "C" unsigned long UNK_005e00b2;
extern "C" unsigned long UNK_005e0161;
extern "C" unsigned long UNK_005e016e;
extern "C" unsigned long UNK_005e0272;
extern "C" unsigned long UNK_005e02a2;
extern "C" unsigned long UNK_005e034e;
extern "C" unsigned long UNK_005e0350;
extern "C" unsigned long UNK_005e03a1;
extern "C" unsigned long _DAT_005df010;
extern "C" unsigned long _DAT_005df014;
extern "C" unsigned long _UNK_005def34;
extern "C" unsigned long _UNK_005def38;
extern "C" unsigned long _UNK_005def4c;
extern "C" unsigned long _UNK_005def74;
extern "C" unsigned long _UNK_005df508;
extern "C" unsigned long _UNK_005df50c;
extern "C" unsigned long _UNK_005df510;
extern "C" unsigned long _UNK_005df514;
extern "C" unsigned long _UNK_005df518;
extern "C" unsigned long _UNK_005df51c;
extern "C" unsigned long _UNK_005df520;
extern "C" unsigned long _UNK_005df524;
extern "C" unsigned long _UNK_005df528;
extern "C" unsigned long _UNK_005df52c;
extern "C" unsigned long _UNK_005df530;
extern "C" unsigned long _UNK_005df534;
extern "C" unsigned long _UNK_005df538;
extern "C" unsigned long _UNK_005df53c;
extern "C" unsigned long _UNK_005df540;
extern "C" unsigned long _UNK_005df544;
extern "C" unsigned long _UNK_005df548;
extern "C" unsigned long _UNK_005df54c;
extern "C" unsigned long _UNK_005df550;
extern "C" unsigned long _UNK_005df554;
extern "C" unsigned long _UNK_005df558;
extern "C" unsigned long _UNK_005df944;
extern "C" unsigned long _UNK_005df948;
extern "C" unsigned long _UNK_005df94c;
extern "C" unsigned long _UNK_005df950;
extern "C" unsigned long _UNK_005df954;
extern "C" unsigned long _UNK_005df958;
extern "C" unsigned long _UNK_005df95c;
extern "C" unsigned long _UNK_005df960;
extern "C" unsigned long _UNK_005df964;
extern "C" unsigned long _UNK_005df968;
extern "C" unsigned long _UNK_005df96c;
extern "C" unsigned long _UNK_005df970;
extern "C" unsigned long _UNK_005df974;
extern "C" unsigned long _UNK_005df978;
extern "C" unsigned long _UNK_005df97c;
extern "C" unsigned long _UNK_005df980;
extern "C" unsigned long _UNK_005df984;
extern "C" unsigned long _UNK_005df988;
extern "C" unsigned long _UNK_005df98c;
extern "C" unsigned long _UNK_005df990;
extern "C" unsigned long _UNK_005df994;
extern "C" unsigned long _UNK_005dfda4;
extern "C" unsigned long _UNK_005dfda8;
extern "C" unsigned long _UNK_005dfdac;
extern "C" unsigned long _UNK_005dfdb0;
extern "C" unsigned long _UNK_005dfdb4;
extern "C" unsigned long _UNK_005dfdb8;
extern "C" unsigned long _UNK_005dfdbc;
extern "C" unsigned long _UNK_005dfdc0;
extern "C" unsigned long _UNK_005dfdc4;
extern "C" unsigned long _UNK_005dfdc8;
extern "C" unsigned long _UNK_005dfdcc;
extern "C" unsigned long _UNK_005dfdd0;
extern "C" unsigned long _UNK_005dfdd4;
extern "C" unsigned long _UNK_005dfdd8;
extern "C" unsigned long _UNK_005dfddc;
extern "C" unsigned long _UNK_005dfde0;
extern "C" unsigned long _UNK_005dfde4;
extern "C" unsigned long _UNK_005dfde8;
extern "C" unsigned long _UNK_005dfdec;
extern "C" unsigned long _UNK_005dfdf0;
extern "C" unsigned long _UNK_005dfdf4;
extern "C" unsigned long _UNK_005e01dc;
extern "C" unsigned long _UNK_005e01e0;
extern "C" unsigned long _UNK_005e01e4;
extern "C" unsigned long _UNK_005e01e8;
extern "C" unsigned long _UNK_005e01ec;
extern "C" unsigned long _UNK_005e01f0;
extern "C" unsigned long _UNK_005e01f4;
extern "C" unsigned long _UNK_005e01f8;
extern "C" unsigned long _UNK_005e01fc;
extern "C" unsigned long _UNK_005e0200;
extern "C" unsigned long _UNK_005e0204;
extern "C" unsigned long _UNK_005e0208;
extern "C" unsigned long _UNK_005e020c;
extern "C" unsigned long _UNK_005e0210;
extern "C" unsigned long _UNK_005e0214;
extern "C" unsigned long _UNK_005e0218;
extern "C" unsigned long _UNK_005e021c;
extern "C" unsigned long _UNK_005e0220;
extern "C" unsigned long _UNK_005e0224;
extern "C" unsigned long _UNK_005e0228;
extern "C" unsigned long _UNK_005e0458;
extern "C" unsigned long _UNK_005e045c;
extern "C" unsigned long _UNK_005e0460;
extern "C" unsigned long _UNK_005e0464;
extern "C" unsigned long _UNK_005e0468;
extern "C" unsigned long _UNK_005e046c;
extern "C" unsigned long _UNK_005e0470;
extern "C" unsigned long _UNK_005e0474;
extern "C" unsigned long _UNK_005e0478;
extern "C" unsigned long _UNK_005e047c;
extern "C" unsigned long _UNK_005e0480;
extern "C" unsigned long _UNK_005e0484;
extern "C" unsigned long _UNK_005e0488;
extern "C" unsigned long g_005deec0;
extern "C" unsigned long g_005def04;
extern "C" unsigned long g_005def34;
extern "C" unsigned long g_005def38;
extern "C" unsigned long g_005def48;
extern "C" unsigned long g_005def4c;
extern "C" unsigned long g_005def70;
extern "C" unsigned long g_005def74;
extern "C" unsigned long g_005df010;
extern "C" unsigned long g_005df014;
extern "C" unsigned long g_005df12a;
extern "C" unsigned long g_005df206;
extern "C" unsigned long g_005df2b4;
extern "C" unsigned long g_005df2ee;
extern "C" unsigned long g_005df3be;
extern "C" unsigned long g_005df3c2;
extern "C" unsigned long g_005df428;
extern "C" unsigned long g_005df43a;
extern "C" unsigned long g_005df4da;
extern "C" unsigned long g_005df508;
extern "C" unsigned long g_005df50c;
extern "C" unsigned long g_005df510;
extern "C" unsigned long g_005df514;
extern "C" unsigned long g_005df518;
extern "C" unsigned long g_005df51c;
extern "C" unsigned long g_005df520;
extern "C" unsigned long g_005df524;
extern "C" unsigned long g_005df528;
extern "C" unsigned long g_005df52c;
extern "C" unsigned long g_005df530;
extern "C" unsigned long g_005df534;
extern "C" unsigned long g_005df538;
extern "C" unsigned long g_005df53c;
extern "C" unsigned long g_005df540;
extern "C" unsigned long g_005df544;
extern "C" unsigned long g_005df548;
extern "C" unsigned long g_005df54c;
extern "C" unsigned long g_005df550;
extern "C" unsigned long g_005df554;
extern "C" unsigned long g_005df558;
extern "C" unsigned long g_005df56a;
extern "C" unsigned long g_005df614;
extern "C" unsigned long g_005df616;
extern "C" unsigned long g_005df691;
extern "C" unsigned long g_005df6a4;
extern "C" unsigned long g_005df6a6;
extern "C" unsigned long g_005df7be;
extern "C" unsigned long g_005df84e;
extern "C" unsigned long g_005df8f8;
extern "C" unsigned long g_005df8fa;
extern "C" unsigned long g_005df90a;
extern "C" unsigned long g_005df944;
extern "C" unsigned long g_005df948;
extern "C" unsigned long g_005df94c;
extern "C" unsigned long g_005df950;
extern "C" unsigned long g_005df954;
extern "C" unsigned long g_005df958;
extern "C" unsigned long g_005df95c;
extern "C" unsigned long g_005df960;
extern "C" unsigned long g_005df964;
extern "C" unsigned long g_005df968;
extern "C" unsigned long g_005df96c;
extern "C" unsigned long g_005df970;
extern "C" unsigned long g_005df974;
extern "C" unsigned long g_005df978;
extern "C" unsigned long g_005df97c;
extern "C" unsigned long g_005df980;
extern "C" unsigned long g_005df984;
extern "C" unsigned long g_005df988;
extern "C" unsigned long g_005df98c;
extern "C" unsigned long g_005df990;
extern "C" unsigned long g_005df994;
extern "C" unsigned long g_005df9fc;
extern "C" unsigned long g_005dfa2c;
extern "C" unsigned long g_005dfadc;
extern "C" unsigned long g_005dfade;
extern "C" unsigned long g_005dfb5b;
extern "C" unsigned long g_005dfb6e;
extern "C" unsigned long g_005dfb70;
extern "C" unsigned long g_005dfc88;
extern "C" unsigned long g_005dfd1e;
extern "C" unsigned long g_005dfd20;
extern "C" unsigned long g_005dfda1;
extern "C" unsigned long g_005dfda4;
extern "C" unsigned long g_005dfda8;
extern "C" unsigned long g_005dfdac;
extern "C" unsigned long g_005dfdb0;
extern "C" unsigned long g_005dfdb4;
extern "C" unsigned long g_005dfdb8;
extern "C" unsigned long g_005dfdbc;
extern "C" unsigned long g_005dfdc0;
extern "C" unsigned long g_005dfdc4;
extern "C" unsigned long g_005dfdc8;
extern "C" unsigned long g_005dfdcc;
extern "C" unsigned long g_005dfdd0;
extern "C" unsigned long g_005dfdd4;
extern "C" unsigned long g_005dfdd8;
extern "C" unsigned long g_005dfddc;
extern "C" unsigned long g_005dfde0;
extern "C" unsigned long g_005dfde4;
extern "C" unsigned long g_005dfde8;
extern "C" unsigned long g_005dfdec;
extern "C" unsigned long g_005dfdf0;
extern "C" unsigned long g_005dfdf4;
extern "C" unsigned long g_005dfe02;
extern "C" unsigned long g_005dfe04;
extern "C" unsigned long g_005dff04;
extern "C" unsigned long g_005dff34;
extern "C" unsigned long g_005dffe6;
extern "C" unsigned long g_005dfffc;
extern "C" unsigned long g_005e0087;
extern "C" unsigned long g_005e009c;
extern "C" unsigned long g_005e00b2;
extern "C" unsigned long g_005e0161;
extern "C" unsigned long g_005e016e;
extern "C" unsigned long g_005e01dc;
extern "C" unsigned long g_005e01e0;
extern "C" unsigned long g_005e01e4;
extern "C" unsigned long g_005e01e8;
extern "C" unsigned long g_005e01ec;
extern "C" unsigned long g_005e01f0;
extern "C" unsigned long g_005e01f4;
extern "C" unsigned long g_005e01f8;
extern "C" unsigned long g_005e01fc;
extern "C" unsigned long g_005e0200;
extern "C" unsigned long g_005e0204;
extern "C" unsigned long g_005e0208;
extern "C" unsigned long g_005e020c;
extern "C" unsigned long g_005e0210;
extern "C" unsigned long g_005e0214;
extern "C" unsigned long g_005e0218;
extern "C" unsigned long g_005e021c;
extern "C" unsigned long g_005e0220;
extern "C" unsigned long g_005e0224;
extern "C" unsigned long g_005e0228;
extern "C" unsigned long g_005e0272;
extern "C" unsigned long g_005e02a2;
extern "C" unsigned long g_005e034e;
extern "C" unsigned long g_005e0350;
extern "C" unsigned long g_005e03a1;
extern "C" unsigned long g_005e0458;
extern "C" unsigned long g_005e045c;
extern "C" unsigned long g_005e0460;
extern "C" unsigned long g_005e0464;
extern "C" unsigned long g_005e0468;
extern "C" unsigned long g_005e046c;
extern "C" unsigned long g_005e0470;
extern "C" unsigned long g_005e0474;
extern "C" unsigned long g_005e0478;
extern "C" unsigned long g_005e047c;
extern "C" unsigned long g_005e0480;
extern "C" unsigned long g_005e0484;
extern "C" unsigned long g_005e0488;
BLTreasureBossView::~BLTreasureBossView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_005deec0 + g_005def34);
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
  func_0079e45c(&uStack_14,&g_005def04 + g_005def38,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLTreasureBossView::BLTreasureBossView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(g_005df010 + 0x5defb8);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLTreasureBossView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * BLTreasureBossView::create()
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

undefined4 BLTreasureBossView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x108);
}

undefined4 BLTreasureBossView::getBtnPlay()
{
  return *(undefined4 *)(((int)this) + 0x118);
}

undefined4 BLTreasureBossView::getBtnRelease()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 BLTreasureBossView::getBtnReLife()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

undefined4 BLTreasureBossView::getBtnReStart()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

undefined4 BLTreasureBossView::getBtnClose()
{
  return *(undefined4 *)(((int)this) + 0x11c);
}

undefined4 BLTreasureBossView::getBtnRefresh()
{
  return *(undefined4 *)(((int)this) + 0x120);
}

undefined4 BLTreasureBossView::getLabeAttrack()
{
  return *(undefined4 *)(((int)this) + 300);
}

undefined4 BLTreasureBossView::getLabeName()
{
  return *(undefined4 *)(((int)this) + 0x128);
}

undefined4 BLTreasureBossView::getSpHero()
{
  return *(undefined4 *)(((int)this) + 0x124);
}

void BLTreasureBossView::onExit()
{
  ((BLTreasureBossPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

void BLTreasureBossView::onEnter()
{
  ((BLTreasureBossPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
bool BLTreasureBossView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
