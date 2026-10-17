#include "ADPresenter.h"
#include "CCNotificationCenter.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "CCScrollView.h"
#include "CCObject.h"
#include "CCTouch.h"
#include "CCDirector.h"
#include "BackPackItemData.h"
#include "ADHttpUtil.h"
#include "ADView.h"
#include "BLItemDataInfoPresenter.h"
#include "BLItemDataInfoView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BackPackData.h"
#include "DataCacheManager.h"
#include "DataManager.h"
#include "ItemData.h"
#include "PlatformHelp.h"
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
extern "C" long long func_004f4650(...);
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
extern "C" long long func_0079e734(...);
extern "C" long long func_0079e784(...);
extern "C" long long func_0079e854(...);
extern "C" long long ghidra_CONCAT13(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_004f3724;
extern "C" unsigned long UNK_004f373c;
extern "C" unsigned long UNK_004f3754;
extern "C" unsigned long UNK_004f376c;
extern "C" unsigned long UNK_004f37c4;
extern "C" unsigned long UNK_004f37de;
extern "C" unsigned long UNK_004f3824;
extern "C" unsigned long UNK_004f384c;
extern "C" unsigned long UNK_004f387a;
extern "C" unsigned long UNK_004f39e6;
extern "C" unsigned long UNK_004f3ae8;
extern "C" unsigned long UNK_004f3af0;
extern "C" unsigned long UNK_004f3b0a;
extern "C" unsigned long UNK_004f3b2a;
extern "C" unsigned long UNK_004f3b86;
extern "C" unsigned long UNK_004f3b94;
extern "C" unsigned long UNK_004f3bb0;
extern "C" unsigned long UNK_004f3bcc;
extern "C" unsigned long UNK_004f3be8;
extern "C" unsigned long UNK_004f3c04;
extern "C" unsigned long UNK_004f3cb0;
extern "C" unsigned long UNK_004f3e56;
extern "C" unsigned long UNK_004f3e8e;
extern "C" unsigned long UNK_004f3f0c;
extern "C" unsigned long UNK_004f4072;
extern "C" unsigned long UNK_004f409c;
extern "C" unsigned long UNK_004f40ba;
extern "C" unsigned long UNK_004f415a;
extern "C" unsigned long UNK_004f4168;
extern "C" unsigned long UNK_004f41d8;
extern "C" unsigned long UNK_004f4370;
extern "C" unsigned long UNK_004f4394;
extern "C" unsigned long UNK_004f4396;
extern "C" unsigned long UNK_004f440a;
extern "C" unsigned long UNK_004f456a;
extern "C" unsigned long UNK_004f458c;
extern "C" unsigned long UNK_004f458e;
extern "C" unsigned long UNK_004f45a0;
extern "C" unsigned long UNK_004f4676;
extern "C" unsigned long UNK_004f46d6;
extern "C" unsigned long UNK_004f472e;
extern "C" unsigned long UNK_004f47aa;
extern "C" unsigned long UNK_004f47ab;
extern "C" unsigned long UNK_004f47ac;
extern "C" unsigned long UNK_004f47ca;
extern "C" unsigned long UNK_004f47fa;
extern "C" unsigned long _UNK_004f3728;
extern "C" unsigned long _UNK_004f3740;
extern "C" unsigned long _UNK_004f3758;
extern "C" unsigned long _UNK_004f3770;
extern "C" unsigned long _UNK_004f3810;
extern "C" unsigned long _UNK_004f3814;
extern "C" unsigned long _UNK_004f3828;
extern "C" unsigned long _UNK_004f3850;
extern "C" unsigned long _UNK_004f39b4;
extern "C" unsigned long _UNK_004f39b8;
extern "C" unsigned long _UNK_004f39bc;
extern "C" unsigned long _UNK_004f39c0;
extern "C" unsigned long _UNK_004f39c4;
extern "C" unsigned long _UNK_004f39c8;
extern "C" unsigned long _UNK_004f39cc;
extern "C" unsigned long _UNK_004f39d0;
extern "C" unsigned long _UNK_004f3a10;
extern "C" unsigned long _UNK_004f3af4;
extern "C" unsigned long _UNK_004f3af8;
extern "C" unsigned long _UNK_004f3b54;
extern "C" unsigned long _UNK_004f3b58;
extern "C" unsigned long _UNK_004f3c10;
extern "C" unsigned long _UNK_004f3c14;
extern "C" unsigned long _UNK_004f3c18;
extern "C" unsigned long _UNK_004f3c1c;
extern "C" unsigned long _UNK_004f3c20;
extern "C" unsigned long _UNK_004f3c24;
extern "C" unsigned long _UNK_004f3c28;
extern "C" unsigned long _UNK_004f3c2c;
extern "C" unsigned long _UNK_004f3c30;
extern "C" unsigned long _UNK_004f3c34;
extern "C" unsigned long _UNK_004f3c38;
extern "C" unsigned long _UNK_004f3cc0;
extern "C" unsigned long _UNK_004f3e58;
extern "C" unsigned long _UNK_004f3e5c;
extern "C" unsigned long _UNK_004f3e60;
extern "C" unsigned long _UNK_004f3e64;
extern "C" unsigned long _UNK_004f3e68;
extern "C" unsigned long _UNK_004f3e6c;
extern "C" unsigned long _UNK_004f41f4;
extern "C" unsigned long _UNK_004f41f8;
extern "C" unsigned long _UNK_004f41fc;
extern "C" unsigned long _UNK_004f4200;
extern "C" unsigned long _UNK_004f4204;
extern "C" unsigned long _UNK_004f4208;
extern "C" unsigned long _UNK_004f420c;
extern "C" unsigned long _UNK_004f4210;
extern "C" unsigned long _UNK_004f4214;
extern "C" unsigned long _UNK_004f4218;
extern "C" unsigned long _UNK_004f421c;
extern "C" unsigned long _UNK_004f4220;
extern "C" unsigned long _UNK_004f4224;
extern "C" unsigned long _UNK_004f4228;
extern "C" unsigned long _UNK_004f461c;
extern "C" unsigned long _UNK_004f4620;
extern "C" unsigned long _UNK_004f4624;
extern "C" unsigned long _UNK_004f4628;
extern "C" unsigned long _UNK_004f462c;
extern "C" unsigned long _UNK_004f4630;
extern "C" unsigned long _UNK_004f4634;
extern "C" unsigned long _UNK_004f4638;
extern "C" unsigned long _UNK_004f463c;
extern "C" unsigned long _UNK_004f4640;
extern "C" unsigned long _UNK_004f4644;
extern "C" unsigned long _UNK_004f46a8;
extern "C" unsigned long _UNK_004f499c;
extern "C" unsigned long _UNK_004f49a0;
extern "C" unsigned long _UNK_004f49a4;
extern "C" unsigned long _UNK_004f49a8;
extern "C" unsigned long _UNK_004f49ac;
extern "C" unsigned long _UNK_004f49b0;
extern "C" unsigned long extraout_r1;
extern "C" unsigned long extraout_r3;
extern "C" unsigned long g_004f3724;
extern "C" unsigned long g_004f3728;
extern "C" unsigned long g_004f373c;
extern "C" unsigned long g_004f3740;
extern "C" unsigned long g_004f3754;
extern "C" unsigned long g_004f3758;
extern "C" unsigned long g_004f376c;
extern "C" unsigned long g_004f3770;
extern "C" unsigned long g_004f37c4;
extern "C" unsigned long g_004f37de;
extern "C" unsigned long g_004f3810;
extern "C" unsigned long g_004f3814;
extern "C" unsigned long g_004f3824;
extern "C" unsigned long g_004f3828;
extern "C" unsigned long g_004f384c;
extern "C" unsigned long g_004f3850;
extern "C" unsigned long g_004f387a;
extern "C" unsigned long g_004f39b4;
extern "C" unsigned long g_004f39b8;
extern "C" unsigned long g_004f39bc;
extern "C" unsigned long g_004f39c0;
extern "C" unsigned long g_004f39c4;
extern "C" unsigned long g_004f39c8;
extern "C" unsigned long g_004f39cc;
extern "C" unsigned long g_004f39d0;
extern "C" unsigned long g_004f39e6;
extern "C" unsigned long g_004f3a10;
extern "C" unsigned long g_004f3ae8;
extern "C" unsigned long g_004f3af0;
extern "C" unsigned long g_004f3af4;
extern "C" unsigned long g_004f3af8;
extern "C" unsigned long g_004f3b0a;
extern "C" unsigned long g_004f3b2a;
extern "C" unsigned long g_004f3b54;
extern "C" unsigned long g_004f3b58;
extern "C" unsigned long g_004f3b86;
extern "C" unsigned long g_004f3b94;
extern "C" unsigned long g_004f3bb0;
extern "C" unsigned long g_004f3bcc;
extern "C" unsigned long g_004f3be8;
extern "C" unsigned long g_004f3c04;
extern "C" unsigned long g_004f3c10;
extern "C" unsigned long g_004f3c14;
extern "C" unsigned long g_004f3c18;
extern "C" unsigned long g_004f3c1c;
extern "C" unsigned long g_004f3c20;
extern "C" unsigned long g_004f3c24;
extern "C" unsigned long g_004f3c28;
extern "C" unsigned long g_004f3c2c;
extern "C" unsigned long g_004f3c30;
extern "C" unsigned long g_004f3c34;
extern "C" unsigned long g_004f3c38;
extern "C" unsigned long g_004f3cb0;
extern "C" unsigned long g_004f3cc0;
extern "C" unsigned long g_004f3e56;
extern "C" unsigned long g_004f3e58;
extern "C" unsigned long g_004f3e5c;
extern "C" unsigned long g_004f3e60;
extern "C" unsigned long g_004f3e64;
extern "C" unsigned long g_004f3e68;
extern "C" unsigned long g_004f3e6c;
extern "C" unsigned long g_004f3e8e;
extern "C" unsigned long g_004f3f0c;
extern "C" unsigned long g_004f4072;
extern "C" unsigned long g_004f409c;
extern "C" unsigned long g_004f40ba;
extern "C" unsigned long g_004f415a;
extern "C" unsigned long g_004f4168;
extern "C" unsigned long g_004f41d8;
extern "C" unsigned long g_004f41f4;
extern "C" unsigned long g_004f41f8;
extern "C" unsigned long g_004f41fc;
extern "C" unsigned long g_004f4200;
extern "C" unsigned long g_004f4204;
extern "C" unsigned long g_004f4208;
extern "C" unsigned long g_004f420c;
extern "C" unsigned long g_004f4210;
extern "C" unsigned long g_004f4214;
extern "C" unsigned long g_004f4218;
extern "C" unsigned long g_004f421c;
extern "C" unsigned long g_004f4220;
extern "C" unsigned long g_004f4224;
extern "C" unsigned long g_004f4228;
extern "C" unsigned long g_004f4370;
extern "C" unsigned long g_004f4394;
extern "C" unsigned long g_004f4396;
extern "C" unsigned long g_004f440a;
extern "C" unsigned long g_004f456a;
extern "C" unsigned long g_004f458c;
extern "C" unsigned long g_004f458e;
extern "C" unsigned long g_004f45a0;
extern "C" unsigned long g_004f461c;
extern "C" unsigned long g_004f4620;
extern "C" unsigned long g_004f4624;
extern "C" unsigned long g_004f4628;
extern "C" unsigned long g_004f462c;
extern "C" unsigned long g_004f4630;
extern "C" unsigned long g_004f4634;
extern "C" unsigned long g_004f4638;
extern "C" unsigned long g_004f463c;
extern "C" unsigned long g_004f4640;
extern "C" unsigned long g_004f4644;
extern "C" unsigned long g_004f4676;
extern "C" unsigned long g_004f46a8;
extern "C" unsigned long g_004f46d6;
extern "C" unsigned long g_004f472e;
extern "C" unsigned long g_004f47aa;
extern "C" unsigned long g_004f47ab;
extern "C" unsigned long g_004f47ac;
extern "C" unsigned long g_004f47ca;
extern "C" unsigned long g_004f47fa;
extern "C" unsigned long g_004f499c;
extern "C" unsigned long g_004f49a0;
extern "C" unsigned long g_004f49a4;
extern "C" unsigned long g_004f49a8;
extern "C" unsigned long g_004f49ac;
extern "C" unsigned long g_004f49b0;
void ADPresenter::tick(float p1)
{
  return;
}

bool ADPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void ADPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void ADPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void ADPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

ADPresenter::~ADPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_004f37c4 + g_004f3810);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x3c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_004f37de + g_004f3814,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void ADPresenter::onClose(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(0x88);
  return;
}

