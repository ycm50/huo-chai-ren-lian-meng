#include "BLPetSkillInfoView.h"
#include "BLLeakUtils.h"
#include "BLPetSkillInfoPresenter.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
using namespace cocos2d;
// 兜底声明
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0060e658;
extern "C" unsigned long UNK_0060e68a;
extern "C" unsigned long UNK_0060e6e4;
extern "C" unsigned long UNK_0060e70c;
extern "C" unsigned long UNK_0060e7a4;
extern "C" unsigned long UNK_0060e7fe;
extern "C" unsigned long UNK_0060e88c;
extern "C" unsigned long UNK_0060e94c;
extern "C" unsigned long UNK_0060e952;
extern "C" unsigned long UNK_0060e99a;
extern "C" unsigned long UNK_0060e9ee;
extern "C" unsigned long UNK_0060ea80;
extern "C" unsigned long UNK_0060eb4e;
extern "C" unsigned long UNK_0060ec26;
extern "C" unsigned long _DAT_0060e77c;
extern "C" unsigned long _DAT_0060e780;
extern "C" unsigned long _UNK_0060e6d0;
extern "C" unsigned long _UNK_0060e6d4;
extern "C" unsigned long _UNK_0060e6e8;
extern "C" unsigned long _UNK_0060e710;
extern "C" unsigned long _UNK_0060eb70;
extern "C" unsigned long _UNK_0060eb74;
extern "C" unsigned long _UNK_0060eb78;
extern "C" unsigned long _UNK_0060eb7c;
extern "C" unsigned long _UNK_0060eb80;
extern "C" unsigned long _UNK_0060eb84;
extern "C" unsigned long _UNK_0060eb88;
extern "C" unsigned long _UNK_0060eb8c;
extern "C" unsigned long _UNK_0060eb90;
extern "C" unsigned long _UNK_0060eb94;
extern "C" unsigned long _UNK_0060eb98;
extern "C" unsigned long _UNK_0060eb9c;
extern "C" unsigned long _UNK_0060eba0;
extern "C" unsigned long _UNK_0060eba4;
extern "C" unsigned long _UNK_0060eba8;
extern "C" unsigned long _UNK_0060ebac;
extern "C" unsigned long _UNK_0060ecd8;
extern "C" unsigned long _UNK_0060ecdc;
extern "C" unsigned long _UNK_0060ece0;
extern "C" unsigned long g_0060e658;
extern "C" unsigned long g_0060e68a;
extern "C" unsigned long g_0060e6d0;
extern "C" unsigned long g_0060e6d4;
extern "C" unsigned long g_0060e6e4;
extern "C" unsigned long g_0060e6e8;
extern "C" unsigned long g_0060e70c;
extern "C" unsigned long g_0060e710;
extern "C" unsigned long g_0060e77c;
extern "C" unsigned long g_0060e780;
extern "C" unsigned long g_0060e7a4;
extern "C" unsigned long g_0060e7fe;
extern "C" unsigned long g_0060e88c;
extern "C" unsigned long g_0060e94c;
extern "C" unsigned long g_0060e952;
extern "C" unsigned long g_0060e99a;
extern "C" unsigned long g_0060e9ee;
extern "C" unsigned long g_0060ea80;
extern "C" unsigned long g_0060eb4e;
extern "C" unsigned long g_0060eb70;
extern "C" unsigned long g_0060eb74;
extern "C" unsigned long g_0060eb78;
extern "C" unsigned long g_0060eb7c;
extern "C" unsigned long g_0060eb80;
extern "C" unsigned long g_0060eb84;
extern "C" unsigned long g_0060eb88;
extern "C" unsigned long g_0060eb8c;
extern "C" unsigned long g_0060eb90;
extern "C" unsigned long g_0060eb94;
extern "C" unsigned long g_0060eb98;
extern "C" unsigned long g_0060eb9c;
extern "C" unsigned long g_0060eba0;
extern "C" unsigned long g_0060eba4;
extern "C" unsigned long g_0060eba8;
extern "C" unsigned long g_0060ebac;
extern "C" unsigned long g_0060ec26;
extern "C" unsigned long g_0060ecd8;
extern "C" unsigned long g_0060ecdc;
extern "C" unsigned long g_0060ece0;
BLPetSkillInfoView::~BLPetSkillInfoView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0060e658 + g_0060e6d0);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0060e68a + g_0060e6d4,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  if (*(int *)((int)this + 4*(0x42)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x42)) = 0;
  }
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLPetSkillInfoView::BLPetSkillInfoView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(g_0060e77c + 0x60e724);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLPetSkillInfoView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

void BLPetSkillInfoView::initView()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

bool BLPetSkillInfoView::init()
{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = ((cocos2d::CCLayer *)this)->init();
  if (iVar1 != 0) {
    uVar2 = (undefined4)(((BLPetSkillInfoPresenter *)this)->create());
    *(undefined4 *)(((int)this) + 0x108) = uVar2;
    ((cocos2d::CCObject *)this)->retain();
    BLPetSkillInfoView::initView();
    ((BLPetSkillInfoPresenter *)*(undefined4 *)(((int)this) + 0x108))->initWithView((BLPetSkillInfoView*)((int)this));
  }
  return iVar1;
}

void BLPetSkillInfoView::onEnter()
{
  ((BLPetSkillInfoPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLPetSkillInfoView::onExit()
{
  ((BLPetSkillInfoPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}
