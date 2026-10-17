#include "BLRebirthChestPresenter.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "CCObject.h"
#include "CCTouch.h"
#include "CCDirector.h"
#include "BackPackItemData.h"
#include "BLChestItemInfoPresenter.h"
#include "BLChestItemInfoView.h"
#include "BLLeakUtils.h"
#include "BLRebirthChestView.h"
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
extern "C" long long func_0079e5bc(...);
extern "C" long long func_0079e68c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_005183e8;
extern "C" unsigned long UNK_00518400;
extern "C" unsigned long UNK_00518418;
extern "C" unsigned long UNK_0051848c;
extern "C" unsigned long UNK_005184a6;
extern "C" unsigned long UNK_005184ec;
extern "C" unsigned long UNK_00518514;
extern "C" unsigned long UNK_0051853e;
extern "C" unsigned long UNK_005186a6;
extern "C" unsigned long UNK_005186dc;
extern "C" unsigned long UNK_00518778;
extern "C" unsigned long UNK_00518796;
extern "C" unsigned long UNK_005187fc;
extern "C" unsigned long _UNK_005183ec;
extern "C" unsigned long _UNK_00518404;
extern "C" unsigned long _UNK_0051841c;
extern "C" unsigned long _UNK_005184d8;
extern "C" unsigned long _UNK_005184dc;
extern "C" unsigned long _UNK_005184f0;
extern "C" unsigned long _UNK_00518518;
extern "C" unsigned long _UNK_00518680;
extern "C" unsigned long _UNK_00518684;
extern "C" unsigned long _UNK_00518688;
extern "C" unsigned long _UNK_0051868c;
extern "C" unsigned long _UNK_00518690;
extern "C" unsigned long _UNK_00518694;
extern "C" unsigned long _UNK_00518708;
extern "C" unsigned long _UNK_0051870c;
extern "C" unsigned long _UNK_0051882c;
extern "C" unsigned long _UNK_00518830;
extern "C" unsigned long _UNK_00518834;
extern "C" unsigned long _UNK_00518838;
extern "C" unsigned long g_005183e8;
extern "C" unsigned long g_005183ec;
extern "C" unsigned long g_00518400;
extern "C" unsigned long g_00518404;
extern "C" unsigned long g_00518418;
extern "C" unsigned long g_0051841c;
extern "C" unsigned long g_0051848c;
extern "C" unsigned long g_005184a6;
extern "C" unsigned long g_005184d8;
extern "C" unsigned long g_005184dc;
extern "C" unsigned long g_005184ec;
extern "C" unsigned long g_005184f0;
extern "C" unsigned long g_00518514;
extern "C" unsigned long g_00518518;
extern "C" unsigned long g_0051853e;
extern "C" unsigned long g_00518680;
extern "C" unsigned long g_00518684;
extern "C" unsigned long g_00518688;
extern "C" unsigned long g_0051868c;
extern "C" unsigned long g_00518690;
extern "C" unsigned long g_00518694;
extern "C" unsigned long g_005186a6;
extern "C" unsigned long g_005186dc;
extern "C" unsigned long g_00518708;
extern "C" unsigned long g_0051870c;
extern "C" unsigned long g_00518778;
extern "C" unsigned long g_00518796;
extern "C" unsigned long g_005187fc;
extern "C" unsigned long g_0051882c;
extern "C" unsigned long g_00518830;
extern "C" unsigned long g_00518834;
extern "C" unsigned long g_00518838;
int BLRebirthChestPresenter::getChesttId() const
{
  return *(undefined4 *)(((int)this) + 0x1c);
}

void BLRebirthChestPresenter::setChesttId(int p1)
{
  *(undefined4 *)(((int)this) + 0x1c) = p1;
  return;
}

bool BLRebirthChestPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLRebirthChestPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLRebirthChestPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLRebirthChestPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLRebirthChestPresenter::tick(float p1)
{
  return;
}

BLRebirthChestPresenter::~BLRebirthChestPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0051848c + g_005184d8);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x44;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005184a6 + g_005184dc,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLRebirthChestPresenter::onClose(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(0x21);
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(0x40);
  return;
}



undefined4 BLRebirthChestPresenter::create(BLRebirthChestView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x20))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLRebirthChestPresenter::onExit()
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

void BLRebirthChestPresenter::onEnter()
{
  return;
}

void BLRebirthChestPresenter::initWithView(BLRebirthChestView* p1)
{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_2c [4];
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  *(undefined4 *)(((int)this) + 0x18) = (undefined4)(intptr_t)p1;
  piVar1 = (int *)((BLRebirthChestView *)p1)->getBtnClose();
  uStack_24 = (undefined4)(0);
  uStack_28 = (undefined4)(*(undefined4 *)(&g_00518778 + g_0051882c));
  (**(code **)(*piVar1 + 0x254))(piVar1,((int)this),uStack_28,0,0x20);
  piVar1 = (int *)((BLRebirthChestView *)*(undefined4 *)(((int)this) + 0x18))->getBtnClose();
  pcVar3 = *(code **)(*piVar1 + 0x26c);
  func_0079e45c(&uStack_20,&g_00518796 + g_00518830,auStack_2c);
  (*pcVar3)(piVar1,&uStack_20);
  func_0079e2bc(&uStack_20);
  piVar1 = (int *)((BLRebirthChestView *)*(undefined4 *)(((int)this) + 0x18))->getBtnsItem();
  uVar4 = (undefined4)(piVar1[1] - *piVar1 >> 2);
  iVar2 = 0;
  if (uVar4 != 0) {
    if (g_00518834 < uVar4) {
      func_0079e5bc();
    }
    iVar2 = func_0079e2fc();
  }
  iVar6 = piVar1[1] - *piVar1 >> 2;
  if (iVar6 != 0) {
    func_0079e68c(iVar2);
  }
  for (iVar5 = 0; iVar5 != iVar6; iVar5 = iVar5 + 1) {
    piVar1 = *(int **)(iVar2 + iVar5 * 4);
    uStack_20 = (undefined4)(*(undefined4 *)(&g_005187fc + g_00518838));
    uStack_1c = (undefined4)(0);
    (**(code **)(*piVar1 + 0x254))(piVar1,((int)this),uStack_20,0,0x20);
  }
  if (iVar2 != 0) {
    (void)(::operator delete((void *)(iVar2)));
  }
  return;
}

