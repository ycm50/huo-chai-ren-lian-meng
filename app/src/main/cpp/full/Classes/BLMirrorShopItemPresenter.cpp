#include "BLMirrorShopItemPresenter.h"
#include "CCNotificationCenter.h"
#include "CCString.h"
#include "ItemData.h"
#include "CCArray.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "CCObject.h"
#include "CCTouch.h"
#include "CCDirector.h"
#include "MirrorShopItem.h"
#include "BLMirrorShopItemView.h"
#include "BLItemDataInfoPresenter.h"
#include "BLItemDataInfoView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BackPackData.h"
#include "DataCacheManager.h"
#include "DataManager.h"
#include "Toast.h"
#include "UIManager.h"
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
extern "C" long long func_0079e43c(...);
extern "C" long long func_0079e44c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e46c(...);
extern "C" long long func_0079e47c(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_005ca774;
extern "C" unsigned long UNK_005ca78e;
extern "C" unsigned long UNK_005ca7d8;
extern "C" unsigned long UNK_005ca800;
extern "C" unsigned long UNK_005ca8e6;
extern "C" unsigned long UNK_005cab7a;
extern "C" unsigned long UNK_005cab92;
extern "C" unsigned long UNK_005cac1e;
extern "C" unsigned long UNK_005cac3e;
extern "C" unsigned long UNK_005cad94;
extern "C" unsigned long UNK_005cafb2;
extern "C" unsigned long UNK_005cafe2;
extern "C" unsigned long UNK_005cb026;
extern "C" unsigned long UNK_005cb096;
extern "C" unsigned long UNK_005cb098;
extern "C" unsigned long UNK_005cb099;
extern "C" unsigned long UNK_005cb09a;
extern "C" unsigned long UNK_005cb0a6;
extern "C" unsigned long UNK_005cb0b4;
extern "C" unsigned long UNK_005cb0c2;
extern "C" unsigned long UNK_005cb216;
extern "C" unsigned long UNK_005cb22e;
extern "C" unsigned long UNK_005cb23a;
extern "C" unsigned long UNK_005cb25e;
extern "C" unsigned long _UNK_005ca7c4;
extern "C" unsigned long _UNK_005ca7c8;
extern "C" unsigned long _UNK_005ca7dc;
extern "C" unsigned long _UNK_005ca804;
extern "C" unsigned long _UNK_005ca9d4;
extern "C" unsigned long _UNK_005ca9d8;
extern "C" unsigned long _UNK_005ca9dc;
extern "C" unsigned long _UNK_005ca9e0;
extern "C" unsigned long _UNK_005ca9e4;
extern "C" unsigned long _UNK_005cabd8;
extern "C" unsigned long _UNK_005cabdc;
extern "C" unsigned long _UNK_005cac4c;
extern "C" unsigned long _UNK_005cac50;
extern "C" unsigned long _UNK_005cade8;
extern "C" unsigned long _UNK_005cb1a0;
extern "C" unsigned long _UNK_005cb1a4;
extern "C" unsigned long _UNK_005cb1a8;
extern "C" unsigned long _UNK_005cb1ac;
extern "C" unsigned long _UNK_005cb1b0;
extern "C" unsigned long _UNK_005cb1b4;
extern "C" unsigned long _UNK_005cb1b8;
extern "C" unsigned long _UNK_005cb1bc;
extern "C" unsigned long _UNK_005cb2c4;
extern "C" unsigned long _UNK_005cb2c8;
extern "C" unsigned long _UNK_005cb2cc;
extern "C" unsigned long _UNK_005cb2d0;
extern "C" unsigned long g_005ca774;
extern "C" unsigned long g_005ca78e;
extern "C" unsigned long g_005ca7c4;
extern "C" unsigned long g_005ca7c8;
extern "C" unsigned long g_005ca7d8;
extern "C" unsigned long g_005ca7dc;
extern "C" unsigned long g_005ca800;
extern "C" unsigned long g_005ca804;
extern "C" unsigned long g_005ca8e6;
extern "C" unsigned long g_005ca9d4;
extern "C" unsigned long g_005ca9d8;
extern "C" unsigned long g_005ca9dc;
extern "C" unsigned long g_005ca9e0;
extern "C" unsigned long g_005ca9e4;
extern "C" unsigned long g_005cab7a;
extern "C" unsigned long g_005cab92;
extern "C" unsigned long g_005cabd8;
extern "C" unsigned long g_005cabdc;
extern "C" unsigned long g_005cac1e;
extern "C" unsigned long g_005cac3e;
extern "C" unsigned long g_005cac4c;
extern "C" unsigned long g_005cac50;
extern "C" unsigned long g_005cad94;
extern "C" unsigned long g_005cade8;
extern "C" unsigned long g_005cafb2;
extern "C" unsigned long g_005cafe2;
extern "C" unsigned long g_005cb026;
extern "C" unsigned long g_005cb096;
extern "C" unsigned long g_005cb098;
extern "C" unsigned long g_005cb099;
extern "C" unsigned long g_005cb09a;
extern "C" unsigned long g_005cb0a6;
extern "C" unsigned long g_005cb0b4;
extern "C" unsigned long g_005cb0c2;
extern "C" unsigned long g_005cb1a0;
extern "C" unsigned long g_005cb1a4;
extern "C" unsigned long g_005cb1a8;
extern "C" unsigned long g_005cb1ac;
extern "C" unsigned long g_005cb1b0;
extern "C" unsigned long g_005cb1b4;
extern "C" unsigned long g_005cb1b8;
extern "C" unsigned long g_005cb1bc;
extern "C" unsigned long g_005cb216;
extern "C" unsigned long g_005cb22e;
extern "C" unsigned long g_005cb23a;
extern "C" unsigned long g_005cb25e;
extern "C" unsigned long g_005cb2c4;
extern "C" unsigned long g_005cb2c8;
extern "C" unsigned long g_005cb2cc;
extern "C" unsigned long g_005cb2d0;
bool BLMirrorShopItemPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

BLMirrorShopItemPresenter::~BLMirrorShopItemPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_005ca774 + g_005ca7c4);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x2c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005ca78e + g_005ca7c8,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  *(int *)((int)this + 4*(7)) = 0;
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}


