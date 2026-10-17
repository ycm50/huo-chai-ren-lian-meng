#include "BLImmortalsEquipHorListPresenter.h"
#include "CCNotificationCenter.h"
#include "BLImmortalsEquipHorListView.h"
#include "CCNode.h"
#include "CCObject.h"
#include "BLTableView.h"
#include "CCDirector.h"
#include "ImmortalsRoleItemData.h"
#include "BLImmortalsEquipHorItemPresenter.h"
#include "BLLeakUtils.h"
#include "PlayerData.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <new>   // ghost_fix.js 自动补齐
#include "BLCampaignTotalItemView.h"
using namespace cocos2d;
// 兜底声明
extern "C" long long software_udf(...);

extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2ec(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0056a24c;
extern "C" unsigned long UNK_0056a2f8;
extern "C" unsigned long UNK_0056a318;
extern "C" unsigned long UNK_0056a484;
extern "C" unsigned long UNK_0056a486;
extern "C" unsigned long UNK_0056a7b0;
extern "C" unsigned long UNK_0056a7b4;
extern "C" unsigned long UNK_0056a886;
extern "C" unsigned long UNK_0056a8a4;
extern "C" unsigned long UNK_0056a940;
extern "C" unsigned long UNK_0056a942;
extern "C" unsigned long _UNK_0056a250;
extern "C" unsigned long _UNK_0056a348;
extern "C" unsigned long _UNK_0056a34c;
extern "C" unsigned long _UNK_0056a454;
extern "C" unsigned long _UNK_0056a458;
extern "C" unsigned long _UNK_0056a554;
extern "C" unsigned long _UNK_0056a558;
extern "C" unsigned long _UNK_0056a55c;
extern "C" unsigned long _UNK_0056a85c;
extern "C" unsigned long _UNK_0056a860;
extern "C" unsigned long _UNK_0056a8d4;
extern "C" unsigned long _UNK_0056a8d8;
extern "C" unsigned long _UNK_0056a94c;
extern "C" unsigned long _UNK_0056a950;
extern "C" unsigned long g_0056a24c;
extern "C" unsigned long g_0056a250;
extern "C" unsigned long g_0056a2f8;
extern "C" unsigned long g_0056a318;
extern "C" unsigned long g_0056a348;
extern "C" unsigned long g_0056a34c;
extern "C" unsigned long g_0056a454;
extern "C" unsigned long g_0056a458;
extern "C" unsigned long g_0056a484;
extern "C" unsigned long g_0056a486;
extern "C" unsigned long g_0056a554;
extern "C" unsigned long g_0056a558;
extern "C" unsigned long g_0056a55c;
extern "C" unsigned long g_0056a7b0;
extern "C" unsigned long g_0056a7b4;
extern "C" unsigned long g_0056a85c;
extern "C" unsigned long g_0056a860;
extern "C" unsigned long g_0056a886;
extern "C" unsigned long g_0056a8a4;
extern "C" unsigned long g_0056a8d4;
extern "C" unsigned long g_0056a8d8;
extern "C" unsigned long g_0056a940;
extern "C" unsigned long g_0056a942;
extern "C" unsigned long g_0056a94c;
extern "C" unsigned long g_0056a950;
undefined4 BLImmortalsEquipHorListPresenter::numOfCellItem(BLTableView* p1)
{
  return 5;
}

BLImmortalsEquipHorListPresenter::~BLImmortalsEquipHorListPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0056a2f8 + g_0056a348);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x34;
  *(int *)((int)this + 4*(6)) = iVar2 + 0x48;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0056a318 + g_0056a34c,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

