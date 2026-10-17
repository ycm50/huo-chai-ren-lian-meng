#include "BLRebirthChestView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLRebirthChestItem.h"
#include "BLRebirthChestPresenter.h"
#include "DataCacheManager.h"
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
extern "C" long long func_0079e2ec(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e31c(...);
extern "C" long long func_0079e34c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long func_0079e4ec(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e62c(...);
extern "C" long long func_0079e6c0(...);
extern "C" long long func_0079e724(...);
extern "C" long long func_0079e7e4(...);
extern "C" long long func_0079e8d4(...);
extern "C" long long func_0079e904(...);
extern "C" long long func_0079e914(...);
extern "C" long long func_0079e964(...);
extern "C" long long ghidra_CONCAT13(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0051db38;
extern "C" unsigned long UNK_0051db8e;
extern "C" unsigned long UNK_0051dbe8;
extern "C" unsigned long UNK_0051dc10;
extern "C" unsigned long UNK_0051dd6c;
extern "C" unsigned long UNK_0051deea;
extern "C" unsigned long UNK_0051df5e;
extern "C" unsigned long UNK_0051dfec;
extern "C" unsigned long UNK_0051e032;
extern "C" unsigned long UNK_0051e03a;
extern "C" unsigned long UNK_0051e05a;
extern "C" unsigned long UNK_0051e0d4;
extern "C" unsigned long UNK_0051e294;
extern "C" unsigned long UNK_0051e35c;
extern "C" unsigned long UNK_0051e494;
extern "C" unsigned long UNK_0051e4be;
extern "C" unsigned long UNK_0051e58e;
extern "C" unsigned long UNK_0051e5ba;
extern "C" unsigned long UNK_0051e748;
extern "C" unsigned long UNK_0051e776;
extern "C" unsigned long UNK_0051e90e;
extern "C" unsigned long UNK_0051e938;
extern "C" unsigned long _DAT_0051dce0;
extern "C" unsigned long _DAT_0051dce4;
extern "C" unsigned long _UNK_0051dbd4;
extern "C" unsigned long _UNK_0051dbd8;
extern "C" unsigned long _UNK_0051dbec;
extern "C" unsigned long _UNK_0051dc14;
extern "C" unsigned long _UNK_0051e118;
extern "C" unsigned long _UNK_0051e11c;
extern "C" unsigned long _UNK_0051e120;
extern "C" unsigned long _UNK_0051e124;
extern "C" unsigned long _UNK_0051e128;
extern "C" unsigned long _UNK_0051e12c;
extern "C" unsigned long _UNK_0051e130;
extern "C" unsigned long _UNK_0051e134;
extern "C" unsigned long _UNK_0051e138;
extern "C" unsigned long _UNK_0051e13c;
extern "C" unsigned long _UNK_0051e140;
extern "C" unsigned long _UNK_0051e144;
extern "C" unsigned long _UNK_0051e148;
extern "C" unsigned long _UNK_0051e14c;
extern "C" unsigned long _UNK_0051e648;
extern "C" unsigned long _UNK_0051e64c;
extern "C" unsigned long _UNK_0051e650;
extern "C" unsigned long _UNK_0051e654;
extern "C" unsigned long _UNK_0051e658;
extern "C" unsigned long _UNK_0051e65c;
extern "C" unsigned long _UNK_0051e660;
extern "C" unsigned long _UNK_0051e664;
extern "C" unsigned long _UNK_0051e668;
extern "C" unsigned long _UNK_0051e66c;
extern "C" unsigned long _UNK_0051e670;
extern "C" unsigned long _UNK_0051e674;
extern "C" unsigned long _UNK_0051e678;
extern "C" unsigned long _UNK_0051e67c;
extern "C" unsigned long _UNK_0051e680;
extern "C" unsigned long _UNK_0051e684;
extern "C" unsigned long _UNK_0051e688;
extern "C" unsigned long _UNK_0051ea88;
extern "C" unsigned long _UNK_0051ea8c;
extern "C" unsigned long _UNK_0051ea90;
extern "C" unsigned long _UNK_0051ea94;
extern "C" unsigned long _UNK_0051ea98;
extern "C" unsigned long _UNK_0051ea9c;
extern "C" unsigned long _UNK_0051eaa0;
extern "C" unsigned long _UNK_0051eaa4;
extern "C" unsigned long _UNK_0051eaa8;
extern "C" unsigned long _UNK_0051eaac;
extern "C" unsigned long _UNK_0051eab0;
extern "C" unsigned long _UNK_0051eab4;
extern "C" unsigned long _UNK_0051eab8;
extern "C" unsigned long _UNK_0051eabc;
extern "C" unsigned long _UNK_0051eac0;
extern "C" unsigned long _UNK_0051eac4;
extern "C" unsigned long extraout_r1;
extern "C" unsigned long extraout_r1_00;
extern "C" unsigned long g_0051db38;
extern "C" unsigned long g_0051db8e;
extern "C" unsigned long g_0051dbd4;
extern "C" unsigned long g_0051dbd8;
extern "C" unsigned long g_0051dbe8;
extern "C" unsigned long g_0051dbec;
extern "C" unsigned long g_0051dc10;
extern "C" unsigned long g_0051dc14;
extern "C" unsigned long g_0051dce0;
extern "C" unsigned long g_0051dce4;
extern "C" unsigned long g_0051dd6c;
extern "C" unsigned long g_0051deea;
extern "C" unsigned long g_0051df5e;
extern "C" unsigned long g_0051dfec;
extern "C" unsigned long g_0051e032;
extern "C" unsigned long g_0051e03a;
extern "C" unsigned long g_0051e05a;
extern "C" unsigned long g_0051e0d4;
extern "C" unsigned long g_0051e118;
extern "C" unsigned long g_0051e11c;
extern "C" unsigned long g_0051e120;
extern "C" unsigned long g_0051e124;
extern "C" unsigned long g_0051e128;
extern "C" unsigned long g_0051e12c;
extern "C" unsigned long g_0051e130;
extern "C" unsigned long g_0051e134;
extern "C" unsigned long g_0051e138;
extern "C" unsigned long g_0051e13c;
extern "C" unsigned long g_0051e140;
extern "C" unsigned long g_0051e144;
extern "C" unsigned long g_0051e148;
extern "C" unsigned long g_0051e14c;
extern "C" unsigned long g_0051e294;
extern "C" unsigned long g_0051e35c;
extern "C" unsigned long g_0051e494;
extern "C" unsigned long g_0051e4be;
extern "C" unsigned long g_0051e58e;
extern "C" unsigned long g_0051e5ba;
extern "C" unsigned long g_0051e648;
extern "C" unsigned long g_0051e64c;
extern "C" unsigned long g_0051e650;
extern "C" unsigned long g_0051e654;
extern "C" unsigned long g_0051e658;
extern "C" unsigned long g_0051e65c;
extern "C" unsigned long g_0051e660;
extern "C" unsigned long g_0051e664;
extern "C" unsigned long g_0051e668;
extern "C" unsigned long g_0051e66c;
extern "C" unsigned long g_0051e670;
extern "C" unsigned long g_0051e674;
extern "C" unsigned long g_0051e678;
extern "C" unsigned long g_0051e67c;
extern "C" unsigned long g_0051e680;
extern "C" unsigned long g_0051e684;
extern "C" unsigned long g_0051e688;
extern "C" unsigned long g_0051e748;
extern "C" unsigned long g_0051e776;
extern "C" unsigned long g_0051e90e;
extern "C" unsigned long g_0051e938;
extern "C" unsigned long g_0051ea88;
extern "C" unsigned long g_0051ea8c;
extern "C" unsigned long g_0051ea90;
extern "C" unsigned long g_0051ea94;
extern "C" unsigned long g_0051ea98;
extern "C" unsigned long g_0051ea9c;
extern "C" unsigned long g_0051eaa0;
extern "C" unsigned long g_0051eaa4;
extern "C" unsigned long g_0051eaa8;
extern "C" unsigned long g_0051eaac;
extern "C" unsigned long g_0051eab0;
extern "C" unsigned long g_0051eab4;
extern "C" unsigned long g_0051eab8;
extern "C" unsigned long g_0051eabc;
extern "C" unsigned long g_0051eac0;
extern "C" unsigned long g_0051eac4;
BLRebirthChestView::~BLRebirthChestView()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  iVar2 = *(int *)(&g_0051db38 + g_0051dbd4);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  piStack_20 = (int *)((int)this);
  uStack_1c = (undefined4)(p2);
  uStack_18 = (undefined4)(p3);
  if (*(int *)((int)this + 4*(0x42)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x42)) = 0;
  }
  if (*(int *)((int)this + 4*(0x43)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x43)) = 0;
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_1c,&g_0051db8e + g_0051dbd8,&piStack_20);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_1c);
  func_0079e2bc(&uStack_1c);
  if (*(int *)((int)this + 4*(0x4b)) != 0) {
    (void)(::operator delete((void *)(*(int *)((int)this + 4*(0x4b)))));
  }
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}


