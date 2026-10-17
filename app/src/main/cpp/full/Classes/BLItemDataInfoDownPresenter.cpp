#include "BLItemDataInfoDownPresenter.h"
#include "CCLabelTTF.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "CCObject.h"
#include "CCTouch.h"
#include "CCDirector.h"
#include "CommonUseData.h"
#include "BLItemDataInfoDownView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BackPackData.h"
#include "BackPackItemData.h"
#include "DataCacheManager.h"
#include "DataManager.h"
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
extern "C" long long func_0042f3fc(...);
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4bc(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e5dc(...);
extern "C" long long func_0079e6c0(...);
extern "C" long long func_0079e734(...);
extern "C" long long func_0079e784(...);
extern "C" long long func_0079e934(...);
extern "C" long long func_0079e944(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_005ed138;
extern "C" unsigned long UNK_005ed172;
extern "C" unsigned long UNK_005ed1b8;
extern "C" unsigned long UNK_005ed1e0;
extern "C" unsigned long UNK_005ed226;
extern "C" unsigned long UNK_005ed2d6;
extern "C" unsigned long UNK_005ed2fa;
extern "C" unsigned long UNK_005ed358;
extern "C" unsigned long UNK_005ed35a;
extern "C" unsigned long UNK_005ed38a;
extern "C" unsigned long UNK_005ed436;
extern "C" unsigned long UNK_005ed4fc;
extern "C" unsigned long UNK_005ed4fd;
extern "C" unsigned long UNK_005ed4fe;
extern "C" unsigned long UNK_005ed508;
extern "C" unsigned long UNK_005ed520;
extern "C" unsigned long UNK_005ed57e;
extern "C" unsigned long UNK_005ed5d0;
extern "C" unsigned long UNK_005ed6b2;
extern "C" unsigned long UNK_005ed750;
extern "C" unsigned long UNK_005ed754;
extern "C" unsigned long UNK_005ed794;
extern "C" unsigned long UNK_005ed832;
extern "C" unsigned long UNK_005ed892;
extern "C" unsigned long UNK_005ed8f8;
extern "C" unsigned long UNK_005ed972;
extern "C" unsigned long UNK_005ed973;
extern "C" unsigned long UNK_005ed974;
extern "C" unsigned long UNK_005ed988;
extern "C" unsigned long UNK_005edaf0;
extern "C" unsigned long UNK_005edb1c;
extern "C" unsigned long UNK_005edc4a;
extern "C" unsigned long UNK_005edd64;
extern "C" unsigned long UNK_005edd7e;
extern "C" unsigned long UNK_005eddaa;
extern "C" unsigned long UNK_005eddac;
extern "C" unsigned long UNK_005eddce;
extern "C" unsigned long UNK_005ede06;
extern "C" unsigned long UNK_005ede90;
extern "C" unsigned long UNK_005edeb8;
extern "C" unsigned long UNK_005edeec;
extern "C" unsigned long UNK_005edf5a;
extern "C" unsigned long _UNK_005ed1a4;
extern "C" unsigned long _UNK_005ed1a8;
extern "C" unsigned long _UNK_005ed1bc;
extern "C" unsigned long _UNK_005ed1e4;
extern "C" unsigned long _UNK_005ed30c;
extern "C" unsigned long _UNK_005ed310;
extern "C" unsigned long _UNK_005ed314;
extern "C" unsigned long _UNK_005ed318;
extern "C" unsigned long _UNK_005ed31c;
extern "C" unsigned long _UNK_005ed320;
extern "C" unsigned long _UNK_005ed324;
extern "C" unsigned long _UNK_005ed328;
extern "C" unsigned long _UNK_005ed6fc;
extern "C" unsigned long _UNK_005ed700;
extern "C" unsigned long _UNK_005ed704;
extern "C" unsigned long _UNK_005ed708;
extern "C" unsigned long _UNK_005ed70c;
extern "C" unsigned long _UNK_005ed710;
extern "C" unsigned long _UNK_005ed714;
extern "C" unsigned long _UNK_005ed718;
extern "C" unsigned long _UNK_005ed71c;
extern "C" unsigned long _UNK_005ed720;
extern "C" unsigned long _UNK_005eda84;
extern "C" unsigned long _UNK_005eda88;
extern "C" unsigned long _UNK_005eda8c;
extern "C" unsigned long _UNK_005eda90;
extern "C" unsigned long _UNK_005eda94;
extern "C" unsigned long _UNK_005eda98;
extern "C" unsigned long _UNK_005eda9c;
extern "C" unsigned long _UNK_005edaa0;
extern "C" unsigned long _UNK_005edbf8;
extern "C" unsigned long _UNK_005edbfc;
extern "C" unsigned long _UNK_005edc00;
extern "C" unsigned long _UNK_005edcac;
extern "C" unsigned long _UNK_005ede6c;
extern "C" unsigned long _UNK_005ede70;
extern "C" unsigned long _UNK_005ede74;
extern "C" unsigned long _UNK_005ede78;
extern "C" unsigned long _UNK_005ede7c;
extern "C" unsigned long _UNK_005ede80;
extern "C" unsigned long _UNK_005edea4;
extern "C" unsigned long _UNK_005edfa8;
extern "C" unsigned long _UNK_005edfac;
extern "C" unsigned long _UNK_005edfb0;
extern "C" unsigned long extraout_r12;
extern "C" unsigned long unaff_r7;
extern "C" unsigned long g_005ed138;
extern "C" unsigned long g_005ed172;
extern "C" unsigned long g_005ed1a4;
extern "C" unsigned long g_005ed1a8;
extern "C" unsigned long g_005ed1b8;
extern "C" unsigned long g_005ed1bc;
extern "C" unsigned long g_005ed1e0;
extern "C" unsigned long g_005ed1e4;
extern "C" unsigned long g_005ed226;
extern "C" unsigned long g_005ed2d6;
extern "C" unsigned long g_005ed2fa;
extern "C" unsigned long g_005ed30c;
extern "C" unsigned long g_005ed310;
extern "C" unsigned long g_005ed314;
extern "C" unsigned long g_005ed318;
extern "C" unsigned long g_005ed31c;
extern "C" unsigned long g_005ed320;
extern "C" unsigned long g_005ed324;
extern "C" unsigned long g_005ed328;
extern "C" unsigned long g_005ed358;
extern "C" unsigned long g_005ed35a;
extern "C" unsigned long g_005ed38a;
extern "C" unsigned long g_005ed436;
extern "C" unsigned long g_005ed4fc;
extern "C" unsigned long g_005ed4fd;
extern "C" unsigned long g_005ed4fe;
extern "C" unsigned long g_005ed508;
extern "C" unsigned long g_005ed520;
extern "C" unsigned long g_005ed57e;
extern "C" unsigned long g_005ed5d0;
extern "C" unsigned long g_005ed6b2;
extern "C" unsigned long g_005ed6fc;
extern "C" unsigned long g_005ed700;
extern "C" unsigned long g_005ed704;
extern "C" unsigned long g_005ed708;
extern "C" unsigned long g_005ed70c;
extern "C" unsigned long g_005ed710;
extern "C" unsigned long g_005ed714;
extern "C" unsigned long g_005ed718;
extern "C" unsigned long g_005ed71c;
extern "C" unsigned long g_005ed720;
extern "C" unsigned long g_005ed750;
extern "C" unsigned long g_005ed754;
extern "C" unsigned long g_005ed794;
extern "C" unsigned long g_005ed832;
extern "C" unsigned long g_005ed892;
extern "C" unsigned long g_005ed8f8;
extern "C" unsigned long g_005ed972;
extern "C" unsigned long g_005ed973;
extern "C" unsigned long g_005ed974;
extern "C" unsigned long g_005ed988;
extern "C" unsigned long g_005eda84;
extern "C" unsigned long g_005eda88;
extern "C" unsigned long g_005eda8c;
extern "C" unsigned long g_005eda90;
extern "C" unsigned long g_005eda94;
extern "C" unsigned long g_005eda98;
extern "C" unsigned long g_005eda9c;
extern "C" unsigned long g_005edaa0;
extern "C" unsigned long g_005edaf0;
extern "C" unsigned long g_005edb1c;
extern "C" unsigned long g_005edbf8;
extern "C" unsigned long g_005edbfc;
extern "C" unsigned long g_005edc00;
extern "C" unsigned long g_005edc4a;
extern "C" unsigned long g_005edcac;
extern "C" unsigned long g_005edd64;
extern "C" unsigned long g_005edd7e;
extern "C" unsigned long g_005eddaa;
extern "C" unsigned long g_005eddac;
extern "C" unsigned long g_005eddce;
extern "C" unsigned long g_005ede06;
extern "C" unsigned long g_005ede6c;
extern "C" unsigned long g_005ede70;
extern "C" unsigned long g_005ede74;
extern "C" unsigned long g_005ede78;
extern "C" unsigned long g_005ede7c;
extern "C" unsigned long g_005ede80;
extern "C" unsigned long g_005ede90;
extern "C" unsigned long g_005edea4;
extern "C" unsigned long g_005edeb8;
extern "C" unsigned long g_005edeec;
extern "C" unsigned long g_005edf5a;
extern "C" unsigned long g_005edfa8;
extern "C" unsigned long g_005edfac;
extern "C" unsigned long g_005edfb0;
int BLItemDataInfoDownPresenter::getCurrentNum() const
{
  return *(undefined4 *)(((int)this) + 0x1c);
}

void BLItemDataInfoDownPresenter::setCurrentNum(int p1)
{
  *(undefined4 *)(((int)this) + 0x1c) = p1;
  return;
}

int BLItemDataInfoDownPresenter::getNumMaxAdjuest() const
{
  return *(undefined4 *)(((int)this) + 0x20);
}

void BLItemDataInfoDownPresenter::setNumMaxAdjuest(int p1)
{
  *(undefined4 *)(((int)this) + 0x20) = p1;
  return;
}

BackPackItemData* BLItemDataInfoDownPresenter::getPackItemData() const
{
  return (BackPackItemData*)(*(undefined4 *)(((int)this) + 0x24));
}

bool BLItemDataInfoDownPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLItemDataInfoDownPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLItemDataInfoDownPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLItemDataInfoDownPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLItemDataInfoDownPresenter::tick(float p1)
{
  return;
}

void BLItemDataInfoDownPresenter::setPackItemData(BackPackItemData* p1)
{
  if (*(int *)(((int)this) + 0x24) != (int)(intptr_t)p1) {
    if ((int)(intptr_t)p1 != 0) {
      ((cocos2d::CCObject *)p1)->retain();
    }
    if (*(int *)(((int)this) + 0x24) != 0) {
      ((cocos2d::CCObject *)this)->release();
    }
    *(int *)(((int)this) + 0x24) = (undefined4)(intptr_t)p1;
  }
  return;
}

BLItemDataInfoDownPresenter::~BLItemDataInfoDownPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_005ed138 + g_005ed1a4);
  iVar3 = *(int *)((int)this + 4*(10));
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x54;
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
  func_0079e45c(&uStack_14,&g_005ed172 + g_005ed1a8,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLItemDataInfoDownPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  return;
}

void BLItemDataInfoDownPresenter::onEnter()
{
  return;
}





void BLItemDataInfoDownPresenter::onReduce(cocos2d::CCObject* p1, unsigned int p2)
{
  int iVar1;
  
  iVar1 = *(int *)(((int)this) + 0x1c) + -1;
  if (iVar1 < 1) {
    iVar1 = 1;
  }
  *(int *)(((int)this) + 0x1c) = iVar1;
  BLItemDataInfoDownPresenter::updateNum();
  return;
}

void BLItemDataInfoDownPresenter::onAdd(cocos2d::CCObject* p1, unsigned int p2)
{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(((int)this) + 0x1c) + 1;
  *(int *)(((int)this) + 0x1c) = iVar1;
  iVar2 = *(int *)(*(int *)(((int)this) + 0x28) + 0xc) - *(int *)(((int)this) + 0x20);
  if (iVar1 < iVar2) {
    iVar2 = iVar1;
  }
  *(int *)(((int)this) + 0x1c) = iVar2;
  BLItemDataInfoDownPresenter::updateNum();
  return;
}

void BLItemDataInfoDownPresenter::onMax(cocos2d::CCObject* p1, unsigned int p2)
{
  *(int *)(((int)this) + 0x1c) = *(int *)(*(int *)(((int)this) + 0x28) + 0xc) - *(int *)(((int)this) + 0x20);
  BLItemDataInfoDownPresenter::updateNum();
  return;
}

void BLItemDataInfoDownPresenter::onBackPackUpdate(cocos2d::CCObject* p1)
{
  if (*(int *)(((int)this) + 0x24) != 0) {
    BLItemDataInfoDownPresenter::updateNum();
  }
  return;
}

void BLItemDataInfoDownPresenter::setAdjustMaxNum(int p1)
{
  (**(code **)(*(int *)this + 0x38))();
  BLItemDataInfoDownPresenter::updateNum();
  return;
}


void BLItemDataInfoDownPresenter::initPackItemData(BackPackItemData* p1)
{
  undefined4 uVar1;
  
  cocos2d::CCLog((char const*)&g_005ede90 + g_005edea4);
  uVar1 = (undefined4)(0 /* ctorZero */);
  BLItemDataInfoDownPresenter::initCommonData((CommonUseData*)uVar1);
  return;
}

BLItemDataInfoDownPresenter::BLItemDataInfoDownPresenter()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

undefined4 BLItemDataInfoDownPresenter::create(BLItemDataInfoDownView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x2c))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

