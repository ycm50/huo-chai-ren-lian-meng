#include "BLTalentInfoItemView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLTalentInfoItemPresenter.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
using namespace cocos2d;
// 兜底声明
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long ghidra_CONCAT13(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_006a22ec;
extern "C" unsigned long UNK_006a231e;
extern "C" unsigned long UNK_006a2364;
extern "C" unsigned long UNK_006a238c;
extern "C" unsigned long UNK_006a2498;
extern "C" unsigned long UNK_006a24c6;
extern "C" unsigned long UNK_006a251c;
extern "C" unsigned long UNK_006a2536;
extern "C" unsigned long _UNK_006a2350;
extern "C" unsigned long _UNK_006a2354;
extern "C" unsigned long _UNK_006a2368;
extern "C" unsigned long _UNK_006a2390;
extern "C" unsigned long _UNK_006a24f0;
extern "C" unsigned long _UNK_006a24f4;
extern "C" unsigned long _UNK_006a25ac;
extern "C" unsigned long _UNK_006a25b0;
extern "C" unsigned long _UNK_006a25b4;
extern "C" unsigned long _UNK_006a25b8;
extern "C" unsigned long _UNK_006a25bc;
extern "C" unsigned long g_006a22ec;
extern "C" unsigned long g_006a231e;
extern "C" unsigned long g_006a2350;
extern "C" unsigned long g_006a2354;
extern "C" unsigned long g_006a2364;
extern "C" unsigned long g_006a2368;
extern "C" unsigned long g_006a238c;
extern "C" unsigned long g_006a2390;
extern "C" unsigned long g_006a2498;
extern "C" unsigned long g_006a24c6;
extern "C" unsigned long g_006a24f0;
extern "C" unsigned long g_006a24f4;
extern "C" unsigned long g_006a251c;
extern "C" unsigned long g_006a2536;
extern "C" unsigned long g_006a25ac;
extern "C" unsigned long g_006a25b0;
extern "C" unsigned long g_006a25b4;
extern "C" unsigned long g_006a25b8;
extern "C" unsigned long g_006a25bc;
BLTalentInfoItemView::~BLTalentInfoItemView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_006a22ec + g_006a2350);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_006a231e + g_006a2354,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLTalentInfoItemView::BLTalentInfoItemView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_006a2498 + g_006a24f0);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_006a24c6 + g_006a24f4,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}


undefined4 BLTalentInfoItemView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x108);
}

undefined4 BLTalentInfoItemView::getLabInfo()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

bool BLTalentInfoItemView::init()
{
  int iVar1;
  int iVar2;
  
  iVar1 = ((cocos2d::CCLayer *)this)->init();
  if (iVar1 != 0) {
    iVar2 = ((BLTalentInfoItemPresenter *)this)->create();
    *(int *)(((int)this) + 0x108) = iVar2;
    if (iVar2 != 0) {
      ((cocos2d::CCObject *)this)->retain();
    }
    BLTalentInfoItemView::initView();
    ((BLTalentInfoItemPresenter *)*(undefined4 *)(((int)this) + 0x108))->initWithView((BLTalentInfoItemView*)((int)this));
  }
  return iVar1;
}

void BLTalentInfoItemView::onEnter()
{
  ((BLTalentInfoItemPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLTalentInfoItemView::onExit()
{
  ((BLTalentInfoItemPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
void BLTalentInfoItemView::initView()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
