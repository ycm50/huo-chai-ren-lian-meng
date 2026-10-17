#include "BLOtherItemDataInfoDownPresenter.h"
#include "CCLabelTTF.h"
#include "CCNotificationCenter.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "CCObject.h"
#include "CCTouch.h"
#include "CCDirector.h"
#include "CommonUseData.h"
#include "BLChestFestivalPresenter.h"
#include "BLChestFestivalView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLOtherItemDataInfoDownView.h"
#include "BackPackData.h"
#include "BackPackItemData.h"
#include "CampaignData.h"
#include "ChestFestivalData.h"
#include "DataCacheManager.h"
#include "DataManager.h"
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
template <class T, class... A> std::string ConvertToString(A...);
extern "C" long long func_0042f3fc(...);
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e34c(...);
extern "C" long long func_0079e3bc(...);
extern "C" long long func_0079e41c(...);
extern "C" long long func_0079e42c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e5dc(...);
extern "C" long long func_0079e6c0(...);
extern "C" long long func_0079e734(...);
extern "C" long long func_0079e784(...);
extern "C" long long func_0079e854(...);
extern "C" long long func_0079e934(...);
extern "C" long long func_0079e944(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_005f482c;
extern "C" unsigned long UNK_005f482e;
extern "C" unsigned long UNK_005f4886;
extern "C" unsigned long UNK_005f4936;
extern "C" unsigned long UNK_005f495a;
extern "C" unsigned long UNK_005f49ba;
extern "C" unsigned long UNK_005f49bc;
extern "C" unsigned long UNK_005f4a6a;
extern "C" unsigned long UNK_005f4b2c;
extern "C" unsigned long UNK_005f4b2d;
extern "C" unsigned long UNK_005f4b2e;
extern "C" unsigned long UNK_005f4b34;
extern "C" unsigned long UNK_005f4b4e;
extern "C" unsigned long UNK_005f4ba4;
extern "C" unsigned long UNK_005f4bf8;
extern "C" unsigned long UNK_005f4cda;
extern "C" unsigned long UNK_005f4d9c;
extern "C" unsigned long UNK_005f4e9c;
extern "C" unsigned long UNK_005f4eb6;
extern "C" unsigned long UNK_005f4f08;
extern "C" unsigned long UNK_005f4f98;
extern "C" unsigned long UNK_005f4fd2;
extern "C" unsigned long UNK_005f5018;
extern "C" unsigned long UNK_005f5040;
extern "C" unsigned long UNK_005f5058;
extern "C" unsigned long UNK_005f5072;
extern "C" unsigned long UNK_005f5094;
extern "C" unsigned long UNK_005f51b4;
extern "C" unsigned long UNK_005f51d0;
extern "C" unsigned long UNK_005f5200;
extern "C" unsigned long UNK_005f5226;
extern "C" unsigned long UNK_005f52c8;
extern "C" unsigned long UNK_005f53c8;
extern "C" unsigned long UNK_005f53f6;
extern "C" unsigned long UNK_005f5450;
extern "C" unsigned long UNK_005f5510;
extern "C" unsigned long _UNK_005f4838;
extern "C" unsigned long _UNK_005f483c;
extern "C" unsigned long _UNK_005f496c;
extern "C" unsigned long _UNK_005f4970;
extern "C" unsigned long _UNK_005f4974;
extern "C" unsigned long _UNK_005f4978;
extern "C" unsigned long _UNK_005f497c;
extern "C" unsigned long _UNK_005f4980;
extern "C" unsigned long _UNK_005f4984;
extern "C" unsigned long _UNK_005f4988;
extern "C" unsigned long _UNK_005f4d2c;
extern "C" unsigned long _UNK_005f4d30;
extern "C" unsigned long _UNK_005f4d34;
extern "C" unsigned long _UNK_005f4d38;
extern "C" unsigned long _UNK_005f4d3c;
extern "C" unsigned long _UNK_005f4d40;
extern "C" unsigned long _UNK_005f4d44;
extern "C" unsigned long _UNK_005f4d48;
extern "C" unsigned long _UNK_005f4d4c;
extern "C" unsigned long _UNK_005f4e00;
extern "C" unsigned long _UNK_005f4f6c;
extern "C" unsigned long _UNK_005f4f70;
extern "C" unsigned long _UNK_005f4f74;
extern "C" unsigned long _UNK_005f5004;
extern "C" unsigned long _UNK_005f5008;
extern "C" unsigned long _UNK_005f501c;
extern "C" unsigned long _UNK_005f5044;
extern "C" unsigned long _UNK_005f5144;
extern "C" unsigned long _UNK_005f5148;
extern "C" unsigned long _UNK_005f514c;
extern "C" unsigned long _UNK_005f5280;
extern "C" unsigned long _UNK_005f5284;
extern "C" unsigned long _UNK_005f5288;
extern "C" unsigned long _UNK_005f528c;
extern "C" unsigned long _UNK_005f5290;
extern "C" unsigned long _UNK_005f5294;
extern "C" unsigned long _UNK_005f5298;
extern "C" unsigned long _UNK_005f529c;
extern "C" unsigned long _UNK_005f52a0;
extern "C" unsigned long _UNK_005f52a4;
extern "C" unsigned long _UNK_005f52a8;
extern "C" unsigned long _UNK_005f52ac;
extern "C" unsigned long _UNK_005f52b0;
extern "C" unsigned long _UNK_005f52b4;
extern "C" unsigned long _UNK_005f5580;
extern "C" unsigned long _UNK_005f5584;
extern "C" unsigned long _UNK_005f5588;
extern "C" unsigned long _UNK_005f558c;
extern "C" unsigned long _UNK_005f5590;
extern "C" unsigned long _UNK_005f5594;
extern "C" unsigned long _UNK_005f5598;
extern "C" unsigned long _UNK_005f559c;
extern "C" unsigned long _UNK_005f55a0;
extern "C" unsigned long _UNK_005f55a4;
extern "C" unsigned long _UNK_005f55a8;
extern "C" unsigned long _UNK_005f55ac;
extern "C" unsigned long _UNK_005f55b0;
extern "C" unsigned long _UNK_005f55b4;
extern "C" unsigned long _UNK_005f55b8;
extern "C" unsigned long _UNK_005f55bc;
extern "C" unsigned long _UNK_005f55c0;
extern "C" unsigned long _UNK_005f55c4;
extern "C" unsigned long _UNK_005f55c8;
extern "C" unsigned long _UNK_005f55cc;
extern "C" unsigned long _UNK_005f55d0;
extern "C" unsigned long _UNK_005f55d4;
extern "C" unsigned long _UNK_005f55d8;
extern "C" unsigned long extraout_r12;
extern "C" unsigned long extraout_r3;
extern "C" unsigned long extraout_r3_00;
extern "C" unsigned long unaff_r7;
extern "C" unsigned long g_005f482c;
extern "C" unsigned long g_005f482e;
extern "C" unsigned long g_005f4838;
extern "C" unsigned long g_005f483c;
extern "C" unsigned long g_005f4886;
extern "C" unsigned long g_005f4936;
extern "C" unsigned long g_005f495a;
extern "C" unsigned long g_005f496c;
extern "C" unsigned long g_005f4970;
extern "C" unsigned long g_005f4974;
extern "C" unsigned long g_005f4978;
extern "C" unsigned long g_005f497c;
extern "C" unsigned long g_005f4980;
extern "C" unsigned long g_005f4984;
extern "C" unsigned long g_005f4988;
extern "C" unsigned long g_005f49ba;
extern "C" unsigned long g_005f49bc;
extern "C" unsigned long g_005f4a6a;
extern "C" unsigned long g_005f4b2c;
extern "C" unsigned long g_005f4b2d;
extern "C" unsigned long g_005f4b2e;
extern "C" unsigned long g_005f4b34;
extern "C" unsigned long g_005f4b4e;
extern "C" unsigned long g_005f4ba4;
extern "C" unsigned long g_005f4bf8;
extern "C" unsigned long g_005f4cda;
extern "C" unsigned long g_005f4d2c;
extern "C" unsigned long g_005f4d30;
extern "C" unsigned long g_005f4d34;
extern "C" unsigned long g_005f4d38;
extern "C" unsigned long g_005f4d3c;
extern "C" unsigned long g_005f4d40;
extern "C" unsigned long g_005f4d44;
extern "C" unsigned long g_005f4d48;
extern "C" unsigned long g_005f4d4c;
extern "C" unsigned long g_005f4d9c;
extern "C" unsigned long g_005f4e00;
extern "C" unsigned long g_005f4e9c;
extern "C" unsigned long g_005f4eb6;
extern "C" unsigned long g_005f4f08;
extern "C" unsigned long g_005f4f6c;
extern "C" unsigned long g_005f4f70;
extern "C" unsigned long g_005f4f74;
extern "C" unsigned long g_005f4f98;
extern "C" unsigned long g_005f4fd2;
extern "C" unsigned long g_005f5004;
extern "C" unsigned long g_005f5008;
extern "C" unsigned long g_005f5018;
extern "C" unsigned long g_005f501c;
extern "C" unsigned long g_005f5040;
extern "C" unsigned long g_005f5044;
extern "C" unsigned long g_005f5058;
extern "C" unsigned long g_005f5072;
extern "C" unsigned long g_005f5094;
extern "C" unsigned long g_005f5144;
extern "C" unsigned long g_005f5148;
extern "C" unsigned long g_005f514c;
extern "C" unsigned long g_005f51b4;
extern "C" unsigned long g_005f51d0;
extern "C" unsigned long g_005f5200;
extern "C" unsigned long g_005f5226;
extern "C" unsigned long g_005f5280;
extern "C" unsigned long g_005f5284;
extern "C" unsigned long g_005f5288;
extern "C" unsigned long g_005f528c;
extern "C" unsigned long g_005f5290;
extern "C" unsigned long g_005f5294;
extern "C" unsigned long g_005f5298;
extern "C" unsigned long g_005f529c;
extern "C" unsigned long g_005f52a0;
extern "C" unsigned long g_005f52a4;
extern "C" unsigned long g_005f52a8;
extern "C" unsigned long g_005f52ac;
extern "C" unsigned long g_005f52b0;
extern "C" unsigned long g_005f52b4;
extern "C" unsigned long g_005f52c8;
extern "C" unsigned long g_005f53c8;
extern "C" unsigned long g_005f53f6;
extern "C" unsigned long g_005f5450;
extern "C" unsigned long g_005f5510;
extern "C" unsigned long g_005f5580;
extern "C" unsigned long g_005f5584;
extern "C" unsigned long g_005f5588;
extern "C" unsigned long g_005f558c;
extern "C" unsigned long g_005f5590;
extern "C" unsigned long g_005f5594;
extern "C" unsigned long g_005f5598;
extern "C" unsigned long g_005f559c;
extern "C" unsigned long g_005f55a0;
extern "C" unsigned long g_005f55a4;
extern "C" unsigned long g_005f55a8;
extern "C" unsigned long g_005f55ac;
extern "C" unsigned long g_005f55b0;
extern "C" unsigned long g_005f55b4;
extern "C" unsigned long g_005f55b8;
extern "C" unsigned long g_005f55bc;
extern "C" unsigned long g_005f55c0;
extern "C" unsigned long g_005f55c4;
extern "C" unsigned long g_005f55c8;
extern "C" unsigned long g_005f55cc;
extern "C" unsigned long g_005f55d0;
extern "C" unsigned long g_005f55d4;
extern "C" unsigned long g_005f55d8;
int BLOtherItemDataInfoDownPresenter::getCurrentNum() const
{
  return *(undefined4 *)(((int)this) + 0x18);
}

void BLOtherItemDataInfoDownPresenter::setCurrentNum(int p1)
{
  *(undefined4 *)(((int)this) + 0x18) = p1;
  return;
}

bool BLOtherItemDataInfoDownPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLOtherItemDataInfoDownPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLOtherItemDataInfoDownPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLOtherItemDataInfoDownPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLOtherItemDataInfoDownPresenter::tick(float p1)
{
  return;
}


void BLOtherItemDataInfoDownPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar2)->removeAllObservers((cocos2d::CCObject*)((int)this));
  return;
}


