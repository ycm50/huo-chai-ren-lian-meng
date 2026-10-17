#include "EquipPageUI.h"
#include "BLEquipPageView.h"
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
extern "C" unsigned long UNK_0067a8ea;
extern "C" unsigned long UNK_0067a9f0;
extern "C" unsigned long UNK_0067a9f2;
extern "C" unsigned long _UNK_0067a8f8;
extern "C" unsigned long _UNK_0067aa0c;
extern "C" unsigned long _UNK_0067aa10;
extern "C" unsigned long g_0067a8ea;
extern "C" unsigned long g_0067a8f8;
extern "C" unsigned long g_0067a9f0;
extern "C" unsigned long g_0067a9f2;
extern "C" unsigned long g_0067aa0c;
extern "C" unsigned long g_0067aa10;
EquipPageUI::~EquipPageUI()
{
  /* VPTR_FIX(R87): vptr=(&g_A+g_B)+8 ?? g_ ?? 0 ?? -> ???? SEGV?????? vptr???? */;
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~UIObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void EquipPageUI::tick(float p1)
{
  int iVar1;
  int *piVar2;
  
  if ((*(int *)(((int)this) + 0x24) != 0) &&
     (iVar1 = func_0079e55c(*(int *)(((int)this) + 0x24),
                              *(undefined4 *)(&g_0067a9f0 + g_0067aa10),
                              *(undefined4 *)(&g_0067a9f2 + g_0067aa0c),0), iVar1 != 0)) {
    piVar2 = (int *)((BLEquipPageView *)this)->getPresenter();
    (**(code **)(*piVar2 + 0x18))(piVar2,p1);
  }
  return;
}
