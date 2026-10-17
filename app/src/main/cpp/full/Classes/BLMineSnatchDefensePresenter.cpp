#include "BLMineSnatchDefensePresenter.h"
#include "MineDealData.h"
#include "CCNotificationCenter.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "BLMineSnatchDefenseView.h"
#include "CCObject.h"
#include "CCTouch.h"
#include "CCString.h"
#include "CCDirector.h"
#include "BLForwards.h"
#include "ArenaPlayerData.h"
#include "BLGameScene.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLPageControl.h"
#include "DataCacheManager.h"
#include "DataManager.h"
#include "MineData.h"
#include "MineitemData.h"
#include "RoleData.h"
#include "RoleInfoData.h"
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
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e30c(...);
extern "C" long long func_0079e34c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4ac(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e6c0(...);
extern "C" long long func_0079e774(...);
extern "C" long long func_0079e784(...);
extern "C" long long func_0079e904(...);
extern "C" long long func_0079e914(...);
extern "C" long long func_0079e964(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_005a5c50;
extern "C" unsigned long UNK_005a5c6a;
extern "C" unsigned long UNK_005a5cb0;
extern "C" unsigned long UNK_005a5cd8;
extern "C" unsigned long UNK_005a5cfe;
extern "C" unsigned long UNK_005a5d34;
extern "C" unsigned long UNK_005a5d8e;
extern "C" unsigned long UNK_005a5d9c;
extern "C" unsigned long UNK_005a5ddc;
extern "C" unsigned long UNK_005a5ed6;
extern "C" unsigned long UNK_005a5f80;
extern "C" unsigned long UNK_005a5fa0;
extern "C" unsigned long UNK_005a5ff4;
extern "C" unsigned long UNK_005a603c;
extern "C" unsigned long UNK_005a60a0;
extern "C" unsigned long UNK_005a60aa;
extern "C" unsigned long UNK_005a615e;
extern "C" unsigned long UNK_005a617e;
extern "C" unsigned long UNK_005a61d2;
extern "C" unsigned long UNK_005a621a;
extern "C" unsigned long UNK_005a627e;
extern "C" unsigned long UNK_005a6288;
extern "C" unsigned long UNK_005a631e;
extern "C" unsigned long UNK_005a633e;
extern "C" unsigned long UNK_005a63ca;
extern "C" unsigned long UNK_005a6402;
extern "C" unsigned long UNK_005a641c;
extern "C" unsigned long UNK_005a6460;
extern "C" unsigned long UNK_005a6490;
extern "C" unsigned long UNK_005a6532;
extern "C" unsigned long UNK_005a65a8;
extern "C" unsigned long UNK_005a65fc;
extern "C" unsigned long UNK_005a66a0;
extern "C" unsigned long UNK_005a66a2;
extern "C" unsigned long UNK_005a66fa;
extern "C" unsigned long UNK_005a6742;
extern "C" unsigned long UNK_005a6772;
extern "C" unsigned long UNK_005a67ec;
extern "C" unsigned long UNK_005a681e;
extern "C" unsigned long UNK_005a6848;
extern "C" unsigned long UNK_005a68ae;
extern "C" unsigned long UNK_005a6910;
extern "C" unsigned long UNK_005a6970;
extern "C" unsigned long UNK_005a69b8;
extern "C" unsigned long UNK_005a6a82;
extern "C" unsigned long _UNK_005a5c9c;
extern "C" unsigned long _UNK_005a5ca0;
extern "C" unsigned long _UNK_005a5cb4;
extern "C" unsigned long _UNK_005a5cdc;
extern "C" unsigned long _UNK_005a5d60;
extern "C" unsigned long _UNK_005a5d64;
extern "C" unsigned long _UNK_005a5da8;
extern "C" unsigned long _UNK_005a5dac;
extern "C" unsigned long _UNK_005a60e0;
extern "C" unsigned long _UNK_005a60e4;
extern "C" unsigned long _UNK_005a60e8;
extern "C" unsigned long _UNK_005a60ec;
extern "C" unsigned long _UNK_005a60f0;
extern "C" unsigned long _UNK_005a60f4;
extern "C" unsigned long _UNK_005a60f8;
extern "C" unsigned long _UNK_005a60fc;
extern "C" unsigned long _UNK_005a6100;
extern "C" unsigned long _UNK_005a6104;
extern "C" unsigned long _UNK_005a62e4;
extern "C" unsigned long _UNK_005a62e8;
extern "C" unsigned long _UNK_005a62ec;
extern "C" unsigned long _UNK_005a62f0;
extern "C" unsigned long _UNK_005a62f4;
extern "C" unsigned long _UNK_005a62f8;
extern "C" unsigned long _UNK_005a62fc;
extern "C" unsigned long _UNK_005a6300;
extern "C" unsigned long _UNK_005a64d4;
extern "C" unsigned long _UNK_005a64d8;
extern "C" unsigned long _UNK_005a64dc;
extern "C" unsigned long _UNK_005a64e0;
extern "C" unsigned long _UNK_005a64e4;
extern "C" unsigned long _UNK_005a64e8;
extern "C" unsigned long _UNK_005a64ec;
extern "C" unsigned long _UNK_005a686c;
extern "C" unsigned long _UNK_005a6870;
extern "C" unsigned long _UNK_005a6874;
extern "C" unsigned long _UNK_005a6878;
extern "C" unsigned long _UNK_005a687c;
extern "C" unsigned long _UNK_005a6880;
extern "C" unsigned long _UNK_005a6884;
extern "C" unsigned long _UNK_005a6888;
extern "C" unsigned long _UNK_005a688c;
extern "C" unsigned long _UNK_005a6890;
extern "C" unsigned long _UNK_005a6894;
extern "C" unsigned long _UNK_005a6ac8;
extern "C" unsigned long _UNK_005a6acc;
extern "C" unsigned long _UNK_005a6ad0;
extern "C" unsigned long _UNK_005a6ad4;
extern "C" unsigned long _UNK_005a6ad8;
extern "C" unsigned long extraout_r1;
extern "C" unsigned long extraout_r2;
extern "C" unsigned long extraout_r3;
extern "C" unsigned long extraout_r3_00;
extern "C" unsigned long extraout_r3_01;
extern "C" unsigned long g_005a5c50;
extern "C" unsigned long g_005a5c6a;
extern "C" unsigned long g_005a5c9c;
extern "C" unsigned long g_005a5ca0;
extern "C" unsigned long g_005a5cb0;
extern "C" unsigned long g_005a5cb4;
extern "C" unsigned long g_005a5cd8;
extern "C" unsigned long g_005a5cdc;
extern "C" unsigned long g_005a5cfe;
extern "C" unsigned long g_005a5d34;
extern "C" unsigned long g_005a5d60;
extern "C" unsigned long g_005a5d64;
extern "C" unsigned long g_005a5d8e;
extern "C" unsigned long g_005a5d9c;
extern "C" unsigned long g_005a5da8;
extern "C" unsigned long g_005a5dac;
extern "C" unsigned long g_005a5ddc;
extern "C" unsigned long g_005a5ed6;
extern "C" unsigned long g_005a5f80;
extern "C" unsigned long g_005a5fa0;
extern "C" unsigned long g_005a5ff4;
extern "C" unsigned long g_005a603c;
extern "C" unsigned long g_005a60a0;
extern "C" unsigned long g_005a60aa;
extern "C" unsigned long g_005a60e0;
extern "C" unsigned long g_005a60e4;
extern "C" unsigned long g_005a60e8;
extern "C" unsigned long g_005a60ec;
extern "C" unsigned long g_005a60f0;
extern "C" unsigned long g_005a60f4;
extern "C" unsigned long g_005a60f8;
extern "C" unsigned long g_005a60fc;
extern "C" unsigned long g_005a6100;
extern "C" unsigned long g_005a6104;
extern "C" unsigned long g_005a615e;
extern "C" unsigned long g_005a617e;
extern "C" unsigned long g_005a61d2;
extern "C" unsigned long g_005a621a;
extern "C" unsigned long g_005a627e;
extern "C" unsigned long g_005a6288;
extern "C" unsigned long g_005a62e4;
extern "C" unsigned long g_005a62e8;
extern "C" unsigned long g_005a62ec;
extern "C" unsigned long g_005a62f0;
extern "C" unsigned long g_005a62f4;
extern "C" unsigned long g_005a62f8;
extern "C" unsigned long g_005a62fc;
extern "C" unsigned long g_005a6300;
extern "C" unsigned long g_005a631e;
extern "C" unsigned long g_005a633e;
extern "C" unsigned long g_005a63ca;
extern "C" unsigned long g_005a6402;
extern "C" unsigned long g_005a641c;
extern "C" unsigned long g_005a6460;
extern "C" unsigned long g_005a6490;
extern "C" unsigned long g_005a64d4;
extern "C" unsigned long g_005a64d8;
extern "C" unsigned long g_005a64dc;
extern "C" unsigned long g_005a64e0;
extern "C" unsigned long g_005a64e4;
extern "C" unsigned long g_005a64e8;
extern "C" unsigned long g_005a64ec;
extern "C" unsigned long g_005a6532;
extern "C" unsigned long g_005a65a8;
extern "C" unsigned long g_005a65fc;
extern "C" unsigned long g_005a66a0;
extern "C" unsigned long g_005a66a2;
extern "C" unsigned long g_005a66fa;
extern "C" unsigned long g_005a6742;
extern "C" unsigned long g_005a6772;
extern "C" unsigned long g_005a67ec;
extern "C" unsigned long g_005a681e;
extern "C" unsigned long g_005a6848;
extern "C" unsigned long g_005a686c;
extern "C" unsigned long g_005a6870;
extern "C" unsigned long g_005a6874;
extern "C" unsigned long g_005a6878;
extern "C" unsigned long g_005a687c;
extern "C" unsigned long g_005a6880;
extern "C" unsigned long g_005a6884;
extern "C" unsigned long g_005a6888;
extern "C" unsigned long g_005a688c;
extern "C" unsigned long g_005a6890;
extern "C" unsigned long g_005a6894;
extern "C" unsigned long g_005a68ae;
extern "C" unsigned long g_005a6910;
extern "C" unsigned long g_005a6970;
extern "C" unsigned long g_005a69b8;
extern "C" unsigned long g_005a6a82;
extern "C" unsigned long g_005a6ac8;
extern "C" unsigned long g_005a6acc;
extern "C" unsigned long g_005a6ad0;
extern "C" unsigned long g_005a6ad4;
extern "C" unsigned long g_005a6ad8;
bool BLMineSnatchDefensePresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLMineSnatchDefensePresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLMineSnatchDefensePresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLMineSnatchDefensePresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLMineSnatchDefensePresenter::tick(float p1)
{
  return;
}

BLMineSnatchDefensePresenter::~BLMineSnatchDefensePresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_005a5c50 + g_005a5c9c);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x3c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005a5c6a + g_005a5ca0,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLMineSnatchDefensePresenter::onClose(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(0x107);
  return;
}

BLMineSnatchDefensePresenter::BLMineSnatchDefensePresenter()
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
  iVar3 = *(int *)(&g_005a5cfe + g_005a5d60);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x3c;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 1);
  ((UIManager *)this)->shareManager();
  ((UIManager *)this)->pushCurScrollViewUnEnable();
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005a5d34 + g_005a5d64,&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

