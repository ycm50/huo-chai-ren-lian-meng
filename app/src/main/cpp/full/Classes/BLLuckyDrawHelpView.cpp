#include "BLLuckyDrawHelpView.h"
#include "BLLeakUtils.h"
#include "BLLuckyDrawHelpPresenter.h"
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
extern "C" unsigned long UNK_00630074;
extern "C" unsigned long UNK_006300b8;
extern "C" unsigned long UNK_006300fc;
extern "C" unsigned long UNK_00630124;
extern "C" unsigned long UNK_006302b0;
extern "C" unsigned long UNK_00630396;
extern "C" unsigned long UNK_0063047c;
extern "C" unsigned long UNK_00630522;
extern "C" unsigned long UNK_00630526;
extern "C" unsigned long UNK_0063060a;
extern "C" unsigned long _DAT_006301c4;
extern "C" unsigned long _DAT_006301c8;
extern "C" unsigned long _UNK_006300e8;
extern "C" unsigned long _UNK_006300ec;
extern "C" unsigned long _UNK_00630100;
extern "C" unsigned long _UNK_00630128;
extern "C" unsigned long _UNK_00630694;
extern "C" unsigned long _UNK_00630698;
extern "C" unsigned long _UNK_0063069c;
extern "C" unsigned long _UNK_006306a0;
extern "C" unsigned long _UNK_006306a4;
extern "C" unsigned long _UNK_006306a8;
extern "C" unsigned long _UNK_006306ac;
extern "C" unsigned long _UNK_006306b0;
extern "C" unsigned long _UNK_006306b4;
extern "C" unsigned long _UNK_006306b8;
extern "C" unsigned long _UNK_006306bc;
extern "C" unsigned long _UNK_006306c0;
extern "C" unsigned long _UNK_006306c4;
extern "C" unsigned long _UNK_006306c8;
extern "C" unsigned long _UNK_0063074c;
extern "C" unsigned long g_00630074;
extern "C" unsigned long g_006300b8;
extern "C" unsigned long g_006300e8;
extern "C" unsigned long g_006300ec;
extern "C" unsigned long g_006300fc;
extern "C" unsigned long g_00630100;
extern "C" unsigned long g_00630124;
extern "C" unsigned long g_00630128;
extern "C" unsigned long g_006301c4;
extern "C" unsigned long g_006301c8;
extern "C" unsigned long g_006302b0;
extern "C" unsigned long g_00630396;
extern "C" unsigned long g_0063047c;
extern "C" unsigned long g_00630522;
extern "C" unsigned long g_00630526;
extern "C" unsigned long g_0063060a;
extern "C" unsigned long g_00630694;
extern "C" unsigned long g_00630698;
extern "C" unsigned long g_0063069c;
extern "C" unsigned long g_006306a0;
extern "C" unsigned long g_006306a4;
extern "C" unsigned long g_006306a8;
extern "C" unsigned long g_006306ac;
extern "C" unsigned long g_006306b0;
extern "C" unsigned long g_006306b4;
extern "C" unsigned long g_006306b8;
extern "C" unsigned long g_006306bc;
extern "C" unsigned long g_006306c0;
extern "C" unsigned long g_006306c4;
extern "C" unsigned long g_006306c8;
extern "C" unsigned long g_0063074c;
BLLuckyDrawHelpView::~BLLuckyDrawHelpView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_00630074 + g_006300e8);
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
  func_0079e45c(&uStack_14,&g_006300b8 + g_006300ec,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLLuckyDrawHelpView::BLLuckyDrawHelpView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(g_006301c4 + 0x63016c);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLMineGuiZeView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * BLLuckyDrawHelpView::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x120)));
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

undefined4 BLLuckyDrawHelpView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x108);
}

undefined4 BLLuckyDrawHelpView::getBackGround()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

undefined4 BLLuckyDrawHelpView::getTabBg()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 BLLuckyDrawHelpView::getLabTitle()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

undefined4 BLLuckyDrawHelpView::getLabGuize()
{
  return *(undefined4 *)(((int)this) + 0x118);
}

undefined4 BLLuckyDrawHelpView::getBtnClose()
{
  return *(undefined4 *)(((int)this) + 0x11c);
}

void BLLuckyDrawHelpView::onEnter()
{
  ((BLLuckyDrawHelpPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLLuckyDrawHelpView::onExit()
{
  ((BLLuckyDrawHelpPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
bool BLLuckyDrawHelpView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
