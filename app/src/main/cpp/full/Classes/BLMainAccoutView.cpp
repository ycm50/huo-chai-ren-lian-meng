#include "BLMainAccoutView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLMainAccountPresenter.h"
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
extern "C" long long ghidra_CONCAT13(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_005963c8;
extern "C" unsigned long UNK_0059641a;
extern "C" unsigned long UNK_00596460;
extern "C" unsigned long UNK_00596488;
extern "C" unsigned long UNK_0059665a;
extern "C" unsigned long UNK_0059673e;
extern "C" unsigned long UNK_0059682c;
extern "C" unsigned long UNK_00596856;
extern "C" unsigned long UNK_0059691e;
extern "C" unsigned long UNK_00596956;
extern "C" unsigned long UNK_00596a32;
extern "C" unsigned long UNK_00596a9e;
extern "C" unsigned long UNK_00596b64;
extern "C" unsigned long UNK_00596b8e;
extern "C" unsigned long UNK_00596c54;
extern "C" unsigned long UNK_00596c82;
extern "C" unsigned long UNK_00596d48;
extern "C" unsigned long UNK_00596d72;
extern "C" unsigned long UNK_00596e36;
extern "C" unsigned long UNK_00596e64;
extern "C" unsigned long UNK_00596f66;
extern "C" unsigned long UNK_00596f90;
extern "C" unsigned long _DAT_00596540;
extern "C" unsigned long _DAT_00596544;
extern "C" unsigned long _UNK_0059644c;
extern "C" unsigned long _UNK_00596450;
extern "C" unsigned long _UNK_00596464;
extern "C" unsigned long _UNK_0059648c;
extern "C" unsigned long _UNK_00596a3c;
extern "C" unsigned long _UNK_00596a40;
extern "C" unsigned long _UNK_00596a44;
extern "C" unsigned long _UNK_00596a48;
extern "C" unsigned long _UNK_00596a4c;
extern "C" unsigned long _UNK_00596a50;
extern "C" unsigned long _UNK_00596a54;
extern "C" unsigned long _UNK_00596a58;
extern "C" unsigned long _UNK_00596a5c;
extern "C" unsigned long _UNK_00596a60;
extern "C" unsigned long _UNK_00596a64;
extern "C" unsigned long _UNK_00596a68;
extern "C" unsigned long _UNK_00596a6c;
extern "C" unsigned long _UNK_00596a70;
extern "C" unsigned long _UNK_00596a74;
extern "C" unsigned long _UNK_00596e80;
extern "C" unsigned long _UNK_00596e84;
extern "C" unsigned long _UNK_00596e88;
extern "C" unsigned long _UNK_00596e8c;
extern "C" unsigned long _UNK_00596e90;
extern "C" unsigned long _UNK_00596e94;
extern "C" unsigned long _UNK_00596e98;
extern "C" unsigned long _UNK_00596e9c;
extern "C" unsigned long _UNK_00596ea0;
extern "C" unsigned long _UNK_00596ea4;
extern "C" unsigned long _UNK_00596ea8;
extern "C" unsigned long _UNK_00596eac;
extern "C" unsigned long _UNK_00596eb0;
extern "C" unsigned long _UNK_00596eb4;
extern "C" unsigned long _UNK_005970ec;
extern "C" unsigned long _UNK_005970f0;
extern "C" unsigned long _UNK_005970f4;
extern "C" unsigned long _UNK_005970f8;
extern "C" unsigned long _UNK_005970fc;
extern "C" unsigned long _UNK_00597100;
extern "C" unsigned long _UNK_00597104;
extern "C" unsigned long _UNK_00597108;
extern "C" unsigned long g_005963c8;
extern "C" unsigned long g_0059641a;
extern "C" unsigned long g_0059644c;
extern "C" unsigned long g_00596450;
extern "C" unsigned long g_00596460;
extern "C" unsigned long g_00596464;
extern "C" unsigned long g_00596488;
extern "C" unsigned long g_0059648c;
extern "C" unsigned long g_00596540;
extern "C" unsigned long g_00596544;
extern "C" unsigned long g_0059665a;
extern "C" unsigned long g_0059673e;
extern "C" unsigned long g_0059682c;
extern "C" unsigned long g_00596856;
extern "C" unsigned long g_0059691e;
extern "C" unsigned long g_00596956;
extern "C" unsigned long g_00596a32;
extern "C" unsigned long g_00596a3c;
extern "C" unsigned long g_00596a40;
extern "C" unsigned long g_00596a44;
extern "C" unsigned long g_00596a48;
extern "C" unsigned long g_00596a4c;
extern "C" unsigned long g_00596a50;
extern "C" unsigned long g_00596a54;
extern "C" unsigned long g_00596a58;
extern "C" unsigned long g_00596a5c;
extern "C" unsigned long g_00596a60;
extern "C" unsigned long g_00596a64;
extern "C" unsigned long g_00596a68;
extern "C" unsigned long g_00596a6c;
extern "C" unsigned long g_00596a70;
extern "C" unsigned long g_00596a74;
extern "C" unsigned long g_00596a9e;
extern "C" unsigned long g_00596b64;
extern "C" unsigned long g_00596b8e;
extern "C" unsigned long g_00596c54;
extern "C" unsigned long g_00596c82;
extern "C" unsigned long g_00596d48;
extern "C" unsigned long g_00596d72;
extern "C" unsigned long g_00596e36;
extern "C" unsigned long g_00596e64;
extern "C" unsigned long g_00596e80;
extern "C" unsigned long g_00596e84;
extern "C" unsigned long g_00596e88;
extern "C" unsigned long g_00596e8c;
extern "C" unsigned long g_00596e90;
extern "C" unsigned long g_00596e94;
extern "C" unsigned long g_00596e98;
extern "C" unsigned long g_00596e9c;
extern "C" unsigned long g_00596ea0;
extern "C" unsigned long g_00596ea4;
extern "C" unsigned long g_00596ea8;
extern "C" unsigned long g_00596eac;
extern "C" unsigned long g_00596eb0;
extern "C" unsigned long g_00596eb4;
extern "C" unsigned long g_00596f66;
extern "C" unsigned long g_00596f90;
extern "C" unsigned long g_005970ec;
extern "C" unsigned long g_005970f0;
extern "C" unsigned long g_005970f4;
extern "C" unsigned long g_005970f8;
extern "C" unsigned long g_005970fc;
extern "C" unsigned long g_00597100;
extern "C" unsigned long g_00597104;
extern "C" unsigned long g_00597108;
BLMainAccoutView::~BLMainAccoutView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_005963c8 + g_0059644c);
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
  func_0079e45c(&uStack_14,&g_0059641a + g_00596450,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}


