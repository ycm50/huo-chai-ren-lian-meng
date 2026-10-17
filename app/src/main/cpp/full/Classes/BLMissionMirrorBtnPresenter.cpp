#include "BLMissionMirrorBtnPresenter.h"
#include "CCNotificationCenter.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "CCObject.h"
#include "CCTouch.h"
#include "CCDirector.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "MirrorDataManager.h"
#include "Toast.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <new>   // ghost_fix.js 自动补齐
using namespace cocos2d;
// 兜底声明
extern "C" long long func_0042f3fc(...);
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e43c(...);
extern "C" long long func_0079e44c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e46c(...);
extern "C" long long func_0079e47c(...);
extern "C" long long func_0079e4bc(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e864(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_005cb728;
extern "C" unsigned long UNK_005cb742;
extern "C" unsigned long UNK_005cb788;
extern "C" unsigned long UNK_005cb7b0;
extern "C" unsigned long UNK_005cbda2;
extern "C" unsigned long UNK_005cbdba;
extern "C" unsigned long UNK_005cbe76;
extern "C" unsigned long UNK_005cbe78;
extern "C" unsigned long UNK_005cc122;
extern "C" unsigned long UNK_005cc134;
extern "C" unsigned long UNK_005cc146;
extern "C" unsigned long UNK_005cc15c;
extern "C" unsigned long UNK_005cc16a;
extern "C" unsigned long UNK_005cc17c;
extern "C" unsigned long UNK_005cc1c8;
extern "C" unsigned long UNK_005cc1da;
extern "C" unsigned long UNK_005cc1e6;
extern "C" unsigned long UNK_005cc1e8;
extern "C" unsigned long UNK_005cc1ea;
extern "C" unsigned long UNK_005cc232;
extern "C" unsigned long UNK_005cc25c;
extern "C" unsigned long UNK_005cc464;
extern "C" unsigned long UNK_005cc48e;
extern "C" unsigned long UNK_005cc4c6;
extern "C" unsigned long UNK_005cc50e;
extern "C" unsigned long UNK_005cc568;
extern "C" unsigned long UNK_005cc57e;
extern "C" unsigned long _UNK_005cb774;
extern "C" unsigned long _UNK_005cb778;
extern "C" unsigned long _UNK_005cb78c;
extern "C" unsigned long _UNK_005cb7b4;
extern "C" unsigned long _UNK_005cbdf0;
extern "C" unsigned long _UNK_005cbdf4;
extern "C" unsigned long _UNK_005cbe84;
extern "C" unsigned long _UNK_005cbe88;
extern "C" unsigned long _UNK_005cc404;
extern "C" unsigned long _UNK_005cc408;
extern "C" unsigned long _UNK_005cc40c;
extern "C" unsigned long _UNK_005cc410;
extern "C" unsigned long _UNK_005cc414;
extern "C" unsigned long _UNK_005cc418;
extern "C" unsigned long _UNK_005cc41c;
extern "C" unsigned long _UNK_005cc420;
extern "C" unsigned long _UNK_005cc424;
extern "C" unsigned long _UNK_005cc428;
extern "C" unsigned long _UNK_005cc42c;
extern "C" unsigned long _UNK_005cc430;
extern "C" unsigned long _UNK_005cc434;
extern "C" unsigned long _UNK_005cc438;
extern "C" unsigned long _UNK_005cc43c;
extern "C" unsigned long _UNK_005cc60c;
extern "C" unsigned long _UNK_005cc610;
extern "C" unsigned long _UNK_005cc614;
extern "C" unsigned long _UNK_005cc618;
extern "C" unsigned long _UNK_005cc61c;
extern "C" unsigned long _UNK_005cc620;
extern "C" unsigned long g_005cb728;
extern "C" unsigned long g_005cb742;
extern "C" unsigned long g_005cb774;
extern "C" unsigned long g_005cb778;
extern "C" unsigned long g_005cb788;
extern "C" unsigned long g_005cb78c;
extern "C" unsigned long g_005cb7b0;
extern "C" unsigned long g_005cb7b4;
extern "C" unsigned long g_005cbda2;
extern "C" unsigned long g_005cbdba;
extern "C" unsigned long g_005cbdf0;
extern "C" unsigned long g_005cbdf4;
extern "C" unsigned long g_005cbe76;
extern "C" unsigned long g_005cbe78;
extern "C" unsigned long g_005cbe84;
extern "C" unsigned long g_005cbe88;
extern "C" unsigned long g_005cc122;
extern "C" unsigned long g_005cc134;
extern "C" unsigned long g_005cc146;
extern "C" unsigned long g_005cc15c;
extern "C" unsigned long g_005cc16a;
extern "C" unsigned long g_005cc17c;
extern "C" unsigned long g_005cc1c8;
extern "C" unsigned long g_005cc1da;
extern "C" unsigned long g_005cc1e6;
extern "C" unsigned long g_005cc1e8;
extern "C" unsigned long g_005cc1ea;
extern "C" unsigned long g_005cc232;
extern "C" unsigned long g_005cc25c;
extern "C" unsigned long g_005cc404;
extern "C" unsigned long g_005cc408;
extern "C" unsigned long g_005cc40c;
extern "C" unsigned long g_005cc410;
extern "C" unsigned long g_005cc414;
extern "C" unsigned long g_005cc418;
extern "C" unsigned long g_005cc41c;
extern "C" unsigned long g_005cc420;
extern "C" unsigned long g_005cc424;
extern "C" unsigned long g_005cc428;
extern "C" unsigned long g_005cc42c;
extern "C" unsigned long g_005cc430;
extern "C" unsigned long g_005cc434;
extern "C" unsigned long g_005cc438;
extern "C" unsigned long g_005cc43c;
extern "C" unsigned long g_005cc464;
extern "C" unsigned long g_005cc48e;
extern "C" unsigned long g_005cc4c6;
extern "C" unsigned long g_005cc50e;
extern "C" unsigned long g_005cc568;
extern "C" unsigned long g_005cc57e;
extern "C" unsigned long g_005cc60c;
extern "C" unsigned long g_005cc610;
extern "C" unsigned long g_005cc614;
extern "C" unsigned long g_005cc618;
extern "C" unsigned long g_005cc61c;
extern "C" unsigned long g_005cc620;
bool BLMissionMirrorBtnPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

BLMissionMirrorBtnPresenter::~BLMissionMirrorBtnPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_005cb728 + g_005cb774);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x2c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005cb742 + g_005cb778,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLMissionMirrorBtnPresenter::onResetData()
{
  int iVar1;
  
  *(undefined1 *)(((int)this) + 0x21) = 1;
  iVar1 = ((MirrorDataManager *)this)->getInstance();
  *(undefined4 *)(iVar1 + 0x18) = 0xffffffff;
  return;
}

BLMissionMirrorBtnPresenter::BLMissionMirrorBtnPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_005cbda2 + g_005cbdf0);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x2c;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005cbdba + g_005cbdf4,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  *(undefined1 *)(((int)this) + 8) = 0;
  *(undefined1 *)((int)((int)this) + 0x21) = 1;
  return;
}

