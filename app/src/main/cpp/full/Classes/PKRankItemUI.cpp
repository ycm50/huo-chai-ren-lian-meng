#include "PKRankItemUI.h"
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
extern "C" unsigned long UNK_0061e77c;
extern "C" unsigned long UNK_0061e77e;
extern "C" unsigned long UNK_0061e7aa;
extern "C" unsigned long _UNK_0061e798;
extern "C" unsigned long _UNK_0061e79c;
extern "C" unsigned long _UNK_0061e7b8;
extern "C" unsigned long g_0061e77c;
extern "C" unsigned long g_0061e77e;
extern "C" unsigned long g_0061e798;
extern "C" unsigned long g_0061e79c;
extern "C" unsigned long g_0061e7aa;
extern "C" unsigned long g_0061e7b8;
void PKRankItemUI::tick(float p1)
{
  int iVar1;
  
  if ((*(int *)(((int)this) + 0x24) != 0) &&
     (iVar1 = func_0079e55c(*(int *)(((int)this) + 0x24),
                              *(undefined4 *)(&g_0061e77c + g_0061e79c),
                              *(undefined4 *)(&g_0061e77e + g_0061e798),0), iVar1 != 0)) {
    (**(code **)(**(int **)(iVar1 + 0x108) + 0x28))(*(int **)(iVar1 + 0x108),p1);
  }
  return;
}

PKRankItemUI::~PKRankItemUI()
{
  /* VPTR_FIX(R87): vptr=(&g_A+g_B)+8 ?? g_ ?? 0 ?? -> ???? SEGV?????? vptr???? */;
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~UIObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}
