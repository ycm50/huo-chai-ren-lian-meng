#include "BLPetSkillIconPresenter.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "CCObject.h"
#include "CCTouch.h"
#include "CCDirector.h"
#include "BLPetSkillIconView.h"
#include "BLLeakUtils.h"
#include "BLPetSkillInfoPresenter.h"
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
extern "C" long long software_udf(...);

extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_00609fdc;
extern "C" unsigned long UNK_0060a034;
extern "C" unsigned long UNK_0060a04e;
extern "C" unsigned long UNK_0060a094;
extern "C" unsigned long UNK_0060a0bc;
extern "C" unsigned long UNK_0060a0fc;
extern "C" unsigned long UNK_0060a0fe;
extern "C" unsigned long UNK_0060a114;
extern "C" unsigned long UNK_0060a116;
extern "C" unsigned long UNK_0060a156;
extern "C" unsigned long UNK_0060a16e;
extern "C" unsigned long UNK_0060a1ea;
extern "C" unsigned long _UNK_00609fe0;
extern "C" unsigned long _UNK_0060a080;
extern "C" unsigned long _UNK_0060a084;
extern "C" unsigned long _UNK_0060a098;
extern "C" unsigned long _UNK_0060a0c0;
extern "C" unsigned long _UNK_0060a134;
extern "C" unsigned long _UNK_0060a138;
extern "C" unsigned long _UNK_0060a13c;
extern "C" unsigned long _UNK_0060a140;
extern "C" unsigned long _UNK_0060a144;
extern "C" unsigned long _UNK_0060a19c;
extern "C" unsigned long _UNK_0060a1a0;
extern "C" unsigned long _UNK_0060a1f4;
extern "C" unsigned long g_00609fdc;
extern "C" unsigned long g_00609fe0;
extern "C" unsigned long g_0060a034;
extern "C" unsigned long g_0060a04e;
extern "C" unsigned long g_0060a080;
extern "C" unsigned long g_0060a084;
extern "C" unsigned long g_0060a094;
extern "C" unsigned long g_0060a098;
extern "C" unsigned long g_0060a0bc;
extern "C" unsigned long g_0060a0c0;
extern "C" unsigned long g_0060a0fc;
extern "C" unsigned long g_0060a0fe;
extern "C" unsigned long g_0060a114;
extern "C" unsigned long g_0060a116;
extern "C" unsigned long g_0060a134;
extern "C" unsigned long g_0060a138;
extern "C" unsigned long g_0060a13c;
extern "C" unsigned long g_0060a140;
extern "C" unsigned long g_0060a144;
extern "C" unsigned long g_0060a156;
extern "C" unsigned long g_0060a16e;
extern "C" unsigned long g_0060a19c;
extern "C" unsigned long g_0060a1a0;
extern "C" unsigned long g_0060a1ea;
extern "C" unsigned long g_0060a1f4;
bool BLPetSkillIconPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

BLPetSkillIconPresenter::~BLPetSkillIconPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0060a034 + g_0060a080);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x2c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0060a04e + g_0060a084,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

// ===== 修复: 补回被误删的函数占位 (7) =====
void BLPetSkillIconPresenter::onBtn(cocos2d::CCObject* p1, unsigned int p2)
{
  code *pcVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  
  piVar2 = (int *)((DataCacheManager *)this)->shareManager();
  uVar3 = (undefined4)((**(code **)(*(int *)(piVar2) + (0x100)))());
  iVar4 = (undefined4)(intptr_t)(((PetSkillData *)uVar3)->getItemData(*(undefined4 *)(((int)this) + 0x1c)));
  if ((*(int *)(((int)this) + 0x20) == 0) && (iVar4 != 0)) {
    uVar3 = (undefined4)(((UIManager *)this)->shareManager());
    iVar4 = (undefined4)(intptr_t)(((UIManager *)uVar3)->showUIById(g_0060a134));
    if (iVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x60a12e);
      (*pcVar1)();
    }
    iVar4 = func_0079e55c(iVar4,*(undefined4 *)((unsigned char *)((char *)&g_0060a0fc + (intptr_t)(g_0060a138))),
                            *(undefined4 *)((unsigned char *)((char *)&g_0060a0fe + (intptr_t)(g_0060a13c))),0);
    if ((*(int *)(iVar4 + 0x24) != 0) &&
       (iVar4 = func_0079e55c(*(int *)(iVar4 + 0x24),
                                *(undefined4 *)((unsigned char *)((char *)&g_0060a114 + (intptr_t)(g_0060a140))),
                                *(undefined4 *)((unsigned char *)((char *)&g_0060a116 + (intptr_t)(g_0060a144))),0), iVar4 != 0)) {
      ((BLPetSkillInfoPresenter *)*(undefined4 *)(iVar4 + 0x108))->updateWithData(*(undefined4 *)(((int)this) + 0x1c));
    }
  }
  return;
}

BLPetSkillIconPresenter::BLPetSkillIconPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = (undefined4)(intptr_t)(*(int *)((unsigned char *)((char *)&g_0060a156 + (intptr_t)(g_0060a19c))));
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x2c;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,(unsigned char *)((char *)&g_0060a16e + (intptr_t)(g_0060a1a0)),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  *(int *)((int)this + 4*(7)) = 0;
  return;
}

undefined4 BLPetSkillIconPresenter::create()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x24))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLPetSkillIconPresenter::initWithView(BLPetSkillIconView* p1)
{
  *(int *)(((int)this) + 0x18) = (undefined4)(intptr_t)p1;
  (**(code **)(**(int **)(p1 + 0x118) + 0x254))
            (*(int **)(p1 + 0x118),((int)this),*(undefined4 *)((unsigned char *)((char *)&g_0060a1ea + (intptr_t)(g_0060a1f4))),0,
             0x20);
  return;
}

void BLPetSkillIconPresenter::onEnter()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14, 1, 0);
  return;
}

void BLPetSkillIconPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  return;
}

void BLPetSkillIconPresenter::updateWithData(int p1)
{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  code *pcVar4;
  int *piVar5;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [8];
  
  *(undefined4 *)(((int)this) + 0x1c) = p1;
  piVar1 = (int *)((DataCacheManager *)this)->shareManager();
  uVar2 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x100)))());
  iVar3 = (undefined4)(intptr_t)(((PetSkillData *)(uVar2))->getItemData(*(undefined4 *)(((int)this) + 0x1c)));
  if (iVar3 != 0) {
    piVar5 = *(int **)(*(int *)(((int)this) + 0x18) + 0x10c);
    pcVar4 = *(code **)(*piVar5 + 0x20c);
    func_0079e45c(auStack_1c,*(undefined4 *)(iVar3 + 8),auStack_20);
    piVar1 = (int *)0 /* ctorZero */;
    uVar2 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x214)))());
    (*pcVar4)(piVar5,uVar2);
    func_0079e2bc(auStack_1c);
  }
  piVar1 = *(int **)(*(int *)(((int)this) + 0x18) + 0x10c);
  (**(code **)(*(int *)(piVar1) + (0x90)))(piVar1,iVar3 != 0);
  if (*(int *)(((int)this) + 0x20) == 1) {
    piVar1 = *(int **)(*(int *)(((int)this) + 0x18) + 0x114);
    (**(code **)(*(int *)(piVar1) + (0x90)))(piVar1,iVar3 == 0);
  }
  return;
}
