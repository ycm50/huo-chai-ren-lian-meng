#include "BLSuitPresenter.h"
#include "CCNotificationCenter.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "CCArray.h"
#include "CCObject.h"
#include "CCNode.h"
#include "CCTouch.h"
#include "CCDirector.h"
#include "BLListButton.h"
#include "BLSuitView.h"
#include "BLLeakUtils.h"
#include "BLSuitListPresenter.h"
#include "BLSuitListView.h"
#include "BLSuitRoleInfoPresenter.h"
#include "BLSuitRoleInfoView.h"
#include "BLSuitRoleItemPresenter.h"
#include "BLSuitRoleItemView.h"
#include "BLSuitUpGracePresenter.h"
#include "BLTableView.h"
#include "DataManager.h"
#include "UIManager.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <new>   // ghost_fix.js 自动补齐
#include "BLSuitUpGraceView.h"
#include "BLSuitComposeView.h"
using namespace cocos2d;
// 兜底声明
extern "C" long long software_udf(...);

extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long func_0079e55c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0068dd3c;
extern "C" unsigned long UNK_0068dd54;
extern "C" unsigned long UNK_0068dd6c;
extern "C" unsigned long UNK_0068dd84;
extern "C" unsigned long UNK_0068dde8;
extern "C" unsigned long UNK_0068de14;
extern "C" unsigned long UNK_0068de58;
extern "C" unsigned long UNK_0068de80;
extern "C" unsigned long UNK_0068deac;
extern "C" unsigned long UNK_0068ded8;
extern "C" unsigned long UNK_0068def2;
extern "C" unsigned long UNK_0068def6;
extern "C" unsigned long UNK_0068df2c;
extern "C" unsigned long UNK_0068df2e;
extern "C" unsigned long UNK_0068dfec;
extern "C" unsigned long UNK_0068e162;
extern "C" unsigned long UNK_0068e36c;
extern "C" unsigned long UNK_0068e3aa;
extern "C" unsigned long UNK_0068e3f2;
extern "C" unsigned long UNK_0068e480;
extern "C" unsigned long UNK_0068e516;
extern "C" unsigned long UNK_0068e5da;
extern "C" unsigned long UNK_0068e5fa;
extern "C" unsigned long UNK_0068e61c;
extern "C" unsigned long UNK_0068e6b2;
extern "C" unsigned long UNK_0068e6b4;
extern "C" unsigned long UNK_0068e6d4;
extern "C" unsigned long UNK_0068e748;
extern "C" unsigned long _UNK_0068dd40;
extern "C" unsigned long _UNK_0068dd58;
extern "C" unsigned long _UNK_0068dd70;
extern "C" unsigned long _UNK_0068dd88;
extern "C" unsigned long _UNK_0068de44;
extern "C" unsigned long _UNK_0068de48;
extern "C" unsigned long _UNK_0068de5c;
extern "C" unsigned long _UNK_0068de84;
extern "C" unsigned long _UNK_0068deb0;
extern "C" unsigned long _UNK_0068dec4;
extern "C" unsigned long _UNK_0068dec8;
extern "C" unsigned long _UNK_0068dedc;
extern "C" unsigned long _UNK_0068df74;
extern "C" unsigned long _UNK_0068df78;
extern "C" unsigned long _UNK_0068df7c;
extern "C" unsigned long _UNK_0068df80;
extern "C" unsigned long _UNK_0068e334;
extern "C" unsigned long _UNK_0068e338;
extern "C" unsigned long _UNK_0068e33c;
extern "C" unsigned long _UNK_0068e340;
extern "C" unsigned long _UNK_0068e344;
extern "C" unsigned long _UNK_0068e348;
extern "C" unsigned long _UNK_0068e34c;
extern "C" unsigned long _UNK_0068e350;
extern "C" unsigned long _UNK_0068e354;
extern "C" unsigned long _UNK_0068e358;
extern "C" unsigned long _UNK_0068e35c;
extern "C" unsigned long _UNK_0068e370;
extern "C" unsigned long _UNK_0068e428;
extern "C" unsigned long _UNK_0068e42c;
extern "C" unsigned long _UNK_0068e55c;
extern "C" unsigned long _UNK_0068e560;
extern "C" unsigned long _UNK_0068e564;
extern "C" unsigned long _UNK_0068e568;
extern "C" unsigned long _UNK_0068e56c;
extern "C" unsigned long _UNK_0068e570;
extern "C" unsigned long _UNK_0068e574;
extern "C" unsigned long _UNK_0068e668;
extern "C" unsigned long _UNK_0068e66c;
extern "C" unsigned long _UNK_0068e670;
extern "C" unsigned long _UNK_0068e6dc;
extern "C" unsigned long _UNK_0068e6e0;
extern "C" unsigned long _UNK_0068e6e4;
extern "C" unsigned long _UNK_0068e74c;
extern "C" unsigned long g_0068dd3c;
extern "C" unsigned long g_0068dd40;
extern "C" unsigned long g_0068dd54;
extern "C" unsigned long g_0068dd58;
extern "C" unsigned long g_0068dd6c;
extern "C" unsigned long g_0068dd70;
extern "C" unsigned long g_0068dd84;
extern "C" unsigned long g_0068dd88;
extern "C" unsigned long g_0068dde8;
extern "C" unsigned long g_0068de14;
extern "C" unsigned long g_0068de44;
extern "C" unsigned long g_0068de48;
extern "C" unsigned long g_0068de58;
extern "C" unsigned long g_0068de5c;
extern "C" unsigned long g_0068de80;
extern "C" unsigned long g_0068de84;
extern "C" unsigned long g_0068deac;
extern "C" unsigned long g_0068deb0;
extern "C" unsigned long g_0068dec4;
extern "C" unsigned long g_0068dec8;
extern "C" unsigned long g_0068ded8;
extern "C" unsigned long g_0068dedc;
extern "C" unsigned long g_0068def2;
extern "C" unsigned long g_0068def6;
extern "C" unsigned long g_0068df2c;
extern "C" unsigned long g_0068df2e;
extern "C" unsigned long g_0068df74;
extern "C" unsigned long g_0068df78;
extern "C" unsigned long g_0068df7c;
extern "C" unsigned long g_0068df80;
extern "C" unsigned long g_0068dfec;
extern "C" unsigned long g_0068e162;
extern "C" unsigned long g_0068e334;
extern "C" unsigned long g_0068e338;
extern "C" unsigned long g_0068e33c;
extern "C" unsigned long g_0068e340;
extern "C" unsigned long g_0068e344;
extern "C" unsigned long g_0068e348;
extern "C" unsigned long g_0068e34c;
extern "C" unsigned long g_0068e350;
extern "C" unsigned long g_0068e354;
extern "C" unsigned long g_0068e358;
extern "C" unsigned long g_0068e35c;
extern "C" unsigned long g_0068e36c;
extern "C" unsigned long g_0068e370;
extern "C" unsigned long g_0068e3aa;
extern "C" unsigned long g_0068e3f2;
extern "C" unsigned long g_0068e428;
extern "C" unsigned long g_0068e42c;
extern "C" unsigned long g_0068e480;
extern "C" unsigned long g_0068e516;
extern "C" unsigned long g_0068e55c;
extern "C" unsigned long g_0068e560;
extern "C" unsigned long g_0068e564;
extern "C" unsigned long g_0068e568;
extern "C" unsigned long g_0068e56c;
extern "C" unsigned long g_0068e570;
extern "C" unsigned long g_0068e574;
extern "C" unsigned long g_0068e5da;
extern "C" unsigned long g_0068e5fa;
extern "C" unsigned long g_0068e61c;
extern "C" unsigned long g_0068e668;
extern "C" unsigned long g_0068e66c;
extern "C" unsigned long g_0068e670;
extern "C" unsigned long g_0068e6b2;
extern "C" unsigned long g_0068e6b4;
extern "C" unsigned long g_0068e6d4;
extern "C" unsigned long g_0068e6dc;
extern "C" unsigned long g_0068e6e0;
extern "C" unsigned long g_0068e6e4;
extern "C" unsigned long g_0068e748;
extern "C" unsigned long g_0068e74c;
bool BLSuitPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLSuitPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLSuitPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLSuitPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

