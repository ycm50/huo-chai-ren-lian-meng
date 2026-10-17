#include "BLEndLessResultPresenter.h"
#include "CCGeometry.h"
#include "CCScrollView.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "BLEndLessResultView.h"
#include "CCObject.h"
#include "CCTouch.h"
#include "CCNode.h"
#include "CCArray.h"
#include "CCDirector.h"
#include "BLGridView.h"
#include "BLItemDataView.h"
#include "BLLeakUtils.h"
#include "BLResultManager.h"
#include "BackPackItemData.h"
#include "DataCacheManager.h"
#include "DataManager.h"
#include "MissionEndLessData.h"
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
extern "C" long long func_0079e2ec(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e30c(...);
extern "C" long long func_0079e31c(...);
extern "C" long long func_0079e34c(...);
extern "C" long long func_0079e43c(...);
extern "C" long long func_0079e44c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e46c(...);
extern "C" long long func_0079e47c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e5fc(...);
extern "C" long long func_0079e63c(...);
extern "C" long long func_0079e734(...);
extern "C" long long func_0079e7b4(...);
extern "C" long long func_0079e7e4(...);
extern "C" long long func_0079e904(...);
extern "C" long long func_0079e914(...);
extern "C" long long func_0079eb44(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_006572a0;
extern "C" unsigned long UNK_006572f8;
extern "C" unsigned long UNK_0065732c;
extern "C" unsigned long UNK_00657370;
extern "C" unsigned long UNK_00657398;
extern "C" unsigned long UNK_00657414;
extern "C" unsigned long UNK_0065743c;
extern "C" unsigned long UNK_00657454;
extern "C" unsigned long UNK_006574fc;
extern "C" unsigned long UNK_0065756c;
extern "C" unsigned long UNK_006575d4;
extern "C" unsigned long UNK_006576ce;
extern "C" unsigned long UNK_0065771a;
extern "C" unsigned long UNK_006577e8;
extern "C" unsigned long UNK_00657944;
extern "C" unsigned long UNK_00657962;
extern "C" unsigned long UNK_00657a0e;
extern "C" unsigned long UNK_00657a3a;
extern "C" unsigned long UNK_00657a42;
extern "C" unsigned long UNK_00657a5a;
extern "C" unsigned long UNK_00657a7e;
extern "C" unsigned long UNK_00657aa4;
extern "C" unsigned long _UNK_006572a4;
extern "C" unsigned long _UNK_0065735c;
extern "C" unsigned long _UNK_00657360;
extern "C" unsigned long _UNK_00657374;
extern "C" unsigned long _UNK_0065739c;
extern "C" unsigned long _UNK_006573bc;
extern "C" unsigned long _UNK_00657400;
extern "C" unsigned long _UNK_00657404;
extern "C" unsigned long _UNK_00657418;
extern "C" unsigned long _UNK_00657440;
extern "C" unsigned long _UNK_00657680;
extern "C" unsigned long _UNK_00657684;
extern "C" unsigned long _UNK_00657688;
extern "C" unsigned long _UNK_0065768c;
extern "C" unsigned long _UNK_00657690;
extern "C" unsigned long _UNK_00657694;
extern "C" unsigned long _UNK_00657698;
extern "C" unsigned long _UNK_0065769c;
extern "C" unsigned long _UNK_006576a0;
extern "C" unsigned long _UNK_006576a4;
extern "C" unsigned long _UNK_006576a8;
extern "C" unsigned long _UNK_00657744;
extern "C" unsigned long _UNK_00657748;
extern "C" unsigned long _UNK_006578a4;
extern "C" unsigned long _UNK_00657b30;
extern "C" unsigned long _UNK_00657b34;
extern "C" unsigned long _UNK_00657b38;
extern "C" unsigned long _UNK_00657b3c;
extern "C" unsigned long _UNK_00657b40;
extern "C" unsigned long _UNK_00657b44;
extern "C" unsigned long _UNK_00657b48;
extern "C" unsigned long _UNK_00657b4c;
extern "C" unsigned long g_006572a0;
extern "C" unsigned long g_006572a4;
extern "C" unsigned long g_006572f8;
extern "C" unsigned long g_0065732c;
extern "C" unsigned long g_0065735c;
extern "C" unsigned long g_00657360;
extern "C" unsigned long g_00657370;
extern "C" unsigned long g_00657374;
extern "C" unsigned long g_00657398;
extern "C" unsigned long g_0065739c;
extern "C" unsigned long g_006573bc;
extern "C" unsigned long g_00657400;
extern "C" unsigned long g_00657404;
extern "C" unsigned long g_00657414;
extern "C" unsigned long g_00657418;
extern "C" unsigned long g_0065743c;
extern "C" unsigned long g_00657440;
extern "C" unsigned long g_00657454;
extern "C" unsigned long g_006574fc;
extern "C" unsigned long g_0065756c;
extern "C" unsigned long g_006575d4;
extern "C" unsigned long g_00657680;
extern "C" unsigned long g_00657684;
extern "C" unsigned long g_00657688;
extern "C" unsigned long g_0065768c;
extern "C" unsigned long g_00657690;
extern "C" unsigned long g_00657694;
extern "C" unsigned long g_00657698;
extern "C" unsigned long g_0065769c;
extern "C" unsigned long g_006576a0;
extern "C" unsigned long g_006576a4;
extern "C" unsigned long g_006576a8;
extern "C" unsigned long g_006576ce;
extern "C" unsigned long g_0065771a;
extern "C" unsigned long g_00657744;
extern "C" unsigned long g_00657748;
extern "C" unsigned long g_006577e8;
extern "C" unsigned long g_006578a4;
extern "C" unsigned long g_00657944;
extern "C" unsigned long g_00657962;
extern "C" unsigned long g_00657a0e;
extern "C" unsigned long g_00657a3a;
extern "C" unsigned long g_00657a42;
extern "C" unsigned long g_00657a5a;
extern "C" unsigned long g_00657a7e;
extern "C" unsigned long g_00657aa4;
extern "C" unsigned long g_00657b30;
extern "C" unsigned long g_00657b34;
extern "C" unsigned long g_00657b38;
extern "C" unsigned long g_00657b3c;
extern "C" unsigned long g_00657b40;
extern "C" unsigned long g_00657b44;
extern "C" unsigned long g_00657b48;
extern "C" unsigned long g_00657b4c;
bool BLEndLessResultPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLEndLessResultPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLEndLessResultPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLEndLessResultPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLEndLessResultPresenter::tick(float p1)
{
  return;
}

undefined4 BLEndLessResultPresenter::numOfColumn(BLGridView* p1)
{
  return 6;
}

BLEndLessResultPresenter::~BLEndLessResultPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_006572f8 + g_0065735c);
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
  func_0079e45c(&uStack_14,&g_0065732c + g_00657360,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLEndLessResultPresenter::onQuit(cocos2d::CCObject* p1, unsigned int p2)
{
  ((BLResultManager *)this)->shareManager();
  ((BLResultManager *)this)->returnMainCity();
  return;
}

undefined4 BLEndLessResultPresenter::sizeOfGridItem(BLGridView* p1)
{
  0 /* ctorZero */;
  return ((int)this);
}

void BLEndLessResultPresenter::numOfRow(BLGridView* p1)
{
  undefined4 p4 = 0;

  undefined8 uVar1;
  
  ((cocos2d::CCArray *)*(undefined4 *)(((int)this) + 0x28))->count();
  uVar1 = func_0079e734();
  func_0079e63c((int)uVar1,(int)((ulonglong)uVar1 >> 0x20),g_00657400,g_00657404,p4);
  func_0079e7e4();
  func_0079eb44();
  func_0079e5fc();
  return;
}

void BLEndLessResultPresenter::touchItemAtIndex(BLGridView* p1, int p2)
{
  uint uVar1;
  
  uVar1 = (undefined4)(((cocos2d::CCArray *)*(undefined4 *)(((int)this) + 0x28))->count());
  if ((p2 < uVar1) && (*(int *)(((int)this) + 0x20) == (int)(intptr_t)p1)) {
    cocos2d::CCLog((char const*)&g_0065743c + g_00657440, p2);
  }
  return;
}



undefined4 BLEndLessResultPresenter::create(BLEndLessResultView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x2c))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLEndLessResultPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  return;
}

