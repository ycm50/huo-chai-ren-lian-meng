#include "BLYuanZhengWinResultPresenter.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "BLYuanZhengWinResultView.h"
#include "CCNode.h"
#include "CCObject.h"
#include "CCTouch.h"
#include "CCDirector.h"
#include "BLCommonCostItemPresenter.h"
#include "BLLeakUtils.h"
#include "BLTableView.h"
#include "DataCacheManager.h"
#include "DataManager.h"
#include "UIManager.h"
#include "ZhanCheDBData.h"
#include "ZhanCheItemData.h"
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
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_00660b18;
extern "C" unsigned long UNK_00660bb8;
extern "C" unsigned long UNK_00660bbc;
extern "C" unsigned long UNK_00660c0c;
extern "C" unsigned long UNK_00660c2c;
extern "C" unsigned long UNK_00660c78;
extern "C" unsigned long UNK_00660c9e;
extern "C" unsigned long UNK_00660cf8;
extern "C" unsigned long UNK_00660d20;
extern "C" unsigned long UNK_00660d36;
extern "C" unsigned long UNK_00660d62;
extern "C" unsigned long UNK_00660ec8;
extern "C" unsigned long _UNK_00660b1c;
extern "C" unsigned long _UNK_00660b78;
extern "C" unsigned long _UNK_00660ba0;
extern "C" unsigned long _UNK_00660c4c;
extern "C" unsigned long _UNK_00660c50;
extern "C" unsigned long _UNK_00660c54;
extern "C" unsigned long _UNK_00660c58;
extern "C" unsigned long _UNK_00660ce4;
extern "C" unsigned long _UNK_00660ce8;
extern "C" unsigned long _UNK_00660cfc;
extern "C" unsigned long _UNK_00660d24;
extern "C" unsigned long _UNK_00660da0;
extern "C" unsigned long _UNK_00660da4;
extern "C" unsigned long _UNK_00660ea0;
extern "C" unsigned long _UNK_00660fd0;
extern "C" unsigned long _UNK_00660fd4;
extern "C" unsigned long g_00660b18;
extern "C" unsigned long g_00660b1c;
extern "C" unsigned long g_00660b78;
extern "C" unsigned long g_00660ba0;
extern "C" unsigned long g_00660bb8;
extern "C" unsigned long g_00660bbc;
extern "C" unsigned long g_00660c0c;
extern "C" unsigned long g_00660c2c;
extern "C" unsigned long g_00660c4c;
extern "C" unsigned long g_00660c50;
extern "C" unsigned long g_00660c54;
extern "C" unsigned long g_00660c58;
extern "C" unsigned long g_00660c78;
extern "C" unsigned long g_00660c9e;
extern "C" unsigned long g_00660ce4;
extern "C" unsigned long g_00660ce8;
extern "C" unsigned long g_00660cf8;
extern "C" unsigned long g_00660cfc;
extern "C" unsigned long g_00660d20;
extern "C" unsigned long g_00660d24;
extern "C" unsigned long g_00660d36;
extern "C" unsigned long g_00660d62;
extern "C" unsigned long g_00660da0;
extern "C" unsigned long g_00660da4;
extern "C" unsigned long g_00660ea0;
extern "C" unsigned long g_00660ec8;
extern "C" unsigned long g_00660fd0;
extern "C" unsigned long g_00660fd4;
bool BLYuanZhengWinResultPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

int BLYuanZhengWinResultPresenter::numOfCellItem(BLTableView* p1)
{
  return *(int *)(((int)this) + 0x28) - *(int *)(((int)this) + 0x24) >> 2;
}

undefined4 BLYuanZhengWinResultPresenter::sizeOfCellItem(BLTableView* p1)
{
  0 /* ctorZero */;
  return ((int)this);
}

void BLYuanZhengWinResultPresenter::onBtnClick(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(g_00660ba0);
  return;
}


