#include "BLActivityItemView.h"
#include "CCNotificationCenter.h"
#include "CCLayer.h"
#include "CCObject.h"
#include "CCControlButton.h"
#include "ActivityItemData.h"
#include "ActivityData.h"
#include "BLActivityItemPresenter.h"
#include "BLActivityManager.h"
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
extern "C" long long func_0079e2ec(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long func_0079e5fc(...);
extern "C" long long func_0079e62c(...);
extern "C" long long func_0079e724(...);
extern "C" long long func_0079e744(...);
extern "C" long long func_0079e7e4(...);
extern "C" long long ghidra_CONCAT13(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_004f11ec;
extern "C" unsigned long UNK_004f1230;
extern "C" unsigned long UNK_004f1274;
extern "C" unsigned long UNK_004f129c;
extern "C" unsigned long UNK_004f12b4;
extern "C" unsigned long UNK_004f12f4;
extern "C" unsigned long UNK_004f14cc;
extern "C" unsigned long UNK_004f1500;
extern "C" unsigned long UNK_004f163a;
extern "C" unsigned long UNK_004f1662;
extern "C" unsigned long UNK_004f16a3;
extern "C" unsigned long UNK_004f1932;
extern "C" unsigned long UNK_004f196a;
extern "C" unsigned long UNK_004f19d0;
extern "C" unsigned long UNK_004f1a0b;
extern "C" unsigned long UNK_004f1aae;
extern "C" unsigned long UNK_004f1ae4;
extern "C" unsigned long UNK_004f1b1e;
extern "C" unsigned long UNK_004f1bca;
extern "C" unsigned long UNK_004f1c30;
extern "C" unsigned long UNK_004f1d10;
extern "C" unsigned long UNK_004f1d3a;
extern "C" unsigned long UNK_004f1d58;
extern "C" unsigned long UNK_004f1d5b;
extern "C" unsigned long UNK_004f1e04;
extern "C" unsigned long UNK_004f1e38;
extern "C" unsigned long UNK_004f1e60;
extern "C" unsigned long UNK_004f1f98;
extern "C" unsigned long UNK_004f1fee;
extern "C" unsigned long UNK_004f2066;
extern "C" unsigned long UNK_004f20c0;
extern "C" unsigned long UNK_004f20fa;
extern "C" unsigned long UNK_004f21ee;
extern "C" unsigned long UNK_004f2244;
extern "C" unsigned long UNK_004f2278;
extern "C" unsigned long UNK_004f2302;
extern "C" unsigned long UNK_004f2378;
extern "C" unsigned long UNK_004f23a2;
extern "C" unsigned long UNK_004f23dc;
extern "C" unsigned long UNK_004f2454;
extern "C" unsigned long UNK_004f24ea;
extern "C" unsigned long UNK_004f2526;
extern "C" unsigned long _UNK_004f1260;
extern "C" unsigned long _UNK_004f1264;
extern "C" unsigned long _UNK_004f1278;
extern "C" unsigned long _UNK_004f12a0;
extern "C" unsigned long _UNK_004f1320;
extern "C" unsigned long _UNK_004f1324;
extern "C" unsigned long _UNK_004f1590;
extern "C" unsigned long _UNK_004f1594;
extern "C" unsigned long _UNK_004f1598;
extern "C" unsigned long _UNK_004f159c;
extern "C" unsigned long _UNK_004f15a0;
extern "C" unsigned long _UNK_004f17ac;
extern "C" unsigned long _UNK_004f17b0;
extern "C" unsigned long _UNK_004f17b4;
extern "C" unsigned long _UNK_004f17b8;
extern "C" unsigned long _UNK_004f17bc;
extern "C" unsigned long _UNK_004f17c0;
extern "C" unsigned long _UNK_004f17c4;
extern "C" unsigned long _UNK_004f17c8;
extern "C" unsigned long _UNK_004f17cc;
extern "C" unsigned long _UNK_004f1bf0;
extern "C" unsigned long _UNK_004f1bf4;
extern "C" unsigned long _UNK_004f1bf8;
extern "C" unsigned long _UNK_004f1bfc;
extern "C" unsigned long _UNK_004f1c00;
extern "C" unsigned long _UNK_004f1c04;
extern "C" unsigned long _UNK_004f1c08;
extern "C" unsigned long _UNK_004f1c0c;
extern "C" unsigned long _UNK_004f1c10;
extern "C" unsigned long _UNK_004f1c14;
extern "C" unsigned long _UNK_004f1c18;
extern "C" unsigned long _UNK_004f1c1c;
extern "C" unsigned long _UNK_004f1c20;
extern "C" unsigned long _UNK_004f1c24;
extern "C" unsigned long _UNK_004f1ec8;
extern "C" unsigned long _UNK_004f1ecc;
extern "C" unsigned long _UNK_004f1ed0;
extern "C" unsigned long _UNK_004f1ed4;
extern "C" unsigned long _UNK_004f1ed8;
extern "C" unsigned long _UNK_004f1edc;
extern "C" unsigned long _UNK_004f1ee0;
extern "C" unsigned long _UNK_004f1ee4;
extern "C" unsigned long _UNK_004f1ee8;
extern "C" unsigned long _UNK_004f1eec;
extern "C" unsigned long _UNK_004f1ef0;
extern "C" unsigned long _UNK_004f1ef4;
extern "C" unsigned long _UNK_004f2074;
extern "C" unsigned long _UNK_004f2078;
extern "C" unsigned long _UNK_004f207c;
extern "C" unsigned long _UNK_004f2080;
extern "C" unsigned long _UNK_004f2084;
extern "C" unsigned long _UNK_004f2100;
extern "C" unsigned long _UNK_004f2104;
extern "C" unsigned long _UNK_004f2580;
extern "C" unsigned long _UNK_004f2584;
extern "C" unsigned long _UNK_004f2588;
extern "C" unsigned long _UNK_004f258c;
extern "C" unsigned long _UNK_004f2590;
extern "C" unsigned long _UNK_004f2594;
extern "C" unsigned long _UNK_004f2598;
extern "C" unsigned long _UNK_004f259c;
extern "C" unsigned long _UNK_004f25a0;
extern "C" unsigned long _UNK_004f25a4;
extern "C" unsigned long _UNK_004f25a8;
extern "C" unsigned long _UNK_004f25ac;
extern "C" unsigned long _UNK_004f25b0;
extern "C" unsigned long _UNK_004f25b4;
extern "C" unsigned long _UNK_004f25b8;
extern "C" unsigned long g_004f11ec;
extern "C" unsigned long g_004f1230;
extern "C" unsigned long g_004f1260;
extern "C" unsigned long g_004f1264;
extern "C" unsigned long g_004f1274;
extern "C" unsigned long g_004f1278;
extern "C" unsigned long g_004f129c;
extern "C" unsigned long g_004f12a0;
extern "C" unsigned long g_004f12b4;
extern "C" unsigned long g_004f12f4;
extern "C" unsigned long g_004f1320;
extern "C" unsigned long g_004f1324;
extern "C" unsigned long g_004f14cc;
extern "C" unsigned long g_004f1500;
extern "C" unsigned long g_004f1590;
extern "C" unsigned long g_004f1594;
extern "C" unsigned long g_004f1598;
extern "C" unsigned long g_004f159c;
extern "C" unsigned long g_004f15a0;
extern "C" unsigned long g_004f163a;
extern "C" unsigned long g_004f1662;
extern "C" unsigned long g_004f16a3;
extern "C" unsigned long g_004f17ac;
extern "C" unsigned long g_004f17b0;
extern "C" unsigned long g_004f17b4;
extern "C" unsigned long g_004f17b8;
extern "C" unsigned long g_004f17bc;
extern "C" unsigned long g_004f17c0;
extern "C" unsigned long g_004f17c4;
extern "C" unsigned long g_004f17c8;
extern "C" unsigned long g_004f17cc;
extern "C" unsigned long g_004f1932;
extern "C" unsigned long g_004f196a;
extern "C" unsigned long g_004f19d0;
extern "C" unsigned long g_004f1a0b;
extern "C" unsigned long g_004f1aae;
extern "C" unsigned long g_004f1ae4;
extern "C" unsigned long g_004f1b1e;
extern "C" unsigned long g_004f1bca;
extern "C" unsigned long g_004f1bf0;
extern "C" unsigned long g_004f1bf4;
extern "C" unsigned long g_004f1bf8;
extern "C" unsigned long g_004f1bfc;
extern "C" unsigned long g_004f1c00;
extern "C" unsigned long g_004f1c04;
extern "C" unsigned long g_004f1c08;
extern "C" unsigned long g_004f1c0c;
extern "C" unsigned long g_004f1c10;
extern "C" unsigned long g_004f1c14;
extern "C" unsigned long g_004f1c18;
extern "C" unsigned long g_004f1c1c;
extern "C" unsigned long g_004f1c20;
extern "C" unsigned long g_004f1c24;
extern "C" unsigned long g_004f1c30;
extern "C" unsigned long g_004f1d10;
extern "C" unsigned long g_004f1d3a;
extern "C" unsigned long g_004f1d58;
extern "C" unsigned long g_004f1d5b;
extern "C" unsigned long g_004f1e04;
extern "C" unsigned long g_004f1e38;
extern "C" unsigned long g_004f1e60;
extern "C" unsigned long g_004f1ec8;
extern "C" unsigned long g_004f1ecc;
extern "C" unsigned long g_004f1ed0;
extern "C" unsigned long g_004f1ed4;
extern "C" unsigned long g_004f1ed8;
extern "C" unsigned long g_004f1edc;
extern "C" unsigned long g_004f1ee0;
extern "C" unsigned long g_004f1ee4;
extern "C" unsigned long g_004f1ee8;
extern "C" unsigned long g_004f1eec;
extern "C" unsigned long g_004f1ef0;
extern "C" unsigned long g_004f1ef4;
extern "C" unsigned long g_004f1f98;
extern "C" unsigned long g_004f1fee;
extern "C" unsigned long g_004f2066;
extern "C" unsigned long g_004f2074;
extern "C" unsigned long g_004f2078;
extern "C" unsigned long g_004f207c;
extern "C" unsigned long g_004f2080;
extern "C" unsigned long g_004f2084;
extern "C" unsigned long g_004f20c0;
extern "C" unsigned long g_004f20fa;
extern "C" unsigned long g_004f2100;
extern "C" unsigned long g_004f2104;
extern "C" unsigned long g_004f21ee;
extern "C" unsigned long g_004f2244;
extern "C" unsigned long g_004f2278;
extern "C" unsigned long g_004f2302;
extern "C" unsigned long g_004f2378;
extern "C" unsigned long g_004f23a2;
extern "C" unsigned long g_004f23dc;
extern "C" unsigned long g_004f2454;
extern "C" unsigned long g_004f24ea;
extern "C" unsigned long g_004f2526;
extern "C" unsigned long g_004f2580;
extern "C" unsigned long g_004f2584;
extern "C" unsigned long g_004f2588;
extern "C" unsigned long g_004f258c;
extern "C" unsigned long g_004f2590;
extern "C" unsigned long g_004f2594;
extern "C" unsigned long g_004f2598;
extern "C" unsigned long g_004f259c;
extern "C" unsigned long g_004f25a0;
extern "C" unsigned long g_004f25a4;
extern "C" unsigned long g_004f25a8;
extern "C" unsigned long g_004f25ac;
extern "C" unsigned long g_004f25b0;
extern "C" unsigned long g_004f25b4;
extern "C" unsigned long g_004f25b8;
BLActivityItemView::~BLActivityItemView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_004f11ec + g_004f1260);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  if (*(int *)((int)this + 4*(0x44)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x44)) = 0;
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_004f1230 + g_004f1264,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLActivityItemView::BLActivityItemView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_004f12b4 + g_004f1320);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  *(int *)((int)this + 4*(0x43)) = 0;
  *(int *)((int)this + 4*(0x4f)) = 0;
  *(int *)((int)this + 4*(0x4e)) = 0;
  *(int *)((int)this + 4*(0x4c)) = 0;
  *(int *)((int)this + 4*(0x42)) = 0;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_004f12f4 + g_004f1324,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * BLActivityItemView::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x140)));
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