void BLEndLessResultPresenter::onEnter()
{
  return;
}

// ===== 修复: 补回被误删的函数占位 (5) =====
void BLEndLessResultPresenter::nodeOfGridViewAtIndex(BLGridView* p1, cocos2d::CCNode* p2, int p3)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

BLEndLessResultPresenter::BLEndLessResultPresenter()
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
  iVar3 = (undefined4)(intptr_t)(*(int *)((unsigned char *)((char *)&g_006576ce + (intptr_t)(g_00657744))));
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
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 1);
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,(unsigned char *)((char *)&g_0065771a + (intptr_t)(g_00657748)),&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

void BLEndLessResultPresenter::sortPackData(cocos2d::CCArray* p1)
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
            (*(int **)(((int)this) + 0x20),(unsigned char *)((char *)&g_006577e8 + (intptr_t)(g_006578a4)));
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

void BLEndLessResultPresenter::inititems(cocos2d::CCArray* p1)
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
    BLEndLessResultPresenter::sortPackData((cocos2d::CCArray*)p1);
    return;
  }
  (**(code **)(*piVar1 + 8))(piVar1);
  *(undefined4 *)(((int)this) + 0x20) = 0;
                    /* WARNING: Does not return;
  (*pcVar4)();
}

void BLEndLessResultPresenter::initWithView(BLEndLessResultView* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