BLYuanZhengWinResultPresenter::~BLYuanZhengWinResultPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_00660c78 + g_00660ce4);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x38;
  *(int *)((int)this + 4*(6)) = iVar2 + 0x68;
  *(int *)((int)this + 4*(7)) = iVar2 + 0x7c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00660c9e + g_00660ce8,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  if (*(int *)((int)this + 4*(9)) != 0) {
    (void)(::operator delete((void *)(*(int *)((int)this + 4*(9)))));
  }
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLYuanZhengWinResultPresenter::BLYuanZhengWinResultPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_00660d36 + g_00660da0);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x38;
  *(int *)((int)this + 4*(7)) = iVar2 + 0x7c;
  *(int *)((int)this + 4*(6)) = iVar2 + 0x68;
  *(int *)((int)this + 4*(9)) = 0;
  *(int *)((int)this + 4*(10)) = 0;
  *(int *)((int)this + 4*(0xb)) = 0;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00660d62 + g_00660da4,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  ((UIManager *)this)->shareManager();
  ((UIManager *)this)->pushCurScrollViewUnEnable();
  return;
}

undefined4 BLYuanZhengWinResultPresenter::create()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x30))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLYuanZhengWinResultPresenter::onExit()
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

void BLYuanZhengWinResultPresenter::updateWithData()
{
  return;
}

// ===== 修复: 补回被误删的函数占位 (3) =====
void BLYuanZhengWinResultPresenter::nodeOfCellItemAtIndex(BLTableView* p1, cocos2d::CCNode* p2, int p3)
{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  
  iVar5 = (undefined4)(intptr_t)((int *)((int)this));
  if (((int)(intptr_t)(int)(intptr_t)p2 == 0) ||
     (piVar2 = (int *)func_0079e55c(p2,*(undefined4 *)((unsigned char *)((char *)&g_00660bbc + (intptr_t)(g_00660c50))),
                                      *(undefined4 *)((unsigned char *)((char *)&g_00660bb8 + (intptr_t)(g_00660c4c))),0,((int)this),
                                      p1,p2), piVar2 == (int *)0x0)) {
    piVar2 = (int *)::operator new(0x11c);
    ::new ((void *)piVar2) BLPetSkillIconView();   /* ALLOC+CTOR_FIX(R123): 类名由 llvm-cxxfilt 反修饰 + (函数,尺寸) 对齐 取得 */
    iVar3 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar2) + (0x18)))(piVar2));
    if (iVar3 == 0) goto code_r0x00660c30;
    ((cocos2d::CCObject *)(piVar2))->autorelease();
  }
  if (p3 < (uint)(*(int *)(((int)this) + 0x28) - *(int *)(((int)this) + 0x24) >> 2)) {
    iVar3 = (undefined4)(intptr_t)(p3 * 4);
    ((BLCommonCostItemPresenter *)(piVar2[0x42]))->updateWithId(**(undefined4 **)(*(int *)(((int)this) + 0x24) + iVar3));
    if (p3 < (uint)(*(int *)(((int)this) + 0x28) - *(int *)(((int)this) + 0x24) >> 2)) {
      ((BLCommonCostItemPresenter *)(piVar2[0x42]))->updateItemNum(*(undefined4 *)(*(int *)(*(int *)(((int)this) + 0x24) + iVar3) + 4));
      return;
    }
    puVar4 = (unsigned char *)((char *)&g_00660c2c + (intptr_t)(g_00660c58));
  }
  else {
    puVar4 = (unsigned char *)((char *)&g_00660c0c + (intptr_t)(g_00660c54));
  }
  func_0079e784(puVar4,p3);
code_r0x00660c30:
  (**(code **)(*(int *)(piVar2) + (8)))(piVar2);
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xff,0x660c3c);
  (*pcVar1)();
}

void BLYuanZhengWinResultPresenter::onEnter()
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
  iVar4 = (undefined4)(intptr_t)(iStack_2c - iStack_30);
  iStack_24 = 0;
  iStack_20 = 0;
  iStack_1c = 0;
  iVar3 = 0;
  if (iVar4 >> 2 != 0) {
    if (g_00660ea0 < (uint)(iVar4 >> 2)) {
      func_0079e5bc();
    }
    iVar3 = (undefined4)(intptr_t)(((long long)::operator new((size_t)(iVar4))));
  }
  iStack_1c = iVar3 + iVar4;
  iVar4 = (undefined4)(intptr_t)(iStack_2c - iStack_30);
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

void BLYuanZhengWinResultPresenter::initWithView(BLYuanZhengWinResultView* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