BLMirrorShopItemPresenter::BLMirrorShopItemPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar3 = *(int *)(&g_005cab7a + g_005cabd8);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x2c;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005cab92 + g_005cabdc,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  *(int *)((int)this + 4*(7)) = 0;
  piVar2 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar1 = (undefined4)((**(code **)(*piVar2 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar1)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 0);
  return;
}

undefined4 BLMirrorShopItemPresenter::create()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x20))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}


void BLMirrorShopItemPresenter::onEnter()
{
  return;
}

void BLMirrorShopItemPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  return;
}

// ===== 修复: 补回被误删的函数占位 (5) =====
void BLMirrorShopItemPresenter::onClickInfo(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMirrorShopItemPresenter::initWithView(BLMirrorShopItemView* p1)
{
  int *piVar1;
  
  *(int *)(((int)this) + 0x18) = (undefined4)(intptr_t)p1;
  (**(code **)(**(int **)(p1 + 0x11c) + 0x254))
            (*(int **)(p1 + 0x11c),((int)this),*(undefined4 *)((unsigned char *)((char *)&g_005cac1e + (intptr_t)(g_005cac4c))),0,
             0x20);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x18) + 0x114);
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)((unsigned char *)((char *)&g_005cac3e + (intptr_t)(g_005cac50))),0,0x20);
  return;
}

