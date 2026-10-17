#include "BLSuitComposeListItemPresenter.h"
#include "CCNotificationCenter.h"
#include "CCObject.h"
#include "CCArray.h"
using namespace cocos2d;
#include "SuitEquipListItemData.h"
#include "BLSuitComposeListItemView.h"
#include "BLLeakUtils.h"
#include <new>   // ghost_fix.js 自动补齐
// 兜底声明
extern "C" long long func_0079e55c(...);
extern "C" unsigned long g_0068bd56;
extern "C" unsigned long g_0068bd90;
extern "C" unsigned long g_0068bd58;
extern "C" unsigned long g_0068bd8c;
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e43c(...);
extern "C" long long func_0079e44c(...);
extern "C" long long func_0079e46c(...);
extern "C" long long func_0079e47c(...);
extern "C" long long func_0079e2dc(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e59c(...);
extern "C" long long func_0079e69c(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long func_0079e57c(...);
extern "C" unsigned long g_0068bce4;
extern "C" unsigned long g_0068bd28;
extern "C" unsigned long g_0068bcf8;
extern "C" unsigned long g_0068bd2c;
extern "C" unsigned long g_0068bda2;
extern "C" unsigned long g_0068bde0;
extern "C" unsigned long g_0068bdb4;
extern "C" unsigned long g_0068bde4;
extern "C" unsigned long g_0068be26;
extern "C" unsigned long g_0068be34;
extern "C" unsigned long g_0068be24;
extern "C" unsigned long g_0068be30;
extern "C" unsigned long g_0068be6c;
extern "C" unsigned long g_0068bff4;
extern "C" unsigned long g_0068be9c;
extern "C" unsigned long g_0068bff8;
extern "C" unsigned long g_0068bec2;
extern "C" unsigned long g_0068bffc;
extern "C" unsigned long g_0068c004;
extern "C" unsigned long g_0068bef2;
extern "C" unsigned long g_0068c000;
extern "C" unsigned long g_0068bf02;
extern "C" unsigned long g_0068c008;
extern "C" unsigned long g_0068bf00;
extern "C" unsigned long g_0068bf20;
extern "C" unsigned long g_0068c00c;
extern "C" unsigned long g_0068c162;
extern "C" unsigned long g_0068c350;
extern "C" unsigned long g_0068c354;
extern "C" unsigned long g_0068c036;
extern "C" unsigned long g_0068c340;
extern "C" unsigned long g_0068c064;
extern "C" unsigned long g_0068c344;
extern "C" unsigned long g_0068c092;
extern "C" unsigned long g_0068c348;
extern "C" unsigned long g_0068c34c;
extern "C" unsigned long g_0068c358;

// R14: 重置为纯占位形态(原恢复体存在编译错误, 待后续逐函数修复)

BLSuitComposeListItemPresenter::~BLSuitComposeListItemPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int *piStack_18;
  undefined4 uStack_14;
  
  *(int *)this = *(int *)((unsigned char *)((char *)&g_0068bce4 + (intptr_t)(g_0068bd28))) + 8;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,(unsigned char *)((char *)&g_0068bcf8 + (intptr_t)(g_0068bd2c)),&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLSuitComposeListItemPresenter::onClickItem(cocos2d::CCObject* p1)
{
  undefined4 p4 = 0;

  int iVar1;
  int iVar2;
  int *piVar3;
  
  if (((int)(intptr_t)(int)(intptr_t)p1 != 0) &&
     (iVar1 = func_0079e55c(p1,*(undefined4 *)((unsigned char *)((char *)&g_0068bd56 + (intptr_t)(g_0068bd90))),
                              *(undefined4 *)((unsigned char *)((char *)&g_0068bd58 + (intptr_t)(g_0068bd8c))),0,p4), iVar1 != 0)
     ) {
    iVar2 = (undefined4)(intptr_t)((**(code **)(**(int **)(((int)this) + 0x14) + 0x118))());
    piVar3 = *(int **)(*(int *)(((int)this) + 0x14) + 0x118);
    (**(code **)(*(int *)(piVar3) + (0x90)))(piVar3,iVar2 == *(int *)(iVar1 + 0x14));
  }
  return;
}

BLSuitComposeListItemPresenter::BLSuitComposeListItemPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  *(int *)this = *(int *)((unsigned char *)((char *)&g_0068bda2 + (intptr_t)(g_0068bde0))) + 8;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,(unsigned char *)((char *)&g_0068bdb4 + (intptr_t)(g_0068bde4)),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

undefined4 BLSuitComposeListItemPresenter::create()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x18))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLSuitComposeListItemPresenter::initWithView(BLSuitComposeListItemView* p1)
{
  *(undefined4 *)(((int)this) + 0x14) = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  return;
}

