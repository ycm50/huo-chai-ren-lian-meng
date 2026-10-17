#include "BLTreasureRecordPresenter.h"
#include "CCNode.h"
#include "CCScrollView.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "CCNotificationCenter.h"
#include "CCObject.h"
#include "CCArray.h"
#include "CCTouch.h"
#include "CCDirector.h"
#include "CCGeometry.h"
#include "BLLeakUtils.h"
#include "BLTreasureRecordItemPresenter.h"
#include "BLTreasureRecordItemView.h"
#include "BLTreasureRecordView.h"
#include "TreasureDataManager.h"
#include "TreasureRecordData.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <new>   // ghost_fix.js 自动补齐
using namespace cocos2d;
static inline undefined4 hw_fbits(float f) { undefined4 r; __builtin_memcpy(&r, &f, 4); return r; }
// 兜底声明
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long func_0079e7b4(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_006aad2c;
extern "C" unsigned long UNK_006aad46;
extern "C" unsigned long UNK_006aad8c;
extern "C" unsigned long UNK_006aadc4;
extern "C" unsigned long UNK_006aae08;
extern "C" unsigned long UNK_006aae40;
extern "C" unsigned long UNK_006aae74;
extern "C" unsigned long UNK_006ab046;
extern "C" unsigned long UNK_006ab0b0;
extern "C" unsigned long UNK_006ab0d4;
extern "C" unsigned long UNK_006ab0d8;
extern "C" unsigned long UNK_006ab32a;
extern "C" unsigned long UNK_006ab32c;
extern "C" unsigned long UNK_006ab370;
extern "C" unsigned long _UNK_006aad78;
extern "C" unsigned long _UNK_006aad7c;
extern "C" unsigned long _UNK_006aad90;
extern "C" unsigned long _UNK_006aadc8;
extern "C" unsigned long _UNK_006aae10;
extern "C" unsigned long _UNK_006aae44;
extern "C" unsigned long _UNK_006aae78;
extern "C" unsigned long _UNK_006ab0fc;
extern "C" unsigned long _UNK_006ab100;
extern "C" unsigned long _UNK_006ab104;
extern "C" unsigned long _UNK_006ab108;
extern "C" unsigned long _UNK_006ab39c;
extern "C" unsigned long _UNK_006ab3a0;
extern "C" unsigned long _UNK_006ab3a4;
extern "C" unsigned long _UNK_006ab3a8;
extern "C" unsigned long g_006aad2c;
extern "C" unsigned long g_006aad46;
extern "C" unsigned long g_006aad78;
extern "C" unsigned long g_006aad7c;
extern "C" unsigned long g_006aad8c;
extern "C" unsigned long g_006aad90;
extern "C" unsigned long g_006aadc4;
extern "C" unsigned long g_006aadc8;
extern "C" unsigned long g_006aae08;
extern "C" unsigned long g_006aae10;
extern "C" unsigned long g_006aae40;
extern "C" unsigned long g_006aae44;
extern "C" unsigned long g_006aae74;
extern "C" unsigned long g_006aae78;
extern "C" unsigned long g_006ab046;
extern "C" unsigned long g_006ab0b0;
extern "C" unsigned long g_006ab0d4;
extern "C" unsigned long g_006ab0d8;
extern "C" unsigned long g_006ab0fc;
extern "C" unsigned long g_006ab100;
extern "C" unsigned long g_006ab104;
extern "C" unsigned long g_006ab108;
extern "C" unsigned long g_006ab32a;
extern "C" unsigned long g_006ab32c;
extern "C" unsigned long g_006ab370;
extern "C" unsigned long g_006ab39c;
extern "C" unsigned long g_006ab3a0;
extern "C" unsigned long g_006ab3a4;
extern "C" unsigned long g_006ab3a8;
BLTreasureRecordPresenter::~BLTreasureRecordPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_006aad2c + g_006aad78);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x34;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_006aad46 + g_006aad7c,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}


void BLTreasureRecordPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  undefined4 uVar1;
  
  if (*(char *)(((int)this) + 0x48) != '\0') {
    *(char *)(((int)this) + 0x48) = '\0';
    uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
    ((cocos2d::CCNotificationCenter *)uVar1)->postNotification((char const*)&g_006aae40 + g_006aae44);
  }
  return;
}

void BLTreasureRecordPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  undefined4 uVar1;
  
  if (*(char *)(((int)this) + 0x48) != '\0') {
    *(char *)(((int)this) + 0x48) = '\0';
    uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
    ((cocos2d::CCNotificationCenter *)uVar1)->postNotification((char const*)&g_006aae74 + g_006aae78);
  }
  return;
}

