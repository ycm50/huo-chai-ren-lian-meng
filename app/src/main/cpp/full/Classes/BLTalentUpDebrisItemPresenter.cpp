#include "BLTalentUpDebrisItemPresenter.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "CCObject.h"
#include "CCTouch.h"
#include "CCDirector.h"
#include "ItemData.h"
#include "BLLeakUtils.h"
#include "BLTalentInfoPresenter.h"
#include "BLTalentInfoView.h"
#include "BLTalentUpDebrisItemView.h"
#include "BackPackData.h"
#include "DataCacheManager.h"
#include "DataManager.h"
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
extern "C" long long func_0079e34c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e904(...);
extern "C" long long func_0079e914(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_006a0330;
extern "C" unsigned long UNK_006a034a;
extern "C" unsigned long UNK_006a0390;
extern "C" unsigned long UNK_006a03b8;
extern "C" unsigned long UNK_006a0474;
extern "C" unsigned long UNK_006a0476;
extern "C" unsigned long UNK_006a0490;
extern "C" unsigned long UNK_006a0492;
extern "C" unsigned long UNK_006a04c6;
extern "C" unsigned long UNK_006a04de;
extern "C" unsigned long UNK_006a0558;
extern "C" unsigned long UNK_006a0574;
extern "C" unsigned long UNK_006a05f4;
extern "C" unsigned long UNK_006a0620;
extern "C" unsigned long _UNK_006a037c;
extern "C" unsigned long _UNK_006a0380;
extern "C" unsigned long _UNK_006a0394;
extern "C" unsigned long _UNK_006a03bc;
extern "C" unsigned long _UNK_006a04a8;
extern "C" unsigned long _UNK_006a04ac;
extern "C" unsigned long _UNK_006a04b0;
extern "C" unsigned long _UNK_006a04b4;
extern "C" unsigned long _UNK_006a0508;
extern "C" unsigned long _UNK_006a050c;
extern "C" unsigned long _UNK_006a0560;
extern "C" unsigned long _UNK_006a0698;
extern "C" unsigned long _UNK_006a069c;
extern "C" unsigned long _UNK_006a06a0;
extern "C" unsigned long g_006a0330;
extern "C" unsigned long g_006a034a;
extern "C" unsigned long g_006a037c;
extern "C" unsigned long g_006a0380;
extern "C" unsigned long g_006a0390;
extern "C" unsigned long g_006a0394;
extern "C" unsigned long g_006a03b8;
extern "C" unsigned long g_006a03bc;
extern "C" unsigned long g_006a0474;
extern "C" unsigned long g_006a0476;
extern "C" unsigned long g_006a0490;
extern "C" unsigned long g_006a0492;
extern "C" unsigned long g_006a04a8;
extern "C" unsigned long g_006a04ac;
extern "C" unsigned long g_006a04b0;
extern "C" unsigned long g_006a04b4;
extern "C" unsigned long g_006a04c6;
extern "C" unsigned long g_006a04de;
extern "C" unsigned long g_006a0508;
extern "C" unsigned long g_006a050c;
extern "C" unsigned long g_006a0558;
extern "C" unsigned long g_006a0560;
extern "C" unsigned long g_006a0574;
extern "C" unsigned long g_006a05f4;
extern "C" unsigned long g_006a0620;
extern "C" unsigned long g_006a0698;
extern "C" unsigned long g_006a069c;
extern "C" unsigned long g_006a06a0;
bool BLTalentUpDebrisItemPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLTalentUpDebrisItemPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLTalentUpDebrisItemPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

BLTalentUpDebrisItemPresenter::~BLTalentUpDebrisItemPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_006a0330 + g_006a037c);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x34;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_006a034a + g_006a0380,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLTalentUpDebrisItemPresenter::onBtn(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  iVar2 = ((UIManager *)uVar1)->showUIById(0xb0);
  if ((((iVar2 != 0) &&
       (iVar2 = func_0079e55c(iVar2,*(undefined4 *)(&g_006a0474 + g_006a04a8),
                                *(undefined4 *)(&g_006a0476 + g_006a04ac),0), iVar2 != 0)) &&
      (*(int *)(iVar2 + 0x24) != 0)) &&
     (iVar2 = func_0079e55c(*(int *)(iVar2 + 0x24),*(undefined4 *)(&g_006a0490 + g_006a04b0),
                              *(undefined4 *)(&g_006a0492 + g_006a04b4),0), iVar2 != 0)) {
    uVar1 = (undefined4)(((BLTalentInfoView *)this)->getPresenter());
    ((BLTalentInfoPresenter *)uVar1)->initWithID(*(undefined4 *)(((int)this) + 0x1c));
  }
  return;
}

