#include "BLMissionBuyRoleView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLMissionBuyRolePresenter.h"
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
extern "C" unsigned long UNK_005bbc98;
extern "C" unsigned long UNK_005bbcea;
extern "C" unsigned long UNK_005bbd30;
extern "C" unsigned long UNK_005bbd58;
extern "C" unsigned long UNK_005bbf2a;
extern "C" unsigned long UNK_005bc00c;
extern "C" unsigned long UNK_005bc0c2;
extern "C" unsigned long UNK_005bc0ee;
extern "C" unsigned long UNK_005bc1d6;
extern "C" unsigned long UNK_005bc204;
extern "C" unsigned long UNK_005bc3fa;
extern "C" unsigned long UNK_005bc4ec;
extern "C" unsigned long UNK_005bc546;
extern "C" unsigned long UNK_005bc60c;
extern "C" unsigned long UNK_005bc63e;
extern "C" unsigned long UNK_005bc710;
extern "C" unsigned long UNK_005bc73a;
extern "C" unsigned long _DAT_005bbe10;
extern "C" unsigned long _DAT_005bbe14;
extern "C" unsigned long _UNK_005bbd1c;
extern "C" unsigned long _UNK_005bbd20;
extern "C" unsigned long _UNK_005bbd34;
extern "C" unsigned long _UNK_005bbd5c;
extern "C" unsigned long _UNK_005bc30c;
extern "C" unsigned long _UNK_005bc310;
extern "C" unsigned long _UNK_005bc314;
extern "C" unsigned long _UNK_005bc318;
extern "C" unsigned long _UNK_005bc31c;
extern "C" unsigned long _UNK_005bc320;
extern "C" unsigned long _UNK_005bc324;
extern "C" unsigned long _UNK_005bc328;
extern "C" unsigned long _UNK_005bc32c;
extern "C" unsigned long _UNK_005bc330;
extern "C" unsigned long _UNK_005bc334;
extern "C" unsigned long _UNK_005bc338;
extern "C" unsigned long _UNK_005bc33c;
extern "C" unsigned long _UNK_005bc340;
extern "C" unsigned long _UNK_005bc344;
extern "C" unsigned long _UNK_005bc348;
extern "C" unsigned long _UNK_005bc504;
extern "C" unsigned long _UNK_005bc508;
extern "C" unsigned long _UNK_005bc50c;
extern "C" unsigned long _UNK_005bc510;
extern "C" unsigned long _UNK_005bc514;
extern "C" unsigned long _UNK_005bc518;
extern "C" unsigned long _UNK_005bc51c;
extern "C" unsigned long _UNK_005bc520;
extern "C" unsigned long _UNK_005bc524;
extern "C" unsigned long _UNK_005bc890;
extern "C" unsigned long _UNK_005bc894;
extern "C" unsigned long _UNK_005bc898;
extern "C" unsigned long _UNK_005bc89c;
extern "C" unsigned long _UNK_005bc8a0;
extern "C" unsigned long _UNK_005bc8a4;
extern "C" unsigned long _UNK_005bc8a8;
extern "C" unsigned long _UNK_005bc8ac;
extern "C" unsigned long _UNK_005bc8b0;
extern "C" unsigned long _UNK_005bc8b4;
extern "C" unsigned long _UNK_005bc8b8;
extern "C" unsigned long _UNK_005bc8bc;
extern "C" unsigned long _UNK_005bc8c0;
extern "C" unsigned long _UNK_005bc8c4;
extern "C" unsigned long g_005bbc98;
extern "C" unsigned long g_005bbcea;
extern "C" unsigned long g_005bbd1c;
extern "C" unsigned long g_005bbd20;
extern "C" unsigned long g_005bbd30;
extern "C" unsigned long g_005bbd34;
extern "C" unsigned long g_005bbd58;
extern "C" unsigned long g_005bbd5c;
extern "C" unsigned long g_005bbe10;
extern "C" unsigned long g_005bbe14;
extern "C" unsigned long g_005bbf2a;
extern "C" unsigned long g_005bc00c;
extern "C" unsigned long g_005bc0c2;
extern "C" unsigned long g_005bc0ee;
extern "C" unsigned long g_005bc1d6;
extern "C" unsigned long g_005bc204;
extern "C" unsigned long g_005bc30c;
extern "C" unsigned long g_005bc310;
extern "C" unsigned long g_005bc314;
extern "C" unsigned long g_005bc318;
extern "C" unsigned long g_005bc31c;
extern "C" unsigned long g_005bc320;
extern "C" unsigned long g_005bc324;
extern "C" unsigned long g_005bc328;
extern "C" unsigned long g_005bc32c;
extern "C" unsigned long g_005bc330;
extern "C" unsigned long g_005bc334;
extern "C" unsigned long g_005bc338;
extern "C" unsigned long g_005bc33c;
extern "C" unsigned long g_005bc340;
extern "C" unsigned long g_005bc344;
extern "C" unsigned long g_005bc348;
extern "C" unsigned long g_005bc3fa;
extern "C" unsigned long g_005bc4ec;
extern "C" unsigned long g_005bc504;
extern "C" unsigned long g_005bc508;
extern "C" unsigned long g_005bc50c;
extern "C" unsigned long g_005bc510;
extern "C" unsigned long g_005bc514;
extern "C" unsigned long g_005bc518;
extern "C" unsigned long g_005bc51c;
extern "C" unsigned long g_005bc520;
extern "C" unsigned long g_005bc524;
extern "C" unsigned long g_005bc546;
extern "C" unsigned long g_005bc60c;
extern "C" unsigned long g_005bc63e;
extern "C" unsigned long g_005bc710;
extern "C" unsigned long g_005bc73a;
extern "C" unsigned long g_005bc890;
extern "C" unsigned long g_005bc894;
extern "C" unsigned long g_005bc898;
extern "C" unsigned long g_005bc89c;
extern "C" unsigned long g_005bc8a0;
extern "C" unsigned long g_005bc8a4;
extern "C" unsigned long g_005bc8a8;
extern "C" unsigned long g_005bc8ac;
extern "C" unsigned long g_005bc8b0;
extern "C" unsigned long g_005bc8b4;
extern "C" unsigned long g_005bc8b8;
extern "C" unsigned long g_005bc8bc;
extern "C" unsigned long g_005bc8c0;
extern "C" unsigned long g_005bc8c4;
BLMissionBuyRoleView::~BLMissionBuyRoleView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_005bbc98 + g_005bbd1c);
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
  func_0079e45c(&uStack_14,&g_005bbcea + g_005bbd20,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLMissionBuyRoleView::BLMissionBuyRoleView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = (undefined4)(intptr_t)(*(int *)(g_005bbe10 + 0x5bbda0));
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
  func_0079e45c(&uStack_14,((intptr_t)"BLMissionBuyRoleView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * BLMissionBuyRoleView::create()
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

undefined4 BLMissionBuyRoleView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 BLMissionBuyRoleView::getBackGround()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

undefined4 BLMissionBuyRoleView::getSprBg()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

undefined4 BLMissionBuyRoleView::getbtnRight()
{
  return *(undefined4 *)(((int)this) + 0x118);
}

undefined4 BLMissionBuyRoleView::getBtnLeft()
{
  return *(undefined4 *)(((int)this) + 0x11c);
}

undefined4 BLMissionBuyRoleView::getTableViewRoles()
{
  return *(undefined4 *)(((int)this) + 0x120);
}

undefined4 BLMissionBuyRoleView::getTabBg()
{
  return *(undefined4 *)(((int)this) + 0x124);
}

undefined4 BLMissionBuyRoleView::getLabTitle()
{
  return *(undefined4 *)(((int)this) + 0x128);
}

undefined4 BLMissionBuyRoleView::getBtnClose()
{
  return *(undefined4 *)(((int)this) + 300);
}

undefined4 BLMissionBuyRoleView::getLabPlayTitle()
{
  return *(undefined4 *)(((int)this) + 0x130);
}

void BLMissionBuyRoleView::onEnter()
{
  ((BLMissionBuyRolePresenter *)*(undefined4 *)(((int)this) + 0x10c))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLMissionBuyRoleView::onExit()
{
  ((BLMissionBuyRolePresenter *)*(undefined4 *)(((int)this) + 0x10c))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
bool BLMissionBuyRoleView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
