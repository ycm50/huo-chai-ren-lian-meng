#include "BLLuckyDrawItemPresenter.h"
#include "CCObject.h"
#include "CCTouch.h"
#include "BLLuckyDrawItemView.h"
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
using namespace cocos2d;
// 兜底声明
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e55c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_005869f2;
extern "C" unsigned long UNK_00586a10;
extern "C" unsigned long UNK_00586a38;
extern "C" unsigned long UNK_00586a50;
extern "C" unsigned long UNK_00586b68;
extern "C" unsigned long UNK_00586b9e;
extern "C" unsigned long _UNK_00586a00;
extern "C" unsigned long _UNK_00586a14;
extern "C" unsigned long _UNK_00586a3c;
extern "C" unsigned long _UNK_00586b44;
extern "C" unsigned long _UNK_00586b48;
extern "C" unsigned long _UNK_00586b4c;
extern "C" unsigned long _UNK_00586b50;
extern "C" unsigned long _UNK_00586b54;
extern "C" unsigned long _UNK_00586b78;
extern "C" unsigned long _UNK_00586ba8;
extern "C" unsigned long g_005869f2;
extern "C" unsigned long g_00586a00;
extern "C" unsigned long g_00586a10;
extern "C" unsigned long g_00586a14;
extern "C" unsigned long g_00586a38;
extern "C" unsigned long g_00586a3c;
extern "C" unsigned long g_00586a50;
extern "C" unsigned long g_00586b44;
extern "C" unsigned long g_00586b48;
extern "C" unsigned long g_00586b4c;
extern "C" unsigned long g_00586b50;
extern "C" unsigned long g_00586b54;
extern "C" unsigned long g_00586b68;
extern "C" unsigned long g_00586b78;
extern "C" unsigned long g_00586b9e;
extern "C" unsigned long g_00586ba8;
bool BLLuckyDrawItemPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLLuckyDrawItemPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLLuckyDrawItemPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLLuckyDrawItemPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

BLLuckyDrawItemPresenter::~BLLuckyDrawItemPresenter()
{
  /* VPTR_FIX(R87): vptr=(&g_A+g_B)+8 ?? g_ ?? 0 ?? -> ???? SEGV?????? vptr???? */;
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}


BLLuckyDrawItemPresenter::BLLuckyDrawItemPresenter()
{
  int iVar1;
  
  0 /* ctorZero */;
  iVar1 = *(int *)(&g_00586b68 + g_00586b78);
  *(int *)((int)this + 4*(5)) = iVar1 + 0x38;
  *(int *)this = iVar1 + 8;
  *(int *)((int)this + 4*(6)) = 0;
  return;
}



void BLLuckyDrawItemPresenter::onExit()
{
  return;
}

// ===== 修复: 补回被误删的函数占位 (3) =====
void BLLuckyDrawItemPresenter::onShowItem(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLLuckyDrawItemPresenter::initWithView(BLLuckyDrawItemView* p1)
{
  *(int *)(((int)this) + 0x18) = (undefined4)(intptr_t)p1;
  (**(code **)(**(int **)(p1 + 0x114) + 0x254))
            (*(int **)(p1 + 0x114),((int)this),*(undefined4 *)((unsigned char *)((char *)&g_00586b9e + (intptr_t)(g_00586ba8))),0,
             0x20);
  return;
}

int * BLLuckyDrawItemPresenter::create(BLLuckyDrawItemView* p1)
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)::operator new(0x1c);
  ::new ((void *)piVar1) BLLuckyDrawItemPresenter();   /* ALLOC+CTOR_FIX(R123): 类名由 llvm-cxxfilt 反修饰 + (函数,尺寸) 对齐 取得 */
  iVar2 = (undefined4)((void)(((BLLuckyDrawItemPresenter *)(piVar1))->initWithView((BLLuckyDrawItemView*)((int)this))),(intptr_t)0);
  if (iVar2 == 0) {
    (**(code **)(*(int *)(piVar1) + (8)))(piVar1);
    piVar1 = (int *)0x0;
  }
  else {
    ((cocos2d::CCObject *)(piVar1))->autorelease();
  }
  return (int *)(piVar1);
}
