#include "JingJiShopItemView.h"
#include "CCTextureCache.h"
#include "CCNode.h"
#include "CCObject.h"
#include "CCControlButton.h"
#include "CCLabelTTF.h"
#include "CCScale9Sprite.h"
#include "CCSprite.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "JingJiShopItemPresenter.h"
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
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e69c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_00578c6c;
extern "C" unsigned long UNK_00578caa;
extern "C" unsigned long UNK_00578d08;
extern "C" unsigned long UNK_00578d36;
extern "C" unsigned long UNK_00578d9c;
extern "C" unsigned long UNK_00578dac;
extern "C" unsigned long UNK_00578de6;
extern "C" unsigned long UNK_00578e3a;
extern "C" unsigned long UNK_00578e58;
extern "C" unsigned long UNK_00578eac;
extern "C" unsigned long UNK_00578ec8;
extern "C" unsigned long UNK_00578f24;
extern "C" unsigned long UNK_00578f52;
extern "C" unsigned long UNK_00578f7c;
extern "C" unsigned long UNK_00578fe8;
extern "C" unsigned long UNK_00579078;
extern "C" unsigned long UNK_00579094;
extern "C" unsigned long UNK_00579134;
extern "C" unsigned long UNK_00579230;
extern "C" unsigned long UNK_0057929e;
extern "C" unsigned long UNK_005792d4;
extern "C" unsigned long UNK_005792fc;
extern "C" unsigned long UNK_00579334;
extern "C" unsigned long _UNK_00578cdc;
extern "C" unsigned long _UNK_00578ce0;
extern "C" unsigned long _UNK_00578d60;
extern "C" unsigned long _UNK_00578d64;
extern "C" unsigned long _UNK_00579170;
extern "C" unsigned long _UNK_00579174;
extern "C" unsigned long _UNK_00579178;
extern "C" unsigned long _UNK_0057917c;
extern "C" unsigned long _UNK_00579180;
extern "C" unsigned long _UNK_00579184;
extern "C" unsigned long _UNK_00579188;
extern "C" unsigned long _UNK_0057918c;
extern "C" unsigned long _UNK_00579190;
extern "C" unsigned long _UNK_00579194;
extern "C" unsigned long _UNK_00579198;
extern "C" unsigned long _UNK_0057919c;
extern "C" unsigned long _UNK_005791a0;
extern "C" unsigned long _UNK_005791a4;
extern "C" unsigned long _UNK_005791a8;
extern "C" unsigned long _UNK_005791ac;
extern "C" unsigned long _UNK_005791b0;
extern "C" unsigned long _UNK_005791b4;
extern "C" unsigned long _UNK_005791b8;
extern "C" unsigned long _UNK_005791bc;
extern "C" unsigned long _UNK_005791c0;
extern "C" unsigned long _UNK_005791c4;
extern "C" unsigned long _UNK_005791c8;
extern "C" unsigned long _UNK_005791cc;
extern "C" unsigned long _UNK_005791d0;
extern "C" unsigned long _UNK_005791d4;
extern "C" unsigned long _UNK_005793cc;
extern "C" unsigned long _UNK_005793d0;
extern "C" unsigned long _UNK_005793d4;
extern "C" unsigned long _UNK_005793d8;
extern "C" unsigned long _UNK_005793dc;
extern "C" unsigned long _UNK_005793e0;
extern "C" unsigned long _UNK_005793e4;
extern "C" unsigned long _UNK_005793e8;
extern "C" unsigned long _UNK_005793ec;
extern "C" unsigned long _UNK_005793f0;
extern "C" unsigned long _UNK_005793f4;
extern "C" unsigned long _UNK_005793f8;
extern "C" unsigned long _UNK_005793fc;
extern "C" unsigned long g_00578c6c;
extern "C" unsigned long g_00578caa;
extern "C" unsigned long g_00578cdc;
extern "C" unsigned long g_00578ce0;
extern "C" unsigned long g_00578d08;
extern "C" unsigned long g_00578d36;
extern "C" unsigned long g_00578d60;
extern "C" unsigned long g_00578d64;
extern "C" unsigned long g_00578d9c;
extern "C" unsigned long g_00578dac;
extern "C" unsigned long g_00578de6;
extern "C" unsigned long g_00578e3a;
extern "C" unsigned long g_00578e58;
extern "C" unsigned long g_00578eac;
extern "C" unsigned long g_00578ec8;
extern "C" unsigned long g_00578f24;
extern "C" unsigned long g_00578f52;
extern "C" unsigned long g_00578f7c;
extern "C" unsigned long g_00578fe8;
extern "C" unsigned long g_00579078;
extern "C" unsigned long g_00579094;
extern "C" unsigned long g_00579134;
extern "C" unsigned long g_00579170;
extern "C" unsigned long g_00579174;
extern "C" unsigned long g_00579178;
extern "C" unsigned long g_0057917c;
extern "C" unsigned long g_00579180;
extern "C" unsigned long g_00579184;
extern "C" unsigned long g_00579188;
extern "C" unsigned long g_0057918c;
extern "C" unsigned long g_00579190;
extern "C" unsigned long g_00579194;
extern "C" unsigned long g_00579198;
extern "C" unsigned long g_0057919c;
extern "C" unsigned long g_005791a0;
extern "C" unsigned long g_005791a4;
extern "C" unsigned long g_005791a8;
extern "C" unsigned long g_005791ac;
extern "C" unsigned long g_005791b0;
extern "C" unsigned long g_005791b4;
extern "C" unsigned long g_005791b8;
extern "C" unsigned long g_005791bc;
extern "C" unsigned long g_005791c0;
extern "C" unsigned long g_005791c4;
extern "C" unsigned long g_005791c8;
extern "C" unsigned long g_005791cc;
extern "C" unsigned long g_005791d0;
extern "C" unsigned long g_005791d4;
extern "C" unsigned long g_00579230;
extern "C" unsigned long g_0057929e;
extern "C" unsigned long g_005792d4;
extern "C" unsigned long g_005792fc;
extern "C" unsigned long g_00579334;
extern "C" unsigned long g_005793cc;
extern "C" unsigned long g_005793d0;
extern "C" unsigned long g_005793d4;
extern "C" unsigned long g_005793d8;
extern "C" unsigned long g_005793dc;
extern "C" unsigned long g_005793e0;
extern "C" unsigned long g_005793e4;
extern "C" unsigned long g_005793e8;
extern "C" unsigned long g_005793ec;
extern "C" unsigned long g_005793f0;
extern "C" unsigned long g_005793f4;
extern "C" unsigned long g_005793f8;
extern "C" unsigned long g_005793fc;
cocos2d::CCSprite* JingJiShopItemView::getSpriteItem() const
{
  return (cocos2d::CCSprite*)(*(undefined4 *)(((int)this) + 0x1b4));
}

