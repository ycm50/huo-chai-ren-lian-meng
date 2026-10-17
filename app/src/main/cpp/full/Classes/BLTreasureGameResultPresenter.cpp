#include "BLTreasureGameResultPresenter.h"
#include "CCDictionary.h"
#include "CCGeometry.h"
#include "CCScrollView.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "BLTreasureGameResultView.h"
#include "CCObject.h"
#include "CCTouch.h"
#include "CCArray.h"
#include "CCNode.h"
#include "CCDirector.h"
#include "BLGridView.h"
#include "BLItemDataView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BackPackData.h"
#include "BackPackItemData.h"
#include "DataCacheManager.h"
#include "DataManager.h"
#include "ItemData.h"
#include "PetUserData.h"
#include "RichTextData.h"
#include "Toast.h"
#include "TreasureDataManager.h"
#include "TreasureRewardData.h"
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
template <class T, class... A> std::string ConvertToString(A...);
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2ec(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e30c(...);
extern "C" long long func_0079e34c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4bc(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e5bc(...);
extern "C" long long func_0079e5dc(...);
extern "C" long long func_0079e5fc(...);
extern "C" long long func_0079e63c(...);
extern "C" long long func_0079e68c(...);
extern "C" long long func_0079e6c0(...);
extern "C" long long func_0079e734(...);
extern "C" long long func_0079e7b4(...);
extern "C" long long func_0079e7e4(...);
extern "C" long long func_0079e854(...);
extern "C" long long func_0079e8a4(...);
extern "C" long long func_0079e8b4(...);
extern "C" long long func_0079e904(...);
extern "C" long long func_0079e914(...);
extern "C" long long func_0079eb44(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0065d4dc;
extern "C" unsigned long UNK_0065d5ac;
extern "C" unsigned long UNK_0065d630;
extern "C" unsigned long UNK_0065d7a4;
extern "C" unsigned long UNK_0065d9d8;
extern "C" unsigned long UNK_0065da90;
extern "C" unsigned long UNK_0065daf4;
extern "C" unsigned long UNK_0065dc16;
extern "C" unsigned long UNK_0065dd04;
extern "C" unsigned long UNK_0065dd05;
extern "C" unsigned long UNK_0065dd06;
extern "C" unsigned long UNK_0065dd14;
extern "C" unsigned long UNK_0065ddbc;
extern "C" unsigned long UNK_0065df4e;
extern "C" unsigned long UNK_0065dfca;
extern "C" unsigned long UNK_0065e038;
extern "C" unsigned long UNK_0065e084;
extern "C" unsigned long UNK_0065e0e4;
extern "C" unsigned long UNK_0065e10c;
extern "C" unsigned long UNK_0065e238;
extern "C" unsigned long UNK_0065e272;
extern "C" unsigned long UNK_0065e2bc;
extern "C" unsigned long UNK_0065e49a;
extern "C" unsigned long _UNK_0065d4e0;
extern "C" unsigned long _UNK_0065d540;
extern "C" unsigned long _UNK_0065d598;
extern "C" unsigned long _UNK_0065d59c;
extern "C" unsigned long _UNK_0065d5b0;
extern "C" unsigned long _UNK_0065d6f4;
extern "C" unsigned long _UNK_0065d868;
extern "C" unsigned long _UNK_0065dbb0;
extern "C" unsigned long _UNK_0065dbb4;
extern "C" unsigned long _UNK_0065dbb8;
extern "C" unsigned long _UNK_0065dbbc;
extern "C" unsigned long _UNK_0065dbc0;
extern "C" unsigned long _UNK_0065dbc4;
extern "C" unsigned long _UNK_0065dbc8;
extern "C" unsigned long _UNK_0065dbcc;
extern "C" unsigned long _UNK_0065dbd0;
extern "C" unsigned long _UNK_0065dbd4;
extern "C" unsigned long _UNK_0065df1c;
extern "C" unsigned long _UNK_0065df20;
extern "C" unsigned long _UNK_0065df24;
extern "C" unsigned long _UNK_0065df28;
extern "C" unsigned long _UNK_0065e004;
extern "C" unsigned long _UNK_0065e008;
extern "C" unsigned long _UNK_0065e0d0;
extern "C" unsigned long _UNK_0065e0d4;
extern "C" unsigned long _UNK_0065e0e8;
extern "C" unsigned long _UNK_0065e110;
extern "C" unsigned long _UNK_0065e524;
extern "C" unsigned long _UNK_0065e528;
extern "C" unsigned long _UNK_0065e52c;
extern "C" unsigned long _UNK_0065e530;
extern "C" unsigned long _UNK_0065e534;
extern "C" unsigned long extraout_r1;
extern "C" unsigned long extraout_r2;
extern "C" unsigned long extraout_r2_00;
extern "C" unsigned long g_0065d4dc;
extern "C" unsigned long g_0065d4e0;
extern "C" unsigned long g_0065d540;
extern "C" unsigned long g_0065d598;
extern "C" unsigned long g_0065d59c;
extern "C" unsigned long g_0065d5ac;
extern "C" unsigned long g_0065d5b0;
extern "C" unsigned long g_0065d630;
extern "C" unsigned long g_0065d6f4;
extern "C" unsigned long g_0065d7a4;
extern "C" unsigned long g_0065d868;
extern "C" unsigned long g_0065d9d8;
extern "C" unsigned long g_0065da90;
extern "C" unsigned long g_0065daf4;
extern "C" unsigned long g_0065dbb0;
extern "C" unsigned long g_0065dbb4;
extern "C" unsigned long g_0065dbb8;
extern "C" unsigned long g_0065dbbc;
extern "C" unsigned long g_0065dbc0;
extern "C" unsigned long g_0065dbc4;
extern "C" unsigned long g_0065dbc8;
extern "C" unsigned long g_0065dbcc;
extern "C" unsigned long g_0065dbd0;
extern "C" unsigned long g_0065dbd4;
extern "C" unsigned long g_0065dc16;
extern "C" unsigned long g_0065dd04;
extern "C" unsigned long g_0065dd05;
extern "C" unsigned long g_0065dd06;
extern "C" unsigned long g_0065dd14;
extern "C" unsigned long g_0065ddbc;
extern "C" unsigned long g_0065df1c;
extern "C" unsigned long g_0065df20;
extern "C" unsigned long g_0065df24;
extern "C" unsigned long g_0065df28;
extern "C" unsigned long g_0065df4e;
extern "C" unsigned long g_0065dfca;
extern "C" unsigned long g_0065e004;
extern "C" unsigned long g_0065e008;
extern "C" unsigned long g_0065e038;
extern "C" unsigned long g_0065e084;
extern "C" unsigned long g_0065e0d0;
extern "C" unsigned long g_0065e0d4;
extern "C" unsigned long g_0065e0e4;
extern "C" unsigned long g_0065e0e8;
extern "C" unsigned long g_0065e10c;
extern "C" unsigned long g_0065e110;
extern "C" unsigned long g_0065e238;
extern "C" unsigned long g_0065e272;
extern "C" unsigned long g_0065e2bc;
extern "C" unsigned long g_0065e49a;
extern "C" unsigned long g_0065e524;
extern "C" unsigned long g_0065e528;
extern "C" unsigned long g_0065e52c;
extern "C" unsigned long g_0065e530;
extern "C" unsigned long g_0065e534;
bool BLTreasureGameResultPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLTreasureGameResultPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLTreasureGameResultPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLTreasureGameResultPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLTreasureGameResultPresenter::tick(float p1)
{
  return;
}

undefined4 BLTreasureGameResultPresenter::numOfColumn(BLGridView* p1)
{
  return 6;
}

void BLTreasureGameResultPresenter::touchItemAtIndex(BLGridView* p1, int p2)
{
  return;
}

undefined4 BLTreasureGameResultPresenter::sizeOfGridItem(BLGridView* p1)
{
  0 /* ctorZero */;
  return ((int)this);
}

void BLTreasureGameResultPresenter::onQuit(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(0x1f6);
  return;
}

void BLTreasureGameResultPresenter::numOfRow(BLGridView* p1)
{
  undefined4 p4 = 0;

  undefined4 uVar1;
  undefined8 uVar2;
  
  if ((int)(intptr_t)p1 == *(int *)(((int)this) + 0x24)) {
    uVar1 = (undefined4)(*(undefined4 *)(((int)this) + 0x2c));
  }
  else {
    uVar1 = (undefined4)(*(undefined4 *)(((int)this) + 0x30));
  }
  ((cocos2d::CCArray *)uVar1)->count();
  uVar2 = func_0079e734();
  func_0079e63c((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),g_0065d598,g_0065d59c,p4);
  func_0079e7e4();
  func_0079eb44();
  func_0079e5fc();
  return;
}

void BLTreasureGameResultPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  ((UIManager *)this)->shareManager();
  ((UIManager *)this)->popUnEnableScrollView();
  return;
}

void BLTreasureGameResultPresenter::onEnter()
{
  return;
}


void BLTreasureGameResultPresenter::initallitems(cocos2d::CCArray* p1)
{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  piVar1 = (int *)((BLGridView *)this)->create();
  *(int **)(((int)this) + 0x24) = piVar1;
  (**(code **)(*piVar1 + 0x1fc))(piVar1,((int)this) + 0x18);
  (**(code **)(**(int **)(((int)this) + 0x24) + 0x204))(*(int **)(((int)this) + 0x24),((int)this) + 0x1c);
  uVar3 = (undefined4)(*(undefined4 *)(((int)this) + 0x24));
  uVar2 = (undefined4)(cocos2d::CCNode::create());
  ((BLGridView *)uVar3)->setItemPartner((cocos2d::CCNode*)uVar2);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x20) + 0x114);
  (**(code **)(*piVar1 + 200))(piVar1,*(undefined4 *)(((int)this) + 0x24));
  BLTreasureGameResultPresenter::sortPackallData((cocos2d::CCArray*)p1);
  return;
}


