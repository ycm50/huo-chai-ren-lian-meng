#include "BLMineView.h"
#include "CCScale9Sprite.h"
#include "CCLayer.h"
#include "CCObject.h"
#include "CCLabelTTF.h"
#include "CCDirector.h"
#include "CCControlButton.h"
#include "CCGeometry.h"
#include "BLLeakUtils.h"
#include "BLMineCollectView.h"
#include "BLMinePresenter.h"
#include "BLMineSnatchView.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <new>   // ghost_fix.js 自动补齐
#include "BLMineMenuView.h"   /* ALLOC+CTOR_FIX(R120): ???????? placement new */
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
extern "C" unsigned long UNK_005aab58;
extern "C" unsigned long UNK_005aab9c;
extern "C" unsigned long UNK_005aabe0;
extern "C" unsigned long UNK_005aac08;
extern "C" unsigned long UNK_005aada4;
extern "C" unsigned long UNK_005aae74;
extern "C" unsigned long UNK_005aaf50;
extern "C" unsigned long UNK_005ab120;
extern "C" unsigned long UNK_005ab122;
extern "C" unsigned long UNK_005ab134;
extern "C" unsigned long UNK_005ab164;
extern "C" unsigned long UNK_005ab23a;
extern "C" unsigned long UNK_005ab23c;
extern "C" unsigned long UNK_005ab24d;
extern "C" unsigned long _DAT_005aaca8;
extern "C" unsigned long _DAT_005aacac;
extern "C" unsigned long _UNK_005aabcc;
extern "C" unsigned long _UNK_005aabd0;
extern "C" unsigned long _UNK_005aabe4;
extern "C" unsigned long _UNK_005aac0c;
extern "C" unsigned long _UNK_005ab184;
extern "C" unsigned long _UNK_005ab188;
extern "C" unsigned long _UNK_005ab18c;
extern "C" unsigned long _UNK_005ab190;
extern "C" unsigned long _UNK_005ab194;
extern "C" unsigned long _UNK_005ab198;
extern "C" unsigned long _UNK_005ab19c;
extern "C" unsigned long _UNK_005ab1a0;
extern "C" unsigned long _UNK_005ab1a4;
extern "C" unsigned long _UNK_005ab1a8;
extern "C" unsigned long _UNK_005ab34c;
extern "C" unsigned long _UNK_005ab350;
extern "C" unsigned long _UNK_005ab354;
extern "C" unsigned long _UNK_005ab358;
extern "C" unsigned long _UNK_005ab35c;
extern "C" unsigned long g_005aab58;
extern "C" unsigned long g_005aab9c;
extern "C" unsigned long g_005aabcc;
extern "C" unsigned long g_005aabd0;
extern "C" unsigned long g_005aabe0;
extern "C" unsigned long g_005aabe4;
extern "C" unsigned long g_005aac08;
extern "C" unsigned long g_005aac0c;
extern "C" unsigned long g_005aaca8;
extern "C" unsigned long g_005aacac;
extern "C" unsigned long g_005aada4;
extern "C" unsigned long g_005aae74;
extern "C" unsigned long g_005aaf50;
extern "C" unsigned long g_005ab120;
extern "C" unsigned long g_005ab122;
extern "C" unsigned long g_005ab134;
extern "C" unsigned long g_005ab164;
extern "C" unsigned long g_005ab184;
extern "C" unsigned long g_005ab188;
extern "C" unsigned long g_005ab18c;
extern "C" unsigned long g_005ab190;
extern "C" unsigned long g_005ab194;
extern "C" unsigned long g_005ab198;
extern "C" unsigned long g_005ab19c;
extern "C" unsigned long g_005ab1a0;
extern "C" unsigned long g_005ab1a4;
extern "C" unsigned long g_005ab1a8;
extern "C" unsigned long g_005ab23a;
extern "C" unsigned long g_005ab23c;
extern "C" unsigned long g_005ab24d;
extern "C" unsigned long g_005ab34c;
extern "C" unsigned long g_005ab350;
extern "C" unsigned long g_005ab354;
extern "C" unsigned long g_005ab358;
extern "C" unsigned long g_005ab35c;
BLMineView::~BLMineView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_005aab58 + g_005aabcc);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  if (*(int *)((int)this + 4*(0x45)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x45)) = 0;
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005aab9c + g_005aabd0,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLMineView::BLMineView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(g_005aaca8 + 0x5aac50);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLMineView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * BLMineView::create()
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

undefined4 BLMineView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

undefined4 BLMineView::getSpBg()
{
  return *(undefined4 *)(((int)this) + 0x118);
}

undefined4 BLMineView::getBtnCaiJi()
{
  return *(undefined4 *)(((int)this) + 0x124);
}

undefined4 BLMineView::getBtnZhengDuo()
{
  return *(undefined4 *)(((int)this) + 0x128);
}

