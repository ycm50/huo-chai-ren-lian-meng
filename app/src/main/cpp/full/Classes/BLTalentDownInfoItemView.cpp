#include "BLTalentDownInfoItemView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLRichText.h"
#include "BLTalentDownInfoItemPresenter.h"
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
extern "C" long long func_0079e2dc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long func_0079e5fc(...);
extern "C" long long ghidra_CONCAT13(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_006a160c;
extern "C" unsigned long UNK_006a1650;
extern "C" unsigned long UNK_006a1694;
extern "C" unsigned long UNK_006a1754;
extern "C" unsigned long UNK_006a1794;
extern "C" unsigned long UNK_006a17c2;
extern "C" unsigned long UNK_006a180e;
extern "C" unsigned long UNK_006a1880;
extern "C" unsigned long UNK_006a189a;
extern "C" unsigned long UNK_006a18fc;
extern "C" unsigned long UNK_006a1930;
extern "C" unsigned long UNK_006a1950;
extern "C" unsigned long UNK_006a19b4;
extern "C" unsigned long UNK_006a19f6;
extern "C" unsigned long UNK_006a1a0e;
extern "C" unsigned long UNK_006a1a88;
extern "C" unsigned long UNK_006a1b1c;
extern "C" unsigned long UNK_006a1b28;
extern "C" unsigned long UNK_006a1b3a;
extern "C" unsigned long UNK_006a1b4c;
extern "C" unsigned long UNK_006a1bd6;
extern "C" unsigned long UNK_006a1be6;
extern "C" unsigned long UNK_006a1bea;
extern "C" unsigned long UNK_006a1c04;
extern "C" unsigned long UNK_006a1d08;
extern "C" unsigned long UNK_006a1d26;
extern "C" unsigned long UNK_006a1d4c;
extern "C" unsigned long UNK_006a1dc8;
extern "C" unsigned long UNK_006a1e66;
extern "C" unsigned long UNK_006a1e80;
extern "C" unsigned long _UNK_006a1680;
extern "C" unsigned long _UNK_006a1684;
extern "C" unsigned long _UNK_006a1698;
extern "C" unsigned long _UNK_006a1758;
extern "C" unsigned long _UNK_006a17ec;
extern "C" unsigned long _UNK_006a17f0;
extern "C" unsigned long _UNK_006a1b74;
extern "C" unsigned long _UNK_006a1b78;
extern "C" unsigned long _UNK_006a1b7c;
extern "C" unsigned long _UNK_006a1b80;
extern "C" unsigned long _UNK_006a1b84;
extern "C" unsigned long _UNK_006a1b88;
extern "C" unsigned long _UNK_006a1b8c;
extern "C" unsigned long _UNK_006a1b90;
extern "C" unsigned long _UNK_006a1b94;
extern "C" unsigned long _UNK_006a1b98;
extern "C" unsigned long _UNK_006a1b9c;
extern "C" unsigned long _UNK_006a1ba0;
extern "C" unsigned long _UNK_006a1ba4;
extern "C" unsigned long _UNK_006a1ba8;
extern "C" unsigned long _UNK_006a1bac;
extern "C" unsigned long _UNK_006a1bb0;
extern "C" unsigned long _UNK_006a1bb4;
extern "C" unsigned long _UNK_006a1bb8;
extern "C" unsigned long _UNK_006a1bbc;
extern "C" unsigned long _UNK_006a1bc0;
extern "C" unsigned long _UNK_006a1bc4;
extern "C" unsigned long _UNK_006a1f54;
extern "C" unsigned long _UNK_006a1f58;
extern "C" unsigned long _UNK_006a1f5c;
extern "C" unsigned long _UNK_006a1f60;
extern "C" unsigned long _UNK_006a1f64;
extern "C" unsigned long _UNK_006a1f68;
extern "C" unsigned long _UNK_006a1f6c;
extern "C" unsigned long _UNK_006a1f70;
extern "C" unsigned long _UNK_006a1f74;
extern "C" unsigned long _UNK_006a1f78;
extern "C" unsigned long _UNK_006a1f7c;
extern "C" unsigned long _UNK_006a1f80;
extern "C" unsigned long _UNK_006a1f84;
extern "C" unsigned long _UNK_006a1f88;
extern "C" unsigned long _UNK_006a1f8c;
extern "C" unsigned long g_006a160c;
extern "C" unsigned long g_006a1650;
extern "C" unsigned long g_006a1680;
extern "C" unsigned long g_006a1684;
extern "C" unsigned long g_006a1694;
extern "C" unsigned long g_006a1698;
extern "C" unsigned long g_006a1754;
extern "C" unsigned long g_006a1758;
extern "C" unsigned long g_006a1794;
extern "C" unsigned long g_006a17c2;
extern "C" unsigned long g_006a17ec;
extern "C" unsigned long g_006a17f0;
extern "C" unsigned long g_006a180e;
extern "C" unsigned long g_006a1880;
extern "C" unsigned long g_006a189a;
extern "C" unsigned long g_006a18fc;
extern "C" unsigned long g_006a1930;
extern "C" unsigned long g_006a1950;
extern "C" unsigned long g_006a19b4;
extern "C" unsigned long g_006a19f6;
extern "C" unsigned long g_006a1a0e;
extern "C" unsigned long g_006a1a88;
extern "C" unsigned long g_006a1b1c;
extern "C" unsigned long g_006a1b28;
extern "C" unsigned long g_006a1b3a;
extern "C" unsigned long g_006a1b4c;
extern "C" unsigned long g_006a1b74;
extern "C" unsigned long g_006a1b78;
extern "C" unsigned long g_006a1b7c;
extern "C" unsigned long g_006a1b80;
extern "C" unsigned long g_006a1b84;
extern "C" unsigned long g_006a1b88;
extern "C" unsigned long g_006a1b8c;
extern "C" unsigned long g_006a1b90;
extern "C" unsigned long g_006a1b94;
extern "C" unsigned long g_006a1b98;
extern "C" unsigned long g_006a1b9c;
extern "C" unsigned long g_006a1ba0;
extern "C" unsigned long g_006a1ba4;
extern "C" unsigned long g_006a1ba8;
extern "C" unsigned long g_006a1bac;
extern "C" unsigned long g_006a1bb0;
extern "C" unsigned long g_006a1bb4;
extern "C" unsigned long g_006a1bb8;
extern "C" unsigned long g_006a1bbc;
extern "C" unsigned long g_006a1bc0;
extern "C" unsigned long g_006a1bc4;
extern "C" unsigned long g_006a1bd6;
extern "C" unsigned long g_006a1be6;
extern "C" unsigned long g_006a1bea;
extern "C" unsigned long g_006a1c04;
extern "C" unsigned long g_006a1d08;
extern "C" unsigned long g_006a1d26;
extern "C" unsigned long g_006a1d4c;
extern "C" unsigned long g_006a1dc8;
extern "C" unsigned long g_006a1e66;
extern "C" unsigned long g_006a1e80;
extern "C" unsigned long g_006a1f54;
extern "C" unsigned long g_006a1f58;
extern "C" unsigned long g_006a1f5c;
extern "C" unsigned long g_006a1f60;
extern "C" unsigned long g_006a1f64;
extern "C" unsigned long g_006a1f68;
extern "C" unsigned long g_006a1f6c;
extern "C" unsigned long g_006a1f70;
extern "C" unsigned long g_006a1f74;
extern "C" unsigned long g_006a1f78;
extern "C" unsigned long g_006a1f7c;
extern "C" unsigned long g_006a1f80;
extern "C" unsigned long g_006a1f84;
extern "C" unsigned long g_006a1f88;
extern "C" unsigned long g_006a1f8c;
BLTalentDownInfoItemView::~BLTalentDownInfoItemView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_006a160c + g_006a1680);
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
  func_0079e45c(&uStack_14,&g_006a1650 + g_006a1684,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLTalentDownInfoItemView::BLTalentDownInfoItemView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_006a1794 + g_006a17ec);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_006a17c2 + g_006a17f0,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}


undefined4 BLTalentDownInfoItemView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x108);
}

bool BLTalentDownInfoItemView::init()
{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = ((cocos2d::CCLayer *)this)->init();
  if (iVar1 != 0) {
    uVar2 = (undefined4)(((BLTalentDownInfoItemPresenter *)this)->create());
    *(undefined4 *)(((int)this) + 0x108) = uVar2;
    ((cocos2d::CCObject *)this)->retain();
    BLTalentDownInfoItemView::initView();
    ((BLTalentDownInfoItemPresenter *)*(undefined4 *)(((int)this) + 0x108))->initWithView((BLTalentDownInfoItemView*)((int)this));
  }
  return iVar1;
}

void BLTalentDownInfoItemView::onEnter()
{
  ((BLTalentDownInfoItemPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLTalentDownInfoItemView::onExit()
{
  ((BLTalentDownInfoItemPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
void BLTalentDownInfoItemView::initView()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
