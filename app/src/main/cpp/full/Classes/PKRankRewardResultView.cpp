#include "PKRankRewardResultView.h"
#include "BLChestRewardItemView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "PKRankRewardResultPresenter.h"
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
extern "C" unsigned long UNK_0061fe18;
extern "C" unsigned long UNK_0061fe6a;
extern "C" unsigned long UNK_0061feb0;
extern "C" unsigned long UNK_0061fed8;
extern "C" unsigned long UNK_00620074;
extern "C" unsigned long UNK_00620158;
extern "C" unsigned long UNK_00620246;
extern "C" unsigned long UNK_00620270;
extern "C" unsigned long UNK_00620334;
extern "C" unsigned long UNK_0062036c;
extern "C" unsigned long UNK_0062043e;
extern "C" unsigned long UNK_006204aa;
extern "C" unsigned long _DAT_0061ff90;
extern "C" unsigned long _DAT_0061ff94;
extern "C" unsigned long _UNK_0061fe9c;
extern "C" unsigned long _UNK_0061fea0;
extern "C" unsigned long _UNK_0061feb4;
extern "C" unsigned long _UNK_0061fedc;
extern "C" unsigned long _UNK_00620454;
extern "C" unsigned long _UNK_00620458;
extern "C" unsigned long _UNK_0062045c;
extern "C" unsigned long _UNK_00620460;
extern "C" unsigned long _UNK_00620464;
extern "C" unsigned long _UNK_00620468;
extern "C" unsigned long _UNK_0062046c;
extern "C" unsigned long _UNK_00620470;
extern "C" unsigned long _UNK_00620474;
extern "C" unsigned long _UNK_00620478;
extern "C" unsigned long _UNK_0062047c;
extern "C" unsigned long _UNK_00620480;
extern "C" unsigned long _UNK_00620484;
extern "C" unsigned long _UNK_00620488;
extern "C" unsigned long _UNK_0062048c;
extern "C" unsigned long _UNK_00620490;
extern "C" unsigned long _UNK_00620658;
extern "C" unsigned long _UNK_0062065c;
extern "C" unsigned long _UNK_00620660;
extern "C" unsigned long _UNK_00620664;
extern "C" unsigned long _UNK_00620668;
extern "C" unsigned long _UNK_0062066c;
extern "C" unsigned long g_0061fe18;
extern "C" unsigned long g_0061fe6a;
extern "C" unsigned long g_0061fe9c;
extern "C" unsigned long g_0061fea0;
extern "C" unsigned long g_0061feb0;
extern "C" unsigned long g_0061feb4;
extern "C" unsigned long g_0061fed8;
extern "C" unsigned long g_0061fedc;
extern "C" unsigned long g_0061ff90;
extern "C" unsigned long g_0061ff94;
extern "C" unsigned long g_00620074;
extern "C" unsigned long g_00620158;
extern "C" unsigned long g_00620246;
extern "C" unsigned long g_00620270;
extern "C" unsigned long g_00620334;
extern "C" unsigned long g_0062036c;
extern "C" unsigned long g_0062043e;
extern "C" unsigned long g_00620454;
extern "C" unsigned long g_00620458;
extern "C" unsigned long g_0062045c;
extern "C" unsigned long g_00620460;
extern "C" unsigned long g_00620464;
extern "C" unsigned long g_00620468;
extern "C" unsigned long g_0062046c;
extern "C" unsigned long g_00620470;
extern "C" unsigned long g_00620474;
extern "C" unsigned long g_00620478;
extern "C" unsigned long g_0062047c;
extern "C" unsigned long g_00620480;
extern "C" unsigned long g_00620484;
extern "C" unsigned long g_00620488;
extern "C" unsigned long g_0062048c;
extern "C" unsigned long g_00620490;
extern "C" unsigned long g_006204aa;
extern "C" unsigned long g_00620658;
extern "C" unsigned long g_0062065c;
extern "C" unsigned long g_00620660;
extern "C" unsigned long g_00620664;
extern "C" unsigned long g_00620668;
extern "C" unsigned long g_0062066c;
PKRankRewardResultView::~PKRankRewardResultView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0061fe18 + g_0061fe9c);
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
  func_0079e45c(&uStack_14,&g_0061fe6a + g_0061fea0,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}


int * PKRankRewardResultView::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x128)));
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

undefined4 PKRankRewardResultView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 PKRankRewardResultView::getBG()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

undefined4 PKRankRewardResultView::getTabBg()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

undefined4 PKRankRewardResultView::getLabTitle()
{
  return *(undefined4 *)(((int)this) + 0x118);
}

undefined4 PKRankRewardResultView::getBtnClose()
{
  return *(undefined4 *)(((int)this) + 0x11c);
}

undefined4 PKRankRewardResultView::getLabSure()
{
  return *(undefined4 *)(((int)this) + 0x120);
}

undefined4 PKRankRewardResultView::RewardItem()
{
  return *(undefined4 *)(((int)this) + 0x124);
}

void PKRankRewardResultView::onEnter()
{
  ((PKRankRewardResultPresenter *)*(undefined4 *)(((int)this) + 0x10c))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void PKRankRewardResultView::onExit()
{
  ((PKRankRewardResultPresenter *)*(undefined4 *)(((int)this) + 0x10c))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (2) =====
PKRankRewardResultView::PKRankRewardResultView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = (undefined4)(intptr_t)(*(int *)(g_0061ff90 + 0x61ff20));
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
  func_0079e45c(&uStack_14,((intptr_t)"PKRankRewardResultView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

bool PKRankRewardResultView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
