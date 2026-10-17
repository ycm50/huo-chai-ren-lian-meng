#include "BLHeroLineUpView.h"
#include "BLHeroLineUpPresenter.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "CircusData.h"
#include "CircusPlayerinfo.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <new>   // ghost_fix.js 自动补齐
using namespace cocos2d;
// 兜底声明
extern "C" long long func_004c9d14(...);
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_004c8b58;
extern "C" unsigned long UNK_004c8baa;
extern "C" unsigned long UNK_004c8bf0;
extern "C" unsigned long UNK_004c8c18;
extern "C" unsigned long UNK_004c8e34;
extern "C" unsigned long UNK_004c8f1e;
extern "C" unsigned long UNK_004c8fd2;
extern "C" unsigned long UNK_004c9000;
extern "C" unsigned long UNK_004c90e4;
extern "C" unsigned long UNK_004c910e;
extern "C" unsigned long UNK_004c933e;
extern "C" unsigned long UNK_004c9426;
extern "C" unsigned long UNK_004c9452;
extern "C" unsigned long UNK_004c9516;
extern "C" unsigned long UNK_004c9544;
extern "C" unsigned long UNK_004c9614;
extern "C" unsigned long UNK_004c9640;
extern "C" unsigned long UNK_004c9752;
extern "C" unsigned long UNK_004c9780;
extern "C" unsigned long UNK_004c9850;
extern "C" unsigned long UNK_004c987c;
extern "C" unsigned long UNK_004c9944;
extern "C" unsigned long UNK_004c9972;
extern "C" unsigned long UNK_004c9a46;
extern "C" unsigned long UNK_004c9a72;
extern "C" unsigned long UNK_004c9b7c;
extern "C" unsigned long UNK_004c9ba8;
extern "C" unsigned long _DAT_004c8cd0;
extern "C" unsigned long _DAT_004c8cd4;
extern "C" unsigned long _UNK_004c8bdc;
extern "C" unsigned long _UNK_004c8be0;
extern "C" unsigned long _UNK_004c8bf4;
extern "C" unsigned long _UNK_004c8c1c;
extern "C" unsigned long _UNK_004c9204;
extern "C" unsigned long _UNK_004c9208;
extern "C" unsigned long _UNK_004c920c;
extern "C" unsigned long _UNK_004c9210;
extern "C" unsigned long _UNK_004c9214;
extern "C" unsigned long _UNK_004c9218;
extern "C" unsigned long _UNK_004c921c;
extern "C" unsigned long _UNK_004c9220;
extern "C" unsigned long _UNK_004c9224;
extern "C" unsigned long _UNK_004c9228;
extern "C" unsigned long _UNK_004c922c;
extern "C" unsigned long _UNK_004c9230;
extern "C" unsigned long _UNK_004c9234;
extern "C" unsigned long _UNK_004c9238;
extern "C" unsigned long _UNK_004c9664;
extern "C" unsigned long _UNK_004c9668;
extern "C" unsigned long _UNK_004c966c;
extern "C" unsigned long _UNK_004c9670;
extern "C" unsigned long _UNK_004c9674;
extern "C" unsigned long _UNK_004c9678;
extern "C" unsigned long _UNK_004c967c;
extern "C" unsigned long _UNK_004c9680;
extern "C" unsigned long _UNK_004c9684;
extern "C" unsigned long _UNK_004c9688;
extern "C" unsigned long _UNK_004c968c;
extern "C" unsigned long _UNK_004c9690;
extern "C" unsigned long _UNK_004c9694;
extern "C" unsigned long _UNK_004c9698;
extern "C" unsigned long _UNK_004c969c;
extern "C" unsigned long _UNK_004c96a0;
extern "C" unsigned long _UNK_004c96a4;
extern "C" unsigned long _UNK_004c96a8;
extern "C" unsigned long _UNK_004c9abc;
extern "C" unsigned long _UNK_004c9ac0;
extern "C" unsigned long _UNK_004c9ac4;
extern "C" unsigned long _UNK_004c9ac8;
extern "C" unsigned long _UNK_004c9acc;
extern "C" unsigned long _UNK_004c9ad0;
extern "C" unsigned long _UNK_004c9ad4;
extern "C" unsigned long _UNK_004c9ad8;
extern "C" unsigned long _UNK_004c9adc;
extern "C" unsigned long _UNK_004c9ae0;
extern "C" unsigned long _UNK_004c9ae4;
extern "C" unsigned long _UNK_004c9ae8;
extern "C" unsigned long _UNK_004c9aec;
extern "C" unsigned long _UNK_004c9af0;
extern "C" unsigned long _UNK_004c9af4;
extern "C" unsigned long _UNK_004c9af8;
extern "C" unsigned long _UNK_004c9d24;
extern "C" unsigned long _UNK_004c9d28;
extern "C" unsigned long _UNK_004c9d2c;
extern "C" unsigned long _UNK_004c9d30;
extern "C" unsigned long _UNK_004c9d34;
extern "C" unsigned long _UNK_004c9d38;
extern "C" unsigned long _UNK_004c9d3c;
extern "C" unsigned long _UNK_004c9d40;
extern "C" unsigned long g_004c8b58;
extern "C" unsigned long g_004c8baa;
extern "C" unsigned long g_004c8bdc;
extern "C" unsigned long g_004c8be0;
extern "C" unsigned long g_004c8bf0;
extern "C" unsigned long g_004c8bf4;
extern "C" unsigned long g_004c8c18;
extern "C" unsigned long g_004c8c1c;
extern "C" unsigned long g_004c8cd0;
extern "C" unsigned long g_004c8cd4;
extern "C" unsigned long g_004c8e34;
extern "C" unsigned long g_004c8f1e;
extern "C" unsigned long g_004c8fd2;
extern "C" unsigned long g_004c9000;
extern "C" unsigned long g_004c90e4;
extern "C" unsigned long g_004c910e;
extern "C" unsigned long g_004c9204;
extern "C" unsigned long g_004c9208;
extern "C" unsigned long g_004c920c;
extern "C" unsigned long g_004c9210;
extern "C" unsigned long g_004c9214;
extern "C" unsigned long g_004c9218;
extern "C" unsigned long g_004c921c;
extern "C" unsigned long g_004c9220;
extern "C" unsigned long g_004c9224;
extern "C" unsigned long g_004c9228;
extern "C" unsigned long g_004c922c;
extern "C" unsigned long g_004c9230;
extern "C" unsigned long g_004c9234;
extern "C" unsigned long g_004c9238;
extern "C" unsigned long g_004c933e;
extern "C" unsigned long g_004c9426;
extern "C" unsigned long g_004c9452;
extern "C" unsigned long g_004c9516;
extern "C" unsigned long g_004c9544;
extern "C" unsigned long g_004c9614;
extern "C" unsigned long g_004c9640;
extern "C" unsigned long g_004c9664;
extern "C" unsigned long g_004c9668;
extern "C" unsigned long g_004c966c;
extern "C" unsigned long g_004c9670;
extern "C" unsigned long g_004c9674;
extern "C" unsigned long g_004c9678;
extern "C" unsigned long g_004c967c;
extern "C" unsigned long g_004c9680;
extern "C" unsigned long g_004c9684;
extern "C" unsigned long g_004c9688;
extern "C" unsigned long g_004c968c;
extern "C" unsigned long g_004c9690;
extern "C" unsigned long g_004c9694;
extern "C" unsigned long g_004c9698;
extern "C" unsigned long g_004c969c;
extern "C" unsigned long g_004c96a0;
extern "C" unsigned long g_004c96a4;
extern "C" unsigned long g_004c96a8;
extern "C" unsigned long g_004c9752;
extern "C" unsigned long g_004c9780;
extern "C" unsigned long g_004c9850;
extern "C" unsigned long g_004c987c;
extern "C" unsigned long g_004c9944;
extern "C" unsigned long g_004c9972;
extern "C" unsigned long g_004c9a46;
extern "C" unsigned long g_004c9a72;
extern "C" unsigned long g_004c9abc;
extern "C" unsigned long g_004c9ac0;
extern "C" unsigned long g_004c9ac4;
extern "C" unsigned long g_004c9ac8;
extern "C" unsigned long g_004c9acc;
extern "C" unsigned long g_004c9ad0;
extern "C" unsigned long g_004c9ad4;
extern "C" unsigned long g_004c9ad8;
extern "C" unsigned long g_004c9adc;
extern "C" unsigned long g_004c9ae0;
extern "C" unsigned long g_004c9ae4;
extern "C" unsigned long g_004c9ae8;
extern "C" unsigned long g_004c9aec;
extern "C" unsigned long g_004c9af0;
extern "C" unsigned long g_004c9af4;
extern "C" unsigned long g_004c9af8;
extern "C" unsigned long g_004c9b7c;
extern "C" unsigned long g_004c9ba8;
extern "C" unsigned long g_004c9d24;
extern "C" unsigned long g_004c9d28;
extern "C" unsigned long g_004c9d2c;
extern "C" unsigned long g_004c9d30;
extern "C" unsigned long g_004c9d34;
extern "C" unsigned long g_004c9d38;
extern "C" unsigned long g_004c9d3c;
extern "C" unsigned long g_004c9d40;
BLHeroLineUpView::~BLHeroLineUpView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_004c8b58 + g_004c8bdc);
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
  func_0079e45c(&uStack_14,&g_004c8baa + g_004c8be0,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLHeroLineUpView::BLHeroLineUpView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = (undefined4)(intptr_t)(*(int *)(g_004c8cd0 + 0x4c8c60));
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
  func_0079e45c(&uStack_14,((intptr_t)"BLHeroLineUpView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * BLHeroLineUpView::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x148)));
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

undefined4 BLHeroLineUpView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 BLHeroLineUpView::getBackGround()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

undefined4 BLHeroLineUpView::getSprBg()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

undefined4 BLHeroLineUpView::getbtnRight()
{
  return *(undefined4 *)(((int)this) + 0x118);
}

undefined4 BLHeroLineUpView::getBtnLeft()
{
  return *(undefined4 *)(((int)this) + 0x11c);
}

undefined4 BLHeroLineUpView::getTableViewRoles()
{
  return *(undefined4 *)(((int)this) + 0x120);
}

undefined4 BLHeroLineUpView::getTabBg()
{
  return *(undefined4 *)(((int)this) + 0x124);
}

undefined4 BLHeroLineUpView::getLabTitle()
{
  return *(undefined4 *)(((int)this) + 0x128);
}

undefined4 BLHeroLineUpView::getBtnClose()
{
  return *(undefined4 *)(((int)this) + 300);
}

undefined4 BLHeroLineUpView::getLabRoleLimit()
{
  return *(undefined4 *)(((int)this) + 0x130);
}

undefined4 BLHeroLineUpView::getBtnCancle()
{
  return *(undefined4 *)(((int)this) + 0x134);
}

undefined4 BLHeroLineUpView::getLabCancle()
{
  return *(undefined4 *)(((int)this) + 0x138);
}

undefined4 BLHeroLineUpView::getBtnSure()
{
  return *(undefined4 *)(((int)this) + 0x13c);
}

undefined4 BLHeroLineUpView::getLabSure()
{
  return *(undefined4 *)(((int)this) + 0x140);
}

undefined4 BLHeroLineUpView::getLabPlayTitle()
{
  return *(undefined4 *)(((int)this) + 0x144);
}

void BLHeroLineUpView::onEnter()
{
  ((BLHeroLineUpPresenter *)*(undefined4 *)(((int)this) + 0x10c))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLHeroLineUpView::onExit()
{
  ((BLHeroLineUpPresenter *)*(undefined4 *)(((int)this) + 0x10c))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
bool BLHeroLineUpView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