void BLMineSnatchDefensePresenter::onEnter()
{
  return;
}

void BLMineSnatchDefensePresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar2)->removeObserver((cocos2d::CCObject*)((int)this), (char const*)&g_005a5d8e + g_005a5da8);
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar2)->removeObserver((cocos2d::CCObject*)((int)this), (char const*)&g_005a5d9c + g_005a5dac);
  ((UIManager *)this)->shareManager();
  ((UIManager *)this)->popUnEnableScrollView();
  return;
}

undefined4 BLMineSnatchDefensePresenter::create(BLMineSnatchDefenseView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x1c))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLMineSnatchDefensePresenter::onModify(cocos2d::CCObject* p1, unsigned int p2)
{
  return;
}

// ===== 修复: 补回被误删的函数占位 (3) =====
void BLMineSnatchDefensePresenter::updateRole()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMineSnatchDefensePresenter::initWithView(BLMineSnatchDefenseView* p1)
{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 extraout_r1;
  int extraout_r2;
  code *pcVar4;
  undefined4 *extraout_r3;
  undefined4 *puVar5;
  undefined4 *extraout_r3_00;
  int extraout_r3_01;
  int *piVar6;
  undefined1 auStack_b4 [4];
  undefined1 auStack_b0 [4];
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 auStack_98 [8];
  undefined4 uStack_90;
  undefined4 uStack_88;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 *puStack_40;
  int iStack_3c;
  
  *(int *)(((int)this) + 0x18) = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  uStack_a8 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_005a631e + (intptr_t)(g_005a64d4))));
  uStack_a4 = (undefined4)(0);
  (**(code **)(**(int **)(p1 + 0x10c) + 0x254))
            (*(int **)(p1 + 0x10c),((int)this),uStack_a8,0,0x20);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x18) + 0x14c);
  uStack_a0 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_005a633e + (intptr_t)(g_005a64d8))));
  uStack_9c = (undefined4)(0);
  (**(code **)(*(int *)(piVar1) + (0x254)))(piVar1,((int)this),uStack_a0,0,0x20);
  ((BLMineSnatchDefensePresenter *)(((int)this)))->updateRole();
  iVar2 = (undefined4)(intptr_t)(((sir::singleton<MineDealData, 0> *)this)->instance());
  0 /* ctorZero */;
  piVar6 = *(int **)(*(int *)(((int)this) + 0x18) + 0x110);
  pcVar4 = *(code **)(*piVar6 + 0x20c);
  func_0079e45c(auStack_b4,uStack_88,&uStack_ac);
  piVar1 = (int *)0 /* ctorZero */;
  uVar3 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x214)))());
  (*pcVar4)(piVar6,uVar3);
  func_0079e2bc(auStack_b4);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x18) + 0x114);
  (**(code **)(*(int *)(piVar1) + (0x234)))(piVar1,uStack_90);
  uVar3 = (undefined4)(((DataCacheManager *)this)->shareManager());
  puVar5 = puStack_40;
  if (iStack_3c - (int)puStack_40 >> 3 == 0) {
    uVar3 = (undefined4)(func_0079e784((unsigned char *)((char *)&g_005a63ca + (intptr_t)(g_005a64dc)),0));
    puVar5 = extraout_r3;
  }
  piVar1 = ((void)((DataCacheManager *)(uVar3))->getItemDataByID(*puVar5),(int *)0);
  (**(code **)(*(int *)(piVar1) + (0x20)))(auStack_b0,piVar1);
  piVar6 = *(int **)(*(int *)(((int)this) + 0x18) + 0x118);
  pcVar4 = *(code **)(*piVar6 + 0x234);
  if (iStack_3c - (int)puStack_40 >> 3 == 0) {
    func_0079e784((unsigned char *)((char *)&g_005a6402 + (intptr_t)(g_005a64e0)),0);
    puStack_40 = extraout_r3_00;
  }
  uVar3 = (undefined4)(puStack_40[1]);
  (**(code **)(*(int *)(piVar1) + (0x20)))(&uStack_ac,piVar1);
  cocos2d::CCString::createWithFormat((char const*)(unsigned char *)((char *)&g_005a641c + (intptr_t)(g_005a64e4)), uVar3, uStack_ac);
  uVar3 = (undefined4)(((cocos2d::CCString *)this)->getCString());
  (*pcVar4)(piVar6,uVar3);
  func_0079e2bc(&uStack_ac);
  func_0079e774(uStack_58,uStack_54,0x3c,0);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x18) + 0x11c);
  if (extraout_r3_01 == 0 && extraout_r2 == 0) {
    pcVar4 = *(code **)(*piVar1 + 0x234);
    uVar3 = (undefined4)(func_0079e4ac(uStack_58,0x3c));
    cocos2d::CCString::createWithFormat((char const*)(unsigned char *)((char *)&g_005a6460 + (intptr_t)(g_005a64e8)), uVar3);
    uVar3 = (undefined4)(((cocos2d::CCString *)this)->getCString());
    (*pcVar4)(piVar1,uVar3);
  }
  else {
    pcVar4 = *(code **)(*piVar1 + 0x234);
    uVar3 = (undefined4)(func_0079e4ac(uStack_58,0x3c));
    func_0079e964(uStack_58,0x3c);
    cocos2d::CCString::createWithFormat((char const*)(unsigned char *)((char *)&g_005a6490 + (intptr_t)(g_005a64ec)), uVar3, extraout_r1);
    uVar3 = (undefined4)(((cocos2d::CCString *)this)->getCString());
    (*pcVar4)(piVar1,uVar3);
  }
  func_0079e2bc(auStack_b0);
  ((MineitemData *)(auStack_98))->~MineitemData();
  return;
}

void BLMineSnatchDefensePresenter::onStart(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
