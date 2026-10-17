#include "BLEquipItemPresenter.h"
#include "CCDictionary.h"
#include "CCArray.h"
#include "CCLabelTTF.h"
#include "CCNotificationCenter.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "CCObject.h"
#include "CCTouch.h"
#include "CCString.h"
#include "CCDirector.h"
#include "BLDebug.h"
#include "BLEquipItemView.h"
#include "BLLeakUtils.h"
#include "BLPageControl.h"
#include "DataManager.h"
#include "EquipData.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <new>   // ghost_fix.js 自动补齐
using namespace cocos2d;
// 兜底声明
extern "C" long long func_00442068(...);
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e43c(...);
extern "C" long long func_0079e44c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e46c(...);
extern "C" long long func_0079e47c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0066dd54;
extern "C" unsigned long UNK_0066dd6c;
extern "C" unsigned long UNK_0066dd84;
extern "C" unsigned long UNK_0066ddf8;
extern "C" unsigned long UNK_0066de12;
extern "C" unsigned long UNK_0066de58;
extern "C" unsigned long UNK_0066de80;
extern "C" unsigned long UNK_0066de96;
extern "C" unsigned long UNK_0066dec4;
extern "C" unsigned long UNK_0066df42;
extern "C" unsigned long UNK_0066df50;
extern "C" unsigned long UNK_0066df5e;
extern "C" unsigned long UNK_0066df82;
extern "C" unsigned long UNK_0066df8a;
extern "C" unsigned long UNK_0066dfa0;
extern "C" unsigned long UNK_0066dfb8;
extern "C" unsigned long UNK_0066e0ba;
extern "C" unsigned long UNK_0066e10e;
extern "C" unsigned long UNK_0066e112;
extern "C" unsigned long UNK_0066e154;
extern "C" unsigned long UNK_0066e178;
extern "C" unsigned long UNK_0066e200;
extern "C" unsigned long UNK_0066e224;
extern "C" unsigned long UNK_0066e3ba;
extern "C" unsigned long UNK_0066e3e0;
extern "C" unsigned long UNK_0066e496;
extern "C" unsigned long _UNK_0066dd58;
extern "C" unsigned long _UNK_0066dd70;
extern "C" unsigned long _UNK_0066dd88;
extern "C" unsigned long _UNK_0066de44;
extern "C" unsigned long _UNK_0066de48;
extern "C" unsigned long _UNK_0066de5c;
extern "C" unsigned long _UNK_0066de84;
extern "C" unsigned long _UNK_0066def4;
extern "C" unsigned long _UNK_0066def8;
extern "C" unsigned long _UNK_0066df64;
extern "C" unsigned long _UNK_0066df68;
extern "C" unsigned long _UNK_0066df6c;
extern "C" unsigned long _UNK_0066dfc4;
extern "C" unsigned long _UNK_0066dfc8;
extern "C" unsigned long _UNK_0066dfcc;
extern "C" unsigned long _UNK_0066dfd0;
extern "C" unsigned long _UNK_0066e0c4;
extern "C" unsigned long _UNK_0066e0c8;
extern "C" unsigned long _UNK_0066e3f8;
extern "C" unsigned long _UNK_0066e3fc;
extern "C" unsigned long _UNK_0066e400;
extern "C" unsigned long _UNK_0066e404;
extern "C" unsigned long _UNK_0066e408;
extern "C" unsigned long _UNK_0066e40c;
extern "C" unsigned long _UNK_0066e410;
extern "C" unsigned long _UNK_0066e414;
extern "C" unsigned long _UNK_0066e418;
extern "C" unsigned long _UNK_0066e4ec;
extern "C" unsigned long g_0066dd54;
extern "C" unsigned long g_0066dd58;
extern "C" unsigned long g_0066dd6c;
extern "C" unsigned long g_0066dd70;
extern "C" unsigned long g_0066dd84;
extern "C" unsigned long g_0066dd88;
extern "C" unsigned long g_0066ddf8;
extern "C" unsigned long g_0066de12;
extern "C" unsigned long g_0066de44;
extern "C" unsigned long g_0066de48;
extern "C" unsigned long g_0066de58;
extern "C" unsigned long g_0066de5c;
extern "C" unsigned long g_0066de80;
extern "C" unsigned long g_0066de84;
extern "C" unsigned long g_0066de96;
extern "C" unsigned long g_0066dec4;
extern "C" unsigned long g_0066def4;
extern "C" unsigned long g_0066def8;
extern "C" unsigned long g_0066df42;
extern "C" unsigned long g_0066df50;
extern "C" unsigned long g_0066df5e;
extern "C" unsigned long g_0066df64;
extern "C" unsigned long g_0066df68;
extern "C" unsigned long g_0066df6c;
extern "C" unsigned long g_0066df82;
extern "C" unsigned long g_0066df8a;
extern "C" unsigned long g_0066dfa0;
extern "C" unsigned long g_0066dfb8;
extern "C" unsigned long g_0066dfc4;
extern "C" unsigned long g_0066dfc8;
extern "C" unsigned long g_0066dfcc;
extern "C" unsigned long g_0066dfd0;
extern "C" unsigned long g_0066e0ba;
extern "C" unsigned long g_0066e0c4;
extern "C" unsigned long g_0066e0c8;
extern "C" unsigned long g_0066e10e;
extern "C" unsigned long g_0066e112;
extern "C" unsigned long g_0066e154;
extern "C" unsigned long g_0066e178;
extern "C" unsigned long g_0066e200;
extern "C" unsigned long g_0066e224;
extern "C" unsigned long g_0066e3ba;
extern "C" unsigned long g_0066e3e0;
extern "C" unsigned long g_0066e3f8;
extern "C" unsigned long g_0066e3fc;
extern "C" unsigned long g_0066e400;
extern "C" unsigned long g_0066e404;
extern "C" unsigned long g_0066e408;
extern "C" unsigned long g_0066e40c;
extern "C" unsigned long g_0066e410;
extern "C" unsigned long g_0066e414;
extern "C" unsigned long g_0066e418;
extern "C" unsigned long g_0066e496;
extern "C" unsigned long g_0066e4ec;
int BLEquipItemPresenter::getCurrentPage() const
{
  return *(undefined4 *)(((int)this) + 0x1c);
}