void BLOtherItemDataInfoDownPresenter::onBackPackUpdate(cocos2d::CCObject* p1)
{
  return;
}



void BLOtherItemDataInfoDownPresenter::onReduce(cocos2d::CCObject* p1, unsigned int p2)
{
  int iVar1;
  
  iVar1 = *(int *)(((int)this) + 0x18) + -1;
  if (iVar1 < 1) {
    iVar1 = 1;
  }
  *(int *)(((int)this) + 0x18) = iVar1;
  BLOtherItemDataInfoDownPresenter::updateNum();
  return;
}

void BLOtherItemDataInfoDownPresenter::onAdd(cocos2d::CCObject* p1, unsigned int p2)
{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(((int)this) + 0x18) + 1;
  *(int *)(((int)this) + 0x18) = iVar2;
  iVar1 = *(int *)(*(int *)(((int)this) + 0x20) + 0xc);
  if (iVar1 < iVar2) {
    *(int *)(((int)this) + 0x18) = iVar1;
  }
  if (10 < *(int *)(((int)this) + 0x18)) {
    *(undefined4 *)(((int)this) + 0x18) = 10;
  }
  BLOtherItemDataInfoDownPresenter::updateNum();
  return;
}

void BLOtherItemDataInfoDownPresenter::onMax(cocos2d::CCObject* p1, unsigned int p2)
{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(((int)this) + 0x20) + 0xc);
  if (10 < iVar1) {
    iVar1 = 10;
  }
  *(int *)(((int)this) + 0x18) = iVar1;
  BLOtherItemDataInfoDownPresenter::updateNum();
  return;
}


