#include "BLMainAccountChangeView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLMainAccountChangePresenter.h"
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
extern "C" long long func_0079e3bc(...);
extern "C" long long func_0079e41c(...);
extern "C" long long func_0079e42c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long func_0079e59c(...);
extern "C" long long ghidra_CONCAT13(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0058f09c;
extern "C" unsigned long UNK_0058f0f6;
extern "C" unsigned long UNK_0058f13c;
extern "C" unsigned long UNK_0058f150;
extern "C" unsigned long UNK_0058f178;
extern "C" unsigned long UNK_0058f18c;
extern "C" unsigned long UNK_0058f1dc;
extern "C" unsigned long UNK_0058f1f6;
extern "C" unsigned long UNK_0058f248;
extern "C" unsigned long UNK_0058f4c2;
extern "C" unsigned long UNK_0058f5a8;
extern "C" unsigned long UNK_0058f696;
extern "C" unsigned long UNK_0058f6be;
extern "C" unsigned long UNK_0058f788;
extern "C" unsigned long UNK_0058f7be;
extern "C" unsigned long UNK_0058f896;
extern "C" unsigned long UNK_0058f908;
extern "C" unsigned long UNK_0058f9b2;
extern "C" unsigned long UNK_0058fa4c;
extern "C" unsigned long UNK_0058fa74;
extern "C" unsigned long UNK_0058fa80;
extern "C" unsigned long UNK_0058fab8;
extern "C" unsigned long UNK_0058fada;
extern "C" unsigned long UNK_0058fb4a;
extern "C" unsigned long UNK_0058fbbc;
extern "C" unsigned long UNK_0058fc66;
extern "C" unsigned long UNK_0058fd46;
extern "C" unsigned long UNK_0058fd66;
extern "C" unsigned long UNK_0058fd68;
extern "C" unsigned long UNK_0058fe00;
extern "C" unsigned long UNK_0058fe2a;
extern "C" unsigned long UNK_0058fed4;
extern "C" unsigned long UNK_0058fffa;
extern "C" unsigned long UNK_0059001a;
extern "C" unsigned long UNK_0059001c;
extern "C" unsigned long UNK_005900bc;
extern "C" unsigned long UNK_005900e6;
extern "C" unsigned long UNK_005901ac;
extern "C" unsigned long UNK_005901da;
extern "C" unsigned long _DAT_0058f308;
extern "C" unsigned long _DAT_0058f30c;
extern "C" unsigned long _UNK_0058f128;
extern "C" unsigned long _UNK_0058f12c;
extern "C" unsigned long _UNK_0058f140;
extern "C" unsigned long _UNK_0058f154;
extern "C" unsigned long _UNK_0058f17c;
extern "C" unsigned long _UNK_0058f190;
extern "C" unsigned long _UNK_0058f234;
extern "C" unsigned long _UNK_0058f238;
extern "C" unsigned long _UNK_0058f24c;
extern "C" unsigned long _UNK_0058f8a4;
extern "C" unsigned long _UNK_0058f8a8;
extern "C" unsigned long _UNK_0058f8ac;
extern "C" unsigned long _UNK_0058f8b0;
extern "C" unsigned long _UNK_0058f8b4;
extern "C" unsigned long _UNK_0058f8b8;
extern "C" unsigned long _UNK_0058f8bc;
extern "C" unsigned long _UNK_0058f8c0;
extern "C" unsigned long _UNK_0058f8c4;
extern "C" unsigned long _UNK_0058f8c8;
extern "C" unsigned long _UNK_0058f8cc;
extern "C" unsigned long _UNK_0058f8d0;
extern "C" unsigned long _UNK_0058f8d4;
extern "C" unsigned long _UNK_0058f8d8;
extern "C" unsigned long _UNK_0058f8dc;
extern "C" unsigned long _UNK_0058fb64;
extern "C" unsigned long _UNK_0058fb68;
extern "C" unsigned long _UNK_0058fb6c;
extern "C" unsigned long _UNK_0058fb70;
extern "C" unsigned long _UNK_0058fb74;
extern "C" unsigned long _UNK_0058fb78;
extern "C" unsigned long _UNK_0058fb7c;
extern "C" unsigned long _UNK_0058fb80;
extern "C" unsigned long _UNK_0058fb84;
extern "C" unsigned long _UNK_0058fb88;
extern "C" unsigned long _UNK_0058fb8c;
extern "C" unsigned long _UNK_0058fb90;
extern "C" unsigned long _UNK_0058fb94;
extern "C" unsigned long _UNK_0058fb98;
extern "C" unsigned long _UNK_0058fb9c;
extern "C" unsigned long _UNK_0058ff94;
extern "C" unsigned long _UNK_0058ff98;
extern "C" unsigned long _UNK_0058ff9c;
extern "C" unsigned long _UNK_0058ffa0;
extern "C" unsigned long _UNK_0058ffa4;
extern "C" unsigned long _UNK_0058ffa8;
extern "C" unsigned long _UNK_0058ffac;
extern "C" unsigned long _UNK_0058ffb0;
extern "C" unsigned long _UNK_0058ffb4;
extern "C" unsigned long _UNK_0058ffb8;
extern "C" unsigned long _UNK_0058ffbc;
extern "C" unsigned long _UNK_0058ffc0;
extern "C" unsigned long _UNK_0058ffc4;
extern "C" unsigned long _UNK_0058ffc8;
extern "C" unsigned long _UNK_0058ffcc;
extern "C" unsigned long _UNK_0058ffd0;
extern "C" unsigned long _UNK_0058ffd4;
extern "C" unsigned long _UNK_0058ffd8;
extern "C" unsigned long _UNK_005902b8;
extern "C" unsigned long _UNK_005902bc;
extern "C" unsigned long _UNK_005902c0;
extern "C" unsigned long _UNK_005902c4;
extern "C" unsigned long _UNK_005902c8;
extern "C" unsigned long _UNK_005902cc;
extern "C" unsigned long _UNK_005902d0;
extern "C" unsigned long _UNK_005902d4;
extern "C" unsigned long _UNK_005902d8;
extern "C" unsigned long _UNK_005902dc;
extern "C" unsigned long _UNK_005902e0;
extern "C" unsigned long _UNK_005902e4;
extern "C" unsigned long g_0058f09c;
extern "C" unsigned long g_0058f0f6;
extern "C" unsigned long g_0058f128;
extern "C" unsigned long g_0058f12c;
extern "C" unsigned long g_0058f13c;
extern "C" unsigned long g_0058f140;
extern "C" unsigned long g_0058f150;
extern "C" unsigned long g_0058f154;
extern "C" unsigned long g_0058f178;
extern "C" unsigned long g_0058f17c;
extern "C" unsigned long g_0058f18c;
extern "C" unsigned long g_0058f190;
extern "C" unsigned long g_0058f1dc;
extern "C" unsigned long g_0058f1f6;
extern "C" unsigned long g_0058f234;
extern "C" unsigned long g_0058f238;
extern "C" unsigned long g_0058f248;
extern "C" unsigned long g_0058f24c;
extern "C" unsigned long g_0058f308;
extern "C" unsigned long g_0058f30c;
extern "C" unsigned long g_0058f4c2;
extern "C" unsigned long g_0058f5a8;
extern "C" unsigned long g_0058f696;
extern "C" unsigned long g_0058f6be;
extern "C" unsigned long g_0058f788;
extern "C" unsigned long g_0058f7be;
extern "C" unsigned long g_0058f896;
extern "C" unsigned long g_0058f8a4;
extern "C" unsigned long g_0058f8a8;
extern "C" unsigned long g_0058f8ac;
extern "C" unsigned long g_0058f8b0;
extern "C" unsigned long g_0058f8b4;
extern "C" unsigned long g_0058f8b8;
extern "C" unsigned long g_0058f8bc;
extern "C" unsigned long g_0058f8c0;
extern "C" unsigned long g_0058f8c4;
extern "C" unsigned long g_0058f8c8;
extern "C" unsigned long g_0058f8cc;
extern "C" unsigned long g_0058f8d0;
extern "C" unsigned long g_0058f8d4;
extern "C" unsigned long g_0058f8d8;
extern "C" unsigned long g_0058f8dc;
extern "C" unsigned long g_0058f908;
extern "C" unsigned long g_0058f9b2;
extern "C" unsigned long g_0058fa4c;
extern "C" unsigned long g_0058fa74;
extern "C" unsigned long g_0058fa80;
extern "C" unsigned long g_0058fab8;
extern "C" unsigned long g_0058fada;
extern "C" unsigned long g_0058fb4a;
extern "C" unsigned long g_0058fb64;
extern "C" unsigned long g_0058fb68;
extern "C" unsigned long g_0058fb6c;
extern "C" unsigned long g_0058fb70;
extern "C" unsigned long g_0058fb74;
extern "C" unsigned long g_0058fb78;
extern "C" unsigned long g_0058fb7c;
extern "C" unsigned long g_0058fb80;
extern "C" unsigned long g_0058fb84;
extern "C" unsigned long g_0058fb88;
extern "C" unsigned long g_0058fb8c;
extern "C" unsigned long g_0058fb90;
extern "C" unsigned long g_0058fb94;
extern "C" unsigned long g_0058fb98;
extern "C" unsigned long g_0058fb9c;
extern "C" unsigned long g_0058fbbc;
extern "C" unsigned long g_0058fc66;
extern "C" unsigned long g_0058fd46;
extern "C" unsigned long g_0058fd66;
extern "C" unsigned long g_0058fd68;
extern "C" unsigned long g_0058fe00;
extern "C" unsigned long g_0058fe2a;
extern "C" unsigned long g_0058fed4;
extern "C" unsigned long g_0058ff94;
extern "C" unsigned long g_0058ff98;
extern "C" unsigned long g_0058ff9c;
extern "C" unsigned long g_0058ffa0;
extern "C" unsigned long g_0058ffa4;
extern "C" unsigned long g_0058ffa8;
extern "C" unsigned long g_0058ffac;
extern "C" unsigned long g_0058ffb0;
extern "C" unsigned long g_0058ffb4;
extern "C" unsigned long g_0058ffb8;
extern "C" unsigned long g_0058ffbc;
extern "C" unsigned long g_0058ffc0;
extern "C" unsigned long g_0058ffc4;
extern "C" unsigned long g_0058ffc8;
extern "C" unsigned long g_0058ffcc;
extern "C" unsigned long g_0058ffd0;
extern "C" unsigned long g_0058ffd4;
extern "C" unsigned long g_0058ffd8;
extern "C" unsigned long g_0058fffa;
extern "C" unsigned long g_0059001a;
extern "C" unsigned long g_0059001c;
extern "C" unsigned long g_005900bc;
extern "C" unsigned long g_005900e6;
extern "C" unsigned long g_005901ac;
extern "C" unsigned long g_005901da;
extern "C" unsigned long g_005902b8;
extern "C" unsigned long g_005902bc;
extern "C" unsigned long g_005902c0;
extern "C" unsigned long g_005902c4;
extern "C" unsigned long g_005902c8;
extern "C" unsigned long g_005902cc;
extern "C" unsigned long g_005902d0;
extern "C" unsigned long g_005902d4;
extern "C" unsigned long g_005902d8;
extern "C" unsigned long g_005902dc;
extern "C" unsigned long g_005902e0;
extern "C" unsigned long g_005902e4;
void BLMainAccountChangeView::editBoxEditingDidBegin(cocos2d::extension::CCEditBox* p1)
{
  return;
}

void BLMainAccountChangeView::editBoxEditingDidEnd(cocos2d::extension::CCEditBox* p1)
{
  return;
}

void BLMainAccountChangeView::editBoxTextChanged(cocos2d::extension::CCEditBox* p1, std::string const& p2)
{
  return;
}

BLMainAccountChangeView::~BLMainAccountChangeView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0058f09c + g_0058f128);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x218;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x248;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x254;
  *(int *)((int)this + 4*(0x42)) = iVar2 + 0x264;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  if (*(int *)((int)this + 4*(0x43)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x43)) = 0;
  }
  if (*(int *)((int)this + 4*(0x44)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x44)) = 0;
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0058f0f6 + g_0058f12c,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}



