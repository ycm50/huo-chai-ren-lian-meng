#include "BLRenascenceTargetPresenter.h"
#include "CCArray.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "CCObject.h"
#include "CCNode.h"
#include "CCTouch.h"
#include "CCString.h"
#include "CCDirector.h"
#include "BLLeakUtils.h"
#include "BLRenascenceTargetItemPresenter.h"
#include "BLTableView.h"
#include "DataCacheManager.h"
#include "DataManager.h"
#include "RenascenceBaseData.h"
#include "RoleRenascenceData.h"
#include "RoleRenascenceItemData.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <new>   // ghost_fix.js 自动补齐
using namespace cocos2d;
// 兜底声明
extern "C" long long software_udf(...);

extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2dc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4ac(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e60c(...);
extern "C" long long func_0079e784(...);
extern "C" long long func_0079e864(...);
extern "C" long long func_0079e874(...);
extern "C" long long func_0079e964(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0064d918;
extern "C" unsigned long UNK_0064d942;
extern "C" unsigned long UNK_0064d994;
extern "C" unsigned long UNK_0064d9cc;
extern "C" unsigned long UNK_0064da40;
extern "C" unsigned long UNK_0064de5a;
extern "C" unsigned long UNK_0064de5e;
extern "C" unsigned long UNK_0064df52;
extern "C" unsigned long UNK_0064dfa8;
extern "C" unsigned long UNK_0064dfc6;
extern "C" unsigned long UNK_0064dfd8;
extern "C" unsigned long UNK_0064e00a;
extern "C" unsigned long UNK_0064e0c6;
extern "C" unsigned long UNK_0064e0d4;
extern "C" unsigned long UNK_0064e0e2;
extern "C" unsigned long UNK_0064e0f4;
extern "C" unsigned long UNK_0064e106;
extern "C" unsigned long UNK_0064e118;
extern "C" unsigned long UNK_0064e12a;
extern "C" unsigned long UNK_0064e13c;
extern "C" unsigned long UNK_0064e14e;
extern "C" unsigned long UNK_0064e160;
extern "C" unsigned long UNK_0064e172;
extern "C" unsigned long UNK_0064e184;
extern "C" unsigned long UNK_0064e198;
extern "C" unsigned long UNK_0064e2b4;
extern "C" unsigned long UNK_0064e2b6;
extern "C" unsigned long UNK_0064e34c;
extern "C" unsigned long UNK_0064e37c;
extern "C" unsigned long UNK_0064e3a2;
extern "C" unsigned long UNK_0064e3ba;
extern "C" unsigned long UNK_0064e3bc;
extern "C" unsigned long UNK_0064e3be;
extern "C" unsigned long UNK_0064e3c6;
extern "C" unsigned long _UNK_0064d980;
extern "C" unsigned long _UNK_0064d984;
extern "C" unsigned long _UNK_0064d998;
extern "C" unsigned long _UNK_0064d9d0;
extern "C" unsigned long _UNK_0064da44;
extern "C" unsigned long _UNK_0064daa0;
extern "C" unsigned long _UNK_0064daa4;
extern "C" unsigned long _UNK_0064df78;
extern "C" unsigned long _UNK_0064df7c;
extern "C" unsigned long _UNK_0064df80;
extern "C" unsigned long _UNK_0064e034;
extern "C" unsigned long _UNK_0064e038;
extern "C" unsigned long _UNK_0064e03c;
extern "C" unsigned long _UNK_0064e040;
extern "C" unsigned long _UNK_0064e23c;
extern "C" unsigned long _UNK_0064e240;
extern "C" unsigned long _UNK_0064e244;
extern "C" unsigned long _UNK_0064e248;
extern "C" unsigned long _UNK_0064e24c;
extern "C" unsigned long _UNK_0064e250;
extern "C" unsigned long _UNK_0064e254;
extern "C" unsigned long _UNK_0064e258;
extern "C" unsigned long _UNK_0064e25c;
extern "C" unsigned long _UNK_0064e260;
extern "C" unsigned long _UNK_0064e264;
extern "C" unsigned long _UNK_0064e268;
extern "C" unsigned long _UNK_0064e26c;
extern "C" unsigned long _UNK_0064e3c8;
extern "C" unsigned long _UNK_0064e3cc;
extern "C" unsigned long _UNK_0064e3d0;
extern "C" unsigned long _UNK_0064e3d4;
extern "C" unsigned long _UNK_0064e3d8;
extern "C" unsigned long _UNK_0064e3dc;
extern "C" unsigned long _UNK_0064e3e0;
extern "C" unsigned long _UNK_0064e3e4;
extern "C" unsigned long _UNK_0064e3e8;
extern "C" unsigned long extraout_r1;
extern "C" unsigned long extraout_r3;
extern "C" unsigned long g_0064d918;
extern "C" unsigned long g_0064d942;
extern "C" unsigned long g_0064d980;
extern "C" unsigned long g_0064d984;
extern "C" unsigned long g_0064d994;
extern "C" unsigned long g_0064d998;
extern "C" unsigned long g_0064d9cc;
extern "C" unsigned long g_0064d9d0;
extern "C" unsigned long g_0064da40;
extern "C" unsigned long g_0064da44;
extern "C" unsigned long g_0064daa0;
extern "C" unsigned long g_0064daa4;
extern "C" unsigned long g_0064de5a;
extern "C" unsigned long g_0064de5e;
extern "C" unsigned long g_0064df52;
extern "C" unsigned long g_0064df78;
extern "C" unsigned long g_0064df7c;
extern "C" unsigned long g_0064df80;
extern "C" unsigned long g_0064dfa8;
extern "C" unsigned long g_0064dfc6;
extern "C" unsigned long g_0064dfd8;
extern "C" unsigned long g_0064e00a;
extern "C" unsigned long g_0064e034;
extern "C" unsigned long g_0064e038;
extern "C" unsigned long g_0064e03c;
extern "C" unsigned long g_0064e040;
extern "C" unsigned long g_0064e0c6;
extern "C" unsigned long g_0064e0d4;
extern "C" unsigned long g_0064e0e2;
extern "C" unsigned long g_0064e0f4;
extern "C" unsigned long g_0064e106;
extern "C" unsigned long g_0064e118;
extern "C" unsigned long g_0064e12a;
extern "C" unsigned long g_0064e13c;
extern "C" unsigned long g_0064e14e;
extern "C" unsigned long g_0064e160;
extern "C" unsigned long g_0064e172;
extern "C" unsigned long g_0064e184;
extern "C" unsigned long g_0064e198;
extern "C" unsigned long g_0064e23c;
extern "C" unsigned long g_0064e240;
extern "C" unsigned long g_0064e244;
extern "C" unsigned long g_0064e248;
extern "C" unsigned long g_0064e24c;
extern "C" unsigned long g_0064e250;
extern "C" unsigned long g_0064e254;
extern "C" unsigned long g_0064e258;
extern "C" unsigned long g_0064e25c;
extern "C" unsigned long g_0064e260;
extern "C" unsigned long g_0064e264;
extern "C" unsigned long g_0064e268;
extern "C" unsigned long g_0064e26c;
extern "C" unsigned long g_0064e2b4;
extern "C" unsigned long g_0064e2b6;
extern "C" unsigned long g_0064e34c;
extern "C" unsigned long g_0064e37c;
extern "C" unsigned long g_0064e3a2;
extern "C" unsigned long g_0064e3ba;
extern "C" unsigned long g_0064e3bc;
extern "C" unsigned long g_0064e3be;
extern "C" unsigned long g_0064e3c6;
extern "C" unsigned long g_0064e3c8;
extern "C" unsigned long g_0064e3cc;
extern "C" unsigned long g_0064e3d0;
extern "C" unsigned long g_0064e3d4;
extern "C" unsigned long g_0064e3d8;
extern "C" unsigned long g_0064e3dc;
extern "C" unsigned long g_0064e3e0;
extern "C" unsigned long g_0064e3e4;
extern "C" unsigned long g_0064e3e8;
bool BLRenascenceTargetPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

BLRenascenceTargetPresenter::~BLRenascenceTargetPresenter()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  iVar2 = *(int *)(&g_0064d918 + g_0064d980);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x38;
  *(int *)((int)this + 4*(6)) = iVar2 + 0x68;
  *(int *)((int)this + 4*(7)) = iVar2 + 0x7c;
  piStack_20 = (int *)((int)this);
  uStack_1c = (undefined4)(p2);
  uStack_18 = (undefined4)(p3);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_1c,&g_0064d942 + g_0064d984,&piStack_20);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_1c);
  func_0079e2bc(&uStack_1c);
  func_0079e2bc(((int)this) + 9);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLRenascenceTargetPresenter::numOfCellItem(BLTableView* p1)
{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uStack_14;
  
  if (*(char *)(((int)this) + 0x30) == '\0') {
    *(undefined4 *)(((int)this) + 0x34) = 3;
  }
  else {
    uStack_14 = (undefined4)(p1);
    piVar1 = (int *)((DataCacheManager *)this)->shareManager();
    uVar2 = (undefined4)((**(code **)(*piVar1 + 0xd8))());
    func_0079e53c(&uStack_14,((int)this) + 0x24);
    uVar2 = (undefined4)(((RoleRenascenceData *)uVar2)->getItemData((std::string)(char*)uStack_14));
    piVar1 = (int *)((RoleRenascenceItemData *)uVar2)->getConsumeData(*(int *)(((int)this) + 0x2c) + 1);
    iVar3 = piVar1[1];
    iVar4 = (int)*(int *)&(*piVar1);
    func_0079e2bc(&uStack_14);
    *(int *)(((int)this) + 0x34) = (iVar3 - iVar4 >> 2) + 2;
  }
  return;
}

