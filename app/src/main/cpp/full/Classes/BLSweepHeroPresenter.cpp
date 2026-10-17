#include "BLSweepHeroPresenter.h"
#include "MissionSweepData.h"
#include "CCDictionary.h"
#include "CCNotificationCenter.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "CCArray.h"
#include "CCObject.h"
#include "CCNode.h"
#include "CCTouch.h"
#include "CCString.h"
#include "CCDirector.h"
#include "RoleData.h"
#include "BLForwards.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLSweepHeroItemPresenter.h"
#include "BLSweepHeroItemView.h"
#include "BLSweepHeroView.h"
#include "BLTableView.h"
#include "DataManager.h"
#include "MissionSelectHeroData.h"
#include "PlatformHelp.h"
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
template <class T, class... A> std::string ConvertToString(A...);
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e43c(...);
extern "C" long long func_0079e44c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e46c(...);
extern "C" long long func_0079e47c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e5bc(...);
extern "C" long long func_0079e5dc(...);
extern "C" long long func_0079e854(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_005d6558;
extern "C" unsigned long UNK_005d6570;
extern "C" unsigned long UNK_005d6588;
extern "C" unsigned long UNK_005d6614;
extern "C" unsigned long UNK_005d6648;
extern "C" unsigned long UNK_005d668c;
extern "C" unsigned long UNK_005d66b4;
extern "C" unsigned long UNK_005d66d4;
extern "C" unsigned long UNK_005d6700;
extern "C" unsigned long UNK_005d671c;
extern "C" unsigned long UNK_005d671e;
extern "C" unsigned long UNK_005d6744;
extern "C" unsigned long UNK_005d6746;
extern "C" unsigned long UNK_005d6794;
extern "C" unsigned long UNK_005d67ba;
extern "C" unsigned long UNK_005d67be;
extern "C" unsigned long UNK_005d67fe;
extern "C" unsigned long UNK_005d6858;
extern "C" unsigned long UNK_005d685a;
extern "C" unsigned long UNK_005d6868;
extern "C" unsigned long UNK_005d689a;
extern "C" unsigned long UNK_005d68a8;
extern "C" unsigned long UNK_005d6962;
extern "C" unsigned long UNK_005d6964;
extern "C" unsigned long UNK_005d69a2;
extern "C" unsigned long UNK_005d69c6;
extern "C" unsigned long UNK_005d6a18;
extern "C" unsigned long UNK_005d6a50;
extern "C" unsigned long UNK_005d6b94;
extern "C" unsigned long UNK_005d6b96;
extern "C" unsigned long UNK_005d6cf8;
extern "C" unsigned long UNK_005d6d1c;
extern "C" unsigned long UNK_005d6d54;
extern "C" unsigned long UNK_005d6d88;
extern "C" unsigned long UNK_005d6db6;
extern "C" unsigned long UNK_005d6dd2;
extern "C" unsigned long UNK_005d6df4;
extern "C" unsigned long UNK_005d6e5e;
extern "C" unsigned long _UNK_005d655c;
extern "C" unsigned long _UNK_005d6574;
extern "C" unsigned long _UNK_005d658c;
extern "C" unsigned long _UNK_005d6678;
extern "C" unsigned long _UNK_005d667c;
extern "C" unsigned long _UNK_005d6690;
extern "C" unsigned long _UNK_005d66b8;
extern "C" unsigned long _UNK_005d66d8;
extern "C" unsigned long _UNK_005d66ec;
extern "C" unsigned long _UNK_005d66f0;
extern "C" unsigned long _UNK_005d6704;
extern "C" unsigned long _UNK_005d6760;
extern "C" unsigned long _UNK_005d6764;
extern "C" unsigned long _UNK_005d6768;
extern "C" unsigned long _UNK_005d676c;
extern "C" unsigned long _UNK_005d6834;
extern "C" unsigned long _UNK_005d6838;
extern "C" unsigned long _UNK_005d683c;
extern "C" unsigned long _UNK_005d6840;
extern "C" unsigned long _UNK_005d686c;
extern "C" unsigned long _UNK_005d6870;
extern "C" unsigned long _UNK_005d6874;
extern "C" unsigned long _UNK_005d68b8;
extern "C" unsigned long _UNK_005d68bc;
extern "C" unsigned long _UNK_005d6984;
extern "C" unsigned long _UNK_005d6988;
extern "C" unsigned long _UNK_005d6b24;
extern "C" unsigned long _UNK_005d6b28;
extern "C" unsigned long _UNK_005d6b2c;
extern "C" unsigned long _UNK_005d6b30;
extern "C" unsigned long _UNK_005d6cdc;
extern "C" unsigned long _UNK_005d6ce0;
extern "C" unsigned long _UNK_005d6ce4;
extern "C" unsigned long _UNK_005d6d08;
extern "C" unsigned long _UNK_005d6d2c;
extern "C" unsigned long _UNK_005d6d64;
extern "C" unsigned long _UNK_005d6ed4;
extern "C" unsigned long _UNK_005d6ed8;
extern "C" unsigned long _UNK_005d6edc;
extern "C" unsigned long _UNK_005d6ee0;
extern "C" unsigned long _UNK_005d6ee4;
extern "C" unsigned long g_005d6558;
extern "C" unsigned long g_005d655c;
extern "C" unsigned long g_005d6570;
extern "C" unsigned long g_005d6574;
extern "C" unsigned long g_005d6588;
extern "C" unsigned long g_005d658c;
extern "C" unsigned long g_005d6614;
extern "C" unsigned long g_005d6648;
extern "C" unsigned long g_005d6678;
extern "C" unsigned long g_005d667c;
extern "C" unsigned long g_005d668c;
extern "C" unsigned long g_005d6690;
extern "C" unsigned long g_005d66b4;
extern "C" unsigned long g_005d66b8;
extern "C" unsigned long g_005d66d4;
extern "C" unsigned long g_005d66d8;
extern "C" unsigned long g_005d66ec;
extern "C" unsigned long g_005d66f0;
extern "C" unsigned long g_005d6700;
extern "C" unsigned long g_005d6704;
extern "C" unsigned long g_005d671c;
extern "C" unsigned long g_005d671e;
extern "C" unsigned long g_005d6744;
extern "C" unsigned long g_005d6746;
extern "C" unsigned long g_005d6760;
extern "C" unsigned long g_005d6764;
extern "C" unsigned long g_005d6768;
extern "C" unsigned long g_005d676c;
extern "C" unsigned long g_005d6794;
extern "C" unsigned long g_005d67ba;
extern "C" unsigned long g_005d67be;
extern "C" unsigned long g_005d67fe;
extern "C" unsigned long g_005d6834;
extern "C" unsigned long g_005d6838;
extern "C" unsigned long g_005d683c;
extern "C" unsigned long g_005d6840;
extern "C" unsigned long g_005d6858;
extern "C" unsigned long g_005d685a;
extern "C" unsigned long g_005d6868;
extern "C" unsigned long g_005d686c;
extern "C" unsigned long g_005d6870;
extern "C" unsigned long g_005d6874;
extern "C" unsigned long g_005d689a;
extern "C" unsigned long g_005d68a8;
extern "C" unsigned long g_005d68b8;
extern "C" unsigned long g_005d68bc;
extern "C" unsigned long g_005d6962;
extern "C" unsigned long g_005d6964;
extern "C" unsigned long g_005d6984;
extern "C" unsigned long g_005d6988;
extern "C" unsigned long g_005d69a2;
extern "C" unsigned long g_005d69c6;
extern "C" unsigned long g_005d6a18;
extern "C" unsigned long g_005d6a50;
extern "C" unsigned long g_005d6b24;
extern "C" unsigned long g_005d6b28;
extern "C" unsigned long g_005d6b2c;
extern "C" unsigned long g_005d6b30;
extern "C" unsigned long g_005d6b94;
extern "C" unsigned long g_005d6b96;
extern "C" unsigned long g_005d6cdc;
extern "C" unsigned long g_005d6ce0;
extern "C" unsigned long g_005d6ce4;
extern "C" unsigned long g_005d6cf8;
extern "C" unsigned long g_005d6d08;
extern "C" unsigned long g_005d6d1c;
extern "C" unsigned long g_005d6d2c;
extern "C" unsigned long g_005d6d54;
extern "C" unsigned long g_005d6d64;
extern "C" unsigned long g_005d6d88;
extern "C" unsigned long g_005d6db6;
extern "C" unsigned long g_005d6dd2;
extern "C" unsigned long g_005d6df4;
extern "C" unsigned long g_005d6e5e;
extern "C" unsigned long g_005d6ed4;
extern "C" unsigned long g_005d6ed8;
extern "C" unsigned long g_005d6edc;
extern "C" unsigned long g_005d6ee0;
extern "C" unsigned long g_005d6ee4;
bool BLSweepHeroPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLSweepHeroPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLSweepHeroPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLSweepHeroPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLSweepHeroPresenter::tick(float p1)
{
  return;
}

void BLSweepHeroPresenter::touchItemAtIndex(BLTableView* p1, cocos2d::CCNode* p2, int p3)
{
  return;
}

void BLSweepHeroPresenter::onSure(cocos2d::CCObject* p1, unsigned int p2)
{
  return;
}

BLSweepHeroPresenter::~BLSweepHeroPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_005d6614 + g_005d6678);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x4c;
  *(int *)((int)this + 4*(6)) = iVar2 + 0x7c;
  *(int *)((int)this + 4*(7)) = iVar2 + 0x8c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  if (*(int *)((int)this + 4*(9)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(9)) = 0;
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005d6648 + g_005d667c,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLSweepHeroPresenter::numOfCellItem(BLTableView* p1)
{
  ((cocos2d::CCArray *)*(undefined4 *)(((int)this) + 0x24))->count();
  return;
}

undefined4 BLSweepHeroPresenter::sizeOfCellItem(BLTableView* p1)
{
  0 /* ctorZero */;
  return ((int)this);
}


BLSweepHeroPresenter::BLSweepHeroPresenter()
{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [4];
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  0 /* ctorZero */;
  iVar3 = (undefined4)(intptr_t)(*(int *)((unsigned char *)((char *)&g_005d6794 + (intptr_t)(g_005d6834))));
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x4c;
  *(int *)((int)this + 4*(6)) = iVar3 + 0x7c;
  *(int *)((int)this + 4*(7)) = iVar3 + 0x8c;
  uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  uStack_18 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_005d67ba + (intptr_t)(g_005d6838))));
  uStack_14 = (undefined4)(0);
  ((cocos2d::CCNotificationCenter *)(((int)this)))->addObserver((cocos2d::CCObject*)uStack_18, 0, (char const*)(unsigned char *)((char *)&g_005d67be + (intptr_t)(g_005d683c)), 0);
  piVar2 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar1 = (undefined4)((**(code **)(*(int *)(piVar2) + (0x40)))());
  ((cocos2d::CCTouchDispatcher *)(uVar1))->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 1);
  ((UIManager *)this)->shareManager();
  ((UIManager *)this)->pushCurScrollViewUnEnable();
  iVar3 = (undefined4)(intptr_t)(cocos2d::CCArray::create());
  *(int *)((int)this + 4*(9)) = iVar3;
  if (iVar3 != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(auStack_1c,(unsigned char *)((char *)&g_005d67fe + (intptr_t)(g_005d6840)),auStack_20);
  ((BLLeakUtils *)(uVar1))->addClass((std::string)(char*)auStack_1c);
  func_0079e2bc(auStack_1c);
  return;
}


void BLSweepHeroPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar2)->removeObserver((cocos2d::CCObject*)((int)this), (char const*)&g_005d689a + g_005d68b8);
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar2)->removeObserver((cocos2d::CCObject*)((int)this), (char const*)&g_005d68a8 + g_005d68bc);
  ((UIManager *)this)->shareManager();
  ((UIManager *)this)->popUnEnableScrollView();
  ((PlatformHelp *)this)->hideLenovoBanner();
  return;
}

undefined4 BLSweepHeroPresenter::create(BLSweepHeroView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x28))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}




void BLSweepHeroPresenter::onClose(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  BLSweepHeroPresenter::updateSelecetData();
  uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar1)->postNotification((char const*)&g_005d6cf8 + g_005d6d08);
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(0x15);
  return;
}

void BLSweepHeroPresenter::onCancle(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  BLSweepHeroPresenter::updateSelecetData();
  uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar1)->postNotification((char const*)&g_005d6d1c + g_005d6d2c);
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(0x15);
  return;
}

// ===== 修复: 补回被误删的函数占位 (7) =====
void BLSweepHeroPresenter::nodeOfCellItemAtIndex(BLTableView* p1, cocos2d::CCNode* p2, int p3)
{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (((int)(intptr_t)p2 == 0) ||
     (iVar1 = func_0079e55c(p2,*(undefined4 *)((unsigned char *)((char *)&g_005d671c + (intptr_t)(g_005d6760))),
                              *(undefined4 *)((unsigned char *)((char *)&g_005d671e + (intptr_t)(g_005d6764))),0), iVar1 == 0)) {
    iVar1 = (undefined4)(intptr_t)(((BLSweepHeroItemView *)this)->create());
  }
  iVar2 = (undefined4)(intptr_t)(((cocos2d::CCArray *)*(undefined4 *)(((int)this) + 0x24))->objectAtIndex((unsigned int)p3));
  uVar3 = (undefined4)(0);
  if (iVar2 != 0) {
    uVar3 = func_0079e55c(iVar2,*(undefined4 *)((unsigned char *)((char *)&g_005d6744 + (intptr_t)(g_005d6768))),
                            *(undefined4 *)((unsigned char *)((char *)&g_005d6746 + (intptr_t)(g_005d676c))),0);
  }
  uVar4 = (undefined4)(((BLSweepHeroItemView *)iVar1)->getPresenter());
  ((BLSweepHeroItemPresenter *)uVar4)->initWithRoleData((RoleData*)uVar3);
  return;
}

