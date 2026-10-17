#include "BLMineCollectDefenseView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLMineCollectDefensePresenter.h"
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
extern "C" unsigned long UNK_005abe70;
extern "C" unsigned long UNK_005abeb4;
extern "C" unsigned long UNK_005abef8;
extern "C" unsigned long UNK_005abf20;
extern "C" unsigned long UNK_005ac0da;
extern "C" unsigned long UNK_005ac1b4;
extern "C" unsigned long UNK_005ac258;
extern "C" unsigned long UNK_005ac282;
extern "C" unsigned long UNK_005ac34e;
extern "C" unsigned long UNK_005ac38c;
extern "C" unsigned long UNK_005ac43c;
extern "C" unsigned long UNK_005ac51e;
extern "C" unsigned long UNK_005ac548;
extern "C" unsigned long UNK_005ac60a;
extern "C" unsigned long UNK_005ac634;
extern "C" unsigned long UNK_005ac6fc;
extern "C" unsigned long UNK_005ac726;
extern "C" unsigned long UNK_005ac7f6;
extern "C" unsigned long UNK_005ac828;
extern "C" unsigned long UNK_005ac8dc;
extern "C" unsigned long UNK_005ac952;
extern "C" unsigned long UNK_005aca88;
extern "C" unsigned long UNK_005acab6;
extern "C" unsigned long UNK_005acb04;
extern "C" unsigned long UNK_005acb38;
extern "C" unsigned long UNK_005acbf2;
extern "C" unsigned long UNK_005acc9a;
extern "C" unsigned long UNK_005accd6;
extern "C" unsigned long UNK_005acde4;
extern "C" unsigned long UNK_005ace1c;
extern "C" unsigned long UNK_005acecc;
extern "C" unsigned long UNK_005acefa;
extern "C" unsigned long UNK_005ad024;
extern "C" unsigned long UNK_005ad04c;
extern "C" unsigned long UNK_005ad092;
extern "C" unsigned long UNK_005ad0c0;
extern "C" unsigned long UNK_005ad1c8;
extern "C" unsigned long UNK_005ad268;
extern "C" unsigned long UNK_005ad296;
extern "C" unsigned long UNK_005ad35a;
extern "C" unsigned long UNK_005ad38c;
extern "C" unsigned long UNK_005ad440;
extern "C" unsigned long UNK_005ad46a;
extern "C" unsigned long UNK_005ad538;
extern "C" unsigned long UNK_005ad572;
extern "C" unsigned long UNK_005ad674;
extern "C" unsigned long UNK_005ad69e;
extern "C" unsigned long UNK_005ad75a;
extern "C" unsigned long UNK_005ad784;
extern "C" unsigned long _DAT_005ac034;
extern "C" unsigned long _DAT_005ac038;
extern "C" unsigned long _UNK_005abee4;
extern "C" unsigned long _UNK_005abee8;
extern "C" unsigned long _UNK_005abefc;
extern "C" unsigned long _UNK_005abf24;
extern "C" unsigned long _UNK_005ac4bc;
extern "C" unsigned long _UNK_005ac4c0;
extern "C" unsigned long _UNK_005ac4c4;
extern "C" unsigned long _UNK_005ac4c8;
extern "C" unsigned long _UNK_005ac4cc;
extern "C" unsigned long _UNK_005ac4d0;
extern "C" unsigned long _UNK_005ac4d4;
extern "C" unsigned long _UNK_005ac4d8;
extern "C" unsigned long _UNK_005ac4dc;
extern "C" unsigned long _UNK_005ac4e0;
extern "C" unsigned long _UNK_005ac4e4;
extern "C" unsigned long _UNK_005ac4e8;
extern "C" unsigned long _UNK_005ac4ec;
extern "C" unsigned long _UNK_005ac4f0;
extern "C" unsigned long _UNK_005ac4f4;
extern "C" unsigned long _UNK_005ac4f8;
extern "C" unsigned long _UNK_005ac4fc;
extern "C" unsigned long _UNK_005ac8fc;
extern "C" unsigned long _UNK_005ac900;
extern "C" unsigned long _UNK_005ac904;
extern "C" unsigned long _UNK_005ac908;
extern "C" unsigned long _UNK_005ac90c;
extern "C" unsigned long _UNK_005ac910;
extern "C" unsigned long _UNK_005ac914;
extern "C" unsigned long _UNK_005ac918;
extern "C" unsigned long _UNK_005ac91c;
extern "C" unsigned long _UNK_005ac920;
extern "C" unsigned long _UNK_005ac924;
extern "C" unsigned long _UNK_005ac928;
extern "C" unsigned long _UNK_005ac92c;
extern "C" unsigned long _UNK_005ac930;
extern "C" unsigned long _UNK_005ac934;
extern "C" unsigned long _UNK_005ac938;
extern "C" unsigned long _UNK_005ac93c;
extern "C" unsigned long _UNK_005ac940;
extern "C" unsigned long _UNK_005acd34;
extern "C" unsigned long _UNK_005acd38;
extern "C" unsigned long _UNK_005acd3c;
extern "C" unsigned long _UNK_005acd40;
extern "C" unsigned long _UNK_005acd44;
extern "C" unsigned long _UNK_005acd48;
extern "C" unsigned long _UNK_005acd4c;
extern "C" unsigned long _UNK_005acd50;
extern "C" unsigned long _UNK_005acd54;
extern "C" unsigned long _UNK_005acd58;
extern "C" unsigned long _UNK_005acd5c;
extern "C" unsigned long _UNK_005acd60;
extern "C" unsigned long _UNK_005acd64;
extern "C" unsigned long _UNK_005acd68;
extern "C" unsigned long _UNK_005acd6c;
extern "C" unsigned long _UNK_005acd70;
extern "C" unsigned long _UNK_005acd74;
extern "C" unsigned long _UNK_005acd78;
extern "C" unsigned long _UNK_005ad16c;
extern "C" unsigned long _UNK_005ad170;
extern "C" unsigned long _UNK_005ad174;
extern "C" unsigned long _UNK_005ad178;
extern "C" unsigned long _UNK_005ad17c;
extern "C" unsigned long _UNK_005ad180;
extern "C" unsigned long _UNK_005ad184;
extern "C" unsigned long _UNK_005ad188;
extern "C" unsigned long _UNK_005ad18c;
extern "C" unsigned long _UNK_005ad190;
extern "C" unsigned long _UNK_005ad194;
extern "C" unsigned long _UNK_005ad198;
extern "C" unsigned long _UNK_005ad19c;
extern "C" unsigned long _UNK_005ad1a0;
extern "C" unsigned long _UNK_005ad1a4;
extern "C" unsigned long _UNK_005ad1a8;
extern "C" unsigned long _UNK_005ad1ac;
extern "C" unsigned long _UNK_005ad1b0;
extern "C" unsigned long _UNK_005ad1b4;
extern "C" unsigned long _UNK_005ad5a8;
extern "C" unsigned long _UNK_005ad5ac;
extern "C" unsigned long _UNK_005ad5b0;
extern "C" unsigned long _UNK_005ad5b4;
extern "C" unsigned long _UNK_005ad5b8;
extern "C" unsigned long _UNK_005ad5bc;
extern "C" unsigned long _UNK_005ad5c0;
extern "C" unsigned long _UNK_005ad5c4;
extern "C" unsigned long _UNK_005ad5c8;
extern "C" unsigned long _UNK_005ad5cc;
extern "C" unsigned long _UNK_005ad5d0;
extern "C" unsigned long _UNK_005ad5d4;
extern "C" unsigned long _UNK_005ad5d8;
extern "C" unsigned long _UNK_005ad5dc;
extern "C" unsigned long _UNK_005ad5e0;
extern "C" unsigned long _UNK_005ad5e4;
extern "C" unsigned long _UNK_005ad5e8;
extern "C" unsigned long _UNK_005ad5ec;
extern "C" unsigned long _UNK_005ad5f0;
extern "C" unsigned long _UNK_005ad91c;
extern "C" unsigned long _UNK_005ad920;
extern "C" unsigned long _UNK_005ad924;
extern "C" unsigned long _UNK_005ad928;
extern "C" unsigned long _UNK_005ad92c;
extern "C" unsigned long _UNK_005ad930;
extern "C" unsigned long _UNK_005ad934;
extern "C" unsigned long _UNK_005ad938;
extern "C" unsigned long _UNK_005ad93c;
extern "C" unsigned long _UNK_005ad940;
extern "C" unsigned long g_005abe70;
extern "C" unsigned long g_005abeb4;
extern "C" unsigned long g_005abee4;
extern "C" unsigned long g_005abee8;
extern "C" unsigned long g_005abef8;
extern "C" unsigned long g_005abefc;
extern "C" unsigned long g_005abf20;
extern "C" unsigned long g_005abf24;
extern "C" unsigned long g_005ac034;
extern "C" unsigned long g_005ac038;
extern "C" unsigned long g_005ac0da;
extern "C" unsigned long g_005ac1b4;
extern "C" unsigned long g_005ac258;
extern "C" unsigned long g_005ac282;
extern "C" unsigned long g_005ac34e;
extern "C" unsigned long g_005ac38c;
extern "C" unsigned long g_005ac43c;
extern "C" unsigned long g_005ac4bc;
extern "C" unsigned long g_005ac4c0;
extern "C" unsigned long g_005ac4c4;
extern "C" unsigned long g_005ac4c8;
extern "C" unsigned long g_005ac4cc;
extern "C" unsigned long g_005ac4d0;
extern "C" unsigned long g_005ac4d4;
extern "C" unsigned long g_005ac4d8;
extern "C" unsigned long g_005ac4dc;
extern "C" unsigned long g_005ac4e0;
extern "C" unsigned long g_005ac4e4;
extern "C" unsigned long g_005ac4e8;
extern "C" unsigned long g_005ac4ec;
extern "C" unsigned long g_005ac4f0;
extern "C" unsigned long g_005ac4f4;
extern "C" unsigned long g_005ac4f8;
extern "C" unsigned long g_005ac4fc;
extern "C" unsigned long g_005ac51e;
extern "C" unsigned long g_005ac548;
extern "C" unsigned long g_005ac60a;
extern "C" unsigned long g_005ac634;
extern "C" unsigned long g_005ac6fc;
extern "C" unsigned long g_005ac726;
extern "C" unsigned long g_005ac7f6;
extern "C" unsigned long g_005ac828;
extern "C" unsigned long g_005ac8dc;
extern "C" unsigned long g_005ac8fc;
extern "C" unsigned long g_005ac900;
extern "C" unsigned long g_005ac904;
extern "C" unsigned long g_005ac908;
extern "C" unsigned long g_005ac90c;
extern "C" unsigned long g_005ac910;
extern "C" unsigned long g_005ac914;
extern "C" unsigned long g_005ac918;
extern "C" unsigned long g_005ac91c;
extern "C" unsigned long g_005ac920;
extern "C" unsigned long g_005ac924;
extern "C" unsigned long g_005ac928;
extern "C" unsigned long g_005ac92c;
extern "C" unsigned long g_005ac930;
extern "C" unsigned long g_005ac934;
extern "C" unsigned long g_005ac938;
extern "C" unsigned long g_005ac93c;
extern "C" unsigned long g_005ac940;
extern "C" unsigned long g_005ac952;
extern "C" unsigned long g_005aca88;
extern "C" unsigned long g_005acab6;
extern "C" unsigned long g_005acb04;
extern "C" unsigned long g_005acb38;
extern "C" unsigned long g_005acbf2;
extern "C" unsigned long g_005acc9a;
extern "C" unsigned long g_005accd6;
extern "C" unsigned long g_005acd34;
extern "C" unsigned long g_005acd38;
extern "C" unsigned long g_005acd3c;
extern "C" unsigned long g_005acd40;
extern "C" unsigned long g_005acd44;
extern "C" unsigned long g_005acd48;
extern "C" unsigned long g_005acd4c;
extern "C" unsigned long g_005acd50;
extern "C" unsigned long g_005acd54;
extern "C" unsigned long g_005acd58;
extern "C" unsigned long g_005acd5c;
extern "C" unsigned long g_005acd60;
extern "C" unsigned long g_005acd64;
extern "C" unsigned long g_005acd68;
extern "C" unsigned long g_005acd6c;
extern "C" unsigned long g_005acd70;
extern "C" unsigned long g_005acd74;
extern "C" unsigned long g_005acd78;
extern "C" unsigned long g_005acde4;
extern "C" unsigned long g_005ace1c;
extern "C" unsigned long g_005acecc;
extern "C" unsigned long g_005acefa;
extern "C" unsigned long g_005ad024;
extern "C" unsigned long g_005ad04c;
extern "C" unsigned long g_005ad092;
extern "C" unsigned long g_005ad0c0;
extern "C" unsigned long g_005ad16c;
extern "C" unsigned long g_005ad170;
extern "C" unsigned long g_005ad174;
extern "C" unsigned long g_005ad178;
extern "C" unsigned long g_005ad17c;
extern "C" unsigned long g_005ad180;
extern "C" unsigned long g_005ad184;
extern "C" unsigned long g_005ad188;
extern "C" unsigned long g_005ad18c;
extern "C" unsigned long g_005ad190;
extern "C" unsigned long g_005ad194;
extern "C" unsigned long g_005ad198;
extern "C" unsigned long g_005ad19c;
extern "C" unsigned long g_005ad1a0;
extern "C" unsigned long g_005ad1a4;
extern "C" unsigned long g_005ad1a8;
extern "C" unsigned long g_005ad1ac;
extern "C" unsigned long g_005ad1b0;
extern "C" unsigned long g_005ad1b4;
extern "C" unsigned long g_005ad1c8;
extern "C" unsigned long g_005ad268;
extern "C" unsigned long g_005ad296;
extern "C" unsigned long g_005ad35a;
extern "C" unsigned long g_005ad38c;
extern "C" unsigned long g_005ad440;
extern "C" unsigned long g_005ad46a;
extern "C" unsigned long g_005ad538;
extern "C" unsigned long g_005ad572;
extern "C" unsigned long g_005ad5a8;
extern "C" unsigned long g_005ad5ac;
extern "C" unsigned long g_005ad5b0;
extern "C" unsigned long g_005ad5b4;
extern "C" unsigned long g_005ad5b8;
extern "C" unsigned long g_005ad5bc;
extern "C" unsigned long g_005ad5c0;
extern "C" unsigned long g_005ad5c4;
extern "C" unsigned long g_005ad5c8;
extern "C" unsigned long g_005ad5cc;
extern "C" unsigned long g_005ad5d0;
extern "C" unsigned long g_005ad5d4;
extern "C" unsigned long g_005ad5d8;
extern "C" unsigned long g_005ad5dc;
extern "C" unsigned long g_005ad5e0;
extern "C" unsigned long g_005ad5e4;
extern "C" unsigned long g_005ad5e8;
extern "C" unsigned long g_005ad5ec;
extern "C" unsigned long g_005ad5f0;
extern "C" unsigned long g_005ad674;
extern "C" unsigned long g_005ad69e;
extern "C" unsigned long g_005ad75a;
extern "C" unsigned long g_005ad784;
extern "C" unsigned long g_005ad91c;
extern "C" unsigned long g_005ad920;
extern "C" unsigned long g_005ad924;
extern "C" unsigned long g_005ad928;
extern "C" unsigned long g_005ad92c;
extern "C" unsigned long g_005ad930;
extern "C" unsigned long g_005ad934;
extern "C" unsigned long g_005ad938;
extern "C" unsigned long g_005ad93c;
extern "C" unsigned long g_005ad940;
BLMineCollectDefenseView::~BLMineCollectDefenseView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_005abe70 + g_005abee4);
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
  func_0079e45c(&uStack_14,&g_005abeb4 + g_005abee8,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLMineCollectDefenseView::BLMineCollectDefenseView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(g_005ac034 + 0x5abfdc);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLMineCollectDefenseView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * BLMineCollectDefenseView::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x158)));
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

void BLMineCollectDefenseView::onEnter()
{
  ((BLMineCollectDefensePresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLMineCollectDefenseView::onExit()
{
  ((BLMineCollectDefensePresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
bool BLMineCollectDefenseView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