undefined4 BLRenascenceTargetPresenter::sizeOfCellItem(BLTableView* p1)
{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 auStack_28 [2];
  undefined1 auStack_20 [4];
  undefined4 uStack_1c;
  
  uVar1 = (undefined4)(g_0064daa4);
  uVar3 = (undefined4)(g_0064daa0);
  0 /* ctorZero */;
  cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(auStack_28[0]),(int)(uVar2)))));
  0 /* ctorZero */;
  cocos2d::CCDirector::sharedDirector();
  uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uStack_1c),(int)(uVar3)))));
  0 /* ctorZero */;
  return ((int)this);
}

void BLRenascenceTargetPresenter::nodeOfCellItemAtIndex(BLTableView* p1, cocos2d::CCNode* p2, int p3)
{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint extraout_r1;
  int extraout_r3;
  undefined4 uVar7;
  undefined1 auStack_1c [8];
  
  if (((int)(intptr_t)p2 == 0) ||
     (piVar1 = (int *)func_0079e55c(p2,*(undefined4 *)(&g_0064de5e + g_0064df7c),
                                      *(undefined4 *)(&g_0064de5a + g_0064df78),0),
     piVar1 == (int *)0x0)) {
    piVar1 = (int *)((long long)::operator new((size_t)(0x128)));
    0 /* ctorZero */;
    iVar2 = (**(code **)(*piVar1 + 0x18))(piVar1);
    if (iVar2 == 0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      piVar1 = (int *)0x0;
    }
    else {
      ((cocos2d::CCObject *)piVar1)->autorelease();
    }
  }
  if (*(char *)(((int)this) + 0x30) == '\0') {
    ((BLRenascenceTargetItemPresenter *)piVar1[0x42])->updateWithTopLv();
  }
  else if (p3 == 0) {
    piVar3 = (int *)((DataCacheManager *)this)->shareManager();
    uVar4 = (undefined4)((**(code **)(*piVar3 + 0xd0))());
    iVar2 = ((RenascenceBaseData *)uVar4)->getItemData(*(int *)(((int)this) + 0x2c) + 1);
    uVar7 = (undefined4)(*(undefined4 *)(iVar2 + 4));
    iVar2 = piVar1[0x42];
    piVar3 = (int *)(**(code **)(**(int **)(((int)this) + 0x28) + 0x18))();
    uVar4 = (undefined4)((**(code **)(*piVar3 + 0x20))());
    ((BLRenascenceTargetItemPresenter *)iVar2)->updateWithLVData(uVar4, uVar7);
  }
  else {
    if (p3 == *(int *)(((int)this) + 0x34) + -1) {
      iVar2 = piVar1[0x42];
      piVar3 = (int *)((DataCacheManager *)this)->shareManager();
      uVar4 = (undefined4)((**(code **)(*piVar3 + 0xd0))());
      iVar5 = ((RenascenceBaseData *)uVar4)->getItemData(*(int *)(((int)this) + 0x2c) + 1);
      uVar4 = (undefined4)(*(undefined4 *)(iVar5 + 0xc));
    }
    else {
      piVar3 = (int *)((DataCacheManager *)this)->shareManager();
      uVar4 = (undefined4)((**(code **)(*piVar3 + 0xd8))());
      func_0079e53c(auStack_1c,((int)this) + 0x24);
      uVar4 = (undefined4)(((RoleRenascenceData *)uVar4)->getItemData((std::string)(char*)auStack_1c));
      piVar3 = (int *)((RoleRenascenceItemData *)uVar4)->getConsumeData(*(int *)(((int)this) + 0x2c) + 1);
      iVar2 = (int)*(int *)&(*piVar3);
      uVar6 = (undefined4)(p3 - 1);
      if ((uint)(piVar3[1] - iVar2 >> 2) <= uVar6) {
        func_0079e784(&g_0064df52 + g_0064df80);
        uVar6 = (undefined4)(extraout_r1);
        iVar2 = extraout_r3;
      }
      uVar4 = (undefined4)(*(undefined4 *)(uVar6 * 4 + iVar2));
      func_0079e2bc(auStack_1c);
      iVar2 = piVar1[0x42];
    }
    ((BLRenascenceTargetItemPresenter *)iVar2)->updateWithConsumeData((ConsumeItemData*)uVar4);
  }
  return;
}

