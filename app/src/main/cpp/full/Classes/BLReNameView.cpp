#include "BLReNameView.h"
#include "CCLayer.h"
#include "CCObject.h"
#include "CCEditBox.h"
#include "BLLeakUtils.h"
#include "BLReNamePresenter.h"
#include "PlatformHelp.h"
#include "Toast.h"
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
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_00633e00;
extern "C" unsigned long UNK_00633e18;
extern "C" unsigned long UNK_00633e30;
extern "C" unsigned long UNK_00633e40;
extern "C" unsigned long UNK_00633e8c;
extern "C" unsigned long UNK_00633ed0;
extern "C" unsigned long UNK_00633ee4;
extern "C" unsigned long UNK_00633f0c;
extern "C" unsigned long UNK_00633f20;
extern "C" unsigned long UNK_00633f6a;
extern "C" unsigned long UNK_00633f74;
extern "C" unsigned long UNK_00633f7e;
extern "C" unsigned long UNK_00633f8e;
extern "C" unsigned long UNK_00633f98;
extern "C" unsigned long UNK_00633fa2;
extern "C" unsigned long UNK_00633fcc;
extern "C" unsigned long UNK_0063417e;
extern "C" unsigned long UNK_00634272;
extern "C" unsigned long UNK_00634274;
extern "C" unsigned long UNK_00634344;
extern "C" unsigned long UNK_006343e0;
extern "C" unsigned long UNK_006344e0;
extern "C" unsigned long UNK_006344e4;
extern "C" unsigned long UNK_006345fc;
extern "C" unsigned long UNK_006346ee;
extern "C" unsigned long UNK_0063480c;
extern "C" unsigned long UNK_00634a42;
extern "C" unsigned long UNK_00634a7c;
extern "C" unsigned long UNK_00634aac;
extern "C" unsigned long UNK_00634be6;
extern "C" unsigned long UNK_00634be8;
extern "C" unsigned long _DAT_00634078;
extern "C" unsigned long _DAT_0063407c;
extern "C" unsigned long _UNK_00633e04;
extern "C" unsigned long _UNK_00633e1c;
extern "C" unsigned long _UNK_00633e34;
extern "C" unsigned long _UNK_00633ebc;
extern "C" unsigned long _UNK_00633ec0;
extern "C" unsigned long _UNK_00633ed4;
extern "C" unsigned long _UNK_00633ee8;
extern "C" unsigned long _UNK_00633f10;
extern "C" unsigned long _UNK_00633f24;
extern "C" unsigned long _UNK_00633fa8;
extern "C" unsigned long _UNK_00633fac;
extern "C" unsigned long _UNK_00633fb0;
extern "C" unsigned long _UNK_00633fb4;
extern "C" unsigned long _UNK_00633fb8;
extern "C" unsigned long _UNK_00633fbc;
extern "C" unsigned long _UNK_00633fd0;
extern "C" unsigned long _UNK_00634560;
extern "C" unsigned long _UNK_00634564;
extern "C" unsigned long _UNK_00634568;
extern "C" unsigned long _UNK_0063456c;
extern "C" unsigned long _UNK_00634570;
extern "C" unsigned long _UNK_00634574;
extern "C" unsigned long _UNK_00634578;
extern "C" unsigned long _UNK_0063457c;
extern "C" unsigned long _UNK_00634580;
extern "C" unsigned long _UNK_00634584;
extern "C" unsigned long _UNK_00634588;
extern "C" unsigned long _UNK_0063458c;
extern "C" unsigned long _UNK_00634590;
extern "C" unsigned long _UNK_00634594;
extern "C" unsigned long _UNK_00634598;
extern "C" unsigned long _UNK_0063459c;
extern "C" unsigned long _UNK_00634998;
extern "C" unsigned long _UNK_0063499c;
extern "C" unsigned long _UNK_006349a0;
extern "C" unsigned long _UNK_006349a4;
extern "C" unsigned long _UNK_006349a8;
extern "C" unsigned long _UNK_006349ac;
extern "C" unsigned long _UNK_006349b0;
extern "C" unsigned long _UNK_006349b4;
extern "C" unsigned long _UNK_006349b8;
extern "C" unsigned long _UNK_006349bc;
extern "C" unsigned long _UNK_006349c0;
extern "C" unsigned long _UNK_006349c4;
extern "C" unsigned long _UNK_006349c8;
extern "C" unsigned long _UNK_00634cfc;
extern "C" unsigned long _UNK_00634d00;
extern "C" unsigned long _UNK_00634d04;
extern "C" unsigned long _UNK_00634d08;
extern "C" unsigned long _UNK_00634d0c;
extern "C" unsigned long _UNK_00634d10;
extern "C" unsigned long _UNK_00634d14;
extern "C" unsigned long _UNK_00634d18;
extern "C" unsigned long _UNK_00634d1c;
extern "C" unsigned long _UNK_00634d20;
extern "C" unsigned long g_00633e00;
extern "C" unsigned long g_00633e04;
extern "C" unsigned long g_00633e18;
extern "C" unsigned long g_00633e1c;
extern "C" unsigned long g_00633e30;
extern "C" unsigned long g_00633e34;
extern "C" unsigned long g_00633e40;
extern "C" unsigned long g_00633e8c;
extern "C" unsigned long g_00633ebc;
extern "C" unsigned long g_00633ec0;
extern "C" unsigned long g_00633ed0;
extern "C" unsigned long g_00633ed4;
extern "C" unsigned long g_00633ee4;
extern "C" unsigned long g_00633ee8;
extern "C" unsigned long g_00633f0c;
extern "C" unsigned long g_00633f10;
extern "C" unsigned long g_00633f20;
extern "C" unsigned long g_00633f24;
extern "C" unsigned long g_00633f6a;
extern "C" unsigned long g_00633f74;
extern "C" unsigned long g_00633f7e;
extern "C" unsigned long g_00633f8e;
extern "C" unsigned long g_00633f98;
extern "C" unsigned long g_00633fa2;
extern "C" unsigned long g_00633fa8;
extern "C" unsigned long g_00633fac;
extern "C" unsigned long g_00633fb0;
extern "C" unsigned long g_00633fb4;
extern "C" unsigned long g_00633fb8;
extern "C" unsigned long g_00633fbc;
extern "C" unsigned long g_00633fcc;
extern "C" unsigned long g_00633fd0;
extern "C" unsigned long g_00634078;
extern "C" unsigned long g_0063407c;
extern "C" unsigned long g_0063417e;
extern "C" unsigned long g_00634272;
extern "C" unsigned long g_00634274;
extern "C" unsigned long g_00634344;
extern "C" unsigned long g_006343e0;
extern "C" unsigned long g_006344e0;
extern "C" unsigned long g_006344e4;
extern "C" unsigned long g_00634560;
extern "C" unsigned long g_00634564;
extern "C" unsigned long g_00634568;
extern "C" unsigned long g_0063456c;
extern "C" unsigned long g_00634570;
extern "C" unsigned long g_00634574;
extern "C" unsigned long g_00634578;
extern "C" unsigned long g_0063457c;
extern "C" unsigned long g_00634580;
extern "C" unsigned long g_00634584;
extern "C" unsigned long g_00634588;
extern "C" unsigned long g_0063458c;
extern "C" unsigned long g_00634590;
extern "C" unsigned long g_00634594;
extern "C" unsigned long g_00634598;
extern "C" unsigned long g_0063459c;
extern "C" unsigned long g_006345fc;
extern "C" unsigned long g_006346ee;
extern "C" unsigned long g_0063480c;
extern "C" unsigned long g_00634998;
extern "C" unsigned long g_0063499c;
extern "C" unsigned long g_006349a0;
extern "C" unsigned long g_006349a4;
extern "C" unsigned long g_006349a8;
extern "C" unsigned long g_006349ac;
extern "C" unsigned long g_006349b0;
extern "C" unsigned long g_006349b4;
extern "C" unsigned long g_006349b8;
extern "C" unsigned long g_006349bc;
extern "C" unsigned long g_006349c0;
extern "C" unsigned long g_006349c4;
extern "C" unsigned long g_006349c8;
extern "C" unsigned long g_00634a42;
extern "C" unsigned long g_00634a7c;
extern "C" unsigned long g_00634aac;
extern "C" unsigned long g_00634be6;
extern "C" unsigned long g_00634be8;
extern "C" unsigned long g_00634cfc;
extern "C" unsigned long g_00634d00;
extern "C" unsigned long g_00634d04;
extern "C" unsigned long g_00634d08;
extern "C" unsigned long g_00634d0c;
extern "C" unsigned long g_00634d10;
extern "C" unsigned long g_00634d14;
extern "C" unsigned long g_00634d18;
extern "C" unsigned long g_00634d1c;
extern "C" unsigned long g_00634d20;
void BLReNameView::editBoxEditingDidBegin(cocos2d::extension::CCEditBox* p1)
{
  return;
}

