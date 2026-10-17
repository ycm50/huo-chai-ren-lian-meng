#include "BLRenascenceMainPresenter.h"
#include "CCString.h"
#include "CCArray.h"
#include "CCNotificationCenter.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "CCObject.h"
#include "CCTouch.h"
#include "CCDirector.h"
#include "BLRenascenceMainView.h"
#include "BLFunctionIntroductionPresenter.h"
#include "BLGameScene.h"
#include "BLLeakUtils.h"
#include "BLRenascencePropertyPresenter.h"
#include "BLRenascenceSuccessPresenter.h"
#include "BLRenascenceTargetPresenter.h"
#include "BLRoleAttribute.h"
#include "BLRolePhotoPresenter.h"
#include "BackPackData.h"
#include "BackPackItemData.h"
#include "DataCacheManager.h"
#include "DataManager.h"
#include "RenascenceBaseData.h"
#include "RoleData.h"
#include "RoleRenascenceData.h"
#include "RoleRenascenceItemData.h"
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
extern "C" long long func_0079e43c(...);
extern "C" long long func_0079e44c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e46c(...);
extern "C" long long func_0079e47c(...);
extern "C" long long func_0079e4bc(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long func_0079e69c(...);
extern "C" long long func_0079e734(...);
extern "C" long long func_0079e864(...);
extern "C" long long func_0079e874(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0064b948;
extern "C" unsigned long UNK_0064b966;
extern "C" unsigned long UNK_0064b9bc;
extern "C" unsigned long UNK_0064b9e4;
extern "C" unsigned long UNK_0064ba1a;
extern "C" unsigned long UNK_0064ba1c;
extern "C" unsigned long UNK_0064ba32;
extern "C" unsigned long UNK_0064ba34;
extern "C" unsigned long UNK_0064ba48;
extern "C" unsigned long UNK_0064ba66;
extern "C" unsigned long UNK_0064bad2;
extern "C" unsigned long UNK_0064bae4;
extern "C" unsigned long UNK_0064baf8;
extern "C" unsigned long UNK_0064bb1c;
extern "C" unsigned long UNK_0064bb1e;
extern "C" unsigned long UNK_0064bb36;
extern "C" unsigned long UNK_0064bb3a;
extern "C" unsigned long UNK_0064bb4c;
extern "C" unsigned long UNK_0064bbce;
extern "C" unsigned long UNK_0064bbee;
extern "C" unsigned long UNK_0064bc0c;
extern "C" unsigned long UNK_0064bc58;
extern "C" unsigned long UNK_0064bc80;
extern "C" unsigned long UNK_0064bc8c;
extern "C" unsigned long UNK_0064bc8e;
extern "C" unsigned long UNK_0064bc90;
extern "C" unsigned long UNK_0064bd62;
extern "C" unsigned long UNK_0064bf22;
extern "C" unsigned long UNK_0064bf24;
extern "C" unsigned long UNK_0064bf76;
extern "C" unsigned long UNK_0064bf78;
extern "C" unsigned long UNK_0064bf8e;
extern "C" unsigned long UNK_0064c070;
extern "C" unsigned long UNK_0064c0a4;
extern "C" unsigned long UNK_0064c148;
extern "C" unsigned long UNK_0064c1b8;
extern "C" unsigned long UNK_0064c350;
extern "C" unsigned long UNK_0064c3d6;
extern "C" unsigned long UNK_0064c3e6;
extern "C" unsigned long UNK_0064c468;
extern "C" unsigned long UNK_0064c48e;
extern "C" unsigned long UNK_0064c4f0;
extern "C" unsigned long UNK_0064c508;
extern "C" unsigned long _UNK_0064b9a8;
extern "C" unsigned long _UNK_0064b9ac;
extern "C" unsigned long _UNK_0064b9c0;
extern "C" unsigned long _UNK_0064b9e8;
extern "C" unsigned long _UNK_0064b9fc;
extern "C" unsigned long _UNK_0064baa4;
extern "C" unsigned long _UNK_0064baa8;
extern "C" unsigned long _UNK_0064baac;
extern "C" unsigned long _UNK_0064bab0;
extern "C" unsigned long _UNK_0064bab4;
extern "C" unsigned long _UNK_0064bab8;
extern "C" unsigned long _UNK_0064babc;
extern "C" unsigned long _UNK_0064bb70;
extern "C" unsigned long _UNK_0064bb74;
extern "C" unsigned long _UNK_0064bb78;
extern "C" unsigned long _UNK_0064bb7c;
extern "C" unsigned long _UNK_0064bb80;
extern "C" unsigned long _UNK_0064bb84;
extern "C" unsigned long _UNK_0064bb88;
extern "C" unsigned long _UNK_0064bb8c;
extern "C" unsigned long _UNK_0064bc1c;
extern "C" unsigned long _UNK_0064bc20;
extern "C" unsigned long _UNK_0064bc24;
extern "C" unsigned long _UNK_0064bec8;
extern "C" unsigned long _UNK_0064becc;
extern "C" unsigned long _UNK_0064bed0;
extern "C" unsigned long _UNK_0064bed4;
extern "C" unsigned long _UNK_0064bed8;
extern "C" unsigned long _UNK_0064bedc;
extern "C" unsigned long _UNK_0064bee0;
extern "C" unsigned long _UNK_0064bf5c;
extern "C" unsigned long _UNK_0064bf60;
extern "C" unsigned long _UNK_0064bfc4;
extern "C" unsigned long _UNK_0064bfc8;
extern "C" unsigned long _UNK_0064bfcc;
extern "C" unsigned long _UNK_0064c1e4;
extern "C" unsigned long _UNK_0064c1e8;
extern "C" unsigned long _UNK_0064c1ec;
extern "C" unsigned long _UNK_0064c1f0;
extern "C" unsigned long _UNK_0064c59c;
extern "C" unsigned long _UNK_0064c5a0;
extern "C" unsigned long _UNK_0064c5a4;
extern "C" unsigned long _UNK_0064c5a8;
extern "C" unsigned long _UNK_0064c5ac;
extern "C" unsigned long _UNK_0064c5b0;
extern "C" unsigned long _UNK_0064c5b4;
extern "C" unsigned long _UNK_0064c5b8;
extern "C" unsigned long _UNK_0064c5bc;
extern "C" unsigned long _UNK_0064c5c0;
extern "C" unsigned long _UNK_0064c5c4;
extern "C" unsigned long _UNK_0064c5c8;
extern "C" unsigned long _UNK_0064c5cc;
extern "C" unsigned long g_0064b948;
extern "C" unsigned long g_0064b966;
extern "C" unsigned long g_0064b9a8;
extern "C" unsigned long g_0064b9ac;
extern "C" unsigned long g_0064b9bc;
extern "C" unsigned long g_0064b9c0;
extern "C" unsigned long g_0064b9e4;
extern "C" unsigned long g_0064b9e8;
extern "C" unsigned long g_0064b9fc;
extern "C" unsigned long g_0064ba1a;
extern "C" unsigned long g_0064ba1c;
extern "C" unsigned long g_0064ba32;
extern "C" unsigned long g_0064ba34;
extern "C" unsigned long g_0064ba48;
extern "C" unsigned long g_0064ba66;
extern "C" unsigned long g_0064baa4;
extern "C" unsigned long g_0064baa8;
extern "C" unsigned long g_0064baac;
extern "C" unsigned long g_0064bab0;
extern "C" unsigned long g_0064bab4;
extern "C" unsigned long g_0064bab8;
extern "C" unsigned long g_0064babc;
extern "C" unsigned long g_0064bad2;
extern "C" unsigned long g_0064bae4;
extern "C" unsigned long g_0064baf8;
extern "C" unsigned long g_0064bb1c;
extern "C" unsigned long g_0064bb1e;
extern "C" unsigned long g_0064bb36;
extern "C" unsigned long g_0064bb3a;
extern "C" unsigned long g_0064bb4c;
extern "C" unsigned long g_0064bb70;
extern "C" unsigned long g_0064bb74;
extern "C" unsigned long g_0064bb78;
extern "C" unsigned long g_0064bb7c;
extern "C" unsigned long g_0064bb80;
extern "C" unsigned long g_0064bb84;
extern "C" unsigned long g_0064bb88;
extern "C" unsigned long g_0064bb8c;
extern "C" unsigned long g_0064bbce;
extern "C" unsigned long g_0064bbee;
extern "C" unsigned long g_0064bc0c;
extern "C" unsigned long g_0064bc1c;
extern "C" unsigned long g_0064bc20;
extern "C" unsigned long g_0064bc24;
extern "C" unsigned long g_0064bc58;
extern "C" unsigned long g_0064bc80;
extern "C" unsigned long g_0064bc8c;
extern "C" unsigned long g_0064bc8e;
extern "C" unsigned long g_0064bc90;
extern "C" unsigned long g_0064bd62;
extern "C" unsigned long g_0064bec8;
extern "C" unsigned long g_0064becc;
extern "C" unsigned long g_0064bed0;
extern "C" unsigned long g_0064bed4;
extern "C" unsigned long g_0064bed8;
extern "C" unsigned long g_0064bedc;
extern "C" unsigned long g_0064bee0;
extern "C" unsigned long g_0064bf22;
extern "C" unsigned long g_0064bf24;
extern "C" unsigned long g_0064bf5c;
extern "C" unsigned long g_0064bf60;
extern "C" unsigned long g_0064bf76;
extern "C" unsigned long g_0064bf78;
extern "C" unsigned long g_0064bf8e;
extern "C" unsigned long g_0064bfc4;
extern "C" unsigned long g_0064bfc8;
extern "C" unsigned long g_0064bfcc;
extern "C" unsigned long g_0064c070;
extern "C" unsigned long g_0064c0a4;
extern "C" unsigned long g_0064c148;
extern "C" unsigned long g_0064c1b8;
extern "C" unsigned long g_0064c1e4;
extern "C" unsigned long g_0064c1e8;
extern "C" unsigned long g_0064c1ec;
extern "C" unsigned long g_0064c1f0;
extern "C" unsigned long g_0064c350;
extern "C" unsigned long g_0064c3d6;
extern "C" unsigned long g_0064c3e6;
extern "C" unsigned long g_0064c468;
extern "C" unsigned long g_0064c48e;
extern "C" unsigned long g_0064c4f0;
extern "C" unsigned long g_0064c508;
extern "C" unsigned long g_0064c59c;
extern "C" unsigned long g_0064c5a0;
extern "C" unsigned long g_0064c5a4;
extern "C" unsigned long g_0064c5a8;
extern "C" unsigned long g_0064c5ac;
extern "C" unsigned long g_0064c5b0;
extern "C" unsigned long g_0064c5b4;
extern "C" unsigned long g_0064c5b8;
extern "C" unsigned long g_0064c5bc;
extern "C" unsigned long g_0064c5c0;
extern "C" unsigned long g_0064c5c4;
extern "C" unsigned long g_0064c5c8;
extern "C" unsigned long g_0064c5cc;
bool BLRenascenceMainPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

BLRenascenceMainPresenter::~BLRenascenceMainPresenter()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  iVar2 = *(int *)(&g_0064b948 + g_0064b9a8);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x2c;
  piStack_20 = (int *)((int)this);
  uStack_1c = (undefined4)(p2);
  uStack_18 = (undefined4)(p3);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_1c,&g_0064b966 + g_0064b9ac,&piStack_20);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_1c);
  func_0079e2bc(&uStack_1c);
  *(int *)((int)this + 4*(8)) = 0;
  func_0079e2bc(((int)this) + 7);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLRenascenceMainPresenter::onClose(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(g_0064b9fc);
  return;
}



