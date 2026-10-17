#include "RoleTabItemUI.h"
#include "BLRoleTabItemView.h"
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
extern "C" unsigned long UNK_00682092;
extern "C" unsigned long UNK_00682198;
extern "C" unsigned long UNK_0068219a;
extern "C" unsigned long _UNK_006820a0;
extern "C" unsigned long _UNK_006821b4;
extern "C" unsigned long _UNK_006821b8;
extern "C" unsigned long g_00682092;
extern "C" unsigned long g_006820a0;
extern "C" unsigned long g_00682198;
extern "C" unsigned long g_0068219a;
extern "C" unsigned long g_006821b4;
extern "C" unsigned long g_006821b8;
RoleTabItemUI::~RoleTabItemUI()
{
  /* VPTR_FIX(R87): vptr=(&g_A+g_B)+8 ?? g_ ?? 0 ?? -> ???? SEGV?????? vptr???? */;
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~UIObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void RoleTabItemUI::tick(float p1)
{
  int iVar1;
  int *piVar2;
  
  if ((*(int *)(((int)this) + 0x24) != 0) &&
     (iVar1 = func_0079e55c(*(int *)(((int)this) + 0x24),
                              *(undefined4 *)(&g_00682198 + g_006821b8),
                              *(undefined4 *)(&g_0068219a + g_006821b4),0), iVar1 != 0)) {
    piVar2 = (int *)((BLRoleTabItemView *)this)->getPresenter();
    (**(code **)(*piVar2 + 0x18))(piVar2,p1);
  }
  return;
}