void BLSuitComposeListItemPresenter::onEnter()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLSuitComposeListItemPresenter::onExit()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar1)->removeAllObservers((cocos2d::CCObject*)((int)this));
  return;
}

undefined4 BLSuitComposeListItemPresenter::initNumData(int p1)
{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_f4 [4];
  undefined1 auStack_f0 [4];
  undefined1 auStack_ec [12];
  undefined1 auStack_e0 [4];
  undefined1 auStack_dc [4];
  undefined1 auStack_d8 [4];
  undefined1 auStack_d4 [8];
  undefined1 auStack_cc [4];
  undefined1 auStack_c8 [180];
  
  uVar3 = (undefined4)(cocos2d::CCArray::create());
  auStack_ec[4] = 0xa1;
  auStack_ec[5] = 0x1b;
  auStack_ec[0] = 0;
  auStack_ec[1] = 0;
  auStack_ec[2] = 0;
  auStack_ec[3] = 0;
  auStack_ec[6] = 0;
  auStack_ec[7] = 0;
  auStack_ec[8] = 0;
  func_0079e45c(auStack_e0,&g_0068be6c + g_0068bff4,auStack_d4);
  func_0079e43c(auStack_d4,0x18);
  func_0079e44c(auStack_cc,p1);
  func_0079e45c(auStack_f0,&g_0068be9c + g_0068bff8,auStack_f4);
  func_0079e46c(auStack_dc,auStack_c8);
  func_0079e2bc(auStack_f0);
  func_0079e47c(auStack_d4);
  func_0079e45c(auStack_d8,&g_0068bec2 + g_0068bffc,auStack_d4);
  iVar7 = 0;
  do {
    piVar4 = (int *)((long long)::operator new((size_t)(0x3c)));
    0 /* ctorZero */;
    iVar6 = g_0068c004;
    *piVar4 = *(int *)(&g_0068bef2 + g_0068c000) + 8;
    iVar5 = *(int *)(&g_0068bf02 + g_0068c008);
    piVar4[6] = iVar5 + 0xc;
    piVar4[7] = iVar5 + 0xc;
    piVar4[5] = 1;
    func_0079e2dc(piVar4 + 6,&g_0068bf00 + iVar6);
    func_0079e2dc(piVar4 + 7,&g_0068bf20 + g_0068c00c);
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
    func_0079e52c(piVar4 + 6,auStack_e0 + iVar7 * 4);
    iVar6 = iVar7 * 3;
    uVar1 = auStack_ec[iVar6 + 1];
    uVar2 = auStack_ec[iVar6 + 2];
    *(undefined1 *)(piVar4 + 9) = auStack_ec[iVar6];
    *(undefined1 *)((int)piVar4 + 0x25) = uVar1;
    *(undefined1 *)((int)piVar4 + 0x26) = uVar2;
    piVar4[10] = 0x16;
    ((cocos2d::CCArray *)uVar3)->addObject((cocos2d::CCObject*)piVar4);
    iVar7 = iVar7 + 1;
  } while (iVar7 != 3);
  func_0079e2bc(auStack_d8);
  func_0079e2bc(auStack_dc);
  func_0079e2bc(auStack_e0);
  return uVar3;
}

void BLSuitComposeListItemPresenter::initWithData(SuitEquipListItemData* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