BLTreasureRecordPresenter::BLTreasureRecordPresenter()
{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_24 [4];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  0 /* ctorZero */;
  iVar2 = (undefined4)(intptr_t)(*(int *)((unsigned char *)((char *)&g_006ab046 + (intptr_t)(g_006ab0fc))));
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x34;
  0 /* ctorZero */;
  0 /* ctorZero */;
  0 /* ctorZero */;
  *(int *)((int)this + 4*(7)) = 0;
  0 /* ctorZero */;
  ((cocos2d::CCPoint *)(((int)this) + 10))->operator=(*(cocos2d::CCPoint const*)&uStack_20);
  0 /* ctorZero */;
  ((cocos2d::CCSize *)(((int)this) + 8))->operator=(*(cocos2d::CCSize const*)&uStack_20);
  *(int *)((int)this + 4*(0xc)) = 0;
  *(undefined1 *)(((int)this) + 0xd) = 0;
  *(undefined1 *)((int)((int)this) + 0x35) = 0;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(auStack_24,(unsigned char *)((char *)&g_006ab0b0 + (intptr_t)(g_006ab100)),&uStack_20);
  ((BLLeakUtils *)(uVar1))->addClass((std::string)(char*)auStack_24);
  func_0079e2bc(auStack_24);
  uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  uStack_1c = (undefined4)(0);
  uStack_20 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_006ab0d4 + (intptr_t)(g_006ab104))));
  ((cocos2d::CCNotificationCenter *)(((int)this)))->addObserver((cocos2d::CCObject*)uStack_20, 0, (char const*)(unsigned char *)((char *)&g_006ab0d8 + (intptr_t)(g_006ab108)), 0);
  return;
}

undefined4 BLTreasureRecordPresenter::create()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x4c))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}


void BLTreasureRecordPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar2)->removeAllObservers((cocos2d::CCObject*)((int)this));
  return;
}

void BLTreasureRecordPresenter::refreshRecord()
{
  int *piVar1;
  int iVar2;
  
  ((BLTreasureRecordView *)*(undefined4 *)(((int)this) + 0x18))->getScrollView();
  piVar1 = (int *)((cocos2d::extension::CCScrollView *)this)->getContainer();
  (**(code **)(*piVar1 + 0x104))(piVar1,1);
  iVar2 = ((TreasureDataManager *)this)->getInstance();
  ((TreasureRecordData *)*(undefined4 *)(iVar2 + 0x74))->refreshData();
  *(undefined4 *)(((int)this) + 0x2c) = *(undefined4 *)(((int)this) + 0x30);
  *(undefined4 *)(((int)this) + 0x24) = *(undefined4 *)(((int)this) + 0x30);
  *(undefined4 *)(((int)this) + 0x1c) = 0;
  *(undefined1 *)(((int)this) + 0x34) = 0;
  *(undefined1 *)(((int)this) + 0x35) = 0;
  return;
}

void BLTreasureRecordPresenter::addItem(cocos2d::CCArray* p1)
{
  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  
  piVar1 = (int *)((BLTreasureRecordItemView *)this)->create(*(undefined4 *)(((int)this) + 0x1c));
  uVar2 = (undefined4)(((BLTreasureRecordItemView *)this)->getPresenter());
  ((BLTreasureRecordItemPresenter *)uVar2)->initWithData((cocos2d::CCArray*)p1);
  ((BLTreasureRecordView *)*(undefined4 *)(((int)this) + 0x18))->getScrollView();
  piVar3 = (int *)((cocos2d::extension::CCScrollView *)this)->getContainer();
  (**(code **)(*piVar3 + 200))(piVar3,piVar1);
  (**(code **)(*piVar1 + 0x11c))(piVar1,*(undefined4 *)(((int)this) + 0x1c));
  iVar4 = (**(code **)(*piVar1 + 0x8c))(piVar1);
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(*(undefined4 *)(iVar4 + 4)),(int)(0x3f000000)))));
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x + _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar2),(int)(0x40800000)))));
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x - _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(*(undefined4 *)(((int)this) + 0x2c)),(int)(uVar2)))));
  *(undefined4 *)(((int)this) + 0x2c) = uVar2;
  (**(code **)(*piVar1 + 0x4c))(piVar1,((int)this) + 0x28);
  iVar4 = (**(code **)(*piVar1 + 0x8c))(piVar1);
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(*(undefined4 *)(iVar4 + 4)),(int)(0x3f000000)))));
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x - _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(*(undefined4 *)(((int)this) + 0x2c)),(int)(uVar2)))));
  *(undefined4 *)(((int)this) + 0x2c) = uVar2;
  return;
}



void BLTreasureRecordPresenter::onEnter()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14, 1, 0);
  BLTreasureRecordPresenter::onReceiveMsgAddRecord();
  return;
}

void BLTreasureRecordPresenter::onMovingEnd()
{
  *(undefined1 *)(((int)this) + 0x34) = 0;
  BLTreasureRecordPresenter::onReceiveMsgAddRecord();
  return;
}

