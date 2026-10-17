#include "BLMissionItemPresenter.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLMissionData.h"
#include "BLMissionItemView.h"
#include "BLMissionRewardData.h"
#include "BLPageControl.h"
#include "BluetoothHelper.h"
#include "DataManager.h"
#include "MissionSelectHeroData.h"
#include "MissionSweepData.h"
#include "Toast.h"
#include "UIManager.h"
#include "UserData.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <new>   // ghost_fix.js 自动补齐
using namespace cocos2d;
// 兜底声明
extern "C" long long func_005b5f32(...);
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2dc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e34c(...);
extern "C" long long func_0079e43c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e46c(...);
extern "C" long long func_0079e47c(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long func_0079e5dc(...);
extern "C" long long func_0079e60c(...);
extern "C" long long func_0079e64c(...);
extern "C" long long func_0079e6c0(...);
extern "C" long long func_0079e734(...);
extern "C" long long func_0079e854(...);
extern "C" long long func_0079e904(...);
extern "C" long long func_0079e914(...);
extern "C" long long func_0079e964(...);
extern "C" long long func_0079ea14(...);
extern "C" long long ghidra_CONCAT13(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_005b5128;
extern "C" unsigned long UNK_005b518c;
extern "C" unsigned long UNK_005b51aa;
extern "C" unsigned long UNK_005b520c;
extern "C" unsigned long UNK_005b5234;
extern "C" unsigned long UNK_005b525c;
extern "C" unsigned long UNK_005b5270;
extern "C" unsigned long UNK_005b527a;
extern "C" unsigned long UNK_005b5290;
extern "C" unsigned long UNK_005b5356;
extern "C" unsigned long UNK_005b5376;
extern "C" unsigned long UNK_005b5646;
extern "C" unsigned long UNK_005b5672;
extern "C" unsigned long UNK_005b5928;
extern "C" unsigned long UNK_005b594a;
extern "C" unsigned long UNK_005b597c;
extern "C" unsigned long UNK_005b5a2a;
extern "C" unsigned long UNK_005b5a46;
extern "C" unsigned long UNK_005b5d1a;
extern "C" unsigned long UNK_005b5dd8;
extern "C" unsigned long UNK_005b5e24;
extern "C" unsigned long UNK_005b5e26;
extern "C" unsigned long UNK_005b5eae;
extern "C" unsigned long UNK_005b5eb2;
extern "C" unsigned long UNK_005b5eb6;
extern "C" unsigned long UNK_005b5eba;
extern "C" unsigned long UNK_005b5ebe;
extern "C" unsigned long UNK_005b5ece;
extern "C" unsigned long UNK_005b5f78;
extern "C" unsigned long UNK_005b6082;
extern "C" unsigned long UNK_005b6086;
extern "C" unsigned long UNK_005b608a;
extern "C" unsigned long UNK_005b608e;
extern "C" unsigned long UNK_005b6092;
extern "C" unsigned long UNK_005b6096;
extern "C" unsigned long UNK_005b609a;
extern "C" unsigned long UNK_005b609e;
extern "C" unsigned long UNK_005b60a2;
extern "C" unsigned long UNK_005b60a6;
extern "C" unsigned long UNK_005b60c6;
extern "C" unsigned long UNK_005b620a;
extern "C" unsigned long UNK_005b630a;
extern "C" unsigned long UNK_005b63a2;
extern "C" unsigned long UNK_005b63a6;
extern "C" unsigned long UNK_005b63aa;
extern "C" unsigned long UNK_005b63ae;
extern "C" unsigned long UNK_005b63b2;
extern "C" unsigned long UNK_005b63b6;
extern "C" unsigned long UNK_005b63ba;
extern "C" unsigned long UNK_005b63be;
extern "C" unsigned long UNK_005b63c2;
extern "C" unsigned long UNK_005b63c6;
extern "C" unsigned long _UNK_005b512c;
extern "C" unsigned long _UNK_005b51f8;
extern "C" unsigned long _UNK_005b51fc;
extern "C" unsigned long _UNK_005b5210;
extern "C" unsigned long _UNK_005b5238;
extern "C" unsigned long _UNK_005b52e0;
extern "C" unsigned long _UNK_005b52e4;
extern "C" unsigned long _UNK_005b52e8;
extern "C" unsigned long _UNK_005b52ec;
extern "C" unsigned long _UNK_005b53d0;
extern "C" unsigned long _UNK_005b53d4;
extern "C" unsigned long _UNK_005b5660;
extern "C" unsigned long _UNK_005b59c0;
extern "C" unsigned long _UNK_005b59c4;
extern "C" unsigned long _UNK_005b59c8;
extern "C" unsigned long _UNK_005b59cc;
extern "C" unsigned long _UNK_005b59d0;
extern "C" unsigned long _UNK_005b59d4;
extern "C" unsigned long _UNK_005b5d54;
extern "C" unsigned long _UNK_005b5d58;
extern "C" unsigned long _UNK_005b5d6c;
extern "C" unsigned long _UNK_005b5d70;
extern "C" unsigned long _UNK_005b5d74;
extern "C" unsigned long _UNK_005b5f4c;
extern "C" unsigned long _UNK_005b5f50;
extern "C" unsigned long _UNK_005b5f54;
extern "C" unsigned long _UNK_005b5f58;
extern "C" unsigned long _UNK_005b5f5c;
extern "C" unsigned long _UNK_005b5f60;
extern "C" unsigned long _UNK_005b5f64;
extern "C" unsigned long _UNK_005b5f68;
extern "C" unsigned long _UNK_005b618c;
extern "C" unsigned long _UNK_005b6190;
extern "C" unsigned long _UNK_005b6194;
extern "C" unsigned long _UNK_005b6448;
extern "C" unsigned long _UNK_005b644c;
extern "C" unsigned long _UNK_005b6450;
extern "C" unsigned long extraout_r1;
extern "C" unsigned long extraout_r1_00;
extern "C" unsigned long extraout_r1_01;
extern "C" unsigned long g_005b5128;
extern "C" unsigned long g_005b512c;
extern "C" unsigned long g_005b518c;
extern "C" unsigned long g_005b51aa;
extern "C" unsigned long g_005b51f8;
extern "C" unsigned long g_005b51fc;
extern "C" unsigned long g_005b520c;
extern "C" unsigned long g_005b5210;
extern "C" unsigned long g_005b5234;
extern "C" unsigned long g_005b5238;
extern "C" unsigned long g_005b525c;
extern "C" unsigned long g_005b5270;
extern "C" unsigned long g_005b527a;
extern "C" unsigned long g_005b5290;
extern "C" unsigned long g_005b52e0;
extern "C" unsigned long g_005b52e4;
extern "C" unsigned long g_005b52e8;
extern "C" unsigned long g_005b52ec;
extern "C" unsigned long g_005b5356;
extern "C" unsigned long g_005b5376;
extern "C" unsigned long g_005b53d0;
extern "C" unsigned long g_005b53d4;
extern "C" unsigned long g_005b5646;
extern "C" unsigned long g_005b5660;
extern "C" unsigned long g_005b5672;
extern "C" unsigned long g_005b5928;
extern "C" unsigned long g_005b594a;
extern "C" unsigned long g_005b597c;
extern "C" unsigned long g_005b59c0;
extern "C" unsigned long g_005b59c4;
extern "C" unsigned long g_005b59c8;
extern "C" unsigned long g_005b59cc;
extern "C" unsigned long g_005b59d0;
extern "C" unsigned long g_005b59d4;
extern "C" unsigned long g_005b5a2a;
extern "C" unsigned long g_005b5a46;
extern "C" unsigned long g_005b5d1a;
extern "C" unsigned long g_005b5d54;
extern "C" unsigned long g_005b5d58;
extern "C" unsigned long g_005b5d6c;
extern "C" unsigned long g_005b5d70;
extern "C" unsigned long g_005b5d74;
extern "C" unsigned long g_005b5dd8;
extern "C" unsigned long g_005b5e24;
extern "C" unsigned long g_005b5e26;
extern "C" unsigned long g_005b5eae;
extern "C" unsigned long g_005b5eb2;
extern "C" unsigned long g_005b5eb6;
extern "C" unsigned long g_005b5eba;
extern "C" unsigned long g_005b5ebe;
extern "C" unsigned long g_005b5ece;
extern "C" unsigned long g_005b5f4c;
extern "C" unsigned long g_005b5f50;
extern "C" unsigned long g_005b5f54;
extern "C" unsigned long g_005b5f58;
extern "C" unsigned long g_005b5f5c;
extern "C" unsigned long g_005b5f60;
extern "C" unsigned long g_005b5f64;
extern "C" unsigned long g_005b5f68;
extern "C" unsigned long g_005b5f78;
extern "C" unsigned long g_005b6082;
extern "C" unsigned long g_005b6086;
extern "C" unsigned long g_005b608a;
extern "C" unsigned long g_005b608e;
extern "C" unsigned long g_005b6092;
extern "C" unsigned long g_005b6096;
extern "C" unsigned long g_005b609a;
extern "C" unsigned long g_005b609e;
extern "C" unsigned long g_005b60a2;
extern "C" unsigned long g_005b60a6;
extern "C" unsigned long g_005b60c6;
extern "C" unsigned long g_005b618c;
extern "C" unsigned long g_005b6190;
extern "C" unsigned long g_005b6194;
extern "C" unsigned long g_005b620a;
extern "C" unsigned long g_005b630a;
extern "C" unsigned long g_005b63a2;
extern "C" unsigned long g_005b63a6;
extern "C" unsigned long g_005b63aa;
extern "C" unsigned long g_005b63ae;
extern "C" unsigned long g_005b63b2;
extern "C" unsigned long g_005b63b6;
extern "C" unsigned long g_005b63ba;
extern "C" unsigned long g_005b63be;
extern "C" unsigned long g_005b63c2;
extern "C" unsigned long g_005b63c6;
extern "C" unsigned long g_005b6448;
extern "C" unsigned long g_005b644c;
extern "C" unsigned long g_005b6450;
int BLMissionItemPresenter::getIndex() const
{
  return *(undefined4 *)(((int)this) + 0x20);
}

void BLMissionItemPresenter::setIndex(int p1)
{
  *(undefined4 *)(((int)this) + 0x20) = p1;
  return;
}

BLMissionData* BLMissionItemPresenter::getMissionData() const
{
  return (BLMissionData*)(*(undefined4 *)(((int)this) + 0x24));
}

void BLMissionItemPresenter::setMissionData(BLMissionData* p1)
{
  *(undefined4 *)(((int)this) + 0x24) = (undefined4)(intptr_t)p1;
  return;
}

bool BLMissionItemPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLMissionItemPresenter::tick(float p1)
{
  return;
}

void BLMissionItemPresenter::setMissionID(std::string p1)
{
  func_0079e52c(((int)this) + 0x1c);
  return;
}

BLMissionItemPresenter::~BLMissionItemPresenter()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  iVar2 = *(int *)(&g_005b518c + g_005b51f8);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x48;
  piStack_20 = (int *)((int)this);
  uStack_1c = (undefined4)(p2);
  uStack_18 = (undefined4)(p3);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_1c,&g_005b51aa + g_005b51fc,&piStack_20);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_1c);
  func_0079e2bc(&uStack_1c);
  if (*(int *)((int)this + 4*(9)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(9)) = 0;
  }
  func_0079e2bc(((int)this) + 7);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

