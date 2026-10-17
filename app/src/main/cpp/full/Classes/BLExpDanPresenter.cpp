#include "BLExpDanPresenter.h"
#include "CCGeometry.h"
#include "CCDictionary.h"
#include "ItemData.h"
#include "CCNotificationCenter.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "CCScale9Sprite.h"
#include "CCObject.h"
#include "CCTouch.h"
#include "CCDirector.h"
#include "BLExpDanView.h"
#include "BLLeakUtils.h"
#include "BackPackData.h"
#include "BackPackItemData.h"
#include "DataCacheManager.h"
#include "DataManager.h"
#include "Toast.h"
#include "UIManager.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <new>   // ghost_fix.js 自动补齐
using namespace cocos2d;
static inline undefined4 hw_fbits(float f) { undefined4 r; __builtin_memcpy(&r, &f, 4); return r; }
// 兜底声明
template <class T, class... A> std::string ConvertToString(A...);
extern "C" long long software_udf(...);

extern "C" long long func_0042f3fc(...);
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e50c(...);
extern "C" long long func_0079e51c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_005eae7c;
extern "C" unsigned long UNK_005eae94;
extern "C" unsigned long UNK_005eaeac;
extern "C" unsigned long UNK_005eaf08;
extern "C" unsigned long UNK_005eaf22;
extern "C" unsigned long UNK_005eaf68;
extern "C" unsigned long UNK_005eaf90;
extern "C" unsigned long UNK_005eafba;
extern "C" unsigned long UNK_005eaff2;
extern "C" unsigned long UNK_005eb06e;
extern "C" unsigned long UNK_005eb08c;
extern "C" unsigned long UNK_005eb08e;
extern "C" unsigned long UNK_005eb0b8;
extern "C" unsigned long UNK_005eb0ba;
extern "C" unsigned long UNK_005eb25e;
extern "C" unsigned long UNK_005eb436;
extern "C" unsigned long UNK_005eb4e6;
extern "C" unsigned long UNK_005eb4f8;
extern "C" unsigned long UNK_005eb514;
extern "C" unsigned long UNK_005eb554;
extern "C" unsigned long UNK_005eb5da;
extern "C" unsigned long UNK_005eb688;
extern "C" unsigned long UNK_005eb68c;
extern "C" unsigned long UNK_005eb75e;
extern "C" unsigned long UNK_005eb7cc;
extern "C" unsigned long UNK_005eb85c;
extern "C" unsigned long UNK_005eb85e;
extern "C" unsigned long _UNK_005eae80;
extern "C" unsigned long _UNK_005eae98;
extern "C" unsigned long _UNK_005eaeb0;
extern "C" unsigned long _UNK_005eaf54;
extern "C" unsigned long _UNK_005eaf58;
extern "C" unsigned long _UNK_005eaf6c;
extern "C" unsigned long _UNK_005eaf94;
extern "C" unsigned long _UNK_005eafa8;
extern "C" unsigned long _UNK_005eb01c;
extern "C" unsigned long _UNK_005eb020;
extern "C" unsigned long _UNK_005eb024;
extern "C" unsigned long _UNK_005eb074;
extern "C" unsigned long _UNK_005eb098;
extern "C" unsigned long _UNK_005eb09c;
extern "C" unsigned long _UNK_005eb144;
extern "C" unsigned long _UNK_005eb148;
extern "C" unsigned long _UNK_005eb4a8;
extern "C" unsigned long _UNK_005eb4ac;
extern "C" unsigned long _UNK_005eb4b0;
extern "C" unsigned long _UNK_005eb4b4;
extern "C" unsigned long _UNK_005eb4b8;
extern "C" unsigned long _UNK_005eb4bc;
extern "C" unsigned long _UNK_005eb4c0;
extern "C" unsigned long _UNK_005eb4c4;
extern "C" unsigned long _UNK_005eb4c8;
extern "C" unsigned long _UNK_005eb4cc;
extern "C" unsigned long _UNK_005eb4d0;
extern "C" unsigned long _UNK_005eb4d4;
extern "C" unsigned long _UNK_005eb584;
extern "C" unsigned long _UNK_005eb588;
extern "C" unsigned long _UNK_005eb58c;
extern "C" unsigned long _UNK_005eb590;
extern "C" unsigned long _UNK_005eb63c;
extern "C" unsigned long _UNK_005eb79c;
extern "C" unsigned long _UNK_005eb7a0;
extern "C" unsigned long _UNK_005eb7a4;
extern "C" unsigned long _UNK_005eb7a8;
extern "C" unsigned long _UNK_005eb7ac;
extern "C" unsigned long _UNK_005eb7b0;
extern "C" unsigned long _UNK_005eb7b4;
extern "C" unsigned long _UNK_005eb7b8;
extern "C" unsigned long _UNK_005eb7bc;
extern "C" unsigned long _UNK_005eb7d0;
extern "C" unsigned long _UNK_005eb9b8;
extern "C" unsigned long _UNK_005eb9bc;
extern "C" unsigned long _UNK_005eb9c0;
extern "C" unsigned long _UNK_005eb9c4;
extern "C" unsigned long _UNK_005eb9c8;
extern "C" unsigned long _UNK_005eb9cc;
extern "C" unsigned long _UNK_005eb9d0;
extern "C" unsigned long g_005eae7c;
extern "C" unsigned long g_005eae80;
extern "C" unsigned long g_005eae94;
extern "C" unsigned long g_005eae98;
extern "C" unsigned long g_005eaeac;
extern "C" unsigned long g_005eaeb0;
extern "C" unsigned long g_005eaf08;
extern "C" unsigned long g_005eaf22;
extern "C" unsigned long g_005eaf54;
extern "C" unsigned long g_005eaf58;
extern "C" unsigned long g_005eaf68;
extern "C" unsigned long g_005eaf6c;
extern "C" unsigned long g_005eaf90;
extern "C" unsigned long g_005eaf94;
extern "C" unsigned long g_005eafa8;
extern "C" unsigned long g_005eafba;
extern "C" unsigned long g_005eaff2;
extern "C" unsigned long g_005eb01c;
extern "C" unsigned long g_005eb020;
extern "C" unsigned long g_005eb024;
extern "C" unsigned long g_005eb06e;
extern "C" unsigned long g_005eb074;
extern "C" unsigned long g_005eb08c;
extern "C" unsigned long g_005eb08e;
extern "C" unsigned long g_005eb098;
extern "C" unsigned long g_005eb09c;
extern "C" unsigned long g_005eb0b8;
extern "C" unsigned long g_005eb0ba;
extern "C" unsigned long g_005eb144;
extern "C" unsigned long g_005eb148;
extern "C" unsigned long g_005eb25e;
extern "C" unsigned long g_005eb436;
extern "C" unsigned long g_005eb4a8;
extern "C" unsigned long g_005eb4ac;
extern "C" unsigned long g_005eb4b0;
extern "C" unsigned long g_005eb4b4;
extern "C" unsigned long g_005eb4b8;
extern "C" unsigned long g_005eb4bc;
extern "C" unsigned long g_005eb4c0;
extern "C" unsigned long g_005eb4c4;
extern "C" unsigned long g_005eb4c8;
extern "C" unsigned long g_005eb4cc;
extern "C" unsigned long g_005eb4d0;
extern "C" unsigned long g_005eb4d4;
extern "C" unsigned long g_005eb4e6;
extern "C" unsigned long g_005eb4f8;
extern "C" unsigned long g_005eb514;
extern "C" unsigned long g_005eb554;
extern "C" unsigned long g_005eb584;
extern "C" unsigned long g_005eb588;
extern "C" unsigned long g_005eb58c;
extern "C" unsigned long g_005eb590;
extern "C" unsigned long g_005eb5da;
extern "C" unsigned long g_005eb63c;
extern "C" unsigned long g_005eb688;
extern "C" unsigned long g_005eb68c;
extern "C" unsigned long g_005eb75e;
extern "C" unsigned long g_005eb79c;
extern "C" unsigned long g_005eb7a0;
extern "C" unsigned long g_005eb7a4;
extern "C" unsigned long g_005eb7a8;
extern "C" unsigned long g_005eb7ac;
extern "C" unsigned long g_005eb7b0;
extern "C" unsigned long g_005eb7b4;
extern "C" unsigned long g_005eb7b8;
extern "C" unsigned long g_005eb7bc;
extern "C" unsigned long g_005eb7cc;
extern "C" unsigned long g_005eb7d0;
extern "C" unsigned long g_005eb85c;
extern "C" unsigned long g_005eb85e;
extern "C" unsigned long g_005eb9b8;
extern "C" unsigned long g_005eb9bc;
extern "C" unsigned long g_005eb9c0;
extern "C" unsigned long g_005eb9c4;
extern "C" unsigned long g_005eb9c8;
extern "C" unsigned long g_005eb9cc;
extern "C" unsigned long g_005eb9d0;
void BLExpDanPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLExpDanPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLExpDanPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLExpDanPresenter::tick(float p1)
{
  return;
}

