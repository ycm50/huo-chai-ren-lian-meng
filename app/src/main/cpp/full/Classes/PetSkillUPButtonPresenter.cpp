#include "PetSkillUPButtonPresenter.h"
#include "PetSkillUPButtonView.h"
#include "SkillUserData.h"
#include "BLLeakUtils.h"
#include "DataCacheManager.h"
#include "DataManager.h"
#include "PetSkillData.h"
#include "PetSkillItemData.h"
#include "PetSkillUPLabelPresenter.h"
#include "PetUserData.h"
#include "PetUserItemData.h"
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
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4ac(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0060c480;
extern "C" unsigned long UNK_0060c49e;
extern "C" unsigned long UNK_0060c4f0;
extern "C" unsigned long UNK_0060c518;
extern "C" unsigned long UNK_0060c52e;
extern "C" unsigned long UNK_0060c53e;
extern "C" unsigned long UNK_0060c550;
extern "C" unsigned long UNK_0060c5e6;
extern "C" unsigned long UNK_0060c606;
extern "C" unsigned long UNK_0060c6a8;
extern "C" unsigned long UNK_0060c6d0;
extern "C" unsigned long UNK_0060c700;
extern "C" unsigned long _UNK_0060c4dc;
extern "C" unsigned long _UNK_0060c4e0;
extern "C" unsigned long _UNK_0060c4f4;
extern "C" unsigned long _UNK_0060c51c;
extern "C" unsigned long _UNK_0060c584;
extern "C" unsigned long _UNK_0060c588;
extern "C" unsigned long _UNK_0060c58c;
extern "C" unsigned long _UNK_0060c618;
extern "C" unsigned long _UNK_0060c61c;
extern "C" unsigned long _UNK_0060c748;
extern "C" unsigned long _UNK_0060c74c;
extern "C" unsigned long _UNK_0060c750;
extern "C" unsigned long _UNK_0060c754;
extern "C" unsigned long _UNK_0060c758;
extern "C" unsigned long g_0060c480;
extern "C" unsigned long g_0060c49e;
extern "C" unsigned long g_0060c4dc;
extern "C" unsigned long g_0060c4e0;
extern "C" unsigned long g_0060c4f0;
extern "C" unsigned long g_0060c4f4;
extern "C" unsigned long g_0060c518;
extern "C" unsigned long g_0060c51c;
extern "C" unsigned long g_0060c52e;
extern "C" unsigned long g_0060c53e;
extern "C" unsigned long g_0060c550;
extern "C" unsigned long g_0060c584;
extern "C" unsigned long g_0060c588;
extern "C" unsigned long g_0060c58c;
extern "C" unsigned long g_0060c5e6;
extern "C" unsigned long g_0060c606;
extern "C" unsigned long g_0060c618;
extern "C" unsigned long g_0060c61c;
extern "C" unsigned long g_0060c6a8;
extern "C" unsigned long g_0060c6d0;
extern "C" unsigned long g_0060c700;
extern "C" unsigned long g_0060c748;
extern "C" unsigned long g_0060c74c;
extern "C" unsigned long g_0060c750;
extern "C" unsigned long g_0060c754;
extern "C" unsigned long g_0060c758;
void PetSkillUPButtonPresenter::tick(float p1)
{
  return;
}

bool PetSkillUPButtonPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

PetSkillUPButtonPresenter::~PetSkillUPButtonPresenter()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  iVar2 = *(int *)(&g_0060c480 + g_0060c4dc);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x30;
  piStack_20 = (int *)((int)this);
  uStack_1c = (undefined4)(p2);
  uStack_18 = (undefined4)(p3);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_1c,&g_0060c49e + g_0060c4e0,&piStack_20);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_1c);
  func_0079e2bc(&uStack_1c);
  func_0079e2bc(((int)this) + 8);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

