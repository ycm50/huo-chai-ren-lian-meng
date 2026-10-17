#include "PetSkillView.h"
#include "BLLeakUtils.h"
#include "PetSkillPresenter.h"
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
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_00612c48;
extern "C" unsigned long UNK_00612c8c;
extern "C" unsigned long UNK_00612cd0;
extern "C" unsigned long UNK_00612cf8;
extern "C" unsigned long UNK_00612d10;
extern "C" unsigned long UNK_00612d3e;
extern "C" unsigned long UNK_00612de0;
extern "C" unsigned long UNK_00612eba;
extern "C" unsigned long UNK_00612f94;
extern "C" unsigned long UNK_0061306e;
extern "C" unsigned long UNK_00613148;
extern "C" unsigned long UNK_00613264;
extern "C" unsigned long UNK_00613268;
extern "C" unsigned long UNK_0061336c;
extern "C" unsigned long _UNK_00612cbc;
extern "C" unsigned long _UNK_00612cc0;
extern "C" unsigned long _UNK_00612cd4;
extern "C" unsigned long _UNK_00612cfc;
extern "C" unsigned long _UNK_00612d68;
extern "C" unsigned long _UNK_00612d6c;
extern "C" unsigned long _UNK_006131c8;
extern "C" unsigned long _UNK_006131cc;
extern "C" unsigned long _UNK_006131d0;
extern "C" unsigned long _UNK_006131d4;
extern "C" unsigned long _UNK_006131d8;
extern "C" unsigned long _UNK_006131dc;
extern "C" unsigned long _UNK_006131e0;
extern "C" unsigned long _UNK_006131e4;
extern "C" unsigned long _UNK_006131e8;
extern "C" unsigned long _UNK_006131ec;
extern "C" unsigned long _UNK_006131f0;
extern "C" unsigned long _UNK_00613584;
extern "C" unsigned long _UNK_00613588;
extern "C" unsigned long _UNK_0061358c;
extern "C" unsigned long _UNK_00613590;
extern "C" unsigned long g_00612c48;
extern "C" unsigned long g_00612c8c;
extern "C" unsigned long g_00612cbc;
extern "C" unsigned long g_00612cc0;
extern "C" unsigned long g_00612cd0;
extern "C" unsigned long g_00612cd4;
extern "C" unsigned long g_00612cf8;
extern "C" unsigned long g_00612cfc;
extern "C" unsigned long g_00612d10;
extern "C" unsigned long g_00612d3e;
extern "C" unsigned long g_00612d68;
extern "C" unsigned long g_00612d6c;
extern "C" unsigned long g_00612de0;
extern "C" unsigned long g_00612eba;
extern "C" unsigned long g_00612f94;
extern "C" unsigned long g_0061306e;
extern "C" unsigned long g_00613148;
extern "C" unsigned long g_006131c8;
extern "C" unsigned long g_006131cc;
extern "C" unsigned long g_006131d0;
extern "C" unsigned long g_006131d4;
extern "C" unsigned long g_006131d8;
extern "C" unsigned long g_006131dc;
extern "C" unsigned long g_006131e0;
extern "C" unsigned long g_006131e4;
extern "C" unsigned long g_006131e8;
extern "C" unsigned long g_006131ec;
extern "C" unsigned long g_006131f0;
extern "C" unsigned long g_00613264;
extern "C" unsigned long g_00613268;
extern "C" unsigned long g_0061336c;
extern "C" unsigned long g_00613584;
extern "C" unsigned long g_00613588;
extern "C" unsigned long g_0061358c;
extern "C" unsigned long g_00613590;
PetSkillView::~PetSkillView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_00612c48 + g_00612cbc);
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
  func_0079e45c(&uStack_14,&g_00612c8c + g_00612cc0,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

PetSkillView::PetSkillView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_00612d10 + g_00612d68);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00612d3e + g_00612d6c,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * PetSkillView::create()
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


void PetSkillView::onEnter()
{
  ((PetSkillPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void PetSkillView::onExit()
{
  ((PetSkillPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
bool PetSkillView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
