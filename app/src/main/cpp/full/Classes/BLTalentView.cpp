#include "BLTalentView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLListButton.h"
#include "BLRichText.h"
#include "BLTalentDrawView.h"
#include "BLTalentLimitView.h"
#include "BLTalentPresenter.h"
#include "RichTextData.h"
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
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long func_0079e5bc(...);
extern "C" long long func_0079e5fc(...);
extern "C" long long ghidra_CONCAT13(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_006a47b8;
extern "C" unsigned long UNK_006a47ea;
extern "C" unsigned long UNK_006a4844;
extern "C" unsigned long UNK_006a486c;
extern "C" unsigned long UNK_006a49b6;
extern "C" unsigned long UNK_006a49f8;
extern "C" unsigned long UNK_006a4a6c;
extern "C" unsigned long UNK_006a4a86;
extern "C" unsigned long UNK_006a4b18;
extern "C" unsigned long UNK_006a4bfc;
extern "C" unsigned long UNK_006a4c8e;
extern "C" unsigned long UNK_006a4cd6;
extern "C" unsigned long UNK_006a4d22;
extern "C" unsigned long UNK_006a4d72;
extern "C" unsigned long UNK_006a4d73;
extern "C" unsigned long UNK_006a4d74;
extern "C" unsigned long UNK_006a5154;
extern "C" unsigned long UNK_006a5170;
extern "C" unsigned long UNK_006a5252;
extern "C" unsigned long UNK_006a5346;
extern "C" unsigned long UNK_006a53d4;
extern "C" unsigned long UNK_006a53f2;
extern "C" unsigned long UNK_006a5456;
extern "C" unsigned long UNK_006a5472;
extern "C" unsigned long UNK_006a5480;
extern "C" unsigned long UNK_006a554e;
extern "C" unsigned long UNK_006a556c;
extern "C" unsigned long UNK_006a5588;
extern "C" unsigned long _DAT_006a490c;
extern "C" unsigned long _DAT_006a4910;
extern "C" unsigned long _UNK_006a4830;
extern "C" unsigned long _UNK_006a4834;
extern "C" unsigned long _UNK_006a4848;
extern "C" unsigned long _UNK_006a4870;
extern "C" unsigned long _UNK_006a4c10;
extern "C" unsigned long _UNK_006a4c14;
extern "C" unsigned long _UNK_006a4c18;
extern "C" unsigned long _UNK_006a4c1c;
extern "C" unsigned long _UNK_006a4c20;
extern "C" unsigned long _UNK_006a4c24;
extern "C" unsigned long _UNK_006a4c28;
extern "C" unsigned long _UNK_006a4c2c;
extern "C" unsigned long _UNK_006a4c30;
extern "C" unsigned long _UNK_006a4c34;
extern "C" unsigned long _UNK_006a4c38;
extern "C" unsigned long _UNK_006a4c3c;
extern "C" unsigned long _UNK_006a4c40;
extern "C" unsigned long _UNK_006a4c44;
extern "C" unsigned long _UNK_006a4fe8;
extern "C" unsigned long _UNK_006a4fec;
extern "C" unsigned long _UNK_006a4ff0;
extern "C" unsigned long _UNK_006a4ff4;
extern "C" unsigned long _UNK_006a4ff8;
extern "C" unsigned long _UNK_006a4ffc;
extern "C" unsigned long _UNK_006a5000;
extern "C" unsigned long _UNK_006a5004;
extern "C" unsigned long _UNK_006a50a4;
extern "C" unsigned long _UNK_006a50a8;
extern "C" unsigned long _UNK_006a54c4;
extern "C" unsigned long _UNK_006a54c8;
extern "C" unsigned long _UNK_006a54cc;
extern "C" unsigned long _UNK_006a54d0;
extern "C" unsigned long _UNK_006a54d4;
extern "C" unsigned long _UNK_006a54d8;
extern "C" unsigned long _UNK_006a54dc;
extern "C" unsigned long _UNK_006a54e0;
extern "C" unsigned long _UNK_006a54e4;
extern "C" unsigned long _UNK_006a54e8;
extern "C" unsigned long _UNK_006a54ec;
extern "C" unsigned long _UNK_006a54f0;
extern "C" unsigned long _UNK_006a54f4;
extern "C" unsigned long _UNK_006a54f8;
extern "C" unsigned long _UNK_006a54fc;
extern "C" unsigned long _UNK_006a5500;
extern "C" unsigned long _UNK_006a5688;
extern "C" unsigned long _UNK_006a568c;
extern "C" unsigned long _UNK_006a5690;
extern "C" unsigned long _UNK_006a5694;
extern "C" unsigned long _UNK_006a5698;
extern "C" unsigned long g_006a47b8;
extern "C" unsigned long g_006a47ea;
extern "C" unsigned long g_006a4830;
extern "C" unsigned long g_006a4834;
extern "C" unsigned long g_006a4844;
extern "C" unsigned long g_006a4848;
extern "C" unsigned long g_006a486c;
extern "C" unsigned long g_006a4870;
extern "C" unsigned long g_006a490c;
extern "C" unsigned long g_006a4910;
extern "C" unsigned long g_006a49b6;
extern "C" unsigned long g_006a49f8;
extern "C" unsigned long g_006a4a6c;
extern "C" unsigned long g_006a4a86;
extern "C" unsigned long g_006a4b18;
extern "C" unsigned long g_006a4bfc;
extern "C" unsigned long g_006a4c10;
extern "C" unsigned long g_006a4c14;
extern "C" unsigned long g_006a4c18;
extern "C" unsigned long g_006a4c1c;
extern "C" unsigned long g_006a4c20;
extern "C" unsigned long g_006a4c24;
extern "C" unsigned long g_006a4c28;
extern "C" unsigned long g_006a4c2c;
extern "C" unsigned long g_006a4c30;
extern "C" unsigned long g_006a4c34;
extern "C" unsigned long g_006a4c38;
extern "C" unsigned long g_006a4c3c;
extern "C" unsigned long g_006a4c40;
extern "C" unsigned long g_006a4c44;
extern "C" unsigned long g_006a4c8e;
extern "C" unsigned long g_006a4cd6;
extern "C" unsigned long g_006a4d22;
extern "C" unsigned long g_006a4d72;
extern "C" unsigned long g_006a4d73;
extern "C" unsigned long g_006a4d74;
extern "C" unsigned long g_006a4fe8;
extern "C" unsigned long g_006a4fec;
extern "C" unsigned long g_006a4ff0;
extern "C" unsigned long g_006a4ff4;
extern "C" unsigned long g_006a4ff8;
extern "C" unsigned long g_006a4ffc;
extern "C" unsigned long g_006a5000;
extern "C" unsigned long g_006a5004;
extern "C" unsigned long g_006a50a4;
extern "C" unsigned long g_006a50a8;
extern "C" unsigned long g_006a5154;
extern "C" unsigned long g_006a5170;
extern "C" unsigned long g_006a5252;
extern "C" unsigned long g_006a5346;
extern "C" unsigned long g_006a53d4;
extern "C" unsigned long g_006a53f2;
extern "C" unsigned long g_006a5456;
extern "C" unsigned long g_006a5472;
extern "C" unsigned long g_006a5480;
extern "C" unsigned long g_006a54c4;
extern "C" unsigned long g_006a54c8;
extern "C" unsigned long g_006a54cc;
extern "C" unsigned long g_006a54d0;
extern "C" unsigned long g_006a54d4;
extern "C" unsigned long g_006a54d8;
extern "C" unsigned long g_006a54dc;
extern "C" unsigned long g_006a54e0;
extern "C" unsigned long g_006a54e4;
extern "C" unsigned long g_006a54e8;
extern "C" unsigned long g_006a54ec;
extern "C" unsigned long g_006a54f0;
extern "C" unsigned long g_006a54f4;
extern "C" unsigned long g_006a54f8;
extern "C" unsigned long g_006a54fc;
extern "C" unsigned long g_006a5500;
extern "C" unsigned long g_006a554e;
extern "C" unsigned long g_006a556c;
extern "C" unsigned long g_006a5588;
extern "C" unsigned long g_006a5688;
extern "C" unsigned long g_006a568c;
extern "C" unsigned long g_006a5690;
extern "C" unsigned long g_006a5694;
extern "C" unsigned long g_006a5698;
BLTalentView::~BLTalentView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_006a47b8 + g_006a4830);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_006a47ea + g_006a4834,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  if (*(int *)((int)this + 4*(0x42)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x42)) = 0;
  }
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLTalentView::BLTalentView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(g_006a490c + 0x6a48b4);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLTalentView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

