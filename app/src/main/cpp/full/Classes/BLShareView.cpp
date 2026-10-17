#include "BLShareView.h"
#include "BLLeakUtils.h"
#include "BLSharePresenter.h"
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
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0068677c;
extern "C" unsigned long UNK_006867c0;
extern "C" unsigned long UNK_00686804;
extern "C" unsigned long UNK_0068682c;
extern "C" unsigned long UNK_006869ae;
extern "C" unsigned long UNK_006869f2;
extern "C" unsigned long UNK_00686bbe;
extern "C" unsigned long UNK_00686d96;
extern "C" unsigned long UNK_00686ea2;
extern "C" unsigned long UNK_00686f20;
extern "C" unsigned long UNK_00686f32;
extern "C" unsigned long UNK_00686f7c;
extern "C" unsigned long UNK_00686f98;
extern "C" unsigned long UNK_0068707a;
extern "C" unsigned long UNK_006870fe;
extern "C" unsigned long UNK_00687168;
extern "C" unsigned long UNK_00687192;
extern "C" unsigned long UNK_006873ec;
extern "C" unsigned long UNK_006873ee;
extern "C" unsigned long UNK_006873fe;
extern "C" unsigned long _DAT_006868cc;
extern "C" unsigned long _DAT_006868d0;
extern "C" unsigned long _UNK_006867f0;
extern "C" unsigned long _UNK_006867f4;
extern "C" unsigned long _UNK_00686808;
extern "C" unsigned long _UNK_00686830;
extern "C" unsigned long _UNK_00686d98;
extern "C" unsigned long _UNK_00686d9c;
extern "C" unsigned long _UNK_00686da0;
extern "C" unsigned long _UNK_00686da4;
extern "C" unsigned long _UNK_00686da8;
extern "C" unsigned long _UNK_00686dac;
extern "C" unsigned long _UNK_006871bc;
extern "C" unsigned long _UNK_006871c0;
extern "C" unsigned long _UNK_006871c4;
extern "C" unsigned long _UNK_006871c8;
extern "C" unsigned long _UNK_006871cc;
extern "C" unsigned long _UNK_006871d0;
extern "C" unsigned long _UNK_006871d4;
extern "C" unsigned long _UNK_006871d8;
extern "C" unsigned long _UNK_006871dc;
extern "C" unsigned long _UNK_006871e0;
extern "C" unsigned long _UNK_006871e4;
extern "C" unsigned long _UNK_006871e8;
extern "C" unsigned long _UNK_006871ec;
extern "C" unsigned long _UNK_006871f0;
extern "C" unsigned long _UNK_006871f4;
extern "C" unsigned long _UNK_006871f8;
extern "C" unsigned long _UNK_006871fc;
extern "C" unsigned long _UNK_00687200;
extern "C" unsigned long _UNK_00687204;
extern "C" unsigned long _UNK_00687208;
extern "C" unsigned long _UNK_0068720c;
extern "C" unsigned long _UNK_00687210;
extern "C" unsigned long _UNK_00687448;
extern "C" unsigned long _UNK_0068744c;
extern "C" unsigned long _UNK_00687450;
extern "C" unsigned long _UNK_00687454;
extern "C" unsigned long _UNK_00687458;
extern "C" unsigned long _UNK_0068745c;
extern "C" unsigned long _UNK_00687460;
extern "C" unsigned long g_0068677c;
extern "C" unsigned long g_006867c0;
extern "C" unsigned long g_006867f0;
extern "C" unsigned long g_006867f4;
extern "C" unsigned long g_00686804;
extern "C" unsigned long g_00686808;
extern "C" unsigned long g_0068682c;
extern "C" unsigned long g_00686830;
extern "C" unsigned long g_006868cc;
extern "C" unsigned long g_006868d0;
extern "C" unsigned long g_006869ae;
extern "C" unsigned long g_006869f2;
extern "C" unsigned long g_00686bbe;
extern "C" unsigned long g_00686d96;
extern "C" unsigned long g_00686d98;
extern "C" unsigned long g_00686d9c;
extern "C" unsigned long g_00686da0;
extern "C" unsigned long g_00686da4;
extern "C" unsigned long g_00686da8;
extern "C" unsigned long g_00686dac;
extern "C" unsigned long g_00686ea2;
extern "C" unsigned long g_00686f20;
extern "C" unsigned long g_00686f32;
extern "C" unsigned long g_00686f7c;
extern "C" unsigned long g_00686f98;
extern "C" unsigned long g_0068707a;
extern "C" unsigned long g_006870fe;
extern "C" unsigned long g_00687168;
extern "C" unsigned long g_00687192;
extern "C" unsigned long g_006871bc;
extern "C" unsigned long g_006871c0;
extern "C" unsigned long g_006871c4;
extern "C" unsigned long g_006871c8;
extern "C" unsigned long g_006871cc;
extern "C" unsigned long g_006871d0;
extern "C" unsigned long g_006871d4;
extern "C" unsigned long g_006871d8;
extern "C" unsigned long g_006871dc;
extern "C" unsigned long g_006871e0;
extern "C" unsigned long g_006871e4;
extern "C" unsigned long g_006871e8;
extern "C" unsigned long g_006871ec;
extern "C" unsigned long g_006871f0;
extern "C" unsigned long g_006871f4;
extern "C" unsigned long g_006871f8;
extern "C" unsigned long g_006871fc;
extern "C" unsigned long g_00687200;
extern "C" unsigned long g_00687204;
extern "C" unsigned long g_00687208;
extern "C" unsigned long g_0068720c;
extern "C" unsigned long g_00687210;
extern "C" unsigned long g_006873ec;
extern "C" unsigned long g_006873ee;
extern "C" unsigned long g_006873fe;
extern "C" unsigned long g_00687448;
extern "C" unsigned long g_0068744c;
extern "C" unsigned long g_00687450;
extern "C" unsigned long g_00687454;
extern "C" unsigned long g_00687458;
extern "C" unsigned long g_0068745c;
extern "C" unsigned long g_00687460;
BLShareView::~BLShareView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0068677c + g_006867f0);
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
  func_0079e45c(&uStack_14,&g_006867c0 + g_006867f4,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLShareView::BLShareView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(g_006868cc + 0x686874);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLShareView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * BLShareView::create()
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

undefined4 BLShareView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x108);
}

undefined4 BLShareView::getBtnClose()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

undefined4 BLShareView::getLabForce()
{
  return *(undefined4 *)(((int)this) + 0x11c);
}

undefined4 BLShareView::getLabRank()
{
  return *(undefined4 *)(((int)this) + 0x120);
}

undefined4 BLShareView::getLabName()
{
  return *(undefined4 *)(((int)this) + 0x124);
}

undefined4 BLShareView::getBtnShare()
{
  return *(undefined4 *)(((int)this) + 0x128);
}

undefined4 BLShareView::getLabShare()
{
  return *(undefined4 *)(((int)this) + 300);
}


void BLShareView::onEnter()
{
  ((BLSharePresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLShareView::onExit()
{
  ((BLSharePresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
bool BLShareView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