int BLSuitPresenter::getCurrentIndex() const
{
  return *(undefined4 *)(((int)this) + 0x28);
}

void BLSuitPresenter::setCurrentIndex(int p1)
{
  *(undefined4 *)(((int)this) + 0x28) = p1;
  return;
}

void BLSuitPresenter::tick(float p1)
{
  return;
}

BLSuitPresenter::~BLSuitPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0068dde8 + g_0068de44);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x58;
  *(int *)((int)this + 4*(6)) = iVar2 + 0x88;
  *(int *)((int)this + 4*(7)) = iVar2 + 0x98;
  *(int *)((int)this + 4*(8)) = iVar2 + 0xac;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0068de14 + g_0068de48,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLSuitPresenter::numOfCellItem(BLTableView* p1)
{
  int *piVar1;
  
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  piVar1 = (int *)(**(code **)(*piVar1 + 0x28))();
  (**(code **)(*piVar1 + 0x68))();
  ((cocos2d::CCArray *)this)->count();
  return;
}

undefined4 BLSuitPresenter::sizeOfCellItem(BLTableView* p1)
{
  0 /* ctorZero */;
  return ((int)this);
}





BLSuitPresenter::BLSuitPresenter()
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
  iVar3 = *(int *)(&g_0068e3aa + g_0068e428);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x58;
  *(int *)((int)this + 4*(6)) = iVar3 + 0x88;
  *(int *)((int)this + 4*(7)) = iVar3 + 0x98;
  *(int *)((int)this + 4*(8)) = iVar3 + 0xac;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 1);
  ((UIManager *)this)->shareManager();
  ((UIManager *)this)->pushCurScrollViewUnEnable();
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0068e3f2 + g_0068e42c,&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  *(int *)((int)this + 4*(10)) = -1;
  *(int *)((int)this + 4*(0xb)) = 0;
  return;
}

