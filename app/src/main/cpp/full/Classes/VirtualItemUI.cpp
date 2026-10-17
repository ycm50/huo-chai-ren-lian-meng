#include "VirtualItemUI.h"
#include "BLVirtualItemView.h"
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
extern "C" unsigned long UNK_00607626;
extern "C" unsigned long UNK_00607714;
extern "C" unsigned long UNK_00607716;
extern "C" unsigned long _UNK_00607634;
extern "C" unsigned long _UNK_00607730;
extern "C" unsigned long _UNK_00607734;
extern "C" unsigned long g_00607626;
extern "C" unsigned long g_00607634;
extern "C" unsigned long g_00607714;
extern "C" unsigned long g_00607716;
extern "C" unsigned long g_00607730;
extern "C" unsigned long g_00607734;
VirtualItemUI::~VirtualItemUI()
{
  /* VPTR_FIX(R87): vptr=(&g_A+g_B)+8 ?? g_ ?? 0 ?? -> ???? SEGV?????? vptr???? */;
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~UIObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void VirtualItemUI::tick(float p1)
{
  int iVar1;
  int *piVar2;
  
  if ((*(int *)(((int)this) + 0x24) != 0) &&
     (iVar1 = func_0079e55c(*(int *)(((int)this) + 0x24),
                              *(undefined4 *)(&g_00607714 + g_00607734),
                              *(undefined4 *)(&g_00607716 + g_00607730),0), iVar1 != 0)) {
    piVar2 = (int *)((BLVirtualItemView *)this)->getPresenter();
    (**(code **)(*piVar2 + 0x18))(piVar2,p1);
  }
  return;
}
