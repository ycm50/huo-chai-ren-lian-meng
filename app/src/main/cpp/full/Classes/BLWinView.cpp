#include "BLWinView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLWinPresenter.h"
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
extern "C" unsigned long UNK_0066b890;
extern "C" unsigned long UNK_0066b8e2;
extern "C" unsigned long UNK_0066b928;
extern "C" unsigned long UNK_0066b950;
extern "C" unsigned long UNK_0066bb6e;
extern "C" unsigned long UNK_0066bc62;
extern "C" unsigned long UNK_0066bc94;
extern "C" unsigned long UNK_0066bd66;
extern "C" unsigned long UNK_0066bd9a;
extern "C" unsigned long UNK_0066be50;
extern "C" unsigned long UNK_0066bf06;
extern "C" unsigned long UNK_0066bf2e;
extern "C" unsigned long UNK_0066c04a;
extern "C" unsigned long UNK_0066c072;
extern "C" unsigned long UNK_0066c144;
extern "C" unsigned long UNK_0066c16e;
extern "C" unsigned long UNK_0066c232;
extern "C" unsigned long UNK_0066c25c;
extern "C" unsigned long UNK_0066c320;
extern "C" unsigned long UNK_0066c34a;
extern "C" unsigned long UNK_0066c44c;
extern "C" unsigned long UNK_0066c476;
extern "C" unsigned long UNK_0066c53a;
extern "C" unsigned long UNK_0066c564;
extern "C" unsigned long UNK_0066c698;
extern "C" unsigned long UNK_0066c706;
extern "C" unsigned long UNK_0066c7a0;
extern "C" unsigned long UNK_0066c886;
extern "C" unsigned long UNK_0066c96c;
extern "C" unsigned long UNK_0066ca0a;
extern "C" unsigned long UNK_0066caf6;
extern "C" unsigned long UNK_0066cbe6;
extern "C" unsigned long UNK_0066cc50;
extern "C" unsigned long UNK_0066cd0e;
extern "C" unsigned long UNK_0066cd42;
extern "C" unsigned long UNK_0066cdfe;
extern "C" unsigned long UNK_0066ce28;
extern "C" unsigned long UNK_0066cee0;
extern "C" unsigned long UNK_0066cf7e;
extern "C" unsigned long UNK_0066d01a;
extern "C" unsigned long UNK_0066d100;
extern "C" unsigned long UNK_0066d19a;
extern "C" unsigned long UNK_0066d23a;
extern "C" unsigned long UNK_0066d2d8;
extern "C" unsigned long _DAT_0066ba08;
extern "C" unsigned long _DAT_0066ba0c;
extern "C" unsigned long _UNK_0066b914;
extern "C" unsigned long _UNK_0066b918;
extern "C" unsigned long _UNK_0066b92c;
extern "C" unsigned long _UNK_0066b954;
extern "C" unsigned long _UNK_0066bf50;
extern "C" unsigned long _UNK_0066bf54;
extern "C" unsigned long _UNK_0066bf58;
extern "C" unsigned long _UNK_0066bf5c;
extern "C" unsigned long _UNK_0066bf60;
extern "C" unsigned long _UNK_0066bf64;
extern "C" unsigned long _UNK_0066bf68;
extern "C" unsigned long _UNK_0066bf6c;
extern "C" unsigned long _UNK_0066bf70;
extern "C" unsigned long _UNK_0066bf74;
extern "C" unsigned long _UNK_0066bf78;
extern "C" unsigned long _UNK_0066bf7c;
extern "C" unsigned long _UNK_0066bf80;
extern "C" unsigned long _UNK_0066bf84;
extern "C" unsigned long _UNK_0066bf88;
extern "C" unsigned long _UNK_0066bf8c;
extern "C" unsigned long _UNK_0066c384;
extern "C" unsigned long _UNK_0066c388;
extern "C" unsigned long _UNK_0066c38c;
extern "C" unsigned long _UNK_0066c390;
extern "C" unsigned long _UNK_0066c394;
extern "C" unsigned long _UNK_0066c398;
extern "C" unsigned long _UNK_0066c39c;
extern "C" unsigned long _UNK_0066c3a0;
extern "C" unsigned long _UNK_0066c3a4;
extern "C" unsigned long _UNK_0066c3a8;
extern "C" unsigned long _UNK_0066c3ac;
extern "C" unsigned long _UNK_0066c3b0;
extern "C" unsigned long _UNK_0066c3b4;
extern "C" unsigned long _UNK_0066c3b8;
extern "C" unsigned long _UNK_0066c3bc;
extern "C" unsigned long _UNK_0066c3c0;
extern "C" unsigned long _UNK_0066c7bc;
extern "C" unsigned long _UNK_0066c7c0;
extern "C" unsigned long _UNK_0066c7c4;
extern "C" unsigned long _UNK_0066c7c8;
extern "C" unsigned long _UNK_0066c7cc;
extern "C" unsigned long _UNK_0066c7d0;
extern "C" unsigned long _UNK_0066c7d4;
extern "C" unsigned long _UNK_0066c7d8;
extern "C" unsigned long _UNK_0066c7dc;
extern "C" unsigned long _UNK_0066c7e0;
extern "C" unsigned long _UNK_0066c7e4;
extern "C" unsigned long _UNK_0066c7e8;
extern "C" unsigned long _UNK_0066c7ec;
extern "C" unsigned long _UNK_0066c7f0;
extern "C" unsigned long _UNK_0066c7f4;
extern "C" unsigned long _UNK_0066c7f8;
extern "C" unsigned long _UNK_0066c7fc;
extern "C" unsigned long _UNK_0066c800;
extern "C" unsigned long _UNK_0066cc04;
extern "C" unsigned long _UNK_0066cc08;
extern "C" unsigned long _UNK_0066cc0c;
extern "C" unsigned long _UNK_0066cc10;
extern "C" unsigned long _UNK_0066cc14;
extern "C" unsigned long _UNK_0066cc18;
extern "C" unsigned long _UNK_0066cc1c;
extern "C" unsigned long _UNK_0066cc20;
extern "C" unsigned long _UNK_0066cc24;
extern "C" unsigned long _UNK_0066cc28;
extern "C" unsigned long _UNK_0066cc2c;
extern "C" unsigned long _UNK_0066cc30;
extern "C" unsigned long _UNK_0066cc34;
extern "C" unsigned long _UNK_0066cc38;
extern "C" unsigned long _UNK_0066cc3c;
extern "C" unsigned long _UNK_0066d02c;
extern "C" unsigned long _UNK_0066d030;
extern "C" unsigned long _UNK_0066d034;
extern "C" unsigned long _UNK_0066d038;
extern "C" unsigned long _UNK_0066d03c;
extern "C" unsigned long _UNK_0066d040;
extern "C" unsigned long _UNK_0066d044;
extern "C" unsigned long _UNK_0066d048;
extern "C" unsigned long _UNK_0066d04c;
extern "C" unsigned long _UNK_0066d050;
extern "C" unsigned long _UNK_0066d054;
extern "C" unsigned long _UNK_0066d058;
extern "C" unsigned long _UNK_0066d05c;
extern "C" unsigned long _UNK_0066d060;
extern "C" unsigned long _UNK_0066d064;
extern "C" unsigned long _UNK_0066d068;
extern "C" unsigned long _UNK_0066d06c;
extern "C" unsigned long _UNK_0066d070;
extern "C" unsigned long _UNK_0066d43c;
extern "C" unsigned long _UNK_0066d440;
extern "C" unsigned long _UNK_0066d444;
extern "C" unsigned long _UNK_0066d448;
extern "C" unsigned long _UNK_0066d44c;
extern "C" unsigned long _UNK_0066d450;
extern "C" unsigned long _UNK_0066d454;
extern "C" unsigned long _UNK_0066d458;
extern "C" unsigned long _UNK_0066d45c;
extern "C" unsigned long _UNK_0066d460;
extern "C" unsigned long _UNK_0066d464;
extern "C" unsigned long g_0066b890;
extern "C" unsigned long g_0066b8e2;
extern "C" unsigned long g_0066b914;
extern "C" unsigned long g_0066b918;
extern "C" unsigned long g_0066b928;
extern "C" unsigned long g_0066b92c;
extern "C" unsigned long g_0066b950;
extern "C" unsigned long g_0066b954;
extern "C" unsigned long g_0066ba08;
extern "C" unsigned long g_0066ba0c;
extern "C" unsigned long g_0066bb6e;
extern "C" unsigned long g_0066bc62;
extern "C" unsigned long g_0066bc94;
extern "C" unsigned long g_0066bd66;
extern "C" unsigned long g_0066bd9a;
extern "C" unsigned long g_0066be50;
extern "C" unsigned long g_0066bf06;
extern "C" unsigned long g_0066bf2e;
extern "C" unsigned long g_0066bf50;
extern "C" unsigned long g_0066bf54;
extern "C" unsigned long g_0066bf58;
extern "C" unsigned long g_0066bf5c;
extern "C" unsigned long g_0066bf60;
extern "C" unsigned long g_0066bf64;
extern "C" unsigned long g_0066bf68;
extern "C" unsigned long g_0066bf6c;
extern "C" unsigned long g_0066bf70;
extern "C" unsigned long g_0066bf74;
extern "C" unsigned long g_0066bf78;
extern "C" unsigned long g_0066bf7c;
extern "C" unsigned long g_0066bf80;
extern "C" unsigned long g_0066bf84;
extern "C" unsigned long g_0066bf88;
extern "C" unsigned long g_0066bf8c;
extern "C" unsigned long g_0066c04a;
extern "C" unsigned long g_0066c072;
extern "C" unsigned long g_0066c144;
extern "C" unsigned long g_0066c16e;
extern "C" unsigned long g_0066c232;
extern "C" unsigned long g_0066c25c;
extern "C" unsigned long g_0066c320;
extern "C" unsigned long g_0066c34a;
extern "C" unsigned long g_0066c384;
extern "C" unsigned long g_0066c388;
extern "C" unsigned long g_0066c38c;
extern "C" unsigned long g_0066c390;
extern "C" unsigned long g_0066c394;
extern "C" unsigned long g_0066c398;
extern "C" unsigned long g_0066c39c;
extern "C" unsigned long g_0066c3a0;
extern "C" unsigned long g_0066c3a4;
extern "C" unsigned long g_0066c3a8;
extern "C" unsigned long g_0066c3ac;
extern "C" unsigned long g_0066c3b0;
extern "C" unsigned long g_0066c3b4;
extern "C" unsigned long g_0066c3b8;
extern "C" unsigned long g_0066c3bc;
extern "C" unsigned long g_0066c3c0;
extern "C" unsigned long g_0066c44c;
extern "C" unsigned long g_0066c476;
extern "C" unsigned long g_0066c53a;
extern "C" unsigned long g_0066c564;
extern "C" unsigned long g_0066c698;
extern "C" unsigned long g_0066c706;
extern "C" unsigned long g_0066c7a0;
extern "C" unsigned long g_0066c7bc;
extern "C" unsigned long g_0066c7c0;
extern "C" unsigned long g_0066c7c4;
extern "C" unsigned long g_0066c7c8;
extern "C" unsigned long g_0066c7cc;
extern "C" unsigned long g_0066c7d0;
extern "C" unsigned long g_0066c7d4;
extern "C" unsigned long g_0066c7d8;
extern "C" unsigned long g_0066c7dc;
extern "C" unsigned long g_0066c7e0;
extern "C" unsigned long g_0066c7e4;
extern "C" unsigned long g_0066c7e8;
extern "C" unsigned long g_0066c7ec;
extern "C" unsigned long g_0066c7f0;
extern "C" unsigned long g_0066c7f4;
extern "C" unsigned long g_0066c7f8;
extern "C" unsigned long g_0066c7fc;
extern "C" unsigned long g_0066c800;
extern "C" unsigned long g_0066c886;
extern "C" unsigned long g_0066c96c;
extern "C" unsigned long g_0066ca0a;
extern "C" unsigned long g_0066caf6;
extern "C" unsigned long g_0066cbe6;
extern "C" unsigned long g_0066cc04;
extern "C" unsigned long g_0066cc08;
extern "C" unsigned long g_0066cc0c;
extern "C" unsigned long g_0066cc10;
extern "C" unsigned long g_0066cc14;
extern "C" unsigned long g_0066cc18;
extern "C" unsigned long g_0066cc1c;
extern "C" unsigned long g_0066cc20;
extern "C" unsigned long g_0066cc24;
extern "C" unsigned long g_0066cc28;
extern "C" unsigned long g_0066cc2c;
extern "C" unsigned long g_0066cc30;
extern "C" unsigned long g_0066cc34;
extern "C" unsigned long g_0066cc38;
extern "C" unsigned long g_0066cc3c;
extern "C" unsigned long g_0066cc50;
extern "C" unsigned long g_0066cd0e;
extern "C" unsigned long g_0066cd42;
extern "C" unsigned long g_0066cdfe;
extern "C" unsigned long g_0066ce28;
extern "C" unsigned long g_0066cee0;
extern "C" unsigned long g_0066cf7e;
extern "C" unsigned long g_0066d01a;
extern "C" unsigned long g_0066d02c;
extern "C" unsigned long g_0066d030;
extern "C" unsigned long g_0066d034;
extern "C" unsigned long g_0066d038;
extern "C" unsigned long g_0066d03c;
extern "C" unsigned long g_0066d040;
extern "C" unsigned long g_0066d044;
extern "C" unsigned long g_0066d048;
extern "C" unsigned long g_0066d04c;
extern "C" unsigned long g_0066d050;
extern "C" unsigned long g_0066d054;
extern "C" unsigned long g_0066d058;
extern "C" unsigned long g_0066d05c;
extern "C" unsigned long g_0066d060;
extern "C" unsigned long g_0066d064;
extern "C" unsigned long g_0066d068;
extern "C" unsigned long g_0066d06c;
extern "C" unsigned long g_0066d070;
extern "C" unsigned long g_0066d100;
extern "C" unsigned long g_0066d19a;
extern "C" unsigned long g_0066d23a;
extern "C" unsigned long g_0066d2d8;
extern "C" unsigned long g_0066d43c;
extern "C" unsigned long g_0066d440;
extern "C" unsigned long g_0066d444;
extern "C" unsigned long g_0066d448;
extern "C" unsigned long g_0066d44c;
extern "C" unsigned long g_0066d450;
extern "C" unsigned long g_0066d454;
extern "C" unsigned long g_0066d458;
extern "C" unsigned long g_0066d45c;
extern "C" unsigned long g_0066d460;
extern "C" unsigned long g_0066d464;
BLWinView::~BLWinView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0066b890 + g_0066b914);
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
  func_0079e45c(&uStack_14,&g_0066b8e2 + g_0066b918,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLWinView::BLWinView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = (undefined4)(intptr_t)(*(int *)(g_0066ba08 + 0x66b998));
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
  func_0079e45c(&uStack_14,((intptr_t)"BLWinView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * BLWinView::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x168)));
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

undefined4 BLWinView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 BLWinView::getBackGround()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

undefined4 BLWinView::getBtnQuit()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

undefined4 BLWinView::getLabQuit()
{
  return *(undefined4 *)(((int)this) + 0x118);
}

undefined4 BLWinView::getBtnAgain()
{
  return *(undefined4 *)(((int)this) + 0x11c);
}

undefined4 BLWinView::getBtnNextMission()
{
  return *(undefined4 *)(((int)this) + 0x120);
}

undefined4 BLWinView::getLabAgain()
{
  return *(undefined4 *)(((int)this) + 0x124);
}

undefined4 BLWinView::getLabNext()
{
  return *(undefined4 *)(((int)this) + 0x128);
}

undefined4 BLWinView::getLabExp()
{
  return *(undefined4 *)(((int)this) + 300);
}

undefined4 BLWinView::getLabCopper()
{
  return *(undefined4 *)(((int)this) + 0x130);
}

undefined4 BLWinView::getLabDiamond1()
{
  return *(undefined4 *)(((int)this) + 0x134);
}

undefined4 BLWinView::ScrollviewItems()
{
  return *(undefined4 *)(((int)this) + 0x138);
}

undefined4 BLWinView::getssp_BlackAlpha()
{
  return *(undefined4 *)(((int)this) + 0x13c);
}

undefined4 BLWinView::getSprDiamond1()
{
  return *(undefined4 *)(((int)this) + 0x140);
}

undefined4 BLWinView::getOne()
{
  return *(undefined4 *)(((int)this) + 0x144);
}

undefined4 BLWinView::getdown()
{
  return *(undefined4 *)(((int)this) + 0x148);
}

undefined4 BLWinView::getLabItems()
{
  return *(undefined4 *)(((int)this) + 0x14c);
}

undefined4 BLWinView::getLabPass()
{
  return *(undefined4 *)(((int)this) + 0x150);
}

undefined4 BLWinView::getLabDiamond()
{
  return *(undefined4 *)(((int)this) + 0x154);
}

undefined4 BLWinView::getSprDiamond()
{
  return *(undefined4 *)(((int)this) + 0x158);
}

undefined4 BLWinView::getSprSprStar1()
{
  return *(undefined4 *)(((int)this) + 0x15c);
}

undefined4 BLWinView::getSprSprStar2()
{
  return *(undefined4 *)(((int)this) + 0x160);
}

undefined4 BLWinView::getSprSprStar3()
{
  return *(undefined4 *)(((int)this) + 0x164);
}

void BLWinView::onEnter()
{
  ((BLWinPresenter *)*(undefined4 *)(((int)this) + 0x10c))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLWinView::onExit()
{
  ((BLWinPresenter *)*(undefined4 *)(((int)this) + 0x10c))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
bool BLWinView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
