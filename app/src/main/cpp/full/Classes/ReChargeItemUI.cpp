#include "ReChargeItemUI.h"
#include "BLReChargeItemView.h"
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
extern "C" unsigned long UNK_00645dca;
extern "C" unsigned long UNK_00645eb8;
extern "C" unsigned long UNK_00645eba;
extern "C" unsigned long _UNK_00645dd8;
extern "C" unsigned long _UNK_00645ed4;
extern "C" unsigned long _UNK_00645ed8;
extern "C" unsigned long g_00645dca;
extern "C" unsigned long g_00645dd8;
extern "C" unsigned long g_00645eb8;
extern "C" unsigned long g_00645eba;
extern "C" unsigned long g_00645ed4;
extern "C" unsigned long g_00645ed8;
ReChargeItemUI::~ReChargeItemUI()
{
  /* VPTR_FIX(R87): vptr=(&g_A+g_B)+8 ?? g_ ?? 0 ?? -> ???? SEGV?????? vptr???? */;
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~UIObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void ReChargeItemUI::tick(float p1)
{
  int iVar1;
  int *piVar2;
  
  if ((*(int *)(((int)this) + 0x24) != 0) &&
     (iVar1 = func_0079e55c(*(int *)(((int)this) + 0x24),
                              *(undefined4 *)(&g_00645eb8 + g_00645ed8),
                              *(undefined4 *)(&g_00645eba + g_00645ed4),0), iVar1 != 0)) {
    piVar2 = (int *)((BLReChargeItemView *)this)->getPresenter();
    (**(code **)(*piVar2 + 0x18))(piVar2,p1);
  }
  return;
}
