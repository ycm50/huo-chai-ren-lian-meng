#include "BLPetSkillInfoPresenter.h"
#include "BLPetSkillInfoView.h"
#include "BLLeakUtils.h"
#include "DataCacheManager.h"
#include "PetSkillData.h"
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
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0060a2d0;
extern "C" unsigned long UNK_0060a32c;
extern "C" unsigned long UNK_0060a346;
extern "C" unsigned long UNK_0060a38c;
extern "C" unsigned long UNK_0060a3b4;
extern "C" unsigned long UNK_0060a40e;
extern "C" unsigned long UNK_0060a426;
extern "C" unsigned long UNK_0060a4a6;
extern "C" unsigned long _UNK_0060a2d4;
extern "C" unsigned long _UNK_0060a378;
extern "C" unsigned long _UNK_0060a37c;
extern "C" unsigned long _UNK_0060a390;
extern "C" unsigned long _UNK_0060a3b8;
extern "C" unsigned long _UNK_0060a3cc;
extern "C" unsigned long _UNK_0060a458;
extern "C" unsigned long _UNK_0060a45c;
extern "C" unsigned long _UNK_0060a4b0;
extern "C" unsigned long g_0060a2d0;
extern "C" unsigned long g_0060a2d4;
extern "C" unsigned long g_0060a32c;
extern "C" unsigned long g_0060a346;
extern "C" unsigned long g_0060a378;
extern "C" unsigned long g_0060a37c;
extern "C" unsigned long g_0060a38c;
extern "C" unsigned long g_0060a390;
extern "C" unsigned long g_0060a3b4;
extern "C" unsigned long g_0060a3b8;
extern "C" unsigned long g_0060a3cc;
extern "C" unsigned long g_0060a40e;
extern "C" unsigned long g_0060a426;
extern "C" unsigned long g_0060a458;
extern "C" unsigned long g_0060a45c;
extern "C" unsigned long g_0060a4a6;
extern "C" unsigned long g_0060a4b0;
bool BLPetSkillInfoPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

BLPetSkillInfoPresenter::~BLPetSkillInfoPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0060a32c + g_0060a378);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x2c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0060a346 + g_0060a37c,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLPetSkillInfoPresenter::onBtnClose(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(g_0060a3cc);
  return;
}

BLPetSkillInfoPresenter::BLPetSkillInfoPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_0060a40e + g_0060a458);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x2c;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0060a426 + g_0060a45c,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  ((UIManager *)this)->shareManager();
  ((UIManager *)this)->pushCurScrollViewUnEnable();
  return;
}

undefined4 BLPetSkillInfoPresenter::create()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x1c))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLPetSkillInfoPresenter::initWithView(BLPetSkillInfoView* p1)
{
  *(int *)(((int)this) + 0x18) = (undefined4)(intptr_t)p1;
  (**(code **)(**(int **)(p1 + 0x118) + 0x254))
            (*(int **)(p1 + 0x118),((int)this),*(undefined4 *)((unsigned char *)((char *)&g_0060a4a6 + (intptr_t)(g_0060a4b0))),0,
             0x20);
  return;
}

void BLPetSkillInfoPresenter::onEnter()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14, 1, 1);
  return;
}

void BLPetSkillInfoPresenter::onExit()
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

void BLPetSkillInfoPresenter::updateWithData(int p1)
{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  code *pcVar4;
  int *piVar5;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [8];
  
  piVar1 = (int *)((DataCacheManager *)this)->shareManager();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x100))());
  iVar3 = ((PetSkillData *)uVar2)->getItemData(p1);
  if (iVar3 != 0) {
    piVar5 = *(int **)(*(int *)(((int)this) + 0x18) + 0x10c);
    pcVar4 = *(code **)(*piVar5 + 0x20c);
    func_0079e45c(auStack_1c,*(undefined4 *)(iVar3 + 8),auStack_20);
    piVar1 = (int *)0 /* ctorZero */;
    uVar2 = (undefined4)((**(code **)(*piVar1 + 0x214))());
    (*pcVar4)(piVar5,uVar2);
    func_0079e2bc(auStack_1c);
    piVar1 = *(int **)(*(int *)(((int)this) + 0x18) + 0x110);
    (**(code **)(*piVar1 + 0x234))(piVar1,*(undefined4 *)(iVar3 + 4));
    piVar1 = *(int **)(*(int *)(((int)this) + 0x18) + 0x114);
    (**(code **)(*piVar1 + 0x234))(piVar1,*(undefined4 *)(iVar3 + 0x1c));
  }
  return;
}
