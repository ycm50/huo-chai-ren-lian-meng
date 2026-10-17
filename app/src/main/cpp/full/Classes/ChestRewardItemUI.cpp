#include "ChestRewardItemUI.h"
#include "BLChestRewardItemView.h"
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
extern "C" unsigned long UNK_0051bdde;
extern "C" unsigned long UNK_0051bee4;
extern "C" unsigned long UNK_0051bee6;
extern "C" unsigned long _UNK_0051bdec;
extern "C" unsigned long _UNK_0051bf00;
extern "C" unsigned long _UNK_0051bf04;
extern "C" unsigned long g_0051bdde;
extern "C" unsigned long g_0051bdec;
extern "C" unsigned long g_0051bee4;
extern "C" unsigned long g_0051bee6;
extern "C" unsigned long g_0051bf00;
extern "C" unsigned long g_0051bf04;
ChestRewardItemUI::~ChestRewardItemUI()
{
  /* VPTR_FIX(R87): vptr=(&g_A+g_B)+8 ?? g_ ?? 0 ?? -> ???? SEGV?????? vptr???? */;
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~UIObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void ChestRewardItemUI::tick(float p1)
{
  int iVar1;
  int *piVar2;
  
  if ((*(int *)(((int)this) + 0x24) != 0) &&
     (iVar1 = func_0079e55c(*(int *)(((int)this) + 0x24),
                              *(undefined4 *)(&g_0051bee4 + g_0051bf04),
                              *(undefined4 *)(&g_0051bee6 + g_0051bf00),0), iVar1 != 0)) {
    piVar2 = (int *)((BLChestRewardItemView *)this)->getPresenter();
    (**(code **)(*piVar2 + 0x18))(piVar2,p1);
  }
  return;
}
