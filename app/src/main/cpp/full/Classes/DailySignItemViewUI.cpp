#include "DailySignItemViewUI.h"
#include "BLDailySignItemView.h"
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
extern "C" unsigned long UNK_00524c92;
extern "C" unsigned long UNK_00524d80;
extern "C" unsigned long UNK_00524d82;
extern "C" unsigned long _UNK_00524ca0;
extern "C" unsigned long _UNK_00524d9c;
extern "C" unsigned long _UNK_00524da0;
extern "C" unsigned long g_00524c92;
extern "C" unsigned long g_00524ca0;
extern "C" unsigned long g_00524d80;
extern "C" unsigned long g_00524d82;
extern "C" unsigned long g_00524d9c;
extern "C" unsigned long g_00524da0;
DailySignItemViewUI::~DailySignItemViewUI()
{
  /* VPTR_FIX(R87): vptr=(&g_A+g_B)+8 ?? g_ ?? 0 ?? -> ???? SEGV?????? vptr???? */;
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~UIObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void DailySignItemViewUI::tick(float p1)
{
  int iVar1;
  int *piVar2;
  
  if ((*(int *)(((int)this) + 0x24) != 0) &&
     (iVar1 = func_0079e55c(*(int *)(((int)this) + 0x24),
                              *(undefined4 *)(&g_00524d80 + g_00524da0),
                              *(undefined4 *)(&g_00524d82 + g_00524d9c),0), iVar1 != 0)) {
    piVar2 = (int *)((BLDailySignItemView *)this)->getPresenter();
    (**(code **)(*piVar2 + 0x18))(piVar2,p1);
  }
  return;
}
