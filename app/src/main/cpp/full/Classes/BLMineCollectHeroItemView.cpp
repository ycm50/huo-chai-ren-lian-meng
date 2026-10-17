#include "BLMineCollectHeroItemView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLMineCollectHeroItemPresenter.h"
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
extern "C" long long func_005ae6ce(...);
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long ghidra_CONCAT13(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_005ad994;
extern "C" unsigned long UNK_005ad9d8;
extern "C" unsigned long UNK_005ada1c;
extern "C" unsigned long UNK_005ada44;
extern "C" unsigned long UNK_005ada8c;
extern "C" unsigned long UNK_005adaba;
extern "C" unsigned long UNK_005adc10;
extern "C" unsigned long UNK_005adc3e;
extern "C" unsigned long UNK_005add98;
extern "C" unsigned long UNK_005adde0;
extern "C" unsigned long UNK_005ade30;
extern "C" unsigned long UNK_005ade5a;
extern "C" unsigned long UNK_005adf22;
extern "C" unsigned long UNK_005adfc0;
extern "C" unsigned long UNK_005ae062;
extern "C" unsigned long UNK_005ae102;
extern "C" unsigned long UNK_005ae1ae;
extern "C" unsigned long UNK_005ae21a;
extern "C" unsigned long UNK_005ae2da;
extern "C" unsigned long UNK_005ae304;
extern "C" unsigned long UNK_005ae3c8;
extern "C" unsigned long UNK_005ae3f2;
extern "C" unsigned long UNK_005ae4a6;
extern "C" unsigned long UNK_005ae548;
extern "C" unsigned long _UNK_005ada08;
extern "C" unsigned long _UNK_005ada0c;
extern "C" unsigned long _UNK_005ada20;
extern "C" unsigned long _UNK_005ada48;
extern "C" unsigned long _UNK_005adae4;
extern "C" unsigned long _UNK_005adae8;
extern "C" unsigned long _UNK_005addb4;
extern "C" unsigned long _UNK_005addb8;
extern "C" unsigned long _UNK_005addbc;
extern "C" unsigned long _UNK_005addc0;
extern "C" unsigned long _UNK_005addc4;
extern "C" unsigned long _UNK_005addc8;
extern "C" unsigned long _UNK_005ae1c0;
extern "C" unsigned long _UNK_005ae1c4;
extern "C" unsigned long _UNK_005ae1c8;
extern "C" unsigned long _UNK_005ae1cc;
extern "C" unsigned long _UNK_005ae1d0;
extern "C" unsigned long _UNK_005ae1d4;
extern "C" unsigned long _UNK_005ae1d8;
extern "C" unsigned long _UNK_005ae1dc;
extern "C" unsigned long _UNK_005ae1e0;
extern "C" unsigned long _UNK_005ae1e4;
extern "C" unsigned long _UNK_005ae1e8;
extern "C" unsigned long _UNK_005ae1ec;
extern "C" unsigned long _UNK_005ae1f0;
extern "C" unsigned long _UNK_005ae1f4;
extern "C" unsigned long _UNK_005ae1f8;
extern "C" unsigned long _UNK_005ae1fc;
extern "C" unsigned long _UNK_005ae5f8;
extern "C" unsigned long _UNK_005ae5fc;
extern "C" unsigned long _UNK_005ae600;
extern "C" unsigned long _UNK_005ae604;
extern "C" unsigned long _UNK_005ae608;
extern "C" unsigned long _UNK_005ae60c;
extern "C" unsigned long _UNK_005ae610;
extern "C" unsigned long _UNK_005ae614;
extern "C" unsigned long _UNK_005ae618;
extern "C" unsigned long _UNK_005ae61c;
extern "C" unsigned long _UNK_005ae620;
extern "C" unsigned long _UNK_005ae624;
extern "C" unsigned long _UNK_005ae628;
extern "C" unsigned long _UNK_005ae62c;
extern "C" unsigned long _UNK_005ae630;
extern "C" unsigned long _UNK_005ae634;
extern "C" unsigned long _UNK_005ae638;
extern "C" unsigned long _UNK_005ae6e0;
extern "C" unsigned long _UNK_005ae6e4;
extern "C" unsigned long g_005ad994;
extern "C" unsigned long g_005ad9d8;
extern "C" unsigned long g_005ada08;
extern "C" unsigned long g_005ada0c;
extern "C" unsigned long g_005ada1c;
extern "C" unsigned long g_005ada20;
extern "C" unsigned long g_005ada44;
extern "C" unsigned long g_005ada48;
extern "C" unsigned long g_005ada8c;
extern "C" unsigned long g_005adaba;
extern "C" unsigned long g_005adae4;
extern "C" unsigned long g_005adae8;
extern "C" unsigned long g_005adc10;
extern "C" unsigned long g_005adc3e;
extern "C" unsigned long g_005add98;
extern "C" unsigned long g_005addb4;
extern "C" unsigned long g_005addb8;
extern "C" unsigned long g_005addbc;
extern "C" unsigned long g_005addc0;
extern "C" unsigned long g_005addc4;
extern "C" unsigned long g_005addc8;
extern "C" unsigned long g_005adde0;
extern "C" unsigned long g_005ade30;
extern "C" unsigned long g_005ade5a;
extern "C" unsigned long g_005adf22;
extern "C" unsigned long g_005adfc0;
extern "C" unsigned long g_005ae062;
extern "C" unsigned long g_005ae102;
extern "C" unsigned long g_005ae1ae;
extern "C" unsigned long g_005ae1c0;
extern "C" unsigned long g_005ae1c4;
extern "C" unsigned long g_005ae1c8;
extern "C" unsigned long g_005ae1cc;
extern "C" unsigned long g_005ae1d0;
extern "C" unsigned long g_005ae1d4;
extern "C" unsigned long g_005ae1d8;
extern "C" unsigned long g_005ae1dc;
extern "C" unsigned long g_005ae1e0;
extern "C" unsigned long g_005ae1e4;
extern "C" unsigned long g_005ae1e8;
extern "C" unsigned long g_005ae1ec;
extern "C" unsigned long g_005ae1f0;
extern "C" unsigned long g_005ae1f4;
extern "C" unsigned long g_005ae1f8;
extern "C" unsigned long g_005ae1fc;
extern "C" unsigned long g_005ae21a;
extern "C" unsigned long g_005ae2da;
extern "C" unsigned long g_005ae304;
extern "C" unsigned long g_005ae3c8;
extern "C" unsigned long g_005ae3f2;
extern "C" unsigned long g_005ae4a6;
extern "C" unsigned long g_005ae548;
extern "C" unsigned long g_005ae5f8;
extern "C" unsigned long g_005ae5fc;
extern "C" unsigned long g_005ae600;
extern "C" unsigned long g_005ae604;
extern "C" unsigned long g_005ae608;
extern "C" unsigned long g_005ae60c;
extern "C" unsigned long g_005ae610;
extern "C" unsigned long g_005ae614;
extern "C" unsigned long g_005ae618;
extern "C" unsigned long g_005ae61c;
extern "C" unsigned long g_005ae620;
extern "C" unsigned long g_005ae624;
extern "C" unsigned long g_005ae628;
extern "C" unsigned long g_005ae62c;
extern "C" unsigned long g_005ae630;
extern "C" unsigned long g_005ae634;
extern "C" unsigned long g_005ae638;
extern "C" unsigned long g_005ae6e0;
extern "C" unsigned long g_005ae6e4;
BLMineCollectHeroItemView::~BLMineCollectHeroItemView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_005ad994 + g_005ada08);
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
  func_0079e45c(&uStack_14,&g_005ad9d8 + g_005ada0c,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLMineCollectHeroItemView::BLMineCollectHeroItemView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_005ada8c + g_005adae4);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005adaba + g_005adae8,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * BLMineCollectHeroItemView::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x13c)));
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