void ADPresenter::onGetReward(cocos2d::CCObject* p1, unsigned int p2)
{
  ((ADHttpUtil *)this)->getInstance();
  ((ADHttpUtil *)this)->saveUserADDate();
  return;
}



void ADPresenter::BuySucceed()
{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  
  uVar1 = (undefined4)(((ADView *)*(undefined4 *)(((int)this) + 0x1c))->getScrollview());
  piVar2 = (int *)((cocos2d::extension::CCScrollView *)this)->getContainer();
  iVar3 = (**(code **)(*piVar2 + 0xd4))(piVar2,*(undefined4 *)(((int)this) + 0x18));
  if (iVar3 != 0) {
    piVar2 = (int *)((cocos2d::extension::CCScrollView *)uVar1)->getContainer();
    piVar2 = (int *)(**(code **)(*piVar2 + 0xd4))(piVar2,*(undefined4 *)(((int)this) + 0x18));
    (**(code **)(*piVar2 + 0x90))(piVar2,0);
  }
  piVar2 = (int *)((cocos2d::extension::CCScrollView *)uVar1)->getContainer();
  iVar3 = (**(code **)(*piVar2 + 0xd4))(piVar2,*(int *)(((int)this) + 0x18) + 1000);
  if (iVar3 != 0) {
    piVar2 = (int *)((cocos2d::extension::CCScrollView *)uVar1)->getContainer();
    piVar2 = (int *)(**(code **)(*piVar2 + 0xd4))(piVar2,*(int *)(((int)this) + 0x18) + 1000);
    (**(code **)(*piVar2 + 0x90))(piVar2,1);
  }
  return;
}