int * BLMainAccoutView::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x138)));
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

undefined4 BLMainAccoutView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 BLMainAccoutView::getBtnZhuCeAccout()
{
  return *(undefined4 *)(((int)this) + 0x11c);
}

undefined4 BLMainAccoutView::getBtnLogin()
{
  return *(undefined4 *)(((int)this) + 0x124);
}

undefined4 BLMainAccoutView::getBtnJieShao()
{
  return *(undefined4 *)(((int)this) + 300);
}

undefined4 BLMainAccoutView::getBtnClose()
{
  return *(undefined4 *)(((int)this) + 0x134);
}

undefined4 BLMainAccoutView::getBackGround()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

undefined4 BLMainAccoutView::getTabBg()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

undefined4 BLMainAccoutView::getLabTitle()
{
  return *(undefined4 *)(((int)this) + 0x118);
}

undefined4 BLMainAccoutView::getLabZhuCeAccount()
{
  return *(undefined4 *)(((int)this) + 0x120);
}

undefined4 BLMainAccoutView::getLabLogin()
{
  return *(undefined4 *)(((int)this) + 0x128);
}

void BLMainAccoutView::onEnter()
{
  ((BLMainAccountPresenter *)*(undefined4 *)(((int)this) + 0x10c))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLMainAccoutView::onExit()
{
  ((BLMainAccountPresenter *)*(undefined4 *)(((int)this) + 0x10c))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (2) =====
BLMainAccoutView::BLMainAccoutView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = (undefined4)(intptr_t)(*(int *)(g_00596540 + 0x5964d0));
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  iVar2 = (undefined4)(intptr_t)(cocos2d::CCArray::create());
  *(int *)((int)this + 4*(0x42)) = iVar2;
  if (iVar2 != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLMainAccountView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

bool BLMainAccoutView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