undefined4 BLSuitPresenter::create(BLSuitView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x30))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLSuitPresenter::onExit()
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

void BLSuitPresenter::onEnter()
{
  return;
}





void BLSuitPresenter::updateUpGraceData()
{
  return;
}

// ===== 修复: 补回被误删的函数占位 (8) =====
void BLSuitPresenter::nodeOfCellItemAtIndex(BLTableView* p1, cocos2d::CCNode* p2, int p3)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLSuitPresenter::onClose(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  iVar2 = (undefined4)((void)(((UIManager *)(uVar1))->getUIObject(0x1f)),(intptr_t)0);
  if (iVar2 != 0) {
    uVar1 = (undefined4)(((UIManager *)this)->shareManager());
    ((UIManager *)(uVar1))->removeUIByID(0x1f);
  }
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  iVar2 = (undefined4)((void)(((UIManager *)(uVar1))->getUIObject(0x20)),(intptr_t)0);
  if (iVar2 != 0) {
    uVar1 = (undefined4)(((UIManager *)this)->shareManager());
    ((UIManager *)(uVar1))->removeUIByID(0x20);
  }
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)(uVar1))->removeUIByID(0xbf);
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)(uVar1))->removeUIByID(0x1f);
  return;
}

void BLSuitPresenter::listButtonClickAtIndex(BLListButton* p1, int p2)
{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  code *pcVar7;
  int iVar8;
  undefined4 auStack_30 [2];
  undefined1 auStack_28 [4];
  undefined4 uStack_24;
  undefined1 auStack_20 [12];
  
  iVar4 = (undefined4)(intptr_t)(g_0068e334);
  if (*(int *)(((int)this) + 0x2c) != p2) {
    uVar1 = (undefined4)(((UIManager *)this)->shareManager());
    iVar2 = (undefined4)((void)(((UIManager *)(uVar1))->getUIObject(0x1f)),(intptr_t)0);
    if (iVar2 != 0) {
      uVar1 = (undefined4)(((UIManager *)this)->shareManager());
      ((UIManager *)(uVar1))->removeUIByID(0x1f);
    }
    uVar1 = (undefined4)(((UIManager *)this)->shareManager());
    iVar2 = (undefined4)((void)(((UIManager *)(uVar1))->getUIObject(0x20)),(intptr_t)0);
    if (iVar2 != 0) {
      uVar1 = (undefined4)(((UIManager *)this)->shareManager());
      ((UIManager *)(uVar1))->removeUIByID(0x20);
    }
    *(int *)(((int)this) + 0x2c) = p2;
    piVar3 = *(int **)(*(int *)(((int)this) + 0x24) + 0x118);
    (**(code **)(*(int *)(piVar3) + (0x104)))(piVar3,1);
    if (p2 == 0) {
      piVar3 = (int *)((BLSuitRoleInfoView *)this)->create();
      (**(code **)(*(int *)(piVar3) + (0x11c)))(piVar3,1);
      piVar6 = *(int **)(*(int *)(((int)this) + 0x24) + 0x118);
      (**(code **)(*(int *)(piVar6) + (200)))(piVar6,piVar3);
      piVar3 = (int *)((BLSuitListView *)this)->create();
      (**(code **)(*(int *)(piVar3) + (0x11c)))(piVar3,2);
      pcVar7 = *(code **)(*piVar3 + 0x4c);
      0 /* ctorZero */;
      cocos2d::CCDirector::sharedDirector();
      uVar1 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
      uVar1 = (undefined4)(func_0079e4dc(auStack_30[0],uVar1));
      0 /* ctorZero */;
      cocos2d::CCDirector::sharedDirector();
      uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
      uVar5 = (undefined4)(func_0079e4dc(uStack_24,uVar5));
      0 /* ctorZero */;
      (*pcVar7)(piVar3,auStack_20);
      piVar6 = *(int **)(*(int *)(((int)this) + 0x24) + 0x118);
      (**(code **)(*(int *)(piVar6) + (200)))(piVar6,piVar3);
      piVar6 = (int *)((DataManager *)this)->shareDataManager();
      (**(code **)(*(int *)(piVar6) + (0x6c)))(piVar6,*(undefined4 *)(((int)this) + 0x28));
      piVar6 = *(int **)(*(int *)(((int)this) + 0x24) + 0x118);
      iVar2 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar6) + (0xd4)))(piVar6,1));
      if (iVar2 == 0) {
code_r0x0068e32e:
                    /* WARNING: Does not return */
        pcVar7 = (code *)software_udf(0xff,0x68e32e);
        (*pcVar7)();
      }
      iVar2 = func_0079e55c(iVar2,*(undefined4 *)((unsigned char *)((char *)&g_0068dfec + (intptr_t)(g_0068e340)) + iVar4),
                              *(undefined4 *)((unsigned char *)((char *)&g_0068dfec + (intptr_t)(g_0068e344)) + iVar4),0);
      ((BLSuitRoleInfoPresenter *)(*(undefined4 *)(iVar2 + 0x108)))->initWithIndex(*(undefined4 *)(((int)this) + 0x28));
      piVar6 = (int *)((DataManager *)this)->shareDataManager();
      piVar6 = (int *)(**(code **)(*(int *)(piVar6) + (0x28)))();
      uVar1 = (undefined4)((**(code **)(*(int *)(piVar6) + (0x68)))());
      iVar2 = (undefined4)(intptr_t)(((cocos2d::CCArray *)(uVar1))->objectAtIndex((unsigned int)*(undefined4 *)(((int)this) + 0x28)));
      if ((iVar2 != 0) &&
         (piVar6 = (int *)func_0079e55c(iVar2,*(undefined4 *)
                                                 ((unsigned char *)((char *)&g_0068dfec + (intptr_t)(g_0068e348)) + iVar4),
                                          *(undefined4 *)((unsigned char *)((char *)&g_0068dfec + (intptr_t)(g_0068e34c)) + iVar4),0),
         piVar6 != (int *)0x0)) {
        uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
        uVar5 = (undefined4)((**(code **)(*(int *)(piVar6) + (0x18)))(piVar6));
        ((cocos2d::CCNotificationCenter *)(uVar1))->postNotification((char const*)(unsigned char *)((char *)&g_0068e162 + (intptr_t)(g_0068e350)), (cocos2d::CCObject*)uVar5);
      }
      ((BLSuitListPresenter *)(piVar3[0x42]))->initPageIndex();
    }
    else if (p2 == 1) {
      piVar3 = (int *)::operator new(0x11c);
      ::new ((void *)piVar3) BLSuitUpGraceView();   /* ALLOC+CTOR_FIX(R123): 类名由 llvm-cxxfilt 反修饰 + (函数,尺寸) 对齐 取得 */
      iVar2 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar3) + (0x18)))(piVar3));
      if (iVar2 == 0) {
        (**(code **)(*(int *)(piVar3) + (8)))(piVar3);
        goto code_r0x0068e32e;
      }
      ((cocos2d::CCObject *)(piVar3))->autorelease();
      (**(code **)(*(int *)(piVar3) + (0x11c)))(piVar3,1);
      pcVar7 = *(code **)(*piVar3 + 0x4c);
      0 /* ctorZero */;
      cocos2d::CCDirector::sharedDirector();
      uVar1 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
      uVar1 = (undefined4)(func_0079e4dc(auStack_30[0],uVar1));
      0 /* ctorZero */;
      cocos2d::CCDirector::sharedDirector();
      uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
      uVar5 = (undefined4)(func_0079e4dc(uStack_24,uVar5));
      0 /* ctorZero */;
      (*pcVar7)(piVar3,auStack_20);
      piVar6 = *(int **)(*(int *)(((int)this) + 0x24) + 0x118);
      (**(code **)(*(int *)(piVar6) + (200)))(piVar6,piVar3);
      iVar8 = (undefined4)(intptr_t)(piVar3[0x42]);
      piVar3 = (int *)((DataManager *)this)->shareDataManager();
      piVar3 = (int *)(**(code **)(*(int *)(piVar3) + (0x28)))();
      uVar1 = (undefined4)((**(code **)(*(int *)(piVar3) + (0x68)))());
      iVar2 = (undefined4)(intptr_t)(((cocos2d::CCArray *)(uVar1))->objectAtIndex((unsigned int)*(undefined4 *)(((int)this) + 0x28)));
      piVar3 = (int *)0x0;
      if (iVar2 != 0) {
        piVar3 = (int *)func_0079e55c(iVar2,*(undefined4 *)((unsigned char *)((char *)&g_0068dfec + (intptr_t)(g_0068e348)) + iVar4)
                                        ,*(undefined4 *)((unsigned char *)((char *)&g_0068dfec + (intptr_t)(g_0068e34c)) + iVar4),0);
      }
      piVar3 = (int *)(**(code **)(*(int *)(piVar3) + (0x18)))();
      (**(code **)(*(int *)(piVar3) + (0x18)))(auStack_20,piVar3);
      ((BLSuitUpGracePresenter *)(iVar8))->initWithRoleId((std::string)(char*)auStack_20);
      func_0079e2bc(auStack_20);
    }
    else if (p2 == 2) {
      piVar3 = (int *)::operator new(0x114);
      ::new ((void *)piVar3) BLSuitComposeView();   /* ALLOC+CTOR_FIX(R123): 类名由 llvm-cxxfilt 反修饰 + (函数,尺寸) 对齐 取得 */
      iVar4 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar3) + (0x18)))(piVar3));
      if (iVar4 == 0) {
        (**(code **)(*(int *)(piVar3) + (8)))(piVar3);
        goto code_r0x0068e32e;
      }
      ((cocos2d::CCObject *)(piVar3))->autorelease();
      (**(code **)(*(int *)(piVar3) + (0x11c)))(piVar3,1);
      pcVar7 = *(code **)(*piVar3 + 0x4c);
      0 /* ctorZero */;
      cocos2d::CCDirector::sharedDirector();
      uVar1 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
      uVar1 = (undefined4)(func_0079e4dc(auStack_30[0],uVar1));
      0 /* ctorZero */;
      cocos2d::CCDirector::sharedDirector();
      uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
      uVar5 = (undefined4)(func_0079e4dc(uStack_24,uVar5));
      0 /* ctorZero */;
      (*pcVar7)(piVar3,auStack_20);
      piVar6 = *(int **)(*(int *)(((int)this) + 0x24) + 0x118);
      (**(code **)(*(int *)(piVar6) + (200)))(piVar6,piVar3);
    }
  }
  return;
}

