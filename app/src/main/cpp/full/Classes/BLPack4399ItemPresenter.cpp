#include "BLPack4399ItemPresenter.h"
#include "BLPack4399ItemView.h"
#include "BLItemDataInfoPresenter.h"
#include "BLItemDataInfoView.h"
#include "BackPackItemData.h"
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
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e55c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_00548c00;
extern "C" unsigned long UNK_00548c18;
extern "C" unsigned long UNK_00548c30;
extern "C" unsigned long UNK_00548ca2;
extern "C" unsigned long UNK_00548cc0;
extern "C" unsigned long UNK_00548ce8;
extern "C" unsigned long UNK_00548d00;
extern "C" unsigned long UNK_00548e18;
extern "C" unsigned long UNK_00548e4e;
extern "C" unsigned long _UNK_00548c04;
extern "C" unsigned long _UNK_00548c1c;
extern "C" unsigned long _UNK_00548c34;
extern "C" unsigned long _UNK_00548cb0;
extern "C" unsigned long _UNK_00548cc4;
extern "C" unsigned long _UNK_00548cec;
extern "C" unsigned long _UNK_00548df4;
extern "C" unsigned long _UNK_00548df8;
extern "C" unsigned long _UNK_00548dfc;
extern "C" unsigned long _UNK_00548e00;
extern "C" unsigned long _UNK_00548e04;
extern "C" unsigned long _UNK_00548e28;
extern "C" unsigned long _UNK_00548e58;
extern "C" unsigned long g_00548c00;
extern "C" unsigned long g_00548c04;
extern "C" unsigned long g_00548c18;
extern "C" unsigned long g_00548c1c;
extern "C" unsigned long g_00548c30;
extern "C" unsigned long g_00548c34;
extern "C" unsigned long g_00548ca2;
extern "C" unsigned long g_00548cb0;
extern "C" unsigned long g_00548cc0;
extern "C" unsigned long g_00548cc4;
extern "C" unsigned long g_00548ce8;
extern "C" unsigned long g_00548cec;
extern "C" unsigned long g_00548d00;
extern "C" unsigned long g_00548df4;
extern "C" unsigned long g_00548df8;
extern "C" unsigned long g_00548dfc;
extern "C" unsigned long g_00548e00;
extern "C" unsigned long g_00548e04;
extern "C" unsigned long g_00548e18;
extern "C" unsigned long g_00548e28;
extern "C" unsigned long g_00548e4e;
extern "C" unsigned long g_00548e58;
bool BLPack4399ItemPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLPack4399ItemPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLPack4399ItemPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLPack4399ItemPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

BLPack4399ItemPresenter::~BLPack4399ItemPresenter()
{
  /* VPTR_FIX(R87): vptr=(&g_A+g_B)+8 ?? g_ ?? 0 ?? -> ???? SEGV?????? vptr???? */;
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}


BLPack4399ItemPresenter::BLPack4399ItemPresenter()
{
  int iVar1;
  
  0 /* ctorZero */;
  iVar1 = *(int *)(&g_00548e18 + g_00548e28);
  *(int *)((int)this + 4*(5)) = iVar1 + 0x38;
  *(int *)this = iVar1 + 8;
  *(int *)((int)this + 4*(6)) = 0;
  return;
}


int * BLPack4399ItemPresenter::create(BLPack4399ItemView* p1)
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x1c)));
  0 /* ctorZero */;
  iVar2 = ((BLPack4399ItemPresenter *)piVar1)->initWithView((BLPack4399ItemView*)((int)this));
  if (iVar2 == 0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    piVar1 = (int *)0x0;
  }
  else {
    ((cocos2d::CCObject *)piVar1)->autorelease();
  }
  return (int *)(piVar1);
}

void BLPack4399ItemPresenter::onExit()
{
  return;
}

// ===== 修复: 补回被误删的函数占位 (2) =====
void BLPack4399ItemPresenter::onShowItem(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

undefined4 BLPack4399ItemPresenter::initWithView(BLPack4399ItemView* p1)
{
  *(int *)(((int)this) + 0x18) = (undefined4)(intptr_t)p1;
  (**(code **)(**(int **)(p1 + 0x114) + 0x254))
            (*(int **)(p1 + 0x114),((int)this),*(undefined4 *)((unsigned char *)((char *)&g_00548e4e + (intptr_t)(g_00548e58))),0,
             0x20);
  return 1;
}
