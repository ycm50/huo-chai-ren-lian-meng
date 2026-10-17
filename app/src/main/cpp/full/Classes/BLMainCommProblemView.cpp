#include "BLMainCommProblemView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLMainCommProblemPresenter.h"
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
extern "C" unsigned long UNK_00602850;
extern "C" unsigned long UNK_00602894;
extern "C" unsigned long UNK_006028d8;
extern "C" unsigned long UNK_00602900;
extern "C" unsigned long UNK_00602a88;
extern "C" unsigned long UNK_00602b62;
extern "C" unsigned long UNK_00602c44;
extern "C" unsigned long UNK_00602c6e;
extern "C" unsigned long UNK_00602d30;
extern "C" unsigned long UNK_00602d5a;
extern "C" unsigned long _DAT_006029a0;
extern "C" unsigned long _DAT_006029a4;
extern "C" unsigned long _UNK_006028c4;
extern "C" unsigned long _UNK_006028c8;
extern "C" unsigned long _UNK_006028dc;
extern "C" unsigned long _UNK_00602904;
extern "C" unsigned long _UNK_00602e6c;
extern "C" unsigned long _UNK_00602e70;
extern "C" unsigned long _UNK_00602e74;
extern "C" unsigned long _UNK_00602e78;
extern "C" unsigned long _UNK_00602e7c;
extern "C" unsigned long _UNK_00602e80;
extern "C" unsigned long _UNK_00602e84;
extern "C" unsigned long _UNK_00602e88;
extern "C" unsigned long _UNK_00602e8c;
extern "C" unsigned long _UNK_00602e90;
extern "C" unsigned long _UNK_00602e94;
extern "C" unsigned long _UNK_00602e98;
extern "C" unsigned long _UNK_00602e9c;
extern "C" unsigned long _UNK_00602ea0;
extern "C" unsigned long g_00602850;
extern "C" unsigned long g_00602894;
extern "C" unsigned long g_006028c4;
extern "C" unsigned long g_006028c8;
extern "C" unsigned long g_006028d8;
extern "C" unsigned long g_006028dc;
extern "C" unsigned long g_00602900;
extern "C" unsigned long g_00602904;
extern "C" unsigned long g_006029a0;
extern "C" unsigned long g_006029a4;
extern "C" unsigned long g_00602a88;
extern "C" unsigned long g_00602b62;
extern "C" unsigned long g_00602c44;
extern "C" unsigned long g_00602c6e;
extern "C" unsigned long g_00602d30;
extern "C" unsigned long g_00602d5a;
extern "C" unsigned long g_00602e6c;
extern "C" unsigned long g_00602e70;
extern "C" unsigned long g_00602e74;
extern "C" unsigned long g_00602e78;
extern "C" unsigned long g_00602e7c;
extern "C" unsigned long g_00602e80;
extern "C" unsigned long g_00602e84;
extern "C" unsigned long g_00602e88;
extern "C" unsigned long g_00602e8c;
extern "C" unsigned long g_00602e90;
extern "C" unsigned long g_00602e94;
extern "C" unsigned long g_00602e98;
extern "C" unsigned long g_00602e9c;
extern "C" unsigned long g_00602ea0;
BLMainCommProblemView::~BLMainCommProblemView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_00602850 + g_006028c4);
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
  func_0079e45c(&uStack_14,&g_00602894 + g_006028c8,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLMainCommProblemView::BLMainCommProblemView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(g_006029a0 + 0x602948);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLMainCommProblemView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * BLMainCommProblemView::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x110)));
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

undefined4 BLMainCommProblemView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x108);
}

undefined4 BLMainCommProblemView::getBtnQuit()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

void BLMainCommProblemView::onEnter()
{
  ((BLMainCommProblemPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLMainCommProblemView::onExit()
{
  ((BLMainCommProblemPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
bool BLMainCommProblemView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
