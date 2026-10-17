#include "BLChestFestivalPresenter.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "CCObject.h"
#include "CCTouch.h"
#include "CCNode.h"
#include "CCArray.h"
#include "CCDirector.h"
#include "BLForwards.h"
#include "BLChestFestivalView.h"
#include "BLChestRewardItemPresenter.h"
#include "BLChestRewardItemView.h"
#include "BLGridView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BackPackData.h"
#include "ChestFestivalData.h"
#include "DataCacheManager.h"
#include "DataManager.h"
#include "EquipData.h"
#include "ItemData.h"
#include "PetUserData.h"
#include "RichTextData.h"
#include "RoleInfoData.h"
#include "Toast.h"
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
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2ec(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e43c(...);
extern "C" long long func_0079e44c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e46c(...);
extern "C" long long func_0079e47c(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e5bc(...);
extern "C" long long func_0079e5dc(...);
extern "C" long long func_0079e68c(...);
extern "C" long long func_0079e734(...);
extern "C" long long func_0079e854(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_00512848;
extern "C" unsigned long UNK_0051286e;
extern "C" unsigned long UNK_005128c4;
extern "C" unsigned long UNK_005128ec;
extern "C" unsigned long UNK_00512944;
extern "C" unsigned long UNK_00512948;
extern "C" unsigned long UNK_00512990;
extern "C" unsigned long UNK_00512992;
extern "C" unsigned long UNK_005129e2;
extern "C" unsigned long UNK_00512a1c;
extern "C" unsigned long UNK_00512b06;
extern "C" unsigned long UNK_00512b08;
extern "C" unsigned long UNK_00512b82;
extern "C" unsigned long UNK_00512c5e;
extern "C" unsigned long UNK_00512c5f;
extern "C" unsigned long UNK_00512c60;
extern "C" unsigned long UNK_00512c7c;
extern "C" unsigned long UNK_00512cae;
extern "C" unsigned long UNK_00512d60;
extern "C" unsigned long UNK_00512e4e;
extern "C" unsigned long UNK_00512f3c;
extern "C" unsigned long UNK_00512f98;
extern "C" unsigned long UNK_00512fce;
extern "C" unsigned long UNK_00512fe6;
extern "C" unsigned long UNK_00512ffe;
extern "C" unsigned long UNK_00513018;
extern "C" unsigned long UNK_00513030;
extern "C" unsigned long UNK_00513048;
extern "C" unsigned long UNK_0051311c;
extern "C" unsigned long UNK_0051314c;
extern "C" unsigned long _UNK_005128b0;
extern "C" unsigned long _UNK_005128b4;
extern "C" unsigned long _UNK_005128c8;
extern "C" unsigned long _UNK_005128f0;
extern "C" unsigned long _UNK_00512914;
extern "C" unsigned long _UNK_00512918;
extern "C" unsigned long _UNK_005129b0;
extern "C" unsigned long _UNK_005129b4;
extern "C" unsigned long _UNK_005129b8;
extern "C" unsigned long _UNK_005129bc;
extern "C" unsigned long _UNK_00512a60;
extern "C" unsigned long _UNK_00512a64;
extern "C" unsigned long _UNK_00512b50;
extern "C" unsigned long _UNK_00512b54;
extern "C" unsigned long _UNK_00512efc;
extern "C" unsigned long _UNK_00512f00;
extern "C" unsigned long _UNK_00512f04;
extern "C" unsigned long _UNK_00512f08;
extern "C" unsigned long _UNK_00512f0c;
extern "C" unsigned long _UNK_00512f10;
extern "C" unsigned long _UNK_005130d8;
extern "C" unsigned long _UNK_005130dc;
extern "C" unsigned long _UNK_005130e0;
extern "C" unsigned long _UNK_005130e4;
extern "C" unsigned long _UNK_005130e8;
extern "C" unsigned long _UNK_005130ec;
extern "C" unsigned long _UNK_005130f0;
extern "C" unsigned long _UNK_005130f4;
extern "C" unsigned long _UNK_005130f8;
extern "C" unsigned long _UNK_00513120;
extern "C" unsigned long _UNK_00513150;
extern "C" unsigned long _UNK_00513388;
extern "C" unsigned long _UNK_0051338c;
extern "C" unsigned long _UNK_00513390;
extern "C" unsigned long g_00512848;
extern "C" unsigned long g_0051286e;
extern "C" unsigned long g_005128b0;
extern "C" unsigned long g_005128b4;
extern "C" unsigned long g_005128c4;
extern "C" unsigned long g_005128c8;
extern "C" unsigned long g_005128ec;
extern "C" unsigned long g_005128f0;
extern "C" unsigned long g_00512914;
extern "C" unsigned long g_00512918;
extern "C" unsigned long g_00512944;
extern "C" unsigned long g_00512948;
extern "C" unsigned long g_00512990;
extern "C" unsigned long g_00512992;
extern "C" unsigned long g_005129b0;
extern "C" unsigned long g_005129b4;
extern "C" unsigned long g_005129b8;
extern "C" unsigned long g_005129bc;
extern "C" unsigned long g_005129e2;
extern "C" unsigned long g_00512a1c;
extern "C" unsigned long g_00512a60;
extern "C" unsigned long g_00512a64;
extern "C" unsigned long g_00512b06;
extern "C" unsigned long g_00512b08;
extern "C" unsigned long g_00512b50;
extern "C" unsigned long g_00512b54;
extern "C" unsigned long g_00512b82;
extern "C" unsigned long g_00512c5e;
extern "C" unsigned long g_00512c5f;
extern "C" unsigned long g_00512c60;
extern "C" unsigned long g_00512c7c;
extern "C" unsigned long g_00512cae;
extern "C" unsigned long g_00512d60;
extern "C" unsigned long g_00512e4e;
extern "C" unsigned long g_00512efc;
extern "C" unsigned long g_00512f00;
extern "C" unsigned long g_00512f04;
extern "C" unsigned long g_00512f08;
extern "C" unsigned long g_00512f0c;
extern "C" unsigned long g_00512f10;
extern "C" unsigned long g_00512f3c;
extern "C" unsigned long g_00512f98;
extern "C" unsigned long g_00512fce;
extern "C" unsigned long g_00512fe6;
extern "C" unsigned long g_00512ffe;
extern "C" unsigned long g_00513018;
extern "C" unsigned long g_00513030;
extern "C" unsigned long g_00513048;
extern "C" unsigned long g_005130d8;
extern "C" unsigned long g_005130dc;
extern "C" unsigned long g_005130e0;
extern "C" unsigned long g_005130e4;
extern "C" unsigned long g_005130e8;
extern "C" unsigned long g_005130ec;
extern "C" unsigned long g_005130f0;
extern "C" unsigned long g_005130f4;
extern "C" unsigned long g_005130f8;
extern "C" unsigned long g_0051311c;
extern "C" unsigned long g_00513120;
extern "C" unsigned long g_0051314c;
extern "C" unsigned long g_00513150;
extern "C" unsigned long g_00513388;
extern "C" unsigned long g_0051338c;
extern "C" unsigned long g_00513390;
cocos2d::CCArray* BLChestFestivalPresenter::getArrayEquips() const
{
  return (cocos2d::CCArray*)(*(undefined4 *)(((int)this) + 0x24));
}

bool BLChestFestivalPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLChestFestivalPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLChestFestivalPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLChestFestivalPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLChestFestivalPresenter::touchItemAtIndex(BLGridView* p1, cocos2d::CCNode* p2, int p3)
{
  return;
}

void BLChestFestivalPresenter::tick(float p1)
{
  return;
}

BLChestFestivalPresenter::~BLChestFestivalPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_00512848 + g_005128b0);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x58;
  *(int *)((int)this + 4*(6)) = iVar2 + 0x88;
  *(int *)((int)this + 4*(7)) = iVar2 + 0x98;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0051286e + g_005128b4,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  if (*(int *)((int)this + 4*(9)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(9)) = 0;
  }
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLChestFestivalPresenter::onClose(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(0xf6);
  return;
}

undefined4 BLChestFestivalPresenter::sizeOfGridItem(BLGridView* p1)
{
  0 /* ctorZero */;
  return ((int)this);
}



undefined4 BLChestFestivalPresenter::create(BLChestFestivalView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x2c))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLChestFestivalPresenter::onExit()
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

void BLChestFestivalPresenter::onEnter()
{
  ((UIManager *)this)->shareManager();
  ((UIManager *)this)->pushCurScrollViewUnEnable();
  return;
}







void BLChestFestivalPresenter::initWith()
{
  BLChestFestivalPresenter::buyAgain();
  return;
}

// ===== 修复: 补回被误删的函数占位 (9) =====
void BLChestFestivalPresenter::setArrayEquips(cocos2d::CCArray* p1)
{
  *(undefined4 *)(((int)this) + 0x24) = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  return;
}

void BLChestFestivalPresenter::nodeOfGridViewAtIndex(BLGridView* p1, cocos2d::CCNode* p2, int p3)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

BLChestFestivalPresenter::BLChestFestivalPresenter()
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
  iVar3 = (undefined4)(intptr_t)(*(int *)((unsigned char *)((char *)&g_005129e2 + (intptr_t)(g_00512a60))));
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x58;
  *(int *)((int)this + 4*(6)) = iVar3 + 0x88;
  *(int *)((int)this + 4*(7)) = iVar3 + 0x98;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 1);
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,(unsigned char *)((char *)&g_00512a1c + (intptr_t)(g_00512a64)),&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  *(int *)((int)this + 4*(9)) = 0;
  *(undefined1 *)((int)((int)this) + 0x29) = 0;
  iVar3 = (undefined4)(intptr_t)(cocos2d::CCArray::create());
  *(int *)((int)this + 4*(9)) = iVar3;
  if (iVar3 != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  return;
}