undefined4 BLRenascenceMainPresenter::create()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x24))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}


void BLRenascenceMainPresenter::onExit()
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

// ===== 修复: 补回被误删的函数占位 (10) =====
void BLRenascenceMainPresenter::onAbout(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

BLRenascenceMainPresenter::BLRenascenceMainPresenter()
{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_2c [12];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  0 /* ctorZero */;
  iVar3 = (undefined4)(intptr_t)(*(int *)((unsigned char *)((char *)&g_0064bad2 + (intptr_t)(g_0064bb70))));
  *(int *)((int)this + 4*(5)) = iVar3 + 0x2c;
  iVar1 = (undefined4)(intptr_t)(g_0064bb74);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(7)) = *(int *)(&g_0064bae4 + iVar1) + 0xc;
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(auStack_2c,(unsigned char *)((char *)&g_0064baf8 + (intptr_t)(g_0064bb78)),&uStack_20);
  ((BLLeakUtils *)(uVar2))->addClass((std::string)(char*)auStack_2c);
  func_0079e2bc(auStack_2c);
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)(((int)this)))->addObserver((cocos2d::CCObject*)*(undefined4 *)((unsigned char *)((char *)&g_0064bb1c + (intptr_t)(g_0064bb7c))), 0, (char const*)(unsigned char *)((char *)&g_0064bb1e + (intptr_t)(g_0064bb80)), 0);
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  uStack_1c = (undefined4)(0);
  uStack_20 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_0064bb36 + (intptr_t)(g_0064bb84))));
  ((cocos2d::CCNotificationCenter *)(((int)this)))->addObserver((cocos2d::CCObject*)uStack_20, 0, (char const*)(unsigned char *)((char *)&g_0064bb3a + (intptr_t)(g_0064bb88)), 0);
  func_0079e2dc(((int)this) + 7,(unsigned char *)((char *)&g_0064bb4c + (intptr_t)(g_0064bb8c)));
  *(int *)((int)this + 4*(8)) = 0;
  return;
}

