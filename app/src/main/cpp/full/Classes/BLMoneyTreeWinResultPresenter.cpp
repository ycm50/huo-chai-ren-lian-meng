#include "BLMoneyTreeWinResultPresenter.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "BLMoneyTreeWinResultView.h"
#include "CCNode.h"
#include "CCObject.h"
#include "CCTouch.h"
#include "CCDirector.h"
#include "BLCommonCostItemPresenter.h"
#include "BLLeakUtils.h"
#include "BLResultManager.h"
#include "BLTableView.h"
#include "DataManager.h"
#include "DebugLocalSys.h"
#include "ItemData.h"
#include "PlatformHelp.h"
#include "UIManager.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <new>   // ghost_fix.js 自动补齐
#include "BLPetSkillIconView.h"
using namespace cocos2d;
// 兜底声明
extern "C" long long software_udf(...);

extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e5bc(...);
extern "C" long long func_0079e68c(...);
extern "C" long long func_0079e784(...);
extern "C" long long func_0079e8a4(...);
extern "C" long long func_0079e8b4(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_00659f1c;
extern "C" unsigned long UNK_00659fb4;
extern "C" unsigned long UNK_00659fb8;
extern "C" unsigned long UNK_0065a008;
extern "C" unsigned long UNK_0065a028;
extern "C" unsigned long UNK_0065a074;
extern "C" unsigned long UNK_0065a09a;
extern "C" unsigned long UNK_0065a0f4;
extern "C" unsigned long UNK_0065a11c;
extern "C" unsigned long UNK_0065a132;
extern "C" unsigned long UNK_0065a15e;
extern "C" unsigned long UNK_0065a556;
extern "C" unsigned long UNK_0065a5c0;
extern "C" unsigned long UNK_0065a624;
extern "C" unsigned long UNK_0065a644;
extern "C" unsigned long _UNK_00659f20;
extern "C" unsigned long _UNK_00659f7c;
extern "C" unsigned long _UNK_0065a048;
extern "C" unsigned long _UNK_0065a04c;
extern "C" unsigned long _UNK_0065a050;
extern "C" unsigned long _UNK_0065a054;
extern "C" unsigned long _UNK_0065a0e0;
extern "C" unsigned long _UNK_0065a0e4;
extern "C" unsigned long _UNK_0065a0f8;
extern "C" unsigned long _UNK_0065a120;
extern "C" unsigned long _UNK_0065a19c;
extern "C" unsigned long _UNK_0065a1a0;
extern "C" unsigned long _UNK_0065a450;
extern "C" unsigned long _UNK_0065a454;
extern "C" unsigned long _UNK_0065a458;
extern "C" unsigned long _UNK_0065a45c;
extern "C" unsigned long _UNK_0065a460;
extern "C" unsigned long _UNK_0065a464;
extern "C" unsigned long _UNK_0065a468;
extern "C" unsigned long _UNK_0065a520;
extern "C" unsigned long _UNK_0065a598;
extern "C" unsigned long _UNK_0065a69c;
extern "C" unsigned long _UNK_0065a6a0;
extern "C" unsigned long _UNK_0065a6a4;
extern "C" unsigned long extraout_r1;
extern "C" unsigned long extraout_r2;
extern "C" unsigned long g_00659f1c;
extern "C" unsigned long g_00659f20;
extern "C" unsigned long g_00659f7c;
extern "C" unsigned long g_00659fb4;
extern "C" unsigned long g_00659fb8;
extern "C" unsigned long g_0065a008;
extern "C" unsigned long g_0065a028;
extern "C" unsigned long g_0065a048;
extern "C" unsigned long g_0065a04c;
extern "C" unsigned long g_0065a050;
extern "C" unsigned long g_0065a054;
extern "C" unsigned long g_0065a074;
extern "C" unsigned long g_0065a09a;
extern "C" unsigned long g_0065a0e0;
extern "C" unsigned long g_0065a0e4;
extern "C" unsigned long g_0065a0f4;
extern "C" unsigned long g_0065a0f8;
extern "C" unsigned long g_0065a11c;
extern "C" unsigned long g_0065a120;
extern "C" unsigned long g_0065a132;
extern "C" unsigned long g_0065a15e;
extern "C" unsigned long g_0065a19c;
extern "C" unsigned long g_0065a1a0;
extern "C" unsigned long g_0065a450;
extern "C" unsigned long g_0065a454;
extern "C" unsigned long g_0065a458;
extern "C" unsigned long g_0065a45c;
extern "C" unsigned long g_0065a460;
extern "C" unsigned long g_0065a464;
extern "C" unsigned long g_0065a468;
extern "C" unsigned long g_0065a520;
extern "C" unsigned long g_0065a556;
extern "C" unsigned long g_0065a598;
extern "C" unsigned long g_0065a5c0;
extern "C" unsigned long g_0065a624;
extern "C" unsigned long g_0065a644;
extern "C" unsigned long g_0065a69c;
extern "C" unsigned long g_0065a6a0;
extern "C" unsigned long g_0065a6a4;
bool BLMoneyTreeWinResultPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

int BLMoneyTreeWinResultPresenter::numOfCellItem(BLTableView* p1)
{
  return *(int *)(((int)this) + 0x28) - *(int *)(((int)this) + 0x24) >> 2;
}

undefined4 BLMoneyTreeWinResultPresenter::sizeOfCellItem(BLTableView* p1)
{
  0 /* ctorZero */;
  return ((int)this);
}

void BLMoneyTreeWinResultPresenter::onBtnClick(cocos2d::CCObject* p1, unsigned int p2)
{
  ((BLResultManager *)this)->shareManager();
  ((BLResultManager *)this)->returnMainCity();
  return;
}


BLMoneyTreeWinResultPresenter::~BLMoneyTreeWinResultPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0065a074 + g_0065a0e0);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x38;
  *(int *)((int)this + 4*(6)) = iVar2 + 0x68;
  *(int *)((int)this + 4*(7)) = iVar2 + 0x7c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0065a09a + g_0065a0e4,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  if (*(int *)((int)this + 4*(9)) != 0) {
    (void)(::operator delete((void *)(*(int *)((int)this + 4*(9)))));
  }
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLMoneyTreeWinResultPresenter::BLMoneyTreeWinResultPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_0065a132 + g_0065a19c);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x38;
  *(int *)((int)this + 4*(7)) = iVar2 + 0x7c;
  *(int *)((int)this + 4*(6)) = iVar2 + 0x68;
  *(int *)((int)this + 4*(9)) = 0;
  *(int *)((int)this + 4*(10)) = 0;
  *(int *)((int)this + 4*(0xb)) = 0;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0065a15e + g_0065a1a0,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  ((UIManager *)this)->shareManager();
  ((UIManager *)this)->pushCurScrollViewUnEnable();
  return;
}

