#include "BLYuanZhengItemPresenter.h"
#include "BLLeakUtils.h"
#include "BLYuanZhengItemView.h"
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
extern "C" long long func_0079e43c(...);
extern "C" long long func_0079e44c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e46c(...);
extern "C" long long func_0079e47c(...);
extern "C" long long func_0079e4ac(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long func_0079e5dc(...);
extern "C" long long func_0079e934(...);
extern "C" long long func_0079e944(...);
extern "C" long long func_0079e964(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_006b5244;
extern "C" unsigned long UNK_006b5262;
extern "C" unsigned long UNK_006b52b4;
extern "C" unsigned long UNK_006b52dc;
extern "C" unsigned long UNK_006b52f2;
extern "C" unsigned long UNK_006b5302;
extern "C" unsigned long UNK_006b5332;
extern "C" unsigned long UNK_006b53ee;
extern "C" unsigned long UNK_006b5410;
extern "C" unsigned long UNK_006b543a;
extern "C" unsigned long UNK_006b5480;
extern "C" unsigned long UNK_006b54c4;
extern "C" unsigned long UNK_006b5522;
extern "C" unsigned long UNK_006b5532;
extern "C" unsigned long UNK_006b568a;
extern "C" unsigned long UNK_006b569a;
extern "C" unsigned long UNK_006b56aa;
extern "C" unsigned long _UNK_006b52a0;
extern "C" unsigned long _UNK_006b52a4;
extern "C" unsigned long _UNK_006b52b8;
extern "C" unsigned long _UNK_006b52e0;
extern "C" unsigned long _UNK_006b5364;
extern "C" unsigned long _UNK_006b5368;
extern "C" unsigned long _UNK_006b536c;
extern "C" unsigned long _UNK_006b5644;
extern "C" unsigned long _UNK_006b5648;
extern "C" unsigned long _UNK_006b564c;
extern "C" unsigned long _UNK_006b5650;
extern "C" unsigned long _UNK_006b5654;
extern "C" unsigned long _UNK_006b5658;
extern "C" unsigned long _UNK_006b565c;
extern "C" unsigned long _UNK_006b5860;
extern "C" unsigned long _UNK_006b5864;
extern "C" unsigned long _UNK_006b5868;
extern "C" unsigned long extraout_r1;
extern "C" unsigned long extraout_r1_00;
extern "C" unsigned long extraout_r1_01;
extern "C" unsigned long g_006b5244;
extern "C" unsigned long g_006b5262;
extern "C" unsigned long g_006b52a0;
extern "C" unsigned long g_006b52a4;
extern "C" unsigned long g_006b52b4;
extern "C" unsigned long g_006b52b8;
extern "C" unsigned long g_006b52dc;
extern "C" unsigned long g_006b52e0;
extern "C" unsigned long g_006b52f2;
extern "C" unsigned long g_006b5302;
extern "C" unsigned long g_006b5332;
extern "C" unsigned long g_006b5364;
extern "C" unsigned long g_006b5368;
extern "C" unsigned long g_006b536c;
extern "C" unsigned long g_006b53ee;
extern "C" unsigned long g_006b5410;
extern "C" unsigned long g_006b543a;
extern "C" unsigned long g_006b5480;
extern "C" unsigned long g_006b54c4;
extern "C" unsigned long g_006b5522;
extern "C" unsigned long g_006b5532;
extern "C" unsigned long g_006b5644;
extern "C" unsigned long g_006b5648;
extern "C" unsigned long g_006b564c;
extern "C" unsigned long g_006b5650;
extern "C" unsigned long g_006b5654;
extern "C" unsigned long g_006b5658;
extern "C" unsigned long g_006b565c;
extern "C" unsigned long g_006b568a;
extern "C" unsigned long g_006b569a;
extern "C" unsigned long g_006b56aa;
extern "C" unsigned long g_006b5860;
extern "C" unsigned long g_006b5864;
extern "C" unsigned long g_006b5868;
bool BLYuanZhengItemPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  *(undefined1 *)(((int)this) + 0x24) = 1;
  return false;
}

void BLYuanZhengItemPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  *(undefined1 *)(((int)this) + 0x24) = 1;
  return;
}

void BLYuanZhengItemPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  *(undefined1 *)(((int)this) + 0x24) = 0;
  return;
}

void BLYuanZhengItemPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLYuanZhengItemPresenter::tick(float p1)
{
  return;
}