void BLSuitPresenter::onAbout(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  iVar2 = (undefined4)((void)(((UIManager *)(uVar1))->getUIObject(0x20)),(intptr_t)0);
  if (iVar2 != 0) {
    uVar1 = (undefined4)(((UIManager *)this)->shareManager());
    ((UIManager *)(uVar1))->removeUIByID(0x20);
  }
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)(uVar1))->showUIById(0xb6);
  return;
}

void BLSuitPresenter::updateRoleDataAtIndex(int p1)
{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  
  iVar6 = (undefined4)(intptr_t)(g_0068e55c);
  if (*(int *)(((int)this) + 0x28) != p1) {
    *(int *)(((int)this) + 0x28) = p1;
    piVar2 = (int *)((DataManager *)this)->shareDataManager();
    (**(code **)(*(int *)(piVar2) + (0x6c)))(piVar2,*(undefined4 *)(((int)this) + 0x28));
    piVar2 = *(int **)(*(int *)(((int)this) + 0x24) + 0x118);
    iVar3 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar2) + (0xd4)))(piVar2,1));
    if (iVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x68e556);
      (*pcVar1)();
    }
    uVar7 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_0068e480 + (intptr_t)(g_0068e560)) + iVar6));
    iVar3 = (undefined4)(intptr_t)(func_0079e55c(iVar3,uVar7,*(undefined4 *)((unsigned char *)((char *)&g_0068e480 + (intptr_t)(g_0068e564)) + iVar6),0));
    ((BLSuitRoleInfoPresenter *)*(undefined4 *)(iVar3 + 0x108))->initWithIndex(p1);
    piVar2 = (int *)((DataManager *)this)->shareDataManager();
    piVar2 = (int *)(**(code **)(*(int *)(piVar2) + (0x28)))();
    uVar4 = (undefined4)((**(code **)(*(int *)(piVar2) + (0x68)))());
    iVar3 = (undefined4)(intptr_t)(((cocos2d::CCArray *)uVar4)->objectAtIndex((unsigned int)p1));
    if (iVar3 != 0) {
      piVar2 = (int *)func_0079e55c(iVar3,*(undefined4 *)((unsigned char *)((char *)&g_0068e480 + (intptr_t)(g_0068e568)) + iVar6),
                                      *(undefined4 *)((unsigned char *)((char *)&g_0068e480 + (intptr_t)(g_0068e56c)) + iVar6),0);
      if (piVar2 != (int *)0x0) {
        uVar4 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
        uVar5 = (undefined4)((**(code **)(*(int *)(piVar2) + (0x18)))(piVar2));
        ((cocos2d::CCNotificationCenter *)uVar4)->postNotification((char const*)(unsigned char *)((char *)&g_0068e516 + (intptr_t)(g_0068e570)), (cocos2d::CCObject*)uVar5);
      }
    }
    if ((*(int *)(((int)this) + 0x2c) == 0) &&
       (piVar2 = *(int **)(*(int *)(((int)this) + 0x24) + 0x118),
       iVar3 = (**(code **)(*(int *)(piVar2) + (0xd4)))(piVar2,2), iVar3 != 0)) {
      iVar6 = (undefined4)(intptr_t)(func_0079e55c(iVar3,uVar7,*(undefined4 *)((unsigned char *)((char *)&g_0068e480 + (intptr_t)(g_0068e574)) + iVar6),0));
      if (iVar6 != 0) {
        ((BLSuitListPresenter *)*(undefined4 *)(iVar6 + 0x108))->initPageIndex();
      }
    }
  }
  return;
}

