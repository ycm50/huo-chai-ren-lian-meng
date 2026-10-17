#include "BLChallengeFailedResultPresenter.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "BLChallengeFailedResultView.h"
#include "CCNode.h"
#include "CCObject.h"
#include "CCTouch.h"
#include "CCDirector.h"
#include "BLCommonCostItemPresenter.h"
#include "BLLeakUtils.h"
#include "BLResultManager.h"
#include "BLTableView.h"
#include "ChallengeData.h"
#include "ChallengeHttpUtil.h"
#include "ChallengeItemData.h"
#include "ChallengeUserData.h"
#include "DataCacheManager.h"
#include "DataManager.h"
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
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e5bc(...);
extern "C" long long func_0079e68c(...);
extern "C" long long func_0079e69c(...);
extern "C" long long func_0079e784(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0065559c;
extern "C" unsigned long UNK_00655634;
extern "C" unsigned long UNK_00655638;
extern "C" unsigned long UNK_00655688;
extern "C" unsigned long UNK_006556a8;
extern "C" unsigned long UNK_00655718;
extern "C" unsigned long UNK_00655742;
extern "C" unsigned long UNK_00655794;
extern "C" unsigned long UNK_006557bc;
extern "C" unsigned long UNK_006557d2;
extern "C" unsigned long UNK_006557fe;
extern "C" unsigned long UNK_00655a4a;
extern "C" unsigned long UNK_00655a66;
extern "C" unsigned long UNK_00655a86;
extern "C" unsigned long UNK_00655aaa;
extern "C" unsigned long UNK_00655b4a;
extern "C" unsigned long _UNK_006555a0;
extern "C" unsigned long _UNK_006555fc;
extern "C" unsigned long _UNK_006556c8;
extern "C" unsigned long _UNK_006556cc;
extern "C" unsigned long _UNK_006556d0;
extern "C" unsigned long _UNK_006556d4;
extern "C" unsigned long _UNK_00655780;
extern "C" unsigned long _UNK_00655784;
extern "C" unsigned long _UNK_00655798;
extern "C" unsigned long _UNK_006557c0;
extern "C" unsigned long _UNK_00655838;
extern "C" unsigned long _UNK_0065583c;
extern "C" unsigned long _UNK_00655b04;
extern "C" unsigned long _UNK_00655b08;
extern "C" unsigned long _UNK_00655b0c;
extern "C" unsigned long _UNK_00655b10;
extern "C" unsigned long _UNK_00655b14;
extern "C" unsigned long _UNK_00655b18;
extern "C" unsigned long _UNK_00655b1c;
extern "C" unsigned long _UNK_00655b20;
extern "C" unsigned long _UNK_00655b24;
extern "C" unsigned long _UNK_00655c40;
extern "C" unsigned long _UNK_00655c44;
extern "C" unsigned long _UNK_00655c48;
extern "C" unsigned long g_0065559c;
extern "C" unsigned long g_006555a0;
extern "C" unsigned long g_006555fc;
extern "C" unsigned long g_00655634;
extern "C" unsigned long g_00655638;
extern "C" unsigned long g_00655688;
extern "C" unsigned long g_006556a8;
extern "C" unsigned long g_006556c8;
extern "C" unsigned long g_006556cc;
extern "C" unsigned long g_006556d0;
extern "C" unsigned long g_006556d4;
extern "C" unsigned long g_00655718;
extern "C" unsigned long g_00655742;
extern "C" unsigned long g_00655780;
extern "C" unsigned long g_00655784;
extern "C" unsigned long g_00655794;
extern "C" unsigned long g_00655798;
extern "C" unsigned long g_006557bc;
extern "C" unsigned long g_006557c0;
extern "C" unsigned long g_006557d2;
extern "C" unsigned long g_006557fe;
extern "C" unsigned long g_00655838;
extern "C" unsigned long g_0065583c;
extern "C" unsigned long g_00655a4a;
extern "C" unsigned long g_00655a66;
extern "C" unsigned long g_00655a86;
extern "C" unsigned long g_00655aaa;
extern "C" unsigned long g_00655b04;
extern "C" unsigned long g_00655b08;
extern "C" unsigned long g_00655b0c;
extern "C" unsigned long g_00655b10;
extern "C" unsigned long g_00655b14;
extern "C" unsigned long g_00655b18;
extern "C" unsigned long g_00655b1c;
extern "C" unsigned long g_00655b20;
extern "C" unsigned long g_00655b24;
extern "C" unsigned long g_00655b4a;
extern "C" unsigned long g_00655c40;
extern "C" unsigned long g_00655c44;
extern "C" unsigned long g_00655c48;
bool BLChallengeFailedResultPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

int BLChallengeFailedResultPresenter::numOfCellItem(BLTableView* p1)
{
  return *(int *)(((int)this) + 0x28) - *(int *)(((int)this) + 0x24) >> 2;
}

undefined4 BLChallengeFailedResultPresenter::sizeOfCellItem(BLTableView* p1)
{
  0 /* ctorZero */;
  return ((int)this);
}

void BLChallengeFailedResultPresenter::onBtnClick(cocos2d::CCObject* p1, unsigned int p2)
{
  ((BLResultManager *)this)->shareManager();
  ((BLResultManager *)this)->returnMainCity();
  return;
}


void BLChallengeFailedResultPresenter::onExit()
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

void BLChallengeFailedResultPresenter::updateWithData()
{
  return;
}

BLChallengeFailedResultPresenter::~BLChallengeFailedResultPresenter()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  iVar2 = *(int *)(&g_00655718 + g_00655780);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x38;
  *(int *)((int)this + 4*(6)) = iVar2 + 0x68;
  *(int *)((int)this + 4*(7)) = iVar2 + 0x7c;
  piStack_20 = (int *)((int)this);
  uStack_1c = (undefined4)(p2);
  uStack_18 = (undefined4)(p3);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_1c,&g_00655742 + g_00655784,&piStack_20);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_1c);
  func_0079e2bc(&uStack_1c);
  ((std::vector<CostItemData*, std::allocator<CostItemData*>> *)((int)this) + 9)->~vector();
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLChallengeFailedResultPresenter::BLChallengeFailedResultPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_006557d2 + g_00655838);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x38;
  *(int *)((int)this + 4*(7)) = iVar2 + 0x7c;
  *(int *)((int)this + 4*(6)) = iVar2 + 0x68;
  *(int *)((int)this + 4*(9)) = 0;
  *(int *)((int)this + 4*(10)) = 0;
  *(int *)((int)this + 4*(0xb)) = 0;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_006557fe + g_0065583c,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  ((UIManager *)this)->shareManager();
  ((UIManager *)this)->pushCurScrollViewUnEnable();
  return;
}