BLExpDanPresenter::~BLExpDanPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_005eaf08 + g_005eaf54);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x3c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005eaf22 + g_005eaf58,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLExpDanPresenter::onClose(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(g_005eafa8);
  return;
}

BLExpDanPresenter::BLExpDanPresenter()
{
  undefined4 p2 = 0;

  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar4 = *(int *)(&g_005eafba + g_005eb01c);
  *(int *)((int)this + 4*(5)) = iVar4 + 0x3c;
  *(int *)((int)this + 4*(6)) = 0;
  *(int *)((int)this + 4*(7)) = 0;
  iVar1 = g_005eb020;
  *(int *)this = iVar4 + 8;
  *(int *)((int)this + 4*(9)) = iVar1;
  piVar2 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar3 = (undefined4)((**(code **)(*piVar2 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar3)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 1);
  uVar3 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005eaff2 + g_005eb024,&piStack_18);
  ((BLLeakUtils *)uVar3)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

undefined4 BLExpDanPresenter::create(BLExpDanView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x28))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLExpDanPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar2)->removeObserver((cocos2d::CCObject*)((int)this), (char const*)&g_005eb06e + g_005eb074);
  return;
}








void BLExpDanPresenter::onMax(cocos2d::CCObject* p1, unsigned int p2)
{
  int iVar1;
  
  iVar1 = *(int *)(((int)this) + 0x1c);
  if (10 < iVar1) {
    iVar1 = 10;
  }
  *(int *)(((int)this) + 0x18) = iVar1;
  BLExpDanPresenter::updateNum();
  return;
}