void BLSweepHeroPresenter::onEnter()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLSweepHeroPresenter::initRolesData()
{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  
  ((cocos2d::CCArray *)*(undefined4 *)(((int)this) + 0x24))->removeAllObjects();
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  piVar1 = (int *)(**(code **)(*piVar1 + 0x28))();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x60))());
  piVar1 = (int *)((long long)::operator new((size_t)(0x24)));
  0 /* ctorZero */;
  iVar3 = (undefined4)(intptr_t)(((MissionSelectHeroData *)piVar1)->init());
  if (iVar3 == 0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    piVar1 = (int *)0x0;
  }
  else {
    ((cocos2d::CCObject *)piVar1)->autorelease();
  }
  ((MissionSelectHeroData *)piVar1)->initWithMissionType(7);
  piVar4 = (int *)((DataManager *)this)->shareDataManager();
  (**(code **)(*piVar4 + 0x44))(piVar4,piVar1);
  for (uVar6 = 0; uVar5 = (undefined4)(intptr_t)(((cocos2d::CCArray *)uVar2)->count(), uVar6 < uVar5); uVar6 = uVar6 + 1) {
    iVar3 = (undefined4)(intptr_t)(((cocos2d::CCArray *)uVar2)->objectAtIndex((unsigned int)uVar6));
    if ((iVar3 != 0) &&
       (iVar3 = func_0079e55c(iVar3,*(undefined4 *)((unsigned char *)((char *)&g_005d6962 + (intptr_t)(g_005d6984))),
                                *(undefined4 *)((unsigned char *)((char *)&g_005d6964 + (intptr_t)(g_005d6988))),0), iVar3 != 0)) {
      ((cocos2d::CCArray *)this)->addObject((cocos2d::CCObject*)*(undefined4 *)(((int)this) + 0x24));
    }
  }
  return;
}

