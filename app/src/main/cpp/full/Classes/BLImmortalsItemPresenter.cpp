#include "BLImmortalsItemPresenter.h"
#include "CCObject.h"
#include "CCDirector.h"
#include "CCArray.h"
#include "ImmortalsRoleItemData.h"
#include "BLImmortalsItemView.h"
#include "BLItemDataInfoPresenter.h"
#include "BLItemDataInfoView.h"
#include "BLLeakUtils.h"
#include "DataCacheManager.h"
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
extern "C" long long func_0079e2dc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e43c(...);
extern "C" long long func_0079e44c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e46c(...);
extern "C" long long func_0079e47c(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e5fc(...);
extern "C" long long func_0079e62c(...);
extern "C" long long func_0079e724(...);
extern "C" long long func_0079e8c4(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0056bdc8;
extern "C" unsigned long UNK_0056bddc;
extern "C" unsigned long UNK_0056be36;
extern "C" unsigned long UNK_0056be48;
extern "C" unsigned long UNK_0056bed2;
extern "C" unsigned long UNK_0056bfb8;
extern "C" unsigned long UNK_0056bfde;
extern "C" unsigned long UNK_0056c014;
extern "C" unsigned long UNK_0056c058;
extern "C" unsigned long UNK_0056c066;
extern "C" unsigned long UNK_0056c068;
extern "C" unsigned long UNK_0056c086;
extern "C" unsigned long UNK_0056c30e;
extern "C" unsigned long UNK_0056c39c;
extern "C" unsigned long _UNK_0056be0c;
extern "C" unsigned long _UNK_0056be10;
extern "C" unsigned long _UNK_0056be84;
extern "C" unsigned long _UNK_0056be88;
extern "C" unsigned long _UNK_0056bedc;
extern "C" unsigned long _UNK_0056c170;
extern "C" unsigned long _UNK_0056c174;
extern "C" unsigned long _UNK_0056c178;
extern "C" unsigned long _UNK_0056c17c;
extern "C" unsigned long _UNK_0056c180;
extern "C" unsigned long _UNK_0056c184;
extern "C" unsigned long _UNK_0056c188;
extern "C" unsigned long _UNK_0056c18c;
extern "C" unsigned long _UNK_0056c2f0;
extern "C" unsigned long _UNK_0056c2f4;
extern "C" unsigned long _UNK_0056c2f8;
extern "C" unsigned long _UNK_0056c2fc;
extern "C" unsigned long _UNK_0056c45c;
extern "C" unsigned long _UNK_0056c460;
extern "C" unsigned long _UNK_0056c464;
extern "C" unsigned long _UNK_0056c468;
extern "C" unsigned long _UNK_0056c46c;
extern "C" unsigned long _UNK_0056c470;
extern "C" unsigned long _UNK_0056c474;
extern "C" unsigned long g_0056bdc8;
extern "C" unsigned long g_0056bddc;
extern "C" unsigned long g_0056be0c;
extern "C" unsigned long g_0056be10;
extern "C" unsigned long g_0056be36;
extern "C" unsigned long g_0056be48;
extern "C" unsigned long g_0056be84;
extern "C" unsigned long g_0056be88;
extern "C" unsigned long g_0056bed2;
extern "C" unsigned long g_0056bedc;
extern "C" unsigned long g_0056bfb8;
extern "C" unsigned long g_0056bfde;
extern "C" unsigned long g_0056c014;
extern "C" unsigned long g_0056c058;
extern "C" unsigned long g_0056c066;
extern "C" unsigned long g_0056c068;
extern "C" unsigned long g_0056c086;
extern "C" unsigned long g_0056c170;
extern "C" unsigned long g_0056c174;
extern "C" unsigned long g_0056c178;
extern "C" unsigned long g_0056c17c;
extern "C" unsigned long g_0056c180;
extern "C" unsigned long g_0056c184;
extern "C" unsigned long g_0056c188;
extern "C" unsigned long g_0056c18c;
extern "C" unsigned long g_0056c2f0;
extern "C" unsigned long g_0056c2f4;
extern "C" unsigned long g_0056c2f8;
extern "C" unsigned long g_0056c2fc;
extern "C" unsigned long g_0056c30e;
extern "C" unsigned long g_0056c39c;
extern "C" unsigned long g_0056c45c;
extern "C" unsigned long g_0056c460;
extern "C" unsigned long g_0056c464;
extern "C" unsigned long g_0056c468;
extern "C" unsigned long g_0056c46c;
extern "C" unsigned long g_0056c470;
extern "C" unsigned long g_0056c474;
BLImmortalsItemPresenter::~BLImmortalsItemPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int *piStack_18;
  undefined4 uStack_14;
  
  /* VPTR_FIX(R87): vptr=(&g_A+g_B)+8 ?? g_ ?? 0 ?? -> ???? SEGV?????? vptr???? */;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0056bddc + g_0056be10,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLImmortalsItemPresenter::BLImmortalsItemPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  /* VPTR_FIX(R87): vptr=(&g_A+g_B)+8 ?? g_ ?? 0 ?? -> ???? SEGV?????? vptr???? */;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0056be48 + g_0056be88,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  *(int *)((int)this + 4*(6)) = 0;
  *(int *)((int)this + 4*(7)) = 0;
  *(undefined1 *)(((int)this) + 9) = 1;
  *(undefined1 *)((int)((int)this) + 0x25) = 0;
  *(int *)((int)this + 4*(8)) = 0;
  return;
}

undefined4 BLImmortalsItemPresenter::create()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x28))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}


