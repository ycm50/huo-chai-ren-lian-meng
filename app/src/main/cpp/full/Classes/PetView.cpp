#include "PetView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLListButton.h"
#include "PetInfoView.h"
#include "PetPresenter.h"
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
extern "C" long long func_0079e5bc(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_00613610;
extern "C" unsigned long UNK_00613654;
extern "C" unsigned long UNK_00613698;
extern "C" unsigned long UNK_006136c0;
extern "C" unsigned long UNK_0061381c;
extern "C" unsigned long UNK_00613904;
extern "C" unsigned long UNK_00613906;
extern "C" unsigned long UNK_006139d6;
extern "C" unsigned long UNK_00613abc;
extern "C" unsigned long UNK_00613bb8;
extern "C" unsigned long UNK_00613c16;
extern "C" unsigned long UNK_00613ddc;
extern "C" unsigned long UNK_00613e30;
extern "C" unsigned long UNK_00613e7a;
extern "C" unsigned long UNK_00613ec2;
extern "C" unsigned long UNK_00613ec3;
extern "C" unsigned long UNK_00613ec4;
extern "C" unsigned long _DAT_00613798;
extern "C" unsigned long _DAT_0061379c;
extern "C" unsigned long _UNK_00613684;
extern "C" unsigned long _UNK_00613688;
extern "C" unsigned long _UNK_0061369c;
extern "C" unsigned long _UNK_006136c4;
extern "C" unsigned long _UNK_00613bdc;
extern "C" unsigned long _UNK_00613be0;
extern "C" unsigned long _UNK_00613be4;
extern "C" unsigned long _UNK_00613be8;
extern "C" unsigned long _UNK_00613bec;
extern "C" unsigned long _UNK_00613bf0;
extern "C" unsigned long _UNK_00613bf4;
extern "C" unsigned long _UNK_00613bf8;
extern "C" unsigned long _UNK_00613bfc;
extern "C" unsigned long _UNK_00613c00;
extern "C" unsigned long _UNK_00613c04;
extern "C" unsigned long _UNK_00613c08;
extern "C" unsigned long _UNK_00613fa0;
extern "C" unsigned long _UNK_00613fa4;
extern "C" unsigned long _UNK_00613fa8;
extern "C" unsigned long _UNK_00613fac;
extern "C" unsigned long _UNK_00613fb0;
extern "C" unsigned long _UNK_00613fb4;
extern "C" unsigned long _UNK_00613fb8;
extern "C" unsigned long _UNK_00613fbc;
extern "C" unsigned long _UNK_00613fc0;
extern "C" unsigned long _UNK_00613fc4;
extern "C" unsigned long _UNK_00613fc8;
extern "C" unsigned long _UNK_00613fcc;
extern "C" unsigned long _UNK_00613fd0;
extern "C" unsigned long _UNK_00613fd4;
extern "C" unsigned long _UNK_00613fd8;
extern "C" unsigned long _UNK_00613fdc;
extern "C" unsigned long _UNK_00613fe0;
extern "C" unsigned long _UNK_006141fc;
extern "C" unsigned long _UNK_00614200;
extern "C" unsigned long _UNK_00614204;
extern "C" unsigned long _UNK_00614208;
extern "C" unsigned long g_00613610;
extern "C" unsigned long g_00613654;
extern "C" unsigned long g_00613684;
extern "C" unsigned long g_00613688;
extern "C" unsigned long g_00613698;
extern "C" unsigned long g_0061369c;
extern "C" unsigned long g_006136c0;
extern "C" unsigned long g_006136c4;
extern "C" unsigned long g_00613798;
extern "C" unsigned long g_0061379c;
extern "C" unsigned long g_0061381c;
extern "C" unsigned long g_00613904;
extern "C" unsigned long g_00613906;
extern "C" unsigned long g_006139d6;
extern "C" unsigned long g_00613abc;
extern "C" unsigned long g_00613bb8;
extern "C" unsigned long g_00613bdc;
extern "C" unsigned long g_00613be0;
extern "C" unsigned long g_00613be4;
extern "C" unsigned long g_00613be8;
extern "C" unsigned long g_00613bec;
extern "C" unsigned long g_00613bf0;
extern "C" unsigned long g_00613bf4;
extern "C" unsigned long g_00613bf8;
extern "C" unsigned long g_00613bfc;
extern "C" unsigned long g_00613c00;
extern "C" unsigned long g_00613c04;
extern "C" unsigned long g_00613c08;
extern "C" unsigned long g_00613c16;
extern "C" unsigned long g_00613ddc;
extern "C" unsigned long g_00613e30;
extern "C" unsigned long g_00613e7a;
extern "C" unsigned long g_00613ec2;
extern "C" unsigned long g_00613ec3;
extern "C" unsigned long g_00613ec4;
extern "C" unsigned long g_00613fa0;
extern "C" unsigned long g_00613fa4;
extern "C" unsigned long g_00613fa8;
extern "C" unsigned long g_00613fac;
extern "C" unsigned long g_00613fb0;
extern "C" unsigned long g_00613fb4;
extern "C" unsigned long g_00613fb8;
extern "C" unsigned long g_00613fbc;
extern "C" unsigned long g_00613fc0;
extern "C" unsigned long g_00613fc4;
extern "C" unsigned long g_00613fc8;
extern "C" unsigned long g_00613fcc;
extern "C" unsigned long g_00613fd0;
extern "C" unsigned long g_00613fd4;
extern "C" unsigned long g_00613fd8;
extern "C" unsigned long g_00613fdc;
extern "C" unsigned long g_00613fe0;
extern "C" unsigned long g_006141fc;
extern "C" unsigned long g_00614200;
extern "C" unsigned long g_00614204;
extern "C" unsigned long g_00614208;
PetView::~PetView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_00613610 + g_00613684);
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
  func_0079e45c(&uStack_14,&g_00613654 + g_00613688,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

PetView::PetView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(g_00613798 + 0x613740);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLMainPauseView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * PetView::create()
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


void PetView::onEnter()
{
  ((PetPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void PetView::onExit()
{
  ((PetPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
bool PetView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
