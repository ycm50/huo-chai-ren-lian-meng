#include "BLImmortalsUpgracePropertyPresenter.h"
#include "CCString.h"
#include "CCObject.h"
#include "ImmortalsRoleItemData.h"
#include "BLImmortalsUpgracePropertyView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "DataCacheManager.h"
#include "ImmortalsInfoData.h"
#include "ImmortalsInfoItemData.h"
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
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e43c(...);
extern "C" long long func_0079e44c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e46c(...);
extern "C" long long func_0079e47c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e5dc(...);
extern "C" long long func_0079e63c(...);
extern "C" long long func_0079e69c(...);
extern "C" long long func_0079e724(...);
extern "C" long long func_0079e734(...);
extern "C" long long func_0079e784(...);
extern "C" long long func_0079e854(...);
extern "C" long long func_0079e874(...);
extern "C" long long func_0079e934(...);
extern "C" long long func_0079e944(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0056e36c;
extern "C" unsigned long UNK_0056e380;
extern "C" unsigned long UNK_0056e54a;
extern "C" unsigned long UNK_0056e55c;
extern "C" unsigned long UNK_0056eca0;
extern "C" unsigned long UNK_0056eca1;
extern "C" unsigned long UNK_0056eca2;
extern "C" unsigned long UNK_0056ecde;
extern "C" unsigned long UNK_0056ed04;
extern "C" unsigned long UNK_0056ed2e;
extern "C" unsigned long UNK_0056ed88;
extern "C" unsigned long UNK_0056edde;
extern "C" unsigned long UNK_0056ee02;
extern "C" unsigned long UNK_0056ee28;
extern "C" unsigned long UNK_0056ee66;
extern "C" unsigned long UNK_0056ee92;
extern "C" unsigned long _UNK_0056e3b0;
extern "C" unsigned long _UNK_0056e3b4;
extern "C" unsigned long _UNK_0056e58c;
extern "C" unsigned long _UNK_0056e590;
extern "C" unsigned long _UNK_0056ef58;
extern "C" unsigned long _UNK_0056ef5c;
extern "C" unsigned long _UNK_0056ef60;
extern "C" unsigned long _UNK_0056ef64;
extern "C" unsigned long _UNK_0056ef68;
extern "C" unsigned long _UNK_0056ef6c;
extern "C" unsigned long _UNK_0056ef70;
extern "C" unsigned long _UNK_0056ef74;
extern "C" unsigned long _UNK_0056ef78;
extern "C" unsigned long _UNK_0056ef7c;
extern "C" unsigned long _UNK_0056ef80;
extern "C" unsigned long _UNK_0056ef84;
extern "C" unsigned long _UNK_0056ef88;
extern "C" unsigned long _UNK_0056ef8c;
extern "C" unsigned long extraout_r2;
extern "C" unsigned long extraout_r3;
extern "C" unsigned long g_0056e36c;
extern "C" unsigned long g_0056e380;
extern "C" unsigned long g_0056e3b0;
extern "C" unsigned long g_0056e3b4;
extern "C" unsigned long g_0056e54a;
extern "C" unsigned long g_0056e55c;
extern "C" unsigned long g_0056e58c;
extern "C" unsigned long g_0056e590;
extern "C" unsigned long g_0056eca0;
extern "C" unsigned long g_0056eca1;
extern "C" unsigned long g_0056eca2;
extern "C" unsigned long g_0056ecde;
extern "C" unsigned long g_0056ed04;
extern "C" unsigned long g_0056ed2e;
extern "C" unsigned long g_0056ed88;
extern "C" unsigned long g_0056edde;
extern "C" unsigned long g_0056ee02;
extern "C" unsigned long g_0056ee28;
extern "C" unsigned long g_0056ee66;
extern "C" unsigned long g_0056ee92;
extern "C" unsigned long g_0056ef58;
extern "C" unsigned long g_0056ef5c;
extern "C" unsigned long g_0056ef60;
extern "C" unsigned long g_0056ef64;
extern "C" unsigned long g_0056ef68;
extern "C" unsigned long g_0056ef6c;
extern "C" unsigned long g_0056ef70;
extern "C" unsigned long g_0056ef74;
extern "C" unsigned long g_0056ef78;
extern "C" unsigned long g_0056ef7c;
extern "C" unsigned long g_0056ef80;
extern "C" unsigned long g_0056ef84;
extern "C" unsigned long g_0056ef88;
extern "C" unsigned long g_0056ef8c;
BLImmortalsUpgracePropertyPresenter::~BLImmortalsUpgracePropertyPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int *piStack_18;
  undefined4 uStack_14;
  
  /* VPTR_FIX(R87): vptr=(&g_A+g_B)+8 ?? g_ ?? 0 ?? -> ???? SEGV?????? vptr???? */;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0056e380 + g_0056e3b4,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLImmortalsUpgracePropertyPresenter::BLImmortalsUpgracePropertyPresenter()
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
  func_0079e45c(&uStack_14,&g_0056e55c + g_0056e590,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  *(int *)((int)this + 4*(6)) = 0;
  return;
}

undefined4 BLImmortalsUpgracePropertyPresenter::create()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x1c))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLImmortalsUpgracePropertyPresenter::onEnter()
{
  return;
}

