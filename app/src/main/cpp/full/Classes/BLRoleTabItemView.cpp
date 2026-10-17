#include "BLRoleTabItemView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLRoleTabItemPresenter.h"
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
extern "C" unsigned long UNK_00681fc0;
extern "C" unsigned long UNK_00682012;
extern "C" unsigned long UNK_00682058;
extern "C" unsigned long UNK_00682080;
extern "C" unsigned long UNK_006820c8;
extern "C" unsigned long UNK_00682104;
extern "C" unsigned long UNK_00682230;
extern "C" unsigned long UNK_0068231a;
extern "C" unsigned long UNK_00682346;
extern "C" unsigned long UNK_00682406;
extern "C" unsigned long UNK_0068243a;
extern "C" unsigned long UNK_006824f8;
extern "C" unsigned long UNK_00682522;
extern "C" unsigned long _UNK_00682044;
extern "C" unsigned long _UNK_00682048;
extern "C" unsigned long _UNK_0068205c;
extern "C" unsigned long _UNK_00682084;
extern "C" unsigned long _UNK_00682138;
extern "C" unsigned long _UNK_0068213c;
extern "C" unsigned long _UNK_00682610;
extern "C" unsigned long _UNK_00682614;
extern "C" unsigned long _UNK_00682618;
extern "C" unsigned long _UNK_0068261c;
extern "C" unsigned long _UNK_00682620;
extern "C" unsigned long _UNK_00682624;
extern "C" unsigned long _UNK_00682628;
extern "C" unsigned long _UNK_0068262c;
extern "C" unsigned long _UNK_00682630;
extern "C" unsigned long _UNK_00682634;
extern "C" unsigned long _UNK_00682638;
extern "C" unsigned long _UNK_0068263c;
extern "C" unsigned long _UNK_00682640;
extern "C" unsigned long _UNK_00682644;
extern "C" unsigned long _UNK_00682648;
extern "C" unsigned long _UNK_0068264c;
extern "C" unsigned long g_00681fc0;
extern "C" unsigned long g_00682012;
extern "C" unsigned long g_00682044;
extern "C" unsigned long g_00682048;
extern "C" unsigned long g_00682058;
extern "C" unsigned long g_0068205c;
extern "C" unsigned long g_00682080;
extern "C" unsigned long g_00682084;
extern "C" unsigned long g_006820c8;
extern "C" unsigned long g_00682104;
extern "C" unsigned long g_00682138;
extern "C" unsigned long g_0068213c;
extern "C" unsigned long g_00682230;
extern "C" unsigned long g_0068231a;
extern "C" unsigned long g_00682346;
extern "C" unsigned long g_00682406;
extern "C" unsigned long g_0068243a;
extern "C" unsigned long g_006824f8;
extern "C" unsigned long g_00682522;
extern "C" unsigned long g_00682610;
extern "C" unsigned long g_00682614;
extern "C" unsigned long g_00682618;
extern "C" unsigned long g_0068261c;
extern "C" unsigned long g_00682620;
extern "C" unsigned long g_00682624;
extern "C" unsigned long g_00682628;
extern "C" unsigned long g_0068262c;
extern "C" unsigned long g_00682630;
extern "C" unsigned long g_00682634;
extern "C" unsigned long g_00682638;
extern "C" unsigned long g_0068263c;
extern "C" unsigned long g_00682640;
extern "C" unsigned long g_00682644;
extern "C" unsigned long g_00682648;
extern "C" unsigned long g_0068264c;
BLRoleTabItemView::~BLRoleTabItemView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_00681fc0 + g_00682044);
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
  func_0079e45c(&uStack_14,&g_00682012 + g_00682048,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}


int * BLRoleTabItemView::create()
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

undefined4 BLRoleTabItemView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 BLRoleTabItemView::getssp_TabBG123()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

undefined4 BLRoleTabItemView::getLabName()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

undefined4 BLRoleTabItemView::getLabLV()
{
  return *(undefined4 *)(((int)this) + 0x118);
}

undefined4 BLRoleTabItemView::getLabAlert()
{
  return *(undefined4 *)(((int)this) + 0x11c);
}

void BLRoleTabItemView::onEnter()
{
  ((BLRoleTabItemPresenter *)*(undefined4 *)(((int)this) + 0x10c))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLRoleTabItemView::onExit()
{
  ((BLRoleTabItemPresenter *)*(undefined4 *)(((int)this) + 0x10c))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (2) =====
BLRoleTabItemView::BLRoleTabItemView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = (undefined4)(intptr_t)(*(int *)((unsigned char *)((char *)&g_006820c8 + (intptr_t)(g_00682138))));
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
  func_0079e45c(&uStack_14,(unsigned char *)((char *)&g_00682104 + (intptr_t)(g_0068213c)),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

bool BLRoleTabItemView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
