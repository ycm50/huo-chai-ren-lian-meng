#include "BLMissionRewardInfoPresenter.h"
#include "CCNotificationCenter.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "BLMissionRewardInfoView.h"
#include "CCNode.h"
#include "CCObject.h"
#include "CCTouch.h"
#include "CCDirector.h"
#include "BLCommonCostItemPresenter.h"
#include "BLLeakUtils.h"
#include "BLTableView.h"
#include "DataManager.h"
#include "MissionStarRewardUserData.h"
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

extern "C" unsigned long g_005b7fcc;
extern "C" unsigned long g_005b8018;
extern "C" unsigned long g_005b7fec;
extern "C" unsigned long g_005b801c;
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e5bc(...);
extern "C" long long func_0079e68c(...);
extern "C" long long func_0079e784(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_005b7d2c;
extern "C" unsigned long UNK_005b7ed0;
extern "C" unsigned long UNK_005b7ed4;
extern "C" unsigned long UNK_005b7f24;
extern "C" unsigned long UNK_005b7f44;
extern "C" unsigned long UNK_005b84fa;
extern "C" unsigned long UNK_005b8538;
extern "C" unsigned long UNK_005b8562;
extern "C" unsigned long UNK_005b85b4;
extern "C" unsigned long UNK_005b85dc;
extern "C" unsigned long UNK_005b85f2;
extern "C" unsigned long UNK_005b861e;
extern "C" unsigned long _UNK_005b7d30;
extern "C" unsigned long _UNK_005b7e5c;
extern "C" unsigned long _UNK_005b7e60;
extern "C" unsigned long _UNK_005b7eb8;
extern "C" unsigned long _UNK_005b7f64;
extern "C" unsigned long _UNK_005b7f68;
extern "C" unsigned long _UNK_005b7f6c;
extern "C" unsigned long _UNK_005b7f70;
extern "C" unsigned long _UNK_005b8524;
extern "C" unsigned long _UNK_005b8528;
extern "C" unsigned long _UNK_005b852c;
extern "C" unsigned long _UNK_005b85a0;
extern "C" unsigned long _UNK_005b85a4;
extern "C" unsigned long _UNK_005b85b8;
extern "C" unsigned long _UNK_005b85e0;
extern "C" unsigned long _UNK_005b865c;
extern "C" unsigned long _UNK_005b8660;
extern "C" unsigned long _UNK_005b8768;
extern "C" unsigned long g_005b7d2c;
extern "C" unsigned long g_005b7d30;
extern "C" unsigned long g_005b7e5c;
extern "C" unsigned long g_005b7e60;
extern "C" unsigned long g_005b7eb8;
extern "C" unsigned long g_005b7ed0;
extern "C" unsigned long g_005b7ed4;
extern "C" unsigned long g_005b7f24;
extern "C" unsigned long g_005b7f44;
extern "C" unsigned long g_005b7f64;
extern "C" unsigned long g_005b7f68;
extern "C" unsigned long g_005b7f6c;
extern "C" unsigned long g_005b7f70;
extern "C" unsigned long g_005b84fa;
extern "C" unsigned long g_005b8524;
extern "C" unsigned long g_005b8528;
extern "C" unsigned long g_005b852c;
extern "C" unsigned long g_005b8538;
extern "C" unsigned long g_005b8562;
extern "C" unsigned long g_005b85a0;
extern "C" unsigned long g_005b85a4;
extern "C" unsigned long g_005b85b4;
extern "C" unsigned long g_005b85b8;
extern "C" unsigned long g_005b85dc;
extern "C" unsigned long g_005b85e0;
extern "C" unsigned long g_005b85f2;
extern "C" unsigned long g_005b861e;
extern "C" unsigned long g_005b865c;
extern "C" unsigned long g_005b8660;
extern "C" unsigned long g_005b8768;
bool BLMissionRewardInfoPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

int BLMissionRewardInfoPresenter::numOfCellItem(BLTableView* p1)
{
  return *(int *)(((int)this) + 0x28) - *(int *)(((int)this) + 0x24) >> 2;
}

undefined4 BLMissionRewardInfoPresenter::sizeOfCellItem(BLTableView* p1)
{
  0 /* ctorZero */;
  return ((int)this);
}

void BLMissionRewardInfoPresenter::onBtnClose(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  iVar2 = (undefined4)((void)(((UIManager *)(uVar1))->getUIObject(0x1f)),(intptr_t)0);
  if (iVar2 != 0) {
    uVar1 = (undefined4)(((UIManager *)this)->shareManager());
    ((UIManager *)(uVar1))->removeUIByID(0x1f);
  }
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  iVar2 = (undefined4)((void)(((UIManager *)(uVar1))->getUIObject(0x20)),(intptr_t)0);
  if (iVar2 != 0) {
    uVar1 = (undefined4)(((UIManager *)this)->shareManager());
    ((UIManager *)(uVar1))->removeUIByID(0x20);
  }
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)(uVar1))->removeUIByID(g_005b7eb8);
  return;
}

