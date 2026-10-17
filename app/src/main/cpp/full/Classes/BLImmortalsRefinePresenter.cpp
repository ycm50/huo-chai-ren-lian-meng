#include "BLImmortalsRefinePresenter.h"
#include "CCNotificationCenter.h"
#include "CCObject.h"
#include "CCArray.h"
#include "BLImmortalsRefineView.h"
#include "ImmortalsRoleItemData.h"
#include "BLImmortalsEquipHorListPresenter.h"
#include "BLImmortalsRefineBaseInfoPresenter.h"
#include "BLImmortalsRefineInfoPresenter.h"
#include "BLLeakUtils.h"
#include "BLRichText.h"
#include "BackPackData.h"
#include "DataCacheManager.h"
#include "DataManager.h"
#include "ImmortalsInfoData.h"
#include "ImmortalsInfoItemData.h"
#include "ImmortalsRefineLockData.h"
#include "ImmortalsRoleData.h"
#include "ItemData.h"
#include "PlayerData.h"
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
extern "C" long long func_0079e2dc(...);
extern "C" long long func_0079e2ec(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e58c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long func_0079e5fc(...);
extern "C" long long func_0079e734(...);
extern "C" long long func_0079e964(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0056cccc;
extern "C" unsigned long UNK_0056cce0;
extern "C" unsigned long UNK_0056d07e;
extern "C" unsigned long UNK_0056d0a4;
extern "C" unsigned long UNK_0056d0c8;
extern "C" unsigned long UNK_0056d0e4;
extern "C" unsigned long UNK_0056d100;
extern "C" unsigned long UNK_0056d11c;
extern "C" unsigned long UNK_0056d1b6;
extern "C" unsigned long UNK_0056d230;
extern "C" unsigned long UNK_0056d24e;
extern "C" unsigned long UNK_0056d25a;
extern "C" unsigned long UNK_0056d3ce;
extern "C" unsigned long UNK_0056d3d2;
extern "C" unsigned long UNK_0056d3d6;
extern "C" unsigned long UNK_0056d3da;
extern "C" unsigned long UNK_0056d3de;
extern "C" unsigned long UNK_0056d3e2;
extern "C" unsigned long UNK_0056d3f6;
extern "C" unsigned long UNK_0056d408;
extern "C" unsigned long UNK_0056d424;
extern "C" unsigned long UNK_0056d4a0;
extern "C" unsigned long UNK_0056d4b0;
extern "C" unsigned long UNK_0056d4be;
extern "C" unsigned long UNK_0056d4cc;
extern "C" unsigned long UNK_0056d712;
extern "C" unsigned long UNK_0056d714;
extern "C" unsigned long UNK_0056e1a8;
extern "C" unsigned long UNK_0056e1ac;
extern "C" unsigned long UNK_0056e1de;
extern "C" unsigned long UNK_0056e1e0;
extern "C" unsigned long UNK_0056e244;
extern "C" unsigned long UNK_0056e296;
extern "C" unsigned long UNK_0056e298;
extern "C" unsigned long _UNK_0056cd1c;
extern "C" unsigned long _UNK_0056cd20;
extern "C" unsigned long _UNK_0056d144;
extern "C" unsigned long _UNK_0056d148;
extern "C" unsigned long _UNK_0056d14c;
extern "C" unsigned long _UNK_0056d150;
extern "C" unsigned long _UNK_0056d154;
extern "C" unsigned long _UNK_0056d158;
extern "C" unsigned long _UNK_0056d15c;
extern "C" unsigned long _UNK_0056d160;
extern "C" unsigned long _UNK_0056d164;
extern "C" unsigned long _UNK_0056d168;
extern "C" unsigned long _UNK_0056d16c;
extern "C" unsigned long _UNK_0056d1c0;
extern "C" unsigned long _UNK_0056d2f0;
extern "C" unsigned long _UNK_0056d2f4;
extern "C" unsigned long _UNK_0056d2f8;
extern "C" unsigned long _UNK_0056d2fc;
extern "C" unsigned long _UNK_0056d39c;
extern "C" unsigned long _UNK_0056d3a0;
extern "C" unsigned long _UNK_0056d3a4;
extern "C" unsigned long _UNK_0056d3a8;
extern "C" unsigned long _UNK_0056d3ac;
extern "C" unsigned long _UNK_0056d3b0;
extern "C" unsigned long _UNK_0056d3b4;
extern "C" unsigned long _UNK_0056d3b8;
extern "C" unsigned long _UNK_0056d5b4;
extern "C" unsigned long _UNK_0056d5b8;
extern "C" unsigned long _UNK_0056d5bc;
extern "C" unsigned long _UNK_0056d5c0;
extern "C" unsigned long _UNK_0056d5c4;
extern "C" unsigned long _UNK_0056d5c8;
extern "C" unsigned long _UNK_0056d5cc;
extern "C" unsigned long _UNK_0056d5d0;
extern "C" unsigned long _UNK_0056d5d4;
extern "C" unsigned long _UNK_0056d6ac;
extern "C" unsigned long _UNK_0056d6f8;
extern "C" unsigned long _UNK_0056d7b0;
extern "C" unsigned long _UNK_0056d7b4;
extern "C" unsigned long _UNK_0056d7b8;
extern "C" unsigned long _UNK_0056d7bc;
extern "C" unsigned long _UNK_0056d7c0;
extern "C" unsigned long _UNK_0056e1c4;
extern "C" unsigned long _UNK_0056e1c8;
extern "C" unsigned long _UNK_0056e278;
extern "C" unsigned long _UNK_0056e27c;
extern "C" unsigned long _UNK_0056e280;
extern "C" unsigned long _UNK_0056e2b8;
extern "C" unsigned long _UNK_0056e2bc;
extern "C" unsigned long extraout_r1;
extern "C" unsigned long g_0056cccc;
extern "C" unsigned long g_0056cce0;
extern "C" unsigned long g_0056cd1c;
extern "C" unsigned long g_0056cd20;
extern "C" unsigned long g_0056d07e;
extern "C" unsigned long g_0056d0a4;
extern "C" unsigned long g_0056d0c8;
extern "C" unsigned long g_0056d0e4;
extern "C" unsigned long g_0056d100;
extern "C" unsigned long g_0056d11c;
extern "C" unsigned long g_0056d144;
extern "C" unsigned long g_0056d148;
extern "C" unsigned long g_0056d14c;
extern "C" unsigned long g_0056d150;
extern "C" unsigned long g_0056d154;
extern "C" unsigned long g_0056d158;
extern "C" unsigned long g_0056d15c;
extern "C" unsigned long g_0056d160;
extern "C" unsigned long g_0056d164;
extern "C" unsigned long g_0056d168;
extern "C" unsigned long g_0056d16c;
extern "C" unsigned long g_0056d1b6;
extern "C" unsigned long g_0056d1c0;
extern "C" unsigned long g_0056d230;
extern "C" unsigned long g_0056d24e;
extern "C" unsigned long g_0056d25a;
extern "C" unsigned long g_0056d2f0;
extern "C" unsigned long g_0056d2f4;
extern "C" unsigned long g_0056d2f8;
extern "C" unsigned long g_0056d2fc;
extern "C" unsigned long g_0056d39c;
extern "C" unsigned long g_0056d3a0;
extern "C" unsigned long g_0056d3a4;
extern "C" unsigned long g_0056d3a8;
extern "C" unsigned long g_0056d3ac;
extern "C" unsigned long g_0056d3b0;
extern "C" unsigned long g_0056d3b4;
extern "C" unsigned long g_0056d3b8;
extern "C" unsigned long g_0056d3ce;
extern "C" unsigned long g_0056d3d2;
extern "C" unsigned long g_0056d3d6;
extern "C" unsigned long g_0056d3da;
extern "C" unsigned long g_0056d3de;
extern "C" unsigned long g_0056d3e2;
extern "C" unsigned long g_0056d3f6;
extern "C" unsigned long g_0056d408;
extern "C" unsigned long g_0056d424;
extern "C" unsigned long g_0056d4a0;
extern "C" unsigned long g_0056d4b0;
extern "C" unsigned long g_0056d4be;
extern "C" unsigned long g_0056d4cc;
extern "C" unsigned long g_0056d5b4;
extern "C" unsigned long g_0056d5b8;
extern "C" unsigned long g_0056d5bc;
extern "C" unsigned long g_0056d5c0;
extern "C" unsigned long g_0056d5c4;
extern "C" unsigned long g_0056d5c8;
extern "C" unsigned long g_0056d5cc;
extern "C" unsigned long g_0056d5d0;
extern "C" unsigned long g_0056d5d4;
extern "C" unsigned long g_0056d6ac;
extern "C" unsigned long g_0056d6f8;
extern "C" unsigned long g_0056d712;
extern "C" unsigned long g_0056d714;
extern "C" unsigned long g_0056d7b0;
extern "C" unsigned long g_0056d7b4;
extern "C" unsigned long g_0056d7b8;
extern "C" unsigned long g_0056d7bc;
extern "C" unsigned long g_0056d7c0;
extern "C" unsigned long g_0056e1a8;
extern "C" unsigned long g_0056e1ac;
extern "C" unsigned long g_0056e1c4;
extern "C" unsigned long g_0056e1c8;
extern "C" unsigned long g_0056e1de;
extern "C" unsigned long g_0056e1e0;
extern "C" unsigned long g_0056e244;
extern "C" unsigned long g_0056e278;
extern "C" unsigned long g_0056e27c;
extern "C" unsigned long g_0056e280;
extern "C" unsigned long g_0056e296;
extern "C" unsigned long g_0056e298;
extern "C" unsigned long g_0056e2b8;
extern "C" unsigned long g_0056e2bc;
BLImmortalsRefinePresenter::~BLImmortalsRefinePresenter()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;

  undefined4 uVar1;
  int *piStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  /* VPTR_FIX(R87): vptr=(&g_A+g_B)+8 ?? g_ ?? 0 ?? -> ???? SEGV?????? vptr???? */;
  piStack_20 = (int *)((int)this);
  uStack_1c = (undefined4)(p2);
  uStack_18 = (undefined4)(p3);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_1c,&g_0056cce0 + g_0056cd20,&piStack_20);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_1c);
  func_0079e2bc(&uStack_1c);
  func_0079e2bc(((int)this) + 7);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLImmortalsRefinePresenter::BLImmortalsRefinePresenter()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