void JingJiShopItemView::setSpriteItem(cocos2d::CCSprite* p1)
{
  *(undefined4 *)(((int)this) + 0x1b4) = (undefined4)(intptr_t)p1;
  return;
}

cocos2d::extension::CCScale9Sprite* JingJiShopItemView::getSpriteDebris() const
{
  return (cocos2d::extension::CCScale9Sprite*)(*(undefined4 *)(((int)this) + 0x1b8));
}

cocos2d::CCSprite* JingJiShopItemView::getSpriteBg() const
{
  return (cocos2d::CCSprite*)(*(undefined4 *)(((int)this) + 0x1bc));
}

void JingJiShopItemView::setSpriteBg(cocos2d::CCSprite* p1)
{
  *(undefined4 *)(((int)this) + 0x1bc) = (undefined4)(intptr_t)p1;
  return;
}

cocos2d::extension::CCScale9Sprite* JingJiShopItemView::getSpriteSale() const
{
  return (cocos2d::extension::CCScale9Sprite*)(*(undefined4 *)(((int)this) + 0x1c0));
}

cocos2d::extension::CCScale9Sprite* JingJiShopItemView::getSpriteXiYou() const
{
  return (cocos2d::extension::CCScale9Sprite*)(*(undefined4 *)(((int)this) + 0x1c4));
}