void BLExpDanPresenter::onReduce(cocos2d::CCObject* p1, unsigned int p2)
{
  int iVar1;
  
  iVar1 = *(int *)(((int)this) + 0x18) + -1;
  if (iVar1 < 1) {
    iVar1 = 1;
  }
  *(int *)(((int)this) + 0x18) = iVar1;
  BLExpDanPresenter::updateNum();
  return;
}

void BLExpDanPresenter::onAdd(cocos2d::CCObject* p1, unsigned int p2)
{
  int iVar1;
  
  iVar1 = *(int *)(((int)this) + 0x18) + 1;
  *(int *)(((int)this) + 0x18) = iVar1;
  if (*(int *)(((int)this) + 0x1c) < iVar1) {
    *(int *)(((int)this) + 0x18) = *(int *)(((int)this) + 0x1c);
  }
  if (10 < *(int *)(((int)this) + 0x18)) {
    *(undefined4 *)(((int)this) + 0x18) = 10;
  }
  BLExpDanPresenter::updateNum();
  return;
}

// ===== 修复: 补回被误删的函数占位 (8) =====
void BLExpDanPresenter::onEnter()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLExpDanPresenter::getRect(cocos2d::CCObject* p1)
{
  undefined4 p3 = 0;

  code *pcVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (p3 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x5eb0aa);
    (*pcVar1)();
  }
  piVar2 = (int *)func_0079e55c(p3,*(undefined4 *)((unsigned char *)((char *)&g_005eb0b8 + (intptr_t)(g_005eb144))),
                                  *(undefined4 *)((unsigned char *)((char *)&g_005eb0ba + (intptr_t)(g_005eb148))),0);
  puVar3 = (undefined4 *)(**(code **)(*(int *)(piVar2) + (0x50)))();
  uVar6 = (undefined4)(*puVar3);
  puVar3 = (undefined4 *)(**(code **)(*(int *)(piVar2) + (0x8c)))(piVar2);
  uVar4 = (undefined4)(func_0079e4fc(*puVar3,0x3f000000));
  uVar4 = (undefined4)(func_0079e57c(uVar6,uVar4));
  iVar5 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar2) + (0x50)))(piVar2));
  uVar7 = (undefined4)(*(undefined4 *)(iVar5 + 4));
  iVar5 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar2) + (0x8c)))(piVar2));
  uVar6 = (undefined4)(func_0079e4fc(*(undefined4 *)(iVar5 + 4),0x3f000000));
  uVar6 = (undefined4)(func_0079e59c(uVar7,uVar6));
  puVar3 = (undefined4 *)(**(code **)(*(int *)(piVar2) + (0x8c)))(piVar2);
  uVar7 = (undefined4)(*puVar3);
  iVar5 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar2) + (0x8c)))(piVar2));
  0 /* ctorZero */;
  return;
}