undefined4 BLImmortalsRefinePresenter::create()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x28))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}


void BLImmortalsRefinePresenter::onExit()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar1)->removeAllObservers((cocos2d::CCObject*)((int)this));
  return;
}

void BLImmortalsRefinePresenter::updateWithData()
{
  return;
}

void BLImmortalsRefinePresenter::resetLockStatus()
{
  ((ImmortalsRefineLockData *)this)->getInstance();
  ((ImmortalsRefineLockData *)this)->reset();
  ((BLImmortalsRefineInfoPresenter *)*(undefined4 *)(*(int *)(*(int *)(((int)this) + 0x14) + 0x114) + 0x108))->resetLockStatus();
  return;
}


int BLImmortalsRefinePresenter::getRandomValue(int p1, int p2)
{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int extraout_r1;
  
  uVar1 = (undefined4)(((long long)([](int _a){float _f;__builtin_memcpy(&_f,&_a,4);float _r=(float)(int)_a;int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(p1)))));
  uVar1 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar1),(int)(g_0056d39c)))));
  if (p2 < 0xb) {
    uVar2 = (undefined4)(((long long)::lrand48()));
    func_0079e964(uVar2,p2);
    uVar2 = (undefined4)(((long long)([](int _a){float _f;__builtin_memcpy(&_f,&_a,4);float _r=(float)(int)_a;int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(extraout_r1 + 10)))));
  }
  else {
    if (p2 < 0x1a) {
      uVar3 = (undefined4)(((long long)([](int _a){float _f;__builtin_memcpy(&_f,&_a,4);float _r=(float)(int)_a;int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(p2 + 1)))));
      uVar2 = (undefined4)(g_0056d3a0);
    }
    else {
      if (0x32 < p2) {
        if (p2 < 0x51) {
          uVar3 = (undefined4)(((long long)([](int _a){float _f;__builtin_memcpy(&_f,&_a,4);float _r=(float)(int)_a;int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(p2 + 1)))));
          uVar2 = (undefined4)(g_0056d3a8);
        }
        else {
          uVar2 = (undefined4)(g_0056d3b4);
          uVar3 = (undefined4)(g_0056d3b8);
          if (p2 < 0x65) {
            uVar2 = (undefined4)(((long long)([](int _a){float _f;__builtin_memcpy(&_f,&_a,4);float _r=(float)(int)_a;int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(p2 + 1)))));
            uVar2 = (undefined4)(0 /* ctorZero */);
            uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x - _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar2),(int)(g_0056d3b0)))));
            goto code_r0x0056d388;
          }
        }
        uVar2 = (undefined4)(0 /* ctorZero */);
        goto code_r0x0056d388;
      }
      uVar3 = (undefined4)(((long long)([](int _a){float _f;__builtin_memcpy(&_f,&_a,4);float _r=(float)(int)_a;int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(p2 + 1)))));
      uVar2 = (undefined4)(g_0056d3a4);
    }
    uVar2 = (undefined4)(0 /* ctorZero */);
    uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x + _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar2),(int)(g_0056d3a0)))));
  }