undefined4 BLMineView::getLabelCaiJi()
{
  return *(undefined4 *)(((int)this) + 0x11c);
}

undefined4 BLMineView::getLabelZhengDuo()
{
  return *(undefined4 *)(((int)this) + 0x120);
}

void BLMineView::onEnter()
{
  ((cocos2d::CCLayer *)this)->onEnter();
  ((BLMinePresenter *)*(undefined4 *)(((int)this) + 0x114))->onEnter();
  return;
}

void BLMineView::onExit()
{
  ((BLMinePresenter *)*(undefined4 *)(((int)this) + 0x114))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
bool BLMineView::init()
{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  code *pcVar10;
  int aiStack_70 [2];
  undefined4 auStack_68 [2];
  undefined1 auStack_60 [4];
  undefined4 uStack_5c;
  undefined1 auStack_58 [4];
  undefined4 uStack_54;
  undefined4 auStack_50 [2];
  int aiStack_48 [2];
  undefined4 auStack_40 [2];
  undefined1 auStack_38 [4];
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 auStack_28 [4];
  undefined4 uStack_24;
  undefined1 auStack_20 [12];
  
  iVar1 = (undefined4)(intptr_t)(((cocos2d::CCLayer *)this)->init());
  if (iVar1 != 0) {
    iVar2 = (undefined4)(intptr_t)(((BLMinePresenter *)this)->create((BLMineView*)((int)this)));
    *(int *)((int)this + 4*(0x45)) = iVar2;
    if (iVar2 != 0) {
      ((cocos2d::CCObject *)this)->retain();
    }
    func_0079e45c(auStack_20,(unsigned char *)((char *)&g_005aada4 + (intptr_t)(g_005ab184)),auStack_28);
    uVar3 = (undefined4)(0 /* ctorZero */);
    func_0079e2bc(auStack_20);
    piVar4 = (int *)cocos2d::extension::CCControlButton::create((cocos2d::extension::CCScale9Sprite*)uVar3);
    pcVar10 = *(code **)(*piVar4 + 0x28c);
    uVar3 = (undefined4)(cocos2d::CCDirector::sharedDirector());
    *(CCSize *)(&uStack_30) = ((cocos2d::CCDirector *)(uVar3))->getWinSize();
    uVar3 = (undefined4)(uStack_30);
    uVar5 = (undefined4)(cocos2d::CCDirector::sharedDirector());
    *(CCSize *)(auStack_28) = ((cocos2d::CCDirector *)(uVar5))->getWinSize();
    0 /* ctorZero */;
    (*pcVar10)(piVar4,auStack_20);
    (**(code **)(*(int *)(piVar4) + (0x40)))(piVar4,0x3f800000);
    pcVar10 = *(code **)(*piVar4 + 0x4c);
    0 /* ctorZero */;
    uVar3 = (undefined4)(uStack_30);
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(uVar3,uVar5));
    0 /* ctorZero */;
    uVar3 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar6 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(func_0079e4dc(uVar3,uVar6));
    0 /* ctorZero */;
    (*pcVar10)(piVar4,auStack_20);
    (**(code **)(*(int *)this + 0xcc))(((int)this),piVar4,0);
    func_0079e45c(auStack_20,(unsigned char *)((char *)&g_005aae74 + (intptr_t)(g_005ab188)),auStack_28);
    iVar2 = (undefined4)(intptr_t)(0 /* ctorZero */);
    *(int *)((int)this + 4*(0x46)) = iVar2;
    func_0079e2bc(auStack_20);
    piVar4 = (int *)*(int *)((int)this + 4*(0x46));
    pcVar10 = *(code **)(*piVar4 + 0x1d4);
    uVar3 = (undefined4)(cocos2d::CCDirector::sharedDirector());
    *(CCSize *)(&uStack_30) = ((cocos2d::CCDirector *)(uVar3))->getWinSize();
    uVar3 = (undefined4)(uStack_30);
    uVar5 = (undefined4)(cocos2d::CCDirector::sharedDirector());
    *(CCSize *)(auStack_28) = ((cocos2d::CCDirector *)(uVar5))->getWinSize();
    0 /* ctorZero */;
    (*pcVar10)(piVar4,auStack_20);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x46)) + 0x40))((int *)*(int *)((int)this + 4*(0x46)),0x3f800000);
    piVar4 = (int *)*(int *)((int)this + 4*(0x46));
    pcVar10 = *(code **)(*piVar4 + 0x4c);
    0 /* ctorZero */;
    uVar3 = (undefined4)(uStack_30);
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(uVar3,uVar5));
    0 /* ctorZero */;
    uVar3 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar6 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(func_0079e4dc(uVar3,uVar6));
    0 /* ctorZero */;
    (*pcVar10)(piVar4,auStack_20);
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x46)),0);
    func_0079e45c(auStack_20,(unsigned char *)((char *)&g_005aaf50 + (intptr_t)(g_005ab18c)),auStack_28);
    piVar4 = (int *)0 /* ctorZero */;
    func_0079e2bc(auStack_20);
    piVar7 = (int *)cocos2d::extension::CCControlButton::create((cocos2d::extension::CCScale9Sprite*)piVar4);
    *(int *)((int)this + 4*(0x49)) = (int)piVar7;
    pcVar10 = *(code **)(*piVar7 + 0x28c);
    (**(code **)(*(int *)(piVar4) + (0x1cc)))(auStack_20,piVar4);
    (*pcVar10)(piVar7,auStack_20);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x49)) + 0x40))((int *)*(int *)((int)this + 4*(0x49)),0x3f800000);
    piVar7 = (int *)*(int *)((int)this + 4*(0x49));
    pcVar10 = *(code **)(*piVar7 + 0x4c);
    uVar3 = (undefined4)(cocos2d::CCDirector::sharedDirector());
    *(CCSize *)(aiStack_70) = ((cocos2d::CCDirector *)(uVar3))->getWinSize();
    uVar3 = (undefined4)(func_0079e4fc(aiStack_70[0] + -0x80000000,0x3f000000));
    uVar3 = (undefined4)(func_0079e59c(uVar3,g_005ab190));
    (**(code **)(*(int *)(piVar4) + (0x1cc)))(auStack_68,piVar4);
    uVar5 = (undefined4)(func_0079e4fc(auStack_68[0],0x3f000000));
    uVar3 = (undefined4)(func_0079e59c(uVar3,uVar5));
    uVar5 = (undefined4)(cocos2d::CCDirector::sharedDirector());
    *(CCSize *)(auStack_60) = ((cocos2d::CCDirector *)(uVar5))->getWinSize();
    uVar5 = (undefined4)(func_0079e4fc(uStack_5c,0x3f000000));
    uVar5 = (undefined4)(func_0079e57c(uVar5,g_005ab194));
    (**(code **)(*(int *)(piVar4) + (0x1cc)))(auStack_58,piVar4);
    uVar6 = (undefined4)(func_0079e4fc(uStack_54,0x3f000000));
    uVar5 = (undefined4)(func_0079e57c(uVar5,uVar6));
    0 /* ctorZero */;
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(auStack_50[0],uVar3));
    uVar3 = (undefined4)(cocos2d::CCDirector::sharedDirector());
    *(CCSize *)(aiStack_48) = ((cocos2d::CCDirector *)(uVar3))->getWinSize();
    uVar3 = (undefined4)(func_0079e4fc(aiStack_48[0] + -0x80000000,0x3f000000));
    uVar3 = (undefined4)(func_0079e59c(uVar3,g_005ab190));
    (**(code **)(*(int *)(piVar4) + (0x1cc)))(auStack_40,piVar4);
    uVar6 = (undefined4)(func_0079e4fc(auStack_40[0],0x3f000000));
    uVar3 = (undefined4)(func_0079e59c(uVar3,uVar6));
    uVar6 = (undefined4)(cocos2d::CCDirector::sharedDirector());
    *(CCSize *)(auStack_38) = ((cocos2d::CCDirector *)(uVar6))->getWinSize();
    uVar6 = (undefined4)(func_0079e4fc(uStack_34,0x3f000000));
    uVar6 = (undefined4)(func_0079e57c(uVar6,g_005ab194));
    (**(code **)(*(int *)(piVar4) + (0x1cc)))(&uStack_30,piVar4);
    uVar8 = (undefined4)(func_0079e4fc(uStack_2c,0x3f000000));
    uVar6 = (undefined4)(func_0079e57c(uVar6,uVar8));
    0 /* ctorZero */;
    uVar3 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar6 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(func_0079e4dc(uVar3,uVar6));
    0 /* ctorZero */;
    (*pcVar10)(piVar7,auStack_20);
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x49)),2);
    piVar4 = (int *)cocos2d::CCLabelTTF::create((char const*)(unsigned char *)((char *)&g_005ab120 + (intptr_t)(g_005ab198)), (char const*)(unsigned char *)((char *)&g_005ab122 + (intptr_t)(g_005ab19c)), g_005ab1a0);
    *(int *)((int)this + 4*(0x47)) = (int)piVar4;
    (**(code **)(*(int *)(piVar4) + (0x1b4)))(piVar4,(unsigned char *)((char *)&g_005ab134 + (intptr_t)(g_005ab1a4)));
    piVar4 = (int *)*(int *)((int)this + 4*(0x47));
    pcVar10 = *(code **)(*piVar4 + 0x4c);
    uVar3 = (undefined4)((**(code **)(*(int *)*(int *)((int)this + 4*(0x49)) + 0x50))());
    (*pcVar10)(piVar4,uVar3);
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x47)),2);
    func_0079e45c(auStack_20,(unsigned char *)((char *)&g_005ab164 + (intptr_t)(g_005ab1a8)),auStack_28);
    piVar4 = (int *)0 /* ctorZero */;
    func_0079e2bc(auStack_20);
    piVar7 = (int *)cocos2d::extension::CCControlButton::create((cocos2d::extension::CCScale9Sprite*)piVar4);
    *(int *)((int)this + 4*(0x4a)) = (int)piVar7;
    pcVar10 = *(code **)(*piVar7 + 0x28c);
    (**(code **)(*(int *)(piVar4) + (0x1cc)))(auStack_20,piVar4);
    (*pcVar10)(piVar7,auStack_20);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x4a)) + 0x40))((int *)*(int *)((int)this + 4*(0x4a)),0x3f800000);
    piVar4 = (int *)*(int *)((int)this + 4*(0x4a));
    pcVar10 = *(code **)(*piVar4 + 0x4c);
    uVar3 = (undefined4)((**(code **)(*(int *)*(int *)((int)this + 4*(0x49)) + 0x50))());
    puVar9 = (undefined4 *)(**(code **)(*(int *)*(int *)((int)this + 4*(0x49)) + 0x8c))();
    uVar5 = (undefined4)(func_0079e59c(*puVar9,g_005ab34c));
    0 /* ctorZero */;
    ((cocos2d::CCPoint *)(uVar3))->operator+(*(const CCPoint *)(void *)auStack_28);
    (*pcVar10)(piVar4,auStack_20);
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x4a)),2);
    piVar4 = (int *)cocos2d::CCLabelTTF::create((char const*)(unsigned char *)((char *)&g_005ab23a + (intptr_t)(g_005ab350)), (char const*)(unsigned char *)((char *)&g_005ab23c + (intptr_t)(g_005ab354)), g_005ab358);
    iVar2 = (undefined4)(intptr_t)(g_005ab35c);
    *(int *)((int)this + 4*(0x48)) = (int)piVar4;
    (**(code **)(*(int *)(piVar4) + (0x1b4)))(piVar4,&g_005ab24d + iVar2);
    piVar4 = (int *)*(int *)((int)this + 4*(0x48));
    pcVar10 = *(code **)(*piVar4 + 0x4c);
    uVar3 = (undefined4)((**(code **)(*(int *)*(int *)((int)this + 4*(0x4a)) + 0x50))());
    (*pcVar10)(piVar4,uVar3);
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x48)),2);
    piVar4 = (int *)::operator new(0x11c);
    ::new ((void *)piVar4) BLMineMenuView();   /* ALLOC+CTOR_FIX(R120): 类名取自原版 dump（函数+尺寸对齐）*/
    iVar2 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar4) + (0x18)))(piVar4));
    if (iVar2 == 0) {
      (**(code **)(*(int *)(piVar4) + (8)))(piVar4);
      piVar4 = (int *)0x0;
    }
    else {
      ((cocos2d::CCObject *)(piVar4))->autorelease();
    }
    *(int *)((int)this + 4*(0x42)) = (int)piVar4;
    (**(code **)(*(int *)this + 0xcc))(((int)this),piVar4,1);
    ((BLMinePresenter *)(*(int *)((int)this + 4*(0x45))))->initWithView((BLMineView*)((int)this));
    iVar2 = (undefined4)(intptr_t)(((BLMineCollectView *)this)->create());
    *(int *)((int)this + 4*(0x43)) = iVar2;
    (**(code **)(*(int *)this + 0xcc))(((int)this),iVar2,1);
    iVar2 = (undefined4)(intptr_t)(((BLMineSnatchView *)this)->create());
    *(int *)((int)this + 4*(0x44)) = iVar2;
    (**(code **)(*(int *)this + 0xcc))(((int)this),iVar2,1);
    piVar4 = (int *)*(int *)((int)this + 4*(0x44));
    if (piVar4 != (int *)0x0) {
      (**(code **)(*(int *)(piVar4) + (0x90)))(piVar4,0);
    }
    pcVar10 = *(code **)(*(int *)this + 0x88);
    uVar3 = (undefined4)(cocos2d::CCDirector::sharedDirector());
    *(CCSize *)(&uStack_30) = ((cocos2d::CCDirector *)(uVar3))->getWinSize();
    uVar3 = (undefined4)(cocos2d::CCDirector::sharedDirector());
    *(CCSize *)(auStack_28) = ((cocos2d::CCDirector *)(uVar3))->getWinSize();
    0 /* ctorZero */;
    (*pcVar10)(((int)this),auStack_20);
  }
  return iVar1;
}
