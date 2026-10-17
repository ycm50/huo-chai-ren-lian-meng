#include "BLLuckShopItemNumView.h"
#include "CCObject.h"
#include "CCLayer.h"
#include "CCLabelTTF.h"
#include "BLPageControl.h"
#include "BLLeakUtils.h"
#include "BLLuckShopItemNumPresenter.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
using namespace cocos2d;
// 兜底声明
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e43c(...);
extern "C" long long func_0079e44c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e46c(...);
extern "C" long long func_0079e47c(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long func_0079e5dc(...);
extern "C" long long func_0079e934(...);
extern "C" long long func_0079e944(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_005852e8;
extern "C" unsigned long UNK_0058532c;
extern "C" unsigned long UNK_00585370;
extern "C" unsigned long UNK_00585398;
extern "C" unsigned long UNK_005853b0;
extern "C" unsigned long UNK_005853ea;
extern "C" unsigned long UNK_0058542c;
extern "C" unsigned long UNK_00585470;
extern "C" unsigned long UNK_00585492;
extern "C" unsigned long UNK_005854c0;
extern "C" unsigned long UNK_00585658;
extern "C" unsigned long UNK_00585676;
extern "C" unsigned long UNK_00585678;
extern "C" unsigned long _UNK_0058535c;
extern "C" unsigned long _UNK_00585360;
extern "C" unsigned long _UNK_00585374;
extern "C" unsigned long _UNK_0058539c;
extern "C" unsigned long _UNK_00585414;
extern "C" unsigned long _UNK_00585418;
extern "C" unsigned long _UNK_00585614;
extern "C" unsigned long _UNK_00585618;
extern "C" unsigned long _UNK_0058561c;
extern "C" unsigned long _UNK_00585620;
extern "C" unsigned long _UNK_00585624;
extern "C" unsigned long _UNK_00585628;
extern "C" unsigned long _UNK_0058562c;
extern "C" unsigned long _UNK_0058571c;
extern "C" unsigned long _UNK_00585720;
extern "C" unsigned long _UNK_00585724;
extern "C" unsigned long _UNK_00585728;
extern "C" unsigned long _UNK_0058572c;
extern "C" unsigned long g_005852e8;
extern "C" unsigned long g_0058532c;
extern "C" unsigned long g_0058535c;
extern "C" unsigned long g_00585360;
extern "C" unsigned long g_00585370;
extern "C" unsigned long g_00585374;
extern "C" unsigned long g_00585398;
extern "C" unsigned long g_0058539c;
extern "C" unsigned long g_005853b0;
extern "C" unsigned long g_005853ea;
extern "C" unsigned long g_00585414;
extern "C" unsigned long g_00585418;
extern "C" unsigned long g_0058542c;
extern "C" unsigned long g_00585470;
extern "C" unsigned long g_00585492;
extern "C" unsigned long g_005854c0;
extern "C" unsigned long g_00585614;
extern "C" unsigned long g_00585618;
extern "C" unsigned long g_0058561c;
extern "C" unsigned long g_00585620;
extern "C" unsigned long g_00585624;
extern "C" unsigned long g_00585628;
extern "C" unsigned long g_0058562c;
extern "C" unsigned long g_00585658;
extern "C" unsigned long g_00585676;
extern "C" unsigned long g_00585678;
extern "C" unsigned long g_0058571c;
extern "C" unsigned long g_00585720;
extern "C" unsigned long g_00585724;
extern "C" unsigned long g_00585728;
extern "C" unsigned long g_0058572c;
cocos2d::CCLabelTTF* BLLuckShopItemNumView::getLabNum() const
{
  return (cocos2d::CCLabelTTF*)(*(undefined4 *)(((int)this) + 0x108));
}

void BLLuckShopItemNumView::setLabNum(cocos2d::CCLabelTTF* p1)
{
  *(undefined4 *)(((int)this) + 0x108) = (undefined4)(intptr_t)p1;
  return;
}

cocos2d::CCLabelTTF* BLLuckShopItemNumView::getLabUpgrace() const
{
  return (cocos2d::CCLabelTTF*)(*(undefined4 *)(((int)this) + 0x10c));
}

cocos2d::CCLayerColor* BLLuckShopItemNumView::getLayerColor() const
{
  return (cocos2d::CCLayerColor*)(*(undefined4 *)(((int)this) + 0x110));
}

BLPageControl* BLLuckShopItemNumView::getPageControl() const
{
  return (BLPageControl*)(*(undefined4 *)(((int)this) + 0x114));
}

void BLLuckShopItemNumView::setPageControl(BLPageControl* p1)
{
  *(undefined4 *)(((int)this) + 0x114) = (undefined4)(intptr_t)p1;
  return;
}

cocos2d::CCLabelTTF* BLLuckShopItemNumView::getLabStar() const
{
  return (cocos2d::CCLabelTTF*)(*(undefined4 *)(((int)this) + 0x118));
}

void BLLuckShopItemNumView::setLabStar(cocos2d::CCLabelTTF* p1)
{
  *(undefined4 *)(((int)this) + 0x118) = (undefined4)(intptr_t)p1;
  return;
}

BLLuckShopItemNumView::~BLLuckShopItemNumView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_005852e8 + g_0058535c);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x230;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x260;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x26c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  if (*(int *)((int)this + 4*(0x47)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x47)) = 0;
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0058532c + g_00585360,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLLuckShopItemNumView::BLLuckShopItemNumView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_005853b0 + g_00585414);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x230;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x260;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x26c;
  *(int *)((int)this + 4*(0x43)) = 0;
  *(int *)((int)this + 4*(0x42)) = 0;
  *(int *)((int)this + 4*(0x44)) = 0;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005853ea + g_00585418,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