void BLTreasureGameResultPresenter::initbossitems(cocos2d::CCArray* p1)
{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  piVar1 = (int *)((BLGridView *)this)->create();
  *(int **)(((int)this) + 0x28) = piVar1;
  (**(code **)(*piVar1 + 0x1fc))(piVar1,((int)this) + 0x18);
  (**(code **)(**(int **)(((int)this) + 0x28) + 0x204))(*(int **)(((int)this) + 0x28),((int)this) + 0x1c);
  uVar3 = (undefined4)(*(undefined4 *)(((int)this) + 0x28));
  uVar2 = (undefined4)(cocos2d::CCNode::create());
  ((BLGridView *)uVar3)->setItemPartner((cocos2d::CCNode*)uVar2);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x20) + 0x118);
  (**(code **)(*piVar1 + 200))(piVar1,*(undefined4 *)(((int)this) + 0x28));
  BLTreasureGameResultPresenter::sortPackbossData((cocos2d::CCArray*)p1);
  return;
}




BLTreasureGameResultPresenter::BLTreasureGameResultPresenter()
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
  iVar3 = (undefined4)(intptr_t)(*(int *)((unsigned char *)((char *)&g_0065df4e + (intptr_t)(g_0065e004))));
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x50;
  *(int *)((int)this + 4*(7)) = iVar3 + 0x98;
  *(int *)((int)this + 4*(6)) = iVar3 + 0x80;
  *(int *)((int)this + 4*(0xd)) = 0;
  *(int *)((int)this + 4*(0xe)) = 0;
  *(int *)((int)this + 4*(0xf)) = 0;
  *(int *)((int)this + 4*(0x10)) = 0;
  *(int *)((int)this + 4*(0x11)) = 0;
  *(int *)((int)this + 4*(0x12)) = 0;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 1);
  ((UIManager *)this)->shareManager();
  ((UIManager *)this)->pushCurScrollViewUnEnable();
  iVar3 = (undefined4)(intptr_t)(cocos2d::CCArray::create());
  *(int *)((int)this + 4*(0xb)) = iVar3;
  iVar3 = (undefined4)(intptr_t)(cocos2d::CCArray::create());
  *(int *)((int)this + 4*(0xc)) = iVar3;
  *(int *)((int)this + 4*(0x11)) = *(int *)((int)this + 4*(0x10));
  *(int *)((int)this + 4*(0xe)) = *(int *)((int)this + 4*(0xd));
  if (*(int *)((int)this + 4*(0xb)) != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  if (*(int *)((int)this + 4*(0xc)) != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,(unsigned char *)((char *)&g_0065dfca + (intptr_t)(g_0065e008)),&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

undefined4 BLTreasureGameResultPresenter::create(BLTreasureGameResultView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x4c))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

BLTreasureGameResultPresenter::~BLTreasureGameResultPresenter()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

// ===== 修复: 补回被误删的函数占位 (6) =====
void BLTreasureGameResultPresenter::sortPackallData(cocos2d::CCArray* p1)
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
  
  ((cocos2d::CCArray *)(*(undefined4 *)(((int)this) + 0x2c)))->removeAllObjects();
  ((cocos2d::CCArray *)(*(undefined4 *)(((int)this) + 0x2c)))->addObjectsFromArray((cocos2d::CCArray*)p1);
  ((BLGridView *)(*(undefined4 *)(((int)this) + 0x24)))->reloadData(0, 1);
  (**(code **)(**(int **)(((int)this) + 0x24) + 0x4c))
            (*(int **)(((int)this) + 0x24),(unsigned char *)((char *)&g_0065d630 + (intptr_t)(g_0065d6f4)));
  iVar1 = (undefined4)(intptr_t)((**(code **)(**(int **)(((int)this) + 0x24) + 0x8c))());
  uVar2 = (undefined4)(func_0079e5fc(*(undefined4 *)(iVar1 + 4)));
  (**(code **)(**(int **)(*(int *)(((int)this) + 0x20) + 0x114) + 0x1f8))(auStack_20);
  uVar4 = (undefined4)(uStack_1c);
  uVar3 = (undefined4)(func_0079e2ec(uVar2));
  iVar1 = (undefined4)(intptr_t)(func_0079e7b4(uVar3,uVar4));
  if (iVar1 == 0) {
    uVar4 = (undefined4)(0);
    piVar7 = *(int **)(((int)this) + 0x24);
    pcVar6 = *(code **)(*piVar7 + 100);
  }
  else {
    (**(code **)(**(int **)(*(int *)(((int)this) + 0x20) + 0x114) + 0x1f8))(auStack_20);
    uVar2 = (undefined4)(func_0079e5fc(uStack_1c));
    piVar7 = *(int **)(((int)this) + 0x24);
    pcVar6 = *(code **)(*piVar7 + 100);
    iVar1 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar7) + (0x8c)))(piVar7));
    uVar4 = (undefined4)(func_0079e2ec(uVar2));
    uVar4 = (undefined4)(func_0079e57c(uVar4,*(undefined4 *)(iVar1 + 4)));
  }
  (*pcVar6)(piVar7,uVar4);
  piVar7 = *(int **)(*(int *)(((int)this) + 0x20) + 0x114);
  pcVar6 = *(code **)(*piVar7 + 0x88);
  puVar5 = (undefined4 *)(**(code **)(**(int **)(((int)this) + 0x24) + 0x8c))();
  uVar4 = (undefined4)(func_0079e2ec(uVar2));
  0 /* ctorZero */;
  (*pcVar6)(piVar7,auStack_20);
  piVar7 = *(int **)(*(int *)(((int)this) + 0x20) + 0x114);
  (**(code **)(*(int *)(piVar7) + (0x1f8)))(auStack_28,piVar7);
  uVar4 = (undefined4)(func_0079e57c(uStack_24,uVar4));
  0 /* ctorZero */;
  ((cocos2d::extension::CCScrollView *)(piVar7))->setContentOffset(*(cocos2d::CCPoint *)(void *)&auStack_20, 0);
  return;
}

