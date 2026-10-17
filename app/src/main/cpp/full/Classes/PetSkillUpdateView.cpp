#include "PetSkillUpdateView.h"
#include "BLLeakUtils.h"
#include "PetSkillUpdatePresenter.h"
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
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0061259c;
extern "C" unsigned long UNK_006125e0;
extern "C" unsigned long UNK_00612624;
extern "C" unsigned long UNK_0061264c;
extern "C" unsigned long UNK_00612664;
extern "C" unsigned long UNK_00612692;
extern "C" unsigned long UNK_0061273e;
extern "C" unsigned long UNK_0061282a;
extern "C" unsigned long UNK_0061282c;
extern "C" unsigned long UNK_006128fe;
extern "C" unsigned long UNK_00612998;
extern "C" unsigned long UNK_00612a96;
extern "C" unsigned long UNK_00612ac0;
extern "C" unsigned long _UNK_00612610;
extern "C" unsigned long _UNK_00612614;
extern "C" unsigned long _UNK_00612628;
extern "C" unsigned long _UNK_00612650;
extern "C" unsigned long _UNK_006126bc;
extern "C" unsigned long _UNK_006126c0;
extern "C" unsigned long _UNK_00612afc;
extern "C" unsigned long _UNK_00612b00;
extern "C" unsigned long _UNK_00612b04;
extern "C" unsigned long _UNK_00612b08;
extern "C" unsigned long _UNK_00612b0c;
extern "C" unsigned long _UNK_00612b10;
extern "C" unsigned long _UNK_00612b14;
extern "C" unsigned long _UNK_00612b18;
extern "C" unsigned long _UNK_00612b1c;
extern "C" unsigned long _UNK_00612b20;
extern "C" unsigned long _UNK_00612b24;
extern "C" unsigned long _UNK_00612b28;
extern "C" unsigned long _UNK_00612b2c;
extern "C" unsigned long _UNK_00612b30;
extern "C" unsigned long _UNK_00612b34;
extern "C" unsigned long _UNK_00612bc4;
extern "C" unsigned long _UNK_00612bc8;
extern "C" unsigned long g_0061259c;
extern "C" unsigned long g_006125e0;
extern "C" unsigned long g_00612610;
extern "C" unsigned long g_00612614;
extern "C" unsigned long g_00612624;
extern "C" unsigned long g_00612628;
extern "C" unsigned long g_0061264c;
extern "C" unsigned long g_00612650;
extern "C" unsigned long g_00612664;
extern "C" unsigned long g_00612692;
extern "C" unsigned long g_006126bc;
extern "C" unsigned long g_006126c0;
extern "C" unsigned long g_0061273e;
extern "C" unsigned long g_0061282a;
extern "C" unsigned long g_0061282c;
extern "C" unsigned long g_006128fe;
extern "C" unsigned long g_00612998;
extern "C" unsigned long g_00612a96;
extern "C" unsigned long g_00612ac0;
extern "C" unsigned long g_00612afc;
extern "C" unsigned long g_00612b00;
extern "C" unsigned long g_00612b04;
extern "C" unsigned long g_00612b08;
extern "C" unsigned long g_00612b0c;
extern "C" unsigned long g_00612b10;
extern "C" unsigned long g_00612b14;
extern "C" unsigned long g_00612b18;
extern "C" unsigned long g_00612b1c;
extern "C" unsigned long g_00612b20;
extern "C" unsigned long g_00612b24;
extern "C" unsigned long g_00612b28;
extern "C" unsigned long g_00612b2c;
extern "C" unsigned long g_00612b30;
extern "C" unsigned long g_00612b34;
extern "C" unsigned long g_00612bc4;
extern "C" unsigned long g_00612bc8;
PetSkillUpdateView::~PetSkillUpdateView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0061259c + g_00612610);
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
  func_0079e45c(&uStack_14,&g_006125e0 + g_00612614,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

PetSkillUpdateView::PetSkillUpdateView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_00612664 + g_006126bc);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00612692 + g_006126c0,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * PetSkillUpdateView::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x114)));
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


void PetSkillUpdateView::onEnter()
{
  ((PetSkillUpdatePresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void PetSkillUpdateView::onExit()
{
  ((PetSkillUpdatePresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
bool PetSkillUpdateView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
