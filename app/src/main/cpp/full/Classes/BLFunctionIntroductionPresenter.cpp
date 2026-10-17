#include "BLFunctionIntroductionPresenter.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "CCScrollView.h"
#include "CCObject.h"
#include "CCTouch.h"
#include "CCDirector.h"
#include "CCArray.h"
#include "BLFunctionIntroductionItemView.h"
#include "BLFunctionIntroductionView.h"
#include "BLFunctionIntroductionItemPresenter.h"
#include "BLLeakUtils.h"
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
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2dc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long func_0079e4ec(...);
extern "C" long long func_0079e50c(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0064b17c;
extern "C" unsigned long UNK_0064b19c;
extern "C" unsigned long UNK_0064b1f8;
extern "C" unsigned long UNK_0064b20c;
extern "C" unsigned long UNK_0064b234;
extern "C" unsigned long UNK_0064b248;
extern "C" unsigned long UNK_0064b362;
extern "C" unsigned long UNK_0064b380;
extern "C" unsigned long UNK_0064b43c;
extern "C" unsigned long UNK_0064b518;
extern "C" unsigned long UNK_0064b528;
extern "C" unsigned long UNK_0064b536;
extern "C" unsigned long UNK_0064b544;
extern "C" unsigned long UNK_0064b580;
extern "C" unsigned long UNK_0064b736;
extern "C" unsigned long _UNK_0064b1e4;
extern "C" unsigned long _UNK_0064b1e8;
extern "C" unsigned long _UNK_0064b1fc;
extern "C" unsigned long _UNK_0064b210;
extern "C" unsigned long _UNK_0064b238;
extern "C" unsigned long _UNK_0064b24c;
extern "C" unsigned long _UNK_0064b260;
extern "C" unsigned long _UNK_0064b3c0;
extern "C" unsigned long _UNK_0064b3c4;
extern "C" unsigned long _UNK_0064b464;
extern "C" unsigned long _UNK_0064b468;
extern "C" unsigned long _UNK_0064b4f4;
extern "C" unsigned long _UNK_0064b5c4;
extern "C" unsigned long _UNK_0064b5c8;
extern "C" unsigned long _UNK_0064b5cc;
extern "C" unsigned long _UNK_0064b5d0;
extern "C" unsigned long _UNK_0064b5d4;
extern "C" unsigned long _UNK_0064b8d4;
extern "C" unsigned long _UNK_0064b8d8;
extern "C" unsigned long _UNK_0064b8dc;
extern "C" unsigned long g_0064b17c;
extern "C" unsigned long g_0064b19c;
extern "C" unsigned long g_0064b1e4;
extern "C" unsigned long g_0064b1e8;
extern "C" unsigned long g_0064b1f8;
extern "C" unsigned long g_0064b1fc;
extern "C" unsigned long g_0064b20c;
extern "C" unsigned long g_0064b210;
extern "C" unsigned long g_0064b234;
extern "C" unsigned long g_0064b238;
extern "C" unsigned long g_0064b248;
extern "C" unsigned long g_0064b24c;
extern "C" unsigned long g_0064b260;
extern "C" unsigned long g_0064b362;
extern "C" unsigned long g_0064b380;
extern "C" unsigned long g_0064b3c0;
extern "C" unsigned long g_0064b3c4;
extern "C" unsigned long g_0064b43c;
extern "C" unsigned long g_0064b464;
extern "C" unsigned long g_0064b468;
extern "C" unsigned long g_0064b4f4;
extern "C" unsigned long g_0064b518;
extern "C" unsigned long g_0064b528;
extern "C" unsigned long g_0064b536;
extern "C" unsigned long g_0064b544;
extern "C" unsigned long g_0064b580;
extern "C" unsigned long g_0064b5c4;
extern "C" unsigned long g_0064b5c8;
extern "C" unsigned long g_0064b5cc;
extern "C" unsigned long g_0064b5d0;
extern "C" unsigned long g_0064b5d4;
extern "C" unsigned long g_0064b736;
extern "C" unsigned long g_0064b8d4;
extern "C" unsigned long g_0064b8d8;
extern "C" unsigned long g_0064b8dc;
bool BLFunctionIntroductionPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

BLFunctionIntroductionPresenter::~BLFunctionIntroductionPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0064b17c + g_0064b1e4);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x34;
  *(int *)((int)this + 4*(6)) = iVar2 + 100;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0064b19c + g_0064b1e8,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  ((cocos2d::CCArray *)*(int *)((int)this + 4*(8)))->removeAllObjects();
  if (*(int *)((int)this + 4*(8)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(8)) = 0;
  }
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLFunctionIntroductionPresenter::onClose(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(g_0064b260);
  return;
}

