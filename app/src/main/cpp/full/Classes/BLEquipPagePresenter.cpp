#include "BLEquipPagePresenter.h"
#include "CCDictionary.h"
#include "CCArray.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "CCObject.h"
#include "CCTouch.h"
#include "CCNode.h"
#include "CCDirector.h"
#include "CommonUseData.h"
#include "BLEquipItemPresenter.h"
#include "BLEquipItemView.h"
#include "BLEquipPageView.h"
#include "BLGridView.h"
#include "BLItemDataInfoPresenter.h"
#include "BLItemDataInfoView.h"
#include "BLLeakUtils.h"
#include "DataManager.h"
#include "UIManager.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <new>   // ghost_fix.js 自动补齐
using namespace CocosDenshion;

using namespace cocos2d;
// 兜底声明
extern "C" long long software_udf(...);

extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2dc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0066fed0;
extern "C" unsigned long UNK_0066fee8;
extern "C" unsigned long UNK_0066ff00;
extern "C" unsigned long UNK_0066ff30;
extern "C" unsigned long UNK_0066ff48;
extern "C" unsigned long UNK_0066ffac;
extern "C" unsigned long UNK_0066ffd6;
extern "C" unsigned long UNK_00670028;
extern "C" unsigned long UNK_00670050;
extern "C" unsigned long UNK_00670078;
extern "C" unsigned long UNK_00670094;
extern "C" unsigned long UNK_00670098;
extern "C" unsigned long UNK_006700f2;
extern "C" unsigned long UNK_006701f8;
extern "C" unsigned long UNK_0067024c;
extern "C" unsigned long UNK_00670274;
extern "C" unsigned long UNK_00670292;
extern "C" unsigned long UNK_006702ba;
extern "C" unsigned long UNK_006702da;
extern "C" unsigned long _UNK_0066fed4;
extern "C" unsigned long _UNK_0066feec;
extern "C" unsigned long _UNK_0066ff04;
extern "C" unsigned long _UNK_0066ff34;
extern "C" unsigned long _UNK_0066ff4c;
extern "C" unsigned long _UNK_00670014;
extern "C" unsigned long _UNK_00670018;
extern "C" unsigned long _UNK_0067002c;
extern "C" unsigned long _UNK_00670054;
extern "C" unsigned long _UNK_00670068;
extern "C" unsigned long _UNK_0067007c;
extern "C" unsigned long _UNK_006700bc;
extern "C" unsigned long _UNK_006700c0;
extern "C" unsigned long _UNK_00670218;
extern "C" unsigned long _UNK_0067021c;
extern "C" unsigned long _UNK_00670220;
extern "C" unsigned long _UNK_00670224;
extern "C" unsigned long _UNK_00670228;
extern "C" unsigned long _UNK_0067022c;
extern "C" unsigned long _UNK_00670230;
extern "C" unsigned long _UNK_00670234;
extern "C" unsigned long _UNK_00670238;
extern "C" unsigned long _UNK_0067023c;
extern "C" unsigned long _UNK_00670250;
extern "C" unsigned long _UNK_006702f8;
extern "C" unsigned long _UNK_006702fc;
extern "C" unsigned long _UNK_00670300;
extern "C" unsigned long _UNK_00670304;
extern "C" unsigned long g_0066fed0;
extern "C" unsigned long g_0066fed4;
extern "C" unsigned long g_0066fee8;
extern "C" unsigned long g_0066feec;
extern "C" unsigned long g_0066ff00;
extern "C" unsigned long g_0066ff04;
extern "C" unsigned long g_0066ff30;
extern "C" unsigned long g_0066ff34;
extern "C" unsigned long g_0066ff48;
extern "C" unsigned long g_0066ff4c;
extern "C" unsigned long g_0066ffac;
extern "C" unsigned long g_0066ffd6;
extern "C" unsigned long g_00670014;
extern "C" unsigned long g_00670018;
extern "C" unsigned long g_00670028;
extern "C" unsigned long g_0067002c;
extern "C" unsigned long g_00670050;
extern "C" unsigned long g_00670054;
extern "C" unsigned long g_00670068;
extern "C" unsigned long g_00670078;
extern "C" unsigned long g_0067007c;
extern "C" unsigned long g_00670094;
extern "C" unsigned long g_00670098;
extern "C" unsigned long g_006700bc;
extern "C" unsigned long g_006700c0;
extern "C" unsigned long g_006700f2;
extern "C" unsigned long g_006701f8;
extern "C" unsigned long g_00670218;
extern "C" unsigned long g_0067021c;
extern "C" unsigned long g_00670220;
extern "C" unsigned long g_00670224;
extern "C" unsigned long g_00670228;
extern "C" unsigned long g_0067022c;
extern "C" unsigned long g_00670230;
extern "C" unsigned long g_00670234;
extern "C" unsigned long g_00670238;
extern "C" unsigned long g_0067023c;
extern "C" unsigned long g_0067024c;
extern "C" unsigned long g_00670250;
extern "C" unsigned long g_00670274;
extern "C" unsigned long g_00670292;
extern "C" unsigned long g_006702ba;
extern "C" unsigned long g_006702da;
extern "C" unsigned long g_006702f8;
extern "C" unsigned long g_006702fc;
extern "C" unsigned long g_00670300;
extern "C" unsigned long g_00670304;
int BLEquipPagePresenter::getPageIndex() const
{
  return *(undefined4 *)(((int)this) + 0x24);
}

