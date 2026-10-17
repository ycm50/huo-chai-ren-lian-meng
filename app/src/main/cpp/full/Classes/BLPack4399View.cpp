#include "BLPack4399View.h"
#include "CCLayer.h"
#include "CCObject.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLPack4399Presenter.h"
#include "BLRichText.h"
#include "PlatformHelp.h"
#include "RichTextData.h"
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
extern "C" long long func_0079e2dc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e57c(...);
extern "C" long long ghidra_CONCAT13(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_00556a84;
extern "C" unsigned long UNK_00556ac8;
extern "C" unsigned long UNK_00556b0c;
extern "C" unsigned long UNK_00556b34;
extern "C" unsigned long UNK_00556c76;
extern "C" unsigned long UNK_00556c80;
extern "C" unsigned long UNK_00556d20;
extern "C" unsigned long UNK_00556d88;
extern "C" unsigned long UNK_00556e1a;
extern "C" unsigned long UNK_00556e1e;
extern "C" unsigned long UNK_00556e4a;
extern "C" unsigned long UNK_00556ea2;
extern "C" unsigned long UNK_00556ed6;
extern "C" unsigned long UNK_00556f8c;
extern "C" unsigned long UNK_00556fd6;
extern "C" unsigned long UNK_00557040;
extern "C" unsigned long UNK_0055706c;
extern "C" unsigned long UNK_0055708a;
extern "C" unsigned long UNK_0055713a;
extern "C" unsigned long UNK_0055719e;
extern "C" unsigned long UNK_005571a2;
extern "C" unsigned long UNK_005571ce;
extern "C" unsigned long UNK_005571e8;
extern "C" unsigned long UNK_0055722c;
extern "C" unsigned long UNK_0055725e;
extern "C" unsigned long UNK_005572aa;
extern "C" unsigned long UNK_005572d2;
extern "C" unsigned long UNK_00557342;
extern "C" unsigned long UNK_0055735c;
extern "C" unsigned long UNK_0055737e;
extern "C" unsigned long UNK_005573ae;
extern "C" unsigned long UNK_0055756a;
extern "C" unsigned long _DAT_00556be8;
extern "C" unsigned long _DAT_00556bec;
extern "C" unsigned long _UNK_00556af8;
extern "C" unsigned long _UNK_00556afc;
extern "C" unsigned long _UNK_00556b10;
extern "C" unsigned long _UNK_00556b38;
extern "C" unsigned long _UNK_00556c9c;
extern "C" unsigned long _UNK_00556ca0;
extern "C" unsigned long _UNK_005570c0;
extern "C" unsigned long _UNK_005570c4;
extern "C" unsigned long _UNK_005570c8;
extern "C" unsigned long _UNK_005570cc;
extern "C" unsigned long _UNK_005570d0;
extern "C" unsigned long _UNK_005570d4;
extern "C" unsigned long _UNK_005570d8;
extern "C" unsigned long _UNK_005570dc;
extern "C" unsigned long _UNK_005570e0;
extern "C" unsigned long _UNK_005570e4;
extern "C" unsigned long _UNK_005570e8;
extern "C" unsigned long _UNK_005570ec;
extern "C" unsigned long _UNK_005570f0;
extern "C" unsigned long _UNK_005570f4;
extern "C" unsigned long _UNK_005570f8;
extern "C" unsigned long _UNK_005570fc;
extern "C" unsigned long _UNK_00557100;
extern "C" unsigned long _UNK_00557104;
extern "C" unsigned long _UNK_00557108;
extern "C" unsigned long _UNK_0055710c;
extern "C" unsigned long _UNK_00557110;
extern "C" unsigned long _UNK_00557114;
extern "C" unsigned long _UNK_00557464;
extern "C" unsigned long _UNK_00557468;
extern "C" unsigned long _UNK_0055746c;
extern "C" unsigned long _UNK_00557470;
extern "C" unsigned long _UNK_00557474;
extern "C" unsigned long _UNK_00557478;
extern "C" unsigned long _UNK_0055747c;
extern "C" unsigned long _UNK_00557480;
extern "C" unsigned long _UNK_00557484;
extern "C" unsigned long _UNK_00557488;
extern "C" unsigned long _UNK_0055748c;
extern "C" unsigned long _UNK_00557490;
extern "C" unsigned long _UNK_00557494;
extern "C" unsigned long _UNK_00557498;
extern "C" unsigned long _UNK_0055749c;
extern "C" unsigned long _UNK_005574a0;
extern "C" unsigned long _UNK_005574a4;
extern "C" unsigned long _UNK_005574a8;
extern "C" unsigned long _UNK_005574ac;
extern "C" unsigned long _UNK_005574b0;
extern "C" unsigned long _UNK_005574b4;
extern "C" unsigned long _UNK_005574b8;
extern "C" unsigned long _UNK_005574bc;
extern "C" unsigned long _UNK_005574c0;
extern "C" unsigned long _UNK_005574c4;
extern "C" unsigned long _UNK_005574c8;
extern "C" unsigned long _UNK_005575f0;
extern "C" unsigned long _UNK_005575f4;
extern "C" unsigned long _UNK_005575f8;
extern "C" unsigned long _UNK_005575fc;
extern "C" unsigned long _UNK_00557600;
extern "C" unsigned long _UNK_00557604;
extern "C" unsigned long g_00556a84;
extern "C" unsigned long g_00556ac8;
extern "C" unsigned long g_00556af8;
extern "C" unsigned long g_00556afc;
extern "C" unsigned long g_00556b0c;
extern "C" unsigned long g_00556b10;
extern "C" unsigned long g_00556b34;
extern "C" unsigned long g_00556b38;
extern "C" unsigned long g_00556be8;
extern "C" unsigned long g_00556bec;
extern "C" unsigned long g_00556c76;
extern "C" unsigned long g_00556c80;
extern "C" unsigned long g_00556c9c;
extern "C" unsigned long g_00556ca0;
extern "C" unsigned long g_00556d20;
extern "C" unsigned long g_00556d88;
extern "C" unsigned long g_00556e1a;
extern "C" unsigned long g_00556e1e;
extern "C" unsigned long g_00556e4a;
extern "C" unsigned long g_00556ea2;
extern "C" unsigned long g_00556ed6;
extern "C" unsigned long g_00556f8c;
extern "C" unsigned long g_00556fd6;
extern "C" unsigned long g_00557040;
extern "C" unsigned long g_0055706c;
extern "C" unsigned long g_0055708a;
extern "C" unsigned long g_005570c0;
extern "C" unsigned long g_005570c4;
extern "C" unsigned long g_005570c8;
extern "C" unsigned long g_005570cc;
extern "C" unsigned long g_005570d0;
extern "C" unsigned long g_005570d4;
extern "C" unsigned long g_005570d8;
extern "C" unsigned long g_005570dc;
extern "C" unsigned long g_005570e0;
extern "C" unsigned long g_005570e4;
extern "C" unsigned long g_005570e8;
extern "C" unsigned long g_005570ec;
extern "C" unsigned long g_005570f0;
extern "C" unsigned long g_005570f4;
extern "C" unsigned long g_005570f8;
extern "C" unsigned long g_005570fc;
extern "C" unsigned long g_00557100;
extern "C" unsigned long g_00557104;
extern "C" unsigned long g_00557108;
extern "C" unsigned long g_0055710c;
extern "C" unsigned long g_00557110;
extern "C" unsigned long g_00557114;
extern "C" unsigned long g_0055713a;
extern "C" unsigned long g_0055719e;
extern "C" unsigned long g_005571a2;
extern "C" unsigned long g_005571ce;
extern "C" unsigned long g_005571e8;
extern "C" unsigned long g_0055722c;
extern "C" unsigned long g_0055725e;
extern "C" unsigned long g_005572aa;
extern "C" unsigned long g_005572d2;
extern "C" unsigned long g_00557342;
extern "C" unsigned long g_0055735c;
extern "C" unsigned long g_0055737e;
extern "C" unsigned long g_005573ae;
extern "C" unsigned long g_00557464;
extern "C" unsigned long g_00557468;
extern "C" unsigned long g_0055746c;
extern "C" unsigned long g_00557470;
extern "C" unsigned long g_00557474;
extern "C" unsigned long g_00557478;
extern "C" unsigned long g_0055747c;
extern "C" unsigned long g_00557480;
extern "C" unsigned long g_00557484;
extern "C" unsigned long g_00557488;
extern "C" unsigned long g_0055748c;
extern "C" unsigned long g_00557490;
extern "C" unsigned long g_00557494;
extern "C" unsigned long g_00557498;
extern "C" unsigned long g_0055749c;
extern "C" unsigned long g_005574a0;
extern "C" unsigned long g_005574a4;
extern "C" unsigned long g_005574a8;
extern "C" unsigned long g_005574ac;
extern "C" unsigned long g_005574b0;
extern "C" unsigned long g_005574b4;
extern "C" unsigned long g_005574b8;
extern "C" unsigned long g_005574bc;
extern "C" unsigned long g_005574c0;
extern "C" unsigned long g_005574c4;
extern "C" unsigned long g_005574c8;
extern "C" unsigned long g_0055756a;
extern "C" unsigned long g_005575f0;
extern "C" unsigned long g_005575f4;
extern "C" unsigned long g_005575f8;
extern "C" unsigned long g_005575fc;
extern "C" unsigned long g_00557600;
extern "C" unsigned long g_00557604;
BLPack4399View::~BLPack4399View()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_00556a84 + g_00556af8);
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
  func_0079e45c(&uStack_14,&g_00556ac8 + g_00556afc,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLPack4399View::BLPack4399View()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(g_00556be8 + 0x556b7c);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  *(int *)((int)this + 4*(0x42)) = 0;
  *(int *)((int)this + 4*(0x43)) = 0;
  *(int *)((int)this + 4*(0x44)) = 0;
  *(int *)((int)this + 4*(0x45)) = 0;
  *(int *)((int)this + 4*(0x46)) = 0;
  *(int *)((int)this + 4*(0x47)) = 0;
  *(int *)((int)this + 4*(0x48)) = 0;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLPack4399View"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * BLPack4399View::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x124)));
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

undefined4 BLPack4399View::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x108);
}


void BLPack4399View::onEnter()
{
  ((cocos2d::CCLayer *)this)->onEnter();
  ((BLPack4399Presenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  return;
}

void BLPack4399View::onExit()
{
  ((cocos2d::CCLayer *)this)->onExit();
  ((BLPack4399Presenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (2) =====
void BLPack4399View::onLinkClicked(cocos2d::CCObject* p1)
{
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_10 = (undefined4)((int *)((int)this));
  uStack_c = (undefined4)(p1);
  cocos2d::CCLog((char const*)(unsigned char *)((char *)&g_00556c76 + (intptr_t)(g_00556c9c)));
  func_0079e45c(&uStack_c,(unsigned char *)((char *)&g_00556c80 + (intptr_t)(g_00556ca0)),&uStack_10);
  ((PlatformHelp *)this)->opensumbiturl(*(std::string const*)&uStack_c);
  func_0079e2bc(&uStack_c);
  return;
}

bool BLPack4399View::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
