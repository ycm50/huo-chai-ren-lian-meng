#include "BLFailedView.h"
#include "BLFailedPresenter.h"
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
extern "C" unsigned long UNK_00663fc4;
extern "C" unsigned long UNK_00664008;
extern "C" unsigned long UNK_0066404c;
extern "C" unsigned long UNK_00664074;
extern "C" unsigned long UNK_00664232;
extern "C" unsigned long UNK_00664318;
extern "C" unsigned long UNK_00664404;
extern "C" unsigned long UNK_006644b4;
extern "C" unsigned long UNK_006644e4;
extern "C" unsigned long UNK_006645bc;
extern "C" unsigned long UNK_006645f0;
extern "C" unsigned long UNK_00664700;
extern "C" unsigned long UNK_00664734;
extern "C" unsigned long UNK_0066480c;
extern "C" unsigned long UNK_00664836;
extern "C" unsigned long UNK_006648fe;
extern "C" unsigned long UNK_0066492c;
extern "C" unsigned long UNK_006649f6;
extern "C" unsigned long UNK_00664ad6;
extern "C" unsigned long UNK_00664aee;
extern "C" unsigned long UNK_00664b9c;
extern "C" unsigned long UNK_00664bc6;
extern "C" unsigned long UNK_00664c92;
extern "C" unsigned long UNK_00664cba;
extern "C" unsigned long UNK_00664d50;
extern "C" unsigned long UNK_00664d68;
extern "C" unsigned long UNK_00664e16;
extern "C" unsigned long UNK_00664e40;
extern "C" unsigned long UNK_00664f56;
extern "C" unsigned long UNK_00664f7e;
extern "C" unsigned long UNK_00665018;
extern "C" unsigned long UNK_00665030;
extern "C" unsigned long UNK_006650e4;
extern "C" unsigned long UNK_00665110;
extern "C" unsigned long UNK_006651dc;
extern "C" unsigned long UNK_00665204;
extern "C" unsigned long UNK_0066529a;
extern "C" unsigned long UNK_006652b2;
extern "C" unsigned long _DAT_00664114;
extern "C" unsigned long _DAT_00664118;
extern "C" unsigned long _UNK_00664038;
extern "C" unsigned long _UNK_0066403c;
extern "C" unsigned long _UNK_00664050;
extern "C" unsigned long _UNK_00664078;
extern "C" unsigned long _UNK_00664614;
extern "C" unsigned long _UNK_00664618;
extern "C" unsigned long _UNK_0066461c;
extern "C" unsigned long _UNK_00664620;
extern "C" unsigned long _UNK_00664624;
extern "C" unsigned long _UNK_00664628;
extern "C" unsigned long _UNK_0066462c;
extern "C" unsigned long _UNK_00664630;
extern "C" unsigned long _UNK_00664634;
extern "C" unsigned long _UNK_00664638;
extern "C" unsigned long _UNK_0066463c;
extern "C" unsigned long _UNK_00664640;
extern "C" unsigned long _UNK_00664644;
extern "C" unsigned long _UNK_00664648;
extern "C" unsigned long _UNK_0066464c;
extern "C" unsigned long _UNK_00664650;
extern "C" unsigned long _UNK_00664654;
extern "C" unsigned long _UNK_00664a6c;
extern "C" unsigned long _UNK_00664a70;
extern "C" unsigned long _UNK_00664a74;
extern "C" unsigned long _UNK_00664a78;
extern "C" unsigned long _UNK_00664a7c;
extern "C" unsigned long _UNK_00664a80;
extern "C" unsigned long _UNK_00664a84;
extern "C" unsigned long _UNK_00664a88;
extern "C" unsigned long _UNK_00664a8c;
extern "C" unsigned long _UNK_00664a90;
extern "C" unsigned long _UNK_00664a94;
extern "C" unsigned long _UNK_00664a98;
extern "C" unsigned long _UNK_00664a9c;
extern "C" unsigned long _UNK_00664aa0;
extern "C" unsigned long _UNK_00664aa4;
extern "C" unsigned long _UNK_00664aa8;
extern "C" unsigned long _UNK_00664aac;
extern "C" unsigned long _UNK_00664ab0;
extern "C" unsigned long _UNK_00664eb0;
extern "C" unsigned long _UNK_00664eb4;
extern "C" unsigned long _UNK_00664eb8;
extern "C" unsigned long _UNK_00664ebc;
extern "C" unsigned long _UNK_00664ec0;
extern "C" unsigned long _UNK_00664ec4;
extern "C" unsigned long _UNK_00664ec8;
extern "C" unsigned long _UNK_00664ecc;
extern "C" unsigned long _UNK_00664ed0;
extern "C" unsigned long _UNK_00664ed4;
extern "C" unsigned long _UNK_00664ed8;
extern "C" unsigned long _UNK_00664edc;
extern "C" unsigned long _UNK_00664ee0;
extern "C" unsigned long _UNK_00664ee4;
extern "C" unsigned long _UNK_00664ee8;
extern "C" unsigned long _UNK_00664eec;
extern "C" unsigned long _UNK_00664ef0;
extern "C" unsigned long _UNK_00664ef4;
extern "C" unsigned long _UNK_006652ec;
extern "C" unsigned long _UNK_006652f0;
extern "C" unsigned long _UNK_006652f4;
extern "C" unsigned long _UNK_006652f8;
extern "C" unsigned long _UNK_006652fc;
extern "C" unsigned long _UNK_00665300;
extern "C" unsigned long _UNK_00665304;
extern "C" unsigned long _UNK_00665308;
extern "C" unsigned long _UNK_0066530c;
extern "C" unsigned long _UNK_00665310;
extern "C" unsigned long _UNK_00665314;
extern "C" unsigned long _UNK_00665318;
extern "C" unsigned long _UNK_0066531c;
extern "C" unsigned long _UNK_00665320;
extern "C" unsigned long _UNK_00665324;
extern "C" unsigned long _UNK_00665328;
extern "C" unsigned long _UNK_0066532c;
extern "C" unsigned long _UNK_00665330;
extern "C" unsigned long _UNK_0066546c;
extern "C" unsigned long _UNK_00665470;
extern "C" unsigned long _UNK_00665474;
extern "C" unsigned long _UNK_00665478;
extern "C" unsigned long g_00663fc4;
extern "C" unsigned long g_00664008;
extern "C" unsigned long g_00664038;
extern "C" unsigned long g_0066403c;
extern "C" unsigned long g_0066404c;
extern "C" unsigned long g_00664050;
extern "C" unsigned long g_00664074;
extern "C" unsigned long g_00664078;
extern "C" unsigned long g_00664114;
extern "C" unsigned long g_00664118;
extern "C" unsigned long g_00664232;
extern "C" unsigned long g_00664318;
extern "C" unsigned long g_00664404;
extern "C" unsigned long g_006644b4;
extern "C" unsigned long g_006644e4;
extern "C" unsigned long g_006645bc;
extern "C" unsigned long g_006645f0;
extern "C" unsigned long g_00664614;
extern "C" unsigned long g_00664618;
extern "C" unsigned long g_0066461c;
extern "C" unsigned long g_00664620;
extern "C" unsigned long g_00664624;
extern "C" unsigned long g_00664628;
extern "C" unsigned long g_0066462c;
extern "C" unsigned long g_00664630;
extern "C" unsigned long g_00664634;
extern "C" unsigned long g_00664638;
extern "C" unsigned long g_0066463c;
extern "C" unsigned long g_00664640;
extern "C" unsigned long g_00664644;
extern "C" unsigned long g_00664648;
extern "C" unsigned long g_0066464c;
extern "C" unsigned long g_00664650;
extern "C" unsigned long g_00664654;
extern "C" unsigned long g_00664700;
extern "C" unsigned long g_00664734;
extern "C" unsigned long g_0066480c;
extern "C" unsigned long g_00664836;
extern "C" unsigned long g_006648fe;
extern "C" unsigned long g_0066492c;
extern "C" unsigned long g_006649f6;
extern "C" unsigned long g_00664a6c;
extern "C" unsigned long g_00664a70;
extern "C" unsigned long g_00664a74;
extern "C" unsigned long g_00664a78;
extern "C" unsigned long g_00664a7c;
extern "C" unsigned long g_00664a80;
extern "C" unsigned long g_00664a84;
extern "C" unsigned long g_00664a88;
extern "C" unsigned long g_00664a8c;
extern "C" unsigned long g_00664a90;
extern "C" unsigned long g_00664a94;
extern "C" unsigned long g_00664a98;
extern "C" unsigned long g_00664a9c;
extern "C" unsigned long g_00664aa0;
extern "C" unsigned long g_00664aa4;
extern "C" unsigned long g_00664aa8;
extern "C" unsigned long g_00664aac;
extern "C" unsigned long g_00664ab0;
extern "C" unsigned long g_00664ad6;
extern "C" unsigned long g_00664aee;
extern "C" unsigned long g_00664b9c;
extern "C" unsigned long g_00664bc6;
extern "C" unsigned long g_00664c92;
extern "C" unsigned long g_00664cba;
extern "C" unsigned long g_00664d50;
extern "C" unsigned long g_00664d68;
extern "C" unsigned long g_00664e16;
extern "C" unsigned long g_00664e40;
extern "C" unsigned long g_00664eb0;
extern "C" unsigned long g_00664eb4;
extern "C" unsigned long g_00664eb8;
extern "C" unsigned long g_00664ebc;
extern "C" unsigned long g_00664ec0;
extern "C" unsigned long g_00664ec4;
extern "C" unsigned long g_00664ec8;
extern "C" unsigned long g_00664ecc;
extern "C" unsigned long g_00664ed0;
extern "C" unsigned long g_00664ed4;
extern "C" unsigned long g_00664ed8;
extern "C" unsigned long g_00664edc;
extern "C" unsigned long g_00664ee0;
extern "C" unsigned long g_00664ee4;
extern "C" unsigned long g_00664ee8;
extern "C" unsigned long g_00664eec;
extern "C" unsigned long g_00664ef0;
extern "C" unsigned long g_00664ef4;
extern "C" unsigned long g_00664f56;
extern "C" unsigned long g_00664f7e;
extern "C" unsigned long g_00665018;
extern "C" unsigned long g_00665030;
extern "C" unsigned long g_006650e4;
extern "C" unsigned long g_00665110;
extern "C" unsigned long g_006651dc;
extern "C" unsigned long g_00665204;
extern "C" unsigned long g_0066529a;
extern "C" unsigned long g_006652b2;
extern "C" unsigned long g_006652ec;
extern "C" unsigned long g_006652f0;
extern "C" unsigned long g_006652f4;
extern "C" unsigned long g_006652f8;
extern "C" unsigned long g_006652fc;
extern "C" unsigned long g_00665300;
extern "C" unsigned long g_00665304;
extern "C" unsigned long g_00665308;
extern "C" unsigned long g_0066530c;
extern "C" unsigned long g_00665310;
extern "C" unsigned long g_00665314;
extern "C" unsigned long g_00665318;
extern "C" unsigned long g_0066531c;
extern "C" unsigned long g_00665320;
extern "C" unsigned long g_00665324;
extern "C" unsigned long g_00665328;
extern "C" unsigned long g_0066532c;
extern "C" unsigned long g_00665330;
extern "C" unsigned long g_0066546c;
extern "C" unsigned long g_00665470;
extern "C" unsigned long g_00665474;
extern "C" unsigned long g_00665478;
BLFailedView::~BLFailedView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_00663fc4 + g_00664038);
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
  func_0079e45c(&uStack_14,&g_00664008 + g_0066403c,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLFailedView::BLFailedView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(g_00664114 + 0x6640bc);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLFailedView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * BLFailedView::create()
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

undefined4 BLFailedView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x108);
}

undefined4 BLFailedView::getBackGround()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 BLFailedView::getSprBlackBG()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

undefined4 BLFailedView::getBtnQuit()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

undefined4 BLFailedView::getLabQuit()
{
  return *(undefined4 *)(((int)this) + 0x118);
}

undefined4 BLFailedView::getBtnRelife()
{
  return *(undefined4 *)(((int)this) + 0x11c);
}

undefined4 BLFailedView::getLabRelife()
{
  return *(undefined4 *)(((int)this) + 0x124);
}

undefined4 BLFailedView::getBtnGetHero()
{
  return *(undefined4 *)(((int)this) + 0x128);
}

undefined4 BLFailedView::getBtnEquip()
{
  return *(undefined4 *)(((int)this) + 0x130);
}

undefined4 BLFailedView::getBtnStreng()
{
  return *(undefined4 *)(((int)this) + 0x138);
}

undefined4 BLFailedView::getBtnSkill()
{
  return *(undefined4 *)(((int)this) + 0x140);
}

void BLFailedView::onEnter()
{
  ((BLFailedPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLFailedView::onExit()
{
  ((BLFailedPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
bool BLFailedView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
