#include "BLLuckShopDataInfoView.h"
#include "CCLayer.h"
#include "CCObject.h"
#include "CCSprite.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLLuckShopDataInfoPresenter.h"
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
extern "C" long long func_0079e59c(...);
extern "C" long long ghidra_CONCAT13(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_005843f8;
extern "C" unsigned long UNK_0058443c;
extern "C" unsigned long UNK_00584480;
extern "C" unsigned long UNK_005844a8;
extern "C" unsigned long UNK_00584656;
extern "C" unsigned long UNK_0058473c;
extern "C" unsigned long UNK_0058482a;
extern "C" unsigned long UNK_00584856;
extern "C" unsigned long UNK_00584920;
extern "C" unsigned long UNK_00584958;
extern "C" unsigned long UNK_00584a24;
extern "C" unsigned long UNK_00584b04;
extern "C" unsigned long UNK_00584b90;
extern "C" unsigned long UNK_00584c20;
extern "C" unsigned long UNK_00584c22;
extern "C" unsigned long UNK_00584cb8;
extern "C" unsigned long UNK_00584ce2;
extern "C" unsigned long UNK_00584da0;
extern "C" unsigned long UNK_00584ee2;
extern "C" unsigned long UNK_00584ee6;
extern "C" unsigned long UNK_00584fa2;
extern "C" unsigned long UNK_00584fca;
extern "C" unsigned long UNK_00584ff2;
extern "C" unsigned long UNK_005850ce;
extern "C" unsigned long UNK_005850e4;
extern "C" unsigned long _DAT_00584548;
extern "C" unsigned long _DAT_0058454c;
extern "C" unsigned long _UNK_0058446c;
extern "C" unsigned long _UNK_00584470;
extern "C" unsigned long _UNK_00584484;
extern "C" unsigned long _UNK_005844ac;
extern "C" unsigned long _UNK_00584a38;
extern "C" unsigned long _UNK_00584a3c;
extern "C" unsigned long _UNK_00584a40;
extern "C" unsigned long _UNK_00584a44;
extern "C" unsigned long _UNK_00584a48;
extern "C" unsigned long _UNK_00584a4c;
extern "C" unsigned long _UNK_00584a50;
extern "C" unsigned long _UNK_00584a54;
extern "C" unsigned long _UNK_00584a58;
extern "C" unsigned long _UNK_00584a5c;
extern "C" unsigned long _UNK_00584a60;
extern "C" unsigned long _UNK_00584a64;
extern "C" unsigned long _UNK_00584a68;
extern "C" unsigned long _UNK_00584a6c;
extern "C" unsigned long _UNK_00584a70;
extern "C" unsigned long _UNK_00584e94;
extern "C" unsigned long _UNK_00584e98;
extern "C" unsigned long _UNK_00584e9c;
extern "C" unsigned long _UNK_00584ea0;
extern "C" unsigned long _UNK_00584ea4;
extern "C" unsigned long _UNK_00584ea8;
extern "C" unsigned long _UNK_00584eac;
extern "C" unsigned long _UNK_00584eb0;
extern "C" unsigned long _UNK_00584eb4;
extern "C" unsigned long _UNK_00584eb8;
extern "C" unsigned long _UNK_00584ebc;
extern "C" unsigned long _UNK_00584ec0;
extern "C" unsigned long _UNK_00584ec4;
extern "C" unsigned long _UNK_00584ec8;
extern "C" unsigned long _UNK_00585220;
extern "C" unsigned long _UNK_00585224;
extern "C" unsigned long _UNK_00585228;
extern "C" unsigned long _UNK_0058522c;
extern "C" unsigned long _UNK_00585230;
extern "C" unsigned long _UNK_00585234;
extern "C" unsigned long _UNK_00585238;
extern "C" unsigned long _UNK_0058523c;
extern "C" unsigned long _UNK_00585240;
extern "C" unsigned long _UNK_00585244;
extern "C" unsigned long _UNK_00585248;
extern "C" unsigned long _UNK_0058524c;
extern "C" unsigned long _UNK_00585250;
extern "C" unsigned long _UNK_00585254;
extern "C" unsigned long _UNK_00585258;
extern "C" unsigned long g_005843f8;
extern "C" unsigned long g_0058443c;
extern "C" unsigned long g_0058446c;
extern "C" unsigned long g_00584470;
extern "C" unsigned long g_00584480;
extern "C" unsigned long g_00584484;
extern "C" unsigned long g_005844a8;
extern "C" unsigned long g_005844ac;
extern "C" unsigned long g_00584548;
extern "C" unsigned long g_0058454c;
extern "C" unsigned long g_00584656;
extern "C" unsigned long g_0058473c;
extern "C" unsigned long g_0058482a;
extern "C" unsigned long g_00584856;
extern "C" unsigned long g_00584920;
extern "C" unsigned long g_00584958;
extern "C" unsigned long g_00584a24;
extern "C" unsigned long g_00584a38;
extern "C" unsigned long g_00584a3c;
extern "C" unsigned long g_00584a40;
extern "C" unsigned long g_00584a44;
extern "C" unsigned long g_00584a48;
extern "C" unsigned long g_00584a4c;
extern "C" unsigned long g_00584a50;
extern "C" unsigned long g_00584a54;
extern "C" unsigned long g_00584a58;
extern "C" unsigned long g_00584a5c;
extern "C" unsigned long g_00584a60;
extern "C" unsigned long g_00584a64;
extern "C" unsigned long g_00584a68;
extern "C" unsigned long g_00584a6c;
extern "C" unsigned long g_00584a70;
extern "C" unsigned long g_00584b04;
extern "C" unsigned long g_00584b90;
extern "C" unsigned long g_00584c20;
extern "C" unsigned long g_00584c22;
extern "C" unsigned long g_00584cb8;
extern "C" unsigned long g_00584ce2;
extern "C" unsigned long g_00584da0;
extern "C" unsigned long g_00584e94;
extern "C" unsigned long g_00584e98;
extern "C" unsigned long g_00584e9c;
extern "C" unsigned long g_00584ea0;
extern "C" unsigned long g_00584ea4;
extern "C" unsigned long g_00584ea8;
extern "C" unsigned long g_00584eac;
extern "C" unsigned long g_00584eb0;
extern "C" unsigned long g_00584eb4;
extern "C" unsigned long g_00584eb8;
extern "C" unsigned long g_00584ebc;
extern "C" unsigned long g_00584ec0;
extern "C" unsigned long g_00584ec4;
extern "C" unsigned long g_00584ec8;
extern "C" unsigned long g_00584ee2;
extern "C" unsigned long g_00584ee6;
extern "C" unsigned long g_00584fa2;
extern "C" unsigned long g_00584fca;
extern "C" unsigned long g_00584ff2;
extern "C" unsigned long g_005850ce;
extern "C" unsigned long g_005850e4;
extern "C" unsigned long g_00585220;
extern "C" unsigned long g_00585224;
extern "C" unsigned long g_00585228;
extern "C" unsigned long g_0058522c;
extern "C" unsigned long g_00585230;
extern "C" unsigned long g_00585234;
extern "C" unsigned long g_00585238;
extern "C" unsigned long g_0058523c;
extern "C" unsigned long g_00585240;
extern "C" unsigned long g_00585244;
extern "C" unsigned long g_00585248;
extern "C" unsigned long g_0058524c;
extern "C" unsigned long g_00585250;
extern "C" unsigned long g_00585254;
extern "C" unsigned long g_00585258;
cocos2d::CCSprite* BLLuckShopDataInfoView::getSpriteDebris() const
{
  return (cocos2d::CCSprite*)(*(undefined4 *)(((int)this) + 0x108));
}

BLLuckShopDataInfoView::~BLLuckShopDataInfoView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_005843f8 + g_0058446c);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x210;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x240;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x24c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  if (*(int *)((int)this + 4*(0x43)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x43)) = 0;
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0058443c + g_00584470,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLLuckShopDataInfoView::BLLuckShopDataInfoView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(g_00584548 + 0x5844f0);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x210;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x240;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x24c;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLLuckShopDataInfoView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * BLLuckShopDataInfoView::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x134)));
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

