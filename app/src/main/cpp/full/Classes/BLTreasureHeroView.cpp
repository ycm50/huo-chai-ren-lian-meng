#include "BLTreasureHeroView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLPageControl.h"
#include "BLTreasureHeroPresenter.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <new>   // ghost_fix.js 自动补齐
using namespace cocos2d;
// 兜底声明
extern "C" long long func_005e1bc2(...);
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long ghidra_CONCAT13(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_005e04dc;
extern "C" unsigned long UNK_005e0520;
extern "C" unsigned long UNK_005e0564;
extern "C" unsigned long UNK_005e058c;
extern "C" unsigned long UNK_005e070a;
extern "C" unsigned long UNK_005e07e6;
extern "C" unsigned long UNK_005e087c;
extern "C" unsigned long UNK_005e0960;
extern "C" unsigned long UNK_005e098a;
extern "C" unsigned long UNK_005e0a54;
extern "C" unsigned long UNK_005e0a94;
extern "C" unsigned long UNK_005e0b8e;
extern "C" unsigned long UNK_005e0bc4;
extern "C" unsigned long UNK_005e0d16;
extern "C" unsigned long UNK_005e0d6c;
extern "C" unsigned long UNK_005e0db2;
extern "C" unsigned long UNK_005e0ddc;
extern "C" unsigned long UNK_005e0e98;
extern "C" unsigned long UNK_005e0f38;
extern "C" unsigned long UNK_005e0f6a;
extern "C" unsigned long UNK_005e103a;
extern "C" unsigned long UNK_005e1066;
extern "C" unsigned long UNK_005e112c;
extern "C" unsigned long UNK_005e11a0;
extern "C" unsigned long UNK_005e1264;
extern "C" unsigned long UNK_005e128e;
extern "C" unsigned long UNK_005e1340;
extern "C" unsigned long UNK_005e1400;
extern "C" unsigned long UNK_005e1438;
extern "C" unsigned long UNK_005e14e8;
extern "C" unsigned long UNK_005e151c;
extern "C" unsigned long UNK_005e1614;
extern "C" unsigned long UNK_005e1622;
extern "C" unsigned long UNK_005e16c4;
extern "C" unsigned long UNK_005e16f4;
extern "C" unsigned long UNK_005e17ac;
extern "C" unsigned long UNK_005e17d6;
extern "C" unsigned long UNK_005e1886;
extern "C" unsigned long UNK_005e1894;
extern "C" unsigned long UNK_005e1920;
extern "C" unsigned long UNK_005e194a;
extern "C" unsigned long UNK_005e1a62;
extern "C" unsigned long UNK_005e1a6e;
extern "C" unsigned long _DAT_005e0664;
extern "C" unsigned long _DAT_005e0668;
extern "C" unsigned long _UNK_005e0550;
extern "C" unsigned long _UNK_005e0554;
extern "C" unsigned long _UNK_005e0568;
extern "C" unsigned long _UNK_005e0590;
extern "C" unsigned long _UNK_005e0aec;
extern "C" unsigned long _UNK_005e0af0;
extern "C" unsigned long _UNK_005e0af4;
extern "C" unsigned long _UNK_005e0af8;
extern "C" unsigned long _UNK_005e0afc;
extern "C" unsigned long _UNK_005e0b00;
extern "C" unsigned long _UNK_005e0b04;
extern "C" unsigned long _UNK_005e0b08;
extern "C" unsigned long _UNK_005e0b0c;
extern "C" unsigned long _UNK_005e0b10;
extern "C" unsigned long _UNK_005e0b14;
extern "C" unsigned long _UNK_005e0b18;
extern "C" unsigned long _UNK_005e0b1c;
extern "C" unsigned long _UNK_005e0b20;
extern "C" unsigned long _UNK_005e0b24;
extern "C" unsigned long _UNK_005e0b28;
extern "C" unsigned long _UNK_005e0b2c;
extern "C" unsigned long _UNK_005e0b30;
extern "C" unsigned long _UNK_005e0d30;
extern "C" unsigned long _UNK_005e0d34;
extern "C" unsigned long _UNK_005e0d38;
extern "C" unsigned long _UNK_005e0d3c;
extern "C" unsigned long _UNK_005e0d40;
extern "C" unsigned long _UNK_005e0d44;
extern "C" unsigned long _UNK_005e0d48;
extern "C" unsigned long _UNK_005e0d4c;
extern "C" unsigned long _UNK_005e1148;
extern "C" unsigned long _UNK_005e114c;
extern "C" unsigned long _UNK_005e1150;
extern "C" unsigned long _UNK_005e1154;
extern "C" unsigned long _UNK_005e1158;
extern "C" unsigned long _UNK_005e115c;
extern "C" unsigned long _UNK_005e1160;
extern "C" unsigned long _UNK_005e1164;
extern "C" unsigned long _UNK_005e1168;
extern "C" unsigned long _UNK_005e116c;
extern "C" unsigned long _UNK_005e1170;
extern "C" unsigned long _UNK_005e1174;
extern "C" unsigned long _UNK_005e1178;
extern "C" unsigned long _UNK_005e117c;
extern "C" unsigned long _UNK_005e1180;
extern "C" unsigned long _UNK_005e1184;
extern "C" unsigned long _UNK_005e1188;
extern "C" unsigned long _UNK_005e118c;
extern "C" unsigned long _UNK_005e1574;
extern "C" unsigned long _UNK_005e1578;
extern "C" unsigned long _UNK_005e157c;
extern "C" unsigned long _UNK_005e1580;
extern "C" unsigned long _UNK_005e1584;
extern "C" unsigned long _UNK_005e1588;
extern "C" unsigned long _UNK_005e158c;
extern "C" unsigned long _UNK_005e1590;
extern "C" unsigned long _UNK_005e1594;
extern "C" unsigned long _UNK_005e1598;
extern "C" unsigned long _UNK_005e159c;
extern "C" unsigned long _UNK_005e15a0;
extern "C" unsigned long _UNK_005e15a4;
extern "C" unsigned long _UNK_005e15a8;
extern "C" unsigned long _UNK_005e15ac;
extern "C" unsigned long _UNK_005e15b0;
extern "C" unsigned long _UNK_005e15b4;
extern "C" unsigned long _UNK_005e15b8;
extern "C" unsigned long _UNK_005e19ac;
extern "C" unsigned long _UNK_005e19b0;
extern "C" unsigned long _UNK_005e19b4;
extern "C" unsigned long _UNK_005e19b8;
extern "C" unsigned long _UNK_005e19bc;
extern "C" unsigned long _UNK_005e19c0;
extern "C" unsigned long _UNK_005e19c4;
extern "C" unsigned long _UNK_005e19c8;
extern "C" unsigned long _UNK_005e19cc;
extern "C" unsigned long _UNK_005e19d0;
extern "C" unsigned long _UNK_005e19d4;
extern "C" unsigned long _UNK_005e19d8;
extern "C" unsigned long _UNK_005e19dc;
extern "C" unsigned long _UNK_005e19e0;
extern "C" unsigned long _UNK_005e19e4;
extern "C" unsigned long _UNK_005e19e8;
extern "C" unsigned long _UNK_005e19ec;
extern "C" unsigned long _UNK_005e19f0;
extern "C" unsigned long _UNK_005e19f4;
extern "C" unsigned long _UNK_005e19f8;
extern "C" unsigned long _UNK_005e19fc;
extern "C" unsigned long _UNK_005e1a00;
extern "C" unsigned long _UNK_005e1bd4;
extern "C" unsigned long _UNK_005e1bd8;
extern "C" unsigned long _UNK_005e1bdc;
extern "C" unsigned long _UNK_005e1be0;
extern "C" unsigned long _UNK_005e1be4;
extern "C" unsigned long _UNK_005e1be8;
extern "C" unsigned long _UNK_005e1bec;
extern "C" unsigned long _UNK_005e1bf0;
extern "C" unsigned long _UNK_005e1bf4;
extern "C" unsigned long g_005e04dc;
extern "C" unsigned long g_005e0520;
extern "C" unsigned long g_005e0550;
extern "C" unsigned long g_005e0554;
extern "C" unsigned long g_005e0564;
extern "C" unsigned long g_005e0568;
extern "C" unsigned long g_005e058c;
extern "C" unsigned long g_005e0590;
extern "C" unsigned long g_005e0664;
extern "C" unsigned long g_005e0668;
extern "C" unsigned long g_005e070a;
extern "C" unsigned long g_005e07e6;
extern "C" unsigned long g_005e087c;
extern "C" unsigned long g_005e0960;
extern "C" unsigned long g_005e098a;
extern "C" unsigned long g_005e0a54;
extern "C" unsigned long g_005e0a94;
extern "C" unsigned long g_005e0aec;
extern "C" unsigned long g_005e0af0;
extern "C" unsigned long g_005e0af4;
extern "C" unsigned long g_005e0af8;
extern "C" unsigned long g_005e0afc;
extern "C" unsigned long g_005e0b00;
extern "C" unsigned long g_005e0b04;
extern "C" unsigned long g_005e0b08;
extern "C" unsigned long g_005e0b0c;
extern "C" unsigned long g_005e0b10;
extern "C" unsigned long g_005e0b14;
extern "C" unsigned long g_005e0b18;
extern "C" unsigned long g_005e0b1c;
extern "C" unsigned long g_005e0b20;
extern "C" unsigned long g_005e0b24;
extern "C" unsigned long g_005e0b28;
extern "C" unsigned long g_005e0b2c;
extern "C" unsigned long g_005e0b30;
extern "C" unsigned long g_005e0b8e;
extern "C" unsigned long g_005e0bc4;
extern "C" unsigned long g_005e0d16;
extern "C" unsigned long g_005e0d30;
extern "C" unsigned long g_005e0d34;
extern "C" unsigned long g_005e0d38;
extern "C" unsigned long g_005e0d3c;
extern "C" unsigned long g_005e0d40;
extern "C" unsigned long g_005e0d44;
extern "C" unsigned long g_005e0d48;
extern "C" unsigned long g_005e0d4c;
extern "C" unsigned long g_005e0d6c;
extern "C" unsigned long g_005e0db2;
extern "C" unsigned long g_005e0ddc;
extern "C" unsigned long g_005e0e98;
extern "C" unsigned long g_005e0f38;
extern "C" unsigned long g_005e0f6a;
extern "C" unsigned long g_005e103a;
extern "C" unsigned long g_005e1066;
extern "C" unsigned long g_005e112c;
extern "C" unsigned long g_005e1148;
extern "C" unsigned long g_005e114c;
extern "C" unsigned long g_005e1150;
extern "C" unsigned long g_005e1154;
extern "C" unsigned long g_005e1158;
extern "C" unsigned long g_005e115c;
extern "C" unsigned long g_005e1160;
extern "C" unsigned long g_005e1164;
extern "C" unsigned long g_005e1168;
extern "C" unsigned long g_005e116c;
extern "C" unsigned long g_005e1170;
extern "C" unsigned long g_005e1174;
extern "C" unsigned long g_005e1178;
extern "C" unsigned long g_005e117c;
extern "C" unsigned long g_005e1180;
extern "C" unsigned long g_005e1184;
extern "C" unsigned long g_005e1188;
extern "C" unsigned long g_005e118c;
extern "C" unsigned long g_005e11a0;
extern "C" unsigned long g_005e1264;
extern "C" unsigned long g_005e128e;
extern "C" unsigned long g_005e1340;
extern "C" unsigned long g_005e1400;
extern "C" unsigned long g_005e1438;
extern "C" unsigned long g_005e14e8;
extern "C" unsigned long g_005e151c;
extern "C" unsigned long g_005e1574;
extern "C" unsigned long g_005e1578;
extern "C" unsigned long g_005e157c;
extern "C" unsigned long g_005e1580;
extern "C" unsigned long g_005e1584;
extern "C" unsigned long g_005e1588;
extern "C" unsigned long g_005e158c;
extern "C" unsigned long g_005e1590;
extern "C" unsigned long g_005e1594;
extern "C" unsigned long g_005e1598;
extern "C" unsigned long g_005e159c;
extern "C" unsigned long g_005e15a0;
extern "C" unsigned long g_005e15a4;
extern "C" unsigned long g_005e15a8;
extern "C" unsigned long g_005e15ac;
extern "C" unsigned long g_005e15b0;
extern "C" unsigned long g_005e15b4;
extern "C" unsigned long g_005e15b8;
extern "C" unsigned long g_005e1614;
extern "C" unsigned long g_005e1622;
extern "C" unsigned long g_005e16c4;
extern "C" unsigned long g_005e16f4;
extern "C" unsigned long g_005e17ac;
extern "C" unsigned long g_005e17d6;
extern "C" unsigned long g_005e1886;
extern "C" unsigned long g_005e1894;
extern "C" unsigned long g_005e1920;
extern "C" unsigned long g_005e194a;
extern "C" unsigned long g_005e19ac;
extern "C" unsigned long g_005e19b0;
extern "C" unsigned long g_005e19b4;
extern "C" unsigned long g_005e19b8;
extern "C" unsigned long g_005e19bc;
extern "C" unsigned long g_005e19c0;
extern "C" unsigned long g_005e19c4;
extern "C" unsigned long g_005e19c8;
extern "C" unsigned long g_005e19cc;
extern "C" unsigned long g_005e19d0;
extern "C" unsigned long g_005e19d4;
extern "C" unsigned long g_005e19d8;
extern "C" unsigned long g_005e19dc;
extern "C" unsigned long g_005e19e0;
extern "C" unsigned long g_005e19e4;
extern "C" unsigned long g_005e19e8;
extern "C" unsigned long g_005e19ec;
extern "C" unsigned long g_005e19f0;
extern "C" unsigned long g_005e19f4;
extern "C" unsigned long g_005e19f8;
extern "C" unsigned long g_005e19fc;
extern "C" unsigned long g_005e1a00;
extern "C" unsigned long g_005e1a62;
extern "C" unsigned long g_005e1a6e;
extern "C" unsigned long g_005e1bd4;
extern "C" unsigned long g_005e1bd8;
extern "C" unsigned long g_005e1bdc;
extern "C" unsigned long g_005e1be0;
extern "C" unsigned long g_005e1be4;
extern "C" unsigned long g_005e1be8;
extern "C" unsigned long g_005e1bec;
extern "C" unsigned long g_005e1bf0;
extern "C" unsigned long g_005e1bf4;
BLTreasureHeroView::~BLTreasureHeroView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_005e04dc + g_005e0550);
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
  func_0079e45c(&uStack_14,&g_005e0520 + g_005e0554,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLTreasureHeroView::BLTreasureHeroView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)("hݮ");
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLTreasureHeroView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * BLTreasureHeroView::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x140)));
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

void BLTreasureHeroView::onEnter()
{
  ((BLTreasureHeroPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLTreasureHeroView::onExit()
{
  ((BLTreasureHeroPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
bool BLTreasureHeroView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
