#include "BLFestivalPresenter.h"
#include "CCNotificationCenter.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "CCObject.h"
#include "CCTouch.h"
#include "CCDirector.h"
#include "BLFestivalView.h"
#include "BLItemDataInfoPresenter.h"
#include "BLItemDataInfoView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLRichText.h"
#include "BackPackData.h"
#include "BackPackItemData.h"
#include "DataCacheManager.h"
#include "DataManager.h"
#include "FestivalHttpUtil.h"
#include "ItemData.h"
#include "RichTextData.h"
#include "Toast.h"
#include "UIManager.h"
#include "UserData.h"
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
extern "C" long long func_0079e2ec(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e43c(...);
extern "C" long long func_0079e44c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e46c(...);
extern "C" long long func_0079e47c(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long func_0079e5dc(...);
extern "C" long long func_0079e6c0(...);
extern "C" long long func_0079e734(...);
extern "C" long long func_0079e784(...);
extern "C" long long func_0079e814(...);
extern "C" long long func_0079e854(...);
extern "C" long long ghidra_CONCAT13(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0052721c;
extern "C" unsigned long UNK_00527234;
extern "C" unsigned long UNK_0052724c;
extern "C" unsigned long UNK_00527264;
extern "C" unsigned long UNK_005272bc;
extern "C" unsigned long UNK_005272d6;
extern "C" unsigned long UNK_0052731c;
extern "C" unsigned long UNK_00527344;
extern "C" unsigned long UNK_00527366;
extern "C" unsigned long UNK_005274d2;
extern "C" unsigned long UNK_0052750e;
extern "C" unsigned long UNK_0052752e;
extern "C" unsigned long UNK_0052758c;
extern "C" unsigned long UNK_0052758e;
extern "C" unsigned long UNK_005275a6;
extern "C" unsigned long UNK_005275a8;
extern "C" unsigned long UNK_005275c0;
extern "C" unsigned long UNK_005275c2;
extern "C" unsigned long UNK_00527658;
extern "C" unsigned long UNK_0052773c;
extern "C" unsigned long UNK_0052775c;
extern "C" unsigned long UNK_00527796;
extern "C" unsigned long UNK_0052788c;
extern "C" unsigned long UNK_00527906;
extern "C" unsigned long UNK_00527a62;
extern "C" unsigned long UNK_00527ade;
extern "C" unsigned long UNK_00527afa;
extern "C" unsigned long UNK_00527b9a;
extern "C" unsigned long UNK_00527ba8;
extern "C" unsigned long UNK_00527c42;
extern "C" unsigned long UNK_00527c44;
extern "C" unsigned long UNK_00527c9c;
extern "C" unsigned long UNK_00527cac;
extern "C" unsigned long UNK_00527d3e;
extern "C" unsigned long UNK_00527d58;
extern "C" unsigned long UNK_00527d7a;
extern "C" unsigned long UNK_00527f28;
extern "C" unsigned long UNK_00528060;
extern "C" unsigned long UNK_0052807c;
extern "C" unsigned long UNK_005280e8;
extern "C" unsigned long UNK_005280f2;
extern "C" unsigned long UNK_005281f6;
extern "C" unsigned long UNK_005281f8;
extern "C" unsigned long UNK_00528246;
extern "C" unsigned long UNK_00528330;
extern "C" unsigned long UNK_005283d0;
extern "C" unsigned long UNK_005283d1;
extern "C" unsigned long UNK_005283d2;
extern "C" unsigned long UNK_005283ee;
extern "C" unsigned long UNK_00528418;
extern "C" unsigned long UNK_00528624;
extern "C" unsigned long UNK_00528650;
extern "C" unsigned long UNK_00528688;
extern "C" unsigned long UNK_005286be;
extern "C" unsigned long UNK_005286e0;
extern "C" unsigned long UNK_005286fe;
extern "C" unsigned long UNK_0052871c;
extern "C" unsigned long UNK_0052874e;
extern "C" unsigned long UNK_0052878c;
extern "C" unsigned long UNK_00528826;
extern "C" unsigned long UNK_00528848;
extern "C" unsigned long UNK_00528892;
extern "C" unsigned long _UNK_00527220;
extern "C" unsigned long _UNK_00527238;
extern "C" unsigned long _UNK_00527250;
extern "C" unsigned long _UNK_00527268;
extern "C" unsigned long _UNK_00527308;
extern "C" unsigned long _UNK_0052730c;
extern "C" unsigned long _UNK_00527320;
extern "C" unsigned long _UNK_00527348;
extern "C" unsigned long _UNK_005274a0;
extern "C" unsigned long _UNK_005274a4;
extern "C" unsigned long _UNK_005274a8;
extern "C" unsigned long _UNK_005274ac;
extern "C" unsigned long _UNK_005274b0;
extern "C" unsigned long _UNK_005274b4;
extern "C" unsigned long _UNK_005274b8;
extern "C" unsigned long _UNK_005274bc;
extern "C" unsigned long _UNK_005274fc;
extern "C" unsigned long _UNK_00527558;
extern "C" unsigned long _UNK_0052755c;
extern "C" unsigned long _UNK_005275d0;
extern "C" unsigned long _UNK_005275d4;
extern "C" unsigned long _UNK_005275d8;
extern "C" unsigned long _UNK_005275dc;
extern "C" unsigned long _UNK_005275e0;
extern "C" unsigned long _UNK_005275e4;
extern "C" unsigned long _UNK_00527668;
extern "C" unsigned long _UNK_00527a80;
extern "C" unsigned long _UNK_00527a84;
extern "C" unsigned long _UNK_00527a88;
extern "C" unsigned long _UNK_00527a8c;
extern "C" unsigned long _UNK_00527a90;
extern "C" unsigned long _UNK_00527a94;
extern "C" unsigned long _UNK_00527a98;
extern "C" unsigned long _UNK_00527a9c;
extern "C" unsigned long _UNK_00527aa0;
extern "C" unsigned long _UNK_00527aa4;
extern "C" unsigned long _UNK_00527aa8;
extern "C" unsigned long _UNK_00527aac;
extern "C" unsigned long _UNK_00527ab0;
extern "C" unsigned long _UNK_00527ab4;
extern "C" unsigned long _UNK_00527ab8;
extern "C" unsigned long _UNK_00527abc;
extern "C" unsigned long _UNK_00527ac0;
extern "C" unsigned long _UNK_00527ac4;
extern "C" unsigned long _UNK_00527c4c;
extern "C" unsigned long _UNK_00527c50;
extern "C" unsigned long _UNK_00527c54;
extern "C" unsigned long _UNK_00527c58;
extern "C" unsigned long _UNK_00527c5c;
extern "C" unsigned long _UNK_00527c60;
extern "C" unsigned long _UNK_00527c64;
extern "C" unsigned long _UNK_00527c68;
extern "C" unsigned long _UNK_00527c6c;
extern "C" unsigned long _UNK_00527c70;
extern "C" unsigned long _UNK_00527c74;
extern "C" unsigned long _UNK_00527f8c;
extern "C" unsigned long _UNK_00527f90;
extern "C" unsigned long _UNK_00527f94;
extern "C" unsigned long _UNK_00527f98;
extern "C" unsigned long _UNK_00527f9c;
extern "C" unsigned long _UNK_00527fa0;
extern "C" unsigned long _UNK_00527fa4;
extern "C" unsigned long _UNK_00527fa8;
extern "C" unsigned long _UNK_00527fac;
extern "C" unsigned long _UNK_00527fb0;
extern "C" unsigned long _UNK_00527fb4;
extern "C" unsigned long _UNK_0052812c;
extern "C" unsigned long _UNK_00528130;
extern "C" unsigned long _UNK_00528134;
extern "C" unsigned long _UNK_00528138;
extern "C" unsigned long _UNK_00528558;
extern "C" unsigned long _UNK_0052855c;
extern "C" unsigned long _UNK_00528560;
extern "C" unsigned long _UNK_00528564;
extern "C" unsigned long _UNK_00528568;
extern "C" unsigned long _UNK_0052856c;
extern "C" unsigned long _UNK_00528570;
extern "C" unsigned long _UNK_005289a0;
extern "C" unsigned long _UNK_005289a4;
extern "C" unsigned long _UNK_005289a8;
extern "C" unsigned long _UNK_005289ac;
extern "C" unsigned long _UNK_005289b0;
extern "C" unsigned long _UNK_005289b4;
extern "C" unsigned long _UNK_005289b8;
extern "C" unsigned long _UNK_005289bc;
extern "C" unsigned long _UNK_005289c0;
extern "C" unsigned long _UNK_005289c4;
extern "C" unsigned long _UNK_005289c8;
extern "C" unsigned long _UNK_005289cc;
extern "C" unsigned long _UNK_005289d0;
extern "C" unsigned long _UNK_005289d4;
extern "C" unsigned long _UNK_005289d8;
extern "C" unsigned long _UNK_005289dc;
extern "C" unsigned long _UNK_005289e0;
extern "C" unsigned long _UNK_005289e4;
extern "C" unsigned long _UNK_005289e8;
extern "C" unsigned long _UNK_005289ec;
extern "C" unsigned long extraout_r1;
extern "C" unsigned long g_0052721c;
extern "C" unsigned long g_00527220;
extern "C" unsigned long g_00527234;
extern "C" unsigned long g_00527238;
extern "C" unsigned long g_0052724c;
extern "C" unsigned long g_00527250;
extern "C" unsigned long g_00527264;
extern "C" unsigned long g_00527268;
extern "C" unsigned long g_005272bc;
extern "C" unsigned long g_005272d6;
extern "C" unsigned long g_00527308;
extern "C" unsigned long g_0052730c;
extern "C" unsigned long g_0052731c;
extern "C" unsigned long g_00527320;
extern "C" unsigned long g_00527344;
extern "C" unsigned long g_00527348;
extern "C" unsigned long g_00527366;
extern "C" unsigned long g_005274a0;
extern "C" unsigned long g_005274a4;
extern "C" unsigned long g_005274a8;
extern "C" unsigned long g_005274ac;
extern "C" unsigned long g_005274b0;
extern "C" unsigned long g_005274b4;
extern "C" unsigned long g_005274b8;
extern "C" unsigned long g_005274bc;
extern "C" unsigned long g_005274d2;
extern "C" unsigned long g_005274fc;
extern "C" unsigned long g_0052750e;
extern "C" unsigned long g_0052752e;
extern "C" unsigned long g_00527558;
extern "C" unsigned long g_0052755c;
extern "C" unsigned long g_0052758c;
extern "C" unsigned long g_0052758e;
extern "C" unsigned long g_005275a6;
extern "C" unsigned long g_005275a8;
extern "C" unsigned long g_005275c0;
extern "C" unsigned long g_005275c2;
extern "C" unsigned long g_005275d0;
extern "C" unsigned long g_005275d4;
extern "C" unsigned long g_005275d8;
extern "C" unsigned long g_005275dc;
extern "C" unsigned long g_005275e0;
extern "C" unsigned long g_005275e4;
extern "C" unsigned long g_00527658;
extern "C" unsigned long g_00527668;
extern "C" unsigned long g_0052773c;
extern "C" unsigned long g_0052775c;
extern "C" unsigned long g_00527796;
extern "C" unsigned long g_0052788c;
extern "C" unsigned long g_00527906;
extern "C" unsigned long g_00527a62;
extern "C" unsigned long g_00527a80;
extern "C" unsigned long g_00527a84;
extern "C" unsigned long g_00527a88;
extern "C" unsigned long g_00527a8c;
extern "C" unsigned long g_00527a90;
extern "C" unsigned long g_00527a94;
extern "C" unsigned long g_00527a98;
extern "C" unsigned long g_00527a9c;
extern "C" unsigned long g_00527aa0;
extern "C" unsigned long g_00527aa4;
extern "C" unsigned long g_00527aa8;
extern "C" unsigned long g_00527aac;
extern "C" unsigned long g_00527ab0;
extern "C" unsigned long g_00527ab4;
extern "C" unsigned long g_00527ab8;
extern "C" unsigned long g_00527abc;
extern "C" unsigned long g_00527ac0;
extern "C" unsigned long g_00527ac4;
extern "C" unsigned long g_00527ade;
extern "C" unsigned long g_00527afa;
extern "C" unsigned long g_00527b9a;
extern "C" unsigned long g_00527ba8;
extern "C" unsigned long g_00527c42;
extern "C" unsigned long g_00527c44;
extern "C" unsigned long g_00527c4c;
extern "C" unsigned long g_00527c50;
extern "C" unsigned long g_00527c54;
extern "C" unsigned long g_00527c58;
extern "C" unsigned long g_00527c5c;
extern "C" unsigned long g_00527c60;
extern "C" unsigned long g_00527c64;
extern "C" unsigned long g_00527c68;
extern "C" unsigned long g_00527c6c;
extern "C" unsigned long g_00527c70;
extern "C" unsigned long g_00527c74;
extern "C" unsigned long g_00527c9c;
extern "C" unsigned long g_00527cac;
extern "C" unsigned long g_00527d3e;
extern "C" unsigned long g_00527d58;
extern "C" unsigned long g_00527d7a;
extern "C" unsigned long g_00527f28;
extern "C" unsigned long g_00527f8c;
extern "C" unsigned long g_00527f90;
extern "C" unsigned long g_00527f94;
extern "C" unsigned long g_00527f98;
extern "C" unsigned long g_00527f9c;
extern "C" unsigned long g_00527fa0;
extern "C" unsigned long g_00527fa4;
extern "C" unsigned long g_00527fa8;
extern "C" unsigned long g_00527fac;
extern "C" unsigned long g_00527fb0;
extern "C" unsigned long g_00527fb4;
extern "C" unsigned long g_00528060;
extern "C" unsigned long g_0052807c;
extern "C" unsigned long g_005280e8;
extern "C" unsigned long g_005280f2;
extern "C" unsigned long g_0052812c;
extern "C" unsigned long g_00528130;
extern "C" unsigned long g_00528134;
extern "C" unsigned long g_00528138;
extern "C" unsigned long g_005281f6;
extern "C" unsigned long g_005281f8;
extern "C" unsigned long g_00528246;
extern "C" unsigned long g_00528330;
extern "C" unsigned long g_005283d0;
extern "C" unsigned long g_005283d1;
extern "C" unsigned long g_005283d2;
extern "C" unsigned long g_005283ee;
extern "C" unsigned long g_00528418;
extern "C" unsigned long g_00528558;
extern "C" unsigned long g_0052855c;
extern "C" unsigned long g_00528560;
extern "C" unsigned long g_00528564;
extern "C" unsigned long g_00528568;
extern "C" unsigned long g_0052856c;
extern "C" unsigned long g_00528570;
extern "C" unsigned long g_00528624;
extern "C" unsigned long g_00528650;
extern "C" unsigned long g_00528688;
extern "C" unsigned long g_005286be;
extern "C" unsigned long g_005286e0;
extern "C" unsigned long g_005286fe;
extern "C" unsigned long g_0052871c;
extern "C" unsigned long g_0052874e;
extern "C" unsigned long g_0052878c;
extern "C" unsigned long g_00528826;
extern "C" unsigned long g_00528848;
extern "C" unsigned long g_00528892;
extern "C" unsigned long g_005289a0;
extern "C" unsigned long g_005289a4;
extern "C" unsigned long g_005289a8;
extern "C" unsigned long g_005289ac;
extern "C" unsigned long g_005289b0;
extern "C" unsigned long g_005289b4;
extern "C" unsigned long g_005289b8;
extern "C" unsigned long g_005289bc;
extern "C" unsigned long g_005289c0;
extern "C" unsigned long g_005289c4;
extern "C" unsigned long g_005289c8;
extern "C" unsigned long g_005289cc;
extern "C" unsigned long g_005289d0;
extern "C" unsigned long g_005289d4;
extern "C" unsigned long g_005289d8;
extern "C" unsigned long g_005289dc;
extern "C" unsigned long g_005289e0;
extern "C" unsigned long g_005289e4;
extern "C" unsigned long g_005289e8;
extern "C" unsigned long g_005289ec;
void BLFestivalPresenter::tick(float p1)
{
  return;
}

bool BLFestivalPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLFestivalPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLFestivalPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLFestivalPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

BLFestivalPresenter::~BLFestivalPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_005272bc + g_00527308);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x3c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005272d6 + g_0052730c,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLFestivalPresenter::onClose(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(0xf8);
  return;
}



BLFestivalPresenter::BLFestivalPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_0052750e + g_00527558);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x3c;
  ((UIManager *)this)->shareManager();
  ((UIManager *)this)->pushCurScrollViewUnEnable();
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0052752e + g_0052755c,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}


void BLFestivalPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar2)->removeAllObservers((cocos2d::CCObject*)((int)this));
  ((UIManager *)this)->shareManager();
  ((UIManager *)this)->popUnEnableScrollView();
  return;
}

undefined4 BLFestivalPresenter::create(BLFestivalView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x20))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

undefined4 BLFestivalPresenter::initWithView(BLFestivalView* p1)
{
  int *piVar1;
  
  *(undefined4 *)(((int)this) + 0x1c) = (undefined4)(intptr_t)p1;
  piVar1 = (int *)((BLFestivalView *)p1)->getBtnClose();
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)(&g_00527658 + g_00527668),0,0x20);
  ((FestivalHttpUtil *)this)->getInstance();
  ((FestivalHttpUtil *)this)->getFestivalDate();
  return 1;
}

// ===== 修复: 补回被误删的函数占位 (7) =====
void BLFestivalPresenter::onClickInfo(cocos2d::CCObject* p1, unsigned int p2)
{
  code *pcVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  iVar6 = g_005274a0;
  if ((int)(intptr_t)p1 != 0) {
    uVar7 = (undefined4)(*(undefined4 *)(&g_00527366 + g_005274a4 + g_005274a0));
    piVar2 = (int *)func_0079e55c(p1,uVar7,
                                    *(undefined4 *)(&g_00527366 + g_005274a8 + g_005274a0),0
                                   );
    if (piVar2 != (int *)0x0) {
      uVar3 = (undefined4)((**(code **)(*piVar2 + 0x118))());
      iVar4 = (**(code **)(*piVar2 + 0x128))(piVar2);
      if (iVar4 == 0) {
                    /* WARNING: Does not return;
        (*pcVar1)();
      }
      iVar4 = func_0079e55c(iVar4,uVar7,*(undefined4 *)(&g_00527366 + g_005274ac + iVar6),0);
      uVar8 = (undefined4)(*(undefined4 *)(iVar4 + 0x14));
      uVar7 = (undefined4)(((DataCacheManager *)this)->shareManager());
      iVar4 = ((DataCacheManager *)uVar7)->getItemDataByID(uVar3);
      if (iVar4 != 0) {
        uVar7 = (undefined4)(((UIManager *)this)->shareManager());
        iVar4 = ((UIManager *)uVar7)->getUIObject(0x1f);
        if ((iVar4 == 0) ||
           (iVar4 = func_0079e55c(iVar4,*(undefined4 *)(&g_00527366 + g_005274b0 + iVar6),
                                    *(undefined4 *)(&g_00527366 + g_005274b4 + iVar6),0),
           iVar4 == 0)) {
          uVar7 = (undefined4)(((UIManager *)this)->shareManager());
          iVar5 = ((UIManager *)uVar7)->showUIById(0x1f);
          iVar4 = 0;
          if (iVar5 != 0) {
            iVar4 = func_0079e55c(iVar5,*(undefined4 *)(&g_00527366 + g_005274b0 + iVar6),
                                    *(undefined4 *)(&g_00527366 + g_005274b4 + iVar6),0);
          }
        }
        piVar2 = (int *)::operator new(0x30);
        ::new ((void *)piVar2) BackPackItemData();   /* ALLOC+CTOR_FIX(R123): 类名由 llvm-cxxfilt 反修饰 + (函数,尺寸) 对齐 取得 */
        (**(code **)(*piVar2 + 0x24))(piVar2,uVar3);
        (**(code **)(*piVar2 + 0x2c))(piVar2,uVar8);
        if ((*(int *)(iVar4 + 0x24) != 0) &&
           (iVar6 = func_0079e55c(*(int *)(iVar4 + 0x24),
                                    *(undefined4 *)(&g_00527366 + g_005274b8 + iVar6),
                                    *(undefined4 *)(&g_00527366 + g_005274bc + iVar6),0),
           iVar6 != 0)) {
          uVar7 = (undefined4)(((BLItemDataInfoView *)this)->getPresenter());
          ((BLItemDataInfoPresenter *)uVar7)->initPackItemData((BackPackItemData*)piVar2);
          piVar2 = (int *)((BLItemDataInfoView *)iVar6)->DebrisItemInfoDown();
          (**(code **)(*piVar2 + 0x90))(piVar2,0);
          piVar2 = (int *)((BLItemDataInfoView *)iVar6)->ItemInfoDown();
          (**(code **)(*piVar2 + 0x90))(piVar2,0);
          piVar2 = (int *)((BLItemDataInfoView *)iVar6)->OtherItemInfoDown();
          (**(code **)(*piVar2 + 0x90))(piVar2,0);
        }
      }
    }
  }
  return;
}