void BLEquipItemPresenter::setCurrentPage(int p1)
{
  *(undefined4 *)(((int)this) + 0x1c) = p1;
  return;
}

int BLEquipItemPresenter::getIndex() const
{
  return *(undefined4 *)(((int)this) + 0x20);
}

void BLEquipItemPresenter::setIndex(int p1)
{
  *(undefined4 *)(((int)this) + 0x20) = p1;
  return;
}

bool BLEquipItemPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLEquipItemPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLEquipItemPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLEquipItemPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLEquipItemPresenter::tick(float p1)
{
  return;
}

BLEquipItemPresenter::~BLEquipItemPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0066ddf8 + g_0066de44);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x4c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0066de12 + g_0066de48,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLEquipItemPresenter::BLEquipItemPresenter()
{
  undefined4 p2 = 0;

  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar3 = *(int *)(&g_0066de96 + g_0066def4);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x4c;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 0);
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0066dec4 + g_0066def8,&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  *(int *)((int)this + 4*(7)) = 0;
  *(int *)((int)this + 4*(8)) = 0;
  return;
}

undefined4 BLEquipItemPresenter::create(BLEquipItemView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x24))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLEquipItemPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar2)->removeObserver((cocos2d::CCObject*)((int)this), (char const*)&g_0066df42 + g_0066df64);
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar2)->removeObserver((cocos2d::CCObject*)((int)this), (char const*)&g_0066df50 + g_0066df68);
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar2)->removeObserver((cocos2d::CCObject*)((int)this), (char const*)&g_0066df5e + g_0066df6c);
  return;
}

// ===== 修复: 补回被误删的函数占位 (4) =====
void BLEquipItemPresenter::onEnter()
{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = (undefined4)(intptr_t)(g_0066dfc4);
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  uVar3 = (undefined4)(*(undefined4 *)(&g_0066df82 + iVar1));
  ((cocos2d::CCNotificationCenter *)(((int)this)))->addObserver((cocos2d::CCObject*)uVar3, 0, (char const*)(unsigned char *)((char *)&g_0066df8a + (intptr_t)(g_0066dfc8)), 0);
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)(((int)this)))->addObserver((cocos2d::CCObject*)uVar3, 0, (char const*)(unsigned char *)((char *)&g_0066dfa0 + (intptr_t)(g_0066dfcc)), 0);
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)(((int)this)))->addObserver((cocos2d::CCObject*)uVar3, 0, (char const*)(unsigned char *)((char *)&g_0066dfb8 + (intptr_t)(g_0066dfd0)), 0);
  return;
}

