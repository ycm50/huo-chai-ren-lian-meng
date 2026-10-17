#include "BLGuideFunctionView.h"
#include "BLGuideFunctionPresenter.h"
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
extern "C" unsigned long UNK_005fd3f4;
extern "C" unsigned long UNK_005fd446;
extern "C" unsigned long UNK_005fd48c;
extern "C" unsigned long UNK_005fd4b4;
extern "C" unsigned long UNK_005fd670;
extern "C" unsigned long UNK_005fd752;
extern "C" unsigned long UNK_005fd84e;
extern "C" unsigned long UNK_005fd878;
extern "C" unsigned long UNK_005fd94a;
extern "C" unsigned long UNK_005fd974;
extern "C" unsigned long UNK_005fdadc;
extern "C" unsigned long UNK_005fdb10;
extern "C" unsigned long UNK_005fdbc6;
extern "C" unsigned long _DAT_005fd56c;
extern "C" unsigned long _DAT_005fd570;
extern "C" unsigned long _UNK_005fd478;
extern "C" unsigned long _UNK_005fd47c;
extern "C" unsigned long _UNK_005fd490;
extern "C" unsigned long _UNK_005fd4b8;
extern "C" unsigned long _UNK_005fda54;
extern "C" unsigned long _UNK_005fda58;
extern "C" unsigned long _UNK_005fda5c;
extern "C" unsigned long _UNK_005fda60;
extern "C" unsigned long _UNK_005fda64;
extern "C" unsigned long _UNK_005fda68;
extern "C" unsigned long _UNK_005fda6c;
extern "C" unsigned long _UNK_005fda70;
extern "C" unsigned long _UNK_005fda74;
extern "C" unsigned long _UNK_005fda78;
extern "C" unsigned long _UNK_005fda7c;
extern "C" unsigned long _UNK_005fda80;
extern "C" unsigned long _UNK_005fda84;
extern "C" unsigned long _UNK_005fda88;
extern "C" unsigned long _UNK_005fda8c;
extern "C" unsigned long _UNK_005fda90;
extern "C" unsigned long _UNK_005fda94;
extern "C" unsigned long _UNK_005fda98;
extern "C" unsigned long _UNK_005fda9c;
extern "C" unsigned long _UNK_005fdaa0;
extern "C" unsigned long _UNK_005fdcf4;
extern "C" unsigned long _UNK_005fdcf8;
extern "C" unsigned long _UNK_005fdcfc;
extern "C" unsigned long _UNK_005fdd00;
extern "C" unsigned long _UNK_005fdd04;
extern "C" unsigned long _UNK_005fdd08;
extern "C" unsigned long _UNK_005fdd0c;
extern "C" unsigned long _UNK_005fdd10;
extern "C" unsigned long _UNK_005fdd14;
extern "C" unsigned long _UNK_005fdd18;
extern "C" unsigned long g_005fd3f4;
extern "C" unsigned long g_005fd446;
extern "C" unsigned long g_005fd478;
extern "C" unsigned long g_005fd47c;
extern "C" unsigned long g_005fd48c;
extern "C" unsigned long g_005fd490;
extern "C" unsigned long g_005fd4b4;
extern "C" unsigned long g_005fd4b8;
extern "C" unsigned long g_005fd56c;
extern "C" unsigned long g_005fd570;
extern "C" unsigned long g_005fd670;
extern "C" unsigned long g_005fd752;
extern "C" unsigned long g_005fd84e;
extern "C" unsigned long g_005fd878;
extern "C" unsigned long g_005fd94a;
extern "C" unsigned long g_005fd974;
extern "C" unsigned long g_005fda54;
extern "C" unsigned long g_005fda58;
extern "C" unsigned long g_005fda5c;
extern "C" unsigned long g_005fda60;
extern "C" unsigned long g_005fda64;
extern "C" unsigned long g_005fda68;
extern "C" unsigned long g_005fda6c;
extern "C" unsigned long g_005fda70;
extern "C" unsigned long g_005fda74;
extern "C" unsigned long g_005fda78;
extern "C" unsigned long g_005fda7c;
extern "C" unsigned long g_005fda80;
extern "C" unsigned long g_005fda84;
extern "C" unsigned long g_005fda88;
extern "C" unsigned long g_005fda8c;
extern "C" unsigned long g_005fda90;
extern "C" unsigned long g_005fda94;
extern "C" unsigned long g_005fda98;
extern "C" unsigned long g_005fda9c;
extern "C" unsigned long g_005fdaa0;
extern "C" unsigned long g_005fdadc;
extern "C" unsigned long g_005fdb10;
extern "C" unsigned long g_005fdbc6;
extern "C" unsigned long g_005fdcf4;
extern "C" unsigned long g_005fdcf8;
extern "C" unsigned long g_005fdcfc;
extern "C" unsigned long g_005fdd00;
extern "C" unsigned long g_005fdd04;
extern "C" unsigned long g_005fdd08;
extern "C" unsigned long g_005fdd0c;
extern "C" unsigned long g_005fdd10;
extern "C" unsigned long g_005fdd14;
extern "C" unsigned long g_005fdd18;
BLGuideFunctionView::~BLGuideFunctionView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_005fd3f4 + g_005fd478);
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
  func_0079e45c(&uStack_14,&g_005fd446 + g_005fd47c,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLGuideFunctionView::BLGuideFunctionView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = (undefined4)(intptr_t)(*(int *)(g_005fd56c + 0x5fd4fc));
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
  func_0079e45c(&uStack_14,((intptr_t)"BLGuideFunctionView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * BLGuideFunctionView::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x128)));
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

undefined4 BLGuideFunctionView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 BLGuideFunctionView::getBG()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

undefined4 BLGuideFunctionView::getSmallBg()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

undefined4 BLGuideFunctionView::getBtnClick()
{
  return *(undefined4 *)(((int)this) + 0x118);
}

undefined4 BLGuideFunctionView::getLabContent()
{
  return *(undefined4 *)(((int)this) + 0x11c);
}

undefined4 BLGuideFunctionView::getLabBtn()
{
  return *(undefined4 *)(((int)this) + 0x120);
}

undefined4 BLGuideFunctionView::getSprimg_Role()
{
  return *(undefined4 *)(((int)this) + 0x124);
}

void BLGuideFunctionView::onEnter()
{
  ((BLGuideFunctionPresenter *)*(undefined4 *)(((int)this) + 0x10c))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLGuideFunctionView::onExit()
{
  ((BLGuideFunctionPresenter *)*(undefined4 *)(((int)this) + 0x10c))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
bool BLGuideFunctionView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
