#include "BLPracticeTimeItemPresenter.h"
#include "BLPracticeTimeItemView.h"
#include "BLLeakUtils.h"
#include "PracDataItem.h"
#include "PracticeData.h"
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
extern "C" long long func_0079e4ac(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e6c0(...);
extern "C" long long func_0079e964(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0063b1f0;
extern "C" unsigned long UNK_0063b20a;
extern "C" unsigned long UNK_0063b250;
extern "C" unsigned long UNK_0063b278;
extern "C" unsigned long UNK_0063b28e;
extern "C" unsigned long UNK_0063b2bc;
extern "C" unsigned long UNK_0063b346;
extern "C" unsigned long UNK_0063b366;
extern "C" unsigned long UNK_0063b4fa;
extern "C" unsigned long UNK_0063b530;
extern "C" unsigned long UNK_0063b5a6;
extern "C" unsigned long _UNK_0063b23c;
extern "C" unsigned long _UNK_0063b240;
extern "C" unsigned long _UNK_0063b254;
extern "C" unsigned long _UNK_0063b27c;
extern "C" unsigned long _UNK_0063b2e8;
extern "C" unsigned long _UNK_0063b2ec;
extern "C" unsigned long _UNK_0063b378;
extern "C" unsigned long _UNK_0063b37c;
extern "C" unsigned long _UNK_0063b55c;
extern "C" unsigned long _UNK_0063b560;
extern "C" unsigned long _UNK_0063b5ac;
extern "C" unsigned long extraout_r1;
extern "C" unsigned long g_0063b1f0;
extern "C" unsigned long g_0063b20a;
extern "C" unsigned long g_0063b23c;
extern "C" unsigned long g_0063b240;
extern "C" unsigned long g_0063b250;
extern "C" unsigned long g_0063b254;
extern "C" unsigned long g_0063b278;
extern "C" unsigned long g_0063b27c;
extern "C" unsigned long g_0063b28e;
extern "C" unsigned long g_0063b2bc;
extern "C" unsigned long g_0063b2e8;
extern "C" unsigned long g_0063b2ec;
extern "C" unsigned long g_0063b346;
extern "C" unsigned long g_0063b366;
extern "C" unsigned long g_0063b378;
extern "C" unsigned long g_0063b37c;
extern "C" unsigned long g_0063b4fa;
extern "C" unsigned long g_0063b530;
extern "C" unsigned long g_0063b55c;
extern "C" unsigned long g_0063b560;
extern "C" unsigned long g_0063b5a6;
extern "C" unsigned long g_0063b5ac;
bool BLPracticeTimeItemPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLPracticeTimeItemPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLPracticeTimeItemPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLPracticeTimeItemPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLPracticeTimeItemPresenter::tick(float p1)
{
  return;
}

BLPracticeTimeItemPresenter::~BLPracticeTimeItemPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0063b1f0 + g_0063b23c);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x3c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0063b20a + g_0063b240,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLPracticeTimeItemPresenter::BLPracticeTimeItemPresenter()
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
  iVar3 = *(int *)(&g_0063b28e + g_0063b2e8);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x3c;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 0);
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0063b2bc + g_0063b2ec,&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

void BLPracticeTimeItemPresenter::onEnter()
{
  return;
}

void BLPracticeTimeItemPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  return;
}

undefined4 BLPracticeTimeItemPresenter::create(BLPracticeTimeItemView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x20))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

// ===== 修复: 补回被误删的函数占位 (4) =====
void BLPracticeTimeItemPresenter::initWithView(BLPracticeTimeItemView* p1)
{
  int *piVar1;
  
  *(int *)(((int)this) + 0x1c) = (undefined4)(intptr_t)p1;
  (**(code **)(**(int **)(p1 + 0x10c) + 0x254))
            (*(int **)(p1 + 0x10c),((int)this),*(undefined4 *)((unsigned char *)((char *)&g_0063b346 + (intptr_t)(g_0063b378))),0,
             0x20);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x1c) + 0x110);
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)((unsigned char *)((char *)&g_0063b366 + (intptr_t)(g_0063b37c))),0,0x20);
  return;
}

void BLPracticeTimeItemPresenter::setitemid(int p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLPracticeTimeItemPresenter::onunsel(cocos2d::CCObject* p1, unsigned int p2)
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = *(int **)(*(int *)(((int)this) + 0x1c) + 0x10c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x90))(piVar1,0);
  }
  piVar1 = *(int **)(*(int *)(((int)this) + 0x1c) + 0x110);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x90))(piVar1,1);
  }
  uVar2 = (undefined4)(((sir::singleton<PracticeData, 0> *)this)->instance());
  ((PracticeData *)uVar2)->Setotheritem(4, *(undefined4 *)(((int)this) + 0x18));
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar2)->postNotification((char const*)(unsigned char *)((char *)&g_0063b5a6 + (intptr_t)(g_0063b5ac)));
  return;
}

void BLPracticeTimeItemPresenter::onsel(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
