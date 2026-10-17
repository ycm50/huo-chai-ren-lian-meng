#include "BLFundView.h"
#include "CCLayer.h"
#include "CCObject.h"
#include "CCControlButton.h"
#include "CCArray.h"
#include "CCLabelTTF.h"
#include "CCDirector.h"
#include "CCSprite.h"
#include "BLFundPresenter.h"
#include "BLLeakUtils.h"
#include "BLRichText.h"
#include "RichTextData.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <new>   // ghost_fix.js 自动补齐
#include "BLTableView.h"   /* ALLOC+CTOR_FIX(R120): ???????? placement new */
using namespace cocos2d;
// 兜底声明
extern "C" long long software_udf(...);

extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2dc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long func_0079e5fc(...);
extern "C" long long func_0079e62c(...);
extern "C" long long func_0079e63c(...);
extern "C" long long func_0079e724(...);
extern "C" long long func_0079e744(...);
extern "C" long long func_0079e7e4(...);
extern "C" long long func_0079e8d4(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0052f840;
extern "C" unsigned long UNK_0052f884;
extern "C" unsigned long UNK_0052f8c8;
extern "C" unsigned long UNK_0052f8f0;
extern "C" unsigned long UNK_0052fa5c;
extern "C" unsigned long UNK_0052fac6;
extern "C" unsigned long UNK_0052fb86;
extern "C" unsigned long UNK_0052fcbe;
extern "C" unsigned long UNK_0052fcc0;
extern "C" unsigned long UNK_0052ff32;
extern "C" unsigned long UNK_00530128;
extern "C" unsigned long UNK_00530158;
extern "C" unsigned long UNK_00530172;
extern "C" unsigned long UNK_00530274;
extern "C" unsigned long UNK_005302d4;
extern "C" unsigned long UNK_00530304;
extern "C" unsigned long UNK_00530482;
extern "C" unsigned long UNK_00530484;
extern "C" unsigned long UNK_005304ac;
extern "C" unsigned long UNK_0053051e;
extern "C" unsigned long UNK_00530708;
extern "C" unsigned long UNK_0053070a;
extern "C" unsigned long UNK_00530731;
extern "C" unsigned long UNK_005309f0;
extern "C" unsigned long UNK_00530b98;
extern "C" unsigned long UNK_00530bc4;
extern "C" unsigned long _DAT_0052f990;
extern "C" unsigned long _DAT_0052f994;
extern "C" unsigned long _UNK_0052f8b4;
extern "C" unsigned long _UNK_0052f8b8;
extern "C" unsigned long _UNK_0052f8cc;
extern "C" unsigned long _UNK_0052f8f4;
extern "C" unsigned long _UNK_0052fe20;
extern "C" unsigned long _UNK_0052fe24;
extern "C" unsigned long _UNK_0052fe28;
extern "C" unsigned long _UNK_0052fe2c;
extern "C" unsigned long _UNK_0052fe30;
extern "C" unsigned long _UNK_0052fe34;
extern "C" unsigned long _UNK_0052fe38;
extern "C" unsigned long _UNK_0052fe3c;
extern "C" unsigned long _UNK_0052fe40;
extern "C" unsigned long _UNK_0052fe44;
extern "C" unsigned long _UNK_0052fe48;
extern "C" unsigned long _UNK_0052fe4c;
extern "C" unsigned long _UNK_0052fe50;
extern "C" unsigned long _UNK_0052fe54;
extern "C" unsigned long _UNK_0052fe58;
extern "C" unsigned long _UNK_0052fe5c;
extern "C" unsigned long _UNK_00530278;
extern "C" unsigned long _UNK_0053027c;
extern "C" unsigned long _UNK_00530280;
extern "C" unsigned long _UNK_00530284;
extern "C" unsigned long _UNK_00530288;
extern "C" unsigned long _UNK_0053028c;
extern "C" unsigned long _UNK_00530290;
extern "C" unsigned long _UNK_00530294;
extern "C" unsigned long _UNK_00530298;
extern "C" unsigned long _UNK_0053029c;
extern "C" unsigned long _UNK_005302a0;
extern "C" unsigned long _UNK_005302a4;
extern "C" unsigned long _UNK_005302a8;
extern "C" unsigned long _UNK_005306a0;
extern "C" unsigned long _UNK_005306a4;
extern "C" unsigned long _UNK_005306a8;
extern "C" unsigned long _UNK_005306ac;
extern "C" unsigned long _UNK_005306b0;
extern "C" unsigned long _UNK_005306b4;
extern "C" unsigned long _UNK_005306b8;
extern "C" unsigned long _UNK_005306bc;
extern "C" unsigned long _UNK_005306c0;
extern "C" unsigned long _UNK_005306c4;
extern "C" unsigned long _UNK_005306c8;
extern "C" unsigned long _UNK_005306cc;
extern "C" unsigned long _UNK_005306d0;
extern "C" unsigned long _UNK_005306d4;
extern "C" unsigned long _UNK_005306d8;
extern "C" unsigned long _UNK_00530898;
extern "C" unsigned long _UNK_0053089c;
extern "C" unsigned long _UNK_005308a0;
extern "C" unsigned long _UNK_005308a4;
extern "C" unsigned long _UNK_005308a8;
extern "C" unsigned long _UNK_005308ac;
extern "C" unsigned long _UNK_00530c98;
extern "C" unsigned long _UNK_00530c9c;
extern "C" unsigned long _UNK_00530ca0;
extern "C" unsigned long _UNK_00530ca4;
extern "C" unsigned long _UNK_00530ca8;
extern "C" unsigned long _UNK_00530cac;
extern "C" unsigned long _UNK_00530cb0;
extern "C" unsigned long _UNK_00530cb4;
extern "C" unsigned long _UNK_00530cb8;
extern "C" unsigned long _UNK_00530cbc;
extern "C" unsigned long _UNK_00530cc0;
extern "C" unsigned long _UNK_00530cc4;
extern "C" unsigned long _UNK_00530cc8;
extern "C" unsigned long _UNK_00530ccc;
extern "C" unsigned long _UNK_00530cd0;
extern "C" unsigned long _UNK_00530cd4;
extern "C" unsigned long _UNK_00530cd8;
extern "C" unsigned long _UNK_00530cdc;
extern "C" unsigned long _UNK_00530d68;
extern "C" unsigned long _UNK_00530d6c;
extern "C" unsigned long _UNK_00530d70;
extern "C" unsigned long _UNK_00530d74;
extern "C" unsigned long g_0052f840;
extern "C" unsigned long g_0052f884;
extern "C" unsigned long g_0052f8b4;
extern "C" unsigned long g_0052f8b8;
extern "C" unsigned long g_0052f8c8;
extern "C" unsigned long g_0052f8cc;
extern "C" unsigned long g_0052f8f0;
extern "C" unsigned long g_0052f8f4;
extern "C" unsigned long g_0052f990;
extern "C" unsigned long g_0052f994;
extern "C" unsigned long g_0052fa5c;
extern "C" unsigned long g_0052fac6;
extern "C" unsigned long g_0052fb86;
extern "C" unsigned long g_0052fcbe;
extern "C" unsigned long g_0052fcc0;
extern "C" unsigned long g_0052fe20;
extern "C" unsigned long g_0052fe24;
extern "C" unsigned long g_0052fe28;
extern "C" unsigned long g_0052fe2c;
extern "C" unsigned long g_0052fe30;
extern "C" unsigned long g_0052fe34;
extern "C" unsigned long g_0052fe38;
extern "C" unsigned long g_0052fe3c;
extern "C" unsigned long g_0052fe40;
extern "C" unsigned long g_0052fe44;
extern "C" unsigned long g_0052fe48;
extern "C" unsigned long g_0052fe4c;
extern "C" unsigned long g_0052fe50;
extern "C" unsigned long g_0052fe54;
extern "C" unsigned long g_0052fe58;
extern "C" unsigned long g_0052fe5c;
extern "C" unsigned long g_0052ff32;
extern "C" unsigned long g_00530128;
extern "C" unsigned long g_00530158;
extern "C" unsigned long g_00530172;
extern "C" unsigned long g_00530274;
extern "C" unsigned long g_00530278;
extern "C" unsigned long g_0053027c;
extern "C" unsigned long g_00530280;
extern "C" unsigned long g_00530284;
extern "C" unsigned long g_00530288;
extern "C" unsigned long g_0053028c;
extern "C" unsigned long g_00530290;
extern "C" unsigned long g_00530294;
extern "C" unsigned long g_00530298;
extern "C" unsigned long g_0053029c;
extern "C" unsigned long g_005302a0;
extern "C" unsigned long g_005302a4;
extern "C" unsigned long g_005302a8;
extern "C" unsigned long g_005302d4;
extern "C" unsigned long g_00530304;
extern "C" unsigned long g_00530482;
extern "C" unsigned long g_00530484;
extern "C" unsigned long g_005304ac;
extern "C" unsigned long g_0053051e;
extern "C" unsigned long g_005306a0;
extern "C" unsigned long g_005306a4;
extern "C" unsigned long g_005306a8;
extern "C" unsigned long g_005306ac;
extern "C" unsigned long g_005306b0;
extern "C" unsigned long g_005306b4;
extern "C" unsigned long g_005306b8;
extern "C" unsigned long g_005306bc;
extern "C" unsigned long g_005306c0;
extern "C" unsigned long g_005306c4;
extern "C" unsigned long g_005306c8;
extern "C" unsigned long g_005306cc;
extern "C" unsigned long g_005306d0;
extern "C" unsigned long g_005306d4;
extern "C" unsigned long g_005306d8;
extern "C" unsigned long g_00530708;
extern "C" unsigned long g_0053070a;
extern "C" unsigned long g_00530731;
extern "C" unsigned long g_00530898;
extern "C" unsigned long g_0053089c;
extern "C" unsigned long g_005308a0;
extern "C" unsigned long g_005308a4;
extern "C" unsigned long g_005308a8;
extern "C" unsigned long g_005308ac;
extern "C" unsigned long g_005309f0;
extern "C" unsigned long g_00530b98;
extern "C" unsigned long g_00530bc4;
extern "C" unsigned long g_00530c98;
extern "C" unsigned long g_00530c9c;
extern "C" unsigned long g_00530ca0;
extern "C" unsigned long g_00530ca4;
extern "C" unsigned long g_00530ca8;
extern "C" unsigned long g_00530cac;
extern "C" unsigned long g_00530cb0;
extern "C" unsigned long g_00530cb4;
extern "C" unsigned long g_00530cb8;
extern "C" unsigned long g_00530cbc;
extern "C" unsigned long g_00530cc0;
extern "C" unsigned long g_00530cc4;
extern "C" unsigned long g_00530cc8;
extern "C" unsigned long g_00530ccc;
extern "C" unsigned long g_00530cd0;
extern "C" unsigned long g_00530cd4;
extern "C" unsigned long g_00530cd8;
extern "C" unsigned long g_00530cdc;
extern "C" unsigned long g_00530d68;
extern "C" unsigned long g_00530d6c;
extern "C" unsigned long g_00530d70;
extern "C" unsigned long g_00530d74;
BLFundView::~BLFundView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0052f840 + g_0052f8b4);
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
  func_0079e45c(&uStack_14,&g_0052f884 + g_0052f8b8,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLFundView::BLFundView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(g_0052f990 + 0x52f938);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLFundView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * BLFundView::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x11c)));
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

