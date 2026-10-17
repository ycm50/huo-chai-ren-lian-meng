#include "BLRenascencePropertyPresenter.h"
#include "CCObject.h"
#include "CCArray.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLRenascencePropertyView.h"
#include "BLRichText.h"
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
extern "C" long long func_00442068(...);
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2dc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e43c(...);
extern "C" long long func_0079e44c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e46c(...);
extern "C" long long func_0079e47c(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e5fc(...);
extern "C" long long func_0079e60c(...);
extern "C" long long func_0079e734(...);
extern "C" long long func_0079e864(...);
extern "C" long long ghidra_CONCAT12(...);
extern "C" long long ghidra_CONCAT22(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0064c7dc;
extern "C" unsigned long UNK_0064c7f0;
extern "C" unsigned long UNK_0064c84a;
extern "C" unsigned long UNK_0064c85c;
extern "C" unsigned long UNK_0064c8e6;
extern "C" unsigned long UNK_0064c942;
extern "C" unsigned long UNK_0064c966;
extern "C" unsigned long UNK_0064c98c;
extern "C" unsigned long UNK_0064c9d4;
extern "C" unsigned long UNK_0064c9e2;
extern "C" unsigned long UNK_0064c9e4;
extern "C" unsigned long UNK_0064ca02;
extern "C" unsigned long UNK_0064cb36;
extern "C" unsigned long UNK_0064cb38;
extern "C" unsigned long UNK_0064cc20;
extern "C" unsigned long UNK_0064cc66;
extern "C" unsigned long UNK_0064cca8;
extern "C" unsigned long UNK_0064cce0;
extern "C" unsigned long UNK_0064cd36;
extern "C" unsigned long UNK_0064cd7c;
extern "C" unsigned long UNK_0064cdbc;
extern "C" unsigned long UNK_0064cfa0;
extern "C" unsigned long UNK_0064cfac;
extern "C" unsigned long UNK_0064cfb6;
extern "C" unsigned long UNK_0064cfb8;
extern "C" unsigned long UNK_0064cfba;
extern "C" unsigned long _UNK_0064c820;
extern "C" unsigned long _UNK_0064c824;
extern "C" unsigned long _UNK_0064c88c;
extern "C" unsigned long _UNK_0064c890;
extern "C" unsigned long _UNK_0064c924;
extern "C" unsigned long _UNK_0064cad8;
extern "C" unsigned long _UNK_0064cadc;
extern "C" unsigned long _UNK_0064cae0;
extern "C" unsigned long _UNK_0064cae4;
extern "C" unsigned long _UNK_0064cae8;
extern "C" unsigned long _UNK_0064caec;
extern "C" unsigned long _UNK_0064caf0;
extern "C" unsigned long _UNK_0064ced0;
extern "C" unsigned long _UNK_0064ced4;
extern "C" unsigned long _UNK_0064ced8;
extern "C" unsigned long _UNK_0064cedc;
extern "C" unsigned long _UNK_0064cee0;
extern "C" unsigned long _UNK_0064cee4;
extern "C" unsigned long _UNK_0064cee8;
extern "C" unsigned long _UNK_0064ceec;
extern "C" unsigned long _UNK_0064cef0;
extern "C" unsigned long _UNK_0064cef4;
extern "C" unsigned long _UNK_0064cfd0;
extern "C" unsigned long _UNK_0064cfd4;
extern "C" unsigned long _UNK_0064cfd8;
extern "C" unsigned long _UNK_0064cfdc;
extern "C" unsigned long _UNK_0064cfe0;
extern "C" unsigned long g_0064c7dc;
extern "C" unsigned long g_0064c7f0;
extern "C" unsigned long g_0064c820;
extern "C" unsigned long g_0064c824;
extern "C" unsigned long g_0064c84a;
extern "C" unsigned long g_0064c85c;
extern "C" unsigned long g_0064c88c;
extern "C" unsigned long g_0064c890;
extern "C" unsigned long g_0064c8e6;
extern "C" unsigned long g_0064c924;
extern "C" unsigned long g_0064c942;
extern "C" unsigned long g_0064c966;
extern "C" unsigned long g_0064c98c;
extern "C" unsigned long g_0064c9d4;
extern "C" unsigned long g_0064c9e2;
extern "C" unsigned long g_0064c9e4;
extern "C" unsigned long g_0064ca02;
extern "C" unsigned long g_0064cad8;
extern "C" unsigned long g_0064cadc;
extern "C" unsigned long g_0064cae0;
extern "C" unsigned long g_0064cae4;
extern "C" unsigned long g_0064cae8;
extern "C" unsigned long g_0064caec;
extern "C" unsigned long g_0064caf0;
extern "C" unsigned long g_0064cb36;
extern "C" unsigned long g_0064cb38;
extern "C" unsigned long g_0064cc20;
extern "C" unsigned long g_0064cc66;
extern "C" unsigned long g_0064cca8;
extern "C" unsigned long g_0064cce0;
extern "C" unsigned long g_0064cd36;
extern "C" unsigned long g_0064cd7c;
extern "C" unsigned long g_0064cdbc;
extern "C" unsigned long g_0064ced0;
extern "C" unsigned long g_0064ced4;
extern "C" unsigned long g_0064ced8;
extern "C" unsigned long g_0064cedc;
extern "C" unsigned long g_0064cee0;
extern "C" unsigned long g_0064cee4;
extern "C" unsigned long g_0064cee8;
extern "C" unsigned long g_0064ceec;
extern "C" unsigned long g_0064cef0;
extern "C" unsigned long g_0064cef4;
extern "C" unsigned long g_0064cfa0;
extern "C" unsigned long g_0064cfac;
extern "C" unsigned long g_0064cfb6;
extern "C" unsigned long g_0064cfb8;
extern "C" unsigned long g_0064cfba;
extern "C" unsigned long g_0064cfd0;
extern "C" unsigned long g_0064cfd4;
extern "C" unsigned long g_0064cfd8;
extern "C" unsigned long g_0064cfdc;
extern "C" unsigned long g_0064cfe0;
BLRenascencePropertyPresenter::~BLRenascencePropertyPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int *piStack_18;
  undefined4 uStack_14;
  
  /* VPTR_FIX(R87): vptr=(&g_A+g_B)+8 ?? g_ ?? 0 ?? -> ???? SEGV?????? vptr???? */;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0064c7f0 + g_0064c824,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLRenascencePropertyPresenter::BLRenascencePropertyPresenter()
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
  func_0079e45c(&uStack_14,&g_0064c85c + g_0064c890,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  *(int *)((int)this + 4*(6)) = 0;
  return;
}

undefined4 BLRenascencePropertyPresenter::create()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x1c))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}


