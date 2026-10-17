#include "BLTimeHeroView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLTimeHeroPresenter.h"
#include "PagedScrollView.h"
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
extern "C" unsigned long UNK_00557e60;
extern "C" unsigned long UNK_00557ea4;
extern "C" unsigned long UNK_00557ee8;
extern "C" unsigned long UNK_00557f98;
extern "C" unsigned long UNK_00558320;
extern "C" unsigned long UNK_00558418;
extern "C" unsigned long UNK_00558452;
extern "C" unsigned long UNK_00558504;
extern "C" unsigned long UNK_00558536;
extern "C" unsigned long UNK_005586d6;
extern "C" unsigned long UNK_0055874c;
extern "C" unsigned long UNK_00558870;
extern "C" unsigned long UNK_0055889a;
extern "C" unsigned long UNK_005589c4;
extern "C" unsigned long UNK_005589ee;
extern "C" unsigned long UNK_00558aa6;
extern "C" unsigned long UNK_00558af2;
extern "C" unsigned long UNK_00558b1e;
extern "C" unsigned long _DAT_00558060;
extern "C" unsigned long _DAT_00558064;
extern "C" unsigned long _UNK_00557ed4;
extern "C" unsigned long _UNK_00557ed8;
extern "C" unsigned long _UNK_00557eec;
extern "C" unsigned long _UNK_00557f9c;
extern "C" unsigned long _UNK_00558704;
extern "C" unsigned long _UNK_00558708;
extern "C" unsigned long _UNK_0055870c;
extern "C" unsigned long _UNK_00558710;
extern "C" unsigned long _UNK_00558714;
extern "C" unsigned long _UNK_00558718;
extern "C" unsigned long _UNK_0055871c;
extern "C" unsigned long _UNK_00558720;
extern "C" unsigned long _UNK_00558724;
extern "C" unsigned long _UNK_00558728;
extern "C" unsigned long _UNK_0055872c;
extern "C" unsigned long _UNK_00558730;
extern "C" unsigned long _UNK_00558734;
extern "C" unsigned long _UNK_00558738;
extern "C" unsigned long _UNK_0055873c;
extern "C" unsigned long _UNK_00558740;
extern "C" unsigned long _UNK_00558744;
extern "C" unsigned long _UNK_00558b5c;
extern "C" unsigned long _UNK_00558b60;
extern "C" unsigned long _UNK_00558b64;
extern "C" unsigned long _UNK_00558b68;
extern "C" unsigned long _UNK_00558b6c;
extern "C" unsigned long _UNK_00558b70;
extern "C" unsigned long _UNK_00558b74;
extern "C" unsigned long _UNK_00558b78;
extern "C" unsigned long _UNK_00558b7c;
extern "C" unsigned long _UNK_00558b80;
extern "C" unsigned long _UNK_00558b84;
extern "C" unsigned long _UNK_00558b88;
extern "C" unsigned long _UNK_00558b8c;
extern "C" unsigned long _UNK_00558b90;
extern "C" unsigned long _UNK_00558b94;
extern "C" unsigned long _UNK_00558b98;
extern "C" unsigned long _UNK_00558cb8;
extern "C" unsigned long _UNK_00558cbc;
extern "C" unsigned long _UNK_00558cc0;
extern "C" unsigned long g_00557e60;
extern "C" unsigned long g_00557ea4;
extern "C" unsigned long g_00557ed4;
extern "C" unsigned long g_00557ed8;
extern "C" unsigned long g_00557ee8;
extern "C" unsigned long g_00557eec;
extern "C" unsigned long g_00557f98;
extern "C" unsigned long g_00557f9c;
extern "C" unsigned long g_00558060;
extern "C" unsigned long g_00558064;
extern "C" unsigned long g_00558320;
extern "C" unsigned long g_00558418;
extern "C" unsigned long g_00558452;
extern "C" unsigned long g_00558504;
extern "C" unsigned long g_00558536;
extern "C" unsigned long g_005586d6;
extern "C" unsigned long g_00558704;
extern "C" unsigned long g_00558708;
extern "C" unsigned long g_0055870c;
extern "C" unsigned long g_00558710;
extern "C" unsigned long g_00558714;
extern "C" unsigned long g_00558718;
extern "C" unsigned long g_0055871c;
extern "C" unsigned long g_00558720;
extern "C" unsigned long g_00558724;
extern "C" unsigned long g_00558728;
extern "C" unsigned long g_0055872c;
extern "C" unsigned long g_00558730;
extern "C" unsigned long g_00558734;
extern "C" unsigned long g_00558738;
extern "C" unsigned long g_0055873c;
extern "C" unsigned long g_00558740;
extern "C" unsigned long g_00558744;
extern "C" unsigned long g_0055874c;
extern "C" unsigned long g_00558870;
extern "C" unsigned long g_0055889a;
extern "C" unsigned long g_005589c4;
extern "C" unsigned long g_005589ee;
extern "C" unsigned long g_00558aa6;
extern "C" unsigned long g_00558af2;
extern "C" unsigned long g_00558b1e;
extern "C" unsigned long g_00558b5c;
extern "C" unsigned long g_00558b60;
extern "C" unsigned long g_00558b64;
extern "C" unsigned long g_00558b68;
extern "C" unsigned long g_00558b6c;
extern "C" unsigned long g_00558b70;
extern "C" unsigned long g_00558b74;
extern "C" unsigned long g_00558b78;
extern "C" unsigned long g_00558b7c;
extern "C" unsigned long g_00558b80;
extern "C" unsigned long g_00558b84;
extern "C" unsigned long g_00558b88;
extern "C" unsigned long g_00558b8c;
extern "C" unsigned long g_00558b90;
extern "C" unsigned long g_00558b94;
extern "C" unsigned long g_00558b98;
extern "C" unsigned long g_00558cb8;
extern "C" unsigned long g_00558cbc;
extern "C" unsigned long g_00558cc0;
BLTimeHeroView::~BLTimeHeroView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_00557e60 + g_00557ed4);
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
  func_0079e45c(&uStack_14,&g_00557ea4 + g_00557ed8,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLTimeHeroView::BLTimeHeroView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(g_00558060 + 0x558008);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLTimeHeroView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * BLTimeHeroView::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(300)));
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

undefined4 BLTimeHeroView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x108);
}

undefined4 BLTimeHeroView::getBtnClose()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 BLTimeHeroView::getLabTimeTip()
{
  return *(undefined4 *)(((int)this) + 0x11c);
}

undefined4 BLTimeHeroView::getLabTitle()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

undefined4 BLTimeHeroView::getLabPrice()
{
  return *(undefined4 *)(((int)this) + 0x120);
}

undefined4 BLTimeHeroView::getLabPay()
{
  return *(undefined4 *)(((int)this) + 0x118);
}

undefined4 BLTimeHeroView::getLabPriceNow()
{
  return *(undefined4 *)(((int)this) + 0x124);
}

undefined4 BLTimeHeroView::getBtnPay()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

undefined4 BLTimeHeroView::getScrollView()
{
  return *(undefined4 *)(((int)this) + 0x128);
}

void BLTimeHeroView::onEnter()
{
  ((cocos2d::CCLayer *)this)->onEnter();
  ((BLTimeHeroPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  return;
}

void BLTimeHeroView::onExit()
{
  ((BLTimeHeroPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
bool BLTimeHeroView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
