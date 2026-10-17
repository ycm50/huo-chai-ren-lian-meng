#include "CarSetView.h"
#include "CCLayer.h"
#include "CCObject.h"
#include "CCScrollView.h"
#include "CCLabelTTF.h"
#include "CCControlButton.h"
#include "BLLeakUtils.h"
#include "CarSetPresenter.h"
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
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e57c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_006c45a4;
extern "C" unsigned long UNK_006c45e8;
extern "C" unsigned long UNK_006c462c;
extern "C" unsigned long UNK_006c4654;
extern "C" unsigned long UNK_006c47aa;
extern "C" unsigned long UNK_006c4886;
extern "C" unsigned long UNK_006c4960;
extern "C" unsigned long UNK_006c4a12;
extern "C" unsigned long UNK_006c4a14;
extern "C" unsigned long UNK_006c4ad8;
extern "C" unsigned long UNK_006c4c0a;
extern "C" unsigned long UNK_006c4cea;
extern "C" unsigned long UNK_006c4dc0;
extern "C" unsigned long UNK_006c4e7c;
extern "C" unsigned long UNK_006c4f48;
extern "C" unsigned long UNK_006c5060;
extern "C" unsigned long UNK_006c512a;
extern "C" unsigned long UNK_006c5210;
extern "C" unsigned long UNK_006c5214;
extern "C" unsigned long UNK_006c52d6;
extern "C" unsigned long UNK_006c5396;
extern "C" unsigned long UNK_006c5494;
extern "C" unsigned long UNK_006c55c6;
extern "C" unsigned long _DAT_006c4730;
extern "C" unsigned long _DAT_006c4734;
extern "C" unsigned long _UNK_006c4618;
extern "C" unsigned long _UNK_006c461c;
extern "C" unsigned long _UNK_006c4630;
extern "C" unsigned long _UNK_006c4658;
extern "C" unsigned long _UNK_006c4b8c;
extern "C" unsigned long _UNK_006c4b90;
extern "C" unsigned long _UNK_006c4b94;
extern "C" unsigned long _UNK_006c4b98;
extern "C" unsigned long _UNK_006c4b9c;
extern "C" unsigned long _UNK_006c4ba0;
extern "C" unsigned long _UNK_006c4ba4;
extern "C" unsigned long _UNK_006c4ba8;
extern "C" unsigned long _UNK_006c4bac;
extern "C" unsigned long _UNK_006c4bb0;
extern "C" unsigned long _UNK_006c4bb4;
extern "C" unsigned long _UNK_006c4bb8;
extern "C" unsigned long _UNK_006c4bbc;
extern "C" unsigned long _UNK_006c4bc0;
extern "C" unsigned long _UNK_006c4bc4;
extern "C" unsigned long _UNK_006c4ff4;
extern "C" unsigned long _UNK_006c4ff8;
extern "C" unsigned long _UNK_006c4ffc;
extern "C" unsigned long _UNK_006c5000;
extern "C" unsigned long _UNK_006c5004;
extern "C" unsigned long _UNK_006c5008;
extern "C" unsigned long _UNK_006c500c;
extern "C" unsigned long _UNK_006c5010;
extern "C" unsigned long _UNK_006c5014;
extern "C" unsigned long _UNK_006c5018;
extern "C" unsigned long _UNK_006c501c;
extern "C" unsigned long _UNK_006c5020;
extern "C" unsigned long _UNK_006c5024;
extern "C" unsigned long _UNK_006c5028;
extern "C" unsigned long _UNK_006c502c;
extern "C" unsigned long _UNK_006c5030;
extern "C" unsigned long _UNK_006c5034;
extern "C" unsigned long _UNK_006c5038;
extern "C" unsigned long _UNK_006c5444;
extern "C" unsigned long _UNK_006c5448;
extern "C" unsigned long _UNK_006c544c;
extern "C" unsigned long _UNK_006c5450;
extern "C" unsigned long _UNK_006c5454;
extern "C" unsigned long _UNK_006c5458;
extern "C" unsigned long _UNK_006c545c;
extern "C" unsigned long _UNK_006c5460;
extern "C" unsigned long _UNK_006c5464;
extern "C" unsigned long _UNK_006c5468;
extern "C" unsigned long _UNK_006c546c;
extern "C" unsigned long _UNK_006c5470;
extern "C" unsigned long _UNK_006c5474;
extern "C" unsigned long _UNK_006c5478;
extern "C" unsigned long _UNK_006c547c;
extern "C" unsigned long _UNK_006c5480;
extern "C" unsigned long _UNK_006c5874;
extern "C" unsigned long _UNK_006c5878;
extern "C" unsigned long _UNK_006c587c;
extern "C" unsigned long _UNK_006c5880;
extern "C" unsigned long _UNK_006c5884;
extern "C" unsigned long _UNK_006c5888;
extern "C" unsigned long _UNK_006c588c;
extern "C" unsigned long _UNK_006c5890;
extern "C" unsigned long _UNK_006c5894;
extern "C" unsigned long _UNK_006c5898;
extern "C" unsigned long g_006c45a4;
extern "C" unsigned long g_006c45e8;
extern "C" unsigned long g_006c4618;
extern "C" unsigned long g_006c461c;
extern "C" unsigned long g_006c462c;
extern "C" unsigned long g_006c4630;
extern "C" unsigned long g_006c4654;
extern "C" unsigned long g_006c4658;
extern "C" unsigned long g_006c4730;
extern "C" unsigned long g_006c4734;
extern "C" unsigned long g_006c47aa;
extern "C" unsigned long g_006c4886;
extern "C" unsigned long g_006c4960;
extern "C" unsigned long g_006c4a12;
extern "C" unsigned long g_006c4a14;
extern "C" unsigned long g_006c4ad8;
extern "C" unsigned long g_006c4b8c;
extern "C" unsigned long g_006c4b90;
extern "C" unsigned long g_006c4b94;
extern "C" unsigned long g_006c4b98;
extern "C" unsigned long g_006c4b9c;
extern "C" unsigned long g_006c4ba0;
extern "C" unsigned long g_006c4ba4;
extern "C" unsigned long g_006c4ba8;
extern "C" unsigned long g_006c4bac;
extern "C" unsigned long g_006c4bb0;
extern "C" unsigned long g_006c4bb4;
extern "C" unsigned long g_006c4bb8;
extern "C" unsigned long g_006c4bbc;
extern "C" unsigned long g_006c4bc0;
extern "C" unsigned long g_006c4bc4;
extern "C" unsigned long g_006c4c0a;
extern "C" unsigned long g_006c4cea;
extern "C" unsigned long g_006c4dc0;
extern "C" unsigned long g_006c4e7c;
extern "C" unsigned long g_006c4f48;
extern "C" unsigned long g_006c4ff4;
extern "C" unsigned long g_006c4ff8;
extern "C" unsigned long g_006c4ffc;
extern "C" unsigned long g_006c5000;
extern "C" unsigned long g_006c5004;
extern "C" unsigned long g_006c5008;
extern "C" unsigned long g_006c500c;
extern "C" unsigned long g_006c5010;
extern "C" unsigned long g_006c5014;
extern "C" unsigned long g_006c5018;
extern "C" unsigned long g_006c501c;
extern "C" unsigned long g_006c5020;
extern "C" unsigned long g_006c5024;
extern "C" unsigned long g_006c5028;
extern "C" unsigned long g_006c502c;
extern "C" unsigned long g_006c5030;
extern "C" unsigned long g_006c5034;
extern "C" unsigned long g_006c5038;
extern "C" unsigned long g_006c5060;
extern "C" unsigned long g_006c512a;
extern "C" unsigned long g_006c5210;
extern "C" unsigned long g_006c5214;
extern "C" unsigned long g_006c52d6;
extern "C" unsigned long g_006c5396;
extern "C" unsigned long g_006c5444;
extern "C" unsigned long g_006c5448;
extern "C" unsigned long g_006c544c;
extern "C" unsigned long g_006c5450;
extern "C" unsigned long g_006c5454;
extern "C" unsigned long g_006c5458;
extern "C" unsigned long g_006c545c;
extern "C" unsigned long g_006c5460;
extern "C" unsigned long g_006c5464;
extern "C" unsigned long g_006c5468;
extern "C" unsigned long g_006c546c;
extern "C" unsigned long g_006c5470;
extern "C" unsigned long g_006c5474;
extern "C" unsigned long g_006c5478;
extern "C" unsigned long g_006c547c;
extern "C" unsigned long g_006c5480;
extern "C" unsigned long g_006c5494;
extern "C" unsigned long g_006c55c6;
extern "C" unsigned long g_006c5874;
extern "C" unsigned long g_006c5878;
extern "C" unsigned long g_006c587c;
extern "C" unsigned long g_006c5880;
extern "C" unsigned long g_006c5884;
extern "C" unsigned long g_006c5888;
extern "C" unsigned long g_006c588c;
extern "C" unsigned long g_006c5890;
extern "C" unsigned long g_006c5894;
extern "C" unsigned long g_006c5898;
CarSetPresenter* CarSetView::getPresenter() const
{
  return (CarSetPresenter*)(*(undefined4 *)(((int)this) + 0x108));
}