PetSkillUPButtonPresenter::PetSkillUPButtonPresenter()
{
  undefined4 p2 = 0;

  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar3 = *(int *)(&g_0060c52e + g_0060c584);
  *(int *)((int)this + 4*(5)) = iVar3 + 0x30;
  iVar1 = g_0060c588;
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(8)) = *(int *)(&g_0060c53e + iVar1) + 0xc;
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0060c550 + g_0060c58c,&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

void PetSkillUPButtonPresenter::onEnter()
{
  return;
}

void PetSkillUPButtonPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  return;
}

undefined4 PetSkillUPButtonPresenter::create(PetSkillUPButtonView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x24))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}



void PetSkillUPButtonPresenter::onSKillUPOneClick(cocos2d::CCObject* p1, unsigned int p2)
{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  uStack_1c = (undefined4)(p1);
  uStack_18 = (undefined4)(p2);
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  piVar1 = (int *)(**(code **)(*piVar1 + 0x28))();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x188))());
  func_0079e53c(&uStack_1c,((int)this) + 0x20);
  uVar2 = (undefined4)(((PetUserData *)uVar2)->getItemData((std::string)(char*)uStack_1c));
  func_0079e2bc(&uStack_1c);
  iVar3 = ((PetUserItemData *)uVar2)->checkSkillUpgraceable(**(undefined4 **)(((int)this) + 0x1c));
  if (iVar3 != 0) {
    ((PetUserItemData *)uVar2)->upgraceSkill(**(undefined4 **)(((int)this) + 0x1c));
  }
  uVar2 = (undefined4)(*(undefined4 *)(((int)this) + 0x1c));
  func_0079e53c(&uStack_1c,((int)this) + 0x20);
  PetSkillUPButtonPresenter::updateVithSkillID((SkillUserData*)uVar2, (std::string)(char*)uStack_1c);
  func_0079e2bc(&uStack_1c);
  return;
}

void PetSkillUPButtonPresenter::onSKillUPAllClick(cocos2d::CCObject* p1, unsigned int p2)
{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_1c [8];
  
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  piVar1 = (int *)(**(code **)(*piVar1 + 0x28))();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x188))());
  func_0079e53c(auStack_1c,((int)this) + 0x20);
  iVar3 = ((PetUserData *)uVar2)->getItemData((std::string)(char*)auStack_1c);
  func_0079e2bc(auStack_1c);
  iVar5 = *(int *)(*(int *)(((int)this) + 0x1c) + 4);
  while ((iVar5 < *(int *)(iVar3 + 4) &&
         (iVar4 = ((PetUserItemData *)iVar3)->checkSkillUpgraceable(**(undefined4 **)(((int)this) + 0x1c)), iVar4 != 0))) {
    ((PetUserItemData *)iVar3)->upgraceSkill(**(undefined4 **)(((int)this) + 0x1c));
    iVar5 = iVar5 + 1;
  }
  uVar2 = (undefined4)(*(undefined4 *)(((int)this) + 0x1c));
  func_0079e53c(auStack_1c,((int)this) + 0x20);
  PetSkillUPButtonPresenter::updateVithSkillID((SkillUserData*)uVar2, (std::string)(char*)auStack_1c);
  func_0079e2bc(auStack_1c);
  return;
}

// ===== 修复: 补回被误删的函数占位 (2) =====
void PetSkillUPButtonPresenter::initWithView(PetSkillUPButtonView* p1)
{
  int *piVar1;
  
  *(int *)(((int)this) + 0x18) = (undefined4)(intptr_t)p1;
  (**(code **)(**(int **)(p1 + 0x10c) + 0x254))
            (*(int **)(p1 + 0x10c),((int)this),*(undefined4 *)((unsigned char *)((char *)&g_0060c5e6 + (intptr_t)(g_0060c618))),0,
             0x20);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x18) + 0x11c);
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)((unsigned char *)((char *)&g_0060c606 + (intptr_t)(g_0060c61c))),0,0x20);
  return;
}

void PetSkillUPButtonPresenter::updateVithSkillID(SkillUserData* p1, std::string p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
