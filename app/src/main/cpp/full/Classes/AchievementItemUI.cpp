#include "AchievementItemUI.h"
#include "BLAchievementItemView.h"
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
extern "C" unsigned long UNK_004eea1a;
extern "C" unsigned long UNK_004eeb20;
extern "C" unsigned long UNK_004eeb22;
extern "C" unsigned long _UNK_004eea28;
extern "C" unsigned long _UNK_004eeb3c;
extern "C" unsigned long _UNK_004eeb40;
extern "C" unsigned long g_004eea1a;
extern "C" unsigned long g_004eea28;
extern "C" unsigned long g_004eeb20;
extern "C" unsigned long g_004eeb22;
extern "C" unsigned long g_004eeb3c;
extern "C" unsigned long g_004eeb40;
AchievementItemUI::~AchievementItemUI()
{
  /* VPTR_FIX(R87): vptr=(&g_A+g_B)+8 ?? g_ ?? 0 ?? -> ???? SEGV?????? vptr???? */;
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~UIObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void AchievementItemUI::tick(float p1)
{
  int iVar1;
  int *piVar2;
  
  if ((*(int *)(((int)this) + 0x24) != 0) &&
     (iVar1 = func_0079e55c(*(int *)(((int)this) + 0x24),
                              *(undefined4 *)(&g_004eeb20 + g_004eeb40),
                              *(undefined4 *)(&g_004eeb22 + g_004eeb3c),0), iVar1 != 0)) {
    piVar2 = (int *)((BLAchievementItemView *)this)->getPresenter();
    (**(code **)(*piVar2 + 0x18))(piVar2,p1);
  }
  return;
}