void BLImmortalsItemPresenter::onEnter()
{
  return;
}

void BLImmortalsItemPresenter::onExit()
{
  return;
}

void BLImmortalsItemPresenter::updateWithType(int p1)
{
  *(int *)(((int)this) + 0x18) = p1;
  if (p1 == 2) {
    *(undefined1 *)(((int)this) + 0x25) = 1;
  }
  return;
}

void BLImmortalsItemPresenter::updateWithIndex(int p1)
{
  return;
}


undefined4 BLImmortalsItemPresenter::initNumData(int p1, int p2)
{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined1 auStack_1b0 [4];
  undefined1 auStack_1ac [4];
  undefined1 auStack_1a8 [12];
  undefined1 auStack_19c [4];
  undefined1 auStack_198 [4];
  undefined1 auStack_194 [4];
  undefined1 auStack_190 [8];
  undefined1 auStack_188 [4];
  undefined1 auStack_184 [176];
  undefined1 auStack_d4 [8];
  undefined1 auStack_cc [4];
  undefined1 auStack_c8 [180];
  
  uVar3 = (undefined4)(cocos2d::CCArray::create());
  auStack_1a8[0] = 0;
  auStack_1a8[1] = 0xff;
  auStack_1a8[2] = 0;
  auStack_1a8[3] = 0;
  auStack_1a8[4] = 0;
  auStack_1a8[5] = 0;
  auStack_1a8[6] = 0;
  auStack_1a8[7] = 0;
  auStack_1a8[8] = 0;
  if (p1 < p2) {
    auStack_1a8[0] = 0xff;
    auStack_1a8[1] = 0;
    *(undefined1 *)(((int)this) + 0x24) = 0;
  }
  func_0079e43c(auStack_190,0x18);
  func_0079e44c(auStack_188,p1);
  func_0079e45c(auStack_1b0,&g_0056bfb8 + g_0056c170,auStack_d4);
  func_0079e46c(auStack_19c,auStack_184);
  func_0079e2bc(auStack_1b0);
  func_0079e47c(auStack_190);
  func_0079e45c(auStack_198,&g_0056bfde + g_0056c174,auStack_d4);
  func_0079e43c(auStack_d4,0x18);
  func_0079e44c(auStack_cc,p2);
  func_0079e45c(auStack_1ac,&g_0056c014 + g_0056c178,auStack_190);
  func_0079e46c(auStack_194,auStack_c8);
  func_0079e2bc(auStack_1ac);
  func_0079e47c(auStack_d4);
  iVar8 = 0;
  do {
    piVar4 = (int *)((long long)::operator new((size_t)(0x3c)));
    0 /* ctorZero */;
    iVar7 = g_0056c180;
    *piVar4 = *(int *)(&g_0056c058 + g_0056c17c) + 8;
    iVar6 = *(int *)(&g_0056c068 + g_0056c184);
    piVar4[6] = iVar6 + 0xc;
    piVar4[7] = iVar6 + 0xc;
    piVar4[5] = 1;
    func_0079e2dc(piVar4 + 6,&g_0056c066 + iVar7);
    func_0079e2dc(piVar4 + 7,&g_0056c086 + g_0056c188);
    piVar4[10] = 0x14;
    piVar4[8] = 0;
    *(undefined1 *)(piVar4 + 9) = 0xff;
    *(undefined1 *)((int)piVar4 + 0x25) = 0xff;
    *(undefined1 *)((int)piVar4 + 0x26) = 0xff;
    piVar4[0xb] = 0x3f800000;
    piVar4[0xd] = 0;
    piVar4[0xc] = 0;
    *(undefined1 *)(piVar4 + 0xe) = 0;
    *(undefined1 *)((int)piVar4 + 0x39) = 0;
    ((cocos2d::CCObject *)piVar4)->autorelease();
    piVar4[5] = 1;
    func_0079e52c(piVar4 + 6,auStack_19c + iVar8 * 4);
    iVar7 = iVar8 * 3;
    uVar1 = auStack_1a8[iVar7 + 1];
    uVar2 = auStack_1a8[iVar7 + 2];
    *(undefined1 *)(piVar4 + 9) = auStack_1a8[iVar7];
    *(undefined1 *)((int)piVar4 + 0x25) = uVar1;
    *(undefined1 *)((int)piVar4 + 0x26) = uVar2;
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    (void)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(g_0056c18c),(int)(uVar5)))));
    iVar7 = ((long long)([](int _a){float _f;__builtin_memcpy(&_f,&_a,4);return (int)_f;}((int)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(g_0056c18c),(int)(uVar5))))))));
    piVar4[10] = iVar7;
    ((cocos2d::CCArray *)uVar3)->addObject((cocos2d::CCObject*)piVar4);
    iVar8 = iVar8 + 1;
  } while (iVar8 != 3);
  func_0079e2bc(auStack_194);
  func_0079e2bc(auStack_198);
  func_0079e2bc(auStack_19c);
  return uVar3;
}