void BLTreasureGameResultPresenter::sortPackbossData(cocos2d::CCArray* p1)
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
  
  ((cocos2d::CCArray *)(*(undefined4 *)(((int)this) + 0x30)))->removeAllObjects();
  ((cocos2d::CCArray *)(*(undefined4 *)(((int)this) + 0x30)))->addObjectsFromArray((cocos2d::CCArray*)p1);
  ((BLGridView *)(*(undefined4 *)(((int)this) + 0x28)))->reloadData(0, 1);
  (**(code **)(**(int **)(((int)this) + 0x28) + 0x4c))
            (*(int **)(((int)this) + 0x28),(unsigned char *)((char *)&g_0065d7a4 + (intptr_t)(g_0065d868)));
  iVar1 = (undefined4)(intptr_t)((**(code **)(**(int **)(((int)this) + 0x28) + 0x8c))());
  uVar2 = (undefined4)(func_0079e5fc(*(undefined4 *)(iVar1 + 4)));
  (**(code **)(**(int **)(*(int *)(((int)this) + 0x20) + 0x118) + 0x1f8))(auStack_20);
  uVar4 = (undefined4)(uStack_1c);
  uVar3 = (undefined4)(func_0079e2ec(uVar2));
  iVar1 = (undefined4)(intptr_t)(func_0079e7b4(uVar3,uVar4));
  if (iVar1 == 0) {
    uVar4 = (undefined4)(0);
    piVar7 = *(int **)(((int)this) + 0x28);
    pcVar6 = *(code **)(*piVar7 + 100);
  }
  else {
    (**(code **)(**(int **)(*(int *)(((int)this) + 0x20) + 0x118) + 0x1f8))(auStack_20);
    uVar2 = (undefined4)(func_0079e5fc(uStack_1c));
    piVar7 = *(int **)(((int)this) + 0x28);
    pcVar6 = *(code **)(*piVar7 + 100);
    iVar1 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar7) + (0x8c)))(piVar7));
    uVar4 = (undefined4)(func_0079e2ec(uVar2));
    uVar4 = (undefined4)(func_0079e57c(uVar4,*(undefined4 *)(iVar1 + 4)));
  }
  (*pcVar6)(piVar7,uVar4);
  piVar7 = *(int **)(*(int *)(((int)this) + 0x20) + 0x118);
  pcVar6 = *(code **)(*piVar7 + 0x88);
  puVar5 = (undefined4 *)(**(code **)(**(int **)(((int)this) + 0x28) + 0x8c))();
  uVar4 = (undefined4)(func_0079e2ec(uVar2));
  0 /* ctorZero */;
  (*pcVar6)(piVar7,auStack_20);
  piVar7 = *(int **)(*(int *)(((int)this) + 0x20) + 0x118);
  (**(code **)(*(int *)(piVar7) + (0x1f8)))(auStack_28,piVar7);
  uVar4 = (undefined4)(func_0079e57c(uStack_24,uVar4));
  0 /* ctorZero */;
  ((cocos2d::extension::CCScrollView *)(piVar7))->setContentOffset(*(cocos2d::CCPoint *)(void *)&auStack_20, 0);
  return;
}

