#include "BLRingItemUI.h"
#include "BLRingItemView.h"
#include "UIObject.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
using namespace cocos2d;
// 兜底声明
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e55c(...);
extern "C" unsigned long UNK_004c9eca;
extern "C" unsigned long UNK_004c9fb8;
extern "C" unsigned long UNK_004c9fba;
extern "C" unsigned long _UNK_004c9ed8;
extern "C" unsigned long _UNK_004c9fd4;
extern "C" unsigned long _UNK_004c9fd8;
extern "C" unsigned long g_004c9eca;
extern "C" unsigned long g_004c9ed8;
extern "C" unsigned long g_004c9fb8;
extern "C" unsigned long g_004c9fba;
extern "C" unsigned long g_004c9fd4;
extern "C" unsigned long g_004c9fd8;
BLRingItemUI::~BLRingItemUI()
{
  /* VPTR_FIX(R87): vptr=(&g_A+g_B)+8 ?? g_ ?? 0 ?? -> ???? SEGV?????? vptr???? */;
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~UIObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLRingItemUI::tick(float p1)
{
  int iVar1;
  int *piVar2;
  
  if ((*(int *)(((int)this) + 0x24) != 0) &&
     (iVar1 = func_0079e55c(*(int *)(((int)this) + 0x24),
                              *(undefined4 *)(&g_004c9fb8 + g_004c9fd8),
                              *(undefined4 *)(&g_004c9fba + g_004c9fd4),0), iVar1 != 0)) {
    piVar2 = (int *)((BLRingItemView *)this)->getPresenter();
    (**(code **)(*piVar2 + 0x28))(piVar2,p1);
  }
  return;
}
