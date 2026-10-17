#include "BLMineMenuView.h"
#include "CCLayer.h"
#include "CCObject.h"
#include "CCControlButton.h"
#include "CCLabelBMFont.h"
#include "CCDirector.h"
#include "CCGeometry.h"
#include "BLLeakUtils.h"
#include "BLMineMenuPresenter.h"
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
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_005a8db4;
extern "C" unsigned long UNK_005a8df8;
extern "C" unsigned long UNK_005a8e3c;
extern "C" unsigned long UNK_005a8e64;
extern "C" unsigned long UNK_005a8e7c;
extern "C" unsigned long UNK_005a8eaa;
extern "C" unsigned long UNK_005a9018;
extern "C" unsigned long UNK_005a901a;
extern "C" unsigned long UNK_005a90ba;
extern "C" unsigned long UNK_005a920a;
extern "C" unsigned long _UNK_005a8e28;
extern "C" unsigned long _UNK_005a8e2c;
extern "C" unsigned long _UNK_005a8e40;
extern "C" unsigned long _UNK_005a8e68;
extern "C" unsigned long _UNK_005a8ed4;
extern "C" unsigned long _UNK_005a8ed8;
extern "C" unsigned long _UNK_005a8ff4;
extern "C" unsigned long _UNK_005a8ff8;
extern "C" unsigned long _UNK_005a92d8;
extern "C" unsigned long _UNK_005a92dc;
extern "C" unsigned long _UNK_005a92e0;
extern "C" unsigned long _UNK_005a92e4;
extern "C" unsigned long _UNK_005a92e8;
extern "C" unsigned long _UNK_005a92ec;
extern "C" unsigned long _UNK_005a92f0;
extern "C" unsigned long g_005a8db4;
extern "C" unsigned long g_005a8df8;
extern "C" unsigned long g_005a8e28;
extern "C" unsigned long g_005a8e2c;
extern "C" unsigned long g_005a8e3c;
extern "C" unsigned long g_005a8e40;
extern "C" unsigned long g_005a8e64;
extern "C" unsigned long g_005a8e68;
extern "C" unsigned long g_005a8e7c;
extern "C" unsigned long g_005a8eaa;
extern "C" unsigned long g_005a8ed4;
extern "C" unsigned long g_005a8ed8;
extern "C" unsigned long g_005a8ff4;
extern "C" unsigned long g_005a8ff8;
extern "C" unsigned long g_005a9018;
extern "C" unsigned long g_005a901a;
extern "C" unsigned long g_005a90ba;
extern "C" unsigned long g_005a920a;
extern "C" unsigned long g_005a92d8;
extern "C" unsigned long g_005a92dc;
extern "C" unsigned long g_005a92e0;
extern "C" unsigned long g_005a92e4;
extern "C" unsigned long g_005a92e8;
extern "C" unsigned long g_005a92ec;
extern "C" unsigned long g_005a92f0;
BLVirtualItemView* BLMineMenuView::getItemCopper() const
{
  return (BLVirtualItemView*)(*(undefined4 *)(((int)this) + 0x114));
}

void BLMineMenuView::setItemCopper(BLVirtualItemView* p1)
{
  *(undefined4 *)(((int)this) + 0x114) = (undefined4)(intptr_t)p1;
  return;
}

BLVirtualItemView* BLMineMenuView::getItemDiamond() const
{
  return (BLVirtualItemView*)(*(undefined4 *)(((int)this) + 0x118));
}

void BLMineMenuView::setItemDiamond(BLVirtualItemView* p1)
{
  *(undefined4 *)(((int)this) + 0x118) = (undefined4)(intptr_t)p1;
  return;
}

BLMineMenuView::~BLMineMenuView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_005a8db4 + g_005a8e28);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x218;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x248;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x254;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  if (*(int *)((int)this + 4*(0x42)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x42)) = 0;
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005a8df8 + g_005a8e2c,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLMineMenuView::BLMineMenuView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_005a8e7c + g_005a8ed4);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x218;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x248;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x254;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005a8eaa + g_005a8ed8,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

undefined4 BLMineMenuView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x108);
}

undefined4 BLMineMenuView::getBtnAbout()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

undefined4 BLMineMenuView::getBtnClose()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

