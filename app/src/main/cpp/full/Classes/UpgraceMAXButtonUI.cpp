#include "UpgraceMAXButtonUI.h"
#include "BLUpgraceMAXButtonView.h"
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
extern "C" unsigned long UNK_00685646;
extern "C" unsigned long UNK_0068572c;
extern "C" unsigned long UNK_0068572e;
extern "C" unsigned long _UNK_00685654;
extern "C" unsigned long _UNK_00685748;
extern "C" unsigned long _UNK_0068574c;
extern "C" unsigned long g_00685646;
extern "C" unsigned long g_00685654;
extern "C" unsigned long g_0068572c;
extern "C" unsigned long g_0068572e;
extern "C" unsigned long g_00685748;
extern "C" unsigned long g_0068574c;
UpgraceMAXButtonUI::~UpgraceMAXButtonUI()
{
  /* VPTR_FIX(R87): vptr=(&g_A+g_B)+8 ?? g_ ?? 0 ?? -> ???? SEGV?????? vptr???? */;
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~UIObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void UpgraceMAXButtonUI::tick(float p1)
{
  int iVar1;
  int *piVar2;
  
  if ((*(int *)(((int)this) + 0x24) != 0) &&
     (iVar1 = func_0079e55c(*(int *)(((int)this) + 0x24),
                              *(undefined4 *)(&g_0068572c + g_0068574c),
                              *(undefined4 *)(&g_0068572e + g_00685748),0), iVar1 != 0)) {
    piVar2 = (int *)((BLUpgraceMAXButtonView *)this)->getPresenter();
    (**(code **)(*piVar2 + 0x24))(piVar2,p1);
  }
  return;
}
