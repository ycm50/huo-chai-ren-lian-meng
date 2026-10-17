#include "BLSuitComposeInfoPresenter.h"
#include "ItemData.h"
#include "CCNotificationCenter.h"
#include "CCObject.h"
#include "BLSuitComposeInfoEffectPresenter.h"
#include "BLSuitComposeInfoBasePresenter.h"
#include "BLSuitComposeInfoCostPresenter.h"
#include "BLSuitComposeInfoItemPresenter.h"
#include "BLSuitComposeInfoView.h"
#include "BLGameScene.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BackPackData.h"
#include "BackPackItemData.h"
#include "DataCacheManager.h"
#include "DataManager.h"
#include "SuitEquipEquipData.h"
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
extern "C" long long func_0079e55c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0068a730;
extern "C" unsigned long UNK_0068a744;
extern "C" unsigned long UNK_0068ae5a;
extern "C" unsigned long UNK_0068ae76;
extern "C" unsigned long UNK_0068aeee;
extern "C" unsigned long UNK_0068af10;
extern "C" unsigned long UNK_0068af12;
extern "C" unsigned long UNK_0068bb02;
extern "C" unsigned long UNK_0068bb04;
extern "C" unsigned long UNK_0068bb5e;
extern "C" unsigned long UNK_0068bbfc;
extern "C" unsigned long UNK_0068bc12;
extern "C" unsigned long UNK_0068bc42;
extern "C" unsigned long UNK_0068bc6e;
extern "C" unsigned long _UNK_0068a774;
extern "C" unsigned long _UNK_0068a778;
extern "C" unsigned long _UNK_0068aea0;
extern "C" unsigned long _UNK_0068aea4;
extern "C" unsigned long _UNK_0068aef8;
extern "C" unsigned long _UNK_0068af1c;
extern "C" unsigned long _UNK_0068af20;
extern "C" unsigned long _UNK_0068bb1c;
extern "C" unsigned long _UNK_0068bb20;
extern "C" unsigned long _UNK_0068bcc4;
extern "C" unsigned long _UNK_0068bcc8;
extern "C" unsigned long _UNK_0068bccc;
extern "C" unsigned long _UNK_0068bcd0;
extern "C" unsigned long _UNK_0068bcd4;
extern "C" unsigned long _UNK_0068bcd8;
extern "C" unsigned long g_0068a730;
extern "C" unsigned long g_0068a744;
extern "C" unsigned long g_0068a774;
extern "C" unsigned long g_0068a778;
extern "C" unsigned long g_0068ae5a;
extern "C" unsigned long g_0068ae76;
extern "C" unsigned long g_0068aea0;
extern "C" unsigned long g_0068aea4;
extern "C" unsigned long g_0068aeee;
extern "C" unsigned long g_0068aef8;
extern "C" unsigned long g_0068af10;
extern "C" unsigned long g_0068af12;
extern "C" unsigned long g_0068af1c;
extern "C" unsigned long g_0068af20;
extern "C" unsigned long g_0068bb02;
extern "C" unsigned long g_0068bb04;
extern "C" unsigned long g_0068bb1c;
extern "C" unsigned long g_0068bb20;
extern "C" unsigned long g_0068bb5e;
extern "C" unsigned long g_0068bbfc;
extern "C" unsigned long g_0068bc12;
extern "C" unsigned long g_0068bc42;
extern "C" unsigned long g_0068bc6e;
extern "C" unsigned long g_0068bcc4;
extern "C" unsigned long g_0068bcc8;
extern "C" unsigned long g_0068bccc;
extern "C" unsigned long g_0068bcd0;
extern "C" unsigned long g_0068bcd4;
extern "C" unsigned long g_0068bcd8;
void BLSuitComposeInfoPresenter::onResetClick()
{
  *(undefined1 *)(((int)this) + 0x1d) = 1;
  return;
}

BLSuitComposeInfoPresenter::~BLSuitComposeInfoPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int *piStack_18;
  undefined4 uStack_14;
  
  /* VPTR_FIX(R87): vptr=(&g_A+g_B)+8 ?? g_ ?? 0 ?? -> ???? SEGV?????? vptr???? */;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0068a744 + g_0068a778,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLSuitComposeInfoPresenter::BLSuitComposeInfoPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  /* VPTR_FIX(R87): vptr=(&g_A+g_B)+8 ?? g_ ?? 0 ?? -> ???? SEGV?????? vptr???? */;
  *(undefined1 *)(((int)this) + 7) = 0;
  *(int *)((int)this + 4*(6)) = 0;
  *(undefined1 *)((int)((int)this) + 0x1d) = 1;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0068ae76 + g_0068aea4,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