// ===== 修复: 补回被误删的函数占位 (3) =====
void BLImmortalsItemPresenter::initWithView(BLImmortalsItemView* p1)
{
  *(int *)(((int)this) + 0x14) = (undefined4)(intptr_t)p1;
  (**(code **)(**(int **)(p1 + 0x114) + 0x254))
            (*(int **)(p1 + 0x114),((int)this),*(undefined4 *)((unsigned char *)((char *)&g_0056bed2 + (intptr_t)(g_0056bedc))),0,
             0x20);
  return;
}

void BLImmortalsItemPresenter::updateWithData(ImmortalsRoleItemData* p1)
{
  undefined4 uVar1;
  int *piVar2;
  int *piVar3;
  code *pcVar4;
  int iStack_14;
  
  *(int *)(((int)this) + 0x1c) = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  iStack_14 = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  (**(code **)(**(int **)(((int)this) + 0x14) + 0x90))(*(int **)(((int)this) + 0x14),(int)(intptr_t)(int)(intptr_t)p1 != 0);
  if (*(int *)(((int)this) + 0x1c) != 0) {
    uVar1 = (undefined4)(((DataCacheManager *)this)->shareManager());
    piVar2 = ((void)((DataCacheManager *)(uVar1))->getItemDataByID(*(undefined4 *)(*(int *)(((int)this) + 0x1c) + 4)),(int *)0);
    if (piVar2 != (int *)0x0) {
      piVar3 = *(int **)(*(int *)(((int)this) + 0x14) + 0x10c);
      pcVar4 = *(code **)(*piVar3 + 0x20c);
      (**(code **)(*(int *)(piVar2) + (0x58)))(&iStack_14);
      piVar2 = (int *)0 /* ctorZero */;
      uVar1 = (undefined4)((**(code **)(*(int *)(piVar2) + (0x214)))());
      (*pcVar4)(piVar3,uVar1);
      func_0079e2bc(&iStack_14);
    }
  }
  return;
}

void BLImmortalsItemPresenter::onClick(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