void BLRenascenceMainPresenter::initWithView(BLRenascenceMainView* p1)
{
  int *piVar1;
  
  *(int *)(((int)this) + 0x18) = (undefined4)(intptr_t)p1;
  (**(code **)(**(int **)(p1 + 0x110) + 0x254))
            (*(int **)(p1 + 0x110),((int)this),*(undefined4 *)((unsigned char *)((char *)&g_0064bbce + (intptr_t)(g_0064bc1c))),0,
             0x20);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x18) + 0x10c);
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)((unsigned char *)((char *)&g_0064bbee + (intptr_t)(g_0064bc20))),0,0x20);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x18) + 0x124);
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)((unsigned char *)((char *)&g_0064bc0c + (intptr_t)(g_0064bc24))),0,0x20);
  return;
}

void BLRenascenceMainPresenter::updateWithData(std::string p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLRenascenceMainPresenter::onEnter()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;

  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  uStack_14 = (undefined4)(p2);
  uStack_10 = (undefined4)(p3);
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14, 1, 0);
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  piVar1 = (int *)(**(code **)(*piVar1 + 0x28))();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x68))());
  iVar3 = (undefined4)(intptr_t)(((cocos2d::CCArray *)uVar2)->objectAtIndex(0));
  if ((iVar3 != 0) &&
     (piVar1 = (int *)func_0079e55c(iVar3,*(undefined4 *)((unsigned char *)((char *)&g_0064bf22 + (intptr_t)(g_0064bf5c))),
                                      *(undefined4 *)((unsigned char *)((char *)&g_0064bf24 + (intptr_t)(g_0064bf60))),0),
     piVar1 != (int *)0x0)) {
    piVar1 = (int *)(**(code **)(*piVar1 + 0x18))();
    (**(code **)(*piVar1 + 0x18))(&uStack_14,piVar1);
    BLRenascenceMainPresenter::updateWithData((std::string)(char*)uStack_14);
    func_0079e2bc(&uStack_14);
  }
  return;
}

