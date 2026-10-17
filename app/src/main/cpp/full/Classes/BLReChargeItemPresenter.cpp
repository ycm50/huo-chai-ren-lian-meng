#include "BLReChargeItemPresenter.h"
#include "BLGameScene.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLReChargeItemView.h"
#include "DataCacheManager.h"
#include "DataManager.h"
#include "DebugLocalSys.h"
#include "PlatformHelp.h"
#include "Toast.h"
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
extern "C" long long func_00442068(...);
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e43c(...);
extern "C" long long func_0079e44c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e46c(...);
extern "C" long long func_0079e47c(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e60c(...);
extern "C" long long func_0079e62c(...);
extern "C" long long func_0079e724(...);
extern "C" long long func_0079e734(...);
extern "C" long long func_0079e874(...);
extern "C" long long func_0079ea24(...);
extern "C" long long func_0079ea34(...);
extern "C" long long func_0079ea44(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_00643928;
extern "C" unsigned long UNK_00643940;
extern "C" unsigned long UNK_00643958;
extern "C" unsigned long UNK_006439cc;
extern "C" unsigned long UNK_006439f4;
extern "C" unsigned long UNK_00643a38;
extern "C" unsigned long UNK_00643a60;
extern "C" unsigned long UNK_00643a76;
extern "C" unsigned long UNK_00643aa8;
extern "C" unsigned long UNK_00643b78;
extern "C" unsigned long UNK_00643b8c;
extern "C" unsigned long UNK_00643b9c;
extern "C" unsigned long UNK_00643bc6;
extern "C" unsigned long UNK_00643c5c;
extern "C" unsigned long UNK_00643c6c;
extern "C" unsigned long UNK_00643c92;
extern "C" unsigned long UNK_00643d20;
extern "C" unsigned long UNK_00643d22;
extern "C" unsigned long UNK_00643d74;
extern "C" unsigned long UNK_00643d82;
extern "C" unsigned long UNK_00643dae;
extern "C" unsigned long UNK_00643dba;
extern "C" unsigned long UNK_00643ee4;
extern "C" unsigned long UNK_00644114;
extern "C" unsigned long UNK_00644126;
extern "C" unsigned long UNK_0064414c;
extern "C" unsigned long UNK_0064415e;
extern "C" unsigned long UNK_00644170;
extern "C" unsigned long UNK_006441cc;
extern "C" unsigned long UNK_0064425e;
extern "C" unsigned long UNK_006442f0;
extern "C" unsigned long UNK_00644318;
extern "C" unsigned long UNK_006443e0;
extern "C" unsigned long UNK_00644418;
extern "C" unsigned long UNK_00644434;
extern "C" unsigned long UNK_006445a8;
extern "C" unsigned long UNK_006445ba;
extern "C" unsigned long UNK_006445e0;
extern "C" unsigned long UNK_006445f2;
extern "C" unsigned long UNK_00644604;
extern "C" unsigned long UNK_006446b4;
extern "C" unsigned long UNK_006447b8;
extern "C" unsigned long _UNK_0064392c;
extern "C" unsigned long _UNK_00643944;
extern "C" unsigned long _UNK_0064395c;
extern "C" unsigned long _UNK_00643a24;
extern "C" unsigned long _UNK_00643a28;
extern "C" unsigned long _UNK_00643a3c;
extern "C" unsigned long _UNK_00643a64;
extern "C" unsigned long _UNK_00643ad4;
extern "C" unsigned long _UNK_00643ad8;
extern "C" unsigned long _UNK_00643b50;
extern "C" unsigned long _UNK_00643c24;
extern "C" unsigned long _UNK_00643c28;
extern "C" unsigned long _UNK_00643c2c;
extern "C" unsigned long _UNK_00643c30;
extern "C" unsigned long _UNK_00643cf4;
extern "C" unsigned long _UNK_00643cf8;
extern "C" unsigned long _UNK_00643cfc;
extern "C" unsigned long _UNK_00644038;
extern "C" unsigned long _UNK_0064403c;
extern "C" unsigned long _UNK_00644040;
extern "C" unsigned long _UNK_00644044;
extern "C" unsigned long _UNK_00644048;
extern "C" unsigned long _UNK_0064404c;
extern "C" unsigned long _UNK_00644050;
extern "C" unsigned long _UNK_00644054;
extern "C" unsigned long _UNK_00644488;
extern "C" unsigned long _UNK_0064448c;
extern "C" unsigned long _UNK_00644490;
extern "C" unsigned long _UNK_00644494;
extern "C" unsigned long _UNK_00644498;
extern "C" unsigned long _UNK_0064449c;
extern "C" unsigned long _UNK_006444a0;
extern "C" unsigned long _UNK_006444a4;
extern "C" unsigned long _UNK_006444a8;
extern "C" unsigned long _UNK_006444ac;
extern "C" unsigned long _UNK_006444b0;
extern "C" unsigned long _UNK_006444b4;
extern "C" unsigned long _UNK_006444b8;
extern "C" unsigned long _UNK_006444bc;
extern "C" unsigned long _UNK_00644844;
extern "C" unsigned long _UNK_00644848;
extern "C" unsigned long _UNK_0064484c;
extern "C" unsigned long _UNK_00644850;
extern "C" unsigned long _UNK_00644854;
extern "C" unsigned long _UNK_00644858;
extern "C" unsigned long _UNK_0064485c;
extern "C" unsigned long _UNK_00644860;
extern "C" unsigned long g_00643928;
extern "C" unsigned long g_0064392c;
extern "C" unsigned long g_00643940;
extern "C" unsigned long g_00643944;
extern "C" unsigned long g_00643958;
extern "C" unsigned long g_0064395c;
extern "C" unsigned long g_006439cc;
extern "C" unsigned long g_006439f4;
extern "C" unsigned long g_00643a24;
extern "C" unsigned long g_00643a28;
extern "C" unsigned long g_00643a38;
extern "C" unsigned long g_00643a3c;
extern "C" unsigned long g_00643a60;
extern "C" unsigned long g_00643a64;
extern "C" unsigned long g_00643a76;
extern "C" unsigned long g_00643aa8;
extern "C" unsigned long g_00643ad4;
extern "C" unsigned long g_00643ad8;
extern "C" unsigned long g_00643b50;
extern "C" unsigned long g_00643b78;
extern "C" unsigned long g_00643b8c;
extern "C" unsigned long g_00643b9c;
extern "C" unsigned long g_00643bc6;
extern "C" unsigned long g_00643c24;
extern "C" unsigned long g_00643c28;
extern "C" unsigned long g_00643c2c;
extern "C" unsigned long g_00643c30;
extern "C" unsigned long g_00643c5c;
extern "C" unsigned long g_00643c6c;
extern "C" unsigned long g_00643c92;
extern "C" unsigned long g_00643cf4;
extern "C" unsigned long g_00643cf8;
extern "C" unsigned long g_00643cfc;
extern "C" unsigned long g_00643d20;
extern "C" unsigned long g_00643d22;
extern "C" unsigned long g_00643d74;
extern "C" unsigned long g_00643d82;
extern "C" unsigned long g_00643dae;
extern "C" unsigned long g_00643dba;
extern "C" unsigned long g_00643ee4;
extern "C" unsigned long g_00644038;
extern "C" unsigned long g_0064403c;
extern "C" unsigned long g_00644040;
extern "C" unsigned long g_00644044;
extern "C" unsigned long g_00644048;
extern "C" unsigned long g_0064404c;
extern "C" unsigned long g_00644050;
extern "C" unsigned long g_00644054;
extern "C" unsigned long g_00644114;
extern "C" unsigned long g_00644126;
extern "C" unsigned long g_0064414c;
extern "C" unsigned long g_0064415e;
extern "C" unsigned long g_00644170;
extern "C" unsigned long g_006441cc;
extern "C" unsigned long g_0064425e;
extern "C" unsigned long g_006442f0;
extern "C" unsigned long g_00644318;
extern "C" unsigned long g_006443e0;
extern "C" unsigned long g_00644418;
extern "C" unsigned long g_00644434;
extern "C" unsigned long g_00644488;
extern "C" unsigned long g_0064448c;
extern "C" unsigned long g_00644490;
extern "C" unsigned long g_00644494;
extern "C" unsigned long g_00644498;
extern "C" unsigned long g_0064449c;
extern "C" unsigned long g_006444a0;
extern "C" unsigned long g_006444a4;
extern "C" unsigned long g_006444a8;
extern "C" unsigned long g_006444ac;
extern "C" unsigned long g_006444b0;
extern "C" unsigned long g_006444b4;
extern "C" unsigned long g_006444b8;
extern "C" unsigned long g_006444bc;
extern "C" unsigned long g_006445a8;
extern "C" unsigned long g_006445ba;
extern "C" unsigned long g_006445e0;
extern "C" unsigned long g_006445f2;
extern "C" unsigned long g_00644604;
extern "C" unsigned long g_006446b4;
extern "C" unsigned long g_006447b8;
extern "C" unsigned long g_00644844;
extern "C" unsigned long g_00644848;
extern "C" unsigned long g_0064484c;
extern "C" unsigned long g_00644850;
extern "C" unsigned long g_00644854;
extern "C" unsigned long g_00644858;
extern "C" unsigned long g_0064485c;
extern "C" unsigned long g_00644860;
bool BLReChargeItemPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLReChargeItemPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLReChargeItemPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLReChargeItemPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLReChargeItemPresenter::tick(float p1)
{
  return;
}

BLReChargeItemPresenter::~BLReChargeItemPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_006439cc + g_00643a24);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x3c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  if (*(int *)((int)this + 4*(7)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(7)) = 0;
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_006439f4 + g_00643a28,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLReChargeItemPresenter::BLReChargeItemPresenter()
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
  iVar3 = *(int *)(&g_00643a76 + g_00643ad4);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x3c;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 0);
  *(int *)((int)this + 4*(7)) = 0;
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00643aa8 + g_00643ad8,&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

undefined4 BLReChargeItemPresenter::create(BLReChargeItemView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x20))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

// ===== 修复: 补回被误删的函数占位 (7) =====
void BLReChargeItemPresenter::onExit()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLReChargeItemPresenter::onEnter()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLReChargeItemPresenter::initWithView(BLReChargeItemView* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLReChargeItemPresenter::onBuy(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLReChargeItemPresenter::onBuyComplete(cocos2d::CCObject* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLReChargeItemPresenter::initWithData(ReChargeItemData* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLReChargeItemPresenter::addVirtualItem()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
