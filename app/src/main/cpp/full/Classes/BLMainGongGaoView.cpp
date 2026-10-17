#include "BLMainGongGaoView.h"
#include "CCLayer.h"
#include "CCObject.h"
#include "CCArray.h"
#include "BLLeakUtils.h"
#include "BLMainGongGaoPresenter.h"
#include "PagedScrollView.h"
#include "UIManager.h"
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
extern "C" unsigned long UNK_006033f8;
extern "C" unsigned long UNK_0060344a;
extern "C" unsigned long UNK_00603490;
extern "C" unsigned long UNK_006034b8;
extern "C" unsigned long UNK_00603726;
extern "C" unsigned long UNK_00603808;
extern "C" unsigned long UNK_006038f0;
extern "C" unsigned long UNK_006038f2;
extern "C" unsigned long UNK_0060399c;
extern "C" unsigned long UNK_006039cc;
extern "C" unsigned long UNK_00603aaa;
extern "C" unsigned long UNK_00603ad8;
extern "C" unsigned long _DAT_00603578;
extern "C" unsigned long _DAT_0060357c;
extern "C" unsigned long _UNK_0060347c;
extern "C" unsigned long _UNK_00603480;
extern "C" unsigned long _UNK_00603494;
extern "C" unsigned long _UNK_006034bc;
extern "C" unsigned long _UNK_00603b08;
extern "C" unsigned long _UNK_00603b0c;
extern "C" unsigned long _UNK_00603b10;
extern "C" unsigned long _UNK_00603b14;
extern "C" unsigned long _UNK_00603b18;
extern "C" unsigned long _UNK_00603b1c;
extern "C" unsigned long _UNK_00603b20;
extern "C" unsigned long _UNK_00603b24;
extern "C" unsigned long _UNK_00603b28;
extern "C" unsigned long _UNK_00603b2c;
extern "C" unsigned long _UNK_00603b30;
extern "C" unsigned long _UNK_00603b34;
extern "C" unsigned long _UNK_00603b38;
extern "C" unsigned long _UNK_00603b3c;
extern "C" unsigned long _UNK_00603b40;
extern "C" unsigned long _UNK_00603b44;
extern "C" unsigned long _UNK_00603d30;
extern "C" unsigned long _UNK_00603d34;
extern "C" unsigned long _UNK_00603d38;
extern "C" unsigned long _UNK_00603d3c;
extern "C" unsigned long _UNK_00603d40;
extern "C" unsigned long _UNK_00603d44;
extern "C" unsigned long g_006033f8;
extern "C" unsigned long g_0060344a;
extern "C" unsigned long g_0060347c;
extern "C" unsigned long g_00603480;
extern "C" unsigned long g_00603490;
extern "C" unsigned long g_00603494;
extern "C" unsigned long g_006034b8;
extern "C" unsigned long g_006034bc;
extern "C" unsigned long g_00603578;
extern "C" unsigned long g_0060357c;
extern "C" unsigned long g_00603726;
extern "C" unsigned long g_00603808;
extern "C" unsigned long g_006038f0;
extern "C" unsigned long g_006038f2;
extern "C" unsigned long g_0060399c;
extern "C" unsigned long g_006039cc;
extern "C" unsigned long g_00603aaa;
extern "C" unsigned long g_00603ad8;
extern "C" unsigned long g_00603b08;
extern "C" unsigned long g_00603b0c;
extern "C" unsigned long g_00603b10;
extern "C" unsigned long g_00603b14;
extern "C" unsigned long g_00603b18;
extern "C" unsigned long g_00603b1c;
extern "C" unsigned long g_00603b20;
extern "C" unsigned long g_00603b24;
extern "C" unsigned long g_00603b28;
extern "C" unsigned long g_00603b2c;
extern "C" unsigned long g_00603b30;
extern "C" unsigned long g_00603b34;
extern "C" unsigned long g_00603b38;
extern "C" unsigned long g_00603b3c;
extern "C" unsigned long g_00603b40;
extern "C" unsigned long g_00603b44;
extern "C" unsigned long g_00603d30;
extern "C" unsigned long g_00603d34;
extern "C" unsigned long g_00603d38;
extern "C" unsigned long g_00603d3c;
extern "C" unsigned long g_00603d40;
extern "C" unsigned long g_00603d44;
BLMainGongGaoView::~BLMainGongGaoView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_006033f8 + g_0060347c);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  if (*(int *)((int)this + 4*(0x43)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x43)) = 0;
  }
  if (*(int *)((int)this + 4*(0x44)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x44)) = 0;
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0060344a + g_00603480,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}


int * BLMainGongGaoView::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x130)));
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

undefined4 BLMainGongGaoView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

undefined4 BLMainGongGaoView::getBtnClose()
{
  return *(undefined4 *)(((int)this) + 0x120);
}

undefined4 BLMainGongGaoView::getBtnWinList()
{
  return *(undefined4 *)(((int)this) + 0x124);
}

undefined4 BLMainGongGaoView::getContinerLayer()
{
  return *(undefined4 *)(((int)this) + 0x128);
}

void BLMainGongGaoView::onEnter()
{
  ((BLMainGongGaoPresenter *)*(undefined4 *)(((int)this) + 0x110))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLMainGongGaoView::onExit()
{
  ((BLMainGongGaoPresenter *)*(undefined4 *)(((int)this) + 0x110))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (2) =====
BLMainGongGaoView::BLMainGongGaoView()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  piStack_20 = (int *)((int)this);
  uStack_1c = (undefined4)(p2);
  uStack_18 = (undefined4)(p3);
  0 /* ctorZero */;
  iVar2 = (undefined4)(intptr_t)(*(int *)(g_00603578 + 0x603500));
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  iVar2 = (undefined4)(intptr_t)(cocos2d::CCArray::create());
  *(int *)((int)this + 4*(0x43)) = iVar2;
  if (iVar2 != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_1c,"BLMainGongGaoView",&piStack_20);
  ((BLLeakUtils *)(uVar1))->addClass((std::string)(char*)uStack_1c);
  func_0079e2bc(&uStack_1c);
  ((UIManager *)this)->shareManager();
  iVar2 = (undefined4)((void)(((UIManager *)this)->getGongGaoPngNum()),(intptr_t)0);
  *(int *)((int)this + 4*(0x4b)) = iVar2;
  return;
}

bool BLMainGongGaoView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