undefined4 BLSuitPresenter::initWithView(BLSuitView* p1)
{
  int *piVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [4];
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  *(int *)(((int)this) + 0x24) = (undefined4)(intptr_t)p1;
  (**(code **)(**(int **)(p1 + 0x110) + 0x22c))(*(int **)(p1 + 0x110),1);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x24) + 0x110);
  (**(code **)(*piVar1 + 0x21c))(piVar1,((int)this) + 0x18);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x24) + 0x110);
  (**(code **)(*piVar1 + 0x214))(piVar1,((int)this) + 0x1c);
  ((BLTableView *)*(undefined4 *)(*(int *)(((int)this) + 0x24) + 0x110))->reloadData(0, 0);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x24) + 0x108);
  uStack_28 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_0068e5da + (intptr_t)(g_0068e668))));
  uStack_24 = (undefined4)(0);
  (**(code **)(*piVar1 + 0x254))(piVar1,((int)this),uStack_28,0,0x20);
  uStack_1c = (undefined4)(0);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x24) + 0x11c);
  uStack_20 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_0068e5fa + (intptr_t)(g_0068e66c))));
  (**(code **)(*piVar1 + 0x254))(piVar1,((int)this),uStack_20,0,0x20);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x24) + 0x11c);
  pcVar3 = *(code **)(*piVar1 + 0x26c);
  func_0079e45c(auStack_2c,(unsigned char *)((char *)&g_0068e61c + (intptr_t)(g_0068e670)),auStack_30);
  (*pcVar3)(piVar1,auStack_2c);
  func_0079e2bc(auStack_2c);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x24) + 0x114);
  (**(code **)(*piVar1 + 0x24c))(piVar1,((int)this) + 0x20);
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x68))());
  BLSuitPresenter::updateRoleDataAtIndex(uVar2);
  return 1;
}

