#include "BLLivenessMissionItemBtnPresenter.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "CCObject.h"
#include "LivenessUserItemData.h"
#include "BLLivenessMissionItemBtnView.h"
#include "CCTouch.h"
#include "CCDirector.h"
#include "BLLeakUtils.h"
#include "DataCacheManager.h"
#include "DataManager.h"
#include "LivenessData.h"
#include "LivenessUserData.h"
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
extern "C" unsigned long g_0057eaf6;
extern "C" unsigned long g_0057eb00;
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2dc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long func_0079e5bc(...);
extern "C" long long func_0079e68c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0057e650;
extern "C" unsigned long UNK_0057e66a;
extern "C" unsigned long UNK_0057e6b0;
extern "C" unsigned long UNK_0057e6d8;
extern "C" unsigned long UNK_0057ea4e;
extern "C" unsigned long UNK_0057ea66;
extern "C" unsigned long UNK_0057eb2c;
extern "C" unsigned long UNK_0057eb6a;
extern "C" unsigned long UNK_0057eb7e;
extern "C" unsigned long UNK_0057ebac;
extern "C" unsigned long UNK_0057ebbe;
extern "C" unsigned long UNK_0057ecc0;
extern "C" unsigned long UNK_0057ecce;
extern "C" unsigned long UNK_0057f052;
extern "C" unsigned long UNK_0057f07a;
extern "C" unsigned long _UNK_0057e69c;
extern "C" unsigned long _UNK_0057e6a0;
extern "C" unsigned long _UNK_0057e6b4;
extern "C" unsigned long _UNK_0057e6dc;
extern "C" unsigned long _UNK_0057eaa8;
extern "C" unsigned long _UNK_0057eaac;
extern "C" unsigned long _UNK_0057ecd0;
extern "C" unsigned long _UNK_0057ecd4;
extern "C" unsigned long _UNK_0057ecd8;
extern "C" unsigned long _UNK_0057ecdc;
extern "C" unsigned long _UNK_0057ece0;
extern "C" unsigned long _UNK_0057ece4;
extern "C" unsigned long _UNK_0057ece8;
extern "C" unsigned long _UNK_0057ecec;
extern "C" unsigned long _UNK_0057ecf0;
extern "C" unsigned long _UNK_0057ecf4;
extern "C" unsigned long _UNK_0057ecf8;
extern "C" unsigned long _UNK_0057f014;
extern "C" unsigned long _UNK_0057f23c;
extern "C" unsigned long _UNK_0057f240;
extern "C" unsigned long _UNK_0057f244;
extern "C" unsigned long extraout_r1;
extern "C" unsigned long extraout_r2;
extern "C" unsigned long extraout_r3;
extern "C" unsigned long g_0057e650;
extern "C" unsigned long g_0057e66a;
extern "C" unsigned long g_0057e69c;
extern "C" unsigned long g_0057e6a0;
extern "C" unsigned long g_0057e6b0;
extern "C" unsigned long g_0057e6b4;
extern "C" unsigned long g_0057e6d8;
extern "C" unsigned long g_0057e6dc;
extern "C" unsigned long g_0057ea4e;
extern "C" unsigned long g_0057ea66;
extern "C" unsigned long g_0057eaa8;
extern "C" unsigned long g_0057eaac;
extern "C" unsigned long g_0057eb2c;
extern "C" unsigned long g_0057eb6a;
extern "C" unsigned long g_0057eb7e;
extern "C" unsigned long g_0057ebac;
extern "C" unsigned long g_0057ebbe;
extern "C" unsigned long g_0057ecc0;
extern "C" unsigned long g_0057ecce;
extern "C" unsigned long g_0057ecd0;
extern "C" unsigned long g_0057ecd4;
extern "C" unsigned long g_0057ecd8;
extern "C" unsigned long g_0057ecdc;
extern "C" unsigned long g_0057ece0;
extern "C" unsigned long g_0057ece4;
extern "C" unsigned long g_0057ece8;
extern "C" unsigned long g_0057ecec;
extern "C" unsigned long g_0057ecf0;
extern "C" unsigned long g_0057ecf4;
extern "C" unsigned long g_0057ecf8;
extern "C" unsigned long g_0057f014;
extern "C" unsigned long g_0057f052;
extern "C" unsigned long g_0057f07a;
extern "C" unsigned long g_0057f23c;
extern "C" unsigned long g_0057f240;
extern "C" unsigned long g_0057f244;
bool BLLivenessMissionItemBtnPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

BLLivenessMissionItemBtnPresenter::~BLLivenessMissionItemBtnPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0057e650 + g_0057e69c);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x2c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0057e66a + g_0057e6a0,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLLivenessMissionItemBtnPresenter::BLLivenessMissionItemBtnPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar3 = *(int *)(&g_0057ea4e + g_0057eaa8);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x2c;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0057ea66 + g_0057eaac,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  piVar2 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar1 = (undefined4)((**(code **)(*piVar2 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar1)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 0);
  return;
}

undefined4 BLLivenessMissionItemBtnPresenter::create()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x20))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}


void BLLivenessMissionItemBtnPresenter::onEnter()
{
  return;
}

void BLLivenessMissionItemBtnPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  return;
}

