#include "BLBuyRoleAlertView.h"
#include "BLBuyRoleAlertPresenter.h"
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
extern "C" unsigned long UNK_005f6658;
extern "C" unsigned long UNK_005f66aa;
extern "C" unsigned long UNK_005f66f0;
extern "C" unsigned long UNK_005f6718;
extern "C" unsigned long UNK_005f68ea;
extern "C" unsigned long UNK_005f69cc;
extern "C" unsigned long UNK_005f6ac8;
extern "C" unsigned long UNK_005f6af4;
extern "C" unsigned long UNK_005f6bd0;
extern "C" unsigned long UNK_005f6bfe;
extern "C" unsigned long UNK_005f6d0e;
extern "C" unsigned long UNK_005f6d38;
extern "C" unsigned long UNK_005f6dfa;
extern "C" unsigned long UNK_005f6e2e;
extern "C" unsigned long UNK_005f6f4c;
extern "C" unsigned long UNK_005f6f76;
extern "C" unsigned long UNK_005f703e;
extern "C" unsigned long UNK_005f706a;
extern "C" unsigned long UNK_005f7188;
extern "C" unsigned long UNK_005f71b2;
extern "C" unsigned long _DAT_005f67d0;
extern "C" unsigned long _DAT_005f67d4;
extern "C" unsigned long _UNK_005f66dc;
extern "C" unsigned long _UNK_005f66e0;
extern "C" unsigned long _UNK_005f66f4;
extern "C" unsigned long _UNK_005f671c;
extern "C" unsigned long _UNK_005f6cc8;
extern "C" unsigned long _UNK_005f6ccc;
extern "C" unsigned long _UNK_005f6cd0;
extern "C" unsigned long _UNK_005f6cd4;
extern "C" unsigned long _UNK_005f6cd8;
extern "C" unsigned long _UNK_005f6cdc;
extern "C" unsigned long _UNK_005f6ce0;
extern "C" unsigned long _UNK_005f6ce4;
extern "C" unsigned long _UNK_005f6ce8;
extern "C" unsigned long _UNK_005f6cec;
extern "C" unsigned long _UNK_005f6cf0;
extern "C" unsigned long _UNK_005f6cf4;
extern "C" unsigned long _UNK_005f6cf8;
extern "C" unsigned long _UNK_005f6cfc;
extern "C" unsigned long _UNK_005f6d00;
extern "C" unsigned long _UNK_005f70ec;
extern "C" unsigned long _UNK_005f70f0;
extern "C" unsigned long _UNK_005f70f4;
extern "C" unsigned long _UNK_005f70f8;
extern "C" unsigned long _UNK_005f70fc;
extern "C" unsigned long _UNK_005f7100;
extern "C" unsigned long _UNK_005f7104;
extern "C" unsigned long _UNK_005f7108;
extern "C" unsigned long _UNK_005f710c;
extern "C" unsigned long _UNK_005f7110;
extern "C" unsigned long _UNK_005f7114;
extern "C" unsigned long _UNK_005f7118;
extern "C" unsigned long _UNK_005f711c;
extern "C" unsigned long _UNK_005f7120;
extern "C" unsigned long _UNK_005f7124;
extern "C" unsigned long _UNK_005f7128;
extern "C" unsigned long _UNK_005f712c;
extern "C" unsigned long _UNK_005f7130;
extern "C" unsigned long _UNK_005f7308;
extern "C" unsigned long _UNK_005f730c;
extern "C" unsigned long _UNK_005f7310;
extern "C" unsigned long _UNK_005f7314;
extern "C" unsigned long _UNK_005f7318;
extern "C" unsigned long _UNK_005f731c;
extern "C" unsigned long _UNK_005f7320;
extern "C" unsigned long g_005f6658;
extern "C" unsigned long g_005f66aa;
extern "C" unsigned long g_005f66dc;
extern "C" unsigned long g_005f66e0;
extern "C" unsigned long g_005f66f0;
extern "C" unsigned long g_005f66f4;
extern "C" unsigned long g_005f6718;
extern "C" unsigned long g_005f671c;
extern "C" unsigned long g_005f67d0;
extern "C" unsigned long g_005f67d4;
extern "C" unsigned long g_005f68ea;
extern "C" unsigned long g_005f69cc;
extern "C" unsigned long g_005f6ac8;
extern "C" unsigned long g_005f6af4;
extern "C" unsigned long g_005f6bd0;
extern "C" unsigned long g_005f6bfe;
extern "C" unsigned long g_005f6cc8;
extern "C" unsigned long g_005f6ccc;
extern "C" unsigned long g_005f6cd0;
extern "C" unsigned long g_005f6cd4;
extern "C" unsigned long g_005f6cd8;
extern "C" unsigned long g_005f6cdc;
extern "C" unsigned long g_005f6ce0;
extern "C" unsigned long g_005f6ce4;
extern "C" unsigned long g_005f6ce8;
extern "C" unsigned long g_005f6cec;
extern "C" unsigned long g_005f6cf0;
extern "C" unsigned long g_005f6cf4;
extern "C" unsigned long g_005f6cf8;
extern "C" unsigned long g_005f6cfc;
extern "C" unsigned long g_005f6d00;
extern "C" unsigned long g_005f6d0e;
extern "C" unsigned long g_005f6d38;
extern "C" unsigned long g_005f6dfa;
extern "C" unsigned long g_005f6e2e;
extern "C" unsigned long g_005f6f4c;
extern "C" unsigned long g_005f6f76;
extern "C" unsigned long g_005f703e;
extern "C" unsigned long g_005f706a;
extern "C" unsigned long g_005f70ec;
extern "C" unsigned long g_005f70f0;
extern "C" unsigned long g_005f70f4;
extern "C" unsigned long g_005f70f8;
extern "C" unsigned long g_005f70fc;
extern "C" unsigned long g_005f7100;
extern "C" unsigned long g_005f7104;
extern "C" unsigned long g_005f7108;
extern "C" unsigned long g_005f710c;
extern "C" unsigned long g_005f7110;
extern "C" unsigned long g_005f7114;
extern "C" unsigned long g_005f7118;
extern "C" unsigned long g_005f711c;
extern "C" unsigned long g_005f7120;
extern "C" unsigned long g_005f7124;
extern "C" unsigned long g_005f7128;
extern "C" unsigned long g_005f712c;
extern "C" unsigned long g_005f7130;
extern "C" unsigned long g_005f7188;
extern "C" unsigned long g_005f71b2;
extern "C" unsigned long g_005f7308;
extern "C" unsigned long g_005f730c;
extern "C" unsigned long g_005f7310;
extern "C" unsigned long g_005f7314;
extern "C" unsigned long g_005f7318;
extern "C" unsigned long g_005f731c;
extern "C" unsigned long g_005f7320;
BLBuyRoleAlertView::~BLBuyRoleAlertView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_005f6658 + g_005f66dc);
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
  func_0079e45c(&uStack_14,&g_005f66aa + g_005f66e0,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}