void BLActivityItemView::contentShow()
{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  code *pcVar8;
  undefined4 *puVar9;
  
  piVar6 = (int *)*(int *)((int)this + 4*(0x4a));
  pcVar8 = *(code **)(*piVar6 + 0x90);
  bVar1 = (**(code **)(*piVar6 + 0x94))(piVar6);
  (*pcVar8)(piVar6,bVar1 ^ 1);
  iVar2 = (**(code **)(*(int *)this + 0xd8))(((int)this));
  if ((iVar2 != 0) &&
     (iVar2 = (**(code **)(*(int *)this + 0xd8))(((int)this)), **(int **)(iVar2 + 0x14) != 0)) {
    iVar2 = (**(code **)(*(int *)this + 0xd8))(((int)this));
    puVar9 = *(undefined4 **)(*(int *)(iVar2 + 0x14) + 8);
    iVar2 = (**(code **)(*(int *)this + 0xd8))(((int)this));
    iVar7 = *(int *)(*(int *)(iVar2 + 0x14) + 8);
    iVar2 = (**(code **)(*(int *)this + 0xd8))(((int)this));
    iVar2 = **(int **)(iVar2 + 0x14) + g_004f2080;
    for (; (puVar9 <= (undefined4 *)(iVar7 + iVar2 * 4) &&
           (piVar6 = (int *)*puVar9, piVar6 != (int *)0x0)); puVar9 = puVar9 + 1) {
      iVar3 = (**(code **)(*(int *)*(int *)((int)this + 4*(0x4a)) + 0x94))();
      iVar5 = (int)*(int *)&(*piVar6);
      if (iVar3 == 0) {
        pcVar8 = *(code **)(iVar5 + 100);
        uVar4 = (undefined4)((**(code **)(iVar5 + 0x68))(piVar6));
        uVar4 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x - _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar4),(int)(*(int *)((int)this + 4*(0x4e)))))));
        iVar3 = (**(code **)(*(int *)*(int *)((int)this + 4*(0x4b)) + 0x8c))();
        uVar4 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x + _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar4),(int)(*(undefined4 *)(iVar3 + 4))))));
        (*pcVar8)(piVar6,uVar4);
        (**(code **)(*(int *)*(int *)((int)this + 4*(0x46)) + 0x234))
                  ((int *)*(int *)((int)this + 4*(0x46)),&g_004f2066 + g_004f2084);
        piVar6 = (int *)*(int *)((int)this + 4*(0x48));
        uVar4 = (undefined4)(0);
        pcVar8 = *(code **)(*piVar6 + 0x98);
      }
      else {
        pcVar8 = *(code **)(iVar5 + 100);
        uVar4 = (undefined4)((**(code **)(iVar5 + 0x68))(piVar6));
        uVar4 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x + _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar4),(int)(*(int *)((int)this + 4*(0x4e)))))));
        iVar3 = (**(code **)(*(int *)*(int *)((int)this + 4*(0x4b)) + 0x8c))();
        uVar4 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x - _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar4),(int)(*(undefined4 *)(iVar3 + 4))))));
        (*pcVar8)(piVar6,uVar4);
        (**(code **)(*(int *)*(int *)((int)this + 4*(0x46)) + 0x234))
                  ((int *)*(int *)((int)this + 4*(0x46)),&g_004f1f98 + g_004f2074);
        piVar6 = (int *)*(int *)((int)this + 4*(0x48));
        pcVar8 = *(code **)(*piVar6 + 0x98);
        uVar4 = (undefined4)(g_004f2078);
      }
      (*pcVar8)(piVar6,uVar4);
    }
  }
  iVar2 = (**(code **)(*(int *)*(int *)((int)this + 4*(0x4a)) + 0x94))();
  if (iVar2 == 0) {
    iVar2 = (**(code **)(*(int *)*(int *)((int)this + 4*(0x4b)) + 0x8c))();
    iVar2 = *(int *)(iVar2 + 4);
  }
  else {
    iVar2 = *(int *)((int)this + 4*(0x4e));
  }
  *(int *)((int)this + 4*(0x42)) = iVar2;
  iVar2 = (**(code **)(*(int *)*(int *)((int)this + 4*(0x4a)) + 0x94))();
  *(int *)((int)this + 4*(0x43)) = 2 - (uint)(iVar2 != 0);
  uVar4 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar4)->postNotification((char const*)&g_004f1fee + g_004f207c);
  return;
}