void BLSweepHeroPresenter::updateData(cocos2d::CCObject* p1)
{
  undefined4 uVar1;
  int *piVar2;
  undefined1 auStack_fc [4];
  undefined4 uStack_f8;
  undefined1 auStack_f4 [4];
  undefined1 auStack_f0 [4];
  undefined1 auStack_ec [4];
  undefined1 auStack_e8 [4];
  undefined1 auStack_e4 [4];
  undefined1 auStack_e0 [4];
  undefined1 auStack_dc [4];
  undefined1 auStack_d8 [4];
  undefined1 auStack_d4 [8];
  undefined1 auStack_cc [4];
  undefined1 auStack_c8 [180];
  
  uVar1 = (undefined4)(((BLLanguage *)this)->share());
  func_0079e45c(auStack_f4,(unsigned char *)((char *)&g_005d69a2 + (intptr_t)(g_005d6b24)),auStack_fc);
  (((BLLanguage *)this))->getString(*(std::string *)auStack_f0);
  func_0079e53c(auStack_ec,auStack_f0);
  func_0079e854(auStack_ec,(unsigned char *)((char *)&g_005d69c6 + (intptr_t)(g_005d6b28)));
  piVar2 = (int *)((DataManager *)this)->shareDataManager();
  piVar2 = (int *)(**(code **)(*(int *)(piVar2) + (0x40)))();
  (**(code **)(*(int *)(piVar2) + (0x28)))();
  uVar1 = (undefined4)(((cocos2d::CCDictionary *)this)->count());
  ConvertToString<unsigned int>((unsigned int)auStack_e8, uVar1, 0);
  func_0079e53c(auStack_e4,auStack_ec);
  func_0079e5dc(auStack_e4,auStack_e8);
  func_0079e53c(auStack_e0,auStack_e4);
  func_0079e854(auStack_e0,(unsigned char *)((char *)&g_005d6a18 + (intptr_t)(g_005d6b2c)));
  piVar2 = (int *)((DataManager *)this)->shareDataManager();
  piVar2 = (int *)(**(code **)(*(int *)(piVar2) + (0x38)))();
  uVar1 = (undefined4)((**(code **)(*(int *)(piVar2) + (0xa8)))());
  func_0079e43c(auStack_d4,0x18);
  func_0079e44c(auStack_cc,uVar1);
  func_0079e45c(auStack_d8,(unsigned char *)((char *)&g_005d6a50 + (intptr_t)(g_005d6b30)),auStack_dc);
  func_0079e46c(auStack_dc,auStack_c8);
  func_0079e2bc(auStack_d8);
  func_0079e47c(auStack_d4);
  func_0079e53c(&uStack_f8,auStack_e0);
  func_0079e5dc(&uStack_f8,auStack_dc);
  func_0079e2bc(auStack_dc);
  func_0079e2bc(auStack_e0);
  func_0079e2bc(auStack_e4);
  func_0079e2bc(auStack_e8);
  func_0079e2bc(auStack_ec);
  func_0079e2bc(auStack_f0);
  func_0079e2bc(auStack_f4);
  piVar2 = (int *)((BLSweepHeroView *)(*(undefined4 *)(((int)this) + 0x20)))->getLabRoleLimit();
  (**(code **)(*(int *)(piVar2) + (0x234)))(piVar2,uStack_f8);
  func_0079e2bc(&uStack_f8);
  return;
}

