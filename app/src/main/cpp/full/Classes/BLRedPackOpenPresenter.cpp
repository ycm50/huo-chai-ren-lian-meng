#include "BLRedPackOpenPresenter.h"
#include "BLLeakUtils.h"
#include "DataManager.h"
#include "RedPackInfo.h"
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
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079ea34(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_00647704;
extern "C" unsigned long UNK_0064771c;
extern "C" unsigned long UNK_00647734;
extern "C" unsigned long UNK_006477a8;
extern "C" unsigned long UNK_006477c2;
extern "C" unsigned long UNK_00647808;
extern "C" unsigned long UNK_00647830;
extern "C" unsigned long UNK_00647846;
extern "C" unsigned long UNK_00647874;
extern "C" unsigned long UNK_00647a80;
extern "C" unsigned long UNK_00647b7c;
extern "C" unsigned long UNK_00647bc2;
extern "C" unsigned long UNK_00647c0a;
extern "C" unsigned long _UNK_00647708;
extern "C" unsigned long _UNK_00647720;
extern "C" unsigned long _UNK_00647738;
extern "C" unsigned long _UNK_006477f4;
extern "C" unsigned long _UNK_006477f8;
extern "C" unsigned long _UNK_0064780c;
extern "C" unsigned long _UNK_00647834;
extern "C" unsigned long _UNK_006478a0;
extern "C" unsigned long _UNK_006478a4;
extern "C" unsigned long _UNK_00647c48;
extern "C" unsigned long _UNK_00647c4c;
extern "C" unsigned long _UNK_00647c50;
extern "C" unsigned long _UNK_00647c54;
extern "C" unsigned long _UNK_00647c58;
extern "C" unsigned long g_00647704;
extern "C" unsigned long g_00647708;
extern "C" unsigned long g_0064771c;
extern "C" unsigned long g_00647720;
extern "C" unsigned long g_00647734;
extern "C" unsigned long g_00647738;
extern "C" unsigned long g_006477a8;
extern "C" unsigned long g_006477c2;
extern "C" unsigned long g_006477f4;
extern "C" unsigned long g_006477f8;
extern "C" unsigned long g_00647808;
extern "C" unsigned long g_0064780c;
extern "C" unsigned long g_00647830;
extern "C" unsigned long g_00647834;
extern "C" unsigned long g_00647846;
extern "C" unsigned long g_00647874;
extern "C" unsigned long g_006478a0;
extern "C" unsigned long g_006478a4;
extern "C" unsigned long g_00647a80;
extern "C" unsigned long g_00647b7c;
extern "C" unsigned long g_00647bc2;
extern "C" unsigned long g_00647c0a;
extern "C" unsigned long g_00647c48;
extern "C" unsigned long g_00647c4c;
extern "C" unsigned long g_00647c50;
extern "C" unsigned long g_00647c54;
extern "C" unsigned long g_00647c58;
bool BLRedPackOpenPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLRedPackOpenPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLRedPackOpenPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLRedPackOpenPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLRedPackOpenPresenter::tick(float p1)
{
  return;
}

BLRedPackOpenPresenter::~BLRedPackOpenPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_006477a8 + g_006477f4);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x3c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_006477c2 + g_006477f8,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLRedPackOpenPresenter::BLRedPackOpenPresenter()
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
  iVar3 = *(int *)(&g_00647846 + g_006478a0);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x3c;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 1);
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00647874 + g_006478a4,&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

undefined4 BLRedPackOpenPresenter::create(BLRedPackOpenView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x1c))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLRedPackOpenPresenter::onEnter()
{
  return;
}

void BLRedPackOpenPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  return;
}

// ===== 修复: 补回被误删的函数占位 (3) =====
void BLRedPackOpenPresenter::oncloseview()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLRedPackOpenPresenter::onOpen(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

undefined4 BLRedPackOpenPresenter::initWithView(BLRedPackOpenView* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
