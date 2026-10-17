#include "BLGiftManagerView.h"
#include "BLGiftManagerPresenter.h"
#include "BLLeakUtils.h"
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
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e57c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_00550f5c;
extern "C" unsigned long UNK_00550fa0;
extern "C" unsigned long UNK_00550fe4;
extern "C" unsigned long UNK_0055100c;
extern "C" unsigned long UNK_005511a0;
extern "C" unsigned long UNK_00551282;
extern "C" unsigned long UNK_0055137c;
extern "C" unsigned long UNK_0055137e;
extern "C" unsigned long UNK_00551442;
extern "C" unsigned long _DAT_005510ac;
extern "C" unsigned long _DAT_005510b0;
extern "C" unsigned long _UNK_00550fd0;
extern "C" unsigned long _UNK_00550fd4;
extern "C" unsigned long _UNK_00550fe8;
extern "C" unsigned long _UNK_00551010;
extern "C" unsigned long _UNK_005514f0;
extern "C" unsigned long _UNK_005514f4;
extern "C" unsigned long _UNK_005514f8;
extern "C" unsigned long _UNK_005514fc;
extern "C" unsigned long _UNK_00551500;
extern "C" unsigned long _UNK_00551504;
extern "C" unsigned long _UNK_00551508;
extern "C" unsigned long _UNK_0055150c;
extern "C" unsigned long _UNK_00551510;
extern "C" unsigned long _UNK_00551514;
extern "C" unsigned long _UNK_00551518;
extern "C" unsigned long g_00550f5c;
extern "C" unsigned long g_00550fa0;
extern "C" unsigned long g_00550fd0;
extern "C" unsigned long g_00550fd4;
extern "C" unsigned long g_00550fe4;
extern "C" unsigned long g_00550fe8;
extern "C" unsigned long g_0055100c;
extern "C" unsigned long g_00551010;
extern "C" unsigned long g_005510ac;
extern "C" unsigned long g_005510b0;
extern "C" unsigned long g_005511a0;
extern "C" unsigned long g_00551282;
extern "C" unsigned long g_0055137c;
extern "C" unsigned long g_0055137e;
extern "C" unsigned long g_00551442;
extern "C" unsigned long g_005514f0;
extern "C" unsigned long g_005514f4;
extern "C" unsigned long g_005514f8;
extern "C" unsigned long g_005514fc;
extern "C" unsigned long g_00551500;
extern "C" unsigned long g_00551504;
extern "C" unsigned long g_00551508;
extern "C" unsigned long g_0055150c;
extern "C" unsigned long g_00551510;
extern "C" unsigned long g_00551514;
extern "C" unsigned long g_00551518;
BLGiftManagerView::~BLGiftManagerView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_00550f5c + g_00550fd0);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  if (*(int *)((int)this + 4*(0x42)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x42)) = 0;
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00550fa0 + g_00550fd4,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLGiftManagerView::BLGiftManagerView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(g_005510ac + 0x551054);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLGiftManagerView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * BLGiftManagerView::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x118)));
  0 /* ctorZero */;
  iVar2 = (**(code **)(*piVar1 + 0x18))(piVar1);
  if (iVar2 == 0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    piVar1 = (int *)0x0;
  }
  else {
    ((cocos2d::CCObject *)piVar1)->autorelease();
  }
  return (int *)(piVar1);
}

undefined4 BLGiftManagerView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x108);
}

undefined4 BLGiftManagerView::getBackGround()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

undefined4 BLGiftManagerView::getTabBg()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 BLGiftManagerView::getBtnClose()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

