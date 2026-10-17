#include "MineCollectHeroItemUI.h"
#include "BLMineCollectHeroItemView.h"
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
extern "C" unsigned long UNK_005ada56;
extern "C" unsigned long UNK_005adb44;
extern "C" unsigned long UNK_005adb46;
extern "C" unsigned long _UNK_005ada64;
extern "C" unsigned long _UNK_005adb60;
extern "C" unsigned long _UNK_005adb64;
extern "C" unsigned long g_005ada56;
extern "C" unsigned long g_005ada64;
extern "C" unsigned long g_005adb44;
extern "C" unsigned long g_005adb46;
extern "C" unsigned long g_005adb60;
extern "C" unsigned long g_005adb64;
MineCollectHeroItemUI::~MineCollectHeroItemUI()
{
  /* VPTR_FIX(R87): vptr=(&g_A+g_B)+8 ?? g_ ?? 0 ?? -> ???? SEGV?????? vptr???? */;
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~UIObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void MineCollectHeroItemUI::tick(float p1)
{
  int iVar1;
  int *piVar2;
  
  if ((*(int *)(((int)this) + 0x24) != 0) &&
     (iVar1 = func_0079e55c(*(int *)(((int)this) + 0x24),
                              *(undefined4 *)(&g_005adb44 + g_005adb64),
                              *(undefined4 *)(&g_005adb46 + g_005adb60),0), iVar1 != 0)) {
    piVar2 = (int *)((BLMineCollectHeroItemView *)this)->getPresenter();
    (**(code **)(*piVar2 + 0x18))(piVar2,p1);
  }
  return;
}
