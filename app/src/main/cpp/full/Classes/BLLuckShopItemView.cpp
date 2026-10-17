#include "BLLuckShopItemView.h"
#include "CCTextureCache.h"
#include "CCNode.h"
#include "CCObject.h"
#include "CCControlButton.h"
#include "CCLabelTTF.h"
#include "CCScale9Sprite.h"
#include "CCSprite.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLLuckShopItemPresenter.h"
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
extern "C" long long func_0079e69c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_00585834;
extern "C" unsigned long UNK_00585872;
extern "C" unsigned long UNK_005858d0;
extern "C" unsigned long UNK_005858fe;
extern "C" unsigned long UNK_00585962;
extern "C" unsigned long UNK_00585972;
extern "C" unsigned long UNK_005859ae;
extern "C" unsigned long UNK_00585a02;
extern "C" unsigned long UNK_00585a20;
extern "C" unsigned long UNK_00585a72;
extern "C" unsigned long UNK_00585a8e;
extern "C" unsigned long UNK_00585aea;
extern "C" unsigned long UNK_00585b18;
extern "C" unsigned long UNK_00585b46;
extern "C" unsigned long UNK_00585bb2;
extern "C" unsigned long UNK_00585bce;
extern "C" unsigned long UNK_00585c68;
extern "C" unsigned long UNK_00585cf8;
extern "C" unsigned long UNK_00585dd2;
extern "C" unsigned long UNK_00585e14;
extern "C" unsigned long UNK_00585e3c;
extern "C" unsigned long UNK_00585e80;
extern "C" unsigned long _UNK_005858a4;
extern "C" unsigned long _UNK_005858a8;
extern "C" unsigned long _UNK_00585928;
extern "C" unsigned long _UNK_0058592c;
extern "C" unsigned long _UNK_00585d38;
extern "C" unsigned long _UNK_00585d3c;
extern "C" unsigned long _UNK_00585d40;
extern "C" unsigned long _UNK_00585d44;
extern "C" unsigned long _UNK_00585d48;
extern "C" unsigned long _UNK_00585d4c;
extern "C" unsigned long _UNK_00585d50;
extern "C" unsigned long _UNK_00585d54;
extern "C" unsigned long _UNK_00585d58;
extern "C" unsigned long _UNK_00585d5c;
extern "C" unsigned long _UNK_00585d60;
extern "C" unsigned long _UNK_00585d64;
extern "C" unsigned long _UNK_00585d68;
extern "C" unsigned long _UNK_00585d6c;
extern "C" unsigned long _UNK_00585d70;
extern "C" unsigned long _UNK_00585d74;
extern "C" unsigned long _UNK_00585d78;
extern "C" unsigned long _UNK_00585d7c;
extern "C" unsigned long _UNK_00585d80;
extern "C" unsigned long _UNK_00585d84;
extern "C" unsigned long _UNK_00585d88;
extern "C" unsigned long _UNK_00585d8c;
extern "C" unsigned long _UNK_00585d90;
extern "C" unsigned long _UNK_00585d94;
extern "C" unsigned long _UNK_00585d98;
extern "C" unsigned long _UNK_00585ef4;
extern "C" unsigned long _UNK_00585ef8;
extern "C" unsigned long _UNK_00585efc;
extern "C" unsigned long _UNK_00585f00;
extern "C" unsigned long _UNK_00585f04;
extern "C" unsigned long _UNK_00585f08;
extern "C" unsigned long _UNK_00585f0c;
extern "C" unsigned long _UNK_00585f10;
extern "C" unsigned long g_00585834;
extern "C" unsigned long g_00585872;
extern "C" unsigned long g_005858a4;
extern "C" unsigned long g_005858a8;
extern "C" unsigned long g_005858d0;
extern "C" unsigned long g_005858fe;
extern "C" unsigned long g_00585928;
extern "C" unsigned long g_0058592c;
extern "C" unsigned long g_00585962;
extern "C" unsigned long g_00585972;
extern "C" unsigned long g_005859ae;
extern "C" unsigned long g_00585a02;
extern "C" unsigned long g_00585a20;
extern "C" unsigned long g_00585a72;
extern "C" unsigned long g_00585a8e;
extern "C" unsigned long g_00585aea;
extern "C" unsigned long g_00585b18;
extern "C" unsigned long g_00585b46;
extern "C" unsigned long g_00585bb2;
extern "C" unsigned long g_00585bce;
extern "C" unsigned long g_00585c68;
extern "C" unsigned long g_00585cf8;
extern "C" unsigned long g_00585d38;
extern "C" unsigned long g_00585d3c;
extern "C" unsigned long g_00585d40;
extern "C" unsigned long g_00585d44;
extern "C" unsigned long g_00585d48;
extern "C" unsigned long g_00585d4c;
extern "C" unsigned long g_00585d50;
extern "C" unsigned long g_00585d54;
extern "C" unsigned long g_00585d58;
extern "C" unsigned long g_00585d5c;
extern "C" unsigned long g_00585d60;
extern "C" unsigned long g_00585d64;
extern "C" unsigned long g_00585d68;
extern "C" unsigned long g_00585d6c;
extern "C" unsigned long g_00585d70;
extern "C" unsigned long g_00585d74;
extern "C" unsigned long g_00585d78;
extern "C" unsigned long g_00585d7c;
extern "C" unsigned long g_00585d80;
extern "C" unsigned long g_00585d84;
extern "C" unsigned long g_00585d88;
extern "C" unsigned long g_00585d8c;
extern "C" unsigned long g_00585d90;
extern "C" unsigned long g_00585d94;
extern "C" unsigned long g_00585d98;
extern "C" unsigned long g_00585dd2;
extern "C" unsigned long g_00585e14;
extern "C" unsigned long g_00585e3c;
extern "C" unsigned long g_00585e80;
extern "C" unsigned long g_00585ef4;
extern "C" unsigned long g_00585ef8;
extern "C" unsigned long g_00585efc;
extern "C" unsigned long g_00585f00;
extern "C" unsigned long g_00585f04;
extern "C" unsigned long g_00585f08;
extern "C" unsigned long g_00585f0c;
extern "C" unsigned long g_00585f10;
cocos2d::CCSprite* BLLuckShopItemView::getSpriteItem() const
{
  return (cocos2d::CCSprite*)(*(undefined4 *)(((int)this) + 0x1b4));
}