void BLOtherItemDataInfoDownPresenter::initPackItemData(BackPackItemData* p1)
{
  undefined4 uVar1;
  
  *(undefined4 *)(((int)this) + 0x18) = 1;
  uVar1 = (undefined4)(0 /* ctorZero */);
  BLOtherItemDataInfoDownPresenter::initCommonData((CommonUseData*)uVar1);
  return;
}

BLOtherItemDataInfoDownPresenter::~BLOtherItemDataInfoDownPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = (undefined4)(intptr_t)(*(int *)((unsigned char *)((char *)&g_005f4f98 + (intptr_t)(g_005f5004))));
  iVar3 = (undefined4)(intptr_t)(*(int *)((int)this + 4*(8)));
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x44;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  if (iVar3 != 0) {
    *(undefined4 *)(iVar3 + 0x1c) = *(undefined4 *)(iVar3 + 0x18);
    ((std::vector<int, std::allocator<int>> *)iVar3 + 0x18)->~vector();
    func_0079e2bc(iVar3 + 8);
    (void)(::operator delete((void *)(iVar3)));
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,(unsigned char *)((char *)&g_005f4fd2 + (intptr_t)(g_005f5008)),&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLOtherItemDataInfoDownPresenter::BLOtherItemDataInfoDownPresenter()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

undefined4 BLOtherItemDataInfoDownPresenter::create()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x24))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