int * BLRebirthChestView::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x13c)));
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

undefined4 BLRebirthChestView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}


undefined4 BLRebirthChestView::getBtnClose()
{
  return *(undefined4 *)(((int)this) + 0x128);
}

int BLRebirthChestView::getBtnsItem()
{
  return ((int)this) + 300;
}

void BLRebirthChestView::onEnter()
{
  ((BLRebirthChestPresenter *)*(undefined4 *)(((int)this) + 0x10c))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLRebirthChestView::onExit()
{
  ((BLRebirthChestPresenter *)*(undefined4 *)(((int)this) + 0x10c))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (3) =====
BLRebirthChestView::BLRebirthChestView()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  piStack_20 = (int *)((int)this);
  uStack_1c = (undefined4)(p2);
  uStack_18 = (undefined4)(p3);
  0 /* ctorZero */;
  iVar2 = (undefined4)(intptr_t)(*(int *)(g_0051dce0 + 0x51dc58));
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  *(int *)((int)this + 4*(0x4b)) = 0;
  *(int *)((int)this + 4*(0x4c)) = 0;
  *(int *)((int)this + 4*(0x4d)) = 0;
  iVar2 = (undefined4)(intptr_t)(cocos2d::CCArray::create());
  *(int *)((int)this + 4*(0x42)) = iVar2;
  if (iVar2 != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_1c,((intptr_t)"BLRebirthChestView"),&piStack_20);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_1c);
  func_0079e2bc(&uStack_1c);
  return;
}

void BLRebirthChestView::setItems(std::map<std::string, std::string, std::less<std::string>, std::allocator<std::pair<std::string const, std::string>>> p1, int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

bool BLRebirthChestView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