void ADPresenter::buyFinal()
{
  undefined4 p4 = 0;

  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  
  uVar1 = (undefined4)(((ADView *)*(undefined4 *)(((int)this) + 0x1c))->getScrollview());
  piVar2 = (int *)((cocos2d::extension::CCScrollView *)this)->getContainer();
  iVar3 = (**(code **)(*piVar2 + 0xd4))
                    (piVar2,*(int *)(((int)this) + 0x18) + 1000,*(int *)(((int)this) + 0x18),
                     *(code **)(*piVar2 + 0xd4),p4);
  if (iVar3 != 0) {
    piVar2 = (int *)((cocos2d::extension::CCScrollView *)uVar1)->getContainer();
    piVar2 = (int *)(**(code **)(*piVar2 + 0xd4))(piVar2,*(int *)(((int)this) + 0x18) + 1000);
    (**(code **)(*piVar2 + 0x90))(piVar2,0);
  }
  return;
}


ADPresenter::ADPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_004f3b0a + g_004f3b54);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x3c;
  ((UIManager *)this)->shareManager();
  ((UIManager *)this)->pushCurScrollViewUnEnable();
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_004f3b2a + g_004f3b58,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}


void ADPresenter::onExit()
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
  ((PlatformHelp *)this)->hideLenovoBanner();
  return;
}

