#include "BLPracticePresenter.h"
#include "CCNotificationCenter.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "CCObject.h"
#include "CCNode.h"
#include "CCTouch.h"
#include "CCDirector.h"
#include "BLPracticeView.h"
#include "BLLeakUtils.h"
#include "BLPracticeItemPresenter.h"
#include "BLPracticeItemView.h"
#include "BLTableView.h"
#include "DataManager.h"
#include "MissionSelectHeroData.h"
#include "PracDataItem.h"
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
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0063a85c;
extern "C" unsigned long UNK_0063a874;
extern "C" unsigned long UNK_0063a88c;
extern "C" unsigned long UNK_0063a8a4;
extern "C" unsigned long UNK_0063a8bc;
extern "C" unsigned long UNK_0063a918;
extern "C" unsigned long UNK_0063a93e;
extern "C" unsigned long UNK_0063a984;
extern "C" unsigned long UNK_0063a9ac;
extern "C" unsigned long UNK_0063a9ec;
extern "C" unsigned long UNK_0063aa08;
extern "C" unsigned long UNK_0063aa0a;
extern "C" unsigned long UNK_0063aa72;
extern "C" unsigned long UNK_0063aab4;
extern "C" unsigned long UNK_0063ab20;
extern "C" unsigned long UNK_0063ab22;
extern "C" unsigned long UNK_0063ab56;
extern "C" unsigned long UNK_0063ab8c;
extern "C" unsigned long UNK_0063ad40;
extern "C" unsigned long _UNK_0063a860;
extern "C" unsigned long _UNK_0063a878;
extern "C" unsigned long _UNK_0063a890;
extern "C" unsigned long _UNK_0063a8a8;
extern "C" unsigned long _UNK_0063a8c0;
extern "C" unsigned long _UNK_0063a970;
extern "C" unsigned long _UNK_0063a974;
extern "C" unsigned long _UNK_0063a988;
extern "C" unsigned long _UNK_0063a9b0;
extern "C" unsigned long _UNK_0063a9d8;
extern "C" unsigned long _UNK_0063a9dc;
extern "C" unsigned long _UNK_0063a9f0;
extern "C" unsigned long _UNK_0063aa2c;
extern "C" unsigned long _UNK_0063aa30;
extern "C" unsigned long _UNK_0063aae0;
extern "C" unsigned long _UNK_0063aae4;
extern "C" unsigned long _UNK_0063ab2c;
extern "C" unsigned long _UNK_0063ab30;
extern "C" unsigned long _UNK_0063ab64;
extern "C" unsigned long _UNK_0063ac68;
extern "C" unsigned long _UNK_0063ad44;
extern "C" unsigned long g_0063a85c;
extern "C" unsigned long g_0063a860;
extern "C" unsigned long g_0063a874;
extern "C" unsigned long g_0063a878;
extern "C" unsigned long g_0063a88c;
extern "C" unsigned long g_0063a890;
extern "C" unsigned long g_0063a8a4;
extern "C" unsigned long g_0063a8a8;
extern "C" unsigned long g_0063a8bc;
extern "C" unsigned long g_0063a8c0;
extern "C" unsigned long g_0063a918;
extern "C" unsigned long g_0063a93e;
extern "C" unsigned long g_0063a970;
extern "C" unsigned long g_0063a974;
extern "C" unsigned long g_0063a984;
extern "C" unsigned long g_0063a988;
extern "C" unsigned long g_0063a9ac;
extern "C" unsigned long g_0063a9b0;
extern "C" unsigned long g_0063a9d8;
extern "C" unsigned long g_0063a9dc;
extern "C" unsigned long g_0063a9ec;
extern "C" unsigned long g_0063a9f0;
extern "C" unsigned long g_0063aa08;
extern "C" unsigned long g_0063aa0a;
extern "C" unsigned long g_0063aa2c;
extern "C" unsigned long g_0063aa30;
extern "C" unsigned long g_0063aa72;
extern "C" unsigned long g_0063aab4;
extern "C" unsigned long g_0063aae0;
extern "C" unsigned long g_0063aae4;
extern "C" unsigned long g_0063ab20;
extern "C" unsigned long g_0063ab22;
extern "C" unsigned long g_0063ab2c;
extern "C" unsigned long g_0063ab30;
extern "C" unsigned long g_0063ab56;
extern "C" unsigned long g_0063ab64;
extern "C" unsigned long g_0063ab8c;
extern "C" unsigned long g_0063ac68;
extern "C" unsigned long g_0063ad40;
extern "C" unsigned long g_0063ad44;
bool BLPracticePresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLPracticePresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLPracticePresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLPracticePresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLPracticePresenter::touchItemAtIndex(BLTableView* p1, cocos2d::CCNode* p2, int p3)
{
  return;
}

void BLPracticePresenter::tick(float p1)
{
  return;
}

BLPracticePresenter::~BLPracticePresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0063a918 + g_0063a970);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x4c;
  *(int *)((int)this + 4*(6)) = iVar2 + 0x7c;
  *(int *)((int)this + 4*(7)) = iVar2 + 0x8c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0063a93e + g_0063a974,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