void BLChestFestivalPresenter::getEquipByStarAndQuity(int p1, int p2)
{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = p2;
  uVar1 = (undefined4)(cocos2d::CCArray::create());
  piVar2 = (int *)((DataCacheManager *)this)->shareManager();
  iVar3 = (**(code **)(*piVar2 + 0x68))();
  if (iVar3 != 0) {
    iVar3 = *(int *)(iVar3 + 0x14);
    iVar6 = iVar3;
    if (iVar3 != 0) {
      iVar6 = *(int *)(iVar3 + 0x110);
    }
    while (iVar3 != 0) {
      if (((*(int *)(iVar3 + 0x104) != 0) &&
          (piVar2 = (int *)func_0079e55c(*(int *)(iVar3 + 0x104),
                                           *(undefined4 *)(&g_00512b06 + g_00512b50),
                                           *(undefined4 *)(&g_00512b08 + g_00512b54),0,p1,
                                           p2,iVar7), piVar2 != (int *)0x0)) &&
         (iVar3 = (**(code **)(*piVar2 + 0x30))(), iVar3 == p1)) {
        piVar4 = (int *)((EquipData *)this)->create();
        uVar5 = (undefined4)((**(code **)(*piVar2 + 0x20))(piVar2));
        ((EquipData *)piVar4)->initWithID(uVar5);
        iVar3 = (**(code **)(*piVar4 + 0x50))(piVar4);
        if (iVar3 == p2) {
          ((cocos2d::CCArray *)uVar1)->addObject((cocos2d::CCObject*)piVar4);
        }
      }
      iVar3 = iVar6;
      if (iVar6 != 0) {
        iVar6 = *(int *)(iVar6 + 0x110);
      }
    }
  }
  return;
}