code_r0x0056d388:
  (void)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar1),(int)(uVar2)))));
  iVar4 = ((long long)([](int _a){float _f;__builtin_memcpy(&_f,&_a,4);return (int)_f;}((int)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar1),(int)(uVar2))))))));
  if (p1 < iVar4) {
    iVar4 = p1;
  }
  return iVar4;
}



void BLImmortalsRefinePresenter::onUpdateLock()
{
  BLImmortalsRefinePresenter::updateRefinePrice();
  return;
}




void BLImmortalsRefinePresenter::updateInfo()
{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  bool bVar5;
  
  *(undefined4 *)(((int)this) + 0x24) = 0;
  iVar1 = ((PlayerData *)*(undefined4 *)(((int)this) + 0x20))->getImmortalsData();
  iVar4 = iVar1 + 4;
  iVar2 = iVar4;
  iVar1 = *(int *)(iVar1 + 8);
  while (iVar1 != 0) {
    if (*(int *)(iVar1 + 0x10) < *(int *)(((int)this) + 0x18)) {
      iVar1 = *(int *)(iVar1 + 0xc);
    }
    else {
      iVar2 = iVar1;
      iVar1 = *(int *)(iVar1 + 8);
    }
  }
  if ((iVar2 != iVar4) && (*(int *)(iVar2 + 0x10) <= *(int *)(((int)this) + 0x18))) {
    iVar4 = iVar2;
  }
  iVar2 = ((PlayerData *)*(undefined4 *)(((int)this) + 0x20))->getImmortalsData();
  if (iVar4 != iVar2 + 4) {
    *(undefined4 *)(((int)this) + 0x24) = *(undefined4 *)(iVar4 + 0x14);
  }
  ((BLImmortalsEquipHorListPresenter *)*(undefined4 *)(*(int *)(*(int *)(((int)this) + 0x14) + 0x10c) + 0x108))->updateWithData((PlayerData*)*(undefined4 *)(((int)this) + 0x20));
  ((BLImmortalsRefineBaseInfoPresenter *)*(undefined4 *)(*(int *)(*(int *)(((int)this) + 0x14) + 0x110) + 0x108))->updateWithData((ImmortalsRoleItemData*)*(undefined4 *)(((int)this) + 0x24));
  ((BLImmortalsRefineInfoPresenter *)*(undefined4 *)(*(int *)(*(int *)(((int)this) + 0x14) + 0x114) + 0x108))->updateWithData((ImmortalsRoleItemData*)*(undefined4 *)(((int)this) + 0x24));
  bVar5 = *(int *)(((int)this) + 0x24) != 0;
  piVar3 = *(int **)(*(int *)(((int)this) + 0x14) + 0x118);
  (**(code **)(*piVar3 + 0x90))(piVar3,bVar5);
  piVar3 = *(int **)(*(int *)(((int)this) + 0x14) + 0x11c);
  (**(code **)(*piVar3 + 0x90))(piVar3,bVar5);
  if (bVar5) {
    BLImmortalsRefinePresenter::updateRefinePrice();
    BLImmortalsRefinePresenter::updateXiLianShiNum();
  }
  piVar3 = (int *)(**(code **)(**(int **)(((int)this) + 0x14) + 0xd4))(*(int **)(((int)this) + 0x14),100);
  (**(code **)(*piVar3 + 0x90))(piVar3,bVar5);
  piVar3 = *(int **)(*(int *)(((int)this) + 0x14) + 0x120);
  (**(code **)(*piVar3 + 0x90))(piVar3,bVar5);
  piVar3 = *(int **)(*(int *)(((int)this) + 0x14) + 0x124);
  (**(code **)(*piVar3 + 0x90))(piVar3,bVar5);
  piVar3 = *(int **)(*(int *)(((int)this) + 0x14) + 0x128);
  (**(code **)(*piVar3 + 0x90))(piVar3,bVar5);
  return;
}