undefined4 BLTalentView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x108);
}

undefined4 BLTalentView::getBtnClose()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 BLTalentView::getListBtn()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

undefined4 BLTalentView::getUpInfoView()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

undefined4 BLTalentView::getDownInfoView()
{
  return *(undefined4 *)(((int)this) + 0x118);
}

undefined4 BLTalentView::getLabVipTips()
{
  return *(undefined4 *)(((int)this) + 0x120);
}

undefined4 BLTalentView::getBtnVip()
{
  return *(undefined4 *)(((int)this) + 0x124);
}

undefined4 BLTalentView::getBtnActive()
{
  return *(undefined4 *)(((int)this) + 0x128);
}

undefined4 BLTalentView::getLabActiveFree()
{
  return *(undefined4 *)(((int)this) + 300);
}

undefined4 BLTalentView::getTextActive()
{
  return *(undefined4 *)(((int)this) + 0x130);
}

undefined4 BLTalentView::getLabActiveAlready()
{
  return *(undefined4 *)(((int)this) + 0x134);
}

undefined4 BLTalentView::getLabActiveAble()
{
  return *(undefined4 *)(((int)this) + 0x138);
}

undefined4 BLTalentView::getLimitView()
{
  return *(undefined4 *)(((int)this) + 0x13c);
}


bool BLTalentView::init()
{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = ((cocos2d::CCLayer *)this)->init();
  if (iVar1 != 0) {
    uVar2 = (undefined4)(((BLTalentPresenter *)this)->create());
    *(undefined4 *)(((int)this) + 0x108) = uVar2;
    ((cocos2d::CCObject *)this)->retain();
    BLTalentView::initView();
    ((BLTalentPresenter *)*(undefined4 *)(((int)this) + 0x108))->initWithView((BLTalentView*)((int)this));
  }
  return iVar1;
}

void BLTalentView::onEnter()
{
  ((BLTalentPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLTalentView::onExit()
{
  ((BLTalentPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
void BLTalentView::initView()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
