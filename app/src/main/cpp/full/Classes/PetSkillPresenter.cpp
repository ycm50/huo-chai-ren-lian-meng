#include "PetSkillPresenter.h"
#include "BLLeakUtils.h"
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
extern "C" unsigned long UNK_0060c290;
extern "C" unsigned long UNK_0060c2e8;
extern "C" unsigned long UNK_0060c302;
extern "C" unsigned long UNK_0060c348;
extern "C" unsigned long UNK_0060c370;
extern "C" unsigned long UNK_0060c386;
extern "C" unsigned long UNK_0060c39e;
extern "C" unsigned long _UNK_0060c294;
extern "C" unsigned long _UNK_0060c334;
extern "C" unsigned long _UNK_0060c338;
extern "C" unsigned long _UNK_0060c34c;
extern "C" unsigned long _UNK_0060c374;
extern "C" unsigned long _UNK_0060c3cc;
extern "C" unsigned long _UNK_0060c3d0;
extern "C" unsigned long g_0060c290;
extern "C" unsigned long g_0060c294;
extern "C" unsigned long g_0060c2e8;
extern "C" unsigned long g_0060c302;
extern "C" unsigned long g_0060c334;
extern "C" unsigned long g_0060c338;
extern "C" unsigned long g_0060c348;
extern "C" unsigned long g_0060c34c;
extern "C" unsigned long g_0060c370;
extern "C" unsigned long g_0060c374;
extern "C" unsigned long g_0060c386;
extern "C" unsigned long g_0060c39e;
extern "C" unsigned long g_0060c3cc;
extern "C" unsigned long g_0060c3d0;
void PetSkillPresenter::tick(float p1)
{
  return;
}

bool PetSkillPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

PetSkillPresenter::~PetSkillPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0060c2e8 + g_0060c334);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x30;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0060c302 + g_0060c338,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

PetSkillPresenter::PetSkillPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_0060c386 + g_0060c3cc);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x30;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0060c39e + g_0060c3d0,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  *(int *)((int)this + 4*(7)) = 0;
  return;
}

void PetSkillPresenter::onEnter()
{
  return;
}

void PetSkillPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  return;
}

undefined4 PetSkillPresenter::create(PetSkillView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x20))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

undefined4 PetSkillPresenter::initWithView(PetSkillView* p1)
{
  *(undefined4 *)(((int)this) + 0x18) = (undefined4)(intptr_t)p1;
  return 1;
}
