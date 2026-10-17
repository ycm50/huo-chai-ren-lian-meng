#include "BLHeroRankItemUI.h"
#include "BLHeroRankItemView.h"
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
extern "C" unsigned long UNK_0056830a;
extern "C" unsigned long UNK_005683f8;
extern "C" unsigned long UNK_005683fa;
extern "C" unsigned long _UNK_00568318;
extern "C" unsigned long _UNK_00568414;
extern "C" unsigned long _UNK_00568418;
extern "C" unsigned long g_0056830a;
extern "C" unsigned long g_00568318;
extern "C" unsigned long g_005683f8;
extern "C" unsigned long g_005683fa;
extern "C" unsigned long g_00568414;
extern "C" unsigned long g_00568418;
BLHeroRankItemUI::~BLHeroRankItemUI()
{
  /* VPTR_FIX(R87): vptr=(&g_A+g_B)+8 ?? g_ ?? 0 ?? -> ???? SEGV?????? vptr???? */;
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~UIObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLHeroRankItemUI::tick(float p1)
{
  int iVar1;
  int *piVar2;
  
  if ((*(int *)(((int)this) + 0x24) != 0) &&
     (iVar1 = func_0079e55c(*(int *)(((int)this) + 0x24),
                              *(undefined4 *)(&g_005683f8 + g_00568418),
                              *(undefined4 *)(&g_005683fa + g_00568414),0), iVar1 != 0)) {
    piVar2 = (int *)((BLHeroRankItemView *)this)->getPresenter();
    (**(code **)(*piVar2 + 0x18))(piVar2,p1);
  }
  return;
}
