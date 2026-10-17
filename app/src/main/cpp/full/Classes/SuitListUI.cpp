#include "SuitListUI.h"
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
extern "C" unsigned long UNK_00695ef4;
extern "C" unsigned long UNK_00695ef6;
extern "C" unsigned long UNK_00695f22;
extern "C" unsigned long _UNK_00695f10;
extern "C" unsigned long _UNK_00695f14;
extern "C" unsigned long _UNK_00695f30;
extern "C" unsigned long g_00695ef4;
extern "C" unsigned long g_00695ef6;
extern "C" unsigned long g_00695f10;
extern "C" unsigned long g_00695f14;
extern "C" unsigned long g_00695f22;
extern "C" unsigned long g_00695f30;
void SuitListUI::tick(float p1)
{
  int iVar1;
  
  if ((*(int *)(((int)this) + 0x24) != 0) &&
     (iVar1 = func_0079e55c(*(int *)(((int)this) + 0x24),
                              *(undefined4 *)(&g_00695ef4 + g_00695f14),
                              *(undefined4 *)(&g_00695ef6 + g_00695f10),0), iVar1 != 0)) {
    (**(code **)(**(int **)(iVar1 + 0x108) + 0x18))(*(int **)(iVar1 + 0x108),p1);
  }
  return;
}

SuitListUI::~SuitListUI()
{
  /* VPTR_FIX(R87): vptr=(&g_A+g_B)+8 ?? g_ ?? 0 ?? -> ???? SEGV?????? vptr???? */;
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~UIObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}
