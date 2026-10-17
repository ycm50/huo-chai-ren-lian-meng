#include "PKCountDownView.h"
#include "CCObject.h"
#include "CCScheduler.h"
#include "CCString.h"
#include "CCControlButton.h"
#include "CCDirector.h"
#include "CCGeometry.h"
#include "CCLayer.h"
#include "CCLabelBMFont.h"
#include "CCLabelTTF.h"
#include "CCScale9Sprite.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLMission.h"
#include "BluetoothHelper.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
using namespace cocos2d;
static inline undefined4 hw_fbits(float f) { undefined4 r; __builtin_memcpy(&r, &f, 4); return r; }
// 兜底声明
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e51c(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long func_0079e7b4(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0061b8ec;
extern "C" unsigned long UNK_0061b91e;
extern "C" unsigned long UNK_0061b964;
extern "C" unsigned long UNK_0061b98c;
extern "C" unsigned long UNK_0061b9de;
extern "C" unsigned long UNK_0061b9fa;
extern "C" unsigned long UNK_0061ba18;
extern "C" unsigned long UNK_0061ba34;
extern "C" unsigned long UNK_0061ba50;
extern "C" unsigned long UNK_0061baac;
extern "C" unsigned long UNK_0061bc34;
extern "C" unsigned long UNK_0061bdae;
extern "C" unsigned long UNK_0061bdb0;
extern "C" unsigned long UNK_0061bdd0;
extern "C" unsigned long UNK_0061be64;
extern "C" unsigned long UNK_0061bf30;
extern "C" unsigned long UNK_0061bf46;
extern "C" unsigned long _DAT_0061bb88;
extern "C" unsigned long _DAT_0061bb8c;
extern "C" unsigned long _UNK_0061b950;
extern "C" unsigned long _UNK_0061b954;
extern "C" unsigned long _UNK_0061b968;
extern "C" unsigned long _UNK_0061b990;
extern "C" unsigned long _UNK_0061bac4;
extern "C" unsigned long _UNK_0061bac8;
extern "C" unsigned long _UNK_0061bacc;
extern "C" unsigned long _UNK_0061bad0;
extern "C" unsigned long _UNK_0061bad4;
extern "C" unsigned long _UNK_0061bad8;
extern "C" unsigned long _UNK_0061badc;
extern "C" unsigned long _UNK_0061bae0;
extern "C" unsigned long _UNK_0061bae4;
extern "C" unsigned long _UNK_0061bae8;
extern "C" unsigned long _UNK_0061baec;
extern "C" unsigned long _UNK_0061bfe0;
extern "C" unsigned long _UNK_0061bfe4;
extern "C" unsigned long _UNK_0061bfe8;
extern "C" unsigned long _UNK_0061bfec;
extern "C" unsigned long _UNK_0061bff0;
extern "C" unsigned long _UNK_0061bff4;
extern "C" unsigned long _UNK_0061bff8;
extern "C" unsigned long _UNK_0061bffc;
extern "C" unsigned long _UNK_0061c000;
extern "C" unsigned long g_0061b8ec;
extern "C" unsigned long g_0061b91e;
extern "C" unsigned long g_0061b950;
extern "C" unsigned long g_0061b954;
extern "C" unsigned long g_0061b964;
extern "C" unsigned long g_0061b968;
extern "C" unsigned long g_0061b98c;
extern "C" unsigned long g_0061b990;
extern "C" unsigned long g_0061b9de;
extern "C" unsigned long g_0061b9fa;
extern "C" unsigned long g_0061ba18;
extern "C" unsigned long g_0061ba34;
extern "C" unsigned long g_0061ba50;
extern "C" unsigned long g_0061baac;
extern "C" unsigned long g_0061bac4;
extern "C" unsigned long g_0061bac8;
extern "C" unsigned long g_0061bacc;
extern "C" unsigned long g_0061bad0;
extern "C" unsigned long g_0061bad4;
extern "C" unsigned long g_0061bad8;
extern "C" unsigned long g_0061badc;
extern "C" unsigned long g_0061bae0;
extern "C" unsigned long g_0061bae4;
extern "C" unsigned long g_0061bae8;
extern "C" unsigned long g_0061baec;
extern "C" unsigned long g_0061bb88;
extern "C" unsigned long g_0061bb8c;
extern "C" unsigned long g_0061bc34;
extern "C" unsigned long g_0061bdae;
extern "C" unsigned long g_0061bdb0;
extern "C" unsigned long g_0061bdd0;
extern "C" unsigned long g_0061be64;
extern "C" unsigned long g_0061bf30;
extern "C" unsigned long g_0061bf46;
extern "C" unsigned long g_0061bfe0;
extern "C" unsigned long g_0061bfe4;
extern "C" unsigned long g_0061bfe8;
extern "C" unsigned long g_0061bfec;
extern "C" unsigned long g_0061bff0;
extern "C" unsigned long g_0061bff4;
extern "C" unsigned long g_0061bff8;
extern "C" unsigned long g_0061bffc;
extern "C" unsigned long g_0061c000;
cocos2d::extension::CCScale9Sprite* PKCountDownView::getSpriteBg() const
{
  return (cocos2d::extension::CCScale9Sprite*)(*(undefined4 *)(((int)this) + 0x108));
}

cocos2d::CCLabelTTF* PKCountDownView::getLabeDesc() const
{
  return (cocos2d::CCLabelTTF*)(*(undefined4 *)(((int)this) + 0x10c));
}

void PKCountDownView::setLabeDesc(cocos2d::CCLabelTTF* p1)
{
  *(undefined4 *)(((int)this) + 0x10c) = (undefined4)(intptr_t)p1;
  return;
}

cocos2d::CCLabelBMFont* PKCountDownView::getLabeReady() const
{
  return (cocos2d::CCLabelBMFont*)(*(undefined4 *)(((int)this) + 0x110));
}

void PKCountDownView::setLabeReady(cocos2d::CCLabelBMFont* p1)
{
  *(undefined4 *)(((int)this) + 0x110) = (undefined4)(intptr_t)p1;
  return;
}

PKCountDownView::~PKCountDownView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0061b8ec + g_0061b950);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x224;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x254;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x260;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0061b91e + g_0061b954,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}


