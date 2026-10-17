#include "BLQQCoinView.h"
#include "CCEditBox.h"
#include "CCLayer.h"
#include "CCObject.h"
#include "CCControlButton.h"
#include "CCArray.h"
#include "CCLabelTTF.h"
#include "CCDirector.h"
#include "CCSprite.h"
#include "BLLeakUtils.h"
#include "BLQQCoinPresenter.h"
#include "BLRichText.h"
#include "InputBox.h"
#include "RichTextData.h"
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
extern "C" long long func_0079e2dc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long func_0079e5fc(...);
extern "C" long long func_0079e62c(...);
extern "C" long long func_0079e724(...);
extern "C" long long func_0079e7e4(...);
extern "C" long long func_0079e8d4(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_004de54c;
extern "C" unsigned long UNK_004de590;
extern "C" unsigned long UNK_004de5d4;
extern "C" unsigned long UNK_004de5fc;
extern "C" unsigned long UNK_004de774;
extern "C" unsigned long UNK_004de7de;
extern "C" unsigned long UNK_004de89a;
extern "C" unsigned long UNK_004de9d0;
extern "C" unsigned long UNK_004de9d2;
extern "C" unsigned long UNK_004dec44;
extern "C" unsigned long UNK_004dee42;
extern "C" unsigned long UNK_004dee74;
extern "C" unsigned long UNK_004dee96;
extern "C" unsigned long UNK_004defca;
extern "C" unsigned long UNK_004deffc;
extern "C" unsigned long UNK_004df02a;
extern "C" unsigned long UNK_004df1a8;
extern "C" unsigned long UNK_004df1aa;
extern "C" unsigned long UNK_004df1d2;
extern "C" unsigned long UNK_004df242;
extern "C" unsigned long UNK_004df436;
extern "C" unsigned long UNK_004df438;
extern "C" unsigned long UNK_004df45f;
extern "C" unsigned long UNK_004df590;
extern "C" unsigned long UNK_004df71a;
extern "C" unsigned long UNK_004df71c;
extern "C" unsigned long UNK_004df8a8;
extern "C" unsigned long UNK_004df8d6;
extern "C" unsigned long UNK_004df906;
extern "C" unsigned long UNK_004dfa84;
extern "C" unsigned long UNK_004dfa86;
extern "C" unsigned long UNK_004dfa96;
extern "C" unsigned long UNK_004dfb36;
extern "C" unsigned long UNK_004dfb44;
extern "C" unsigned long UNK_004dfbe2;
extern "C" unsigned long UNK_004dfc66;
extern "C" unsigned long UNK_004dfc8e;
extern "C" unsigned long _DAT_004de69c;
extern "C" unsigned long _DAT_004de6a0;
extern "C" unsigned long _UNK_004de5c0;
extern "C" unsigned long _UNK_004de5c4;
extern "C" unsigned long _UNK_004de5d8;
extern "C" unsigned long _UNK_004de600;
extern "C" unsigned long _UNK_004deb38;
extern "C" unsigned long _UNK_004deb3c;
extern "C" unsigned long _UNK_004deb40;
extern "C" unsigned long _UNK_004deb44;
extern "C" unsigned long _UNK_004deb48;
extern "C" unsigned long _UNK_004deb4c;
extern "C" unsigned long _UNK_004deb50;
extern "C" unsigned long _UNK_004deb54;
extern "C" unsigned long _UNK_004deb58;
extern "C" unsigned long _UNK_004deb5c;
extern "C" unsigned long _UNK_004deb60;
extern "C" unsigned long _UNK_004deb64;
extern "C" unsigned long _UNK_004deb68;
extern "C" unsigned long _UNK_004deb6c;
extern "C" unsigned long _UNK_004deb70;
extern "C" unsigned long _UNK_004deb74;
extern "C" unsigned long _UNK_004def88;
extern "C" unsigned long _UNK_004def8c;
extern "C" unsigned long _UNK_004def90;
extern "C" unsigned long _UNK_004def94;
extern "C" unsigned long _UNK_004def98;
extern "C" unsigned long _UNK_004def9c;
extern "C" unsigned long _UNK_004defa0;
extern "C" unsigned long _UNK_004defa4;
extern "C" unsigned long _UNK_004defa8;
extern "C" unsigned long _UNK_004defac;
extern "C" unsigned long _UNK_004defb0;
extern "C" unsigned long _UNK_004defb4;
extern "C" unsigned long _UNK_004df390;
extern "C" unsigned long _UNK_004df394;
extern "C" unsigned long _UNK_004df398;
extern "C" unsigned long _UNK_004df39c;
extern "C" unsigned long _UNK_004df3a0;
extern "C" unsigned long _UNK_004df3a4;
extern "C" unsigned long _UNK_004df3a8;
extern "C" unsigned long _UNK_004df3ac;
extern "C" unsigned long _UNK_004df3b0;
extern "C" unsigned long _UNK_004df3b4;
extern "C" unsigned long _UNK_004df3b8;
extern "C" unsigned long _UNK_004df3bc;
extern "C" unsigned long _UNK_004df3c0;
extern "C" unsigned long _UNK_004df3c4;
extern "C" unsigned long _UNK_004df3c8;
extern "C" unsigned long _UNK_004df3cc;
extern "C" unsigned long _UNK_004df808;
extern "C" unsigned long _UNK_004df80c;
extern "C" unsigned long _UNK_004df810;
extern "C" unsigned long _UNK_004df814;
extern "C" unsigned long _UNK_004df818;
extern "C" unsigned long _UNK_004df81c;
extern "C" unsigned long _UNK_004df820;
extern "C" unsigned long _UNK_004df824;
extern "C" unsigned long _UNK_004df828;
extern "C" unsigned long _UNK_004df82c;
extern "C" unsigned long _UNK_004df830;
extern "C" unsigned long _UNK_004df834;
extern "C" unsigned long _UNK_004df838;
extern "C" unsigned long _UNK_004dfbfc;
extern "C" unsigned long _UNK_004dfc00;
extern "C" unsigned long _UNK_004dfc04;
extern "C" unsigned long _UNK_004dfc08;
extern "C" unsigned long _UNK_004dfc0c;
extern "C" unsigned long _UNK_004dfc10;
extern "C" unsigned long _UNK_004dfc14;
extern "C" unsigned long _UNK_004dfc18;
extern "C" unsigned long _UNK_004dfc1c;
extern "C" unsigned long _UNK_004dfc20;
extern "C" unsigned long _UNK_004dfc24;
extern "C" unsigned long _UNK_004dfc28;
extern "C" unsigned long _UNK_004dfc2c;
extern "C" unsigned long _UNK_004dfc30;
extern "C" unsigned long _UNK_004dfe08;
extern "C" unsigned long _UNK_004dfe0c;
extern "C" unsigned long _UNK_004dfe10;
extern "C" unsigned long _UNK_004dfe14;
extern "C" unsigned long _UNK_004dfe18;
extern "C" unsigned long _UNK_004dfe1c;
extern "C" unsigned long _UNK_004dfe20;
extern "C" unsigned long g_004de54c;
extern "C" unsigned long g_004de590;
extern "C" unsigned long g_004de5c0;
extern "C" unsigned long g_004de5c4;
extern "C" unsigned long g_004de5d4;
extern "C" unsigned long g_004de5d8;
extern "C" unsigned long g_004de5fc;
extern "C" unsigned long g_004de600;
extern "C" unsigned long g_004de69c;
extern "C" unsigned long g_004de6a0;
extern "C" unsigned long g_004de774;
extern "C" unsigned long g_004de7de;
extern "C" unsigned long g_004de89a;
extern "C" unsigned long g_004de9d0;
extern "C" unsigned long g_004de9d2;
extern "C" unsigned long g_004deb38;
extern "C" unsigned long g_004deb3c;
extern "C" unsigned long g_004deb40;
extern "C" unsigned long g_004deb44;
extern "C" unsigned long g_004deb48;
extern "C" unsigned long g_004deb4c;
extern "C" unsigned long g_004deb50;
extern "C" unsigned long g_004deb54;
extern "C" unsigned long g_004deb58;
extern "C" unsigned long g_004deb5c;
extern "C" unsigned long g_004deb60;
extern "C" unsigned long g_004deb64;
extern "C" unsigned long g_004deb68;
extern "C" unsigned long g_004deb6c;
extern "C" unsigned long g_004deb70;
extern "C" unsigned long g_004deb74;
extern "C" unsigned long g_004dec44;
extern "C" unsigned long g_004dee42;
extern "C" unsigned long g_004dee74;
extern "C" unsigned long g_004dee96;
extern "C" unsigned long g_004def88;
extern "C" unsigned long g_004def8c;
extern "C" unsigned long g_004def90;
extern "C" unsigned long g_004def94;
extern "C" unsigned long g_004def98;
extern "C" unsigned long g_004def9c;
extern "C" unsigned long g_004defa0;
extern "C" unsigned long g_004defa4;
extern "C" unsigned long g_004defa8;
extern "C" unsigned long g_004defac;
extern "C" unsigned long g_004defb0;
extern "C" unsigned long g_004defb4;
extern "C" unsigned long g_004defca;
extern "C" unsigned long g_004deffc;
extern "C" unsigned long g_004df02a;
extern "C" unsigned long g_004df1a8;
extern "C" unsigned long g_004df1aa;
extern "C" unsigned long g_004df1d2;
extern "C" unsigned long g_004df242;
extern "C" unsigned long g_004df390;
extern "C" unsigned long g_004df394;
extern "C" unsigned long g_004df398;
extern "C" unsigned long g_004df39c;
extern "C" unsigned long g_004df3a0;
extern "C" unsigned long g_004df3a4;
extern "C" unsigned long g_004df3a8;
extern "C" unsigned long g_004df3ac;
extern "C" unsigned long g_004df3b0;
extern "C" unsigned long g_004df3b4;
extern "C" unsigned long g_004df3b8;
extern "C" unsigned long g_004df3bc;
extern "C" unsigned long g_004df3c0;
extern "C" unsigned long g_004df3c4;
extern "C" unsigned long g_004df3c8;
extern "C" unsigned long g_004df3cc;
extern "C" unsigned long g_004df436;
extern "C" unsigned long g_004df438;
extern "C" unsigned long g_004df45f;
extern "C" unsigned long g_004df590;
extern "C" unsigned long g_004df71a;
extern "C" unsigned long g_004df71c;
extern "C" unsigned long g_004df808;
extern "C" unsigned long g_004df80c;
extern "C" unsigned long g_004df810;
extern "C" unsigned long g_004df814;
extern "C" unsigned long g_004df818;
extern "C" unsigned long g_004df81c;
extern "C" unsigned long g_004df820;
extern "C" unsigned long g_004df824;
extern "C" unsigned long g_004df828;
extern "C" unsigned long g_004df82c;
extern "C" unsigned long g_004df830;
extern "C" unsigned long g_004df834;
extern "C" unsigned long g_004df838;
extern "C" unsigned long g_004df8a8;
extern "C" unsigned long g_004df8d6;
extern "C" unsigned long g_004df906;
extern "C" unsigned long g_004dfa84;
extern "C" unsigned long g_004dfa86;
extern "C" unsigned long g_004dfa96;
extern "C" unsigned long g_004dfb36;
extern "C" unsigned long g_004dfb44;
extern "C" unsigned long g_004dfbe2;
extern "C" unsigned long g_004dfbfc;
extern "C" unsigned long g_004dfc00;
extern "C" unsigned long g_004dfc04;
extern "C" unsigned long g_004dfc08;
extern "C" unsigned long g_004dfc0c;
extern "C" unsigned long g_004dfc10;
extern "C" unsigned long g_004dfc14;
extern "C" unsigned long g_004dfc18;
extern "C" unsigned long g_004dfc1c;
extern "C" unsigned long g_004dfc20;
extern "C" unsigned long g_004dfc24;
extern "C" unsigned long g_004dfc28;
extern "C" unsigned long g_004dfc2c;
extern "C" unsigned long g_004dfc30;
extern "C" unsigned long g_004dfc66;
extern "C" unsigned long g_004dfc8e;
extern "C" unsigned long g_004dfe08;
extern "C" unsigned long g_004dfe0c;
extern "C" unsigned long g_004dfe10;
extern "C" unsigned long g_004dfe14;
extern "C" unsigned long g_004dfe18;
extern "C" unsigned long g_004dfe1c;
extern "C" unsigned long g_004dfe20;
BLQQCoinView::~BLQQCoinView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_004de54c + g_004de5c0);
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
  func_0079e45c(&uStack_14,&g_004de590 + g_004de5c4,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLQQCoinView::BLQQCoinView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(g_004de69c + 0x4de644);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLQQCoinView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * BLQQCoinView::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x124)));
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

