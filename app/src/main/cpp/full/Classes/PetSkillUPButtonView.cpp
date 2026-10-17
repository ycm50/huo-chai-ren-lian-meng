#include "PetSkillUPButtonView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "PetSkillUPButtonPresenter.h"
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
extern "C" unsigned long UNK_006106b4;
extern "C" unsigned long UNK_006106f8;
extern "C" unsigned long UNK_0061073c;
extern "C" unsigned long UNK_00610764;
extern "C" unsigned long UNK_0061077c;
extern "C" unsigned long UNK_006107aa;
extern "C" unsigned long UNK_00610860;
extern "C" unsigned long UNK_0061088c;
extern "C" unsigned long UNK_0061095e;
extern "C" unsigned long UNK_00610994;
extern "C" unsigned long UNK_00610a4a;
extern "C" unsigned long UNK_00610b02;
extern "C" unsigned long UNK_00610b2e;
extern "C" unsigned long UNK_00610c94;
extern "C" unsigned long UNK_00610cc2;
extern "C" unsigned long UNK_00610d94;
extern "C" unsigned long UNK_00610dc0;
extern "C" unsigned long UNK_00610e74;
extern "C" unsigned long UNK_00610f26;
extern "C" unsigned long UNK_00610f52;
extern "C" unsigned long _UNK_00610728;
extern "C" unsigned long _UNK_0061072c;
extern "C" unsigned long _UNK_00610740;
extern "C" unsigned long _UNK_00610768;
extern "C" unsigned long _UNK_006107d4;
extern "C" unsigned long _UNK_006107d8;
extern "C" unsigned long _UNK_00610c44;
extern "C" unsigned long _UNK_00610c48;
extern "C" unsigned long _UNK_00610c4c;
extern "C" unsigned long _UNK_00610c50;
extern "C" unsigned long _UNK_00610c54;
extern "C" unsigned long _UNK_00610c58;
extern "C" unsigned long _UNK_00610c5c;
extern "C" unsigned long _UNK_00610c60;
extern "C" unsigned long _UNK_00610c64;
extern "C" unsigned long _UNK_00610c68;
extern "C" unsigned long _UNK_00610c6c;
extern "C" unsigned long _UNK_00610c70;
extern "C" unsigned long _UNK_00610c74;
extern "C" unsigned long _UNK_00610c78;
extern "C" unsigned long _UNK_00610c7c;
extern "C" unsigned long _UNK_0061106c;
extern "C" unsigned long _UNK_00611070;
extern "C" unsigned long _UNK_00611074;
extern "C" unsigned long _UNK_00611078;
extern "C" unsigned long _UNK_0061107c;
extern "C" unsigned long _UNK_00611080;
extern "C" unsigned long _UNK_00611084;
extern "C" unsigned long _UNK_00611088;
extern "C" unsigned long _UNK_0061108c;
extern "C" unsigned long _UNK_00611090;
extern "C" unsigned long _UNK_00611094;
extern "C" unsigned long _UNK_00611098;
extern "C" unsigned long _UNK_0061109c;
extern "C" unsigned long _UNK_006110a0;
extern "C" unsigned long _UNK_006110a4;
extern "C" unsigned long _UNK_006110a8;
extern "C" unsigned long g_006106b4;
extern "C" unsigned long g_006106f8;
extern "C" unsigned long g_00610728;
extern "C" unsigned long g_0061072c;
extern "C" unsigned long g_0061073c;
extern "C" unsigned long g_00610740;
extern "C" unsigned long g_00610764;
extern "C" unsigned long g_00610768;
extern "C" unsigned long g_0061077c;
extern "C" unsigned long g_006107aa;
extern "C" unsigned long g_006107d4;
extern "C" unsigned long g_006107d8;
extern "C" unsigned long g_00610860;
extern "C" unsigned long g_0061088c;
extern "C" unsigned long g_0061095e;
extern "C" unsigned long g_00610994;
extern "C" unsigned long g_00610a4a;
extern "C" unsigned long g_00610b02;
extern "C" unsigned long g_00610b2e;
extern "C" unsigned long g_00610c44;
extern "C" unsigned long g_00610c48;
extern "C" unsigned long g_00610c4c;
extern "C" unsigned long g_00610c50;
extern "C" unsigned long g_00610c54;
extern "C" unsigned long g_00610c58;
extern "C" unsigned long g_00610c5c;
extern "C" unsigned long g_00610c60;
extern "C" unsigned long g_00610c64;
extern "C" unsigned long g_00610c68;
extern "C" unsigned long g_00610c6c;
extern "C" unsigned long g_00610c70;
extern "C" unsigned long g_00610c74;
extern "C" unsigned long g_00610c78;
extern "C" unsigned long g_00610c7c;
extern "C" unsigned long g_00610c94;
extern "C" unsigned long g_00610cc2;
extern "C" unsigned long g_00610d94;
extern "C" unsigned long g_00610dc0;
extern "C" unsigned long g_00610e74;
extern "C" unsigned long g_00610f26;
extern "C" unsigned long g_00610f52;
extern "C" unsigned long g_0061106c;
extern "C" unsigned long g_00611070;
extern "C" unsigned long g_00611074;
extern "C" unsigned long g_00611078;
extern "C" unsigned long g_0061107c;
extern "C" unsigned long g_00611080;
extern "C" unsigned long g_00611084;
extern "C" unsigned long g_00611088;
extern "C" unsigned long g_0061108c;
extern "C" unsigned long g_00611090;
extern "C" unsigned long g_00611094;
extern "C" unsigned long g_00611098;
extern "C" unsigned long g_0061109c;
extern "C" unsigned long g_006110a0;
extern "C" unsigned long g_006110a4;
extern "C" unsigned long g_006110a8;
PetSkillUPButtonView::~PetSkillUPButtonView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_006106b4 + g_00610728);
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
  func_0079e45c(&uStack_14,&g_006106f8 + g_0061072c,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

PetSkillUPButtonView::PetSkillUPButtonView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_0061077c + g_006107d4);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_006107aa + g_006107d8,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * PetSkillUPButtonView::create()
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


void PetSkillUPButtonView::onEnter()
{
  ((PetSkillUPButtonPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void PetSkillUPButtonView::onExit()
{
  ((PetSkillUPButtonPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
bool PetSkillUPButtonView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