void BLEquipPagePresenter::setPageIndex(int p1)
{
  *(undefined4 *)(((int)this) + 0x24) = p1;
  return;
}

bool BLEquipPagePresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLEquipPagePresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLEquipPagePresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLEquipPagePresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

undefined4 BLEquipPagePresenter::numOfColumn(BLGridView* p1)
{
  return 2;
}

undefined4 BLEquipPagePresenter::numOfRow(BLGridView* p1)
{
  return 3;
}

void BLEquipPagePresenter::tick(float p1)
{
  return;
}

void BLEquipPagePresenter::setRoleID(std::string p1)
{
  func_0079e52c(((int)this) + 0x28);
  return;
}

BLEquipPagePresenter::~BLEquipPagePresenter()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  iVar2 = *(int *)(&g_0066ffac + g_00670014);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x60;
  *(int *)((int)this + 4*(6)) = iVar2 + 0x90;
  *(int *)((int)this + 4*(7)) = iVar2 + 0xa0;
  piStack_20 = (int *)((int)this);
  uStack_1c = (undefined4)(p2);
  uStack_18 = (undefined4)(p3);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_1c,&g_0066ffd6 + g_00670018,&piStack_20);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_1c);
  func_0079e2bc(&uStack_1c);
  func_0079e2bc(((int)this) + 10);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

undefined4 BLEquipPagePresenter::sizeOfGridItem(BLGridView* p1)
{
  0 /* ctorZero */;
  return ((int)this);
}



std::string BLEquipPagePresenter::getRoleID() const
{ return *(std::string *)(((int)this) + 0x28); }

BLEquipPagePresenter::BLEquipPagePresenter()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;

  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int *piStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  piStack_20 = (int *)((int)this);
  uStack_1c = (undefined4)(p2);
  uStack_18 = (undefined4)(p3);
  0 /* ctorZero */;
  iVar4 = *(int *)(&g_00670274 + g_006702f8);
  *(int *)this = iVar4 + 8;
  *(int *)((int)this + 4*(5)) = iVar4 + 0x60;
  *(int *)((int)this + 4*(7)) = iVar4 + 0xa0;
  iVar1 = g_006702fc;
  *(int *)((int)this + 4*(6)) = iVar4 + 0x90;
  *(int *)((int)this + 4*(10)) = *(int *)(&g_00670292 + iVar1) + 0xc;
  piVar2 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar3 = (undefined4)((**(code **)(*piVar2 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar3)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 0);
  uVar3 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_1c,&g_006702ba + g_00670300,&piStack_20);
  ((BLLeakUtils *)uVar3)->addClass((std::string)(char*)uStack_1c);
  func_0079e2bc(&uStack_1c);
  iVar1 = g_00670304;
  *(int *)((int)this + 4*(9)) = 0;
  func_0079e2dc(((int)this) + 10,&g_006702da + iVar1);
  return;
}