undefined4 BLImmortalsEquipHorListPresenter::sizeOfCellItem(BLTableView* p1)
{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 auStack_48 [2];
  undefined1 auStack_40 [4];
  undefined4 uStack_3c;
  undefined4 auStack_38 [2];
  undefined4 auStack_30 [2];
  undefined1 auStack_28 [4];
  undefined4 uStack_24;
  undefined1 auStack_20 [4];
  undefined4 uStack_1c;
  
  uVar3 = (undefined4)(g_0056a454);
  0 /* ctorZero */;
  uVar1 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x + _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(auStack_48[0]),(int)(g_0056a458)))));
  0 /* ctorZero */;
  0 /* ctorZero */;
  cocos2d::CCDirector::sharedDirector();
  uVar1 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar1 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(auStack_38[0]),(int)(uVar1)))));
  0 /* ctorZero */;
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x + _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(auStack_30[0]),(int)(g_0056a458)))));
  0 /* ctorZero */;
  0 /* ctorZero */;
  cocos2d::CCDirector::sharedDirector();
  uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uStack_1c),(int)(uVar3)))));
  0 /* ctorZero */;
  return ((int)this);
}

void BLImmortalsEquipHorListPresenter::onUpdateIndex(cocos2d::CCObject* p1)
{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  code *pcVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 auStack_38 [2];
  undefined4 auStack_30 [2];
  undefined1 auStack_28 [4];
  undefined4 uStack_24;
  undefined1 auStack_20 [12];
  
  if ((p1 != 0) &&
     (iVar1 = func_0079e55c(p1,*(undefined4 *)(&g_0056a484 + g_0056a558),
                              *(undefined4 *)(&g_0056a486 + g_0056a554),0), iVar1 != 0)) {
    iVar1 = *(int *)(iVar1 + 0x14);
    piVar6 = *(int **)(*(int *)(((int)this) + 0x1c) + 0x110);
    pcVar5 = *(code **)(*piVar6 + 0x4c);
    puVar2 = (undefined4 *)(**(code **)(**(int **)(*(int *)(((int)this) + 0x1c) + 0x10c) + 0x50))();
    uVar7 = (undefined4)(*puVar2);
    0 /* ctorZero */;
    uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(auStack_38[0]),(int)(0x3f000000)))));
    uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x + _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar7),(int)(uVar3)))));
    cocos2d::CCDirector::sharedDirector();
    uVar7 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar4 = (undefined4)(((long long)([](int _a){float _f;__builtin_memcpy(&_f,&_a,4);float _r=(float)(int)_a;int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(iVar1 * 0x14 + 10)))));
    uVar7 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar4),(int)(uVar7)))));
    uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x + _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar3),(int)(uVar7)))));
    0 /* ctorZero */;
    uVar7 = (undefined4)(((long long)([](int _a){float _f;__builtin_memcpy(&_f,&_a,4);float _r=(float)(int)_a;int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(iVar1)))));
    uVar7 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar7),(int)(auStack_30[0])))));
    uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x + _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar3),(int)(uVar7)))));
    iVar1 = (**(code **)(**(int **)(*(int *)(((int)this) + 0x1c) + 0x10c) + 0x50))();
    uVar4 = (undefined4)(*(undefined4 *)(iVar1 + 4));
    0 /* ctorZero */;
    uVar7 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uStack_24),(int)(0x3f000000)))));
    uVar7 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x + _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar4),(int)(uVar7)))));
    0 /* ctorZero */;
    (*pcVar5)(piVar6,auStack_20);
  }
  return;
}

