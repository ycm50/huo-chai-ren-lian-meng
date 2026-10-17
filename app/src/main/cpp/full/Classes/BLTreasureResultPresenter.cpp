#include "BLTreasureResultPresenter.h"
#include "BLLeakUtils.h"
#include "BLResultManager.h"
#include "BLRichText.h"
#include "BLTreasureResultView.h"
#include "RichTextData.h"
#include "TreasureDataManager.h"
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
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e52c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0065e5ec;
extern "C" unsigned long UNK_0065e606;
extern "C" unsigned long UNK_0065e64c;
extern "C" unsigned long UNK_0065e674;
extern "C" unsigned long UNK_0065e6ba;
extern "C" unsigned long UNK_0065e6ec;
extern "C" unsigned long UNK_0065e780;
extern "C" unsigned long UNK_0065e7e8;
extern "C" unsigned long UNK_0065e7ee;
extern "C" unsigned long UNK_0065e816;
extern "C" unsigned long UNK_0065e846;
extern "C" unsigned long UNK_0065e84c;
extern "C" unsigned long UNK_0065e95a;
extern "C" unsigned long UNK_0065e964;
extern "C" unsigned long UNK_0065e9b0;
extern "C" unsigned long UNK_0065e9d8;
extern "C" unsigned long UNK_0065e9f4;
extern "C" unsigned long UNK_0065e9fa;
extern "C" unsigned long UNK_0065ea52;
extern "C" unsigned long UNK_0065ea58;
extern "C" unsigned long UNK_0065eab0;
extern "C" unsigned long UNK_0065eaf6;
extern "C" unsigned long _UNK_0065e638;
extern "C" unsigned long _UNK_0065e63c;
extern "C" unsigned long _UNK_0065e650;
extern "C" unsigned long _UNK_0065e678;
extern "C" unsigned long _UNK_0065e718;
extern "C" unsigned long _UNK_0065e71c;
extern "C" unsigned long _UNK_0065e788;
extern "C" unsigned long _UNK_0065eab0;
extern "C" unsigned long _UNK_0065eab4;
extern "C" unsigned long _UNK_0065eab8;
extern "C" unsigned long _UNK_0065eabc;
extern "C" unsigned long _UNK_0065eac0;
extern "C" unsigned long _UNK_0065eac4;
extern "C" unsigned long _UNK_0065eac8;
extern "C" unsigned long _UNK_0065eacc;
extern "C" unsigned long _UNK_0065ead0;
extern "C" unsigned long _UNK_0065ead4;
extern "C" unsigned long _UNK_0065ead8;
extern "C" unsigned long _UNK_0065eadc;
extern "C" unsigned long _UNK_0065eae0;
extern "C" unsigned long _UNK_0065eae4;
extern "C" unsigned long _UNK_0065eae8;
extern "C" unsigned long _UNK_0065eaec;
extern "C" unsigned long _UNK_0065ec00;
extern "C" unsigned long g_0065e5ec;
extern "C" unsigned long g_0065e606;
extern "C" unsigned long g_0065e638;
extern "C" unsigned long g_0065e63c;
extern "C" unsigned long g_0065e64c;
extern "C" unsigned long g_0065e650;
extern "C" unsigned long g_0065e674;
extern "C" unsigned long g_0065e678;
extern "C" unsigned long g_0065e6ba;
extern "C" unsigned long g_0065e6ec;
extern "C" unsigned long g_0065e718;
extern "C" unsigned long g_0065e71c;
extern "C" unsigned long g_0065e780;
extern "C" unsigned long g_0065e788;
extern "C" unsigned long g_0065e7e8;
extern "C" unsigned long g_0065e7ee;
extern "C" unsigned long g_0065e816;
extern "C" unsigned long g_0065e846;
extern "C" unsigned long g_0065e84c;
extern "C" unsigned long g_0065e95a;
extern "C" unsigned long g_0065e964;
extern "C" unsigned long g_0065e9b0;
extern "C" unsigned long g_0065e9d8;
extern "C" unsigned long g_0065e9f4;
extern "C" unsigned long g_0065e9fa;
extern "C" unsigned long g_0065ea52;
extern "C" unsigned long g_0065ea58;
extern "C" unsigned long g_0065eab0;
extern "C" unsigned long g_0065eab4;
extern "C" unsigned long g_0065eab8;
extern "C" unsigned long g_0065eabc;
extern "C" unsigned long g_0065eac0;
extern "C" unsigned long g_0065eac4;
extern "C" unsigned long g_0065eac8;
extern "C" unsigned long g_0065eacc;
extern "C" unsigned long g_0065ead0;
extern "C" unsigned long g_0065ead4;
extern "C" unsigned long g_0065ead8;
extern "C" unsigned long g_0065eadc;
extern "C" unsigned long g_0065eae0;
extern "C" unsigned long g_0065eae4;
extern "C" unsigned long g_0065eae8;
extern "C" unsigned long g_0065eaec;
extern "C" unsigned long g_0065eaf6;
extern "C" unsigned long g_0065ec00;
void BLTreasureResultPresenter::tick(float p1)
{
  return;
}

bool BLTreasureResultPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLTreasureResultPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLTreasureResultPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLTreasureResultPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

BLTreasureResultPresenter::~BLTreasureResultPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0065e5ec + g_0065e638);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x3c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0065e606 + g_0065e63c,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLTreasureResultPresenter::onSure(cocos2d::CCObject* p1, unsigned int p2)
{
  int iVar1;
  undefined4 uVar2;
  
  ((BLResultManager *)this)->shareManager();
  ((BLResultManager *)this)->returnMainCity();
  iVar1 = ((TreasureDataManager *)this)->getInstance();
  *(undefined1 *)(*(int *)(iVar1 + 0x68) + 0x5c) = 1;
  iVar1 = ((TreasureDataManager *)this)->getInstance();
  *(undefined1 *)(*(int *)(iVar1 + 0x68) + 0x5d) = *(undefined1 *)(((int)this) + 0x1c);
  uVar2 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar2)->removeUIByID(0xc4);
  return;
}

BLTreasureResultPresenter::BLTreasureResultPresenter()
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
  iVar3 = *(int *)(&g_0065e6ba + g_0065e718);
  *(int *)((int)this + 4*(5)) = iVar3 + 0x3c;
  *(int *)this = iVar3 + 8;
  *(undefined1 *)(((int)this) + 7) = 0;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 1);
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0065e6ec + g_0065e71c,&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

void BLTreasureResultPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  return;
}

void BLTreasureResultPresenter::onEnter()
{
  return;
}

undefined4 BLTreasureResultPresenter::create(BLTreasureResultView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x20))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLTreasureResultPresenter::initWithView(BLTreasureResultView* p1)
{
  int *piVar1;
  
  *(undefined4 *)(((int)this) + 0x18) = (undefined4)(intptr_t)p1;
  piVar1 = (int *)((BLTreasureResultView *)p1)->getBtnSure();
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)(&g_0065e780 + g_0065e788),0,0x20);
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
void BLTreasureResultPresenter::initWith(bool p1, std::string p2, std::string p3, bool p4)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