undefined4 BLChallengeFailedResultPresenter::create()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x30))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

// ===== 修复: 补回被误删的函数占位 (3) =====
void BLChallengeFailedResultPresenter::nodeOfCellItemAtIndex(BLTableView* p1, cocos2d::CCNode* p2, int p3)
{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  
  iVar5 = (undefined4)(intptr_t)((int *)((int)this));
  if (((int)(intptr_t)(int)(intptr_t)p2 == 0) ||
     (piVar2 = (int *)func_0079e55c(p2,*(undefined4 *)((unsigned char *)((char *)&g_00655638 + (intptr_t)(g_006556cc))),
                                      *(undefined4 *)((unsigned char *)((char *)&g_00655634 + (intptr_t)(g_006556c8))),0,((int)this),
                                      p1,p2), piVar2 == (int *)0x0)) {
    piVar2 = (int *)::operator new(0x11c);
    ::new ((void *)piVar2) BLPetSkillIconView();   /* ALLOC+CTOR_FIX(R123): 类名由 llvm-cxxfilt 反修饰 + (函数,尺寸) 对齐 取得 */
    iVar3 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar2) + (0x18)))(piVar2));
    if (iVar3 == 0) goto code_r0x006556ac;
    ((cocos2d::CCObject *)(piVar2))->autorelease();
  }
  if (p3 < (uint)(*(int *)(((int)this) + 0x28) - *(int *)(((int)this) + 0x24) >> 2)) {
    iVar3 = (undefined4)(intptr_t)(p3 * 4);
    ((BLCommonCostItemPresenter *)(piVar2[0x42]))->updateWithId(**(undefined4 **)(*(int *)(((int)this) + 0x24) + iVar3));
    if (p3 < (uint)(*(int *)(((int)this) + 0x28) - *(int *)(((int)this) + 0x24) >> 2)) {
      ((BLCommonCostItemPresenter *)(piVar2[0x42]))->updateItemNum(*(undefined4 *)(*(int *)(*(int *)(((int)this) + 0x24) + iVar3) + 4));
      return;
    }
    puVar4 = (unsigned char *)((char *)&g_006556a8 + (intptr_t)(g_006556d4));
  }
  else {
    puVar4 = (unsigned char *)((char *)&g_00655688 + (intptr_t)(g_006556d0));
  }
  func_0079e784(puVar4,p3);
code_r0x006556ac:
  (**(code **)(*(int *)(piVar2) + (8)))(piVar2);
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xff,0x6556b8);
  (*pcVar1)();
}

void BLChallengeFailedResultPresenter::onEnter()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLChallengeFailedResultPresenter::initWithView(BLChallengeFailedResultView* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
