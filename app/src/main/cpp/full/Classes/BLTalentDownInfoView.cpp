#include "BLTalentDownInfoView.h"
#include "BLLeakUtils.h"
#include "BLTalentDownInfoPresenter.h"
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
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e59c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_006a16a4;
extern "C" unsigned long UNK_006a16e8;
extern "C" unsigned long UNK_006a172c;
extern "C" unsigned long UNK_006a177c;
extern "C" unsigned long UNK_006a1fa8;
extern "C" unsigned long UNK_006a1fd6;
extern "C" unsigned long _UNK_006a1718;
extern "C" unsigned long _UNK_006a171c;
extern "C" unsigned long _UNK_006a1730;
extern "C" unsigned long _UNK_006a1780;
extern "C" unsigned long _UNK_006a2000;
extern "C" unsigned long _UNK_006a2004;
extern "C" unsigned long _UNK_006a20c8;
extern "C" unsigned long _UNK_006a20cc;
extern "C" unsigned long _UNK_006a20d0;
extern "C" unsigned long _UNK_006a20d4;
extern "C" unsigned long g_006a16a4;
extern "C" unsigned long g_006a16e8;
extern "C" unsigned long g_006a1718;
extern "C" unsigned long g_006a171c;
extern "C" unsigned long g_006a172c;
extern "C" unsigned long g_006a1730;
extern "C" unsigned long g_006a177c;
extern "C" unsigned long g_006a1780;
extern "C" unsigned long g_006a1fa8;
extern "C" unsigned long g_006a1fd6;
extern "C" unsigned long g_006a2000;
extern "C" unsigned long g_006a2004;
extern "C" unsigned long g_006a20c8;
extern "C" unsigned long g_006a20cc;
extern "C" unsigned long g_006a20d0;
extern "C" unsigned long g_006a20d4;
BLTalentDownInfoView::~BLTalentDownInfoView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_006a16a4 + g_006a1718);
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
  func_0079e45c(&uStack_14,&g_006a16e8 + g_006a171c,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLTalentDownInfoView::BLTalentDownInfoView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_006a1fa8 + g_006a2000);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_006a1fd6 + g_006a2004,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}


undefined4 BLTalentDownInfoView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x108);
}

bool BLTalentDownInfoView::init()
{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = ((cocos2d::CCLayer *)this)->init();
  if (iVar1 != 0) {
    uVar2 = (undefined4)(((BLTalentDownInfoPresenter *)this)->create());
    *(undefined4 *)(((int)this) + 0x108) = uVar2;
    ((cocos2d::CCObject *)this)->retain();
    BLTalentDownInfoView::initView();
    ((BLTalentDownInfoPresenter *)*(undefined4 *)(((int)this) + 0x108))->initWithView((BLTalentDownInfoView*)((int)this));
  }
  return iVar1;
}

void BLTalentDownInfoView::onEnter()
{
  ((BLTalentDownInfoPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLTalentDownInfoView::onExit()
{
  ((BLTalentDownInfoPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (2) =====
void BLTalentDownInfoView::initView()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLTalentDownInfoView::getInfoItemView()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
