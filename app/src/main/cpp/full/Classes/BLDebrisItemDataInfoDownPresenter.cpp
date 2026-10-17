#include "BLDebrisItemDataInfoDownPresenter.h"
#include "CCLabelTTF.h"
#include "CCDictionary.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "CCObject.h"
#include "CCTouch.h"
#include "CCDirector.h"
#include "DebrisComposeData.h"
#include "CommonUseData.h"
#include "BLDebrisItemDataInfoDownView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BackPackData.h"
#include "BackPackItemData.h"
#include "DataCacheManager.h"
#include "DataManager.h"
#include "RichTextData.h"
#include "Toast.h"
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
template <class T, class... A> std::string ConvertToString(A...);
extern "C" long long func_0042f3fc(...);
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e5dc(...);
extern "C" long long func_0079e734(...);
extern "C" long long func_0079e784(...);
extern "C" long long func_0079e854(...);
extern "C" long long func_0079e934(...);
extern "C" long long func_0079e944(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_005ea1b6;
extern "C" unsigned long UNK_005ea1b8;
extern "C" unsigned long UNK_005ea1fc;
extern "C" unsigned long UNK_005ea278;
extern "C" unsigned long UNK_005ea2b2;
extern "C" unsigned long UNK_005ea2f8;
extern "C" unsigned long UNK_005ea320;
extern "C" unsigned long UNK_005ea366;
extern "C" unsigned long UNK_005ea416;
extern "C" unsigned long UNK_005ea43a;
extern "C" unsigned long UNK_005ea498;
extern "C" unsigned long UNK_005ea49a;
extern "C" unsigned long UNK_005ea55e;
extern "C" unsigned long UNK_005ea62e;
extern "C" unsigned long UNK_005ea62f;
extern "C" unsigned long UNK_005ea630;
extern "C" unsigned long UNK_005ea63a;
extern "C" unsigned long UNK_005ea652;
extern "C" unsigned long UNK_005ea6b0;
extern "C" unsigned long UNK_005ea702;
extern "C" unsigned long UNK_005ea7e4;
extern "C" unsigned long UNK_005ea8aa;
extern "C" unsigned long UNK_005ea9a8;
extern "C" unsigned long UNK_005ea9c2;
extern "C" unsigned long UNK_005eaa0e;
extern "C" unsigned long UNK_005eaaa8;
extern "C" unsigned long UNK_005eaac2;
extern "C" unsigned long UNK_005eaae4;
extern "C" unsigned long _UNK_005ea264;
extern "C" unsigned long _UNK_005ea268;
extern "C" unsigned long _UNK_005ea26c;
extern "C" unsigned long _UNK_005ea2e4;
extern "C" unsigned long _UNK_005ea2e8;
extern "C" unsigned long _UNK_005ea2fc;
extern "C" unsigned long _UNK_005ea324;
extern "C" unsigned long _UNK_005ea44c;
extern "C" unsigned long _UNK_005ea450;
extern "C" unsigned long _UNK_005ea454;
extern "C" unsigned long _UNK_005ea458;
extern "C" unsigned long _UNK_005ea45c;
extern "C" unsigned long _UNK_005ea460;
extern "C" unsigned long _UNK_005ea464;
extern "C" unsigned long _UNK_005ea468;
extern "C" unsigned long _UNK_005ea83c;
extern "C" unsigned long _UNK_005ea840;
extern "C" unsigned long _UNK_005ea844;
extern "C" unsigned long _UNK_005ea848;
extern "C" unsigned long _UNK_005ea84c;
extern "C" unsigned long _UNK_005ea850;
extern "C" unsigned long _UNK_005ea854;
extern "C" unsigned long _UNK_005ea858;
extern "C" unsigned long _UNK_005ea85c;
extern "C" unsigned long _UNK_005ea910;
extern "C" unsigned long _UNK_005eaa74;
extern "C" unsigned long _UNK_005eaa78;
extern "C" unsigned long _UNK_005eaa7c;
extern "C" unsigned long _UNK_005eab98;
extern "C" unsigned long _UNK_005eab9c;
extern "C" unsigned long _UNK_005eaba0;
extern "C" unsigned long extraout_r12;
extern "C" unsigned long unaff_r7;
extern "C" unsigned long g_005ea1b6;
extern "C" unsigned long g_005ea1b8;
extern "C" unsigned long g_005ea1fc;
extern "C" unsigned long g_005ea264;
extern "C" unsigned long g_005ea268;
extern "C" unsigned long g_005ea26c;
extern "C" unsigned long g_005ea278;
extern "C" unsigned long g_005ea2b2;
extern "C" unsigned long g_005ea2e4;
extern "C" unsigned long g_005ea2e8;
extern "C" unsigned long g_005ea2f8;
extern "C" unsigned long g_005ea2fc;
extern "C" unsigned long g_005ea320;
extern "C" unsigned long g_005ea324;
extern "C" unsigned long g_005ea366;
extern "C" unsigned long g_005ea416;
extern "C" unsigned long g_005ea43a;
extern "C" unsigned long g_005ea44c;
extern "C" unsigned long g_005ea450;
extern "C" unsigned long g_005ea454;
extern "C" unsigned long g_005ea458;
extern "C" unsigned long g_005ea45c;
extern "C" unsigned long g_005ea460;
extern "C" unsigned long g_005ea464;
extern "C" unsigned long g_005ea468;
extern "C" unsigned long g_005ea498;
extern "C" unsigned long g_005ea49a;
extern "C" unsigned long g_005ea55e;
extern "C" unsigned long g_005ea62e;
extern "C" unsigned long g_005ea62f;
extern "C" unsigned long g_005ea630;
extern "C" unsigned long g_005ea63a;
extern "C" unsigned long g_005ea652;
extern "C" unsigned long g_005ea6b0;
extern "C" unsigned long g_005ea702;
extern "C" unsigned long g_005ea7e4;
extern "C" unsigned long g_005ea83c;
extern "C" unsigned long g_005ea840;
extern "C" unsigned long g_005ea844;
extern "C" unsigned long g_005ea848;
extern "C" unsigned long g_005ea84c;
extern "C" unsigned long g_005ea850;
extern "C" unsigned long g_005ea854;
extern "C" unsigned long g_005ea858;
extern "C" unsigned long g_005ea85c;
extern "C" unsigned long g_005ea8aa;
extern "C" unsigned long g_005ea910;
extern "C" unsigned long g_005ea9a8;
extern "C" unsigned long g_005ea9c2;
extern "C" unsigned long g_005eaa0e;
extern "C" unsigned long g_005eaa74;
extern "C" unsigned long g_005eaa78;
extern "C" unsigned long g_005eaa7c;
extern "C" unsigned long g_005eaaa8;
extern "C" unsigned long g_005eaac2;
extern "C" unsigned long g_005eaae4;
extern "C" unsigned long g_005eab98;
extern "C" unsigned long g_005eab9c;
extern "C" unsigned long g_005eaba0;
int BLDebrisItemDataInfoDownPresenter::getCurrentNum() const
{
  return *(undefined4 *)(((int)this) + 0x18);
}

void BLDebrisItemDataInfoDownPresenter::setCurrentNum(int p1)
{
  *(undefined4 *)(((int)this) + 0x18) = p1;
  return;
}

BackPackItemData* BLDebrisItemDataInfoDownPresenter::getPackItemData() const
{
  return (BackPackItemData*)(*(undefined4 *)(((int)this) + 0x1c));
}

bool BLDebrisItemDataInfoDownPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLDebrisItemDataInfoDownPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLDebrisItemDataInfoDownPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLDebrisItemDataInfoDownPresenter::tick(float p1)
{
  return;
}

void BLDebrisItemDataInfoDownPresenter::setPackItemData(BackPackItemData* p1)
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


BLDebrisItemDataInfoDownPresenter::~BLDebrisItemDataInfoDownPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_005ea278 + g_005ea2e4);
  iVar3 = *(int *)((int)this + 4*(9));
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x4c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  if (iVar3 != 0) {
    *(int *)(iVar3 + 0x1c) = *(int *)(iVar3 + 0x18);
    if (*(int *)(iVar3 + 0x18) != 0) {
      (void)(::operator delete((void *)(*(int *)(iVar3 + 0x18))));
    }
    func_0079e2bc(iVar3 + 8);
    (void)(::operator delete((void *)(iVar3)));
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005ea2b2 + g_005ea2e8,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLDebrisItemDataInfoDownPresenter::onEnter()
{
  return;
}

void BLDebrisItemDataInfoDownPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  return;
}