undefined4 BLPracticePresenter::sizeOfCellItem(BLTableView* p1)
{
  0 /* ctorZero */;
  return ((int)this);
}



BLPracticePresenter::BLPracticePresenter()
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
  iVar3 = *(int *)(&g_0063aa72 + g_0063aae0);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x4c;
  *(int *)((int)this + 4*(6)) = iVar3 + 0x7c;
  *(int *)((int)this + 4*(7)) = iVar3 + 0x8c;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 1);
  ((UIManager *)this)->shareManager();
  ((UIManager *)this)->pushCurScrollViewUnEnable();
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0063aab4 + g_0063aae4,&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

undefined4 BLPracticePresenter::create(BLPracticeView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x24))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}


void BLPracticePresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar2)->removeObserver((cocos2d::CCObject*)((int)this), (char const*)&g_0063ab56 + g_0063ab64);
  ((UIManager *)this)->shareManager();
  ((UIManager *)this)->popUnEnableScrollView();
  return;
}

// ===== 修复: 补回被误删的函数占位 (6) =====
void BLPracticePresenter::onPracticeUpdate()
{
  undefined4 p4 = 0;

  ((BLTableView *)this)->reloadData(*(undefined4 *)(*(int *)(((int)this) + 0x20) + 0x10c), 0);
  return;
}

void BLPracticePresenter::nodeOfCellItemAtIndex(BLTableView* p1, cocos2d::CCNode* p2, int p3)
{
  int iVar1;
  
  if (((int)(intptr_t)p2 == 0) ||
     (iVar1 = func_0079e55c(p2,*(undefined4 *)((unsigned char *)((char *)&g_0063aa08 + (intptr_t)(g_0063aa2c))),
                              *(undefined4 *)((unsigned char *)((char *)&g_0063aa0a + (intptr_t)(g_0063aa30))),0,p3), iVar1 == 0)
     ) {
    iVar1 = (undefined4)(intptr_t)(((BLPracticeItemView *)this)->create());
  }
  ((BLPracticeItemPresenter *)*(undefined4 *)(iVar1 + 0x108))->setitemid(p3);
  return;
}

void BLPracticePresenter::onClose(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  iVar2 = (undefined4)((void)(((UIManager *)(uVar1))->getUIObject(0xc0)),(intptr_t)0);
  if (iVar2 == 0) {
    uVar1 = (undefined4)(((UIManager *)this)->shareManager());
    ((UIManager *)(uVar1))->removeUIByID(0xe6);
  }
  return;
}

void BLPracticePresenter::onEnter()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

undefined4 BLPracticePresenter::initWithView(BLPracticeView* p1)
{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  int *piVar4;
  undefined1 auStack_28 [8];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  *(int *)(((int)this) + 0x20) = (undefined4)(intptr_t)p1;
  uStack_1c = (undefined4)(0);
  uStack_20 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_0063ab8c + (intptr_t)(g_0063ac68))));
  (**(code **)(**(int **)(p1 + 0x110) + 0x254))
            (*(int **)(p1 + 0x110),((int)this),uStack_20,0,0x20);
  piVar4 = *(int **)(*(int *)(((int)this) + 0x20) + 0x110);
  pcVar3 = *(code **)(*piVar4 + 0x28c);
  piVar1 = (int *)(**(code **)(*piVar4 + 0x308))(piVar4,1);
  (**(code **)(*piVar1 + 0x1cc))(auStack_28,piVar1);
  (*pcVar3)(piVar4,auStack_28);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x20) + 0x10c);
  (**(code **)(*piVar1 + 0x21c))(piVar1,((int)this) + 0x18);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x20) + 0x10c);
  (**(code **)(*piVar1 + 0x214))(piVar1,((int)this) + 0x1c);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x20) + 0x10c);
  (**(code **)(*piVar1 + 0x22c))(piVar1,0);
  ((BLTableView *)*(undefined4 *)(*(int *)(((int)this) + 0x20) + 0x10c))->reloadData(0, 1);
  piVar1 = (int *)((long long)::operator new((size_t)(0x24)));
  0 /* ctorZero */;
  iVar2 = (undefined4)(intptr_t)(((MissionSelectHeroData *)piVar1)->init());
  if (iVar2 == 0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    piVar1 = (int *)0x0;
  }
  else {
    ((cocos2d::CCObject *)piVar1)->autorelease();
  }
  ((MissionSelectHeroData *)piVar1)->initWithMissionType(8);
  piVar4 = (int *)((DataManager *)this)->shareDataManager();
  (**(code **)(*piVar4 + 0x11c))(piVar4,8);
  piVar4 = (int *)((DataManager *)this)->shareDataManager();
  (**(code **)(*piVar4 + 0x44))(piVar4,piVar1);
  return 1;
}

undefined4 BLPracticePresenter::numOfCellItem(BLTableView* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
