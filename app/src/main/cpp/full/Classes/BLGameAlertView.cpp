#include "BLGameAlertView.h"
#include "BLGameAlertPresenter.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
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
extern "C" long long ghidra_CONCAT13(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_005fb1ac;
extern "C" unsigned long UNK_005fb1fe;
extern "C" unsigned long UNK_005fb244;
extern "C" unsigned long UNK_005fb26c;
extern "C" unsigned long UNK_005fb432;
extern "C" unsigned long UNK_005fb514;
extern "C" unsigned long UNK_005fb60e;
extern "C" unsigned long UNK_005fb63c;
extern "C" unsigned long UNK_005fb71a;
extern "C" unsigned long UNK_005fb744;
extern "C" unsigned long UNK_005fb814;
extern "C" unsigned long UNK_005fb880;
extern "C" unsigned long UNK_005fb93e;
extern "C" unsigned long UNK_005fb972;
extern "C" unsigned long UNK_005fba8e;
extern "C" unsigned long UNK_005fbab8;
extern "C" unsigned long _DAT_005fb324;
extern "C" unsigned long _DAT_005fb328;
extern "C" unsigned long _UNK_005fb230;
extern "C" unsigned long _UNK_005fb234;
extern "C" unsigned long _UNK_005fb248;
extern "C" unsigned long _UNK_005fb270;
extern "C" unsigned long _UNK_005fb814;
extern "C" unsigned long _UNK_005fb818;
extern "C" unsigned long _UNK_005fb81c;
extern "C" unsigned long _UNK_005fb820;
extern "C" unsigned long _UNK_005fb824;
extern "C" unsigned long _UNK_005fb828;
extern "C" unsigned long _UNK_005fb82c;
extern "C" unsigned long _UNK_005fb830;
extern "C" unsigned long _UNK_005fb834;
extern "C" unsigned long _UNK_005fb838;
extern "C" unsigned long _UNK_005fb83c;
extern "C" unsigned long _UNK_005fb840;
extern "C" unsigned long _UNK_005fb844;
extern "C" unsigned long _UNK_005fb848;
extern "C" unsigned long _UNK_005fb84c;
extern "C" unsigned long _UNK_005fb850;
extern "C" unsigned long _UNK_005fbc0c;
extern "C" unsigned long _UNK_005fbc10;
extern "C" unsigned long _UNK_005fbc14;
extern "C" unsigned long _UNK_005fbc18;
extern "C" unsigned long _UNK_005fbc1c;
extern "C" unsigned long _UNK_005fbc20;
extern "C" unsigned long _UNK_005fbc24;
extern "C" unsigned long _UNK_005fbc28;
extern "C" unsigned long _UNK_005fbc2c;
extern "C" unsigned long _UNK_005fbc30;
extern "C" unsigned long _UNK_005fbc34;
extern "C" unsigned long _UNK_005fbc38;
extern "C" unsigned long _UNK_005fbc3c;
extern "C" unsigned long _UNK_005fbc40;
extern "C" unsigned long g_005fb1ac;
extern "C" unsigned long g_005fb1fe;
extern "C" unsigned long g_005fb230;
extern "C" unsigned long g_005fb234;
extern "C" unsigned long g_005fb244;
extern "C" unsigned long g_005fb248;
extern "C" unsigned long g_005fb26c;
extern "C" unsigned long g_005fb270;
extern "C" unsigned long g_005fb324;
extern "C" unsigned long g_005fb328;
extern "C" unsigned long g_005fb432;
extern "C" unsigned long g_005fb514;
extern "C" unsigned long g_005fb60e;
extern "C" unsigned long g_005fb63c;
extern "C" unsigned long g_005fb71a;
extern "C" unsigned long g_005fb744;
extern "C" unsigned long g_005fb814;
extern "C" unsigned long g_005fb818;
extern "C" unsigned long g_005fb81c;
extern "C" unsigned long g_005fb820;
extern "C" unsigned long g_005fb824;
extern "C" unsigned long g_005fb828;
extern "C" unsigned long g_005fb82c;
extern "C" unsigned long g_005fb830;
extern "C" unsigned long g_005fb834;
extern "C" unsigned long g_005fb838;
extern "C" unsigned long g_005fb83c;
extern "C" unsigned long g_005fb840;
extern "C" unsigned long g_005fb844;
extern "C" unsigned long g_005fb848;
extern "C" unsigned long g_005fb84c;
extern "C" unsigned long g_005fb850;
extern "C" unsigned long g_005fb880;
extern "C" unsigned long g_005fb93e;
extern "C" unsigned long g_005fb972;
extern "C" unsigned long g_005fba8e;
extern "C" unsigned long g_005fbab8;
extern "C" unsigned long g_005fbc0c;
extern "C" unsigned long g_005fbc10;
extern "C" unsigned long g_005fbc14;
extern "C" unsigned long g_005fbc18;
extern "C" unsigned long g_005fbc1c;
extern "C" unsigned long g_005fbc20;
extern "C" unsigned long g_005fbc24;
extern "C" unsigned long g_005fbc28;
extern "C" unsigned long g_005fbc2c;
extern "C" unsigned long g_005fbc30;
extern "C" unsigned long g_005fbc34;
extern "C" unsigned long g_005fbc38;
extern "C" unsigned long g_005fbc3c;
extern "C" unsigned long g_005fbc40;
BLGameAlertView::~BLGameAlertView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_005fb1ac + g_005fb230);
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
  if (*(int *)((int)this + 4*(0x43)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x43)) = 0;
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005fb1fe + g_005fb234,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLGameAlertView::BLGameAlertView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = (undefined4)(intptr_t)(*(int *)(g_005fb324 + 0x5fb2b4));
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  iVar2 = (undefined4)(intptr_t)(cocos2d::CCArray::create());
  *(int *)((int)this + 4*(0x42)) = iVar2;
  if (iVar2 != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLGameAlertView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * BLGameAlertView::create()
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

undefined4 BLGameAlertView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 BLGameAlertView::getBackGround()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

undefined4 BLGameAlertView::getTabBg()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

undefined4 BLGameAlertView::getBtnSure()
{
  return *(undefined4 *)(((int)this) + 0x118);
}

undefined4 BLGameAlertView::getBtnCancle()
{
  return *(undefined4 *)(((int)this) + 0x11c);
}

undefined4 BLGameAlertView::getLabSure()
{
  return *(undefined4 *)(((int)this) + 0x120);
}

undefined4 BLGameAlertView::getLabTitle()
{
  return *(undefined4 *)(((int)this) + 0x124);
}

undefined4 BLGameAlertView::getLabCancle()
{
  return *(undefined4 *)(((int)this) + 0x128);
}

void BLGameAlertView::onEnter()
{
  ((BLGameAlertPresenter *)*(undefined4 *)(((int)this) + 0x10c))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLGameAlertView::onExit()
{
  ((BLGameAlertPresenter *)*(undefined4 *)(((int)this) + 0x10c))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
bool BLGameAlertView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