int * BLBuyRoleAlertView::create()
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

undefined4 BLBuyRoleAlertView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 BLBuyRoleAlertView::getBackGround()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

undefined4 BLBuyRoleAlertView::getTabBg()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

undefined4 BLBuyRoleAlertView::getBtnSure()
{
  return *(undefined4 *)(((int)this) + 0x118);
}

undefined4 BLBuyRoleAlertView::getBtnCancle()
{
  return *(undefined4 *)(((int)this) + 0x11c);
}

undefined4 BLBuyRoleAlertView::getLabSure()
{
  return *(undefined4 *)(((int)this) + 0x120);
}

undefined4 BLBuyRoleAlertView::getLabTitle()
{
  return *(undefined4 *)(((int)this) + 0x124);
}

undefined4 BLBuyRoleAlertView::getLabCancle()
{
  return *(undefined4 *)(((int)this) + 0x128);
}

undefined4 BLBuyRoleAlertView::getBtnPlay()
{
  return *(undefined4 *)(((int)this) + 300);
}

undefined4 BLBuyRoleAlertView::getLabPlay()
{
  return *(undefined4 *)(((int)this) + 0x130);
}

void BLBuyRoleAlertView::onEnter()
{
  ((BLBuyRoleAlertPresenter *)*(undefined4 *)(((int)this) + 0x10c))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLBuyRoleAlertView::onExit()
{
  ((BLBuyRoleAlertPresenter *)*(undefined4 *)(((int)this) + 0x10c))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (2) =====
BLBuyRoleAlertView::BLBuyRoleAlertView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = (undefined4)(intptr_t)(*(int *)(g_005f67d0 + 0x5f6760));
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
  func_0079e45c(&uStack_14,((intptr_t)"BLBuyRoleAlertView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

bool BLBuyRoleAlertView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