// ===== 修复: 补回被误删的函数占位 (4) =====
void BLLivenessMissionItemBtnPresenter::initWithView(BLLivenessMissionItemBtnView* p1)
{
  *(int *)(((int)this) + 0x18) = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  (**(code **)(**(int **)(p1 + 0x110) + 0x254))
            (*(int **)(p1 + 0x110),((int)this),*(undefined4 *)((unsigned char *)((char *)&g_0057eaf6 + (intptr_t)(g_0057eb00))),0,
             0x20);
  return;
}

void BLLivenessMissionItemBtnPresenter::initWithData(LivenessUserItemData* p1)
{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined *puVar5;
  code *pcVar6;
  int *piVar7;
  undefined4 uStack_34;
  undefined4 auStack_30 [2];
  undefined1 auStack_28 [4];
  undefined4 uStack_24;
  undefined1 uStack_20;
  undefined1 uStack_1f;
  undefined1 uStack_1e;
  
  *(undefined4 *)(((int)this) + 0x1c) = (undefined4)(intptr_t)p1;
  piVar1 = (int *)((DataCacheManager *)this)->shareManager();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 200))());
  iVar3 = (undefined4)(intptr_t)(((LivenessData *)uVar2)->getItemData(**(undefined4 **)(((int)this) + 0x1c)));
  func_0079e45c(&uStack_34,(unsigned char *)((char *)&g_0057eb2c + (intptr_t)(g_0057ecd0)),&uStack_20);
  if (iVar3 == 0) {
    piVar1 = *(int **)(*(int *)(((int)this) + 0x18) + 0x114);
    uStack_20 = 0xab;
    uStack_1f = 0xab;
    uStack_1e = 0xab;
    (**(code **)(*piVar1 + 0x1b4))(piVar1,&uStack_20);
    piVar1 = *(int **)(*(int *)(((int)this) + 0x18) + 0x110);
    (**(code **)(*piVar1 + 0x234))(piVar1,0);
    goto code_r0x0057ec96;
  }
  iVar3 = (undefined4)(intptr_t)((*(int **)(((int)this) + 0x1c))[2]);
  if (iVar3 == 0) {
    iVar3 = (undefined4)(intptr_t)(**(int **)(((int)this) + 0x1c));
    if (((uint)(iVar3 + g_0057ecd4) < 2) || ((uint)(iVar3 + g_0057ecd8) < 2)) {
      piVar1 = *(int **)(*(int *)(((int)this) + 0x18) + 0x114);
      pcVar6 = *(code **)(*piVar1 + 0x234);
      puVar5 = (unsigned char *)((char *)&g_0057ecc0 + (intptr_t)(g_0057ecf4));
    }
    else {
      piVar1 = *(int **)(*(int *)(((int)this) + 0x18) + 0x114);
      pcVar6 = *(code **)(*piVar1 + 0x234);
      puVar5 = (unsigned char *)((char *)&g_0057ecce + (intptr_t)(g_0057ecf8));
    }
code_r0x0057eb7e:
    (*pcVar6)(piVar1,puVar5);
  }
  else {
    if (iVar3 == 1) {
      func_0079e2dc(&uStack_34,(unsigned char *)((char *)&g_0057eb6a + (intptr_t)(g_0057ecdc)));
      piVar1 = *(int **)(*(int *)(((int)this) + 0x18) + 0x114);
      puVar5 = (unsigned char *)((char *)&g_0057eb7e + (intptr_t)(g_0057ece0));
      pcVar6 = *(code **)(*piVar1 + 0x234);
      goto code_r0x0057eb7e;
    }
    if (iVar3 == 2) {
      func_0079e2dc(&uStack_34,(unsigned char *)((char *)&g_0057ebac + (intptr_t)(g_0057ece4)));
      piVar1 = *(int **)(*(int *)(((int)this) + 0x18) + 0x114);
      (**(code **)(*piVar1 + 0x234))(piVar1,(unsigned char *)((char *)&g_0057ebbe + (intptr_t)(g_0057ece8)));
      piVar1 = *(int **)(*(int *)(((int)this) + 0x18) + 0x114);
      uStack_20 = 0xab;
      uStack_1f = 0xab;
      uStack_1e = 0xab;
      (**(code **)(*piVar1 + 0x1b4))(piVar1,&uStack_20);
      piVar1 = *(int **)(*(int *)(((int)this) + 0x18) + 0x110);
      (**(code **)(*piVar1 + 0x234))(piVar1,0);
    }
  }
  piVar7 = *(int **)(*(int *)(((int)this) + 0x18) + 0x10c);
  pcVar6 = *(code **)(*piVar7 + 0x22c);
  func_0079e45c(&uStack_20,uStack_34,auStack_28);
  piVar1 = (int *)0 /* ctorZero */;
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x214))());
  (*pcVar6)(piVar7,uVar2);
  func_0079e2bc(&uStack_20);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x18) + 0x10c);
  pcVar6 = *(code **)(*piVar1 + 0x1d4);
  0 /* ctorZero */;
  cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(auStack_30[0]),(int)(uVar2)))));
  0 /* ctorZero */;
  cocos2d::CCDirector::sharedDirector();
  uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar4 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uStack_24),(int)(uVar4)))));
  0 /* ctorZero */;
  (*pcVar6)(piVar1,&uStack_20);
code_r0x0057ec96:
  func_0079e2bc(&uStack_34);
  return;
}

void BLLivenessMissionItemBtnPresenter::receiveReward()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLLivenessMissionItemBtnPresenter::onBtn(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
