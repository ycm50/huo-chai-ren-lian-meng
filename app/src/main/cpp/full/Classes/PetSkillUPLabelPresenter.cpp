#include "PetSkillUPLabelPresenter.h"
#include "BLLeakUtils.h"
#include "DataCacheManager.h"
#include "PetSkillData.h"
#include "PetSkillUPButtonPresenter.h"
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
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0060c8cc;
extern "C" unsigned long UNK_0060c8ea;
extern "C" unsigned long UNK_0060c93c;
extern "C" unsigned long UNK_0060c964;
extern "C" unsigned long UNK_0060c97a;
extern "C" unsigned long UNK_0060c98a;
extern "C" unsigned long UNK_0060c99c;
extern "C" unsigned long UNK_0060cb40;
extern "C" unsigned long UNK_0060cb56;
extern "C" unsigned long UNK_0060cbe0;
extern "C" unsigned long _UNK_0060c928;
extern "C" unsigned long _UNK_0060c92c;
extern "C" unsigned long _UNK_0060c940;
extern "C" unsigned long _UNK_0060c968;
extern "C" unsigned long _UNK_0060c9d4;
extern "C" unsigned long _UNK_0060c9d8;
extern "C" unsigned long _UNK_0060c9dc;
extern "C" unsigned long _UNK_0060cbac;
extern "C" unsigned long _UNK_0060cbb0;
extern "C" unsigned long _UNK_0060cbf4;
extern "C" unsigned long g_0060c8cc;
extern "C" unsigned long g_0060c8ea;
extern "C" unsigned long g_0060c928;
extern "C" unsigned long g_0060c92c;
extern "C" unsigned long g_0060c93c;
extern "C" unsigned long g_0060c940;
extern "C" unsigned long g_0060c964;
extern "C" unsigned long g_0060c968;
extern "C" unsigned long g_0060c97a;
extern "C" unsigned long g_0060c98a;
extern "C" unsigned long g_0060c99c;
extern "C" unsigned long g_0060c9d4;
extern "C" unsigned long g_0060c9d8;
extern "C" unsigned long g_0060c9dc;
extern "C" unsigned long g_0060cb40;
extern "C" unsigned long g_0060cb56;
extern "C" unsigned long g_0060cbac;
extern "C" unsigned long g_0060cbb0;
extern "C" unsigned long g_0060cbe0;
extern "C" unsigned long g_0060cbf4;
void PetSkillUPLabelPresenter::tick(float p1)
{
  return;
}

bool PetSkillUPLabelPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

PetSkillUPLabelPresenter::~PetSkillUPLabelPresenter()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  iVar2 = *(int *)(&g_0060c8cc + g_0060c928);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x30;
  piStack_20 = (int *)((int)this);
  uStack_1c = (undefined4)(p2);
  uStack_18 = (undefined4)(p3);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_1c,&g_0060c8ea + g_0060c92c,&piStack_20);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_1c);
  func_0079e2bc(&uStack_1c);
  func_0079e2bc(((int)this) + 8);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

PetSkillUPLabelPresenter::PetSkillUPLabelPresenter()
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
  iVar3 = *(int *)(&g_0060c97a + g_0060c9d4);
  *(int *)((int)this + 4*(5)) = iVar3 + 0x30;
  iVar1 = g_0060c9d8;
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(8)) = *(int *)(&g_0060c98a + iVar1) + 0xc;
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0060c99c + g_0060c9dc,&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  *(int *)((int)this + 4*(7)) = 0;
  return;
}

void PetSkillUPLabelPresenter::onEnter()
{
  return;
}

void PetSkillUPLabelPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  return;
}

undefined4 PetSkillUPLabelPresenter::create(PetSkillUPLabelView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x24))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void PetSkillUPLabelPresenter::initWithView(PetSkillUPLabelView* p1)
{
  *(undefined4 *)(((int)this) + 0x18) = (undefined4)(intptr_t)p1;
  return;
}

// ===== 修复: 补回被误删的函数占位 (2) =====
void PetSkillUPLabelPresenter::updateView(SkillUserData* p1, std::string p2, int p3)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void PetSkillUPLabelPresenter::updateLbLV(SkillUserData* p1, std::string p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
