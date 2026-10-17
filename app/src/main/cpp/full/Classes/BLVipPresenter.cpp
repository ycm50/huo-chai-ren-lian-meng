#include "BLVipPresenter.h"
#include "BLGameScene.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLPoPSalePresenter.h"
#include "BLPoPSaleView.h"
#include "BLResultManager.h"
#include "BLVipView.h"
#include "BackPackData.h"
#include "CCJson.h"
#include "CampaignData.h"
#include "DataCacheManager.h"
#include "DataManager.h"
#include "DebugLocalSys.h"
#include "ItemData.h"
#include "LivenessUserData.h"
#include "MissionSweepData.h"
#include "PetUserData.h"
#include "PlatformHelp.h"
#include "RichTextData.h"
#include "StringJsonManager.h"
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
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2dc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e34c(...);
extern "C" long long func_0079e41c(...);
extern "C" long long func_0079e42c(...);
extern "C" long long func_0079e43c(...);
extern "C" long long func_0079e44c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e46c(...);
extern "C" long long func_0079e47c(...);
extern "C" long long func_0079e4bc(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e54c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e5dc(...);
extern "C" long long func_0079e5ec(...);
extern "C" long long func_0079e734(...);
extern "C" long long func_0079e854(...);
extern "C" long long func_0079e954(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0054b7bc;
extern "C" unsigned long UNK_0054b7d4;
extern "C" unsigned long UNK_0054b7ec;
extern "C" unsigned long UNK_0054b804;
extern "C" unsigned long UNK_0054b860;
extern "C" unsigned long UNK_0054b87a;
extern "C" unsigned long UNK_0054b8c0;
extern "C" unsigned long UNK_0054b8e8;
extern "C" unsigned long UNK_0054b926;
extern "C" unsigned long UNK_0054b954;
extern "C" unsigned long UNK_0054b9e0;
extern "C" unsigned long UNK_0054b9e2;
extern "C" unsigned long UNK_0054ba1e;
extern "C" unsigned long UNK_0054bb12;
extern "C" unsigned long UNK_0054bb13;
extern "C" unsigned long UNK_0054bb14;
extern "C" unsigned long UNK_0054bb3a;
extern "C" unsigned long UNK_0054bb6c;
extern "C" unsigned long UNK_0054bc1e;
extern "C" unsigned long UNK_0054bd0c;
extern "C" unsigned long UNK_0054bdfe;
extern "C" unsigned long UNK_0054be1e;
extern "C" unsigned long UNK_0054be7a;
extern "C" unsigned long UNK_0054beb4;
extern "C" unsigned long UNK_0054bee4;
extern "C" unsigned long UNK_0054bf28;
extern "C" unsigned long UNK_0054bf5a;
extern "C" unsigned long UNK_0054bffa;
extern "C" unsigned long UNK_0054c036;
extern "C" unsigned long UNK_0054c078;
extern "C" unsigned long UNK_0054c126;
extern "C" unsigned long UNK_0054c130;
extern "C" unsigned long UNK_0054c16e;
extern "C" unsigned long UNK_0054c184;
extern "C" unsigned long UNK_0054c1dc;
extern "C" unsigned long UNK_0054c286;
extern "C" unsigned long UNK_0054c290;
extern "C" unsigned long UNK_0054c2a0;
extern "C" unsigned long UNK_0054c2ec;
extern "C" unsigned long UNK_0054c2fc;
extern "C" unsigned long UNK_0054c336;
extern "C" unsigned long UNK_0054c398;
extern "C" unsigned long UNK_0054c40a;
extern "C" unsigned long UNK_0054c430;
extern "C" unsigned long UNK_0054c49a;
extern "C" unsigned long UNK_0054c4c8;
extern "C" unsigned long UNK_0054c502;
extern "C" unsigned long UNK_0054c548;
extern "C" unsigned long UNK_0054c574;
extern "C" unsigned long UNK_0054c698;
extern "C" unsigned long UNK_0054c6c8;
extern "C" unsigned long UNK_0054c6fc;
extern "C" unsigned long UNK_0054c758;
extern "C" unsigned long UNK_0054c7a4;
extern "C" unsigned long UNK_0054c7d0;
extern "C" unsigned long UNK_0054c80a;
extern "C" unsigned long UNK_0054c8ac;
extern "C" unsigned long UNK_0054cb64;
extern "C" unsigned long UNK_0054cbc8;
extern "C" unsigned long UNK_0054cc5e;
extern "C" unsigned long UNK_0054cc90;
extern "C" unsigned long UNK_0054ccc4;
extern "C" unsigned long UNK_0054cdf0;
extern "C" unsigned long UNK_0054ce1e;
extern "C" unsigned long UNK_0054ce34;
extern "C" unsigned long _UNK_0054b7c0;
extern "C" unsigned long _UNK_0054b7d8;
extern "C" unsigned long _UNK_0054b7f0;
extern "C" unsigned long _UNK_0054b808;
extern "C" unsigned long _UNK_0054b8ac;
extern "C" unsigned long _UNK_0054b8b0;
extern "C" unsigned long _UNK_0054b8c4;
extern "C" unsigned long _UNK_0054b8ec;
extern "C" unsigned long _UNK_0054b980;
extern "C" unsigned long _UNK_0054b984;
extern "C" unsigned long _UNK_0054b9ec;
extern "C" unsigned long _UNK_0054b9f0;
extern "C" unsigned long _UNK_0054bd98;
extern "C" unsigned long _UNK_0054bd9c;
extern "C" unsigned long _UNK_0054bda0;
extern "C" unsigned long _UNK_0054bda4;
extern "C" unsigned long _UNK_0054bda8;
extern "C" unsigned long _UNK_0054bdac;
extern "C" unsigned long _UNK_0054c0d0;
extern "C" unsigned long _UNK_0054c0d4;
extern "C" unsigned long _UNK_0054c0d8;
extern "C" unsigned long _UNK_0054c0dc;
extern "C" unsigned long _UNK_0054c0e0;
extern "C" unsigned long _UNK_0054c0e4;
extern "C" unsigned long _UNK_0054c0e8;
extern "C" unsigned long _UNK_0054c0ec;
extern "C" unsigned long _UNK_0054c0f0;
extern "C" unsigned long _UNK_0054c0f4;
extern "C" unsigned long _UNK_0054c0f8;
extern "C" unsigned long _UNK_0054c0fc;
extern "C" unsigned long _UNK_0054c25c;
extern "C" unsigned long _UNK_0054c260;
extern "C" unsigned long _UNK_0054c264;
extern "C" unsigned long _UNK_0054c268;
extern "C" unsigned long _UNK_0054c26c;
extern "C" unsigned long _UNK_0054c3c8;
extern "C" unsigned long _UNK_0054c3cc;
extern "C" unsigned long _UNK_0054c3d0;
extern "C" unsigned long _UNK_0054c3d4;
extern "C" unsigned long _UNK_0054c3d8;
extern "C" unsigned long _UNK_0054c3dc;
extern "C" unsigned long _UNK_0054c3e0;
extern "C" unsigned long _UNK_0054c3e4;
extern "C" unsigned long _UNK_0054c3e8;
extern "C" unsigned long _UNK_0054c3ec;
extern "C" unsigned long _UNK_0054c3f0;
extern "C" unsigned long _UNK_0054c3f4;
extern "C" unsigned long _UNK_0054c3f8;
extern "C" unsigned long _UNK_0054c650;
extern "C" unsigned long _UNK_0054c654;
extern "C" unsigned long _UNK_0054c658;
extern "C" unsigned long _UNK_0054c65c;
extern "C" unsigned long _UNK_0054c660;
extern "C" unsigned long _UNK_0054c664;
extern "C" unsigned long _UNK_0054c668;
extern "C" unsigned long _UNK_0054c66c;
extern "C" unsigned long _UNK_0054c670;
extern "C" unsigned long _UNK_0054c674;
extern "C" unsigned long _UNK_0054c678;
extern "C" unsigned long _UNK_0054c67c;
extern "C" unsigned long _UNK_0054c958;
extern "C" unsigned long _UNK_0054c95c;
extern "C" unsigned long _UNK_0054c960;
extern "C" unsigned long _UNK_0054c964;
extern "C" unsigned long _UNK_0054c968;
extern "C" unsigned long _UNK_0054c96c;
extern "C" unsigned long _UNK_0054c970;
extern "C" unsigned long _UNK_0054c974;
extern "C" unsigned long _UNK_0054c978;
extern "C" unsigned long _UNK_0054c97c;
extern "C" unsigned long _UNK_0054c980;
extern "C" unsigned long _UNK_0054c984;
extern "C" unsigned long _UNK_0054c988;
extern "C" unsigned long _UNK_0054c98c;
extern "C" unsigned long _UNK_0054c990;
extern "C" unsigned long _UNK_0054c994;
extern "C" unsigned long _UNK_0054c998;
extern "C" unsigned long _UNK_0054cc28;
extern "C" unsigned long _UNK_0054cc2c;
extern "C" unsigned long _UNK_0054cc34;
extern "C" unsigned long _UNK_0054cc38;
extern "C" unsigned long _UNK_0054cc3c;
extern "C" unsigned long _UNK_0054cc40;
extern "C" unsigned long _UNK_0054cc44;
extern "C" unsigned long _UNK_0054ce60;
extern "C" unsigned long _UNK_0054ce64;
extern "C" unsigned long _UNK_0054ce68;
extern "C" unsigned long _UNK_0054ce6c;
extern "C" unsigned long _UNK_0054ce70;
extern "C" unsigned long _UNK_0054ce74;
extern "C" unsigned long _UNK_0054ce78;
extern "C" unsigned long _UNK_0054ce7c;
extern "C" unsigned long _UNK_0054ce80;
extern "C" unsigned long _UNK_0054ce84;
extern "C" unsigned long _UNK_0054ce88;
extern "C" unsigned long _UNK_0054ce8c;
extern "C" unsigned long g_0054b7bc;
extern "C" unsigned long g_0054b7c0;
extern "C" unsigned long g_0054b7d4;
extern "C" unsigned long g_0054b7d8;
extern "C" unsigned long g_0054b7ec;
extern "C" unsigned long g_0054b7f0;
extern "C" unsigned long g_0054b804;
extern "C" unsigned long g_0054b808;
extern "C" unsigned long g_0054b860;
extern "C" unsigned long g_0054b87a;
extern "C" unsigned long g_0054b8ac;
extern "C" unsigned long g_0054b8b0;
extern "C" unsigned long g_0054b8c0;
extern "C" unsigned long g_0054b8c4;
extern "C" unsigned long g_0054b8e8;
extern "C" unsigned long g_0054b8ec;
extern "C" unsigned long g_0054b926;
extern "C" unsigned long g_0054b954;
extern "C" unsigned long g_0054b980;
extern "C" unsigned long g_0054b984;
extern "C" unsigned long g_0054b9e0;
extern "C" unsigned long g_0054b9e2;
extern "C" unsigned long g_0054b9ec;
extern "C" unsigned long g_0054b9f0;
extern "C" unsigned long g_0054ba1e;
extern "C" unsigned long g_0054bb12;
extern "C" unsigned long g_0054bb13;
extern "C" unsigned long g_0054bb14;
extern "C" unsigned long g_0054bb3a;
extern "C" unsigned long g_0054bb6c;
extern "C" unsigned long g_0054bc1e;
extern "C" unsigned long g_0054bd0c;
extern "C" unsigned long g_0054bd98;
extern "C" unsigned long g_0054bd9c;
extern "C" unsigned long g_0054bda0;
extern "C" unsigned long g_0054bda4;
extern "C" unsigned long g_0054bda8;
extern "C" unsigned long g_0054bdac;
extern "C" unsigned long g_0054bdfe;
extern "C" unsigned long g_0054be1e;
extern "C" unsigned long g_0054be7a;
extern "C" unsigned long g_0054beb4;
extern "C" unsigned long g_0054bee4;
extern "C" unsigned long g_0054bf28;
extern "C" unsigned long g_0054bf5a;
extern "C" unsigned long g_0054bffa;
extern "C" unsigned long g_0054c036;
extern "C" unsigned long g_0054c078;
extern "C" unsigned long g_0054c0d0;
extern "C" unsigned long g_0054c0d4;
extern "C" unsigned long g_0054c0d8;
extern "C" unsigned long g_0054c0dc;
extern "C" unsigned long g_0054c0e0;
extern "C" unsigned long g_0054c0e4;
extern "C" unsigned long g_0054c0e8;
extern "C" unsigned long g_0054c0ec;
extern "C" unsigned long g_0054c0f0;
extern "C" unsigned long g_0054c0f4;
extern "C" unsigned long g_0054c0f8;
extern "C" unsigned long g_0054c0fc;
extern "C" unsigned long g_0054c126;
extern "C" unsigned long g_0054c130;
extern "C" unsigned long g_0054c16e;
extern "C" unsigned long g_0054c184;
extern "C" unsigned long g_0054c1dc;
extern "C" unsigned long g_0054c25c;
extern "C" unsigned long g_0054c260;
extern "C" unsigned long g_0054c264;
extern "C" unsigned long g_0054c268;
extern "C" unsigned long g_0054c26c;
extern "C" unsigned long g_0054c286;
extern "C" unsigned long g_0054c290;
extern "C" unsigned long g_0054c2a0;
extern "C" unsigned long g_0054c2ec;
extern "C" unsigned long g_0054c2fc;
extern "C" unsigned long g_0054c336;
extern "C" unsigned long g_0054c398;
extern "C" unsigned long g_0054c3c8;
extern "C" unsigned long g_0054c3cc;
extern "C" unsigned long g_0054c3d0;
extern "C" unsigned long g_0054c3d4;
extern "C" unsigned long g_0054c3d8;
extern "C" unsigned long g_0054c3dc;
extern "C" unsigned long g_0054c3e0;
extern "C" unsigned long g_0054c3e4;
extern "C" unsigned long g_0054c3e8;
extern "C" unsigned long g_0054c3ec;
extern "C" unsigned long g_0054c3f0;
extern "C" unsigned long g_0054c3f4;
extern "C" unsigned long g_0054c3f8;
extern "C" unsigned long g_0054c40a;
extern "C" unsigned long g_0054c430;
extern "C" unsigned long g_0054c49a;
extern "C" unsigned long g_0054c4c8;
extern "C" unsigned long g_0054c502;
extern "C" unsigned long g_0054c548;
extern "C" unsigned long g_0054c574;
extern "C" unsigned long g_0054c650;
extern "C" unsigned long g_0054c654;
extern "C" unsigned long g_0054c658;
extern "C" unsigned long g_0054c65c;
extern "C" unsigned long g_0054c660;
extern "C" unsigned long g_0054c664;
extern "C" unsigned long g_0054c668;
extern "C" unsigned long g_0054c66c;
extern "C" unsigned long g_0054c670;
extern "C" unsigned long g_0054c674;
extern "C" unsigned long g_0054c678;
extern "C" unsigned long g_0054c67c;
extern "C" unsigned long g_0054c698;
extern "C" unsigned long g_0054c6c8;
extern "C" unsigned long g_0054c6fc;
extern "C" unsigned long g_0054c758;
extern "C" unsigned long g_0054c7a4;
extern "C" unsigned long g_0054c7d0;
extern "C" unsigned long g_0054c80a;
extern "C" unsigned long g_0054c8ac;
extern "C" unsigned long g_0054c958;
extern "C" unsigned long g_0054c95c;
extern "C" unsigned long g_0054c960;
extern "C" unsigned long g_0054c964;
extern "C" unsigned long g_0054c968;
extern "C" unsigned long g_0054c96c;
extern "C" unsigned long g_0054c970;
extern "C" unsigned long g_0054c974;
extern "C" unsigned long g_0054c978;
extern "C" unsigned long g_0054c97c;
extern "C" unsigned long g_0054c980;
extern "C" unsigned long g_0054c984;
extern "C" unsigned long g_0054c988;
extern "C" unsigned long g_0054c98c;
extern "C" unsigned long g_0054c990;
extern "C" unsigned long g_0054c994;
extern "C" unsigned long g_0054c998;
extern "C" unsigned long g_0054cb64;
extern "C" unsigned long g_0054cbc8;
extern "C" unsigned long g_0054cc28;
extern "C" unsigned long g_0054cc2c;
extern "C" unsigned long g_0054cc34;
extern "C" unsigned long g_0054cc38;
extern "C" unsigned long g_0054cc3c;
extern "C" unsigned long g_0054cc40;
extern "C" unsigned long g_0054cc44;
extern "C" unsigned long g_0054cc5e;
extern "C" unsigned long g_0054cc90;
extern "C" unsigned long g_0054ccc4;
extern "C" unsigned long g_0054cdf0;
extern "C" unsigned long g_0054ce1e;
extern "C" unsigned long g_0054ce34;
extern "C" unsigned long g_0054ce60;
extern "C" unsigned long g_0054ce64;
extern "C" unsigned long g_0054ce68;
extern "C" unsigned long g_0054ce6c;
extern "C" unsigned long g_0054ce70;
extern "C" unsigned long g_0054ce74;
extern "C" unsigned long g_0054ce78;
extern "C" unsigned long g_0054ce7c;
extern "C" unsigned long g_0054ce80;
extern "C" unsigned long g_0054ce84;
extern "C" unsigned long g_0054ce88;
extern "C" unsigned long g_0054ce8c;
bool BLVipPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLVipPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLVipPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLVipPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLVipPresenter::tick(float p1)
{
  return;
}

BLVipPresenter::~BLVipPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0054b860 + g_0054b8ac);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x3c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0054b87a + g_0054b8b0,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLVipPresenter::onClose(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(0x82);
  piVar2 = (int *)((BLGameScene *)this)->shareGameScene();
  iVar3 = (**(code **)(*piVar2 + 0x208))();
  if (iVar3 != 1) {
    ((BLResultManager *)this)->shareManager();
    ((BLResultManager *)this)->returnMainCity();
  }
  return;
}

BLVipPresenter::BLVipPresenter()
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
  iVar3 = *(int *)(&g_0054b926 + g_0054b980);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x3c;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 1);
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0054b954 + g_0054b984,&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

undefined4 BLVipPresenter::create(BLVipView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x1c))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLVipPresenter::onExit()
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

// ===== 修复: 补回被误删的函数占位 (8) =====
void BLVipPresenter::onEnter()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLVipPresenter::addItem(std::vector<int, std::allocator<int>> * p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

undefined4 BLVipPresenter::initWithView(BLVipView* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void BLVipPresenter::requestGetReward()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLVipPresenter::onGet(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLVipPresenter::onChargeComplete(cocos2d::CCObject* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLVipPresenter::onRequestGetRewardComplete(cocos2d::CCObject* p1, cocos2d::extension::CCHttpResponse* p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLVipPresenter::onGetComplete(cocos2d::CCObject* p1, cocos2d::extension::CCHttpResponse* p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