void BLFestivalPresenter::getDateFial()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLFestivalPresenter::onEnter()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x40)))());
  ((cocos2d::CCTouchDispatcher *)(uVar2))->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14, 1, 1);
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)(((int)this)))->addObserver((cocos2d::CCObject*)*(undefined4 *)((unsigned char *)((char *)&g_0052758e + (intptr_t)(g_005275d0))), 0, (char const*)(unsigned char *)((char *)&g_0052758c + (intptr_t)(g_005275d4)), 0);
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)(((int)this)))->addObserver((cocos2d::CCObject*)*(undefined4 *)((unsigned char *)((char *)&g_005275a8 + (intptr_t)(g_005275d8))), 0, (char const*)(unsigned char *)((char *)&g_005275a6 + (intptr_t)(g_005275dc)), 0);
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)(((int)this)))->addObserver((cocos2d::CCObject*)*(undefined4 *)((unsigned char *)((char *)&g_005275c0 + (intptr_t)(g_005275e0))), 0, (char const*)(unsigned char *)((char *)&g_005275c2 + (intptr_t)(g_005275e4)), 0);
  return;
}

void BLFestivalPresenter::initScroView()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLFestivalPresenter::onGetReward(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLFestivalPresenter::BuySucceed()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLFestivalPresenter::updateView()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