// ===== 修复: 补回被误删的函数占位 (5) =====
bool BLTreasureRecordPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  undefined4 p4 = 0;

  int iVar1;
  undefined4 uVar2;
  int iStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iStack_20 = (undefined4)(intptr_t)((int *)((int)this));
  uStack_1c = (undefined4)(p1);
  uStack_18 = (undefined4)(p2);
  uStack_14 = (undefined4)(p4);
  ((cocos2d::CCTouch *)(&iStack_20))->getLocation();
  { cocos2d::CCPoint _ws = ((cocos2d::CCNode *)(*(undefined4 *)(((int)this) + 0x18)))->convertToNodeSpace(*(cocos2d::CCPoint const*)&iStack_20); uStack_18 = hw_fbits(_ws.x); uStack_14 = hw_fbits(_ws.y); }
  ((cocos2d::CCPoint *)(&iStack_20))->operator=(*(cocos2d::CCPoint const*)&uStack_18);
  iVar1 = (undefined4)(intptr_t)(((cocos2d::CCRect *)(((int)this) + 0x38))->containsPoint(*(cocos2d::CCPoint const*)&iStack_20));
  if (iVar1 != 0) {
    *(undefined1 *)(((int)this) + 0x48) = 1;
    uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
    ((cocos2d::CCNotificationCenter *)(uVar2))->postNotification((char const*)(unsigned char *)((char *)&g_006aae08 + (intptr_t)(g_006aae10)));
  }
  return 1;
}

void BLTreasureRecordPresenter::initWithView(BLTreasureRecordView* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLTreasureRecordPresenter::updateItemPos()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

int * BLTreasureRecordPresenter::onReceiveMsgAddRecord()
{
  bool bVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  
  piVar2 = (int *)((TreasureDataManager *)this)->getInstance();
  bVar1 = (undefined4)(intptr_t)(false);
  iVar6 = (undefined4)(intptr_t)(piVar2[0x1d]);
  while (*(char *)(((int)this) + 0x34) == '\0') {
    piVar3 = ((void)((TreasureRecordData *)(iVar6))->getAllRecord(),(int *)0);
    piVar2 = piVar3 + 2;
    if (piVar3[1] - *piVar3 >> 2 == 0) break;
    piVar3 = ((void)((TreasureRecordData *)(iVar6))->getAllRecord(),(int *)0);
    piVar2 = piVar3 + 2;
    if ((piVar3[1] - *piVar3 >> 2) - 1U < *(uint *)(((int)this) + 0x1c)) break;
    iVar4 = (undefined4)(intptr_t)(((TreasureDataManager *)(piVar2))->getInstance());
    puVar5 = (undefined4 *)
             ((TreasureRecordData *)(*(undefined4 *)(iVar4 + 0x74)))->getItemByIndex(*(undefined4 *)(((int)this) + 0x1c));
    piVar2 = ((void)((BLTreasureRecordPresenter *)(((int)this)))->addItem((cocos2d::CCArray*)*puVar5),(int *)0);
    bVar1 = (undefined4)(intptr_t)(true);
    *(int *)(((int)this) + 0x1c) = *(int *)(((int)this) + 0x1c) + 1;
  }
  if (bVar1) {
    piVar2 = ((void)((BLTreasureRecordPresenter *)(((int)this)))->updateItemPos(),(int *)0);
  }
  return (int *)(piVar2);
}

int * BLTreasureRecordPresenter::addOneByOne()
{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *piVar4;
  uint uVar5;
  undefined4 uVar6;
  
  iVar1 = (undefined4)(intptr_t)(((TreasureDataManager *)this)->getInstance());
  uVar6 = (undefined4)(*(undefined4 *)(iVar1 + 0x74));
  piVar2 = ((void)((TreasureRecordData *)(uVar6))->getAllRecord(),(int *)0);
  piVar4 = piVar2 + 2;
  if (piVar2[1] - *piVar2 >> 2 != 0) {
    uVar5 = (undefined4)(*(uint *)(((int)this) + 0x1c));
    piVar2 = ((void)((TreasureRecordData *)(uVar6))->getAllRecord(),(int *)0);
    piVar4 = piVar2 + 2;
    if (uVar5 <= (piVar2[1] - *piVar2 >> 2) - 1U) {
      iVar1 = (undefined4)(intptr_t)(((TreasureDataManager *)(piVar4))->getInstance());
      puVar3 = (undefined4 *)
               ((TreasureRecordData *)(*(undefined4 *)(iVar1 + 0x74)))->getItemByIndex(*(undefined4 *)(((int)this) + 0x1c));
      ((BLTreasureRecordPresenter *)(((int)this)))->addItem((cocos2d::CCArray*)*puVar3);
      piVar4 = ((void)((BLTreasureRecordPresenter *)(((int)this)))->updateItemPos(),(int *)0);
    }
  }
  return (int *)(piVar4);
}
