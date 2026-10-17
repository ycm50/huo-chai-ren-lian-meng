#include "BLTalentInfoView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLTalentInfoPresenter.h"
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
extern "C" long long func_0079e4dc(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long ghidra_CONCAT13(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_006a239c;
extern "C" unsigned long UNK_006a23ce;
extern "C" unsigned long UNK_006a2428;
extern "C" unsigned long UNK_006a2450;
extern "C" unsigned long UNK_006a265c;
extern "C" unsigned long UNK_006a26a0;
extern "C" unsigned long UNK_006a2708;
extern "C" unsigned long UNK_006a2720;
extern "C" unsigned long UNK_006a27c6;
extern "C" unsigned long UNK_006a286e;
extern "C" unsigned long UNK_006a2906;
extern "C" unsigned long UNK_006a29b2;
extern "C" unsigned long UNK_006a29de;
extern "C" unsigned long UNK_006a2af0;
extern "C" unsigned long UNK_006a2b1c;
extern "C" unsigned long UNK_006a2be0;
extern "C" unsigned long UNK_006a2c0c;
extern "C" unsigned long UNK_006a2cc0;
extern "C" unsigned long UNK_006a2db4;
extern "C" unsigned long UNK_006a2dde;
extern "C" unsigned long _DAT_006a2634;
extern "C" unsigned long _DAT_006a2638;
extern "C" unsigned long _UNK_006a2414;
extern "C" unsigned long _UNK_006a2418;
extern "C" unsigned long _UNK_006a242c;
extern "C" unsigned long _UNK_006a2454;
extern "C" unsigned long _UNK_006a2a24;
extern "C" unsigned long _UNK_006a2a28;
extern "C" unsigned long _UNK_006a2a2c;
extern "C" unsigned long _UNK_006a2a30;
extern "C" unsigned long _UNK_006a2a34;
extern "C" unsigned long _UNK_006a2a38;
extern "C" unsigned long _UNK_006a2a3c;
extern "C" unsigned long _UNK_006a2a40;
extern "C" unsigned long _UNK_006a2a44;
extern "C" unsigned long _UNK_006a2a48;
extern "C" unsigned long _UNK_006a2a4c;
extern "C" unsigned long _UNK_006a2a50;
extern "C" unsigned long _UNK_006a2a54;
extern "C" unsigned long _UNK_006a2a58;
extern "C" unsigned long _UNK_006a2a5c;
extern "C" unsigned long _UNK_006a2a60;
extern "C" unsigned long _UNK_006a2a64;
extern "C" unsigned long _UNK_006a2a68;
extern "C" unsigned long _UNK_006a2a6c;
extern "C" unsigned long _UNK_006a2a70;
extern "C" unsigned long _UNK_006a2a74;
extern "C" unsigned long _UNK_006a2a78;
extern "C" unsigned long _UNK_006a2e68;
extern "C" unsigned long _UNK_006a2e6c;
extern "C" unsigned long _UNK_006a2e70;
extern "C" unsigned long _UNK_006a2e74;
extern "C" unsigned long _UNK_006a2e78;
extern "C" unsigned long _UNK_006a2e7c;
extern "C" unsigned long _UNK_006a2e80;
extern "C" unsigned long _UNK_006a2e84;
extern "C" unsigned long _UNK_006a2e88;
extern "C" unsigned long _UNK_006a2e8c;
extern "C" unsigned long _UNK_006a2e90;
extern "C" unsigned long _UNK_006a2e94;
extern "C" unsigned long _UNK_006a2e98;
extern "C" unsigned long _UNK_006a2e9c;
extern "C" unsigned long _UNK_006a2ea0;
extern "C" unsigned long _UNK_006a2ea4;
extern "C" unsigned long _UNK_006a2fdc;
extern "C" unsigned long _UNK_006a2fe0;
extern "C" unsigned long _UNK_006a2fe4;
extern "C" unsigned long _UNK_006a2fe8;
extern "C" unsigned long g_006a239c;
extern "C" unsigned long g_006a23ce;
extern "C" unsigned long g_006a2414;
extern "C" unsigned long g_006a2418;
extern "C" unsigned long g_006a2428;
extern "C" unsigned long g_006a242c;
extern "C" unsigned long g_006a2450;
extern "C" unsigned long g_006a2454;
extern "C" unsigned long g_006a2634;
extern "C" unsigned long g_006a2638;
extern "C" unsigned long g_006a265c;
extern "C" unsigned long g_006a26a0;
extern "C" unsigned long g_006a2708;
extern "C" unsigned long g_006a2720;
extern "C" unsigned long g_006a27c6;
extern "C" unsigned long g_006a286e;
extern "C" unsigned long g_006a2906;
extern "C" unsigned long g_006a29b2;
extern "C" unsigned long g_006a29de;
extern "C" unsigned long g_006a2a24;
extern "C" unsigned long g_006a2a28;
extern "C" unsigned long g_006a2a2c;
extern "C" unsigned long g_006a2a30;
extern "C" unsigned long g_006a2a34;
extern "C" unsigned long g_006a2a38;
extern "C" unsigned long g_006a2a3c;
extern "C" unsigned long g_006a2a40;
extern "C" unsigned long g_006a2a44;
extern "C" unsigned long g_006a2a48;
extern "C" unsigned long g_006a2a4c;
extern "C" unsigned long g_006a2a50;
extern "C" unsigned long g_006a2a54;
extern "C" unsigned long g_006a2a58;
extern "C" unsigned long g_006a2a5c;
extern "C" unsigned long g_006a2a60;
extern "C" unsigned long g_006a2a64;
extern "C" unsigned long g_006a2a68;
extern "C" unsigned long g_006a2a6c;
extern "C" unsigned long g_006a2a70;
extern "C" unsigned long g_006a2a74;
extern "C" unsigned long g_006a2a78;
extern "C" unsigned long g_006a2af0;
extern "C" unsigned long g_006a2b1c;
extern "C" unsigned long g_006a2be0;
extern "C" unsigned long g_006a2c0c;
extern "C" unsigned long g_006a2cc0;
extern "C" unsigned long g_006a2db4;
extern "C" unsigned long g_006a2dde;
extern "C" unsigned long g_006a2e68;
extern "C" unsigned long g_006a2e6c;
extern "C" unsigned long g_006a2e70;
extern "C" unsigned long g_006a2e74;
extern "C" unsigned long g_006a2e78;
extern "C" unsigned long g_006a2e7c;
extern "C" unsigned long g_006a2e80;
extern "C" unsigned long g_006a2e84;
extern "C" unsigned long g_006a2e88;
extern "C" unsigned long g_006a2e8c;
extern "C" unsigned long g_006a2e90;
extern "C" unsigned long g_006a2e94;
extern "C" unsigned long g_006a2e98;
extern "C" unsigned long g_006a2e9c;
extern "C" unsigned long g_006a2ea0;
extern "C" unsigned long g_006a2ea4;
extern "C" unsigned long g_006a2fdc;
extern "C" unsigned long g_006a2fe0;
extern "C" unsigned long g_006a2fe4;
extern "C" unsigned long g_006a2fe8;
BLTalentInfoView::~BLTalentInfoView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_006a239c + g_006a2414);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_006a23ce + g_006a2418,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  if (*(int *)((int)this + 4*(0x42)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x42)) = 0;
  }
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLTalentInfoView::BLTalentInfoView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(g_006a2634 + 0x6a25dc);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLTalentInfoView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}