void BLImmortalsRefinePresenter::onUpdateIndex(cocos2d::CCObject* p1)
{
  int iVar1;
  
  if ((p1 != 0) &&
     (iVar1 = func_0079e55c(p1,*(undefined4 *)(&g_0056e296 + g_0056e2bc),
                              *(undefined4 *)(&g_0056e298 + g_0056e2b8),0), iVar1 != 0)) {
    *(undefined4 *)(((int)this) + 0x18) = *(undefined4 *)(iVar1 + 0x14);
    BLImmortalsRefinePresenter::resetLockStatus();
    BLImmortalsRefinePresenter::updateInfo();
  }
  return;
}

void BLImmortalsRefinePresenter::onRefine(cocos2d::CCObject* p1, unsigned int p2)
{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  if ((*(int *)(((int)this) + 0x24) != 0) &&
     (iVar1 = BLImmortalsRefinePresenter::checkCost(), iVar1 != 0)) {
    BLImmortalsRefinePresenter::updateRefineAttr();
    *(int *)(*(int *)(((int)this) + 0x24) + 0x14) = *(int *)(*(int *)(((int)this) + 0x24) + 0x14) + 1;
    piVar2 = (int *)((DataManager *)this)->shareDataManager();
    piVar2 = (int *)(**(code **)(*piVar2 + 0x28))();
    uVar3 = (undefined4)((**(code **)(*piVar2 + 0x180))());
    ((ImmortalsRoleData *)uVar3)->refine((ImmortalsRoleItemData*)*(undefined4 *)(((int)this) + 0x24));
    BLImmortalsRefinePresenter::updateInfo();
  }
  return;
}