// ===== 修复: 补回被误删的函数占位 (7) =====
void BLImmortalsEquipHorListPresenter::nodeOfCellItemAtIndex(BLTableView* p1, cocos2d::CCNode* p2, int p3)
{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = (undefined4)(intptr_t)((int *)((int)this));
  if (((int)(intptr_t)(int)(intptr_t)p2 == 0) ||
     (piVar2 = (int *)func_0079e55c(p2,*(undefined4 *)((unsigned char *)((char *)&g_0056a7b4 + (intptr_t)(g_0056a860))),
                                      *(undefined4 *)((unsigned char *)((char *)&g_0056a7b0 + (intptr_t)(g_0056a85c))),0,((int)this),
                                      p3,p2), piVar2 == (int *)0x0)) {
    piVar2 = (int *)::operator new(0x118);
    ::new ((void *)piVar2) BLCampaignTotalItemView();   /* ALLOC+CTOR_FIX(R123): 类名由 llvm-cxxfilt 反修饰 + (函数,尺寸) 对齐 取得 */
    iVar3 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar2) + (0x18)))(piVar2));
    if (iVar3 == 0) {
      (**(code **)(*(int *)(piVar2) + (8)))(piVar2);
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x56a850);
      (*pcVar1)();
    }
    ((cocos2d::CCObject *)piVar2)->autorelease();
  }
  ((BLImmortalsEquipHorItemPresenter *)piVar2[0x42])->updateWithIndex(p3);
  if (*(int *)(((int)this) + 0x20) != 0) {
    iVar4 = (undefined4)(intptr_t)(((PlayerData *)this)->getImmortalsData());
    iVar6 = (undefined4)(intptr_t)(iVar4 + 4);
    iVar3 = (undefined4)(intptr_t)(iVar6);
    iVar4 = (undefined4)(intptr_t)(*(int *)(iVar4 + 8));
    while (iVar4 != 0) {
      if (*(int *)(iVar4 + 0x10) < p3) {
        iVar4 = (undefined4)(intptr_t)(*(int *)(iVar4 + 0xc));
      }
      else {
        iVar3 = (undefined4)(intptr_t)(iVar4);
        iVar4 = (undefined4)(intptr_t)(*(int *)(iVar4 + 8));
      }
    }
    if ((iVar3 != iVar6) && (*(int *)(iVar3 + 0x10) <= p3)) {
      iVar6 = (undefined4)(intptr_t)(iVar3);
    }
    iVar3 = (undefined4)(intptr_t)(((PlayerData *)*(undefined4 *)(((int)this) + 0x20))->getImmortalsData());
    if (iVar6 != iVar3 + 4) {
      uVar5 = (undefined4)(*(undefined4 *)(iVar6 + 0x14));
      goto code_r0x0056a852;
    }
  }
  uVar5 = (undefined4)(0);
code_r0x0056a852:
  ((BLImmortalsEquipHorItemPresenter *)piVar2[0x42])->updateWithData((ImmortalsRoleItemData*)uVar5)
  ;
  return;
}

BLImmortalsEquipHorListPresenter::BLImmortalsEquipHorListPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = (undefined4)(intptr_t)(*(int *)((unsigned char *)((char *)&g_0056a886 + (intptr_t)(g_0056a8d4))));
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x34;
  *(int *)((int)this + 4*(6)) = iVar2 + 0x48;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,(unsigned char *)((char *)&g_0056a8a4 + (intptr_t)(g_0056a8d8)),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  *(int *)((int)this + 4*(8)) = 0;
  return;
}

undefined4 BLImmortalsEquipHorListPresenter::create()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x24))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLImmortalsEquipHorListPresenter::initWithView(BLImmortalsEquipHorListView* p1)
{
  int *piVar1;
  
  *(int *)(((int)this) + 0x1c) = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  (**(code **)(**(int **)(p1 + 0x10c) + 0x214))(*(int **)(p1 + 0x10c),((int)this) + 0x14);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x1c) + 0x10c);
  (**(code **)(*(int *)(piVar1) + (0x21c)))(piVar1,((int)this) + 0x18);
  return;
}

void BLImmortalsEquipHorListPresenter::onEnter()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLImmortalsEquipHorListPresenter::onExit()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar1)->removeAllObservers((cocos2d::CCObject*)((int)this));
  return;
}

void BLImmortalsEquipHorListPresenter::updateWithData(PlayerData* p1)
{
  undefined4 p4 = 0;

  *(undefined4 *)(((int)this) + 0x20) = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  ((BLTableView *)this)->reloadData(*(undefined4 *)(*(int *)(((int)this) + 0x1c) + 0x10c), 0);
  return;
}
