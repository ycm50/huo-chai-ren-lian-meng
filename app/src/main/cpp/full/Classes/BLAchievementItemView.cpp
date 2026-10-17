#include "BLAchievementItemView.h"
#include "BLAchievementItemPresenter.h"
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
extern "C" unsigned long UNK_004ee948;
extern "C" unsigned long UNK_004ee99a;
extern "C" unsigned long UNK_004ee9e0;
extern "C" unsigned long UNK_004eea08;
extern "C" unsigned long UNK_004eea50;
extern "C" unsigned long UNK_004eea8c;
extern "C" unsigned long UNK_004eebde;
extern "C" unsigned long UNK_004eecc0;
extern "C" unsigned long UNK_004eed64;
extern "C" unsigned long UNK_004eed90;
extern "C" unsigned long UNK_004eee52;
extern "C" unsigned long UNK_004eee86;
extern "C" unsigned long UNK_004eef44;
extern "C" unsigned long UNK_004eef6e;
extern "C" unsigned long UNK_004ef078;
extern "C" unsigned long UNK_004ef0a2;
extern "C" unsigned long UNK_004ef154;
extern "C" unsigned long UNK_004ef1f6;
extern "C" unsigned long UNK_004ef2a6;
extern "C" unsigned long UNK_004ef37e;
extern "C" unsigned long UNK_004ef3a8;
extern "C" unsigned long UNK_004ef4b2;
extern "C" unsigned long UNK_004ef4dc;
extern "C" unsigned long _UNK_004ee9cc;
extern "C" unsigned long _UNK_004ee9d0;
extern "C" unsigned long _UNK_004ee9e4;
extern "C" unsigned long _UNK_004eea0c;
extern "C" unsigned long _UNK_004eeac0;
extern "C" unsigned long _UNK_004eeac4;
extern "C" unsigned long _UNK_004eefbc;
extern "C" unsigned long _UNK_004eefc0;
extern "C" unsigned long _UNK_004eefc4;
extern "C" unsigned long _UNK_004eefc8;
extern "C" unsigned long _UNK_004eefcc;
extern "C" unsigned long _UNK_004eefd0;
extern "C" unsigned long _UNK_004eefd4;
extern "C" unsigned long _UNK_004eefd8;
extern "C" unsigned long _UNK_004eefdc;
extern "C" unsigned long _UNK_004eefe0;
extern "C" unsigned long _UNK_004eefe4;
extern "C" unsigned long _UNK_004eefe8;
extern "C" unsigned long _UNK_004eefec;
extern "C" unsigned long _UNK_004eeff0;
extern "C" unsigned long _UNK_004eeff4;
extern "C" unsigned long _UNK_004eeff8;
extern "C" unsigned long _UNK_004eeffc;
extern "C" unsigned long _UNK_004ef3ec;
extern "C" unsigned long _UNK_004ef3f0;
extern "C" unsigned long _UNK_004ef3f4;
extern "C" unsigned long _UNK_004ef3f8;
extern "C" unsigned long _UNK_004ef3fc;
extern "C" unsigned long _UNK_004ef400;
extern "C" unsigned long _UNK_004ef404;
extern "C" unsigned long _UNK_004ef408;
extern "C" unsigned long _UNK_004ef40c;
extern "C" unsigned long _UNK_004ef410;
extern "C" unsigned long _UNK_004ef414;
extern "C" unsigned long _UNK_004ef418;
extern "C" unsigned long _UNK_004ef41c;
extern "C" unsigned long _UNK_004ef420;
extern "C" unsigned long _UNK_004ef424;
extern "C" unsigned long _UNK_004ef428;
extern "C" unsigned long _UNK_004ef42c;
extern "C" unsigned long _UNK_004ef430;
extern "C" unsigned long _UNK_004ef640;
extern "C" unsigned long _UNK_004ef644;
extern "C" unsigned long _UNK_004ef648;
extern "C" unsigned long _UNK_004ef64c;
extern "C" unsigned long _UNK_004ef650;
extern "C" unsigned long _UNK_004ef654;
extern "C" unsigned long _UNK_004ef658;
extern "C" unsigned long g_004ee948;
extern "C" unsigned long g_004ee99a;
extern "C" unsigned long g_004ee9cc;
extern "C" unsigned long g_004ee9d0;
extern "C" unsigned long g_004ee9e0;
extern "C" unsigned long g_004ee9e4;
extern "C" unsigned long g_004eea08;
extern "C" unsigned long g_004eea0c;
extern "C" unsigned long g_004eea50;
extern "C" unsigned long g_004eea8c;
extern "C" unsigned long g_004eeac0;
extern "C" unsigned long g_004eeac4;
extern "C" unsigned long g_004eebde;
extern "C" unsigned long g_004eecc0;
extern "C" unsigned long g_004eed64;
extern "C" unsigned long g_004eed90;
extern "C" unsigned long g_004eee52;
extern "C" unsigned long g_004eee86;
extern "C" unsigned long g_004eef44;
extern "C" unsigned long g_004eef6e;
extern "C" unsigned long g_004eefbc;
extern "C" unsigned long g_004eefc0;
extern "C" unsigned long g_004eefc4;
extern "C" unsigned long g_004eefc8;
extern "C" unsigned long g_004eefcc;
extern "C" unsigned long g_004eefd0;
extern "C" unsigned long g_004eefd4;
extern "C" unsigned long g_004eefd8;
extern "C" unsigned long g_004eefdc;
extern "C" unsigned long g_004eefe0;
extern "C" unsigned long g_004eefe4;
extern "C" unsigned long g_004eefe8;
extern "C" unsigned long g_004eefec;
extern "C" unsigned long g_004eeff0;
extern "C" unsigned long g_004eeff4;
extern "C" unsigned long g_004eeff8;
extern "C" unsigned long g_004eeffc;
extern "C" unsigned long g_004ef078;
extern "C" unsigned long g_004ef0a2;
extern "C" unsigned long g_004ef154;
extern "C" unsigned long g_004ef1f6;
extern "C" unsigned long g_004ef2a6;
extern "C" unsigned long g_004ef37e;
extern "C" unsigned long g_004ef3a8;
extern "C" unsigned long g_004ef3ec;
extern "C" unsigned long g_004ef3f0;
extern "C" unsigned long g_004ef3f4;
extern "C" unsigned long g_004ef3f8;
extern "C" unsigned long g_004ef3fc;
extern "C" unsigned long g_004ef400;
extern "C" unsigned long g_004ef404;
extern "C" unsigned long g_004ef408;
extern "C" unsigned long g_004ef40c;
extern "C" unsigned long g_004ef410;
extern "C" unsigned long g_004ef414;
extern "C" unsigned long g_004ef418;
extern "C" unsigned long g_004ef41c;
extern "C" unsigned long g_004ef420;
extern "C" unsigned long g_004ef424;
extern "C" unsigned long g_004ef428;
extern "C" unsigned long g_004ef42c;
extern "C" unsigned long g_004ef430;
extern "C" unsigned long g_004ef4b2;
extern "C" unsigned long g_004ef4dc;
extern "C" unsigned long g_004ef640;
extern "C" unsigned long g_004ef644;
extern "C" unsigned long g_004ef648;
extern "C" unsigned long g_004ef64c;
extern "C" unsigned long g_004ef650;
extern "C" unsigned long g_004ef654;
extern "C" unsigned long g_004ef658;
BLAchievementItemView::~BLAchievementItemView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_004ee948 + g_004ee9cc);
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
  func_0079e45c(&uStack_14,&g_004ee99a + g_004ee9d0,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}


