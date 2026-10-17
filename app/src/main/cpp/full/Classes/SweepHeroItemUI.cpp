#include "SweepHeroItemUI.h"
#include "BLSweepHeroItemView.h"
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
extern "C" unsigned long UNK_005d989a;
extern "C" unsigned long UNK_005d99a0;
extern "C" unsigned long UNK_005d99a2;
extern "C" unsigned long _UNK_005d98a8;
extern "C" unsigned long _UNK_005d99bc;
extern "C" unsigned long _UNK_005d99c0;
extern "C" unsigned long g_005d989a;
extern "C" unsigned long g_005d98a8;
extern "C" unsigned long g_005d99a0;
extern "C" unsigned long g_005d99a2;
extern "C" unsigned long g_005d99bc;
extern "C" unsigned long g_005d99c0;
SweepHeroItemUI::~SweepHeroItemUI()
{
  /* VPTR_FIX(R87): vptr=(&g_A+g_B)+8 ?? g_ ?? 0 ?? -> ???? SEGV?????? vptr???? */;
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~UIObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void SweepHeroItemUI::tick(float p1)
{
  int iVar1;
  int *piVar2;
  
  if ((*(int *)(((int)this) + 0x24) != 0) &&
     (iVar1 = func_0079e55c(*(int *)(((int)this) + 0x24),
                              *(undefined4 *)(&g_005d99a0 + g_005d99c0),
                              *(undefined4 *)(&g_005d99a2 + g_005d99bc),0), iVar1 != 0)) {
    piVar2 = (int *)((BLSweepHeroItemView *)this)->getPresenter();
    (**(code **)(*piVar2 + 0x18))(piVar2,p1);
  }
  return;
}