void BLExpDanPresenter::isInside(cocos2d::extension::CCScale9Sprite* p1, float p2, float p3)
{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  uVar1 = (undefined4)(cocos2d::CCDirector::sharedDirector());
  { cocos2d::CCSize _ws = ((cocos2d::CCDirector *)(uVar1))->getWinSize(); uStack_20 = hw_fbits(_ws.width); uStack_1c = hw_fbits(_ws.height); }
  puVar2 = (undefined4 *)(**(code **)(*(int *)(p1) + (0x50)))(p1);
  uVar1 = (undefined4)(func_0079e4fc(uStack_20,0x3f000000));
  uVar1 = (undefined4)(func_0079e59c(uVar1,*puVar2));
  iVar3 = (undefined4)(intptr_t)((**(code **)(*(int *)(p1) + (0x50)))(p1));
  uVar5 = (undefined4)(*(undefined4 *)(iVar3 + 4));
  puVar2 = (undefined4 *)(**(code **)(*(int *)(p1) + (0x8c)))(p1);
  uVar4 = (undefined4)(func_0079e4fc(*puVar2,0x3f000000));
  uVar4 = (undefined4)(func_0079e59c(uVar1,uVar4));
  iVar3 = (undefined4)(intptr_t)(func_0079e51c(p2,uVar4));
  if (iVar3 != 0) {
    puVar2 = (undefined4 *)(**(code **)(*(int *)(p1) + (0x8c)))(p1);
    uVar4 = (undefined4)(func_0079e4fc(*puVar2,0x3f000000));
    uVar1 = (undefined4)(func_0079e57c(uVar1,uVar4));
    iVar3 = (undefined4)(intptr_t)(func_0079e50c(p2,uVar1));
    if (iVar3 != 0) {
      uVar1 = (undefined4)(func_0079e4fc(uStack_1c,0x3f000000));
      uVar1 = (undefined4)(func_0079e59c(uVar5,uVar1));
      iVar3 = (undefined4)(intptr_t)((**(code **)(*(int *)(p1) + (0x8c)))(p1));
      uVar4 = (undefined4)(func_0079e4fc(*(undefined4 *)(iVar3 + 4),0x3f000000));
      uVar4 = (undefined4)(func_0079e59c(uVar1,uVar4));
      iVar3 = (undefined4)(intptr_t)(func_0079e51c(p3,uVar4));
      if (iVar3 != 0) {
        iVar3 = (undefined4)(intptr_t)((**(code **)(*(int *)(p1) + (0x8c)))(p1));
        uVar4 = (undefined4)(func_0079e4fc(*(undefined4 *)(iVar3 + 4),0x3f000000));
        uVar1 = (undefined4)(func_0079e57c(uVar1,uVar4));
        iVar3 = (undefined4)(intptr_t)(func_0079e50c(p3,uVar1));
        if (iVar3 != 0) {
          return;
        }
      }
    }
  }
  return;
}

