#include "BLMineCollectHeroView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLMineCollectHeroPresenter.h"
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
extern "C" long long func_005af8c0(...);
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_005ae738;
extern "C" unsigned long UNK_005ae77c;
extern "C" unsigned long UNK_005ae7c0;
extern "C" unsigned long UNK_005ae7e8;
extern "C" unsigned long UNK_005ae9e0;
extern "C" unsigned long UNK_005aeaca;
extern "C" unsigned long UNK_005aeb7e;
extern "C" unsigned long UNK_005aebac;
extern "C" unsigned long UNK_005aec90;
extern "C" unsigned long UNK_005aecba;
extern "C" unsigned long UNK_005aeeea;
extern "C" unsigned long UNK_005aefd2;
extern "C" unsigned long UNK_005aeffe;
extern "C" unsigned long UNK_005af0c2;
extern "C" unsigned long UNK_005af0f0;
extern "C" unsigned long UNK_005af1c0;
extern "C" unsigned long UNK_005af1ec;
extern "C" unsigned long UNK_005af2fe;
extern "C" unsigned long UNK_005af32c;
extern "C" unsigned long UNK_005af3fc;
extern "C" unsigned long UNK_005af428;
extern "C" unsigned long UNK_005af4f0;
extern "C" unsigned long UNK_005af51e;
extern "C" unsigned long UNK_005af5f2;
extern "C" unsigned long UNK_005af61e;
extern "C" unsigned long UNK_005af728;
extern "C" unsigned long UNK_005af754;
extern "C" unsigned long _DAT_005ae888;
extern "C" unsigned long _DAT_005ae88c;
extern "C" unsigned long _UNK_005ae7ac;
extern "C" unsigned long _UNK_005ae7b0;
extern "C" unsigned long _UNK_005ae7c4;
extern "C" unsigned long _UNK_005ae7ec;
extern "C" unsigned long _UNK_005aedb0;
extern "C" unsigned long _UNK_005aedb4;
extern "C" unsigned long _UNK_005aedb8;
extern "C" unsigned long _UNK_005aedbc;
extern "C" unsigned long _UNK_005aedc0;
extern "C" unsigned long _UNK_005aedc4;
extern "C" unsigned long _UNK_005aedc8;
extern "C" unsigned long _UNK_005aedcc;
extern "C" unsigned long _UNK_005aedd0;
extern "C" unsigned long _UNK_005aedd4;
extern "C" unsigned long _UNK_005aedd8;
extern "C" unsigned long _UNK_005aeddc;
extern "C" unsigned long _UNK_005aede0;
extern "C" unsigned long _UNK_005aede4;
extern "C" unsigned long _UNK_005af210;
extern "C" unsigned long _UNK_005af214;
extern "C" unsigned long _UNK_005af218;
extern "C" unsigned long _UNK_005af21c;
extern "C" unsigned long _UNK_005af220;
extern "C" unsigned long _UNK_005af224;
extern "C" unsigned long _UNK_005af228;
extern "C" unsigned long _UNK_005af22c;
extern "C" unsigned long _UNK_005af230;
extern "C" unsigned long _UNK_005af234;
extern "C" unsigned long _UNK_005af238;
extern "C" unsigned long _UNK_005af23c;
extern "C" unsigned long _UNK_005af240;
extern "C" unsigned long _UNK_005af244;
extern "C" unsigned long _UNK_005af248;
extern "C" unsigned long _UNK_005af24c;
extern "C" unsigned long _UNK_005af250;
extern "C" unsigned long _UNK_005af254;
extern "C" unsigned long _UNK_005af668;
extern "C" unsigned long _UNK_005af66c;
extern "C" unsigned long _UNK_005af670;
extern "C" unsigned long _UNK_005af674;
extern "C" unsigned long _UNK_005af678;
extern "C" unsigned long _UNK_005af67c;
extern "C" unsigned long _UNK_005af680;
extern "C" unsigned long _UNK_005af684;
extern "C" unsigned long _UNK_005af688;
extern "C" unsigned long _UNK_005af68c;
extern "C" unsigned long _UNK_005af690;
extern "C" unsigned long _UNK_005af694;
extern "C" unsigned long _UNK_005af698;
extern "C" unsigned long _UNK_005af69c;
extern "C" unsigned long _UNK_005af6a0;
extern "C" unsigned long _UNK_005af6a4;
extern "C" unsigned long _UNK_005af8d0;
extern "C" unsigned long _UNK_005af8d4;
extern "C" unsigned long _UNK_005af8d8;
extern "C" unsigned long _UNK_005af8dc;
extern "C" unsigned long _UNK_005af8e0;
extern "C" unsigned long _UNK_005af8e4;
extern "C" unsigned long _UNK_005af8e8;
extern "C" unsigned long _UNK_005af8ec;
extern "C" unsigned long g_005ae738;
extern "C" unsigned long g_005ae77c;
extern "C" unsigned long g_005ae7ac;
extern "C" unsigned long g_005ae7b0;
extern "C" unsigned long g_005ae7c0;
extern "C" unsigned long g_005ae7c4;
extern "C" unsigned long g_005ae7e8;
extern "C" unsigned long g_005ae7ec;
extern "C" unsigned long g_005ae888;
extern "C" unsigned long g_005ae88c;
extern "C" unsigned long g_005ae9e0;
extern "C" unsigned long g_005aeaca;
extern "C" unsigned long g_005aeb7e;
extern "C" unsigned long g_005aebac;
extern "C" unsigned long g_005aec90;
extern "C" unsigned long g_005aecba;
extern "C" unsigned long g_005aedb0;
extern "C" unsigned long g_005aedb4;
extern "C" unsigned long g_005aedb8;
extern "C" unsigned long g_005aedbc;
extern "C" unsigned long g_005aedc0;
extern "C" unsigned long g_005aedc4;
extern "C" unsigned long g_005aedc8;
extern "C" unsigned long g_005aedcc;
extern "C" unsigned long g_005aedd0;
extern "C" unsigned long g_005aedd4;
extern "C" unsigned long g_005aedd8;
extern "C" unsigned long g_005aeddc;
extern "C" unsigned long g_005aede0;
extern "C" unsigned long g_005aede4;
extern "C" unsigned long g_005aeeea;
extern "C" unsigned long g_005aefd2;
extern "C" unsigned long g_005aeffe;
extern "C" unsigned long g_005af0c2;
extern "C" unsigned long g_005af0f0;
extern "C" unsigned long g_005af1c0;
extern "C" unsigned long g_005af1ec;
extern "C" unsigned long g_005af210;
extern "C" unsigned long g_005af214;
extern "C" unsigned long g_005af218;
extern "C" unsigned long g_005af21c;
extern "C" unsigned long g_005af220;
extern "C" unsigned long g_005af224;
extern "C" unsigned long g_005af228;
extern "C" unsigned long g_005af22c;
extern "C" unsigned long g_005af230;
extern "C" unsigned long g_005af234;
extern "C" unsigned long g_005af238;
extern "C" unsigned long g_005af23c;
extern "C" unsigned long g_005af240;
extern "C" unsigned long g_005af244;
extern "C" unsigned long g_005af248;
extern "C" unsigned long g_005af24c;
extern "C" unsigned long g_005af250;
extern "C" unsigned long g_005af254;
extern "C" unsigned long g_005af2fe;
extern "C" unsigned long g_005af32c;
extern "C" unsigned long g_005af3fc;
extern "C" unsigned long g_005af428;
extern "C" unsigned long g_005af4f0;
extern "C" unsigned long g_005af51e;
extern "C" unsigned long g_005af5f2;
extern "C" unsigned long g_005af61e;
extern "C" unsigned long g_005af668;
extern "C" unsigned long g_005af66c;
extern "C" unsigned long g_005af670;
extern "C" unsigned long g_005af674;
extern "C" unsigned long g_005af678;
extern "C" unsigned long g_005af67c;
extern "C" unsigned long g_005af680;
extern "C" unsigned long g_005af684;
extern "C" unsigned long g_005af688;
extern "C" unsigned long g_005af68c;
extern "C" unsigned long g_005af690;
extern "C" unsigned long g_005af694;
extern "C" unsigned long g_005af698;
extern "C" unsigned long g_005af69c;
extern "C" unsigned long g_005af6a0;
extern "C" unsigned long g_005af6a4;
extern "C" unsigned long g_005af728;
extern "C" unsigned long g_005af754;
extern "C" unsigned long g_005af8d0;
extern "C" unsigned long g_005af8d4;
extern "C" unsigned long g_005af8d8;
extern "C" unsigned long g_005af8dc;
extern "C" unsigned long g_005af8e0;
extern "C" unsigned long g_005af8e4;
extern "C" unsigned long g_005af8e8;
extern "C" unsigned long g_005af8ec;
BLMineCollectHeroView::~BLMineCollectHeroView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_005ae738 + g_005ae7ac);
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
  func_0079e45c(&uStack_14,&g_005ae77c + g_005ae7b0,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLMineCollectHeroView::BLMineCollectHeroView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(g_005ae888 + 0x5ae830);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLMineCollectHeroView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * BLMineCollectHeroView::create()
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

undefined4 BLMineCollectHeroView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x108);
}