std::string BLMissionItemPresenter::getMissionID() const
{ return *(std::string *)(((int)this) + 0x1c); }

BLMissionItemPresenter::BLMissionItemPresenter()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;

  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int *piStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  piStack_20 = (int *)((int)this);
  uStack_1c = (undefined4)(p2);
  uStack_18 = (undefined4)(p3);
  0 /* ctorZero */;
  iVar1 = g_005b52e4;
  iVar5 = *(int *)(&g_005b525c + g_005b52e0);
  *(int *)((int)this + 4*(5)) = iVar5 + 0x48;
  iVar2 = g_005b52e8;
  *(int *)this = iVar5 + 8;
  *(int *)((int)this + 4*(7)) = *(int *)(&g_005b5270 + iVar2) + 0xc;
  func_0079e2dc(((int)this) + 7,&g_005b527a + iVar1);
  *(int *)((int)this + 4*(8)) = 0;
  *(int *)((int)this + 4*(9)) = 0;
  uVar3 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_1c,&g_005b5290 + g_005b52ec,&piStack_20);
  ((BLLeakUtils *)uVar3)->addClass((std::string)(char*)uStack_1c);
  func_0079e2bc(&uStack_1c);
  piVar4 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar3 = (undefined4)((**(code **)(*piVar4 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar3)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 0);
  *(undefined1 *)(((int)this) + 10) = 0;
  return;
}