undefined4 BLExpDanPresenter::initWithView(BLExpDanView* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void BLExpDanPresenter::onUse(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLExpDanPresenter::updateNum()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

bool BLExpDanPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void BLExpDanPresenter::updateItem(cocos2d::CCObject* p1)
{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  code *pcVar8;
  undefined4 uStack_28;
  undefined4 auStack_1c [2];
  
  uVar6 = (undefined4)(g_005eb9c0);
  if ((*(int *)(((int)this) + 0x24) != 1000) &&
     (uVar6 = g_005eb9c4, *(int *)(((int)this) + 0x24) == g_005eb9b8)) {
    uVar6 = (undefined4)(g_005eb9bc);
  }
  piVar1 = (int *)((DataCacheManager *)this)->shareManager();
  uVar2 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x60)))());
  iVar3 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)uVar2)->objectForKey(uVar6));
  if (iVar3 == 0) {
    return;
  }
  iVar3 = func_0079e55c(iVar3,*(undefined4 *)((unsigned char *)((char *)&g_005eb85c + (intptr_t)(g_005eb9c8))),
                          *(undefined4 *)((unsigned char *)((char *)&g_005eb85e + (intptr_t)(g_005eb9cc))),0);
  if (iVar3 == 0) {
    return;
  }
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  piVar1 = (int *)(**(code **)(*(int *)(piVar1) + (0x28)))();
  uVar2 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x50)))());
  piVar1 = (int *)((BackPackData *)uVar2)->getItemData((ItemData*)iVar3);
  iVar3 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar1) + (0x28)))());
  piVar4 = (int *)::operator new(0x30);
  ::new ((void *)piVar4) BackPackItemData();   /* ALLOC+CTOR_FIX(R115): 原为裸 new + ctorZero 占位；生成器丢了 BackPackItemData 的构造函数 -> vptr 垃圾 */
  iVar5 = (undefined4)(intptr_t)(((BackPackItemData *)piVar4)->init());
  if (iVar5 == 0) {
    (**(code **)(*(int *)(piVar4) + (8)))(piVar4);
                    /* WARNING: Does not return */
    pcVar8 = (code *)software_udf(0xff,0x5eb9b0);
    (*pcVar8)();
  }
  ((cocos2d::CCObject *)piVar4)->autorelease();
  (**(code **)(*(int *)(piVar4) + (0x24)))(piVar4,uVar6);
  pcVar8 = *(code **)(*piVar4 + 0x1c);
  uVar6 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x18)))(piVar1));
  (*pcVar8)(piVar4,uVar6);
  (**(code **)(*(int *)(piVar4) + (0x2c)))(piVar4,*(undefined4 *)(((int)this) + 0x18));
  piVar7 = (int *)((DataManager *)this)->shareDataManager();
  piVar7 = (int *)(**(code **)(*(int *)(piVar7) + (0x28)))();
  uVar6 = (undefined4)((**(code **)(*(int *)(piVar7) + (0x50)))());
  ((BackPackData *)uVar6)->removeItem((BackPackItemData*)piVar4);
  uStack_28 = (undefined4)(0);
  if (iVar3 != *(int *)(((int)this) + 0x18)) {
    uStack_28 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x28)))(piVar1));
  }
  iVar3 = (undefined4)(intptr_t)(*(int *)(((int)this) + 0x24));
  if (iVar3 == 1000) {
    piVar1 = (int *)((BLExpDanView *)*(undefined4 *)(((int)this) + 0x20))->getLabelNum2();
    pcVar8 = *(code **)(*piVar1 + 0x234);
    ConvertToString<int>(auStack_1c, uStack_28, 0);
    (*pcVar8)(piVar1,auStack_1c[0]);
  }
  else if (iVar3 == g_005eb9d0) {
    piVar1 = (int *)((BLExpDanView *)*(undefined4 *)(((int)this) + 0x20))->getLabelNum1();
    pcVar8 = *(code **)(*piVar1 + 0x234);
    ConvertToString<int>(auStack_1c, uStack_28, 0);
    (*pcVar8)(piVar1,auStack_1c[0]);
  }
  else {
    if (iVar3 != g_005eb9b8) goto code_r0x005eb994;
    piVar1 = (int *)((BLExpDanView *)*(undefined4 *)(((int)this) + 0x20))->getLabelNum3();
    pcVar8 = *(code **)(*piVar1 + 0x234);
    ConvertToString<int>(auStack_1c, uStack_28, 0);
    (*pcVar8)(piVar1,auStack_1c[0]);
  }
  func_0079e2bc(auStack_1c);
code_r0x005eb994:
  *(undefined4 *)(((int)this) + 0x1c) = uStack_28;
  BLExpDanPresenter::updateNum();
  return;
}