void BLChestFestivalPresenter::addItem(std::vector<int, std::allocator<int>> * p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLChestFestivalPresenter::initWithView(BLChestFestivalView* p1)
{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined *puVar5;
  code *pcVar6;
  undefined4 auStack_38 [2];
  undefined1 auStack_30 [4];
  undefined4 uStack_2c;
  undefined1 auStack_28 [8];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  *(undefined4 *)(((int)this) + 0x20) = (undefined4)(intptr_t)p1;
  piVar1 = (int *)((BLChestFestivalView *)p1)->getBtnClose();
  uStack_1c = (undefined4)(0);
  uStack_20 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_00512f3c + (intptr_t)(g_005130d8))));
  (**(code **)(*piVar1 + 0x254))(piVar1,((int)this),uStack_20,0,0x20);
  piVar1 = (int *)((BLChestFestivalView *)*(undefined4 *)(((int)this) + 0x20))->getGridViewItemList();
  (**(code **)(*piVar1 + 0x204))(piVar1,((int)this) + 0x18);
  piVar1 = (int *)((BLChestFestivalView *)*(undefined4 *)(((int)this) + 0x20))->getGridViewItemList();
  (**(code **)(*piVar1 + 0x1fc))(piVar1,((int)this) + 0x1c);
  uVar2 = (undefined4)(((BLChestFestivalView *)*(undefined4 *)(((int)this) + 0x20))->getGridViewItemList());
  uVar3 = (undefined4)(cocos2d::CCNode::create());
  ((BLGridView *)uVar2)->setItemPartner((cocos2d::CCNode*)uVar3);
  piVar1 = (int *)((BLChestFestivalView *)*(undefined4 *)(((int)this) + 0x20))->getBtnClose();
  pcVar6 = *(code **)(*piVar1 + 0x26c);
  func_0079e45c(auStack_28,(unsigned char *)((char *)&g_00512f98 + (intptr_t)(g_005130dc)),auStack_30);
  (*pcVar6)(piVar1,auStack_28);
  func_0079e2bc(auStack_28);
  piVar1 = (int *)((sir::singleton<ChestFestivalData, 0> *)this)->instance();
  iVar4 = (undefined4)(intptr_t)((**(code **)(*piVar1 + 8))());
  if (iVar4 == 1) {
    piVar1 = (int *)((BLChestFestivalView *)*(undefined4 *)(((int)this) + 0x20))->getLabTitle();
    pcVar6 = *(code **)(*piVar1 + 0x234);
    puVar5 = (unsigned char *)((char *)&g_00512fce + (intptr_t)(g_005130e0));
  }
  else if (iVar4 == 2) {
    piVar1 = (int *)((BLChestFestivalView *)*(undefined4 *)(((int)this) + 0x20))->getLabTitle();
    pcVar6 = *(code **)(*piVar1 + 0x234);
    puVar5 = (unsigned char *)((char *)&g_00512fe6 + (intptr_t)(g_005130e4));
  }
  else if (iVar4 == 3) {
    piVar1 = (int *)((BLChestFestivalView *)*(undefined4 *)(((int)this) + 0x20))->getLabTitle();
    pcVar6 = *(code **)(*piVar1 + 0x234);
    puVar5 = (unsigned char *)((char *)&g_00512ffe + (intptr_t)(g_005130e8));
  }
  else if (iVar4 - 4U < 3) {
    piVar1 = (int *)((BLChestFestivalView *)*(undefined4 *)(((int)this) + 0x20))->getLabTitle();
    pcVar6 = *(code **)(*piVar1 + 0x234);
    puVar5 = (unsigned char *)((char *)&g_00513018 + (intptr_t)(g_005130ec));
  }
  else if (iVar4 == 7) {
    piVar1 = (int *)((BLChestFestivalView *)*(undefined4 *)(((int)this) + 0x20))->getLabTitle();
    pcVar6 = *(code **)(*piVar1 + 0x234);
    puVar5 = (unsigned char *)((char *)&g_00513030 + (intptr_t)(g_005130f0));
  }
  else {
    if (iVar4 != 8) goto code_r0x00513048;
    piVar1 = (int *)((BLChestFestivalView *)*(undefined4 *)(((int)this) + 0x20))->getLabTitle();
    pcVar6 = *(code **)(*piVar1 + 0x234);
    puVar5 = (unsigned char *)((char *)&g_00513048 + (intptr_t)(g_005130f4));
  }
  (*pcVar6)(piVar1,puVar5);
