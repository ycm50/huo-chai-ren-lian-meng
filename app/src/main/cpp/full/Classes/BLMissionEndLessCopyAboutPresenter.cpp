#include "BLMissionEndLessCopyAboutPresenter.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "BLMissionEndLessCopyAboutView.h"
#include "CCObject.h"
#include "CCTouch.h"
#include "CCDirector.h"
#include "BLLeakUtils.h"
#include "RoleInfoData.h"
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
extern "C" long long func_0079e34c(...);
extern "C" long long func_0079e3bc(...);
extern "C" long long func_0079e41c(...);
extern "C" long long func_0079e42c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e814(...);
extern "C" long long func_0079e854(...);
extern "C" long long func_0079e874(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_005c6af4;
extern "C" unsigned long UNK_005c6b0e;
extern "C" unsigned long UNK_005c6b54;
extern "C" unsigned long UNK_005c6b7c;
extern "C" unsigned long UNK_005c6ba2;
extern "C" unsigned long UNK_005c6bd8;
extern "C" unsigned long UNK_005c6c72;
extern "C" unsigned long UNK_005c6c7e;
extern "C" unsigned long UNK_005c6caa;
extern "C" unsigned long UNK_005c6db8;
extern "C" unsigned long UNK_005c6dfc;
extern "C" unsigned long UNK_005c6ecc;
extern "C" unsigned long _UNK_005c6b40;
extern "C" unsigned long _UNK_005c6b44;
extern "C" unsigned long _UNK_005c6b58;
extern "C" unsigned long _UNK_005c6b80;
extern "C" unsigned long _UNK_005c6c04;
extern "C" unsigned long _UNK_005c6c08;
extern "C" unsigned long _UNK_005c6f5c;
extern "C" unsigned long _UNK_005c6f60;
extern "C" unsigned long _UNK_005c6f64;
extern "C" unsigned long _UNK_005c6f68;
extern "C" unsigned long _UNK_005c6f6c;
extern "C" unsigned long _UNK_005c6f70;
extern "C" unsigned long g_005c6af4;
extern "C" unsigned long g_005c6b0e;
extern "C" unsigned long g_005c6b40;
extern "C" unsigned long g_005c6b44;
extern "C" unsigned long g_005c6b54;
extern "C" unsigned long g_005c6b58;
extern "C" unsigned long g_005c6b7c;
extern "C" unsigned long g_005c6b80;
extern "C" unsigned long g_005c6ba2;
extern "C" unsigned long g_005c6bd8;
extern "C" unsigned long g_005c6c04;
extern "C" unsigned long g_005c6c08;
extern "C" unsigned long g_005c6c72;
extern "C" unsigned long g_005c6c7e;
extern "C" unsigned long g_005c6caa;
extern "C" unsigned long g_005c6db8;
extern "C" unsigned long g_005c6dfc;
extern "C" unsigned long g_005c6ecc;
extern "C" unsigned long g_005c6f5c;
extern "C" unsigned long g_005c6f60;
extern "C" unsigned long g_005c6f64;
extern "C" unsigned long g_005c6f68;
extern "C" unsigned long g_005c6f6c;
extern "C" unsigned long g_005c6f70;
bool BLMissionEndLessCopyAboutPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLMissionEndLessCopyAboutPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLMissionEndLessCopyAboutPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLMissionEndLessCopyAboutPresenter::tick(float p1)
{
  return;
}

BLMissionEndLessCopyAboutPresenter::~BLMissionEndLessCopyAboutPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_005c6af4 + g_005c6b40);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x3c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005c6b0e + g_005c6b44,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLMissionEndLessCopyAboutPresenter::onClose(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(0xae);
  return;
}

BLMissionEndLessCopyAboutPresenter::BLMissionEndLessCopyAboutPresenter()
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
  iVar3 = *(int *)(&g_005c6ba2 + g_005c6c04);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x3c;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 1);
  ((UIManager *)this)->shareManager();
  ((UIManager *)this)->pushCurScrollViewUnEnable();
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005c6bd8 + g_005c6c08,&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

undefined4 BLMissionEndLessCopyAboutPresenter::create(BLMissionEndLessCopyAboutView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x1c))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLMissionEndLessCopyAboutPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  ((UIManager *)this)->shareManager();
  ((UIManager *)this)->popUnEnableScrollView();
  return;
}

void BLMissionEndLessCopyAboutPresenter::onEnter()
{
  return;
}

// ===== 修复: 补回被误删的函数占位 (2) =====
void BLMissionEndLessCopyAboutPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLMissionEndLessCopyAboutPresenter::initWithView(BLMissionEndLessCopyAboutView* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