int * BLAchievementItemView::create()
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

undefined4 BLAchievementItemView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 BLAchievementItemView::getSprBG()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

undefined4 BLAchievementItemView::getLabTitle()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

undefined4 BLAchievementItemView::getLabProgress()
{
  return *(undefined4 *)(((int)this) + 0x118);
}

undefined4 BLAchievementItemView::getLabDes()
{
  return *(undefined4 *)(((int)this) + 0x11c);
}

undefined4 BLAchievementItemView::getLabReward()
{
  return *(undefined4 *)(((int)this) + 0x120);
}

undefined4 BLAchievementItemView::getSprSprGeted()
{
  return *(undefined4 *)(((int)this) + 0x124);
}

undefined4 BLAchievementItemView::getSprimg_icon_1()
{
  return *(undefined4 *)(((int)this) + 0x128);
}

undefined4 BLAchievementItemView::getBtnGet()
{
  return *(undefined4 *)(((int)this) + 300);
}

undefined4 BLAchievementItemView::getLabGet()
{
  return *(undefined4 *)(((int)this) + 0x130);
}

undefined4 BLAchievementItemView::getLabDoing()
{
  return *(undefined4 *)(((int)this) + 0x134);
}

void BLAchievementItemView::onEnter()
{
  ((BLAchievementItemPresenter *)*(undefined4 *)(((int)this) + 0x10c))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLAchievementItemView::onExit()
{
  ((BLAchievementItemPresenter *)*(undefined4 *)(((int)this) + 0x10c))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (2) =====
BLAchievementItemView::BLAchievementItemView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = (undefined4)(intptr_t)(*(int *)((unsigned char *)((char *)&g_004eea50 + (intptr_t)(g_004eeac0))));
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
  func_0079e45c(&uStack_14,(unsigned char *)((char *)&g_004eea8c + (intptr_t)(g_004eeac4)),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

bool BLAchievementItemView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