// ===== 修复: 补回被误删的函数占位 (7) =====
void BLOtherItemDataInfoDownPresenter::onEnter()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLOtherItemDataInfoDownPresenter::initWithView(BLOtherItemDataInfoDownView* p1)
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
  
  *(undefined4 *)(((int)this) + 0x1c) = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  piVar2 = (int *)((BLOtherItemDataInfoDownView *)(p1))->getBtnSell();
  iVar1 = (undefined4)(intptr_t)(g_005f496c);
  uStack_40 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_005f4886 + (intptr_t)(g_005f4970)) + g_005f496c));
  uStack_3c = (undefined4)(0);
  (**(code **)(*(int *)(piVar2) + (0x254)))(piVar2,((int)this),uStack_40,0,0x20);
  piVar2 = (int *)((BLOtherItemDataInfoDownView *)(*(undefined4 *)(((int)this) + 0x1c)))->getBtnCompose()
  ;
  uStack_38 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_005f4886 + (intptr_t)(g_005f4974)) + iVar1));
  uStack_34 = (undefined4)(0);
  (**(code **)(*(int *)(piVar2) + (0x254)))(piVar2,((int)this),uStack_38,0,0x20);
  piVar2 = (int *)((BLOtherItemDataInfoDownView *)(*(undefined4 *)(((int)this) + 0x1c)))->getBtnReduce();
  uStack_30 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_005f4886 + (intptr_t)(g_005f4978)) + iVar1));
  uStack_2c = (undefined4)(0);
  (**(code **)(*(int *)(piVar2) + (0x254)))(piVar2,((int)this),uStack_30,0,0x20);
  piVar2 = (int *)((BLOtherItemDataInfoDownView *)(*(undefined4 *)(((int)this) + 0x1c)))->getBtnAdd();
  uStack_28 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_005f4886 + (intptr_t)(g_005f497c)) + iVar1));
  uStack_24 = (undefined4)(0);
  (**(code **)(*(int *)(piVar2) + (0x254)))(piVar2,((int)this),uStack_28,0,0x20);
  piVar2 = (int *)((BLOtherItemDataInfoDownView *)(*(undefined4 *)(((int)this) + 0x1c)))->getBtnMax();
  uStack_20 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_005f4886 + (intptr_t)(g_005f4980)) + iVar1));
  uStack_1c = (undefined4)(0);
  (**(code **)(*(int *)(piVar2) + (0x254)))(piVar2,((int)this),uStack_20,0,0x20);
  piVar2 = (int *)((BLOtherItemDataInfoDownView *)(*(undefined4 *)(((int)this) + 0x1c)))->getBtnSell();
  pcVar4 = *(code **)(*piVar2 + 0x26c);
  func_0079e45c(auStack_44,(unsigned char *)((char *)&g_005f4936 + (intptr_t)(g_005f4984)),auStack_48);
  (*pcVar4)(piVar2,auStack_44);
  func_0079e2bc(auStack_44);
  uVar3 = (undefined4)(((BLOtherItemDataInfoDownView *)(*(undefined4 *)(((int)this) + 0x1c)))->getLabNum());
  ((cocos2d::CCLabelTTF *)(uVar3))->enableStroke(*(cocos2d::_ccColor3B const*)(unsigned char *)((char *)&g_005f495a + (intptr_t)(g_005f4988)), 0x3f800000, 1);
  return;
}