void BLReNameView::editBoxEditingDidEnd(cocos2d::extension::CCEditBox* p1)
{
  return;
}

void BLReNameView::editBoxReturn(cocos2d::extension::CCEditBox* p1)
{
  return;
}

BLReNameView::~BLReNameView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_00633e40 + g_00633ebc);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x218;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x248;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x254;
  *(int *)((int)this + 4*(0x42)) = iVar2 + 0x264;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  if (*(int *)((int)this + 4*(0x47)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x47)) = 0;
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00633e8c + g_00633ec0,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}


BLReNameView::BLReNameView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(g_00634078 + 0x634014);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x218;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x248;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x254;
  *(int *)((int)this + 4*(0x42)) = iVar2 + 0x264;
  *(int *)((int)this + 4*(0x43)) = 0;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLReNameView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * BLReNameView::create()
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

undefined4 BLReNameView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x11c);
}

undefined4 BLReNameView::getBtnOK()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

undefined4 BLReNameView::getBtnClose()
{
  return *(undefined4 *)(((int)this) + 0x118);
}

undefined4 BLReNameView::getSPBackGround()
{
  return *(undefined4 *)(((int)this) + 0x128);
}

undefined4 BLReNameView::getSPTabBg()
{
  return *(undefined4 *)(((int)this) + 0x124);
}