undefined4 BLFundView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x108);
}

undefined4 BLFundView::getBtnclose()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

undefined4 BLFundView::getBtnBuy()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

undefined4 BLFundView::getLabelBuy()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 BLFundView::getTableView()
{
  return *(undefined4 *)(((int)this) + 0x118);
}


void BLFundView::onEnter()
{
  ((BLFundPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLFundView::onExit()
{
  ((BLFundPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
bool BLFundView::init()
{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  int *piVar11;
  undefined4 uVar12;
  code *pcVar13;
  undefined *puVar14;
  int *piVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined1 *puVar18;
  int iStack_58;
  int iStack_38;
  undefined4 uStack_34;
  undefined4 auStack_30 [2];
  undefined1 auStack_28 [4];
  undefined4 uStack_24;
  undefined1 uStack_20;
  undefined1 uStack_1f;
  undefined1 uStack_1e;
  
  iVar1 = (undefined4)(intptr_t)(((cocos2d::CCLayer *)this)->init());
  if (iVar1 == 0) {
    iStack_58 = 0;
  }
  else {
    iVar1 = (undefined4)(intptr_t)(((BLFundPresenter *)this)->create((BLFundView*)((int)this)));
    *(int *)((int)this + 4*(0x42)) = iVar1;
    ((cocos2d::CCObject *)this)->retain();
    piVar2 = (int *)cocos2d::CCSprite::create((char const*)(unsigned char *)((char *)&g_0052fa5c + (intptr_t)(g_0052fe38)));
    puVar3 = (undefined4 *)(**(code **)(*(int *)(piVar2) + (0x8c)))();
    uVar4 = (undefined4)(func_0079e59c(*puVar3,g_0052fe3c));
    0 /* ctorZero */;
    iVar1 = (undefined4)(intptr_t)(iStack_38);
    pcVar13 = *(code **)(*(int *)this + 0x88);
    cocos2d::CCDirector::sharedDirector();
    uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(iVar1,uVar4));
    uVar4 = (undefined4)(uStack_34);
    cocos2d::CCDirector::sharedDirector();
    uVar6 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar4 = (undefined4)(func_0079e4dc(uVar4,uVar6));
    0 /* ctorZero */;
    (*pcVar13)(((int)this),&uStack_20);
    func_0079e45c(&uStack_20,(unsigned char *)((char *)&g_0052fac6 + (intptr_t)(g_0052fe44)),auStack_28);
    piVar7 = (int *)0 /* ctorZero */;
    func_0079e2bc(&uStack_20);
    iVar1 = (undefined4)(intptr_t)(iStack_38);
    pcVar13 = *(code **)(*piVar7 + 0x88);
    cocos2d::CCDirector::sharedDirector();
    uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(iVar1,uVar4));
    uVar4 = (undefined4)(uStack_34);
    cocos2d::CCDirector::sharedDirector();
    uVar6 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar4 = (undefined4)(func_0079e4dc(uVar4,uVar6));
    0 /* ctorZero */;
    (*pcVar13)(piVar7,&uStack_20);
    pcVar13 = *(code **)(*piVar7 + 0x4c);
    0 /* ctorZero */;
    uVar4 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(uVar4,uVar5));
    0 /* ctorZero */;
    uVar4 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar6 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar4 = (undefined4)(func_0079e4dc(uVar4,uVar6));
    0 /* ctorZero */;
    (*pcVar13)(piVar7,&uStack_20);
    (**(code **)(*(int *)this + 200))(((int)this),piVar7);
    func_0079e45c(&uStack_20,(unsigned char *)((char *)&g_0052fb86 + (intptr_t)(g_0052fe48)),auStack_28);
    piVar7 = (int *)0 /* ctorZero */;
    func_0079e2bc(&uStack_20);
    pcVar13 = *(code **)(*piVar7 + 0x88);
    uVar4 = (undefined4)(func_0079e57c(iStack_38,0x41000000));
    0 /* ctorZero */;
    uVar4 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(uVar4,uVar5));
    uVar4 = (undefined4)(func_0079e57c(iStack_38,0x41000000));
    0 /* ctorZero */;
    uVar4 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar6 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar4 = (undefined4)(func_0079e4dc(uVar4,uVar6));
    0 /* ctorZero */;
    (*pcVar13)(piVar7,&uStack_20);
    pcVar13 = *(code **)(*piVar7 + 0x4c);
    uVar16 = (undefined4)(intptr_t)(func_0079e62c(uStack_34));
    uVar16 = func_0079e724((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),g_0052fe20,
                             g_0052fe24);
    func_0079e8d4((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),g_0052fe28,g_0052fe2c);
    uVar4 = (undefined4)(func_0079e7e4());
    0 /* ctorZero */;
    uVar4 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(uVar4,uVar5));
    uVar16 = (undefined4)(intptr_t)(func_0079e62c(uStack_34));
    uVar16 = func_0079e724((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),g_0052fe20,
                             g_0052fe24);
    func_0079e8d4((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),g_0052fe28,g_0052fe2c);
    uVar4 = (undefined4)(func_0079e7e4());
    0 /* ctorZero */;
    uVar4 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar6 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar4 = (undefined4)(func_0079e4dc(uVar4,uVar6));
    0 /* ctorZero */;
    (*pcVar13)(piVar7,&uStack_20);
    (**(code **)(*(int *)this + 0xcc))(((int)this),piVar7,2);
    cocos2d::CCDirector::sharedDirector();
    uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar4 = (undefined4)(func_0079e4dc(g_0052fe50,uVar4));
    piVar8 = (int *)cocos2d::CCLabelTTF::create((char const*)(unsigned char *)((char *)&g_0052fcc0 + (intptr_t)(g_0052fe58)), (char const*)(unsigned char *)((char *)&g_0052fcbe + (intptr_t)(g_0052fe54)), uVar4);
    pcVar13 = *(code **)(*piVar8 + 0x7c);
    0 /* ctorZero */;
    (*pcVar13)(piVar8,&uStack_20);
    uStack_20 = 0x78;
    uStack_1f = 0x78;
    uStack_1e = 0x78;
    (**(code **)(*(int *)(piVar8) + (0x1b4)))(piVar8,&uStack_20);
    pcVar13 = *(code **)(*piVar8 + 0x4c);
    uVar4 = (undefined4)(func_0079e4fc(iStack_38 + -0x80000000,0x3f000000));
    uVar4 = (undefined4)(func_0079e59c(uVar4,g_0052fe5c));
    uVar5 = (undefined4)((**(code **)(*(int *)(piVar7) + (0x68)))(piVar7));
    0 /* ctorZero */;
    uVar4 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(uVar4,uVar5));
    uVar4 = (undefined4)(func_0079e4fc(iStack_38 + -0x80000000,0x3f000000));
    uVar4 = (undefined4)(func_0079e59c(uVar4,g_0052fe5c));
    uVar6 = (undefined4)((**(code **)(*(int *)(piVar7) + (0x68)))(piVar7));
    0 /* ctorZero */;
    uVar4 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar6 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar4 = (undefined4)(func_0079e4dc(uVar4,uVar6));
    0 /* ctorZero */;
    (*pcVar13)(piVar8,&uStack_20);
    (**(code **)(*(int *)this + 0xcc))(((int)this),piVar8,3);
    pcVar13 = *(code **)(*piVar2 + 0x4c);
    uVar4 = (undefined4)((**(code **)(*(int *)(piVar7) + (0x68)))(piVar7));
    iVar1 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar7) + (0x8c)))(piVar7));
    uVar16 = (undefined4)(intptr_t)(func_0079e62c(uVar4));
    uVar17 = (undefined4)(intptr_t)(func_0079e62c(*(undefined4 *)(iVar1 + 4)));
    uVar17 = func_0079e724((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),g_0052fe20,
                             g_0052fe24);
    uVar16 = func_0079e8d4((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),(int)uVar17,
                             (int)((ulonglong)uVar17 >> 0x20));
    iVar1 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar2) + (0x8c)))(piVar2));
    uVar17 = (undefined4)(intptr_t)(func_0079e62c(*(undefined4 *)(iVar1 + 4)));
    uVar17 = func_0079e724((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),g_0052fe20,
                             g_0052fe24);
    uVar16 = func_0079e8d4((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),(int)uVar17,
                             (int)((ulonglong)uVar17 >> 0x20));
    func_0079e8d4((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),g_0052fe30,g_0052fe34);
    uVar4 = (undefined4)(func_0079e7e4());
    0 /* ctorZero */;
    uVar4 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(uVar4,uVar5));
    uVar4 = (undefined4)((**(code **)(*(int *)(piVar7) + (0x68)))(piVar7));
    iVar1 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar7) + (0x8c)))(piVar7));
    uVar16 = (undefined4)(intptr_t)(func_0079e62c(uVar4));
    uVar17 = (undefined4)(intptr_t)(func_0079e62c(*(undefined4 *)(iVar1 + 4)));
    uVar17 = func_0079e724((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),g_00530278,
                             g_0053027c);
    uVar16 = func_0079e8d4((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),(int)uVar17,
                             (int)((ulonglong)uVar17 >> 0x20));
    iVar1 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar2) + (0x8c)))(piVar2));
    uVar17 = (undefined4)(intptr_t)(func_0079e62c(*(undefined4 *)(iVar1 + 4)));
    uVar17 = func_0079e724((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),g_00530278,
                             g_0053027c);
    uVar16 = func_0079e8d4((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),(int)uVar17,
                             (int)((ulonglong)uVar17 >> 0x20));
    func_0079e8d4((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),g_00530280,g_00530284);
    uVar4 = (undefined4)(func_0079e7e4());
    0 /* ctorZero */;
    uVar4 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar6 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar4 = (undefined4)(func_0079e4dc(uVar4,uVar6));
    0 /* ctorZero */;
    (*pcVar13)(piVar2,&uStack_20);
    (**(code **)(*(int *)this + 200))(((int)this),piVar2);
    func_0079e45c(&uStack_20,(unsigned char *)((char *)&g_0052ff32 + (intptr_t)(g_00530290)),auStack_28);
    piVar9 = (int *)0 /* ctorZero */;
    func_0079e2bc(&uStack_20);
    pcVar13 = *(code **)(*piVar9 + 0x88);
    puVar3 = (undefined4 *)(**(code **)(*(int *)(piVar2) + (0x8c)))(piVar2);
    0 /* ctorZero */;
    uVar4 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(uVar4,uVar5));
    puVar3 = (undefined4 *)(**(code **)(*(int *)(piVar2) + (0x8c)))(piVar2);
    0 /* ctorZero */;
    uVar4 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar6 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar4 = (undefined4)(func_0079e4dc(uVar4,uVar6));
    0 /* ctorZero */;
    (*pcVar13)(piVar9,&uStack_20);
    pcVar13 = *(code **)(*piVar9 + 0x4c);
    uVar4 = (undefined4)((**(code **)(*(int *)(piVar2) + (0x68)))(piVar2));
    iVar1 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar2) + (0x8c)))(piVar2));
    uVar16 = (undefined4)(intptr_t)(func_0079e62c(uVar4));
    uVar17 = (undefined4)(intptr_t)(func_0079e62c(*(undefined4 *)(iVar1 + 4)));
    uVar17 = func_0079e724((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),g_00530278,
                             g_0053027c);
    uVar16 = func_0079e8d4((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),(int)uVar17,
                             (int)((ulonglong)uVar17 >> 0x20));
    iVar1 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar9) + (0x8c)))(piVar9));
    uVar17 = (undefined4)(intptr_t)(func_0079e62c(*(undefined4 *)(iVar1 + 4)));
    uVar17 = func_0079e724((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),g_00530278,
                             g_0053027c);
    uVar16 = func_0079e8d4((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),(int)uVar17,
                             (int)((ulonglong)uVar17 >> 0x20));
    func_0079e8d4((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),g_00530288,g_0053028c);
    uVar4 = (undefined4)(func_0079e7e4());
    0 /* ctorZero */;
    uVar4 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(uVar4,uVar5));
    uVar4 = (undefined4)((**(code **)(*(int *)(piVar2) + (0x68)))(piVar2));
    iVar1 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar2) + (0x8c)))(piVar2));
    uVar16 = (undefined4)(intptr_t)(func_0079e62c(uVar4));
    uVar17 = (undefined4)(intptr_t)(func_0079e62c(*(undefined4 *)(iVar1 + 4)));
    uVar17 = func_0079e724((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),g_00530278,
                             g_0053027c);
    uVar16 = func_0079e8d4((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),(int)uVar17,
                             (int)((ulonglong)uVar17 >> 0x20));
    iVar1 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar9) + (0x8c)))(piVar9));
    uVar17 = (undefined4)(intptr_t)(func_0079e62c(*(undefined4 *)(iVar1 + 4)));
    uVar17 = func_0079e724((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),g_00530278,
                             g_0053027c);
    uVar16 = func_0079e8d4((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),(int)uVar17,
                             (int)((ulonglong)uVar17 >> 0x20));
    func_0079e8d4((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),g_00530288,g_0053028c);
    uVar4 = (undefined4)(func_0079e7e4());
    0 /* ctorZero */;
    uVar4 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar6 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar4 = (undefined4)(func_0079e4dc(uVar4,uVar6));
    0 /* ctorZero */;
    (*pcVar13)(piVar9,&uStack_20);
    (**(code **)(*(int *)this + 200))(((int)this),piVar9);
    uVar4 = (undefined4)(cocos2d::CCArray::create());
    iVar10 = (undefined4)(intptr_t)(((RichTextData *)this)->create());
    iVar1 = (undefined4)(intptr_t)(g_00530298);
    *(undefined4 *)(iVar10 + 0x14) = 1;
    func_0079e2dc(iVar10 + 0x18,&g_00530128 + iVar1);
    ((cocos2d::CCArray *)(uVar4))->addObject((cocos2d::CCObject*)iVar10);
    iVar10 = (undefined4)(intptr_t)(((RichTextData *)this)->create());
    *(undefined4 *)(iVar10 + 0x14) = 1;
    *(undefined1 *)(iVar10 + 0x24) = 0xff;
    *(undefined1 *)(iVar10 + 0x25) = 0xff;
    *(undefined1 *)(iVar10 + 0x26) = 0;
    iVar1 = (undefined4)(intptr_t)(g_0053029c);
    *(int *)(iVar10 + 0x28) = *(int *)(iVar10 + 0x28) + 5;
    func_0079e2dc(iVar10 + 0x18,&g_00530158 + iVar1);
    ((cocos2d::CCArray *)(uVar4))->addObject((cocos2d::CCObject*)iVar10);
    iVar10 = (undefined4)(intptr_t)(((RichTextData *)this)->create());
    iVar1 = (undefined4)(intptr_t)(g_005302a0);
    *(undefined4 *)(iVar10 + 0x14) = 1;
    func_0079e2dc(iVar10 + 0x18,&g_00530172 + iVar1);
    ((cocos2d::CCArray *)(uVar4))->addObject((cocos2d::CCObject*)iVar10);
    puVar3 = (undefined4 *)(**(code **)(*(int *)(piVar9) + (0x8c)))(piVar9);
    uVar5 = (undefined4)(func_0079e5fc(*puVar3));
    piVar7 = ((void)((BLRichText *)this)->create((cocos2d::CCArray*)uVar4, uVar5, 0),(int *)0);
    pcVar13 = *(code **)(*piVar7 + 0x7c);
    0 /* ctorZero */;
    (*pcVar13)(piVar7,&uStack_20);
    pcVar13 = *(code **)(*piVar7 + 0x4c);
    uVar4 = (undefined4)(func_0079e4fc(iStack_38 + -0x80000000,0x3f000000));
    uVar4 = (undefined4)(func_0079e59c(uVar4,g_005302a4));
    uVar5 = (undefined4)((**(code **)(*(int *)(piVar9) + (0x68)))(piVar9));
    0 /* ctorZero */;
    uVar4 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(uVar4,uVar5));
    uVar4 = (undefined4)(func_0079e4fc(iStack_38 + -0x80000000,0x3f000000));
    uVar4 = (undefined4)(func_0079e59c(uVar4,g_005302a4));
    uVar6 = (undefined4)((**(code **)(*(int *)(piVar9) + (0x68)))(piVar9));
    0 /* ctorZero */;
    uVar4 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar6 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar4 = (undefined4)(func_0079e4dc(uVar4,uVar6));
    0 /* ctorZero */;
    (*pcVar13)(piVar7,&uStack_20);
    (**(code **)(*(int *)this + 200))(((int)this),piVar7);
    piVar8 = (int *)cocos2d::extension::CCControlButton::create();
    *(int *)((int)this + 4*(0x45)) = (int)piVar8;
    piVar7 = (int *)((int)this);
    (**(code **)(*(int *)(piVar8) + (0x294)))(piVar8,0);
    func_0079e45c(&uStack_20,(unsigned char *)((char *)&g_00530274 + (intptr_t)(g_005302a8)),auStack_28);
    uVar4 = (undefined4)(0 /* ctorZero */);
    func_0079e2bc(&uStack_20);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x45)) + 0x30c))((int *)*(int *)((int)this + 4*(0x45)),uVar4,1);
    func_0079e45c(&uStack_20,(unsigned char *)((char *)&g_005302d4 + (intptr_t)(g_005306b0)),auStack_28);
    piVar11 = (int *)0 /* ctorZero */;
    func_0079e2bc(&uStack_20);
    (**(code **)(*(int *)piVar7[0x45] + 0x30c))((int *)piVar7[0x45],piVar11,2);
    func_0079e45c(&uStack_20,(unsigned char *)((char *)&g_00530304 + (intptr_t)(g_005306b4)),auStack_28);
    uVar4 = (undefined4)(0 /* ctorZero */);
    func_0079e2bc(&uStack_20);
    piVar8 = piVar7;
    (**(code **)(*(int *)piVar7[0x45] + 0x30c))((int *)piVar7[0x45],uVar4,4);
    piVar15 = (int *)piVar7[0x45];
    pcVar13 = *(code **)(*piVar15 + 0x28c);
    0 /* ctorZero */;
    (*pcVar13)(piVar15,&uStack_20);
    (**(code **)(*(int *)piVar7[0x45] + 0x30))((int *)piVar7[0x45],0x3f800000);
    (**(code **)(*(int *)piVar7[0x45] + 0x38))((int *)piVar7[0x45],0x3f800000);
    piVar15 = (int *)piVar7[0x45];
    pcVar13 = *(code **)(*piVar15 + 0x4c);
    uVar16 = (undefined4)(intptr_t)(func_0079e62c(iStack_38));
    uVar16 = func_0079e724((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),g_005306a0,
                             g_005306a4);
    uVar16 = func_0079e8d4((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),g_005306a8,
                             g_005306ac);
    puVar3 = (undefined4 *)(**(code **)(*(int *)(piVar11) + (0x8c)))(piVar11);
    func_0079e4fc(*puVar3,0x3f000000);
    uVar17 = (undefined4)(intptr_t)(func_0079e62c());
    func_0079e8d4((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),(int)uVar17,
                    (int)((ulonglong)uVar17 >> 0x20));
    uVar4 = (undefined4)(func_0079e7e4());
    uVar5 = (undefined4)((**(code **)(*(int *)(piVar9) + (0x68)))(piVar9));
    0 /* ctorZero */;
    uVar4 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(uVar4,uVar5));
    uVar16 = (undefined4)(intptr_t)(func_0079e62c(iStack_38));
    uVar16 = func_0079e724((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),g_005306a0,
                             g_005306a4);
    uVar16 = func_0079e8d4((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),g_005306a8,
                             g_005306ac);
    puVar3 = (undefined4 *)(**(code **)(*(int *)(piVar11) + (0x8c)))(piVar11);
    func_0079e4fc(*puVar3,0x3f000000);
    uVar17 = (undefined4)(intptr_t)(func_0079e62c());
    func_0079e8d4((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),(int)uVar17,
                    (int)((ulonglong)uVar17 >> 0x20));
    uVar4 = (undefined4)(func_0079e7e4());
    uVar6 = (undefined4)((**(code **)(*(int *)(piVar9) + (0x68)))(piVar9));
    0 /* ctorZero */;
    uVar4 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar6 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar4 = (undefined4)(func_0079e4dc(uVar4,uVar6));
    0 /* ctorZero */;
    (*pcVar13)(piVar15,&uStack_20);
    (**(code **)(*(int *)(piVar8) + (0xcc)))(piVar8,piVar7[0x45],8);
    cocos2d::CCDirector::sharedDirector();
    uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar4 = (undefined4)(func_0079e4dc(g_005306c0,uVar4));
    piVar11 = (int *)cocos2d::CCLabelTTF::create((char const*)(unsigned char *)((char *)&g_00530484 + (intptr_t)(g_005306c8)), (char const*)(unsigned char *)((char *)&g_00530482 + (intptr_t)(g_005306c4)), uVar4);
    piVar7[0x43] = (int)piVar11;
    pcVar13 = *(code **)(*piVar11 + 0x7c);
    0 /* ctorZero */;
    (*pcVar13)(piVar11,&uStack_20);
    ((cocos2d::CCLabelTTF *)(piVar7[0x43]))->enableStroke(*(cocos2d::_ccColor3B const*)(unsigned char *)((char *)&g_005304ac + (intptr_t)(g_005306cc)), 0x3f800000, 1);
    piVar11 = (int *)piVar7[0x43];
    pcVar13 = *(code **)(*piVar11 + 0x4c);
    puVar3 = (undefined4 *)(**(code **)(*(int *)piVar7[0x45] + 0x50))();
    uVar5 = (undefined4)(*puVar3);
    cocos2d::CCDirector::sharedDirector();
    uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar4 = (undefined4)(func_0079e4dc(uVar5,uVar4));
    iVar1 = (undefined4)(intptr_t)((**(code **)(*(int *)piVar7[0x45] + 0x50))());
    uVar6 = (undefined4)(*(undefined4 *)(iVar1 + 4));
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(uVar6,uVar5));
    0 /* ctorZero */;
    (*pcVar13)(piVar11,&uStack_20);
    (**(code **)(*(int *)(piVar8) + (0xcc)))(piVar8,piVar7[0x43],9);
    func_0079e45c(&uStack_20,(unsigned char *)((char *)&g_0053051e + (intptr_t)(g_005306d0)),auStack_28);
    piVar7 = (int *)0 /* ctorZero */;
    func_0079e2bc(&uStack_20);
    pcVar13 = *(code **)(*piVar7 + 0x88);
    puVar3 = (undefined4 *)(**(code **)(*(int *)(piVar2) + (0x8c)))(piVar2);
    0 /* ctorZero */;
    uVar4 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar4 = (undefined4)(func_0079e4dc(uVar4,uVar5));
    puVar3 = (undefined4 *)(**(code **)(*(int *)(piVar2) + (0x8c)))(piVar2);
    puVar18 = auStack_28;
    0 /* ctorZero */;
    uVar6 = (undefined4)(*(undefined4 *)(puVar18 + 4));
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(uVar6,uVar5));
    0 /* ctorZero */;
    (*pcVar13)(piVar7,&uStack_20);
    pcVar13 = *(code **)(*piVar7 + 0x4c);
    uVar4 = (undefined4)((**(code **)(*(int *)(piVar9) + (0x68)))(piVar9));
    iVar1 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar9) + (0x8c)))(piVar9));
    uVar5 = (undefined4)(func_0079e4fc(*(undefined4 *)(iVar1 + 4),0x3f000000));
    uVar4 = (undefined4)(func_0079e57c(uVar4,uVar5));
    uVar4 = (undefined4)(func_0079e57c(uVar4,g_005306d8));
    iVar1 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar7) + (0x8c)))(piVar7));
    uVar5 = (undefined4)(func_0079e4fc(*(undefined4 *)(iVar1 + 4),0x3f000000));
    uVar4 = (undefined4)(func_0079e57c(uVar4,uVar5));
    0 /* ctorZero */;
    uVar4 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar4 = (undefined4)(func_0079e4dc(uVar4,uVar5));
    uVar5 = (undefined4)((**(code **)(*(int *)(piVar9) + (0x68)))(piVar9));
    iVar1 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar9) + (0x8c)))(piVar9));
    uVar6 = (undefined4)(func_0079e4fc(*(undefined4 *)(iVar1 + 4),0x3f000000));
    uVar5 = (undefined4)(func_0079e57c(uVar5,uVar6));
    uVar5 = (undefined4)(func_0079e57c(uVar5,g_005306d8));
    iVar1 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar7) + (0x8c)))(piVar7));
    uVar6 = (undefined4)(func_0079e4fc(*(undefined4 *)(iVar1 + 4),0x3f000000));
    uVar5 = (undefined4)(func_0079e57c(uVar5,uVar6));
    0 /* ctorZero */;
    uVar6 = (undefined4)(*(undefined4 *)(puVar18 + 4));
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(uVar6,uVar5));
    0 /* ctorZero */;
    (*pcVar13)(piVar7,&uStack_20);
    (**(code **)(*(int *)(piVar8) + (200)))(piVar8,piVar7);
    cocos2d::CCDirector::sharedDirector();
    uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar4 = (undefined4)(func_0079e4dc(g_00530898,uVar4));
    piVar7 = (int *)cocos2d::CCLabelTTF::create((char const*)(unsigned char *)((char *)&g_0053070a + (intptr_t)(g_005308a0)), (char const*)(unsigned char *)((char *)&g_00530708 + (intptr_t)(g_0053089c)), uVar4);
    pcVar13 = *(code **)(*piVar7 + 0x7c);
    0 /* ctorZero */;
    (*pcVar13)(piVar7,&uStack_20);
    (**(code **)(*(int *)(piVar7) + (0x1b4)))(piVar7,(unsigned char *)((char *)&g_00530731 + (intptr_t)(g_005308a4)));
    pcVar13 = *(code **)(*piVar7 + 0x4c);
    uVar4 = (undefined4)(func_0079e4fc(iStack_38 + -0x80000000,0x3f000000));
    uVar4 = (undefined4)(func_0079e59c(uVar4,g_005308a8));
    uVar5 = (undefined4)((**(code **)(*(int *)(piVar9) + (0x68)))(piVar9));
    iVar1 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar9) + (0x8c)))(piVar9));
    uVar6 = (undefined4)(func_0079e4fc(*(undefined4 *)(iVar1 + 4),0x3f000000));
    uVar5 = (undefined4)(func_0079e57c(uVar5,uVar6));
    iVar1 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar7) + (0x8c)))(piVar7));
    uVar5 = (undefined4)(func_0079e57c(uVar5,*(undefined4 *)(iVar1 + 4)));
    uVar5 = (undefined4)(func_0079e57c(uVar5,g_005308ac));
    0 /* ctorZero */;
    uVar4 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar4 = (undefined4)(func_0079e4dc(uVar4,uVar5));
    uVar5 = (undefined4)(func_0079e4fc(iStack_38 + -0x80000000,0x3f000000));
    uVar5 = (undefined4)(func_0079e59c(uVar5,g_005308a8));
    uVar6 = (undefined4)((**(code **)(*(int *)(piVar9) + (0x68)))(piVar9));
    iVar1 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar9) + (0x8c)))(piVar9));
    uVar12 = (undefined4)(func_0079e4fc(*(undefined4 *)(iVar1 + 4),0x3f000000));
    uVar6 = (undefined4)(func_0079e57c(uVar6,uVar12));
    iVar1 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar7) + (0x8c)))(piVar7));
    uVar6 = (undefined4)(func_0079e57c(uVar6,*(undefined4 *)(iVar1 + 4)));
    uVar6 = (undefined4)(func_0079e57c(uVar6,g_005308ac));
    0 /* ctorZero */;
    uVar6 = (undefined4)(*(undefined4 *)(puVar18 + 4));
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(uVar6,uVar5));
    0 /* ctorZero */;
    (*pcVar13)(piVar7,&uStack_20);
    pcVar13 = *(code **)(*piVar8 + 0xcc);
    (*pcVar13)(piVar8,piVar7,3,pcVar13,piVar8,*piVar8);
    piVar2 = (int *)::operator new(0x134);
    ::new ((void *)piVar2) BLTableView();   /* ALLOC+CTOR_FIX(R120): 类名取自原版 dump（函数+尺寸对齐）*/
    iStack_58 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar2) + (0x18)))(piVar2));
    if (iStack_58 == 0) {
      (**(code **)(*(int *)(piVar2) + (8)))(piVar2);
      piVar8[0x46] = 0;
                    /* WARNING: Does not return */
      pcVar13 = (code *)software_udf(0xff,0x530d5a);
      (*pcVar13)();
    }
    piVar9 = piVar8;
    ((cocos2d::CCObject *)(piVar2))->autorelease();
    piVar8[0x46] = (int)piVar2;
    (**(code **)(*(int *)(piVar2) + (0x22c)))(piVar2,0);
    (**(code **)(*(int *)piVar8[0x46] + 0x214))
              ((int *)piVar8[0x46],piVar8[0x42] + 0x1cU & -(uint)(piVar8[0x42] != 0));
    piVar2 = (int *)piVar8[0x46];
    pcVar13 = *(code **)(*piVar2 + 0x234);
    0 /* ctorZero */;
    uVar4 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(uVar4,uVar5));
    0 /* ctorZero */;
    uVar4 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar6 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    puVar18 = &uStack_20;
    uVar4 = (undefined4)(func_0079e4dc(uVar4,uVar6));
    0 /* ctorZero */;
    (*pcVar13)(piVar2,puVar18);
    piVar2 = (int *)piVar8[0x46];
    pcVar13 = *(code **)(*piVar2 + 0x4c);
    uVar4 = (undefined4)((**(code **)(*(int *)(piVar7) + (0x68)))(piVar7));
    iVar1 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar7) + (0x8c)))(piVar7));
    uVar4 = (undefined4)(func_0079e57c(uVar4,*(undefined4 *)(iVar1 + 4)));
    uVar4 = (undefined4)(func_0079e57c(uVar4,g_00530cc4));
    0 /* ctorZero */;
    uVar4 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(uVar4,uVar5));
    uVar4 = (undefined4)((**(code **)(*(int *)(piVar7) + (0x68)))(piVar7));
    iVar1 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar7) + (0x8c)))(piVar7));
    uVar4 = (undefined4)(func_0079e57c(uVar4,*(undefined4 *)(iVar1 + 4)));
    uVar4 = (undefined4)(func_0079e57c(uVar4,g_00530cc4));
    0 /* ctorZero */;
    uVar4 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar6 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar4 = (undefined4)(func_0079e4dc(uVar4,uVar6));
    0 /* ctorZero */;
    (*pcVar13)(piVar2,puVar18);
    puVar14 = (unsigned char *)((char *)&g_005309f0 + (intptr_t)(g_00530ccc));
    (**(code **)(*(int *)(piVar9) + (0xcc)))(piVar9,piVar8[0x46],5);
    piVar7 = (int *)cocos2d::CCSprite::create((char const*)puVar14);
    ((cocos2d::CCSprite *)(piVar7))->setFlipX(1);
    piVar2 = (int *)cocos2d::CCSprite::create((char const*)puVar14);
    (**(code **)(*(int *)(piVar9) + (0xcc)))(piVar9,piVar7,6);
    (**(code **)(*(int *)(piVar9) + (0xcc)))(piVar9,piVar2,6);
    uVar4 = (undefined4)((**(code **)(*(int *)piVar8[0x46] + 0x68))());
    uVar5 = (undefined4)(func_0079e59c(uVar4,g_00530cd0));
    pcVar13 = *(code **)(*piVar7 + 0x4c);
    puVar3 = (undefined4 *)(**(code **)(*(int *)(piVar7) + (0x8c)))(piVar7);
    uVar16 = (undefined4)(intptr_t)(func_0079e62c(*puVar3));
    uVar16 = func_0079e63c((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),g_00530c98,
                             g_00530c9c);
    func_0079e8d4(g_00530ca0,g_00530ca4,(int)uVar16,(int)((ulonglong)uVar16 >> 0x20));
    uVar4 = (undefined4)(func_0079e7e4());
    0 /* ctorZero */;
    uVar4 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar6 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar6 = (undefined4)(func_0079e4dc(uVar4,uVar6));
    puVar3 = (undefined4 *)(**(code **)(*(int *)(piVar7) + (0x8c)))(piVar7);
    uVar16 = (undefined4)(intptr_t)(func_0079e62c(*puVar3));
    uVar16 = func_0079e63c((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),g_00530c98,
                             g_00530c9c);
    func_0079e8d4(g_00530ca0,g_00530ca4,(int)uVar16,(int)((ulonglong)uVar16 >> 0x20));
    uVar4 = (undefined4)(func_0079e7e4());
    0 /* ctorZero */;
    uVar4 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar12 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar4 = (undefined4)(func_0079e4dc(uVar4,uVar12));
    0 /* ctorZero */;
    (*pcVar13)(piVar7,puVar18);
    pcVar13 = *(code **)(*piVar2 + 0x4c);
    puVar3 = (undefined4 *)(**(code **)(*(int *)(piVar7) + (0x8c)))(piVar7);
    uVar16 = (undefined4)(intptr_t)(func_0079e62c(*puVar3));
    uVar16 = func_0079e63c((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),g_00530c98,
                             g_00530c9c);
    func_0079e744((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),g_00530ca8,g_00530cac);
    uVar4 = (undefined4)(func_0079e7e4());
    0 /* ctorZero */;
    uVar4 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar6 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar6 = (undefined4)(func_0079e4dc(uVar4,uVar6));
    puVar3 = (undefined4 *)(**(code **)(*(int *)(piVar7) + (0x8c)))(piVar7);
    uVar16 = (undefined4)(intptr_t)(func_0079e62c(*puVar3));
    uVar16 = func_0079e63c((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),g_00530c98,
                             g_00530c9c);
    func_0079e744((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),g_00530ca8,g_00530cac);
    uVar4 = (undefined4)(func_0079e7e4());
    0 /* ctorZero */;
    uVar4 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar4 = (undefined4)(func_0079e4dc(uVar4,uVar5));
    0 /* ctorZero */;
    (*pcVar13)(piVar2,puVar18);
    piVar7 = (int *)cocos2d::extension::CCControlButton::create();
    piVar8[0x44] = (int)piVar7;
    (**(code **)(*(int *)(piVar7) + (0x294)))(piVar7,0);
    func_0079e45c(puVar18,(unsigned char *)((char *)&g_00530b98 + (intptr_t)(g_00530cd4)),auStack_28);
    uVar4 = (undefined4)(0 /* ctorZero */);
    func_0079e2bc(puVar18);
    (**(code **)(*(int *)piVar9[0x44] + 0x30c))((int *)piVar9[0x44],uVar4,1);
    func_0079e45c(puVar18,(unsigned char *)((char *)&g_00530bc4 + (intptr_t)(g_00530cd8)),auStack_28);
    uVar4 = (undefined4)(0 /* ctorZero */);
    func_0079e2bc(puVar18);
    piVar7 = piVar9;
    (**(code **)(*(int *)piVar9[0x44] + 0x30c))((int *)piVar9[0x44],uVar4,2);
    piVar8 = (int *)piVar9[0x44];
    pcVar13 = *(code **)(*piVar8 + 0x28c);
    0 /* ctorZero */;
    (*pcVar13)(piVar8,puVar18);
    (**(code **)(*(int *)piVar9[0x44] + 0x30))((int *)piVar9[0x44],0x3f800000);
    (**(code **)(*(int *)piVar9[0x44] + 0x38))((int *)piVar9[0x44],0x3f800000);
    piVar8 = (int *)piVar9[0x44];
    pcVar13 = *(code **)(*piVar8 + 0x4c);
    uVar16 = (undefined4)(intptr_t)(func_0079e62c(iStack_38));
    uVar16 = func_0079e724((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),g_00530cb0,
                             g_00530cb4);
    func_0079e8d4((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),g_00530cb8,g_00530cbc);
    uVar4 = (undefined4)(func_0079e7e4());
    uVar16 = (undefined4)(intptr_t)(func_0079e62c(uStack_34));
    uVar16 = func_0079e724((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),g_00530cb0,
                             g_00530cb4);
    func_0079e8d4((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),g_00530cb8,g_00530cbc);
    uVar5 = (undefined4)(func_0079e7e4());
    0 /* ctorZero */;
    cocos2d::CCDirector::sharedDirector();
    uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar4 = (undefined4)(func_0079e4dc(auStack_30[0],uVar4));
    uVar16 = (undefined4)(intptr_t)(func_0079e62c(iStack_38));
    uVar16 = func_0079e724((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),g_00530cb0,
                             g_00530cb4);
    func_0079e8d4((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),g_00530cb8,g_00530cbc);
    uVar5 = (undefined4)(func_0079e7e4());
    uVar16 = (undefined4)(intptr_t)(func_0079e62c(uStack_34));
    uVar16 = func_0079e724((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),g_00530d68,
                             g_00530d6c);
    func_0079e8d4((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),g_00530d70,g_00530d74);
    uVar6 = (undefined4)(func_0079e7e4());
    0 /* ctorZero */;
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(uStack_24,uVar5));
    0 /* ctorZero */;
    (*pcVar13)(piVar8,puVar18);
    pcVar13 = *(code **)(*piVar7 + 0xcc);
    (*pcVar13)(piVar7,piVar9[0x44],8,pcVar13,piVar7,*piVar7);
    ((BLFundPresenter *)(piVar9[0x42]))->initWithView((BLFundView*)piVar7);
  }
  return iStack_58;
}
