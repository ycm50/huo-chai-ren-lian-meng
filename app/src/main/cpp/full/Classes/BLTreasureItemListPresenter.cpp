#include "BLTreasureItemListPresenter.h"
#include "CCScrollView.h"
#include "CCAction.h"
#include "CCGeometry.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "CCNotificationCenter.h"
#include "CCObject.h"
#include "BLTreasureItemListView.h"
#include "CCTouch.h"
#include "CCNode.h"
#include "CCActionInterval.h"
#include "CCDirector.h"
#include "CCArray.h"
#include "BLGridView.h"
#include "BLItemDataView.h"
#include "BLLeakUtils.h"
#include "BackPackItemData.h"
#include "DataCacheManager.h"
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
extern "C" long long func_0079e2ec(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e30c(...);
extern "C" long long func_0079e34c(...);
extern "C" long long func_0079e43c(...);
extern "C" long long func_0079e44c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e46c(...);
extern "C" long long func_0079e47c(...);
extern "C" long long func_0079e4bc(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e5bc(...);
extern "C" long long func_0079e5fc(...);
extern "C" long long func_0079e63c(...);
extern "C" long long func_0079e68c(...);
extern "C" long long func_0079e6c0(...);
extern "C" long long func_0079e734(...);
extern "C" long long func_0079e7b4(...);
extern "C" long long func_0079e7e4(...);
extern "C" long long func_0079e904(...);
extern "C" long long func_0079e914(...);
extern "C" long long func_0079eb44(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_006a70f4;
extern "C" unsigned long UNK_006a714c;
extern "C" unsigned long UNK_006a7180;
extern "C" unsigned long UNK_006a71c4;
extern "C" unsigned long UNK_006a71ec;
extern "C" unsigned long UNK_006a7240;
extern "C" unsigned long UNK_006a731c;
extern "C" unsigned long UNK_006a7330;
extern "C" unsigned long UNK_006a7364;
extern "C" unsigned long UNK_006a737c;
extern "C" unsigned long UNK_006a7424;
extern "C" unsigned long UNK_006a7494;
extern "C" unsigned long UNK_006a74fc;
extern "C" unsigned long UNK_006a75f6;
extern "C" unsigned long UNK_006a7642;
extern "C" unsigned long UNK_006a7710;
extern "C" unsigned long UNK_006a787a;
extern "C" unsigned long UNK_006a78b6;
extern "C" unsigned long UNK_006a793a;
extern "C" unsigned long UNK_006a79b6;
extern "C" unsigned long UNK_006a79d6;
extern "C" unsigned long UNK_006a79fe;
extern "C" unsigned long UNK_006a7a26;
extern "C" unsigned long UNK_006a7a4e;
extern "C" unsigned long UNK_006a7a76;
extern "C" unsigned long UNK_006a7aa6;
extern "C" unsigned long _UNK_006a70f8;
extern "C" unsigned long _UNK_006a71b0;
extern "C" unsigned long _UNK_006a71b4;
extern "C" unsigned long _UNK_006a71c8;
extern "C" unsigned long _UNK_006a71f0;
extern "C" unsigned long _UNK_006a7260;
extern "C" unsigned long _UNK_006a7264;
extern "C" unsigned long _UNK_006a7268;
extern "C" unsigned long _UNK_006a726c;
extern "C" unsigned long _UNK_006a72ac;
extern "C" unsigned long _UNK_006a72b0;
extern "C" unsigned long _UNK_006a72c4;
extern "C" unsigned long _UNK_006a7308;
extern "C" unsigned long _UNK_006a730c;
extern "C" unsigned long _UNK_006a7320;
extern "C" unsigned long _UNK_006a7340;
extern "C" unsigned long _UNK_006a7368;
extern "C" unsigned long _UNK_006a75a8;
extern "C" unsigned long _UNK_006a75ac;
extern "C" unsigned long _UNK_006a75b0;
extern "C" unsigned long _UNK_006a75b4;
extern "C" unsigned long _UNK_006a75b8;
extern "C" unsigned long _UNK_006a75bc;
extern "C" unsigned long _UNK_006a75c0;
extern "C" unsigned long _UNK_006a75c4;
extern "C" unsigned long _UNK_006a75c8;
extern "C" unsigned long _UNK_006a75cc;
extern "C" unsigned long _UNK_006a75d0;
extern "C" unsigned long _UNK_006a766c;
extern "C" unsigned long _UNK_006a7670;
extern "C" unsigned long _UNK_006a77cc;
extern "C" unsigned long _UNK_006a7b00;
extern "C" unsigned long _UNK_006a7b04;
extern "C" unsigned long _UNK_006a7b08;
extern "C" unsigned long _UNK_006a7b0c;
extern "C" unsigned long _UNK_006a7b10;
extern "C" unsigned long _UNK_006a7b14;
extern "C" unsigned long _UNK_006a7b18;
extern "C" unsigned long _UNK_006a7b1c;
extern "C" unsigned long _UNK_006a7b20;
extern "C" unsigned long _UNK_006a7b24;
extern "C" unsigned long _UNK_006a7b28;
extern "C" unsigned long _UNK_006a7b2c;
extern "C" unsigned long g_006a70f4;
extern "C" unsigned long g_006a70f8;
extern "C" unsigned long g_006a714c;
extern "C" unsigned long g_006a7180;
extern "C" unsigned long g_006a71b0;
extern "C" unsigned long g_006a71b4;
extern "C" unsigned long g_006a71c4;
extern "C" unsigned long g_006a71c8;
extern "C" unsigned long g_006a71ec;
extern "C" unsigned long g_006a71f0;
extern "C" unsigned long g_006a7240;
extern "C" unsigned long g_006a7260;
extern "C" unsigned long g_006a7264;
extern "C" unsigned long g_006a7268;
extern "C" unsigned long g_006a726c;
extern "C" unsigned long g_006a72ac;
extern "C" unsigned long g_006a72b0;
extern "C" unsigned long g_006a72c4;
extern "C" unsigned long g_006a7308;
extern "C" unsigned long g_006a730c;
extern "C" unsigned long g_006a731c;
extern "C" unsigned long g_006a7320;
extern "C" unsigned long g_006a7330;
extern "C" unsigned long g_006a7340;
extern "C" unsigned long g_006a7364;
extern "C" unsigned long g_006a7368;
extern "C" unsigned long g_006a737c;
extern "C" unsigned long g_006a7424;
extern "C" unsigned long g_006a7494;
extern "C" unsigned long g_006a74fc;
extern "C" unsigned long g_006a75a8;
extern "C" unsigned long g_006a75ac;
extern "C" unsigned long g_006a75b0;
extern "C" unsigned long g_006a75b4;
extern "C" unsigned long g_006a75b8;
extern "C" unsigned long g_006a75bc;
extern "C" unsigned long g_006a75c0;
extern "C" unsigned long g_006a75c4;
extern "C" unsigned long g_006a75c8;
extern "C" unsigned long g_006a75cc;
extern "C" unsigned long g_006a75d0;
extern "C" unsigned long g_006a75f6;
extern "C" unsigned long g_006a7642;
extern "C" unsigned long g_006a766c;
extern "C" unsigned long g_006a7670;
extern "C" unsigned long g_006a7710;
extern "C" unsigned long g_006a77cc;
extern "C" unsigned long g_006a787a;
extern "C" unsigned long g_006a78b6;
extern "C" unsigned long g_006a793a;
extern "C" unsigned long g_006a79b6;
extern "C" unsigned long g_006a79d6;
extern "C" unsigned long g_006a79fe;
extern "C" unsigned long g_006a7a26;
extern "C" unsigned long g_006a7a4e;
extern "C" unsigned long g_006a7a76;
extern "C" unsigned long g_006a7aa6;
extern "C" unsigned long g_006a7b00;
extern "C" unsigned long g_006a7b04;
extern "C" unsigned long g_006a7b08;
extern "C" unsigned long g_006a7b0c;
extern "C" unsigned long g_006a7b10;
extern "C" unsigned long g_006a7b14;
extern "C" unsigned long g_006a7b18;
extern "C" unsigned long g_006a7b1c;
extern "C" unsigned long g_006a7b20;
extern "C" unsigned long g_006a7b24;
extern "C" unsigned long g_006a7b28;
extern "C" unsigned long g_006a7b2c;
bool BLTreasureItemListPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLTreasureItemListPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLTreasureItemListPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLTreasureItemListPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLTreasureItemListPresenter::tick(float p1)
{
  return;
}

undefined4 BLTreasureItemListPresenter::numOfColumn(BLGridView* p1)
{
  return 6;
}

BLTreasureItemListPresenter::~BLTreasureItemListPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_006a714c + g_006a71b0);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x50;
  *(int *)((int)this + 4*(6)) = iVar2 + 0x80;
  *(int *)((int)this + 4*(7)) = iVar2 + 0x98;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  if (*(int *)((int)this + 4*(10)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(10)) = 0;
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_006a7180 + g_006a71b4,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}



undefined4 BLTreasureItemListPresenter::sizeOfGridItem(BLGridView* p1)
{
  0 /* ctorZero */;
  return ((int)this);
}

void BLTreasureItemListPresenter::numOfRow(BLGridView* p1)
{
  undefined4 p4 = 0;

  undefined8 uVar1;
  
  ((cocos2d::CCArray *)*(undefined4 *)(((int)this) + 0x28))->count();
  uVar1 = func_0079e734();
  func_0079e63c((int)uVar1,(int)((ulonglong)uVar1 >> 0x20),g_006a7308,g_006a730c,p4);
  func_0079e7e4();
  func_0079eb44();
  func_0079e5fc();
  return;
}

void BLTreasureItemListPresenter::onclose()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar1)->postNotification((char const*)&g_006a7330 + g_006a7340);
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(0x1f8);
  return;
}

