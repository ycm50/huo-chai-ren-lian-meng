#include "DebrisItemDataInfoDownUI.h"
#include "BLDebrisItemDataInfoDownView.h"
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
extern "C" unsigned long UNK_005f73ee;
extern "C" unsigned long UNK_005f74a0;
extern "C" unsigned long UNK_005f74a2;
extern "C" unsigned long _UNK_005f73fc;
extern "C" unsigned long _UNK_005f74bc;
extern "C" unsigned long _UNK_005f74c0;
extern "C" unsigned long g_005f73ee;
extern "C" unsigned long g_005f73fc;
extern "C" unsigned long g_005f74a0;
extern "C" unsigned long g_005f74a2;
extern "C" unsigned long g_005f74bc;
extern "C" unsigned long g_005f74c0;
DebrisItemDataInfoDownUI::~DebrisItemDataInfoDownUI()
{
  /* VPTR_FIX(R87): vptr=(&g_A+g_B)+8 ?? g_ ?? 0 ?? -> ???? SEGV?????? vptr???? */;
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~UIObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void DebrisItemDataInfoDownUI::tick(float p1)
{
  int iVar1;
  int *piVar2;
  
  if ((*(int *)(((int)this) + 0x24) != 0) &&
     (iVar1 = func_0079e55c(*(int *)(((int)this) + 0x24),
                              *(undefined4 *)(&g_005f74a0 + g_005f74c0),
                              *(undefined4 *)(&g_005f74a2 + g_005f74bc),0), iVar1 != 0)) {
    piVar2 = (int *)((BLDebrisItemDataInfoDownView *)this)->getPresenter();
    (**(code **)(*piVar2 + 0x28))(piVar2,p1);
  }
  return;
}