BLYuanZhengItemPresenter::~BLYuanZhengItemPresenter()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  iVar2 = *(int *)(&g_006b5244 + g_006b52a0);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x3c;
  piStack_20 = (int *)((int)this);
  uStack_1c = (undefined4)(p2);
  uStack_18 = (undefined4)(p3);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_1c,&g_006b5262 + g_006b52a4,&piStack_20);
  ((BLLeakUtils *)uVar1)->removeClass(*(std::string *)&uStack_1c);
  func_0079e2bc(&uStack_1c);
  func_0079e2bc(((int)this) + 7);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLYuanZhengItemPresenter::BLYuanZhengItemPresenter()
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
  iVar4 = *(int *)(&g_006b52f2 + g_006b5364);
  *(int *)((int)this + 4*(5)) = iVar4 + 0x3c;
  iVar1 = g_006b5368;
  *(int *)this = iVar4 + 8;
  *(int *)((int)this + 4*(7)) = *(int *)(&g_006b5302 + iVar1) + 0xc;
  *(undefined1 *)(((int)this) + 9) = 0;
  *(int *)((int)this + 4*(10)) = 0;
  piVar2 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar3 = (undefined4)((**(code **)(*piVar2 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar3)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 0);
  uVar3 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_006b5332 + g_006b536c,&piStack_18);
  ((BLLeakUtils *)uVar3)->addClass(*(std::string *)&uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

undefined4 BLYuanZhengItemPresenter::create(BLYuanZhengItemView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x2c))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLYuanZhengItemPresenter::onEnter()
{
  return;
}

void BLYuanZhengItemPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  return;
}

int BLYuanZhengItemPresenter::initWithView(BLYuanZhengItemView* p1)
{
  *(undefined4 *)(((int)this) + 0x18) = (undefined4)(intptr_t)p1;
  return 1;
}

