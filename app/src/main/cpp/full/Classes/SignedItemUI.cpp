#include "SignedItemUI.h"
#include "BLSignedItemView.h"
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
extern "C" unsigned long UNK_0068914a;
extern "C" unsigned long UNK_00689238;
extern "C" unsigned long UNK_0068923a;
extern "C" unsigned long _UNK_00689158;
extern "C" unsigned long _UNK_00689254;
extern "C" unsigned long _UNK_00689258;
extern "C" unsigned long g_0068914a;
extern "C" unsigned long g_00689158;
extern "C" unsigned long g_00689238;
extern "C" unsigned long g_0068923a;
extern "C" unsigned long g_00689254;
extern "C" unsigned long g_00689258;
SignedItemUI::~SignedItemUI()
{
  /* VPTR_FIX(R87): vptr=(&g_A+g_B)+8 ?? g_ ?? 0 ?? -> ???? SEGV?????? vptr???? */;
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~UIObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void SignedItemUI::tick(float p1)
{
  int iVar1;
  int *piVar2;
  
  if ((*(int *)(((int)this) + 0x24) != 0) &&
     (iVar1 = func_0079e55c(*(int *)(((int)this) + 0x24),
                              *(undefined4 *)(&g_00689238 + g_00689258),
                              *(undefined4 *)(&g_0068923a + g_00689254),0), iVar1 != 0)) {
    piVar2 = (int *)((BLSignedItemView *)this)->getPresenter();
    (**(code **)(*piVar2 + 0x18))(piVar2,p1);
  }
  return;
}