undefined4 ADPresenter::create(ADView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x20))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

undefined4 ADPresenter::initWithView(ADView* p1)
{
  int *piVar1;
  
  *(undefined4 *)(((int)this) + 0x1c) = (undefined4)(intptr_t)p1;
  piVar1 = (int *)((ADView *)p1)->getBtnClose();
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)(&g_004f3cb0 + g_004f3cc0),0,0x20);
  ((ADHttpUtil *)this)->getInstance();
  ((ADHttpUtil *)this)->getADDate();
  return 1;
}

// ===== 修复: 补回被误删的函数占位 (7) =====
void ADPresenter::onClickInfo(cocos2d::CCObject* p1, unsigned int p2)
{
  code *pcVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  iVar6 = (undefined4)(intptr_t)(g_004f39b4);
  if ((int)(intptr_t)p1 != 0) {
    uVar7 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_004f387a + (intptr_t)(g_004f39b8)) + g_004f39b4));
    piVar2 = (int *)func_0079e55c(p1,uVar7,
                                    *(undefined4 *)((unsigned char *)((char *)&g_004f387a + (intptr_t)(g_004f39bc)) + g_004f39b4),0
                                   );
    if (piVar2 != (int *)0x0) {
      uVar3 = (undefined4)((**(code **)(*piVar2 + 0x118))());
      iVar4 = (undefined4)(intptr_t)((**(code **)(*piVar2 + 0x128))(piVar2));
      if (iVar4 == 0) {
                    /* WARNING: Does not return;
        (*pcVar1)();
      }
      iVar4 = (undefined4)(intptr_t)(func_0079e55c(iVar4,uVar7,*(undefined4 *)((unsigned char *)((char *)&g_004f387a + (intptr_t)(g_004f39c0)) + iVar6),0));
      uVar8 = (undefined4)(*(undefined4 *)(iVar4 + 0x14));
      uVar7 = (undefined4)(((DataCacheManager *)this)->shareManager());
      iVar4 = (undefined4)(intptr_t)(((DataCacheManager *)uVar7)->getItemDataByID(uVar3));
      if (iVar4 != 0) {
        uVar7 = (undefined4)(((UIManager *)this)->shareManager());
        iVar4 = (undefined4)(intptr_t)(((UIManager *)uVar7)->getUIObject(0x1f));
        if ((iVar4 == 0) ||
           (iVar4 = func_0079e55c(iVar4,*(undefined4 *)((unsigned char *)((char *)&g_004f387a + (intptr_t)(g_004f39c4)) + iVar6),
                                    *(undefined4 *)((unsigned char *)((char *)&g_004f387a + (intptr_t)(g_004f39c8)) + iVar6),0),
           iVar4 == 0)) {
          uVar7 = (undefined4)(((UIManager *)this)->shareManager());
          iVar5 = (undefined4)(intptr_t)(((UIManager *)uVar7)->showUIById(0x1f));
          iVar4 = 0;
          if (iVar5 != 0) {
            iVar4 = func_0079e55c(iVar5,*(undefined4 *)((unsigned char *)((char *)&g_004f387a + (intptr_t)(g_004f39c4)) + iVar6),
                                    *(undefined4 *)((unsigned char *)((char *)&g_004f387a + (intptr_t)(g_004f39c8)) + iVar6),0);
          }
        }
        piVar2 = (int *)::operator new(0x30);
        ::new ((void *)piVar2) BackPackItemData();   /* ALLOC+CTOR_FIX(R123): 类名由 llvm-cxxfilt 反修饰 + (函数,尺寸) 对齐 取得 */
        (**(code **)(*piVar2 + 0x24))(piVar2,uVar3);
        (**(code **)(*piVar2 + 0x2c))(piVar2,uVar8);
        if ((*(int *)(iVar4 + 0x24) != 0) &&
           (iVar6 = func_0079e55c(*(int *)(iVar4 + 0x24),
                                    *(undefined4 *)((unsigned char *)((char *)&g_004f387a + (intptr_t)(g_004f39cc)) + iVar6),
                                    *(undefined4 *)((unsigned char *)((char *)&g_004f387a + (intptr_t)(g_004f39d0)) + iVar6),0),
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

undefined8 ADPresenter::getDateFial()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void ADPresenter::onlookAD(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)((**(code **)(*(int *)(p1) + (0x118)))(p1));
  *(undefined4 *)(((int)this) + 0x18) = uVar1;
  cocos2d::CCLog((char const*)(unsigned char *)((char *)&g_004f3ae8 + (intptr_t)(g_004f3af4)), uVar1);
  ((PlatformHelp *)this)->showLargeBannerAD((char const*)(unsigned char *)((char *)&g_004f3af0 + (intptr_t)(g_004f3af8)));
  return;
}

void ADPresenter::onEnter()
{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  piVar2 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar3 = (undefined4)((**(code **)(*(int *)(piVar2) + (0x40)))());
  iVar1 = (undefined4)(intptr_t)(g_004f3c10);
  ((cocos2d::CCTouchDispatcher *)(uVar3))->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14, 1, 1);
  uVar3 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)(((int)this)))->addObserver((cocos2d::CCObject*)*(undefined4 *)((unsigned char *)((char *)&g_004f3b86 + (intptr_t)(g_004f3c14)) + iVar1), 0, (char const*)(unsigned char *)((char *)&g_004f3b94 + (intptr_t)(g_004f3c18)), 0);
  uVar3 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)(((int)this)))->addObserver((cocos2d::CCObject*)*(undefined4 *)((unsigned char *)((char *)&g_004f3b86 + (intptr_t)(g_004f3c1c)) + iVar1), 0, (char const*)(unsigned char *)((char *)&g_004f3bb0 + (intptr_t)(g_004f3c20)), 0);
  uVar3 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)(((int)this)))->addObserver((cocos2d::CCObject*)*(undefined4 *)((unsigned char *)((char *)&g_004f3b86 + (intptr_t)(g_004f3c24)) + iVar1), 0, (char const*)(unsigned char *)((char *)&g_004f3bcc + (intptr_t)(g_004f3c28)), 0);
  uVar3 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)(((int)this)))->addObserver((cocos2d::CCObject*)*(undefined4 *)((unsigned char *)((char *)&g_004f3b86 + (intptr_t)(g_004f3c2c)) + iVar1), 0, (char const*)(unsigned char *)((char *)&g_004f3be8 + (intptr_t)(g_004f3c30)), 0);
  uVar3 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)(((int)this)))->addObserver((cocos2d::CCObject*)*(undefined4 *)((unsigned char *)((char *)&g_004f3b86 + (intptr_t)(g_004f3c34)) + iVar1), 0, (char const*)(unsigned char *)((char *)&g_004f3c04 + (intptr_t)(g_004f3c38)), 0);
  return;
}

void ADPresenter::initScroView()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

undefined8 ADPresenter::updateView()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void ADPresenter::addItem()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
