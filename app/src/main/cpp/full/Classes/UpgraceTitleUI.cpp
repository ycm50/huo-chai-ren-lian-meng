#include "UpgraceTitleUI.h"
#include "BLUpgraceTitleView.h"
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
extern "C" unsigned long UNK_00685d32;
extern "C" unsigned long UNK_00685e38;
extern "C" unsigned long UNK_00685e3a;
extern "C" unsigned long _UNK_00685d40;
extern "C" unsigned long _UNK_00685e54;
extern "C" unsigned long _UNK_00685e58;
extern "C" unsigned long g_00685d32;
extern "C" unsigned long g_00685d40;
extern "C" unsigned long g_00685e38;
extern "C" unsigned long g_00685e3a;
extern "C" unsigned long g_00685e54;
extern "C" unsigned long g_00685e58;
UpgraceTitleUI::~UpgraceTitleUI()
{
  /* VPTR_FIX(R87): vptr=(&g_A+g_B)+8 ?? g_ ?? 0 ?? -> ???? SEGV?????? vptr???? */;
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~UIObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void UpgraceTitleUI::tick(float p1)
{
  int iVar1;
  int *piVar2;
  
  if ((*(int *)(((int)this) + 0x24) != 0) &&
     (iVar1 = func_0079e55c(*(int *)(((int)this) + 0x24),
                              *(undefined4 *)(&g_00685e38 + g_00685e58),
                              *(undefined4 *)(&g_00685e3a + g_00685e54),0), iVar1 != 0)) {
    piVar2 = (int *)((BLUpgraceTitleView *)this)->getPresenter();
    (**(code **)(*piVar2 + 0x18))(piVar2,p1);
  }
  return;
}