PKCountDownView::PKCountDownView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(g_0061bb88 + 0x61bb30);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x224;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x254;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x260;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"PKCountDownView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}


void PKCountDownView::onEnter()
{
  ((cocos2d::CCLayer *)this)->onEnter();
  return;
}

// ===== 修复: 补回被误删的函数占位 (5) =====
void PKCountDownView::setSpriteBg(cocos2d::extension::CCScale9Sprite* p1)
{
  *(undefined4 *)(((int)this) + 0x108) = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  return;
}

void PKCountDownView::tick(float p1)
{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  code *pcVar5;
  int *piVar6;
  
  iVar1 = (undefined4)(intptr_t)(func_0079e57c(*(int *)((int)this + 4*(0x45))));
  iVar2 = (undefined4)(intptr_t)(func_0079e7b4(iVar1,0));
  if (iVar2 == 0) {
    *(int *)((int)this + 4*(0x45)) = iVar1;
  }
  else {
    *(int *)((int)this + 4*(0x45)) = 0;
  }
  iVar1 = (undefined4)(intptr_t)(func_0079e59c(p1,*(int *)((int)this + 4*(0x46))));
  *(int *)((int)this + 4*(0x46)) = iVar1;
  iVar2 = (undefined4)(intptr_t)(func_0079e51c(iVar1,0x40000000));
  if (iVar2 == 0) {
    iVar2 = (undefined4)(intptr_t)(func_0079e51c(iVar1,g_0061bac8));
    if (iVar2 == 0) {
      iVar2 = (undefined4)(intptr_t)(func_0079e51c(iVar1,0x40800000));
      if (iVar2 == 0) {
        iVar2 = (undefined4)(intptr_t)(func_0079e51c(iVar1,g_0061bad4));
        if (iVar2 == 0) {
          iVar2 = (undefined4)(intptr_t)(func_0079e51c(iVar1,g_0061badc));
          if (iVar2 != 0) {
            (**(code **)(*(int *)*(int *)((int)this + 4*(0x44)) + 0x1a4))
                      ((int *)*(int *)((int)this + 4*(0x44)),(unsigned char *)((char *)&g_0061ba50 + (intptr_t)(g_0061bae0)));
            *(int *)((int)this + 4*(0x45)) = g_0061bae4;
            goto code_r0x0061ba94;
          }
          iVar1 = (undefined4)(intptr_t)(func_0079e51c(iVar1,g_0061bae8));
          if (iVar1 == 0) goto code_r0x0061ba94;
          (**(code **)(*(int *)*(int *)((int)this + 4*(0x44)) + 0x90))((int *)*(int *)((int)this + 4*(0x44)),0);
          ((BluetoothHelper *)this)->share();
          ((BluetoothHelper *)this)->resumeGame();
          piVar6 = (int *)((BLMission *)this)->currentMission();
          (**(code **)(*(int *)(piVar6) + (0x1fc)))(piVar6,0);
          puVar4 = (undefined *)*(int *)((int)this + 4*(0x48));
          pcVar5 = *(code **)(*(int *)this + 0xf0);
          piVar6 = (int *)((int)this);
        }
        else {
          puVar4 = (unsigned char *)((char *)&g_0061ba34 + (intptr_t)(g_0061bad8));
          pcVar5 = *(code **)(*(int *)*(int *)((int)this + 4*(0x44)) + 0x1a4);
          piVar6 = (int *)*(int *)((int)this + 4*(0x44));
        }
      }
      else {
        puVar4 = (unsigned char *)((char *)&g_0061ba18 + (intptr_t)(g_0061bad0));
        pcVar5 = *(code **)(*(int *)*(int *)((int)this + 4*(0x44)) + 0x1a4);
        piVar6 = (int *)*(int *)((int)this + 4*(0x44));
      }
    }
    else {
      puVar4 = (unsigned char *)((char *)&g_0061b9fa + (intptr_t)(g_0061bacc));
      pcVar5 = *(code **)(*(int *)*(int *)((int)this + 4*(0x44)) + 0x1a4);
      piVar6 = (int *)*(int *)((int)this + 4*(0x44));
    }
  }
  else {
    puVar4 = (unsigned char *)((char *)&g_0061b9de + (intptr_t)(g_0061bac4));
    pcVar5 = *(code **)(*(int *)*(int *)((int)this + 4*(0x44)) + 0x1a4);
    piVar6 = (int *)*(int *)((int)this + 4*(0x44));
  }
  (*pcVar5)(piVar6,puVar4);
code_r0x0061ba94:
  piVar6 = (int *)*(int *)((int)this + 4*(0x43));
  pcVar5 = *(code **)(*piVar6 + 0x234);
  uVar3 = (undefined4)(0 /* ctorZero */);
  cocos2d::CCString::createWithFormat((char const*)(unsigned char *)((char *)&g_0061baac + (intptr_t)(g_0061baec)), uVar3);
  uVar3 = (undefined4)(((cocos2d::CCString *)this)->getCString());
  (*pcVar5)(piVar6,uVar3);
  uVar3 = (undefined4)(((BluetoothHelper *)this)->share());
  ((BluetoothHelper *)(uVar3))->arbitrationOnLineResult(*(int *)((int)this + 4*(0x45)));
  return;
}