undefined4 BLMissionItemPresenter::create(BLMissionItemView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x2c))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLMissionItemPresenter::onEnter()
{
  return;
}

void BLMissionItemPresenter::onExit()
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


void BLMissionItemPresenter::onIngoreTouch()
{
  *(undefined1 *)(((int)this) + 0x28) = 1;
  return;
}

// ===== 修复: 补回被误删的函数占位 (5) =====
void BLMissionItemPresenter::initWithView(BLMissionItemView* p1)
{
  int *piVar1;
  
  *(undefined4 *)(((int)this) + 0x18) = (undefined4)(intptr_t)p1;
  piVar1 = (int *)((BLMissionItemView *)p1)->getBtnRole();
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)(&g_005b5356 + g_005b53d0),0,0x20);
  piVar1 = (int *)((BLMissionItemView *)*(undefined4 *)(((int)this) + 0x18))->getBtnSweep();
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)(&g_005b5376 + g_005b53d4),0,0x20);
  piVar1 = (int *)((BLMissionItemView *)*(undefined4 *)(((int)this) + 0x18))->getPageControlGrayStars()
  ;
  (**(code **)(*piVar1 + 0x21c))(piVar1,1);
  piVar1 = (int *)((BLMissionItemView *)*(undefined4 *)(((int)this) + 0x18))->getPageControlStars();
  (**(code **)(*piVar1 + 0x21c))(piVar1,1);
  ((BLMissionItemView *)*(undefined4 *)(((int)this) + 0x18))->getPageControlStars();
  ((BLPageControl *)this)->reload();
  piVar1 = (int *)((BLMissionItemView *)*(undefined4 *)(((int)this) + 0x18))->getPageControlGrayStars()
  ;
  (**(code **)(*piVar1 + 0x20c))(piVar1,3);
  ((BLMissionItemView *)*(undefined4 *)(((int)this) + 0x18))->getPageControlGrayStars();
  ((BLPageControl *)this)->reload();
  return;
}

void BLMissionItemPresenter::onSweep(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMissionItemPresenter::initViewInfo()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMissionItemPresenter::onRole(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMissionItemPresenter::initWithID(std::string p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