void BLLuckShopItemView::setSpriteItem(cocos2d::CCSprite* p1)
{
  *(undefined4 *)(((int)this) + 0x1b4) = (undefined4)(intptr_t)p1;
  return;
}

cocos2d::CCSprite* BLLuckShopItemView::getSpriteBg() const
{
  return (cocos2d::CCSprite*)(*(undefined4 *)(((int)this) + 0x1b8));
}

void BLLuckShopItemView::setSpriteBg(cocos2d::CCSprite* p1)
{
  *(undefined4 *)(((int)this) + 0x1b8) = (undefined4)(intptr_t)p1;
  return;
}

cocos2d::extension::CCScale9Sprite* BLLuckShopItemView::getSpriteSale() const
{
  return (cocos2d::extension::CCScale9Sprite*)(*(undefined4 *)(((int)this) + 0x1bc));
}

cocos2d::extension::CCScale9Sprite* BLLuckShopItemView::getSpriteXiYou() const
{
  return (cocos2d::extension::CCScale9Sprite*)(*(undefined4 *)(((int)this) + 0x1c0));
}

cocos2d::CCLabelTTF* BLLuckShopItemView::getLabeName() const
{
  return (cocos2d::CCLabelTTF*)(*(undefined4 *)(((int)this) + 0x1c4));
}

void BLLuckShopItemView::setLabeName(cocos2d::CCLabelTTF* p1)
{
  *(undefined4 *)(((int)this) + 0x1c4) = (undefined4)(intptr_t)p1;
  return;
}

cocos2d::CCLabelTTF* BLLuckShopItemView::getLabePayCount() const
{
  return (cocos2d::CCLabelTTF*)(*(undefined4 *)(((int)this) + 0x1c8));
}

cocos2d::CCLabelTTF* BLLuckShopItemView::getLabePayNum() const
{
  return (cocos2d::CCLabelTTF*)(*(undefined4 *)(((int)this) + 0x1cc));
}

void BLLuckShopItemView::setLabePayNum(cocos2d::CCLabelTTF* p1)
{
  *(undefined4 *)(((int)this) + 0x1cc) = (undefined4)(intptr_t)p1;
  return;
}

cocos2d::extension::CCControlButton* BLLuckShopItemView::getBtnBuy() const
{
  return (cocos2d::extension::CCControlButton*)(*(undefined4 *)(((int)this) + 0x1d0));
}

cocos2d::CCSprite* BLLuckShopItemView::getSpriteDebris() const
{
  return (cocos2d::CCSprite*)(*(undefined4 *)(((int)this) + 0x1d4));
}

void BLLuckShopItemView::setSpriteDebris(cocos2d::CCSprite* p1)
{
  *(undefined4 *)(((int)this) + 0x1d4) = (undefined4)(intptr_t)p1;
  return;
}

