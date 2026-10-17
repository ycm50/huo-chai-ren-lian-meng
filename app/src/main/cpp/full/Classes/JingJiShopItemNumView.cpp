#include "JingJiShopItemNumView.h"
#include "CCObject.h"
#include "CCLayer.h"
#include "CCLabelTTF.h"
#include "BLPageControl.h"
#include "BLLeakUtils.h"
#include "JingJiShopItemNumPresenter.h"
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
extern "C" unsigned long UNK_00578720;
extern "C" unsigned long UNK_00578764;
extern "C" unsigned long UNK_005787a8;
extern "C" unsigned long UNK_005787d0;
extern "C" unsigned long UNK_005787e8;
extern "C" unsigned long UNK_00578822;
extern "C" unsigned long UNK_00578864;
extern "C" unsigned long UNK_005788a8;
extern "C" unsigned long UNK_005788ca;
extern "C" unsigned long UNK_005788f8;
extern "C" unsigned long UNK_00578a90;
extern "C" unsigned long UNK_00578aae;
extern "C" unsigned long UNK_00578ab0;
extern "C" unsigned long _UNK_00578794;
extern "C" unsigned long _UNK_00578798;
extern "C" unsigned long _UNK_005787ac;
extern "C" unsigned long _UNK_005787d4;
extern "C" unsigned long _UNK_0057884c;
extern "C" unsigned long _UNK_00578850;
extern "C" unsigned long _UNK_00578a4c;
extern "C" unsigned long _UNK_00578a50;
extern "C" unsigned long _UNK_00578a54;
extern "C" unsigned long _UNK_00578a58;
extern "C" unsigned long _UNK_00578a5c;
extern "C" unsigned long _UNK_00578a60;
extern "C" unsigned long _UNK_00578a64;
extern "C" unsigned long _UNK_00578b54;
extern "C" unsigned long _UNK_00578b58;
extern "C" unsigned long _UNK_00578b5c;
extern "C" unsigned long _UNK_00578b60;
extern "C" unsigned long _UNK_00578b64;
extern "C" unsigned long g_00578720;
extern "C" unsigned long g_00578764;
extern "C" unsigned long g_00578794;
extern "C" unsigned long g_00578798;
extern "C" unsigned long g_005787a8;
extern "C" unsigned long g_005787ac;
extern "C" unsigned long g_005787d0;
extern "C" unsigned long g_005787d4;
extern "C" unsigned long g_005787e8;
extern "C" unsigned long g_00578822;
extern "C" unsigned long g_0057884c;
extern "C" unsigned long g_00578850;
extern "C" unsigned long g_00578864;
extern "C" unsigned long g_005788a8;
extern "C" unsigned long g_005788ca;
extern "C" unsigned long g_005788f8;
extern "C" unsigned long g_00578a4c;
extern "C" unsigned long g_00578a50;
extern "C" unsigned long g_00578a54;
extern "C" unsigned long g_00578a58;
extern "C" unsigned long g_00578a5c;
extern "C" unsigned long g_00578a60;
extern "C" unsigned long g_00578a64;
extern "C" unsigned long g_00578a90;
extern "C" unsigned long g_00578aae;
extern "C" unsigned long g_00578ab0;
extern "C" unsigned long g_00578b54;
extern "C" unsigned long g_00578b58;
extern "C" unsigned long g_00578b5c;
extern "C" unsigned long g_00578b60;
extern "C" unsigned long g_00578b64;
cocos2d::CCLabelTTF* JingJiShopItemNumView::getLabNum() const
{
  return (cocos2d::CCLabelTTF*)(*(undefined4 *)(((int)this) + 0x108));
}

void JingJiShopItemNumView::setLabNum(cocos2d::CCLabelTTF* p1)
{
  *(undefined4 *)(((int)this) + 0x108) = (undefined4)(intptr_t)p1;
  return;
}

cocos2d::CCLabelTTF* JingJiShopItemNumView::getLabUpgrace() const
{
  return (cocos2d::CCLabelTTF*)(*(undefined4 *)(((int)this) + 0x10c));
}

cocos2d::CCLayerColor* JingJiShopItemNumView::getLayerColor() const
{
  return (cocos2d::CCLayerColor*)(*(undefined4 *)(((int)this) + 0x110));
}

BLPageControl* JingJiShopItemNumView::getPageControl() const
{
  return (BLPageControl*)(*(undefined4 *)(((int)this) + 0x114));
}

void JingJiShopItemNumView::setPageControl(BLPageControl* p1)
{
  *(undefined4 *)(((int)this) + 0x114) = (undefined4)(intptr_t)p1;
  return;
}

cocos2d::CCLabelTTF* JingJiShopItemNumView::getLabStar() const
{
  return (cocos2d::CCLabelTTF*)(*(undefined4 *)(((int)this) + 0x118));
}

void JingJiShopItemNumView::setLabStar(cocos2d::CCLabelTTF* p1)
{
  *(undefined4 *)(((int)this) + 0x118) = (undefined4)(intptr_t)p1;
  return;
}

JingJiShopItemNumView::~JingJiShopItemNumView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_00578720 + g_00578794);
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
  func_0079e45c(&uStack_14,&g_00578764 + g_00578798,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

JingJiShopItemNumView::JingJiShopItemNumView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_005787e8 + g_0057884c);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x230;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x260;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x26c;
  *(int *)((int)this + 4*(0x43)) = 0;
  *(int *)((int)this + 4*(0x42)) = 0;
  *(int *)((int)this + 4*(0x44)) = 0;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00578822 + g_00578850,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}


bool JingJiShopItemNumView::init()
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
    iVar2 = ((JingJiShopItemNumPresenter *)this)->create();
    *(int *)((int)this + 4*(0x47)) = iVar2;
    ((cocos2d::CCObject *)this)->retain();
    func_0079e45c(auStack_20,&g_00578a90 + g_00578b54,auStack_24);
    piVar3 = (int *)0 /* ctorZero */;
    func_0079e2bc(auStack_20);
    piVar4 = (int *)cocos2d::CCLabelTTF::create((char const*)&g_00578ab0 + g_00578b58, (char const*)&g_00578aae + g_00578b5c, g_00578b60);
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
    uVar7 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x + _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar7),(int)(g_00578b64)))));
    0 /* ctorZero */;
    (*pcVar8)(piVar4,auStack_20);
    ((JingJiShopItemNumPresenter *)*(int *)((int)this + 4*(0x47)))->initWithView((JingJiShopItemNumView*)((int)this));
  }
  return iVar1;
}

void JingJiShopItemNumView::onEnter()
{
  ((cocos2d::CCLayer *)this)->onEnter();
  ((JingJiShopItemNumPresenter *)*(undefined4 *)(((int)this) + 0x11c))->onEnter();
  return;
}

void JingJiShopItemNumView::onExit()
{
  ((cocos2d::CCLayer *)this)->onExit();
  ((JingJiShopItemNumPresenter *)*(undefined4 *)(((int)this) + 0x11c))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (3) =====
void JingJiShopItemNumView::setLabUpgrace(cocos2d::CCLabelTTF* p1)
{
  *(undefined4 *)(((int)this) + 0x10c) = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  return;
}

void JingJiShopItemNumView::setLayerColor(cocos2d::CCLayerColor* p1)
{
  *(undefined4 *)(((int)this) + 0x110) = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  return;
}

void JingJiShopItemNumView::setUpgraceLV(int p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