undefined4 BLMineCollectHeroView::getbtnRight()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

undefined4 BLMineCollectHeroView::getBtnLeft()
{
  return *(undefined4 *)(((int)this) + 0x118);
}

undefined4 BLMineCollectHeroView::getTableViewRoles()
{
  return *(undefined4 *)(((int)this) + 0x11c);
}

undefined4 BLMineCollectHeroView::getTabBg()
{
  return *(undefined4 *)(((int)this) + 0x120);
}

undefined4 BLMineCollectHeroView::getLabTitle()
{
  return *(undefined4 *)(((int)this) + 0x124);
}

undefined4 BLMineCollectHeroView::getBtnClose()
{
  return *(undefined4 *)(((int)this) + 0x128);
}

undefined4 BLMineCollectHeroView::getLabRoleLimit()
{
  return *(undefined4 *)(((int)this) + 300);
}

undefined4 BLMineCollectHeroView::getBtnCancle()
{
  return *(undefined4 *)(((int)this) + 0x130);
}

undefined4 BLMineCollectHeroView::getLabCancle()
{
  return *(undefined4 *)(((int)this) + 0x134);
}

undefined4 BLMineCollectHeroView::getBtnSure()
{
  return *(undefined4 *)(((int)this) + 0x138);
}

undefined4 BLMineCollectHeroView::getLabSure()
{
  return *(undefined4 *)(((int)this) + 0x13c);
}

undefined4 BLMineCollectHeroView::getLabPlayTitle()
{
  return *(undefined4 *)(((int)this) + 0x140);
}

void BLMineCollectHeroView::onEnter()
{
  ((BLMineCollectHeroPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLMineCollectHeroView::onExit()
{
  ((BLMineCollectHeroPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
bool BLMineCollectHeroView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
