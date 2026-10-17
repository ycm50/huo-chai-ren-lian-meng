#include "BLMainGLSBGetCodeView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLMainGLSBGetCodePresenter.h"
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
extern "C" long long ghidra_CONCAT13(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0059715c;
extern "C" unsigned long UNK_005971ae;
extern "C" unsigned long UNK_005971f4;
extern "C" unsigned long UNK_0059721c;
extern "C" unsigned long UNK_005973bc;
extern "C" unsigned long UNK_005974a0;
extern "C" unsigned long UNK_0059758e;
extern "C" unsigned long UNK_005975b8;
extern "C" unsigned long UNK_00597670;
extern "C" unsigned long UNK_00597694;
extern "C" unsigned long UNK_00597702;
extern "C" unsigned long UNK_00597790;
extern "C" unsigned long UNK_00597802;
extern "C" unsigned long UNK_005978d4;
extern "C" unsigned long UNK_005978d6;
extern "C" unsigned long UNK_005978ea;
extern "C" unsigned long UNK_00597976;
extern "C" unsigned long UNK_00597a20;
extern "C" unsigned long UNK_00597a22;
extern "C" unsigned long UNK_00597a34;
extern "C" unsigned long _DAT_005972d4;
extern "C" unsigned long _DAT_005972d8;
extern "C" unsigned long _UNK_005971e0;
extern "C" unsigned long _UNK_005971e4;
extern "C" unsigned long _UNK_005971f8;
extern "C" unsigned long _UNK_00597220;
extern "C" unsigned long _UNK_0059779c;
extern "C" unsigned long _UNK_005977a0;
extern "C" unsigned long _UNK_005977a4;
extern "C" unsigned long _UNK_005977a8;
extern "C" unsigned long _UNK_005977ac;
extern "C" unsigned long _UNK_005977b0;
extern "C" unsigned long _UNK_005977b4;
extern "C" unsigned long _UNK_005977b8;
extern "C" unsigned long _UNK_005977bc;
extern "C" unsigned long _UNK_005977c0;
extern "C" unsigned long _UNK_005977c4;
extern "C" unsigned long _UNK_005977c8;
extern "C" unsigned long _UNK_005977cc;
extern "C" unsigned long _UNK_005977d0;
extern "C" unsigned long _UNK_005977d4;
extern "C" unsigned long _UNK_005977d8;
extern "C" unsigned long _UNK_005977dc;
extern "C" unsigned long _UNK_00597afc;
extern "C" unsigned long _UNK_00597b00;
extern "C" unsigned long _UNK_00597b04;
extern "C" unsigned long _UNK_00597b08;
extern "C" unsigned long _UNK_00597b0c;
extern "C" unsigned long _UNK_00597b10;
extern "C" unsigned long _UNK_00597b14;
extern "C" unsigned long _UNK_00597b18;
extern "C" unsigned long _UNK_00597b1c;
extern "C" unsigned long _UNK_00597b20;
extern "C" unsigned long _UNK_00597b24;
extern "C" unsigned long _UNK_00597b28;
extern "C" unsigned long _UNK_00597b2c;
extern "C" unsigned long _UNK_00597b30;
extern "C" unsigned long _UNK_00597b34;
extern "C" unsigned long _UNK_00597b38;
extern "C" unsigned long _UNK_00597b3c;
extern "C" unsigned long _UNK_00597b40;
extern "C" unsigned long _UNK_00597b44;
extern "C" unsigned long g_0059715c;
extern "C" unsigned long g_005971ae;
extern "C" unsigned long g_005971e0;
extern "C" unsigned long g_005971e4;
extern "C" unsigned long g_005971f4;
extern "C" unsigned long g_005971f8;
extern "C" unsigned long g_0059721c;
extern "C" unsigned long g_00597220;
extern "C" unsigned long g_005972d4;
extern "C" unsigned long g_005972d8;
extern "C" unsigned long g_005973bc;
extern "C" unsigned long g_005974a0;
extern "C" unsigned long g_0059758e;
extern "C" unsigned long g_005975b8;
extern "C" unsigned long g_00597670;
extern "C" unsigned long g_00597694;
extern "C" unsigned long g_00597702;
extern "C" unsigned long g_00597790;
extern "C" unsigned long g_0059779c;
extern "C" unsigned long g_005977a0;
extern "C" unsigned long g_005977a4;
extern "C" unsigned long g_005977a8;
extern "C" unsigned long g_005977ac;
extern "C" unsigned long g_005977b0;
extern "C" unsigned long g_005977b4;
extern "C" unsigned long g_005977b8;
extern "C" unsigned long g_005977bc;
extern "C" unsigned long g_005977c0;
extern "C" unsigned long g_005977c4;
extern "C" unsigned long g_005977c8;
extern "C" unsigned long g_005977cc;
extern "C" unsigned long g_005977d0;
extern "C" unsigned long g_005977d4;
extern "C" unsigned long g_005977d8;
extern "C" unsigned long g_005977dc;
extern "C" unsigned long g_00597802;
extern "C" unsigned long g_005978d4;
extern "C" unsigned long g_005978d6;
extern "C" unsigned long g_005978ea;
extern "C" unsigned long g_00597976;
extern "C" unsigned long g_00597a20;
extern "C" unsigned long g_00597a22;
extern "C" unsigned long g_00597a34;
extern "C" unsigned long g_00597afc;
extern "C" unsigned long g_00597b00;
extern "C" unsigned long g_00597b04;
extern "C" unsigned long g_00597b08;
extern "C" unsigned long g_00597b0c;
extern "C" unsigned long g_00597b10;
extern "C" unsigned long g_00597b14;
extern "C" unsigned long g_00597b18;
extern "C" unsigned long g_00597b1c;
extern "C" unsigned long g_00597b20;
extern "C" unsigned long g_00597b24;
extern "C" unsigned long g_00597b28;
extern "C" unsigned long g_00597b2c;
extern "C" unsigned long g_00597b30;
extern "C" unsigned long g_00597b34;
extern "C" unsigned long g_00597b38;
extern "C" unsigned long g_00597b3c;
extern "C" unsigned long g_00597b40;
extern "C" unsigned long g_00597b44;
BLMainGLSBGetCodeView::~BLMainGLSBGetCodeView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0059715c + g_005971e0);
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
  func_0079e45c(&uStack_14,&g_005971ae + g_005971e4,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}


int * BLMainGLSBGetCodeView::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(300)));
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

undefined4 BLMainGLSBGetCodeView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 BLMainGLSBGetCodeView::getBtnClose()
{
  return *(undefined4 *)(((int)this) + 0x128);
}

void BLMainGLSBGetCodeView::onExit()
{
  ((BLMainGLSBGetCodePresenter *)*(undefined4 *)(((int)this) + 0x10c))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

void BLMainGLSBGetCodeView::onEnter()
{
  ((BLMainGLSBGetCodePresenter *)*(undefined4 *)(((int)this) + 0x10c))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

// ===== 修复: 补回被误删的函数占位 (2) =====
BLMainGLSBGetCodeView::BLMainGLSBGetCodeView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = (undefined4)(intptr_t)(*(int *)(g_005972d4 + 0x597264));
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
  func_0079e45c(&uStack_14,((intptr_t)"BLMainGLSBGetCodeView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

bool BLMainGLSBGetCodeView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