void PKCountDownView::startTime(float p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void PKCountDownView::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  ((cocos2d::CCLayer *)this)->onExit();
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x30)))());
  ((cocos2d::CCScheduler *)(0x210))->unscheduleSelector(0 /*memptr*/, (cocos2d::CCObject*)((int)this));
  return;
}

bool PKCountDownView::init()
{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  int *piVar7;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 auStack_30 [2];
  undefined1 auStack_28 [4];
  undefined4 uStack_24;
  undefined4 auStack_20 [3];
  
  iVar1 = (undefined4)(intptr_t)(((cocos2d::CCLayer *)this)->init());
  if (iVar1 != 0) {
    uVar2 = (undefined4)(cocos2d::CCDirector::sharedDirector());
    { cocos2d::CCSize _ws = ((cocos2d::CCDirector *)(uVar2))->getWinSize(); uStack_38 = hw_fbits(_ws.width); uStack_34 = hw_fbits(_ws.height); }
    func_0079e45c(auStack_20,(unsigned char *)((char *)&g_0061bc34 + (intptr_t)(g_0061bfe0)),auStack_28);
    iVar3 = (undefined4)(intptr_t)(0 /* ctorZero */);
    *(int *)((int)this + 4*(0x47)) = iVar3;
    func_0079e2bc(auStack_20);
    piVar7 = (int *)*(int *)((int)this + 4*(0x47));
    pcVar6 = *(code **)(*piVar7 + 0x88);
    0 /* ctorZero */;
    uVar2 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar4 = (undefined4)(func_0079e4dc(uVar2,uVar4));
    0 /* ctorZero */;
    uVar2 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar2 = (undefined4)(func_0079e4dc(uVar2,uVar5));
    0 /* ctorZero */;
    (*pcVar6)(piVar7,auStack_20);
    piVar7 = (int *)*(int *)((int)this + 4*(0x47));
    pcVar6 = *(code **)(*piVar7 + 0x4c);
    0 /* ctorZero */;
    uVar2 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar4 = (undefined4)(func_0079e4dc(uVar2,uVar4));
    0 /* ctorZero */;
    uVar2 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar2 = (undefined4)(func_0079e4dc(uVar2,uVar5));
    0 /* ctorZero */;
    (*pcVar6)(piVar7,auStack_20);
    piVar7 = (int *)cocos2d::extension::CCControlButton::create();
    *(int *)((int)this + 4*(0x48)) = (int)piVar7;
    (**(code **)(*(int *)(piVar7) + (0x294)))(piVar7,0);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x48)) + 0x30c))((int *)*(int *)((int)this + 4*(0x48)),*(int *)((int)this + 4*(0x47)),1);
    piVar7 = (int *)*(int *)((int)this + 4*(0x48));
    pcVar6 = *(code **)(*piVar7 + 0x28c);
    0 /* ctorZero */;
    uVar2 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar4 = (undefined4)(func_0079e4dc(uVar2,uVar4));
    0 /* ctorZero */;
    uVar2 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar2 = (undefined4)(func_0079e4dc(uVar2,uVar5));
    0 /* ctorZero */;
    (*pcVar6)(piVar7,auStack_20);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x48)) + 0x40))((int *)*(int *)((int)this + 4*(0x48)),0x3f800000);
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x48)),1);
    iVar3 = (undefined4)(intptr_t)(cocos2d::CCLabelTTF::create((char const*)(unsigned char *)((char *)&g_0061bdae + (intptr_t)(g_0061bfe4)), (char const*)(unsigned char *)((char *)&g_0061bdb0 + (intptr_t)(g_0061bfe8)), 0x41800000));
    *(int *)((int)this + 4*(0x43)) = iVar3;
    ((cocos2d::CCLabelTTF *)(iVar3))->setHorizontalAlignment((cocos2d::CCTextAlignment)1);
    ((cocos2d::CCLabelTTF *)(*(int *)((int)this + 4*(0x43))))->setVerticalAlignment((cocos2d::CCVerticalTextAlignment)1);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x43)) + 0x1b4))((int *)*(int *)((int)this + 4*(0x43)),(unsigned char *)((char *)&g_0061bdd0 + (intptr_t)(g_0061bfec)))
    ;
    piVar7 = (int *)*(int *)((int)this + 4*(0x43));
    pcVar6 = *(code **)(*piVar7 + 0x4c);
    uVar2 = (undefined4)(func_0079e4fc(uStack_34,0x3f000000));
    uVar2 = (undefined4)(func_0079e57c(uVar2,g_0061bff0));
    0 /* ctorZero */;
    uVar2 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar4 = (undefined4)(func_0079e4dc(uVar2,uVar4));
    uVar2 = (undefined4)(func_0079e4fc(uStack_34,0x3f000000));
    uVar2 = (undefined4)(func_0079e57c(uVar2,g_0061bff0));
    0 /* ctorZero */;
    uVar2 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar2 = (undefined4)(func_0079e4dc(uVar2,uVar5));
    0 /* ctorZero */;
    (*pcVar6)(piVar7,auStack_20);
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x43)),2);
    func_0079e45c(auStack_20,(unsigned char *)((char *)&g_0061be64 + (intptr_t)(g_0061bff4)),auStack_28);
    iVar3 = (undefined4)(intptr_t)(0 /* ctorZero */);
    *(int *)((int)this + 4*(0x42)) = iVar3;
    func_0079e2bc(auStack_20);
    piVar7 = (int *)*(int *)((int)this + 4*(0x42));
    pcVar6 = *(code **)(*piVar7 + 0x1d4);
    0 /* ctorZero */;
    (*pcVar6)(piVar7,auStack_20);
    piVar7 = (int *)*(int *)((int)this + 4*(0x42));
    pcVar6 = *(code **)(*piVar7 + 0x4c);
    uVar2 = (undefined4)(func_0079e4fc(uStack_34,0x3f000000));
    uVar2 = (undefined4)(func_0079e57c(uVar2,g_0061bff0));
    0 /* ctorZero */;
    uVar2 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar4 = (undefined4)(func_0079e4dc(uVar2,uVar4));
    uVar2 = (undefined4)(func_0079e4fc(uStack_34,0x3f000000));
    uVar2 = (undefined4)(func_0079e57c(uVar2,g_0061bff0));
    0 /* ctorZero */;
    uVar2 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar2 = (undefined4)(func_0079e4dc(uVar2,uVar5));
    0 /* ctorZero */;
    (*pcVar6)(piVar7,auStack_20);
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x42)),1);
    uVar2 = (undefined4)(((BLLanguage *)this)->share());
    func_0079e45c(auStack_28,(unsigned char *)((char *)&g_0061bf30 + (intptr_t)(g_0061bffc)),auStack_30);
    (((BLLanguage *)this))->getString(*(std::string *)auStack_20);
    iVar3 = (undefined4)(intptr_t)(cocos2d::CCLabelBMFont::create((char const*)auStack_20[0], (char const*)(unsigned char *)((char *)&g_0061bf46 + (intptr_t)(g_0061c000))));
    *(int *)((int)this + 4*(0x44)) = iVar3;
    func_0079e2bc(auStack_20);
    func_0079e2bc(auStack_28);
    piVar7 = (int *)*(int *)((int)this + 4*(0x44));
    pcVar6 = *(code **)(*piVar7 + 0x4c);
    0 /* ctorZero */;
    cocos2d::CCDirector::sharedDirector();
    uVar2 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar2 = (undefined4)(func_0079e4dc(auStack_30[0],uVar2));
    0 /* ctorZero */;
    cocos2d::CCDirector::sharedDirector();
    uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar4 = (undefined4)(func_0079e4dc(uStack_24,uVar4));
    0 /* ctorZero */;
    (*pcVar6)(piVar7,auStack_20);
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x44)),3);
  }
  return iVar1;
}
