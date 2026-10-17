#include "PKHeroDetailView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "PKHeroDetailPresenter.h"
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
extern "C" unsigned long UNK_006155e0;
extern "C" unsigned long UNK_00615624;
extern "C" unsigned long UNK_00615668;
extern "C" unsigned long UNK_00615690;
extern "C" unsigned long UNK_0061583a;
extern "C" unsigned long UNK_006158c0;
extern "C" unsigned long UNK_006159ac;
extern "C" unsigned long UNK_00615a94;
extern "C" unsigned long UNK_00615b36;
extern "C" unsigned long UNK_00615b56;
extern "C" unsigned long UNK_00615bd2;
extern "C" unsigned long UNK_00615c06;
extern "C" unsigned long UNK_00615d1c;
extern "C" unsigned long UNK_00615d4c;
extern "C" unsigned long UNK_00615e1c;
extern "C" unsigned long UNK_00615e9a;
extern "C" unsigned long UNK_00615eac;
extern "C" unsigned long UNK_00615f40;
extern "C" unsigned long UNK_00615f4e;
extern "C" unsigned long UNK_0061601e;
extern "C" unsigned long UNK_00616106;
extern "C" unsigned long UNK_00616118;
extern "C" unsigned long UNK_006161a8;
extern "C" unsigned long UNK_006161b6;
extern "C" unsigned long UNK_00616288;
extern "C" unsigned long _DAT_00615730;
extern "C" unsigned long _DAT_00615734;
extern "C" unsigned long _UNK_00615654;
extern "C" unsigned long _UNK_00615658;
extern "C" unsigned long _UNK_0061566c;
extern "C" unsigned long _UNK_00615694;
extern "C" unsigned long _UNK_00615c18;
extern "C" unsigned long _UNK_00615c1c;
extern "C" unsigned long _UNK_00615c20;
extern "C" unsigned long _UNK_00615c24;
extern "C" unsigned long _UNK_00615c28;
extern "C" unsigned long _UNK_00615c2c;
extern "C" unsigned long _UNK_00615c30;
extern "C" unsigned long _UNK_00615c34;
extern "C" unsigned long _UNK_00615c38;
extern "C" unsigned long _UNK_00615c3c;
extern "C" unsigned long _UNK_00615c40;
extern "C" unsigned long _UNK_00615c44;
extern "C" unsigned long _UNK_00615c48;
extern "C" unsigned long _UNK_00615c4c;
extern "C" unsigned long _UNK_00615c50;
extern "C" unsigned long _UNK_00615c54;
extern "C" unsigned long _UNK_00615c58;
extern "C" unsigned long _UNK_00615c5c;
extern "C" unsigned long _UNK_00615c60;
extern "C" unsigned long _UNK_00616060;
extern "C" unsigned long _UNK_00616064;
extern "C" unsigned long _UNK_00616068;
extern "C" unsigned long _UNK_0061606c;
extern "C" unsigned long _UNK_00616070;
extern "C" unsigned long _UNK_00616074;
extern "C" unsigned long _UNK_00616078;
extern "C" unsigned long _UNK_0061607c;
extern "C" unsigned long _UNK_00616080;
extern "C" unsigned long _UNK_00616084;
extern "C" unsigned long _UNK_00616088;
extern "C" unsigned long _UNK_0061608c;
extern "C" unsigned long _UNK_00616090;
extern "C" unsigned long _UNK_00616094;
extern "C" unsigned long _UNK_00616098;
extern "C" unsigned long _UNK_0061609c;
extern "C" unsigned long _UNK_006160a0;
extern "C" unsigned long _UNK_006160a4;
extern "C" unsigned long _UNK_006160a8;
extern "C" unsigned long _UNK_006160ac;
extern "C" unsigned long _UNK_006160b0;
extern "C" unsigned long _UNK_006160b4;
extern "C" unsigned long _UNK_006160b8;
extern "C" unsigned long _UNK_006160bc;
extern "C" unsigned long _UNK_006160c0;
extern "C" unsigned long _UNK_006160c4;
extern "C" unsigned long _UNK_006163c8;
extern "C" unsigned long _UNK_006163cc;
extern "C" unsigned long _UNK_006163d0;
extern "C" unsigned long _UNK_006163d4;
extern "C" unsigned long _UNK_006163d8;
extern "C" unsigned long _UNK_006163dc;
extern "C" unsigned long _UNK_006163e0;
extern "C" unsigned long _UNK_006163e4;
extern "C" unsigned long _UNK_006163e8;
extern "C" unsigned long _UNK_006163ec;
extern "C" unsigned long _UNK_006163f0;
extern "C" unsigned long _UNK_006163f4;
extern "C" unsigned long _UNK_006163f8;
extern "C" unsigned long _UNK_006163fc;
extern "C" unsigned long _UNK_00616400;
extern "C" unsigned long _UNK_00616404;
extern "C" unsigned long _UNK_00616408;
extern "C" unsigned long _UNK_0061640c;
extern "C" unsigned long _UNK_00616410;
extern "C" unsigned long _UNK_00616414;
extern "C" unsigned long _UNK_00616418;
extern "C" unsigned long _UNK_0061641c;
extern "C" unsigned long _UNK_00616420;
extern "C" unsigned long g_006155e0;
extern "C" unsigned long g_00615624;
extern "C" unsigned long g_00615654;
extern "C" unsigned long g_00615658;
extern "C" unsigned long g_00615668;
extern "C" unsigned long g_0061566c;
extern "C" unsigned long g_00615690;
extern "C" unsigned long g_00615694;
extern "C" unsigned long g_00615730;
extern "C" unsigned long g_00615734;
extern "C" unsigned long g_0061583a;
extern "C" unsigned long g_006158c0;
extern "C" unsigned long g_006159ac;
extern "C" unsigned long g_00615a94;
extern "C" unsigned long g_00615b36;
extern "C" unsigned long g_00615b56;
extern "C" unsigned long g_00615bd2;
extern "C" unsigned long g_00615c06;
extern "C" unsigned long g_00615c18;
extern "C" unsigned long g_00615c1c;
extern "C" unsigned long g_00615c20;
extern "C" unsigned long g_00615c24;
extern "C" unsigned long g_00615c28;
extern "C" unsigned long g_00615c2c;
extern "C" unsigned long g_00615c30;
extern "C" unsigned long g_00615c34;
extern "C" unsigned long g_00615c38;
extern "C" unsigned long g_00615c3c;
extern "C" unsigned long g_00615c40;
extern "C" unsigned long g_00615c44;
extern "C" unsigned long g_00615c48;
extern "C" unsigned long g_00615c4c;
extern "C" unsigned long g_00615c50;
extern "C" unsigned long g_00615c54;
extern "C" unsigned long g_00615c58;
extern "C" unsigned long g_00615c5c;
extern "C" unsigned long g_00615c60;
extern "C" unsigned long g_00615d1c;
extern "C" unsigned long g_00615d4c;
extern "C" unsigned long g_00615e1c;
extern "C" unsigned long g_00615e9a;
extern "C" unsigned long g_00615eac;
extern "C" unsigned long g_00615f40;
extern "C" unsigned long g_00615f4e;
extern "C" unsigned long g_0061601e;
extern "C" unsigned long g_00616060;
extern "C" unsigned long g_00616064;
extern "C" unsigned long g_00616068;
extern "C" unsigned long g_0061606c;
extern "C" unsigned long g_00616070;
extern "C" unsigned long g_00616074;
extern "C" unsigned long g_00616078;
extern "C" unsigned long g_0061607c;
extern "C" unsigned long g_00616080;
extern "C" unsigned long g_00616084;
extern "C" unsigned long g_00616088;
extern "C" unsigned long g_0061608c;
extern "C" unsigned long g_00616090;
extern "C" unsigned long g_00616094;
extern "C" unsigned long g_00616098;
extern "C" unsigned long g_0061609c;
extern "C" unsigned long g_006160a0;
extern "C" unsigned long g_006160a4;
extern "C" unsigned long g_006160a8;
extern "C" unsigned long g_006160ac;
extern "C" unsigned long g_006160b0;
extern "C" unsigned long g_006160b4;
extern "C" unsigned long g_006160b8;
extern "C" unsigned long g_006160bc;
extern "C" unsigned long g_006160c0;
extern "C" unsigned long g_006160c4;
extern "C" unsigned long g_00616106;
extern "C" unsigned long g_00616118;
extern "C" unsigned long g_006161a8;
extern "C" unsigned long g_006161b6;
extern "C" unsigned long g_00616288;
extern "C" unsigned long g_006163c8;
extern "C" unsigned long g_006163cc;
extern "C" unsigned long g_006163d0;
extern "C" unsigned long g_006163d4;
extern "C" unsigned long g_006163d8;
extern "C" unsigned long g_006163dc;
extern "C" unsigned long g_006163e0;
extern "C" unsigned long g_006163e4;
extern "C" unsigned long g_006163e8;
extern "C" unsigned long g_006163ec;
extern "C" unsigned long g_006163f0;
extern "C" unsigned long g_006163f4;
extern "C" unsigned long g_006163f8;
extern "C" unsigned long g_006163fc;
extern "C" unsigned long g_00616400;
extern "C" unsigned long g_00616404;
extern "C" unsigned long g_00616408;
extern "C" unsigned long g_0061640c;
extern "C" unsigned long g_00616410;
extern "C" unsigned long g_00616414;
extern "C" unsigned long g_00616418;
extern "C" unsigned long g_0061641c;
extern "C" unsigned long g_00616420;
PKHeroDetailView::~PKHeroDetailView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_006155e0 + g_00615654);
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
  func_0079e45c(&uStack_14,&g_00615624 + g_00615658,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

PKHeroDetailView::PKHeroDetailView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(g_00615730 + 0x6156d8);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"PKHeroDetailView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * PKHeroDetailView::create()
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

undefined4 PKHeroDetailView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x108);
}

undefined4 PKHeroDetailView::getBackGround()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 PKHeroDetailView::getLabAre()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

undefined4 PKHeroDetailView::getBtnClose()
{
  return *(undefined4 *)(((int)this) + 0x118);
}

undefined4 PKHeroDetailView::getLabRank()
{
  return *(undefined4 *)(((int)this) + 0x11c);
}

undefined4 PKHeroDetailView::getLabeTitle()
{
  return *(undefined4 *)(((int)this) + 0x124);
}

undefined4 PKHeroDetailView::getLabForce()
{
  return *(undefined4 *)(((int)this) + 0x120);
}

void PKHeroDetailView::onExit()
{
  ((PKHeroDetailPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

void PKHeroDetailView::onEnter()
{
  ((PKHeroDetailPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
bool PKHeroDetailView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
