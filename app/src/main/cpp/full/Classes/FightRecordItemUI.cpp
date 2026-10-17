#include "FightRecordItemUI.h"
#include "BLFightRecordItemView.h"
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
extern "C" unsigned long UNK_004c6aea;
extern "C" unsigned long UNK_004c6bd8;
extern "C" unsigned long UNK_004c6bda;
extern "C" unsigned long _UNK_004c6af8;
extern "C" unsigned long _UNK_004c6bf4;
extern "C" unsigned long _UNK_004c6bf8;
extern "C" unsigned long g_004c6aea;
extern "C" unsigned long g_004c6af8;
extern "C" unsigned long g_004c6bd8;
extern "C" unsigned long g_004c6bda;
extern "C" unsigned long g_004c6bf4;
extern "C" unsigned long g_004c6bf8;
FightRecordItemUI::~FightRecordItemUI()
{
  /* VPTR_FIX(R87): vptr=(&g_A+g_B)+8 ?? g_ ?? 0 ?? -> ???? SEGV?????? vptr???? */;
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~UIObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void FightRecordItemUI::tick(float p1)
{
  int iVar1;
  int *piVar2;
  
  if ((*(int *)(((int)this) + 0x24) != 0) &&
     (iVar1 = func_0079e55c(*(int *)(((int)this) + 0x24),
                              *(undefined4 *)(&g_004c6bd8 + g_004c6bf8),
                              *(undefined4 *)(&g_004c6bda + g_004c6bf4),0), iVar1 != 0)) {
    piVar2 = (int *)((BLFightRecordItemView *)this)->getPreasenter();
    (**(code **)(*piVar2 + 0x28))(piVar2,p1);
  }
  return;
}