cocos2d::CCLabelTTF* JingJiShopItemView::getLabeName() const
{
  return (cocos2d::CCLabelTTF*)(*(undefined4 *)(((int)this) + 0x1c8));
}

void JingJiShopItemView::setLabeName(cocos2d::CCLabelTTF* p1)
{
  *(undefined4 *)(((int)this) + 0x1c8) = (undefined4)(intptr_t)p1;
  return;
}

cocos2d::CCLabelTTF* JingJiShopItemView::getLabePayCount() const
{
  return (cocos2d::CCLabelTTF*)(*(undefined4 *)(((int)this) + 0x1cc));
}

cocos2d::CCLabelTTF* JingJiShopItemView::getLabePayNum() const
{
  return (cocos2d::CCLabelTTF*)(*(undefined4 *)(((int)this) + 0x1d0));
}

void JingJiShopItemView::setLabePayNum(cocos2d::CCLabelTTF* p1)
{
  *(undefined4 *)(((int)this) + 0x1d0) = (undefined4)(intptr_t)p1;
  return;
}

cocos2d::extension::CCControlButton* JingJiShopItemView::getBtnBuy() const
{
  return (cocos2d::extension::CCControlButton*)(*(undefined4 *)(((int)this) + 0x1d4));
}

JingJiShopItemView::~JingJiShopItemView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_00578c6c + g_00578cdc);
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
  func_0079e45c(&uStack_14,&g_00578caa + g_00578ce0,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCSprite(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

JingJiShopItemView::JingJiShopItemView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_00578d08 + g_00578d60);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x28c;
  *(int *)((int)this + 4*(0x3d)) = iVar2 + 0x2cc;
  *(int *)((int)this + 4*(0x6d)) = 0;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00578d36 + g_00578d64,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

undefined4 JingJiShopItemView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x1d8);
}


void JingJiShopItemView::onExit()
{
  ((cocos2d::CCNode *)this)->onExit();
  ((JingJiShopItemPresenter *)*(undefined4 *)(((int)this) + 0x1d8))->onEnter();
  return;
}

