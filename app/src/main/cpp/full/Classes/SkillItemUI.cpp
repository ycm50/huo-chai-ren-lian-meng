#include "SkillItemUI.h"
#include "BLSkillItemView.h"
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
extern "C" unsigned long UNK_00683eea;
extern "C" unsigned long UNK_00683ff0;
extern "C" unsigned long UNK_00683ff2;
extern "C" unsigned long _UNK_00683ef8;
extern "C" unsigned long _UNK_0068400c;
extern "C" unsigned long _UNK_00684010;
extern "C" unsigned long g_00683eea;
extern "C" unsigned long g_00683ef8;
extern "C" unsigned long g_00683ff0;
extern "C" unsigned long g_00683ff2;
extern "C" unsigned long g_0068400c;
extern "C" unsigned long g_00684010;
SkillItemUI::~SkillItemUI()
{
  /* VPTR_FIX(R87): vptr=(&g_A+g_B)+8 ?? g_ ?? 0 ?? -> ???? SEGV?????? vptr???? */;
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~UIObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void SkillItemUI::tick(float p1)
{
  int iVar1;
  int *piVar2;
  
  if ((*(int *)(((int)this) + 0x24) != 0) &&
     (iVar1 = func_0079e55c(*(int *)(((int)this) + 0x24),
                              *(undefined4 *)(&g_00683ff0 + g_00684010),
                              *(undefined4 *)(&g_00683ff2 + g_0068400c),0), iVar1 != 0)) {
    piVar2 = (int *)((BLSkillItemView *)this)->getPresenter();
    (**(code **)(*piVar2 + 0x18))(piVar2,p1);
  }
  return;
}