undefined4 BLEquipPagePresenter::create(BLEquipPageView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x2c))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLEquipPagePresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  return;
}

void BLEquipPagePresenter::onEnter()
{
  return;
}

// ===== 修复: 补回被误删的函数占位 (3) =====
void BLEquipPagePresenter::nodeOfGridViewAtIndex(BLGridView* p1, cocos2d::CCNode* p2, int p3)
{
  int iVar1;
  undefined4 uVar2;
  
  if (((int)(intptr_t)p2 == 0) ||
     (iVar1 = func_0079e55c(p2,*(undefined4 *)((unsigned char *)((char *)&g_00670098 + (intptr_t)(g_006700c0))),
                              *(undefined4 *)((unsigned char *)((char *)&g_00670094 + (intptr_t)(g_006700bc))),0), iVar1 == 0)) {
    iVar1 = (undefined4)(intptr_t)(((BLEquipItemView *)this)->create());
  }
  uVar2 = (undefined4)(((BLEquipItemView *)iVar1)->getPresenter());
  ((BLEquipItemPresenter *)uVar2)->initWith(*(undefined4 *)(((int)this) + 0x24), p3);
  return;
}

void BLEquipPagePresenter::touchItemAtIndex(BLGridView* p1, cocos2d::CCNode* p2, int p3)
{
  code *pcVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  
  piVar2 = (int *)((DataManager *)this)->shareDataManager();
  iVar8 = (undefined4)(intptr_t)(g_00670218);
  piVar2 = (int *)(**(code **)(*(int *)(piVar2) + (0x28)))();
  uVar3 = (undefined4)((**(code **)(*(int *)(piVar2) + (0x68)))());
  piVar2 = (int *)((DataManager *)this)->shareDataManager();
  uVar4 = (undefined4)((**(code **)(*(int *)(piVar2) + (0x60)))());
  iVar5 = (undefined4)(intptr_t)(((cocos2d::CCArray *)(uVar3))->objectAtIndex((unsigned int)uVar4));
  if (iVar5 != 0) {
    uVar3 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_006700f2 + (intptr_t)(g_0067021c)) + iVar8));
    piVar2 = (int *)func_0079e55c(iVar5,uVar3,
                                    *(undefined4 *)((unsigned char *)((char *)&g_006700f2 + (intptr_t)(g_00670220)) + iVar8),0);
    if (piVar2 != (int *)0x0) {
      uVar4 = (undefined4)((**(code **)(*(int *)(piVar2) + (0x28)))());
      piVar6 = (int *)((DataManager *)this)->shareDataManager();
      iVar5 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar6) + (0x78)))());
      if (iVar5 == 3) {
        uVar4 = (undefined4)((**(code **)(*(int *)(piVar2) + (0x30)))(piVar2));
      }
      iVar5 = (undefined4)(intptr_t)(((cocos2d::CCArray *)(uVar4))->objectAtIndex((unsigned int)*(undefined4 *)(((int)this) + 0x24)));
      if ((iVar5 != 0) &&
         (uVar4 = *(undefined4 *)((unsigned char *)((char *)&g_006700f2 + (intptr_t)(g_00670224)) + iVar8),
         piVar2 = (int *)func_0079e55c(iVar5,uVar3,uVar4,0,uVar4), piVar2 != (int *)0x0)) {
        uVar4 = (undefined4)((**(code **)(*(int *)(piVar2) + (0x18)))());
        iVar5 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)(uVar4))->objectForKey(p3));
        if (iVar5 != 0) {
          uVar4 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_006700f2 + (intptr_t)(g_00670228)) + iVar8));
          iVar5 = (undefined4)(intptr_t)(func_0079e55c(iVar5,uVar3,uVar4,0,uVar4));
          if (iVar5 != 0) {
            uVar3 = (undefined4)(((UIManager *)this)->shareManager());
            iVar7 = (undefined4)((void)(((UIManager *)(uVar3))->getUIObject(0x1f)),(intptr_t)0);
            uVar9 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_006700f2 + (intptr_t)(g_0067022c)) + iVar8));
            uVar3 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_006700f2 + (intptr_t)(g_00670230)) + iVar8));
            if ((iVar7 == 0) || (iVar7 = func_0079e55c(iVar7,uVar9,uVar3,0,uVar4), iVar7 == 0)) {
              uVar4 = (undefined4)(((UIManager *)this)->shareManager());
              iVar7 = (undefined4)(intptr_t)(((UIManager *)(uVar4))->showUIById(0x1f));
              if (iVar7 == 0) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)software_udf(0xff,0x670212);
                (*pcVar1)();
              }
              iVar7 = (undefined4)(intptr_t)(func_0079e55c(iVar7,uVar9,uVar3,0));
            }
            if ((*(int *)(iVar7 + 0x24) != 0) &&
               (uVar3 = *(undefined4 *)((unsigned char *)((char *)&g_006700f2 + (intptr_t)(g_00670234)) + iVar8),
               uVar4 = *(undefined4 *)((unsigned char *)((char *)&g_006700f2 + (intptr_t)(g_00670238)) + iVar8),
               iVar8 = func_0079e55c(*(int *)(iVar7 + 0x24),uVar3,uVar4,0,uVar3,uVar4), iVar8 != 0
               )) {
              uVar3 = (undefined4)(((CocosDenshion::SimpleAudioEngine *)this)->sharedEngine());
              ((CocosDenshion::SimpleAudioEngine *)(uVar3))->playEffect((char const*)(unsigned char *)((char *)&g_006701f8 + (intptr_t)(g_0067023c)), 0);
              uVar3 = (undefined4)(0 /* ctorZero */);
              uVar4 = (undefined4)(((BLItemDataInfoView *)(iVar8))->getPresenter());
              ((BLItemDataInfoPresenter *)(uVar4))->initEquipData((CommonUseData*)uVar3);
            }
          }
        }
      }
    }
  }
  return;
}