void BLTreasureItemListPresenter::touchItemAtIndex(BLGridView* p1, int p2)
{
  uint uVar1;
  
  uVar1 = (undefined4)(((cocos2d::CCArray *)*(undefined4 *)(((int)this) + 0x28))->count());
  if ((p2 < uVar1) && (*(int *)(((int)this) + 0x20) == (int)(intptr_t)p1)) {
    cocos2d::CCLog((char const*)&g_006a7364 + g_006a7368, p2);
  }
  return;
}


BLTreasureItemListPresenter::BLTreasureItemListPresenter()
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
  iVar3 = (undefined4)(intptr_t)(*(int *)((unsigned char *)((char *)&g_006a75f6 + (intptr_t)(g_006a766c))));
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x50;
  *(int *)((int)this + 4*(6)) = iVar3 + 0x80;
  *(int *)((int)this + 4*(7)) = iVar3 + 0x98;
  iVar3 = (undefined4)(intptr_t)(cocos2d::CCArray::create());
  *(int *)((int)this + 4*(10)) = iVar3;
  if (iVar3 != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 0);
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,(unsigned char *)((char *)&g_006a7642 + (intptr_t)(g_006a7670)),&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

undefined4 BLTreasureItemListPresenter::create(BLTreasureItemListView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x2c))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLTreasureItemListPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  return;
}

