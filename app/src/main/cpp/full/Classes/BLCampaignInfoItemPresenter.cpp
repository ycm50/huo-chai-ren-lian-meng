#include "BLCampaignInfoItemPresenter.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "CampaignInfo.h"
#include "CCObject.h"
#include "CCTouch.h"
#include "CCDirector.h"
#include "BLCampaignInfoItemView.h"
#include "BLCampaignItemRewardPresenter.h"
#include "BLCampaignItemRewardView.h"
#include "BLFileUtils.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "CampaignChildInfo.h"
#include "CampaignData.h"
#include "PairingDownPng.h"
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
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long func_0079e50c(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long func_0079e5dc(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_004fef14;
extern "C" unsigned long UNK_004fef2e;
extern "C" unsigned long UNK_004fef74;
extern "C" unsigned long UNK_004fef9c;
extern "C" unsigned long UNK_004fefb2;
extern "C" unsigned long UNK_004fefe0;
extern "C" unsigned long UNK_004ff074;
extern "C" unsigned long UNK_004ff146;
extern "C" unsigned long UNK_004ff158;
extern "C" unsigned long UNK_004ff476;
extern "C" unsigned long UNK_004ff52c;
extern "C" unsigned long UNK_004ff782;
extern "C" unsigned long UNK_004ff80a;
extern "C" unsigned long UNK_004ff8b0;
extern "C" unsigned long UNK_004ff99e;
extern "C" unsigned long _UNK_004fef60;
extern "C" unsigned long _UNK_004fef64;
extern "C" unsigned long _UNK_004fef78;
extern "C" unsigned long _UNK_004fefa0;
extern "C" unsigned long _UNK_004ff00c;
extern "C" unsigned long _UNK_004ff010;
extern "C" unsigned long _UNK_004ff07c;
extern "C" unsigned long _UNK_004ff18c;
extern "C" unsigned long _UNK_004ff190;
extern "C" unsigned long _UNK_004ff764;
extern "C" unsigned long _UNK_004ff768;
extern "C" unsigned long _UNK_004ff76c;
extern "C" unsigned long _UNK_004ff770;
extern "C" unsigned long _UNK_004ff774;
extern "C" unsigned long _UNK_004ff778;
extern "C" unsigned long _UNK_004ff9ac;
extern "C" unsigned long _UNK_004ff9b0;
extern "C" unsigned long _UNK_004ff9b4;
extern "C" unsigned long _UNK_004ff9b8;
extern "C" unsigned long g_004fef14;
extern "C" unsigned long g_004fef2e;
extern "C" unsigned long g_004fef60;
extern "C" unsigned long g_004fef64;
extern "C" unsigned long g_004fef74;
extern "C" unsigned long g_004fef78;
extern "C" unsigned long g_004fef9c;
extern "C" unsigned long g_004fefa0;
extern "C" unsigned long g_004fefb2;
extern "C" unsigned long g_004fefe0;
extern "C" unsigned long g_004ff00c;
extern "C" unsigned long g_004ff010;
extern "C" unsigned long g_004ff074;
extern "C" unsigned long g_004ff07c;
extern "C" unsigned long g_004ff146;
extern "C" unsigned long g_004ff158;
extern "C" unsigned long g_004ff18c;
extern "C" unsigned long g_004ff190;
extern "C" unsigned long g_004ff476;
extern "C" unsigned long g_004ff52c;
extern "C" unsigned long g_004ff764;
extern "C" unsigned long g_004ff768;
extern "C" unsigned long g_004ff76c;
extern "C" unsigned long g_004ff770;
extern "C" unsigned long g_004ff774;
extern "C" unsigned long g_004ff778;
extern "C" unsigned long g_004ff782;
extern "C" unsigned long g_004ff80a;
extern "C" unsigned long g_004ff8b0;
extern "C" unsigned long g_004ff99e;
extern "C" unsigned long g_004ff9ac;
extern "C" unsigned long g_004ff9b0;
extern "C" unsigned long g_004ff9b4;
extern "C" unsigned long g_004ff9b8;
bool BLCampaignInfoItemPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLCampaignInfoItemPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLCampaignInfoItemPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLCampaignInfoItemPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

BLCampaignInfoItemPresenter::~BLCampaignInfoItemPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_004fef14 + g_004fef60);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x38;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_004fef2e + g_004fef64,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLCampaignInfoItemPresenter::BLCampaignInfoItemPresenter()
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
  iVar3 = *(int *)(&g_004fefb2 + g_004ff00c);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x38;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 0);
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_004fefe0 + g_004ff010,&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

void BLCampaignInfoItemPresenter::onEnter()
{
  return;
}

void BLCampaignInfoItemPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  return;
}

undefined4 BLCampaignInfoItemPresenter::create()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x28))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}


void BLCampaignInfoItemPresenter::updateInfo(CampaignChildInfo& p1)
{
  return;
}

// ===== 修复: 补回被误删的函数占位 (4) =====
void BLCampaignInfoItemPresenter::initWithView(BLCampaignInfoItemView* p1)
{
  int *piVar1;
  
  *(undefined4 *)(((int)this) + 0x18) = (undefined4)(intptr_t)p1;
  piVar1 = (int *)((BLCampaignInfoItemView *)p1)->getBtnGet();
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)(&g_004ff074 + g_004ff07c),0,0x20);
  return;
}

void BLCampaignInfoItemPresenter::setCampaignId(int p1, int p2, int p3)
{
  *(undefined4 *)(((int)this) + 0x1c) = p1;
  *(undefined4 *)(((int)this) + 0x20) = p2;
  *(undefined4 *)(((int)this) + 0x24) = p3;
  return;
}

void BLCampaignInfoItemPresenter::onGetReward(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLCampaignInfoItemPresenter::initWithData(CampaignInfo& p1, CampaignChildInfo& p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
