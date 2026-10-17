#include "EquipItemUI.h"
#include "BLEquipItemView.h"
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
extern "C" unsigned long UNK_00678096;
extern "C" unsigned long UNK_0067819c;
extern "C" unsigned long UNK_0067819e;
extern "C" unsigned long _UNK_006780a4;
extern "C" unsigned long _UNK_006781b8;
extern "C" unsigned long _UNK_006781bc;
extern "C" unsigned long g_00678096;
extern "C" unsigned long g_006780a4;
extern "C" unsigned long g_0067819c;
extern "C" unsigned long g_0067819e;
extern "C" unsigned long g_006781b8;
extern "C" unsigned long g_006781bc;
EquipItemUI::~EquipItemUI()
{
  /* VPTR_FIX(R87): vptr=(&g_A+g_B)+8 ?? g_ ?? 0 ?? -> ???? SEGV?????? vptr???? */;
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~UIObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void EquipItemUI::tick(float p1)
{
  int iVar1;
  int *piVar2;
  
  if ((*(int *)(((int)this) + 0x24) != 0) &&
     (iVar1 = func_0079e55c(*(int *)(((int)this) + 0x24),
                              *(undefined4 *)(&g_0067819c + g_006781bc),
                              *(undefined4 *)(&g_0067819e + g_006781b8),0), iVar1 != 0)) {
    piVar2 = (int *)((BLEquipItemView *)this)->getPresenter();
    (**(code **)(*piVar2 + 0x18))(piVar2,p1);
  }
  return;
}