void BLRenascencePropertyPresenter::onEnter()
{
  return;
}

void BLRenascencePropertyPresenter::onExit()
{
  return;
}

// ===== 修复: 补回被误删的函数占位 (4) =====

void BLRenascencePropertyPresenter::initWithType(kRenascencePropertyType * p1)
{
  int *piVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [4];
  undefined4 auStack_1c [2];
  
  *(int *)(((int)this) + 0x18) = (undefined4)(intptr_t)p1;
  if ((int)(intptr_t)p1 == 1) {
    piVar1 = (int *)((BLRenascencePropertyView *)(*(undefined4 *)(((int)this) + 0x14)))->getLabTit(0);
    pcVar3 = *(code **)(*piVar1 + 0x234);
    uVar2 = (undefined4)(((BLLanguage *)this)->share());
    func_0079e45c(auStack_20,(unsigned char *)((char *)&g_0064c8e6 + (intptr_t)(g_0064c924)),auStack_24);
    (((BLLanguage *)this))->getString(*(std::string *)auStack_1c);
    (*pcVar3)(piVar1,auStack_1c[0]);
    func_0079e2bc(auStack_1c);
    func_0079e2bc(auStack_20);
  }
  return;
}

void BLRenascencePropertyPresenter::createTextArr(int p1)
{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_e8 [4];
  undefined1 auStack_e4 [4];
  undefined1 auStack_e0 [4];
  undefined1 auStack_dc [4];
  undefined1 auStack_d8 [4];
  undefined1 auStack_d4 [12];
  undefined1 auStack_c8 [180];
  
  uVar1 = (undefined4)(cocos2d::CCArray::create());
  func_0079e45c(auStack_e0,&g_0064c942 + g_0064cad8,auStack_d4);
  func_0079e43c(auStack_d4,0x18);
  func_0079e44c(auStack_d4 + 8,p1);
  func_0079e45c(auStack_e4,&g_0064c966 + g_0064cadc,auStack_e8);
  func_0079e46c(auStack_dc,auStack_c8);
  func_0079e2bc(auStack_e4);
  func_0079e47c(auStack_d4);
  func_0079e45c(auStack_d8,&g_0064c98c + g_0064cae0,auStack_d4);
  auStack_d4[4] = 0xe9;
  auStack_d4[0] = 0;
  auStack_d4[1] = 0;
  auStack_d4[2] = 0;
  auStack_d4[3] = 0;
  auStack_d4[6] = 0;
  auStack_d4[7] = 0;
  auStack_d4[8] = 0;
  auStack_d4[5] = 0x17;
  iVar5 = 0;
  do {
    piVar2 = (int *)((long long)::operator new((size_t)(0x3c)));
    0 /* ctorZero */;
    iVar4 = g_0064cae8;
    *piVar2 = *(int *)(&g_0064c9d4 + g_0064cae4) + 8;
    iVar3 = *(int *)(&g_0064c9e4 + g_0064caec);
    piVar2[6] = iVar3 + 0xc;
    piVar2[7] = iVar3 + 0xc;
    piVar2[5] = 1;
    func_0079e2dc(piVar2 + 6,&g_0064c9e2 + iVar4);
    func_0079e2dc(piVar2 + 7,&g_0064ca02 + g_0064caf0);
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
    piVar2[5] = 1;
    func_0079e52c(piVar2 + 6,auStack_e0 + iVar5 * 4);
    iVar4 = iVar5 * 3;
    *(undefined1 *)(piVar2 + 9) = auStack_d4[iVar4];
    *(undefined1 *)((int)piVar2 + 0x25) = auStack_d4[iVar4 + 1];
    *(undefined1 *)((int)piVar2 + 0x26) = auStack_d4[iVar4 + 2];
    piVar2[10] = 0x10;
    ((cocos2d::CCArray *)uVar1)->addObject((cocos2d::CCObject*)piVar2);
    iVar5 = iVar5 + 1;
  } while (iVar5 != 3);
  func_0079e2bc(auStack_d8);
  func_0079e2bc(auStack_dc);
  func_0079e2bc(auStack_e0);
  return;
}

void BLRenascencePropertyPresenter::updateWithData(std::string * p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