int * BLMainAccountChangeView::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x154)));
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

undefined4 BLMainAccountChangeView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x110);
}


undefined4 BLMainAccountChangeView::getBtnClose()
{
  return *(undefined4 *)(((int)this) + 0x134);
}

undefined4 BLMainAccountChangeView::getBtnLogin()
{
  return *(undefined4 *)(((int)this) + 300);
}

undefined4 BLMainAccountChangeView::getBtnFindPassword()
{
  return *(undefined4 *)(((int)this) + 0x130);
}

undefined4 BLMainAccountChangeView::getEditEmail()
{
  return *(undefined4 *)(((int)this) + 0x120);
}

undefined4 BLMainAccountChangeView::getLabeEmail0Tip()
{
  return *(undefined4 *)(((int)this) + 0x148);
}

undefined4 BLMainAccountChangeView::getEditPass()
{
  return *(undefined4 *)(((int)this) + 0x124);
}

undefined4 BLMainAccountChangeView::getEditPass2()
{
  return *(undefined4 *)(((int)this) + 0x128);
}

void BLMainAccountChangeView::onEnter()
{
  ((BLMainAccountChangePresenter *)*(undefined4 *)(((int)this) + 0x110))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLMainAccountChangeView::onExit()
{
  ((BLMainAccountChangePresenter *)*(undefined4 *)(((int)this) + 0x110))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (4) =====
void BLMainAccountChangeView::editBoxReturn(cocos2d::extension::CCEditBox* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

BLMainAccountChangeView::BLMainAccountChangeView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = (undefined4)(intptr_t)(*(int *)(g_0058f308 + 0x58f290));
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x218;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x248;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x254;
  *(int *)((int)this + 4*(0x42)) = iVar2 + 0x264;
  iVar2 = (undefined4)(intptr_t)(cocos2d::CCArray::create());
  *(int *)((int)this + 4*(0x43)) = iVar2;
  if (iVar2 != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLMainAccountChangeView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

void BLMainAccountChangeView::addEditBox(cocos2d::extension::CCEditBox* p1, cocos2d::CCPoint * p2, char const* p3, bool p4)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

bool BLMainAccountChangeView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