void BLLuckShopItemNumView::setUpgraceLV(int p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

bool BLLuckShopItemNumView::init()
{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  code *pcVar8;
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [12];
  
  iVar1 = ((cocos2d::CCLayer *)this)->init();
  if (iVar1 != 0) {
    iVar2 = ((BLLuckShopItemNumPresenter *)this)->create();
    *(int *)((int)this + 4*(0x47)) = iVar2;
    ((cocos2d::CCObject *)this)->retain();
    func_0079e45c(auStack_20,&g_00585658 + g_0058571c,auStack_24);
    piVar3 = (int *)0 /* ctorZero */;
    func_0079e2bc(auStack_20);
    piVar4 = (int *)cocos2d::CCLabelTTF::create((char const*)&g_00585678 + g_00585720, (char const*)&g_00585676 + g_00585724, g_00585728);
    *(int *)((int)this + 4*(0x42)) = (int)piVar4;
    pcVar8 = *(code **)(*piVar4 + 0x7c);
    0 /* ctorZero */;
    (*pcVar8)(piVar4,auStack_20);
    (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x42)));
    piVar4 = (int *)*(int *)((int)this + 4*(0x42));
    pcVar8 = *(code **)(*piVar4 + 0x4c);
    puVar5 = (undefined4 *)(**(code **)(*piVar3 + 0x8c))(piVar3);
    uVar6 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(*puVar5),(int)(0x3f000000)))));
    uVar6 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x - _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar6),(int)(0x41000000)))));
    iVar2 = (**(code **)(*piVar3 + 0x8c))(piVar3);
    uVar7 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(*(int *)(iVar2 + 4) + -0x80000000),(int)(0x3f000000)))));
    uVar7 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x + _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar7),(int)(g_0058572c)))));
    0 /* ctorZero */;
    (*pcVar8)(piVar4,auStack_20);
    ((BLLuckShopItemNumPresenter *)*(int *)((int)this + 4*(0x47)))->initWithView((BLLuckShopItemNumView*)((int)this));
  }
  return iVar1;
}

void BLLuckShopItemNumView::onEnter()
{
  ((cocos2d::CCLayer *)this)->onEnter();
  ((BLLuckShopItemNumPresenter *)*(undefined4 *)(((int)this) + 0x11c))->onEnter();
  return;
}

void BLLuckShopItemNumView::onExit()
{
  ((cocos2d::CCLayer *)this)->onExit();
  ((BLLuckShopItemNumPresenter *)*(undefined4 *)(((int)this) + 0x11c))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (2) =====
void BLLuckShopItemNumView::setLabUpgrace(cocos2d::CCLabelTTF* p1)
{
  *(undefined4 *)(((int)this) + 0x10c) = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  return;
}

void BLLuckShopItemNumView::setLayerColor(cocos2d::CCLayerColor* p1)
{
  *(undefined4 *)(((int)this) + 0x110) = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  return;
}
