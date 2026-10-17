#include "BLMineSnatchHeroView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLMineSnatchHeroPresenter.h"
#include "CircusData.h"
#include "CircusPlayerinfo.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <new>   // ghost_fix.js 自动补齐
using namespace cocos2d;
// 兜底声明
extern "C" long long func_005b48a0(...);
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_005b3718;
extern "C" unsigned long UNK_005b375c;
extern "C" unsigned long UNK_005b37a0;
extern "C" unsigned long UNK_005b37c8;
extern "C" unsigned long UNK_005b39c0;
extern "C" unsigned long UNK_005b3aaa;
extern "C" unsigned long UNK_005b3b5e;
extern "C" unsigned long UNK_005b3b8c;
extern "C" unsigned long UNK_005b3c70;
extern "C" unsigned long UNK_005b3c9a;
extern "C" unsigned long UNK_005b3eca;
extern "C" unsigned long UNK_005b3fb2;
extern "C" unsigned long UNK_005b3fde;
extern "C" unsigned long UNK_005b40a2;
extern "C" unsigned long UNK_005b40d0;
extern "C" unsigned long UNK_005b41a0;
extern "C" unsigned long UNK_005b41cc;
extern "C" unsigned long UNK_005b42de;
extern "C" unsigned long UNK_005b430c;
extern "C" unsigned long UNK_005b43dc;
extern "C" unsigned long UNK_005b4408;
extern "C" unsigned long UNK_005b44d0;
extern "C" unsigned long UNK_005b44fe;
extern "C" unsigned long UNK_005b45d2;
extern "C" unsigned long UNK_005b45fe;
extern "C" unsigned long UNK_005b4708;
extern "C" unsigned long UNK_005b4734;
extern "C" unsigned long _DAT_005b3868;
extern "C" unsigned long _DAT_005b386c;
extern "C" unsigned long _UNK_005b378c;
extern "C" unsigned long _UNK_005b3790;
extern "C" unsigned long _UNK_005b37a4;
extern "C" unsigned long _UNK_005b37cc;
extern "C" unsigned long _UNK_005b3d90;
extern "C" unsigned long _UNK_005b3d94;
extern "C" unsigned long _UNK_005b3d98;
extern "C" unsigned long _UNK_005b3d9c;
extern "C" unsigned long _UNK_005b3da0;
extern "C" unsigned long _UNK_005b3da4;
extern "C" unsigned long _UNK_005b3da8;
extern "C" unsigned long _UNK_005b3dac;
extern "C" unsigned long _UNK_005b3db0;
extern "C" unsigned long _UNK_005b3db4;
extern "C" unsigned long _UNK_005b3db8;
extern "C" unsigned long _UNK_005b3dbc;
extern "C" unsigned long _UNK_005b3dc0;
extern "C" unsigned long _UNK_005b3dc4;
extern "C" unsigned long _UNK_005b41f0;
extern "C" unsigned long _UNK_005b41f4;
extern "C" unsigned long _UNK_005b41f8;
extern "C" unsigned long _UNK_005b41fc;
extern "C" unsigned long _UNK_005b4200;
extern "C" unsigned long _UNK_005b4204;
extern "C" unsigned long _UNK_005b4208;
extern "C" unsigned long _UNK_005b420c;
extern "C" unsigned long _UNK_005b4210;
extern "C" unsigned long _UNK_005b4214;
extern "C" unsigned long _UNK_005b4218;
extern "C" unsigned long _UNK_005b421c;
extern "C" unsigned long _UNK_005b4220;
extern "C" unsigned long _UNK_005b4224;
extern "C" unsigned long _UNK_005b4228;
extern "C" unsigned long _UNK_005b422c;
extern "C" unsigned long _UNK_005b4230;
extern "C" unsigned long _UNK_005b4234;
extern "C" unsigned long _UNK_005b4648;
extern "C" unsigned long _UNK_005b464c;
extern "C" unsigned long _UNK_005b4650;
extern "C" unsigned long _UNK_005b4654;
extern "C" unsigned long _UNK_005b4658;
extern "C" unsigned long _UNK_005b465c;
extern "C" unsigned long _UNK_005b4660;
extern "C" unsigned long _UNK_005b4664;
extern "C" unsigned long _UNK_005b4668;
extern "C" unsigned long _UNK_005b466c;
extern "C" unsigned long _UNK_005b4670;
extern "C" unsigned long _UNK_005b4674;
extern "C" unsigned long _UNK_005b4678;
extern "C" unsigned long _UNK_005b467c;
extern "C" unsigned long _UNK_005b4680;
extern "C" unsigned long _UNK_005b4684;
extern "C" unsigned long _UNK_005b48b0;
extern "C" unsigned long _UNK_005b48b4;
extern "C" unsigned long _UNK_005b48b8;
extern "C" unsigned long _UNK_005b48bc;
extern "C" unsigned long _UNK_005b48c0;
extern "C" unsigned long _UNK_005b48c4;
extern "C" unsigned long _UNK_005b48c8;
extern "C" unsigned long _UNK_005b48cc;
extern "C" unsigned long g_005b3718;
extern "C" unsigned long g_005b375c;
extern "C" unsigned long g_005b378c;
extern "C" unsigned long g_005b3790;
extern "C" unsigned long g_005b37a0;
extern "C" unsigned long g_005b37a4;
extern "C" unsigned long g_005b37c8;
extern "C" unsigned long g_005b37cc;
extern "C" unsigned long g_005b3868;
extern "C" unsigned long g_005b386c;
extern "C" unsigned long g_005b39c0;
extern "C" unsigned long g_005b3aaa;
extern "C" unsigned long g_005b3b5e;
extern "C" unsigned long g_005b3b8c;
extern "C" unsigned long g_005b3c70;
extern "C" unsigned long g_005b3c9a;
extern "C" unsigned long g_005b3d90;
extern "C" unsigned long g_005b3d94;
extern "C" unsigned long g_005b3d98;
extern "C" unsigned long g_005b3d9c;
extern "C" unsigned long g_005b3da0;
extern "C" unsigned long g_005b3da4;
extern "C" unsigned long g_005b3da8;
extern "C" unsigned long g_005b3dac;
extern "C" unsigned long g_005b3db0;
extern "C" unsigned long g_005b3db4;
extern "C" unsigned long g_005b3db8;
extern "C" unsigned long g_005b3dbc;
extern "C" unsigned long g_005b3dc0;
extern "C" unsigned long g_005b3dc4;
extern "C" unsigned long g_005b3eca;
extern "C" unsigned long g_005b3fb2;
extern "C" unsigned long g_005b3fde;
extern "C" unsigned long g_005b40a2;
extern "C" unsigned long g_005b40d0;
extern "C" unsigned long g_005b41a0;
extern "C" unsigned long g_005b41cc;
extern "C" unsigned long g_005b41f0;
extern "C" unsigned long g_005b41f4;
extern "C" unsigned long g_005b41f8;
extern "C" unsigned long g_005b41fc;
extern "C" unsigned long g_005b4200;
extern "C" unsigned long g_005b4204;
extern "C" unsigned long g_005b4208;
extern "C" unsigned long g_005b420c;
extern "C" unsigned long g_005b4210;
extern "C" unsigned long g_005b4214;
extern "C" unsigned long g_005b4218;
extern "C" unsigned long g_005b421c;
extern "C" unsigned long g_005b4220;
extern "C" unsigned long g_005b4224;
extern "C" unsigned long g_005b4228;
extern "C" unsigned long g_005b422c;
extern "C" unsigned long g_005b4230;
extern "C" unsigned long g_005b4234;
extern "C" unsigned long g_005b42de;
extern "C" unsigned long g_005b430c;
extern "C" unsigned long g_005b43dc;
extern "C" unsigned long g_005b4408;
extern "C" unsigned long g_005b44d0;
extern "C" unsigned long g_005b44fe;
extern "C" unsigned long g_005b45d2;
extern "C" unsigned long g_005b45fe;
extern "C" unsigned long g_005b4648;
extern "C" unsigned long g_005b464c;
extern "C" unsigned long g_005b4650;
extern "C" unsigned long g_005b4654;
extern "C" unsigned long g_005b4658;
extern "C" unsigned long g_005b465c;
extern "C" unsigned long g_005b4660;
extern "C" unsigned long g_005b4664;
extern "C" unsigned long g_005b4668;
extern "C" unsigned long g_005b466c;
extern "C" unsigned long g_005b4670;
extern "C" unsigned long g_005b4674;
extern "C" unsigned long g_005b4678;
extern "C" unsigned long g_005b467c;
extern "C" unsigned long g_005b4680;
extern "C" unsigned long g_005b4684;
extern "C" unsigned long g_005b4708;
extern "C" unsigned long g_005b4734;
extern "C" unsigned long g_005b48b0;
extern "C" unsigned long g_005b48b4;
extern "C" unsigned long g_005b48b8;
extern "C" unsigned long g_005b48bc;
extern "C" unsigned long g_005b48c0;
extern "C" unsigned long g_005b48c4;
extern "C" unsigned long g_005b48c8;
extern "C" unsigned long g_005b48cc;
BLMineSnatchHeroView::~BLMineSnatchHeroView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_005b3718 + g_005b378c);
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
  func_0079e45c(&uStack_14,&g_005b375c + g_005b3790,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLMineSnatchHeroView::BLMineSnatchHeroView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(g_005b3868 + 0x5b3810);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLMineSnatchHeroView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * BLMineSnatchHeroView::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x144)));
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

