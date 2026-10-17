#include "BLGemDrawView.h"
#include "CCGeometry.h"
#include "CCLayer.h"
#include "CCObject.h"
#include "CCLabelTTF.h"
#include "CCControlButton.h"
#include "CCDirector.h"
#include "CCSprite.h"
#include "BLGemDrawPresenter.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "DataManager.h"
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
extern "C" long long func_0079e2ec(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long func_0079e6c0(...);
extern "C" long long ghidra_CONCAT13(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0053ece0;
extern "C" unsigned long UNK_0053ed24;
extern "C" unsigned long UNK_0053ed68;
extern "C" unsigned long UNK_0053ed90;
extern "C" unsigned long UNK_0053eef4;
extern "C" unsigned long UNK_0053eef8;
extern "C" unsigned long UNK_0053f078;
extern "C" unsigned long UNK_0053f0ec;
extern "C" unsigned long UNK_0053f1c8;
extern "C" unsigned long UNK_0053f1ca;
extern "C" unsigned long UNK_0053f29c;
extern "C" unsigned long UNK_0053f370;
extern "C" unsigned long UNK_0053f394;
extern "C" unsigned long UNK_0053f46e;
extern "C" unsigned long UNK_0053f470;
extern "C" unsigned long UNK_0053f530;
extern "C" unsigned long UNK_0053f5da;
extern "C" unsigned long UNK_0053f5f0;
extern "C" unsigned long UNK_0053f786;
extern "C" unsigned long UNK_0053f7be;
extern "C" unsigned long UNK_0053f872;
extern "C" unsigned long UNK_0053f8a8;
extern "C" unsigned long UNK_0053f984;
extern "C" unsigned long UNK_0053fb4c;
extern "C" unsigned long UNK_0053fc02;
extern "C" unsigned long UNK_0053fcdc;
extern "C" unsigned long UNK_0053fce0;
extern "C" unsigned long UNK_0053fd9a;
extern "C" unsigned long UNK_0053fe54;
extern "C" unsigned long UNK_0053ff08;
extern "C" unsigned long _DAT_0053ee30;
extern "C" unsigned long _DAT_0053ee34;
extern "C" unsigned long _UNK_0053ed54;
extern "C" unsigned long _UNK_0053ed58;
extern "C" unsigned long _UNK_0053ed6c;
extern "C" unsigned long _UNK_0053ed94;
extern "C" unsigned long _UNK_0053f2cc;
extern "C" unsigned long _UNK_0053f2d0;
extern "C" unsigned long _UNK_0053f2d4;
extern "C" unsigned long _UNK_0053f2d8;
extern "C" unsigned long _UNK_0053f2dc;
extern "C" unsigned long _UNK_0053f2e0;
extern "C" unsigned long _UNK_0053f2e4;
extern "C" unsigned long _UNK_0053f2e8;
extern "C" unsigned long _UNK_0053f2ec;
extern "C" unsigned long _UNK_0053f2f0;
extern "C" unsigned long _UNK_0053f2f4;
extern "C" unsigned long _UNK_0053f2f8;
extern "C" unsigned long _UNK_0053f2fc;
extern "C" unsigned long _UNK_0053f300;
extern "C" unsigned long _UNK_0053f304;
extern "C" unsigned long _UNK_0053f308;
extern "C" unsigned long _UNK_0053f30c;
extern "C" unsigned long _UNK_0053f6f8;
extern "C" unsigned long _UNK_0053f6fc;
extern "C" unsigned long _UNK_0053f700;
extern "C" unsigned long _UNK_0053f704;
extern "C" unsigned long _UNK_0053f708;
extern "C" unsigned long _UNK_0053f70c;
extern "C" unsigned long _UNK_0053f710;
extern "C" unsigned long _UNK_0053f714;
extern "C" unsigned long _UNK_0053f718;
extern "C" unsigned long _UNK_0053f71c;
extern "C" unsigned long _UNK_0053f720;
extern "C" unsigned long _UNK_0053f724;
extern "C" unsigned long _UNK_0053f728;
extern "C" unsigned long _UNK_0053f72c;
extern "C" unsigned long _UNK_0053f730;
extern "C" unsigned long _UNK_0053f734;
extern "C" unsigned long _UNK_0053f840;
extern "C" unsigned long _UNK_0053f844;
extern "C" unsigned long _UNK_0053fc58;
extern "C" unsigned long _UNK_0053fc5c;
extern "C" unsigned long _UNK_0053fc60;
extern "C" unsigned long _UNK_0053fc64;
extern "C" unsigned long _UNK_0053fc68;
extern "C" unsigned long _UNK_0053fc6c;
extern "C" unsigned long _UNK_0053fc70;
extern "C" unsigned long _UNK_0053fc74;
extern "C" unsigned long _UNK_0053fc78;
extern "C" unsigned long _UNK_0053fc7c;
extern "C" unsigned long _UNK_0053ffdc;
extern "C" unsigned long _UNK_0053ffe0;
extern "C" unsigned long _UNK_0053ffe4;
extern "C" unsigned long _UNK_0053ffe8;
extern "C" unsigned long _UNK_0053ffec;
extern "C" unsigned long _UNK_0053fff0;
extern "C" unsigned long _UNK_0053fff4;
extern "C" unsigned long _UNK_0053fff8;
extern "C" unsigned long _UNK_0053fffc;
extern "C" unsigned long _UNK_00540000;
extern "C" unsigned long _UNK_00540004;
extern "C" unsigned long _UNK_00540008;
extern "C" unsigned long _UNK_0054000c;
extern "C" unsigned long g_0053ece0;
extern "C" unsigned long g_0053ed24;
extern "C" unsigned long g_0053ed54;
extern "C" unsigned long g_0053ed58;
extern "C" unsigned long g_0053ed68;
extern "C" unsigned long g_0053ed6c;
extern "C" unsigned long g_0053ed90;
extern "C" unsigned long g_0053ed94;
extern "C" unsigned long g_0053ee30;
extern "C" unsigned long g_0053ee34;
extern "C" unsigned long g_0053eef4;
extern "C" unsigned long g_0053eef8;
extern "C" unsigned long g_0053f078;
extern "C" unsigned long g_0053f0ec;
extern "C" unsigned long g_0053f1c8;
extern "C" unsigned long g_0053f1ca;
extern "C" unsigned long g_0053f29c;
extern "C" unsigned long g_0053f2cc;
extern "C" unsigned long g_0053f2d0;
extern "C" unsigned long g_0053f2d4;
extern "C" unsigned long g_0053f2d8;
extern "C" unsigned long g_0053f2dc;
extern "C" unsigned long g_0053f2e0;
extern "C" unsigned long g_0053f2e4;
extern "C" unsigned long g_0053f2e8;
extern "C" unsigned long g_0053f2ec;
extern "C" unsigned long g_0053f2f0;
extern "C" unsigned long g_0053f2f4;
extern "C" unsigned long g_0053f2f8;
extern "C" unsigned long g_0053f2fc;
extern "C" unsigned long g_0053f300;
extern "C" unsigned long g_0053f304;
extern "C" unsigned long g_0053f308;
extern "C" unsigned long g_0053f30c;
extern "C" unsigned long g_0053f370;
extern "C" unsigned long g_0053f394;
extern "C" unsigned long g_0053f46e;
extern "C" unsigned long g_0053f470;
extern "C" unsigned long g_0053f530;
extern "C" unsigned long g_0053f5da;
extern "C" unsigned long g_0053f5f0;
extern "C" unsigned long g_0053f6f8;
extern "C" unsigned long g_0053f6fc;
extern "C" unsigned long g_0053f700;
extern "C" unsigned long g_0053f704;
extern "C" unsigned long g_0053f708;
extern "C" unsigned long g_0053f70c;
extern "C" unsigned long g_0053f710;
extern "C" unsigned long g_0053f714;
extern "C" unsigned long g_0053f718;
extern "C" unsigned long g_0053f71c;
extern "C" unsigned long g_0053f720;
extern "C" unsigned long g_0053f724;
extern "C" unsigned long g_0053f728;
extern "C" unsigned long g_0053f72c;
extern "C" unsigned long g_0053f730;
extern "C" unsigned long g_0053f734;
extern "C" unsigned long g_0053f786;
extern "C" unsigned long g_0053f7be;
extern "C" unsigned long g_0053f840;
extern "C" unsigned long g_0053f844;
extern "C" unsigned long g_0053f872;
extern "C" unsigned long g_0053f8a8;
extern "C" unsigned long g_0053f984;
extern "C" unsigned long g_0053fb4c;
extern "C" unsigned long g_0053fc02;
extern "C" unsigned long g_0053fc58;
extern "C" unsigned long g_0053fc5c;
extern "C" unsigned long g_0053fc60;
extern "C" unsigned long g_0053fc64;
extern "C" unsigned long g_0053fc68;
extern "C" unsigned long g_0053fc6c;
extern "C" unsigned long g_0053fc70;
extern "C" unsigned long g_0053fc74;
extern "C" unsigned long g_0053fc78;
extern "C" unsigned long g_0053fc7c;
extern "C" unsigned long g_0053fcdc;
extern "C" unsigned long g_0053fce0;
extern "C" unsigned long g_0053fd9a;
extern "C" unsigned long g_0053fe54;
extern "C" unsigned long g_0053ff08;
extern "C" unsigned long g_0053ffdc;
extern "C" unsigned long g_0053ffe0;
extern "C" unsigned long g_0053ffe4;
extern "C" unsigned long g_0053ffe8;
extern "C" unsigned long g_0053ffec;
extern "C" unsigned long g_0053fff0;
extern "C" unsigned long g_0053fff4;
extern "C" unsigned long g_0053fff8;
extern "C" unsigned long g_0053fffc;
extern "C" unsigned long g_00540000;
extern "C" unsigned long g_00540004;
extern "C" unsigned long g_00540008;
extern "C" unsigned long g_0054000c;
BLGemDrawView::~BLGemDrawView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0053ece0 + g_0053ed54);
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
  func_0079e45c(&uStack_14,&g_0053ed24 + g_0053ed58,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLGemDrawView::BLGemDrawView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(g_0053ee30 + 0x53edd8);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLGemDrawView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * BLGemDrawView::create()
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

undefined4 BLGemDrawView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x108);
}




