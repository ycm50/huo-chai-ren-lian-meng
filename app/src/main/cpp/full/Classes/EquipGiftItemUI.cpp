#include "EquipGiftItemUI.h"
#include "BLEquipGiftItemView.h"
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
extern "C" unsigned long UNK_0054f02a;
extern "C" unsigned long UNK_0054f130;
extern "C" unsigned long UNK_0054f132;
extern "C" unsigned long _UNK_0054f038;
extern "C" unsigned long _UNK_0054f14c;
extern "C" unsigned long _UNK_0054f150;
extern "C" unsigned long g_0054f02a;
extern "C" unsigned long g_0054f038;
extern "C" unsigned long g_0054f130;
extern "C" unsigned long g_0054f132;
extern "C" unsigned long g_0054f14c;
extern "C" unsigned long g_0054f150;
EquipGiftItemUI::~EquipGiftItemUI()
{
  /* VPTR_FIX(R87): vptr=(&g_A+g_B)+8 ?? g_ ?? 0 ?? -> ???? SEGV?????? vptr???? */;
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~UIObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void EquipGiftItemUI::tick(float p1)
{
  int iVar1;
  int *piVar2;
  
  if ((*(int *)(((int)this) + 0x24) != 0) &&
     (iVar1 = func_0079e55c(*(int *)(((int)this) + 0x24),
                              *(undefined4 *)(&g_0054f130 + g_0054f150),
                              *(undefined4 *)(&g_0054f132 + g_0054f14c),0), iVar1 != 0)) {
    piVar2 = (int *)((BLEquipGiftItemView *)this)->getPresenter();
    (**(code **)(*piVar2 + 0x18))(piVar2,p1);
  }
  return;
}