BLTalentUpDebrisItemPresenter::BLTalentUpDebrisItemPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_006a04c6 + g_006a0508);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x34;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_006a04de + g_006a050c,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

undefined4 BLTalentUpDebrisItemPresenter::create()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x24))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLTalentUpDebrisItemPresenter::initWithView(BLTalentUpDebrisItemView* p1)
{
  int *piVar1;
  
  *(undefined4 *)(((int)this) + 0x18) = (undefined4)(intptr_t)p1;
  piVar1 = (int *)((BLTalentUpDebrisItemView *)p1)->getBtn();
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)(&g_006a0558 + g_006a0560),0,0x20);
  return;
}


void BLTalentUpDebrisItemPresenter::onEnter()
{
  return;
}

void BLTalentUpDebrisItemPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  return;
}

undefined1 BLTalentUpDebrisItemPresenter::getIsEnough()
{
  return *(undefined1 *)(((int)this) + 0x20);
}

// ===== 修复: 补回被误删的函数占位 (1) =====
void BLTalentUpDebrisItemPresenter::initWithData(int p1, int p2)
{
  undefined4 uVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  code *pcVar6;
  int *piVar7;
  undefined1 uStack_70;
  undefined1 uStack_6f;
  undefined1 uStack_6e;
  undefined1 auStack_6c [40];
  undefined1 auStack_44 [40];
  int iStack_1c;
  
  iVar5 = (undefined4)(intptr_t)(g_006a0698);
  *(undefined4 *)(((int)this) + 0x1c) = p1;
  piVar7 = *(int **)(&g_006a0574 + iVar5);
  iStack_1c = (int)*(int *)&(*piVar7);
  uVar1 = (undefined4)(((DataCacheManager *)this)->shareManager());
  piVar2 = ((void)((DataCacheManager *)(uVar1))->getItemDataByID(p1),(int *)0);
  (**(code **)(*(int *)(piVar2) + (0x58)))(&uStack_70,piVar2);
  piVar3 = (int *)0 /* ctorZero */;
  func_0079e2bc(&uStack_70);
  piVar4 = (int *)((BLTalentUpDebrisItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getSpIcon();
  pcVar6 = *(code **)(*piVar4 + 0x20c);
  uVar1 = (undefined4)((**(code **)(*(int *)(piVar3) + (0x214)))(piVar3));
  (*pcVar6)(piVar4,uVar1);
  piVar3 = (int *)((DataManager *)this)->shareDataManager();
  piVar3 = (int *)(**(code **)(*(int *)(piVar3) + (0x28)))();
  uVar1 = (undefined4)((**(code **)(*(int *)(piVar3) + (0x50)))());
  piVar2 = (int *)((BackPackData *)(uVar1))->getItemData((ItemData*)piVar2);
  iVar5 = 0;
  if (piVar2 != (int *)0x0) {
    iVar5 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar2) + (0x28)))());
  }
  func_0079e904(auStack_6c,(unsigned char *)((char *)&g_006a05f4 + (intptr_t)(g_006a069c)),iVar5);
  piVar2 = (int *)((BLTalentUpDebrisItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getLabCur();
  (**(code **)(*(int *)(piVar2) + (0x234)))(piVar2,auStack_6c);
  func_0079e34c(auStack_44,0,0x28);
  func_0079e904(auStack_44,(unsigned char *)((char *)&g_006a0620 + (intptr_t)(g_006a06a0)),p2);
  piVar2 = (int *)((BLTalentUpDebrisItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getLabNeed();
  (**(code **)(*(int *)(piVar2) + (0x234)))(piVar2,auStack_44);
  *(undefined1 *)(((int)this) + 0x20) = 0;
  if (iVar5 < p2) {
    piVar2 = (int *)((BLTalentUpDebrisItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getLabCur();
    uStack_70 = 0xcc;
    uStack_6f = 4;
    uStack_6e = 4;
    (**(code **)(*(int *)(piVar2) + (0x1b4)))(piVar2,&uStack_70);
  }
  else {
    *(undefined1 *)(((int)this) + 0x20) = 1;
    piVar2 = (int *)((BLTalentUpDebrisItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getLabCur();
    uStack_70 = 0x11;
    uStack_6f = 0xab;
    uStack_6e = 0;
    (**(code **)(*(int *)(piVar2) + (0x1b4)))(piVar2,&uStack_70);
  }
  if (iStack_1c != *piVar7) {
    func_0079e914();
  }
  return;
}
