#include "BLMineSnatchDefenseView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLMineSnatchDefensePresenter.h"
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
extern "C" unsigned long UNK_005b1144;
extern "C" unsigned long UNK_005b1188;
extern "C" unsigned long UNK_005b11cc;
extern "C" unsigned long UNK_005b11f4;
extern "C" unsigned long UNK_005b1372;
extern "C" unsigned long UNK_005b144c;
extern "C" unsigned long UNK_005b14f0;
extern "C" unsigned long UNK_005b151c;
extern "C" unsigned long UNK_005b15e8;
extern "C" unsigned long UNK_005b1626;
extern "C" unsigned long UNK_005b16d2;
extern "C" unsigned long UNK_005b17b2;
extern "C" unsigned long UNK_005b17dc;
extern "C" unsigned long UNK_005b189c;
extern "C" unsigned long UNK_005b18c6;
extern "C" unsigned long UNK_005b198e;
extern "C" unsigned long UNK_005b19b8;
extern "C" unsigned long UNK_005b1a88;
extern "C" unsigned long UNK_005b1ab8;
extern "C" unsigned long UNK_005b1b68;
extern "C" unsigned long UNK_005b1bde;
extern "C" unsigned long UNK_005b1d10;
extern "C" unsigned long UNK_005b1d3a;
extern "C" unsigned long UNK_005b1d86;
extern "C" unsigned long UNK_005b1db8;
extern "C" unsigned long UNK_005b1e6e;
extern "C" unsigned long UNK_005b1f1a;
extern "C" unsigned long UNK_005b1f52;
extern "C" unsigned long UNK_005b2058;
extern "C" unsigned long UNK_005b208e;
extern "C" unsigned long UNK_005b21c2;
extern "C" unsigned long UNK_005b21e8;
extern "C" unsigned long UNK_005b222e;
extern "C" unsigned long UNK_005b2258;
extern "C" unsigned long UNK_005b2310;
extern "C" unsigned long UNK_005b23b6;
extern "C" unsigned long UNK_005b23e2;
extern "C" unsigned long UNK_005b24fe;
extern "C" unsigned long UNK_005b2528;
extern "C" unsigned long UNK_005b25fe;
extern "C" unsigned long UNK_005b2628;
extern "C" unsigned long UNK_005b26dc;
extern "C" unsigned long UNK_005b2706;
extern "C" unsigned long UNK_005b27c0;
extern "C" unsigned long UNK_005b27ec;
extern "C" unsigned long _DAT_005b12cc;
extern "C" unsigned long _DAT_005b12d0;
extern "C" unsigned long _UNK_005b11b8;
extern "C" unsigned long _UNK_005b11bc;
extern "C" unsigned long _UNK_005b11d0;
extern "C" unsigned long _UNK_005b11f8;
extern "C" unsigned long _UNK_005b1754;
extern "C" unsigned long _UNK_005b1758;
extern "C" unsigned long _UNK_005b175c;
extern "C" unsigned long _UNK_005b1760;
extern "C" unsigned long _UNK_005b1764;
extern "C" unsigned long _UNK_005b1768;
extern "C" unsigned long _UNK_005b176c;
extern "C" unsigned long _UNK_005b1770;
extern "C" unsigned long _UNK_005b1774;
extern "C" unsigned long _UNK_005b1778;
extern "C" unsigned long _UNK_005b177c;
extern "C" unsigned long _UNK_005b1780;
extern "C" unsigned long _UNK_005b1784;
extern "C" unsigned long _UNK_005b1788;
extern "C" unsigned long _UNK_005b178c;
extern "C" unsigned long _UNK_005b1790;
extern "C" unsigned long _UNK_005b1794;
extern "C" unsigned long _UNK_005b1b8c;
extern "C" unsigned long _UNK_005b1b90;
extern "C" unsigned long _UNK_005b1b94;
extern "C" unsigned long _UNK_005b1b98;
extern "C" unsigned long _UNK_005b1b9c;
extern "C" unsigned long _UNK_005b1ba0;
extern "C" unsigned long _UNK_005b1ba4;
extern "C" unsigned long _UNK_005b1ba8;
extern "C" unsigned long _UNK_005b1bac;
extern "C" unsigned long _UNK_005b1bb0;
extern "C" unsigned long _UNK_005b1bb4;
extern "C" unsigned long _UNK_005b1bb8;
extern "C" unsigned long _UNK_005b1bbc;
extern "C" unsigned long _UNK_005b1bc0;
extern "C" unsigned long _UNK_005b1bc4;
extern "C" unsigned long _UNK_005b1bc8;
extern "C" unsigned long _UNK_005b1bcc;
extern "C" unsigned long _UNK_005b1bd0;
extern "C" unsigned long _UNK_005b1fc0;
extern "C" unsigned long _UNK_005b1fc4;
extern "C" unsigned long _UNK_005b1fc8;
extern "C" unsigned long _UNK_005b1fcc;
extern "C" unsigned long _UNK_005b1fd0;
extern "C" unsigned long _UNK_005b1fd4;
extern "C" unsigned long _UNK_005b1fd8;
extern "C" unsigned long _UNK_005b1fdc;
extern "C" unsigned long _UNK_005b1fe0;
extern "C" unsigned long _UNK_005b1fe4;
extern "C" unsigned long _UNK_005b1fe8;
extern "C" unsigned long _UNK_005b1fec;
extern "C" unsigned long _UNK_005b1ff0;
extern "C" unsigned long _UNK_005b1ff4;
extern "C" unsigned long _UNK_005b1ff8;
extern "C" unsigned long _UNK_005b1ffc;
extern "C" unsigned long _UNK_005b2000;
extern "C" unsigned long _UNK_005b2004;
extern "C" unsigned long _UNK_005b2008;
extern "C" unsigned long _UNK_005b200c;
extern "C" unsigned long _UNK_005b2438;
extern "C" unsigned long _UNK_005b243c;
extern "C" unsigned long _UNK_005b2440;
extern "C" unsigned long _UNK_005b2444;
extern "C" unsigned long _UNK_005b2448;
extern "C" unsigned long _UNK_005b244c;
extern "C" unsigned long _UNK_005b2450;
extern "C" unsigned long _UNK_005b2454;
extern "C" unsigned long _UNK_005b2458;
extern "C" unsigned long _UNK_005b245c;
extern "C" unsigned long _UNK_005b2460;
extern "C" unsigned long _UNK_005b2464;
extern "C" unsigned long _UNK_005b2468;
extern "C" unsigned long _UNK_005b246c;
extern "C" unsigned long _UNK_005b2470;
extern "C" unsigned long _UNK_005b2474;
extern "C" unsigned long _UNK_005b2478;
extern "C" unsigned long _UNK_005b247c;
extern "C" unsigned long _UNK_005b2480;
extern "C" unsigned long _UNK_005b2484;
extern "C" unsigned long _UNK_005b2488;
extern "C" unsigned long _UNK_005b2880;
extern "C" unsigned long _UNK_005b2884;
extern "C" unsigned long _UNK_005b2888;
extern "C" unsigned long _UNK_005b288c;
extern "C" unsigned long _UNK_005b2890;
extern "C" unsigned long _UNK_005b2894;
extern "C" unsigned long _UNK_005b2898;
extern "C" unsigned long _UNK_005b289c;
extern "C" unsigned long _UNK_005b28a0;
extern "C" unsigned long _UNK_005b28a4;
extern "C" unsigned long _UNK_005b28a8;
extern "C" unsigned long _UNK_005b28ac;
extern "C" unsigned long _UNK_005b28b0;
extern "C" unsigned long _UNK_005b28b4;
extern "C" unsigned long _UNK_005b29c0;
extern "C" unsigned long _UNK_005b29c4;
extern "C" unsigned long g_005b1144;
extern "C" unsigned long g_005b1188;
extern "C" unsigned long g_005b11b8;
extern "C" unsigned long g_005b11bc;
extern "C" unsigned long g_005b11cc;
extern "C" unsigned long g_005b11d0;
extern "C" unsigned long g_005b11f4;
extern "C" unsigned long g_005b11f8;
extern "C" unsigned long g_005b12cc;
extern "C" unsigned long g_005b12d0;
extern "C" unsigned long g_005b1372;
extern "C" unsigned long g_005b144c;
extern "C" unsigned long g_005b14f0;
extern "C" unsigned long g_005b151c;
extern "C" unsigned long g_005b15e8;
extern "C" unsigned long g_005b1626;
extern "C" unsigned long g_005b16d2;
extern "C" unsigned long g_005b1754;
extern "C" unsigned long g_005b1758;
extern "C" unsigned long g_005b175c;
extern "C" unsigned long g_005b1760;
extern "C" unsigned long g_005b1764;
extern "C" unsigned long g_005b1768;
extern "C" unsigned long g_005b176c;
extern "C" unsigned long g_005b1770;
extern "C" unsigned long g_005b1774;
extern "C" unsigned long g_005b1778;
extern "C" unsigned long g_005b177c;
extern "C" unsigned long g_005b1780;
extern "C" unsigned long g_005b1784;
extern "C" unsigned long g_005b1788;
extern "C" unsigned long g_005b178c;
extern "C" unsigned long g_005b1790;
extern "C" unsigned long g_005b1794;
extern "C" unsigned long g_005b17b2;
extern "C" unsigned long g_005b17dc;
extern "C" unsigned long g_005b189c;
extern "C" unsigned long g_005b18c6;
extern "C" unsigned long g_005b198e;
extern "C" unsigned long g_005b19b8;
extern "C" unsigned long g_005b1a88;
extern "C" unsigned long g_005b1ab8;
extern "C" unsigned long g_005b1b68;
extern "C" unsigned long g_005b1b8c;
extern "C" unsigned long g_005b1b90;
extern "C" unsigned long g_005b1b94;
extern "C" unsigned long g_005b1b98;
extern "C" unsigned long g_005b1b9c;
extern "C" unsigned long g_005b1ba0;
extern "C" unsigned long g_005b1ba4;
extern "C" unsigned long g_005b1ba8;
extern "C" unsigned long g_005b1bac;
extern "C" unsigned long g_005b1bb0;
extern "C" unsigned long g_005b1bb4;
extern "C" unsigned long g_005b1bb8;
extern "C" unsigned long g_005b1bbc;
extern "C" unsigned long g_005b1bc0;
extern "C" unsigned long g_005b1bc4;
extern "C" unsigned long g_005b1bc8;
extern "C" unsigned long g_005b1bcc;
extern "C" unsigned long g_005b1bd0;
extern "C" unsigned long g_005b1bde;
extern "C" unsigned long g_005b1d10;
extern "C" unsigned long g_005b1d3a;
extern "C" unsigned long g_005b1d86;
extern "C" unsigned long g_005b1db8;
extern "C" unsigned long g_005b1e6e;
extern "C" unsigned long g_005b1f1a;
extern "C" unsigned long g_005b1f52;
extern "C" unsigned long g_005b1fc0;
extern "C" unsigned long g_005b1fc4;
extern "C" unsigned long g_005b1fc8;
extern "C" unsigned long g_005b1fcc;
extern "C" unsigned long g_005b1fd0;
extern "C" unsigned long g_005b1fd4;
extern "C" unsigned long g_005b1fd8;
extern "C" unsigned long g_005b1fdc;
extern "C" unsigned long g_005b1fe0;
extern "C" unsigned long g_005b1fe4;
extern "C" unsigned long g_005b1fe8;
extern "C" unsigned long g_005b1fec;
extern "C" unsigned long g_005b1ff0;
extern "C" unsigned long g_005b1ff4;
extern "C" unsigned long g_005b1ff8;
extern "C" unsigned long g_005b1ffc;
extern "C" unsigned long g_005b2000;
extern "C" unsigned long g_005b2004;
extern "C" unsigned long g_005b2008;
extern "C" unsigned long g_005b200c;
extern "C" unsigned long g_005b2058;
extern "C" unsigned long g_005b208e;
extern "C" unsigned long g_005b21c2;
extern "C" unsigned long g_005b21e8;
extern "C" unsigned long g_005b222e;
extern "C" unsigned long g_005b2258;
extern "C" unsigned long g_005b2310;
extern "C" unsigned long g_005b23b6;
extern "C" unsigned long g_005b23e2;
extern "C" unsigned long g_005b2438;
extern "C" unsigned long g_005b243c;
extern "C" unsigned long g_005b2440;
extern "C" unsigned long g_005b2444;
extern "C" unsigned long g_005b2448;
extern "C" unsigned long g_005b244c;
extern "C" unsigned long g_005b2450;
extern "C" unsigned long g_005b2454;
extern "C" unsigned long g_005b2458;
extern "C" unsigned long g_005b245c;
extern "C" unsigned long g_005b2460;
extern "C" unsigned long g_005b2464;
extern "C" unsigned long g_005b2468;
extern "C" unsigned long g_005b246c;
extern "C" unsigned long g_005b2470;
extern "C" unsigned long g_005b2474;
extern "C" unsigned long g_005b2478;
extern "C" unsigned long g_005b247c;
extern "C" unsigned long g_005b2480;
extern "C" unsigned long g_005b2484;
extern "C" unsigned long g_005b2488;
extern "C" unsigned long g_005b24fe;
extern "C" unsigned long g_005b2528;
extern "C" unsigned long g_005b25fe;
extern "C" unsigned long g_005b2628;
extern "C" unsigned long g_005b26dc;
extern "C" unsigned long g_005b2706;
extern "C" unsigned long g_005b27c0;
extern "C" unsigned long g_005b27ec;
extern "C" unsigned long g_005b2880;
extern "C" unsigned long g_005b2884;
extern "C" unsigned long g_005b2888;
extern "C" unsigned long g_005b288c;
extern "C" unsigned long g_005b2890;
extern "C" unsigned long g_005b2894;
extern "C" unsigned long g_005b2898;
extern "C" unsigned long g_005b289c;
extern "C" unsigned long g_005b28a0;
extern "C" unsigned long g_005b28a4;
extern "C" unsigned long g_005b28a8;
extern "C" unsigned long g_005b28ac;
extern "C" unsigned long g_005b28b0;
extern "C" unsigned long g_005b28b4;
extern "C" unsigned long g_005b29c0;
extern "C" unsigned long g_005b29c4;
BLMineSnatchDefenseView::~BLMineSnatchDefenseView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_005b1144 + g_005b11b8);
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
  func_0079e45c(&uStack_14,&g_005b1188 + g_005b11bc,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLMineSnatchDefenseView::BLMineSnatchDefenseView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(g_005b12cc + 0x5b1274);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLMineSnatchDefenseView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * BLMineSnatchDefenseView::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x150)));
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

void BLMineSnatchDefenseView::onEnter()
{
  ((BLMineSnatchDefensePresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLMineSnatchDefenseView::onExit()
{
  ((BLMineSnatchDefensePresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
bool BLMineSnatchDefenseView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