void BLGemDrawView::onEnter()
{
  ((BLGemDrawPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLGemDrawView::onExit()
{
  ((BLGemDrawPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (3) =====
void BLGemDrawView::initItem()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLGemDrawView::initPage()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

bool BLGemDrawView::init()
{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  code *pcVar9;
  undefined *puVar10;
  undefined4 auStack_38 [2];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 auStack_28 [4];
  undefined4 uStack_24;
  undefined1 uStack_20;
  undefined1 uStack_1f;
  undefined1 uStack_1e;
  
  iVar1 = (undefined4)(intptr_t)(((cocos2d::CCLayer *)this)->init());
  if (iVar1 != 0) {
    iVar2 = (undefined4)(intptr_t)(((BLGemDrawPresenter *)this)->create((BLGemDrawView*)((int)this)));
    *(int *)((int)this + 4*(0x42)) = iVar2;
    ((cocos2d::CCObject *)this)->retain();
    piVar3 = (int *)cocos2d::CCSprite::create((char const*)(unsigned char *)((char *)&g_0053f872 + (intptr_t)(g_0053fc58)));
    *(int *)((int)this + 4*(0x43)) = (int)piVar3;
    pcVar9 = *(code **)(*piVar3 + 0x7c);
    0 /* ctorZero */;
    (*pcVar9)(piVar3,&uStack_20);
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x43)),1);
    func_0079e45c(&uStack_20,(unsigned char *)((char *)&g_0053f8a8 + (intptr_t)(g_0053fc5c)),auStack_28);
    piVar3 = (int *)0 /* ctorZero */;
    func_0079e2bc(&uStack_20);
    pcVar9 = *(code **)(*piVar3 + 0x4c);
    uVar4 = (undefined4)((**(code **)(*(int *)*(int *)((int)this + 4*(0x43)) + 0x50))());
    iVar2 = (undefined4)(intptr_t)((**(code **)(*(int *)*(int *)((int)this + 4*(0x43)) + 0x8c))());
    uVar5 = (undefined4)(func_0079e4fc(*(undefined4 *)(iVar2 + 4),0x3f000000));
    uVar5 = (undefined4)(func_0079e57c(uVar5,g_0053fc60));
    0 /* ctorZero */;
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(auStack_38[0],uVar5));
    iVar2 = (undefined4)(intptr_t)((**(code **)(*(int *)*(int *)((int)this + 4*(0x43)) + 0x8c))());
    uVar6 = (undefined4)(func_0079e4fc(*(undefined4 *)(iVar2 + 4),0x3f000000));
    uVar6 = (undefined4)(func_0079e57c(uVar6,g_0053fc60));
    0 /* ctorZero */;
    cocos2d::CCDirector::sharedDirector();
    uVar6 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar6 = (undefined4)(func_0079e4dc(uStack_2c,uVar6));
    0 /* ctorZero */;
    ((cocos2d::CCPoint *)(uVar4))->operator+(*(const CCPoint *)(void *)auStack_28);
    (*pcVar9)(piVar3,&uStack_20);
    (**(code **)(*(int *)this + 0xcc))(((int)this),piVar3,2);
    piVar3 = (int *)cocos2d::extension::CCControlButton::create();
    *(int *)((int)this + 4*(0x44)) = (int)piVar3;
    (**(code **)(*(int *)(piVar3) + (0x294)))(piVar3,0);
    func_0079e45c(&uStack_20,(unsigned char *)((char *)&g_0053f984 + (intptr_t)(g_0053fc64)),auStack_28);
    uVar4 = (undefined4)(0 /* ctorZero */);
    func_0079e2bc(&uStack_20);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x44)) + 0x30c))((int *)*(int *)((int)this + 4*(0x44)),uVar4,1);
    piVar3 = (int *)*(int *)((int)this + 4*(0x44));
    pcVar9 = *(code **)(*piVar3 + 0x28c);
    0 /* ctorZero */;
    uVar4 = (undefined4)(uStack_30);
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(uVar4,uVar5));
    0 /* ctorZero */;
    uVar4 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar6 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar4 = (undefined4)(func_0079e4dc(uVar4,uVar6));
    0 /* ctorZero */;
    (*pcVar9)(piVar3,&uStack_20);
    piVar3 = (int *)*(int *)((int)this + 4*(0x44));
    pcVar9 = *(code **)(*piVar3 + 0x4c);
    uVar4 = (undefined4)((**(code **)(*(int *)*(int *)((int)this + 4*(0x43)) + 0x60))());
    puVar7 = (undefined4 *)(**(code **)(*(int *)*(int *)((int)this + 4*(0x43)) + 0x8c))();
    uVar5 = (undefined4)(func_0079e4fc(*puVar7,0x3f000000));
    uVar4 = (undefined4)(func_0079e59c(uVar4,uVar5));
    uVar4 = (undefined4)(func_0079e57c(uVar4,g_0053fc6c));
    uVar5 = (undefined4)((**(code **)(*(int *)*(int *)((int)this + 4*(0x43)) + 0x68))());
    iVar2 = (undefined4)(intptr_t)((**(code **)(*(int *)*(int *)((int)this + 4*(0x43)) + 0x8c))());
    uVar6 = (undefined4)(func_0079e4fc(*(undefined4 *)(iVar2 + 4),0x3f000000));
    uVar5 = (undefined4)(func_0079e59c(uVar5,uVar6));
    uVar5 = (undefined4)(func_0079e57c(uVar5,g_0053fc6c));
    0 /* ctorZero */;
    uVar4 = (undefined4)(uStack_30);
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(uVar4,uVar5));
    uVar4 = (undefined4)((**(code **)(*(int *)*(int *)((int)this + 4*(0x43)) + 0x60))());
    puVar7 = (undefined4 *)(**(code **)(*(int *)*(int *)((int)this + 4*(0x43)) + 0x8c))();
    uVar6 = (undefined4)(func_0079e4fc(*puVar7,0x3f000000));
    uVar4 = (undefined4)(func_0079e59c(uVar4,uVar6));
    uVar4 = (undefined4)(func_0079e57c(uVar4,g_0053fc6c));
    uVar6 = (undefined4)((**(code **)(*(int *)*(int *)((int)this + 4*(0x43)) + 0x68))());
    iVar2 = (undefined4)(intptr_t)((**(code **)(*(int *)*(int *)((int)this + 4*(0x43)) + 0x8c))());
    uVar8 = (undefined4)(func_0079e4fc(*(undefined4 *)(iVar2 + 4),0x3f000000));
    uVar6 = (undefined4)(func_0079e59c(uVar6,uVar8));
    uVar6 = (undefined4)(func_0079e57c(uVar6,g_0053fc6c));
    0 /* ctorZero */;
    uVar4 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar6 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar4 = (undefined4)(func_0079e4dc(uVar4,uVar6));
    0 /* ctorZero */;
    (*pcVar9)(piVar3,&uStack_20);
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x44)),3);
    piVar3 = (int *)cocos2d::extension::CCControlButton::create();
    *(int *)((int)this + 4*(0x45)) = (int)piVar3;
    (**(code **)(*(int *)(piVar3) + (0x294)))(piVar3,0);
    piVar3 = (int *)*(int *)((int)this + 4*(0x45));
    pcVar9 = *(code **)(*piVar3 + 0x30c);
    func_0079e45c(&uStack_20,(unsigned char *)((char *)&g_0053fb4c + (intptr_t)(g_0053fc70)),auStack_28);
    uVar4 = (undefined4)(0 /* ctorZero */);
    (*pcVar9)(piVar3,uVar4,1);
    func_0079e2bc(&uStack_20);
    piVar3 = (int *)*(int *)((int)this + 4*(0x45));
    pcVar9 = *(code **)(*piVar3 + 0x28c);
    0 /* ctorZero */;
    uVar4 = (undefined4)(uStack_30);
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(uVar4,uVar5));
    0 /* ctorZero */;
    uVar4 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar6 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar4 = (undefined4)(func_0079e4dc(uVar4,uVar6));
    0 /* ctorZero */;
    (*pcVar9)(piVar3,&uStack_20);
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x45)),4);
    piVar3 = (int *)cocos2d::extension::CCControlButton::create();
    *(int *)((int)this + 4*(0x46)) = (int)piVar3;
    (**(code **)(*(int *)(piVar3) + (0x294)))(piVar3,0);
    piVar3 = (int *)*(int *)((int)this + 4*(0x46));
    pcVar9 = *(code **)(*piVar3 + 0x30c);
    func_0079e45c(&uStack_20,(unsigned char *)((char *)&g_0053fc02 + (intptr_t)(g_0053fc7c)),auStack_28);
    uVar4 = (undefined4)(0 /* ctorZero */);
    (*pcVar9)(piVar3,uVar4,1);
    func_0079e2bc(&uStack_20);
    piVar3 = (int *)*(int *)((int)this + 4*(0x46));
    pcVar9 = *(code **)(*piVar3 + 0x28c);
    0 /* ctorZero */;
    uVar4 = (undefined4)(uStack_30);
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(uVar4,uVar5));
    0 /* ctorZero */;
    uVar4 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar6 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar4 = (undefined4)(func_0079e4dc(uVar4,uVar6));
    0 /* ctorZero */;
    (*pcVar9)(piVar3,&uStack_20);
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x46)),4);
    cocos2d::CCDirector::sharedDirector();
    uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar4 = (undefined4)(func_0079e4dc(g_0053ffe0,uVar4));
    puVar10 = (unsigned char *)((char *)&g_0053fcdc + (intptr_t)(g_0053ffe4));
    piVar3 = (int *)cocos2d::CCLabelTTF::create((char const*)(unsigned char *)((char *)&g_0053fce0 + (intptr_t)(g_0053ffe8)), (char const*)puVar10, uVar4);
    pcVar9 = *(code **)(*piVar3 + 0x7c);
    0 /* ctorZero */;
    (*pcVar9)(piVar3,&uStack_20);
    pcVar9 = *(code **)(*piVar3 + 0x4c);
    0 /* ctorZero */;
    uVar4 = (undefined4)(uStack_30);
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(uVar4,uVar5));
    0 /* ctorZero */;
    uVar4 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar6 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar4 = (undefined4)(func_0079e4dc(uVar4,uVar6));
    0 /* ctorZero */;
    (*pcVar9)(piVar3,&uStack_20);
    uStack_20 = 0xff;
    uStack_1f = 0xff;
    uStack_1e = 0;
    (**(code **)(*(int *)(piVar3) + (0x1b4)))(piVar3,&uStack_20);
    (**(code **)(*(int *)this + 0xcc))(((int)this),piVar3,5);
    cocos2d::CCDirector::sharedDirector();
    uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar4 = (undefined4)(func_0079e4dc(0x41800000,uVar4));
    piVar3 = (int *)cocos2d::CCLabelTTF::create((char const*)(unsigned char *)((char *)&g_0053fd9a + (intptr_t)(g_0053fff0)), (char const*)puVar10, uVar4);
    *(int *)((int)this + 4*(0x47)) = (int)piVar3;
    pcVar9 = *(code **)(*piVar3 + 0x7c);
    0 /* ctorZero */;
    (*pcVar9)(piVar3,&uStack_20);
    piVar3 = (int *)*(int *)((int)this + 4*(0x47));
    pcVar9 = *(code **)(*piVar3 + 0x4c);
    0 /* ctorZero */;
    uVar4 = (undefined4)(uStack_30);
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(uVar4,uVar5));
    0 /* ctorZero */;
    uVar4 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar6 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar4 = (undefined4)(func_0079e4dc(uVar4,uVar6));
    0 /* ctorZero */;
    (*pcVar9)(piVar3,&uStack_20);
    uStack_20 = 0xff;
    uStack_1f = 0xff;
    uStack_1e = 0;
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x47)) + 0x1b4))((int *)*(int *)((int)this + 4*(0x47)),&uStack_20);
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x47)),5);
    cocos2d::CCDirector::sharedDirector();
    uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar4 = (undefined4)(func_0079e4dc(g_0053fff8,uVar4));
    piVar3 = (int *)cocos2d::CCLabelTTF::create((char const*)(unsigned char *)((char *)&g_0053fe54 + (intptr_t)(g_0053fffc)), (char const*)puVar10, uVar4);
    pcVar9 = *(code **)(*piVar3 + 0x7c);
    0 /* ctorZero */;
    (*pcVar9)(piVar3,&uStack_20);
    pcVar9 = *(code **)(*piVar3 + 0x4c);
    0 /* ctorZero */;
    uVar4 = (undefined4)(uStack_30);
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(uVar4,uVar5));
    0 /* ctorZero */;
    uVar4 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar6 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar4 = (undefined4)(func_0079e4dc(uVar4,uVar6));
    0 /* ctorZero */;
    (*pcVar9)(piVar3,&uStack_20);
    uStack_20 = 0xff;
    uStack_1f = 0xff;
    uStack_1e = 0xff;
    (**(code **)(*(int *)(piVar3) + (0x1b4)))(piVar3,&uStack_20);
    (**(code **)(*(int *)this + 0xcc))(((int)this),piVar3,5);
    cocos2d::CCDirector::sharedDirector();
    uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar4 = (undefined4)(func_0079e4dc(g_0053fff8,uVar4));
    piVar3 = (int *)cocos2d::CCLabelTTF::create((char const*)(unsigned char *)((char *)&g_0053ff08 + (intptr_t)(g_00540008)), (char const*)puVar10, uVar4);
    *(int *)((int)this + 4*(0x48)) = (int)piVar3;
    pcVar9 = *(code **)(*piVar3 + 0x7c);
    0 /* ctorZero */;
    (*pcVar9)(piVar3,&uStack_20);
    piVar3 = (int *)*(int *)((int)this + 4*(0x48));
    pcVar9 = *(code **)(*piVar3 + 0x4c);
    0 /* ctorZero */;
    cocos2d::CCDirector::sharedDirector();
    uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar4 = (undefined4)(func_0079e4dc(uStack_30,uVar4));
    0 /* ctorZero */;
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(uStack_24,uVar5));
    0 /* ctorZero */;
    (*pcVar9)(piVar3,&uStack_20);
    uStack_20 = 0xff;
    uStack_1f = 0xff;
    uStack_1e = 0;
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x48)) + 0x1b4))((int *)*(int *)((int)this + 4*(0x48)),&uStack_20);
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x48)),5);
    ((BLGemDrawView *)(((int)this)))->initItem();
    ((BLGemDrawView *)(((int)this)))->initPage();
    ((BLGemDrawPresenter *)(*(int *)((int)this + 4*(0x42))))->initWithView((BLGemDrawView*)((int)this));
  }
  return iVar1;
}