void BLMissionRewardInfoPresenter::nodeOfCellItemAtIndex(BLTableView* p1, cocos2d::CCNode* p2, int p3)
{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  
  iVar5 = (undefined4)(intptr_t)((int *)((int)this));
  if (((int)(intptr_t)(int)(intptr_t)p2 == 0) ||
     (piVar2 = (int *)func_0079e55c(p2,*(undefined4 *)((unsigned char *)((char *)&g_005b7ed4 + (intptr_t)(g_005b7f68))),
                                      *(undefined4 *)((unsigned char *)((char *)&g_005b7ed0 + (intptr_t)(g_005b7f64))),0,((int)this),
                                      p1,p2), piVar2 == (int *)0x0)) {
    piVar2 = (int *)::operator new(0x11c);
    ::new ((void *)piVar2) BLPetSkillIconView();   /* ALLOC+CTOR_FIX(R123): 类名由 llvm-cxxfilt 反修饰 + (函数,尺寸) 对齐 取得 */
    iVar3 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar2) + (0x18)))(piVar2));
    if (iVar3 == 0) goto code_r0x005b7f48;
    ((cocos2d::CCObject *)(piVar2))->autorelease();
  }
  if (p3 < (uint)(*(int *)(((int)this) + 0x28) - *(int *)(((int)this) + 0x24) >> 2)) {
    iVar3 = (undefined4)(intptr_t)(p3 * 4);
    ((BLCommonCostItemPresenter *)(piVar2[0x42]))->updateWithId(**(undefined4 **)(*(int *)(((int)this) + 0x24) + iVar3));
    if (p3 < (uint)(*(int *)(((int)this) + 0x28) - *(int *)(((int)this) + 0x24) >> 2)) {
      ((BLCommonCostItemPresenter *)(piVar2[0x42]))->updateItemNum(*(undefined4 *)(*(int *)(*(int *)(((int)this) + 0x24) + iVar3) + 4));
      return;
    }
    puVar4 = (unsigned char *)((char *)&g_005b7f44 + (intptr_t)(g_005b7f70));
  }
  else {
    puVar4 = (unsigned char *)((char *)&g_005b7f24 + (intptr_t)(g_005b7f6c));
  }
  func_0079e784(puVar4,p3);
code_r0x005b7f48:
  (**(code **)(*(int *)(piVar2) + (8)))(piVar2);
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xff,0x5b7f54);
  (*pcVar1)();
}

void BLMissionRewardInfoPresenter::onEnter()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14, 1, 1);
  return;
}

void BLMissionRewardInfoPresenter::onExit()
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