void BLDebrisItemDataInfoDownPresenter::onReduce(cocos2d::CCObject* p1, unsigned int p2)
{
  int iVar1;
  
  iVar1 = *(int *)(((int)this) + 0x18) + -1;
  if (iVar1 < 1) {
    iVar1 = 1;
  }
  *(int *)(((int)this) + 0x18) = iVar1;
  BLDebrisItemDataInfoDownPresenter::updateNum();
  return;
}

void BLDebrisItemDataInfoDownPresenter::onAdd(cocos2d::CCObject* p1, unsigned int p2)
{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(((int)this) + 0x18) + 1;
  *(int *)(((int)this) + 0x18) = iVar2;
  iVar1 = *(int *)(*(int *)(((int)this) + 0x24) + 0xc);
  if (iVar1 < iVar2) {
    *(int *)(((int)this) + 0x18) = iVar1;
  }
  BLDebrisItemDataInfoDownPresenter::updateNum();
  return;
}

void BLDebrisItemDataInfoDownPresenter::onMax(cocos2d::CCObject* p1, unsigned int p2)
{
  *(undefined4 *)(((int)this) + 0x18) = *(undefined4 *)(*(int *)(((int)this) + 0x24) + 0xc);
  BLDebrisItemDataInfoDownPresenter::updateNum();
  return;
}

