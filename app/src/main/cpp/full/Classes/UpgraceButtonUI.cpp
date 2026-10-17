#include "UpgraceButtonUI.h"
#include "BLUpgraceButtonView.h"
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
extern "C" unsigned long UNK_00684f8e;
extern "C" unsigned long UNK_00685094;
extern "C" unsigned long UNK_00685096;
extern "C" unsigned long _UNK_00684f9c;
extern "C" unsigned long _UNK_006850b0;
extern "C" unsigned long _UNK_006850b4;
extern "C" unsigned long g_00684f8e;
extern "C" unsigned long g_00684f9c;
extern "C" unsigned long g_00685094;
extern "C" unsigned long g_00685096;
extern "C" unsigned long g_006850b0;
extern "C" unsigned long g_006850b4;
UpgraceButtonUI::~UpgraceButtonUI()
{
  /* VPTR_FIX(R87): vptr=(&g_A+g_B)+8 ?? g_ ?? 0 ?? -> ???? SEGV?????? vptr???? */;
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~UIObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void UpgraceButtonUI::tick(float p1)
{
  int iVar1;
  int *piVar2;
  
  if ((*(int *)(((int)this) + 0x24) != 0) &&
     (iVar1 = func_0079e55c(*(int *)(((int)this) + 0x24),
                              *(undefined4 *)(&g_00685094 + g_006850b4),
                              *(undefined4 *)(&g_00685096 + g_006850b0),0), iVar1 != 0)) {
    piVar2 = (int *)((BLUpgraceButtonView *)this)->getPresenter();
    (**(code **)(*piVar2 + 0x18))(piVar2,p1);
  }
  return;
}
