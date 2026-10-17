#include "HeroLineUpItemUI.h"
#include "BLHeroLineUpItemView.h"
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
extern "C" unsigned long UNK_004c7f02;
extern "C" unsigned long UNK_004c8008;
extern "C" unsigned long UNK_004c800a;
extern "C" unsigned long _UNK_004c7f10;
extern "C" unsigned long _UNK_004c8024;
extern "C" unsigned long _UNK_004c8028;
extern "C" unsigned long g_004c7f02;
extern "C" unsigned long g_004c7f10;
extern "C" unsigned long g_004c8008;
extern "C" unsigned long g_004c800a;
extern "C" unsigned long g_004c8024;
extern "C" unsigned long g_004c8028;
HeroLineUpItemUI::~HeroLineUpItemUI()
{
  /* VPTR_FIX(R87): vptr=(&g_A+g_B)+8 ?? g_ ?? 0 ?? -> ???? SEGV?????? vptr???? */;
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~UIObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void HeroLineUpItemUI::tick(float p1)
{
  int iVar1;
  int *piVar2;
  
  if ((*(int *)(((int)this) + 0x24) != 0) &&
     (iVar1 = func_0079e55c(*(int *)(((int)this) + 0x24),
                              *(undefined4 *)(&g_004c8008 + g_004c8028),
                              *(undefined4 *)(&g_004c800a + g_004c8024),0), iVar1 != 0)) {
    piVar2 = (int *)((BLHeroLineUpItemView *)this)->getPresenter();
    (**(code **)(*piVar2 + 0x18))(piVar2,p1);
  }
  return;
}
