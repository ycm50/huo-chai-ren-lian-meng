#include "PetSkillUPPresenter.h"
#include "PetSkillUPView.h"
#include "BLAttackHurtData.h"
#include "BLLeakUtils.h"
#include "DataCacheManager.h"
#include "DataManager.h"
#include "PetData.h"
#include "PetHttpUtil.h"
#include "PetSkillUPLabelPresenter.h"
#include "PetUserData.h"
#include "PetUserItemData.h"
#include "Toast.h"
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
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e5bc(...);
extern "C" long long func_0079e68c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0060cc0c;
extern "C" unsigned long UNK_0060cc64;
extern "C" unsigned long UNK_0060cc82;
extern "C" unsigned long UNK_0060ccd4;
extern "C" unsigned long UNK_0060ccfc;
extern "C" unsigned long UNK_0060cd12;
extern "C" unsigned long UNK_0060cd22;
extern "C" unsigned long UNK_0060cd34;
extern "C" unsigned long UNK_0060cd8c;
extern "C" unsigned long UNK_0060cd8e;
extern "C" unsigned long UNK_0060cdee;
extern "C" unsigned long UNK_0060ce0e;
extern "C" unsigned long UNK_0060ce7e;
extern "C" unsigned long UNK_0060ce80;
extern "C" unsigned long UNK_0060d232;
extern "C" unsigned long UNK_0060d2e6;
extern "C" unsigned long _UNK_0060cc10;
extern "C" unsigned long _UNK_0060ccc0;
extern "C" unsigned long _UNK_0060ccc4;
extern "C" unsigned long _UNK_0060ccd8;
extern "C" unsigned long _UNK_0060cd00;
extern "C" unsigned long _UNK_0060cd6c;
extern "C" unsigned long _UNK_0060cd70;
extern "C" unsigned long _UNK_0060cd74;
extern "C" unsigned long _UNK_0060cd98;
extern "C" unsigned long _UNK_0060cd9c;
extern "C" unsigned long _UNK_0060ce20;
extern "C" unsigned long _UNK_0060ce24;
extern "C" unsigned long _UNK_0060cf8c;
extern "C" unsigned long _UNK_0060cf90;
extern "C" unsigned long _UNK_0060d134;
extern "C" unsigned long _UNK_0060d268;
extern "C" unsigned long _UNK_0060d31c;
extern "C" unsigned long g_0060cc0c;
extern "C" unsigned long g_0060cc10;
extern "C" unsigned long g_0060cc64;
extern "C" unsigned long g_0060cc82;
extern "C" unsigned long g_0060ccc0;
extern "C" unsigned long g_0060ccc4;
extern "C" unsigned long g_0060ccd4;
extern "C" unsigned long g_0060ccd8;
extern "C" unsigned long g_0060ccfc;
extern "C" unsigned long g_0060cd00;
extern "C" unsigned long g_0060cd12;
extern "C" unsigned long g_0060cd22;
extern "C" unsigned long g_0060cd34;
extern "C" unsigned long g_0060cd6c;
extern "C" unsigned long g_0060cd70;
extern "C" unsigned long g_0060cd74;
extern "C" unsigned long g_0060cd8c;
extern "C" unsigned long g_0060cd8e;
extern "C" unsigned long g_0060cd98;
extern "C" unsigned long g_0060cd9c;
extern "C" unsigned long g_0060cdee;
extern "C" unsigned long g_0060ce0e;
extern "C" unsigned long g_0060ce20;
extern "C" unsigned long g_0060ce24;
extern "C" unsigned long g_0060ce7e;
extern "C" unsigned long g_0060ce80;
extern "C" unsigned long g_0060cf8c;
extern "C" unsigned long g_0060cf90;
extern "C" unsigned long g_0060d134;
extern "C" unsigned long g_0060d232;
extern "C" unsigned long g_0060d268;
extern "C" unsigned long g_0060d2e6;
extern "C" unsigned long g_0060d31c;
void PetSkillUPPresenter::tick(float p1)
{
  return;
}