void BLYuanZhengItemPresenter::updateData()
{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  int iVar7;
  undefined1 *puVar8;
  undefined4 uVar9;
  int iVar10;
  code *pcVar11;
  int iStack_f4;
  undefined1 auStack_f0 [4];
  undefined1 auStack_ec [4];
  undefined1 auStack_e8 [4];
  undefined1 auStack_e4 [4];
  int iStack_e0;
  undefined1 auStack_dc [8];
  undefined1 auStack_d4 [8];
  undefined1 auStack_cc [4];
  undefined1 auStack_c8 [180];
  
  piVar1 = (int *)((BLYuanZhengItemView *)*(undefined4 *)(((int)this) + 0x18))->getLabName();
  (**(code **)(*piVar1 + 0x234))(piVar1,*(undefined4 *)(((int)this) + 0x1c));
  uVar9 = (undefined4)(*(undefined4 *)(((int)this) + 0x20));
  func_0079e43c(auStack_d4,0x18);
  func_0079e44c(auStack_cc,uVar9);
  func_0079e45c(auStack_dc,&g_006b53ee + g_006b5644,&iStack_e0);
  func_0079e46c(&iStack_e0,auStack_c8);
  func_0079e2bc(auStack_dc);
  func_0079e47c(auStack_d4);
  iStack_f4 = *(int *)(&g_006b5410 + g_006b5648) + 0xc;
  func_0079e934(&iStack_f4,*(int *)(iStack_e0 + -0xc) + 0xf);
  func_0079e944(&iStack_f4,&g_006b543a + g_006b564c,0xf);
  func_0079e5dc(&iStack_f4,&iStack_e0);
  func_0079e2bc(&iStack_e0);
  piVar1 = (int *)((BLYuanZhengItemView *)*(undefined4 *)(((int)this) + 0x18))->getLabFight();
  (**(code **)(*piVar1 + 0x234))(piVar1,iStack_f4);
  iVar7 = *(int *)(((int)this) + 0x28);
  iVar10 = iVar7 + 1;
  if (iVar7 < 3) {
    cocos2d::CCString::createWithFormat((char const*)&g_006b5480 + g_006b5650, iVar10);
    uVar9 = (undefined4)(((cocos2d::CCString *)this)->getCString());
    piVar1 = (int *)((BLYuanZhengItemView *)*(undefined4 *)(((int)this) + 0x18))->getSprimg_icon();
    puVar8 = auStack_f0;
    pcVar11 = *(code **)(*piVar1 + 0x20c);
    func_0079e45c(puVar8,uVar9,auStack_d4);
    piVar2 = (int *)0 /* ctorZero */;
    uVar9 = (undefined4)((**(code **)(*piVar2 + 0x214))());
    (*pcVar11)(piVar1,uVar9);
  }
  else {
    if (8 < iVar7) {
      if (iVar7 < 99) {
        func_0079e964(iVar10,10);
        uVar9 = (undefined4)(((long long)((int)(iVar10) / (int)(10))));
        cocos2d::CCString::createWithFormat((char const*)&g_006b5522 + g_006b5658, uVar9);
        uVar9 = (undefined4)(((cocos2d::CCString *)this)->getCString());
        cocos2d::CCString::createWithFormat((char const*)&g_006b5532 + g_006b565c, extraout_r1);
        uVar3 = (undefined4)(((cocos2d::CCString *)this)->getCString());
        piVar1 = (int *)((BLYuanZhengItemView *)*(undefined4 *)(((int)this) + 0x18))->getSprimg_icon();
        pcVar11 = *(code **)(*piVar1 + 0x20c);
        func_0079e45c(auStack_e8,uVar9,auStack_d4);
        piVar2 = (int *)0 /* ctorZero */;
        uVar9 = (undefined4)((**(code **)(*piVar2 + 0x214))());
        (*pcVar11)(piVar1,uVar9);
        func_0079e2bc(auStack_e8);
        piVar1 = (int *)((BLYuanZhengItemView *)*(undefined4 *)(((int)this) + 0x18))->getSprimg_icon();
        pcVar11 = *(code **)(*piVar1 + 0x5c);
        piVar2 = (int *)((BLYuanZhengItemView *)*(undefined4 *)(((int)this) + 0x18))->getSprimg_icon();
        uVar9 = (undefined4)((**(code **)(*piVar2 + 0x60))());
        piVar2 = (int *)((BLYuanZhengItemView *)*(undefined4 *)(((int)this) + 0x18))->getSprimg_icon();
        puVar5 = (undefined4 *)(**(code **)(*piVar2 + 0x8c))();
        uVar4 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(*puVar5),(int)(0x3f000000)))));
        uVar9 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x - _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar9),(int)(uVar4)))));
        (*pcVar11)(piVar1,uVar9);
        func_0079e45c(auStack_e4,uVar3,auStack_d4);
        piVar2 = (int *)0 /* ctorZero */;
        func_0079e2bc(auStack_e4);
        pcVar11 = *(code **)(*piVar2 + 0x4c);
        piVar1 = (int *)((BLYuanZhengItemView *)*(undefined4 *)(((int)this) + 0x18))->getSprimg_icon();
        uVar9 = (undefined4)((**(code **)(*piVar1 + 0x50))());
        piVar1 = (int *)((BLYuanZhengItemView *)*(undefined4 *)(((int)this) + 0x18))->getSprimg_icon();
        puVar5 = (undefined4 *)(**(code **)(*piVar1 + 0x8c))();
        uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(*puVar5),(int)(0x3f000000)))));
        puVar5 = (undefined4 *)(**(code **)(*piVar2 + 0x8c))(piVar2);
        uVar4 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(*puVar5),(int)(0x3f000000)))));
        uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x + _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar3),(int)(uVar4)))));
        0 /* ctorZero */;
        (*(cocos2d::CCPoint *)(void *)auStack_d4) = (*(cocos2d::CCPoint *)(void *)auStack_d4) + (*(cocos2d::CCPoint *)(void *)auStack_dc);
        (*pcVar11)(piVar2,auStack_d4);
        piVar1 = *(int **)(((int)this) + 0x18);
        pcVar11 = *(code **)(*piVar1 + 0xcc);
      }
      else {
        func_0079e964(iVar10,100);
        uVar9 = (undefined4)(((long long)((int)(extraout_r1_00) / (int)(10))));
        func_0079e964(iVar10,10);
        uVar3 = (undefined4)(((long long)((int)(iVar10) / (int)(100))));
        cocos2d::CCString::createWithFormat((char const*)&g_006b568a + g_006b5860, uVar3);
        uVar3 = (undefined4)(((cocos2d::CCString *)this)->getCString());
        cocos2d::CCString::createWithFormat((char const*)&g_006b569a + g_006b5864, uVar9);
        uVar9 = (undefined4)(((cocos2d::CCString *)this)->getCString());
        cocos2d::CCString::createWithFormat((char const*)&g_006b56aa + g_006b5868, extraout_r1_01);
        uVar4 = (undefined4)(((cocos2d::CCString *)this)->getCString());
        piVar1 = (int *)((BLYuanZhengItemView *)*(undefined4 *)(((int)this) + 0x18))->getSprimg_icon();
        pcVar11 = *(code **)(*piVar1 + 0x20c);
        func_0079e45c(&iStack_e0,uVar3,auStack_d4);
        piVar2 = (int *)0 /* ctorZero */;
        uVar3 = (undefined4)((**(code **)(*piVar2 + 0x214))());
        (*pcVar11)(piVar1,uVar3);
        func_0079e2bc(&iStack_e0);
        piVar1 = (int *)((BLYuanZhengItemView *)*(undefined4 *)(((int)this) + 0x18))->getSprimg_icon();
        pcVar11 = *(code **)(*piVar1 + 0x5c);
        piVar2 = (int *)((BLYuanZhengItemView *)*(undefined4 *)(((int)this) + 0x18))->getSprimg_icon();
        uVar3 = (undefined4)((**(code **)(*piVar2 + 0x60))());
        piVar2 = (int *)((BLYuanZhengItemView *)*(undefined4 *)(((int)this) + 0x18))->getSprimg_icon();
        puVar5 = (undefined4 *)(**(code **)(*piVar2 + 0x8c))();
        uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x - _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar3),(int)(*puVar5)))));
        (*pcVar11)(piVar1,uVar3);
        func_0079e45c(auStack_dc,uVar9,auStack_d4);
        piVar1 = (int *)0 /* ctorZero */;
        func_0079e2bc(auStack_dc);
        pcVar11 = *(code **)(*piVar1 + 0x4c);
        piVar2 = (int *)((BLYuanZhengItemView *)*(undefined4 *)(((int)this) + 0x18))->getSprimg_icon();
        uVar9 = (undefined4)((**(code **)(*piVar2 + 0x50))());
        piVar2 = (int *)((BLYuanZhengItemView *)*(undefined4 *)(((int)this) + 0x18))->getSprimg_icon();
        puVar5 = (undefined4 *)(**(code **)(*piVar2 + 0x8c))();
        uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(*puVar5),(int)(0x3f000000)))));
        puVar5 = (undefined4 *)(**(code **)(*piVar1 + 0x8c))(piVar1);
        uVar6 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(*puVar5),(int)(0x3f000000)))));
        uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x + _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar3),(int)(uVar6)))));
        0 /* ctorZero */;
        (*(cocos2d::CCPoint *)(void *)auStack_d4) = (*(cocos2d::CCPoint *)(void *)auStack_d4) + (*(cocos2d::CCPoint *)(void *)auStack_dc);
        (*pcVar11)(piVar1,auStack_d4);
        (**(code **)(**(int **)(((int)this) + 0x18) + 0xcc))(*(int **)(((int)this) + 0x18),piVar1,1);
        func_0079e45c(auStack_d4,uVar4,auStack_dc);
        piVar2 = (int *)0 /* ctorZero */;
        func_0079e2bc(auStack_d4);
        pcVar11 = *(code **)(*piVar2 + 0x4c);
        uVar9 = (undefined4)((**(code **)(*piVar1 + 0x50))(piVar1));
        puVar5 = (undefined4 *)(**(code **)(*piVar1 + 0x8c))(piVar1);
        uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(*puVar5),(int)(0x3f000000)))));
        puVar5 = (undefined4 *)(**(code **)(*piVar2 + 0x8c))(piVar2);
        uVar4 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(*puVar5),(int)(0x3f000000)))));
        uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x + _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar3),(int)(uVar4)))));
        0 /* ctorZero */;
        (*(cocos2d::CCPoint *)(void *)auStack_d4) = (*(cocos2d::CCPoint *)(void *)auStack_d4) + (*(cocos2d::CCPoint *)(void *)auStack_dc);
        (*pcVar11)(piVar2,auStack_d4);
        piVar1 = *(int **)(((int)this) + 0x18);
        pcVar11 = *(code **)(*piVar1 + 0xcc);
      }
      (*pcVar11)(piVar1,piVar2,1);
      goto code_r0x006b5838;
    }
    cocos2d::CCString::createWithFormat((char const*)&g_006b54c4 + g_006b5654, iVar10);
    uVar9 = (undefined4)(((cocos2d::CCString *)this)->getCString());
    piVar1 = (int *)((BLYuanZhengItemView *)*(undefined4 *)(((int)this) + 0x18))->getSprimg_icon();
    puVar8 = auStack_ec;
    pcVar11 = *(code **)(*piVar1 + 0x20c);
    func_0079e45c(puVar8,uVar9,auStack_d4);
    piVar2 = (int *)0 /* ctorZero */;
    uVar9 = (undefined4)((**(code **)(*piVar2 + 0x214))());
    (*pcVar11)(piVar1,uVar9);
  }
  func_0079e2bc(puVar8);
code_r0x006b5838:
  func_0079e2bc(&iStack_f4);
  return;
}

void BLYuanZhengItemPresenter::initWith(zcRankInfo const& p1, int p2)
{
  undefined4 uVar1;
  
  func_0079e52c(((int)this) + 0x1c);
  uVar1 = (undefined4)(*(undefined4 *)(((int)&p1) + 4));
  *(undefined4 *)(((int)this) + 0x28) = p2;
  *(undefined4 *)(((int)this) + 0x20) = uVar1;
  BLYuanZhengItemPresenter::updateData();
  return;
}

void BLYuanZhengItemPresenter::onInfo(cocos2d::CCObject* p1, unsigned int p2)
{
  return;
}
