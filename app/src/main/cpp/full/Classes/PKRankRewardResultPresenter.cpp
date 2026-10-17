#include "PKRankRewardResultPresenter.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "CCObject.h"
#include "CCTouch.h"
#include "CCDirector.h"
#include "ItemData.h"
#include "BLChestRewardItemPresenter.h"
#include "BLChestRewardItemView.h"
#include "BLLeakUtils.h"
#include "BackPackData.h"
#include "DataManager.h"
#include "EquipData.h"
#include "PKRankRewardResultView.h"
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
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0061fb08;
extern "C" unsigned long UNK_0061fb22;
extern "C" unsigned long UNK_0061fb78;
extern "C" unsigned long UNK_0061fba0;
extern "C" unsigned long UNK_0061fbee;
extern "C" unsigned long UNK_0061fc1c;
extern "C" unsigned long UNK_0061fcc8;
extern "C" unsigned long UNK_0061fce6;
extern "C" unsigned long UNK_0061fd9a;
extern "C" unsigned long _UNK_0061fb64;
extern "C" unsigned long _UNK_0061fb68;
extern "C" unsigned long _UNK_0061fb7c;
extern "C" unsigned long _UNK_0061fba4;
extern "C" unsigned long _UNK_0061fbb8;
extern "C" unsigned long _UNK_0061fc4c;
extern "C" unsigned long _UNK_0061fc50;
extern "C" unsigned long _UNK_0061fd08;
extern "C" unsigned long _UNK_0061fd0c;
extern "C" unsigned long _UNK_0061fdc4;
extern "C" unsigned long g_0061fb08;
extern "C" unsigned long g_0061fb22;
extern "C" unsigned long g_0061fb64;
extern "C" unsigned long g_0061fb68;
extern "C" unsigned long g_0061fb78;
extern "C" unsigned long g_0061fb7c;
extern "C" unsigned long g_0061fba0;
extern "C" unsigned long g_0061fba4;
extern "C" unsigned long g_0061fbb8;
extern "C" unsigned long g_0061fbee;
extern "C" unsigned long g_0061fc1c;
extern "C" unsigned long g_0061fc4c;
extern "C" unsigned long g_0061fc50;
extern "C" unsigned long g_0061fcc8;
extern "C" unsigned long g_0061fce6;
extern "C" unsigned long g_0061fd08;
extern "C" unsigned long g_0061fd0c;
extern "C" unsigned long g_0061fd9a;
extern "C" unsigned long g_0061fdc4;
EquipData* PKRankRewardResultPresenter::getEquipData() const
{
  return (EquipData*)(*(undefined4 *)(((int)this) + 0x1c));
}

bool PKRankRewardResultPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void PKRankRewardResultPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void PKRankRewardResultPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void PKRankRewardResultPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void PKRankRewardResultPresenter::tick(float p1)
{
  return;
}

PKRankRewardResultPresenter::~PKRankRewardResultPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0061fb08 + g_0061fb64);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x44;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0061fb22 + g_0061fb68,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  if (*(int *)((int)this + 4*(7)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(7)) = 0;
  }
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void PKRankRewardResultPresenter::onClose(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(g_0061fbb8);
  return;
}

void PKRankRewardResultPresenter::setEquipData(EquipData* p1)
{
  if (*(int *)(((int)this) + 0x1c) != (int)(intptr_t)p1) {
    if ((int)(intptr_t)p1 != 0) {
      ((cocos2d::CCObject *)p1)->retain();
    }
    if (*(int *)(((int)this) + 0x1c) != 0) {
      ((cocos2d::CCObject *)this)->release();
    }
    *(int *)(((int)this) + 0x1c) = (undefined4)(intptr_t)p1;
  }
  return;
}

PKRankRewardResultPresenter::PKRankRewardResultPresenter()
{
  undefined4 p2 = 0;

  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar3 = *(int *)(&g_0061fbee + g_0061fc4c);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x44;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 1);
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0061fc1c + g_0061fc50,&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  *(int *)((int)this + 4*(7)) = 0;
  return;
}

undefined4 PKRankRewardResultPresenter::create(PKRankRewardResultView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x20))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void PKRankRewardResultPresenter::onExit()
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

void PKRankRewardResultPresenter::onEnter()
{
  ((UIManager *)this)->shareManager();
  ((UIManager *)this)->pushCurScrollViewUnEnable();
  return;
}

void PKRankRewardResultPresenter::initWithView(PKRankRewardResultView* p1)
{
  int *piVar1;
  code *pcVar2;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [4];
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  *(undefined4 *)(((int)this) + 0x18) = (undefined4)(intptr_t)p1;
  piVar1 = (int *)((PKRankRewardResultView *)p1)->getBtnClose();
  uStack_14 = (undefined4)(0);
  uStack_18 = (undefined4)(*(undefined4 *)(&g_0061fcc8 + g_0061fd08));
  (**(code **)(*piVar1 + 0x254))(piVar1,((int)this),uStack_18,0,0x20);
  piVar1 = (int *)((PKRankRewardResultView *)*(undefined4 *)(((int)this) + 0x18))->getBtnClose();
  pcVar2 = *(code **)(*piVar1 + 0x26c);
  func_0079e45c(auStack_1c,&g_0061fce6 + g_0061fd0c,auStack_20);
  (*pcVar2)(piVar1,auStack_1c);
  func_0079e2bc(auStack_1c);
  return;
}

void PKRankRewardResultPresenter::updateEquip(EquipData* p1)
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  piVar1 = (int *)(**(code **)(*piVar1 + 0x28))();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x50))());
  ((BackPackData *)uVar2)->addItemData((ItemData*)p1, 1);
  ((PKRankRewardResultView *)*(undefined4 *)(((int)this) + 0x18))->RewardItem();
  uVar2 = (undefined4)(((BLChestRewardItemView *)this)->getPresenter());
  ((BLChestRewardItemPresenter *)uVar2)->initWith((EquipData*)p1, 0);
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
void PKRankRewardResultPresenter::initWith(int p1, int p2)
{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  piVar2 = (int *)::operator new(0x84);
  ::new ((void *)piVar2) EquipData();   /* ALLOC+CTOR_FIX(R115): 原为裸 new + ctorZero 占位；生成器丢了 EquipData 的构造函数 -> vptr 垃圾 */
  iVar3 = (undefined4)(intptr_t)(((EquipData *)piVar2)->init());
  if (iVar3 != 0) {
    ((cocos2d::CCObject *)piVar2)->autorelease();
    ((EquipData *)piVar2)->initWithID(p1);
    (**(code **)(*(int *)(piVar2) + (0x9c)))(piVar2,p2);
    (**(code **)(*(int *)this + 0x30))(((int)this),piVar2);
    piVar4 = (int *)((PKRankRewardResultView *)*(int *)((int)this + 4*(6)))->getLabTitle();
    (**(code **)(*(int *)(piVar4) + (0x234)))(piVar4,(unsigned char *)((char *)&g_0061fd9a + (intptr_t)(g_0061fdc4)));
    PKRankRewardResultPresenter::updateEquip((EquipData*)piVar2);
    return;
  }
  (**(code **)(*(int *)(piVar2) + (8)))(piVar2);
  ((EquipData *)0)->initWithID(p1);
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xff,0x61fdc0);
  (*pcVar1)();
}
