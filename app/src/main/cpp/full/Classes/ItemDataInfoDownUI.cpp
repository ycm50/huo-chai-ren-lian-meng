#include "ItemDataInfoDownUI.h"
#include "BLItemDataInfoDownView.h"
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
extern "C" unsigned long UNK_005fde3e;
extern "C" unsigned long UNK_005fdf44;
extern "C" unsigned long UNK_005fdf46;
extern "C" unsigned long _UNK_005fde4c;
extern "C" unsigned long _UNK_005fdf60;
extern "C" unsigned long _UNK_005fdf64;
extern "C" unsigned long g_005fde3e;
extern "C" unsigned long g_005fde4c;
extern "C" unsigned long g_005fdf44;
extern "C" unsigned long g_005fdf46;
extern "C" unsigned long g_005fdf60;
extern "C" unsigned long g_005fdf64;
ItemDataInfoDownUI::~ItemDataInfoDownUI()
{
  /* VPTR_FIX(R87): vptr=(&g_A+g_B)+8 ?? g_ ?? 0 ?? -> ???? SEGV?????? vptr???? */;
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~UIObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void ItemDataInfoDownUI::tick(float p1)
{
  int iVar1;
  int *piVar2;
  
  if ((*(int *)(((int)this) + 0x24) != 0) &&
     (iVar1 = func_0079e55c(*(int *)(((int)this) + 0x24),
                              *(undefined4 *)(&g_005fdf44 + g_005fdf64),
                              *(undefined4 *)(&g_005fdf46 + g_005fdf60),0), iVar1 != 0)) {
    piVar2 = (int *)((BLItemDataInfoDownView *)this)->getPresenter();
    (**(code **)(*piVar2 + 0x18))(piVar2,p1);
  }
  return;
}
