#include "BLSkillItemView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLSkillItemPresenter.h"
#include "BLUpgraceButtonView.h"
#include "BLUpgraceMAXButtonView.h"
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
extern "C" unsigned long UNK_00683e18;
extern "C" unsigned long UNK_00683e6a;
extern "C" unsigned long UNK_00683eb0;
extern "C" unsigned long UNK_00683ed8;
extern "C" unsigned long UNK_00683f20;
extern "C" unsigned long UNK_00683f5c;
extern "C" unsigned long UNK_006841b2;
extern "C" unsigned long UNK_006841dc;
extern "C" unsigned long UNK_0068429a;
extern "C" unsigned long UNK_006842d0;
extern "C" unsigned long UNK_0068438c;
extern "C" unsigned long UNK_006843b8;
extern "C" unsigned long UNK_00684478;
extern "C" unsigned long UNK_006844a4;
extern "C" unsigned long UNK_00684592;
extern "C" unsigned long UNK_0068467e;
extern "C" unsigned long UNK_00684768;
extern "C" unsigned long UNK_0068485c;
extern "C" unsigned long UNK_00684886;
extern "C" unsigned long UNK_00684976;
extern "C" unsigned long UNK_00684a10;
extern "C" unsigned long UNK_00684abe;
extern "C" unsigned long UNK_00684ae8;
extern "C" unsigned long UNK_00684ba4;
extern "C" unsigned long UNK_00684bce;
extern "C" unsigned long UNK_00684c8e;
extern "C" unsigned long UNK_00684cb8;
extern "C" unsigned long _UNK_00683e9c;
extern "C" unsigned long _UNK_00683ea0;
extern "C" unsigned long _UNK_00683eb4;
extern "C" unsigned long _UNK_00683edc;
extern "C" unsigned long _UNK_00683f90;
extern "C" unsigned long _UNK_00683f94;
extern "C" unsigned long _UNK_006844ac;
extern "C" unsigned long _UNK_006844b0;
extern "C" unsigned long _UNK_006844b4;
extern "C" unsigned long _UNK_006844b8;
extern "C" unsigned long _UNK_006844bc;
extern "C" unsigned long _UNK_006844c0;
extern "C" unsigned long _UNK_006844c4;
extern "C" unsigned long _UNK_006844c8;
extern "C" unsigned long _UNK_006844cc;
extern "C" unsigned long _UNK_006844d0;
extern "C" unsigned long _UNK_006844d4;
extern "C" unsigned long _UNK_006844d8;
extern "C" unsigned long _UNK_006844dc;
extern "C" unsigned long _UNK_006844e0;
extern "C" unsigned long _UNK_006844e4;
extern "C" unsigned long _UNK_00684914;
extern "C" unsigned long _UNK_00684918;
extern "C" unsigned long _UNK_0068491c;
extern "C" unsigned long _UNK_00684920;
extern "C" unsigned long _UNK_00684924;
extern "C" unsigned long _UNK_00684928;
extern "C" unsigned long _UNK_0068492c;
extern "C" unsigned long _UNK_00684930;
extern "C" unsigned long _UNK_00684934;
extern "C" unsigned long _UNK_00684938;
extern "C" unsigned long _UNK_0068493c;
extern "C" unsigned long _UNK_00684940;
extern "C" unsigned long _UNK_00684944;
extern "C" unsigned long _UNK_00684948;
extern "C" unsigned long _UNK_00684d58;
extern "C" unsigned long _UNK_00684d5c;
extern "C" unsigned long _UNK_00684d60;
extern "C" unsigned long _UNK_00684d64;
extern "C" unsigned long _UNK_00684d68;
extern "C" unsigned long _UNK_00684d6c;
extern "C" unsigned long _UNK_00684d70;
extern "C" unsigned long _UNK_00684d74;
extern "C" unsigned long _UNK_00684d78;
extern "C" unsigned long _UNK_00684d7c;
extern "C" unsigned long _UNK_00684d80;
extern "C" unsigned long _UNK_00684d84;
extern "C" unsigned long _UNK_00684d88;
extern "C" unsigned long _UNK_00684d8c;
extern "C" unsigned long _UNK_00684d90;
extern "C" unsigned long _UNK_00684d94;
extern "C" unsigned long _UNK_00684e64;
extern "C" unsigned long _UNK_00684e68;
extern "C" unsigned long g_00683e18;
extern "C" unsigned long g_00683e6a;
extern "C" unsigned long g_00683e9c;
extern "C" unsigned long g_00683ea0;
extern "C" unsigned long g_00683eb0;
extern "C" unsigned long g_00683eb4;
extern "C" unsigned long g_00683ed8;
extern "C" unsigned long g_00683edc;
extern "C" unsigned long g_00683f20;
extern "C" unsigned long g_00683f5c;
extern "C" unsigned long g_00683f90;
extern "C" unsigned long g_00683f94;
extern "C" unsigned long g_006841b2;
extern "C" unsigned long g_006841dc;
extern "C" unsigned long g_0068429a;
extern "C" unsigned long g_006842d0;
extern "C" unsigned long g_0068438c;
extern "C" unsigned long g_006843b8;
extern "C" unsigned long g_00684478;
extern "C" unsigned long g_006844a4;
extern "C" unsigned long g_006844ac;
extern "C" unsigned long g_006844b0;
extern "C" unsigned long g_006844b4;
extern "C" unsigned long g_006844b8;
extern "C" unsigned long g_006844bc;
extern "C" unsigned long g_006844c0;
extern "C" unsigned long g_006844c4;
extern "C" unsigned long g_006844c8;
extern "C" unsigned long g_006844cc;
extern "C" unsigned long g_006844d0;
extern "C" unsigned long g_006844d4;
extern "C" unsigned long g_006844d8;
extern "C" unsigned long g_006844dc;
extern "C" unsigned long g_006844e0;
extern "C" unsigned long g_006844e4;
extern "C" unsigned long g_00684592;
extern "C" unsigned long g_0068467e;
extern "C" unsigned long g_00684768;
extern "C" unsigned long g_0068485c;
extern "C" unsigned long g_00684886;
extern "C" unsigned long g_00684914;
extern "C" unsigned long g_00684918;
extern "C" unsigned long g_0068491c;
extern "C" unsigned long g_00684920;
extern "C" unsigned long g_00684924;
extern "C" unsigned long g_00684928;
extern "C" unsigned long g_0068492c;
extern "C" unsigned long g_00684930;
extern "C" unsigned long g_00684934;
extern "C" unsigned long g_00684938;
extern "C" unsigned long g_0068493c;
extern "C" unsigned long g_00684940;
extern "C" unsigned long g_00684944;
extern "C" unsigned long g_00684948;
extern "C" unsigned long g_00684976;
extern "C" unsigned long g_00684a10;
extern "C" unsigned long g_00684abe;
extern "C" unsigned long g_00684ae8;
extern "C" unsigned long g_00684ba4;
extern "C" unsigned long g_00684bce;
extern "C" unsigned long g_00684c8e;
extern "C" unsigned long g_00684cb8;
extern "C" unsigned long g_00684d58;
extern "C" unsigned long g_00684d5c;
extern "C" unsigned long g_00684d60;
extern "C" unsigned long g_00684d64;
extern "C" unsigned long g_00684d68;
extern "C" unsigned long g_00684d6c;
extern "C" unsigned long g_00684d70;
extern "C" unsigned long g_00684d74;
extern "C" unsigned long g_00684d78;
extern "C" unsigned long g_00684d7c;
extern "C" unsigned long g_00684d80;
extern "C" unsigned long g_00684d84;
extern "C" unsigned long g_00684d88;
extern "C" unsigned long g_00684d8c;
extern "C" unsigned long g_00684d90;
extern "C" unsigned long g_00684d94;
extern "C" unsigned long g_00684e64;
extern "C" unsigned long g_00684e68;
BLSkillItemView::~BLSkillItemView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_00683e18 + g_00683e9c);
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
  func_0079e45c(&uStack_14,&g_00683e6a + g_00683ea0,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}