void BLDebrisItemDataInfoDownPresenter::onBackPackUpdate(cocos2d::CCObject* p1)
{
  if (*(int *)(((int)this) + 0x1c) != 0) {
    BLDebrisItemDataInfoDownPresenter::updateNum();
  }
  return;
}


void BLDebrisItemDataInfoDownPresenter::initPackItemData(BackPackItemData* p1)
{
  undefined4 uVar1;
  
  *(undefined4 *)(((int)this) + 0x18) = 1;
  uVar1 = (undefined4)(0 /* ctorZero */);
  BLDebrisItemDataInfoDownPresenter::initCommonData((CommonUseData*)uVar1);
  return;
}


undefined4 BLDebrisItemDataInfoDownPresenter::create()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x28))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

// ===== 修复: 补回被误删的函数占位 (7) =====
void BLDebrisItemDataInfoDownPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLDebrisItemDataInfoDownPresenter::onCompose(cocos2d::CCObject* p1, unsigned int p2)
{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [4];
  undefined4 auStack_1c [2];
  
  piVar1 = (int *)((DataCacheManager *)this)->shareManager();
  uVar2 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x70)))());
  iVar3 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)uVar2)->objectForKey(**(undefined4 **)(((int)this) + 0x24)));
  if ((iVar3 != 0) &&
     (piVar1 = (int *)func_0079e55c(iVar3,*(undefined4 *)((unsigned char *)((char *)&g_005ea1b6 + (intptr_t)(g_005ea264))),
                                      *(undefined4 *)((unsigned char *)((char *)&g_005ea1b8 + (intptr_t)(g_005ea268))),0),
     piVar1 != (int *)0x0)) {
    iVar3 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar1) + (0x28)))());
    uVar2 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x30)))(piVar1));
    uVar4 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x38)))(piVar1));
    if (*(int *)(*(int *)(((int)this) + 0x24) + 0xc) < iVar3) {
      uVar2 = (undefined4)(((Toast *)this)->sharedToast());
      uVar4 = (undefined4)(((BLLanguage *)this)->share());
      func_0079e45c(auStack_20,(unsigned char *)((char *)&g_005ea1fc + (intptr_t)(g_005ea26c)),auStack_24);
      (((BLLanguage *)this))->getString(*(std::string *)auStack_1c);
      ((Toast *)uVar2)->showToast((char const*)auStack_1c[0]);
      func_0079e2bc(auStack_1c);
      func_0079e2bc(auStack_20);
    }
    else {
      uVar5 = (undefined4)(((DataManager *)this)->shareDataManager());
      iVar3 = (undefined4)(intptr_t)(((DataManager *)uVar5)->isEnoughVirNumber(uVar2, uVar4, 1));
      if (iVar3 != 0) {
        piVar6 = (int *)((DataManager *)this)->shareDataManager();
        piVar6 = (int *)(**(code **)(*(int *)(piVar6) + (0x28)))();
        uVar2 = (undefined4)((**(code **)(*(int *)(piVar6) + (0x50)))());
        ((BackPackData *)uVar2)->debrisCompose((DebrisComposeData*)piVar1, (CommonUseData*)*(undefined4 *)(((int)this) + 0x24));
      }
    }
  }
  return;
}