void BLOtherItemDataInfoDownPresenter::onSell(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLOtherItemDataInfoDownPresenter::updateNum()
{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [4];
  undefined4 auStack_1c [2];
  
  iVar4 = (undefined4)(intptr_t)(*(int *)(*(int *)(((int)this) + 0x20) + 0xc));
  iVar2 = (undefined4)(intptr_t)(*(int *)(((int)this) + 0x18));
  if (iVar4 < *(int *)(((int)this) + 0x18)) {
    iVar2 = (undefined4)(intptr_t)(iVar4);
  }
  *(int *)(((int)this) + 0x18) = iVar2;
  if (10 < iVar4) {
    iVar4 = 10;
  }
  piVar1 = (int *)((BLOtherItemDataInfoDownView *)*(undefined4 *)(((int)this) + 0x1c))->getLabNum();
  pcVar3 = *(code **)(*piVar1 + 0x234);
  ConvertToString<int>(auStack_28, *(undefined4 *)(((int)this) + 0x18), 0);
  func_0079e53c(auStack_24,auStack_28);
  func_0079e854(auStack_24,(unsigned char *)((char *)&g_005f4d9c + (intptr_t)(g_005f4e00)));
  ConvertToString<int>(auStack_20, iVar4, 0);
  func_0042f3fc(auStack_1c,auStack_24,auStack_20);
  (*pcVar3)(piVar1,auStack_1c[0]);
  func_0079e2bc(auStack_1c);
  func_0079e2bc(auStack_20);
  func_0079e2bc(auStack_24);
  func_0079e2bc(auStack_28);
  return;
}

void BLOtherItemDataInfoDownPresenter::initCommonData(CommonUseData* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLOtherItemDataInfoDownPresenter::onUse(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLOtherItemDataInfoDownPresenter::goToUIchestFestival(cocos2d::CCObject* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