BLLuckShopItemView::~BLLuckShopItemView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_00585834 + g_005858a4);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x28c;
  *(int *)((int)this + 4*(0x3d)) = iVar2 + 0x2cc;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  if (*(int *)((int)this + 4*(0x76)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x76)) = 0;
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00585872 + g_005858a8,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCSprite(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLLuckShopItemView::BLLuckShopItemView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_005858d0 + g_00585928);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x28c;
  *(int *)((int)this + 4*(0x3d)) = iVar2 + 0x2cc;
  *(int *)((int)this + 4*(0x6d)) = 0;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005858fe + g_0058592c,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

undefined4 BLLuckShopItemView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x1d8);
}


void BLLuckShopItemView::onExit()
{
  ((cocos2d::CCNode *)this)->onExit();
  ((BLLuckShopItemPresenter *)*(undefined4 *)(((int)this) + 0x1d8))->onEnter();
  return;
}

void BLLuckShopItemView::onEnter()
{
  ((cocos2d::CCNode *)this)->onEnter();
  ((BLLuckShopItemPresenter *)*(undefined4 *)(((int)this) + 0x1d8))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (5) =====
void BLLuckShopItemView::setSpriteSale(cocos2d::extension::CCScale9Sprite* p1)
{
  *(undefined4 *)(((int)this) + 0x1bc) = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  return;
}

void BLLuckShopItemView::setSpriteXiYou(cocos2d::extension::CCScale9Sprite* p1)
{
  *(undefined4 *)(((int)this) + 0x1c0) = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  return;
}

void BLLuckShopItemView::setLabePayCount(cocos2d::CCLabelTTF* p1)
{
  *(undefined4 *)(((int)this) + 0x1c8) = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  return;
}

void BLLuckShopItemView::setBtnBuy(cocos2d::extension::CCControlButton* p1)
{
  *(undefined4 *)(((int)this) + 0x1d0) = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  return;
}

bool BLLuckShopItemView::init()
{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 uVar5;
  code *pcVar6;
  undefined4 uStack_68;
  undefined1 auStack_64 [4];
  undefined1 auStack_60 [4];
  undefined4 uStack_5c;
  undefined1 auStack_58 [4];
  undefined4 uStack_54;
  undefined1 auStack_50 [4];
  undefined1 auStack_4c [4];
  undefined1 auStack_48 [4];
  undefined1 auStack_44 [4];
  undefined4 uStack_40;
  undefined1 auStack_3c [4];
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [4];
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [4];
  undefined1 uStack_28;
  undefined1 uStack_27;
  undefined1 uStack_26;
  
  iVar1 = (undefined4)(intptr_t)(((cocos2d::CCSprite *)this)->init());
  if (iVar1 != 0) {
    iVar2 = (undefined4)(intptr_t)(((BLLuckShopItemPresenter *)this)->create());
    *(int *)((int)this + 4*(0x76)) = iVar2;
    ((cocos2d::CCObject *)this)->retain();
    func_0079e45c(&uStack_68,(unsigned char *)((char *)&g_00585962 + (intptr_t)(g_00585d38)),&uStack_28);
    func_0079e69c(&uStack_68,(unsigned char *)((char *)&g_00585972 + (intptr_t)(g_00585d3c)));
    pcVar6 = *(code **)(*(int *)this + 0x1d0);
    uVar3 = (undefined4)(cocos2d::CCTextureCache::sharedTextureCache());
    uVar3 = (undefined4)(((cocos2d::CCTextureCache *)(uVar3))->textureForKey((char const*)uStack_68));
    0 /* ctorZero */;
    (*pcVar6)(((int)this),uVar3,&uStack_28);
    func_0079e45c(auStack_64,(unsigned char *)((char *)&g_005859ae + (intptr_t)(g_00585d40)),&uStack_28);
    piVar4 = (int *)0 /* ctorZero */;
    func_0079e2bc(auStack_64);
    pcVar6 = *(code **)(*piVar4 + 0x1d4);
    0 /* ctorZero */;
    (*pcVar6)(piVar4,&uStack_28);
    (**(code **)(*(int *)(piVar4) + (0x40)))(piVar4,0x3f800000);
    (**(code **)(*(int *)this + 200))(((int)this),piVar4);
    uVar3 = (undefined4)(((BLLanguage *)this)->share());
    func_0079e45c(auStack_60,(unsigned char *)((char *)&g_00585a02 + (intptr_t)(g_00585d48)),&uStack_28);
    ((BLLanguage *)this)->getString(*(std::string *)(void *)&uStack_5c);
    iVar2 = (undefined4)(intptr_t)(cocos2d::CCLabelTTF::create((char const*)uStack_5c, (char const*)(unsigned char *)((char *)&g_00585a20 + (intptr_t)(g_00585d4c)), 0x41800000));
    *(int *)((int)this + 4*(0x71)) = iVar2;
    func_0079e2bc(&uStack_5c);
    func_0079e2bc(auStack_60);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x71)) + 100))((int *)*(int *)((int)this + 4*(0x71)),g_00585d50);
    uStack_28 = 0xff;
    uStack_27 = 0xff;
    uStack_26 = 0;
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x71)) + 0x1b4))((int *)*(int *)((int)this + 4*(0x71)),&uStack_28);
    (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x71)));
    uVar3 = (undefined4)(((BLLanguage *)this)->share());
    func_0079e45c(auStack_58,(unsigned char *)((char *)&g_00585a72 + (intptr_t)(g_00585d54)),&uStack_28);
    ((BLLanguage *)this)->getString(*(std::string *)(void *)&uStack_54);
    iVar2 = (undefined4)(intptr_t)(cocos2d::CCLabelTTF::create((char const*)uStack_54, (char const*)(unsigned char *)((char *)&g_00585a8e + (intptr_t)(g_00585d58)), g_00585d5c));
    *(int *)((int)this + 4*(0x72)) = iVar2;
    func_0079e2bc(&uStack_54);
    func_0079e2bc(auStack_58);
    uStack_28 = 0xff;
    uStack_27 = 0xff;
    uStack_26 = 0xff;
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x72)) + 0x1b4))((int *)*(int *)((int)this + 4*(0x72)),&uStack_28);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x72)) + 100))((int *)*(int *)((int)this + 4*(0x72)),g_00585d60);
    (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x72)));
    piVar4 = (int *)cocos2d::extension::CCControlButton::create();
    *(int *)((int)this + 4*(0x74)) = (int)piVar4;
    (**(code **)(*(int *)(piVar4) + (0x294)))(piVar4,0);
    func_0079e45c(auStack_50,(unsigned char *)((char *)&g_00585aea + (intptr_t)(g_00585d64)),&uStack_28);
    uVar3 = (undefined4)(0 /* ctorZero */);
    func_0079e2bc(auStack_50);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x74)) + 0x30c))((int *)*(int *)((int)this + 4*(0x74)),uVar3,1);
    func_0079e45c(auStack_4c,(unsigned char *)((char *)&g_00585b18 + (intptr_t)(g_00585d68)),&uStack_28);
    uVar3 = (undefined4)(0 /* ctorZero */);
    func_0079e2bc(auStack_4c);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x74)) + 0x30c))((int *)*(int *)((int)this + 4*(0x74)),uVar3,2);
    func_0079e45c(auStack_48,(unsigned char *)((char *)&g_00585b46 + (intptr_t)(g_00585d6c)),&uStack_28);
    uVar3 = (undefined4)(0 /* ctorZero */);
    func_0079e2bc(auStack_48);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x74)) + 0x30c))((int *)*(int *)((int)this + 4*(0x74)),uVar3,4);
    piVar4 = (int *)*(int *)((int)this + 4*(0x74));
    pcVar6 = *(code **)(*piVar4 + 0x28c);
    0 /* ctorZero */;
    (*pcVar6)(piVar4,&uStack_28);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x74)) + 100))((int *)*(int *)((int)this + 4*(0x74)),g_00585d78);
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x74)),1);
    uVar3 = (undefined4)(((BLLanguage *)this)->share());
    func_0079e45c(auStack_44,(unsigned char *)((char *)&g_00585bb2 + (intptr_t)(g_00585d7c)),&uStack_28);
    ((BLLanguage *)this)->getString(*(std::string *)(void *)&uStack_40);
    iVar2 = (undefined4)(intptr_t)(cocos2d::CCLabelTTF::create((char const*)uStack_40, (char const*)(unsigned char *)((char *)&g_00585bce + (intptr_t)(g_00585d80)), g_00585d5c));
    *(int *)((int)this + 4*(0x73)) = iVar2;
    func_0079e2bc(&uStack_40);
    func_0079e2bc(auStack_44);
    piVar4 = (int *)*(int *)((int)this + 4*(0x73));
    pcVar6 = *(code **)(*piVar4 + 0x7c);
    0 /* ctorZero */;
    (*pcVar6)(piVar4,&uStack_28);
    piVar4 = (int *)*(int *)((int)this + 4*(0x73));
    pcVar6 = *(code **)(*piVar4 + 0x4c);
    uVar3 = (undefined4)((**(code **)(*(int *)*(int *)((int)this + 4*(0x74)) + 0x60))());
    uVar5 = (undefined4)((**(code **)(*(int *)*(int *)((int)this + 4*(0x74)) + 0x68))());
    0 /* ctorZero */;
    (*pcVar6)(piVar4,&uStack_28);
    uStack_28 = 0xff;
    uStack_27 = 0xff;
    uStack_26 = 0;
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x73)) + 0x1b4))((int *)*(int *)((int)this + 4*(0x73)),&uStack_28);
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x73)),1);
    func_0079e45c(auStack_3c,(unsigned char *)((char *)&g_00585c68 + (intptr_t)(g_00585d84)),&uStack_28);
    iVar2 = (undefined4)(intptr_t)(0 /* ctorZero */);
    *(int *)((int)this + 4*(0x6f)) = iVar2;
    func_0079e2bc(auStack_3c);
    piVar4 = (int *)*(int *)((int)this + 4*(0x6f));
    pcVar6 = *(code **)(*piVar4 + 0x1d4);
    0 /* ctorZero */;
    (*pcVar6)(piVar4,&uStack_28);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x6f)) + 0x40))((int *)*(int *)((int)this + 4*(0x6f)),0x3f800000);
    piVar4 = (int *)*(int *)((int)this + 4*(0x6f));
    pcVar6 = *(code **)(*piVar4 + 0x7c);
    0 /* ctorZero */;
    (*pcVar6)(piVar4,&uStack_28);
    piVar4 = (int *)*(int *)((int)this + 4*(0x6f));
    pcVar6 = *(code **)(*piVar4 + 0x4c);
    0 /* ctorZero */;
    (*pcVar6)(piVar4,&uStack_28);
    (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x6f)));
    func_0079e45c(auStack_38,(unsigned char *)((char *)&g_00585cf8 + (intptr_t)(g_00585d94)),&uStack_28);
    iVar2 = (undefined4)(intptr_t)(0 /* ctorZero */);
    *(int *)((int)this + 4*(0x70)) = iVar2;
    func_0079e2bc(auStack_38);
    piVar4 = (int *)*(int *)((int)this + 4*(0x70));
    pcVar6 = *(code **)(*piVar4 + 0x1d4);
    0 /* ctorZero */;
    (*pcVar6)(piVar4,&uStack_28);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x70)) + 0x40))((int *)*(int *)((int)this + 4*(0x70)),0x3f800000);
    piVar4 = (int *)*(int *)((int)this + 4*(0x70));
    pcVar6 = *(code **)(*piVar4 + 0x4c);
    0 /* ctorZero */;
    (*pcVar6)(piVar4,&uStack_28);
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x70)),2);
    func_0079e45c(auStack_34,(unsigned char *)((char *)&g_00585dd2 + (intptr_t)(g_00585efc)),&uStack_28);
    iVar2 = (undefined4)(intptr_t)(0 /* ctorZero */);
    *(int *)((int)this + 4*(0x6e)) = iVar2;
    func_0079e2bc(auStack_34);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x6e)) + 0x40))((int *)*(int *)((int)this + 4*(0x6e)),g_00585f00);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x6e)) + 100))((int *)*(int *)((int)this + 4*(0x6e)),g_00585f04);
    (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x6e)));
    func_0079e45c(auStack_30,(unsigned char *)((char *)&g_00585e14 + (intptr_t)(g_00585f08)),&uStack_28);
    uVar3 = (undefined4)(0 /* ctorZero */);
    func_0079e2bc(auStack_30);
    (**(code **)(*(int *)this + 200))(((int)this),uVar3);
    func_0079e45c(auStack_2c,(unsigned char *)((char *)&g_00585e3c + (intptr_t)(g_00585f0c)),&uStack_28);
    iVar2 = (undefined4)(intptr_t)(0 /* ctorZero */);
    *(int *)((int)this + 4*(0x6d)) = iVar2;
    func_0079e2bc(auStack_2c);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x6d)) + 100))((int *)*(int *)((int)this + 4*(0x6d)),g_00585f04);
    (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x6d)));
    ((BLLuckShopItemPresenter *)(*(int *)((int)this + 4*(0x76))))->initWithView((BLLuckShopItemView*)((int)this));
    func_0079e45c(&uStack_28,(unsigned char *)((char *)&g_00585e80 + (intptr_t)(g_00585f10)),auStack_2c);
    iVar2 = (undefined4)(intptr_t)(0 /* ctorZero */);
    *(int *)((int)this + 4*(0x75)) = iVar2;
    func_0079e2bc(&uStack_28);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x75)) + 100))((int *)*(int *)((int)this + 4*(0x75)),g_00585f04);
    (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x75)));
    func_0079e2bc(&uStack_68);
  }
  return iVar1;
}
