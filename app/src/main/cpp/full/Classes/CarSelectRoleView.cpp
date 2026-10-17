#include "CarSelectRoleView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "CarSelectRolePresenter.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <new>   // ghost_fix.js 自动补齐
using namespace cocos2d;
// 兜底声明
extern "C" long long func_006c44f8(...);
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long ghidra_CONCAT13(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_006c3364;
extern "C" unsigned long UNK_006c33b6;
extern "C" unsigned long UNK_006c33fc;
extern "C" unsigned long UNK_006c3424;
extern "C" unsigned long UNK_006c3612;
extern "C" unsigned long UNK_006c36f4;
extern "C" unsigned long UNK_006c37aa;
extern "C" unsigned long UNK_006c37d6;
extern "C" unsigned long UNK_006c38be;
extern "C" unsigned long UNK_006c38ec;
extern "C" unsigned long UNK_006c3ae2;
extern "C" unsigned long UNK_006c3bd4;
extern "C" unsigned long UNK_006c3c2e;
extern "C" unsigned long UNK_006c3cf4;
extern "C" unsigned long UNK_006c3d26;
extern "C" unsigned long UNK_006c3df8;
extern "C" unsigned long UNK_006c3e22;
extern "C" unsigned long UNK_006c3ee8;
extern "C" unsigned long UNK_006c3f16;
extern "C" unsigned long UNK_006c3fe8;
extern "C" unsigned long UNK_006c4064;
extern "C" unsigned long UNK_006c412a;
extern "C" unsigned long UNK_006c4158;
extern "C" unsigned long UNK_006c422a;
extern "C" unsigned long UNK_006c4254;
extern "C" unsigned long UNK_006c4314;
extern "C" unsigned long UNK_006c433e;
extern "C" unsigned long _DAT_006c34dc;
extern "C" unsigned long _DAT_006c34e0;
extern "C" unsigned long _UNK_006c33e8;
extern "C" unsigned long _UNK_006c33ec;
extern "C" unsigned long _UNK_006c3400;
extern "C" unsigned long _UNK_006c3428;
extern "C" unsigned long _UNK_006c39f4;
extern "C" unsigned long _UNK_006c39f8;
extern "C" unsigned long _UNK_006c39fc;
extern "C" unsigned long _UNK_006c3a00;
extern "C" unsigned long _UNK_006c3a04;
extern "C" unsigned long _UNK_006c3a08;
extern "C" unsigned long _UNK_006c3a0c;
extern "C" unsigned long _UNK_006c3a10;
extern "C" unsigned long _UNK_006c3a14;
extern "C" unsigned long _UNK_006c3a18;
extern "C" unsigned long _UNK_006c3a1c;
extern "C" unsigned long _UNK_006c3a20;
extern "C" unsigned long _UNK_006c3a24;
extern "C" unsigned long _UNK_006c3a28;
extern "C" unsigned long _UNK_006c3a2c;
extern "C" unsigned long _UNK_006c3a30;
extern "C" unsigned long _UNK_006c3bec;
extern "C" unsigned long _UNK_006c3bf0;
extern "C" unsigned long _UNK_006c3bf4;
extern "C" unsigned long _UNK_006c3bf8;
extern "C" unsigned long _UNK_006c3bfc;
extern "C" unsigned long _UNK_006c3c00;
extern "C" unsigned long _UNK_006c3c04;
extern "C" unsigned long _UNK_006c3c08;
extern "C" unsigned long _UNK_006c3c0c;
extern "C" unsigned long _UNK_006c4004;
extern "C" unsigned long _UNK_006c4008;
extern "C" unsigned long _UNK_006c400c;
extern "C" unsigned long _UNK_006c4010;
extern "C" unsigned long _UNK_006c4014;
extern "C" unsigned long _UNK_006c4018;
extern "C" unsigned long _UNK_006c401c;
extern "C" unsigned long _UNK_006c4020;
extern "C" unsigned long _UNK_006c4024;
extern "C" unsigned long _UNK_006c4028;
extern "C" unsigned long _UNK_006c402c;
extern "C" unsigned long _UNK_006c4030;
extern "C" unsigned long _UNK_006c4034;
extern "C" unsigned long _UNK_006c4038;
extern "C" unsigned long _UNK_006c403c;
extern "C" unsigned long _UNK_006c4040;
extern "C" unsigned long _UNK_006c4044;
extern "C" unsigned long _UNK_006c4048;
extern "C" unsigned long _UNK_006c404c;
extern "C" unsigned long _UNK_006c4050;
extern "C" unsigned long _UNK_006c4440;
extern "C" unsigned long _UNK_006c4444;
extern "C" unsigned long _UNK_006c4448;
extern "C" unsigned long _UNK_006c444c;
extern "C" unsigned long _UNK_006c4450;
extern "C" unsigned long _UNK_006c4454;
extern "C" unsigned long _UNK_006c4458;
extern "C" unsigned long _UNK_006c445c;
extern "C" unsigned long _UNK_006c4460;
extern "C" unsigned long _UNK_006c4464;
extern "C" unsigned long _UNK_006c4468;
extern "C" unsigned long _UNK_006c446c;
extern "C" unsigned long _UNK_006c4470;
extern "C" unsigned long _UNK_006c4474;
extern "C" unsigned long _UNK_006c4478;
extern "C" unsigned long _UNK_006c447c;
extern "C" unsigned long g_006c3364;
extern "C" unsigned long g_006c33b6;
extern "C" unsigned long g_006c33e8;
extern "C" unsigned long g_006c33ec;
extern "C" unsigned long g_006c33fc;
extern "C" unsigned long g_006c3400;
extern "C" unsigned long g_006c3424;
extern "C" unsigned long g_006c3428;
extern "C" unsigned long g_006c34dc;
extern "C" unsigned long g_006c34e0;
extern "C" unsigned long g_006c3612;
extern "C" unsigned long g_006c36f4;
extern "C" unsigned long g_006c37aa;
extern "C" unsigned long g_006c37d6;
extern "C" unsigned long g_006c38be;
extern "C" unsigned long g_006c38ec;
extern "C" unsigned long g_006c39f4;
extern "C" unsigned long g_006c39f8;
extern "C" unsigned long g_006c39fc;
extern "C" unsigned long g_006c3a00;
extern "C" unsigned long g_006c3a04;
extern "C" unsigned long g_006c3a08;
extern "C" unsigned long g_006c3a0c;
extern "C" unsigned long g_006c3a10;
extern "C" unsigned long g_006c3a14;
extern "C" unsigned long g_006c3a18;
extern "C" unsigned long g_006c3a1c;
extern "C" unsigned long g_006c3a20;
extern "C" unsigned long g_006c3a24;
extern "C" unsigned long g_006c3a28;
extern "C" unsigned long g_006c3a2c;
extern "C" unsigned long g_006c3a30;
extern "C" unsigned long g_006c3ae2;
extern "C" unsigned long g_006c3bd4;
extern "C" unsigned long g_006c3bec;
extern "C" unsigned long g_006c3bf0;
extern "C" unsigned long g_006c3bf4;
extern "C" unsigned long g_006c3bf8;
extern "C" unsigned long g_006c3bfc;
extern "C" unsigned long g_006c3c00;
extern "C" unsigned long g_006c3c04;
extern "C" unsigned long g_006c3c08;
extern "C" unsigned long g_006c3c0c;
extern "C" unsigned long g_006c3c2e;
extern "C" unsigned long g_006c3cf4;
extern "C" unsigned long g_006c3d26;
extern "C" unsigned long g_006c3df8;
extern "C" unsigned long g_006c3e22;
extern "C" unsigned long g_006c3ee8;
extern "C" unsigned long g_006c3f16;
extern "C" unsigned long g_006c3fe8;
extern "C" unsigned long g_006c4004;
extern "C" unsigned long g_006c4008;
extern "C" unsigned long g_006c400c;
extern "C" unsigned long g_006c4010;
extern "C" unsigned long g_006c4014;
extern "C" unsigned long g_006c4018;
extern "C" unsigned long g_006c401c;
extern "C" unsigned long g_006c4020;
extern "C" unsigned long g_006c4024;
extern "C" unsigned long g_006c4028;
extern "C" unsigned long g_006c402c;
extern "C" unsigned long g_006c4030;
extern "C" unsigned long g_006c4034;
extern "C" unsigned long g_006c4038;
extern "C" unsigned long g_006c403c;
extern "C" unsigned long g_006c4040;
extern "C" unsigned long g_006c4044;
extern "C" unsigned long g_006c4048;
extern "C" unsigned long g_006c404c;
extern "C" unsigned long g_006c4050;
extern "C" unsigned long g_006c4064;
extern "C" unsigned long g_006c412a;
extern "C" unsigned long g_006c4158;
extern "C" unsigned long g_006c422a;
extern "C" unsigned long g_006c4254;
extern "C" unsigned long g_006c4314;
extern "C" unsigned long g_006c433e;
extern "C" unsigned long g_006c4440;
extern "C" unsigned long g_006c4444;
extern "C" unsigned long g_006c4448;
extern "C" unsigned long g_006c444c;
extern "C" unsigned long g_006c4450;
extern "C" unsigned long g_006c4454;
extern "C" unsigned long g_006c4458;
extern "C" unsigned long g_006c445c;
extern "C" unsigned long g_006c4460;
extern "C" unsigned long g_006c4464;
extern "C" unsigned long g_006c4468;
extern "C" unsigned long g_006c446c;
extern "C" unsigned long g_006c4470;
extern "C" unsigned long g_006c4474;
extern "C" unsigned long g_006c4478;
extern "C" unsigned long g_006c447c;
CarSelectRoleView::~CarSelectRoleView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_006c3364 + g_006c33e8);
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
  func_0079e45c(&uStack_14,&g_006c33b6 + g_006c33ec,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

CarSelectRoleView::CarSelectRoleView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = (undefined4)(intptr_t)(*(int *)(g_006c34dc + 0x6c346c));
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
  func_0079e45c(&uStack_14,((intptr_t)"CarSelectRoleView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * CarSelectRoleView::create()
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

undefined4 CarSelectRoleView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 CarSelectRoleView::getBackGround()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

undefined4 CarSelectRoleView::getSprBg()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

undefined4 CarSelectRoleView::getbtnRight()
{
  return *(undefined4 *)(((int)this) + 0x118);
}

undefined4 CarSelectRoleView::getBtnLeft()
{
  return *(undefined4 *)(((int)this) + 0x11c);
}

undefined4 CarSelectRoleView::getTableViewRoles()
{
  return *(undefined4 *)(((int)this) + 0x120);
}

undefined4 CarSelectRoleView::getTabBg()
{
  return *(undefined4 *)(((int)this) + 0x124);
}

undefined4 CarSelectRoleView::getLabTitle()
{
  return *(undefined4 *)(((int)this) + 0x128);
}

undefined4 CarSelectRoleView::getBtnClose()
{
  return *(undefined4 *)(((int)this) + 300);
}

undefined4 CarSelectRoleView::getLabRoleLimit()
{
  return *(undefined4 *)(((int)this) + 0x130);
}

undefined4 CarSelectRoleView::getBtnCancle()
{
  return *(undefined4 *)(((int)this) + 0x134);
}

undefined4 CarSelectRoleView::getLabCancle()
{
  return *(undefined4 *)(((int)this) + 0x138);
}

undefined4 CarSelectRoleView::getBtnSure()
{
  return *(undefined4 *)(((int)this) + 0x13c);
}

undefined4 CarSelectRoleView::getLabSure()
{
  return *(undefined4 *)(((int)this) + 0x140);
}

undefined4 CarSelectRoleView::getLabPlayTitle()
{
  return *(undefined4 *)(((int)this) + 0x144);
}

void CarSelectRoleView::onEnter()
{
  ((CarSelectRolePresenter *)*(undefined4 *)(((int)this) + 0x10c))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void CarSelectRoleView::onExit()
{
  ((CarSelectRolePresenter *)*(undefined4 *)(((int)this) + 0x10c))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
bool CarSelectRoleView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