undefined4 BLSuitComposeInfoPresenter::create()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x20))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}



void BLSuitComposeInfoPresenter::onExit()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar1)->removeAllObservers((cocos2d::CCObject*)((int)this));
  return;
}


void BLSuitComposeInfoPresenter::onUpdateInfo(cocos2d::CCObject* p1)
{
  int iVar1;
  
  if ((p1 != 0) &&
     (iVar1 = func_0079e55c(p1,*(undefined4 *)(&g_0068bb02 + g_0068bb20),
                              *(undefined4 *)(&g_0068bb04 + g_0068bb1c),0), iVar1 != 0)) {
    BLSuitComposeInfoPresenter::initWithId(*(undefined4 *)(iVar1 + 0x14));
  }
  return;
}

// ===== 修复: 补回被误删的函数占位 (5) =====
void BLSuitComposeInfoPresenter::initWithView(BLSuitComposeInfoView* p1)
{
  *(int *)(((int)this) + 0x14) = (undefined4)(intptr_t)p1;
  (**(code **)(**(int **)(p1 + 0x120) + 0x254))
            (*(int **)(p1 + 0x120),((int)this),*(undefined4 *)((unsigned char *)((char *)&g_0068aeee + (intptr_t)(g_0068aef8))),0,
             0x20);
  return;
}

void BLSuitComposeInfoPresenter::onEnter()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLSuitComposeInfoPresenter::removeItem(int p1, int p2)
{
  undefined4 uVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  code *pcVar5;
  
  uVar1 = (undefined4)(((DataCacheManager *)this)->shareManager());
  uVar1 = ((void)(((DataCacheManager *)(uVar1))->getItemDataByID(p1)),(undefined4)0);
  piVar2 = (int *)((DataManager *)this)->shareDataManager();
  piVar2 = (int *)(**(code **)(*(int *)(piVar2) + (0x28)))();
  uVar3 = (undefined4)((**(code **)(*(int *)(piVar2) + (0x50)))());
  piVar2 = (int *)((BackPackData *)(uVar3))->getItemData((ItemData*)uVar1);
  piVar4 = (int *)((BackPackItemData *)this)->create();
  pcVar5 = *(code **)(*piVar4 + 0x1c);
  uVar1 = (undefined4)((**(code **)(*(int *)(piVar2) + (0x18)))(piVar2));
  (*pcVar5)(piVar4,uVar1);
  (**(code **)(*(int *)(piVar4) + (0x24)))(piVar4,p1);
  (**(code **)(*(int *)(piVar4) + (0x2c)))(piVar4,p2);
  piVar2 = (int *)((DataManager *)this)->shareDataManager();
  piVar2 = (int *)(**(code **)(*(int *)(piVar2) + (0x28)))();
  uVar1 = (undefined4)((**(code **)(*(int *)(piVar2) + (0x50)))());
  ((BackPackData *)(uVar1))->removeItem((BackPackItemData*)piVar4);
  return;
}

void BLSuitComposeInfoPresenter::initWithId(int p1)
{
  undefined4 p4 = 0;

  undefined4 extraout_r2;
  int iVar1;
  
  *(undefined4 *)(((int)this) + 0x18) = p1;
  ((BLSuitComposeInfoItemPresenter *)this)->initWithData(*(undefined4 *)(*(int *)(*(int *)(((int)this) + 0x14) + 0x10c) + 0x108));
  iVar1 = (undefined4)(intptr_t)(*(int *)(*(int *)(((int)this) + 0x14) + 0x110));
  ((BLSuitComposeInfoCostPresenter *)this)->initWithData(*(undefined4 *)(iVar1 + 0x108));
  ((BLSuitComposeInfoBasePresenter *)(*(undefined4 *)(*(int *)(*(int *)(((int)this) + 0x14) + 0x114) + 0x108)))->initWithData(p1);
  ((BLSuitComposeInfoEffectPresenter *)(*(undefined4 *)(*(int *)(*(int *)(((int)this) + 0x14) + 0x118) + 0x108)))->initWithData(p1);
  return;
}

void BLSuitComposeInfoPresenter::onCompose(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
