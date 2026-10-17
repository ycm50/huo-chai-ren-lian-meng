#include "BLMainAccoutCheckView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLMainAccoutCheckPresenter.h"
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
extern "C" long long func_0079e3bc(...);
extern "C" long long func_0079e41c(...);
extern "C" long long func_0079e42c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long ghidra_CONCAT13(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_005945e4;
extern "C" unsigned long UNK_00594628;
extern "C" unsigned long UNK_0059466c;
extern "C" unsigned long UNK_00594694;
extern "C" unsigned long UNK_00594836;
extern "C" unsigned long UNK_0059492c;
extern "C" unsigned long UNK_0059495c;
extern "C" unsigned long UNK_00594a30;
extern "C" unsigned long UNK_00594a5a;
extern "C" unsigned long UNK_00594a66;
extern "C" unsigned long UNK_00594afc;
extern "C" unsigned long UNK_00594bc2;
extern "C" unsigned long UNK_00594bf6;
extern "C" unsigned long UNK_00594cc8;
extern "C" unsigned long UNK_00594cf2;
extern "C" unsigned long UNK_00594dba;
extern "C" unsigned long UNK_00594de6;
extern "C" unsigned long UNK_00594eb8;
extern "C" unsigned long UNK_00594f20;
extern "C" unsigned long _DAT_00594734;
extern "C" unsigned long _DAT_00594738;
extern "C" unsigned long _UNK_00594658;
extern "C" unsigned long _UNK_0059465c;
extern "C" unsigned long _UNK_00594670;
extern "C" unsigned long _UNK_00594698;
extern "C" unsigned long _UNK_00594ab8;
extern "C" unsigned long _UNK_00594abc;
extern "C" unsigned long _UNK_00594ac0;
extern "C" unsigned long _UNK_00594ac4;
extern "C" unsigned long _UNK_00594ac8;
extern "C" unsigned long _UNK_00594acc;
extern "C" unsigned long _UNK_00594ad0;
extern "C" unsigned long _UNK_00594ad4;
extern "C" unsigned long _UNK_00594ad8;
extern "C" unsigned long _UNK_00594adc;
extern "C" unsigned long _UNK_00594ed4;
extern "C" unsigned long _UNK_00594ed8;
extern "C" unsigned long _UNK_00594edc;
extern "C" unsigned long _UNK_00594ee0;
extern "C" unsigned long _UNK_00594ee4;
extern "C" unsigned long _UNK_00594ee8;
extern "C" unsigned long _UNK_00594eec;
extern "C" unsigned long _UNK_00594ef0;
extern "C" unsigned long _UNK_00594ef4;
extern "C" unsigned long _UNK_00594ef8;
extern "C" unsigned long _UNK_00594efc;
extern "C" unsigned long _UNK_00594f00;
extern "C" unsigned long _UNK_00594f04;
extern "C" unsigned long _UNK_00594f08;
extern "C" unsigned long _UNK_00594f0c;
extern "C" unsigned long _UNK_0059506c;
extern "C" unsigned long _UNK_00595070;
extern "C" unsigned long _UNK_00595074;
extern "C" unsigned long _UNK_00595078;
extern "C" unsigned long _UNK_0059507c;
extern "C" unsigned long _UNK_00595080;
extern "C" unsigned long g_005945e4;
extern "C" unsigned long g_00594628;
extern "C" unsigned long g_00594658;
extern "C" unsigned long g_0059465c;
extern "C" unsigned long g_0059466c;
extern "C" unsigned long g_00594670;
extern "C" unsigned long g_00594694;
extern "C" unsigned long g_00594698;
extern "C" unsigned long g_00594734;
extern "C" unsigned long g_00594738;
extern "C" unsigned long g_00594836;
extern "C" unsigned long g_0059492c;
extern "C" unsigned long g_0059495c;
extern "C" unsigned long g_00594a30;
extern "C" unsigned long g_00594a5a;
extern "C" unsigned long g_00594a66;
extern "C" unsigned long g_00594ab8;
extern "C" unsigned long g_00594abc;
extern "C" unsigned long g_00594ac0;
extern "C" unsigned long g_00594ac4;
extern "C" unsigned long g_00594ac8;
extern "C" unsigned long g_00594acc;
extern "C" unsigned long g_00594ad0;
extern "C" unsigned long g_00594ad4;
extern "C" unsigned long g_00594ad8;
extern "C" unsigned long g_00594adc;
extern "C" unsigned long g_00594afc;
extern "C" unsigned long g_00594bc2;
extern "C" unsigned long g_00594bf6;
extern "C" unsigned long g_00594cc8;
extern "C" unsigned long g_00594cf2;
extern "C" unsigned long g_00594dba;
extern "C" unsigned long g_00594de6;
extern "C" unsigned long g_00594eb8;
extern "C" unsigned long g_00594ed4;
extern "C" unsigned long g_00594ed8;
extern "C" unsigned long g_00594edc;
extern "C" unsigned long g_00594ee0;
extern "C" unsigned long g_00594ee4;
extern "C" unsigned long g_00594ee8;
extern "C" unsigned long g_00594eec;
extern "C" unsigned long g_00594ef0;
extern "C" unsigned long g_00594ef4;
extern "C" unsigned long g_00594ef8;
extern "C" unsigned long g_00594efc;
extern "C" unsigned long g_00594f00;
extern "C" unsigned long g_00594f04;
extern "C" unsigned long g_00594f08;
extern "C" unsigned long g_00594f0c;
extern "C" unsigned long g_00594f20;
extern "C" unsigned long g_0059506c;
extern "C" unsigned long g_00595070;
extern "C" unsigned long g_00595074;
extern "C" unsigned long g_00595078;
extern "C" unsigned long g_0059507c;
extern "C" unsigned long g_00595080;
BLMainAccoutCheckView::~BLMainAccoutCheckView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_005945e4 + g_00594658);
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
  func_0079e45c(&uStack_14,&g_00594628 + g_0059465c,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLMainAccoutCheckView::BLMainAccoutCheckView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(g_00594734 + 0x5946dc);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLMainAccoutCheckView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * BLMainAccoutCheckView::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x128)));
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

undefined4 BLMainAccoutCheckView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x108);
}

undefined4 BLMainAccoutCheckView::getBackGround()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 BLMainAccoutCheckView::getTitle()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

undefined4 BLMainAccoutCheckView::getBtnClose()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

undefined4 BLMainAccoutCheckView::getBtnYes()
{
  return *(undefined4 *)(((int)this) + 0x118);
}

undefined4 BLMainAccoutCheckView::getBtnNo()
{
  return *(undefined4 *)(((int)this) + 0x120);
}

void BLMainAccoutCheckView::onEnter()
{
  ((BLMainAccoutCheckPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLMainAccoutCheckView::onExit()
{
  ((BLMainAccoutCheckPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
bool BLMainAccoutCheckView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