void BLTreasureItemListPresenter::onEnter()
{
  return;
}

// ===== 修复: 补回被误删的函数占位 (6) =====
void BLTreasureItemListPresenter::onQuit(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLTreasureItemListPresenter::onNextFlash()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;

  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  piVar1 = *(int **)(*(int *)(((int)this) + 0x24) + 300);
  iStack_18 = (undefined4)(intptr_t)((int *)((int)this));
  uStack_14 = (undefined4)(p2);
  uStack_10 = (undefined4)(p3);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*(int *)(piVar1) + (0x90)))(piVar1,1);
  }
  uVar3 = (undefined4)(*(undefined4 *)(*(int *)(((int)this) + 0x24) + 300));
  0 /* ctorZero */;
  uVar2 = (undefined4)(cocos2d::CCMoveTo::create(0x3f000000, *(cocos2d::CCPoint const*)&iStack_18));
  ((cocos2d::CCNode *)(uVar3))->runAction((cocos2d::CCAction*)uVar2);
  return;
}

void BLTreasureItemListPresenter::nodeOfGridViewAtIndex(BLGridView* p1, cocos2d::CCNode* p2, int p3)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLTreasureItemListPresenter::sortPackData(cocos2d::CCArray* p1)
{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  code *pcVar6;
  int *piVar7;
  undefined1 auStack_28 [4];
  undefined4 uStack_24;
  undefined1 auStack_20 [4];
  undefined4 uStack_1c;
  
  ((cocos2d::CCArray *)(*(undefined4 *)(((int)this) + 0x28)))->removeAllObjects();
  ((cocos2d::CCArray *)(*(undefined4 *)(((int)this) + 0x28)))->addObjectsFromArray((cocos2d::CCArray*)p1);
  ((BLGridView *)(*(undefined4 *)(((int)this) + 0x20)))->reloadData(0, 1);
  (**(code **)(**(int **)(((int)this) + 0x20) + 0x4c))
            (*(int **)(((int)this) + 0x20),(unsigned char *)((char *)&g_006a7710 + (intptr_t)(g_006a77cc)));
  iVar1 = (undefined4)(intptr_t)((**(code **)(**(int **)(((int)this) + 0x20) + 0x8c))());
  uVar2 = (undefined4)(func_0079e5fc(*(undefined4 *)(iVar1 + 4)));
  (**(code **)(**(int **)(*(int *)(((int)this) + 0x24) + 0x114) + 0x1f8))(auStack_20);
  uVar4 = (undefined4)(uStack_1c);
  uVar3 = (undefined4)(func_0079e2ec(uVar2));
  iVar1 = (undefined4)(intptr_t)(func_0079e7b4(uVar3,uVar4));
  if (iVar1 == 0) {
    uVar4 = (undefined4)(0);
    piVar7 = *(int **)(((int)this) + 0x20);
    pcVar6 = *(code **)(*piVar7 + 100);
  }
  else {
    (**(code **)(**(int **)(*(int *)(((int)this) + 0x24) + 0x114) + 0x1f8))(auStack_20);
    uVar2 = (undefined4)(func_0079e5fc(uStack_1c));
    piVar7 = *(int **)(((int)this) + 0x20);
    pcVar6 = *(code **)(*piVar7 + 100);
    iVar1 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar7) + (0x8c)))(piVar7));
    uVar4 = (undefined4)(func_0079e2ec(uVar2));
    uVar4 = (undefined4)(func_0079e57c(uVar4,*(undefined4 *)(iVar1 + 4)));
  }
  (*pcVar6)(piVar7,uVar4);
  piVar7 = *(int **)(*(int *)(((int)this) + 0x24) + 0x114);
  pcVar6 = *(code **)(*piVar7 + 0x88);
  puVar5 = (undefined4 *)(**(code **)(**(int **)(((int)this) + 0x20) + 0x8c))();
  uVar4 = (undefined4)(func_0079e2ec(uVar2));
  0 /* ctorZero */;
  (*pcVar6)(piVar7,auStack_20);
  piVar7 = *(int **)(*(int *)(((int)this) + 0x24) + 0x114);
  (**(code **)(*(int *)(piVar7) + (0x1f8)))(auStack_28,piVar7);
  uVar4 = (undefined4)(func_0079e57c(uStack_24,uVar4));
  0 /* ctorZero */;
  ((cocos2d::extension::CCScrollView *)(piVar7))->setContentOffset(*(cocos2d::CCPoint *)(void *)&auStack_20, 0);
  return;
}