void BLTreasureGameResultPresenter::updateview()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLTreasureGameResultPresenter::nodeOfGridViewAtIndex(BLGridView* p1, cocos2d::CCNode* p2, int p3)
{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  code *pcVar10;
  int *piVar11;
  undefined4 *puVar12;
  undefined4 *puStack_5c;
  undefined1 auStack_50 [4];
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined1 auStack_44 [40];
  int iStack_1c;
  
  iVar8 = (undefined4)(intptr_t)(g_0065dbb0);
  piVar9 = *(int **)((unsigned char *)((char *)&g_0065d9d8 + (intptr_t)(g_0065dbb4)) + g_0065dbb0);
  iStack_1c = (int)*(int *)&(*piVar9);
  if ((int)(intptr_t)(int)(intptr_t)p1 == *(int *)(((int)this) + 0x24)) {
    uVar1 = (undefined4)(((cocos2d::CCArray *)(*(undefined4 *)(((int)this) + 0x2c)))->count());
    if (uVar1 <= p3) goto code_r0x0065d9f4;
    uVar4 = (undefined4)(*(undefined4 *)(((int)this) + 0x2c));
code_r0x0065da08:
    iVar6 = (undefined4)(intptr_t)(((cocos2d::CCArray *)(uVar4))->objectAtIndex((unsigned int)p3));
    if (iVar6 == 0) goto code_r0x0065d9f4;
    puStack_5c = *(undefined4 **)((unsigned char *)((char *)&g_0065d9d8 + (intptr_t)(g_0065dbb8)) + iVar8);
    piVar11 = (int *)func_0079e55c(iVar6,puStack_5c,
                                     *(undefined4 *)((unsigned char *)((char *)&g_0065d9d8 + (intptr_t)(g_0065dbbc)) + iVar8),0);
  }
  else {
    uVar1 = (undefined4)(((cocos2d::CCArray *)(*(undefined4 *)(((int)this) + 0x30)))->count());
    if (p3 < uVar1) {
      uVar4 = (undefined4)(*(undefined4 *)(((int)this) + 0x30));
      goto code_r0x0065da08;
    }
code_r0x0065d9f4:
    piVar11 = (int *)0x0;
  }
  if ((int)(intptr_t)(int)(intptr_t)p2 != 0) {
    puStack_5c = *(undefined4 **)((unsigned char *)((char *)&g_0065d9d8 + (intptr_t)(g_0065dbc0)) + iVar8);
    piVar2 = (int *)func_0079e55c(p2,puStack_5c,
                                    *(undefined4 *)((unsigned char *)((char *)&g_0065d9d8 + (intptr_t)(g_0065dbc4)) + iVar8),0);
    if (piVar2 != (int *)0x0) goto code_r0x0065da50;
  }
  piVar2 = (int *)((BLItemDataView *)this)->create();
code_r0x0065da50:
  (**(code **)(*(int *)(piVar2) + (0x88)))(piVar2,(unsigned char *)((char *)&g_0065da90 + (intptr_t)(g_0065dbc8)));
  if (piVar11 == (int *)0x0) {
    (**(code **)(*(int *)(piVar2) + (0x90)))(piVar2,0);
    puVar12 = (undefined4 *)0x0;
  }
  else {
    piVar3 = (int *)((DataCacheManager *)this)->shareManager();
    uVar4 = (undefined4)((**(code **)(*(int *)(piVar3) + (0x60)))());
    uVar5 = (undefined4)((**(code **)(*(int *)(piVar11) + (0x20)))(piVar11));
    iVar6 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)(uVar4))->objectForKey(uVar5));
    piVar3 = (int *)0x0;
    if (iVar6 != 0) {
      piVar3 = (int *)func_0079e55c(iVar6,*(undefined4 *)((unsigned char *)((char *)&g_0065d9d8 + (intptr_t)(g_0065dbb8)) + iVar8),
                                      *(undefined4 *)((unsigned char *)((char *)&g_0065d9d8 + (intptr_t)(g_0065dbcc)) + iVar8),0);
    }
    piVar7 = (int *)((BLItemDataView *)(piVar2))->getSprItem();
    pcVar10 = *(code **)(*piVar7 + 0x1dc);
    puStack_5c = &uStack_48;
    (**(code **)(*(int *)(piVar3) + (0x58)))(puStack_5c,piVar3);
    (*pcVar10)(piVar7,uStack_48);
    func_0079e2bc(puStack_5c);
    iVar8 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar3) + (0x30)))(piVar3));
    if (iVar8 != 6) {
      piVar3 = (int *)((BLItemDataView *)(piVar2))->getSprDebris();
      pcVar10 = *(code **)(*piVar3 + 0x90);
    }
    else {
      func_0079e34c(auStack_44,0,0x28);
      uVar4 = (undefined4)((**(code **)(*(int *)(piVar3) + (0x50)))(piVar3));
      func_0079e904(auStack_44,(unsigned char *)((char *)&g_0065daf4 + (intptr_t)(g_0065dbd0)),uVar4);
      piVar3 = (int *)((BLItemDataView *)(piVar2))->getSprDebris();
      (**(code **)(*(int *)(piVar3) + (0x1e0)))(piVar3,auStack_44);
      piVar3 = (int *)((BLItemDataView *)(piVar2))->getSprDebris();
      pcVar10 = *(code **)(*piVar3 + 0x90);
    }
    (*pcVar10)(piVar3,iVar8 == 6);
    (**(code **)(*(int *)(piVar2) + (0x90)))(piVar2,1);
    uVar4 = (undefined4)((**(code **)(*(int *)(piVar11) + (0x28)))(piVar11));
    puVar12 = &uStack_4c;
    ConvertToString<int>(puStack_5c, uVar4, 0);
    func_0079e45c(puVar12,uStack_48,auStack_50);
    func_0079e2bc(puStack_5c);
    piVar11 = (int *)((BLItemDataView *)(piVar2))->getLabNum();
    (**(code **)(*(int *)(piVar11) + (0x234)))(piVar11,uStack_4c);
    func_0079e2bc(puVar12);
  }
  (**(code **)(*(int *)(piVar2) + (0x40)))(piVar2,g_0065dbd4);
  if (iStack_1c != *piVar9) {
    func_0079e914(piVar2);
    do {
      func_0079e2bc(puStack_5c);
      func_0079e30c();
      puStack_5c = puVar12;
    } while( true );
  }
  return;
}

void BLTreasureGameResultPresenter::addItem(std::vector<int, std::allocator<int>> * p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLTreasureGameResultPresenter::initWithView(BLTreasureGameResultView* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