undefined4 BLQQCoinView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x108);
}

undefined4 BLQQCoinView::getBtnclose()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 BLQQCoinView::getBtnGoLevel()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

undefined4 BLQQCoinView::getBtnObtain()
{
  return *(undefined4 *)(((int)this) + 0x118);
}

undefined4 BLQQCoinView::getObtainLabel()
{
  return *(undefined4 *)(((int)this) + 0x11c);
}

undefined4 BLQQCoinView::getGoLevelLabel()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

undefined4 BLQQCoinView::getInputBox()
{
  return *(undefined4 *)(((int)this) + 0x120);
}


void BLQQCoinView::onEnter()
{
  ((BLQQCoinPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLQQCoinView::onExit()
{
  ((BLQQCoinPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
bool BLQQCoinView::init()
{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  int *piVar11;
  undefined4 uVar12;
  int *piVar13;
  code *pcVar14;
  int *piVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined1 *puVar18;
  int iStack_38;
  undefined4 uStack_34;
  undefined4 auStack_30 [2];
  undefined1 auStack_28 [4];
  undefined4 uStack_24;
  undefined1 uStack_20;
  undefined1 uStack_1f;
  undefined1 uStack_1e;
  
  iVar1 = (undefined4)(intptr_t)(((cocos2d::CCLayer *)this)->init());
  if (iVar1 != 0) {
    iVar2 = (undefined4)(intptr_t)(((BLQQCoinPresenter *)this)->create((BLQQCoinView*)((int)this)));
    *(int *)((int)this + 4*(0x42)) = iVar2;
    ((cocos2d::CCObject *)this)->retain();
    piVar3 = (int *)cocos2d::CCSprite::create((char const*)(unsigned char *)((char *)&g_004de774 + (intptr_t)(g_004deb50)));
    puVar4 = (undefined4 *)(**(code **)(*(int *)(piVar3) + (0x8c)))();
    uVar5 = (undefined4)(func_0079e59c(*puVar4,g_004deb54));
    0 /* ctorZero */;
    iVar2 = (undefined4)(intptr_t)(iStack_38);
    pcVar14 = *(code **)(*(int *)this + 0x88);
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar6 = (undefined4)(func_0079e4dc(iVar2,uVar5));
    uVar5 = (undefined4)(uStack_34);
    cocos2d::CCDirector::sharedDirector();
    uVar7 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(uVar5,uVar7));
    0 /* ctorZero */;
    (*pcVar14)(((int)this),&uStack_20);
    func_0079e45c(&uStack_20,(unsigned char *)((char *)&g_004de7de + (intptr_t)(g_004deb5c)),auStack_28);
    piVar8 = (int *)0 /* ctorZero */;
    func_0079e2bc(&uStack_20);
    iVar2 = (undefined4)(intptr_t)(iStack_38);
    pcVar14 = *(code **)(*piVar8 + 0x88);
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar6 = (undefined4)(func_0079e4dc(iVar2,uVar5));
    uVar5 = (undefined4)(uStack_34);
    cocos2d::CCDirector::sharedDirector();
    uVar7 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(uVar5,uVar7));
    0 /* ctorZero */;
    (*pcVar14)(piVar8,&uStack_20);
    pcVar14 = *(code **)(*piVar8 + 0x4c);
    0 /* ctorZero */;
    uVar5 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar6 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar6 = (undefined4)(func_0079e4dc(uVar5,uVar6));
    0 /* ctorZero */;
    uVar5 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar7 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(uVar5,uVar7));
    0 /* ctorZero */;
    (*pcVar14)(piVar8,&uStack_20);
    (**(code **)(*(int *)this + 200))(((int)this),piVar8);
    func_0079e45c(&uStack_20,(unsigned char *)((char *)&g_004de89a + (intptr_t)(g_004deb60)),auStack_28);
    piVar8 = (int *)0 /* ctorZero */;
    func_0079e2bc(&uStack_20);
    pcVar14 = *(code **)(*piVar8 + 0x88);
    uVar5 = (undefined4)(func_0079e57c(iStack_38,0x41000000));
    0 /* ctorZero */;
    uVar5 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar6 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar6 = (undefined4)(func_0079e4dc(uVar5,uVar6));
    uVar5 = (undefined4)(func_0079e57c(iStack_38,0x41000000));
    0 /* ctorZero */;
    uVar5 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar7 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(uVar5,uVar7));
    0 /* ctorZero */;
    (*pcVar14)(piVar8,&uStack_20);
    pcVar14 = *(code **)(*piVar8 + 0x4c);
    uVar16 = (undefined4)(intptr_t)(func_0079e62c(uStack_34));
    uVar16 = func_0079e724((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),g_004deb38,
                             g_004deb3c);
    func_0079e8d4((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),g_004deb40,g_004deb44);
    uVar5 = (undefined4)(func_0079e7e4());
    0 /* ctorZero */;
    uVar5 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar6 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar6 = (undefined4)(func_0079e4dc(uVar5,uVar6));
    uVar16 = (undefined4)(intptr_t)(func_0079e62c(uStack_34));
    uVar16 = func_0079e724((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),g_004deb38,
                             g_004deb3c);
    func_0079e8d4((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),g_004deb40,g_004deb44);
    uVar5 = (undefined4)(func_0079e7e4());
    0 /* ctorZero */;
    uVar5 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar7 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(uVar5,uVar7));
    0 /* ctorZero */;
    (*pcVar14)(piVar8,&uStack_20);
    (**(code **)(*(int *)this + 0xcc))(((int)this),piVar8,2);
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(g_004deb68,uVar5));
    piVar9 = (int *)cocos2d::CCLabelTTF::create((char const*)(unsigned char *)((char *)&g_004de9d2 + (intptr_t)(g_004deb70)), (char const*)(unsigned char *)((char *)&g_004de9d0 + (intptr_t)(g_004deb6c)), uVar5);
    pcVar14 = *(code **)(*piVar9 + 0x7c);
    0 /* ctorZero */;
    (*pcVar14)(piVar9,&uStack_20);
    uStack_20 = 0x78;
    uStack_1f = 0x78;
    uStack_1e = 0x78;
    (**(code **)(*(int *)(piVar9) + (0x1b4)))(piVar9);
    pcVar14 = *(code **)(*piVar9 + 0x4c);
    uVar5 = (undefined4)(func_0079e4fc(iStack_38 + -0x80000000,0x3f000000));
    uVar5 = (undefined4)(func_0079e59c(uVar5,g_004deb74));
    uVar6 = (undefined4)((**(code **)(*(int *)(piVar8) + (0x68)))(piVar8));
    0 /* ctorZero */;
    uVar5 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar6 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar6 = (undefined4)(func_0079e4dc(uVar5,uVar6));
    uVar5 = (undefined4)(func_0079e4fc(iStack_38 + -0x80000000,0x3f000000));
    uVar5 = (undefined4)(func_0079e59c(uVar5,g_004deb74));
    uVar7 = (undefined4)((**(code **)(*(int *)(piVar8) + (0x68)))(piVar8));
    0 /* ctorZero */;
    uVar5 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar7 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(uVar5,uVar7));
    0 /* ctorZero */;
    (*pcVar14)(piVar9,&uStack_20);
    (**(code **)(*(int *)this + 0xcc))(((int)this),piVar9,3);
    pcVar14 = *(code **)(*piVar3 + 0x4c);
    uVar5 = (undefined4)((**(code **)(*(int *)(piVar8) + (0x68)))(piVar8));
    iVar2 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar8) + (0x8c)))(piVar8));
    uVar16 = (undefined4)(intptr_t)(func_0079e62c(uVar5));
    uVar17 = (undefined4)(intptr_t)(func_0079e62c(*(undefined4 *)(iVar2 + 4)));
    uVar17 = func_0079e724((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),g_004deb38,
                             g_004deb3c);
    uVar16 = func_0079e8d4((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),(int)uVar17,
                             (int)((ulonglong)uVar17 >> 0x20));
    iVar2 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar3) + (0x8c)))(piVar3));
    uVar17 = (undefined4)(intptr_t)(func_0079e62c(*(undefined4 *)(iVar2 + 4)));
    uVar17 = func_0079e724((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),g_004deb38,
                             g_004deb3c);
    uVar16 = func_0079e8d4((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),(int)uVar17,
                             (int)((ulonglong)uVar17 >> 0x20));
    func_0079e8d4((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),g_004deb48,g_004deb4c);
    uVar5 = (undefined4)(func_0079e7e4());
    0 /* ctorZero */;
    uVar5 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar6 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar6 = (undefined4)(func_0079e4dc(uVar5,uVar6));
    uVar5 = (undefined4)((**(code **)(*(int *)(piVar8) + (0x68)))(piVar8));
    iVar2 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar8) + (0x8c)))(piVar8));
    uVar16 = (undefined4)(intptr_t)(func_0079e62c(uVar5));
    uVar17 = (undefined4)(intptr_t)(func_0079e62c(*(undefined4 *)(iVar2 + 4)));
    uVar17 = func_0079e724((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),g_004def88,
                             g_004def8c);
    uVar16 = func_0079e8d4((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),(int)uVar17,
                             (int)((ulonglong)uVar17 >> 0x20));
    iVar2 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar3) + (0x8c)))(piVar3));
    uVar17 = (undefined4)(intptr_t)(func_0079e62c(*(undefined4 *)(iVar2 + 4)));
    uVar17 = func_0079e724((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),g_004def88,
                             g_004def8c);
    uVar16 = func_0079e8d4((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),(int)uVar17,
                             (int)((ulonglong)uVar17 >> 0x20));
    func_0079e8d4((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),g_004def90,g_004def94);
    uVar5 = (undefined4)(func_0079e7e4());
    0 /* ctorZero */;
    uVar5 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar7 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(uVar5,uVar7));
    0 /* ctorZero */;
    (*pcVar14)(piVar3,&uStack_20);
    (**(code **)(*(int *)this + 200))(((int)this),piVar3);
    func_0079e45c(&uStack_20,(unsigned char *)((char *)&g_004dec44 + (intptr_t)(g_004defa0)),auStack_28);
    piVar9 = (int *)0 /* ctorZero */;
    func_0079e2bc(&uStack_20);
    pcVar14 = *(code **)(*piVar9 + 0x88);
    puVar4 = (undefined4 *)(**(code **)(*(int *)(piVar3) + (0x8c)))(piVar3);
    0 /* ctorZero */;
    uVar5 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar6 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar6 = (undefined4)(func_0079e4dc(uVar5,uVar6));
    puVar4 = (undefined4 *)(**(code **)(*(int *)(piVar3) + (0x8c)))(piVar3);
    0 /* ctorZero */;
    uVar5 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar7 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(uVar5,uVar7));
    0 /* ctorZero */;
    (*pcVar14)(piVar9,&uStack_20);
    pcVar14 = *(code **)(*piVar9 + 0x4c);
    uVar5 = (undefined4)((**(code **)(*(int *)(piVar3) + (0x68)))(piVar3));
    iVar2 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar3) + (0x8c)))(piVar3));
    uVar16 = (undefined4)(intptr_t)(func_0079e62c(uVar5));
    uVar17 = (undefined4)(intptr_t)(func_0079e62c(*(undefined4 *)(iVar2 + 4)));
    uVar17 = func_0079e724((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),g_004def88,
                             g_004def8c);
    uVar16 = func_0079e8d4((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),(int)uVar17,
                             (int)((ulonglong)uVar17 >> 0x20));
    iVar2 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar9) + (0x8c)))(piVar9));
    uVar17 = (undefined4)(intptr_t)(func_0079e62c(*(undefined4 *)(iVar2 + 4)));
    uVar17 = func_0079e724((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),g_004def88,
                             g_004def8c);
    uVar16 = func_0079e8d4((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),(int)uVar17,
                             (int)((ulonglong)uVar17 >> 0x20));
    func_0079e8d4((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),g_004def98,g_004def9c);
    uVar5 = (undefined4)(func_0079e7e4());
    0 /* ctorZero */;
    uVar5 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar6 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar6 = (undefined4)(func_0079e4dc(uVar5,uVar6));
    uVar5 = (undefined4)((**(code **)(*(int *)(piVar3) + (0x68)))(piVar3));
    iVar2 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar3) + (0x8c)))(piVar3));
    uVar16 = (undefined4)(intptr_t)(func_0079e62c(uVar5));
    uVar17 = (undefined4)(intptr_t)(func_0079e62c(*(undefined4 *)(iVar2 + 4)));
    uVar17 = func_0079e724((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),g_004def88,
                             g_004def8c);
    uVar16 = func_0079e8d4((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),(int)uVar17,
                             (int)((ulonglong)uVar17 >> 0x20));
    iVar2 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar9) + (0x8c)))(piVar9));
    uVar17 = (undefined4)(intptr_t)(func_0079e62c(*(undefined4 *)(iVar2 + 4)));
    uVar17 = func_0079e724((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),g_004def88,
                             g_004def8c);
    uVar16 = func_0079e8d4((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),(int)uVar17,
                             (int)((ulonglong)uVar17 >> 0x20));
    func_0079e8d4((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),g_004def98,g_004def9c);
    uVar5 = (undefined4)(func_0079e7e4());
    0 /* ctorZero */;
    uVar5 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar7 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(uVar5,uVar7));
    0 /* ctorZero */;
    (*pcVar14)(piVar9,&uStack_20);
    (**(code **)(*(int *)this + 200))(((int)this),piVar9);
    uVar5 = (undefined4)(cocos2d::CCArray::create());
    iVar10 = (undefined4)(intptr_t)(((RichTextData *)this)->create());
    *(undefined4 *)(iVar10 + 0x14) = 1;
    iVar2 = (undefined4)(intptr_t)(g_004defa8);
    *(int *)(iVar10 + 0x28) = *(int *)(iVar10 + 0x28) + -3;
    func_0079e2dc(iVar10 + 0x18,&g_004dee42 + iVar2);
    ((cocos2d::CCArray *)(uVar5))->addObject((cocos2d::CCObject*)iVar10);
    iVar10 = (undefined4)(intptr_t)(((RichTextData *)this)->create());
    *(undefined4 *)(iVar10 + 0x14) = 1;
    *(undefined1 *)(iVar10 + 0x24) = 0xff;
    *(undefined1 *)(iVar10 + 0x25) = 0xff;
    *(undefined1 *)(iVar10 + 0x26) = 0;
    iVar2 = (undefined4)(intptr_t)(g_004defac);
    *(int *)(iVar10 + 0x28) = *(int *)(iVar10 + 0x28) + 5;
    func_0079e2dc(iVar10 + 0x18,&g_004dee74 + iVar2);
    ((cocos2d::CCArray *)(uVar5))->addObject((cocos2d::CCObject*)iVar10);
    iVar10 = (undefined4)(intptr_t)(((RichTextData *)this)->create());
    *(undefined4 *)(iVar10 + 0x14) = 1;
    iVar2 = (undefined4)(intptr_t)(g_004defb0);
    *(int *)(iVar10 + 0x28) = *(int *)(iVar10 + 0x28) + -3;
    func_0079e2dc(iVar10 + 0x18,&g_004dee96 + iVar2);
    ((cocos2d::CCArray *)(uVar5))->addObject((cocos2d::CCObject*)iVar10);
    puVar4 = (undefined4 *)(**(code **)(*(int *)(piVar9) + (0x8c)))(piVar9);
    uVar6 = (undefined4)(func_0079e5fc(*puVar4));
    piVar8 = ((void)((BLRichText *)this)->create((cocos2d::CCArray*)uVar5, uVar6, 0),(int *)0);
    pcVar14 = *(code **)(*piVar8 + 0x7c);
    0 /* ctorZero */;
    (*pcVar14)(piVar8,&uStack_20);
    pcVar14 = *(code **)(*piVar8 + 0x4c);
    uVar5 = (undefined4)(func_0079e4fc(iStack_38 + -0x80000000,0x3f000000));
    uVar5 = (undefined4)(func_0079e59c(uVar5,g_004defb4));
    uVar6 = (undefined4)((**(code **)(*(int *)(piVar9) + (0x68)))(piVar9));
    0 /* ctorZero */;
    uVar5 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar6 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar6 = (undefined4)(func_0079e4dc(uVar5,uVar6));
    uVar5 = (undefined4)(func_0079e4fc(iStack_38 + -0x80000000,0x3f000000));
    uVar5 = (undefined4)(func_0079e59c(uVar5,g_004defb4));
    uVar7 = (undefined4)((**(code **)(*(int *)(piVar9) + (0x68)))(piVar9));
    0 /* ctorZero */;
    uVar5 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar7 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(uVar5,uVar7));
    0 /* ctorZero */;
    (*pcVar14)(piVar8,&uStack_20);
    (**(code **)(*(int *)this + 200))(((int)this),piVar8);
    piVar8 = (int *)cocos2d::extension::CCControlButton::create();
    *(int *)((int)this + 4*(0x44)) = (int)piVar8;
    (**(code **)(*(int *)(piVar8) + (0x294)))(piVar8,0);
    func_0079e45c(&uStack_20,(unsigned char *)((char *)&g_004defca + (intptr_t)(g_004df3a0)),auStack_28);
    uVar5 = (undefined4)(0 /* ctorZero */);
    func_0079e2bc(&uStack_20);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x44)) + 0x30c))((int *)*(int *)((int)this + 4*(0x44)),uVar5,1);
    func_0079e45c(&uStack_20,(unsigned char *)((char *)&g_004deffc + (intptr_t)(g_004df3a4)),auStack_28);
    piVar11 = (int *)0 /* ctorZero */;
    func_0079e2bc(&uStack_20);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x44)) + 0x30c))((int *)*(int *)((int)this + 4*(0x44)),piVar11,2);
    func_0079e45c(&uStack_20,(unsigned char *)((char *)&g_004df02a + (intptr_t)(g_004df3a8)),auStack_28);
    uVar5 = (undefined4)(0 /* ctorZero */);
    func_0079e2bc(&uStack_20);
    piVar8 = (int *)((int)this);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x44)) + 0x30c))((int *)*(int *)((int)this + 4*(0x44)),uVar5,4);
    piVar15 = (int *)*(int *)((int)this + 4*(0x44));
    pcVar14 = *(code **)(*piVar15 + 0x28c);
    0 /* ctorZero */;
    (*pcVar14)(piVar15,&uStack_20);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x44)) + 0x30))((int *)*(int *)((int)this + 4*(0x44)),0x3f800000);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x44)) + 0x38))((int *)*(int *)((int)this + 4*(0x44)),0x3f800000);
    piVar15 = (int *)*(int *)((int)this + 4*(0x44));
    pcVar14 = *(code **)(*piVar15 + 0x4c);
    uVar16 = (undefined4)(intptr_t)(func_0079e62c(iStack_38));
    uVar16 = func_0079e724((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),g_004df390,
                             g_004df394);
    uVar16 = func_0079e8d4((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),g_004df398,
                             g_004df39c);
    puVar4 = (undefined4 *)(**(code **)(*(int *)(piVar11) + (0x8c)))(piVar11);
    func_0079e4fc(*puVar4,0x3f000000);
    uVar17 = (undefined4)(intptr_t)(func_0079e62c());
    func_0079e8d4((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),(int)uVar17,
                    (int)((ulonglong)uVar17 >> 0x20));
    uVar5 = (undefined4)(func_0079e7e4());
    uVar6 = (undefined4)((**(code **)(*(int *)(piVar9) + (0x68)))(piVar9));
    0 /* ctorZero */;
    uVar5 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar6 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar6 = (undefined4)(func_0079e4dc(uVar5,uVar6));
    uVar16 = (undefined4)(intptr_t)(func_0079e62c(iStack_38));
    uVar16 = func_0079e724((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),g_004df390,
                             g_004df394);
    uVar16 = func_0079e8d4((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),g_004df398,
                             g_004df39c);
    puVar4 = (undefined4 *)(**(code **)(*(int *)(piVar11) + (0x8c)))(piVar11);
    func_0079e4fc(*puVar4,0x3f000000);
    uVar17 = (undefined4)(intptr_t)(func_0079e62c());
    func_0079e8d4((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),(int)uVar17,
                    (int)((ulonglong)uVar17 >> 0x20));
    uVar5 = (undefined4)(func_0079e7e4());
    uVar7 = (undefined4)((**(code **)(*(int *)(piVar9) + (0x68)))(piVar9));
    0 /* ctorZero */;
    uVar5 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar7 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(uVar5,uVar7));
    0 /* ctorZero */;
    (*pcVar14)(piVar15,&uStack_20);
    (**(code **)(*(int *)(piVar8) + (0xcc)))(piVar8,*(int *)((int)this + 4*(0x44)),8);
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(g_004df3b4,uVar5));
    piVar11 = (int *)cocos2d::CCLabelTTF::create((char const*)(unsigned char *)((char *)&g_004df1aa + (intptr_t)(g_004df3bc)), (char const*)(unsigned char *)((char *)&g_004df1a8 + (intptr_t)(g_004df3b8)), uVar5);
    *(int *)((int)this + 4*(0x45)) = (int)piVar11;
    pcVar14 = *(code **)(*piVar11 + 0x7c);
    0 /* ctorZero */;
    (*pcVar14)(piVar11,&uStack_20);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x45)) + 0x1b4))((int *)*(int *)((int)this + 4*(0x45)),(unsigned char *)((char *)&g_004df1d2 + (intptr_t)(g_004df3c0)))
    ;
    piVar11 = (int *)*(int *)((int)this + 4*(0x45));
    pcVar14 = *(code **)(*piVar11 + 0x4c);
    puVar4 = (undefined4 *)(**(code **)(*(int *)*(int *)((int)this + 4*(0x44)) + 0x50))();
    uVar6 = (undefined4)(*puVar4);
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(uVar6,uVar5));
    iVar2 = (undefined4)(intptr_t)((**(code **)(*(int *)*(int *)((int)this + 4*(0x44)) + 0x50))());
    uVar7 = (undefined4)(*(undefined4 *)(iVar2 + 4));
    cocos2d::CCDirector::sharedDirector();
    uVar6 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar6 = (undefined4)(func_0079e4dc(uVar7,uVar6));
    0 /* ctorZero */;
    (*pcVar14)(piVar11,&uStack_20);
    (**(code **)(*(int *)(piVar8) + (0xcc)))(piVar8,*(int *)((int)this + 4*(0x45)),9);
    func_0079e45c(&uStack_20,(unsigned char *)((char *)&g_004df242 + (intptr_t)(g_004df3c4)),auStack_28);
    piVar11 = (int *)0 /* ctorZero */;
    func_0079e2bc(&uStack_20);
    pcVar14 = *(code **)(*piVar11 + 0x88);
    puVar4 = (undefined4 *)(**(code **)(*(int *)(piVar3) + (0x8c)))(piVar3);
    0 /* ctorZero */;
    uVar5 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar6 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar6 = (undefined4)(func_0079e4dc(uVar5,uVar6));
    puVar4 = (undefined4 *)(**(code **)(*(int *)(piVar3) + (0x8c)))(piVar3);
    0 /* ctorZero */;
    uVar5 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar7 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(uVar5,uVar7));
    0 /* ctorZero */;
    (*pcVar14)(piVar11,&uStack_20);
    pcVar14 = *(code **)(*piVar11 + 0x4c);
    uVar5 = (undefined4)((**(code **)(*(int *)(piVar9) + (0x68)))(piVar9));
    iVar2 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar9) + (0x8c)))(piVar9));
    uVar6 = (undefined4)(func_0079e4fc(*(undefined4 *)(iVar2 + 4),0x3f000000));
    uVar5 = (undefined4)(func_0079e57c(uVar5,uVar6));
    uVar5 = (undefined4)(func_0079e57c(uVar5,g_004df3cc));
    iVar2 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar11) + (0x8c)))(piVar11));
    uVar6 = (undefined4)(func_0079e4fc(*(undefined4 *)(iVar2 + 4),0x3f000000));
    uVar5 = (undefined4)(func_0079e57c(uVar5,uVar6));
    0 /* ctorZero */;
    uVar5 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar6 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar6 = (undefined4)(func_0079e4dc(uVar5,uVar6));
    uVar5 = (undefined4)((**(code **)(*(int *)(piVar9) + (0x68)))(piVar9));
    iVar2 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar9) + (0x8c)))(piVar9));
    uVar7 = (undefined4)(func_0079e4fc(*(undefined4 *)(iVar2 + 4),0x3f000000));
    uVar5 = (undefined4)(func_0079e57c(uVar5,uVar7));
    uVar5 = (undefined4)(func_0079e57c(uVar5,g_004df3cc));
    iVar2 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar11) + (0x8c)))(piVar11));
    uVar7 = (undefined4)(func_0079e4fc(*(undefined4 *)(iVar2 + 4),0x3f000000));
    uVar5 = (undefined4)(func_0079e57c(uVar5,uVar7));
    0 /* ctorZero */;
    uVar5 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar7 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(uVar5,uVar7));
    0 /* ctorZero */;
    (*pcVar14)(piVar11,&uStack_20);
    (**(code **)(*(int *)(piVar8) + (200)))(piVar8,piVar11);
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(g_004df810,uVar5));
    piVar15 = (int *)cocos2d::CCLabelTTF::create((char const*)(unsigned char *)((char *)&g_004df438 + (intptr_t)(g_004df818)), (char const*)(unsigned char *)((char *)&g_004df436 + (intptr_t)(g_004df814)), uVar5);
    pcVar14 = *(code **)(*piVar15 + 0x7c);
    0 /* ctorZero */;
    (*pcVar14)(piVar15,&uStack_20);
    (**(code **)(*(int *)(piVar15) + (0x1b4)))(piVar15,(unsigned char *)((char *)&g_004df45f + (intptr_t)(g_004df81c)));
    pcVar14 = *(code **)(*piVar15 + 0x4c);
    uVar5 = (undefined4)(func_0079e4fc(iStack_38 + -0x80000000,0x3f000000));
    uVar5 = (undefined4)(func_0079e59c(uVar5,g_004df820));
    uVar6 = (undefined4)((**(code **)(*(int *)(piVar9) + (0x68)))(piVar9));
    iVar2 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar9) + (0x8c)))(piVar9));
    uVar7 = (undefined4)(func_0079e4fc(*(undefined4 *)(iVar2 + 4),0x3f000000));
    uVar6 = (undefined4)(func_0079e57c(uVar6,uVar7));
    iVar2 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar15) + (0x8c)))(piVar15));
    uVar6 = (undefined4)(func_0079e57c(uVar6,*(undefined4 *)(iVar2 + 4)));
    uVar6 = (undefined4)(func_0079e57c(uVar6,g_004df824));
    0 /* ctorZero */;
    uVar5 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar6 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar6 = (undefined4)(func_0079e4dc(uVar5,uVar6));
    uVar5 = (undefined4)(func_0079e4fc(iStack_38 + -0x80000000,0x3f000000));
    uVar5 = (undefined4)(func_0079e59c(uVar5,g_004df820));
    uVar7 = (undefined4)((**(code **)(*(int *)(piVar9) + (0x68)))(piVar9));
    iVar2 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar9) + (0x8c)))(piVar9));
    uVar12 = (undefined4)(func_0079e4fc(*(undefined4 *)(iVar2 + 4),0x3f000000));
    uVar7 = (undefined4)(func_0079e57c(uVar7,uVar12));
    iVar2 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar15) + (0x8c)))(piVar15));
    uVar7 = (undefined4)(func_0079e57c(uVar7,*(undefined4 *)(iVar2 + 4)));
    uVar7 = (undefined4)(func_0079e57c(uVar7,g_004df824));
    0 /* ctorZero */;
    uVar5 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar7 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(uVar5,uVar7));
    0 /* ctorZero */;
    (*pcVar14)(piVar15,&uStack_20);
    (**(code **)(*(int *)(piVar15) + (0x90)))(piVar15,0);
    (**(code **)(*(int *)(piVar8) + (0xcc)))(piVar8,piVar15,3);
    func_0079e45c(&uStack_20,(unsigned char *)((char *)&g_004df590 + (intptr_t)(g_004df828)),auStack_28);
    piVar13 = (int *)0 /* ctorZero */;
    func_0079e2bc(&uStack_20);
    pcVar14 = *(code **)(*piVar13 + 0x88);
    puVar4 = (undefined4 *)(**(code **)(*(int *)(piVar3) + (0x8c)))(piVar3);
    uVar16 = (undefined4)(intptr_t)(func_0079e62c(*puVar4));
    func_0079e724((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),g_004df808,g_004df80c);
    uVar5 = (undefined4)(func_0079e7e4());
    0 /* ctorZero */;
    uVar5 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar6 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(uVar5,uVar6));
    puVar4 = (undefined4 *)(**(code **)(*(int *)(piVar3) + (0x8c)))(piVar3);
    uVar16 = (undefined4)(intptr_t)(func_0079e62c(*puVar4));
    func_0079e724((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),g_004df808,g_004df80c);
    uVar6 = (undefined4)(func_0079e7e4());
    puVar18 = auStack_28;
    0 /* ctorZero */;
    uVar7 = (undefined4)(*(undefined4 *)(puVar18 + 4));
    cocos2d::CCDirector::sharedDirector();
    uVar6 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar6 = (undefined4)(func_0079e4dc(uVar7,uVar6));
    0 /* ctorZero */;
    (*pcVar14)(piVar13,&uStack_20);
    pcVar14 = *(code **)(*piVar13 + 0x4c);
    uVar5 = (undefined4)((**(code **)(*(int *)(piVar15) + (0x68)))(piVar15));
    iVar2 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar15) + (0x8c)))(piVar15));
    uVar6 = (undefined4)(func_0079e4fc(*(undefined4 *)(iVar2 + 4),0x3f000000));
    uVar5 = (undefined4)(func_0079e57c(uVar5,uVar6));
    uVar5 = (undefined4)(func_0079e57c(uVar5,g_004df830));
    0 /* ctorZero */;
    uVar5 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar6 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(uVar5,uVar6));
    uVar6 = (undefined4)((**(code **)(*(int *)(piVar15) + (0x68)))(piVar15));
    iVar2 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar15) + (0x8c)))(piVar15));
    uVar7 = (undefined4)(func_0079e4fc(*(undefined4 *)(iVar2 + 4),0x3f000000));
    uVar6 = (undefined4)(func_0079e57c(uVar6,uVar7));
    uVar6 = (undefined4)(func_0079e57c(uVar6,g_004df830));
    0 /* ctorZero */;
    uVar7 = (undefined4)(*(undefined4 *)(puVar18 + 4));
    cocos2d::CCDirector::sharedDirector();
    uVar6 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar6 = (undefined4)(func_0079e4dc(uVar7,uVar6));
    0 /* ctorZero */;
    (*pcVar14)(piVar13,&uStack_20);
    (**(code **)(*(int *)(piVar8) + (200)))(piVar8,piVar13);
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(g_004df810,uVar5));
    piVar3 = (int *)cocos2d::CCLabelTTF::create((char const*)(unsigned char *)((char *)&g_004df71c + (intptr_t)(g_004df838)), (char const*)(unsigned char *)((char *)&g_004df71a + (intptr_t)(g_004df834)), uVar5);
    pcVar14 = *(code **)(*piVar3 + 0x7c);
    0 /* ctorZero */;
    (*pcVar14)(piVar3,&uStack_20);
    pcVar14 = *(code **)(*piVar3 + 0x4c);
    uVar5 = (undefined4)(func_0079e4fc(iStack_38 + -0x80000000,0x3f000000));
    uVar5 = (undefined4)(func_0079e59c(uVar5,g_004df820));
    uVar6 = (undefined4)((**(code **)(*(int *)(piVar9) + (0x68)))(piVar9));
    iVar2 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar11) + (0x8c)))(piVar11));
    uVar6 = (undefined4)(func_0079e57c(uVar6,*(undefined4 *)(iVar2 + 4)));
    iVar2 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar9) + (0x8c)))(piVar9));
    uVar7 = (undefined4)(func_0079e4fc(*(undefined4 *)(iVar2 + 4),0x3f000000));
    uVar6 = (undefined4)(func_0079e57c(uVar6,uVar7));
    0 /* ctorZero */;
    uVar5 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar6 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(uVar5,uVar6));
    uVar6 = (undefined4)(func_0079e4fc(iStack_38 + -0x80000000,0x3f000000));
    uVar6 = (undefined4)(func_0079e59c(uVar6,g_004df820));
    uVar7 = (undefined4)((**(code **)(*(int *)(piVar9) + (0x68)))(piVar9));
    iVar2 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar11) + (0x8c)))(piVar11));
    uVar7 = (undefined4)(func_0079e57c(uVar7,*(undefined4 *)(iVar2 + 4)));
    iVar2 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar9) + (0x8c)))(piVar9));
    uVar12 = (undefined4)(func_0079e4fc(*(undefined4 *)(iVar2 + 4),0x3f000000));
    uVar7 = (undefined4)(func_0079e57c(uVar7,uVar12));
    0 /* ctorZero */;
    uVar7 = (undefined4)(*(undefined4 *)(puVar18 + 4));
    cocos2d::CCDirector::sharedDirector();
    uVar6 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar6 = (undefined4)(func_0079e4dc(uVar7,uVar6));
    0 /* ctorZero */;
    (*pcVar14)(piVar3,&uStack_20);
    (**(code **)(*(int *)(piVar8) + (0xcc)))(piVar8,piVar3,3);
    piVar9 = (int *)cocos2d::extension::CCControlButton::create();
    piVar8[0x46] = (int)piVar9;
    piVar3 = piVar8;
    (**(code **)(*(int *)(piVar9) + (0x294)))(piVar9,0);
    piVar9 = (int *)piVar8[0x46];
    pcVar14 = *(code **)(*piVar9 + 0x30c);
    func_0079e45c(&uStack_20,(unsigned char *)((char *)&g_004df8a8 + (intptr_t)(g_004dfbfc)),puVar18);
    uVar5 = (undefined4)(0 /* ctorZero */);
    (*pcVar14)(piVar9,uVar5,1);
    func_0079e2bc(&uStack_20);
    piVar8 = (int *)piVar8[0x46];
    pcVar14 = *(code **)(*piVar8 + 0x30c);
    func_0079e45c(&uStack_20,(unsigned char *)((char *)&g_004df8d6 + (intptr_t)(g_004dfc00)),auStack_28);
    uVar5 = (undefined4)(0 /* ctorZero */);
    (*pcVar14)(piVar8,uVar5,2);
    func_0079e2bc(&uStack_20);
    piVar8 = (int *)piVar3[0x46];
    pcVar14 = *(code **)(*piVar8 + 0x30c);
    piVar9 = piVar3;
    func_0079e45c(&uStack_20,(unsigned char *)((char *)&g_004df906 + (intptr_t)(g_004dfc04)),auStack_28);
    puVar18 = &uStack_20;
    uVar5 = (undefined4)(0 /* ctorZero */);
    (*pcVar14)(piVar8,uVar5,4);
    func_0079e2bc(puVar18);
    piVar8 = (int *)piVar3[0x46];
    pcVar14 = *(code **)(*piVar8 + 0x28c);
    0 /* ctorZero */;
    (*pcVar14)(piVar8,puVar18);
    (**(code **)(*(int *)piVar3[0x46] + 0x30))((int *)piVar3[0x46],0x3f800000);
    (**(code **)(*(int *)piVar3[0x46] + 0x38))((int *)piVar3[0x46],0x3f800000);
    pcVar14 = *(code **)(*(int *)piVar3[0x46] + 0x4c);
    uVar5 = (undefined4)((**(code **)(*(int *)(piVar13) + (0x60)))(piVar13));
    uVar6 = (undefined4)((**(code **)(*(int *)(piVar13) + (0x68)))(piVar13));
    iVar2 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar13) + (0x8c)))(piVar13));
    uVar7 = (undefined4)(func_0079e4fc(*(undefined4 *)(iVar2 + 4),0x3f000000));
    uVar6 = (undefined4)(func_0079e57c(uVar6,uVar7));
    iVar2 = (undefined4)(intptr_t)((**(code **)(*(int *)piVar3[0x46] + 0x8c))());
    uVar7 = (undefined4)(func_0079e4fc(*(undefined4 *)(iVar2 + 4),0x3f000000));
    uVar6 = (undefined4)(func_0079e57c(uVar6,uVar7));
    uVar6 = (undefined4)(func_0079e57c(uVar6,g_004dfc10));
    0 /* ctorZero */;
    uVar5 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar6 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar6 = (undefined4)(func_0079e4dc(uVar5,uVar6));
    uVar5 = (undefined4)((**(code **)(*(int *)(piVar13) + (0x60)))(piVar13));
    uVar7 = (undefined4)((**(code **)(*(int *)(piVar13) + (0x68)))(piVar13));
    iVar2 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar13) + (0x8c)))(piVar13));
    uVar12 = (undefined4)(func_0079e4fc(*(undefined4 *)(iVar2 + 4),0x3f000000));
    uVar7 = (undefined4)(func_0079e57c(uVar7,uVar12));
    piVar8 = (int *)piVar3[0x46];
    iVar2 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar8) + (0x8c)))(piVar8));
    uVar12 = (undefined4)(func_0079e4fc(*(undefined4 *)(iVar2 + 4),0x3f000000));
    uVar7 = (undefined4)(func_0079e57c(uVar7,uVar12));
    uVar7 = (undefined4)(func_0079e57c(uVar7,g_004dfc10));
    0 /* ctorZero */;
    uVar5 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar7 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(uVar5,uVar7));
    0 /* ctorZero */;
    (*pcVar14)(piVar8,puVar18);
    (**(code **)(*(int *)(piVar9) + (0xcc)))(piVar9,piVar3[0x46],1);
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(g_004dfc14,uVar5));
    piVar8 = (int *)cocos2d::CCLabelTTF::create((char const*)(unsigned char *)((char *)&g_004dfa86 + (intptr_t)(g_004dfc1c)), (char const*)(unsigned char *)((char *)&g_004dfa84 + (intptr_t)(g_004dfc18)), uVar5);
    piVar3[0x47] = (int)piVar8;
    (**(code **)(*(int *)(piVar8) + (0x1b4)))(piVar8,(unsigned char *)((char *)&g_004dfa96 + (intptr_t)(g_004dfc20)));
    piVar8 = (int *)piVar3[0x47];
    pcVar14 = *(code **)(*piVar8 + 0x4c);
    puVar4 = (undefined4 *)(**(code **)(*(int *)piVar3[0x46] + 0x50))();
    uVar6 = (undefined4)(*puVar4);
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(uVar6,uVar5));
    iVar2 = (undefined4)(intptr_t)((**(code **)(*(int *)piVar3[0x46] + 0x50))());
    uVar7 = (undefined4)(*(undefined4 *)(iVar2 + 4));
    cocos2d::CCDirector::sharedDirector();
    uVar6 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar6 = (undefined4)(func_0079e4dc(uVar7,uVar6));
    0 /* ctorZero */;
    (*pcVar14)(piVar8,puVar18);
    pcVar14 = *(code **)(*piVar9 + 0xcc);
    (*pcVar14)(piVar9,piVar3[0x47],2,pcVar14,piVar9,*piVar9);
    piVar8 = (int *)func_0079e2fc(300);
    0 /* ctorZero */;
    iVar2 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar8) + (0x18)))(piVar8));
    if (iVar2 == 0) {
      (**(code **)(*(int *)(piVar8) + (8)))(piVar8);
      piVar8 = (int *)0x0;
    }
    else {
      ((cocos2d::CCObject *)(piVar8))->autorelease();
    }
    piVar9[0x48] = (int)piVar8;
    piVar3 = piVar9;
    ((InputBox *)(piVar8))->SetMaxLength(10);
    ((cocos2d::extension::CCEditBox *)(*(undefined4 *)(piVar9[0x48] + 0x118)))->setText((char const*)(unsigned char *)((char *)&g_004dfb36 + (intptr_t)(g_004dfc24)));
    uVar5 = (undefined4)(((InputBox *)(piVar9[0x48]))->getEditBox());
    ((cocos2d::extension::CCEditBox *)(uVar5))->setPlaceHolder((char const*)(unsigned char *)((char *)&g_004dfb44 + (intptr_t)(g_004dfc28)));
    piVar8 = (int *)piVar9[0x48];
    pcVar14 = *(code **)(*piVar8 + 0x4c);
    uVar5 = (undefined4)((**(code **)(*(int *)(piVar13) + (0x60)))(piVar13));
    uVar6 = (undefined4)((**(code **)(*(int *)(piVar13) + (0x68)))(piVar13));
    uVar5 = (undefined4)(func_0079e59c(uVar5,g_004dfc2c));
    0 /* ctorZero */;
    uVar5 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar6 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar6 = (undefined4)(func_0079e4dc(uVar5,uVar6));
    uVar5 = (undefined4)((**(code **)(*(int *)(piVar13) + (0x60)))(piVar13));
    uVar7 = (undefined4)((**(code **)(*(int *)(piVar13) + (0x68)))(piVar13));
    uVar5 = (undefined4)(func_0079e59c(uVar5,g_004dfc2c));
    0 /* ctorZero */;
    uVar5 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar7 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(uVar5,uVar7));
    0 /* ctorZero */;
    (*pcVar14)(piVar8,&uStack_20);
    iVar2 = (undefined4)(intptr_t)(piVar9[0x48]);
    func_0079e45c(&uStack_20,(unsigned char *)((char *)&g_004dfbe2 + (intptr_t)(g_004dfc30)),auStack_28);
    func_0079e52c(iVar2 + 0x120,&uStack_20);
    func_0079e2bc(&uStack_20);
    pcVar14 = *(code **)(*piVar3 + 0xcc);
    (*pcVar14)(piVar3,piVar9[0x48],5,pcVar14,piVar3,*piVar3);
    piVar8 = (int *)cocos2d::extension::CCControlButton::create();
    piVar9[0x43] = (int)piVar8;
    (**(code **)(*(int *)(piVar8) + (0x294)))(piVar8,0);
    func_0079e45c(&uStack_20,(unsigned char *)((char *)&g_004dfc66 + (intptr_t)(g_004dfe18)),auStack_28);
    uVar5 = (undefined4)(0 /* ctorZero */);
    func_0079e2bc(&uStack_20);
    (**(code **)(*(int *)piVar9[0x43] + 0x30c))((int *)piVar9[0x43],uVar5,1);
    func_0079e45c(&uStack_20,(unsigned char *)((char *)&g_004dfc8e + (intptr_t)(g_004dfe1c)),auStack_28);
    uVar5 = (undefined4)(0 /* ctorZero */);
    func_0079e2bc(&uStack_20);
    piVar8 = piVar3;
    (**(code **)(*(int *)piVar3[0x43] + 0x30c))((int *)piVar3[0x43],uVar5,2);
    piVar9 = (int *)piVar3[0x43];
    pcVar14 = *(code **)(*piVar9 + 0x28c);
    0 /* ctorZero */;
    (*pcVar14)(piVar9,&uStack_20);
    (**(code **)(*(int *)piVar3[0x43] + 0x30))((int *)piVar3[0x43],0x3f800000);
    (**(code **)(*(int *)piVar3[0x43] + 0x38))((int *)piVar3[0x43],0x3f800000);
    piVar9 = (int *)piVar3[0x43];
    pcVar14 = *(code **)(*piVar9 + 0x4c);
    uVar16 = (undefined4)(intptr_t)(func_0079e62c(iStack_38));
    uVar16 = func_0079e724((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),g_004dfe08,
                             g_004dfe0c);
    func_0079e8d4((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),g_004dfe10,g_004dfe14);
    uVar5 = (undefined4)(func_0079e7e4());
    uVar16 = (undefined4)(intptr_t)(func_0079e62c(uStack_34));
    uVar16 = func_0079e724((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),g_004dfe08,
                             g_004dfe0c);
    func_0079e8d4((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),g_004dfe10,g_004dfe14);
    uVar6 = (undefined4)(func_0079e7e4());
    0 /* ctorZero */;
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(auStack_30[0],uVar5));
    uVar16 = (undefined4)(intptr_t)(func_0079e62c(iStack_38));
    uVar16 = func_0079e724((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),g_004dfe08,
                             g_004dfe0c);
    func_0079e8d4((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),g_004dfe10,g_004dfe14);
    uVar6 = (undefined4)(func_0079e7e4());
    uVar16 = (undefined4)(intptr_t)(func_0079e62c(uStack_34));
    uVar16 = func_0079e724((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),g_004dfe08,
                             g_004dfe0c);
    func_0079e8d4((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),g_004dfe10,g_004dfe14);
    uVar7 = (undefined4)(func_0079e7e4());
    0 /* ctorZero */;
    cocos2d::CCDirector::sharedDirector();
    uVar6 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar6 = (undefined4)(func_0079e4dc(uStack_24,uVar6));
    0 /* ctorZero */;
    (*pcVar14)(piVar9,&uStack_20);
    pcVar14 = *(code **)(*piVar8 + 0xcc);
    (*pcVar14)(piVar8,piVar3[0x43],8,pcVar14,piVar8,*piVar8);
    ((BLQQCoinPresenter *)(piVar3[0x42]))->initWithView((BLQQCoinView*)piVar8);
  }
  return iVar1;
}