void BLImmortalsUpgracePropertyPresenter::onExit()
{
  return;
}

void BLImmortalsUpgracePropertyPresenter::initWithType(int p1)
{
  if (p1 < 3) {
    *(uint *)(((int)this) + 0x18) = p1;
  }
  return;
}

// ===== 修复: 补回被误删的函数占位 (2) =====
void BLImmortalsUpgracePropertyPresenter::initWithView(BLImmortalsUpgracePropertyView* p1)
{
  *(undefined4 *)(((int)this) + 0x14) = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  return;
}

void BLImmortalsUpgracePropertyPresenter::updateWithData(ImmortalsRoleItemData* p1)
{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint extraout_r2;
  int extraout_r3;
  int iVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  uint uStack_1e0;
  undefined1 uStack_1c4;
  undefined1 uStack_1c3;
  undefined1 uStack_1c2;
  undefined4 uStack_1c0;
  undefined1 auStack_1bc [4];
  int iStack_1b8;
  int iStack_1b4;
  undefined1 auStack_1b0 [4];
  undefined1 auStack_1ac [4];
  undefined1 auStack_1a8 [4];
  undefined1 auStack_1a4 [4];
  undefined1 auStack_1a0 [4];
  int iStack_19c;
  int iStack_198;
  undefined4 uStack_194;
  undefined4 auStack_190 [2];
  undefined1 auStack_188 [4];
  undefined1 auStack_184 [176];
  undefined1 uStack_d4;
  undefined1 uStack_d3;
  undefined1 uStack_d2;
  undefined1 auStack_cc [4];
  undefined1 auStack_c8 [180];
  
  if ((int)(intptr_t)(int)(intptr_t)p1 == 0) {
    uVar3 = (undefined4)(0);
  }
  else {
    if (*(int *)(((int)this) + 0x18) != 1) {
      uVar3 = (undefined4)(0);
      iVar5 = 1;
      goto code_r0x0056ebcc;
    }
    uVar3 = (undefined4)(0);
    iVar5 = 1;
    if (*(int *)(p1 + 0x10) < 0xb) goto code_r0x0056ebcc;
    uVar3 = (undefined4)(1);
  }
  iVar5 = 0;
code_r0x0056ebcc:
  piVar1 = *(int **)(*(int *)(((int)this) + 0x14) + 0x114);
  (**(code **)(*(int *)(piVar1) + (0x90)))(piVar1,uVar3);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x14) + 0x10c);
  (**(code **)(*(int *)(piVar1) + (0x90)))(piVar1,iVar5);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x14) + 0x110);
  (**(code **)(*(int *)(piVar1) + (0x90)))(piVar1,iVar5);
  for (puVar6 = *(undefined4 **)(*(int *)(((int)this) + 0x14) + 0x118);
      puVar6 != *(undefined4 **)(*(int *)(((int)this) + 0x14) + 0x11c); puVar6 = puVar6 + 1) {
    (**(code **)(*(int *)*puVar6 + 0x90))((int *)*puVar6,iVar5);
  }
  if (iVar5 != 0) {
    iStack_19c = 0;
    iVar5 = (undefined4)(intptr_t)(*(int *)(p1 + 0x10));
    iStack_198 = 0;
    uStack_194 = (undefined4)(0);
    if (*(int *)(((int)this) + 0x18) == 0) {
      uVar3 = (undefined4)(*(undefined4 *)(p1 + 0x20));
    }
    else {
      iVar5 = (undefined4)(intptr_t)(iVar5 + 1);
      piVar1 = (int *)((DataCacheManager *)this)->shareManager();
      uVar3 = (undefined4)((**(code **)(*(int *)(piVar1) + (0xf0)))());
      uVar3 = (undefined4)(((ImmortalsInfoData *)(uVar3))->getItemData(*(undefined4 *)(p1 + 4)));
      uVar3 = (undefined4)(((ImmortalsInfoItemData *)(uVar3))->getAttr(*(int *)(p1 + 0x10) + 1));
    }
    ((std::vector<int, std::allocator<int>> *)(&iStack_19c))->operator=(*(std::vector<int, std::allocator<int>> *)uVar3);
    iVar2 = (undefined4)(intptr_t)(0 /* ctorZero */);
    iVar2 = (undefined4)(intptr_t)(g_0056ef68 + iVar2 * 3);
    uStack_1c4 = (undefined4)(intptr_t)((&g_0056eca0)[iVar2]);
    uStack_1c3 = (undefined4)(intptr_t)((&g_0056eca1)[iVar2]);
    uStack_1c2 = (undefined4)(intptr_t)((&g_0056eca2)[iVar2]);
    iVar5 = (undefined4)(intptr_t)(0 /* ctorZero */);
    uVar3 = (undefined4)(((DataCacheManager *)this)->shareManager());
    piVar1 = ((void)((DataCacheManager *)(uVar3))->getItemDataByID(*(undefined4 *)(p1 + 4)),(int *)0);
    uVar3 = (undefined4)(((BLLanguage *)this)->share());
    (**(code **)(*(int *)(piVar1) + (0x20)))(auStack_1bc,piVar1);
    ((BLLanguage *)this)->getString(*(std::string *)(void *)&uStack_1c0);
    func_0079e2bc(auStack_1bc);
    if (0 < iVar5) {
      func_0079e43c(auStack_190,0x18);
      func_0079e44c(auStack_188,iVar5);
      func_0079e45c(auStack_1a4,(unsigned char *)((char *)&g_0056ecde + (intptr_t)(g_0056ef6c)),&uStack_d4);
      func_0079e46c(&iStack_1b8,auStack_184);
      func_0079e2bc(auStack_1a4);
      func_0079e47c(auStack_190);
      iStack_1b4 = (undefined4)(intptr_t)(*(int *)((unsigned char *)((char *)&g_0056ed04 + (intptr_t)(g_0056ef70))) + 0xc);
      func_0079e934(&iStack_1b4,*(int *)(iStack_1b8 + -0xc) + 1);
      func_0079e944(&iStack_1b4,(unsigned char *)((char *)&g_0056ed2e + (intptr_t)(g_0056ef74)),1);
      func_0079e5dc(&iStack_1b4,&iStack_1b8);
      func_0079e874(&uStack_1c0,&iStack_1b4);
      func_0079e2bc(&iStack_1b4);
      func_0079e2bc(&iStack_1b8);
    }
    piVar1 = *(int **)(*(int *)(((int)this) + 0x14) + 0x10c);
    (**(code **)(*(int *)(piVar1) + (0x234)))(piVar1,uStack_1c0);
    piVar1 = *(int **)(*(int *)(((int)this) + 0x14) + 0x10c);
    (**(code **)(*(int *)(piVar1) + (0x1b4)))(piVar1,&uStack_1c4);
    piVar1 = *(int **)(*(int *)(((int)this) + 0x14) + 0x110);
    (**(code **)(*(int *)(piVar1) + (0x234)))(piVar1,(unsigned char *)((char *)&g_0056ed88 + (intptr_t)(g_0056ef78)));
    if (*(int *)(((int)this) + 0x18) != 0) {
      uStack_d4 = 0;
      uStack_d3 = 0x80;
      uStack_d2 = 0x31;
      (**(code **)(**(int **)(*(int *)(((int)this) + 0x14) + 0x110) + 0x1b4))();
    }
    puVar6 = *(undefined4 **)(*(int *)(((int)this) + 0x14) + 0x118);
    uStack_1e0 = (undefined4)(0);
    for (; puVar6 != *(undefined4 **)(*(int *)(((int)this) + 0x14) + 0x11c); puVar6 = puVar6 + 1) {
      uVar4 = (undefined4)(iStack_198 - iStack_19c >> 2);
      iVar5 = (undefined4)(intptr_t)(iStack_19c);
      while( true ) {
        if (uVar4 <= uStack_1e0) {
          func_0079e784((unsigned char *)((char *)&g_0056edde + (intptr_t)(g_0056ef7c)));
          uVar4 = (undefined4)(extraout_r2);
          iVar5 = (undefined4)(intptr_t)(extraout_r3);
        }
        iVar2 = (undefined4)(intptr_t)(*(int *)(iVar5 + uStack_1e0 * 4));
        if (iVar2 != 0) break;
        uStack_1e0 = (undefined4)(uStack_1e0 + 1);
      }
      uVar3 = (undefined4)(((BLLanguage *)this)->share());
      func_0079e53c(auStack_1b0,&g_0056ee02 + uStack_1e0 * 4 + g_0056ef80);
      (((BLLanguage *)this))->getString(*(std::string *)auStack_1ac);
      func_0079e53c(auStack_190,auStack_1ac);
      func_0079e854(auStack_190,(unsigned char *)((char *)&g_0056ee28 + (intptr_t)(g_0056ef84)));
      func_0079e2bc(auStack_1ac);
      func_0079e2bc(auStack_1b0);
      if (uStack_1e0 == 3) {
        uVar7 = (undefined4)(intptr_t)(func_0079e734(iVar2));
        uVar7 = func_0079e63c((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),g_0056ef58,
                                g_0056ef5c);
        uVar7 = func_0079e724((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),g_0056ef60,
                                g_0056ef64);
        uVar3 = (undefined4)((undefined4)((ulonglong)uVar7 >> 0x20));
        cocos2d::CCString::createWithFormat((char const*)(unsigned char *)((char *)&g_0056ee66 + (intptr_t)(g_0056ef88)), uVar3, (int)uVar7, uVar3);
        uVar3 = (undefined4)(((cocos2d::CCString *)this)->getCString());
        func_0079e69c(auStack_190,uVar3);
      }
      else {
        func_0079e43c(&uStack_d4,0x18);
        func_0079e44c(auStack_cc,iVar2);
        func_0079e45c(auStack_1a0,(unsigned char *)((char *)&g_0056ee92 + (intptr_t)(g_0056ef8c)),auStack_1a4);
        func_0079e46c(auStack_1a8,auStack_c8);
        func_0079e2bc(auStack_1a0);
        func_0079e47c(&uStack_d4);
        func_0079e874(auStack_190,auStack_1a8);
        func_0079e2bc(auStack_1a8);
      }
      (**(code **)(*(int *)*puVar6 + 0x234))((int *)*puVar6,auStack_190[0]);
      if (*(int *)(((int)this) + 0x18) != 0) {
        uStack_d4 = 0;
        uStack_d3 = 0x80;
        uStack_d2 = 0x31;
        (**(code **)(*(int *)*puVar6 + 0x1b4))();
      }
      uStack_1e0 = (undefined4)(uStack_1e0 + 1);
      func_0079e2bc(auStack_190);
    }
    func_0079e2bc(&uStack_1c0);
    if (iStack_19c != 0) {
      func_0079e2cc();
    }
  }
  return;
}
