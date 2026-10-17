#include "BLTalentUpInfoView.h"
#include "BLLeakUtils.h"
#include "BLTalentUpInfoPresenter.h"
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
extern "C" long long func_0079e2ec(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e59c(...);
extern "C" long long func_0079e734(...);
extern "C" long long func_0079e8d4(...);
extern "C" long long func_0079e924(...);
extern "C" long long func_0079e964(...);
extern "C" long long ghidra_CONCAT13(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_006a3c24;
extern "C" unsigned long UNK_006a3c68;
extern "C" unsigned long UNK_006a3cac;
extern "C" unsigned long UNK_006a3cfc;
extern "C" unsigned long UNK_006a4024;
extern "C" unsigned long UNK_006a4052;
extern "C" unsigned long UNK_006a40a6;
extern "C" unsigned long UNK_006a40a8;
extern "C" unsigned long UNK_006a40d6;
extern "C" unsigned long UNK_006a4148;
extern "C" unsigned long UNK_006a41d4;
extern "C" unsigned long UNK_006a423e;
extern "C" unsigned long UNK_006a42dc;
extern "C" unsigned long UNK_006a44ca;
extern "C" unsigned long _UNK_006a3c98;
extern "C" unsigned long _UNK_006a3c9c;
extern "C" unsigned long _UNK_006a3cb0;
extern "C" unsigned long _UNK_006a3d00;
extern "C" unsigned long _UNK_006a407c;
extern "C" unsigned long _UNK_006a4080;
extern "C" unsigned long _UNK_006a43e0;
extern "C" unsigned long _UNK_006a43e4;
extern "C" unsigned long _UNK_006a43e8;
extern "C" unsigned long _UNK_006a43ec;
extern "C" unsigned long _UNK_006a43f0;
extern "C" unsigned long _UNK_006a43f4;
extern "C" unsigned long _UNK_006a43f8;
extern "C" unsigned long _UNK_006a43fc;
extern "C" unsigned long _UNK_006a4400;
extern "C" unsigned long _UNK_006a4404;
extern "C" unsigned long _UNK_006a4408;
extern "C" unsigned long _UNK_006a440c;
extern "C" unsigned long _UNK_006a4410;
extern "C" unsigned long _UNK_006a4414;
extern "C" unsigned long _UNK_006a4418;
extern "C" unsigned long _UNK_006a441c;
extern "C" unsigned long _UNK_006a4420;
extern "C" unsigned long _UNK_006a4584;
extern "C" unsigned long _UNK_006a4588;
extern "C" unsigned long _UNK_006a458c;
extern "C" unsigned long _UNK_006a4590;
extern "C" unsigned long extraout_r1;
extern "C" unsigned long extraout_r1_00;
extern "C" unsigned long g_006a3c24;
extern "C" unsigned long g_006a3c68;
extern "C" unsigned long g_006a3c98;
extern "C" unsigned long g_006a3c9c;
extern "C" unsigned long g_006a3cac;
extern "C" unsigned long g_006a3cb0;
extern "C" unsigned long g_006a3cfc;
extern "C" unsigned long g_006a3d00;
extern "C" unsigned long g_006a4024;
extern "C" unsigned long g_006a4052;
extern "C" unsigned long g_006a407c;
extern "C" unsigned long g_006a4080;
extern "C" unsigned long g_006a40a6;
extern "C" unsigned long g_006a40a8;
extern "C" unsigned long g_006a40d6;
extern "C" unsigned long g_006a4148;
extern "C" unsigned long g_006a41d4;
extern "C" unsigned long g_006a423e;
extern "C" unsigned long g_006a42dc;
extern "C" unsigned long g_006a43e0;
extern "C" unsigned long g_006a43e4;
extern "C" unsigned long g_006a43e8;
extern "C" unsigned long g_006a43ec;
extern "C" unsigned long g_006a43f0;
extern "C" unsigned long g_006a43f4;
extern "C" unsigned long g_006a43f8;
extern "C" unsigned long g_006a43fc;
extern "C" unsigned long g_006a4400;
extern "C" unsigned long g_006a4404;
extern "C" unsigned long g_006a4408;
extern "C" unsigned long g_006a440c;
extern "C" unsigned long g_006a4410;
extern "C" unsigned long g_006a4414;
extern "C" unsigned long g_006a4418;
extern "C" unsigned long g_006a441c;
extern "C" unsigned long g_006a4420;
extern "C" unsigned long g_006a44ca;
extern "C" unsigned long g_006a4584;
extern "C" unsigned long g_006a4588;
extern "C" unsigned long g_006a458c;
extern "C" unsigned long g_006a4590;
BLTalentUpInfoView::~BLTalentUpInfoView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_006a3c24 + g_006a3c98);
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
  func_0079e45c(&uStack_14,&g_006a3c68 + g_006a3c9c,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLTalentUpInfoView::BLTalentUpInfoView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_006a4024 + g_006a407c);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_006a4052 + g_006a4080,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}



undefined4 BLTalentUpInfoView::getLabLV()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 BLTalentUpInfoView::getSpIcon()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

undefined4 BLTalentUpInfoView::getBtnIcon()
{
  return *(undefined4 *)(((int)this) + 0x114);
}


bool BLTalentUpInfoView::init()
{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = ((cocos2d::CCLayer *)this)->init();
  if (iVar1 != 0) {
    uVar2 = (undefined4)(((BLTalentUpInfoPresenter *)this)->create());
    *(undefined4 *)(((int)this) + 0x108) = uVar2;
    ((cocos2d::CCObject *)this)->retain();
    BLTalentUpInfoView::initView();
    ((BLTalentUpInfoPresenter *)*(undefined4 *)(((int)this) + 0x108))->initWithView((BLTalentUpInfoView*)((int)this));
  }
  return iVar1;
}

void BLTalentUpInfoView::onEnter()
{
  ((BLTalentUpInfoPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

// ===== 修复: 补回被误删的函数占位 (4) =====
void BLTalentUpInfoView::initView()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

undefined4 BLTalentUpInfoView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x108);
}

undefined4 * BLTalentUpInfoView::getDebrisItemView()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return nullptr;
}

void BLTalentUpInfoView::onExit()
{
  ((BLTalentUpInfoPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}