undefined4 BLMoneyTreeWinResultPresenter::create()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x30))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLMoneyTreeWinResultPresenter::onExit()
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

void BLMoneyTreeWinResultPresenter::updateWithData()
{
  return;
}

// ===== 修复: 补回被误删的函数占位 (6) =====
void BLMoneyTreeWinResultPresenter::nodeOfCellItemAtIndex(BLTableView* p1, cocos2d::CCNode* p2, int p3)
{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  
  iVar5 = (undefined4)(intptr_t)((int *)((int)this));
  if (((int)(intptr_t)(int)(intptr_t)p2 == 0) ||
     (piVar2 = (int *)func_0079e55c(p2,*(undefined4 *)((unsigned char *)((char *)&g_00659fb8 + (intptr_t)(g_0065a04c))),
                                      *(undefined4 *)((unsigned char *)((char *)&g_00659fb4 + (intptr_t)(g_0065a048))),0,((int)this),
                                      p1,p2), piVar2 == (int *)0x0)) {
    piVar2 = (int *)::operator new(0x11c);
    ::new ((void *)piVar2) BLPetSkillIconView();   /* ALLOC+CTOR_FIX(R123): 类名由 llvm-cxxfilt 反修饰 + (函数,尺寸) 对齐 取得 */
    iVar3 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar2) + (0x18)))(piVar2));
    if (iVar3 == 0) goto code_r0x0065a02c;
    ((cocos2d::CCObject *)(piVar2))->autorelease();
  }
  if (p3 < (uint)(*(int *)(((int)this) + 0x28) - *(int *)(((int)this) + 0x24) >> 2)) {
    iVar3 = (undefined4)(intptr_t)(p3 * 4);
    ((BLCommonCostItemPresenter *)(piVar2[0x42]))->updateWithId(**(undefined4 **)(*(int *)(((int)this) + 0x24) + iVar3));
    if (p3 < (uint)(*(int *)(((int)this) + 0x28) - *(int *)(((int)this) + 0x24) >> 2)) {
      ((BLCommonCostItemPresenter *)(piVar2[0x42]))->updateItemNum(*(undefined4 *)(*(int *)(*(int *)(((int)this) + 0x24) + iVar3) + 4));
      return;
    }
    puVar4 = (unsigned char *)((char *)&g_0065a028 + (intptr_t)(g_0065a054));
  }
  else {
    puVar4 = (unsigned char *)((char *)&g_0065a008 + (intptr_t)(g_0065a050));
  }
  func_0079e784(puVar4,p3);
code_r0x0065a02c:
  (**(code **)(*(int *)(piVar2) + (8)))(piVar2);
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xff,0x65a038);
  (*pcVar1)();
}

void BLMoneyTreeWinResultPresenter::randomReward(std::vector<int, std::allocator<int>>& p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

int * BLMoneyTreeWinResultPresenter::getItem(int p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return nullptr;
}

void BLMoneyTreeWinResultPresenter::onEnter()
{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14, 1, 1);
  piVar1 = *(int **)(((int)this) + 0x24);
  iStack_30 = 0;
  iStack_2c = 0;
  uStack_28 = (undefined4)(0);
  for (; piVar1 != *(int **)(((int)this) + 0x28); piVar1 = piVar1 + 1) {
    ((std::vector<int, std::allocator<int>> *)&iStack_30)->push_back(*piVar1);
    ((std::vector<int, std::allocator<int>> *)&iStack_30)->push_back(*piVar1 + 4);
  }
  iVar4 = iStack_2c - iStack_30;
  iStack_24 = 0;
  iStack_20 = 0;
  iStack_1c = 0;
  iVar3 = 0;
  if (iVar4 >> 2 != 0) {
    if (g_0065a520 < (uint)(iVar4 >> 2)) {
      func_0079e5bc();
    }
    iVar3 = ((long long)::operator new((size_t)(iVar4)));
  }
  iStack_1c = iVar3 + iVar4;
  iVar4 = iStack_2c - iStack_30;
  iStack_24 = iVar3;
  if (iVar4 >> 2 != 0) {
    iStack_20 = iVar3;
    (void)(((long long)::memmove((void *)(iVar3),(const void *)(iStack_30),(size_t)(iVar4))));
  }
  iStack_20 = iVar3 + iVar4;
  0 /* ctorZero */;
  ((std::vector<int, std::allocator<int>> *)&iStack_24)->~vector();
  ((std::vector<int, std::allocator<int>> *)&iStack_30)->~vector();
  return;
}

void BLMoneyTreeWinResultPresenter::initReward()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMoneyTreeWinResultPresenter::initWithView(BLMoneyTreeWinResultView* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