undefined4 BLMineSnatchHeroView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x108);
}

undefined4 BLMineSnatchHeroView::getbtnRight()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

undefined4 BLMineSnatchHeroView::getBtnLeft()
{
  return *(undefined4 *)(((int)this) + 0x118);
}

undefined4 BLMineSnatchHeroView::getTableViewRoles()
{
  return *(undefined4 *)(((int)this) + 0x11c);
}

undefined4 BLMineSnatchHeroView::getTabBg()
{
  return *(undefined4 *)(((int)this) + 0x120);
}

undefined4 BLMineSnatchHeroView::getLabTitle()
{
  return *(undefined4 *)(((int)this) + 0x124);
}

undefined4 BLMineSnatchHeroView::getBtnClose()
{
  return *(undefined4 *)(((int)this) + 0x128);
}

undefined4 BLMineSnatchHeroView::getLabRoleLimit()
{
  return *(undefined4 *)(((int)this) + 300);
}

undefined4 BLMineSnatchHeroView::getBtnCancle()
{
  return *(undefined4 *)(((int)this) + 0x130);
}

undefined4 BLMineSnatchHeroView::getLabCancle()
{
  return *(undefined4 *)(((int)this) + 0x134);
}

undefined4 BLMineSnatchHeroView::getBtnSure()
{
  return *(undefined4 *)(((int)this) + 0x138);
}

undefined4 BLMineSnatchHeroView::getLabSure()
{
  return *(undefined4 *)(((int)this) + 0x13c);
}

undefined4 BLMineSnatchHeroView::getLabPlayTitle()
{
  return *(undefined4 *)(((int)this) + 0x140);
}

void BLMineSnatchHeroView::onEnter()
{
  ((BLMineSnatchHeroPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLMineSnatchHeroView::onExit()
{
  ((BLMineSnatchHeroPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
bool BLMineSnatchHeroView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