void BLEquipPagePresenter::initWithView(BLEquipPageView* p1)
{
  undefined4 p4 = 0;

  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  code *pcVar4;
  
  *(undefined4 *)(((int)this) + 0x20) = (undefined4)(intptr_t)p1;
  uVar1 = (undefined4)(((BLEquipPageView *)p1)->getGridViewEquips());
  uVar2 = (undefined4)(cocos2d::CCNode::create());
  ((BLGridView *)uVar1)->setItemPartner((cocos2d::CCNode*)uVar2);
  piVar3 = (int *)((BLEquipPageView *)*(undefined4 *)(((int)this) + 0x20))->getGridViewEquips();
  pcVar4 = *(code **)(*piVar3 + 0x204);
  (*pcVar4)(piVar3,((int)this) + 0x18,*piVar3,pcVar4,p4);
  piVar3 = (int *)((BLEquipPageView *)*(undefined4 *)(((int)this) + 0x20))->getGridViewEquips();
  (**(code **)(*piVar3 + 0x1fc))(piVar3,((int)this) + 0x1c);
  uVar1 = (undefined4)(((BLEquipPageView *)*(undefined4 *)(((int)this) + 0x20))->getGridViewEquips());
  ((BLGridView *)uVar1)->reloadData(0, 1);
  return;
}