void JingJiShopItemView::onEnter()
{
  ((cocos2d::CCNode *)this)->onEnter();
  ((JingJiShopItemPresenter *)*(undefined4 *)(((int)this) + 0x1d8))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (6) =====
void JingJiShopItemView::setSpriteDebris(cocos2d::extension::CCScale9Sprite* p1)
{
  *(undefined4 *)(((int)this) + 0x1b8) = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  return;
}

void JingJiShopItemView::setSpriteSale(cocos2d::extension::CCScale9Sprite* p1)
{
  *(undefined4 *)(((int)this) + 0x1c0) = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  return;
}

void JingJiShopItemView::setSpriteXiYou(cocos2d::extension::CCScale9Sprite* p1)
{
  *(undefined4 *)(((int)this) + 0x1c4) = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  return;
}

void JingJiShopItemView::setLabePayCount(cocos2d::CCLabelTTF* p1)
{
  *(undefined4 *)(((int)this) + 0x1cc) = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  return;
}

void JingJiShopItemView::setBtnBuy(cocos2d::extension::CCControlButton* p1)
{
  *(undefined4 *)(((int)this) + 0x1d4) = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  return;
}

bool JingJiShopItemView::init()
{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 uVar5;
  code *pcVar6;
  undefined4 uStack_6c;
  undefined1 auStack_68 [4];
  undefined1 auStack_64 [4];
  undefined4 uStack_60;
  undefined1 auStack_5c [4];
  undefined4 uStack_58;
  undefined1 auStack_54 [4];
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
    iVar2 = (undefined4)(intptr_t)(((JingJiShopItemPresenter *)this)->create());
    *(int *)((int)this + 4*(0x76)) = iVar2;
    ((cocos2d::CCObject *)this)->retain();
    func_0079e45c(&uStack_6c,(unsigned char *)((char *)&g_00578d9c + (intptr_t)(g_00579170)),&uStack_28);
    func_0079e69c(&uStack_6c,(unsigned char *)((char *)&g_00578dac + (intptr_t)(g_00579174)));
    pcVar6 = *(code **)(*(int *)this + 0x1d0);
    uVar3 = (undefined4)(cocos2d::CCTextureCache::sharedTextureCache());
    uVar3 = (undefined4)(((cocos2d::CCTextureCache *)(uVar3))->textureForKey((char const*)uStack_6c));
    0 /* ctorZero */;
    (*pcVar6)(((int)this),uVar3,&uStack_28);
    func_0079e45c(auStack_68,(unsigned char *)((char *)&g_00578de6 + (intptr_t)(g_00579178)),&uStack_28);
    piVar4 = (int *)0 /* ctorZero */;
    func_0079e2bc(auStack_68);
    pcVar6 = *(code **)(*piVar4 + 0x1d4);
    0 /* ctorZero */;
    (*pcVar6)(piVar4,&uStack_28);
    (**(code **)(*(int *)(piVar4) + (0x40)))(piVar4,0x3f800000);
    (**(code **)(*(int *)this + 200))(((int)this),piVar4);
    uVar3 = (undefined4)(((BLLanguage *)this)->share());
    func_0079e45c(auStack_64,(unsigned char *)((char *)&g_00578e3a + (intptr_t)(g_00579184)),&uStack_28);
    ((BLLanguage *)this)->getString(*(std::string *)(void *)&uStack_60);
    iVar2 = (undefined4)(intptr_t)(cocos2d::CCLabelTTF::create((char const*)uStack_60, (char const*)(unsigned char *)((char *)&g_00578e58 + (intptr_t)(g_00579188)), 0x41800000));
    *(int *)((int)this + 4*(0x72)) = iVar2;
    func_0079e2bc(&uStack_60);
    func_0079e2bc(auStack_64);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x72)) + 100))((int *)*(int *)((int)this + 4*(0x72)),g_0057918c);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x72)) + 0x1b4))((int *)*(int *)((int)this + 4*(0x72)),&uStack_28);
    (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x72)));
    uVar3 = (undefined4)(((BLLanguage *)this)->share());
    func_0079e45c(auStack_5c,(unsigned char *)((char *)&g_00578eac + (intptr_t)(g_00579190)),&uStack_28);
    ((BLLanguage *)this)->getString(*(std::string *)(void *)&uStack_58);
    iVar2 = (undefined4)(intptr_t)(cocos2d::CCLabelTTF::create((char const*)uStack_58, (char const*)(unsigned char *)((char *)&g_00578ec8 + (intptr_t)(g_00579194)), g_00579198));
    *(int *)((int)this + 4*(0x73)) = iVar2;
    func_0079e2bc(&uStack_58);
    func_0079e2bc(auStack_5c);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x73)) + 0x1b4))();
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x73)) + 100))((int *)*(int *)((int)this + 4*(0x73)),g_0057919c);
    (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x73)));
    piVar4 = (int *)cocos2d::extension::CCControlButton::create();
    *(int *)((int)this + 4*(0x75)) = (int)piVar4;
    (**(code **)(*(int *)(piVar4) + (0x294)))(piVar4,0);
    func_0079e45c(auStack_54,(unsigned char *)((char *)&g_00578f24 + (intptr_t)(g_005791a0)),&uStack_28);
    uVar3 = (undefined4)(0 /* ctorZero */);
    func_0079e2bc(auStack_54);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x75)) + 0x30c))((int *)*(int *)((int)this + 4*(0x75)),uVar3,1);
    func_0079e45c(auStack_50,(unsigned char *)((char *)&g_00578f52 + (intptr_t)(g_005791a4)),&uStack_28);
    uVar3 = (undefined4)(0 /* ctorZero */);
    func_0079e2bc(auStack_50);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x75)) + 0x30c))((int *)*(int *)((int)this + 4*(0x75)),uVar3,2);
    func_0079e45c(auStack_4c,(unsigned char *)((char *)&g_00578f7c + (intptr_t)(g_005791a8)),&uStack_28);
    uVar3 = (undefined4)(0 /* ctorZero */);
    func_0079e2bc(auStack_4c);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x75)) + 0x30c))((int *)*(int *)((int)this + 4*(0x75)),uVar3,4);
    piVar4 = (int *)*(int *)((int)this + 4*(0x75));
    pcVar6 = *(code **)(*piVar4 + 0x28c);
    0 /* ctorZero */;
    (*pcVar6)(piVar4,&uStack_28);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x75)) + 100))((int *)*(int *)((int)this + 4*(0x75)),g_005791b4);
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x75)),1);
    func_0079e45c(auStack_48,(unsigned char *)((char *)&g_00578fe8 + (intptr_t)(g_005791b8)),&uStack_28);
    piVar4 = (int *)0 /* ctorZero */;
    func_0079e2bc(auStack_48);
    pcVar6 = *(code **)(*piVar4 + 0x1d4);
    0 /* ctorZero */;
    (*pcVar6)(piVar4,&uStack_28);
    pcVar6 = *(code **)(*piVar4 + 0x7c);
    0 /* ctorZero */;
    (*pcVar6)(piVar4,&uStack_28);
    (**(code **)(*(int *)(piVar4) + (0x40)))(piVar4,0x3f800000);
    pcVar6 = *(code **)(*piVar4 + 0x4c);
    iVar2 = (undefined4)(intptr_t)((**(code **)(*(int *)*(int *)((int)this + 4*(0x75)) + 0x8c))());
    uVar3 = (undefined4)(func_0079e4fc(*(undefined4 *)(iVar2 + 4),0x3f000000));
    0 /* ctorZero */;
    (*pcVar6)(piVar4,&uStack_28);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x75)) + 200))((int *)*(int *)((int)this + 4*(0x75)),piVar4);
    uVar3 = (undefined4)(((BLLanguage *)this)->share());
    func_0079e45c(auStack_44,(unsigned char *)((char *)&g_00579078 + (intptr_t)(g_005791c4)),&uStack_28);
    ((BLLanguage *)this)->getString(*(std::string *)(void *)&uStack_40);
    iVar2 = (undefined4)(intptr_t)(cocos2d::CCLabelTTF::create((char const*)uStack_40, (char const*)(unsigned char *)((char *)&g_00579094 + (intptr_t)(g_005791c8)), g_00579198));
    *(int *)((int)this + 4*(0x74)) = iVar2;
    func_0079e2bc(&uStack_40);
    func_0079e2bc(auStack_44);
    piVar4 = (int *)*(int *)((int)this + 4*(0x74));
    pcVar6 = *(code **)(*piVar4 + 0x7c);
    0 /* ctorZero */;
    (*pcVar6)(piVar4,&uStack_28);
    piVar4 = (int *)*(int *)((int)this + 4*(0x74));
    pcVar6 = *(code **)(*piVar4 + 0x4c);
    uVar3 = (undefined4)((**(code **)(*(int *)*(int *)((int)this + 4*(0x75)) + 0x60))());
    uVar3 = (undefined4)(func_0079e57c(uVar3,g_005791cc));
    uVar5 = (undefined4)((**(code **)(*(int *)*(int *)((int)this + 4*(0x75)) + 0x68))());
    0 /* ctorZero */;
    (*pcVar6)(piVar4,&uStack_28);
    uStack_28 = 0xff;
    uStack_27 = 0xff;
    uStack_26 = 0;
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x74)) + 0x1b4))((int *)*(int *)((int)this + 4*(0x74)),&uStack_28);
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x74)),1);
    func_0079e45c(auStack_3c,(unsigned char *)((char *)&g_00579134 + (intptr_t)(g_005791d0)),&uStack_28);
    iVar2 = (undefined4)(intptr_t)(0 /* ctorZero */);
    *(int *)((int)this + 4*(0x70)) = iVar2;
    func_0079e2bc(auStack_3c);
    piVar4 = (int *)*(int *)((int)this + 4*(0x70));
    pcVar6 = *(code **)(*piVar4 + 0x1d4);
    0 /* ctorZero */;
    (*pcVar6)(piVar4,&uStack_28);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x70)) + 0x40))((int *)*(int *)((int)this + 4*(0x70)),0x3f800000);
    piVar4 = (int *)*(int *)((int)this + 4*(0x70));
    pcVar6 = *(code **)(*piVar4 + 0x7c);
    0 /* ctorZero */;
    (*pcVar6)(piVar4,&uStack_28);
    piVar4 = (int *)*(int *)((int)this + 4*(0x70));
    pcVar6 = *(code **)(*piVar4 + 0x4c);
    0 /* ctorZero */;
    (*pcVar6)(piVar4,&uStack_28);
    (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x70)));
    func_0079e45c(auStack_38,(unsigned char *)((char *)&g_00579230 + (intptr_t)(g_005793d4)),&uStack_28);
    iVar2 = (undefined4)(intptr_t)(0 /* ctorZero */);
    *(int *)((int)this + 4*(0x71)) = iVar2;
    func_0079e2bc(auStack_38);
    piVar4 = (int *)*(int *)((int)this + 4*(0x71));
    pcVar6 = *(code **)(*piVar4 + 0x1d4);
    0 /* ctorZero */;
    (*pcVar6)(piVar4,&uStack_28);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x71)) + 0x40))((int *)*(int *)((int)this + 4*(0x71)),0x3f800000);
    piVar4 = (int *)*(int *)((int)this + 4*(0x71));
    pcVar6 = *(code **)(*piVar4 + 0x4c);
    0 /* ctorZero */;
    (*pcVar6)(piVar4,&uStack_28);
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x71)),2);
    func_0079e45c(auStack_34,(unsigned char *)((char *)&g_0057929e + (intptr_t)(g_005793e4)),&uStack_28);
    iVar2 = (undefined4)(intptr_t)(0 /* ctorZero */);
    *(int *)((int)this + 4*(0x6f)) = iVar2;
    func_0079e2bc(auStack_34);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x6f)) + 100))((int *)*(int *)((int)this + 4*(0x6f)),g_005793e8);
    (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x6f)));
    func_0079e45c(auStack_30,(unsigned char *)((char *)&g_005792d4 + (intptr_t)(g_005793ec)),&uStack_28);
    uVar3 = (undefined4)(0 /* ctorZero */);
    func_0079e2bc(auStack_30);
    (**(code **)(*(int *)this + 200))(((int)this),uVar3);
    func_0079e45c(auStack_2c,(unsigned char *)((char *)&g_005792fc + (intptr_t)(g_005793f0)),&uStack_28);
    iVar2 = (undefined4)(intptr_t)(0 /* ctorZero */);
    *(int *)((int)this + 4*(0x6d)) = iVar2;
    func_0079e2bc(auStack_2c);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x6d)) + 100))((int *)*(int *)((int)this + 4*(0x6d)),g_005793e8);
    (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x6d)));
    func_0079e45c(&uStack_28,(unsigned char *)((char *)&g_00579334 + (intptr_t)(g_005793f4)),auStack_2c);
    iVar2 = (undefined4)(intptr_t)(0 /* ctorZero */);
    *(int *)((int)this + 4*(0x6e)) = iVar2;
    func_0079e2bc(&uStack_28);
    piVar4 = (int *)*(int *)((int)this + 4*(0x6e));
    pcVar6 = *(code **)(*piVar4 + 0x1d4);
    0 /* ctorZero */;
    (*pcVar6)(piVar4,&uStack_28);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x6e)) + 100))((int *)*(int *)((int)this + 4*(0x6e)),g_005793e8);
    (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x6e)));
    ((JingJiShopItemPresenter *)(*(int *)((int)this + 4*(0x76))))->initWithView((JingJiShopItemView*)((int)this));
    func_0079e2bc(&uStack_6c);
  }
  return iVar1;
}