void BLMissionRewardInfoPresenter::onBtnAccept(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  iVar2 = (undefined4)((void)(((UIManager *)(uVar1))->getUIObject(0x1f)),(intptr_t)0);
  if (iVar2 != 0) {
    uVar1 = (undefined4)(((UIManager *)this)->shareManager());
    ((UIManager *)(uVar1))->removeUIByID(0x1f);
  }
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  iVar2 = (undefined4)((void)(((UIManager *)(uVar1))->getUIObject(0x20)),(intptr_t)0);
  if (iVar2 != 0) {
    uVar1 = (undefined4)(((UIManager *)this)->shareManager());
    ((UIManager *)(uVar1))->removeUIByID(0x20);
  }
  piVar3 = (int *)((DataManager *)this)->shareDataManager();
  piVar3 = (int *)(**(code **)(*(int *)(piVar3) + (0x28)))();
  uVar1 = (undefined4)((**(code **)(*(int *)(piVar3) + (0x198)))());
  ((MissionStarRewardUserData *)(uVar1))->acceptReward(*(undefined4 *)(((int)this) + 0x30), *(undefined4 *)(((int)this) + 0x34));
  piVar3 = *(int **)(((int)this) + 0x24);
  iStack_30 = 0;
  iStack_2c = 0;
  uStack_28 = (undefined4)(0);
  for (; piVar3 != *(int **)(((int)this) + 0x28); piVar3 = piVar3 + 1) {
    ((std::vector<int, std::allocator<int>> *)(&iStack_30))->push_back(*piVar3);
    ((std::vector<int, std::allocator<int>> *)(&iStack_30))->push_back(*piVar3 + 4);
  }
  iVar4 = (undefined4)(intptr_t)(iStack_2c - iStack_30);
  iStack_24 = 0;
  iStack_20 = 0;
  iStack_1c = 0;
  iVar2 = 0;
  if (iVar4 >> 2 != 0) {
    if (g_005b8524 < (uint)(iVar4 >> 2)) {
      func_0079e5bc();
    }
    iVar2 = (undefined4)(intptr_t)(func_0079e2fc(iVar4));
  }
  iStack_1c = (undefined4)(intptr_t)(iVar2 + iVar4);
  iVar4 = (undefined4)(intptr_t)(iStack_2c - iStack_30);
  iStack_24 = (undefined4)(intptr_t)(iVar2);
  if (iVar4 >> 2 != 0) {
    iStack_20 = (undefined4)(intptr_t)(iVar2);
    func_0079e68c(iVar2,iStack_30,iVar4);
  }
  iStack_20 = (undefined4)(intptr_t)(iVar2 + iVar4);
  0 /* ctorZero */;
  ((std::vector<int, std::allocator<int>> *)(&iStack_24))->~vector();
  uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)(uVar1))->postNotification((char const*)(unsigned char *)((char *)&g_005b84fa + (intptr_t)(g_005b8528)));
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)(uVar1))->removeUIByID(g_005b852c);
  ((std::vector<int, std::allocator<int>> *)(&iStack_30))->~vector();
  return;
}

BLMissionRewardInfoPresenter::~BLMissionRewardInfoPresenter()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  iVar2 = *(int *)(&g_005b8538 + g_005b85a0);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x38;
  *(int *)((int)this + 4*(6)) = iVar2 + 0x68;
  *(int *)((int)this + 4*(7)) = iVar2 + 0x7c;
  piStack_20 = (int *)((int)this);
  uStack_1c = (undefined4)(p2);
  uStack_18 = (undefined4)(p3);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_1c,&g_005b8562 + g_005b85a4,&piStack_20);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_1c);
  func_0079e2bc(&uStack_1c);
  ((std::vector<CostItemData*, std::allocator<CostItemData*>> *)((int)this) + 9)->~vector();
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLMissionRewardInfoPresenter::BLMissionRewardInfoPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_005b85f2 + g_005b865c);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x38;
  *(int *)((int)this + 4*(7)) = iVar2 + 0x7c;
  *(int *)((int)this + 4*(6)) = iVar2 + 0x68;
  *(int *)((int)this + 4*(9)) = 0;
  *(int *)((int)this + 4*(10)) = 0;
  *(int *)((int)this + 4*(0xb)) = 0;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005b861e + g_005b8660,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  ((UIManager *)this)->shareManager();
  ((UIManager *)this)->pushCurScrollViewUnEnable();
  *(int *)((int)this + 4*(10)) = *(int *)((int)this + 4*(9));
  return;
}

undefined4 BLMissionRewardInfoPresenter::create()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x38))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLMissionRewardInfoPresenter::updateWithData(std::vector<CostItemData*, std::allocator<CostItemData*>>& p1, bool p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

// ===== 修复: 补回被误删的函数占位 (1) =====
void BLMissionRewardInfoPresenter::initWithView(BLMissionRewardInfoView* p1)
{
  int *piVar1;
  undefined4 uVar2;
  
  *(int *)(((int)this) + 0x20) = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  (**(code **)(**(int **)(p1 + 0x10c) + 0x214))(*(int **)(p1 + 0x10c),((int)this) + 0x18);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x20) + 0x10c);
  (**(code **)(*(int *)(piVar1) + (0x21c)))(piVar1,((int)this) + 0x1c);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x20) + 0x110);
  uVar2 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_005b7fcc + (intptr_t)(g_005b8018))));
  (**(code **)(*(int *)(piVar1) + (0x254)))(piVar1,((int)this),uVar2,0,0x20);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x20) + 0x114);
  (**(code **)(*(int *)(piVar1) + (0x254)))
            (piVar1,((int)this),*(undefined4 *)((unsigned char *)((char *)&g_005b7fec + (intptr_t)(g_005b801c))),0,0x20);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x20) + 0x11c);
  (**(code **)(*(int *)(piVar1) + (0x254)))(piVar1,((int)this),uVar2,0,0x20);
  return;
}