undefined4 BLMineCollectHeroItemView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x108);
}

undefined4 BLMineCollectHeroItemView::getLabName()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 BLMineCollectHeroItemView::getPageControlStars()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

undefined4 BLMineCollectHeroItemView::getBtnRole()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

undefined4 BLMineCollectHeroItemView::getSprSelected()
{
  return *(undefined4 *)(((int)this) + 0x118);
}

undefined4 BLMineCollectHeroItemView::getSprUnLockBG()
{
  return *(undefined4 *)(((int)this) + 0x120);
}

undefined4 BLMineCollectHeroItemView::getSprDiamondIcon()
{
  return *(undefined4 *)(((int)this) + 0x124);
}

undefined4 BLMineCollectHeroItemView::getLabDiamond()
{
  return *(undefined4 *)(((int)this) + 0x128);
}

undefined4 BLMineCollectHeroItemView::getLabUnLock()
{
  return *(undefined4 *)(((int)this) + 300);
}

undefined4 BLMineCollectHeroItemView::getLabCombat()
{
  return *(undefined4 *)(((int)this) + 0x130);
}

undefined4 BLMineCollectHeroItemView::getSprQuestion()
{
  return *(undefined4 *)(((int)this) + 0x134);
}

undefined4 BLMineCollectHeroItemView::getSprSprCombat()
{
  return *(undefined4 *)(((int)this) + 0x138);
}

void BLMineCollectHeroItemView::onEnter()
{
  ((BLMineCollectHeroItemPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLMineCollectHeroItemView::onExit()
{
  ((BLMineCollectHeroItemPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
bool BLMineCollectHeroItemView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