BLRenascenceTargetPresenter::BLRenascenceTargetPresenter()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;

  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int *piStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  piStack_20 = (int *)((int)this);
  uStack_1c = (undefined4)(p2);
  uStack_18 = (undefined4)(p3);
  0 /* ctorZero */;
  iVar4 = *(int *)(&g_0064dfa8 + g_0064e034);
  *(int *)this = iVar4 + 8;
  *(int *)((int)this + 4*(5)) = iVar4 + 0x38;
  *(int *)((int)this + 4*(7)) = iVar4 + 0x7c;
  iVar1 = g_0064e038;
  *(int *)((int)this + 4*(6)) = iVar4 + 0x68;
  *(int *)((int)this + 4*(9)) = *(int *)(&g_0064dfc6 + iVar1) + 0xc;
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_1c,&g_0064dfd8 + g_0064e03c,&piStack_20);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_1c);
  func_0079e2bc(&uStack_1c);
  piVar3 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar3 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 0);
  func_0079e2dc(((int)this) + 9,&g_0064e00a + g_0064e040);
  *(undefined1 *)(((int)this) + 0xc) = 0;
  *(int *)((int)this + 4*(0xb)) = 0;
  *(int *)((int)this + 4*(0xd)) = 0;
  return;
}

undefined4 BLRenascenceTargetPresenter::create()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x38))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLRenascenceTargetPresenter::onEnter()
{
  return;
}

void BLRenascenceTargetPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  return;
}

void BLRenascenceTargetPresenter::getNumName(int p1)
{
  undefined4 p3 = 0;

  int iVar1;
  int extraout_r1;
  bool bVar2;
  undefined1 auStack_4c [4];
  undefined1 auStack_48 [4];
  undefined1 auStack_44 [4];
  undefined1 auStack_40 [4];
  undefined1 auStack_3c [4];
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [4];
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [8];
  
  if (p3 < 0) {
    func_0079e45c(((int)this),&g_0064e0c6 + g_0064e23c,auStack_44);
    return;
  }
  func_0079e45c(auStack_44,&g_0064e0d4 + g_0064e240,auStack_48);
  func_0079e45c(auStack_40,&g_0064e0e2 + g_0064e244,auStack_48);
  func_0079e45c(auStack_3c,&g_0064e0f4 + g_0064e248,auStack_48);
  func_0079e45c(auStack_38,&g_0064e106 + g_0064e24c,auStack_48);
  func_0079e45c(auStack_34,&g_0064e118 + g_0064e250,auStack_48);
  func_0079e45c(auStack_30,&g_0064e12a + g_0064e254,auStack_48);
  func_0079e45c(auStack_2c,&g_0064e13c + g_0064e258,auStack_48);
  func_0079e45c(auStack_28,&g_0064e14e + g_0064e25c,auStack_48);
  func_0079e45c(auStack_24,&g_0064e160 + g_0064e260,auStack_48);
  func_0079e45c(auStack_20,&g_0064e172 + g_0064e264,auStack_48);
  func_0079e45c(auStack_1c,&g_0064e184 + g_0064e268,auStack_48);
  func_0079e45c(auStack_48,&g_0064e198 + g_0064e26c,auStack_4c);
  if (10 < p3) {
    iVar1 = ((long long)((int)(p3) / (int)(10)));
    func_0079e964(p3,10);
    if (iVar1 != 1) {
      func_0079e874(auStack_48,auStack_44 + iVar1 * 4);
    }
    func_0079e874(auStack_48,auStack_1c);
    p3 = extraout_r1;
    if (extraout_r1 == 0) goto code_r0x0064e1d6;
  }
  func_0079e874(auStack_48,auStack_44 + p3 * 4);
code_r0x0064e1d6:
  func_0079e53c(((int)this),auStack_48);
  func_0079e2bc(auStack_48);
  iVar1 = 10;
  do {
    func_0079e2bc(auStack_44 + iVar1 * 4);
    bVar2 = iVar1 != 0;
    iVar1 = iVar1 + -1;
  } while (bVar2);
  return;
}