void BLDebrisItemDataInfoDownPresenter::initWithView(BLDebrisItemDataInfoDownView* p1)
{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  code *pcVar4;
  undefined1 auStack_48 [4];
  undefined1 auStack_44 [4];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  *(undefined4 *)(((int)this) + 0x20) = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  piVar2 = (int *)((BLDebrisItemDataInfoDownView *)(p1))->getBtnSell();
  iVar1 = (undefined4)(intptr_t)(g_005ea44c);
  uStack_40 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_005ea366 + (intptr_t)(g_005ea450)) + g_005ea44c));
  uStack_3c = (undefined4)(0);
  (**(code **)(*(int *)(piVar2) + (0x254)))(piVar2,((int)this),uStack_40,0,0x20);
  piVar2 = (int *)((BLDebrisItemDataInfoDownView *)(*(undefined4 *)(((int)this) + 0x20)))->getBtnCompose();
  uStack_38 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_005ea366 + (intptr_t)(g_005ea454)) + iVar1));
  uStack_34 = (undefined4)(0);
  (**(code **)(*(int *)(piVar2) + (0x254)))(piVar2,((int)this),uStack_38,0,0x20);
  piVar2 = (int *)((BLDebrisItemDataInfoDownView *)(*(undefined4 *)(((int)this) + 0x20)))->getBtnReduce()
  ;
  uStack_30 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_005ea366 + (intptr_t)(g_005ea458)) + iVar1));
  uStack_2c = (undefined4)(0);
  (**(code **)(*(int *)(piVar2) + (0x254)))(piVar2,((int)this),uStack_30,0,0x20);
  piVar2 = (int *)((BLDebrisItemDataInfoDownView *)(*(undefined4 *)(((int)this) + 0x20)))->getBtnAdd();
  uStack_28 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_005ea366 + (intptr_t)(g_005ea45c)) + iVar1));
  uStack_24 = (undefined4)(0);
  (**(code **)(*(int *)(piVar2) + (0x254)))(piVar2,((int)this),uStack_28,0,0x20);
  piVar2 = (int *)((BLDebrisItemDataInfoDownView *)(*(undefined4 *)(((int)this) + 0x20)))->getBtnMax();
  uStack_20 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_005ea366 + (intptr_t)(g_005ea460)) + iVar1));
  uStack_1c = (undefined4)(0);
  (**(code **)(*(int *)(piVar2) + (0x254)))(piVar2,((int)this),uStack_20,0,0x20);
  piVar2 = (int *)((BLDebrisItemDataInfoDownView *)(*(undefined4 *)(((int)this) + 0x20)))->getBtnSell();
  pcVar4 = *(code **)(*piVar2 + 0x26c);
  func_0079e45c(auStack_44,(unsigned char *)((char *)&g_005ea416 + (intptr_t)(g_005ea464)),auStack_48);
  (*pcVar4)(piVar2,auStack_44);
  func_0079e2bc(auStack_44);
  uVar3 = (undefined4)(((BLDebrisItemDataInfoDownView *)(*(undefined4 *)(((int)this) + 0x20)))->getLabNum());
  ((cocos2d::CCLabelTTF *)(uVar3))->enableStroke(*(cocos2d::_ccColor3B const*)(unsigned char *)((char *)&g_005ea43a + (intptr_t)(g_005ea468)), 0x3f800000, 1);
  return;
}

void BLDebrisItemDataInfoDownPresenter::onSell(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLDebrisItemDataInfoDownPresenter::updateNum()
{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [4];
  undefined4 auStack_1c [2];
  
  iVar4 = (undefined4)(intptr_t)(*(int *)(*(int *)(((int)this) + 0x24) + 0xc));
  iVar2 = (undefined4)(intptr_t)(*(int *)(((int)this) + 0x18));
  if (iVar4 < *(int *)(((int)this) + 0x18)) {
    iVar2 = (undefined4)(intptr_t)(iVar4);
  }
  *(int *)(((int)this) + 0x18) = iVar2;
  piVar1 = (int *)((BLDebrisItemDataInfoDownView *)*(undefined4 *)(((int)this) + 0x20))->getLabNum();
  pcVar3 = *(code **)(*piVar1 + 0x234);
  ConvertToString<int>(auStack_28, *(undefined4 *)(((int)this) + 0x18), 0);
  func_0079e53c(auStack_24,auStack_28);
  func_0079e854(auStack_24,(unsigned char *)((char *)&g_005ea8aa + (intptr_t)(g_005ea910)));
  ConvertToString<int>(auStack_20, iVar4, 0);
  func_0042f3fc(auStack_1c,auStack_24,auStack_20);
  (*pcVar3)(piVar1,auStack_1c[0]);
  func_0079e2bc(auStack_1c);
  func_0079e2bc(auStack_20);
  func_0079e2bc(auStack_24);
  func_0079e2bc(auStack_28);
  return;
}

void BLDebrisItemDataInfoDownPresenter::initCommonData(CommonUseData* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

BLDebrisItemDataInfoDownPresenter::BLDebrisItemDataInfoDownPresenter()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
