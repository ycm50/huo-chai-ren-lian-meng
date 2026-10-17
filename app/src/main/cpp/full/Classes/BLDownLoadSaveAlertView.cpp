#include "BLDownLoadSaveAlertView.h"
#include "BLDownLoadSaveAlertViewPresenter.h"
#include "BLLanguage.h"
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
extern "C" long long ghidra_CONCAT13(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_005f83d0;
extern "C" unsigned long UNK_005f8422;
extern "C" unsigned long UNK_005f8468;
extern "C" unsigned long UNK_005f8490;
extern "C" unsigned long UNK_005f8616;
extern "C" unsigned long UNK_005f86f8;
extern "C" unsigned long UNK_005f87f2;
extern "C" unsigned long UNK_005f8820;
extern "C" unsigned long UNK_005f88fe;
extern "C" unsigned long UNK_005f8928;
extern "C" unsigned long UNK_005f89f8;
extern "C" unsigned long UNK_005f8a64;
extern "C" unsigned long UNK_005f8b22;
extern "C" unsigned long UNK_005f8b56;
extern "C" unsigned long UNK_005f8c72;
extern "C" unsigned long UNK_005f8c9c;
extern "C" unsigned long _DAT_005f851c;
extern "C" unsigned long _DAT_005f8520;
extern "C" unsigned long _UNK_005f8454;
extern "C" unsigned long _UNK_005f8458;
extern "C" unsigned long _UNK_005f846c;
extern "C" unsigned long _UNK_005f8494;
extern "C" unsigned long _UNK_005f89f8;
extern "C" unsigned long _UNK_005f89fc;
extern "C" unsigned long _UNK_005f8a00;
extern "C" unsigned long _UNK_005f8a04;
extern "C" unsigned long _UNK_005f8a08;
extern "C" unsigned long _UNK_005f8a0c;
extern "C" unsigned long _UNK_005f8a10;
extern "C" unsigned long _UNK_005f8a14;
extern "C" unsigned long _UNK_005f8a18;
extern "C" unsigned long _UNK_005f8a1c;
extern "C" unsigned long _UNK_005f8a20;
extern "C" unsigned long _UNK_005f8a24;
extern "C" unsigned long _UNK_005f8a28;
extern "C" unsigned long _UNK_005f8a2c;
extern "C" unsigned long _UNK_005f8a30;
extern "C" unsigned long _UNK_005f8a34;
extern "C" unsigned long _UNK_005f8df0;
extern "C" unsigned long _UNK_005f8df4;
extern "C" unsigned long _UNK_005f8df8;
extern "C" unsigned long _UNK_005f8dfc;
extern "C" unsigned long _UNK_005f8e00;
extern "C" unsigned long _UNK_005f8e04;
extern "C" unsigned long _UNK_005f8e08;
extern "C" unsigned long _UNK_005f8e0c;
extern "C" unsigned long _UNK_005f8e10;
extern "C" unsigned long _UNK_005f8e14;
extern "C" unsigned long _UNK_005f8e18;
extern "C" unsigned long _UNK_005f8e1c;
extern "C" unsigned long _UNK_005f8e20;
extern "C" unsigned long _UNK_005f8e24;
extern "C" unsigned long g_005f83d0;
extern "C" unsigned long g_005f8422;
extern "C" unsigned long g_005f8454;
extern "C" unsigned long g_005f8458;
extern "C" unsigned long g_005f8468;
extern "C" unsigned long g_005f846c;
extern "C" unsigned long g_005f8490;
extern "C" unsigned long g_005f8494;
extern "C" unsigned long g_005f851c;
extern "C" unsigned long g_005f8520;
extern "C" unsigned long g_005f8616;
extern "C" unsigned long g_005f86f8;
extern "C" unsigned long g_005f87f2;
extern "C" unsigned long g_005f8820;
extern "C" unsigned long g_005f88fe;
extern "C" unsigned long g_005f8928;
extern "C" unsigned long g_005f89f8;
extern "C" unsigned long g_005f89fc;
extern "C" unsigned long g_005f8a00;
extern "C" unsigned long g_005f8a04;
extern "C" unsigned long g_005f8a08;
extern "C" unsigned long g_005f8a0c;
extern "C" unsigned long g_005f8a10;
extern "C" unsigned long g_005f8a14;
extern "C" unsigned long g_005f8a18;
extern "C" unsigned long g_005f8a1c;
extern "C" unsigned long g_005f8a20;
extern "C" unsigned long g_005f8a24;
extern "C" unsigned long g_005f8a28;
extern "C" unsigned long g_005f8a2c;
extern "C" unsigned long g_005f8a30;
extern "C" unsigned long g_005f8a34;
extern "C" unsigned long g_005f8a64;
extern "C" unsigned long g_005f8b22;
extern "C" unsigned long g_005f8b56;
extern "C" unsigned long g_005f8c72;
extern "C" unsigned long g_005f8c9c;
extern "C" unsigned long g_005f8df0;
extern "C" unsigned long g_005f8df4;
extern "C" unsigned long g_005f8df8;
extern "C" unsigned long g_005f8dfc;
extern "C" unsigned long g_005f8e00;
extern "C" unsigned long g_005f8e04;
extern "C" unsigned long g_005f8e08;
extern "C" unsigned long g_005f8e0c;
extern "C" unsigned long g_005f8e10;
extern "C" unsigned long g_005f8e14;
extern "C" unsigned long g_005f8e18;
extern "C" unsigned long g_005f8e1c;
extern "C" unsigned long g_005f8e20;
extern "C" unsigned long g_005f8e24;
BLDownLoadSaveAlertView::~BLDownLoadSaveAlertView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_005f83d0 + g_005f8454);
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
  if (*(int *)((int)this + 4*(0x43)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x43)) = 0;
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005f8422 + g_005f8458,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}


int * BLDownLoadSaveAlertView::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(300)));
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

undefined4 BLDownLoadSaveAlertView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

void BLDownLoadSaveAlertView::onEnter()
{
  (**(code **)(**(int **)(((int)this) + 0x10c) + 0x18))();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLDownLoadSaveAlertView::onExit()
{
  (**(code **)(**(int **)(((int)this) + 0x10c) + 0x1c))();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (2) =====
BLDownLoadSaveAlertView::BLDownLoadSaveAlertView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = (undefined4)(intptr_t)(*(int *)(g_005f851c + 0x5f84a8));
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  *(int *)((int)this + 4*(0x43)) = 0;
  iVar2 = (undefined4)(intptr_t)(cocos2d::CCArray::create());
  *(int *)((int)this + 4*(0x42)) = iVar2;
  if (iVar2 != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLDownLoadSaveAlertView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

bool BLDownLoadSaveAlertView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