void BLMirrorShopItemPresenter::updateWithData(MirrorShopItem* p1)
{
  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  code *pcVar4;
  bool bVar5;
  undefined4 uStack_dc;
  undefined1 auStack_d8 [4];
  undefined4 auStack_d4 [2];
  undefined1 auStack_cc [4];
  undefined1 auStack_c8 [180];
  
  bVar5 = (undefined4)(intptr_t)((int)(intptr_t)(int)(intptr_t)p1 != 0);
  *(int *)(((int)this) + 0x1c) = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  piVar1 = *(int **)(*(int *)(((int)this) + 0x18) + 0x110);
  (**(code **)(*(int *)(piVar1) + (0x90)))(piVar1,bVar5);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x18) + 0x10c);
  (**(code **)(*(int *)(piVar1) + (0x90)))(piVar1,bVar5);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x18) + 0x118);
  (**(code **)(*(int *)(piVar1) + (0x90)))(piVar1,bVar5);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x18) + 0x114);
  (**(code **)(*(int *)(piVar1) + (0x234)))(piVar1,bVar5);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x18) + 0x11c);
  (**(code **)(*(int *)(piVar1) + (0x90)))(piVar1,bVar5);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x18) + 0x120);
  (**(code **)(*(int *)(piVar1) + (0x90)))(piVar1,bVar5);
  if (bVar5) {
    uVar2 = (undefined4)(((DataCacheManager *)this)->shareManager());
    piVar1 = ((void)((DataCacheManager *)(uVar2))->getItemDataByID(*(undefined4 *)(p1 + 0x14)),(int *)0);
    piVar3 = *(int **)(*(int *)(((int)this) + 0x18) + 0x110);
    pcVar4 = *(code **)(*piVar3 + 0x20c);
    (**(code **)(*(int *)(piVar1) + (0x58)))(auStack_d4,piVar1);
    piVar1 = (int *)0 /* ctorZero */;
    uVar2 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x214)))());
    (*pcVar4)(piVar3,uVar2);
    func_0079e2bc(auStack_d4);
    piVar1 = *(int **)(*(int *)(((int)this) + 0x18) + 0x118);
    pcVar4 = *(code **)(*piVar1 + 0x234);
    uVar2 = (undefined4)(((BLLanguage *)this)->share());
    func_0079e53c(auStack_d8,p1 + 0x18);
    ((BLLanguage *)(uVar2))->getString((std::string)(char*)auStack_d8);
    (*pcVar4)(piVar1,auStack_d4[0]);
    func_0079e2bc(auStack_d4);
    func_0079e2bc(auStack_d8);
    uVar2 = (undefined4)(*(undefined4 *)(p1 + 0x24));
    piVar1 = *(int **)(*(int *)(((int)this) + 0x18) + 0x120);
    pcVar4 = *(code **)(*piVar1 + 0x234);
    func_0079e43c(auStack_d4,0x18);
    func_0079e44c(auStack_cc,uVar2);
    func_0079e45c(auStack_d8,(unsigned char *)((char *)&g_005cad94 + (intptr_t)(g_005cade8)),&uStack_dc);
    func_0079e46c(&uStack_dc,auStack_c8);
    func_0079e2bc(auStack_d8);
    func_0079e47c(auStack_d4);
    (*pcVar4)(piVar1,uStack_dc);
    func_0079e2bc(&uStack_dc);
  }
  return;
}