undefined4 BLTalentInfoView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x108);
}

undefined4 BLTalentInfoView::getSprItem()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

undefined4 BLTalentInfoView::getLabItemName()
{
  return *(undefined4 *)(((int)this) + 0x11c);
}

undefined4 BLTalentInfoView::getLabNum()
{
  return *(undefined4 *)(((int)this) + 0x128);
}

undefined4 BLTalentInfoView::getBtnClose()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 BLTalentInfoView::getTableView()
{
  return *(undefined4 *)(((int)this) + 0x13c);
}

bool BLTalentInfoView::init()
{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = ((cocos2d::CCLayer *)this)->init();
  if (iVar1 != 0) {
    uVar2 = (undefined4)(((BLTalentInfoPresenter *)this)->create());
    *(undefined4 *)(((int)this) + 0x108) = uVar2;
    ((cocos2d::CCObject *)this)->retain();
    BLTalentInfoView::initView();
    ((BLTalentInfoPresenter *)*(undefined4 *)(((int)this) + 0x108))->initWithView((BLTalentInfoView*)((int)this));
  }
  return iVar1;
}

void BLTalentInfoView::onEnter()
{
  ((BLTalentInfoPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

// ===== 修复: 补回被误删的函数占位 (2) =====
void BLTalentInfoView::initView()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLTalentInfoView::onExit()
{
  ((BLTalentInfoPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}
