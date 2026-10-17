#include "BLSuitListItemView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLSuitListItemPresenter.h"
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
extern "C" long long ghidra_CONCAT13(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_00694e7c;
extern "C" unsigned long UNK_00694ec0;
extern "C" unsigned long UNK_00694f04;
extern "C" unsigned long UNK_00694f2c;
extern "C" unsigned long UNK_00694f44;
extern "C" unsigned long UNK_00694f72;
extern "C" unsigned long UNK_00695042;
extern "C" unsigned long UNK_006950c6;
extern "C" unsigned long UNK_00695160;
extern "C" unsigned long UNK_0069518a;
extern "C" unsigned long UNK_00695246;
extern "C" unsigned long UNK_0069527c;
extern "C" unsigned long UNK_0069533c;
extern "C" unsigned long UNK_00695368;
extern "C" unsigned long UNK_0069545e;
extern "C" unsigned long UNK_0069548a;
extern "C" unsigned long UNK_0069554a;
extern "C" unsigned long UNK_00695576;
extern "C" unsigned long UNK_00695626;
extern "C" unsigned long UNK_00695704;
extern "C" unsigned long UNK_0069580c;
extern "C" unsigned long UNK_00695838;
extern "C" unsigned long UNK_00695936;
extern "C" unsigned long UNK_00695960;
extern "C" unsigned long UNK_00695a22;
extern "C" unsigned long UNK_00695a4c;
extern "C" unsigned long UNK_00695af8;
extern "C" unsigned long UNK_00695be8;
extern "C" unsigned long UNK_00695c14;
extern "C" unsigned long _UNK_00694ef0;
extern "C" unsigned long _UNK_00694ef4;
extern "C" unsigned long _UNK_00694f08;
extern "C" unsigned long _UNK_00694f30;
extern "C" unsigned long _UNK_00694f9c;
extern "C" unsigned long _UNK_00694fa0;
extern "C" unsigned long _UNK_0069541c;
extern "C" unsigned long _UNK_00695420;
extern "C" unsigned long _UNK_00695424;
extern "C" unsigned long _UNK_00695428;
extern "C" unsigned long _UNK_0069542c;
extern "C" unsigned long _UNK_00695430;
extern "C" unsigned long _UNK_00695434;
extern "C" unsigned long _UNK_00695438;
extern "C" unsigned long _UNK_0069543c;
extern "C" unsigned long _UNK_00695440;
extern "C" unsigned long _UNK_00695444;
extern "C" unsigned long _UNK_00695448;
extern "C" unsigned long _UNK_0069544c;
extern "C" unsigned long _UNK_00695450;
extern "C" unsigned long _UNK_00695840;
extern "C" unsigned long _UNK_00695844;
extern "C" unsigned long _UNK_00695848;
extern "C" unsigned long _UNK_0069584c;
extern "C" unsigned long _UNK_00695850;
extern "C" unsigned long _UNK_00695854;
extern "C" unsigned long _UNK_00695858;
extern "C" unsigned long _UNK_0069585c;
extern "C" unsigned long _UNK_00695860;
extern "C" unsigned long _UNK_00695864;
extern "C" unsigned long _UNK_00695868;
extern "C" unsigned long _UNK_0069586c;
extern "C" unsigned long _UNK_00695870;
extern "C" unsigned long _UNK_00695874;
extern "C" unsigned long _UNK_00695878;
extern "C" unsigned long _UNK_0069587c;
extern "C" unsigned long _UNK_00695c84;
extern "C" unsigned long _UNK_00695c88;
extern "C" unsigned long _UNK_00695c8c;
extern "C" unsigned long _UNK_00695c90;
extern "C" unsigned long _UNK_00695c94;
extern "C" unsigned long _UNK_00695c98;
extern "C" unsigned long _UNK_00695c9c;
extern "C" unsigned long _UNK_00695ca0;
extern "C" unsigned long _UNK_00695ca4;
extern "C" unsigned long _UNK_00695ca8;
extern "C" unsigned long _UNK_00695cac;
extern "C" unsigned long _UNK_00695cb0;
extern "C" unsigned long _UNK_00695cb4;
extern "C" unsigned long _UNK_00695cb8;
extern "C" unsigned long _UNK_00695cbc;
extern "C" unsigned long _UNK_00695cc0;
extern "C" unsigned long _UNK_00695cc4;
extern "C" unsigned long _UNK_00695cc8;
extern "C" unsigned long _UNK_00695ccc;
extern "C" unsigned long _UNK_00695dc8;
extern "C" unsigned long _UNK_00695dcc;
extern "C" unsigned long _UNK_00695dd0;
extern "C" unsigned long _UNK_00695dd4;
extern "C" unsigned long g_00694e7c;
extern "C" unsigned long g_00694ec0;
extern "C" unsigned long g_00694ef0;
extern "C" unsigned long g_00694ef4;
extern "C" unsigned long g_00694f04;
extern "C" unsigned long g_00694f08;
extern "C" unsigned long g_00694f2c;
extern "C" unsigned long g_00694f30;
extern "C" unsigned long g_00694f44;
extern "C" unsigned long g_00694f72;
extern "C" unsigned long g_00694f9c;
extern "C" unsigned long g_00694fa0;
extern "C" unsigned long g_00695042;
extern "C" unsigned long g_006950c6;
extern "C" unsigned long g_00695160;
extern "C" unsigned long g_0069518a;
extern "C" unsigned long g_00695246;
extern "C" unsigned long g_0069527c;
extern "C" unsigned long g_0069533c;
extern "C" unsigned long g_00695368;
extern "C" unsigned long g_0069541c;
extern "C" unsigned long g_00695420;
extern "C" unsigned long g_00695424;
extern "C" unsigned long g_00695428;
extern "C" unsigned long g_0069542c;
extern "C" unsigned long g_00695430;
extern "C" unsigned long g_00695434;
extern "C" unsigned long g_00695438;
extern "C" unsigned long g_0069543c;
extern "C" unsigned long g_00695440;
extern "C" unsigned long g_00695444;
extern "C" unsigned long g_00695448;
extern "C" unsigned long g_0069544c;
extern "C" unsigned long g_00695450;
extern "C" unsigned long g_0069545e;
extern "C" unsigned long g_0069548a;
extern "C" unsigned long g_0069554a;
extern "C" unsigned long g_00695576;
extern "C" unsigned long g_00695626;
extern "C" unsigned long g_00695704;
extern "C" unsigned long g_0069580c;
extern "C" unsigned long g_00695838;
extern "C" unsigned long g_00695840;
extern "C" unsigned long g_00695844;
extern "C" unsigned long g_00695848;
extern "C" unsigned long g_0069584c;
extern "C" unsigned long g_00695850;
extern "C" unsigned long g_00695854;
extern "C" unsigned long g_00695858;
extern "C" unsigned long g_0069585c;
extern "C" unsigned long g_00695860;
extern "C" unsigned long g_00695864;
extern "C" unsigned long g_00695868;
extern "C" unsigned long g_0069586c;
extern "C" unsigned long g_00695870;
extern "C" unsigned long g_00695874;
extern "C" unsigned long g_00695878;
extern "C" unsigned long g_0069587c;
extern "C" unsigned long g_00695936;
extern "C" unsigned long g_00695960;
extern "C" unsigned long g_00695a22;
extern "C" unsigned long g_00695a4c;
extern "C" unsigned long g_00695af8;
extern "C" unsigned long g_00695be8;
extern "C" unsigned long g_00695c14;
extern "C" unsigned long g_00695c84;
extern "C" unsigned long g_00695c88;
extern "C" unsigned long g_00695c8c;
extern "C" unsigned long g_00695c90;
extern "C" unsigned long g_00695c94;
extern "C" unsigned long g_00695c98;
extern "C" unsigned long g_00695c9c;
extern "C" unsigned long g_00695ca0;
extern "C" unsigned long g_00695ca4;
extern "C" unsigned long g_00695ca8;
extern "C" unsigned long g_00695cac;
extern "C" unsigned long g_00695cb0;
extern "C" unsigned long g_00695cb4;
extern "C" unsigned long g_00695cb8;
extern "C" unsigned long g_00695cbc;
extern "C" unsigned long g_00695cc0;
extern "C" unsigned long g_00695cc4;
extern "C" unsigned long g_00695cc8;
extern "C" unsigned long g_00695ccc;
extern "C" unsigned long g_00695dc8;
extern "C" unsigned long g_00695dcc;
extern "C" unsigned long g_00695dd0;
extern "C" unsigned long g_00695dd4;
BLSuitListItemView::~BLSuitListItemView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_00694e7c + g_00694ef0);
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
  func_0079e45c(&uStack_14,&g_00694ec0 + g_00694ef4,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLSuitListItemView::BLSuitListItemView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_00694f44 + g_00694f9c);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00694f72 + g_00694fa0,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * BLSuitListItemView::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x134)));
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

void BLSuitListItemView::onEnter()
{
  ((BLSuitListItemPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLSuitListItemView::onExit()
{
  ((BLSuitListItemPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
bool BLSuitListItemView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
