#include "BLHeroDetailView.h"
#include "BLHeroDetailPresenter.h"
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
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long func_0079e62c(...);
extern "C" long long func_0079e724(...);
extern "C" long long func_0079e744(...);
extern "C" long long func_0079e7e4(...);
extern "C" long long func_0079e8d4(...);
extern "C" long long ghidra_CONCAT13(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_005673b4;
extern "C" unsigned long UNK_005673f8;
extern "C" unsigned long UNK_0056743c;
extern "C" unsigned long UNK_00567464;
extern "C" unsigned long UNK_0056760a;
extern "C" unsigned long UNK_00567690;
extern "C" unsigned long UNK_0056777c;
extern "C" unsigned long UNK_00567864;
extern "C" unsigned long UNK_00567906;
extern "C" unsigned long UNK_00567926;
extern "C" unsigned long UNK_005679a2;
extern "C" unsigned long UNK_005679d6;
extern "C" unsigned long UNK_00567aec;
extern "C" unsigned long UNK_00567b1c;
extern "C" unsigned long UNK_00567bec;
extern "C" unsigned long UNK_00567c6a;
extern "C" unsigned long UNK_00567c7c;
extern "C" unsigned long UNK_00567d10;
extern "C" unsigned long UNK_00567d1e;
extern "C" unsigned long UNK_00567dee;
extern "C" unsigned long UNK_00567ed6;
extern "C" unsigned long UNK_00567ee8;
extern "C" unsigned long UNK_00567f78;
extern "C" unsigned long UNK_00567f86;
extern "C" unsigned long UNK_00568058;
extern "C" unsigned long _DAT_00567504;
extern "C" unsigned long _DAT_00567508;
extern "C" unsigned long _UNK_00567428;
extern "C" unsigned long _UNK_0056742c;
extern "C" unsigned long _UNK_00567440;
extern "C" unsigned long _UNK_00567468;
extern "C" unsigned long _UNK_005679e8;
extern "C" unsigned long _UNK_005679ec;
extern "C" unsigned long _UNK_005679f0;
extern "C" unsigned long _UNK_005679f4;
extern "C" unsigned long _UNK_005679f8;
extern "C" unsigned long _UNK_005679fc;
extern "C" unsigned long _UNK_00567a00;
extern "C" unsigned long _UNK_00567a04;
extern "C" unsigned long _UNK_00567a08;
extern "C" unsigned long _UNK_00567a0c;
extern "C" unsigned long _UNK_00567a10;
extern "C" unsigned long _UNK_00567a14;
extern "C" unsigned long _UNK_00567a18;
extern "C" unsigned long _UNK_00567a1c;
extern "C" unsigned long _UNK_00567a20;
extern "C" unsigned long _UNK_00567a24;
extern "C" unsigned long _UNK_00567a28;
extern "C" unsigned long _UNK_00567a2c;
extern "C" unsigned long _UNK_00567a30;
extern "C" unsigned long _UNK_00567e30;
extern "C" unsigned long _UNK_00567e34;
extern "C" unsigned long _UNK_00567e38;
extern "C" unsigned long _UNK_00567e3c;
extern "C" unsigned long _UNK_00567e40;
extern "C" unsigned long _UNK_00567e44;
extern "C" unsigned long _UNK_00567e48;
extern "C" unsigned long _UNK_00567e4c;
extern "C" unsigned long _UNK_00567e50;
extern "C" unsigned long _UNK_00567e54;
extern "C" unsigned long _UNK_00567e58;
extern "C" unsigned long _UNK_00567e5c;
extern "C" unsigned long _UNK_00567e60;
extern "C" unsigned long _UNK_00567e64;
extern "C" unsigned long _UNK_00567e68;
extern "C" unsigned long _UNK_00567e6c;
extern "C" unsigned long _UNK_00567e70;
extern "C" unsigned long _UNK_00567e74;
extern "C" unsigned long _UNK_00567e78;
extern "C" unsigned long _UNK_00567e7c;
extern "C" unsigned long _UNK_00567e80;
extern "C" unsigned long _UNK_00567e84;
extern "C" unsigned long _UNK_00567e88;
extern "C" unsigned long _UNK_00567e8c;
extern "C" unsigned long _UNK_00567e90;
extern "C" unsigned long _UNK_00567e94;
extern "C" unsigned long _UNK_00568198;
extern "C" unsigned long _UNK_0056819c;
extern "C" unsigned long _UNK_005681a0;
extern "C" unsigned long _UNK_005681a4;
extern "C" unsigned long _UNK_005681a8;
extern "C" unsigned long _UNK_005681ac;
extern "C" unsigned long _UNK_005681b0;
extern "C" unsigned long _UNK_005681b4;
extern "C" unsigned long _UNK_005681b8;
extern "C" unsigned long _UNK_005681bc;
extern "C" unsigned long _UNK_005681c0;
extern "C" unsigned long _UNK_005681c4;
extern "C" unsigned long _UNK_005681c8;
extern "C" unsigned long _UNK_005681cc;
extern "C" unsigned long _UNK_005681d0;
extern "C" unsigned long _UNK_005681d4;
extern "C" unsigned long _UNK_005681d8;
extern "C" unsigned long _UNK_005681dc;
extern "C" unsigned long _UNK_005681e0;
extern "C" unsigned long _UNK_005681e4;
extern "C" unsigned long _UNK_005681e8;
extern "C" unsigned long _UNK_005681ec;
extern "C" unsigned long _UNK_005681f0;
extern "C" unsigned long g_005673b4;
extern "C" unsigned long g_005673f8;
extern "C" unsigned long g_00567428;
extern "C" unsigned long g_0056742c;
extern "C" unsigned long g_0056743c;
extern "C" unsigned long g_00567440;
extern "C" unsigned long g_00567464;
extern "C" unsigned long g_00567468;
extern "C" unsigned long g_00567504;
extern "C" unsigned long g_00567508;
extern "C" unsigned long g_0056760a;
extern "C" unsigned long g_00567690;
extern "C" unsigned long g_0056777c;
extern "C" unsigned long g_00567864;
extern "C" unsigned long g_00567906;
extern "C" unsigned long g_00567926;
extern "C" unsigned long g_005679a2;
extern "C" unsigned long g_005679d6;
extern "C" unsigned long g_005679e8;
extern "C" unsigned long g_005679ec;
extern "C" unsigned long g_005679f0;
extern "C" unsigned long g_005679f4;
extern "C" unsigned long g_005679f8;
extern "C" unsigned long g_005679fc;
extern "C" unsigned long g_00567a00;
extern "C" unsigned long g_00567a04;
extern "C" unsigned long g_00567a08;
extern "C" unsigned long g_00567a0c;
extern "C" unsigned long g_00567a10;
extern "C" unsigned long g_00567a14;
extern "C" unsigned long g_00567a18;
extern "C" unsigned long g_00567a1c;
extern "C" unsigned long g_00567a20;
extern "C" unsigned long g_00567a24;
extern "C" unsigned long g_00567a28;
extern "C" unsigned long g_00567a2c;
extern "C" unsigned long g_00567a30;
extern "C" unsigned long g_00567aec;
extern "C" unsigned long g_00567b1c;
extern "C" unsigned long g_00567bec;
extern "C" unsigned long g_00567c6a;
extern "C" unsigned long g_00567c7c;
extern "C" unsigned long g_00567d10;
extern "C" unsigned long g_00567d1e;
extern "C" unsigned long g_00567dee;
extern "C" unsigned long g_00567e30;
extern "C" unsigned long g_00567e34;
extern "C" unsigned long g_00567e38;
extern "C" unsigned long g_00567e3c;
extern "C" unsigned long g_00567e40;
extern "C" unsigned long g_00567e44;
extern "C" unsigned long g_00567e48;
extern "C" unsigned long g_00567e4c;
extern "C" unsigned long g_00567e50;
extern "C" unsigned long g_00567e54;
extern "C" unsigned long g_00567e58;
extern "C" unsigned long g_00567e5c;
extern "C" unsigned long g_00567e60;
extern "C" unsigned long g_00567e64;
extern "C" unsigned long g_00567e68;
extern "C" unsigned long g_00567e6c;
extern "C" unsigned long g_00567e70;
extern "C" unsigned long g_00567e74;
extern "C" unsigned long g_00567e78;
extern "C" unsigned long g_00567e7c;
extern "C" unsigned long g_00567e80;
extern "C" unsigned long g_00567e84;
extern "C" unsigned long g_00567e88;
extern "C" unsigned long g_00567e8c;
extern "C" unsigned long g_00567e90;
extern "C" unsigned long g_00567e94;
extern "C" unsigned long g_00567ed6;
extern "C" unsigned long g_00567ee8;
extern "C" unsigned long g_00567f78;
extern "C" unsigned long g_00567f86;
extern "C" unsigned long g_00568058;
extern "C" unsigned long g_00568198;
extern "C" unsigned long g_0056819c;
extern "C" unsigned long g_005681a0;
extern "C" unsigned long g_005681a4;
extern "C" unsigned long g_005681a8;
extern "C" unsigned long g_005681ac;
extern "C" unsigned long g_005681b0;
extern "C" unsigned long g_005681b4;
extern "C" unsigned long g_005681b8;
extern "C" unsigned long g_005681bc;
extern "C" unsigned long g_005681c0;
extern "C" unsigned long g_005681c4;
extern "C" unsigned long g_005681c8;
extern "C" unsigned long g_005681cc;
extern "C" unsigned long g_005681d0;
extern "C" unsigned long g_005681d4;
extern "C" unsigned long g_005681d8;
extern "C" unsigned long g_005681dc;
extern "C" unsigned long g_005681e0;
extern "C" unsigned long g_005681e4;
extern "C" unsigned long g_005681e8;
extern "C" unsigned long g_005681ec;
extern "C" unsigned long g_005681f0;
BLHeroDetailView::~BLHeroDetailView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_005673b4 + g_00567428);
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
  func_0079e45c(&uStack_14,&g_005673f8 + g_0056742c,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLHeroDetailView::BLHeroDetailView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(g_00567504 + 0x5674ac);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLHeroDetailView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * BLHeroDetailView::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x128)));
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

undefined4 BLHeroDetailView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x108);
}

undefined4 BLHeroDetailView::getBackGround()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 BLHeroDetailView::getLabAre()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

undefined4 BLHeroDetailView::getBtnClose()
{
  return *(undefined4 *)(((int)this) + 0x118);
}

undefined4 BLHeroDetailView::getLabRank()
{
  return *(undefined4 *)(((int)this) + 0x11c);
}

undefined4 BLHeroDetailView::getLabeTitle()
{
  return *(undefined4 *)(((int)this) + 0x124);
}

undefined4 BLHeroDetailView::getLabForce()
{
  return *(undefined4 *)(((int)this) + 0x120);
}

void BLHeroDetailView::onExit()
{
  ((BLHeroDetailPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

void BLHeroDetailView::onEnter()
{
  ((BLHeroDetailPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
bool BLHeroDetailView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