// ===== 修复: 补回被误删的函数占位 (2) =====
void BLRebirthChestPresenter::onTouchItem(cocos2d::CCObject* p1, unsigned int p2)
{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  code *pcVar10;
  
  iVar1 = (undefined4)(intptr_t)(g_00518680);
  if ((int)(intptr_t)(int)(intptr_t)p1 != 0) {
    uVar8 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_0051853e + (intptr_t)(g_00518688)) + g_00518680));
    piVar2 = (int *)func_0079e55c(p1,*(undefined4 *)
                                             ((unsigned char *)((char *)&g_0051853e + (intptr_t)(g_00518684)) + g_00518680),uVar8,0
                                   );
    piVar3 = (int *)(**(code **)(*(int *)(piVar2) + (0x120)))();
    if (piVar3 != (int *)0x0) {
      uVar4 = (undefined4)(((UIManager *)this)->shareManager());
      iVar5 = (undefined4)((void)(((UIManager *)(uVar4))->getUIObject(0x21)),(intptr_t)0);
      if ((iVar5 == 0) ||
         (uVar4 = *(undefined4 *)((unsigned char *)((char *)&g_0051853e + (intptr_t)(g_0051868c)) + iVar1),
         uVar9 = *(undefined4 *)((unsigned char *)((char *)&g_0051853e + (intptr_t)(g_00518690)) + iVar1),
         iVar5 = func_0079e55c(iVar5,uVar4,uVar9,0,uVar4,uVar9), iVar5 == 0)) {
        uVar4 = (undefined4)(((UIManager *)this)->shareManager());
        iVar6 = (undefined4)(intptr_t)(((UIManager *)(uVar4))->showUIById(0x21));
        iVar5 = 0;
        if (iVar6 != 0) {
          uVar4 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_0051853e + (intptr_t)(g_0051868c)) + iVar1));
          uVar9 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_0051853e + (intptr_t)(g_00518690)) + iVar1));
          iVar5 = (undefined4)(intptr_t)(func_0079e55c(iVar6,uVar4,uVar9,0,uVar4,uVar9));
        }
      }
      piVar7 = (int *)::operator new(0x30);
      ::new ((void *)piVar7) BackPackItemData();   /* ALLOC+CTOR_FIX(R123): 类名由 llvm-cxxfilt 反修饰 + (函数,尺寸) 对齐 取得 */
      pcVar10 = *(code **)(*piVar7 + 0x24);
      uVar4 = (undefined4)((**(code **)(*(int *)(piVar3) + (0x18)))(piVar3));
      (*pcVar10)(piVar7,uVar4);
      pcVar10 = *(code **)(*piVar7 + 0x2c);
      uVar4 = (undefined4)((**(code **)(*(int *)(piVar2) + (0x118)))(piVar2));
      (*pcVar10)(piVar7,uVar4);
      if ((*(int *)(iVar5 + 0x24) != 0) &&
         (uVar4 = *(undefined4 *)((unsigned char *)((char *)&g_0051853e + (intptr_t)(g_00518694)) + iVar1),
         piVar2 = (int *)func_0079e55c(*(int *)(iVar5 + 0x24),uVar8,uVar4,0,uVar4),
         piVar2 != (int *)0x0)) {
        (**(code **)(*(int *)(piVar2) + (0x11c)))(piVar2,*(undefined4 *)(((int)this) + 0x1c));
        uVar8 = (undefined4)(((BLChestItemInfoView *)(piVar2))->getPresenter());
        ((BLChestItemInfoPresenter *)(uVar8))->initPackItemData((BackPackItemData*)piVar7);
        piVar3 = (int *)((BLChestItemInfoView *)(piVar2))->DebrisItemInfoDown();
        (**(code **)(*(int *)(piVar3) + (0x90)))(piVar3,0);
        piVar3 = (int *)((BLChestItemInfoView *)(piVar2))->ItemInfoDown();
        (**(code **)(*(int *)(piVar3) + (0x90)))(piVar3,0);
        piVar3 = (int *)((BLChestItemInfoView *)(piVar2))->OtherItemInfoDown();
        (**(code **)(*(int *)(piVar3) + (0x90)))(piVar3,0);
        piVar2 = (int *)((BLChestItemInfoView *)(piVar2))->getBtnObtain();
        (**(code **)(*(int *)(piVar2) + (0x90)))(piVar2,1);
      }
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar10 = (code *)software_udf(0xff,0x51867a);
  (*pcVar10)();
}

BLRebirthChestPresenter::BLRebirthChestPresenter()
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
  iVar3 = (undefined4)(intptr_t)(*(int *)((unsigned char *)((char *)&g_005186a6 + (intptr_t)(g_00518708))));
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x44;
  ((UIManager *)this)->shareManager();
  ((UIManager *)this)->pushCurScrollViewUnEnable();
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 1);
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,(unsigned char *)((char *)&g_005186dc + (intptr_t)(g_0051870c)),&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}