void CarSetView::setPresenter(CarSetPresenter* p1)
{
  *(undefined4 *)(((int)this) + 0x108) = (undefined4)(intptr_t)p1;
  return;
}

cocos2d::extension::CCControlButton* CarSetView::getClose() const
{
  return (cocos2d::extension::CCControlButton*)(*(undefined4 *)(((int)this) + 0x10c));
}

void CarSetView::setClose(cocos2d::extension::CCControlButton* p1)
{
  *(undefined4 *)(((int)this) + 0x10c) = (undefined4)(intptr_t)p1;
  return;
}

cocos2d::CCLabelTTF* CarSetView::getName() const
{
  return (cocos2d::CCLabelTTF*)(*(undefined4 *)(((int)this) + 0x110));
}

void CarSetView::setName(cocos2d::CCLabelTTF* p1)
{
  *(undefined4 *)(((int)this) + 0x110) = (undefined4)(intptr_t)p1;
  return;
}

cocos2d::CCLabelTTF* CarSetView::getInfo() const
{
  return (cocos2d::CCLabelTTF*)(*(undefined4 *)(((int)this) + 0x114));
}

void CarSetView::setInfo(cocos2d::CCLabelTTF* p1)
{
  *(undefined4 *)(((int)this) + 0x114) = (undefined4)(intptr_t)p1;
  return;
}