void BLMineMenuView::onUpdateVirtualItemData(cocos2d::CCObject* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMineMenuView::initView()
{
  undefined4 uVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  code *pcVar8;
  int *piVar9;
  int iVar10;
  int iStack_30;
  undefined4 uStack_2c;
  undefined4 auStack_28 [2];
  undefined1 auStack_20 [12];
  
  uVar1 = (undefined4)(cocos2d::CCDirector::sharedDirector());
  *(CCSize *)(&iStack_30) = ((cocos2d::CCDirector *)(uVar1))->getWinSize();
  piVar2 = (int *)cocos2d::CCLabelBMFont::create((char const*)(unsigned char *)((char *)&g_005a9018 + (intptr_t)(g_005a92d8)), (char const*)(unsigned char *)((char *)&g_005a901a + (intptr_t)(g_005a92dc)));
  iVar10 = (int)*(int *)&(*piVar2);
  pcVar8 = *(code **)(iVar10 + 0x4c);
  uVar1 = (undefined4)(func_0079e4fc(iStack_30 + -0x80000000,0x3f000000));
  uVar1 = (undefined4)(func_0079e59c(uVar1,g_005a92e0));
  puVar3 = (undefined4 *)(**(code **)(iVar10 + 0x8c))(piVar2);
  uVar4 = (undefined4)(func_0079e4fc(*puVar3,0x3f000000));
  uVar1 = (undefined4)(func_0079e59c(uVar1,uVar4));
  uVar4 = (undefined4)(func_0079e4fc(uStack_2c,0x3f000000));
  iVar10 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar2) + (0x8c)))(piVar2));
  uVar5 = (undefined4)(func_0079e4fc(*(undefined4 *)(iVar10 + 4),0x3f000000));
  uVar4 = (undefined4)(func_0079e57c(uVar4,uVar5));
  uVar4 = (undefined4)(func_0079e57c(uVar4,g_005a92e4));
  0 /* ctorZero */;
  (*pcVar8)(piVar2,auStack_20);
  (**(code **)(*(int *)this + 0xcc))(((int)this),piVar2,2);
  iVar6 = (undefined4)(intptr_t)(cocos2d::extension::CCControlButton::create());
  iVar10 = (undefined4)(intptr_t)(g_005a92e8);
  *(int *)((int)this + 4*(0x44)) = iVar6;
  func_0079e45c(auStack_20,&g_005a90ba + iVar10,auStack_28);
  piVar7 = (int *)0 /* ctorZero */;
  func_0079e2bc(auStack_20);
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x44)) + 0x30c))((int *)*(int *)((int)this + 4*(0x44)),piVar7,1);
  piVar9 = (int *)*(int *)((int)this + 4*(0x44));
  pcVar8 = *(code **)(*piVar9 + 0x28c);
  (**(code **)(*(int *)(piVar7) + (0x1cc)))(auStack_20,piVar7);
  (*pcVar8)(piVar9,auStack_20);
  pcVar8 = *(code **)(*(int *)*(int *)((int)this + 4*(0x44)) + 0x4c);
  uVar1 = (undefined4)((**(code **)(*(int *)(piVar2) + (0x50)))(piVar2));
  puVar3 = (undefined4 *)(**(code **)(*(int *)(piVar2) + (0x8c)))(piVar2);
  uVar4 = (undefined4)(func_0079e4fc(*puVar3,0x3f000000));
  uVar4 = (undefined4)(func_0079e59c(uVar4,g_005a92e0));
  piVar2 = (int *)*(int *)((int)this + 4*(0x44));
  puVar3 = (undefined4 *)(**(code **)(*(int *)(piVar2) + (0x8c)))(piVar2);
  uVar5 = (undefined4)(func_0079e4fc(*puVar3,0x3f000000));
  uVar4 = (undefined4)(func_0079e59c(uVar4,uVar5));
  0 /* ctorZero */;
  ((cocos2d::CCPoint *)(uVar1))->operator+(*(const CCPoint *)(void *)auStack_28);
  (*pcVar8)(piVar2,auStack_20);
  (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x44)),2);
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x44)) + 0x40))((int *)*(int *)((int)this + 4*(0x44)),g_005a92ec);
  iVar10 = (undefined4)(intptr_t)(((BLVirtualItemView *)this)->create());
  *(int *)((int)this + 4*(0x45)) = iVar10;
  (**(code **)(*(int *)this + 0xcc))(((int)this),iVar10,2);
  uVar1 = (undefined4)(((BLVirtualItemView *)(*(int *)((int)this + 4*(0x45))))->getPresenter());
  ((BLVirtualItemPresenter *)(uVar1))->setVirtualType(1);
  piVar2 = (int *)*(int *)((int)this + 4*(0x45));
  pcVar8 = *(code **)(*piVar2 + 100);
  iVar10 = (undefined4)(intptr_t)((**(code **)(*(int *)*(int *)((int)this + 4*(0x44)) + 0x50))());
  (*pcVar8)(piVar2,*(undefined4 *)(iVar10 + 4));
  iVar10 = (undefined4)(intptr_t)(((BLVirtualItemView *)this)->create());
  *(int *)((int)this + 4*(0x46)) = iVar10;
  (**(code **)(*(int *)this + 0xcc))(((int)this),iVar10,2);
  uVar1 = (undefined4)(((BLVirtualItemView *)(*(int *)((int)this + 4*(0x46))))->getPresenter());
  ((BLVirtualItemPresenter *)(uVar1))->setVirtualType(2);
  piVar2 = (int *)*(int *)((int)this + 4*(0x46));
  pcVar8 = *(code **)(*piVar2 + 100);
  iVar10 = (undefined4)(intptr_t)((**(code **)(*(int *)*(int *)((int)this + 4*(0x44)) + 0x50))());
  (*pcVar8)(piVar2,*(undefined4 *)(iVar10 + 4));
  ((BLMineMenuView *)(((int)this)))->onUpdateVirtualItemData(0);
  iVar6 = (undefined4)(intptr_t)(cocos2d::extension::CCControlButton::create());
  iVar10 = (undefined4)(intptr_t)(g_005a92f0);
  *(int *)((int)this + 4*(0x43)) = iVar6;
  func_0079e45c(auStack_20,&g_005a920a + iVar10,auStack_28);
  piVar2 = (int *)0 /* ctorZero */;
  func_0079e2bc(auStack_20);
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x43)) + 0x30c))((int *)*(int *)((int)this + 4*(0x43)),piVar2,1);
  piVar7 = (int *)*(int *)((int)this + 4*(0x43));
  pcVar8 = *(code **)(*piVar7 + 0x28c);
  (**(code **)(*(int *)(piVar2) + (0x1cc)))(auStack_20,piVar2);
  (*pcVar8)(piVar7,auStack_20);
  piVar7 = (int *)*(int *)((int)this + 4*(0x43));
  pcVar8 = *(code **)(*piVar7 + 0x4c);
  uVar1 = (undefined4)(func_0079e4fc(iStack_30,0x3f000000));
  (**(code **)(*(int *)(piVar2) + (0x1cc)))(auStack_28,piVar2);
  uVar4 = (undefined4)(func_0079e4fc(auStack_28[0],0x3f000000));
  uVar1 = (undefined4)(func_0079e57c(uVar1,uVar4));
  uVar1 = (undefined4)(func_0079e57c(uVar1,g_005a92e0));
  iVar10 = (undefined4)(intptr_t)((**(code **)(*(int *)*(int *)((int)this + 4*(0x44)) + 0x50))());
  0 /* ctorZero */;
  (*pcVar8)(piVar7,auStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x43)));
  (**(code **)(*(int *)this + 0x88))(((int)this),&iStack_30);
  return;
}

bool BLMineMenuView::init()
{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = ((cocos2d::CCLayer *)this)->init();
  if (iVar1 != 0) {
    uVar2 = (undefined4)(((BLMineMenuPresenter *)this)->create());
    *(undefined4 *)(((int)this) + 0x108) = uVar2;
    ((cocos2d::CCObject *)this)->retain();
    BLMineMenuView::initView();
    ((BLMineMenuPresenter *)*(undefined4 *)(((int)this) + 0x108))->initWithView((BLMineMenuView*)((int)this));
  }
  return iVar1;
}

void BLMineMenuView::onExit()
{
  ((BLMineMenuPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

void BLMineMenuView::onEnter()
{
  ((cocos2d::CCLayer *)this)->onEnter();
  ((BLMineMenuPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  return;
}