void BLSuitPresenter::updateRoleDataUpGrace(int p1)
{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (*(int *)(((int)this) + 0x28) != p1) {
    *(int *)(((int)this) + 0x28) = p1;
    piVar1 = (int *)((DataManager *)this)->shareDataManager();
    (**(code **)(*piVar1 + 0x6c))(piVar1,*(undefined4 *)(((int)this) + 0x28));
    piVar1 = (int *)((DataManager *)this)->shareDataManager();
    piVar1 = (int *)(**(code **)(*piVar1 + 0x28))();
    uVar2 = (undefined4)((**(code **)(*piVar1 + 0x68))());
    iVar3 = (undefined4)(intptr_t)(((cocos2d::CCArray *)uVar2)->objectAtIndex((unsigned int)p1));
    if ((iVar3 != 0) &&
       (piVar1 = (int *)func_0079e55c(iVar3,*(undefined4 *)((unsigned char *)((char *)&g_0068e6b2 + (intptr_t)(g_0068e6dc))),
                                        *(undefined4 *)((unsigned char *)((char *)&g_0068e6b4 + (intptr_t)(g_0068e6e0))),0),
       piVar1 != (int *)0x0)) {
      uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
      uVar4 = (undefined4)((**(code **)(*piVar1 + 0x18))(piVar1));
      ((cocos2d::CCNotificationCenter *)uVar2)->postNotification((char const*)(unsigned char *)((char *)&g_0068e6d4 + (intptr_t)(g_0068e6e4)), (cocos2d::CCObject*)uVar4);
    }
  }
  return;
}

void BLSuitPresenter::touchItemAtIndex(BLTableView* p1, cocos2d::CCNode* p2, int p3)
{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  iVar2 = (undefined4)((void)(((UIManager *)(uVar1))->getUIObject(0x1f)),(intptr_t)0);
  if (iVar2 != 0) {
    uVar1 = (undefined4)(((UIManager *)this)->shareManager());
    ((UIManager *)(uVar1))->removeUIByID(0x1f);
  }
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  iVar2 = (undefined4)((void)(((UIManager *)(uVar1))->getUIObject(0x20)),(intptr_t)0);
  if (iVar2 != 0) {
    uVar1 = (undefined4)(((UIManager *)this)->shareManager());
    ((UIManager *)(uVar1))->removeUIByID(0x20);
  }
  if (*(int *)(((int)this) + 0x2c) == 0) {
    ((BLSuitPresenter *)(((int)this)))->updateRoleDataAtIndex(p3);
  }
  else if (*(int *)(((int)this) + 0x2c) == 1) {
    ((BLSuitPresenter *)(((int)this)))->updateRoleDataUpGrace(p3);
  }
  return;
}