undefined4 BLMirrorShopItemPresenter::createText()
{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  undefined1 auStack_f0 [4];
  undefined1 auStack_ec [4];
  undefined1 auStack_e8 [4];
  undefined1 auStack_e4 [4];
  undefined1 auStack_e0 [4];
  undefined1 auStack_dc [4];
  undefined1 auStack_d8 [4];
  undefined1 auStack_d4 [192];
  
  uVar1 = (undefined4)(cocos2d::CCArray::create());
  uVar2 = (undefined4)(((DataCacheManager *)this)->shareManager());
  piVar3 = ((void)((DataCacheManager *)(uVar2))->getItemDataByID(*(undefined4 *)(*(int *)(((int)this) + 0x1c) + 0x20)),(int *)0);
  uVar2 = (undefined4)(((DataCacheManager *)this)->shareManager());
  piVar4 = ((void)((DataCacheManager *)(uVar2))->getItemDataByID(*(undefined4 *)(*(int *)(((int)this) + 0x1c) + 0x14)),(int *)0);
  func_0079e45c(auStack_e8,(unsigned char *)((char *)&g_005cafb2 + (intptr_t)(g_005cb1a0)),auStack_d4);
  uVar2 = (undefined4)(*(undefined4 *)(*(int *)(((int)this) + 0x1c) + 0x24));
  func_0079e43c(auStack_d4,0x18);
  func_0079e44c(auStack_d4 + 8,uVar2);
  func_0079e45c(auStack_ec,(unsigned char *)((char *)&g_005cafe2 + (intptr_t)(g_005cb1a4)),auStack_f0);
  func_0079e46c(auStack_e4,auStack_d4 + 0xc);
  func_0079e2bc(auStack_ec);
  func_0079e47c(auStack_d4);
  (**(code **)(*(int *)(piVar3) + (0x20)))(auStack_e0,piVar3);
  func_0079e45c(auStack_dc,(unsigned char *)((char *)&g_005cb026 + (intptr_t)(g_005cb1a8)),auStack_d4);
  (**(code **)(*(int *)(piVar4) + (0x20)))(auStack_d8,piVar4);
  auStack_d4[0] = 0;
  auStack_d4[1] = 0;
  auStack_d4[2] = 0;
  auStack_d4[3] = 0;
  auStack_d4[4] = 0;
  auStack_d4[5] = 0;
  auStack_d4[6] = 0;
  auStack_d4[7] = 0;
  auStack_d4[8] = 0;
  auStack_d4[9] = 0;
  auStack_d4[10] = 0;
  auStack_d4[0xb] = 0;
  iVar5 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar4) + (0x50)))(piVar4));
  iVar7 = 0;
  iVar5 = (undefined4)(intptr_t)(g_005cb1ac + iVar5 * 3);
  auStack_d4[0xc] = (undefined4)(intptr_t)((&g_005cb098)[iVar5]);
  auStack_d4[0xd] = (undefined4)(intptr_t)((&g_005cb099)[iVar5]);
  auStack_d4[0xe] = (undefined4)(intptr_t)((&g_005cb09a)[iVar5]);
  do {
    piVar3 = (int *)func_0079e2fc(0x3c);
    0 /* ctorZero */;
    *piVar3 = *(int *)((unsigned char *)((char *)&g_005cb096 + (intptr_t)(g_005cb1b0))) + 8;
    iVar5 = (undefined4)(intptr_t)(g_005cb1b8);
    iVar6 = (undefined4)(intptr_t)(*(int *)((unsigned char *)((char *)&g_005cb0a6 + (intptr_t)(g_005cb1b4))));
    piVar3[6] = iVar6 + 0xc;
    piVar3[7] = iVar6 + 0xc;
    piVar3[5] = 1;
    func_0079e2dc(piVar3 + 6,&g_005cb0b4 + iVar5);
    func_0079e2dc(piVar3 + 7,(unsigned char *)((char *)&g_005cb0c2 + (intptr_t)(g_005cb1bc)));
    piVar3[10] = 0x14;
    piVar3[8] = 0;
    *(undefined1 *)(piVar3 + 9) = 0xff;
    *(undefined1 *)((int)piVar3 + 0x25) = 0xff;
    *(undefined1 *)((int)piVar3 + 0x26) = 0xff;
    piVar3[0xb] = 0x3f800000;
    piVar3[0xd] = 0;
    piVar3[0xc] = 0;
    *(undefined1 *)(piVar3 + 0xe) = 0;
    *(undefined1 *)((int)piVar3 + 0x39) = 0;
    ((cocos2d::CCObject *)(piVar3))->autorelease();
    piVar3[5] = 1;
    func_0079e52c(piVar3 + 6,auStack_e8 + iVar7 * 4);
    iVar5 = (undefined4)(intptr_t)(iVar7 * 3);
    *(undefined1 *)(piVar3 + 9) = auStack_d4[iVar5];
    *(undefined1 *)((int)piVar3 + 0x25) = auStack_d4[iVar5 + 1];
    *(undefined1 *)((int)piVar3 + 0x26) = auStack_d4[iVar5 + 2];
    piVar3[10] = 0x16;
    ((cocos2d::CCArray *)(uVar1))->addObject((cocos2d::CCObject*)piVar3);
    iVar7 = (undefined4)(intptr_t)(iVar7 + 1);
  } while (iVar7 != 5);
  iVar5 = 4;
  do {
    func_0079e2bc(auStack_e8 + iVar5 * 4);
    bVar8 = (undefined4)(intptr_t)(iVar5 != 0);
    iVar5 = (undefined4)(intptr_t)(iVar5 + -1);
  } while (bVar8);
  return uVar1;
}