// ===== 修复: 补回被误删的函数占位 (2) =====

void BLRenascenceTargetPresenter::updateWithData(std::string p1)
{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  code *pcVar7;
  bool bVar8;
  int aiStack_1c [2];
  
  func_0079e52c(((int)this) + 0x24);
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  iVar6 = 0;
  piVar1 = (int *)(**(code **)(*(int *)(piVar1) + (0x28)))();
  uVar2 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x68)))());
  iVar3 = (undefined4)(intptr_t)(((cocos2d::CCArray *)this)->count());
  do {
    if (iVar3 <= iVar6) {
code_r0x0064e312:
      piVar1 = (int *)((DataCacheManager *)this)->shareManager();
      uVar2 = (undefined4)((**(code **)(*(int *)(piVar1) + (0xd0)))());
      iVar3 = (undefined4)(intptr_t)(((RenascenceBaseData *)(uVar2))->checkRenascenceable(*(int *)(((int)this) + 0x2c) + 1));
      if (iVar3 == 0) {
        *(undefined1 *)(((int)this) + 0x30) = 0;
        piVar1 = *(int **)(*(int *)(((int)this) + 0x20) + 0x10c);
        (**(code **)(*(int *)(piVar1) + (0x234)))(piVar1,(unsigned char *)((char *)&g_0064e37c + (intptr_t)(g_0064e3d4)));
      }
      else {
        *(undefined1 *)(((int)this) + 0x30) = 1;
        ((BLRenascenceTargetPresenter *)(((int)this)))->getNumName(*(int *)(((int)this) + 0x2c) + 1);
        uVar2 = (undefined4)(cocos2d::CCString::createWithFormat((char const*)(unsigned char *)((char *)&g_0064e34c + (intptr_t)(g_0064e3d0)), aiStack_1c[0]));
        func_0079e2bc(aiStack_1c);
        piVar1 = *(int **)(*(int *)(((int)this) + 0x20) + 0x10c);
        pcVar7 = *(code **)(*piVar1 + 0x234);
        uVar2 = (undefined4)(((cocos2d::CCString *)(uVar2))->getCString());
        (*pcVar7)(piVar1,uVar2);
      }
      ((BLTableView *)(*(undefined4 *)(*(int *)(((int)this) + 0x20) + 0x110)))->reloadData(0, 1);
      return;
    }
    iVar4 = (undefined4)(intptr_t)(((cocos2d::CCArray *)(uVar2))->objectAtIndex((unsigned int)iVar6));
    if ((iVar4 == 0) ||
       (piVar1 = (int *)func_0079e55c(iVar4,*(undefined4 *)((unsigned char *)((char *)&g_0064e2b4 + (intptr_t)(g_0064e3c8))),
                                        *(undefined4 *)((unsigned char *)((char *)&g_0064e2b6 + (intptr_t)(g_0064e3cc))),0),
       piVar1 == (int *)0x0)) {
      0 /* ctorZero */;
      func_0079e864(6,(unsigned char *)((char *)&g_0064e3ba + (intptr_t)(g_0064e3e0)),(unsigned char *)((char *)&g_0064e3bc + (intptr_t)(g_0064e3e4)),
                      (unsigned char *)((char *)&g_0064e3be + (intptr_t)(g_0064e3e8)),(unsigned char *)((char *)&g_0064e3c6 + (intptr_t)(g_0064e3dc)),0xa0);
                    /* WARNING: Does not return */
      pcVar7 = (code *)software_udf(0xff,0x64e3c6);
      (*pcVar7)();
    }
    bVar8 = (undefined4)(intptr_t)(false);
    piVar5 = (int *)(**(code **)(*(int *)(piVar1) + (0x18)))();
    (**(code **)(*(int *)(piVar5) + (0x18)))(aiStack_1c,piVar5);
    if (*(int *)(aiStack_1c[0] + -0xc) == *(int *)(*(int *)(((int)this) + 0x24) + -0xc)) {
      iVar4 = (undefined4)(intptr_t)(func_0079e60c());
      bVar8 = (undefined4)(intptr_t)(iVar4 == 0);
    }
    func_0079e2bc(aiStack_1c);
    if (bVar8) {
      *(int **)(((int)this) + 0x28) = piVar1;
      piVar1 = (int *)(**(code **)(*(int *)(piVar1) + (0x18)))(piVar1);
      uVar2 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x68)))());
      *(undefined4 *)(((int)this) + 0x2c) = uVar2;
      goto code_r0x0064e312;
    }
    iVar6 = (undefined4)(intptr_t)(iVar6 + 1);
  } while( true );
}