int * BLSkillItemView::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x148)));
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

undefined4 BLSkillItemView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 BLSkillItemView::BtnUpgrace()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

undefined4 BLSkillItemView::BtnUpgraceMAX()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

undefined4 BLSkillItemView::getLabName()
{
  return *(undefined4 *)(((int)this) + 0x118);
}

undefined4 BLSkillItemView::getLabLV()
{
  return *(undefined4 *)(((int)this) + 0x11c);
}

undefined4 BLSkillItemView::getLabCD()
{
  return *(undefined4 *)(((int)this) + 0x120);
}

undefined4 BLSkillItemView::getLabHurt()
{
  return *(undefined4 *)(((int)this) + 0x124);
}

undefined4 BLSkillItemView::getLineDown()
{
  return *(undefined4 *)(((int)this) + 0x128);
}

undefined4 BLSkillItemView::getLineUp()
{
  return *(undefined4 *)(((int)this) + 300);
}

undefined4 BLSkillItemView::getLineMiddle()
{
  return *(undefined4 *)(((int)this) + 0x130);
}

undefined4 BLSkillItemView::getLabMax()
{
  return *(undefined4 *)(((int)this) + 0x134);
}

undefined4 BLSkillItemView::getSprSkillIcon()
{
  return *(undefined4 *)(((int)this) + 0x138);
}

undefined4 BLSkillItemView::getLabUnLock()
{
  return *(undefined4 *)(((int)this) + 0x13c);
}

undefined4 BLSkillItemView::getLabCDNext()
{
  return *(undefined4 *)(((int)this) + 0x140);
}

undefined4 BLSkillItemView::getLabHurtNext()
{
  return *(undefined4 *)(((int)this) + 0x144);
}

void BLSkillItemView::onEnter()
{
  ((BLSkillItemPresenter *)*(undefined4 *)(((int)this) + 0x10c))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLSkillItemView::onExit()
{
  ((BLSkillItemPresenter *)*(undefined4 *)(((int)this) + 0x10c))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (2) =====
BLSkillItemView::BLSkillItemView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = (undefined4)(intptr_t)(*(int *)((unsigned char *)((char *)&g_00683f20 + (intptr_t)(g_00683f90))));
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
  func_0079e45c(&uStack_14,(unsigned char *)((char *)&g_00683f5c + (intptr_t)(g_00683f94)),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

bool BLSkillItemView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