BLFunctionIntroductionPresenter::BLFunctionIntroductionPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = (undefined4)(intptr_t)(*(int *)((unsigned char *)((char *)&g_0064b362 + (intptr_t)(g_0064b3c0))));
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x34;
  *(int *)((int)this + 4*(6)) = iVar2 + 100;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,(unsigned char *)((char *)&g_0064b380 + (intptr_t)(g_0064b3c4)),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  ((UIManager *)this)->shareManager();
  ((UIManager *)this)->pushCurScrollViewUnEnable();
  iVar2 = (undefined4)(intptr_t)(cocos2d::CCArray::create());
  *(int *)((int)this + 4*(8)) = iVar2;
  ((cocos2d::CCObject *)this)->retain();
  *(int *)((int)this + 4*(9)) = 0;
  return;
}

undefined4 BLFunctionIntroductionPresenter::create()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x28))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}


void BLFunctionIntroductionPresenter::onEnter()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14, 1, 1);
  return;
}

void BLFunctionIntroductionPresenter::onExit()
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

// ===== 修复: 补回被误删的函数占位 (8) =====
void BLFunctionIntroductionPresenter::scrollViewDidScroll(cocos2d::extension::CCScrollView* p1)
{
  return;
}

void BLFunctionIntroductionPresenter::scrollViewDidZoom(cocos2d::extension::CCScrollView* p1)
{
  return;
}

void BLFunctionIntroductionPresenter::initWithView(BLFunctionIntroductionView* p1)
{
  undefined4 p3 = 0;
  undefined4 p4 = 0;

  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  *(int *)(((int)this) + 0x1c) = (undefined4)(intptr_t)p1;
  uStack_18 = (undefined4)(p3);
  uStack_14 = (undefined4)(p4);
  (**(code **)(**(int **)(p1 + 0x114) + 0x1f8))(&uStack_18);
  uVar2 = (undefined4)(uStack_14);
  cocos2d::CCDirector::sharedDirector();
  uVar1 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar1 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(g_0064b464),(int)(uVar1)))));
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x - _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar2),(int)(uVar1)))));
  *(undefined4 *)(((int)this) + 0x24) = uVar2;
  piVar3 = *(int **)(*(int *)(((int)this) + 0x1c) + 0x110);
  uStack_14 = (undefined4)(0);
  uStack_18 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_0064b43c + (intptr_t)(g_0064b468))));
  (**(code **)(*piVar3 + 0x254))(piVar3,((int)this));
  piVar3 = *(int **)(*(int *)(((int)this) + 0x1c) + 0x114);
  (**(code **)(*piVar3 + 0x1fc))(piVar3,1);
  *(int *)(*(int *)(*(int *)(((int)this) + 0x1c) + 0x114) + 0x128) = ((int)this) + 0x18;
  return;
}

void BLFunctionIntroductionPresenter::addItem(BLFunctionIntroductionItemView* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLFunctionIntroductionPresenter::identifyData(std::string * p1)
{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  
  uVar2 = (undefined4)(cocos2d::CCArray::create());
  piVar3 = (int *)((long long)::operator new((size_t)(0x3c)));
  0 /* ctorZero */;
  *piVar3 = *(int *)(&g_0064b518 + g_0064b5c4) + 8;
  iVar1 = g_0064b5cc;
  iVar4 = *(int *)(&g_0064b528 + g_0064b5c8);
  piVar3[6] = iVar4 + 0xc;
  piVar3[7] = iVar4 + 0xc;
  piVar3[5] = 1;
  func_0079e2dc(piVar3 + 6,&g_0064b536 + iVar1);
  func_0079e2dc(piVar3 + 7,&g_0064b544 + g_0064b5d0);
  piVar3[8] = 0;
  iVar1 = g_0064b5d4;
  *(undefined1 *)(piVar3 + 9) = 0xff;
  *(undefined1 *)((int)piVar3 + 0x25) = 0xff;
  *(undefined1 *)((int)piVar3 + 0x26) = 0xff;
  piVar3[0xb] = 0x3f800000;
  piVar3[0xd] = 0;
  piVar3[0xc] = 0;
  *(undefined1 *)(piVar3 + 0xe) = 0;
  *(undefined1 *)((int)piVar3 + 0x39) = 0;
  piVar3[10] = 0x16;
  piVar3[5] = 1;
  func_0079e2dc(piVar3 + 7,&g_0064b580 + iVar1);
  func_0079e52c(piVar3 + 6,p1);
  *(undefined1 *)(piVar3 + 9) = 0;
  *(undefined1 *)((int)piVar3 + 0x25) = 0;
  *(undefined1 *)((int)piVar3 + 0x26) = 0;
  ((cocos2d::CCArray *)uVar2)->addObject((cocos2d::CCObject*)piVar3);
  return;
}

int * BLFunctionIntroductionPresenter::createItemView(std::string * p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return nullptr;
}


void BLFunctionIntroductionPresenter::updateWithData(std::string * p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