void BLTreasureItemListPresenter::inititems(cocos2d::CCArray* p1)
{
  undefined4 p4 = 0;

  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  code *pcVar4;
  undefined4 uVar5;
  
  piVar1 = (int *)((long long)::operator new((size_t)(300)));
  0 /* ctorZero */;
  iVar2 = (**(code **)(*piVar1 + 0x18))(piVar1);
  if (iVar2 != 0) {
    ((cocos2d::CCObject *)piVar1)->autorelease();
    *(int **)(((int)this) + 0x20) = piVar1;
    pcVar4 = *(code **)(*piVar1 + 0x1fc);
    (*pcVar4)(piVar1,((int)this) + 0x18,*piVar1,pcVar4,p4);
    (**(code **)(**(int **)(((int)this) + 0x20) + 0x204))(*(int **)(((int)this) + 0x20),((int)this) + 0x1c);
    uVar5 = (undefined4)(*(undefined4 *)(((int)this) + 0x20));
    uVar3 = (undefined4)(cocos2d::CCNode::create());
    ((BLGridView *)uVar5)->setItemPartner((cocos2d::CCNode*)uVar3);
    piVar1 = *(int **)(*(int *)(((int)this) + 0x24) + 0x114);
    (**(code **)(*piVar1 + 200))(piVar1,*(undefined4 *)(((int)this) + 0x20));
    BLTreasureItemListPresenter::sortPackData((cocos2d::CCArray*)p1);
    return;
  }
  (**(code **)(*piVar1 + 8))(piVar1);
  *(undefined4 *)(((int)this) + 0x20) = 0;
                    /* WARNING: Does not return;
  (*pcVar4)();
}

void BLTreasureItemListPresenter::initWithView(BLTreasureItemListView* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
