#include "BLRoleItemView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLPageControl.h"
#include "BLRoleItemPresenter.h"
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
extern "C" unsigned long UNK_005e3644;
extern "C" unsigned long UNK_005e3676;
extern "C" unsigned long UNK_005e36d0;
extern "C" unsigned long UNK_005e3794;
extern "C" unsigned long UNK_005e38e0;
extern "C" unsigned long UNK_005e390e;
extern "C" unsigned long UNK_005e3992;
extern "C" unsigned long UNK_005e39c0;
extern "C" unsigned long UNK_005e3b18;
extern "C" unsigned long UNK_005e3b5e;
extern "C" unsigned long UNK_005e3bbe;
extern "C" unsigned long UNK_005e3be8;
extern "C" unsigned long UNK_005e3cba;
extern "C" unsigned long UNK_005e3ce4;
extern "C" unsigned long UNK_005e3d9c;
extern "C" unsigned long _UNK_005e36bc;
extern "C" unsigned long _UNK_005e36c0;
extern "C" unsigned long _UNK_005e36d4;
extern "C" unsigned long _UNK_005e3798;
extern "C" unsigned long _UNK_005e3938;
extern "C" unsigned long _UNK_005e393c;
extern "C" unsigned long _UNK_005e3b30;
extern "C" unsigned long _UNK_005e3b34;
extern "C" unsigned long _UNK_005e3b38;
extern "C" unsigned long _UNK_005e3b3c;
extern "C" unsigned long _UNK_005e3b40;
extern "C" unsigned long _UNK_005e3b44;
extern "C" unsigned long _UNK_005e3ecc;
extern "C" unsigned long _UNK_005e3ed0;
extern "C" unsigned long _UNK_005e3ed4;
extern "C" unsigned long _UNK_005e3ed8;
extern "C" unsigned long _UNK_005e3edc;
extern "C" unsigned long _UNK_005e3ee0;
extern "C" unsigned long _UNK_005e3ee4;
extern "C" unsigned long _UNK_005e3ee8;
extern "C" unsigned long _UNK_005e3eec;
extern "C" unsigned long _UNK_005e3ef0;
extern "C" unsigned long _UNK_005e3ef4;
extern "C" unsigned long _UNK_005e3ef8;
extern "C" unsigned long _UNK_005e3efc;
extern "C" unsigned long _UNK_005e3f00;
extern "C" unsigned long _UNK_005e3f04;
extern "C" unsigned long g_005e3644;
extern "C" unsigned long g_005e3676;
extern "C" unsigned long g_005e36bc;
extern "C" unsigned long g_005e36c0;
extern "C" unsigned long g_005e36d0;
extern "C" unsigned long g_005e36d4;
extern "C" unsigned long g_005e3794;
extern "C" unsigned long g_005e3798;
extern "C" unsigned long g_005e38e0;
extern "C" unsigned long g_005e390e;
extern "C" unsigned long g_005e3938;
extern "C" unsigned long g_005e393c;
extern "C" unsigned long g_005e3992;
extern "C" unsigned long g_005e39c0;
extern "C" unsigned long g_005e3b18;
extern "C" unsigned long g_005e3b30;
extern "C" unsigned long g_005e3b34;
extern "C" unsigned long g_005e3b38;
extern "C" unsigned long g_005e3b3c;
extern "C" unsigned long g_005e3b40;
extern "C" unsigned long g_005e3b44;
extern "C" unsigned long g_005e3b5e;
extern "C" unsigned long g_005e3bbe;
extern "C" unsigned long g_005e3be8;
extern "C" unsigned long g_005e3cba;
extern "C" unsigned long g_005e3ce4;
extern "C" unsigned long g_005e3d9c;
extern "C" unsigned long g_005e3ecc;
extern "C" unsigned long g_005e3ed0;
extern "C" unsigned long g_005e3ed4;
extern "C" unsigned long g_005e3ed8;
extern "C" unsigned long g_005e3edc;
extern "C" unsigned long g_005e3ee0;
extern "C" unsigned long g_005e3ee4;
extern "C" unsigned long g_005e3ee8;
extern "C" unsigned long g_005e3eec;
extern "C" unsigned long g_005e3ef0;
extern "C" unsigned long g_005e3ef4;
extern "C" unsigned long g_005e3ef8;
extern "C" unsigned long g_005e3efc;
extern "C" unsigned long g_005e3f00;
extern "C" unsigned long g_005e3f04;
BLRoleItemView::~BLRoleItemView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_005e3644 + g_005e36bc);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005e3676 + g_005e36c0,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  if (*(int *)((int)this + 4*(0x42)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x42)) = 0;
  }
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLRoleItemView::BLRoleItemView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_005e38e0 + g_005e3938);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005e390e + g_005e393c,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * BLRoleItemView::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x120)));
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


bool BLRoleItemView::init()
{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = ((cocos2d::CCLayer *)this)->init();
  if (iVar1 != 0) {
    uVar2 = (undefined4)(((BLRoleItemPresenter *)this)->create());
    *(undefined4 *)(((int)this) + 0x108) = uVar2;
    ((cocos2d::CCObject *)this)->retain();
    BLRoleItemView::initView();
    ((BLRoleItemPresenter *)*(undefined4 *)(((int)this) + 0x108))->initWithView((BLRoleItemView*)((int)this));
  }
  return iVar1;
}

void BLRoleItemView::onEnter()
{
  ((BLRoleItemPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLRoleItemView::onExit()
{
  ((BLRoleItemPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
void BLRoleItemView::initView()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
