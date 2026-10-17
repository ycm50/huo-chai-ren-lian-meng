#include "BLBackPackArrangePresenter.h"
#include "CCNotificationCenter.h"
#include "CCAction.h"
#include "CCNode.h"
#include "CCGeometry.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "CCObject.h"
#include "CCTouch.h"
#include "CCActionInterval.h"
#include "CCDirector.h"
#include "BLBackPackArrangeView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BackPackData.h"
#include "DataCacheManager.h"
#include "DataManager.h"
#include "RichTextData.h"
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
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e43c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e46c(...);
extern "C" long long func_0079e47c(...);
extern "C" long long func_0079e4bc(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e5dc(...);
extern "C" long long func_0079e734(...);
extern "C" long long func_0079ea94(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_004f888c;
extern "C" unsigned long UNK_004f88a6;
extern "C" unsigned long UNK_004f88ec;
extern "C" unsigned long UNK_004f8914;
extern "C" unsigned long UNK_004f8b0e;
extern "C" unsigned long UNK_004f8b26;
extern "C" unsigned long UNK_004f8bb2;
extern "C" unsigned long UNK_004f8bd2;
extern "C" unsigned long UNK_004f8c14;
extern "C" unsigned long UNK_004f8d08;
extern "C" unsigned long UNK_004f8d48;
extern "C" unsigned long UNK_004f8e68;
extern "C" unsigned long UNK_004f8ebe;
extern "C" unsigned long UNK_004f8f20;
extern "C" unsigned long UNK_004f8f21;
extern "C" unsigned long UNK_004f8f22;
extern "C" unsigned long UNK_004f8f76;
extern "C" unsigned long UNK_004f8fe4;
extern "C" unsigned long UNK_004f917e;
extern "C" unsigned long _UNK_004f88d8;
extern "C" unsigned long _UNK_004f88dc;
extern "C" unsigned long _UNK_004f88f0;
extern "C" unsigned long _UNK_004f8918;
extern "C" unsigned long _UNK_004f8b68;
extern "C" unsigned long _UNK_004f8b6c;
extern "C" unsigned long _UNK_004f8be0;
extern "C" unsigned long _UNK_004f8be4;
extern "C" unsigned long _UNK_004f8cb0;
extern "C" unsigned long _UNK_004f8cb4;
extern "C" unsigned long _UNK_004f8cb8;
extern "C" unsigned long _UNK_004f8cbc;
extern "C" unsigned long _UNK_004f8cc0;
extern "C" unsigned long _UNK_004f9044;
extern "C" unsigned long _UNK_004f9048;
extern "C" unsigned long _UNK_004f904c;
extern "C" unsigned long _UNK_004f9050;
extern "C" unsigned long _UNK_004f9054;
extern "C" unsigned long _UNK_004f9058;
extern "C" unsigned long _UNK_004f905c;
extern "C" unsigned long _UNK_004f9060;
extern "C" unsigned long _UNK_004f9064;
extern "C" unsigned long _UNK_004f9068;
extern "C" unsigned long _UNK_004f906c;
extern "C" unsigned long _UNK_004f9070;
extern "C" unsigned long _UNK_004f918c;
extern "C" unsigned long g_004f888c;
extern "C" unsigned long g_004f88a6;
extern "C" unsigned long g_004f88d8;
extern "C" unsigned long g_004f88dc;
extern "C" unsigned long g_004f88ec;
extern "C" unsigned long g_004f88f0;
extern "C" unsigned long g_004f8914;
extern "C" unsigned long g_004f8918;
extern "C" unsigned long g_004f8b0e;
extern "C" unsigned long g_004f8b26;
extern "C" unsigned long g_004f8b68;
extern "C" unsigned long g_004f8b6c;
extern "C" unsigned long g_004f8bb2;
extern "C" unsigned long g_004f8bd2;
extern "C" unsigned long g_004f8be0;
extern "C" unsigned long g_004f8be4;
extern "C" unsigned long g_004f8c14;
extern "C" unsigned long g_004f8cb0;
extern "C" unsigned long g_004f8cb4;
extern "C" unsigned long g_004f8cb8;
extern "C" unsigned long g_004f8cbc;
extern "C" unsigned long g_004f8cc0;
extern "C" unsigned long g_004f8d08;
extern "C" unsigned long g_004f8d48;
extern "C" unsigned long g_004f8e68;
extern "C" unsigned long g_004f8ebe;
extern "C" unsigned long g_004f8f20;
extern "C" unsigned long g_004f8f21;
extern "C" unsigned long g_004f8f22;
extern "C" unsigned long g_004f8f76;
extern "C" unsigned long g_004f8fe4;
extern "C" unsigned long g_004f9044;
extern "C" unsigned long g_004f9048;
extern "C" unsigned long g_004f904c;
extern "C" unsigned long g_004f9050;
extern "C" unsigned long g_004f9054;
extern "C" unsigned long g_004f9058;
extern "C" unsigned long g_004f905c;
extern "C" unsigned long g_004f9060;
extern "C" unsigned long g_004f9064;
extern "C" unsigned long g_004f9068;
extern "C" unsigned long g_004f906c;
extern "C" unsigned long g_004f9070;
extern "C" unsigned long g_004f917e;
extern "C" unsigned long g_004f918c;
bool BLBackPackArrangePresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 0;
}

BLBackPackArrangePresenter::~BLBackPackArrangePresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_004f888c + g_004f88d8);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x2c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_004f88a6 + g_004f88dc,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLBackPackArrangePresenter::onClose(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(0xb5);
  return;
}