undefined4 BLActivityItemView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

undefined4 BLActivityItemView::getBtnShowDes()
{
  return *(undefined4 *)(((int)this) + 0x124);
}

undefined4 BLActivityItemView::getTips()
{
  return *(undefined4 *)(((int)this) + 0x11c);
}

undefined4 BLActivityItemView::getArrow()
{
  return *(undefined4 *)(((int)this) + 0x120);
}

undefined4 BLActivityItemView::getlblSwitcher()
{
  return *(undefined4 *)(((int)this) + 0x118);
}

undefined4 BLActivityItemView::getContent()
{
  return *(undefined4 *)(((int)this) + 0x128);
}

undefined4 BLActivityItemView::getLblTitle()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

void BLActivityItemView::onEnter()
{
  ((BLActivityItemPresenter *)*(undefined4 *)(((int)this) + 0x110))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLActivityItemView::onExit()
{
  ((BLActivityItemPresenter *)*(undefined4 *)(((int)this) + 0x110))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (4) =====
void BLActivityItemView::initTitle(ActivityData* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLActivityItemView::addContent(ActivityItemData* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLActivityItemView::updateUI(cocos2d::extension::CCControlButton* p1)
{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  iVar1 = (undefined4)(intptr_t)((**(code **)(*(int *)(p1) + (0x118)))(p1));
  piVar2 = (int *)(**(code **)(*(int *)(p1) + (0xe4)))(p1);
  piVar2 = (int *)(**(code **)(*(int *)(piVar2) + (0xd4)))(piVar2,iVar1 * 10);
  (**(code **)(*(int *)(piVar2) + (0x234)))(piVar2,(unsigned char *)((char *)&g_004f20c0 + (intptr_t)(g_004f2100)));
  (**(code **)(*(int *)(p1) + (0x90)))(p1,0);
  *(int *)(((int)this) + 0x13c) = *(int *)(((int)this) + 0x13c) + -1;
  iVar1 = (undefined4)(intptr_t)(((BLActivityManager *)this)->share());
  *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + -1;
  if (*(int *)(((int)this) + 0x13c) < 1) {
    (**(code **)(**(int **)(((int)this) + 0x11c) + 0x90))(*(int **)(((int)this) + 0x11c),0);
  }
  uVar3 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar3)->postNotification((char const*)(unsigned char *)((char *)&g_004f20fa + (intptr_t)(g_004f2104)));
  return;
}

bool BLActivityItemView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