void BLSweepHeroPresenter::updateSelecetData()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLSweepHeroPresenter::onSweepUpdate()
{
  int iVar1;
  int *piVar2;
  code *pcVar3;
  undefined4 uVar4;
  
  piVar2 = *(int **)(*(int *)(((int)this) + 0x20) + 0x148);
  pcVar3 = *(code **)(*piVar2 + 0x234);
  iVar1 = (undefined4)(intptr_t)(((sir::singleton<MissionSweepData, 0> *)this)->instance());
  uVar4 = (undefined4)(*(undefined4 *)(iVar1 + 0x60));
  iVar1 = (undefined4)(intptr_t)(((sir::singleton<MissionSweepData, 0> *)this)->instance());
  cocos2d::CCString::createWithFormat((char const*)(unsigned char *)((char *)&g_005d6d54 + (intptr_t)(g_005d6d64)), uVar4, *(undefined4 *)(iVar1 + 100));
  uVar4 = (undefined4)(((cocos2d::CCString *)this)->getCString());
  (*pcVar3)(piVar2,uVar4);
  return;
}

void BLSweepHeroPresenter::initWithView(BLSweepHeroView* p1)
{
  int *piVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined1 auStack_38 [8];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  *(undefined4 *)(((int)this) + 0x20) = (undefined4)(intptr_t)p1;
  piVar1 = (int *)((BLSweepHeroView *)p1)->getBtnClose();
  pcVar4 = *(code **)(*piVar1 + 0x26c);
  func_0079e45c(&uStack_20,(unsigned char *)((char *)&g_005d6d88 + (intptr_t)(g_005d6ed4)),&uStack_28);
  (*pcVar4)(piVar1,&uStack_20);
  func_0079e2bc(&uStack_20);
  piVar1 = (int *)((BLSweepHeroView *)*(undefined4 *)(((int)this) + 0x20))->getBtnClose();
  uStack_30 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_005d6db6 + (intptr_t)(g_005d6ed8))));
  uStack_2c = (undefined4)(0);
  (**(code **)(*piVar1 + 0x254))(piVar1,((int)this),uStack_30,0,0x20);
  piVar1 = (int *)((BLSweepHeroView *)*(undefined4 *)(((int)this) + 0x20))->getBtnCancle();
  uStack_28 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_005d6dd2 + (intptr_t)(g_005d6edc))));
  uStack_24 = (undefined4)(0);
  (**(code **)(*piVar1 + 0x254))(piVar1,((int)this),uStack_28,0,0x20);
  piVar1 = (int *)((BLSweepHeroView *)*(undefined4 *)(((int)this) + 0x20))->getBtnSure();
  uStack_20 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_005d6df4 + (intptr_t)(g_005d6ee0))));
  uStack_1c = (undefined4)(0);
  (**(code **)(*piVar1 + 0x254))(piVar1,((int)this),uStack_20,0,0x20);
  piVar1 = (int *)((BLSweepHeroView *)*(undefined4 *)(((int)this) + 0x20))->getBtnClose();
  pcVar4 = *(code **)(*piVar1 + 0x28c);
  piVar2 = (int *)((BLSweepHeroView *)*(undefined4 *)(((int)this) + 0x20))->getBtnClose();
  piVar2 = (int *)(**(code **)(*piVar2 + 0x308))(piVar2,1);
  (**(code **)(*piVar2 + 0x1cc))(auStack_38,piVar2);
  (*pcVar4)(piVar1,auStack_38);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x20) + 0x148);
  pcVar4 = *(code **)(*piVar1 + 0x234);
  iVar3 = (undefined4)(intptr_t)(((sir::singleton<MissionSweepData, 0> *)this)->instance());
  uVar5 = (undefined4)(*(undefined4 *)(iVar3 + 0x60));
  iVar3 = (undefined4)(intptr_t)(((sir::singleton<MissionSweepData, 0> *)this)->instance());
  cocos2d::CCString::createWithFormat((char const*)(unsigned char *)((char *)&g_005d6e5e + (intptr_t)(g_005d6ee4)), uVar5, *(undefined4 *)(iVar3 + 100));
  uVar5 = (undefined4)(((cocos2d::CCString *)this)->getCString());
  (*pcVar4)(piVar1,uVar5);
  piVar1 = (int *)((BLSweepHeroView *)*(undefined4 *)(((int)this) + 0x20))->getTableViewRoles();
  (**(code **)(*piVar1 + 0x21c))(piVar1,((int)this) + 0x18);
  piVar1 = (int *)((BLSweepHeroView *)*(undefined4 *)(((int)this) + 0x20))->getTableViewRoles();
  (**(code **)(*piVar1 + 0x214))(piVar1,((int)this) + 0x1c);
  piVar1 = (int *)((BLSweepHeroView *)*(undefined4 *)(((int)this) + 0x20))->getTableViewRoles();
  (**(code **)(*piVar1 + 0x22c))(piVar1,0);
  BLSweepHeroPresenter::initRolesData();
  uVar5 = (undefined4)(((BLSweepHeroView *)*(undefined4 *)(((int)this) + 0x20))->getTableViewRoles());
  ((BLTableView *)uVar5)->reloadData(0, 1);
  BLSweepHeroPresenter::updateData(0);
  return;
}
