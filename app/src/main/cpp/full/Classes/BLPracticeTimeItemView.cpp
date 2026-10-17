#include "BLPracticeTimeItemView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLPracticeTimeItemPresenter.h"
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
extern "C" unsigned long UNK_006404d8;
extern "C" unsigned long UNK_0064051c;
extern "C" unsigned long UNK_00640560;
extern "C" unsigned long UNK_00640588;
extern "C" unsigned long UNK_006405a0;
extern "C" unsigned long UNK_006405ce;
extern "C" unsigned long UNK_006406b8;
extern "C" unsigned long UNK_006406f0;
extern "C" unsigned long UNK_00640756;
extern "C" unsigned long UNK_0064078c;
extern "C" unsigned long UNK_006407f2;
extern "C" unsigned long UNK_0064081e;
extern "C" unsigned long _UNK_0064054c;
extern "C" unsigned long _UNK_00640550;
extern "C" unsigned long _UNK_00640564;
extern "C" unsigned long _UNK_0064058c;
extern "C" unsigned long _UNK_006405f8;
extern "C" unsigned long _UNK_006405fc;
extern "C" unsigned long _UNK_00640900;
extern "C" unsigned long _UNK_00640904;
extern "C" unsigned long _UNK_00640908;
extern "C" unsigned long _UNK_0064090c;
extern "C" unsigned long _UNK_00640910;
extern "C" unsigned long _UNK_00640914;
extern "C" unsigned long _UNK_00640918;
extern "C" unsigned long _UNK_0064091c;
extern "C" unsigned long _UNK_00640920;
extern "C" unsigned long _UNK_00640924;
extern "C" unsigned long g_006404d8;
extern "C" unsigned long g_0064051c;
extern "C" unsigned long g_0064054c;
extern "C" unsigned long g_00640550;
extern "C" unsigned long g_00640560;
extern "C" unsigned long g_00640564;
extern "C" unsigned long g_00640588;
extern "C" unsigned long g_0064058c;
extern "C" unsigned long g_006405a0;
extern "C" unsigned long g_006405ce;
extern "C" unsigned long g_006405f8;
extern "C" unsigned long g_006405fc;
extern "C" unsigned long g_006406b8;
extern "C" unsigned long g_006406f0;
extern "C" unsigned long g_00640756;
extern "C" unsigned long g_0064078c;
extern "C" unsigned long g_006407f2;
extern "C" unsigned long g_0064081e;
extern "C" unsigned long g_00640900;
extern "C" unsigned long g_00640904;
extern "C" unsigned long g_00640908;
extern "C" unsigned long g_0064090c;
extern "C" unsigned long g_00640910;
extern "C" unsigned long g_00640914;
extern "C" unsigned long g_00640918;
extern "C" unsigned long g_0064091c;
extern "C" unsigned long g_00640920;
extern "C" unsigned long g_00640924;
BLPracticeTimeItemView::~BLPracticeTimeItemView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_006404d8 + g_0064054c);
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
  func_0079e45c(&uStack_14,&g_0064051c + g_00640550,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLPracticeTimeItemView::BLPracticeTimeItemView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_006405a0 + g_006405f8);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_006405ce + g_006405fc,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * BLPracticeTimeItemView::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x118)));
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

void BLPracticeTimeItemView::onEnter()
{
  ((BLPracticeTimeItemPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLPracticeTimeItemView::onExit()
{
  ((BLPracticeTimeItemPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

bool BLPracticeTimeItemView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
