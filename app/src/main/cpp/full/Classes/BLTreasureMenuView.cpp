#include "BLTreasureMenuView.h"
#include "BLLeakUtils.h"
#include "BLTreasureMenuPresenter.h"
#include "BLVirtualItemPresenter.h"
#include "BLVirtualItemView.h"
#include "DataManager.h"
#include "UserData.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
using namespace cocos2d;
// 兜底声明
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long func_0079e62c(...);
extern "C" long long func_0079e724(...);
extern "C" long long func_0079e744(...);
extern "C" long long func_0079e7e4(...);
extern "C" long long func_0079e8d4(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_006af484;
extern "C" unsigned long UNK_006af4c8;
extern "C" unsigned long UNK_006af50c;
extern "C" unsigned long UNK_006af534;
extern "C" unsigned long UNK_006af54c;
extern "C" unsigned long UNK_006af584;
extern "C" unsigned long UNK_006af71c;
extern "C" unsigned long UNK_006af71e;
extern "C" unsigned long UNK_006af7be;
extern "C" unsigned long UNK_006af90e;
extern "C" unsigned long UNK_006afa22;
extern "C" unsigned long UNK_006afb4e;
extern "C" unsigned long UNK_006afb50;
extern "C" unsigned long UNK_006afbb4;
extern "C" unsigned long UNK_006afc2c;
extern "C" unsigned long UNK_006afce4;
extern "C" unsigned long UNK_006afdce;
extern "C" unsigned long UNK_006afdd0;
extern "C" unsigned long UNK_006afe2e;
extern "C" unsigned long UNK_006afea4;
extern "C" unsigned long _UNK_006af4f8;
extern "C" unsigned long _UNK_006af4fc;
extern "C" unsigned long _UNK_006af510;
extern "C" unsigned long _UNK_006af538;
extern "C" unsigned long _UNK_006af5b0;
extern "C" unsigned long _UNK_006af5b4;
extern "C" unsigned long _UNK_006af6f4;
extern "C" unsigned long _UNK_006af6f8;
extern "C" unsigned long _UNK_006afae0;
extern "C" unsigned long _UNK_006afae4;
extern "C" unsigned long _UNK_006afae8;
extern "C" unsigned long _UNK_006afaec;
extern "C" unsigned long _UNK_006afaf0;
extern "C" unsigned long _UNK_006afaf4;
extern "C" unsigned long _UNK_006afaf8;
extern "C" unsigned long _UNK_006afafc;
extern "C" unsigned long _UNK_006afb00;
extern "C" unsigned long _UNK_006afb04;
extern "C" unsigned long _UNK_006afb08;
extern "C" unsigned long _UNK_006afb0c;
extern "C" unsigned long _UNK_006afb10;
extern "C" unsigned long _UNK_006afb14;
extern "C" unsigned long _UNK_006afb18;
extern "C" unsigned long _UNK_006afb1c;
extern "C" unsigned long _UNK_006aff28;
extern "C" unsigned long _UNK_006aff2c;
extern "C" unsigned long _UNK_006aff30;
extern "C" unsigned long _UNK_006aff34;
extern "C" unsigned long _UNK_006aff38;
extern "C" unsigned long _UNK_006aff3c;
extern "C" unsigned long _UNK_006aff40;
extern "C" unsigned long _UNK_006aff44;
extern "C" unsigned long _UNK_006aff48;
extern "C" unsigned long _UNK_006aff4c;
extern "C" unsigned long _UNK_006aff50;
extern "C" unsigned long _UNK_006aff54;
extern "C" unsigned long _UNK_006aff58;
extern "C" unsigned long _UNK_006aff5c;
extern "C" unsigned long _UNK_006aff60;
extern "C" unsigned long _UNK_006aff64;
extern "C" unsigned long _UNK_006aff68;
extern "C" unsigned long _UNK_006aff6c;
extern "C" unsigned long g_006af484;
extern "C" unsigned long g_006af4c8;
extern "C" unsigned long g_006af4f8;
extern "C" unsigned long g_006af4fc;
extern "C" unsigned long g_006af50c;
extern "C" unsigned long g_006af510;
extern "C" unsigned long g_006af534;
extern "C" unsigned long g_006af538;
extern "C" unsigned long g_006af54c;
extern "C" unsigned long g_006af584;
extern "C" unsigned long g_006af5b0;
extern "C" unsigned long g_006af5b4;
extern "C" unsigned long g_006af6f4;
extern "C" unsigned long g_006af6f8;
extern "C" unsigned long g_006af71c;
extern "C" unsigned long g_006af71e;
extern "C" unsigned long g_006af7be;
extern "C" unsigned long g_006af90e;
extern "C" unsigned long g_006afa22;
extern "C" unsigned long g_006afae0;
extern "C" unsigned long g_006afae4;
extern "C" unsigned long g_006afae8;
extern "C" unsigned long g_006afaec;
extern "C" unsigned long g_006afaf0;
extern "C" unsigned long g_006afaf4;
extern "C" unsigned long g_006afaf8;
extern "C" unsigned long g_006afafc;
extern "C" unsigned long g_006afb00;
extern "C" unsigned long g_006afb04;
extern "C" unsigned long g_006afb08;
extern "C" unsigned long g_006afb0c;
extern "C" unsigned long g_006afb10;
extern "C" unsigned long g_006afb14;
extern "C" unsigned long g_006afb18;
extern "C" unsigned long g_006afb1c;
extern "C" unsigned long g_006afb4e;
extern "C" unsigned long g_006afb50;
extern "C" unsigned long g_006afbb4;
extern "C" unsigned long g_006afc2c;
extern "C" unsigned long g_006afce4;
extern "C" unsigned long g_006afdce;
extern "C" unsigned long g_006afdd0;
extern "C" unsigned long g_006afe2e;
extern "C" unsigned long g_006afea4;
extern "C" unsigned long g_006aff28;
extern "C" unsigned long g_006aff2c;
extern "C" unsigned long g_006aff30;
extern "C" unsigned long g_006aff34;
extern "C" unsigned long g_006aff38;
extern "C" unsigned long g_006aff3c;
extern "C" unsigned long g_006aff40;
extern "C" unsigned long g_006aff44;
extern "C" unsigned long g_006aff48;
extern "C" unsigned long g_006aff4c;
extern "C" unsigned long g_006aff50;
extern "C" unsigned long g_006aff54;
extern "C" unsigned long g_006aff58;
extern "C" unsigned long g_006aff5c;
extern "C" unsigned long g_006aff60;
extern "C" unsigned long g_006aff64;
extern "C" unsigned long g_006aff68;
extern "C" unsigned long g_006aff6c;
BLTreasureMenuView::~BLTreasureMenuView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_006af484 + g_006af4f8);
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
  func_0079e45c(&uStack_14,&g_006af4c8 + g_006af4fc,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLTreasureMenuView::BLTreasureMenuView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_006af54c + g_006af5b0);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  *(int *)((int)this + 4*(0x4b)) = 0;
  *(int *)((int)this + 4*(0x4c)) = 0;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_006af584 + g_006af5b4,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

