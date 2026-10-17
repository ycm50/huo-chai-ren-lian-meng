#include "PKHeroRankItemUI.h"
#include "PKHeroRankItemView.h"
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
extern "C" unsigned long UNK_0061653a;
extern "C" unsigned long UNK_00616628;
extern "C" unsigned long UNK_0061662a;
extern "C" unsigned long _UNK_00616548;
extern "C" unsigned long _UNK_00616644;
extern "C" unsigned long _UNK_00616648;
extern "C" unsigned long g_0061653a;
extern "C" unsigned long g_00616548;
extern "C" unsigned long g_00616628;
extern "C" unsigned long g_0061662a;
extern "C" unsigned long g_00616644;
extern "C" unsigned long g_00616648;
PKHeroRankItemUI::~PKHeroRankItemUI()
{
  /* VPTR_FIX(R87): vptr=(&g_A+g_B)+8 ?? g_ ?? 0 ?? -> ???? SEGV?????? vptr???? */;
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~UIObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void PKHeroRankItemUI::tick(float p1)
{
  int iVar1;
  int *piVar2;
  
  if ((*(int *)(((int)this) + 0x24) != 0) &&
     (iVar1 = func_0079e55c(*(int *)(((int)this) + 0x24),
                              *(undefined4 *)(&g_00616628 + g_00616648),
                              *(undefined4 *)(&g_0061662a + g_00616644),0), iVar1 != 0)) {
    piVar2 = (int *)((PKHeroRankItemView *)this)->getPresenter();
    (**(code **)(*piVar2 + 0x18))(piVar2,p1);
  }
  return;
}
