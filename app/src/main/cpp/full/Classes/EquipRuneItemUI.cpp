#include "EquipRuneItemUI.h"
#include "BLEquipRuneItemPresenter.h"
#include "BLEquipRuneItemView.h"
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
extern "C" unsigned long UNK_0067ac5e;
extern "C" unsigned long UNK_0067ad48;
extern "C" unsigned long UNK_0067ad4a;
extern "C" unsigned long _UNK_0067ac6c;
extern "C" unsigned long _UNK_0067ad60;
extern "C" unsigned long _UNK_0067ad64;
extern "C" unsigned long g_0067ac5e;
extern "C" unsigned long g_0067ac6c;
extern "C" unsigned long g_0067ad48;
extern "C" unsigned long g_0067ad4a;
extern "C" unsigned long g_0067ad60;
extern "C" unsigned long g_0067ad64;
EquipRuneItemUI::~EquipRuneItemUI()
{
  /* VPTR_FIX(R87): vptr=(&g_A+g_B)+8 ?? g_ ?? 0 ?? -> ???? SEGV?????? vptr???? */;
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~UIObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void EquipRuneItemUI::tick(float p1)
{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(int *)(((int)this) + 0x24) != 0) &&
     (iVar1 = func_0079e55c(*(int *)(((int)this) + 0x24),
                              *(undefined4 *)(&g_0067ad48 + g_0067ad64),
                              *(undefined4 *)(&g_0067ad4a + g_0067ad60),0), iVar1 != 0)) {
    uVar2 = (undefined4)(((BLEquipRuneItemView *)this)->getPresenter());
    ((BLEquipRuneItemPresenter *)uVar2)->tick(p1);
  }
  return;
}