BLBackPackArrangePresenter::BLBackPackArrangePresenter()
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
  iVar3 = *(int *)(&g_004f8b0e + g_004f8b68);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x2c;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_004f8b26 + g_004f8b6c,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  piVar2 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar1 = (undefined4)((**(code **)(*piVar2 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar1)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 0);
  return;
}

undefined4 BLBackPackArrangePresenter::create()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x1c))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLBackPackArrangePresenter::initWithView(BLBackPackArrangeView* p1)
{
  int *piVar1;
  
  *(undefined4 *)(((int)this) + 0x18) = (undefined4)(intptr_t)p1;
  piVar1 = (int *)((BLBackPackArrangeView *)p1)->getBtnSell();
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)(&g_004f8bb2 + g_004f8be0),0,0x20);
  piVar1 = (int *)((BLBackPackArrangeView *)*(undefined4 *)(((int)this) + 0x18))->getBtnClose();
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)(&g_004f8bd2 + g_004f8be4),0,0x20);
  return;
}

void BLBackPackArrangePresenter::onEnter()
{
  return;
}


void BLBackPackArrangePresenter::tick(float p1)
{
  return;
}

// ===== 修复: 补回被误删的函数占位 (3) =====
void BLBackPackArrangePresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [12];
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  iVar4 = (undefined4)(intptr_t)(g_004f8cb0);
  uVar2 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x40)))());
  ((cocos2d::CCTouchDispatcher *)(uVar2))->removeDelegate((cocos2d::CCTouchDelegate*)((int)this + 0x14));
  uVar2 = (undefined4)(((UIManager *)this)->shareManager());
  iVar3 = (undefined4)((void)(((UIManager *)(uVar2))->getUIObject(0x1e)),(intptr_t)0);
  piVar1 = (int *)0x0;
  if (iVar3 != 0) {
    uVar2 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_004f8c14 + (intptr_t)(g_004f8cb4)) + iVar4));
    uVar5 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_004f8c14 + (intptr_t)(g_004f8cb8)) + iVar4));
    piVar1 = (int *)func_0079e55c(iVar3,uVar2,uVar5,0,uVar2,uVar5);
  }
  uVar2 = (undefined4)(((UIManager *)this)->shareManager());
  iVar3 = (undefined4)((void)(((UIManager *)(uVar2))->getUIObject(0x1f)),(intptr_t)0);
  if (iVar3 == 0) {
    if (piVar1 == 0) {
      return;
    }
  }
  else {
    uVar2 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_004f8c14 + (intptr_t)(g_004f8cb4)) + iVar4));
    uVar5 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_004f8c14 + (intptr_t)(g_004f8cbc)) + iVar4));
    iVar4 = (undefined4)(intptr_t)(func_0079e55c(iVar3,uVar2,uVar5,0,uVar2,uVar5));
    if (piVar1 == 0) {
      return;
    }
    if (iVar4 != 0) {
      return;
    }
  }
  uVar2 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x20)))(piVar1));
  piVar1 = (int *)(**(code **)(*(int *)(piVar1) + (0x20)))(piVar1);
  uVar5 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x68)))());
  0 /* ctorZero */;
  0 /* ctorZero */;
  ((cocos2d::CCPoint *)(auStack_30))->operator+(*(const CCPoint *)(void *)auStack_28);
  uVar5 = (undefined4)(cocos2d::CCMoveTo::create(g_004f8cc0, *(const CCPoint *)(void *)auStack_20));
  ((cocos2d::CCNode *)(uVar2))->runAction((cocos2d::CCAction*)uVar5);
  return;
}

void BLBackPackArrangePresenter::countValue()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLBackPackArrangePresenter::onSell(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  int iVar2;
  
  BLBackPackArrangePresenter::countValue();
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  iVar2 = (undefined4)(intptr_t)(((UIManager *)uVar1)->hasUIObject(0x1f));
  if (iVar2 != 0) {
    uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
    ((cocos2d::CCNotificationCenter *)uVar1)->postNotification((char const*)(unsigned char *)((char *)&g_004f917e + (intptr_t)(g_004f918c)));
  }
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(0xb5);
  return;
}