code_r0x00513048:
  ((sir::singleton<ChestFestivalData, 0> *)this)->instance();
  iVar4 = (undefined4)(intptr_t)(((ChestFestivalData *)this)->getRewardType());
  if (iVar4 < 6) {
    piVar1 = (int *)((BLChestFestivalView *)*(undefined4 *)(((int)this) + 0x20))->getGridViewItemList()
    ;
    pcVar6 = *(code **)(*piVar1 + 0x4c);
    uVar2 = (undefined4)(((long long)([](int _a){float _f;__builtin_memcpy(&_f,&_a,4);float _r=(float)(int)_a;int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)((1 - iVar4) * 0x30 + -0x3c)))));
    0 /* ctorZero */;
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(auStack_38[0]),(int)(uVar3)))));
    0 /* ctorZero */;
    cocos2d::CCDirector::sharedDirector();
    uVar2 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uStack_2c),(int)(uVar2)))));
    0 /* ctorZero */;
    (*pcVar6)(piVar1,auStack_28);
  }
  return;
}

int BLChestFestivalPresenter::numOfColumn(BLGridView* p1)
{
  int iVar1;
  
  ((sir::singleton<ChestFestivalData, 0> *)this)->instance();
  iVar1 = (undefined4)(intptr_t)(((ChestFestivalData *)this)->getRewardType());
  if (5 < iVar1) {
    iVar1 = 5;
  }
  return iVar1;
}

int BLChestFestivalPresenter::numOfRow(BLGridView* p1)
{
  uint uVar1;
  
  ((sir::singleton<ChestFestivalData, 0> *)this)->instance();
  uVar1 = (undefined4)(((ChestFestivalData *)this)->getRewardType());
  return 2 - ((uint)(uVar1 < 6) - ((int)uVar1 >> 0x1f));
}

void BLChestFestivalPresenter::buyAgain()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
