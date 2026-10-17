#include "BLRenascenceSuccessPresenter.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "CCObject.h"
#include "CCTouch.h"
#include "CCString.h"
#include "CCDirector.h"
#include "PlayerData.h"
#include "BLLeakUtils.h"
#include "BLRenascenceSuccessRolePresenter.h"
#include "BLRenascenceSuccessView.h"
#include "DataCacheManager.h"
#include "RenascenceBaseData.h"
#include "RoleRenascenceData.h"
#include "RoleRenascenceItemData.h"
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
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0064d0a0;
extern "C" unsigned long UNK_0064d0ba;
extern "C" unsigned long UNK_0064d100;
extern "C" unsigned long UNK_0064d138;
extern "C" unsigned long UNK_0064d1f2;
extern "C" unsigned long UNK_0064d20a;
extern "C" unsigned long UNK_0064d7c6;
extern "C" unsigned long UNK_0064d7fc;
extern "C" unsigned long _UNK_0064d0ec;
extern "C" unsigned long _UNK_0064d0f0;
extern "C" unsigned long _UNK_0064d104;
extern "C" unsigned long _UNK_0064d13c;
extern "C" unsigned long _UNK_0064d150;
extern "C" unsigned long _UNK_0064d164;
extern "C" unsigned long _UNK_0064d24c;
extern "C" unsigned long _UNK_0064d250;
extern "C" unsigned long _UNK_0064d854;
extern "C" unsigned long _UNK_0064d858;
extern "C" unsigned long g_0064d0a0;
extern "C" unsigned long g_0064d0ba;
extern "C" unsigned long g_0064d0ec;
extern "C" unsigned long g_0064d0f0;
extern "C" unsigned long g_0064d100;
extern "C" unsigned long g_0064d104;
extern "C" unsigned long g_0064d138;
extern "C" unsigned long g_0064d13c;
extern "C" unsigned long g_0064d150;
extern "C" unsigned long g_0064d164;
extern "C" unsigned long g_0064d1f2;
extern "C" unsigned long g_0064d20a;
extern "C" unsigned long g_0064d24c;
extern "C" unsigned long g_0064d250;
extern "C" unsigned long g_0064d7c6;
extern "C" unsigned long g_0064d7fc;
extern "C" unsigned long g_0064d854;
extern "C" unsigned long g_0064d858;
bool BLRenascenceSuccessPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

BLRenascenceSuccessPresenter::~BLRenascenceSuccessPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0064d0a0 + g_0064d0ec);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x2c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0064d0ba + g_0064d0f0,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLRenascenceSuccessPresenter::onClose(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(g_0064d150);
  return;
}

void BLRenascenceSuccessPresenter::onSure(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(g_0064d164);
  return;
}

BLRenascenceSuccessPresenter::BLRenascenceSuccessPresenter()
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
  iVar3 = *(int *)(&g_0064d1f2 + g_0064d24c);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x2c;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0064d20a + g_0064d250,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  piVar2 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar1 = (undefined4)((**(code **)(*piVar2 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar1)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 1);
  return;
}

undefined4 BLRenascenceSuccessPresenter::create()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x1c))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLRenascenceSuccessPresenter::onEnter()
{
  return;
}

void BLRenascenceSuccessPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  return;
}

// ===== 修复: 补回被误删的函数占位 (2) =====

void BLRenascenceSuccessPresenter::updateWithData(PlayerData* p1)
{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  int iVar7;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [8];
  
  piVar1 = (int *)(**(code **)(*(int *)(p1) + (0x18)))(p1);
  uVar2 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x68)))());
  piVar1 = (int *)(**(code **)(*(int *)(p1) + (0x18)))(p1);
  (**(code **)(*(int *)(piVar1) + (0x18)))(auStack_20,piVar1);
  piVar1 = (int *)((DataCacheManager *)this)->shareManager();
  uVar3 = (undefined4)((**(code **)(*(int *)(piVar1) + (0xd0)))());
  uVar3 = (undefined4)(((RenascenceBaseData *)(uVar3))->getTotalRaiseLvBound(uVar2));
  piVar1 = (int *)((DataCacheManager *)this)->shareManager();
  uVar4 = (undefined4)((**(code **)(*(int *)(piVar1) + (0xd8)))());
  func_0079e53c(auStack_1c,auStack_20);
  uVar4 = (undefined4)(((RoleRenascenceData *)(uVar4))->getItemData((std::string)(char*)auStack_1c));
  func_0079e2bc(auStack_1c);
  iVar7 = 1;
  do {
    uVar5 = ((void)(((RoleRenascenceItemData *)(uVar4))->getAttrByType(uVar2, 3 - iVar7)),(undefined4)0);
    uVar5 = (undefined4)(cocos2d::CCString::createWithFormat((char const*)(unsigned char *)((char *)&g_0064d7c6 + (intptr_t)(g_0064d854)), uVar5));
    piVar1 = (int *)((BLRenascenceSuccessView *)(*(undefined4 *)(((int)this) + 0x18)))->getLabValue(iVar7);
    pcVar6 = *(code **)(*piVar1 + 0x234);
    uVar5 = (undefined4)(((cocos2d::CCString *)(uVar5))->getCString());
    (*pcVar6)(piVar1,uVar5);
    iVar7 = (undefined4)(intptr_t)(iVar7 + 1);
  } while (iVar7 != 4);
  cocos2d::CCString::createWithFormat((char const*)(unsigned char *)((char *)&g_0064d7fc + (intptr_t)(g_0064d858)), uVar3);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x18) + 0x11c);
  pcVar6 = *(code **)(*piVar1 + 0x234);
  uVar2 = (undefined4)(((cocos2d::CCString *)this)->getCString());
  (*pcVar6)(piVar1,uVar2);
  ((BLRenascenceSuccessRolePresenter *)(*(undefined4 *)(*(int *)(*(int *)(((int)this) + 0x18) + 0x114) + 0x108)))->updateWithData((PlayerData*)p1, 0);
  ((BLRenascenceSuccessRolePresenter *)(*(undefined4 *)(*(int *)(*(int *)(((int)this) + 0x18) + 0x118) + 0x108)))->updateWithData((PlayerData*)p1, (KRenascenceRoleType)1);
  func_0079e2bc(auStack_20);
  return;
}
