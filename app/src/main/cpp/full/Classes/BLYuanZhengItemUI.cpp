#include "BLYuanZhengItemUI.h"
#include "BLYuanZhengItemView.h"
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
extern "C" unsigned long UNK_006b79b6;
extern "C" unsigned long UNK_006b7aa4;
extern "C" unsigned long UNK_006b7aa6;
extern "C" unsigned long _UNK_006b79c4;
extern "C" unsigned long _UNK_006b7ac0;
extern "C" unsigned long _UNK_006b7ac4;
extern "C" unsigned long g_006b79b6;
extern "C" unsigned long g_006b79c4;
extern "C" unsigned long g_006b7aa4;
extern "C" unsigned long g_006b7aa6;
extern "C" unsigned long g_006b7ac0;
extern "C" unsigned long g_006b7ac4;
BLYuanZhengItemUI::~BLYuanZhengItemUI()
{
  /* VPTR_FIX(R87): vptr=(&g_A+g_B)+8 ?? g_ ?? 0 ?? -> ???? SEGV?????? vptr???? */;
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~UIObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLYuanZhengItemUI::tick(float p1)
{
  int iVar1;
  int *piVar2;
  
  if ((*(int *)(((int)this) + 0x24) != 0) &&
     (iVar1 = func_0079e55c(*(int *)(((int)this) + 0x24),
                              *(undefined4 *)(&g_006b7aa4 + g_006b7ac4),
                              *(undefined4 *)(&g_006b7aa6 + g_006b7ac0),0), iVar1 != 0)) {
    piVar2 = (int *)((BLYuanZhengItemView *)this)->getPresenter();
    (**(code **)(*piVar2 + 0x28))(piVar2,p1);
  }
  return;
}