void BLRenascenceMainPresenter::onUpdateRoleData(cocos2d::CCObject* p1)
{
  undefined4 p3 = 0;

  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uStack_18;
  int iStack_14;
  undefined4 uStack_10;
  
  uStack_18 = (undefined4)((int *)((int)this));
  iStack_14 = (undefined4)(intptr_t)p1;
  if ((((int)(intptr_t)p1 != 0) &&
      (uStack_10 = p3,
      iVar1 = func_0079e55c(p1,*(undefined4 *)(&g_0064bf76 + g_0064bfc8),
                              *(undefined4 *)(&g_0064bf78 + g_0064bfc4),0), iVar1 != 0)) &&
     (iVar2 = func_0079e4bc(iVar1 + 0x14,&g_0064bf8e + g_0064bfcc), iVar2 != 0)) {
    uVar3 = (undefined4)(((cocos2d::CCString *)iVar1)->getCString());
    func_0079e45c(&iStack_14,uVar3,&uStack_18);
    BLRenascenceMainPresenter::updateWithData((std::string)(char*)iStack_14);
    func_0079e2bc(&iStack_14);
  }
  return;
}

void BLRenascenceMainPresenter::onRefreshRoleData()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;

  undefined4 uStack_14;
  undefined4 uStack_10;
  
  uStack_14 = (undefined4)(p2);
  uStack_10 = (undefined4)(p3);
  func_0079e53c(&uStack_14,((int)this) + 0x1c);
  BLRenascenceMainPresenter::updateWithData((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int BLRenascenceMainPresenter::checkIsReachTarget()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void BLRenascenceMainPresenter::renascenceConsumeItemData()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLRenascenceMainPresenter::onRenascence(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