undefined4 BLReNameView::getSPZuanshi()
{
  return *(undefined4 *)(((int)this) + 0x120);
}

undefined4 BLReNameView::getSpName()
{
  return *(undefined4 *)(((int)this) + 300);
}

undefined4 BLReNameView::getLabTitle()
{
  return *(undefined4 *)(((int)this) + 0x130);
}

undefined4 BLReNameView::getLabBtnOK()
{
  return *(undefined4 *)(((int)this) + 0x134);
}

undefined4 BLReNameView::getLab_1()
{
  return *(undefined4 *)(((int)this) + 0x138);
}

undefined4 BLReNameView::getLab_2()
{
  return *(undefined4 *)(((int)this) + 0x13c);
}

undefined4 BLReNameView::getLab_3()
{
  return *(undefined4 *)(((int)this) + 0x140);
}

undefined4 BLReNameView::getEditName()
{
  return *(undefined4 *)(((int)this) + 0x144);
}

void BLReNameView::setTextDelegate(CEInputBoxDelegate* p1)
{
  *(undefined4 *)(((int)this) + 0x10c) = (undefined4)(intptr_t)p1;
  return;
}


void BLReNameView::onEnter()
{
  ((BLReNamePresenter *)*(undefined4 *)(((int)this) + 0x11c))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLReNameView::onExit()
{
  ((BLReNamePresenter *)*(undefined4 *)(((int)this) + 0x11c))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (2) =====
void BLReNameView::editBoxTextChanged(cocos2d::extension::CCEditBox* p1, std::string const& p2)
{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  iVar5 = 0;
  while( true ) {
    iVar1 = (undefined4)(intptr_t)(((cocos2d::extension::CCEditBox *)(*(undefined4 *)(((int)this) + 0x144)))->getText());
    if (*(char *)(iVar1 + iVar4) == '\0') break;
    iVar1 = (undefined4)(intptr_t)(((cocos2d::extension::CCEditBox *)(*(undefined4 *)(((int)this) + 0x144)))->getText());
    if (0x7f < *(byte *)(iVar1 + iVar4)) {
      iVar5 = (undefined4)(intptr_t)(iVar5 + 1);
      iVar4 = (undefined4)(intptr_t)(iVar4 + 2);
    }
    iVar4 = (undefined4)(intptr_t)(iVar4 + 1);
  }
  ((cocos2d::extension::CCEditBox *)(*(undefined4 *)(((int)this) + 0x144)))->getText();
  iVar1 = (undefined4)(intptr_t)(((PlatformHelp *)this)->isHaveSpecialCharacters((char const*)0));
  if (iVar1 == 0) {
    uVar2 = (undefined4)(((Toast *)this)->sharedToast());
    ((Toast *)(uVar2))->showToast((char const*)(unsigned char *)((char *)&g_00633f6a + (intptr_t)(g_00633fa8)));
    ((cocos2d::extension::CCEditBox *)(*(undefined4 *)(((int)this) + 0x144)))->setText((char const*)(unsigned char *)((char *)&g_00633f74 + (intptr_t)(g_00633fac)));
    uVar2 = (undefined4)(*(undefined4 *)(((int)this) + 0x144));
    puVar3 = (unsigned char *)((char *)&g_00633f7e + (intptr_t)(g_00633fb0));
  }
  else {
    if (iVar4 - iVar5 < 0xb) {
      return;
    }
    uVar2 = (undefined4)(((Toast *)this)->sharedToast());
    ((Toast *)(uVar2))->showToast((char const*)(unsigned char *)((char *)&g_00633f8e + (intptr_t)(g_00633fb4)));
    ((cocos2d::extension::CCEditBox *)(*(undefined4 *)(((int)this) + 0x144)))->setText((char const*)(unsigned char *)((char *)&g_00633f98 + (intptr_t)(g_00633fb8)));
    uVar2 = (undefined4)(*(undefined4 *)(((int)this) + 0x144));
    puVar3 = (unsigned char *)((char *)&g_00633fa2 + (intptr_t)(g_00633fbc));
  }
  ((cocos2d::extension::CCEditBox *)(uVar2))->setPlaceHolder((char const*)puVar3);
  return;
}

bool BLReNameView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