void BLEquipItemPresenter::initWithView(BLEquipItemView* p1)
{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  code *pcVar4;
  undefined1 auStack_20 [12];
  
  *(undefined4 *)(((int)this) + 0x18) = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  piVar1 = (int *)((BLEquipItemView *)(p1))->getssp_UpgraceTitleBG();
  pcVar4 = *(code **)(*piVar1 + 0x5c);
  piVar2 = (int *)((BLEquipItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getLabUpgrace();
  uVar3 = (undefined4)((**(code **)(*(int *)(piVar2) + (0x60)))());
  (*pcVar4)(piVar1,uVar3);
  piVar1 = (int *)((BLEquipItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getssp_UpgraceTitleBG();
  pcVar4 = *(code **)(*piVar1 + 0x7c);
  0 /* ctorZero */;
  (*pcVar4)(piVar1,auStack_20);
  piVar1 = (int *)((BLEquipItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getPageControlStars();
  (**(code **)(*(int *)(piVar1) + (0x21c)))(piVar1,1);
  piVar1 = (int *)((BLEquipItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getPageControlStars();
  (**(code **)(*(int *)(piVar1) + (0x214)))(piVar1,0);
  piVar1 = (int *)((BLEquipItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getPageControlStars();
  (**(code **)(*(int *)(piVar1) + (0x20c)))(piVar1,1);
  ((BLEquipItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getPageControlStars();
  ((BLPageControl *)this)->reload();
  piVar1 = (int *)((BLEquipItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getLabStar();
  pcVar4 = *(code **)(*piVar1 + 0x5c);
  piVar2 = (int *)((BLEquipItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getPageControlStars();
  uVar3 = (undefined4)((**(code **)(*(int *)(piVar2) + (0x60)))());
  uVar3 = (undefined4)(func_0079e59c(uVar3,g_0066e0c4));
  (*pcVar4)(piVar1,uVar3);
  piVar1 = (int *)((BLEquipItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getLabStar();
  pcVar4 = *(code **)(*piVar1 + 100);
  piVar2 = (int *)((BLEquipItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getLabStar();
  uVar3 = (undefined4)((**(code **)(*(int *)(piVar2) + (0x68)))());
  uVar3 = (undefined4)(func_0079e59c(uVar3,0x3f800000));
  (*pcVar4)(piVar1,uVar3);
  uVar3 = (undefined4)(((BLEquipItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getLabStar());
  ((cocos2d::CCLabelTTF *)(uVar3))->enableStroke(*(cocos2d::_ccColor3B const*)(unsigned char *)((char *)&g_0066e0ba + (intptr_t)(g_0066e0c8)), 0x3f800000, 1);
  return;
}

void BLEquipItemPresenter::updateData(cocos2d::CCObject* p1)
{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  undefined4 *puVar7;
  code *pcVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 *puVar11;
  undefined1 auStack_dc [4];
  undefined4 uStack_d8;
  undefined4 auStack_d4 [2];
  undefined1 auStack_cc [4];
  undefined1 auStack_c8 [180];
  
  lVar9 = (undefined4)(intptr_t)(0 /* ctorZero */);
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  piVar1 = (int *)(**(code **)(*piVar1 + 0x28))();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x68))());
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  uVar3 = (undefined4)((**(code **)(*piVar1 + 0x60))());
  iVar4 = (undefined4)(intptr_t)(((cocos2d::CCArray *)uVar2)->objectAtIndex((unsigned int)uVar3));
  if (iVar4 != 0) {
    uVar2 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_0066e10e + (intptr_t)(g_0066e3f8))));
    piVar1 = (int *)func_0079e55c(iVar4,uVar2,*(undefined4 *)((unsigned char *)((char *)&g_0066e112 + (intptr_t)(g_0066e3fc))),0);
    if (piVar1 != (int *)0x0) {
      uVar3 = (undefined4)((**(code **)(*piVar1 + 0x28))());
      piVar5 = (int *)((DataManager *)this)->shareDataManager();
      iVar4 = (undefined4)(intptr_t)((**(code **)(*piVar5 + 0x78))());
      if (iVar4 == 3) {
        uVar3 = (undefined4)((**(code **)(*piVar1 + 0x30))(piVar1));
      }
      iVar4 = (undefined4)(intptr_t)(((cocos2d::CCArray *)uVar3)->objectAtIndex((unsigned int)*(undefined4 *)(((int)this) + 0x1c)));
      if ((iVar4 != 0) &&
         (piVar1 = (int *)func_0079e55c(iVar4,uVar2,*(undefined4 *)((unsigned char *)((char *)&g_0066e154 + (intptr_t)(g_0066e400)))
                                          ,0), piVar1 != (int *)0x0)) {
        uVar3 = (undefined4)((**(code **)(*piVar1 + 0x18))());
        iVar4 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)uVar3)->objectForKey(*(undefined4 *)(((int)this) + 0x20)));
        piVar1 = (int *)0x0;
        if (iVar4 != 0) {
          piVar1 = (int *)func_0079e55c(iVar4,uVar2,*(undefined4 *)((unsigned char *)((char *)&g_0066e178 + (intptr_t)(g_0066e404)))
                                          ,0);
        }
        piVar5 = (int *)((BLEquipItemView *)*(undefined4 *)(((int)this) + 0x18))->getSprAdd();
        (**(code **)(*piVar5 + 0x90))(piVar5,piVar1 == (int *)0x0);
        piVar5 = (int *)((BLEquipItemView *)*(undefined4 *)(((int)this) + 0x18))->getLabCanEquip();
        (**(code **)(*piVar5 + 0x90))(piVar5,piVar1 == (int *)0x0);
        piVar5 = (int *)((BLEquipItemView *)*(undefined4 *)(((int)this) + 0x18))->getSprItem();
        (**(code **)(*piVar5 + 0x90))(piVar5,piVar1 != (int *)0x0);
        if (piVar1 != (int *)0x0) {
          piVar5 = (int *)((BLEquipItemView *)*(undefined4 *)(((int)this) + 0x18))->getLabUpgrace();
          pcVar8 = *(code **)(*piVar5 + 0x234);
          uVar2 = (undefined4)((**(code **)(*piVar1 + 0x30))(piVar1));
          func_0079e43c(auStack_d4,0x18);
          func_0079e44c(auStack_cc,uVar2);
          func_0079e45c(&uStack_d8,(unsigned char *)((char *)&g_0066e200 + (intptr_t)(g_0066e408)),auStack_dc);
          func_0079e46c(auStack_dc,auStack_c8);
          func_0079e2bc(&uStack_d8);
          func_0079e47c(auStack_d4);
          func_00442068(auStack_d4,(unsigned char *)((char *)&g_0066e224 + (intptr_t)(g_0066e40c)),auStack_dc);
          (*pcVar8)(piVar5,auStack_d4[0]);
          func_0079e2bc(auStack_d4);
          func_0079e2bc(auStack_dc);
          piVar5 = (int *)((BLEquipItemView *)*(undefined4 *)(((int)this) + 0x18))->getssp_UpgraceTitleBG();
          pcVar8 = *(code **)(*piVar5 + 0x1d4);
          piVar6 = (int *)((BLEquipItemView *)*(undefined4 *)(((int)this) + 0x18))->getLabUpgrace();
          puVar7 = (undefined4 *)(**(code **)(*piVar6 + 0x8c))();
          uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x + _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(*puVar7),(int)(g_0066e410)))));
          piVar6 = (int *)((BLEquipItemView *)*(undefined4 *)(((int)this) + 0x18))->getssp_UpgraceTitleBG();
          iVar4 = (undefined4)(intptr_t)((**(code **)(*piVar6 + 0x8c))());
          0 /* ctorZero */;
          (*pcVar8)(piVar5,auStack_d4);
          piVar5 = (int *)((BLEquipItemView *)*(undefined4 *)(((int)this) + 0x18))->getLabUpgrace();
          pcVar8 = *(code **)(*piVar5 + 0x90);
          iVar4 = (undefined4)(intptr_t)((**(code **)(*piVar1 + 0x30))(piVar1));
          (*pcVar8)(piVar5,(uint)((iVar4 >> 0x1f) - iVar4) >> 0x1f);
          piVar5 = (int *)((BLEquipItemView *)*(undefined4 *)(((int)this) + 0x18))->getssp_UpgraceTitleBG();
          pcVar8 = *(code **)(*piVar5 + 0x90);
          iVar4 = (undefined4)(intptr_t)((**(code **)(*piVar1 + 0x30))(piVar1));
          (*pcVar8)(piVar5,(uint)((iVar4 >> 0x1f) - iVar4) >> 0x1f);
          piVar5 = (int *)((BLEquipItemView *)*(undefined4 *)(((int)this) + 0x18))->getPageControlStars();
          (**(code **)(*piVar5 + 0x90))(piVar5,1);
          piVar5 = (int *)((BLEquipItemView *)*(undefined4 *)(((int)this) + 0x18))->getLabStar();
          (**(code **)(*piVar5 + 0x90))(piVar5,1);
          piVar5 = (int *)((long long)::operator new((size_t)(0x84)));
          0 /* ctorZero */;
          iVar4 = (undefined4)(intptr_t)(((EquipData *)piVar5)->init());
          if (iVar4 == 0) {
            (**(code **)(*piVar5 + 8))(piVar5);
            piVar5 = (int *)0x0;
          }
          else {
            ((cocos2d::CCObject *)piVar5)->autorelease();
          }
          uVar2 = (undefined4)((**(code **)(*piVar1 + 0x20))(piVar1));
          ((EquipData *)piVar5)->initWithID(uVar2);
          if (piVar5 != (int *)0x0) {
            piVar1 = (int *)((BLEquipItemView *)*(undefined4 *)(((int)this) + 0x18))->getLabStar();
            pcVar8 = *(code **)(*piVar1 + 0x234);
            piVar6 = (int *)(**(code **)(*piVar5 + 0xc0))(piVar5);
            uVar2 = (undefined4)((**(code **)(*piVar6 + 0x30))());
            puVar7 = auStack_d4;
            func_0079e43c(puVar7,0x18);
            func_0079e44c(auStack_cc,uVar2);
            func_0079e45c(&uStack_d8,(unsigned char *)((char *)&g_0066e3ba + (intptr_t)(g_0066e414)),auStack_dc,auStack_dc,puVar7);
            func_0079e46c(auStack_dc,auStack_c8);
            func_0079e2bc(&uStack_d8);
            func_0079e47c(auStack_d4);
            puVar11 = auStack_dc;
            func_00442068(auStack_d4,(unsigned char *)((char *)&g_0066e3e0 + (intptr_t)(g_0066e418)),puVar11);
            (*pcVar8)(piVar1,auStack_d4[0]);
            func_0079e2bc(auStack_d4);
            func_0079e2bc(puVar11);
            piVar1 = (int *)((BLEquipItemView *)*(undefined4 *)(((int)this) + 0x18))->getSprItem();
            pcVar8 = *(code **)(*piVar1 + 0x20c);
            (**(code **)(*piVar5 + 0x58))(&uStack_d8,piVar5);
            func_0079e45c(auStack_d4,uStack_d8,puVar11);
            piVar5 = (int *)0 /* ctorZero */;
            uVar2 = (undefined4)((**(code **)(*piVar5 + 0x214))());
            (*pcVar8)(piVar1,uVar2);
            func_0079e2bc(auStack_d4);
            func_0079e2bc(&uStack_d8);
          }
        }
        else {
          piVar1 = (int *)((BLEquipItemView *)*(undefined4 *)(((int)this) + 0x18))->getLabUpgrace();
          (**(code **)(*piVar1 + 0x90))(piVar1,0);
          piVar1 = (int *)((BLEquipItemView *)*(undefined4 *)(((int)this) + 0x18))->getssp_UpgraceTitleBG();
          (**(code **)(*piVar1 + 0x90))(piVar1,0);
          piVar1 = (int *)((BLEquipItemView *)*(undefined4 *)(((int)this) + 0x18))->getPageControlStars();
          (**(code **)(*piVar1 + 0x90))(piVar1,0);
          piVar1 = (int *)((BLEquipItemView *)*(undefined4 *)(((int)this) + 0x18))->getLabStar();
          (**(code **)(*piVar1 + 0x90))(piVar1,0);
        }
      }
    }
  }
  lVar10 = (undefined4)(intptr_t)(0 /* ctorZero */);
  cocos2d::CCString::createWithFormat((char const*)(unsigned char *)((char *)&g_0066e496 + (intptr_t)(g_0066e4ec)), (int)((ulonglong)lVar9 >> 0x20),(int)(lVar10 - lVar9),
             (int)((ulonglong)(lVar10 - lVar9) >> 0x20));
  uVar2 = (undefined4)(((cocos2d::CCString *)this)->getCString());
  func_0079e45c(auStack_d4,uVar2,&uStack_d8);
  ((BLDebug *)this)->LogTime((std::string)(char*)auStack_d4);
  func_0079e2bc(auStack_d4);
  return;
}

void BLEquipItemPresenter::initWith(int p1, int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