// ===== 修复: 补回被误删的函数占位 (5) =====
void BLItemDataInfoDownPresenter::initWithView(BLItemDataInfoDownView* p1)
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
  
  *(undefined4 *)(((int)this) + 0x18) = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  piVar2 = (int *)((BLItemDataInfoDownView *)(p1))->getBtnSell();
  iVar1 = (undefined4)(intptr_t)(g_005ed30c);
  uStack_40 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_005ed226 + (intptr_t)(g_005ed310)) + g_005ed30c));
  uStack_3c = (undefined4)(0);
  (**(code **)(*(int *)(piVar2) + (0x254)))(piVar2,((int)this),uStack_40,0,0x20);
  piVar2 = (int *)((BLItemDataInfoDownView *)(*(undefined4 *)(((int)this) + 0x18)))->getBtnUse();
  uStack_38 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_005ed226 + (intptr_t)(g_005ed314)) + iVar1));
  uStack_34 = (undefined4)(0);
  (**(code **)(*(int *)(piVar2) + (0x254)))(piVar2,((int)this),uStack_38,0,0x20);
  piVar2 = (int *)((BLItemDataInfoDownView *)(*(undefined4 *)(((int)this) + 0x18)))->getBtnReduce();
  uStack_30 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_005ed226 + (intptr_t)(g_005ed318)) + iVar1));
  uStack_2c = (undefined4)(0);
  (**(code **)(*(int *)(piVar2) + (0x254)))(piVar2,((int)this),uStack_30,0,0x20);
  piVar2 = (int *)((BLItemDataInfoDownView *)(*(undefined4 *)(((int)this) + 0x18)))->getBtnAdd();
  uStack_28 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_005ed226 + (intptr_t)(g_005ed31c)) + iVar1));
  uStack_24 = (undefined4)(0);
  (**(code **)(*(int *)(piVar2) + (0x254)))(piVar2,((int)this),uStack_28,0,0x20);
  piVar2 = (int *)((BLItemDataInfoDownView *)(*(undefined4 *)(((int)this) + 0x18)))->getBtnMax();
  uStack_20 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_005ed226 + (intptr_t)(g_005ed320)) + iVar1));
  uStack_1c = (undefined4)(0);
  (**(code **)(*(int *)(piVar2) + (0x254)))(piVar2,((int)this),uStack_20,0,0x20);
  piVar2 = (int *)((BLItemDataInfoDownView *)(*(undefined4 *)(((int)this) + 0x18)))->getBtnSell();
  pcVar4 = *(code **)(*piVar2 + 0x26c);
  func_0079e45c(auStack_44,(unsigned char *)((char *)&g_005ed2d6 + (intptr_t)(g_005ed324)),auStack_48);
  (*pcVar4)(piVar2,auStack_44);
  func_0079e2bc(auStack_44);
  uVar3 = (undefined4)(((BLItemDataInfoDownView *)(*(undefined4 *)(((int)this) + 0x18)))->getLabNum());
  ((cocos2d::CCLabelTTF *)(uVar3))->enableStroke(*(cocos2d::_ccColor3B const*)(unsigned char *)((char *)&g_005ed2fa + (intptr_t)(g_005ed328)), 0x3f800000, 1);
  return;
}

void BLItemDataInfoDownPresenter::onSell(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLItemDataInfoDownPresenter::onUse(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLItemDataInfoDownPresenter::updateNum()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLItemDataInfoDownPresenter::initCommonData(CommonUseData* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
