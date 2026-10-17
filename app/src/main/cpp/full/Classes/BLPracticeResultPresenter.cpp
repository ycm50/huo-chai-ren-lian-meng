#include "BLPracticeResultPresenter.h"
#include "BLLeakUtils.h"
#include "DataManager.h"
#include "PracticeData.h"
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
extern "C" long long func_0079e34c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0063adfc;
extern "C" unsigned long UNK_0063ae16;
extern "C" unsigned long UNK_0063ae5c;
extern "C" unsigned long UNK_0063ae84;
extern "C" unsigned long UNK_0063ae9a;
extern "C" unsigned long UNK_0063aed0;
extern "C" unsigned long UNK_0063af6c;
extern "C" unsigned long UNK_0063af78;
extern "C" unsigned long UNK_0063afea;
extern "C" unsigned long UNK_0063b114;
extern "C" unsigned long _UNK_0063ae48;
extern "C" unsigned long _UNK_0063ae4c;
extern "C" unsigned long _UNK_0063ae60;
extern "C" unsigned long _UNK_0063ae88;
extern "C" unsigned long _UNK_0063aefc;
extern "C" unsigned long _UNK_0063af00;
extern "C" unsigned long _UNK_0063affc;
extern "C" unsigned long _UNK_0063b000;
extern "C" unsigned long _UNK_0063b004;
extern "C" unsigned long _UNK_0063b138;
extern "C" unsigned long g_0063adfc;
extern "C" unsigned long g_0063ae16;
extern "C" unsigned long g_0063ae48;
extern "C" unsigned long g_0063ae4c;
extern "C" unsigned long g_0063ae5c;
extern "C" unsigned long g_0063ae60;
extern "C" unsigned long g_0063ae84;
extern "C" unsigned long g_0063ae88;
extern "C" unsigned long g_0063ae9a;
extern "C" unsigned long g_0063aed0;
extern "C" unsigned long g_0063aefc;
extern "C" unsigned long g_0063af00;
extern "C" unsigned long g_0063af6c;
extern "C" unsigned long g_0063af78;
extern "C" unsigned long g_0063afea;
extern "C" unsigned long g_0063affc;
extern "C" unsigned long g_0063b000;
extern "C" unsigned long g_0063b004;
extern "C" unsigned long g_0063b114;
extern "C" unsigned long g_0063b138;
bool BLPracticeResultPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLPracticeResultPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLPracticeResultPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLPracticeResultPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLPracticeResultPresenter::tick(float p1)
{
  return;
}

BLPracticeResultPresenter::~BLPracticeResultPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0063adfc + g_0063ae48);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x3c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0063ae16 + g_0063ae4c,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLPracticeResultPresenter::BLPracticeResultPresenter()
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
  iVar3 = *(int *)(&g_0063ae9a + g_0063aefc);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x3c;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 0);
  ((UIManager *)this)->shareManager();
  ((UIManager *)this)->pushCurScrollViewUnEnable();
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0063aed0 + g_0063af00,&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

undefined4 BLPracticeResultPresenter::create(BLPracticeResultView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x20))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLPracticeResultPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  ((UIManager *)this)->shareManager();
  ((UIManager *)this)->popUnEnableScrollView();
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  return;
}

void BLPracticeResultPresenter::onEnter()
{
  return;
}

// ===== 修复: 补回被误删的函数占位 (2) =====
void BLPracticeResultPresenter::initWithView(BLPracticeResultView* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLPracticeResultPresenter::onOK(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