void BLGiftManagerView::onEnter()
{
  ((BLGiftManagerPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLGiftManagerView::onExit()
{
  ((BLGiftManagerPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
bool BLGiftManagerView::init()
{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  code *pcVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  undefined1 *puVar12;
  undefined4 auStack_30 [2];
  undefined1 auStack_28 [4];
  undefined4 uStack_24;
  undefined1 uStack_20;
  undefined1 uStack_1f;
  undefined1 uStack_1e;
  
  iVar1 = (undefined4)(intptr_t)(((cocos2d::CCLayer *)this)->init());
  if (iVar1 != 0) {
    iVar2 = (undefined4)(intptr_t)(((BLGiftManagerPresenter *)this)->create((BLGiftManagerView*)((int)this)));
    *(int *)((int)this + 4*(0x42)) = iVar2;
    piVar11 = (int *)((int)this);
    if (iVar2 != 0) {
      ((cocos2d::CCObject *)this)->retain();
    }
    func_0079e45c(&uStack_20,(unsigned char *)((char *)&g_005511a0 + (intptr_t)(g_005514f0)),auStack_28);
    iVar2 = (undefined4)(intptr_t)(0 /* ctorZero */);
    *(int *)((int)this + 4*(0x44)) = iVar2;
    func_0079e2bc(&uStack_20);
    piVar8 = (int *)*(int *)((int)this + 4*(0x44));
    pcVar7 = *(code **)(*piVar8 + 0x88);
    puVar6 = auStack_30;
    0 /* ctorZero */;
    uVar5 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar5),(int)(uVar3)))));
    0 /* ctorZero */;
    uVar5 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar5),(int)(uVar4)))));
    0 /* ctorZero */;
    (*pcVar7)(piVar8,&uStack_20);
    piVar8 = (int *)*(int *)((int)this + 4*(0x44));
    pcVar7 = *(code **)(*piVar8 + 0x4c);
    0 /* ctorZero */;
    uVar5 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar5),(int)(uVar3)))));
    0 /* ctorZero */;
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uStack_24),(int)(uVar3)))));
    0 /* ctorZero */;
    (*pcVar7)(piVar8,&uStack_20);
    pcVar7 = *(code **)(*piVar11 + 0xcc);
    (*pcVar7)(piVar11,*(int *)((int)this + 4*(0x44)),1,pcVar7,piVar11,*piVar11);
    func_0079e45c(&uStack_20,(unsigned char *)((char *)&g_00551282 + (intptr_t)(g_005514fc)),auStack_28);
    iVar2 = (undefined4)(intptr_t)(0 /* ctorZero */);
    piVar11[0x43] = iVar2;
    piVar8 = piVar11;
    func_0079e2bc(&uStack_20);
    piVar9 = (int *)piVar11[0x43];
    pcVar7 = *(code **)(*piVar9 + 0x88);
    0 /* ctorZero */;
    uVar5 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar5),(int)(uVar3)))));
    puVar12 = auStack_28;
    0 /* ctorZero */;
    uVar4 = (undefined4)(*(undefined4 *)(puVar12 + 4));
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar4),(int)(uVar3)))));
    0 /* ctorZero */;
    (*pcVar7)(piVar9,&uStack_20);
    piVar9 = (int *)piVar11[0x43];
    pcVar7 = *(code **)(*piVar9 + 0x4c);
    0 /* ctorZero */;
    uVar5 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar5),(int)(uVar3)))));
    0 /* ctorZero */;
    uVar4 = (undefined4)(*(undefined4 *)(puVar12 + 4));
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar4),(int)(uVar3)))));
    0 /* ctorZero */;
    (*pcVar7)(piVar9,&uStack_20);
    (**(code **)(*piVar8 + 0xcc))(piVar8,piVar11[0x43],2);
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(g_00551508),(int)(uVar5)))));
    piVar9 = (int *)cocos2d::CCLabelTTF::create((char const*)(unsigned char *)((char *)&g_0055137e + (intptr_t)(g_00551510)), (char const*)(unsigned char *)((char *)&g_0055137c + (intptr_t)(g_0055150c)), uVar5);
    pcVar7 = *(code **)(*piVar9 + 0x7c);
    0 /* ctorZero */;
    (*pcVar7)(piVar9,&uStack_20);
    uStack_20 = 0xff;
    uStack_1f = 0xff;
    uStack_1e = 0xff;
    (**(code **)(*piVar9 + 0x1b4))(piVar9,&uStack_20);
    pcVar7 = *(code **)(*piVar9 + 0x4c);
    iVar2 = (undefined4)(intptr_t)((**(code **)(*(int *)piVar11[0x43] + 0x8c))());
    uVar5 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(*(undefined4 *)(iVar2 + 4)),(int)(0x3f000000)))));
    0 /* ctorZero */;
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(auStack_30[0]),(int)(uVar5)))));
    iVar2 = (undefined4)(intptr_t)((**(code **)(*(int *)piVar11[0x43] + 0x8c))());
    uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(*(undefined4 *)(iVar2 + 4)),(int)(0x3f000000)))));
    0 /* ctorZero */;
    uVar4 = (undefined4)(*(undefined4 *)(puVar12 + 4));
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar4),(int)(uVar3)))));
    0 /* ctorZero */;
    (*pcVar7)(piVar9,&uStack_20);
    (**(code **)(*(int *)piVar11[0x43] + 200))((int *)piVar11[0x43],piVar9);
    func_0079e45c(&uStack_20,(unsigned char *)((char *)&g_00551442 + (intptr_t)(g_00551514)),puVar12);
    piVar9 = (int *)0 /* ctorZero */;
    func_0079e2bc(&uStack_20);
    iVar2 = (undefined4)(intptr_t)(cocos2d::extension::CCControlButton::create((cocos2d::extension::CCScale9Sprite*)piVar9));
    piVar8[0x45] = iVar2;
    piVar11 = piVar8;
    (**(code **)(*(int *)piVar8[0x43] + 0xcc))((int *)piVar8[0x43],iVar2,3);
    piVar10 = (int *)piVar8[0x45];
    pcVar7 = *(code **)(*piVar10 + 0x28c);
    (**(code **)(*piVar9 + 0x1cc))(&uStack_20,piVar9);
    (*pcVar7)(piVar10,&uStack_20);
    piVar9 = (int *)piVar8[0x45];
    pcVar7 = *(code **)(*piVar9 + 0x5c);
    puVar6 = (undefined4 *)(**(code **)(*(int *)piVar8[0x43] + 0x8c))();
    uVar5 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x - _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(*puVar6),(int)(g_00551518)))));
    (*pcVar7)(piVar9,uVar5);
    piVar9 = (int *)piVar8[0x45];
    pcVar7 = *(code **)(*piVar9 + 100);
    iVar2 = (undefined4)(intptr_t)((**(code **)(*(int *)piVar8[0x43] + 0x8c))());
    uVar5 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(*(undefined4 *)(iVar2 + 4)),(int)(0x3f000000)))));
    (*pcVar7)(piVar9,uVar5);
    ((BLGiftManagerPresenter *)piVar8[0x42])->initWithView((BLGiftManagerView*)piVar11);
  }
  return iVar1;
}
