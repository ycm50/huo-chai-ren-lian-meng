#include "MissionSelectRoleItemUI.h"
#include "BLMissionSelectRoleItemView.h"
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
extern "C" unsigned long UNK_005c060a;
extern "C" unsigned long UNK_005c0710;
extern "C" unsigned long UNK_005c0712;
extern "C" unsigned long _UNK_005c0618;
extern "C" unsigned long _UNK_005c072c;
extern "C" unsigned long _UNK_005c0730;
extern "C" unsigned long g_005c060a;
extern "C" unsigned long g_005c0618;
extern "C" unsigned long g_005c0710;
extern "C" unsigned long g_005c0712;
extern "C" unsigned long g_005c072c;
extern "C" unsigned long g_005c0730;
MissionSelectRoleItemUI::~MissionSelectRoleItemUI()
{
  /* VPTR_FIX(R87): vptr=(&g_A+g_B)+8 ?? g_ ?? 0 ?? -> ???? SEGV?????? vptr???? */;
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~UIObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void MissionSelectRoleItemUI::tick(float p1)
{
  int iVar1;
  int *piVar2;
  
  if ((*(int *)(((int)this) + 0x24) != 0) &&
     (iVar1 = func_0079e55c(*(int *)(((int)this) + 0x24),
                              *(undefined4 *)(&g_005c0710 + g_005c0730),
                              *(undefined4 *)(&g_005c0712 + g_005c072c),0), iVar1 != 0)) {
    piVar2 = (int *)((BLMissionSelectRoleItemView *)this)->getPresenter();
    (**(code **)(*piVar2 + 0x18))(piVar2,p1);
  }
  return;
}
