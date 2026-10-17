#include "RankRewardItemUI.h"
#include "BLRankRewardItemView.h"
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
extern "C" unsigned long UNK_0064248a;
extern "C" unsigned long UNK_00642580;
extern "C" unsigned long UNK_00642582;
extern "C" unsigned long _UNK_00642498;
extern "C" unsigned long _UNK_006425a0;
extern "C" unsigned long _UNK_006425a4;
extern "C" unsigned long g_0064248a;
extern "C" unsigned long g_00642498;
extern "C" unsigned long g_00642580;
extern "C" unsigned long g_00642582;
extern "C" unsigned long g_006425a0;
extern "C" unsigned long g_006425a4;
RankRewardItemUI::~RankRewardItemUI()
{
  /* VPTR_FIX(R87): vptr=(&g_A+g_B)+8 ?? g_ ?? 0 ?? -> ???? SEGV?????? vptr???? */;
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~UIObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void RankRewardItemUI::tick(float p1)
{
  int iVar1;
  int *piVar2;
  
  if ((*(int *)(((int)this) + 0x24) != 0) &&
     (iVar1 = func_0079e55c(*(int *)(((int)this) + 0x24),
                              *(undefined4 *)(&g_00642580 + g_006425a4),
                              *(undefined4 *)(&g_00642582 + g_006425a0),0), iVar1 != 0)) {
    piVar2 = (int *)((BLRankRewardItemView *)this)->getPresenter();
    (**(code **)(*piVar2 + 0x194))(piVar2,p1);
  }
  return;
}