void BLMirrorShopItemPresenter::onClickBuy(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [4];
  undefined4 auStack_1c [2];
  
  iVar6 = (undefined4)(intptr_t)(*(int *)(((int)this) + 0x1c));
  if (iVar6 != 0) {
    uVar7 = (undefined4)(*(undefined4 *)(iVar6 + 0x20));
    iVar6 = (undefined4)(intptr_t)(*(int *)(iVar6 + 0x24));
    uVar1 = (undefined4)(((DataCacheManager *)this)->shareManager());
    piVar2 = ((void)((DataCacheManager *)(uVar1))->getItemDataByID(uVar7),(int *)0);
    if (piVar2 != (int *)0x0) {
      piVar3 = (int *)((DataManager *)this)->shareDataManager();
      piVar3 = (int *)(**(code **)(*(int *)(piVar3) + (0x28)))();
      uVar1 = (undefined4)((**(code **)(*(int *)(piVar3) + (0x50)))());
      piVar3 = (int *)((BackPackData *)(uVar1))->getItemData((ItemData*)piVar2);
      if (piVar3 != (int *)0x0) {
        iVar4 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar3) + (0x28)))());
        if (iVar4 < iVar6) {
          (**(code **)(*(int *)(piVar2) + (0x20)))(auStack_1c,piVar2);
          uVar1 = (undefined4)(cocos2d::CCString::createWithFormat((char const*)(unsigned char *)((char *)&g_005cb25e + (intptr_t)(g_005cb2d0)), auStack_1c[0]));
          func_0079e2bc(auStack_1c);
          uVar7 = (undefined4)(((Toast *)this)->sharedToast());
          uVar5 = (undefined4)(((BLLanguage *)this)->share());
          uVar1 = (undefined4)(((cocos2d::CCString *)(uVar1))->getCString());
          func_0079e45c(auStack_20,uVar1,auStack_24);
          ((BLLanguage *)(uVar5))->getString((std::string)(char*)auStack_20);
          ((Toast *)(uVar7))->showToast((char const*)auStack_1c[0]);
        }
        else {
          uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
          ((cocos2d::CCNotificationCenter *)(uVar1))->postNotification((char const*)(unsigned char *)((char *)&g_005cb216 + (intptr_t)(g_005cb2c4)), (cocos2d::CCObject*)*(undefined4 *)(((int)this) + 0x1c));
          uVar1 = (undefined4)(((UIManager *)this)->shareManager());
          uVar7 = (undefined4)(((BLMirrorShopItemPresenter *)(((int)this)))->createText());
          func_0079e45c(auStack_20,(unsigned char *)((char *)&g_005cb22e + (intptr_t)(g_005cb2c8)),auStack_28);
          func_0079e45c(auStack_1c,(unsigned char *)((char *)&g_005cb23a + (intptr_t)(g_005cb2cc)),auStack_24);
          ((UIManager *)(uVar1))->showAlert((cocos2d::CCArray*)uVar7, (std::string)(char*)auStack_20, (std::string)(char*)auStack_1c);
        }
        func_0079e2bc(auStack_1c);
        func_0079e2bc(auStack_20);
      }
    }
  }
  return;
}