undefined4 BLMissionMirrorBtnPresenter::create()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x24))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}


void BLMissionMirrorBtnPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar2)->removeAllObservers((cocos2d::CCObject*)((int)this));
  return;
}

void BLMissionMirrorBtnPresenter::onGetMirrorDataSuccess()
{
  return;
}

// ===== 修复: 补回被误删的函数占位 (4) =====

void BLMissionMirrorBtnPresenter::onEnter()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMissionMirrorBtnPresenter::updateWithData(int p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMissionMirrorBtnPresenter::onClick(cocos2d::CCObject* p1, unsigned int p2)
{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined1 auStack_104 [4];
  undefined4 uStack_100;
  undefined1 auStack_fc [4];
  undefined1 auStack_f8 [4];
  undefined1 auStack_f4 [4];
  undefined1 auStack_f0 [4];
  undefined1 auStack_ec [4];
  undefined1 auStack_e8 [4];
  undefined1 auStack_e4 [4];
  undefined4 auStack_e0 [3];
  undefined1 auStack_d4 [8];
  undefined1 auStack_cc [4];
  undefined1 auStack_c8 [180];
  
  if (*(char *)(((int)this) + 0x21) != '\0') {
    iVar1 = (undefined4)(intptr_t)(((MirrorDataManager *)this)->getInstance());
    if (*(int *)(iVar1 + 0x1c) < 1) {
      uVar2 = (undefined4)(((Toast *)this)->sharedToast());
      ((Toast *)(uVar2))->showToast((char const*)(unsigned char *)((char *)&g_005cc464 + (intptr_t)(g_005cc60c)));
    }
    else {
      if (*(char *)(((int)this) + 0x20) == '\0') {
        auStack_e0[0] = 0x32;
        auStack_e0[1] = 0x46;
        auStack_e0[2] = 0x5a;
        uVar2 = (undefined4)(((BLLanguage *)this)->share());
        func_0079e45c(auStack_fc,(unsigned char *)((char *)&g_005cc48e + (intptr_t)(g_005cc610)),auStack_104);
        (((BLLanguage *)this))->getString(*(std::string *)auStack_f8);
        uVar2 = (undefined4)(auStack_e0[*(int *)(((int)this) + 0x1c)]);
        func_0079e43c(auStack_d4,0x18);
        func_0079e44c(auStack_cc,uVar2);
        func_0079e45c(auStack_e4,(unsigned char *)((char *)&g_005cc4c6 + (intptr_t)(g_005cc614)),auStack_e8);
        func_0079e46c(auStack_f4,auStack_c8);
        func_0079e2bc(auStack_e4);
        func_0079e47c(auStack_d4);
        func_0042f3fc(auStack_f0,auStack_f8,auStack_f4);
        uVar2 = (undefined4)(((BLLanguage *)this)->share());
        func_0079e45c(auStack_ec,(unsigned char *)((char *)&g_005cc50e + (intptr_t)(g_005cc618)),auStack_d4);
        (((BLLanguage *)this))->getString(*(std::string *)auStack_e8);
        puVar3 = &uStack_100;
        func_0042f3fc(puVar3,auStack_f0,auStack_e8);
        func_0079e2bc(auStack_e8);
        func_0079e2bc(auStack_ec);
        func_0079e2bc(auStack_f0);
        func_0079e2bc(auStack_f4);
        func_0079e2bc(auStack_f8);
        func_0079e2bc(auStack_fc);
        uVar2 = (undefined4)(((Toast *)this)->sharedToast());
        ((Toast *)(uVar2))->showToast((char const*)uStack_100);
      }
      else {
        iVar1 = (undefined4)(intptr_t)(((MirrorDataManager *)this)->getInstance());
        iVar1 = (undefined4)(intptr_t)(func_0079e4bc(iVar1 + 0x14,(unsigned char *)((char *)&g_005cc568 + (intptr_t)(g_005cc61c))));
        if (iVar1 != 0) {
          iVar1 = (undefined4)(intptr_t)(((MirrorDataManager *)this)->getInstance());
          if (*(int *)(iVar1 + 0x18) != -1) {
            return;
          }
          *(undefined1 *)(((int)this) + 0x21) = 0;
          iVar1 = (undefined4)(intptr_t)(((MirrorDataManager *)this)->getInstance());
          *(undefined4 *)(iVar1 + 0x18) = *(undefined4 *)(((int)this) + 0x1c);
          uVar2 = (undefined4)(((MirrorDataManager *)this)->getInstance());
          ((MirrorDataManager *)(uVar2))->getMirrorData(3, 1);
          return;
        }
        uVar2 = (undefined4)(((BLLanguage *)this)->share());
        puVar3 = auStack_e0;
        func_0079e45c(auStack_d4,(unsigned char *)((char *)&g_005cc57e + (intptr_t)(g_005cc620)),auStack_e4);
        ((BLLanguage *)this)->getString(*(std::string *)(void *)puVar3);
        func_0079e2bc(auStack_d4);
        uVar2 = (undefined4)(((Toast *)this)->sharedToast());
        ((Toast *)(uVar2))->showToast((char const*)auStack_e0[0]);
      }
      func_0079e2bc(puVar3);
    }
  }
  return;
}