// ===== 修复: 补回被误删的函数占位 (9) =====
void BLImmortalsRefinePresenter::initWithView(BLImmortalsRefineView* p1)
{
  *(int *)(((int)this) + 0x14) = (undefined4)(intptr_t)p1;
  (**(code **)(**(int **)(p1 + 0x118) + 0x254))
            (*(int **)(p1 + 0x118),((int)this),*(undefined4 *)((unsigned char *)((char *)&g_0056d1b6 + (intptr_t)(g_0056d1c0))),0,
             0x20);
  return;
}

undefined4 BLImmortalsRefinePresenter::checkCost()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

undefined4 BLImmortalsRefinePresenter::getArrPrice()
{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  int iStack_5c;
  undefined1 auStack_54 [4];
  undefined1 auStack_50 [16];
  int aiStack_40 [4];
  undefined4 uStack_30;
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [8];
  
  uVar1 = (undefined4)(cocos2d::CCArray::create());
  aiStack_40[0] = *(int *)((unsigned char *)((char *)&g_0056d3ce + (intptr_t)(g_0056d5b4)));
  aiStack_40[1] = *(int *)((unsigned char *)((char *)&g_0056d3d2 + (intptr_t)(g_0056d5b4)));
  aiStack_40[2] = *(int *)((unsigned char *)((char *)&g_0056d3d6 + (intptr_t)(g_0056d5b4)));
  aiStack_40[3] = *(int *)((unsigned char *)((char *)&g_0056d3da + (intptr_t)(g_0056d5b4)));
  uStack_30 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_0056d3de + (intptr_t)(g_0056d5b4))));
  func_0079e45c(auStack_2c,(unsigned char *)((char *)&g_0056d3e2 + (intptr_t)(g_0056d5b8)),auStack_50,(unsigned char *)((char *)&g_0056d3e2 + (intptr_t)(g_0056d5b4)))
  ;
  func_0079e45c(auStack_28,(unsigned char *)((char *)&g_0056d3f6 + (intptr_t)(g_0056d5bc)),auStack_50);
  func_0079e45c(auStack_24,(unsigned char *)((char *)&g_0056d408 + (intptr_t)(g_0056d5c0)),auStack_50);
  ConvertToString<int>(auStack_20, 0x14, 0);
  func_0079e45c(auStack_1c,(unsigned char *)((char *)&g_0056d424 + (intptr_t)(g_0056d5c4)),auStack_50);
  auStack_50[2] = 0;
  auStack_50[0] = 0xff;
  auStack_50[1] = 0xff;
  auStack_50[3] = 0;
  auStack_50[4] = 0;
  auStack_50[5] = 0;
  auStack_50[6] = 0xff;
  auStack_50[7] = 0xff;
  auStack_50[8] = 0;
  auStack_50[9] = 0xff;
  auStack_50[10] = 0xff;
  auStack_50[0xb] = 0;
  auStack_50[0xc] = 0;
  auStack_50[0xd] = 0;
  auStack_50[0xe] = 0;
  piVar2 = (int *)((ImmortalsRefineLockData *)this)->getInstance();
  iStack_5c = 5;
  if ((1 < *piVar2) || (iStack_5c = 2, *piVar2 == 1)) {
    ConvertToString<int>(auStack_54, 0x1e, 0);
    func_0079e52c(auStack_2c,auStack_54);
    func_0079e2bc(auStack_54);
  }
  iVar5 = 0;
  do {
    piVar2 = (int *)((long long)::operator new((size_t)(0x3c)));
    0 /* ctorZero */;
    *piVar2 = *(int *)((unsigned char *)((char *)&g_0056d4a0 + (intptr_t)(g_0056d5c8))) + 8;
    iVar3 = (undefined4)(intptr_t)(g_0056d5d0);
    iVar4 = (undefined4)(intptr_t)(*(int *)((unsigned char *)((char *)&g_0056d4b0 + (intptr_t)(g_0056d5cc))));
    piVar2[6] = iVar4 + 0xc;
    piVar2[7] = iVar4 + 0xc;
    piVar2[5] = 1;
    func_0079e2dc(piVar2 + 6,&g_0056d4be + iVar3);
    func_0079e2dc(piVar2 + 7,(unsigned char *)((char *)&g_0056d4cc + (intptr_t)(g_0056d5d4)));
    piVar2[10] = 0x14;
    piVar2[8] = 0;
    *(undefined1 *)(piVar2 + 9) = 0xff;
    *(undefined1 *)((int)piVar2 + 0x25) = 0xff;
    *(undefined1 *)((int)piVar2 + 0x26) = 0xff;
    piVar2[0xb] = 0x3f800000;
    piVar2[0xd] = 0;
    piVar2[0xc] = 0;
    *(undefined1 *)(piVar2 + 0xe) = 0;
    *(undefined1 *)((int)piVar2 + 0x39) = 0;
    ((cocos2d::CCObject *)piVar2)->autorelease();
    piVar2[5] = aiStack_40[iVar5];
    func_0079e52c(piVar2 + 6,auStack_2c + iVar5 * 4);
    iVar3 = (undefined4)(intptr_t)(iVar5 * 3);
    *(undefined1 *)(piVar2 + 9) = auStack_50[iVar3];
    *(undefined1 *)((int)piVar2 + 0x25) = auStack_50[iVar3 + 1];
    *(undefined1 *)((int)piVar2 + 0x26) = auStack_50[iVar3 + 2];
    piVar2[10] = 0x14;
    ((cocos2d::CCArray *)uVar1)->addObject((cocos2d::CCObject*)piVar2);
    iVar5 = (undefined4)(intptr_t)(iVar5 + 1);
  } while (iVar5 != iStack_5c);
  iVar5 = 4;
  do {
    func_0079e2bc(auStack_2c + iVar5 * 4);
    bVar6 = (undefined4)(intptr_t)(iVar5 != 0);
    iVar5 = (undefined4)(intptr_t)(iVar5 + -1);
  } while (bVar6);
  return uVar1;
}

