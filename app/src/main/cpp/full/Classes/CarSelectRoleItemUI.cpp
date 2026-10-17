#include "CarSelectRoleItemUI.h"
#include "CarSelectRoleItemView.h"
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
extern "C" unsigned long UNK_006c270e;
extern "C" unsigned long UNK_006c2814;
extern "C" unsigned long UNK_006c2816;
extern "C" unsigned long _UNK_006c271c;
extern "C" unsigned long _UNK_006c2830;
extern "C" unsigned long _UNK_006c2834;
extern "C" unsigned long g_006c270e;
extern "C" unsigned long g_006c271c;
extern "C" unsigned long g_006c2814;
extern "C" unsigned long g_006c2816;
extern "C" unsigned long g_006c2830;
extern "C" unsigned long g_006c2834;
CarSelectRoleItemUI::~CarSelectRoleItemUI()
{
  /* VPTR_FIX(R87): vptr=(&g_A+g_B)+8 ?? g_ ?? 0 ?? -> ???? SEGV?????? vptr???? */;
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~UIObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void CarSelectRoleItemUI::tick(float p1)
{
  int iVar1;
  int *piVar2;
  
  if ((*(int *)(((int)this) + 0x24) != 0) &&
     (iVar1 = func_0079e55c(*(int *)(((int)this) + 0x24),
                              *(undefined4 *)(&g_006c2814 + g_006c2834),
                              *(undefined4 *)(&g_006c2816 + g_006c2830),0), iVar1 != 0)) {
    piVar2 = (int *)((CarSelectRoleItemView *)this)->getPresenter();
    (**(code **)(*piVar2 + 0x18))(piVar2,p1);
  }
  return;
}