undefined4 BLLuckShopDataInfoView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 BLLuckShopDataInfoView::getBtnClose()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

undefined4 BLLuckShopDataInfoView::getLabTitle()
{
  return *(undefined4 *)(((int)this) + 0x11c);
}

undefined4 BLLuckShopDataInfoView::getSpriteItem()
{
  return *(undefined4 *)(((int)this) + 0x120);
}

undefined4 BLLuckShopDataInfoView::getLabContent()
{
  return *(undefined4 *)(((int)this) + 0x124);
}

undefined4 BLLuckShopDataInfoView::getLabJiFen()
{
  return *(undefined4 *)(((int)this) + 300);
}

undefined4 BLLuckShopDataInfoView::getLabItemNum()
{
  return *(undefined4 *)(((int)this) + 0x128);
}

undefined4 BLLuckShopDataInfoView::getBtnBuy()
{
  return *(undefined4 *)(((int)this) + 0x130);
}

void BLLuckShopDataInfoView::onEnter()
{
  ((BLLuckShopDataInfoPresenter *)*(undefined4 *)(((int)this) + 0x10c))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLLuckShopDataInfoView::onExit()
{
  ((BLLuckShopDataInfoPresenter *)*(undefined4 *)(((int)this) + 0x10c))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (2) =====
void BLLuckShopDataInfoView::setSpriteDebris(cocos2d::CCSprite* p1)
{
  *(undefined4 *)(((int)this) + 0x108) = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  return;
}

bool BLLuckShopDataInfoView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