undefined4 BLTreasureMenuView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x108);
}

undefined4 BLTreasureMenuView::getBtnClose()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 BLTreasureMenuView::getBtnAbout()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

undefined4 BLTreasureMenuView::getBtnHeroInfo()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

undefined4 BLTreasureMenuView::getBtnRecieve()
{
  return *(undefined4 *)(((int)this) + 0x118);
}

undefined4 BLTreasureMenuView::getBtnJiantouTop()
{
  return *(undefined4 *)(((int)this) + 0x11c);
}

undefined4 BLTreasureMenuView::getBtnJiantouDown()
{
  return *(undefined4 *)(((int)this) + 0x120);
}

undefined4 BLTreasureMenuView::getarrowup()
{
  return *(undefined4 *)(((int)this) + 0x124);
}

undefined4 BLTreasureMenuView::getarrowdown()
{
  return *(undefined4 *)(((int)this) + 0x128);
}



bool BLTreasureMenuView::init()
{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = ((cocos2d::CCLayer *)this)->init();
  if (iVar1 != 0) {
    uVar2 = (undefined4)(((BLTreasureMenuPresenter *)this)->create());
    *(undefined4 *)(((int)this) + 0x108) = uVar2;
    ((cocos2d::CCObject *)this)->retain();
    BLTreasureMenuView::initView();
    ((BLTreasureMenuPresenter *)*(undefined4 *)(((int)this) + 0x108))->initWithView((BLTreasureMenuView*)((int)this));
  }
  return iVar1;
}

void BLTreasureMenuView::onEnter()
{
  ((BLTreasureMenuPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLTreasureMenuView::onExit()
{
  ((BLTreasureMenuPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (2) =====
void BLTreasureMenuView::onUpdateVirtualItemData(cocos2d::CCObject* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLTreasureMenuView::initView()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