cocos2d::CCLabelTTF* CarSetView::getInfo2() const
{
  return (cocos2d::CCLabelTTF*)(*(undefined4 *)(((int)this) + 0x118));
}

void CarSetView::setInfo2(cocos2d::CCLabelTTF* p1)
{
  *(undefined4 *)(((int)this) + 0x118) = (undefined4)(intptr_t)p1;
  return;
}

cocos2d::extension::CCScrollView* CarSetView::getCar() const
{
  return (cocos2d::extension::CCScrollView*)(*(undefined4 *)(((int)this) + 0x11c));
}

void CarSetView::setCar(cocos2d::extension::CCScrollView* p1)
{
  *(undefined4 *)(((int)this) + 0x11c) = (undefined4)(intptr_t)p1;
  return;
}

cocos2d::extension::CCScrollView* CarSetView::getAttack() const
{
  return (cocos2d::extension::CCScrollView*)(*(undefined4 *)(((int)this) + 0x120));
}

void CarSetView::setAttack(cocos2d::extension::CCScrollView* p1)
{
  *(undefined4 *)(((int)this) + 0x120) = (undefined4)(intptr_t)p1;
  return;
}

cocos2d::extension::CCScrollView* CarSetView::getDefense() const
{
  return (cocos2d::extension::CCScrollView*)(*(undefined4 *)(((int)this) + 0x124));
}

void CarSetView::setDefense(cocos2d::extension::CCScrollView* p1)
{
  *(undefined4 *)(((int)this) + 0x124) = (undefined4)(intptr_t)p1;
  return;
}

undefined4 CarSetView::getlife() const
{
  return *(undefined4 *)(((int)this) + 0x128);
}

void CarSetView::setlife(cocos2d::extension::CCScrollView* p1)
{
  *(undefined4 *)(((int)this) + 0x128) = (undefined4)(intptr_t)p1;
  return;
}

cocos2d::extension::CCScrollView* CarSetView::getSpeed() const
{
  return (cocos2d::extension::CCScrollView*)(*(undefined4 *)(((int)this) + 300));
}

void CarSetView::setSpeed(cocos2d::extension::CCScrollView* p1)
{
  *(undefined4 *)(((int)this) + 300) = (undefined4)(intptr_t)p1;
  return;
}

cocos2d::extension::CCControlButton* CarSetView::getBtn_jiantouz() const
{
  return (cocos2d::extension::CCControlButton*)(*(undefined4 *)(((int)this) + 0x130));
}

cocos2d::extension::CCControlButton* CarSetView::getBtn_jiantouy() const
{
  return (cocos2d::extension::CCControlButton*)(*(undefined4 *)(((int)this) + 0x134));
}

CarSetView::~CarSetView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_006c45a4 + g_006c4618);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x268;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x298;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x2a4;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  if (*(int *)((int)this + 4*(0x42)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x42)) = 0;
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_006c45e8 + g_006c461c,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

CarSetView::CarSetView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(g_006c4730 + 0x6c46d8);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x268;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x298;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x2a4;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLMainPauseView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * CarSetView::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x138)));
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


void CarSetView::onEnter()
{
  ((CarSetPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void CarSetView::onExit()
{
  ((CarSetPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (3) =====
void CarSetView::setBtn_jiantouz(cocos2d::extension::CCControlButton* p1)
{
  *(undefined4 *)(((int)this) + 0x130) = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  return;
}

void CarSetView::setBtn_jiantouy(cocos2d::extension::CCControlButton* p1)
{
  *(undefined4 *)(((int)this) + 0x134) = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  return;
}

bool CarSetView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