bool PetSkillUPPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

PetSkillUPPresenter::~PetSkillUPPresenter()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  iVar2 = *(int *)(&g_0060cc64 + g_0060ccc0);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x30;
  piStack_20 = (int *)((int)this);
  uStack_1c = (undefined4)(p2);
  uStack_18 = (undefined4)(p3);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_1c,&g_0060cc82 + g_0060ccc4,&piStack_20);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_1c);
  func_0079e2bc(&uStack_1c);
  func_0079e2bc(((int)this) + 7);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

PetSkillUPPresenter::PetSkillUPPresenter()
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
  iVar3 = *(int *)(&g_0060cd12 + g_0060cd6c);
  *(int *)((int)this + 4*(5)) = iVar3 + 0x30;
  iVar1 = g_0060cd70;
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(7)) = *(int *)(&g_0060cd22 + iVar1) + 0xc;
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0060cd34 + g_0060cd74,&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  *(int *)((int)this + 4*(8)) = 0;
  return;
}


void PetSkillUPPresenter::onExit()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar1)->removeAllObservers((cocos2d::CCObject*)((int)this));
  return;
}

undefined4 PetSkillUPPresenter::create(PetSkillUPView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x24))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

// ===== 修复: 补回被误删的函数占位 (7) =====
void PetSkillUPPresenter::onEnter()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

undefined4 PetSkillUPPresenter::initWithView(PetSkillUPView* p1)
{
  int *piVar1;
  
  *(int *)(((int)this) + 0x18) = (undefined4)(intptr_t)p1;
  (**(code **)(**(int **)(p1 + 0x120) + 0x254))
            (*(int **)(p1 + 0x120),((int)this),*(undefined4 *)((unsigned char *)((char *)&g_0060cdee + (intptr_t)(g_0060ce20))),0,
             0x20);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x18) + 0x124);
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)((unsigned char *)((char *)&g_0060ce0e + (intptr_t)(g_0060ce24))),0,0x20);
  return 1;
}

void PetSkillUPPresenter::updateZhuanShuSkill()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void PetSkillUPPresenter::updateView()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void PetSkillUPPresenter::setNewSkill()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;

  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  uStack_1c = (undefined4)(p2);
  uStack_18 = (undefined4)(p3);
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  piVar1 = (int *)(**(code **)(*piVar1 + 0x28))();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x188))());
  func_0079e53c(&uStack_1c,((int)this) + 0x1c);
  uVar2 = (undefined4)(((PetUserData *)uVar2)->getItemData((std::string)(char*)uStack_1c));
  func_0079e2bc(&uStack_1c);
  iVar5 = *(int *)(((int)this) + 0x20);
  if (iVar5 == 0) {
    iVar3 = ((PetHttpUtil *)this)->getInstance();
    uVar4 = (undefined4)(*(undefined4 *)(iVar3 + 0x2c));
  }
  else {
    if (iVar5 != 1) goto code_r0x0060d18e;
    iVar3 = ((PetHttpUtil *)this)->getInstance();
    uVar4 = (undefined4)(*(undefined4 *)(iVar3 + 0x30));
  }
  ((PetUserItemData *)uVar2)->resetSkill((PetSkillIndex)iVar5, uVar4);
code_r0x0060d18e:
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  piVar1 = (int *)(**(code **)(*piVar1 + 0x28))();
  (**(code **)(*piVar1 + 0x188))();
  ((PetUserData *)this)->updateSkillInUse();
  PetSkillUPPresenter::updateView();
  return;
}

void PetSkillUPPresenter::onUnlockSkill1(cocos2d::CCObject* p1, unsigned int* p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void PetSkillUPPresenter::onUnlockSkill2(cocos2d::CCObject* p1, unsigned int* p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
