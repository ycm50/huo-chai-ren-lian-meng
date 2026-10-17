#include "EquipUpgraceItemUI.h"
#include "BLEquipUpgraceItemView.h"
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
extern "C" unsigned long UNK_0067c592;
extern "C" unsigned long UNK_0067c698;
extern "C" unsigned long UNK_0067c69a;
extern "C" unsigned long _UNK_0067c5a0;
extern "C" unsigned long _UNK_0067c6b4;
extern "C" unsigned long _UNK_0067c6b8;
extern "C" unsigned long g_0067c592;
extern "C" unsigned long g_0067c5a0;
extern "C" unsigned long g_0067c698;
extern "C" unsigned long g_0067c69a;
extern "C" unsigned long g_0067c6b4;
extern "C" unsigned long g_0067c6b8;
EquipUpgraceItemUI::~EquipUpgraceItemUI()
{
  /* VPTR_FIX(R87): vptr=(&g_A+g_B)+8 ?? g_ ?? 0 ?? -> ???? SEGV?????? vptr???? */;
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~UIObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void EquipUpgraceItemUI::tick(float p1)
{
  int iVar1;
  int *piVar2;
  
  if ((*(int *)(((int)this) + 0x24) != 0) &&
     (iVar1 = func_0079e55c(*(int *)(((int)this) + 0x24),
                              *(undefined4 *)(&g_0067c698 + g_0067c6b8),
                              *(undefined4 *)(&g_0067c69a + g_0067c6b4),0), iVar1 != 0)) {
    piVar2 = (int *)((BLEquipUpgraceItemView *)this)->getPresenter();
    (**(code **)(*piVar2 + 0x18))(piVar2,p1);
  }
  return;
}