void BLImmortalsRefinePresenter::updateRefinePrice()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

undefined8 BLImmortalsRefinePresenter::updateXiLianShiNum()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int *piVar2;
  code *pcVar3;
  undefined4 uStack_14;
  
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((DataManager *)this)->shareDataManager());
  uVar1 = ((void)(((DataManager *)(uVar1))->getBackPackItemNum(g_0056d6f8)),(undefined4)0);
  piVar2 = *(int **)(*(int *)(((int)this) + 0x14) + 0x128);
  pcVar3 = *(code **)(*piVar2 + 0x234);
  ConvertToString<int>(&uStack_14, uVar1, 0);
  (*pcVar3)(piVar2,uStack_14);
  func_0079e2bc(&uStack_14);
  return ghidra_CONCAT44(uStack_14,((int)this));
}

void BLImmortalsRefinePresenter::onBuyXiLianShi(cocos2d::CCObject* p1)
{
  undefined4 p3 = 0;

  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  
  iVar6 = (undefined4)(intptr_t)((int *)((int)this));
  if ((((int)(intptr_t)(int)(intptr_t)p1 != 0) &&
      (iVar1 = func_0079e55c(p1,*(undefined4 *)((unsigned char *)((char *)&g_0056d712 + (intptr_t)(g_0056d7bc))),
                               *(undefined4 *)((unsigned char *)((char *)&g_0056d714 + (intptr_t)(g_0056d7b8))),0,((int)this),p1,
                               p3), iVar1 != 0)) &&
     (iVar1 = *(int *)(iVar1 + 0x14), iVar1 == 1)) {
    uVar2 = (undefined4)(((DataManager *)this)->shareDataManager());
    iVar3 = (undefined4)(intptr_t)(((DataManager *)(uVar2))->isEnoughVirNumber(2, 100, 1));
    if (iVar3 != 0) {
      piVar4 = (int *)((DataManager *)this)->shareDataManager();
      uVar2 = (undefined4)((**(code **)(*(int *)(piVar4) + (0x28)))());
      ((UserData *)(uVar2))->subVirNumber(2, g_0056d7b0, g_0056d7b4);
      piVar4 = (int *)::operator new(0x7c);
      ::new ((void *)piVar4) ItemData();   /* ALLOC+CTOR_FIX(R116): ??->? ? dump ????? ItemData */
      uVar2 = (undefined4)(((DataCacheManager *)this)->shareManager());
      uVar2 = ((void)(((DataCacheManager *)(uVar2))->getItemDataByID(g_0056d7c0)),(undefined4)0);
      ((ItemData *)(piVar4))->initWith((ItemData*)uVar2);
      (**(code **)(*(int *)(piVar4) + (0x1c)))(piVar4,g_0056d7c0);
      (**(code **)(*(int *)(piVar4) + (0x9c)))(piVar4,100);
      piVar5 = (int *)((DataManager *)this)->shareDataManager();
      piVar5 = (int *)(**(code **)(*(int *)(piVar5) + (0x28)))();
      uVar2 = (undefined4)((**(code **)(*(int *)(piVar5) + (0x50)))());
      ((BackPackData *)(uVar2))->addItemData((ItemData*)piVar4, 1);
      ((BLImmortalsRefinePresenter *)(((int)this)))->updateXiLianShiNum();
      iVar6 = (undefined4)(intptr_t)(iVar1);
    }
  }
  return;
}

void BLImmortalsRefinePresenter::updateRefineAttr()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLImmortalsRefinePresenter::onEnter()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLImmortalsRefinePresenter::onUpdateRole(cocos2d::CCObject* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
